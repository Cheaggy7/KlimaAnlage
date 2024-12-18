% Testfall: Requirement 8: Die Regelung der Innentemperatur muss mit einem on-off button gestoppt und gestartet werden können

Tend = 100;

% Choose variant subsystems
sim_inputs_switch = 1;  % 0=use internal signals; 1=use mdl inputs

% Set params of sim environment
T_i_start = 10;                 % initiale Innentemperatur
T_a = 5;                        % initiale Außentemperatur

% Set input signals
on_off_button = genSignalStep([0 20 40 60 80 Tend], [1 0 0 0 1 1], 'on_off_button', 'boolean');                     % 1 = on (change temperature); 0 = off (don't change temperature)
target_temperature = genSignalStep([0 20 40 60 80 Tend], [16 16 25 25 25 25], 'target_temperature', 'uint16');      % (°C)


