// Images code

class CfgUnitInsignia {
	// 14th CAT //
	class fourteenth_CAT{
		displayName = "14th CAT Emblem";
		texture = "data\patches\14th_CAT_Emblem.paa";
		author = "Stellarynn";
	};
	// More patches will fall-in as we develop squad insignias //
};

class UniformSlotInfo {
	slotType = 0;
	linkProxy = "-";
};

class cfgFactionClasses
{
	class 14th_CAT
	{
		displayName="14th CAT";
		side=1;
		icon="data\patches\14th_CAT_Emblem.paa";
	};
};

class CfgWeapons {
	class HeadgearItem;
    class ItemCore;
    class InventoryItem_Base_F;
    class VestItem;
    class V_PlateCarrier1_rgr;
    class U_B_CombatUniform_mcam;
    class UniformItem;
    class NVGoggles;
    class HitPoints;
    class Uniform_Base: ItemCore
    {
        class ItemInfo;
    };

	#include "cfg\vests_gen.hpp"
	//#include "cfg\vests.hpp"
	#include "cfg\helmets.hpp"

	// M7 Recoil Reduction
	class SMG_01_F;
    class OPTRE_SubMachineGun_Base: SMG_01_F { class WeaponSlotsInfo; };

    class OPTRE_M7: OPTRE_SubMachineGun_Base
    {
        recoil = "recoil_smg_03"; // vermin/kriss vector recoil pattern
    };

	// M6 Carbine Recoil Increase
	class Rifle_Short_Base_F;
    class pdw2000_base_F: Rifle_Short_Base_F {};

    class OPTRE_M6D_Carbine_base_F: pdw2000_base_F
    {
        recoil = "n95_recoil_m6_carbine_stock";
    };
    class OPTRE_M6D_Carbine_F: OPTRE_M6D_Carbine_base_F {};
    class OPTRE_M6DS_Carbine_Foregrip_F: OPTRE_M6D_Carbine_F
    {
        recoil = "n95_recoil_m6_carbine_grip";
    };
	
};

class CfgRecoils
{
    class recoil_default;
    
    class n95_recoil_m6_carbine_stock: recoil_default
    {
        muzzleOuter[]    = {0.5, 2, 0.65, 0.5};
        kickBack[]        = {0.1, 0.15};
        permanent        = 0.025;
        temporary        = 0.015;
    };
    class n95_recoil_m6_carbine_grip: recoil_default
    {
        muzzleOuter[]    = {0.5, 2, 1, 0.5};
        kickBack[]        = {0.05, 0.1};
        permanent        = 0.05;
        temporary        = 0.02;
    };
};

class CfgVehicles {
	#include "cfg\vehicles.hpp"
};

class CfgPatches {
	class 14th_aux_mod {
		displayName = "14th CAT Aux Mod";
        author = "Stellarynn";
		units[] = {};
		weapons[] = {
			"14th_ODST_vest"
		};
		requiredVersion = 1.0;
		requiredAddons[] = {"MA_Armor"};
	};
	class aceax_config_compat {
		units[] = {};
		weapons[] = {};
		requiredVersion = "1.0";
		requiredAddons[] = {"aceax_gearinfo"};
	};
	class 14th_pelican 
	{
		units[]=
		{
			"14TH_D77H_TCI_ARMED"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"OPTRE_Vehicles_Air"};
		addonRootClass="OPTRE_Vehicles_Air";
	}
};

#include "XtdGearModels.hpp"
#include "XtdGearInfos.hpp"
  