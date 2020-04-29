#include "..\..\script_macros.hpp"
/*
	File : fn_livretAMenu.sqf
	Author : Novax
	github : https://github.com/Novax69 <== Find my other scripts for arma here
	Date : 26/04/2020

	Description : 
		Create a menu similar to ATM but displaying only the livret A shit

*/

private["_depositBtn","_depositLimit","_useDonorLevel","_donorAddedLimit"];

_depositLimit = LIFE_SETTINGS(getNumber,"nov_depositLimit");
_useDonorLevel = LIFE_SETTINGS(getNumber,"nov_useDonator");
_donorAddedLimit = LIFE_SETTINGS(getNumber,"nov_numberAddedDonor");

if(_useDonorLevel isEqualTo 1) then {
	_donorLevel = FETCH_CONST(life_donorlevel); // don't forget to enable life_donorlevel in config_master
	_depositLimit = _depositLimit + (_donorAddedLimit * _donorLevel); // Bigger Limit for donators
};


if (!life_use_atm) exitWith {
    hint format [localize "STR_Shop_ATMRobbed",(LIFE_SETTINGS(getNumber,"noatm_timer"))];
};

if (!dialog) then {
    if (!(createDialog "Life_livretA_management")) exitWith {};
};

disableSerialization;

_depositBtn = CONTROL(690001,690013);

if(LIVREA > _depositLimit) then {
	_depositBtn ctrlEnable false; //can't deposit more than _depositLimit
} else {
	_depositBtn ctrlEnable true; //Just in case
};

CONTROL(690001,690012) ctrlSetStructuredText parseText format ["<img size='1.7' image='icons\ico_bank.paa'/> $%1<br/><img size='1.6' image='icons\ico_money.paa'/> $%2",[LIVREA] call life_fnc_numberText,[CASH] call life_fnc_numberText];
