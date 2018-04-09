scriptName "initPlayerLocal.sqf";
waitUntil {(time > 0) and {!isNull player}};
player enableFatigue false;
player enableStamina false;
player allowSprint true;
player setCustomAimCoef 0.15;