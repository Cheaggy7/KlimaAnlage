C = 6000;           % J/°C
R = 0.3;            % °C/W
K_p = 1000;         % Regler parameter
T_n = C * R;        % Regler parameter

T_i_start = 10;     % Starttemperatur im Inenraum 
T_a = 5;            % Außentemperatur
T_s = 20;           % Zieltemperatur zum testen 
UpperUserTemp = 28;
LowerUserTemp = 16;

Q_max = 5;          % maximale Heizleistung 
Q_min = -5;         % minimale Heizleistung 
Temp_max = 50;      % maximal zulässige Betriebstemperatur 
Temp_min = -20;     % minimale zulässige Betriebstemperatur 
%adc_conv = (UpperUserTemp - LowerUserTemp); -> relevant für das Nutzen auf dem Board für einen Potentiometer (ADC converter)

% general parameters
acTs = 100e-3; % Sample time of AC (air conditioning)
