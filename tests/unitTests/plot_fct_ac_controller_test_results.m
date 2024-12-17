function plot_b2b_ac_controller_test_results(testoutput, testcase)


f = figure;
set(f, 'Name', testcase);
clf
Nrows = 2;
Ncols = 2;
idx = 1;

% Plot inputs
ax(idx) = subplot(Nrows, Ncols, idx); idx=idx+1; hold on
plotSimInputSignal('current_temp')

ax(idx) = subplot(Nrows, Ncols, idx); idx=idx+1; hold on
plotSimInputSignal('sampled_target_temp')


% Plot outputs
ax(idx) = subplot(Nrows, Ncols, idx); idx=idx+1; hold on
plot(testoutput.power_cool_heat)
title('power\_cool\_heat')

ax(idx) = subplot(Nrows, Ncols, idx); idx=idx+1; hold on
plot(testoutput.power_cool_heat_SIL)
title('power\_cool\_heat\_SIL')

testoutput_power_cool_heat = int64(testoutput.power_cool_heat.Data);
testoutput_power_cool_heat_SIL = int64(testoutput.power_cool_heat_SIL.Data);

% Automatic checks
checks_passed = [];
checks_passed(1) = max(abs(testoutput_power_cool_heat(:,1) - testoutput_power_cool_heat_SIL(:,1))) < 1e-9;

if all(checks_passed)
    testresult_string = 'TESTRESULT: OK';
    testresult_color = 'green';
else
    testresult_string = 'TESTRESULT: NOT OK';
    testresult_color = 'red';
end
annotation('textbox', [.3 .9 .4 .1], 'String', testresult_string, 'EdgeColor', 'none', 'Color', testresult_color);





