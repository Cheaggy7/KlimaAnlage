function plotSimInputSignal(signame)
    y = evalin('base', signame);
    stairs(y.Time, squeeze(y.Data), 'LineWidth', 2)   
    xlabel('Time (s)')
    title(strrep(y.Name, '_', '\_'))
end