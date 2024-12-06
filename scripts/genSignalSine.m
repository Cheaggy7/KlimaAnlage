% This is a function for generating a sine signal as input for some unit tests
% Function arguments are:
% 1: tStart = Start time of the signal
% 2: tEnd = End time of the signal
% 3: Ts = Sample time
% 4: amp = Amplitude of the sine signal
% 5: offs = OFfset of the sine signal
% 6: freq = Frequency of the sine signal
% 7: phase = Phase shift of the sine signal
% 8: name = Name of the time series
function ts = genSignalSine(tStart, tEnd, Ts, amp, offs, freq, phase, name, varargin)

    if ~isempty(varargin)
        datatype = varargin{1};
    else
        datatype = 'double';
    end

    t = tStart:Ts:tEnd;
    y = offs + amp * sin(2*pi*freq*t + phase);
    y = eval([datatype '(y)']);
    ts = timeseries(y, t);
    ts.Name = name;
    ts = setinterpmethod(ts, 'foh');
end