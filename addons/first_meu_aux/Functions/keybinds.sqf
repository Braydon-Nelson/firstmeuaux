#include "\a3\editor_f\Data\Scripts\dikCodes.h"


[["1st MEU","Thruster"],"Boost On",["Boost On","Turn Boost on"],{[player] spawn tcw_fnc_Afterburners_Engage;},"",[DIK_J, [false, true, false]],false] call cba_fnc_addKeybind;

[["1st MEU","Thruster"],"Boost Off",["Boost Off","Turn Boost off"],{[player] spawn tcw_fnc_Afterburners_Disengage;},"",[DIK_J, [false, true, false]],true] call cba_fnc_addKeybind;