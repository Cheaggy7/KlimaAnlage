Tend = 300;

% Choose variant subsystems
vehTargetVehicleModelSwitch = 0; % 0=no target; 1=moving target vehicle
sim_inputs_switch = 1;  % 0=use internal signals; 1=use mdl inputs

% Set params of sim environment
vehSpeedInit = 110/3.6; % (m/s)

% Set input signals
accPedal = genSignalStep([0 20 Tend], [0.5 0 0], 'accPedal');
brkPedal = genSignalStep([0 Tend], [0 0], 'brkPedal');
enableACC = genSignalStep([0 20 Tend], [0 1 1], 'enableACC');
targetDistLevel = genSignalStep([0 Tend], [2 2], 'targetDistLevel');
% v_sRefExt = genSignalSine(0, Tend, accTs, 30/3.6, 150/3.6, 0.01, 0, 'v_sRefExt');
v_sRefExt = genSignalStep([0 Tend], [150 150]/3.6, 'v_sRefExt');

