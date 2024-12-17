Ts = acTs; % sample time of ACC is used
Tend = 10;

t = 0:Ts:Tend;

sampled_target_temp = genSignalStep([0 10], [25 25], 'sampled_target_temp', 'int16'); 

current_temp = genSignalStep([0 3 4 5 7 8 9], [5 10 15 2 5 1 1], 'current_temp', 'int16'); 
