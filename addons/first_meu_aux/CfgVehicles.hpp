class CfgVehicles
{
    #include "CfgSupplyPods.hpp"
    
    class Helicopter_Base_H;
    class OPTRE_falcon_base;
    class OPTRE_UNSC_falcon_unarmed;
    class OPTRE_Pelican_armed;
    class OPTRE_Pelican_unarmed;
    class VES_AV22_Sparrowhawk_Base;
    class VES_AV22_Sparrowhawk;
    class B_APC_Tracked_01_base_F;
    class OPTRE_S12_SOLA_Jetpack;
    class StaticMGWeapon;
    class OPTRE_ANPRC_515;
    class OPTRE_ANPRC_521_Black;
    class OPTRE_ILCS_Rucksack_Heavy;
    class O_Soldier_SL_F;
    class O_Soldier_F;
    class O_Soldier_GL_F;
    class O_Soldier_AR_F;
    class O_Soldier_M_F;
    class O_Soldier_LAT_F;
    class O_Medic_F;
    class O_Officer_F;
    class O_Engineer_F;
    class O_Soldier_TL_F;
    class OPTRE_UNSC_Soldier_Base;
    class B_Soldier_base_F;
    class I_Soldier_base_F;
    class O_Soldier_base_F;
    class I_G_Soldier_AR_F;
    class I_G_Soldier_LAT_F;
    class I_officer_F;
    class B_RangeMaster_F;
    class C_man_hunter_1_F;
    class I_G_Soldier_M_F;
    class I_G_Soldier_A_F;
    class B_fieldpack_blk;
    class OPTRE_FC_Elite_Undersuit;
    class UniformItem;
    class Item_Base_F;
    class ACE_morphineItem;
    class OPTRE_UNSC_hornet_CAP;
    class OPTRE_UNSC_hornet_CAS;
    class OPTRE_UNSC_hornet;
	class OPTRE_M313_UNSC;
    class B_parachute;
    class VES_IFV76;
    class VES_IFV76_A;
    class OPTRE_M808B_UNSC;
    class VES_M808B_MBT;
    class VES_M12_APC;
    class OPTRE_ILCS_Rucksack_Black;
    class textureSources;
    class Turrets;
    class MainTurret;
    class RCWSOptics;
    class OPTRE_BiofoamItem; 
    class OPTRE_MediGelItem;
    class ACE_tourniquetItem;
    class ItemInfo;
    class OPTRE_CTF_Flag_Base;
    class ACE_SelfActions;
    class Man;
	class House;


    class MEU_SCORPION: VES_M808B_MBT
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        dlc = "1stMEU"
        author = "Romeo";
        displayName = "[MEU] M808B Scorpion"
        tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 30000;
        faction = "MEU_UNSC";
        side = 1;
		editorCategory = "MEU_cat_gnd";
		crew = "VES_Rifleman_MA5B_MAR";	
	};
    class MEU_IFV : VES_IFV76
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[MEU] APC-76 Honeybadger";
        tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 30000;
        transportSoldier = 16;
        faction = "MEU_UNSC";
		side = 1;
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
        editorCategory = "MEU_cat_gnd";
        editorsubCategory = "MEU_sub_apc";  
    };
    class MEU_IFV_A : VES_IFV76_A
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[MEU] IFV-76 Honeybadger";
        tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 30000;
        transportSoldier = 12;
        faction = "MEU_UNSC";
		side = 1;
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
        editorCategory = "MEU_cat_gnd";
        editorsubCategory = "MEU_sub_ifv";
        visionMode[] = {"Normal","TI","NVG"};
        thermalMode[] = {0,1,2,3,4,5};
        class Turrets: Turrets
		{
            visionMode[] = {"Normal","TI","NVG"};
            thermalMode[] = {0,1,2,3,4,5};
			class MainTurret: MainTurret
			{
                visionMode[] = {"Normal","TI","NVG"};
                thermalMode[] = {0,1,2,3,4,5};
                class Viewoptics : RCWSOptics
                {
                    visionMode[] = {"Normal","TI","NVG"};
                    thermalMode[] = {0,1,2,3,4,5};
                };
            };
        };
    };
    class MEU_M12_AP : VES_M12_APC
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[MEU] M12 AP Warthog";
        tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 30000;
        ace_cargo_size = 10;
        faction = "MEU_UNSC";
		side = 1;
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
        editorCategory = "MEU_cat_gnd";
        editorsubCategory = "MEU_sub_car";
    };
    //more meds
    class MEU_compat_IbuprofenItem: ACE_morphineItem 
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Ibuprofen";
        author = "1st MEU Mark";
        vehicleClass = "Items";
        class TransportItems 
        {
            item_xx(MEU_compat_Ibuprofen,1);
        };
        mass = 20
    };
    class MEU_BiofoamItem: OPTRE_BiofoamItem
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[P] Biofoam";
        author = "Article 2 Studios edits by mark";
        vehicleClass = "Items";
        class TransportItems
        {
            item_xx(MEU_Biofoam,1);
        };
        mass = 20
    };
    class MEU_MediGelItem: OPTRE_MediGelItem
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[P] Medigel";
        author = "Article 2 Studios edits by mark";
        vehicleClass = "Items";
        class TransportItems
        {
            item_xx(MEU_Medigel,1);
        };
        mass = 20
    };
    class MEU_tourniquetItem: ACE_tourniquetItem
    {
        scope = 1;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[WIP] Suit Constriction System";
        vehicleClass = "Items";
        class TransportItems 
        {
            item_xx(MEU_tourniquet,1);
        };
        mass = 20
    };
    // end meds
    class OPTRE_AV22_Sparrowhawk_Base: Helicopter_Base_H
    {
        editorCategory = "MEU_cat_air";
        editorsubCategory = "MEU_sub_rot";
        tf_range=30000;
        weapons[] = {"CMFlareLauncher_Singles"};
		magazines[] = {"240Rnd_CMFlare_Chaff_Magazine"};
        class pilotCamera
        {
            class OpticsIn
            {
                class Wide
                {
                    opticsDisplayName = "WFOV";
                    initAngleX = 0;
                    minAngleX = 0;
                    maxAngleX = 0;
                    initAngleY = 0;
                    minAngleY = 0;
                    maxAngleY = 0;
                    initFov = "(75 / 120)";
                    minFov = "(75 / 120)";
                    maxFov = "(75 / 120)";
                    directionStabilized = 1;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                };
                class Medium: Wide
                {
                    opticsDisplayName = "MFOV";
                    initFov = "(14.4 / 120)";
                    minFov = "(14.4 / 120)";
                    maxFov = "(14.4 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
                class Narrow: Wide
                {
                    opticsDisplayName = "NFOV";
                    initFov = "(4.8 / 120)";
                    minFov = "0.01";
                    maxFov = "(4.8 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
                };
            };
        };
        memoryPointDriverOptics = "gunnerview";
    };  
    class VES_AV22_Sparrowhawk_Base_F: VES_AV22_Sparrowhawk_Base
    {
        editorCategory = "MEU_cat_air";
        editorsubCategory = "MEU_sub_rot";
        tf_range=30000;
        weapons[] = {"CMFlareLauncher_Singles"};
		magazines[] = {"240Rnd_CMFlare_Chaff_Magazine"};
        class pilotCamera
        {
            class OpticsIn
            {
                class Wide
                {
                    opticsDisplayName = "WFOV";
                    initAngleX = 0;
                    minAngleX = 0;
                    maxAngleX = 0;
                    initAngleY = 0;
                    minAngleY = 0;
                    maxAngleY = 0;
                    initFov = "(75 / 120)";
                    minFov = "(75 / 120)";
                    maxFov = "(75 / 120)";
                    directionStabilized = 1;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                };
                class Medium: Wide
                {
                    opticsDisplayName = "MFOV";
                    initFov = "(14.4 / 120)";
                    minFov = "(14.4 / 120)";
                    maxFov = "(14.4 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
                class Narrow: Wide
                {
                    opticsDisplayName = "NFOV";
                    initFov = "(4.8 / 120)";
                    minFov = "0.01";
                    maxFov = "(4.8 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
                };
            };
        };
        memoryPointDriverOptics = "gunnerview";
    };
	class OPTRE_UNSC_falcon: OPTRE_falcon_base
    {
        editorCategory = "MEU_cat_air";
        editorsubCategory = "MEU_sub_rot";
        tf_range = 30000;
        class pilotCamera
        {
            class OpticsIn
            {
                class Wide
                {
                    opticsDisplayName = "WFOV";
                    initAngleX = 0;
                    minAngleX = 0;
                    maxAngleX = 0;
                    initAngleY = 0;
                    minAngleY = 0;
                    maxAngleY = 0;
                    initFov = "(75 / 120)";
                    minFov = "(75 / 120)";
                    maxFov = "(75 / 120)";
                    directionStabilized = 1;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                };
                class Medium: Wide
                {
                    opticsDisplayName = "MFOV";
                    initFov = "(14.4 / 120)";
                    minFov = "(14.4 / 120)";
                    maxFov = "(14.4 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
                class Narrow: Wide
                {
                    opticsDisplayName = "NFOV";
                    initFov = "(4.8 / 120)";
                    minFov = "0.01";
                    maxFov = "(4.8 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
                };
            };
            minTurn = -90;
            maxTurn = 90;
            initTurn = 0;
            minElev = -10;
            maxElev = 90;
            initElev = 25;
            maxXRotSpeed = 1;
            maxYRotSpeed = 1;
            maxMouseXRotSpeed = 0.5;
            maxMouseYRotSpeed = 0.5;
            pilotOpticsShowCursor = 1;
            controllable = 1;
        };
        memoryPointDriverOptics = "gunnerview";
    };
	class OPTRE_Pelican_F: Helicopter_Base_H
    {
        editorCategory = "MEU_cat_air";
        editorsubCategory = "MEU_sub_rot";
        tf_range=30000;
        class pilotCamera
        {
            class OpticsIn
            {
                class Wide
                {
                    opticsDisplayName = "WFOV";
                    initAngleX = 0;
                    minAngleX = 0;
                    maxAngleX = 0;
                    initAngleY = 0;
                    minAngleY = 0;
                    maxAngleY = 0;
                    initFov = "(75 / 120)";
                    minFov = "(75 / 120)";
                    maxFov = "(75 / 120)";
                    directionStabilized = 1;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                };
                class Medium: Wide
                {
                    opticsDisplayName = "MFOV";
                    initFov = "(14.4 / 120)";
                    minFov = "(14.4 / 120)";
                    maxFov = "(14.4 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
                class Narrow: Wide
                {
                    opticsDisplayName = "NFOV";
                    initFov = "(4.8 / 120)";
                    minFov = "0.01";
                    maxFov = "(4.8 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
                };
            };
            minTurn = -90;
            maxTurn = 90;
            initTurn = 0;
            minElev = -10;
            maxElev = 90;
            initElev = 25;
            maxXRotSpeed = 1;
            maxYRotSpeed = 1;
            maxMouseXRotSpeed = 0.5;
            maxMouseYRotSpeed = 0.5;
            pilotOpticsShowCursor = 1;
            controllable = 1;
        };
        memoryPointDriverOptics = "gunnerview";
        class textureSources
        {
            class Peg_CWO2
            {
                displayName="CWO2";
                author="Chaotic";
                textures[]=
                {
                    "first_meu_aux\Data\Pegasus\vic\P_OD3_CWO2.paa"
                };
            };
            class Peg_CWO3
            {
                displayName="CWO3";
                author="Chaotic";
                textures[]=
                {
                    "first_meu_aux\Data\Pegasus\vic\P_OD3_CWO3.paa"
                };
            };
            class Peg_CWO4
            {
                displayName="CWO4";
                author="Chaotic";
                textures[]=
                {
                    "first_meu_aux\Data\Pegasus\vic\P_OD3_CWO4.paa"
                };
            };
            class Peg_Torres
                {
                displayName="Torres";
                author="Chaotic";
                textures[]=
                {
                    "first_meu_aux\Data\Pegasus\vic\P_OD3_Torres.paa"
                };
            };
            class Peg_Chaotic
                {
                displayName="Chaotic";
                author="Chaotic";
                textures[]=
                {
                    "first_meu_aux\Data\Pegasus\vic\P_OD3_Chaotic.paa"
                };
            };
            class Peg_Bloodbath
                {
                displayName="Bloodbath";
                author="Chaotic";
                textures[]=
                {
                    "first_meu_aux\Data\Pegasus\vic\P_BLK_Bloodbath.paa"
                };
            };
        };
        class ACE_SelfActions: ACE_SelfActions
        {
            class 1stMEU_Style_Changer
            {
                displayName="Change Style";
                exceptions[]=
                {
                    "isNotInside",
                    "isNotSwimming",
                    "isNotSitting"
                };
                condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
                showDisabled=0;
                priority=2;
                
                class 1stMEU_NoseArt_None
                {
                    displayName="None";
                    exceptions[]=
                    {
                        "isNotInside",
                        "isNotSwimming",
                        "isNotSitting"
                    };
                    condition="!(isNull objectParent player)";
                    statement="_target setObjectTextureGlobal [0,'V_FZ_Vehicles\data\Pelican\V_D77HTCI_OD3_CO.paa']";
                    showDisabled=0;
                    runOnHover=0;
                    priority=2.5;
                };
                class customdivider
                {
                    displayname = "Custom Skins"
                
                    class 1stMEU_Style_CWO2: 1stMEU_NoseArt_None
                    {
                        condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
                        displayName="CWO2";
                        statement="_target setObjectTextureGlobal [0, 'first_meu_aux\Data\Pegasus\vic\P_OD3_CWO2.paa']";
                    };
                    class 1stMEU_Style_CWO3: 1stMEU_NoseArt_None
                    {
                        displayName="CWO3";
                        statement="_target setObjectTextureGlobal [0, 'first_meu_aux\Data\Pegasus\vic\P_OD3_CWO3.paa']";
                    };
                    class 1stMEU_NoseArt_CWO4: 1stMEU_NoseArt_None
                    {
                        displayName="CWO4";
                        statement="_target setObjectTextureGlobal [0, 'first_meu_aux\Data\Pegasus\vic\P_OD3_CWO4.paa']";
                    };
                    class 1stMEU_NoseArt_Torres: 1stMEU_NoseArt_None
                    {
                        displayName="Torres";
                        statement="_target setObjectTextureGlobal [0, 'first_meu_aux\Data\Pegasus\vic\P_OD3_Torres.paa']";
                    };
                    class 1stMEU_NoseArt_Chaotic: 1stMEU_NoseArt_None
                    {
                        displayName="Chaotic";
                        statement="_target setObjectTextureGlobal [0, 'first_meu_aux\Data\Pegasus\vic\P_OD3_Chaotic.paa']";
                    };
                    class 1stMEU_NoseArt_Bloodbath: 1stMEU_NoseArt_None
                    {
                        displayName="Bloodbath";
                        statement="_target setObjectTextureGlobal [0, 'first_meu_aux\Data\Pegasus\vic\P_BLK_Bloodbath.paa']";
                    };
                };
                class stockdivider
                {
                    displayname = "Stock Skins"
                    class 1stMEU_NoseArt_Des: 1stMEU_NoseArt_None
                    {
                        displayName="Desert";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_DES_CO.paa']";
                    };
                    class 1stMEU_NoseArt_WDL: 1stMEU_NoseArt_None
                    {
                        displayName="Woodland";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_WDL_CO.paa']";
                    };
                    class 1stMEU_NoseArt_JNGL: 1stMEU_NoseArt_None
                    {
                        displayName="Jungle";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_JNG_CO.paa']";
                    };
                    class 1stMEU_NoseArt_URBN: 1stMEU_NoseArt_None
                    {
                        displayName="Urban";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_URB_CO.paa']";
                    };
                    class 1stMEU_NoseArt_BLK: 1stMEU_NoseArt_None
                    {
                        displayName="Black";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_BLK_CO.paa']";
                    };
                    class 1stMEU_NoseArt_Frost: 1stMEU_NoseArt_None
                    {
                        displayName="Frost";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_FRS_CO.paa']";
                    };
                    class 1stMEU_NoseArt_TNDRA: 1stMEU_NoseArt_None
                    {
                        displayName="Tundra";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_TND_CO.paa']";
                    };
                    class 1stMEU_NoseArt_Dune: 1stMEU_NoseArt_None
                    {
                        displayName="Dunes";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_DUN_CO.paa']";
                    };
                    class 1stMEU_NoseArt_Classic: 1stMEU_NoseArt_None
                    {
                        displayName="Classic";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_CLS_CO.paa']";
                    };
                };
            };
        };
    };
    class OPTRE_Hornet_base: Helicopter_Base_H
    {
        editorCategory = "MEU_cat_air";
        editorsubCategory = "MEU_sub_rot";
        tf_range=30000;
        class useractions
        {
            class FullAirbrakeEngageFast
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault = "<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes";
				userActionID = 57;
			};
			class HalfAirbrakeEngageFast
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes (Half)";
				displayNameDefault = "<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes (Half)";
				userActionID = 58;
			};
			class Thruster400Engage
			{
				animPeriod = 5;
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName = "<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault = "<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Thruster400Engage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip = "<t color='#04B45F'>Engage Forward Thrusters";
				userActionID = 52;
			};
			class Thruster400Disengage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName = "<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault = "<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Thruster400Disengage; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID = 53;
			};
			class Afterburnerss600Engage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (!(this getvariable [""OPTRE_Afterburnerss_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName = "<t color='#04B45F'>Engage Afterburners";
				displayNameDefault = "<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Afterburners600Engage";
				textToolTip = "<t color='#04B45F'>Engage Afterburners";
				userActionID = 54;
			};
			class Afterburners600Disengage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName = "<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault = "<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Afterburners600Disengage";
				textToolTip = "<t color='#FCE205'>Disengage Afterburners";
				userActionID = 55;
			};
        };
    };
    
	class VES_UH144_A: OPTRE_UNSC_falcon
    {
        editorCategory = "MEU_cat_air";
        editorsubCategory = "MEU_sub_rot";
        tf_range=30000;
        class useractions
        {
            class FullAirbrakeEngageFast
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault = "<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast";
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes";
				userActionID = 57;
			};
			class HalfAirbrakeEngageFast
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes (Half)";
				displayNameDefault = "<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast";
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes (Half)";
				userActionID = 58;
			};
			class Thruster400Engage
			{
				animPeriod = 5;
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName = "<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault = "<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Thruster400Engage";
				textToolTip = "<t color='#04B45F'>Engage Forward Thrusters";
				userActionID = 52;
			};
			class Thruster400Disengage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName = "<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault = "<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Thruster400Disengage";
				textToolTip = "<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID = 53;
			};
			class Afterburnerss600Engage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (!(this getvariable [""OPTRE_Afterburnerss_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName = "<t color='#04B45F'>Engage Afterburners";
				displayNameDefault = "<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Afterburners600Engage";
				textToolTip = "<t color='#04B45F'>Engage Afterburners";
				userActionID = 54;
			};
			class Afterburners600Disengage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName = "<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault = "<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Afterburners600Disengage";
				textToolTip = "<t color='#FCE205'>Disengage Afterburners";
				userActionID = 55;
			};
        };
    };
	
// Hornet

    class VES_AV14_AIM : OPTRE_UNSC_hornet_CAP
    {
        editorCategory = "MEU_cat_air";
        editorsubCategory = "MEU_sub_rot";
        tf_range=30000;
        class useractions
        {
            class FullAirbrakeEngageFast
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault = "<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes";
				userActionID = 57;
			};
			class HalfAirbrakeEngageFast
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes (Half)";
				displayNameDefault = "<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes (Half)";
				userActionID = 58;
			};
			class Thruster400Engage
			{
				animPeriod = 5;
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName = "<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault = "<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Thruster400Engage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip = "<t color='#04B45F'>Engage Forward Thrusters";
				userActionID = 52;
			};
			class Thruster400Disengage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName = "<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault = "<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Thruster400Disengage; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID = 53;
			};
			class Afterburnerss600Engage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (!(this getvariable [""OPTRE_Afterburnerss_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName = "<t color='#04B45F'>Engage Afterburners";
				displayNameDefault = "<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Afterburners600Engage";
				textToolTip = "<t color='#04B45F'>Engage Afterburners";
				userActionID = 54;
			};
			class Afterburners600Disengage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName = "<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault = "<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Afterburners600Disengage";
				textToolTip = "<t color='#FCE205'>Disengage Afterburners";
				userActionID = 55;
			};
        };
    };
    class VES_AV14_AGM : OPTRE_UNSC_hornet_CAS
    {
        editorCategory = "MEU_cat_air";
        editorsubCategory = "MEU_sub_rot";
        tf_range=30000;
        class useractions
        {
            class FullAirbrakeEngageFast
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault = "<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes";
				userActionID = 57;
			};
			class HalfAirbrakeEngageFast
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes (Half)";
				displayNameDefault = "<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes (Half)";
				userActionID = 58;
			};
			class Thruster400Engage
			{
				animPeriod = 5;
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName = "<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault = "<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Thruster400Engage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip = "<t color='#04B45F'>Engage Forward Thrusters";
				userActionID = 52;
			};
			class Thruster400Disengage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName = "<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault = "<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Thruster400Disengage; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID = 53;
			};
			class Afterburnerss600Engage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (!(this getvariable [""OPTRE_Afterburnerss_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName = "<t color='#04B45F'>Engage Afterburners";
				displayNameDefault = "<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Afterburners600Engage";
				textToolTip = "<t color='#04B45F'>Engage Afterburners";
				userActionID = 54;
			};
			class Afterburners600Disengage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName = "<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault = "<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Afterburners600Disengage";
				textToolTip = "<t color='#FCE205'>Disengage Afterburners";
				userActionID = 55;
			};
        };
    };
    class VES_AV14_Rockets : OPTRE_UNSC_hornet
    {
        editorCategory = "MEU_cat_air";
        editorsubCategory = "MEU_sub_rot";
        tf_range=30000;
        class useractions
        {
            class FullAirbrakeEngageFast
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault = "<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes";
				userActionID = 57;
			};
			class HalfAirbrakeEngageFast
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes (Half)";
				displayNameDefault = "<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes (Half)";
				userActionID = 58;
			};
			class Thruster400Engage
			{
				animPeriod = 5;
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName = "<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault = "<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Thruster400Engage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip = "<t color='#04B45F'>Engage Forward Thrusters";
				userActionID = 52;
			};
			class Thruster400Disengage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName = "<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault = "<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Thruster400Disengage; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID = 53;
			};
			class Afterburnerss600Engage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (!(this getvariable [""OPTRE_Afterburnerss_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName = "<t color='#04B45F'>Engage Afterburners";
				displayNameDefault = "<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Afterburners600Engage";
				textToolTip = "<t color='#04B45F'>Engage Afterburners";
				userActionID = 54;
			};
			class Afterburners600Disengage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName = "<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault = "<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Afterburners600Disengage";
				textToolTip = "<t color='#FCE205'>Disengage Afterburners";
				userActionID = 55;
			};
        };
    };
    class VES_AV14 : OPTRE_UNSC_hornet
    {
        editorCategory = "MEU_cat_air";
        editorsubCategory = "MEU_sub_rot";
        tf_range=30000;
        class useractions
        {
            class FullAirbrakeEngageFast
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault = "<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes";
				userActionID = 57;
			};
			class HalfAirbrakeEngageFast
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes (Half)";
				displayNameDefault = "<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes (Half)";
				userActionID = 58;
			};
			class Thruster400Engage
			{
				animPeriod = 5;
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName = "<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault = "<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Thruster400Engage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip = "<t color='#04B45F'>Engage Forward Thrusters";
				userActionID = 52;
			};
			class Thruster400Disengage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName = "<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault = "<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Thruster400Disengage; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID = 53;
			};
			class Afterburnerss600Engage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (!(this getvariable [""OPTRE_Afterburnerss_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName = "<t color='#04B45F'>Engage Afterburners";
				displayNameDefault = "<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Afterburners600Engage";
				textToolTip = "<t color='#04B45F'>Engage Afterburners";
				userActionID = 54;
			};
			class Afterburners600Disengage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName = "<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault = "<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Afterburners600Disengage";
				textToolTip = "<t color='#FCE205'>Disengage Afterburners";
				userActionID = 55;
			};
        };
    };
	
//  Hornet End
//  Falcon Start

	class VES_UH144: OPTRE_UNSC_falcon_unarmed
    {
        editorCategory = "MEU_cat_air";
        editorsubCategory = "MEU_sub_rot";
        tf_range=30000;
    };
	class VES_D77HTCI_A: OPTRE_Pelican_armed
    {
        editorCategory = "MEU_cat_air";
        editorsubCategory = "MEU_sub_rot";
        tf_range=30000;
         class pilotCamera
        {
            class OpticsIn
            {
                class Wide
                {
                    opticsDisplayName = "WFOV";
                    initAngleX = 0;
                    minAngleX = 0;
                    maxAngleX = 0;
                    initAngleY = 0;
                    minAngleY = 0;
                    maxAngleY = 0;
                    initFov = "(75 / 120)";
                    minFov = "(75 / 120)";
                    maxFov = "(75 / 120)";
                    directionStabilized = 1;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                };
                class Medium: Wide
                {
                    opticsDisplayName = "MFOV";
                    initFov = "(14.4 / 120)";
                    minFov = "(14.4 / 120)";
                    maxFov = "(14.4 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
                class Narrow: Wide
                {
                    opticsDisplayName = "NFOV";
                    initFov = "(4.8 / 120)";
                    minFov = "0.01";
                    maxFov = "(4.8 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
                };
            };
            minTurn = -90;
            maxTurn = 90;
            initTurn = 0;
            minElev = -10;
            maxElev = 90;
            initElev = 25;
            maxXRotSpeed = 1;
            maxYRotSpeed = 1;
            maxMouseXRotSpeed = 0.5;
            maxMouseYRotSpeed = 0.5;
            pilotOpticsShowCursor = 1;
            controllable = 1;
        };
        memoryPointDriverOptics = "gunnerview";
        class textureSources
        {
            class Peg_CWO2
            {
                displayName="CWO2";
                author="Chaotic";
                textures[]=
                {
                    "first_meu_aux\Data\Pegasus\vic\P_OD3_CWO2.paa"
                };
            };
            class Peg_CWO3
            {
                displayName="CWO3";
                author="Chaotic";
                textures[]=
                {
                    "first_meu_aux\Data\Pegasus\vic\P_OD3_CWO3.paa"
                };
            };
            class Peg_CWO4
            {
                displayName="CWO4";
                author="Chaotic";
                textures[]=
                {
                    "first_meu_aux\Data\Pegasus\vic\P_OD3_CWO4.paa"
                };
            };
            class Peg_Torres
            {
                displayName="Torres";
                author="Chaotic";
                textures[]=
                {
                    "first_meu_aux\Data\Pegasus\vic\P_OD3_Torres.paa"
                };
            };
            class Peg_Chaotic
            {
                displayName="Chaotic";
                author="Chaotic";
                textures[]=
                {
                    "first_meu_aux\Data\Pegasus\vic\P_OD3_Chaotic.paa"
                };
            };
            class Peg_Bloodbath
                {
                displayName="Bloodbath";
                author="Chaotic";
                textures[]=
                {
                    "first_meu_aux\Data\Pegasus\vic\P_BLK_Bloodbath.paa"
                };
            };
        };
        class ACE_SelfActions: ACE_SelfActions
        {
            class 1stMEU_Style_Changer
            {
                displayName="Change Style";
                exceptions[]=
                {
                    "isNotInside",
                    "isNotSwimming",
                    "isNotSitting"
                };
                condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
                showDisabled=0;
                priority=2;
                
                class 1stMEU_NoseArt_None
                {
                    displayName="None";
                    exceptions[]=
                    {
                        "isNotInside",
                        "isNotSwimming",
                        "isNotSitting"
                    };
                    condition="!(isNull objectParent player)";
                    statement="_target setObjectTextureGlobal [0,'V_FZ_Vehicles\data\Pelican\V_D77HTCI_OD3_CO.paa']";
                    showDisabled=0;
                    runOnHover=0;
                    priority=2.5;
                };
                class customdivider
                {
                    displayname = "Custom Skins"
                
                    class 1stMEU_Style_CWO2: 1stMEU_NoseArt_None
                    {
                        condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
                        displayName="CWO2";
                        statement="_target setObjectTextureGlobal [0, 'first_meu_aux\Data\Pegasus\vic\P_OD3_CWO2.paa']";
                    };
                    class 1stMEU_Style_CWO3: 1stMEU_NoseArt_None
                    {
                        displayName="CWO3";
                        statement="_target setObjectTextureGlobal [0, 'first_meu_aux\Data\Pegasus\vic\P_OD3_CWO3.paa']";
                    };
                    class 1stMEU_NoseArt_CWO4: 1stMEU_NoseArt_None
                    {
                        displayName="CWO4";
                        statement="_target setObjectTextureGlobal [0, 'first_meu_aux\Data\Pegasus\vic\P_OD3_CWO4.paa']";
                    };
                    class 1stMEU_NoseArt_Torres: 1stMEU_NoseArt_None
                    {
                        displayName="Torres";
                        statement="_target setObjectTextureGlobal [0, 'first_meu_aux\Data\Pegasus\vic\P_OD3_Torres.paa']";
                    };
                    class 1stMEU_NoseArt_Chaotic: 1stMEU_NoseArt_None
                    {
                        displayName="Chaotic";
                        statement="_target setObjectTextureGlobal [0, 'first_meu_aux\Data\Pegasus\vic\P_OD3_Chaotic.paa']";
                    };
                    class 1stMEU_NoseArt_Bloodbath: 1stMEU_NoseArt_None
                    {
                        displayName="Bloodbath";
                        statement="_target setObjectTextureGlobal [0, 'first_meu_aux\Data\Pegasus\vic\P_BLK_Bloodbath.paa']";
                    };
                };
                class stockdivider
                {
                    displayname = "Stock Skins"
                    class 1stMEU_NoseArt_Des: 1stMEU_NoseArt_None
                    {
                        displayName="Desert";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_DES_CO.paa']";
                    };
                    class 1stMEU_NoseArt_WDL: 1stMEU_NoseArt_None
                    {
                        displayName="Woodland";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_WDL_CO.paa']";
                    };
                    class 1stMEU_NoseArt_JNGL: 1stMEU_NoseArt_None
                    {
                        displayName="Jungle";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_JNG_CO.paa']";
                    };
                    class 1stMEU_NoseArt_URBN: 1stMEU_NoseArt_None
                    {
                        displayName="Urban";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_URB_CO.paa']";
                    };
                    class 1stMEU_NoseArt_BLK: 1stMEU_NoseArt_None
                    {
                        displayName="Black";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_BLK_CO.paa']";
                    };
                    class 1stMEU_NoseArt_Frost: 1stMEU_NoseArt_None
                    {
                        displayName="Frost";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_FRS_CO.paa']";
                    };
                    class 1stMEU_NoseArt_TNDRA: 1stMEU_NoseArt_None
                    {
                        displayName="Tundra";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_TND_CO.paa']";
                    };
                    class 1stMEU_NoseArt_Dune: 1stMEU_NoseArt_None
                    {
                        displayName="Dunes";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_DUN_CO.paa']";
                    };
                    class 1stMEU_NoseArt_Classic: 1stMEU_NoseArt_None
                    {
                        displayName="Classic";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_CLS_CO.paa']";
                    };
                };
            };
        };
    };
    
	class VES_D77HTCI: OPTRE_Pelican_unarmed
    {
        editorCategory = "MEU_cat_air";
        editorsubCategory = "MEU_sub_rot";
        tf_range=30000;
        transportsoldier = 20;
        class pilotCamera
        {
            class OpticsIn
            {
                class Wide
                {
                    opticsDisplayName = "WFOV";
                    initAngleX = 0;
                    minAngleX = 0;
                    maxAngleX = 0;
                    initAngleY = 0;
                    minAngleY = 0;
                    maxAngleY = 0;
                    initFov = "(75 / 120)";
                    minFov = "(75 / 120)";
                    maxFov = "(75 / 120)";
                    directionStabilized = 1;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                };
                class Medium: Wide
                {
                    opticsDisplayName = "MFOV";
                    initFov = "(14.4 / 120)";
                    minFov = "(14.4 / 120)";
                    maxFov = "(14.4 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
                class Narrow: Wide
                {
                    opticsDisplayName = "NFOV";
                    initFov = "(4.8 / 120)";
                    minFov = "0.01";
                    maxFov = "(4.8 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
                };
            };
            minTurn = -90;
            maxTurn = 90;
            initTurn = 0;
            minElev = -10;
            maxElev = 90;
            initElev = 25;
            maxXRotSpeed = 1;
            maxYRotSpeed = 1;
            maxMouseXRotSpeed = 0.5;
            maxMouseYRotSpeed = 0.5;
            pilotOpticsShowCursor = 1;
            controllable = 1;
        };
        memoryPointDriverOptics = "gunnerview";
        class textureSources
        {
            class Peg_CWO2
            {
                displayName="CWO2";
                author="Chaotic";
                textures[]=
                {
                    "first_meu_aux\Data\Pegasus\vic\P_OD3_CWO2.paa"
                };
            };
            class Peg_CWO3
            {
                displayName="CWO3";
                author="Chaotic";
                textures[]=
                {
                    "first_meu_aux\Data\Pegasus\vic\P_OD3_CWO3.paa"
                };
            };
            class Peg_CWO4
            {
                displayName="CWO4";
                author="Chaotic";
                textures[]=
                {
                    "first_meu_aux\Data\Pegasus\vic\P_OD3_CWO4.paa"
                };
            };
            class Peg_Torres
            {
                displayName="Torres";
                author="Chaotic";
                textures[]=
                {
                    "first_meu_aux\Data\Pegasus\vic\P_OD3_Torres.paa"
                };
            };
            class Peg_Chaotic
            {
                displayName="Chaotic";
                author="Chaotic";
                textures[]=
                {
                    "first_meu_aux\Data\Pegasus\vic\P_OD3_Chaotic.paa"
                };
            };
            class Peg_Bloodbath
                {
                displayName="Bloodbath";
                author="Chaotic";
                textures[]=
                {
                    "first_meu_aux\Data\Pegasus\vic\P_BLK_Bloodbath.paa"
                };
            };
        };
        class ACE_SelfActions: ACE_SelfActions
        {
            class 1stMEU_Style_Changer
            {
                displayName="Change Style";
                exceptions[]=
                {
                    "isNotInside",
                    "isNotSwimming",
                    "isNotSitting"
                };
                condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
                showDisabled=0;
                priority=2;
                
                class 1stMEU_NoseArt_None
                {
                    displayName="None";
                    exceptions[]=
                    {
                        "isNotInside",
                        "isNotSwimming",
                        "isNotSitting"
                    };
                    condition="!(isNull objectParent player)";
                    statement="_target setObjectTextureGlobal [0,'V_FZ_Vehicles\data\Pelican\V_D77HTCI_OD3_CO.paa']";
                    showDisabled=0;
                    runOnHover=0;
                    priority=2.5;
                };
                class customdivider
                {
                    displayname = "Custom Skins"
                
                    class 1stMEU_Style_CWO2: 1stMEU_NoseArt_None
                    {
                        condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
                        displayName="CWO2";
                        statement="_target setObjectTextureGlobal [0, 'first_meu_aux\Data\Pegasus\vic\P_OD3_CWO2.paa']";
                    };
                    class 1stMEU_Style_CWO3: 1stMEU_NoseArt_None
                    {
                        displayName="CWO3";
                        statement="_target setObjectTextureGlobal [0, 'first_meu_aux\Data\Pegasus\vic\P_OD3_CWO3.paa']";
                    };
                    class 1stMEU_NoseArt_CWO4: 1stMEU_NoseArt_None
                    {
                        displayName="CWO4";
                        statement="_target setObjectTextureGlobal [0, 'first_meu_aux\Data\Pegasus\vic\P_OD3_CWO4.paa']";
                    };
                    class 1stMEU_NoseArt_Torres: 1stMEU_NoseArt_None
                    {
                        displayName="Torres";
                        statement="_target setObjectTextureGlobal [0, 'first_meu_aux\Data\Pegasus\vic\P_OD3_Torres.paa']";
                    };
                    class 1stMEU_NoseArt_Chaotic: 1stMEU_NoseArt_None
                    {
                        displayName="Chaotic";
                        statement="_target setObjectTextureGlobal [0, 'first_meu_aux\Data\Pegasus\vic\P_OD3_Chaotic.paa']";
                    };
                    class 1stMEU_NoseArt_Bloodbath: 1stMEU_NoseArt_None
                    {
                        displayName="Bloodbath";
                        statement="_target setObjectTextureGlobal [0, 'first_meu_aux\Data\Pegasus\vic\P_BLK_Bloodbath.paa']";
                    };
                };
                class stockdivider
                {
                    displayname = "Stock Skins"
                    class 1stMEU_NoseArt_Des: 1stMEU_NoseArt_None
                    {
                        displayName="Desert";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_DES_CO.paa']";
                    };
                    class 1stMEU_NoseArt_WDL: 1stMEU_NoseArt_None
                    {
                        displayName="Woodland";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_WDL_CO.paa']";
                    };
                    class 1stMEU_NoseArt_JNGL: 1stMEU_NoseArt_None
                    {
                        displayName="Jungle";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_JNG_CO.paa']";
                    };
                    class 1stMEU_NoseArt_URBN: 1stMEU_NoseArt_None
                    {
                        displayName="Urban";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_URB_CO.paa']";
                    };
                    class 1stMEU_NoseArt_BLK: 1stMEU_NoseArt_None
                    {
                        displayName="Black";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_BLK_CO.paa']";
                    };
                    class 1stMEU_NoseArt_Frost: 1stMEU_NoseArt_None
                    {
                        displayName="Frost";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_FRS_CO.paa']";
                    };
                    class 1stMEU_NoseArt_TNDRA: 1stMEU_NoseArt_None
                    {
                        displayName="Tundra";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_TND_CO.paa']";
                    };
                    class 1stMEU_NoseArt_Dune: 1stMEU_NoseArt_None
                    {
                        displayName="Dunes";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_DUN_CO.paa']";
                    };
                    class 1stMEU_NoseArt_Classic: 1stMEU_NoseArt_None
                    {
                        displayName="Classic";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_CLS_CO.paa']";
                    };
                };
            };
        };
    };
    class B_APC_Tracked_01_CRV_F: B_APC_Tracked_01_base_F
    {
	ace_cargo_space = 8;
	ace_cargo_hasCargo = 1;	
    class TransportMagazines
    {
			delete _xx_30Rnd_65x39_caseless_mag;
			delete _xx_100Rnd_65x39_caseless_mag;
			delete _xx_HandGrenade;
			delete _xx_MiniGrenade;
			delete _xx_1Rnd_HE_Grenade_shell;
			delete _xx_1Rnd_Smoke_Grenade_shell;
			delete _xx_1Rnd_SmokeGreen_Grenade_shell;
			delete _xx_1Rnd_SmokeOrange_Grenade_shell;
			delete _xx_1Rnd_SmokeBlue_Grenade_shell;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellGreen;
			delete _xx_SmokeShellOrange;
			delete _xx_SmokeShellBlue;
			delete _xx_NLAW_F;
			delete _xx_Titan_AT;
			delete _xx_Titan_AP;
			delete _xx_Titan_AA;
			mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 20);
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 5);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 5);
			mag_xx(OPTRE_M41_Twin_HEAT, 4);
			mag_xx(OPTRE_M41_Twin_HEAT_G, 4);
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			item_xx(ToolKit, 1);	
		};	
    };
    class B_T_APC_Tracked_01_CRV_F: B_APC_Tracked_01_CRV_F
    {
	ace_cargo_space = 8;
	ace_cargo_hasCargo = 1;		
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_khaki_mag;
			delete _xx_100Rnd_65x39_caseless_khaki_mag;
			delete _xx_HandGrenade;
			delete _xx_MiniGrenade;
			delete _xx_1Rnd_HE_Grenade_shell;
			delete _xx_1Rnd_Smoke_Grenade_shell;
			delete _xx_1Rnd_SmokeGreen_Grenade_shell;
			delete _xx_1Rnd_SmokeOrange_Grenade_shell;
			delete _xx_1Rnd_SmokeBlue_Grenade_shell;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellGreen;
			delete _xx_SmokeShellOrange;
			delete _xx_SmokeShellBlue;
			delete _xx_Titan_AT;
			delete _xx_Titan_AP;
			delete _xx_Titan_AA;
			mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 20);
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 5);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 5);
			mag_xx(OPTRE_M41_Twin_HEAT, 4);
			mag_xx(OPTRE_M41_Twin_HEAT_G, 4);
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_khk_F;
			delete _xx_arifle_MX_SW_khk_F;
			delete _xx_launch_NLAW_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;	
			item_xx(ToolKit, 1);
		};
    };
    class Vulkan_Repair_APC: B_APC_Tracked_01_CRV_F
    {
        displayname = "Vulkan Repair APC";
        ace_repair_canRepair = 1; 
        scope = 2;
		scopeCurator = 2;
		accuracy = 1000;
		faction = "MEU_UNSC";
		side = 1;
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
		typicalCargo[] = {"OPTRE_UNSC_Marine_Soldier_Rifleman_AR"};
        editorCategory = "MEU_cat_gnd";
        editorsubCategory = "MEU_sub_apc";
    };
        
    class Vulkan_Repair_APC_P: B_T_APC_Tracked_01_CRV_F
    {
        displayname = "Vulkan Repair APC (Pacific)";
        ace_repair_canRepair = 1;
        scope = 2;
		scopeCurator = 2;
		accuracy = 1000;
		faction = "MEU_UNSC";
		side = 1;
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
		typicalCargo[] = {"OPTRE_UNSC_Marine_Soldier_Rifleman_AR"};
        editorCategory = "MEU_cat_gnd";
        editorsubCategory = "MEU_sub_apc";
    };
    class OPTRE_HEV: StaticMGWeapon
	{
        faction = "MEU_UNSC";
        editorCategory = "MEU_cat_gnd";
        editorsubCategory = "MEU_sub_trt";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 35000;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        class TransportBackpacks
        {
            class xx_OPTRE_OPTRE_ILCS_HEAVY
			{
				backpack = "OPTRE_ILCS_Rucksack_Heavy";
				count = 1;
			};
            class xx_MEU_Parachute
            {
                backpack = "MEU_Parachute";
				count = 1;
            };
        };
		class TransportMagazines
		{
			mag_xx(OPTRE_M9_Frag, 3);
            mag_xx(ACE_M84, 2);
            mag_xx(OPTRE_M2_Smoke_Orange, 3);
            mag_xx(SmokeShell, 5);
            mag_xx(C7_Remote_Mag, 2);
            mag_xx(OPTRE_200Rnd_95x40_Box_HPSAPT, 1);
            mag_xx(OPTRE_1Rnd_50x137_HEAT, 1);
            mag_xx(OPTRE_16Rnd_127x40_Mag_NARQT, 1);
            mag_xx(OPTRE_16Rnd_127x40_Mag_JHPT, 2);
            mag_xx(OPTRE_60Rnd_5x23mm_Mag_JHPT, 5);
            mag_xx(OPTRE_60Rnd_762x51_Mag_JHPT, 5);
            mag_xx(OPTRE_15Rnd_762x51_Mag_JHPT, 5);
            mag_xx(OPTRE_20Rnd_86x70_Mag_JHPT, 5);
            mag_xx(OPTRE_20Rnd_86x70_Mag_APT, 5);
            mag_xx(3Rnd_HE_Grenade_shell, 2);
            mag_xx(OPTRE_4Rnd_145x114_APFSDS_Mag, 4);
            mag_xx(rhs_charge_tnt_x2_mag, 2);
            mag_xx(OPTRE_M41_Twin_HEAT, 1);
            mag_xx(OPTRE_100Rnd_95x40_Box_JHPT, 2);
            mag_xx(OPTRE_100Rnd_127x99_M250HMG, 1);
            mag_xx(MEU_c7_remote_throwable_Mag, 4);
            mag_xx(MEU_c12_remote_throwable_Mag, 2);
            mag_xx(MEU_9bang_Mag, 2);
            mag_xx(MEU_C168_Mag, 1);
            delete _xx_OPTRE_ELB47_Strobe;
            delete _xx_OPTRE_M8_Flare;
            delete _xx_OPTRE_M2_Smoke_Purple;
		};
		class TransportWeapons{};
		class TransportItems
		{
            item_xx(ACE_elasticBandage, 8);
            item_xx(ACE_packingBandage, 14);
            item_xx(ACE_plasmaIV_500, 2);
            item_xx(ACE_epinephrine, 3);
            item_xx(ACE_adenosine, 2);
            item_xx(ACE_tourniquet, 2);
            item_xx(ACE_quikclot, 8);
            item_xx(ACE_morphine, 1);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 2);
            item_xx(MEU_compat_Ibuprofen, 4);
            delete _xx_OPTRE_Biofoam;
        };
        class userActions
        {
            class door_EmergencyEject
            {
                displayName = "!!Emergency Eject!!";
                position = "";
                radius = 4;
                condition = "gunner this == player";
                statement = "0 = [this, 0, true] spawn OPTRE_Fnc_HEVDoor; this setVariable [""OPTRE_HEV_DoorEjectedWanted"",false,true]; resetCamShake; moveOut player; player allowDamage true;";
                onlyforplayer = 1;
            };
        };
    };
    class OPTRE_Static_M41: StaticMGWeapon
    {
        armor = 1000;
    };
    class StaticATWeapon;
    class OPTRE_Static_ATGM: StaticATWeapon
    {
        armor = 1000;
    };
    class StaticAAWeapon;
    class OPTRE_Static_AA: StaticAAWeapon
    {
        armor = 1000;
    };
    //  Start Backpacks
	class Praetor_Jumpack : OPTRE_ILCS_Rucksack_Black	
    {
        author = "NSM & Oneill & Mark";
        scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] ODST Reconnaissance Jumpack";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 35000;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
		model="\OPTRE_weapons\backpacks\jetpack_on.p3d";
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 100;
		NSM_jumppack_recharge = 4;
		NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}};
		NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
		NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
		NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		NSM_jumppack_jump_types[] = {{"Short Jump",{14,7,20,0,1,1}}};
		maximumload = 100;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"NSM_Objects\Data\XD_1_JumpPack_CO.paa"};
    };
    class Para_Jumpack : Praetor_Jumpack
    {
        author = "NSM & Oneill & Mark";
        scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Pararescue Jumpack";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 35000;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
		model="\OPTRE_weapons\backpacks\jetpack.p3d";
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 100;
		NSM_jumppack_recharge = 1;
		NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}};
		NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
		NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
		NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		NSM_jumppack_jump_types[] = {{"Short Jump",{14,7,20,0,1,1}}};
		maximumload = 300;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"NSM_Objects\Data\XD_1_JumpPack_CO.paa"};
    };
    class MEU_Cent_RTO_Pack : Praetor_Jumpack
    {
        author = "NSM & Oneill & Mark";
        scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Reconnaissance RTO/NCO Jumpack";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 35000;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
		model="\OPTRE_weapons\backpacks\jetpack.p3d";
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 200;
		NSM_jumppack_recharge = 0;
		NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}};
		NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
		NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
		NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		NSM_jumppack_jump_types[] = {{"Forward Jump",{12,20,25,0,0,0}},{"Short Jump",{14,7,10,0,1,1}}};
		maximumload = 100;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"NSM_Objects\Data\XD_1_JumpPack_CO.paa"};
    };
    class MEU_Cent_Pack : Praetor_Jumpack
    {
        author = "NSM & Oneill & Mark";
        scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Reconnaissance Jumpack";
        picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
		model="\OPTRE_weapons\backpacks\jetpack.p3d";
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 200;
		NSM_jumppack_recharge = 0;
		NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}};
		NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
		NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
		NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		NSM_jumppack_jump_types[] = {{"Forward Jump",{12,20,25,0,0,0}},{"Short Jump",{14,7,10,0,1,1}}};
		maximumload = 100;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"NSM_Objects\Data\XD_1_JumpPack_CO.paa"};
    };
    class MEU_Testpack : Praetor_Jumpack
    {
        displayName = "[1stMEU] Test Pack";
        NSM_jumppack_jump_types[] = {{"Forward Jump",{12,20,50,0,0,0}},{"Short Jump",{25,7,20,0,1,1}},{"Full Power",{30,5,1,0,1,0}}};
    };
      
	class MEU_Zeus_Pack : OPTRE_ANPRC_521_Black
    {
        displayName = "[1stMEU] Zeus LR";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 100000;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad = 1000;
    };
	
    class Praetor_LR_backpack_big: OPTRE_ANPRC_521_Black
    {
        displayName = "[1stMEU] ODST LR Rucksack";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 30000;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad = 220;
    };
    
	class Praetor_LR_backpack: OPTRE_ANPRC_515
    {
        displayName = "[1stMEU] ODST NCO Rucksack";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 30000;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad = 320;
    };
	
    class MEU_Prae_Ruck_Base : OPTRE_ILCS_Rucksack_Heavy
    {
        author = "1st MEU Oneill";
        displayName = "[1stMEU] ODST Trooper Rucksack";
        maximumLoad = 320;
		mass = 50;
		hiddenSelections[] = {"camo1","AP_Heavy","biofoam"};
    };
	
	class MEU_Prae_Ruck_Base_Heavy : OPTRE_ILCS_Rucksack_Heavy
    {
        author = "1st MEU Oneill";
        displayName = "[1stMEU] ODST Trooper Heavy Rucksack";
        maximumLoad = 400;
		mass = 50;
		hiddenSelections[] = {"camo1","biofoam"};
    };
    class DataLinkSensorComponent;
    class SensorTemplateDataLink;
	class uplinkpack : MEU_Prae_Ruck_Base_Heavy
    {
        author = "1st MEU Mark";
        displayName = "[1stMEU] ODST Uplink Rucksack";
        maximumLoad = 250;
        class components :  DataLinkSensorComponent
        {
            class SensorsManagerComponent : SensorTemplateDataLink
            {
                setVehicleReportRemoteTargets = 1;
                setVehicleReportOwnPosition = 1;
            };
        };
    };
    //add this to binos?
	class MEU_Prae_Corpsman_Ruck_Base : OPTRE_ILCS_Rucksack_Heavy
    {
        author = "1st MEU Oneill";
        displayName = "[1stMEU] ODST Corpsman Rucksack";
		tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 30000;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
		hiddenSelections[] = {"camo1","AP_Heavy"};
		maximumLoad = 320;
    };
	
	class MEU_Prae_Corpsman_Ruck_Heavy : OPTRE_ILCS_Rucksack_Heavy
    {
        author = "1st MEU Oneill";
        displayName = "[1stMEU] ODST Corpsman Heavy Rucksack";
		maximumLoad = 400;
		mass = 50;
		hiddenSelections[] = {"camo1"};
    };
    class MEU_Parachute : B_parachute
    {
        author = "1st MEU Mark";
        displayName = "[1stMEU] Parachute";
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_isolatedAmount = 0.65;
        tf_range = 70000;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
    };
	
//  End Backpacks
//  Start Uniforms
	
	class OPTRE_UNSC_Army_Soldier_WDL;
	
	class MEU_Base_Uniform: OPTRE_UNSC_Army_Soldier_WDL
	{
		class EventHandlers;
		class HitPoints
		{
            class HitFace
            {
                armor = 5; //Default Value
                material = -1;
                name = "face_hub";
                passThrough = 0.8;
                radius = 0.08;
                explosionShielding = 0.1;
                minimalHit = 0.01;
            };
            class HitNeck: HitFace
            {
                armor = 5; //OPTRE Value //Default=1
                material = -1;
                name = "neck";
                passThrough = 0.8;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitHead: HitNeck
            {
                armor = 5; //Default Value
                material = -1;
                name = "head";
                passThrough = 0.8;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.01;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis
            {
                armor = 6; //OPTRE Value //Default=6
                material = -1;
                name = "pelvis";
                passThrough = 0.8;
                radius = 0.24;
                explosionShielding = .1;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "0";
            };
            class HitAbdomen: HitPelvis
            {
                armor = 6; //OPTRE Value //Default=1
                material = -1;
                name = "spine1";
                passThrough = 0.8;
                radius = 0.16;
                explosionShielding = .1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitDiaphragm: HitAbdomen
            {
                armor = 6; //OPTRE Value //Default=1
                material = -1;
                name = "spine2";
                passThrough = 0.8;
                radius = 0.18;
                explosionShielding = .25;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitChest: HitDiaphragm
            {
                armor = 6; //OPTRE Value //Default=1
                material = -1;
                name = "spine3";
                passThrough = 0.8;
                radius = 0.18;
                explosionShielding = .25;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitBody: HitChest
            {
                armor = 1000; // Default value, do not change
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = .25;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms: HitBody
            {
                armor = 6; //OPTRE Value //Default=3
                material = -1;
                name = "arms";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 0.3;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "0";
            };
            class HitHands: HitArms
            {
                armor = 6; //OPTRE Value //Default=3
                material = -1;
                name = "hands";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 0.3;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "HitArms";
            };
            class HitLegs: HitHands
            {
                armor = 6; //OPTRE Value //Default=3
                material = -1;
                name = "legs";
                passThrough = 1;
                radius = 0.14;
                explosionShielding = 0.3;
                visual = "injury_legs";
                minimalHit = 0.01;
                depends = "0";
            };
            class Incapacitated: HitLegs
            {
                armor = 1000; //Default value, Do not change
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = .1;
                visual = "";
                minimalHit = 0;
                depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
            };
            //----------------------------Ace Hitpoints---------------------------
            class HitLeftArm
            {
                armor = 6; //OPTRE Value //Default=1
                material = -1;
                name = "hand_l";
                passThrough = 1;
                radius = 0.08;
                explosionShielding = .1;
                visual = "injury_hands";
                minimalHit = 0.01;
            };
            class HitRightArm: HitLeftArm
            {
                name = "hand_r";
            };
            class HitLeftLeg
            {
                armor = 6; //OPTRE Value //Default=1
                material = -1;
                name = "leg_l";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = .1;
                visual = "injury_legs";
                minimalHit = 0.01;
            };
            class HitRightLeg: HitLeftLeg
            {
                name = "leg_r";
            };
            class ACE_HDBracket
            {
                armor = 1; //Default Value, Do not Change
                material = -1;
                name = "head";
                passThrough = 0;
                radius = 1;
                explosionShielding = .1;
                visual = "";
                minimalHit = 0;
                depends = "HitHead";
            };
        };
	};
	
	class 1stMEU_BDU: MEU_Base_Uniform
	{
		dlc = "1st MEU";
		scope = 1;
		scopeCurator = 0;
		author = "1st MEU Oneill";
		vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
		uniformClass = "OPTRE_UNSC_Army_Uniform_WDL";
		model = "\OPTRE_UNSC_Units\Army\uniform.p3d";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		hiddenSelections[] = {"camo","camo2","insignia","clan","A_SlimLeg"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\uniform_a_woodland_co.paa","OPTRE_UNSC_Units\Army\data\uniform_b_woodland_co.paa"};
		editorSubcategory = "OPTRE_EditorSubcategory_MenWDL";
	};
	
	class BDU_V_Praetorian_Slim: 1stMEU_BDU
	{
		uniformclass = "Praetorian_BDU";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_Urban_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_Urban_CO.paa"};
	};
	
	class BDU_V_Centurion_Slim: 1stMEU_BDU
	{
        uniformclass = "Centurion_BDU";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_MulticamBlack_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_MulticamBlack_CO.paa"};
	};
	
	class BDU_V_Centurion_Urban_Evolved_Slim: 1stMEU_BDU
	{
		uniformclass = "Centurion_BDU_Urban_Evolved";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO.paa"};
	};
	
	class BDU_V_Centurion_Desert_Slim: 1stMEU_BDU
	{
        uniformclass = "Centurion_BDU_Desert";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_Splotch_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_Splotch_CO.paa"};
	};
	
	class BDU_V_Centurion_Snow_Slim: 1stMEU_BDU
	{
        uniformclass = "Centurion_BDU_Snow";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_Tundra_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_Tundra_CO.paa"};
	};
	
	class BDU_V_Centurion_Woodland_Slim: 1stMEU_BDU
	{
        uniformclass = "Centurion_BDU_Woodland";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_TTsKOWoodland_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_TTsKOWoodland_CO.paa"};
	};
	
	class BDU_V_Pegasus_Slim: 1stMEU_BDU
	{
        uniformclass = "Centurion_BDU_Urban_Evolved";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\U\UNSC-A-BLK.paa","LM_OPCAN3.0\BLU\UNSC\U\UNSC-A-BLK.paa"};
	};
	
	class BDU_V_Centurion_Slim_Rolled: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_rolled";
        uniformclass = "Centurion_BDU_Rolled";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_MulticamBlack_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_MulticamBlack_CO.paa"};
	};
	
	class BDU_V_Centurion_Urban_Evolved_Slim_Rolled: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_rolled";
		uniformclass = "Centurion_BDU_Urban_Evolved_Rolled";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO.paa"};
	};
	
	class BDU_V_Centurion_Desert_Slim_Rolled: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_rolled";
        uniformclass = "Centurion_BDU_Desert_Rolled";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_Splotch_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_Splotch_CO.paa"};
	};
	
	class BDU_V_Centurion_Snow_Slim_Rolled: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_rolled";
        uniformclass = "Centurion_BDU_Snow_Rolled";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_Tundra_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_Tundra_CO.paa"};
	};
	
	class BDU_V_Centurion_Woodland_Slim_Rolled: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_rolled";
        uniformclass = "Centurion_BDU_Woodland_Rolled";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_TTsKOWoodland_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_TTsKOWoodland_CO.paa"};
	};
	
	class BDU_V_Pegasus_Slim_Rolled: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_rolled";
        uniformclass = "Centurion_BDU_Urban_Evolved_Rolled";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\U\UNSC-A-BLK.paa","LM_OPCAN3.0\BLU\UNSC\U\UNSC-A-BLK.paa"};
	};
	
	class BDU_V_Centurion_Slim_Short: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_short";
        uniformclass = "Centurion_BDU_Short";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_MulticamBlack_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_MulticamBlack_CO.paa"};
	};
	
	class BDU_V_Centurion_Urban_Evolved_Slim_Short: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_short";
		uniformclass = "Centurion_BDU_Urban_Evolved_Short";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO.paa"};
	};
	
	class BDU_V_Centurion_Desert_Slim_Short: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_short";
        uniformclass = "Centurion_BDU_Desert_Short";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_Splotch_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_Splotch_CO.paa"};
	};
	
	class BDU_V_Centurion_Snow_Slim_Short: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_short";
        uniformclass = "Centurion_BDU_Snow_Short";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_Tundra_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_Tundra_CO.paa"};
	};
	
	class BDU_V_Centurion_Woodland_Slim_Short: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_short";
        uniformclass = "Centurion_BDU_Woodland_Short";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_TTsKOWoodland_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_TTsKOWoodland_CO.paa"};
	};
	
	class BDU_V_Pegasus_Slim_Short: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_short";
        uniformclass = "Centurion_BDU_Urban_Evolved_Short";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\U\UNSC-A-BLK.paa","LM_OPCAN3.0\BLU\UNSC\U\UNSC-A-BLK.paa"};
	};
	
//  End Uniforms
//  Ground Vehicles Start

	class 1stMEU_M313_Elephant: OPTRE_M313_UNSC
	{
        scope = 2;
		scopeCurator = 2;
		accuracy = 1000;
		faction = "MEU_UNSC";
		side = 1;
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
		typicalCargo[] = {"OPTRE_UNSC_Marine_Soldier_Rifleman_AR"};
		displayName = "[WIP][1stMEU] M313 HRV Elephant";
		enginePower = 8000;
		maxOmega = 800;
		peakTorque = 100000;
		torqueCurve[] = {{0,0},{"(3000/4000)","(2650/2850)"},{"(3200/4000)","(2800/2850)"},{"(3400/4000)","(2850/2850)"},{"(3600/4000)","(2800/2850)"},{"(3800/4000)","(2750/2850)"},{"(4000/4000)","(2600/2850)"},{"(4000/4000)","(2350/2850)"}};
		thrustDelay = 0.01;
		clutchStrength = 500.0;
		fuelCapacity = 20000;
		brakeIdleSpeed = 1.78;
		latency = 0.1;
		tankTurnForce = 3200000;
		idleRpm = 1000;
		redRpm = 4000;
		engineLosses = 25;
		transmissionLosses = 15;
		ace_repair_canRepair = 1;
        mass = 50000;
        editorCategory = "MEU_cat_gnd";
        editorsubCategory = "MEU_sub_WIP";
	};		
			
//  Ground Vehicles End
//  Start AI Compositions
	
    class OPTRE_Ins_URF_Soldier_Base: OPTRE_UNSC_Soldier_Base
	{
		dlc = "OPTRE";
		author = "Article 2 Studios";
		scope = 1;
		scopeCurator = 0;
		faction = "OPTRE_Ins";
		side = 0;
		vehicleClass = "OPTRE_Ins_Man_URF_class";
		uniformClass = "OPTRE_Ins_URF_Combat_Uniform";
		model = "\OPTRE_Ins_Units\URF\uniform.p3d";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {"OPTRE_Biofoam"};
		RespawnItems[] = {"OPTRE_Biofoam"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"OPTRE_Ins_URF_Armor1","OPTRE_Ins_URF_Helmet1","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] = {"OPTRE_Ins_URF_Armor1","OPTRE_Ins_URF_Helmet1","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		editorSubcategory = "OPTRE_EditorSubcategory_MenURF";
	};
    class OPTRE_Ins_URF_TeamLead: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"OPTRE_MA5AGL","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5AGL","Throw","Put"};
		magazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		icon = "iconManLeader";
	};
	class LM_OPCAN_FRI_Officer: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Officer";
		uniformClass = "LM_OPCAN_FRI_Uni_Base";
		weapons[] = {"LM_OPCAN_M18AR","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"LM_OPCAN_M18AR","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_RIG","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_RIG","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_SL: O_Soldier_SL_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Squad Leader";
		uniformClass = "LM_OPCAN_FRI_Uni_Base";
		weapons[] = {"LM_OPCAN_M18AR","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"LM_OPCAN_M18AR","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_TL: O_Soldier_TL_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI";
		backpack = "OPTRE_UNSC_Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Team Leader";
		uniformClass = "LM_OPCAN_FRI_Uni_Base";
		weapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"};
		respawnWeapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Rifleman: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Rifleman";
		uniformClass = "LM_OPCAN_FRI_Uni_Base";
		weapons[] = {"LM_OPCAN_M18AR","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"LM_OPCAN_M18AR","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_GL: O_Soldier_GL_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Grenadier";
		uniformClass = "LM_OPCAN_FRI_Uni_Base";
		weapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"};
		respawnWeapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Medic: O_Medic_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Corpsman";
		uniformClass = "LM_OPCAN_FRI_Uni_Base";
		attendant = 1;
		backpack = "OPTRE_UNSC_Rucksack_Medic_Filled";
		weapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Marksman: O_Soldier_M_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "marksman";
		uniformClass = "LM_OPCAN_FRI_Uni_Base";
		weapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_RTO: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "RTO Operator";
		uniformClass = "LM_OPCAN_FRI_Uni_Base";
		backpack = "OPTRE_ANPRC_521_URF";
		weapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_Frihelm: O_Soldier_M_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Sniper";
		uniformClass = "LM_OPCAN_FRI_Uni_Base";
		weapons[] = {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagheye","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagheye","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_AutoRifleman: O_Soldier_AR_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "AutoRifleman";
		uniformClass = "LM_OPCAN_FRI_Uni_Base";
		weapons[] = {"OPTRE_M73_AC","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73_AC","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Crewman: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Crewman";
		uniformClass = "LM_OPCAN_FRI_Uni_Base";
		weapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_FRI_RIG","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_FRI_RIG","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Rifleman_AT: O_Soldier_LAT_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Rifleman (AT)";
		uniformClass = "LM_OPCAN_FRI_Uni_Base";
		backpack = "OPTRE_UNSC_Rucksack_M41";
		weapons[] = {"LM_OPCAN_M18AR","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] = {"LM_OPCAN_M18AR","Throw","Put","OPTRE_M41_SSR"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Breacher: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Breacher";
		uniformClass = "LM_OPCAN_FRI_Uni_Base";
		weapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Engineer: O_Engineer_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI";
		backpack = "OPTRE_UNSC_Rucksack_Heavy_Demo";
		engineer = 1;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Engineer";
		uniformClass = "LM_OPCAN_FRI_Uni_Base";
		weapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Officer_WDL: O_Officer_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_WDL";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Officer";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W";
		weapons[] = {"LM_OPCAN_M18AR","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"LM_OPCAN_M18AR","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_RIG","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_RIG","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_SL_WDL: O_Soldier_SL_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_WDL";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Squad Leader";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W";
		weapons[] = {"LM_OPCAN_M18AR","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"LM_OPCAN_M18AR","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_TL_WDL: O_Soldier_TL_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_WDL";
		backpack = "OPTRE_UNSC_Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Team Leader";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W";
		weapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"};
		respawnWeapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Rifleman_WDL: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_WDL";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Rifleman";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W";
		weapons[] = {"LM_OPCAN_M18AR","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"LM_OPCAN_M18AR","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_GL_WDL: O_Soldier_GL_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_WDL";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Grenadier";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W";
		weapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"};
		respawnWeapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Medic_WDL: O_Medic_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_WDL";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Corpsman";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W";
		attendant = 1;
		backpack = "OPTRE_UNSC_Rucksack_Medic_Filled";
		weapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Marksman_WDL: O_Soldier_M_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_WDL";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "marksman";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W";
		weapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_RTO_WDL: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_WDL";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "RTO Operator";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W";
		backpack = "OPTRE_ANPRC_521_URF";
		weapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_Frihelm_W_WDL: O_Soldier_M_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_WDL";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Sniper";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W";
		weapons[] = {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagheye","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagheye","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_AutoRifleman_WDL: O_Soldier_AR_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_WDL";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "AutoRifleman";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W";
		weapons[] = {"OPTRE_M73_AC","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73_AC","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Crewman_WDL: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_WDL";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Crewman";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W";
		weapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_FRI_RIG","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_FRI_RIG","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Rifleman_AT_WDL: O_Soldier_LAT_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_WDL";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Rifleman (AT)";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W";
		backpack = "OPTRE_UNSC_Rucksack_M41";
		weapons[] = {"LM_OPCAN_M18AR","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] = {"LM_OPCAN_M18AR","Throw","Put","OPTRE_M41_SSR"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Breacher_WDL: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_WDL";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Breacher";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W";
		weapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Engineer_WDL: O_Engineer_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_WDL";
		backpack = "OPTRE_UNSC_Rucksack_Heavy_Demo";
		engineer = 1;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Engineer";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W";
		weapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Officer_DES: O_Officer_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_DES";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Officer";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D";
		weapons[] = {"LM_OPCAN_M18AR","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"LM_OPCAN_M18AR","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_RIG","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_RIG","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_SL_DES: O_Soldier_SL_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_DES";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Squad Leader";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D";
		weapons[] = {"LM_OPCAN_M18AR","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"LM_OPCAN_M18AR","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_TL_DES: O_Soldier_TL_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_DES";
		backpack = "OPTRE_UNSC_Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Team Leader";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D";
		weapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"};
		respawnWeapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Rifleman_DES: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_DES";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Rifleman";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D";
		weapons[] = {"LM_OPCAN_M18AR","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"LM_OPCAN_M18AR","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_GL_DES: O_Soldier_GL_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_DES";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Grenadier";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D";
		weapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"};
		respawnWeapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Medic_DES: O_Medic_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_DES";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Corpsman";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D";
		attendant = 1;
		backpack = "OPTRE_UNSC_Rucksack_Medic_Filled";
		weapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Marksman_DES: O_Soldier_M_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_DES";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "marksman";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D";
		weapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_RTO_DES: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_DES";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "RTO Operator";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D";
		backpack = "OPTRE_ANPRC_521_URF";
		weapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_Frihelm_W_DES: O_Soldier_M_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_DES";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Sniper";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D";
		weapons[] = {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagheye","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagheye","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_AutoRifleman_DES: O_Soldier_AR_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_DES";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "AutoRifleman";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D";
		weapons[] = {"OPTRE_M73_AC","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73_AC","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Crewman_DES: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_DES";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Crewman";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D";
		weapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_FRI_RIG","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_FRI_RIG","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Rifleman_AT_DES: O_Soldier_LAT_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_DES";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Rifleman (AT)";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D";
		backpack = "OPTRE_UNSC_Rucksack_M41";
		weapons[] = {"LM_OPCAN_M18AR","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] = {"LM_OPCAN_M18AR","Throw","Put","OPTRE_M41_SSR"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Breacher_DES: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_DES";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Breacher";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D";
		weapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_FRI_Engineer_DES: O_Engineer_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_FRI_DES";
		backpack = "OPTRE_UNSC_Rucksack_Heavy_Demo";
		engineer = 1;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Engineer";
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D";
		weapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
    class LM_OPCAN_KOS_Officer: O_Soldier_F
    {
		author = "J.Burgess";
		faction = "LM_OPCAN_KOS";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Officer";
		uniformClass = "LM_OPCAN_KOS_Gorka3_uni_Base";
		weapons[] = {"LM_OPCAN_CTAR","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"LM_OPCAN_CTAR","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_KOS_SL: O_Soldier_SL_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_KOS";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Squad Leader";
		uniformClass = "LM_OPCAN_KOS_Gorka2_uni_Base";
		weapons[] = {"LM_OPCAN_CTAR","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"LM_OPCAN_CTAR","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_KOS_TL: O_Soldier_TL_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_KOS";
		backpack = "OPTRE_UNSC_Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Team Leader";
		uniformClass = "LM_OPCAN_KOS_Gorka_uni_Base";
		weapons[] = {"LM_OPCAN_CTAR_GL","Throw","Put"};
		respawnWeapons[] = {"LM_OPCAN_CTAR_GL","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_KOS_Rifleman: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_KOS";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Rifleman";
		uniformClass = "LM_OPCAN_KOS_Gorka_uni_Base";
		weapons[] = {"LM_OPCAN_CTAR","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"LM_OPCAN_CTAR","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_KOS_GL: O_Soldier_GL_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_KOS";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Grenadier";
		uniformClass = "LM_OPCAN_KOS_Gorka3_uni_Base";
		weapons[] = {"LM_OPCAN_CTAR_GL","Throw","Put"};
		respawnWeapons[] = {"LM_OPCAN_CTAR_GL","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_KOS_Medic: O_Medic_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_KOS";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Corpsman";
		uniformClass = "LM_OPCAN_KOS_Gorka4_uni_Base";
		attendant = 1;
		backpack = "OPTRE_UNSC_Rucksack_Medic_Filled";
		weapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_KOS_Marksman: O_Soldier_M_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_KOS";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "marksman";
		uniformClass = "LM_OPCAN_KOS_Gorka2_uni_Base";
		weapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_KOS_RTO: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_KOS";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "RTO Operator";
		uniformClass = "LM_OPCAN_KOS_Gorka_uni_Base";
		backpack = "OPTRE_ANPRC_521_URF";
		weapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_KOS_Sniper: O_Soldier_M_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_KOS";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Sniper";
		uniformClass = "LM_OPCAN_KOS_Gorka4_uni_Base";
		weapons[] = {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_BRW_UP_Shemagheye","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_BRW_UP_Shemagheye","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_KOS_AutoRifleman: O_Soldier_AR_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_KOS";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "AutoRifleman";
		uniformClass = "LM_OPCAN_KOS_Gorka_uni_Base";
		weapons[] = {"LM_OPCAN_CTAR_SAW","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"LM_OPCAN_CTAR_SAW","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_KOS_Crewman: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_KOS";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Crewman";
		uniformClass = "LM_OPCAN_KOS_Gorka_uni_Base";
		weapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_KOS_Rifleman_AT: O_Soldier_LAT_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_KOS";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Rifleman (AT)";
		uniformClass = "LM_OPCAN_KOS_Gorka4_uni_Base";
		backpack = "OPTRE_UNSC_Rucksack_M41";
		weapons[] = {"LM_OPCAN_CTAR","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] = {"LM_OPCAN_CTAR","Throw","Put","OPTRE_M41_SSR"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_KOS_Breacher: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_KOS";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Breacher";
		uniformClass = "LM_OPCAN_KOS_Gorka2_uni_Base";
		weapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_KOS_Engineer: O_Engineer_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_KOS";
		backpack = "OPTRE_UNSC_Rucksack_Heavy_Demo";
		engineer = 1;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Engineer";
		uniformClass = "LM_OPCAN_KOS_Gorka3_uni_Base";
		weapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
    class LM_OPCAN_URA_Officer: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_URA";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Officer";
		uniformClass = "LM_OPCAN_URA_Uni";
		weapons[] = {"OPTRE_MA32","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA32","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_URA_SL: O_Soldier_SL_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_URA";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Squad Leader";
		uniformClass = "LM_OPCAN_URA_Uni";
		weapons[] = {"OPTRE_MA32","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA32","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_URA_TL: O_Soldier_TL_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_URA";
		backpack = "OPTRE_UNSC_Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Team Leader";
		uniformClass = "LM_OPCAN_URA_Uni";
		weapons[] = {"OPTRE_MA32GL","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA32GL","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_URA_Rifleman: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_URA";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Rifleman";
		uniformClass = "LM_OPCAN_URA_Uni";
		weapons[] = {"OPTRE_MA32","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA32","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_URA_GL: O_Soldier_GL_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_URA";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Grenadier";
		uniformClass = "LM_OPCAN_URA_Uni";
		weapons[] = {"OPTRE_MA32GL","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA32GL","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_URA_Medic: O_Medic_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_URA";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Corpsman";
		uniformClass = "LM_OPCAN_URA_Uni";
		attendant = 1;
		backpack = "OPTRE_UNSC_Rucksack_Medic_Filled";
		weapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_URA_Marksman: O_Soldier_M_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_URA";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "marksman";
		uniformClass = "LM_OPCAN_URA_Uni";
		weapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_URA_RTO: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_URA";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "RTO Operator";
		uniformClass = "LM_OPCAN_URA_Uni";
		backpack = "OPTRE_ANPRC_521_URF";
		weapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_URA_Sniper: O_Soldier_M_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_URA";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Sniper";
		uniformClass = "LM_OPCAN_URA_Uni";
		weapons[] = {"OPTRE_SRS99C_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_SRS99C_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_URA_AutoRifleman: O_Soldier_AR_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_URA";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "AutoRifleman";
		uniformClass = "LM_OPCAN_URA_Uni";
		weapons[] = {"OPTRE_M73_AC","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73_AC","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_URA_Crewman: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_URA";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Crewman";
		uniformClass = "LM_OPCAN_URA_Uni";
		weapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_URA_Rifleman_AT: O_Soldier_LAT_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_URA";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Rifleman (AT)";
		uniformClass = "LM_OPCAN_URA_Uni";
		backpack = "OPTRE_UNSC_Rucksack_M41";
		weapons[] = {"OPTRE_MA32","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] = {"OPTRE_MA32","Throw","Put","OPTRE_M41_SSR"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_URA_Breacher: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_URA";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Breacher";
		uniformClass = "LM_OPCAN_URA_Uni";
		weapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		linkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_URA_Engineer: O_Engineer_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_URA";
		backpack = "OPTRE_UNSC_Rucksack_Heavy_Demo";
		engineer = 1;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Engineer";
		uniformClass = "LM_OPCAN_URA_Uni";
		weapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		linkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
    class LM_OPCAN_SU_Officer: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_SU";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Officer";
		uniformClass = "LM_OPCAN_SU2_Uni";
		weapons[] = {"OPTRE_MA32","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA32","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_BRW_Shemagh","LM_OPCAN_SU_FLAK_VEST","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_BRW_Shemagh","LM_OPCAN_SU_FLAK_VEST","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_SU_SL: O_Soldier_SL_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_SU";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Squad Leader";
		uniformClass = "LM_OPCAN_SU2_Uni";
		weapons[] = {"OPTRE_MA32","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA32","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42_2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42_2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_SU_TL: O_Soldier_TL_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_SU";
		backpack = "OPTRE_UNSC_Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Team Leader";
		uniformClass = "LM_OPCAN_SU_Uni";
		weapons[] = {"OPTRE_MA32GL","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA32GL","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_DES_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_DES_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_SU_Rifleman: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_SU";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Rifleman";
		uniformClass = "LM_OPCAN_SU_Uni";
		weapons[] = {"OPTRE_MA32","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA32","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_DES_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_DES_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_SU_GL: O_Soldier_GL_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_SU";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Grenadier";
		uniformClass = "LM_OPCAN_SU_Uni";
		weapons[] = {"OPTRE_MA32GL","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA32GL","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_SU_Medic: O_Medic_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_SU";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Corpsman";
		uniformClass = "LM_OPCAN_SU_Uni";
		attendant = 1;
		backpack = "OPTRE_UNSC_Rucksack_Medic_Filled";
		weapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_SU_Marksman: O_Soldier_M_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_SU";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "marksman";
		uniformClass = "LM_OPCAN_SU2_Uni";
		weapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42_2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42_2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_SU_RTO: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_SU";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "RTO Operator";
		uniformClass = "LM_OPCAN_SU_Uni";
		backpack = "OPTRE_ANPRC_521_URF";
		weapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_DES_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_DES_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_SU_Sniper: O_Soldier_M_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_SU";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Sniper";
		uniformClass = "LM_OPCAN_SU2_Uni";
		weapons[] = {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_BRW_UP_Shemagheye","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_SU_Sniper","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_BRW_UP_Shemagheye","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_SU_Sniper","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_SU_AutoRifleman: O_Soldier_AR_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_SU";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "AutoRifleman";
		uniformClass = "LM_OPCAN_SU_Uni";
		weapons[] = {"OPTRE_M73_AC","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73_AC","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_SU_Crewman: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_SU";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Crewman";
		uniformClass = "LM_OPCAN_SU2_Uni";
		weapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_SU_Sniper","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_SU_Sniper","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_SU_Rifleman_AT: O_Soldier_LAT_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_SU";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Rifleman (AT)";
		uniformClass = "LM_OPCAN_SU2_Uni";
		backpack = "OPTRE_UNSC_Rucksack_M41";
		weapons[] = {"OPTRE_MA32","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] = {"OPTRE_MA32","Throw","Put","OPTRE_M41_SSR"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
		linkedItems[] = {"LM_OPCAN_DES_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42_2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_DES_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42_2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_SU_Breacher: O_Soldier_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_SU";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Breacher";
		uniformClass = "LM_OPCAN_SU_Uni";
		weapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		linkedItems[] = {"LM_OPCAN_DES_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_DES_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LM_OPCAN_SU_Engineer: O_Engineer_F
	{
		author = "J.Burgess";
		faction = "LM_OPCAN_SU";
		backpack = "OPTRE_UNSC_Rucksack_Heavy_Demo";
		engineer = 1;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"};
		displayName = "Engineer";
		uniformClass = "LM_OPCAN_SU_Uni";
		weapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		linkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class OPTRE_FC_Elite_Minor: OPTRE_FC_Elite_Undersuit
	{
		scope = 2;
		scopeCurator = 2;
		faceType = "Elite";
		author = "Article 2 Studios";
		displayName = "Sangheili Minor";
		linkedItems[] = {"OPTRE_FC_Elite_Armor_Minor","OPTRE_FC_Elite_Helmet_Minor","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		respawnLinkedItems[] = {"OPTRE_FC_Elite_Armor_Minor","OPTRE_FC_Elite_Helmet_Minor","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		weapons[] = {"OPTRE_FC_T25_Rifle","Throw","Put"};
		respawnWeapons[] = {"OPTRE_FC_T25_Rifle","Throw","Put"};
		magazines[] = {"OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery"};
		respawnMagazines[] = {"OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery"};
	};
	class OPTRE_FC_Elite_Major: OPTRE_FC_Elite_Minor
	{
		scope = 2;
		scopeCurator = 2;
		author = "Article 2 Studios";
		displayName = "Sangheili Major";
		linkedItems[] = {"OPTRE_FC_Elite_Armor_Major","OPTRE_FC_Elite_Helmet_Major","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		respawnLinkedItems[] = {"OPTRE_FC_Elite_Armor_Major","OPTRE_FC_Elite_Helmet_Major","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		weapons[] = {"OPTRE_FC_T51_Repeater","Throw","Put"};
		respawnWeapons[] = {"OPTRE_FC_T51_Repeater","Throw","Put"};
		magazines[] = {"OPTRE_FC_T51_Repeater_Battery","OPTRE_FC_T51_Repeater_Battery","OPTRE_FC_T51_Repeater_Battery","OPTRE_FC_T51_Repeater_Battery"};
		respawnMagazines[] = {"OPTRE_FC_T51_Repeater_Battery","OPTRE_FC_T51_Repeater_Battery","OPTRE_FC_T51_Repeater_Battery","OPTRE_FC_T51_Repeater_Battery"};
	};
	class OPTRE_FC_Elite_SpecOps: OPTRE_FC_Elite_Minor
	{
		scope = 2;
		scopeCurator = 2;
		author = "Article 2 Studios";
		displayName = "Sangheili Ranger";
		linkedItems[] = {"OPTRE_FC_Elite_Armor_SpecOps","OPTRE_FC_Elite_Helmet_SpecOps","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		respawnLinkedItems[] = {"OPTRE_FC_Elite_Armor_SpecOps","OPTRE_FC_Elite_Helmet_SpecOps","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		weapons[] = {"OPTRE_FC_T50_SRS","Throw","Put"};
		respawnWeapons[] = {"OPTRE_FC_T50_SRS","Throw","Put"};
		magazines[] = {"OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery"};
		respawnMagazines[] = {"OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery"};
	};
	class OPTRE_FC_Elite_Ultra: OPTRE_FC_Elite_Minor
	{
		scope = 2;
		scopeCurator = 2;
		author = "Article 2 Studios";
		displayName = "Sangheili Ultra";
		linkedItems[] = {"OPTRE_FC_Elite_Armor_Ultra","OPTRE_FC_Elite_Helmet_Ultra","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		respawnLinkedItems[] = {"OPTRE_FC_Elite_Armor_Ultra","OPTRE_FC_Elite_Helmet_Ultra","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		weapons[] = {"OPTRE_FC_T51_Carbine","Throw","Put"};
		respawnWeapons[] = {"OPTRE_FC_T51_Carbine","Throw","Put"};
		magazines[] = {"OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge"};
		respawnMagazines[] = {"OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge"};
	};
	class OPTRE_FC_Elite_Zealot: OPTRE_FC_Elite_Ultra
	{
		scope = 2;
		scopeCurator = 2;
		author = "Article 2 Studios";
		displayName = "Sangheili Zealot";
		linkedItems[] = {"OPTRE_FC_Elite_Armor_Zealot","OPTRE_FC_Elite_Helmet_Zealot","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		respawnLinkedItems[] = {"OPTRE_FC_Elite_Armor_Zealot","OPTRE_FC_Elite_Helmet_Zealot","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		weapons[] = {"OPTRE_FC_T51J_Repeater","Throw","Put"};
		respawnWeapons[] = {"OPTRE_FC_T51J_Repeater","Throw","Put"};
		magazines[] = {"OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery"};
		respawnMagazines[] = {"OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery"};
	};
	class OPTRE_FC_Elite_FieldMarshal: OPTRE_FC_Elite_Zealot
	{
		scope = 2;
		scopeCurator = 2;
		author = "Article 2 Studios";
		displayName = "Sangheili Field Marshal";
		linkedItems[] = {"OPTRE_FC_Elite_Armor_FieldMarshal","OPTRE_FC_Elite_Helmet_FieldMarshal","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		respawnLinkedItems[] = {"OPTRE_FC_Elite_Armor_FieldMarshal","OPTRE_FC_Elite_Helmet_FieldMarshal","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
	};
	class OPTRE_FC_Elite_HonorGuard: OPTRE_FC_Elite_Zealot
	{
		scope = 2;
		scopeCurator = 2;
		author = "Article 2 Studios";
		displayName = "Sangheili Honor Guard";
		linkedItems[] = {"OPTRE_FC_Elite_Armor_HonorGuard","OPTRE_FC_Elite_Helmet_HonorGuard","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		respawnLinkedItems[] = {"OPTRE_FC_Elite_Armor_HonorGuard","OPTRE_FC_Elite_Helmet_HonorGuard","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		weapons[] = {"OPTRE_FC_T25J_Rifle","Throw","Put"};
		respawnWeapons[] = {"OPTRE_FC_T25J_Rifle","Throw","Put"};
		magazines[] = {"OPTRE_FC_T25J_Rifle_Battery","OPTRE_FC_T25J_Rifle_Battery","OPTRE_FC_T25J_Rifle_Battery"};
		respawnMagazines[] = {"OPTRE_FC_T25J_Rifle_Battery","OPTRE_FC_T25J_Rifle_Battery","OPTRE_FC_T25J_Rifle_Battery"};
	};
	class OPTRE_FC_Elite_HonorGuard_Ultra: OPTRE_FC_Elite_Zealot
	{
		scope = 2;
		scopeCurator = 2;
		author = "Article 2 Studios";
		displayName = "Ves 'Padee";
		editorSubcategory = "OPTRE_FC_EditorSubcategory_SangheiliS";
		linkedItems[] = {"OPTRE_FC_Elite_Armor_HonorGuard_Ultra","OPTRE_FC_Elite_Helmet_HonorGuard_Ultra","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		respawnLinkedItems[] = {"OPTRE_FC_Elite_Armor_HonorGuard_Ultra","OPTRE_FC_Elite_Helmet_HonorGuard_Ultra","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		weapons[] = {"OPTRE_FC_T51J_Repeater","Throw","Put"};
		respawnWeapons[] = {"OPTRE_FC_T51J_Repeater","Throw","Put"};
		magazines[] = {"OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery"};
		respawnMagazines[] = {"OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery"};
	};
    class OPTRE_Ins_BJ_Soldier_Base: OPTRE_UNSC_Soldier_Base
	{
		dlc = "OPTRE";
		author = "Article 2 Studios";
		scope = 1;
		scopeCurator = 0;
		faction = "OPTRE_Ins";
		side = 0;
		vehicleClass = "OPTRE_Ins_Man_URF_class";
		uniformClass = "OPTRE_Ins_BJ_Undersuit";
		model = "\OPTRE_Ins_Units\BJ\uniform.p3d";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {"OPTRE_Biofoam"};
		RespawnItems[] = {"OPTRE_Biofoam"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"OPTRE_Ins_BJ_Armor","OPTRE_Ins_BJ_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] = {"OPTRE_Ins_BJ_Armor","OPTRE_Ins_BJ_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		editorSubcategory = "OPTRE_EditorSubcategory_MenBJ";
	};
	class OPTRE_Ins_BJ_Soldier_URB_Base: OPTRE_Ins_BJ_Soldier_Base
	{
		dlc = "OPTRE";
		author = "Article 2 Studios";
		linkedItems[] = {"OPTRE_Ins_BJ_Armor_URB","OPTRE_Ins_BJ_Helmet_URB","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] = {"OPTRE_Ins_BJ_Armor_URB","OPTRE_Ins_BJ_Helmet_URB","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
	};
	class OPTRE_Ins_BJ_Soldier_Scout: OPTRE_Ins_BJ_Soldier_Base
	{
		dlc = "OPTRE";
		displayName = "Scout";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_BJ_Soldier_Rifleman_AR: OPTRE_Ins_BJ_Soldier_Base
	{
		dlc = "OPTRE";
		displayName = "Rifleman (HMG38)";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"OPTRE_HMG38_Rifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_HMG38_Rifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_BJ_Soldier_Rifleman_BR: OPTRE_Ins_BJ_Soldier_Base
	{
		dlc = "OPTRE";
		displayName = "Rifleman (BR55)";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_BJ_Soldier_Rifleman_AT: OPTRE_Ins_BJ_Soldier_Base
	{
		dlc = "OPTRE";
		displayName = "Rifleman (AT)";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"OPTRE_HMG38_Rifle","OPTRE_M6G_SF","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] = {"OPTRE_HMG38_Rifle","OPTRE_M6G_SF","Throw","Put","OPTRE_M41_SSR"};
		magazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		icon = "iconManAT";
	};
	class OPTRE_Ins_BJ_Soldier_Automatic_Rifleman: OPTRE_Ins_BJ_Soldier_Base
	{
		dlc = "OPTRE";
		displayName = "Automatic Rifleman";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"OPTRE_M73","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		icon = "iconManMG";
	};
	class OPTRE_Ins_BJ_Soldier_Marksman: OPTRE_Ins_BJ_Soldier_Base
	{
		dlc = "OPTRE";
		displayName = "Marksman";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_BJ_Soldier_Scout_Sniper: OPTRE_Ins_BJ_Soldier_Base
	{
		dlc = "OPTRE";
		displayName = "Scout Sniper";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_BJ_Soldier_TeamLeader: OPTRE_Ins_BJ_Soldier_Base
	{
		dlc = "OPTRE";
		displayName = "Team Leader";
		scope = 2;
		scopeCurator = 2;
		backpack = "OPTRE_ANPRC_521_Black";
		weapons[] = {"OPTRE_HMG38_Rifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_HMG38_Rifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		icon = "iconManLeader";
	};
	class OPTRE_Ins_BJ_Soldier_Corpsman: OPTRE_Ins_BJ_Soldier_Base
	{
		dlc = "OPTRE";
		attendant = 1;
		displayName = "Corpsman";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
		respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
		icon = "iconManMedic";
	};
	class OPTRE_Ins_BJ_Soldier_Engineer: OPTRE_Ins_BJ_Soldier_Base
	{
		dlc = "OPTRE";
		engineer = 1;
		displayName = "Engineer";
		scope = 2;
		scopeCurator = 2;
		backpack = "OPTRE_B_TacticalPack_blk_Demo";
		weapons[] = {"OPTRE_HMG38_Rifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_HMG38_Rifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		icon = "iconManExplosive";
	};
	class OPTRE_Ins_BJ_Soldier_URB_Scout: OPTRE_Ins_BJ_Soldier_URB_Base
	{
		dlc = "OPTRE";
		displayName = "Scout";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_BJ_Soldier_URB_Rifleman_AR: OPTRE_Ins_BJ_Soldier_URB_Base
	{
		dlc = "OPTRE";
		displayName = "Rifleman (HMG38)";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"OPTRE_HMG38_Rifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_HMG38_Rifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_BJ_Soldier_URB_Rifleman_BR: OPTRE_Ins_BJ_Soldier_URB_Base
	{
		dlc = "OPTRE";
		displayName = "Rifleman (BR55)";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_BJ_Soldier_URB_Rifleman_AT: OPTRE_Ins_BJ_Soldier_URB_Base
	{
		dlc = "OPTRE";
		displayName = "Rifleman (AT)";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"OPTRE_HMG38_Rifle","OPTRE_M6G_SF","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] = {"OPTRE_HMG38_Rifle","OPTRE_M6G_SF","Throw","Put","OPTRE_M41_SSR"};
		magazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		icon = "iconManAT";
	};
	class OPTRE_Ins_BJ_Soldier_URB_Automatic_Rifleman: OPTRE_Ins_BJ_Soldier_URB_Base
	{
		dlc = "OPTRE";
		displayName = "Automatic Rifleman";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"OPTRE_M73","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		icon = "iconManMG";
	};
	class OPTRE_Ins_BJ_Soldier_URB_Marksman: OPTRE_Ins_BJ_Soldier_URB_Base
	{
		dlc = "OPTRE";
		displayName = "Marksman";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_BJ_Soldier_URB_Scout_Sniper: OPTRE_Ins_BJ_Soldier_URB_Base
	{
		dlc = "OPTRE";
		displayName = "Scout Sniper";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_BJ_Soldier_URB_TeamLeader: OPTRE_Ins_BJ_Soldier_URB_Base
	{
		dlc = "OPTRE";
		displayName = "Team Leader";
		scope = 2;
		scopeCurator = 2;
		backpack = "OPTRE_ANPRC_521_Black";
		weapons[] = {"OPTRE_HMG38_Rifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_HMG38_Rifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		icon = "iconManLeader";
	};
	class OPTRE_Ins_BJ_Soldier_URB_Corpsman: OPTRE_Ins_BJ_Soldier_URB_Base
	{
		dlc = "OPTRE";
		attendant = 1;
		displayName = "Corpsman";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
		respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
		icon = "iconManMedic";
	};
	class OPTRE_Ins_BJ_Soldier_URB_Engineer: OPTRE_Ins_BJ_Soldier_URB_Base
	{
		dlc = "OPTRE";
		engineer = 1;
		displayName = "Engineer";
		scope = 2;
		scopeCurator = 2;
		backpack = "OPTRE_B_TacticalPack_blk_Demo";
		weapons[] = {"OPTRE_HMG38_Rifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_HMG38_Rifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		icon = "iconManExplosive";
	};
    class OPTRE_Ins_ER_soldier_base: I_Soldier_base_F
	{
		dlc = "OPTRE";
		scope = 0;
		faction = "OPTRE_Ins";
		side = 0;
		author = "Article 2 Studios";
		displayName = "Innie_Base";
		vehicleClass = "OPTRE_Ins_Man_ER_class";
		identityTypes[] = {"LanguageENG_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","LanguageGRE_F","Head_Greek","Head_African","Head_Euro","Head_Asian","Head_NATO","G_IRAN_default"};
		genericNames = "NATOMen";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {"OPTRE_Biofoam"};
		RespawnItems[] = {"OPTRE_Biofoam"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo"};
		editorSubcategory = "OPTRE_EditorSubcategory_MenINS";
	};
	class OPTRE_Ins_ER_Rebel_tan: OPTRE_Ins_ER_soldier_base
	{
		dlc = "OPTRE";
		scope = 1;
		displayName = "Ins_Base [Sweater Tan]";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "OPTRE_INS_ER_uniform_GAtan";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\Data\innie_apparel_tan_CO.paa"};
	};
	class OPTRE_Ins_ER_Rebel_green: OPTRE_Ins_ER_Rebel_tan
	{
		dlc = "OPTRE";
		scope = 1;
		displayName = "Ins_Base [Sweater Green]";
		uniformClass = "OPTRE_INS_ER_uniform_GAgreen";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\Data\innie_apparel_green_CO.paa"};
	};
	class OPTRE_Ins_ER_Insurgent_OD: I_G_Soldier_A_F
	{
		dlc = "OPTRE";
		modelSides[] = {0,1,2,3};
		side = 0;
		scope = 1;
		faction = "OPTRE_Ins";
		author = "Article 2 Studios";
		displayName = "Insurgent (OD)";
		vehicleClass = "OPTRE_Ins_Man_ER_class";
		uniformClass = "OPTRE_Ins_ER_uniform_GGod";
		identityTypes[] = {"LanguageENG_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","LanguageGRE_F","Head_Greek","Head_African","Head_Euro","Head_Asian","Head_NATO","G_IRAN_default"};
		genericNames = "NATOMen";
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 0;
		allowedHeadgear[] = {};
		backpack = "";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\Data\innie_garments_od_co.paa","OPTRE_Ins_Units\Data\inne_CombatUniformOD_co.paa"};
		editorSubcategory = "OPTRE_EditorSubcategory_MenINS";
	};
	class OPTRE_Ins_ER_Insurgent_Grey: OPTRE_Ins_ER_Insurgent_OD
	{
		dlc = "OPTRE";
		scope = 1;
		displayName = "Insurgent (Grey)";
		uniformClass = "OPTRE_Ins_ER_uniform_GGod";
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\Data\innie_garments_grey_co.paa","OPTRE_Ins_Units\Data\inne_CombatUniformOD_co.paa"};
	};
	class OPTRE_Ins_ER_man_jacket_surplus_OD: I_G_Soldier_M_F
	{
		dlc = "OPTRE";
		modelSides[] = {0,1,2,3};
		side = 0;
		scope = 1;
		faction = "OPTRE_Ins";
		author = "Article 2 Studios";
		displayName = "Insurgent (Surplus Jacket 1)";
		vehicleClass = "OPTRE_Ins_Man_ER_class";
		uniformClass = "OPTRE_Ins_ER_jacket_surplus_OD";
		identityTypes[] = {"LanguageENG_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","LanguageGRE_F","Head_Greek","Head_African","Head_Euro","Head_Asian","Head_NATO","G_IRAN_default"};
		genericNames = "NATOMen";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {"OPTRE_Biofoam"};
		RespawnItems[] = {"OPTRE_Biofoam"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 0;
		allowedHeadgear[] = {};
		backpack = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_jacket_surplus_OD2.paa"};
		editorSubcategory = "OPTRE_EditorSubcategory_MenINS";
	};
	class OPTRE_Ins_ER_man_jacket_surplus_redshirt: OPTRE_Ins_ER_man_jacket_surplus_OD
	{
		dlc = "OPTRE";
		modelSides[] = {0,1,2,3};
		side = 0;
		scope = 1;
		faction = "OPTRE_Ins";
		author = "Article 2 Studios";
		displayName = "Insurgent (Surplus Jacket 4)";
		vehicleClass = "OPTRE_Ins_Man_ER_class";
		uniformClass = "OPTRE_Ins_ER_jacket_surplus_redshirt";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {"OPTRE_Biofoam"};
		RespawnItems[] = {"OPTRE_Biofoam"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 0;
		allowedHeadgear[] = {};
		backpack = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_jacket_surplus_redshirt.paa"};
	};
	class OPTRE_Ins_ER_man_jacket_surplus_brown: OPTRE_Ins_ER_man_jacket_surplus_OD
	{
		dlc = "OPTRE";
		modelSides[] = {0,1,2,3};
		side = 0;
		scope = 1;
		faction = "OPTRE_Ins";
		author = "Article 2 Studios";
		displayName = "Insurgent (Surplus Jacket 5)";
		vehicleClass = "OPTRE_Ins_Man_ER_class";
		uniformClass = "OPTRE_Ins_ER_jacket_surplus_brown";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {"OPTRE_Biofoam"};
		RespawnItems[] = {"OPTRE_Biofoam"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 0;
		allowedHeadgear[] = {};
		backpack = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_jacket_surplus_brown.paa"};
	};
	class OPTRE_Ins_ER_man_jacket_brown_surplus: OPTRE_Ins_ER_man_jacket_surplus_OD
	{
		dlc = "OPTRE";
		modelSides[] = {0,1,2,3};
		side = 0;
		scope = 1;
		faction = "OPTRE_Ins";
		author = "Article 2 Studios";
		displayName = "Insurgent (Brown Jacket)";
		vehicleClass = "OPTRE_Ins_Man_ER_class";
		uniformClass = "OPTRE_Ins_ER_jacket_brown_surplus";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {"OPTRE_Biofoam"};
		RespawnItems[] = {"OPTRE_Biofoam"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 0;
		allowedHeadgear[] = {};
		backpack = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_jacket_brown_surplus.paa"};
	};
	class OPTRE_Ins_ER_man_jacket_od_surplus: OPTRE_Ins_ER_man_jacket_surplus_OD
	{
		dlc = "OPTRE";
		modelSides[] = {0,1,2,3};
		side = 0;
		scope = 1;
		faction = "OPTRE_Ins";
		author = "Article 2 Studios";
		displayName = "Insurgent (OD Jacket)";
		vehicleClass = "OPTRE_Ins_Man_ER_class";
		uniformClass = "OPTRE_Ins_ER_jacket_OD_surplus";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {"OPTRE_Biofoam"};
		RespawnItems[] = {"OPTRE_Biofoam"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 0;
		allowedHeadgear[] = {};
		backpack = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_jacket_OD_surplus.paa"};
	};
	class OPTRE_Ins_ER_man_jacket_surgeon1: OPTRE_Ins_ER_man_jacket_surplus_OD
	{
		dlc = "OPTRE";
		modelSides[] = {0,1,2,3};
		side = 0;
		scope = 1;
		faction = "OPTRE_Ins";
		author = "Article 2 Studios";
		displayName = "Insurgent (Surgeon1)";
		vehicleClass = "OPTRE_Ins_Man_ER_class";
		uniformClass = "OPTRE_Ins_ER_jacket_surgeon1";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {"OPTRE_Biofoam"};
		RespawnItems[] = {"OPTRE_Biofoam"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 0;
		allowedHeadgear[] = {};
		backpack = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_jacket_surgeon1.paa"};
	};
	class OPTRE_Ins_ER_man_jacket_surgeon2: OPTRE_Ins_ER_man_jacket_surplus_OD
	{
		dlc = "OPTRE";
		modelSides[] = {0,1,2,3};
		side = 0;
		scope = 1;
		faction = "OPTRE_Ins";
		author = "Article 2 Studios";
		displayName = "Insurgent (Surgeon Jacket 2)";
		vehicleClass = "OPTRE_Ins_Man_ER_class";
		uniformClass = "OPTRE_Ins_ER_jacket_surgeon2";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {"OPTRE_Biofoam"};
		RespawnItems[] = {"OPTRE_Biofoam"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 0;
		allowedHeadgear[] = {};
		backpack = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_jacket_surgeon2.paa"};
	};
	class OPTRE_Ins_ER_man_rolled_surplus_black: I_G_Soldier_AR_F
	{
		dlc = "OPTRE";
		modelSides[] = {0,1,2,3};
		side = 0;
		scope = 1;
		faction = "OPTRE_Ins";
		author = "Article 2 Studios";
		displayName = "Rebel (Surplus/Black)";
		vehicleClass = "OPTRE_Ins_Man_ER_class";
		uniformClass = "OPTRE_Ins_ER_rolled_surplus_black";
		identityTypes[] = {"LanguageENG_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","LanguageGRE_F","Head_Greek","Head_African","Head_Euro","Head_Asian","Head_NATO","G_IRAN_default"};
		genericNames = "NATOMen";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {"OPTRE_Biofoam"};
		RespawnItems[] = {"OPTRE_Biofoam"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 0;
		allowedHeadgear[] = {};
		backpack = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_surplus_black.paa"};
		editorSubcategory = "OPTRE_EditorSubcategory_MenINS";
	};
	class OPTRE_Ins_ER_man_rolled_surplus_crimson: OPTRE_Ins_ER_man_rolled_surplus_black
	{
		dlc = "OPTRE";
		modelSides[] = {0,1,2,3};
		side = 0;
		scope = 1;
		faction = "OPTRE_Ins";
		author = "Article 2 Studios";
		displayName = "Rebel (Surplus/Crimson)";
		vehicleClass = "OPTRE_Ins_Man_ER_class";
		uniformClass = "OPTRE_Ins_ER_rolled_surplus_crimson";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {"OPTRE_Biofoam"};
		RespawnItems[] = {"OPTRE_Biofoam"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 0;
		allowedHeadgear[] = {};
		backpack = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_surplus_crimson.paa"};
	};
	class OPTRE_Ins_ER_man_rolled_jean_orca: OPTRE_Ins_ER_man_rolled_surplus_black
	{
		dlc = "OPTRE";
		modelSides[] = {0,1,2,3};
		side = 0;
		scope = 1;
		faction = "OPTRE_Ins";
		author = "Article 2 Studios";
		displayName = "Rebel (Jeans/Orca)";
		vehicleClass = "OPTRE_Ins_Man_ER_class";
		uniformClass = "OPTRE_Ins_ER_rolled_jean_orca";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {"OPTRE_Biofoam"};
		RespawnItems[] = {"OPTRE_Biofoam"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 0;
		allowedHeadgear[] = {};
		backpack = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_OD_orca.paa"};
	};
	class OPTRE_Ins_ER_man_rolled_OD_crimson: OPTRE_Ins_ER_man_rolled_surplus_black
	{
		dlc = "OPTRE";
		modelSides[] = {0,1,2,3};
		side = 0;
		scope = 1;
		faction = "OPTRE_Ins";
		author = "Article 2 Studios";
		displayName = "Rebel (OD/Crimson)";
		vehicleClass = "OPTRE_Ins_Man_ER_class";
		uniformClass = "OPTRE_Ins_ER_rolled_OD_crimson";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {"OPTRE_Biofoam"};
		RespawnItems[] = {"OPTRE_Biofoam"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 0;
		allowedHeadgear[] = {};
		backpack = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_OD_crimson.paa"};
	};
	class OPTRE_Ins_ER_man_rolled_OD_blknblu: OPTRE_Ins_ER_man_rolled_surplus_black
	{
		dlc = "OPTRE";
		modelSides[] = {0,1,2,3};
		side = 0;
		scope = 1;
		faction = "OPTRE_Ins";
		author = "Article 2 Studios";
		displayName = "Rebel (OD/Black and Blue)";
		vehicleClass = "OPTRE_Ins_Man_ER_class";
		uniformClass = "OPTRE_Ins_ER_rolled_jean_blknblu";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {"OPTRE_Biofoam"};
		RespawnItems[] = {"OPTRE_Biofoam"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 0;
		allowedHeadgear[] = {};
		backpack = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_OD_blknblu.paa"};
	};
	class OPTRE_Ins_ER_man_rolled_OD_blknred: OPTRE_Ins_ER_man_rolled_surplus_black
	{
		dlc = "OPTRE";
		modelSides[] = {0,1,2,3};
		side = 0;
		scope = 1;
		faction = "OPTRE_Ins";
		author = "Article 2 Studios";
		displayName = "Rebel (OD/Black and Red)";
		vehicleClass = "OPTRE_Ins_Man_ER_class";
		uniformClass = "OPTRE_Ins_ER_rolled_OD_blknred";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {"OPTRE_Biofoam"};
		RespawnItems[] = {"OPTRE_Biofoam"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 0;
		allowedHeadgear[] = {};
		backpack = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_OD_blknred.paa"};
	};
	class OPTRE_Ins_ER_Surgeon: OPTRE_Ins_ER_soldier_base
	{
		dlc = "OPTRE";
		scope = 2;
		attendant = 1;
		displayName = "Surgeon";
		vehicleClass = "OPTRE_Ins_Man_ER_class";
		icon = "iconManMedic";
		uniformClass = "OPTRE_Ins_ER_jacket_surgeon2";
		backpack = "OPTRE_B_TacticalPack_blk_Medic";
		weapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		linkedItems[] = {"V_BandollierB_blk","H_MilCap_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_blk","H_MilCap_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_ER_Guerilla_AR: OPTRE_Ins_ER_soldier_base
	{
		dlc = "OPTRE";
		scope = 2;
		displayName = "Guerilla (MA5)";
		uniformClass = "OPTRE_Ins_ER_jacket_surplus_redshirt";
		linkedItems[] = {"V_Chestrig_blk","OPTRE_Ins_URF_Helmet3","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_blk","OPTRE_Ins_URF_Helmet3","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"OPTRE_MA5A","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5A","Throw","Put"};
		magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_ER_Insurgent_BR: OPTRE_Ins_ER_soldier_base
	{
		dlc = "OPTRE";
		scope = 2;
		displayName = "Hunter";
		uniformClass = "OPTRE_Ins_ER_uniform_GGgrey";
		linkedItems[] = {"OPTRE_UNSC_M52A_Armor_Soft","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_UNSC_M52A_Armor_Soft","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"OPTRE_M392_DMR_ScopedRifle","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","Throw","Put"};
		magazines[] = {"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_ER_Rebel_AT: OPTRE_Ins_ER_soldier_base
	{
		dlc = "OPTRE";
		scope = 2;
		displayName = "Rebel (AT)";
		uniformClass = "OPTRE_Ins_ER_jacket_surplus_OD";
		backpack = "OPTRE_B_TacticalPack_blk_M41";
		linkedItems[] = {"V_BandollierB_blk","H_Bandanna_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_blk","H_Bandanna_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"OPTRE_M7","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] = {"OPTRE_M7","Throw","Put","OPTRE_M41_SSR"};
		magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		icon = "iconManAT";
	};
	class OPTRE_Ins_ER_Farmer: OPTRE_Ins_ER_soldier_base
	{
		dlc = "OPTRE";
		scope = 2;
		displayName = "Farmer (M45)";
		uniformClass = "OPTRE_Ins_ER_jacket_brown_surplus";
		linkedItems[] = {"V_BandollierB_blk","H_cap_red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_blk","H_cap_red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"OPTRE_m45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] = {"OPTRE_m45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
	};
	class OPTRE_Ins_ER_MAdvisor: OPTRE_Ins_URF_TeamLead
	{
		dlc = "OPTRE";
		scope = 2;
		displayName = "Militia Advisor";
		vehicleClass = "OPTRE_Ins_Man_ER_class";
		icon = "iconManLeader";
	};
	class OPTRE_Ins_ER_Deserter_GL: OPTRE_Ins_ER_soldier_base
	{
		dlc = "OPTRE";
		scope = 2;
		displayName = "Deserter (GL)";
		uniformClass = "OPTRE_Ins_ER_rolled_surplus_crimson";
		linkedItems[] = {"V_BandollierB_blk","OPTRE_Ins_URF_Helmet3","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] = {"V_BandollierB_blk","OPTRE_Ins_URF_Helmet3","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		weapons[] = {"OPTRE_MA5AGL","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5AGL","Throw","Put"};
		magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class OPTRE_Ins_ER_Militia_MG: OPTRE_Ins_ER_soldier_base
	{
		dlc = "OPTRE";
		scope = 2;
		displayName = "Militia (MG)";
		uniformClass = "OPTRE_Ins_ER_rolled_OD_blknblu";
		backpack = "OPTRE_B_TacticalPack_blk_M73";
		linkedItems[] = {"OPTRE_UNSC_M52A_Armor_Soft","H_Bandanna_khk_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_UNSC_M52A_Armor_Soft","H_Bandanna_khk_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"OPTRE_M73","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73","Throw","Put"};
		magazines[] = {"OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		icon = "iconManMG";
	};
	class OPTRE_Ins_ER_Assassin: OPTRE_Ins_ER_soldier_base
	{
		dlc = "OPTRE";
		scope = 2;
		displayName = "Assassin";
		uniformClass = "OPTRE_Ins_ER_rolled_surplus_black";
		linkedItems[] = {"V_Chestrig_blk","H_Watchcap_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] = {"V_Chestrig_blk","H_Watchcap_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] = {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_ER_Terrorist: OPTRE_Ins_ER_soldier_base
	{
		dlc = "OPTRE";
		scope = 2;
		displayName = "Terrorist";
		backpack = "OPTRE_B_TacticalPack_blk_Demo";
		uniformClass = "OPTRE_Ins_ER_rolled_jean_orca";
		linkedItems[] = {"V_BandollierB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		engineer = 1;
		weapons[] = {"OPTRE_m45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] = {"OPTRE_m45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		icon = "iconManExplosive";
	};
	class OPTRE_Ins_ER_Hacker: OPTRE_Ins_ER_soldier_base
	{
		dlc = "OPTRE";
		scope = 2;
		displayName = "Hacker";
		backpack = "OPTRE_ANPRC_515";
		uniformClass = "OPTRE_Ins_ER_rolled_jean_orca";
		linkedItems[] = {"V_BandollierB_blk","OPTRE_h_PatrolCap_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_blk","OPTRE_h_PatrolCap_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		engineer = 1;
		weapons[] = {"OPTRE_M7","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] = {"OPTRE_M7","Throw","Put","OPTRE_M6G_SF"};
		magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_ER_Unarmed: OPTRE_Ins_ER_soldier_base
	{
		dlc = "OPTRE";
		scope = 2;
		displayName = "Unarmed";
		uniformClass = "OPTRE_Ins_ER_jacket_surplus_OD";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
	};
	class OPTRE_Ins_ER_Warlord: OPTRE_Ins_ER_soldier_base
	{
		dlc = "OPTRE";
		scope = 2;
		displayName = "Warlord";
		vehicleClass = "OPTRE_Ins_Man_ER_class";
		uniformClass = "OPTRE_Ins_ER_jacket_od_surplus";
		linkedItems[] = {"V_BandollierB_blk","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] = {"V_BandollierB_blk","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke"};
		icon = "iconManOfficer";
	};
	class OPTRE_Ins_URF_Medic: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Medic";
		attendant = 1;
		icon = "iconManMedic";
		backpack = "OPTRE_B_TacticalPack_blk_Medic";
		weapons[] = {"OPTRE_MA5A","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5A","Throw","Put"};
		magazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow"};
	};
	class OPTRE_Ins_URF_Radioman: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Radio Operator";
		backpack = "OPTRE_ANPRC_521_URF";
		weapons[] = {"OPTRE_M7","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7","Throw","Put"};
		magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_URF_Pilot: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		author = "Article 2 Studios";
		displayName = "Pilot";
		weapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_URF_Rifleman_AR: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (MA5)";
		weapons[] = {"OPTRE_MA5A","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5A","Throw","Put"};
		magazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_URF_Rifleman_BR: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (BR55)";
		weapons[] = {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_URF_Rifleman_AT: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (AT)";
		backpack = "OPTRE_B_TacticalPack_blk_M41";
		weapons[] = {"OPTRE_MA5A","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] = {"OPTRE_MA5A","Throw","Put","OPTRE_M41_SSR"};
		magazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		icon = "iconManAT";
	};
	class OPTRE_Ins_URF_Rifleman_Light: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Light)";
		linkedItems[] = {"OPTRE_Ins_URF_Armor1","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"OPTRE_Ins_URF_Armor1","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		weapons[] = {"OPTRE_MA5A","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5A","Throw","Put"};
		magazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_URF_AT_Specialist: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "AT Specialist";
		backpack = "OPTRE_B_TacticalPack_blk_M41G";
		weapons[] = {"OPTRE_MA5A","Throw","Put","OPTRE_M41_SSR_G"};
		respawnWeapons[] = {"OPTRE_MA5A","Throw","Put","OPTRE_M41_SSR_G"};
		magazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke"};
		icon = "iconManAT";
	};
	class OPTRE_Ins_URF_AA_Specialist: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "AA Specialist";
		backpack = "OPTRE_B_TacticalPack_blk_M41G";
		weapons[] = {"OPTRE_MA5A","Throw","Put","OPTRE_M41_SSR_G"};
		respawnWeapons[] = {"OPTRE_MA5A","Throw","Put","OPTRE_M41_SSR_G"};
		magazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke"};
		icon = "iconManAT";
	};
	class OPTRE_Ins_URF_Engineer: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		engineer = 1;
		backpack = "OPTRE_B_TacticalPack_blk_Demo";
		weapons[] = {"OPTRE_m45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] = {"OPTRE_m45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		icon = "iconManEngineer";
	};
	class OPTRE_Ins_URF_Breacher: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Breacher";
		weapons[] = {"OPTRE_m45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] = {"OPTRE_m45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
		respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"};
	};
	class OPTRE_Ins_URF_SquadLead: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke"};
		icon = "iconManLeader";
	};
	class OPTRE_Ins_URF_Grenadier: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Grenadier";
		weapons[] = {"OPTRE_MA5AGL","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5AGL","Throw","Put"};
		magazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class OPTRE_Ins_URF_Autorifleman: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Autorifleman";
		backpack = "OPTRE_B_TacticalPack_blk_M73";
		weapons[] = {"OPTRE_M73","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73","Throw","Put"};
		magazines[] = {"OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		icon = "iconManMG";
	};
	class OPTRE_Ins_URF_Assist_Autorifleman: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Assistant Autorifleman";
		backpack = "OPTRE_B_TacticalPack_blk_M73";
		weapons[] = {"OPTRE_MA5A","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5A","Throw","Put"};
		magazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow"};
	};
	class OPTRE_Ins_URF_Marksman: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Designated Marksman";
		weapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_URF_Sniper: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Sniper";
		weapons[] = {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_URF_Observer: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Observer";
		Items[] = {"OPTRE_Biofoam","Item_Laserdesignator"};
		RespawnItems[] = {"OPTRE_Biofoam","Item_Laserdesignator"};
		weapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
	};
	class OPTRE_Ins_URF_Crewman: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Crewman";
		weapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		linkedItems[] = {"OPTRE_Ins_URF_Armor1","OPTRE_Ins_URF_Helmet2","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] = {"OPTRE_Ins_URF_Armor1","OPTRE_Ins_URF_Helmet2","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","OPTRE_Biofoam","OPTRE_NVG"};
		magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_URF_Demolitions: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Demolitions";
		engineer = 1;
		backpack = "OPTRE_B_TacticalPack_blk_Demo";
		weapons[] = {"OPTRE_m45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] = {"OPTRE_m45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		icon = "iconManExplosive";
	};
	class OPTRE_Ins_URF_UAV_Op: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "UAV Operator";
		backpack = "O_UAV_01_backpack_F";
		uavHacker = 1;
		weapons[] = {"OPTRE_m45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] = {"OPTRE_m45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke"};
	};
	class OPTRE_Ins_URF_Unarmed: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Unarmed";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
	};
	class OPTRE_Ins_URF_Officer: OPTRE_Ins_URF_Soldier_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Officer";
		weapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke"};
		respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke"};
		icon = "iconManOfficer";
	};
    class 1stMEU_CTF_Flag_Prae1 : OPTRE_CTF_Flag_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName ="Praetorian 3-1 CTF Flag";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"first_meu_aux\data\Misc\flag_guidon_redODST31_co.paa"};
		editorCategory = "MEU_flags";
    }; 

    class 1stMEU_CTF_Flag_Prae2 : OPTRE_CTF_Flag_Base
    {    
        scope = 2;
        scopeCurator = 2;
        displayName ="Praetorian 3-2 CTF Flag";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"first_meu_aux\data\Misc\flag_guidon_blueODST32_co.paa"};
		editorCategory = "MEU_flags";
    }; 

    class 1stMEU_CTF_Flag_Prae3 : OPTRE_CTF_Flag_Base
    {    
        scope = 2;
        scopeCurator = 2;
        displayName ="Praetorian 3-3 CTF Flag";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"first_meu_aux\data\Misc\flag_guidon_greenODST33_co.paa"};
		editorCategory = "MEU_flags";
    };
    
    class 1stMEU_CTF_Flag_1stMEU : OPTRE_CTF_Flag_Base
    {    
        scope = 2;
        scopeCurator = 2;
        displayName ="1st MEU CTF Flag";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"first_meu_aux\data\Misc\flag_guidon_red1stmeu_co.paa"};
		editorCategory = "MEU_flags";
    };
    
    class 1stMEU_CTF_Flag_1stPlt : OPTRE_CTF_Flag_Base
    {    
        scope = 2;
        scopeCurator = 2;
        displayName ="1st Platoon CTF Flag";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"first_meu_aux\data\Misc\flag_guidon_yellow1stplt_co.paa"};
		editorCategory = "MEU_flags";
    };
    
    class 1stMEU_CTF_Flag_2ndPlt : OPTRE_CTF_Flag_Base
    {    
        author = "Romeo"
        scope = 2;
        scopeCurator = 2;
        displayName ="2nd Platoon CTF Flag";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"first_meu_aux\data\Misc\flag_guidon_yellow2ndplt_co.paa"};
        editorCategory = "MEU_flags";
    };
    
    class 1stMEU_CTF_Flag_Hammer : OPTRE_CTF_Flag_Base
        
    {   author = "Romeo" 
        scope = 2;
        scopeCurator = 2;
        displayName ="Vulcan 4-1 CTF Flag";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"first_meu_aux\data\Misc\flag_guidon_hammer_co.paa"};
		editorCategory = "MEU_flags";
    };
    
     class 1stMEU_CTF_Flag_Anvil : OPTRE_CTF_Flag_Base
         
    {   author = "Romeo" 
        scope = 2;
        scopeCurator = 2;
        displayName ="Vulcan 4-2 CTF Flag";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"first_meu_aux\data\Misc\flag_guidon_anvil_co.paa"};
		editorCategory = "MEU_flags";
    };
    
    class 1stMEU_CTF_Flag_Forge : OPTRE_CTF_Flag_Base
         
    {   author = "Romeo" 
        scope = 2;
        scopeCurator = 2;
        displayName ="Vulcan 4-3 CTF Flag";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"first_meu_aux\data\Misc\flag_guidon_purpleforge_co.paa"};
		editorCategory = "MEU_flags";
    };
    
     class 1stMEU_CTF_Flag_Guardian : OPTRE_CTF_Flag_Base
         
    {   author = "Romeo" 
        scope = 2;
        scopeCurator = 2;
        displayName ="Vulcan 4-Mike CTF Flag";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"first_meu_aux\data\Misc\flag_guidon_guardian_co.paa"};
		editorCategory = "MEU_flags";
    };
    
     class 1stMEU_CTF_Flag_Gladius : OPTRE_CTF_Flag_Base
         
    {   author = "Romeo" 
        scope = 2;
        scopeCurator = 2;
        displayName ="Vulcan 4-0 CTF Flag";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"first_meu_aux\data\Misc\flag_guidon_gladius_co.paa"};
		editorCategory = "MEU_flags";
    };
    
     class 1stMEU_CTF_Flag_VulcanHQ : OPTRE_CTF_Flag_Base
         
    {   author = "Romeo" 
        scope = 2;
        scopeCurator = 2;
        displayName ="4th Platoon CTF Flag";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"first_meu_aux\data\Misc\flag_guidon_vulcanhq_co.paa"};
		editorCategory = "MEU_flags";
    };
	class SuperWall_01: House
    {
        class SimpleObject
        {
            eden = 1;
            animate[] = {};
            hide[] = {};
            verticalOffset = 1.361;
            verticalOffsetWorld = 0;
            init = "''";
        };
        displayName = "District Superwall";
        editorCategory = "MEU_Objects";
        editorSubcategory = "MEU_Walls";
        scope = 2;
        scopeCurator = 2;
        model = "OPTRE_Buildings\Walls\SuperWall_Straight.p3d";
        destrType = "DestructTree";
        selectionDamage = "zbytek";
        simulation = "house";
        side = 4;
    };
	class boomyboy: House
    {
        class SimpleObject
        {
            eden = 1;
            animate[] = {};
            hide[] = {};
            verticalOffset = 1.361;
            verticalOffsetWorld = 0;
            init = "''";
        };
        displayName = "Big Shiva Boy";
        editorCategory = "MEU_Objects";
        editorSubcategory = "Objects";
        scope = 2;
        scopeCurator = 2;
        model = "OPTRE_Weapons\Aircraft\Shiva_missile_fly.p3d";
        destrType = "DestructTree";
        selectionDamage = "zbytek";
        simulation = "house";
        side = 4;
    };
};