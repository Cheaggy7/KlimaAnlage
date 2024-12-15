disp(['### Running ' mfilename '.m'])

% Run tests
results = runTest('test_ac_controller', 'b2b_ac_controller');
plot_b2b_ac_controller_test_results(results, 'b2b_ac_controller');

% Run functional test
% results = runTest('test_ac_controller', 'fct_ac_controller');
% plot_fct_ac_controller_test_results(results, 'fct_ac_controller');

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