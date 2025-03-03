class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class All
{
};
class Static: All
{
};
class Helicopter;
class Helicopter_Base_F: Helicopter
{
	class Turrets;
	class HitPoints;
	class ViewPilot;
	class CargoTurret;
	class Reflectors
	{
		class Right;
	};
};
class Helicopter_Base_H: Helicopter_Base_F
{
	class EventHandlers;
	class Turrets: Turrets
	{
		class CopilotTurret;
	};
	class HitPoints: HitPoints
	{
		class HitHull;
		class HitFuel;
		class HitEngine;
		class HitAvionics;
		class HitVRotor;
		class HitHRotor;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
		class HitGlass5;
		class HitGlass6;
	};
	class Components;
	class AnimationSources;
	class ViewOptics;
	class RotorLibHelicopterProperties;
};
class OPTRE_Pelican_F: Helicopter_Base_H
{
};
class OPTRE_Pelican_armed: OPTRE_Pelican_F
{
};
class 14TH_D77H_TCI_ARMED: OPTRE_Pelican_armed {
	displayName="14th CAT D77H-TCI/AV Pelican";
	author="Stellarynn";
	scope=2;
	scopeCurator=2;
	side=1;
	vehicleClass="OPTRE_UNSC_Air_class";
	faction="14th_CAT";
	crew="OPTRE_UNSC_Airforce_Soldier_Airman";
	hiddenSelections[]=
	{
		"camo1",
		"camo3",
		"clan",
		"clan_text",
		"insignia"
	};
	hiddenSelectionsTextures[]=
	{
		"14th_aux_mod\data\pelican\PelicanExterior_CALICO.paa",
		""
	};
	memoryPointLMissile="Rocket_1";
	memoryPointRMissile="Rocket_2";
	weapons[]=
	{
		"CMFlareLauncher",
		"OPTRE_missiles_Anvil1"
	};
	magazines[]=
	{
		"168Rnd_CMFlare_Chaff_Magazine"
	};
	transportSoldier=22;
	cargoProxyIndexes[]={3,4,5,6,7,8,9,10,11,12,14,15,16,17,18,19,20,21,22,23,24,25};
	model="OPTRE_Vehicles_Air\P_SOCOM\Pelican_SOCOM.p3d";
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret
		{
			gunnerAction="pilot_Heli_Light_02";
			gunnerInAction="pilot_Heli_Light_02";
			precisegetinout=1;
			gunnerGetInAction="pilot_Heli_Light_02_Enter";
			gunnerGetOutAction="pilot_Heli_Light_02_Exit";
			memoryPointsGetInGunner="Pos_Gunner";
			memoryPointsGetInGunnerDir="Pos_Gunner_dir";
			canEject=1;
			body="mainTurret";
			gun="mainGun";
			gunAxis="Osa Hlavne";
			gunBeg="Usti hlavne";
			gunEnd="konec hlavne";
			animationSourceBody="mainTurret";
			animationSourceGun="mainGun";
			gunnerLeftHandAnimName="";
			gunnerRightHandAnimName="";
			maxHorizontalRotSpeed=5;
			maxVerticalRotSpeed=5;
			proxyindex=1;
			isCopilot=1;
			gunnerName="Gunner";
			primaryGunner=1;
			visionMode[]=
			{
				"Normal",
				"NVG",
				"Ti"
			};
			weapons[]=
			{
				"OPTRE_M41_LAAG",
				"CMFlareLauncher",
				"Laserdesignator_mounted"
			};
			magazines[]=
			{
				"OPTRE_1000Rnd_127x99_M41",
				"OPTRE_1000Rnd_127x99_M41",
				"OPTRE_1000Rnd_127x99_M41",
				"OPTRE_1000Rnd_127x99_M41",
				"168Rnd_CMFlare_Chaff_Magazine",
				"Laserbatteries"
			};
			minElev=-90;
			maxElev=30;
			initElev=0;
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			stabilizedInAxes="StabilizedInAxesBoth";
			startEngine=0;
			class Viewoptics
			{
				minAngleX=-80;
				maxAngleX=80;
				initAngleX=0;
				minAngleY=-80;
				maxAngleY=15;
				initAngleY=0;
				initFov=0.75;
				minFov=0.25;
				maxFov=0.75;
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
			};
			class OpticsIn
			{
				class Wide
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.46599999;
					minFov=0.46599999;
					maxFov=0.46599999;
					opticsDisplayName="W";
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
				};
				class Medium: Wide
				{
					initFov=0.093000002;
					minFov=0.093000002;
					maxFov=0.093000002;
					opticsDisplayName="M";
					gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
				};
				class Narrow: Wide
				{
					initFov=0.028999999;
					minFov=0.028999999;
					maxFov=0.028999999;
					opticsDisplayName="N";
					gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
				};
			};
			class OpticsOut
			{
				class Monocular
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					gunnerOpticsModel="";
					gunnerOpticsEffect[]={};
				};
			};
			class Components
			{
				class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
				{
					class Components: components
					{
						class VehiclePrimaryGunnerDisplay
						{
							componentType="TransportFeedDisplayComponent";
							source="PrimaryGunner";
						};
						class VehicleMissileDisplay
						{
							componentType="TransportFeedDisplayComponent";
							source="Missile";
						};
						class SensorDisplay
						{
							componentType="SensorsDisplayComponent";
							range[]={4000,2000,16000,8000};
							resource="RscCustomInfoSensors";
						};
					};
				};
				class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
				{
					defaultDisplay="SensorDisplay";
					class Components: components
					{
						class VehiclePrimaryGunnerDisplay
						{
							componentType="TransportFeedDisplayComponent";
							source="PrimaryGunner";
						};
						class VehicleMissileDisplay
						{
							componentType="TransportFeedDisplayComponent";
							source="Missile";
						};
						class SensorDisplay
						{
							componentType="SensorsDisplayComponent";
							range[]={4000,2000,16000,8000};
							resource="RscCustomInfoSensors";
						};
					};
				};
			};
			soundServo[]=
			{
				"",
				0.0099999998,
				1
			};
			outGunnerMayFire=1;
			commanding=-1;
			memoryPointGunnerOptics="gunner1";
			selectionFireAnim="zasleh";
			castGunnerShadow=0;
			viewGunnerShadow=0;
			turretAxis="axisturret1";
			gunnerOpticsModel="";
			gunnerOpticsEffect[]=
			{
				"TankCommanderOptics1",
				"BWTV"
			};
			gunnerForceOptics=0;
			turretInfoType="RscOptics_Heli_Attack_01_gunner";
			discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
			discreteDistanceInitIndex=5;
			showAllTargets=4;
		};
		class CommanderTurret: CopilotTurret
		{
			LODTurnedIn=1100;
			LODTurnedOut=1100;
			gunnerAction="pilot_Heli_Light_02";
			gunnerInAction="pilot_Heli_Light_02";
			precisegetinout=1;
			gunnerGetInAction="pilot_Heli_Light_02_Enter";
			gunnerGetOutAction="pilot_Heli_Light_02_Exit";
			memoryPointsGetInGunner="pos commander";
			memoryPointsGetInGunnerDir="pos commander dir";
			canEject=1;
			body="obsTurret";
			gun="obsGun";
			gunAxis="Osa Hlavne2";
			gunBeg="Usti hlavne2";
			gunEnd="konec hlavne2";
			animationSourceBody="obsTurret";
			animationSourceGun="obsGun";
			gunnerLeftHandAnimName="";
			gunnerRightHandAnimName="";
			maxHorizontalRotSpeed=5;
			maxVerticalRotSpeed=5;
			proxyindex=2;
			isCopilot=0;
			gunnerName="Electronic Warfare Officer";
			primaryGunner=0;
			visionMode[]=
			{
				"Normal",
				"NVG",
				"Ti"
			};
			weapons[]=
			{
				"OPTRE_M41_LAAG"
			};
			magazines[]=
			{
				"OPTRE_1000Rnd_127x99_M41",
				"OPTRE_1000Rnd_127x99_M41"
			};
			minElev=-25;
			maxElev=20;
			initElev=0;
			minTurn=-360;
			maxTurn=360;
			initTurn=0;
			stabilizedInAxes="StabilizedInAxesBoth";
			startEngine=0;
			class Viewoptics
			{
				minAngleX=-80;
				maxAngleX=80;
				initAngleX=0;
				minAngleY=-80;
				maxAngleY=15;
				initAngleY=0;
				initFov=0.75;
				minFov=0.25;
				maxFov=0.75;
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
			};
			class OpticsIn
			{
				class Wide
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.46599999;
					minFov=0.46599999;
					maxFov=0.46599999;
					opticsDisplayName="W";
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
				};
				class Medium: Wide
				{
					initFov=0.093000002;
					minFov=0.093000002;
					maxFov=0.093000002;
					opticsDisplayName="M";
					gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
				};
				class Narrow: Wide
				{
					initFov=0.028999999;
					minFov=0.028999999;
					maxFov=0.028999999;
					opticsDisplayName="N";
					gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
				};
			};
			class OpticsOut
			{
				class Monocular
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					gunnerOpticsModel="";
					gunnerOpticsEffect[]={};
				};
			};
			class Components
			{
				class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
				{
					class Components: components
					{
						class VehiclePrimaryGunnerDisplay
						{
							componentType="TransportFeedDisplayComponent";
							source="PrimaryGunner";
						};
						class VehicleMissileDisplay
						{
							componentType="TransportFeedDisplayComponent";
							source="Missile";
						};
						class SensorDisplay
						{
							componentType="SensorsDisplayComponent";
							range[]={4000,2000,16000,8000};
							resource="RscCustomInfoSensors";
						};
					};
				};
				class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
				{
					defaultDisplay="SensorDisplay";
					class Components: components
					{
						class VehiclePrimaryGunnerDisplay
						{
							componentType="TransportFeedDisplayComponent";
							source="PrimaryGunner";
						};
						class VehicleMissileDisplay
						{
							componentType="TransportFeedDisplayComponent";
							source="Missile";
						};
						class SensorDisplay
						{
							componentType="SensorsDisplayComponent";
							range[]={4000,2000,16000,8000};
							resource="RscCustomInfoSensors";
						};
					};
				};
			};
			soundServo[]=
			{
				"",
				0.0099999998,
				1
			};
			outGunnerMayFire=1;
			commanding=-3;
			memoryPointGunnerOptics="commanderview";
			selectionFireAnim="zasleh2";
			castGunnerShadow=0;
			viewGunnerShadow=0;
			turretAxis="OsaVez2";
			gunnerOpticsModel="";
			gunnerOpticsEffect[]=
			{
				"TankCommanderOptics1",
				"BWTV"
			};
			gunnerForceOptics=0;
			turretInfoType="RscOptics_Heli_Attack_01_gunner";
			discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
			discreteDistanceInitIndex=5;
			showAllTargets=4;
		};
		class CargoTurret_01: CargoTurret
		{
			gunnerAction="passenger_inside_2";
			gunnerCompartments="Compartment2";
			memoryPointsGetInGunner="pos_cargo_l";
			memoryPointsGetInGunnerDir="pos_cargo_l_dir";
			gunnerName="Passenger (Left door)";
			proxyIndex=1;
			maxElev=15;
			minElev=-25;
			maxTurn=10;
			minTurn=-50;
			isPersonTurret=1;
			ejectDeadGunner=0;
			enabledByAnimationSource="cargoDoors";
			memoryPointGunnerOptics="";
		};
		class CargoTurret_02: CargoTurret_01
		{
			gunnerAction="passenger_inside_2";
			gunnerCompartments="Compartment2";
			memoryPointsGetInGunner="pos_cargo_r";
			memoryPointsGetInGunnerDir="pos_cargo_r_dir";
			gunnerName="Passenger (Right door)";
			proxyIndex=2;
			maxElev=15;
			minElev=-25;
			maxTurn=50;
			minTurn=-10;
			isPersonTurret=1;
			ejectDeadGunner=0;
			enabledByAnimationSource="cargoDoors";
			memoryPointGunnerOptics="";
		};
	};
	class AnimationSources
	{
		class cargoDoors
		{
			source="user";
			animPeriod=5;
			initPhase=0;
			sound="ServoRampSound_2";
		};
		class wingControl
		{
			source="user";
			animPeriod=1;
			initPhase=0;
		};
		class gunVert
		{
			source="user";
			animPeriod=1;
			initPhase=0;
		};
		class gunHorz
		{
			source="user";
			animPeriod=1;
			initPhase=0;
		};
		class HideWeapon
		{
			source="user";
			animPeriod=9.9999997e-006;
			initPhase=0;
		};
		class Gatling
		{
			source="revolving";
			weapon="OPTRE_M41_LAAG";
		};
		class Gatling_flash
		{
			source="ammorandom";
			weapon="OPTRE_M41_LAAG";
		};
		class Missiles_revolving
		{
			source="revolving";
			weapon="missiles_DAGR";
		};
		class Proxy
		{
			source="user";
			animPeriod=1;
			initPhase=0;
		};
	};
	class UserActions
	{
		class PelLift_LoadVehicle
		{
			userActionID=6;
			displayName="Load Vehicle";
			displayNameDefault="Load Vehicle";
			textToolTip="Load Vehicle";
			position="cargo_door_handle";
			showWindow=0;
			radius=15;
			priority=2;
			onlyForPlayer=0;
			condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
			statement="0 = [this,vehicle player] spawn OPTRE_fnc_PelicanLoadValidate;";
		};
		class PelLift_LoadPodMenu
		{
			userActionID=9;
			displayName="Load Supply Pods";
			displayNameDefault="Load Supply Pods";
			textToolTip="Load Supply Pods";
			position="cargo_door_handle";
			showWindow=0;
			radius=15;
			priority=2;
			onlyForPlayer=0;
			condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
			statement="OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = this; createDialog ""OPTRE_PelicanLoadSupplyPods_Menu""; OPTRE_PelicanLoadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject;  OPTRE_PelicanLoadSupplyPods_Menu_cam CamSetTarget OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject; OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; OPTRE_PelicanLoadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; OPTRE_PelicanLoadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
		};
		class PelLift_UnLoadVehicle
		{
			userActionID=7;
			displayName="Unload Vehicle / Supply Pods";
			displayNameDefault="Unload Vehicle / Supply Pods";
			textToolTip="Unload Vehicle / Supply Pods";
			position="cargo_door_handle";
			showWindow=0;
			radius=5;
			priority=3;
			onlyForPlayer=0;
			condition="(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
			statement="0 = [this] spawn OPTRE_fnc_PelicanUnLoadValidate;";
		};
		class PelLift_OpenDetachPodMenu
		{
			userActionID=8;
			displayName="Detach Individual Supply Pod Menu";
			displayNameDefault="Detach Individual Supply Pod Menu";
			textToolTip="Detach Individual Supply Pod Menu";
			position="cargo_door_handle";
			showWindow=0;
			radius=5;
			priority=3;
			onlyForPlayer=0;
			condition="(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
			statement="0 = this spawn OPTRE_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
		};
		class RampOpen
		{
			userActionID=50;
			displayName="Open Ramp";
			displayNameDefault="Open Ramp";
			textToolTip="Open Ramp";
			position="cargo_door_handle";
			showWindow=0;
			radius=100000;
			priority=4;
			onlyForPlayer=0;
			condition="((this animationPhase ""cargoDoor_1"" < 0.5) AND (this animationPhase ""cargoDoor_2"" < 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
			statement="this animate [""cargoDoor_1"",1]; this animate [""cargoDoor_2"",1]";
			animPeriod=5;
		};
		class RampClose: RampOpen
		{
			userActionID=51;
			displayName="Close Ramp";
			displayNameDefault="Close Ramp";
			textToolTip="Close Ramp";
			priority=4;
			condition="((this animationPhase ""cargoDoor_1"" > 0.5) AND (this animationPhase ""cargoDoor_2"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
			statement="this animate [""cargoDoor_1"",0]; this animate [""cargoDoor_2"",0]";
			animPeriod=5;
		};
		class ThrusterEngage: RampOpen
		{
			userActionID=52;
			displayName="ENGAGE FORWARD THRUSTERS";
			displayNameDefault="ENGAGE FORWARD THRUSTERS";
			textToolTip="ENGAGE FORWARD THRUSTERS";
			priority=10;
			condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
			statement="0 = this spawn OPTRE_fnc_ThrusterEngage";
		};
		class ThrusterDisengage: ThrusterEngage
		{
			userActionID=53;
			displayName="DISENGAGE FORWARD THRUSTERS";
			displayNameDefault="DISENGAGE FORWARD THRUSTERS";
			textToolTip="DISENGAGE FORWARD THRUSTERS";
			condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
			statement="0 = this spawn OPTRE_fnc_ThrusterDisengage";
		};
		class AirbrakeEngage: ThrusterEngage
		{
			userActionID=54;
			displayName="ENGAGE AIRBRAKES";
			displayNameDefault="ENGAGE AIRBRAKES";
			textToolTip="ENGAGE AIRBRAKES";
			condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND ((speed this) > 100)";
			statement="0 = this spawn OPTRE_fnc_AirbrakeEngage";
		};
		class RepairPelican
		{
			userActionID=55;
			displayName="Repair Pelican";
			displayNameDefault="Repair Pelican";
			textToolTip="Repair Pelican";
			showWindow=0;
			radius=10;
			priority=2;
			onlyForPlayer=0;
			condition="!(player in [gunner this, driver this]) AND ([player] call ace_common_fnc_isEngineer) AND ([player, ""ToolKit""] call BIS_fnc_hasItem)";
			statement="0 = this setDamage 0";
		};
	};
	class textureSources
	{
		class camo_14th
		{
			displayName="[14th] Wizard Special";
			author="Stellarynn";
			textures[]=
			{
				"14th_aux_mod\data\pelican\D77H-TCI.paa"
			};
			factions[]=
			{
				"14th_CAT"
			};
		};
	};
	textureList[]=
	{
		"camo_14th",
		1
	};
}


