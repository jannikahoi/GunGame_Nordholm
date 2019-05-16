/*
 * Author: RealLifeRPG Team
 *
 * Description:
 * Logs Kill to DB
 *
 * Arguments:
 * 0: STRING - pid of killer
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * ['1234','4321'] remoteExec ['db_fnc_kill',2];
 *
 */
params[
	["_pid","",[""]],
	["_victim_pid","",[""]]
];

call compile ("extDB3" callExtension format ["1:%1:log_kill:%1:%2", gg_sql_id, _pid,_victim_pid]);