private _cfg = missionconfigfile >> "Vehicles" >> "Matrix";
private _vehicles = entities "Car";
private _playerVehicle = vehicle player;

private["_variants"];


{
	if (_playerVehicle != _x) then
	{
		_variants = [_cfg >> typeOf _x] call BIS_fnc_getCfgDataArray;

		if (count _variants > 0) then
		{
			[_x,selectRandom _variants] call BIS_fnc_camp_setupVehicle;
		};
	};
}
forEach _vehicles;
