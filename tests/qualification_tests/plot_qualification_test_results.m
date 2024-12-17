function plot_qualification_test_results(out, testcase)

    f = figure;
    set(f, 'Name', testcase);
    clf
    Nrows = 3;
    Ncols = 4;
    idx = 1;
    
    % Plot inputs
    ax(idx) = subplot(Nrows, Ncols, idx); idx=idx+1; hold on
    plotSimInputSignal('accPedal')

    ax(idx) = subplot(Nrows, Ncols, idx); idx=idx+1; hold on
    plotSimInputSignal('brkPedal')

    ax(idx) = subplot(Nrows, Ncols, idx); idx=idx+1; hold on
    plotSimInputSignal('enableACC')

    ax(idx) = subplot(Nrows, Ncols, idx); idx=idx+1; hold on
    plotSimInputSignal('targetDistLevel')

    ax(idx) = subplot(Nrows, Ncols, idx); idx=idx+1; hold on
    plotSimInputSignal('v_sRefExt')

    % Plot outputs
    ax(idx) = subplot(Nrows, Ncols, idx); idx=idx+1; hold on
    plotSimOutputSignal(out, 'a_s')
    
    ax(idx) = subplot(Nrows, Ncols, idx); idx=idx+1; hold on
    plotSimOutputSignal(out, 'v_s')
    
    ax(idx) = subplot(Nrows, Ncols, idx); idx=idx+1; hold on
    plotSimOutputSignal(out, 'ACC_mode')
    
    ax(idx) = subplot(Nrows, Ncols, idx); idx=idx+1; hold on
    plotSimOutputSignal(out, 'T_drv')
    
    ax(idx) = subplot(Nrows, Ncols, idx); idx=idx+1; hold on
    plotSimOutputSignal(out, 'T_brk')
    
    ax(idx) = subplot(Nrows, Ncols, idx); idx=idx+1; hold on
    plotSimOutputSignal(out, 'd_T')

    linkaxes(ax, 'x');
end

