C = 6000;   % J/°C
R = 0.3;    % °C/W
K_p = 5000;
T_n = C * R;
T_i_start = 10;
T_a = 5;
T_s = 20;
Quant = 1024;
UpperUserTemp = 28;
LowerUserTemp = 16;

Q_max = 5;
Q_min = -5;
Temp_max = 50;
Temp_min = -20;
adc_conv = (UpperUserTemp - LowerUserTemp);

% general parameters
acTs = 100e-3; % Sample time of AC (air conditioning)
