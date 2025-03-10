function plot_integration_test_results(out, testcase)

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
    plot(out.integration_sim)
    title("inside\_temperature")

    linkaxes(ax, 'x');
end

