Tend = 60;

% Choose variant subsystems
sim_inputs_switch = 1;  % 0=use internal signals; 1=use mdl inputs

% Set params of sim environment
T_i_start = 10;
T_a = 5;

% Generate input signals
on_off_button = genSignalStep([0 20 40 Tend], [1 0 1 1], 'on_off_button', 'boolean');                              % (bool)
target_temperature = genSignalStep([0 20 40 Tend], [16 20 24 28], 'target_temperature', 'uint16');      % (°)
