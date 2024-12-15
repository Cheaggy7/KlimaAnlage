function results = runTest(mdl, testcase)

    disp(['### Running testcase: ' testcase])

    % Load default parameters
    runInBaseAndCallerWorkspace('load_params');

    % load testcase data
    clearvars Ts
    eval(testcase);
    runInBaseAndCallerWorkspace(testcase); 

    % Get actual config set of sim model
    open_system(mdl, 'loadonly');
    mdlConfig = getActiveConfigSet(mdl);
    
    % Make a copy of the config and change some stuff
    simConfig = copy(mdlConfig);
    
    % Set input signals
    rootHdl = get_param(mdl, 'Handle');
    sysIns  = find_system(rootHdl, 'SearchDepth', 1, 'BlockType', 'Inport');
    inportNames  = get_param(sysIns, 'Name');
    ExternalInputs = '';
    for i=1:length(inportNames)
        ExternalInputs = [ExternalInputs ' ' inportNames{i}];
        if exist('Ts', 'var')
            set_param([mdl '/' inportNames{i}], 'SampleTime', num2str(Ts)); 
            set_param([mdl '/' inportNames{i}], 'Interpolate', 'off'); 
        end
    end
    set_param(simConfig, "LoadExternalInput", true);
    set_param(simConfig, "ExternalInput", ExternalInputs);    

    % Simulation settings
    if exist('Ts', 'var')
        set_param(simConfig, "FixedStep", num2str(Ts));
    end
    set_param(simConfig, "StopTime", num2str(Tend));

    %set_param(simConfig, 'SolverType', 'Fixed-step');
    %set_param(simConfig, 'SolverName', 'FixedStepDiscrete');
    %set_param(simConfig, "FixedStep", num2str(Ts));

    % Code Coverage
    set_param(simConfig, "CovMetricStructuralLevel", 'MCDC');
    set_param(simConfig, "CovEnable", true);
    set_param(simConfig, "CovEnableCumulative", true);
    set_param(simConfig, "CovCumulativeReport", true);
    set_param(simConfig, "CovSaveCumulativeToWorkspaceVar", true);
    set_param(simConfig, "CovCumulativeVarName", "covCumulativeData");
    set_param(simConfig, "CovOutputDir", 'output/coverage');

    % Configure simulation
    %cfgName = ['Config' num2str(round(rand(1)*1e4))];
    %set_param(simConfig, 'Name', cfgName);
    %attachConfigSet(mdl, simConfig);
    %setActiveConfigSet(mdl, cfgName);

    % Run simulation
    results = sim(mdl, simConfig);

    %assignin('caller', 'out', out); % make outputs accessible from caller workspace
    %assignin('base', 'out', out); % make outputs accessible from base workspace

    %close_system(mdl, 0);
end
