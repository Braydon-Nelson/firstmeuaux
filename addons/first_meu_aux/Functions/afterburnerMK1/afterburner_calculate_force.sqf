
params["_unit"];

_vehicle=vehicle _unit;
_vehicleType=typeOf _vehicle;
_returnVal=6562500;
if((isNull objectParent _unit) ) exitWith {0};
_canUserAfterburner=[_vehicleType] call tcw_fnc_afterburner_can_use;

if( !_canUserAfterburner) exitWith {0};

_vehicleForceArray=["CfgVehicles",_vehicleType,"tcw_afterburner_force_array",[]] call tcw_fnc_get_config_attribute;

if(count _vehicleForceArray ==0) exitWith{_returnVal};
_returnVal=((_vehicleForceArray select 0) select 2);

for "_i" from 0 to (count _vehicleForceArray) do
{

    _lowVelo=_vehicleForceArray select _i select 0;
    _highVelo=_vehicleForceArray select _i select 1;
    _force=_vehicleForceArray select _i select 2;
    _speed=speed _vehicle;

    if((_speed> _lowVelo) && {_speed<=_highVelo}) then
    {
    	_returnVal = _force;
    	_i=(count _vehicleForceArray) +1;
    };
};

_returnVal

