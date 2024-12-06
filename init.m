disp(['### Runing file ' mfilename '.m'])

% Cleanup Matlab
close all
clear

% Add some folder to the MATLAB path so that MATLAB can find the files inside of them
addpath lib
addpath params
addpath req
addpath img
addpath scripts
addpath(genpath('tests'))

% Folder for all auto-generated files
generalOutputFolder = 'output';

% Set default simulation cache folder
slOutputFolder = [generalOutputFolder '/slprj'];
createDir([pwd '/' slOutputFolder])
set_param(0, 'CacheFolder', slOutputFolder);

% Set default code generation folder
codeGenOutputFolder = [generalOutputFolder '/codegen'];
createDir([pwd '/' codeGenOutputFolder])
set_param(0, 'CodeGenFolder', codeGenOutputFolder);

% Set default code generation folder structure
set_param(0, 'CodeGenFolderStructure', 'ModelSpecific'); % code gen folder named after model name

% Load model parameter
load_params;

% Rebuild SIL
regenerateSIL('tests/unittests/test_ac_controller', 'b2b_ac_controller', 'ac_controller', 'tests/unittests/test_ac_controller', 'ac_controller_SIL');
%regenerateSIL('tests/integration_test/ACC', 'qualification_test_01', 'ACC_ControlUnit', 'tests/qualification_tests/ACC_SIL', 'ACC_ControlUnit_SIL');


%% local functiom
function createDir(newFolder)
    if ~exist(newFolder, 'dir')
        mkdir(newFolder)
    end
end