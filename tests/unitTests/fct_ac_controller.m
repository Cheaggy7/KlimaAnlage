Ts = acTs; % sample time of ACC is used
Tend = 10;

t = 0:Ts:Tend;

sampled_target_temp = genSignalStep([0 10], [25 25], 'sampled_target_temp', 'int16'); 

current_temp = genSignalStep([0 2 5 7 9], [25 -20 50 25 5], 'current_temp', 'int16');
