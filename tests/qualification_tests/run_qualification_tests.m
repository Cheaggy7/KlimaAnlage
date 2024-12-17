disp(['### Running ' mfilename '.m'])

% Run test 1
results = runTest('Klimaanlage_SIL', 'qualification_test_01');
plot_qualification_test_results(results, 'qualification_test_01');

% Run test 2
% results = runTest('Klimaanlage_SIL', 'qualification_test_02');
% plot_qualification_test_results(results, 'qualification_test_02');


% Coverage report
if exist('generateCoverageReport', 'var')
    if generateCoverageReport
        disp('### Generating coverage report...')
        oldpath = pwd;
        covReportDir = 'output/coverage';
        mkdir(covReportDir)
        cd(covReportDir)
        cvhtml(['cov_' mfilename '_report.html'], covCumulativeData); % covCumulativeData is written after the simulation
        cd(oldpath)
    end
end

disp('### Done!')

%% local functions
% function runTest(testcase)
% 
%     disp(['### Running testcase: ' testcase])
% 
%     % Load default parameters
%     runInMultipleWorkspaces('load_params');
% 
%     % load testcase data
%     runInMultipleWorkspaces(testcase); 
% 
%     % Get actual config set of sim model
%     mdl = "ACC_SIL";
%     open_system(mdl, 'loadonly');
%     mdlConfig = getActiveConfigSet(mdl);
%     
%     % Make a copy of the config and change some stuff
%     simConfig = copy(mdlConfig);
%     
%     % Set input signals
%     rootHdl = get_param(mdl, 'Handle');
%     sysIns  = find_system(rootHdl, 'SearchDepth', 1, 'BlockType', 'Inport');
%     inportNames  = get_param(sysIns, 'Name');
%     ExternalInputs = '';
%     for i=1:length(inportNames)
%         ExternalInputs = [ExternalInputs ' ' inportNames{i}];
%     end
%     set_param(simConfig, "LoadExternalInput", true);
%     set_param(simConfig, "ExternalInput", ExternalInputs);    
% 
%     % Simulation duration
%     set_param(simConfig, "StopTime", num2str(Tend));
% 
%     % Code Coverage
%     set_param(simConfig, "CovMetricStructuralLevel", 'MCDC');
%     set_param(simConfig, "CovEnable", true);
%     set_param(simConfig, "CovEnableCumulative", true);
%     set_param(simConfig, "CovCumulativeReport", true);
%     set_param(simConfig, "CovSaveCumulativeToWorkspaceVar", true);
%     set_param(simConfig, "CovCumulativeVarName", "covCumulativeData");
%     set_param(simConfig, "CovOutputDir", 'output/coverage');
%     set_param(simConfig, "CovSFcnEnable", true);
% 
%     % Run simulation
%     out = sim(mdl,simConfig);
% 
%     bdclose(mdl); % close model
% 
%     assignin('base', 'out', out); % make outputs accessible from base workspace
% 
% end
% 
% function runInMultipleWorkspaces(paramfile)
%     evalin('caller', [paramfile ';']);
%     evalin('base', [paramfile ';']);
% end
