params["_whereToLook","_classNameToLook",["_configAttribute","",["string"]],["_defaultVal",nil,[]]];

if(( _whereToLook isEqualTo "")  || { _classNameToLook  isEqualTo ""} || { _configAttribute  isEqualTo ""}) exitWith {_defaultVal};

_value=[(configFile >> _whereToLook >> _classNameToLook),_configAttribute,_defaultVal] call BIS_fnc_returnConfigEntry;

_value
