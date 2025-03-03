class 14_MA_Helmet_Base: ItemCore
{
    scope=1;
    scopeArsenal=1;
    author="Misriah Armory";
    ace_hearing_protection=1;
    displayName="[MA] Base Helmet";
    model="";
    picture="";
    hiddenSelections[]=
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[]={};
	hiddenSelectionsMaterials[]=
	{
		"14th_aux_mod\data\helmets\ODST_Helm_Trooper.rvmat"
	};
    class ItemInfo: HeadgearItem
    {
        uniformModel="";
        mass=40;
        modelSides[]={6};
        allowedSlots[]={801,901,701,605};
        hiddenSelections[]=
        {
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]=
		{
			"14th_aux_mod\data\helmets\ODST_Helm_Trooper.rvmat"
		};
        class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=25;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=25;
					passThrough=0.1;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=20;
					passThrough=0.1;
				};
			};
    };
};

class CH252D_Helmet_Trooper: 14_MA_Helmet_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[14th] CH252D Helmet";
    model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
    picture=""; 
    hiddenSelections[]=
    {
        "Camo1", 
        "Camo2", 
      //  "Helmet",
      //  "Visor"
       
    };
    hiddenSelectionsTextures[]=
    {
        "14th_aux_mod\data\helmets\MA_ODST_Helmet_Trooper_co.paa",
        "14th_aux_mod\data\helmets\MA_ODST_Visor_Trooper_co.paa"     
    };
    hiddenSelectionsMaterials[]=
	{
		"14th_aux_mod\data\helmets\ODST_Helm_Trooper.rvmat"
	};
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"    
        };
        hiddenSelectionsTextures[]=
        {
            "14th_aux_mod\data\helmets\MA_ODST_Helmet_Trooper_co.paa",
            "14th_aux_mod\data\helmets\MA_ODST_Visor_Trooper_co.paa"    
        };
    };
};

class CH252D_Helmet_Actual_TL: 14_MA_Helmet_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[14th] CH252D Helmet (Actual TL)";
    model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
    picture=""; 
    hiddenSelections[]=
    {
        "Camo1", 
        "Camo2", 
      //  "Helmet",
      //  "Visor"
       
    };
    hiddenSelectionsTextures[]=
    {
        "14th_aux_mod\data\helmets\MA_ODST_Helmet_Actual_TL_co.paa",
        "14th_aux_mod\data\helmets\MA_ODST_Visor_Trooper_co.paa"     
    };
	hiddenSelectionsMaterials[]=
	{
		"14th_aux_mod\data\helmets\ODST_Helm_Actual_TL.rvmat",
		"14th_aux_mod\data\helmets\Reach_ODST_Visor.rvmat"
	};
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"    
        };
        hiddenSelectionsTextures[]=
        {
            "14th_aux_mod\data\helmets\MA_ODST_Helmet_Actual_TL_co.paa",
            "14th_aux_mod\data\helmets\MA_ODST_Visor_Trooper_co.paa"    
        };
		hiddenSelectionsMaterials[]=
        {
            "14th_aux_mod\data\helmets\ODST_Helm_Actual_TL.rvmat",
            "14th_aux_mod\data\helmets\Reach_ODST_Visor.rvmat"
        };
    };
};

class CH252D_Helmet_Team1_TL: 14_MA_Helmet_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[14th] CH252D Helmet (Team 1 TL)";
    model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
    picture=""; 
    hiddenSelections[]=
    {
        "Camo1", 
        "Camo2", 
      //  "Helmet",
      //  "Visor"
       
    };
    hiddenSelectionsTextures[]=
    {
        "14th_aux_mod\data\helmets\MA_ODST_Helmet_1_TL_co.paa",
        "14th_aux_mod\data\helmets\MA_ODST_Visor_Trooper_co.paa"     
    };
	hiddenSelectionsMaterials[]=
	{
		"14th_aux_mod\data\helmets\ODST_Helm_1_TL.rvmat",
		"14th_aux_mod\data\helmets\Reach_ODST_Visor.rvmat"
	};
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"    
        };
        hiddenSelectionsTextures[]=
        {
            "14th_aux_mod\data\helmets\MA_ODST_Helmet_1_TL_co.paa",
            "14th_aux_mod\data\helmets\MA_ODST_Visor_Trooper_co.paa"    
        };
		hiddenSelectionsMaterials[]=
		{
			"14th_aux_mod\data\helmets\ODST_Helm_1_TL.rvmat",
			"14th_aux_mod\data\helmets\Reach_ODST_Visor.rvmat"
		};
    };
};
class CH252D_Helmet_Team2_TL: 14_MA_Helmet_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[14th] CH252D Helmet (Team 2 TL)";
    model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
    picture=""; 
    hiddenSelections[]=
    {
        "Camo1", 
        "Camo2", 
      //  "Helmet",
      //  "Visor"
       
    };
    hiddenSelectionsTextures[]=
    {
        "14th_aux_mod\data\helmets\MA_ODST_Helmet_2_TL_co.paa",
        "14th_aux_mod\data\helmets\MA_ODST_Visor_Trooper_co.paa"     
    };
	hiddenSelectionsMaterials[]=
	{
		"14th_aux_mod\data\helmets\ODST_Helm_2_TL.rvmat",
		"14th_aux_mod\data\helmets\Reach_ODST_Visor.rvmat"
	};
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"    
        };
        hiddenSelectionsTextures[]=
        {
            "14th_aux_mod\data\helmets\MA_ODST_Helmet_2_TL_co.paa",
            "14th_aux_mod\data\helmets\MA_ODST_Visor_Trooper_co.paa"    
        };
		hiddenSelectionsMaterials[]=
		{
			"14th_aux_mod\data\helmets\ODST_Helm_2_TL.rvmat",
			"14th_aux_mod\data\helmets\Reach_ODST_Visor.rvmat"
		};
    };
};
class CH252D_Helmet_Team3_TL: 14_MA_Helmet_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[14th] CH252D Helmet (Team 3 TL)";
    model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
    picture=""; 
    hiddenSelections[]=
    {
        "Camo1", 
        "Camo2", 
      //  "Helmet",
      //  "Visor"
       
    };
    hiddenSelectionsTextures[]=
    {
        "14th_aux_mod\data\helmets\MA_ODST_Helmet_3_TL_co.paa",
        "14th_aux_mod\data\helmets\MA_ODST_Visor_Trooper_co.paa"     
    };
	hiddenSelectionsMaterials[]=
	{
		"14th_aux_mod\data\helmets\ODST_Helm_3_TL.rvmat",
		"14th_aux_mod\data\helmets\Reach_ODST_Visor.rvmat"
	};
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"    
        };
        hiddenSelectionsTextures[]=
        {
            "14th_aux_mod\data\helmets\MA_ODST_Helmet_3_TL_co.paa",
            "14th_aux_mod\data\helmets\MA_ODST_Visor_Trooper_co.paa"    
        };
		hiddenSelectionsMaterials[]=
		{
			"14th_aux_mod\data\helmets\ODST_Helm_3_TL.rvmat",
			"14th_aux_mod\data\helmets\Reach_ODST_Visor.rvmat"
		};
    };
};
class CH252D_Helmet_Pilot_TL: 14_MA_Helmet_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[14th] CH252D Helmet (Pilot TL)";
    model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
    picture=""; 
    hiddenSelections[]=
    {
        "Camo1", 
        "Camo2", 
      //  "Helmet",
      //  "Visor"
       
    };
    hiddenSelectionsTextures[]=
    {
        "14th_aux_mod\data\helmets\MA_ODST_Helmet_Pilot_TL_co.paa",
        "14th_aux_mod\data\helmets\MA_ODST_Visor_Trooper_co.paa"     
    };
	hiddenSelectionsMaterials[]=
	{
		"14th_aux_mod\data\helmets\ODST_Helm_Pilot_TL.rvmat",
		"14th_aux_mod\data\helmets\Reach_ODST_Visor.rvmat"
	};
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"    
        };
        hiddenSelectionsTextures[]=
        {
            "14th_aux_mod\data\helmets\MA_ODST_Helmet_Pilot_TL_co.paa",
            "14th_aux_mod\data\helmets\MA_ODST_Visor_Trooper_co.paa"    
        };
		hiddenSelectionsMaterials[]=
		{
			"14th_aux_mod\data\helmets\ODST_Helm_Pilot_TL.rvmat",
			"14th_aux_mod\data\helmets\Reach_ODST_Visor.rvmat"
		};
    };
};
class CH252D_Helmet_Mech_TL: 14_MA_Helmet_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[14th] CH252D Helmet (Mechanized TL)";
    model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
    picture=""; 
    hiddenSelections[]=
    {
        "Camo1", 
        "Camo2", 
      //  "Helmet",
      //  "Visor"
       
    };
    hiddenSelectionsTextures[]=
    {
        "14th_aux_mod\data\helmets\MA_ODST_Helmet_Mech_TL_co.paa",
        "14th_aux_mod\data\helmets\MA_ODST_Visor_Trooper_co.paa"     
    };
	hiddenSelectionsMaterials[]=
	{
		"14th_aux_mod\data\helmets\ODST_Helm_Mech_TL.rvmat",
		"14th_aux_mod\data\helmets\Reach_ODST_Visor.rvmat"
	};
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"    
        };
        hiddenSelectionsTextures[]=
        {
            "14th_aux_mod\data\helmets\MA_ODST_Helmet_Mech_TL_co.paa",
            "14th_aux_mod\data\helmets\MA_ODST_Visor_Trooper_co.paa"    
        };
		hiddenSelectionsMaterials[]=
		{
			"14th_aux_mod\data\helmets\ODST_Helm_Mech_TL.rvmat",
			"14th_aux_mod\data\helmets\Reach_ODST_Visor.rvmat"
		};
    };
};
class CH252D_Helmet_Corpsmaid: 14_MA_Helmet_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[14th] CH252D Helmet (Corpsmaid)";
    model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
    picture=""; 
    hiddenSelections[]=
    {
        "Camo1", 
        "Camo2", 
      //  "Helmet",
      //  "Visor"
       
    };
    hiddenSelectionsTextures[]=
    {
        "14th_aux_mod\data\helmets\MA_ODST_Helmet_Corpsmaid_co.paa",
        "14th_aux_mod\data\helmets\MA_ODST_Visor_Trooper_co.paa"     
    };
	hiddenSelectionsMaterials[]=
	{
		"14th_aux_mod\data\helmets\ODST_Helm_Corpsmaid.rvmat",
		"14th_aux_mod\data\helmets\Reach_ODST_Visor.rvmat"
	};
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"    
        };
        hiddenSelectionsTextures[]=
        {
            "14th_aux_mod\data\helmets\MA_ODST_Helmet_Corpsmaid_co.paa",
            "14th_aux_mod\data\helmets\MA_ODST_Visor_Trooper_co.paa"    
        };
		hiddenSelectionsMaterials[]=
		{
			"14th_aux_mod\data\helmets\ODST_Helm_Corpsmaid.rvmat",
			"14th_aux_mod\data\helmets\Reach_ODST_Visor.rvmat"
		};
    };
};

class CH252D_Helmet_Stella: 14_MA_Helmet_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[14th] CH252D Helmet (Stella)";
    model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
    picture=""; 
    hiddenSelections[]=
    {
        "Camo1", 
        "Camo2", 
      //  "Helmet",
      //  "Visor"
       
    };
    hiddenSelectionsTextures[]=
    {
        "14th_aux_mod\data\helmets\MA_ODST_Helmet_2_TL_co.paa",
        "14th_aux_mod\data\helmets\MA_ODST_Visor_Gold_co.paa"     
    };
	hiddenSelectionsMaterials[]=
	{
		"14th_aux_mod\data\helmets\ODST_Helm_2_TL.rvmat",
		"14th_aux_mod\data\helmets\Reach_ODST_Visor.rvmat"
	};
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"    
        };
        hiddenSelectionsTextures[]=
        {
            "14th_aux_mod\data\helmets\MA_ODST_Helmet_2_TL_co.paa",
        	"14th_aux_mod\data\helmets\MA_ODST_Visor_Gold_co.paa"     
        };
		hiddenSelectionsMaterials[]=
		{
			"14th_aux_mod\data\helmets\ODST_Helm_2_TL.rvmat",
			"14th_aux_mod\data\helmets\Reach_ODST_Visor.rvmat"
		};
    };
};

class CH252D_Helmet_Jes: 14_MA_Helmet_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[14th] CH252D Helmet (Jes)";
    model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
    picture=""; 
    hiddenSelections[]=
    {
        "Camo1", 
        "Camo2", 
      //  "Helmet",
      //  "Visor"
       
    };
    hiddenSelectionsTextures[]=
    {
        "14th_aux_mod\data\helmets\MA_ODST_Helmet_1_TL_co.paa",
        "14th_aux_mod\data\helmets\MA_ODST_Visor_Red_co.paa"     
    };
	hiddenSelectionsMaterials[]=
	{
		"14th_aux_mod\data\helmets\ODST_Helm_1_TL.rvmat",
		"14th_aux_mod\data\helmets\Reach_ODST_Visor.rvmat"
	};
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"    
        };
        hiddenSelectionsTextures[]=
        {
            "14th_aux_mod\data\helmets\MA_ODST_Helmet_1_TL_co.paa",
        	"14th_aux_mod\data\helmets\MA_ODST_Visor_Red_co.paa"     
        };
		hiddenSelectionsMaterials[]=
		{
			"14th_aux_mod\data\helmets\ODST_Helm_1_TL.rvmat",
			"14th_aux_mod\data\helmets\Reach_ODST_Visor.rvmat"
		};
    };
};

class CH252D_Helmet_Nya: 14_MA_Helmet_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[14th] CH252D Helmet (Nya)";
    model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
    picture=""; 
    hiddenSelections[]=
    {
        "Camo1", 
        "Camo2", 
      //  "Helmet",
      //  "Visor"
       
    };
    hiddenSelectionsTextures[]=
    {
        "14th_aux_mod\data\helmets\MA_ODST_Helmet_Actual_TL_co.paa",
        "14th_aux_mod\data\helmets\MA_ODST_Visor_Purple_co.paa"     
    };
	hiddenSelectionsMaterials[]=
	{
		"14th_aux_mod\data\helmets\ODST_Helm_Actual_TL.rvmat",
		"14th_aux_mod\data\helmets\Reach_ODST_Visor.rvmat"
	};
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"    
        };
        hiddenSelectionsTextures[]=
        {
            "14th_aux_mod\data\helmets\MA_ODST_Helmet_Actual_TL_co.paa",
        	"14th_aux_mod\data\helmets\MA_ODST_Visor_Purple_co.paa"     
        };
		hiddenSelectionsMaterials[]=
		{
			"14th_aux_mod\data\helmets\ODST_Helm_Actual_TL.rvmat",
			"14th_aux_mod\data\helmets\Reach_ODST_Visor.rvmat"
		};
    };
};