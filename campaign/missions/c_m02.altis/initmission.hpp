//Enable radio, protocol and environment
enableRadio false;
enableSentences false;
enableEnvironment false;

//Fade screen
["BIS_blackStart", false] call BIS_fnc_blackOut;

//Enable sound and music
0 fadeSound 0.00;
0 fadeMusic 0.00;
0 fadeRadio 0.00;
0 fadeSpeech 0.00;

//Cinema borders
[0, 0, false, false] call BIS_fnc_cinemaBorder;

//Do not allow units to flee
{
	_x allowFleeing 0;
} forEach allGroups;

// Start ambient combat sounds
[] execVM "\A3\Missions_F_EPA\Campaign_shared\Functions\AmbientLife\fn_camp_ambientCombatSounds.sqf";

// Debug convoy vehicles
if (cheatsEnabled) then
{
	addMissionEventHandler ["EachFrame",
	{
		if (missionNamespace getvariable ["_debug", false]) then
		{
			{
				private _pos = getPosASLVisual _x;
				_pos set [2, (_pos select 2) + 6.0];
				_pos = ASLToAGL _pos;

				private _text = format ["%1 : %2 : %3", _x, canMove _x, round (speed _x)];

				drawIcon3D ["", [1,0,0,1], _pos, 0, 0, 0, _text, 1, 0.03, "PuristaMedium"];
				drawLine3D [_pos vectorAdd [0,0,-0.5], ASLToAGL (getPosASLVisual _x), [1,0,0,1]];
			}
			forEach (missionNamespace getVariable ["BIS_convoyVehicles", []]);
		};
	}];
};