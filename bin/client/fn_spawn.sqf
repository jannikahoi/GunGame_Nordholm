scriptName "fn_spawn";

#define __filename "fn_spawn.sqf"

_spawnpoints = (getArray(missionConfigFile >> "CfgGungame" >> "Arenas" >> gg_map >> "spawns")) call BIS_fnc_arrayShuffle;;

private _myspawnpoint = [];

while {_myspawnpoint isEqualTo []} do {
	{
		if ((count (_x nearEntities ["Man", 8])) isEqualTo 0) exitWith {
			_myspawnpoint = _x;
		};
	} forEach _spawnpoints;

	if (_myspawnpoint isEqualTo []) then {
		sleep 1;
	};
};

// Set player pos
player setPosATL _myspawnpoint;

// Make player invincble
player allowDamage false;

// Give loadout
[] spawn gg_fnc_loadLevelLoadout;

[] spawn {
	sleep 2;
	player allowDamage true;
};
player switchCamera "EXTERNAL";

if (isNil "gg_handler_running") then { gg_handler_running = false; };

if !(gg_handler_running) then {
	gg_handler_running = true;

	[] spawn {

		waitUntil { (player getVariable ["ACE_isUnconscious", false]) OR !(alive player) };

		gg_handler_running = false;

		if !(isNil "life_last_shooter") then {
			if (life_last_shooter != player and !(isNull life_last_shooter)) then {
				[player] remoteExec ["gg_fnc_kill",life_last_shooter];
				
				[getPlayerUID life_last_shooter,getPlayerUID player] remoteExec ['db_fnc_logKill',2];
			};
		};

		player setDamage 1;
	};
};

