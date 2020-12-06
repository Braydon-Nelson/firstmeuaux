#define _ARMA_
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgAmmo.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgGroups.hpp"
#include "CfgMagazines.hpp"
#include "Cfgtreatment.hpp"
#include "Cfgtreatmentactions.hpp"
#include "CfgFunctions.hpp"
#include "Cfgloadingscreens.hpp"
class CAWorld;
class cfgPatches
{
    class first_meu_aux
    {
		units[] = {
			"OPTRE_Ammo_SupplyPod_Launcher",
			"OPTRE_Ammo_SupplyPod_Medical",
			"OPTRE_Ammo_SupplyPod_Mortars",
			"OPTRE_Ammo_SupplyPod_LMG",
            "1stMEU_M313_Elephant",
            "Vulkan_Repair_APC",
            "Vulkan_Repair_APC_P",
            "OPTRE_HEV",
            "MEU_IFV",
            "MEU_IFV_A",
            "MEU_M12_AP",
            "OPTRE_AV22_Sparrowhawk_Base",
            "VES_AV22_Sparrowhawk_Base_F",
            "OPTRE_UNSC_falcon",
            "OPTRE_Pelican_F",
            "OPTRE_Hornet_base",
            "VES_UH144_A",
            "VES_AV14_AIM",
            "VES_AV14_AGM",
            "VES_AV14_Rockets",
            "VES_AV14",
            "VES_UH144",
            "VES_D77HTCI_A",
            "VES_D77HTCI",
			};
        magazines[] = {
            "OPTRE_6Rnd_8Gauge_Pellet",
            "OPTRE_12Rnd_8Gauge_Pellet",
            "OPTRE_6Rnd_8Gauge_Beanbag",
            "OPTRE_12Rnd_8Gauge_Beanbag",
            };
		ammo[] = {
            "OPTRE_B_5x23_Caseless_JHP",
            "OPTRE_B_762x51_JHP",
            "OPTRE_B_95x40_JHP",
            "OPTRE_B_8Gauge_Beanbags",
            "MEU_B_8Gauge_Pellet",
            "MEU_B_8Gauge_Pellet_Submunition",
            };
		weapons[] = {
            "OPTRE_M392_DMR",
            "OPTRE_BR55HB",
            "OPTRE_M295_BMR",
            "OPTRE_M393_DMR",
            "OPTRE_CR77",
			"OPTRE_M7",
            "throw",
            "OPTRE_M319",
        };
        requiredVersion = 0.1;
		requiredAddons[] = 
        {
			"OPTRE_UNSC_Units",
			"OPTRE_Ins_Units",
			"OPTRE_Weapons",
            "OPTRE_ACE_Compat",
            "OPTRE_FC_ACE_Compat",
            "V_FZ_Armor",
			"OPTRE_Core",
			"OPTRE_Misc",
			"A3_Data_F",
			"OPTRE_Misc_Crates",
            "OPTRE_Vehicles",
			"OPTRE_Modules",
            "V_FZ_Core",
            "LM_OPCAN_UNSC",
            "V_SO_Core",
            "V_SO_Magazines",
            "V_SO_Weapons",
            "OPTRE_FC_Units",
            "ace_medical_engine",
            "ace_medical_treatment",
            "ace_common",
            "task_force_radio",
            "A3_Map_Altis",
            "A3_Map_Stratis",
            "A3_Map_Stratis_Scenes",
            "A3_Map_Altis_Scenes",
            "NSM_patch_main",
            "NSM_patch_particle_effects",
            "V_FZ_Vehicles",
            "task_force_radio",
        };
    };
};
class CfgFactionClasses
{
	class MEU_UNSC
	{
		displayName = "1st MEU BLUFOR";
		priority = 1;
		side = 1;
		primaryLanguage = "EN";
		backpack_tf_faction_radio_api = "OPTRE_Como_pack_2";
	};
};
class CfgEditorCategories
{
    class MEU_cat_air
    {   
        displayName = "1st MEU Air Assets";
        scopeCurator = 2;
        scopeeditor = 2;
    };
    class MEU_cat_gnd
    {   
        displayName = "1st MEU Ground Assets";
        scopeCurator = 2;
        scopeeditor = 2;
    };
	class MEU_Objects
    {   
        displayName = "1st MEU Objects";
        scopeCurator = 2;
        scopeeditor = 2;
    };
};
class CfgEditorSubcategories
{
    class MEU_sub_apc
    {
		displayName = "APC";
        scopeCurator = 2;
        scopeeditor = 2;
	};
    class MEU_sub_ifv
    {
		displayName = "IFV";
        scopeCurator = 2;
        scopeeditor = 2;
	};
    class MEU_sub_arm
    {
		displayName = "Tanks";
        scopeCurator = 2;
        scopeeditor = 2;
	};
    class MEU_sub_WIP
    {
		displayName = "WIP";
        scopeCurator = 2;
        scopeeditor = 2;
	};
    class MEU_sub_car
    {
		displayName = "Warthogs";
        scopeCurator = 2;
        scopeeditor = 2;
	};
    class MEU_sub_trt
    {
		displayName = "Turrets";
        scopeCurator = 2;
        scopeeditor = 2;
	};
    class MEU_sub_rot
    {
		displayName = "Rotary";
        scopeCurator = 2;
        scopeeditor = 2;
	};
	class Objects
    {
		displayName = "Hidden Objects";
        scopeCurator = 2;
        scopeeditor = 2;
	};
	class todt_obj
    {
		displayName = "Todt Objects";
        scopeCurator = 2;
        scopeeditor = 2;
	};
        class pandora_obj
    {
		displayName = "Pandora Objects";
        scopeCurator = 2;
        scopeeditor = 2;
	};
        class Flags
    {
		displayName = "Flags";
        scopeCurator = 2;
        scopeeditor = 2;
	};
};
class CfgWorlds
{
 	class Altis : CAWorld
	{
		description = "Altis";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Anizay : CAWorld
	{
		description = "Anizay";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Bariga : CAWorld
	{
		description = "Bariga";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Blood_OPTRE : CAWorld
	{
		description = "Blood Gulch";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class bsoc_brasil : CAWorld
	{
		description = "BSOC Brasil";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Bootcamp_ACR : CAWorld
	{
		description = "Bukovina";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Woodland_ACR : CAWorld
	{
		description = "Bystrica";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class chernarus : CAWorld
	{
		description = "Chernarus (Autumn)";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class chernarus_summer : CAWorld
	{
		description = "Chernarus (Summer)";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Chernarus_Winter : CAWorld
	{
		description = "Chernarus (Winter)";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class clafghan : CAWorld
	{
		description = "CLA Clafghan";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Desert_E : CAWorld
	{
		description = "Desert";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class desert_island : CAWorld
	{
		description = "Desert Island";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class dingor : CAWorld
	{
		description = "Dingor v3.82";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class eladeen_terrain : CAWorld
	{
		description = "Eladeen";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class eden : CAWorld
	{
		description = "Everon";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class pja310 : CAWorld
	{
		description = "G.O.S Al Rayak";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class pja308 : CAWorld
	{
		description = "G.O.S Gunkizli";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class pja314 : CAWorld
	{
		description = "G.O.S Leskovets";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class pja319 : CAWorld
	{
		description = "G.O.S N'Djenahoud";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class pja305 : CAWorld
	{
		description = "G.O.S N'Ziwasogo";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class pja312 : CAWorld
	{
		description = "G.O.S Song Bin Tanh APEX";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class OPTRE_Gridlock : CAWorld
	{
		description = "Gridlock";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class hellanmaa : CAWorld
	{
		description = "Hellanmaa";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class hellanmaaw : CAWorld
	{
		description = "Hellanmaa winter";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class OPTRE_iberius : CAWorld
	{
		description = "Iberius";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class tem_ihantalaw : CAWorld
	{
		description = "Ihantala Winter";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class abramia : CAWorld
	{
		description = "Isla Abaramia v3.9";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class isladuala3 : CAWorld
	{
		description = "Isla Duala v3.9.5";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class OPTRE_Kholo : CAWorld
	{
		description = "Kholo";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class cain : CAWorld
	{
		description = "Kolgujev";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Lingor_v3_9_5 : CAWorld
	{
		description = "Lingor v3.9.5";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Enoch : CAWorld
	{
		description = "Livonia";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class OPTRE_Madrigal : CAWorld
	{
		description = "Madrigal";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class abel : CAWorld
	{
		description = "Malden";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Malden : CAWorld
	{
		description = "Malden 2035";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Mountain_Wilderness : CAWorld
	{
		description = "Mountain Wilderness";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Nam2 : CAWorld
	{
		description = "Nam2";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class noe : CAWorld
	{
		description = "Nogova";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Pandora : CAWorld
	{
		description = "Pandora";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Winthera3 : CAWorld
	{
		description = "Panthera (Winter)v3.9";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class panthera3 : CAWorld
	{
		description = "Panthera v3.9";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class porto : CAWorld
	{
		description = "Porto";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class ProvingGrounds_PMC : CAWorld
	{
		description = "Proving Grounds";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class pulau : CAWorld
	{
		description = "Pulau";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class intro : CAWorld
	{
		description = "Rahmadi";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class ruha : CAWorld
	{
		description = "Ruha";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class sara : CAWorld
	{
		description = "Sahrani";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Kapaulio : CAWorld
	{
		description = "Saint Kapaulio";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class OPTRE_Sandstorm : CAWorld
	{
		description = "Sandstorm";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Shapur_BAF : CAWorld
	{
		description = "Shapur";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class saralite : CAWorld
	{
		description = "Southern Sahrani";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Stratis : CAWorld
	{
		description = "Stratis";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class tem_summa : CAWorld
	{
		description = "Summa";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class tem_summawcup : CAWorld
	{
		description = "Summa winter";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Takistan : CAWorld
	{
		description = "Takistan";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Mountains_ACR : CAWorld
	{
		description = "Takistan Mountains";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Tanoa : CAWorld
	{
		description = "Tanoa";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Todt : CAWorld
	{
		description = "Todt";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class jns_tria : CAWorld
	{
		description = "Tria";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class United_Sahrani : CAWorld
	{
		description = "United Sahrani";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class utes : CAWorld
	{
		description = "Utes";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class VR : CAWorld
	{
		description = "Virtual Reality";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class zargabad : CAWorld
	{
		description = "Zargabad";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};

};