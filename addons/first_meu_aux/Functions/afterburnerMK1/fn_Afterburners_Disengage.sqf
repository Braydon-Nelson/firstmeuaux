private _vehicle = vehicle player;
private _boostStatus = _vehicle getvariable ["OPTRE_Thruster_EngagedStatus",false];

private _MEUBurnList=["VES_D77HTCI_A","VES_D77HTCI","VES_AV14_AIM","VES_AV14_AGM","VES_AV14_Rockets","VES_AV22_Sparrowhawk","VES_AV22A_Sparrowhawk","VES_AV22B_Sparrowhawk","VES_AV22C_Sparrowhawk","VES_UH144S","VES_UH144S_A","VES_D77HTCIS_A","VES_D77HTCIS"];

if ((driver _vehicle != player) OR _boostStatus OR !(isEngineOn _vehicle) OR (isTouchingGround _vehicle) OR (_MEUBurnList findIf {_x isEqualTo typeOf _vehicle} < 0)) exitWith{};

private ["_vel", "_dir"];


_vehicle setvariable ["OPTRE_Afterburners_EngagedStatus",false,true];
hint parseText "<t color='#ff0000'>Afterburners [OFF]</t>";
if (speed _vehicle > 100) then {
_vel = velocity _vehicle;
_dir = direction _vehicle;
_vehicle setVelocity [
(_vel select 0) + (sin _dir * -25), 
(_vel select 1) + (cos _dir * -25), 
(_vel select 2)
];
};
sleep 2;
hintSilent "";

while {((!(_vehicle getvariable ["OPTRE_Thruster_EngagedStatus",false])) AND (speed _vehicle > 100))} do
{
	_vel = velocity _vehicle;
	_dir = direction _vehicle;
	_vehicle setVelocity [
	(_vel select 0) + (sin _dir * -25), 
	(_vel select 1) + (cos _dir * -25), 
	(_vel select 2)
	];

	sleep 0.5;
};