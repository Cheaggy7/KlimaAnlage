clc

disp(['### Running ' mfilename '.m'])

% Run tests
results = runTest('Klimaanlage', 'integration_test_01');
plot_integration_test_results(results, 'integration_test_01');

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