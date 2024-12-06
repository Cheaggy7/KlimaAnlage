function plotSimOutputSignal(out, signame)
    signames = {out.yout.signals.blockName};
    for i=1:length(signames)
        if contains(signames{i}, signame)
            stairs(out.tout, out.yout.signals(i).values, ... 
                'DisplayName', out.yout.signals(i).blockName, ...
                'LineWidth', 2)    
            xlabel('Time (s)')
            title(out.yout.signals(i).blockName)
        end
    end
end