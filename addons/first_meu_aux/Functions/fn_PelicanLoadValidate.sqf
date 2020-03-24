_pelican = _this select 0;
_veh = _this select 1;
_loaded = false;
	
switch true do {
		
	case (_veh isKindOf "OPTRE_M808B_base"):
	{
		_veh attachTo [_pelican,[-0,-7.6,-0.935527]];
		_veh setDir 180; 
		_loaded = true; 
	};
	case (_veh isKindOf "OPTRE_M12A1_LRV" or _veh isKindOf "OPTRE_M12_LRV" or _veh isKindOf "OPTRE_M12G1_LRV" or _veh isKindOf "OPTRE_M12R_AA" or _veh isKindOf "OPTRE_M12_FAV_APC" or _veh isKindOf "OPTRE_M12_FAV"):
	{
		_veh attachTo [_pelican,[0.15,-5,.44]]; 
		_loaded = true;  		
	};
	case (_veh isKindOf "OPTRE_M813_TT"):
	{
		_veh attachTo [_pelican,[0,-5,.25]];  
		_loaded = true;  
	};
	case (_veh isKindOf "OPTRE_M413_base"):
	{
		_veh attachTo [_pelican,[0,-3.6,0.30]];  
		_loaded = true;  
	};
	case (_veh isKindOf "OPTRE_EscapePod"):
	{
		_veh attachTo [_pelican,[0,-6,-.80]]; 
		_loaded = true; 
	};
	case (_veh isKindOf "VES_IFV76_A"):
	{
		_veh attachTo [_pelican,[0,-4.6,.30]]; 
		_loaded = true;  
	};
	case (_veh isKindOf "Truck_03_base_F"):
	{
		_veh attachTo [_pelican,[0,-5,-.4]]; 
		_loaded = true;  
	};
	case (_veh isKindOf "B_Boat_Armed_01_minigun_F"):
	{
		_veh attachTo [_pelican,[0,-6.5, -0.37105]];
		_veh setDir 180; 
		_loaded = true; 
	};
	case (_veh isKindOf "B_Boat_Transport_01_F"):
	{
		_veh attachTo [_pelican,[0,-5,.40]];
		_loaded = true; 
	};
	case (_veh isKindOf "optre_hornet_base"):
	{
		_veh attachTo [_pelican,[0,-5,-0.8]];  
		_loaded = true;  
	};
    //memes start here
    case (_veh isKindOf "I_APC_Wheeled_03_cannon_F"):
	{
		_veh attachTo [_pelican,[-0.414768,-4.70731,-0.554724]];  
		_loaded = true;  
	};
    case (_veh isKindOf "B_TMBT_01_arty_F" or _veh isKindOf "B_MBT_01_arty_F"):
	{
		_veh attachTo [_pelican,[0,-7,-0.6]];
        _veh setDir 180;
		_loaded = true;  
	};
    case (_veh isKindOf "B_T_APC_Tracked_01_AA_F" or _veh isKindOf "B_APC_Tracked_01_AA_F"):
    {
		_veh attachTo [_pelican,[-0.00107157,-6.65556,-0.809239]];
				_veh setDir 180;
		_loaded = true;
	};
    case (_veh isKindOf "itc_land_b_SPH_Sholef2" or _veh isKindOf "itc_land_b_t_SPH_Sholef2"):
    {
		_veh attachTo [_pelican,[-0.0311756,-6.65556,-0.90342]];
        _veh setDir 180;
		_loaded = true;
    };
    case (_veh isKindOf "B_APC_Tracked_01_CRV_F" or _veh isKindOf "B_T_APC_Tracked_01_CRV_F"):
    {
		_veh attachTo [_pelican,[0.0430558,-4.81432,-0.456545]];
		_loaded = true;
    };
    case (_veh isKindOf "B_Lifeboat"):
    {
		_veh attachTo [_pelican,[0.0181665,-3.41999,0.530018]];
		_loaded = true;
    };
};
	
if (_loaded) then 
{
	_pelican setVariable ["OPTRE_Pelican_AttachedToVehiclesEffect", [vehicle player], true];
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>MAGLOCK SUCCESSFUL!</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true];
	playSound "FD_Finish_F";
	_pelican addEventHandler ["Killed",
	{
		params ["_unit", "_killer", "_instigator", "_useEffects"];
		{
			if !(_x isKindof "OPTRE_Static_M247H_Shielded_Tripod") then {detach _x;};
		} forEach attachedObjects _unit;
	}];
} else {
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>CARGO UNSUPPORTED!</t><br/>-------------------------------------------<br/>Your vehicle has not been design to be mag lifted by the pelican.", "PLAIN DOWN", -1, true, true];
	//hint "Your vehicle has not been designed to be lifted via maglock. Operation aborted.";
	playSound "FD_CP_Not_Clear_F";
};