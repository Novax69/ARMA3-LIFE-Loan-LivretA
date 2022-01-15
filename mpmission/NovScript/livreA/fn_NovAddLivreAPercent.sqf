#include "..\..\script_macros.hpp"
/*
    File: fn_NovAddLivreAPercent.sqf
    Author: Novax
	github : https://github.com/Novax69 <== Find my other scripts for arma here
	Date : 26/04/2020

    Description: Edit the livret A account every 30 minutes of gameplay can be tweaked with donorLevel

*/

private["_donorLevel","_percent","_useDonorLevel","_percentRate"];

_useDonorLevel = NOV_PARAMS(getNumber,"nov_useDonator");
_percentRate = NOV_PARAMS(getNumber,"nov_percentToAdd");


// Only works if the player is a donor
if(_useDonorLevel isEqualTo 1) then {
	_donorLevel = FETCH_CONST(life_donorlevel); // don't forget to enable life_donorlevel in config_master
	_percentRate = _percentRate + (_donorLevel / 4); // Add 1/4 of the donator Level Level 1 : 2.25 / 2 => 2.5 ... 
};

while { true } do {
	_percent = round((LIVREA * _percentRate) / 100); // Add _percentRate
	sleep 1800.0; // Every 30 min
	LIVREA = LIVREA + _percent;
	[getPlayerUID player,LIVREA] remoteExecCall ["DB_fnc_updateLivreA",RSERV];
	["livretAMessage",[format [(localize "STR_NOV_livretA_Increase"),[_percent] call life_fnc_numberText,[LIVREA] call life_fnc_numberText]]] call BIS_fnc_showNotification;
};

