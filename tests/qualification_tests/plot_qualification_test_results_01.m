% Testfall: Requirement 3: Die Software muss die Innenraumtemperatur auf ±1°C der eingestellten Zieltemperatur halten

function plot_qualification_test_results(out, testcase)

    f = figure;
    set(f, 'Name', testcase);
    clf
    Nrows = 2;
    Ncols = 2;
    idx = 1;
    
    % Plot inputs
    ax(idx) = subplot(Nrows, Ncols, idx); idx=idx+1; hold on
    plotSimInputSignal('on_off_button')

    ax(idx) = subplot(Nrows, Ncols, idx); idx=idx+1; hold on
    plotSimInputSignal('target_temperature')

    % Plot outputs
    ax(idx) = subplot(Nrows, Ncols, idx); idx=idx+1; hold on
    plot(out.inside_tmp)
    title("inside\_temperature")
        
    linkaxes(ax, 'x');

    % Automatic checks
    checks_passed = [];
    checks_passed(1) = out.inside_tmp.Data(180,1) - out.target_tmp.Data(180,1) < 1e-9;        % die eingestellte Temperatur und Innentemperatur sollten bei 16°C liegen
    checks_passed(2) = out.inside_tmp.Data(1260,1) - out.target_tmp.Data(1260,1) < 1e-9;        % die eingestellte Temperatur und Innentemperatur sollten bei 10°C liegen

    if all(checks_passed)
    testresult_string = 'TESTRESULT: OK';
    testresult_color = 'green';
    else
        testresult_string = 'TESTRESULT: NOT OK';
        testresult_color = 'red';
    end
    annotation('textbox', [.3 .9 .4 .1], 'String', testresult_string, 'EdgeColor', 'none', 'Color', testresult_color);
end

