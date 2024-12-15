clc
disp(['### Running ' mfilename '.m'])

% Initialize (in case if not done previously)
init;

% Settings
generateCoverageReport = false;

% Run unit tests
run_unit_tests;

% Run integration tests
run_integration_tests;

% Run qualification tests
run_qualification_tests;
