function regenerateSIL(mdlForSFct_fullpath, paramFile, subsysForSFct, SILBlock_fullpath, targetSubsysForSFct)

[mdlForSFct_pathOnly, mdlForSFct_nameOnly] = fileparts(mdlForSFct_fullpath);
[SILBlock_pathOnly, nameOfSILBlock] = fileparts(SILBlock_fullpath);

srcAndTargetModelAreSame = strcmp(mdlForSFct_pathOnly, SILBlock_pathOnly);

%% Open/load model
load_system(mdlForSFct_fullpath);

%% disable the SIL subsystem in the test model to avoid error from missing files
if srcAndTargetModelAreSame
    set_param([nameOfSILBlock '/' targetSubsysForSFct], 'Commented', 'on') 
end

%% Adapt some settings BEFORE code generation
% set_param(mdlForSFct_nameOnly, 'SystemTargetFile', 'ert.tlc');
set_param(mdlForSFct_nameOnly, 'SystemTargetFile', 'rtwsfcn.tlc');
% set_param(mdlForSFct_nameOnly, 'SimulationMode', 'Software-in-the-Loop (SIL)');
% set_param(mdlForSFct_nameOnly, 'SimulationCommand', 'Update');
% set_param(mdlForSFct_nameOnly, 'CreateSILPILBlock', 'SIL');

%% Generate the sfunction subsystem
evalin('base', [paramFile ';']); % some parameters must be set so that the model can be compiled at all
sil_subsystem = slbuild([mdlForSFct_nameOnly '/' subsysForSFct]);

%% Revert some settings AFTER code generation
% set_param(mdlForSFct_nameOnly, 'CreateSILPILBlock', 'None');
set_param(mdlForSFct_nameOnly, 'SimulationMode','normal')
if srcAndTargetModelAreSame
    set_param([nameOfSILBlock '/' targetSubsysForSFct], 'Commented', 'off')
end

%% Copy generated sfcn block to target model
generatedSILModel = get_param(sil_subsystem, 'Parent');
if ~srcAndTargetModelAreSame
    load_system(SILBlock_fullpath);
end
replace_block(nameOfSILBlock, 'Name', targetSubsysForSFct, [generatedSILModel '/' subsysForSFct],'noprompt');
if ~srcAndTargetModelAreSame
    close_system(mdlForSFct_nameOnly, 0);
end
close_system(generatedSILModel, 0); % close auto-generated SIL model (no save)
close_system(nameOfSILBlock, 1); % close with saving
addpath(genpath('output/codegen')); % Add generated code to Matlab path


