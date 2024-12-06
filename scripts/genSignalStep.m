function ts = genSignalStep(t, y, name, varargin)

    if ~isempty(varargin)
        datatype = varargin{1};
    else
        datatype = 'double';
    end
    
    y = eval([datatype '(y)']);
    ts = timeseries(y, t);
    ts.Name = name;
    ts = setinterpmethod(ts, 'zoh');
end