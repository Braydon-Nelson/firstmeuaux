//imports
class OPTRE_Ammo_SupplyPod_Empty;
class OPTRE_Ammo_SupplyPod_Launcher;
class Module_F;

////////////Base Pods
//Guided SPNKr
class OPTRE_Ammo_SupplyPod_Launcher_Guided: OPTRE_Ammo_SupplyPod_Empty
{
	displayName	= "[UNSC] Supply Pod (M41-G)";
	class TransportMagazines
	{		
		mag_xx(OPTRE_M41_Twin_HEAT_G, 12);
	};
	class TransportWeapons
	{
		weap_xx(OPTRE_M41_SSR_G, 1);
	};
};
//Ace medical 
class OPTRE_Ammo_SupplyPod_NEWACE_Medical: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (New ACE Medical)";
	class TransportItems
	{
		item_xx(ACE_elasticBandage, 100);
		item_xx(ACE_packingBandage, 80);
		item_xx(ACE_plasmaIV_500, 40);
		item_xx(ACE_epinephrine, 80);
		item_xx(ACE_tourniquet, 80);
		item_xx(ACE_quikclot, 80);
		item_xx(ACE_morphine, 80);
		item_xx(ACE_plasmaIV, 40);
		item_xx(ACE_Banana, 5);
		item_xx(ACE_splint, 80);
		
	};
};
//M247 LMG (the shitty one)
class OPTRE_Ammo_SupplyPod_M247: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] GPMG Supply Pod (M247)";
	class TransportMagazines
	{			
		mag_xx(OPTRE_400Rnd_762x51_Box_Tracer, 3);
		mag_xx(OPTRE_100Rnd_762x51_Box_Tracer, 6);
	};
	class TransportWeapons
	{
		weap_xx(OPTRE_M247, 1);
	};
	class TransportItems
	{
		item_xx(optic_arco_blk_f, 1);
	};
};
///////// Vulcan's CSW Memes
//Mortar
class OPTRE_Ammo_SupplyPod_Mortar_Ammo: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (Mortar Ammo)";        
	class TransportMagazines
	{			
		mag_xx(ACE_1Rnd_82mm_Mo_Smoke, 3);
		mag_xx(ACE_1Rnd_82mm_Mo_Illum, 3);
		mag_xx(ACE_1Rnd_82mm_Mo_HE, 18);
	};
};
class OPTRE_Ammo_SupplyPod_Mortar: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (Mortar Tube)";        
	class TransportMagazines
	{
		mag_xx(ACE_1Rnd_82mm_Mo_HE, 5);
	};
	// 5lbs for mortar round, mortar tube is 62lbs, mortar base is 29lbs, 120lbs max for carryable.
	class TransportWeapons
	{
		weap_xx(ace_csw_staticMortarCarry, 1); 
		weap_xx(ace_csw_carryMortarBaseplate, 1);
	};
};
//HMG
class OPTRE_SupplyPod_StaticHMG: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (Static HMG)";
	class TransportMagazines
	{
		mag_xx(ace_csw_100Rnd_127x99_mag, 3); //9.6lbs
	};
	class TransportWeapons
	{
		weap_xx(ace_csw_staticHMGCarry, 1); //84lbs
		weap_xx(ace_csw_m3CarryTripod, 1); //44lbs //total 156.8, max draggable 160lbs.
	};
};
class OPTRE_SupplyPod_StaticHMGAmmo: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (Static HMG Ammo)";
	class TransportMagazines
	{
		mag_xx(ace_csw_100Rnd_127x99_mag, 12); //9.6lbs
	};
};
//GMG
class OPTRE_SupplyPod_StaticGMG: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (Static GMG)";
	class TransportMagazines
	{
		mag_xx(ace_csw_20Rnd_20mm_G_belt, 3); //9.6lbs
	};
	class TransportWeapons
	{
		weap_xx(ace_csw_staticGMGCarry, 1); //84lbs
		weap_xx(ace_csw_m3CarryTripod, 1); //44lbs //total 156.8, max draggable 160lbs.
	};
};
class OPTRE_SupplyPod_StaticGMGAmmo: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (Static GMG Ammo)";
	class TransportMagazines
	{
		mag_xx(ace_csw_20Rnd_20mm_G_belt, 12); //9.6lbs
	};
};
//AT
class OPTRE_SupplyPod_StaticAT: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (Static AT)";
	class TransportMagazines
	{
		mag_xx(Titan_AT, 4); //10lbs
	};
	class TransportWeapons
	{
		weap_xx(ace_csw_staticATCarry, 1); //32lbs
		weap_xx(ace_csw_m3CarryTripod, 1); //44lbs max draggable 160lbs.
	};
};
class OPTRE_SupplyPod_StaticATAmmo: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (Static AT Ammo)";
	class TransportMagazines
	{
		mag_xx(Titan_AT, 9); //10lbs
		mag_xx(Titan_AP, 5); //6lbs
	};
};
//AA
class OPTRE_SupplyPod_StaticAA: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (Static AA)";
	class TransportMagazines
	{
		mag_xx(Titan_AA, 4); //10lbs
	};
	class TransportWeapons
	{
		weap_xx(ace_csw_staticAACarry, 1); //32lbs
		weap_xx(ace_csw_m3CarryTripod, 1); //44lbs max draggable 160lbs.
	};
};
class OPTRE_SupplyPod_StaticAAAmmo: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (Static AA Ammo)";
	class TransportMagazines
	{
		mag_xx(Titan_AA, 12); //10lbs
	};
};
///////// Vulcan's Vehicle Memes
//ammo
class OPTRE_SupplyPod_VehicleAmmo: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (Vehicle Ammo)"; 
	ace_rearm_defaultSupply = 400;
};
//repair
class OPTRE_SupplyPod_VehicleRepair: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (Vehicle Repair)"; 
	ace_repair_canRepair = 1;
	ace_cargo_space = 8;
	ace_cargo_hasCargo = 1;
	class TransportItems
	{
		item_xx(ToolKit, 1);
	};
};
class OPTRE_SupplyPod_TrackedVehicleRepair: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (Tracked Vehicle Repair)"; 
	ace_repair_canRepair = 1;
	ace_cargo_space = 16;
	ace_cargo_hasCargo = 1;
	class TransportItems
	{
		item_xx(ToolKit, 1);
	};
};
//fuel
class OPTRE_SupplyPod_VehicleRefuel: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (Vehicle Refuel)";
};
///////// mark starts memeing here
//AR for everyone
class OPTRE_Ammo_SupplyPod_MA5BXAR: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (MA5BX AR)";
	class TransportMagazines
	{			
		mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 60);
	};
	class TransportWeapons
	{
		weap_xx(OPTRE_MA5B, 4);
	};
	class TransportItems
	{
		
	};
};
//GL of the AR
class OPTRE_Ammo_SupplyPod_MA5BXARGL: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (MA5BX GL)";
	class TransportMagazines
	{	
        mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 54);
		mag_xx(1Rnd_HE_MEU_shell, 30);
		mag_xx(3Rnd_HE_MEU_shell, 10);
		mag_xx(1Rnd_HEDP_MEU_shell, 10);
	};
	class TransportWeapons
	{
		weap_xx(OPTRE_MA5BGL, 2);
	};
	class TransportItems
	{
		
	};
};
//saw basically
class OPTRE_Ammo_SupplyPod_M73X: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (M73X LMG)";
	class TransportMagazines
	{	
        mag_xx(OPTRE_200Rnd_95x40_Box_HPSAP, 10);
        mag_xx(OPTRE_200Rnd_95x40_Box_JHP, 10);
	};
	class TransportWeapons
	{
		weap_xx(OPTRE_M73, 2);
	};
	class TransportItems
	{
		item_xx(optic_arco_blk_f, 2);
	};
};
//smg pod
class OPTRE_Ammo_SupplyPod_M7XTardis: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (M7X SMG)";
	class TransportMagazines
	{	
        mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 100);
	};
	class TransportWeapons
	{
		weap_xx(OPTRE_M7, 4);
	};
	class TransportItems
	{
		item_xx(optre_m7_sight_v2, 4);
        item_xx(optre_m7_silencer, 4);
        item_xx(optre_m7_laser, 4);
	};
};
//its bigger on the inside?
//shotgun here
class OPTRE_Ammo_SupplyPod_ShotgunM45X: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (M45X Shotgun)";
	class TransportMagazines
	{	
        mag_xx(OPTRE_12Rnd_8Gauge_Pellets, 15);
        mag_xx(OPTRE_12Rnd_8Gauge_Slugs, 25);
        mag_xx(OPTRE_12Rnd_8Gauge_Beanbag, 15);
        mag_xx(AMP_Breaching_Charge_Mag, 20);
	};
	class TransportWeapons
	{
		weap_xx(OPTRE_M45, 2);
	};
	class TransportItems
	{
		item_xx(optre_m7_sight_v2, 2);
	};
};
//dmr subject to change
class OPTRE_Ammo_SupplyPod_DMRM395X: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (M395X DMR)";
	class TransportMagazines
	{	
        mag_xx(OPTRE_15Rnd_DMR_762x51_Mag_AP, 20);
		mag_xx(OPTRE_15Rnd_DMR_762x51_Mag_JHP, 20);
        mag_xx(OPTRE_20Rnd_86x70_Mag_JHPT, 20);
        mag_xx(OPTRE_20Rnd_86x70_Mag_APT, 20);
	};
	class TransportWeapons
	{
		weap_xx(OPTRE_M393_DMR, 2);
	};
	class TransportItems
	{
		item_xx(optre_bmr_scope_v2, 2);
	};
};
//BXR? no br55x
class OPTRE_Ammo_SupplyPod_BR55X: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (BR55X)";
	class TransportMagazines
	{	
        mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 135);
	};
	class TransportWeapons
	{
		weap_xx(OPTRE_BR55, 2);
	};
	class TransportItems
	{
		item_xx(optre_br55hb_scope_v2, 2);
	};
};
//sniper, who the hell ordered this?
class OPTRE_Ammo_SupplyPod_SR99DXSniper: OPTRE_Ammo_SupplyPod_Empty
{
	displayName = "[UNSC] Supply Pod (SR99DX Sniper)";
	class TransportMagazines
	{	
        mag_xx(OPTRE_4Rnd_145x114_APFSDS_Mag, 20);
        mag_xx(OPTRE_4Rnd_145x114_HEDP_Mag, 10);
        mag_xx(OPTRE_4Rnd_145x114_Mag_NARQ, 10);
        mag_xx(OPTRE_4Rnd_145x114_HVAP_Mag, 10);
	};
	class TransportWeapons
	{
		weap_xx(OPTRE_SRS99D, 2);
	};
	class TransportItems
	{
		item_xx(optre_srs99_scope_v2, 2);
        item_xx(optre_srs99d_suppressor, 2);
	};
};
//Oneills monster
class OPTRE_Ammo_Supplypod_M250HMG: OPTRE_Ammo_SupplyPod_Empty
{
    displayname = "[UNSC] Supply Pod (M250HMG)";
    class TransportMagazines
    {
        mag_xx(OPTRE_100Rnd_127x99_M250HMG, 10);
		mag_xx(OPTRE_100Rnd_127x99_HE_M250HMG, 10);
    };
	class TransportWeapons
	{
		weap_xx(M250HMG, 2);
	};
	class TransportItems
	{
		item_xx(optic_hamr, 2);
	};
};
// Cricket Launcher
class OPTRE_Ammo_SupplyPod_CricketLauncher: OPTRE_Ammo_SupplyPod_Empty
{
	displayName 		= "[UNSC] Supply Pod (Cricket Launcher)";
	class TransportMagazines
	{	
        mag_xx(OPTRE_1Rnd_50x137_HE, 3);
        mag_xx(OPTRE_1Rnd_50x137_HEAT, 10);
        mag_xx(OPTRE_1Rnd_50x137_PEN, 5);
        mag_xx(OPTRE_1Rnd_50x137_THERMO, 5);
	};
	class TransportWeapons
	{
		weap_xx(OPTRE_M48_PAW, 2);
	};
	class TransportItems
	{
		
	};
};
// Explosives
class OPTRE_Ammo_SupplyPod_ExplosivesPack: OPTRE_Ammo_SupplyPod_Empty
{
	displayName 		= "[UNSC] Supply Pod (Explosives)";
	class TransportMagazines
	{	
        mag_xx(AMP_Breaching_Charge_Mag, 12);
        mag_xx(UNSCMine_Range_Mag, 2);
        mag_xx(C12_Remote_Mag, 8);
        mag_xx(M168_Remote_Mag, 4);
	};
	class TransportWeapons
	{
		
	};
	class TransportItems
	{
		
	};
};
// Gladius UAV Resupply
class OPTRE_Ammo_SupplyPod_UAVResupply: OPTRE_Ammo_SupplyPod_Empty
{
	displayName 		= "[UNSC] Supply Pod (UAV Resupply)";
	class TransportItems
	{
		item_xx(ITC_Land_B_AL6_Packed, 1);
		item_xx(ITC_Land_B_AL6M_Packed, 1);
		item_xx(ITC_Land_B_AR2i_Packed, 8);
		item_xx(ACE_UAVBattery, 8);
		item_xx(B_UavTerminal, 2);
	};
};
////////////////////////Pelican Resupply Module (Override this to change supply pod dropdown list.)
class Module_OPTRE_PelicanSupplyDrop: Module_F
{
	class Arguments
	{
		class box1
		{
			defaultValue = "OPTRE_Ammo_SupplyPod_NEWACE_Medical";
			class values
			{
				class n1
				{
					name = "none";
					value = "none";
				};
				class n2
				{
					name = "Random Supply Pod";
				};
				class n3
				{
					name = "SPNKr/Guided Supply Pod";
					value = "OPTRE_Ammo_SupplyPod_Launcher_Guided";
				};
				class n4
				{
					name = "M247 GPMG Supply Pod";
					value = "OPTRE_Ammo_SupplyPod_M247";
				};
				class n5
				{
					name = "Mortar Ammo Supply Pod";
					value = "OPTRE_Ammo_SupplyPod_Mortar_Ammo";
				};
				class n6
				{
					name = "Mortar Supply Pod";
					value = "OPTRE_Ammo_SupplyPod_Mortar";
				};
				class n7
				{
					name = "MA5BX AR Supply Pod";
					value = "OPTRE_Ammo_SupplyPod_MA5BXAR";
				};
				class n8
				{
					name = "MA5BGLX AR-GL Supply Pod";
					value = "OPTRE_Ammo_SupplyPod_MA5BXARGL";
				};
				class n9
				{
					name = "M73X LMG Supply Pod";
					value = "OPTRE_Ammo_SupplyPod_M73X";
				};
                class n10
				{
					name = "M7X SMG Supply Pod";
					value = "OPTRE_Ammo_SupplyPod_M7XTardis";
				};
				class n11
                {
					name = "M45X Shotgun Supply Pod";
					value = "OPTRE_Ammo_SupplyPod_ShotgunM45X";
				};
				class n12
                {
					name = "DMRX Supply Pod";
					value = "OPTRE_Ammo_SupplyPod_DMRM395X";
				};
				class n13
                {
					name = "BR55X Supply Pod";
					value = "OPTRE_Ammo_SupplyPod_BR55X";
				};
				class n14
                {
					name = "SR99DX Sniper Supply Pod";
					value = "OPTRE_Ammo_SupplyPod_SR99DXSniper";
				};
				class n15
                {
					name = "M41 SPNKr/Unguided Supply Pod";
					value = "OPTRE_Ammo_SupplyPod_Launcher";
				};
                
				class n16
                {
					name = "Vulcan Static HMG";
					value = "OPTRE_SupplyPod_StaticHMG";
				};
                class n17
                {
					name = "Vulcan Static HMG Ammo";
					value = "OPTRE_SupplyPod_StaticHMGAmmo";
				};
                class n18
                {
					name = "Vulcan Static GMG";
					value = "OPTRE_SupplyPod_StaticGMG";
				};
                class n19
                {
					name = "Vulcan Static GMG Ammo";
					value = "OPTRE_SupplyPod_StaticGMGAmmo";
				};
                class n20
                {
					name = "Vulcan Static AT";
					value = "OPTRE_SupplyPod_StaticAT";
				};
                class n21
                {
					name = "Vulcan Static AT Ammo";
					value = "OPTRE_SupplyPod_StaticATAmmo";
				};
                class n22
                {
					name = "Vulcan Static AA";
					value = "OPTRE_SupplyPod_StaticAA";
				};
                class n23
                {
					name = "Vulcan Static AA Ammo";
					value = "OPTRE_SupplyPod_StaticAAAmmo";
				};
                class n24
                {
					name = "Vulcan Vehicle Ammo";
					value = "OPTRE_SupplyPod_VehicleAmmo";
				};
                class n25
                {
					name = "Vulcan Vehicle Repair";
					value = "OPTRE_SupplyPod_VehicleRepair";
				};
                class n26
                {
					name = "Vulcan Tracked Vehicle Repair";
					value = "OPTRE_SupplyPod_TrackedVehicleRepair";
				};
                class n27
                {
					name = "Vulcan Vehicle Refuel";
					value = "OPTRE_SupplyPod_VehicleRefuel";
				};
                class n28
                {
					name = "ACE Medical Supply Pod";
					value = "OPTRE_Ammo_SupplyPod_NEWACE_Medical";
				};
                class n29
                {
					name = "Cricket Launcher Supply Pod";
					value = "OPTRE_Ammo_SupplyPod_CricketLauncher";
				};
                class n30
                {
					name = "Explosives Supply Pod";
					value = "OPTRE_Ammo_SupplyPod_ExplosivesPack";
				};
                class n31
                {
					name = "UAV Supply Pod";
					value = "OPTRE_Ammo_SupplyPod_UAVResupply";
				};
				class n32
                {
                    name = "M250HMG Supply Pod";
                    value = "OPTRE_Ammo_Supplypod_M250HMG";
                };
			};
		};
	};
};