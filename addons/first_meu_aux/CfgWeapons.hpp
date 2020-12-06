class CfgWeapons
{

    class LM_OPCAN_CGC;
    class ItemCore;
	class HeadgearItem;
	class Uniform_Base;
    class ItemInfo;
	class H_HelmetB;
	class VestItem;
    class LM_OPCAN_Beret_CGC;
    class LM_OPCAN_Vest_ODST_Red;
    class G_B_Diving;
	class ItemcTabHCam;
	class A3_TVG_S_F6;
    class v_rebreatherB;
	class MRH_BluForTransponder;
	class OPTRE_UNSC_CH252D_Helmet;
	class OPTRE_UNSC_CH252_Helmet2_MAR;
	class OPTRE_UNSC_M52D_Armor;
	class UniformItem;
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class InventoryFirstAidKitItem_Base_F;
	class MedikitItem;
    class ACE_Morphine;
	class U_B_CombatUniform_mcam;
    class OPTRE_UNSC_VX16_Helmet_base;
    class OPTRE_UNSC_VX16_Helmet_base_broken;
    class OPTRE_UNSC_VX16_Helmet_base_dp;
	class LM_OPCAN_CH252D_H3_dp;
	class LM_OPCAN_CH252D_H3_Green_dp;
	class LM_OPCAN_CH252D_H3_Red_dp;
	class LM_OPCAN_CH252D_H3_Yellow_dp;
	class LM_OPCAN_CH252D_H3_Blue_dp;
	class LM_OPCAN_CH252D_H3_broken;
	class LM_OPCAN_CH252D_H3_Green_broken;
	class LM_OPCAN_CH252D_H3_Red_broken;
	class LM_OPCAN_CH252D_H3_Yellow_broken;
	class LM_OPCAN_CH252D_H3_Blue_broken;
    class VES_CH252D_dp;
    class WeaponSlotsInfo;
	class StandardSound;
	class CowsSlot;
	class MuzzleSlot;
	class PointerSlot;
	class UnderBarrelSlot;
	class Single;
	class FullAuto;
	class OPTRE_M247;
	class OPTRE_M393_DMR;
	class OPTRE_Rifle_Base;
	class OPTRE_LongRifle_Base;
	class UGL_F;
    class OPTRE_M7S;
    class OPTRE_SubMachineGun_Base;
    class Grenadelauncher;
    class ThrowMuzzle;
    class OPTRE_HUD_RscPicture;
    class ACE_plasmaIV;
    class OPTRE_Biofoam;
    class OPTRE_Medigel;
    class ACE_tourniquet;
    class OPTRE_Handgun_Base;
    class BaseSoundModeType;
    class OPTRE_UNSC_M52A_Armor_Base;
    class VES_M52A_URB_Security_A;
	class VES_CH252A;
	
// Medical Items Start
    class MEU_compat_Ibuprofen: ACE_Morphine
	{
		scope = 2;
		author = "1st MEU Mark";
		displayName = "Ibuprofen Bottle";
		picture = "\z\ace\addons\medical_treatment\ui\morphine_ca.paa";
		model = "\z\ace\addons\medical_treatment\data\morphine.p3d";
		descriptionShort = "Drink some water and Rest";
		descriptionUse = "Use instead of morphine";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 0.1;
		};
	};
    class MEU_PlasmaIV : ACE_plasmaIV
    {
        scope = 2;
        displayName = "[1st MEU] Plasma 2.5L";
        descriptionShort = "2.5L of Plasma";
		descriptionUse = "Give Plasma (2.5L)";
        class ItemInfo: ItemInfo
		{
			mass = 16;
        };
    };
    class MEU_Biofoam: OPTRE_Biofoam
    {
        scope = 2;
        displayName = "[P] Biofoam Canister";
        class ItemInfo: ItemInfo
		{
			mass = 35;
        };
    };
    class MEU_Medigel: OPTRE_Medigel
    {
        scope = 2;
        displayName = "[P] Optican Medigel";
        class ItemInfo: ItemInfo
		{
			mass = 35;
        };
    };
	class MEU_tourniquet : ACE_tourniquet 
    {
        scope = 1;
        displayName = " [P] Armor Patch"; 
        class ItemInfo: CBA_MiscItem_ItemInfo 
        {
            mass = 0.5;
        };
    };
	
// Medical Items End
// Armor Base Values
		
	class 1stMEU_Base_CH252D_Helmet: OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
        weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
        CBRN_protection = 1;
		displayName = "[1stMEU] CH252D Helmet";
		picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet";
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "OPTRE_UNSC_Units\Army\odst_helmet";
			hiddenSelections[] = {"camo","camo2"};
			hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
			hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
		allowedFacewear[] = {};
	};
    class 1stMEU_Base_CH252D_Helmet_dp : VES_CH252D_dp
    {
        dlc = "1st MEU";
		author = "1st MEU Mark";
		scope = 0;
		scopeArsenal = 0;
		scopeCurator = 1;
        weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] CH252D Helmet";
		picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252D_DEF_CO","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		CBRN_protection = 1;
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "OPTRE_UNSC_Units\Army\odst_helmet_dp";
			picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[] = {"camo","camo2"};
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252D_DEF_CO","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
			hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
		subItems[]=
		{
			"ItemcTabHCam"
		};
		allowedFacewear[] = {};
	};
	class 1MEU_BASE_M52D_Armor: OPTRE_UNSC_M52D_Armor 
	{	
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52D Body Armor (BASE)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		picture = "\OPTRE_UNSC_Units\Army\icons\ODST_Vest";
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		subItems[]=
		{
			"ItemcTabHCam",
			"MRH_BluForTransponder"
		};
        vestType = "Rebreather";
		class ItemInfo: VestItem 
		{
            vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass = "Supply200";
			mass = 75;
			modelSides[] = {6};
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Base",
				"A_ChestArmor",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] = 
			{
				"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
				"optre_unsc_units\army\data\armor_odst_co.paa",
				"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
				"optre_unsc_units\army\data\ghillie_desert_co.paa",
				"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
			};
				hiddenSelectionsMaterials[] = 
			{
				"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
				"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
				"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
				"",
				"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 50;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 55;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 55;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 55;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 50;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 50;
					passThrough = 0.1;
				};
			};
		};
	}; 
	
	class 1MEU_Base_CH252_Helmet: 1stMEU_Base_CH252D_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
        weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] CH252 Helmet Base";
		picture = "\OPTRE_UNSC_Units\Army\icons\army_helmet_des";
		hiddenSelections[] = {"camo","camo2","camo3","H_Neck","H_UNSCVacLower","H_Collar","H_UNSCVacVisor","H_VacCollar","H_Ghillie"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",""};
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "OPTRE_UNSC_Units\Army\helmet";
			hiddenSelections[] = {"camo","camo2","camo3","H_Neck","H_UNSCVacLower","H_Collar","H_UNSCVacVisor","H_VacCollar","H_Ghillie"};
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 15;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 15;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 15;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
		allowedFacewear[] = {"",0.05,"VES_HUD_Balaclava_Black",2,"VES_HUD_Balaclava_Beast",0.025,"VES_HUD_Balaclava_Punisher",0.025,"VES_HUD_Balaclava_Joker",0.025,"OPTRE_EyePiece",0.25,"OPTRE_HUD_Glasses",0.5,"OPTRE_HUD_w_Glasses",0.5,"murshuncigs_cig_0",0.1,"murshuncigs_cig_1",0.1,"murshuncigs_cig_2",0.1,"murshuncigs_cig_3",0.1,"murshuncigs_cig_4",0.1,"immersion_cigs_cigar0",0.1,"immersion_cigs_cigar1",0.1,"immersion_cigs_cigar2",0.1,"immersion_cigs_cigar3",0.1,"immersion_cigs_cigar4",0.1};
	};
	
	class 1MEU_BASE_M52A_Armor: OPTRE_UNSC_M52A_Armor_Base
	{	
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Body Armor (BASE)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_des";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		hiddenSelectionsMaterials[] = 
		{
			"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
			"V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
			"V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
			"",
			""
		};
		subItems[]=
		{
			"ItemcTabHCam"
		};
        vestType = "Rebreather";
		class ItemInfo: VestItem 
		{
            vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass = "Supply250";
			mass = 75;
			modelSides[] = {6};
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Base",
				"A_ChestArmor",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 40;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 40;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 40;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 40;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 40;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 40;
					passThrough = 0.1;
				};
			};
		};
	};
	
	class 1MEU_BASE_Pilot_Armor: VES_M52A_URB_Security_A
	{	
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] Pilot Body Armor (BASE)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		hiddenSelectionsMaterials[] = 
		{
			"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
			"V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
			"V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
			"",
			""
		};
        vestType = "Rebreather";
		class ItemInfo: VestItem 
		{
            vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass = "Supply250";
			mass = 75;
			modelSides[] = {6};
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Base",
				"A_ChestArmor",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 30;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 30;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 30;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 30;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 30;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 30;
					passThrough = 0.1;
				};
			};
		};
	};

// Base Armor End
// Centurion Gear Start   
// Centurion Headgear
    
    class first_plt_Beret: LM_OPCAN_Beret_CGC
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] Beret (1st Plt)";
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model = "a3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Centurion1BeretV4.paa"};
    };
    class fourth_plt_beret : first_plt_Beret
    {
       scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] Beret (4th Plt)";
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model = "a3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thplt\VulcanBeretV2.paa"};
        visionMode[] = {"Normal","TI","NVG"};
        thermalMode[] = {0,1,2,3,4,5};
    };
	
// centurion heavy helmets

    class MEU_Mar_Helm_MAR : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 Heavy Helmet";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
        };
    };
	
    class MEU_Mar_Helm_DES : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 Heavy Helmet (Desert)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
	
    class MEU_Mar_Helm_CEA : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 Heavy Helmet (Evolved)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
	
    class MEU_Mar_Helm_SNO : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 Heavy Helmet (Snow)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
   
	class MEU_Mar_Helm_URB : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 Heavy Helmet (Urban)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
    class MEU_Mar_Helm_WDL : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 Heavy Helmet (Woodland)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
	class MEU_Mar_Helm_MAR2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Heavy Helmet";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\H\V_CH252_MAR_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_Helm_DES2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Heavy Helmet (Desert)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\H\V_CH252_DES_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_Helm_CEA2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Heavy Helmet (Evolved)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\H\V_CH252_CEA_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_Helm_SNO2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Heavy Helmet (Snow)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\H\V_CH252_SNO_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
   
	class MEU_Mar_Helm_URB2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Heavy Helmet (Urban)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\H\V_CH252_URB_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    
    class MEU_Mar_Helm_WDL2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Heavy Helmet (Woodland)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\H\V_CH252_WDL_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    //FUCKING 1ST PLT
    class MEU_Mar_Helm_MAR1 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 Heavy Helmet";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\H\V_CH252_MAR_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_Helm_DES1 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 Heavy Helmet (Desert)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\H\V_CH252_DES_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_Helm_CEA1 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 Heavy Helmet (Evolved)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\H\V_CH252_CEA_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_Helm_SNO1 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 Heavy Helmet (Snow)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\H\V_CH252_SNO_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
   
	class MEU_Mar_Helm_URB1 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 Heavy Helmet (Urban)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\H\V_CH252_URB_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    
    class MEU_Mar_Helm_WDL1 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 Heavy Helmet (Woodland)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\H\V_CH252_WDL_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	//4th plt helmets 
	class MEU_Mar_MOS_Helm_Sealed_Base: 1stMEU_Base_CH252D_Helmet
	{
		author = "Rave";
		scope = 0;
		scopeCurator = 0;
		model = "\OPTRE_UNSC_Units\Army\helmet_p";
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
		hiddenSelections[] = {"camo","camo2","camo3","H_Collar","H_Ghillie"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_M_CO","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252_V.rvmat"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "OPTRE_UNSC_Units\Army\helmet_p";
			picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
			hiddenSelections[] = {"camo","camo2","camo3","H_Collar","H_Ghillie"};
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_M_CO","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
			hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252_V.rvmat"};
		};
	};
	class MEU_Mar_Sealed_V_CH252_CEA_L_CO_GL : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-0 ECH252 Helmet (Evolved Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_CEA_L_CO_GL.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_CEA_L_CO_GL_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
 	    hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_CEA_L_CO_GL.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_CEA_L_CO_GL_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-0 ECH252 Helmet (Evolved Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_CEA_L_CO_GL.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_CEA_L_CO_GL_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_CEA_L_CO_GL.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 ECH252 Helmet (Desert Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 ECH252 Helmet (Desert Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_GU : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-M ECH252 Helmet (Desert Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_GU_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_GU_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-M ECH252 Helmet (Desert Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_GU_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 ECH252 Helmet (Desert Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 ECH252 Helmet (Desert Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_DES_R2_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 ECH252 (SR) RTO Helmet (Desert Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_DES_R2_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_DES_R2_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 ECH252 (SR) RTO Helmet (Desert Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_DES_R2_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_DES_R_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 ECH252 RTO Helmet (Desert Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_R_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_R_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_R_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 ECH252 RTO Helmet (Desert Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_R_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_R_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_R_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 ECH252 Helmet (Marine Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 ECH252 Helmet (Marine Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_GU : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-M ECH252 Helmet (Marine Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_GU_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_GU_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-M ECH252 Helmet (Marine Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_GU_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 ECH252 Helmet (Marine Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 ECH252 Helmet (Marine Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_MAR_R1_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 ECH252 RTO Helmet (Marine Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_R1_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_R1_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 ECH252 RTO Helmet (Marine Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_R1_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_R2_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 ECH252 (SR) RTO Helmet (Marine Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_MAR_R2_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_MAR_R2_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 ECH252 (SR) RTO Helmet (Marine Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_MAR_R2_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 ECH252 Helmet (Snow Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 ECH252 Helmet (Snow Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_GU : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-M ECH252 Helmet (Snow Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_GU_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_GU_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-M ECH252 Helmet (Snow Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_GU_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 ECH252 Helmet (Snow Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 ECH252 Helmet (Snow Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_SNO_R1_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 ECH252 RTO Helmet (Snow Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_R1_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_R1_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 ECH252 RTO Helmet (Snow Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_R1_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_R1_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 ECH252 Helmet (Snow Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_SNO_R1_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_SNO_R2_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 ECH252 (SR) RTO Helmet (Snow Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_SNO_R2_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_SNO_R2_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 ECH252 (SR) RTO Helmet (Snow Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_SNO_R2_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 ECH252 Helmet (Urban Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 ECH252 Helmet (Urban Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_GU : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-M ECH252 Helmet (Urban Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_GU_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_GU_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-M ECH252 Helmet (Urban Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_GU_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 ECH252 Helmet (Urban Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 ECH252 Helmet (Urban Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_URB_R1_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 ECH252 RTO Helmet (Urban Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_R1_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_R1_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 ECH252 RTO Helmet (Urban Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_R1_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_R2_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 ECH252 (SR) RTO Helmet (Urban Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_URB_R2_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_URB_R2_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 ECH252 (SR) RTO Helmet (Urban Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_URB_R2_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
          scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 ECH252 Helmet (Woodland Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 ECH252 Helmet (Woodland Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
          scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_GU : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-M ECH252 Helmet (Woodland Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_GU_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_GU_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-M ECH252 Helmet (Woodland Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_GU_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 ECH252 Helmet (Woodland Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 ECH252 Helmet (Woodland Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_WDL_R1_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 ECH252 RTO Helmet (Woodland Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_R1_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_R1_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 ECH252 RTO Helmet (Woodland Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_R1_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_R2_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 ECH252 (SR) RTO Helmet (Woodland Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_WDL_R2_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
	class MEU_Mar_Sealed_V_CH252_WDL_R2_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 ECH252 (SR) RTO Helmet (Woodland Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
  };
	class MEU_Mar_Sealed_V_CH252_WDL_R2_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
  {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
  };
  

class MEU_Mar_DES_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-3 CH252 (Desert)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_L_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
class MEU_Mar_DES_A_dp  : MEU_Mar_DES_A
   {
       scopeArsenal = 1;
       scope = 1;
   };

class MEU_Mar_DES_R2_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-3 CH252 (SR) RTO (Desert)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_R2_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
class MEU_Mar_DES_R2_A_dp  : MEU_Mar_DES_R2_A
   {
       scopeArsenal = 1;
       scope = 1;
   };

class MEU_Mar_DES_R1_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-3 CH252 RTO (Desert)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_DES_R_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
class MEU_Mar_DES_R1_A_dp  : MEU_Mar_DES_R1_A
   {
       scopeArsenal = 1;
       scope = 1;
   };	
   
class MEU_Mar_URB_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-3 CH252 (Urban)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_L_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
class MEU_Mar_URB_A_dp  : MEU_Mar_URB_A
   {
       scopeArsenal = 1;
       scope = 1;
   };

class MEU_Mar_URB_R2_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-3 CH252 (SR) RTO (Urban)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_R2_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
class MEU_Mar_URB_R2_A_dp  : MEU_Mar_URB_R2_A
   {
       scopeArsenal = 1;
       scope = 1;
   };

class MEU_Mar_URB_R1_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-3 CH252 RTO (Urban)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_URB_R1_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
class MEU_Mar_URB_R1_A_dp  : MEU_Mar_URB_R1_A
   {
       scopeArsenal = 1;
       scope = 1;
   };	


class MEU_Mar_MAR_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-3 CH252 (Marine)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_L_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
class MEU_Mar_MAR_A_dp  : MEU_Mar_MAR_A
   {
       scopeArsenal = 1;
       scope = 1;
   };

class MEU_Mar_MAR_R2_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-3 CH252 (SR) RTO (Marine)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_R2_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
class MEU_Mar_MAR_R2_A_dp  : MEU_Mar_MAR_R2_A
   {
       scopeArsenal = 1;
       scope = 1;
   };

class MEU_Mar_MAR_R1_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-3 CH252 RTO (Marine)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_MAR_R1_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
class MEU_Mar_MAR_R1_A_dp  : MEU_Mar_MAR_A
   {
       scopeArsenal = 1;
       scope = 1;
   };	
	
class MEU_Mar_SNO_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-3 CH252 (Snow)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_L_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
class MEU_Mar_SNO_A_dp  : MEU_Mar_SNO_A
   {
       scopeArsenal = 1;
       scope = 1;
   };

class MEU_Mar_SNO_R2_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-3 CH252 (SR) RTO (Snow)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_R2_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
class MEU_Mar_SNO_R2_A_dp  : MEU_Mar_SNO_R2_A
   {
       scopeArsenal = 1;
       scope = 1;
   };

class MEU_Mar_SNO_R1_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-3 CH252 RTO (Snow)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_SNO_R1_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
class MEU_Mar_SNO_R1_A_dp  : MEU_Mar_SNO_R1_A
   {
       scopeArsenal = 1;
       scope = 1;
   };

class MEU_Mar_WDL_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-3 CH252 (Woodland)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_L_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
class MEU_Mar_WDL_A_dp  : MEU_Mar_WDL_A
   {
       scopeArsenal = 1;
       scope = 1;
   };

class MEU_Mar_WDL_R2_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-3 CH252 (SR) RTO (Woodland)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_R2_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
class MEU_Mar_WDL_R2_A_dp  : MEU_Mar_WDL_R2_A
   {
       scopeArsenal = 1;
       scope = 1;
   };

class MEU_Mar_WDL_R1_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-3 CH252 RTO (Woodland)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Vulcan\Helmets\V_CH252_WDL_R1_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
class MEU_Mar_WDL_R1_A_dp  : MEU_Mar_WDL_R1_A
   {
       scopeArsenal = 1;
       scope = 1;
   };	
	
	
	
    //1st dp shit
   class MEU_Mar_Helm_MAR1_dp  : MEU_Mar_Helm_MAR1
   {
       scopeArsenal = 1;
       scope = 1;
   };
   class MEU_Mar_Helm_DES1_dp  : MEU_Mar_Helm_DES1
   {
       scopeArsenal = 1;
       scope = 1;
   };
   class MEU_Mar_Helm_CEA1_dp  : MEU_Mar_Helm_CEA1
   {
       scopeArsenal = 1;
       scope = 1;
   };
   class MEU_Mar_Helm_SNO1_dp  : MEU_Mar_Helm_SNO1
   {
       scopeArsenal = 1;
       scope = 1;
   };
   class MEU_Mar_Helm_URB1_dp  : MEU_Mar_Helm_URB1
   {
       scopeArsenal = 1;
       scope = 1;
   };
   class MEU_Mar_Helm_WDL1_dp  : MEU_Mar_Helm_WDL1
   {
       scopeArsenal = 1;
       scope = 1;
   };
    //no more 1st
    class MEU_Mar_Helm_MAR_dp : MEU_Mar_Helm_MAR
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_DES_dp : MEU_Mar_Helm_DES
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_CEA_dp : MEU_Mar_Helm_CEA
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_SNO_dp : MEU_Mar_Helm_SNO
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_URB_dp : MEU_Mar_Helm_URB
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_WDL_dp : MEU_Mar_Helm_WDL
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_MAR2_dp : MEU_Mar_Helm_MAR2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_DES2_dp : MEU_Mar_Helm_DES2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_CEA2_dp : MEU_Mar_Helm_CEA2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_SNO2_dp : MEU_Mar_Helm_SNO2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_URB2_dp : MEU_Mar_Helm_URB2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_WDL2_dp : MEU_Mar_Helm_WDL2
        {
            scopeArsenal = 0;
            scope = 0;
        };
	
// CH252 light helmets

    class MEU_Mar_Helm_base_L : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 Light Helmet";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
	
    class MEU_Mar_Helm_DES_L : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 Light Helmet(Desert)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
	
    class MEU_Mar_Helm_CEA_L : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 Light Helmet (Evolved)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
	
    class MEU_Mar_Helm_SNO_L : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 Light Helmet (Snow)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
	
	class MEU_Mar_Helm_URB_L : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 Light Helmet (Urban)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
	
    class MEU_Mar_Helm_WDL_L : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 Light Helmet (Woodland)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
    class MEU_Mar_Helm_base_L2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Light Helmet";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\L\V_CH252_MAR_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_Helm_DES_L2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Light Helmet(Desert)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\L\V_CH252_DES_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_Helm_CEA_L2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Light Helmet (Evolved)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\L\V_CH252_CEA_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_Helm_SNO_L2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Light Helmet (Snow)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\L\V_CH252_SNO_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
	class MEU_Mar_Helm_URB_L2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Light Helmet (Urban)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\L\V_CH252_URB_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_Helm_WDL_L2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Light Helmet (Woodland)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\L\V_CH252_WDL_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    //1st light
    class MEU_Mar_Helm_base_L1 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 Light Helmet";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\L\V_CH252_MAR_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_Helm_DES_L1 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 Light Helmet(Desert)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\L\V_CH252_DES_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_Helm_CEA_L1 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 Light Helmet (Evolved)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\L\V_CH252_CEA_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_Helm_SNO_L1 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 Light Helmet (Snow)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\L\V_CH252_SNO_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
	class MEU_Mar_Helm_URB_L1 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 Light Helmet (Urban)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\L\V_CH252_URB_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_Helm_WDL_L1 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 Light Helmet (Woodland)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\L\V_CH252_WDL_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    //end 1st light
    //1st light dp
    class MEU_Mar_Helm_base_L1_dp : MEU_Mar_Helm_base_L1
    {
        scopeArsenal = 1;
        scope = 1;
    };
    class MEU_Mar_Helm_DES_L1_dp : MEU_Mar_Helm_DES_L1
    {
        scopeArsenal = 1;
        scope = 1;
    };
    class MEU_Mar_Helm_CEA_L1_dp : MEU_Mar_Helm_CEA_L1
    {
        scopeArsenal = 1;
        scope = 1;
    };
    class MEU_Mar_Helm_SNO_L1_dp : MEU_Mar_Helm_SNO_L1
    {
        scopeArsenal = 1;
        scope = 1;
    };
    class MEU_Mar_Helm_URB_L1_dp : MEU_Mar_Helm_URB_L1
    {
        scopeArsenal = 1;
        scope = 1;
    };
    class MEU_Mar_Helm_WDL_L1_dp : MEU_Mar_Helm_WDL_L1
    {
        scopeArsenal = 1;
        scope = 1;
    };
    //2nd light dp
    class MEU_Mar_Helm_base_L_dp : MEU_Mar_Helm_base_L
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_DES_L_dp : MEU_Mar_Helm_DES_L
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_CEA_L_dp : MEU_Mar_Helm_CEA_L
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_SNO_L_dp : MEU_Mar_Helm_SNO_L
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_URB_L_dp : MEU_Mar_Helm_URB_L
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_WDL_L_dp : MEU_Mar_Helm_WDL_L
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_base_L2_dp : MEU_Mar_Helm_base_L2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_DES_L2_dp : MEU_Mar_Helm_DES_L2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_CEA_L2_dp : MEU_Mar_Helm_CEA_L2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_SNO_L2_dp : MEU_Mar_Helm_SNO_L2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_URB_L2_dp : MEU_Mar_Helm_URB_L2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_WDL_L2_dp : MEU_Mar_Helm_WDL_L2
        {
            scopeArsenal = 0;
            scope = 0;
        };
	
// CH252 MOS Helmets

    class MEU_Mar_MOS_Helm_BASE : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 Medical Helmet";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
	
    class MEU_Mar_MOS_Helm_DES : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 Medical Helmet (Desert)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
	
    class MEU_Mar_MOS_Helm_CEA : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 Medical Helmet (Evolved)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
	
    class MEU_Mar_MOS_Helm_SNO : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 Medical Helmet (Snow)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
	
	class MEU_Mar_MOS_Helm_URB : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 Medical Helmet (Urban)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
	
    class MEU_Mar_MOS_Helm_WDL : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 Medical Helmet (Woodland)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
    
    class MEU_Mar_MOS_Helm_Crolter : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Crolter";
		displayName = "[1stMEU] CH252 Medical Helmet (Crolter)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\V_CH252_MAR_M_CO_Crolter_Sucks","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    class MEU_Mar_Helm_Red : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Rave";
		displayName = "[1stMEU] CH252 Heavy Helmet (Red)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\V_CH252_MAR_H_CO_Red.paa","optre_unsc_units\army\data\helmet_visor_ca"};
	};
    class MEU_Mar_MOS_Helm_BASE1 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 Medical Helmet";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\M\V_CH252_MAR_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_MOS_Helm_DES1 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 Medical Helmet (Desert)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\M\V_CH252_DES_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_MOS_Helm_CEA1 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 Medical Helmet (Evolved)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\M\V_CH252_CEA_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_MOS_Helm_SNO1 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 Medical Helmet (Snow)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\M\V_CH252_SNO_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
	class MEU_Mar_MOS_Helm_URB1 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 Medical Helmet (Urban)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\M\V_CH252_URB_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_MOS_Helm_WDL1 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 Medical Helmet (Woodland)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\M\V_CH252_WDL_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    //1st med dp
    class MEU_Mar_MOS_Helm_BASE1_dp : MEU_Mar_MOS_Helm_BASE1
    {
        scopeArsenal = 1;
        scope = 1;
    };
    class MEU_Mar_MOS_Helm_DES1_dp : MEU_Mar_MOS_Helm_DES1
    {
        scopeArsenal = 1;
        scope = 1;
    };
    class MEU_Mar_MOS_Helm_CEA1_dp : MEU_Mar_MOS_Helm_CEA1
    {
        scopeArsenal = 1;
        scope = 1;
    };
    class MEU_Mar_MOS_Helm_SNO1_dp : MEU_Mar_MOS_Helm_SNO1
    {
        scopeArsenal = 1;
        scope = 1;
    };
    class MEU_Mar_MOS_Helm_URB1_dp : MEU_Mar_MOS_Helm_URB1
    {
        scopeArsenal = 1;
        scope = 1;
    };
    class MEU_Mar_MOS_Helm_WDL1_dp : MEU_Mar_MOS_Helm_WDL1
    {
        scopeArsenal = 1;
        scope = 1;
    };
	class MEU_Mar_MOS_Helm_Crolter_dp: 1MEU_Base_CH252_Helmet 
    { 
        scope = 1; 
        scopeArsenal = 1; 
    }; 
	class MEU_Mar_Helm_Red_dp: 1MEU_Base_CH252_Helmet 
    { 
        scope = 1; 
        scopeArsenal = 1; 
    };
    //2nd plt med
     class MEU_Mar_MOS_Helm_BASE2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Medical Helmet";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\M\V_CH252_MAR_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_MOS_Helm_DES2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Medical Helmet (Desert)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\M\V_CH252_DES_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_MOS_Helm_CEA2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Medical Helmet (Evolved)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\M\V_CH252_CEA_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_MOS_Helm_SNO2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Medical Helmet (Snow)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\M\V_CH252_SNO_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
	class MEU_Mar_MOS_Helm_URB2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Medical Helmet (Urban)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\M\V_CH252_URB_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_MOS_Helm_WDL2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Medical Helmet (Woodland)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\M\V_CH252_WDL_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    class MEU_Mar_MOS_Helm_BASE_dp : MEU_Mar_MOS_Helm_BASE
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_MOS_Helm_DES_dp : MEU_Mar_MOS_Helm_DES
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_MOS_Helm_CEA_dp : MEU_Mar_MOS_Helm_CEA
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_MOS_Helm_SNO_dp : MEU_Mar_MOS_Helm_SNO
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_MOS_Helm_URB_dp : MEU_Mar_MOS_Helm_URB
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_MOS_Helm_WDL_dp : MEU_Mar_MOS_Helm_WDL
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_MOS_Helm_BASE2_dp : MEU_Mar_MOS_Helm_BASE2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_MOS_Helm_DES2_dp : MEU_Mar_MOS_Helm_DES2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_MOS_Helm_CEA2_dp : MEU_Mar_MOS_Helm_CEA2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_MOS_Helm_SNO2_dp : MEU_Mar_MOS_Helm_SNO2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_MOS_Helm_URB2_dp : MEU_Mar_MOS_Helm_URB2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_MOS_Helm_WDL2_dp : MEU_Mar_MOS_Helm_WDL2
        {
            scopeArsenal = 0;
            scope = 0;
        };
	
// end Medical Helmets start RTO Helmets

    class MEU_RTO_Helm_base : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 RTO Helmet";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
	
    class MEU_RTO_Helm_DES : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 RTO Helmet (Desert)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
	
    class MEU_RTO_Helm_CEA : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 RTO Helmet (Evolved)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
	
    class MEU_RTO_Helm_SNO : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 RTO Helmet (Snow)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
    
	class MEU_RTO_Helm_URB : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 RTO Helmet (Urban)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
	
    class MEU_RTO_Helm_WDL : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] CH252 RTO Helmet (Woodland)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
    };
    //start custom rto helms
    class MEU_RTO_Helm_base2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 RTO Helmet";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\R\V_CH252_MAR_R1_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_RTO_Helm_DES2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 RTO Helmet (Desert)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\R\V_CH252_DES_R1_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_RTO_Helm_CEA2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 RTO Helmet (Evolved)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\R\V_CH252_CEA_R1_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_RTO_Helm_SNO2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 RTO Helmet (Snow)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\R\V_CH252_SNO_R1_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    
	class MEU_RTO_Helm_URB2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 RTO Helmet (Urban)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\R\V_CH252_URB_R1_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_RTO_Helm_WDL2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 RTO Helmet (Woodland)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\R\V_CH252_WDL_R1_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    // 1st reg up next
    class MEU_RTO_Helm_base3 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 RTO Helmet";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\R\V_CH252_MAR_R1_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_RTO_Helm_DES3 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 RTO Helmet (Desert)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\R\V_CH252_DES_R1_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_RTO_Helm_CEA3 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 RTO Helmet (Evolved)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\R\V_CH252_CEA_R1_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_RTO_Helm_SNO3 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 RTO Helmet (Snow)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\R\V_CH252_SNO_R1_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    
	class MEU_RTO_Helm_URB3 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 RTO Helmet (Urban)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\R\V_CH252_URB_R1_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_RTO_Helm_WDL3 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT CH252 RTO Helmet (Woodland)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\R\V_CH252_WDL_R1_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    // 2n sr rto helms
    class MEU_RTO_Helm_base4 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT (Sr) RTO Helmet ";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\R\V_CH252_MAR_R2_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_RTO_Helm_DES4 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT (Sr) RTO Helmet  (Desert)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\R\V_CH252_DES_R2_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_RTO_Helm_CEA4 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT (Sr) RTO Helmet  (Evolved)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\R\V_CH252_CEA_R2_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_RTO_Helm_SNO4 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT (Sr) RTO Helmet  (Snow)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\R\V_CH252_SNO_R2_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    
	class MEU_RTO_Helm_URB4 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT (Sr) RTO Helmet  (Urban)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\R\V_CH252_URB_R2_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_RTO_Helm_WDL4 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT (Sr) RTO Helmet  (Woodland)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\R\V_CH252_WDL_R2_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    //1st plt sr now
    class MEU_RTO_Helm_base5 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT (Sr) RTO Helmet ";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\R\V_CH252_MAR_R2_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_RTO_Helm_DES5 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT (Sr) RTO Helmet  (Desert)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\R\V_CH252_DES_R2_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_RTO_Helm_CEA5 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT (Sr) RTO Helmet  (Evolved)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\R\V_CH252_CEA_R2_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_RTO_Helm_SNO5 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT (Sr) RTO Helmet  (Snow)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\R\V_CH252_SNO_R2_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    
	class MEU_RTO_Helm_URB5 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT (Sr) RTO Helmet  (Urban)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\R\V_CH252_URB_R2_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_RTO_Helm_WDL5 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT (Sr) RTO Helmet  (Woodland)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\R\V_CH252_WDL_R2_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    //comm rto helms now
    class MEU_RTO_1PLT : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st PLT RTO Helmet";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\R\V_CH252_URB_R3_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    class MEU_RTO_2PLT : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT RTO Helmet";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\R\V_CH252_URB_R3_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    class MEU_RTO_CPY : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] Company RTO Helmet";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\R\V_CH252_URB_R3_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    //end that
    //end reg custom rto start dp
    //1st plt dp
    class MEU_RTO_Helm_base3_dp : MEU_RTO_Helm_base3
    {
        scope = 1;
        scopeCurator = 2;
        scopeArsenal = 1;
		author = "1st MEU Mark";
    };
	
    class MEU_RTO_Helm_DES3_dp : MEU_RTO_Helm_DES3
    {
        scope = 1;
        scopeCurator = 2;
        scopeArsenal = 1;
		author = "1st MEU Mark";
    };
	
    class MEU_RTO_Helm_CEA3_dp : MEU_RTO_Helm_CEA3
    {
        scope = 1;
        scopeCurator = 2;
        scopeArsenal = 1;
		author = "1st MEU Mark";
    };
	
    class MEU_RTO_Helm_SNO3_dp : MEU_RTO_Helm_SNO3
    {
        scope = 1;
        scopeCurator = 2;
        scopeArsenal = 1;
		author = "1st MEU Mark";
    };
    
	class MEU_RTO_Helm_URB3_dp : MEU_RTO_Helm_URB3
    {
        scope = 1;
        scopeCurator = 2;
        scopeArsenal = 1;
		author = "1st MEU Mark";
    };
    class MEU_RTO_Helm_WDL3_dp : MEU_RTO_Helm_WDL3
    {
        scope = 1;
        scopeCurator = 2;
        scopeArsenal = 1;
		author = "1st MEU Mark";
    };
    //2nd plt dp
    class MEU_RTO_Helm_base2_dp : MEU_rto_Helm_base2
    {
        scopeArsenal = 0;
        scope = 0;
    };
    class MEU_RTO_Helm_DES2_dp : MEU_rto_Helm_DES2
    {
        scopeArsenal = 0;
        scope = 0;
    };
    class MEU_RTO_Helm_CEA2_dp : MEU_rto_Helm_CEA2
    {
        scopeArsenal = 0;
        scope = 0;
    };
    class MEU_RTO_Helm_SNO2_dp : MEU_rto_Helm_SNO2
    {
        scopeArsenal = 0;
        scope = 0;
    };
    class MEU_RTO_Helm_URB2_dp : MEU_rto_Helm_URB2
    {
        scopeArsenal = 0;
        scope = 0;
    };
    class MEU_RTO_Helm_WDL2_dp : MEU_rto_Helm_WDL2
    {
        scopeArsenal = 0;
        scope = 0;
    };
    //2nd plt sr dp
    class MEU_RTO_Helm_base4_dp : MEU_RTO_Helm_base4
    {
        scope = 1;
        scopeCurator = 2;
        scopeArsenal = 1;
		author = "1st MEU Mark";
    };
    class MEU_RTO_Helm_DES4_dp : MEU_RTO_Helm_DES4
    {
        scope = 1;
        scopeCurator = 2;
        scopeArsenal = 1;
		author = "1st MEU Mark";
    };
	
    class MEU_RTO_Helm_CEA4_dp : MEU_RTO_Helm_CEA4
    {
        scope = 1;
        scopeCurator = 2;
        scopeArsenal = 1;
		author = "1st MEU Mark";
    };
	
    class MEU_RTO_Helm_SNO4_dp : MEU_RTO_Helm_SNO4
    {
        scope = 1;
        scopeCurator = 2;
        scopeArsenal = 1;
		author = "1st MEU Mark";
    };
    
	class MEU_RTO_Helm_URB4_dp : MEU_RTO_Helm_URB4
    {
        scope = 1;
        scopeCurator = 2;
        scopeArsenal = 1;
		author = "1st MEU Mark";
    };
    class MEU_RTO_Helm_WDL4_dp : MEU_RTO_Helm_WDL4
    {
        scope = 1;
        scopeCurator = 2;
        scopeArsenal = 1;
		author = "1st MEU Mark";
    };
    //1st plt sr dp
    class MEU_RTO_Helm_base5_dp : MEU_RTO_Helm_base5
    {
        scope = 1;
        scopeCurator = 2;
        scopeArsenal = 1;
		author = "1st MEU Mark";
    };
	
    class MEU_RTO_Helm_DES5_dp : MEU_RTO_Helm_DES5
    {
        scope = 1;
        scopeCurator = 2;
        scopeArsenal = 1;
		author = "1st MEU Mark";
    };
	
    class MEU_RTO_Helm_CEA5_dp : MEU_RTO_Helm_CEA5
    {
        scope = 1;
        scopeCurator = 2;
        scopeArsenal = 1;
		author = "1st MEU Mark";
    };
	
    class MEU_RTO_Helm_SNO5_dp : MEU_RTO_Helm_SNO5
    {
        scope = 1;
        scopeCurator = 2;
        scopeArsenal = 1;
		author = "1st MEU Mark";
    };
    
	class MEU_RTO_Helm_URB5_dp : MEU_RTO_Helm_URB5
    {
        scope = 1;
        scopeCurator = 2;
        scopeArsenal = 1;
		author = "1st MEU Mark";
    };
	
    class MEU_RTO_Helm_WDL5_dp : MEU_RTO_Helm_WDL5
    {
        scope = 1;
        scopeCurator = 2;
        scopeArsenal = 1;
		author = "1st MEU Mark";
    };
    
    //plt dp
    class MEU_RTO_1PLT_dp : MEU_RTO_1PLT
    {
        scopeArsenal = 0;
        scope = 0;
    };
    class MEU_RTO_2PLT_dp : MEU_RTO_2PLT
    {
        scopeArsenal = 0;
        scope = 0;
    };
    //end plt dp
    //unis helmet
    class MEU_RTO_CPY_dp : MEU_RTO_CPY
    {
        scopeArsenal = 0;
        scope = 0;
    };
    //end unis
    //start regular dp end custom
    class MEU_RTO_Helm_base_dp : MEU_rto_Helm_base
    {
        scopeArsenal = 0;
        scope = 0;
    };
    class MEU_RTO_Helm_DES_dp : MEU_rto_Helm_DES
    {
        scopeArsenal = 0;
        scope = 0;
    };
    class MEU_RTO_Helm_CEA_dp : MEU_rto_Helm_CEA
    {
        scopeArsenal = 0;
        scope = 0;
    };
    class MEU_RTO_Helm_SNO_dp : MEU_rto_Helm_SNO
    {
        scopeArsenal = 0;
        scope = 0;
    };
    class MEU_RTO_Helm_URB_dp : MEU_rto_Helm_URB
    {
        scopeArsenal = 0;
        scope = 0;
    };
    class MEU_RTO_Helm_WDL_dp : MEU_rto_Helm_WDL
    {
        scopeArsenal = 0;
        scope = 0;
    };
	
// end CH252 headgear start vest

// M52A Armor

// Rifleman
	
    class MEU_M52A_Rifleman: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_BR",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_Rifleman_DES: MEU_M52A_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Rifleman_CEA: MEU_M52A_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Rifleman_SNO: MEU_M52A_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_Rifleman_URB: MEU_M52A_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Rifleman_WDL: MEU_M52A_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	 class MEU_M52A_NCO_Rifleman: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman NCO";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Canteen",
			"AP_GL",
			"AP_MGThigh",
			"AP_BR",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_NCO_Rifleman_DES: MEU_M52A_NCO_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman NCO (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Rifleman_CEA: MEU_M52A_NCO_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman NCO (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Rifleman_SNO: MEU_M52A_NCO_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman NCO (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_NCO_Rifleman_URB: MEU_M52A_NCO_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman NCO (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Rifleman_WDL: MEU_M52A_NCO_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman NCO (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    // Grenadier
	
    class MEU_M52A_Grenadier: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Canteen",
			"AP_Knife",
			"AP_MGThigh",
			"AP_BR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_Grenadier_DES: MEU_M52A_Grenadier
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Grenadier_CEA: MEU_M52A_Grenadier
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Grenadier_SNO: MEU_M52A_Grenadier
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Grenadier_URB: MEU_M52A_Grenadier
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Grenadier_WDL: MEU_M52A_Grenadier
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_NCO_Grenadier: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier NCO";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Canteen",
			"AP_MGThigh",
			"AP_BR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_NCO_Grenadier_DES: MEU_M52A_NCO_Grenadier
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier NCO (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Grenadier_CEA: MEU_M52A_NCO_Grenadier
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier NCO (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Grenadier_SNO: MEU_M52A_NCO_Grenadier
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier NCO (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Grenadier_URB: MEU_M52A_NCO_Grenadier
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier NCO (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Grenadier_WDL: MEU_M52A_NCO_Grenadier
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier NCO (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	// AutoRifleman
	
    class MEU_M52A_AutoRifleman: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_BR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_AutoRifleman_DES: MEU_M52A_AutoRifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_AutoRifleman_CEA: MEU_M52A_AutoRifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_AutoRifleman_SNO: MEU_M52A_AutoRifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_AutoRifleman_URB: MEU_M52A_AutoRifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_AutoRifleman_WDL: MEU_M52A_AutoRifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	 class MEU_M52A_NCO_AutoRifleman: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman NCO";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Canteen",
			"AP_GL",
			"AP_BR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_NCO_AutoRifleman_DES: MEU_M52A_NCO_AutoRifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman NCO (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_AutoRifleman_CEA: MEU_M52A_NCO_AutoRifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman NCO (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_AutoRifleman_SNO: MEU_M52A_NCO_AutoRifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman NCO (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_NCO_AutoRifleman_URB: MEU_M52A_NCO_AutoRifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman NCO (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_AutoRifleman_WDL: MEU_M52A_NCO_AutoRifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman NCO (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	//Marksman
	
	class MEU_M52A_Marksman: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Smoke",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Frag",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_Marksman_DES: MEU_M52A_Marksman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Marksman_CEA: MEU_M52A_Marksman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Marksman_SNO: MEU_M52A_Marksman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_Marksman_URB: MEU_M52A_Marksman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Marksman_WDL: MEU_M52A_Marksman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	 class MEU_M52A_NCO_Marksman: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman NCO";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Smoke",
			"AP_GL",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Frag",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_NCO_Marksman_DES: MEU_M52A_NCO_Marksman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman NCO (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Marksman_CEA: MEU_M52A_NCO_Marksman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman NCO (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Marksman_SNO: MEU_M52A_NCO_Marksman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman NCO (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_NCO_Marksman_URB: MEU_M52A_NCO_Marksman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman NCO (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Marksman_WDL: MEU_M52A_NCO_Marksman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman NCO (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    // Breacher
	
    class MEU_M52A_Breacher: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_BR",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_Sniper",
			"APO_AR",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_Breacher_DES: MEU_M52A_Breacher
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Breacher_CEA: MEU_M52A_Breacher
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Breacher_SNO: MEU_M52A_Breacher
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_Breacher_URB: MEU_M52A_Breacher
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Breacher_WDL: MEU_M52A_Breacher
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	 class MEU_M52A_NCO_Breacher: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher NCO";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Canteen",
			"AP_GL",
			"AP_MGThigh",
			"AP_BR",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_Sniper",
			"APO_AR",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_BR",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_NCO_Breacher_DES: MEU_M52A_NCO_Breacher
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher NCO (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Breacher_CEA: MEU_M52A_NCO_Breacher
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher NCO (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Breacher_SNO: MEU_M52A_NCO_Breacher
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher NCO (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_NCO_Breacher_URB: MEU_M52A_NCO_Breacher
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher NCO (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Breacher_WDL: MEU_M52A_NCO_Breacher
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher NCO (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	//Sniper
	
	class MEU_M52A_Sniper: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Smoke",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Frag",
			"AP_SG",
			"AP_SMG",
			"AP_BR",
			"AP_Rounds",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_SG",
				"AP_SMG",
				"AP_BR",
				"AP_Rounds",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_Sniper_DES: MEU_M52A_Sniper
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Sniper_CEA: MEU_M52A_Sniper
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Sniper_SNO: MEU_M52A_Sniper
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_Sniper_URB: MEU_M52A_Sniper
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Sniper_WDL: MEU_M52A_Sniper
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	 class MEU_M52A_NCO_Sniper: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper NCO";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Smoke",
			"AP_GL",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Frag",
			"AP_SG",
			"AP_SMG",
			"AP_BR",
			"AP_Rounds",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_SG",
				"AP_SMG",
				"AP_BR",
				"AP_Rounds",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_NCO_Sniper_DES: MEU_M52A_NCO_Sniper
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper NCO (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Sniper_CEA: MEU_M52A_NCO_Sniper
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper NCO (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Sniper_SNO: MEU_M52A_NCO_Sniper
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper NCO (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_NCO_Sniper_URB: MEU_M52A_NCO_Sniper
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper NCO (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Sniper_WDL: MEU_M52A_NCO_Sniper
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper NCO (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	// Corpsman
	
    class MEU_M52A_Corpsman: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman";
        hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_M_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
        hiddenSelections[] = 
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_ODST",
            "A_TacPad",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AP_Smoke",
            "AP_GL",
            "AP_Knife",
            "AP_BR",
            "AP_AR",
            "AP_Frag",
            "AP_Rounds",
            "AP_SG",
            "AP_Sniper",
            "APO_AR",
            "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_BR",
				"AP_AR",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
		
    class MEU_M52A_Corpsman_DES: MEU_M52A_Corpsman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman (Desert)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
            "V_FZ_Armor\Data\Vests\V_M52_M_DES_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_Corpsman_CEA: MEU_M52A_Corpsman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman (Evolved)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
            "V_FZ_Armor\Data\Vests\V_M52_M_CEA_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_Corpsman_SNO: MEU_M52A_Corpsman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman (Snow)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
            "V_FZ_Armor\Data\Vests\V_M52_M_SNO_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
	class MEU_M52A_Corpsman_URB: MEU_M52A_Corpsman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman (Urban)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
            "V_FZ_Armor\Data\Vests\V_M52_M_URB_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_Corpsman_WDL: MEU_M52A_Corpsman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman (Woodland)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
            "V_FZ_Armor\Data\Vests\V_M52_M_WDL_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
	 class MEU_M52A_NCO_Corpsman: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman NCO";
        hiddenSelections[] = 
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_ODST",
            "A_TacPad",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AP_Smoke",
            "AP_GL",
            "AP_BR",
            "AP_AR",
            "AP_Frag",
            "AP_Rounds",
            "AP_SG",
            "AP_Sniper",
            "APO_AR",
            "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
        hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
            "V_FZ_Armor\Data\Vests\V_M52_M_MAR_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_BR",
				"AP_AR",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_NCO_Corpsman_DES: MEU_M52A_NCO_Corpsman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman NCO (Desert)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
            "V_FZ_Armor\Data\Vests\V_M52_M_DES_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_NCO_Corpsman_CEA: MEU_M52A_NCO_Corpsman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman NCO (Evolved)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
            "V_FZ_Armor\Data\Vests\V_M52_M_CEA_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_NCO_Corpsman_SNO: MEU_M52A_NCO_Corpsman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman NCO (Snow)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
            "V_FZ_Armor\Data\Vests\V_M52_M_SNO_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
	class MEU_M52A_NCO_Corpsman_URB: MEU_M52A_NCO_Corpsman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman NCO (Urban)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
            "V_FZ_Armor\Data\Vests\V_M52_M_URB_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_NCO_Corpsman_WDL: MEU_M52A_NCO_Corpsman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman NCO (Woodland)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
            "V_FZ_Armor\Data\Vests\V_M52_M_WDL_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
	// RTO
	
    class MEU_M52A_RTO: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO";
        hiddenSelections[] = 
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_ODST",
            "A_TacPad",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AP_Canteen",
            "AP_Knife",
            "AP_MGThigh",
            "AP_BR",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
            "APO_AR",
            "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
        hiddenSelectionsTextures[] = 
            {
                "V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
                "V_FZ_Armor\Data\Vests\V_M52_R_MAR_CO",
                "V_FZ_Armor\Data\Vests\V_M52_L2_MAR_CO",
                "optre_unsc_units\army\data\ghillie_woodland_co",
                "optre_unsc_units\army\data\odst_armor_co"
            };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_RTO_DES: MEU_M52A_RTO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO (Desert)";
        hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
            "V_FZ_Armor\Data\Vests\V_M52_R_DES_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L2_DES_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_RTO_CEA: MEU_M52A_RTO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO (Evolved)";
        hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
            "V_FZ_Armor\Data\Vests\V_M52_R_CEA_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L2_CEA_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_RTO_SNO: MEU_M52A_RTO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO (Snow)";
        hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
            "V_FZ_Armor\Data\Vests\V_M52_R_SNO_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L2_SNO_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_RTO_URB: MEU_M52A_RTO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO (Urban)";
        hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
            "V_FZ_Armor\Data\Vests\V_M52_R_URB_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L2_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_RTO_WDL: MEU_M52A_RTO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO (Woodland)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
            "V_FZ_Armor\Data\Vests\V_M52_R_WDL_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L2_WDL_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
	class MEU_M52A_NCO_RTO: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO NCO";
        hiddenSelections[] = 
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_ODST",
            "A_TacPad",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AP_Canteen",
            "AP_MGThigh",
            "AP_BR",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
            "APO_AR",
            "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
		};
        hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
            "V_FZ_Armor\Data\Vests\V_M52_R_MAR_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L2_MAR_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_NCO_RTO_DES: MEU_M52A_NCO_RTO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO NCO (Desert)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
            "V_FZ_Armor\Data\Vests\V_M52_R_DES_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L2_DES_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_NCO_RTO_CEA: MEU_M52A_NCO_RTO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO NCO (Evolved)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
            "V_FZ_Armor\Data\Vests\V_M52_R_CEA_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L2_CEA_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_NCO_RTO_SNO: MEU_M52A_NCO_RTO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO NCO (Snow)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
            "V_FZ_Armor\Data\Vests\V_M52_R_SNO_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L2_SNO_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_NCO_RTO_URB: MEU_M52A_NCO_RTO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO NCO (Urban)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
            "V_FZ_Armor\Data\Vests\V_M52_R_URB_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L2_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_NCO_RTO_WDL: MEU_M52A_NCO_RTO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO NCO (Woodland)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
            "V_FZ_Armor\Data\Vests\V_M52_R_WDL_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L2_WDL_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
	// Crewman
	
    class MEU_M52A_Crewman: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Smoke",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_BR",
			"AP_Frag",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_Crewman_DES: MEU_M52A_Crewman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Crewman_CEA: MEU_M52A_Crewman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Crewman_SNO: MEU_M52A_Crewman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_Crewman_URB: MEU_M52A_Crewman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Crewman_WDL: MEU_M52A_Crewman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	 class MEU_M52A_NCO_Crewman: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman NCO";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Smoke",
			"AP_GL",
			"AP_MGThigh",
			"AP_BR",
			"AP_Frag",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_AR",
			"APO_BR",
			"APO_SMG",
			"APO_Knife",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_MGThigh",
				"AP_BR",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_NCO_Crewman_DES: MEU_M52A_NCO_Crewman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman NCO (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Crewman_CEA: MEU_M52A_NCO_Crewman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman NCO (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Crewman_SNO: MEU_M52A_NCO_Crewman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman NCO (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_NCO_Crewman_URB: MEU_M52A_NCO_Crewman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman NCO (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Crewman_WDL: MEU_M52A_NCO_Crewman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman NCO (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
// end M52A gear start praetorian gear          
// praetorian vests

    class Prae37: 1MEU_BASE_M52D_Armor
	{
		author="1st MEU Mark";
		displayName="[1stMEU] M52D 3-7 (Mark)";
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_Knife",
			"AP_GL",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_AR",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"APO_Knife"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\Data\red37.paa"
		};
        
        class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_Knife",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"APO_Knife"
			};
		};
    };
	
    class Prae36: 1MEU_BASE_M52D_Armor
	{
		author="1st MEU Oneill";
		displayName="[1stMEU] M52D 3-6 (Oneill)";
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_Knife",
			"AP_GL",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_AR",
			"APO_Sniper",
			"APO_Knife"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
       
        class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_Knife",
				"AP_GL",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_AR",
				"APO_Sniper",
				"APO_Knife"
			};
		};
    };
	
    class Prae3M : 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Mark";
		displayName = "[1stMEU] M52D 3-M (FloodedMac)";
		scope = 2;
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Frag",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Smoke",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\Data\Green3M.paa"
		};
        class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Frag",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Smoke",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
        };
    };
	
    class Prae3R: 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52D 3-R (Dimitri)";
		scope = 2;
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_AR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
        };
    };
	
    class M52DRifleman: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Rifleman";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DRiflemanBlue:1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Rifleman (Blue)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Blue.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DRiflemanYellow:1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Rifleman (Yellow)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Yellow.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DRiflemanRed:1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Rifleman (Red)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};

	class M52DMarksman: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Marksman";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};	
	
	class M52DMarksmanBlue:1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Marksman (Blue)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Blue.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DMarksmanYellow:1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Marksman (Yellow)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Yellow.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DMarksmanRed:1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Marksman (Red)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Smoke",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Frag",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_AR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Frag",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Smoke",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DSniper: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Sniper";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_TacPad",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_SMG",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
		};
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_TacPad",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"CustomKit_Scorch"
			};
		};
	};	
	
	class M52DSniperBlue: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Sniper (Blue)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"AP_Smoke",
			"APO_BR",
			"APO_SMG",
			"APO_AR",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Blue.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_SMG",
				"APO_BR",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DSniperYellow: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Sniper (Yellow)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_SMG",
			"APO_BR",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Yellow.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_SMG",
				"APO_BR",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DSniperRed: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Sniper (Red)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Smoke",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Frag",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_SMG",
			"APO_AR",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_SMG",
				"APO_AR",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DAutoRifleman: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D AutoRifleman";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
		};
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DAutoRiflemanBlue: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D AutoRifleman (Blue)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Blue.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DAutoRiflemanYellow: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D AutoRifleman (Yellow)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Yellow.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DAutoRiflemanRed: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D AutoRifleman (Red)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DGrenadier: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Grenadier";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
		};
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DGrenadierBlue: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Grenadier (Blue)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Blue.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DGrenadierYellow: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Grenadier (Yellow)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Yellow.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DGrenadierRed: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Grenadier (Red)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DBreacher: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Breacher";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
		};
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DBreacherBlue: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Breacher (Blue)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Blue.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DBreacherYellow: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Breacher (Yellow)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Yellow.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DBreacherRed: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Breacher (Red)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DPlatoonCorpsman: 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52D Platoon Corpsman";
		scope = 2;
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Frag",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Smoke",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Green.paa"
		};
        subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Frag",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Smoke",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
    };
	
	class M52DCorpsman: 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52D Corpsman";
		scope = 2;
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Frag",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Smoke",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"APO_Knife",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Green.paa"
		};
        subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Frag",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Smoke",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"APO_Knife",
				"CustomKit_Scorch"
			};
		};
    };
    class Hokage: 1MEU_BASE_M52D_Armor
	{
		author="1st MEU Oneill";
		displayName="[1stMEU] Hokage";
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 
		{
			"camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_Ghillie",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AP_AR",
            "AP_BR",
            "AP_Canteen",
            "AP_Knife",
            "AP_MGThigh",
            "AP_GL",
            "AP_AR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "APO_BR",
            "APO_Sniper",
            "CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
        
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
        class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 
			{
			"camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_Ghillie",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AP_AR",
            "AP_BR",
            "AP_Canteen",
            "AP_Knife",
            "AP_MGThigh",
            "AP_GL",
            "AP_AR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "APO_BR",
            "APO_Sniper",
            "CustomKit_Scorch"
			};
		};
    };
    
    //praetorian helmets starts with broke shit
    
    class Praetor_Helmet_Black_broken : LM_OPCAN_CH252D_H3_broken
    {
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Black_31_broken : LM_OPCAN_CH252D_H3_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_31.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Black_32_broken : LM_OPCAN_CH252D_H3_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_32.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Black_33_broken : LM_OPCAN_CH252D_H3_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_33.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Ride_broken : LM_OPCAN_CH252D_H3_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_Ride.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    
    class Praetor_Helmet_Yellow_broken : LM_OPCAN_CH252D_H3_Yellow_broken
    {
        scopeArsenal = 1;
        scope = 1;
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Yellow_31_broken : LM_OPCAN_CH252D_H3_Yellow_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_31.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Yellow_32_broken : LM_OPCAN_CH252D_H3_Yellow_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_32.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Yellow_33_broken : LM_OPCAN_CH252D_H3_Yellow_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_33.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    
    class Praetor_Helmet_Blue_broken : LM_OPCAN_CH252D_H3_Blue_broken
    {
        scopeArsenal = 1;
        scope = 1;
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Blue_31_broken : LM_OPCAN_CH252D_H3_Blue_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_31.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Blue_32_broken : LM_OPCAN_CH252D_H3_Blue_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_32.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Blue_33_broken : LM_OPCAN_CH252D_H3_Blue_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_33.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Green_broken : LM_OPCAN_CH252D_H3_Green_broken
    {
        scopeArsenal = 1;
        scope = 1;
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Green_31_broken : LM_OPCAN_CH252D_H3_Green_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_Green_31.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Green_32_broken : LM_OPCAN_CH252D_H3_Green_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_Green_32.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Green_33_broken : LM_OPCAN_CH252D_H3_Green_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_Green_33.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Red_broken : LM_OPCAN_CH252D_H3_Red_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Red_Custom.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Black_baseplate_broken : Praetor_Helmet_Red_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_32_baseplate.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Com_broken : Praetor_Helmet_Red_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_red_custom_Oneill.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Com2_broken : Praetor_Helmet_Red_broken
    {
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_red_custom_Mark.paa","first_meu_aux\Data\hud_cracked.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Com3_broken : Praetor_Helmet_Red_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_red_custom_Dimitri.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Mike_broken : Praetor_Helmet_Red_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_green_custom_FloodedMac.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Ride_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_Ride.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Red_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Red_Custom.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Black_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Sound_Protec_dp : Praetor_Helmet_Black_dp
    {
        scope = 1;
        scopeArsenal = 1;
        
    };
    class Praetor_Helmet_Mike_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_green_custom_FloodedMac.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Black_31_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_31.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Black_32_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_32.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Black_33_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_33.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Yellow_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3_color_Yellow.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Yellow_31_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_31.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Yellow_32_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_32.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Yellow_33_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_33.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Blue_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3_color_blue.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Blue_31_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_31.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Blue_32_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_32.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Blue_33_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_33.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Green_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_green.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Green_31_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_Green_31.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Green_32_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_Green_32.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Green_33_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_Green_33.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Black_baseplate_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_32_baseplate.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Com_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_red_custom_Oneill.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Com2_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_red_custom_Mark.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Com3_dp :  1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_red_custom_Dimitri.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    //praetorian rto helms
    class Praetor_RTO_31: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[1stMEU] 3-1 RTO Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_R1_31.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_RTO_32: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[1stMEU] 3-2 RTO Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_R1_32","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_RTO_33: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[1stMEU] 3-3 RTO Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_R1_33","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    //broken
    class Praetor_RTO_31_broken : Praetor_RTO_31
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_R1_31.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_RTO_32_broken : Praetor_RTO_32
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_R1_32.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_RTO_33_broken : Praetor_RTO_33
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_R1_33.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    //depolar rto helms
    class Praetor_RTO_31_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_R1_31.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_32_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_R1_32.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_33_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_R1_33.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    //regular helms
    class Praetor_Helmet_Ride: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[1stMEU] CH252D Ride Along Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_Ride.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Black: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[1stMEU] CH252D Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
     class Praetor_Helmet_Black_31: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[1stMEU] CH252D Helmet (3-1)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_31.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Helmet_Black_32: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[1stMEU] CH252D Helmet (3-2)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_32.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Black_baseplate: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[1stMEU] CH252D Helmet (Romeo)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_32_baseplate.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Black_33: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[1stMEU] CH252D Helmet (3-3)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_33.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Yellow: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] CH252D Helmet (Yellow)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3_color_Yellow.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Helmet_Yellow_31: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[1stMEU] CH252D Helmet (Yellow) (3-1)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_31.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Yellow_32: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[1stMEU] CH252D Helmet (Yellow) (3-2)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_32.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Yellow_33: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[1stMEU] CH252D Helmet (Yellow) (3-3)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_33.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
	class Praetor_Helmet_Blue: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] CH252D Helmet (Blue)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3_color_Blue.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Helmet_Blue_31: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[1stMEU] CH252D Helmet (Blue) (3-1)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_31.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Blue_32: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[1stMEU] CH252D Helmet (Blue) (3-2)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_32.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Blue_33: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[1stMEU] CH252D Helmet (Blue) (3-3)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_33.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
	class Praetor_Helmet_Green: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] CH252D Helmet (Green)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3_color_green.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Helmet_Green_31: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[1stMEU] CH252D Helmet (Corpsman) (3-1)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_green_31.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Green_32: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[1stMEU] CH252D Helmet (Corpsman) (3-2)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_green_32.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Green_33: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[1stMEU] CH252D Helmet (Corpsman) (3-3)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_green_33.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
	class Praetor_Helmet_Red: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] CH252D Helmet (Red)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3_color_Red.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Helmet_Com: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] CH252D Helmet (Oneill)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_red_custom_Oneill.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Helmet_Com2: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] CH252D Helmet (Mark)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_red_custom_Mark.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Helmet_Com3: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] CH252D Helmet (Dimitri)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_red_custom_Dimitri.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Helmet_Mike: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] CH252D Helmet (FloodedMac)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_green_custom_FloodedMac.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Sound_Protec: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		displayName = "[1stMEU] CH252D Soundproof Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
	
// Praetorian Helmet End
// pilot helmet Start
    class Siffy_Helmet : OPTRE_UNSC_VX16_Helmet_base
    {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Siffys Helmet";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Custom_Siffy.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Custom_Siffy.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class peg_flight : Siffy_Helmet
    {
        displayName = "[1stMEU] Pegasus Flight Commander";
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_FC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_FC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_Paladios_section : Siffy_Helmet
    {
        displayName = "[1stMEU] Pegasus Paladios Section Lead";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_Helios_section : Siffy_Helmet
    {
        displayName = "[1stMEU] Pegasus Helios Section Lead";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_Axios_section : Siffy_Helmet
    {
        displayName = "[1stMEU] Pegasus Axios Section Lead";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Paladios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Paladios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_ilithios_section : Siffy_Helmet
    {
        displayName = "[1stMEU] Pegasus Ilithios Section Lead";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_Cerberus_section : Siffy_Helmet
    {
        displayName = "[1stMEU] Pegasus Cerberus Helmet";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Cerberus.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Cerberus.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_Paladios : Siffy_Helmet
    {
        displayName = "[1stMEU] Pegasus Paladios Helmet";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_Helios : Siffy_Helmet
    {
        displayName = "[1stMEU] Pegasus Helios Helmet";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_Axios : Siffy_Helmet
    {
        displayName = "[1stMEU] Pegasus Axios Helmet";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Paladios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Paladios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_ilithios : Siffy_Helmet
    {
        displayName = "[1stMEU] Pegasus Ilithios Helmet";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_Cerberus : Siffy_Helmet
    {
        displayName = "[1stMEU] Pegasus Cerberus Helmet";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Cerberus.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Cerberus.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_Base : Siffy_Helmet
    {
        displayName = "[1stMEU] Pegasus Helmet";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Pegasus.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Pegasus.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_Deck : Siffy_Helmet
    {
        displayName = "[1stMEU] Pegasus Deck Officer Helmet";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Prometheus.paa","attach_face_mask"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Prometheus.paa","attach_face_mask"};
		};
    };
    //dp and broken shit for pilots
    class Siffy_Helmet_dp : Siffy_Helmet
    {
        scopeArsenal = 0;
        scope = 0;
        displayName = "[1stMEU] Pegasus Helmet DP1";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Custom_Siffy.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Custom_Siffy.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_Deck_dp : Siffy_Helmet
    {
        scopeArsenal = 0;
        scope = 0;
        displayName = "[1stMEU] Pegasus Deck Officer Helmet DP";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Prometheus.paa","attach_face_mask"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Prometheus.paa","attach_face_mask"};
		};
    };
    class peg_flight_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 0;
        scope = 0;
        displayName = "[1stMEU] Pegasus Helmet DP2";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_FC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_FC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    }
    class Peg_Axios_section_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 0;
        scope = 0;
        displayName = "[1stMEU] Pegasus Helmet DP3";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_Helios_section_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 0;
        scope = 0;
        displayName = "[1stMEU] Pegasus Helmet DP4";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_Paladios_section_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 0;
        scope = 0;
        displayName = "[1stMEU] Pegasus Helmet DP5";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Paladios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
        class ItemInfo: ItemInfo
		{
            hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
            hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Paladios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_ilithios_section_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 0;
        scope = 0;
        displayName = "[1stMEU] Pegasus Helmet DP6";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
        class ItemInfo: ItemInfo
		{
            hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
            hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_Axios_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 0;
        scope = 0;
        displayName = "[1stMEU] Pegasus Helmet DP7";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_Helios_dp : Siffy_Helmet_dp
    {
        scope = 0;
        displayName = "[1stMEU] Pegasus Helmet DP8";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_Paladios_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 0;
        scope = 0;
        displayName = "[1stMEU] Pegasus Helmet DP9";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Paladios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Paladios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_ilithios_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 0;
        scope = 0;
        displayName = "[1stMEU] Pegasus Helmet DP10";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_Cerberus_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 0;
        scope = 0;
        displayName = "[1stMEU] Pegasus Helmet DP11";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Cerberus.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Cerberus.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_Cerberus_Section_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 0;
        scope = 0;
        displayName = "[1stMEU] Pegasus Helmet DP12";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Cerberus.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Cerberus.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_Base_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 0;
        scope = 0;
        displayName = "[1stMEU] Pegasus Helmet DP13";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Pegasus.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Pegasus.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    //broken stuff
    class Siffy_Helmet_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 0;
        scope = 0;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Custom_Siffy.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
    };
    class peg_flight_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 0;
        scope = 0;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_FC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
    }
    class Peg_Axios_section_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 0;
        scope = 0;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
    };
    class Peg_Helios_section_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 0;
        scope = 0;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
    };
    class Peg_Paladios_section_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 0;
        scope = 0;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Paladios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
    };
    class Peg_ilithios_section_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 0;
        scope = 0;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
    };
    class Peg_Cerberus_section_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 0;
        scope = 0;
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Cerberus.paa","attach_face_mask"};
    };
    class Peg_Axios_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 0;
        scope = 0;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
    };
    class Peg_Helios_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 0;
        scope = 0;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
    };
    class Peg_Paladios_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 0;
        scope = 0;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Paladios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
    };
    class Peg_ilithios_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 0;
        scope = 0;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
    };
    class Peg_Base_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 0;
        scope = 0;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Pegasus.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
    };
	class Peg_Deck_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 0;
        scope = 0;
        displayName = "[1stMEU] Pegasus Deck Officer Helmet DP";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Prometheus.paa","attach_face_mask"};
    };
    class Peg_Cerberus_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 0;
        scope = 0;
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Cerberus.paa","attach_face_mask"};
    };
// Pilot Helmet End
// Pilot Armor Start

class Pilot_Recruit: 1MEU_BASE_Pilot_Armor 
	{	
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] Pilot Body Armor (Recruit)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_ChestArmor",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class Pilot_WO1: 1MEU_BASE_Pilot_Armor 
	{	
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] Pilot Body Armor (WO1)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_ChestArmor",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_ChestArmor",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class Pilot_WO2: 1MEU_BASE_Pilot_Armor 
	{	
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] Pilot Body Armor (WO2)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class Pilot_CWO3: 1MEU_BASE_Pilot_Armor 
	{	
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] Pilot Body Armor (CWO3)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class Pilot_CWO4: 1MEU_BASE_Pilot_Armor 
	{	
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] Pilot Body Armor (CWO4)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class Pilot_CWO5: 1MEU_BASE_Pilot_Armor 
	{	
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] Pilot Body Armor (CWO5)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class Pilot_Officer: 1MEU_BASE_Pilot_Armor 
	{	
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] Pilot Body Armor (Officer)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_MGThigh",
			"AP_Rounds",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"AP_Frag",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
// Pilot Armor End

// Recon Armor
	class M52DRecon: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Recon";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_Sniper",
			"APO_AR",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
// Recon End

// BDU Start
	
	class Praetorian_BDU : U_B_CombatUniform_mcam
	{
		author = "1stMEU Oneill";
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Combat Uniform";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
		class ItemInfo: UniformItem
		{
			uniformClass = "BDU_V_Praetorian_Slim";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
    class Centurion_BDU : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Slim";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
		
	class Centurion_BDU_Urban_Evolved : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform (Urban/Evolved)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Urban_Evolved_Slim";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Desert : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform (Desert)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Desert_Slim";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Snow : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform (Snow)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Snow_Slim";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Woodland : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform (Woodland)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Woodland_Slim";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Pegasus_Pilot_Uniform : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Pegasus Pilot Uniform";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
		ACE_GForceCoef = 0.1;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Pegasus_Slim";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Rolled : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Rolled Sleeves";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Slim_Rolled";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
		
	class Centurion_BDU_Urban_Evolved_Rolled : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Rolled Sleeves (Urban/Evolved)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Urban_Evolved_Slim_Rolled";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Desert_Rolled : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Rolled Sleeves (Desert)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Desert_Slim_Rolled";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Snow_Rolled : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Rolled Sleeves (Snow)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Snow_Slim_Rolled";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Woodland_Rolled : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Rolled Sleeves (Woodland)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Woodland_Slim_Rolled";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Pegasus_Pilot_Uniform_Rolled : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Pegasus Pilot Uniform Rolled Sleeves";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
		ACE_GForceCoef = 0.1;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Pegasus_Slim_Rolled";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Short : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Short Sleeves";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Slim_Short";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
		
	class Centurion_BDU_Urban_Evolved_Short : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Short Sleeves (Urban/Evolved)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Urban_Evolved_Slim_Short";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Desert_Short : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Short Sleeves (Desert)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Desert_Slim_Short";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Snow_Short : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Short Sleeves (Snow)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Snow_Slim_Short";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Woodland_Short : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Short Sleeves (Woodland)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Woodland_Slim_Short";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Pegasus_Pilot_Uniform_Short : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Pegasus Pilot Uniform Short Sleeves";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
		ACE_GForceCoef = 0.1;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Pegasus_Slim_Short";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
// BDU End
// Air Assault Helmet start
	
	class MEU_CH252A_Pararescue_Rave : VES_CH252A
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[1stMEU] CH252A Helmet (Rave)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\V_CH252A_DEF_CO_Rave.paa","V_FZ_Armor\Data\Helmets\V_CH252A_SLV_V_CO.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
    };
	class MEU_CH252A_Pararescue_Dino: VES_CH252A
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[1stMEU] CH252A Helmet (Dino)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\V_CH252A_DEF_CO_Dino","V_FZ_Armor\Data\Helmets\V_CH252A_GLD_V_CO.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};	
    class MEU_CH252A_Pararescue_Blue: VES_CH252A
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[1stMEU] CH252A Helmet (Pararescue Blue)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_BLU_V_CO.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};
	class MEU_CH252A_Pararescue_Silver: VES_CH252A
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[1stMEU] CH252A Helmet (Pararescue Silver)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_SLV_V_CO.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};
	class MEU_CH252A_Pararescue_Gold: VES_CH252A
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[1stMEU] CH252A Helmet (Pararescue Gold)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_GLD_V_CO.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};
	class MEU_CH252A_Pararescue_Rave_dp : VES_CH252A
	{
		scope = 0;
		scopeArsenal = 0;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[1stMEU] CH252A Helmet (Rave)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\V_CH252A_DEF_CO_Rave.paa","V_FZ_Armor\Data\Helmets\V_CH252A_CLR_V_CA.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
    };
	class MEU_CH252A_Pararescue_Dino_dp : VES_CH252A
	{
		scope = 0;
		scopeArsenal = 0;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[1stMEU] CH252A Helmet (Dino)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\V_CH252A_DEF_CO_Dino","V_FZ_Armor\Data\Helmets\V_CH252A_CLR_V_CA.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};	
    class MEU_CH252A_Pararescue_Blue_dp : VES_CH252A
	{
		scope = 0;
		scopeArsenal = 0;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[1stMEU] CH252A Helmet (Pararescue Blue)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_CLR_V_CA.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};
	class MEU_CH252A_Pararescue_Silver_dp : VES_CH252A
	{
		scope = 0;
		scopeArsenal = 0;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[1stMEU] CH252A Helmet (Pararescue Silver)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_CLR_V_CA.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};
	class MEU_CH252A_Pararescue_Gold_dp : VES_CH252A
	{
		scope = 0;
		scopeArsenal = 0;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[1stMEU] CH252A Helmet (Pararescue Gold)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_CLR_V_CA.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};
// Weapons Start
    
    class Throw : GrenadeLauncher
	{
		muzzles[] += {"MEU_C7_Muzzle","MEU_C12_Muzzle","MEU_9bang_Muzzle","MEU_C168_Muzzle","MEU_Fury_Muzzle",};
		class MEU_C7_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"MEU_c7_remote_throwable_Mag"};
        };
        class MEU_C12_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"MEU_c12_remote_throwable_Mag"};
		};
        class MEU_9bang_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"MEU_9bang_Mag"};
		};
        class MEU_C168_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"MEU_C168_Mag"};
		};
		class MEU_Fury_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"MEU_Fury_Mag"};
		};
    };
	
	class OPTRE_M7: OPTRE_SubMachineGun_Base
	{
		magazines[]=
		{
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag_Tracer",
			"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow",
			"OPTRE_60Rnd_5x23mm_Mag_FMJ",
			"OPTRE_60Rnd_5x23mm_Mag_FMJT",
			"OPTRE_60Rnd_5x23mm_Mag_HV",
			"OPTRE_60Rnd_5x23mm_Mag_HVT",
			"OPTRE_60Rnd_5x23mm_Mag_JHP",
			"OPTRE_60Rnd_5x23mm_Mag_JHPT",
			"OPTRE_60Rnd_5x23mm_Mag_SS",
			"OPTRE_60Rnd_5x23mm_Mag_SST",
			"OPTRE_48Rnd_5x23mm_Mag",
			"OPTRE_48Rnd_5x23mm_Mag_Tracer",
			"OPTRE_48Rnd_5x23mm_Mag_Tracer_Yellow",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJT",
			"OPTRE_48Rnd_5x23mm_Mag_HV",
			"OPTRE_48Rnd_5x23mm_Mag_HVT",
			"OPTRE_48Rnd_5x23mm_Mag_JHP",
			"OPTRE_48Rnd_5x23mm_Mag_JHPT",
			"OPTRE_48Rnd_5x23mm_Mag_SS",
			"OPTRE_48Rnd_5x23mm_Mag_SST",
			"OPTRE_60Rnd_5x23mm_Mag_NARQ",
			"OPTRE_60Rnd_5x23mm_Mag_NARQT"
		};
	};
	
    class MEU_M7v2: OPTRE_M7
    {
        baseweapon = "MEU_M7v2";
        dlc = "SO";
        author = "1st MEU Mark";
		scope = 2;
        scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "M7X-T2";
        magazineReloadTime = 2.0;
        reloadAction = "";
        class LinkedItems
		{
            class WeaponSlotsInfo
            {
                mass = 29;
                class MuzzleSlot: MuzzleSlot
                {
                    compatibleitems[] = {"muzzle_snds_b","muzzle_snds_h_mg_blk_f","ace_muzzle_mzls_b","optre_m7_silencer","optre_m6_silencer"};
                };
                class CowsSlot: CowsSlot
                {
                    compatibleitems[] ={"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRS99_Scope_v2","OPTRE_SRS99C_Scope_v2","OPTRE_M73_Smartlink_v2","OPTRE_M6S_Scope","OPTRE_M6GX_Scope","OPTRE_M6D_Smartlink","OPTRE_MA5_SmartLink","OPTRE_MA5_SmartLink_v2","OPTRE_MA5C_SmartLink_v2","OPTRE_MA5_SmartLink_legacy","OPTRE_MA5C_SmartLink_legacy","OPTRE_M7_Sight_v2","OPTRE_M392_Scope_v2","OPTRE_BMR_Scope_v2","OPTRE_M393_Scope_v2","OPTRE_M393_ACOG_v2","OPTRE_M393_EOTECH_v2","OPTRE_BR55HB_Scope_v2"};
                };
                class PointerSlot: PointerSlot
                {
				    compatibleitems[] = {"acc_pointer_ir","ace_acc_pointer_green","acc_flashlight","optre_m45_flashlight","optre_m45_flashlight_red","optre_m7_laser","optre_m7_flashlight","OPTRE_BMR_Laser"};
                };
            };
		};
    };
	
	class OPTRE_M301X: UGL_F
	{
		magazines[] = {"UGL_8Gauge_Pellet","UGL_8Gauge_Slug","UGL_8Gauge_Beanbag","UGL_FlareBlue_F","3Rnd_UGL_8Gauge_Pellet","3Rnd_UGL_8Gauge_Slug","3Rnd_UGL_8Gauge_Beanbag","3Rnd_UGL_FlareBlue_F","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell","1Rnd_HE_MEU_shell","1Rnd_HEDP_MEU_shell","3Rnd_HE_MEU_shell"};
	};
    
	class M250HMG: OPTRE_M247
	{
		dlc = "OPTRE";
		author = "[1stMEU] Oneill";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		handAnim[] = {"OFP2_ManSkeleton","\OPTRE_Weapons\MG\data\anim\OPTRE_M247_handanim.rtm","Spartan_ManSkeleton","\OPTRE_Weapons\MG\data\anim\M247_Spartan.rtm"};
		model = "\OPTRE_Weapons\MG\M247.p3d";
		displayName = "M250 Heavy Machine Gun";
		descriptionShort = "UNSC Heavy Machine Gun (man portable)";
		magazines[] = {"OPTRE_100Rnd_127x99_M250HMG", "OPTRE_100Rnd_127x99_HE_M250HMG"};
		recoil = "recoil_trg21";
		baseWeapon = "M250HMG";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 150;
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRS99_Scope_v2","OPTRE_SRS99C_Scope_v2","OPTRE_M73_Smartlink_v2","OPTRE_M6S_Scope","OPTRE_M6GX_Scope","OPTRE_M6D_Smartlink","OPTRE_MA5_SmartLink","OPTRE_MA5_SmartLink_v2","OPTRE_MA5C_SmartLink_v2","OPTRE_MA5_SmartLink_legacy","OPTRE_MA5C_SmartLink_legacy","OPTRE_M7_Sight_v2","OPTRE_M392_Scope_v2","OPTRE_BMR_Scope_v2","OPTRE_M393_Scope_v2","OPTRE_M393_ACOG_v2","OPTRE_M393_EOTECH_v2","OPTRE_BR55HB_Scope_v2"};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {};
			};
		};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				begin1[] = {"\OPTRE_Weapons\MG\data\sounds\M247_1.wss",1.0,1,2000};
				begin2[] = {"\OPTRE_Weapons\MG\data\sounds\M247_2.wss",1.0,1,2000};
			};
			reloadTime = 0.1;
			dispersion = 0.0030;
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				begin1[] = {"\OPTRE_Weapons\MG\data\sounds\M247_1.wss",1.0,1,2000};
				begin2[] = {"\OPTRE_Weapons\MG\data\sounds\M247_2.wss",1.0,1,2000};
			};
			reloadTime = 0.1;
			dispersion = 0.0030;
		};
	};
	//Q: is this thing working? A: No, it is fucked.  Sad day is sad.
	class OPTRE_BR55HB: OPTRE_Rifle_Base
	{
		modes[] = 
		{
			"Single",
			"Burst"
		};
	};
	
	class OPTRE_M392_DMR: OPTRE_LongRifle_Base
	{
		magazines[]=
		{
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag_Tracer",
			"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_15Rnd_762x51_Mag_AP",
			"OPTRE_15Rnd_762x51_Mag_APT",
			"OPTRE_15Rnd_762x51_Mag_JHP",
			"OPTRE_15Rnd_762x51_Mag_JHPT",
			"OPTRE_15Rnd_762x51_Mag_SS",
			"OPTRE_15Rnd_762x51_Mag_SST",
			"OPTRE_15Rnd_762x51_Mag_FS",
			"OPTRE_15Rnd_762x51_Mag_FST",
			"OPTRE_15Rnd_DMR_762x51_Mag_AP",
			"OPTRE_15Rnd_DMR_762x51_Mag_APT",
			"OPTRE_15Rnd_DMR_762x51_Mag_JHP",
			"OPTRE_15Rnd_DMR_762x51_Mag_JHPT",
			"OPTRE_15Rnd_DMR_762x51_Mag_SS",
			"OPTRE_15Rnd_DMR_762x51_Mag_SST",
			"OPTRE_15Rnd_DMR_762x51_Mag_FS",
			"OPTRE_15Rnd_DMR_762x51_Mag_FST"
		};
		magazineWell[] = {};
		
		modes[] = 
		{
			"Single"
		};
	};
	
	class OPTRE_M295_BMR: OPTRE_M393_DMR
    {
        magazines[] = 
		{
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag_Tracer",
			"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_15Rnd_762x51_Mag_AP",
			"OPTRE_15Rnd_762x51_Mag_APT",
			"OPTRE_15Rnd_762x51_Mag_JHP",
			"OPTRE_15Rnd_762x51_Mag_JHPT",
			"OPTRE_15Rnd_762x51_Mag_SS",
			"OPTRE_15Rnd_762x51_Mag_FS",
			"OPTRE_15Rnd_762x51_Mag_FST",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_AP",
			"OPTRE_32Rnd_762x51_Mag_APT",
			"OPTRE_32Rnd_762x51_Mag_JHP",
			"OPTRE_32Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag_SS",
			"OPTRE_32Rnd_762x51_Mag_SST",
			"OPTRE_15Rnd_DMR_762x51_Mag_AP",
			"OPTRE_15Rnd_DMR_762x51_Mag_APT",
			"OPTRE_15Rnd_DMR_762x51_Mag_JHP",
			"OPTRE_15Rnd_DMR_762x51_Mag_JHPT",
			"OPTRE_15Rnd_DMR_762x51_Mag_SS",
			"OPTRE_15Rnd_DMR_762x51_Mag_SST",
			"OPTRE_15Rnd_DMR_762x51_Mag_FS",
			"OPTRE_15Rnd_DMR_762x51_Mag_FST"
		};
		magazineWell[] = {};
		
		modes[] = 
		{
			"Single",
			"FullAuto"
		};
    };
    
    class OPTRE_CR77: OPTRE_M393_DMR
    {
        modes[] = 
		{
			"Single",
			"FullAuto"
		};
    };
	
	// Weapon end
	
    //back to weapons
    class OPTRE_M319 : OPTRE_Rifle_Base
    {
        magazines[] = {"UGL_8Gauge_Pellet","UGL_8Gauge_Slug","UGL_8Gauge_Beanbag","UGL_FlareBlue_F","3Rnd_UGL_8Gauge_Pellet","3Rnd_UGL_8Gauge_Slug","3Rnd_UGL_8Gauge_Beanbag","3Rnd_UGL_FlareBlue_F","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell","1Rnd_HE_MEU_shell","1Rnd_HEDP_MEU_shell","3Rnd_HE_MEU_shell"};
    };

};												 