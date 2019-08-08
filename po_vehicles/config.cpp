////////////////////////////////////////////////////////////////////
//DeRap: po_vehicles\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Fri Jul 19 00:53:27 2019 : 'file' last modified on Sat Nov 04 13:48:20 2017
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class po_vehicles
	{
		units[] = {};
		weapons[] = {"LOP_PKT","LOP_DT","LOP_DT2","LOP_D81","LOP_D10","LOP_S53","LOP_AZP23"};
		requiredVersion = 0.01;
		requiredAddons[] = {"A3_Soft_F","A3_Characters_F","rhs_c_troops","rhs_c_weapons","rhs_c_a2port_air","rhs_cti_insurgents","rhs_c_heavyweapons","rhsusf_c_troops","rhsusf_c_weapons","RHS_US_A2_AirImport","rhs_c_btr","A3_Armor_F","A3_Armor_F_Beta","A3_Armor_F_T100K","A3_CargoPoses_F","A3_UI_F"};
		author = "Keeway, Leight";
		authorUrl = "http://www.project-opfor.eu/";
		magazines[] = {"LOP_3OF26","LOP_3OF26_S","LOP_OF416Sh","LOP_UOF354M","LOP_3BK29M","LOP_3BK29M_S","LOP_3BK12","LOP_3BK12_S","LOP_3BK14","LOP_3BK14_S","LOP_3BK18","LOP_3BK18_S","LOP_3BK18M","LOP_3BK18M_S","LOP_3BK21","LOP_3BK21_S","LOP_3BK21B","LOP_3BK21B_S","LOP_BK5M","LOP_BK5M_S","LOP_3BM44M","LOP_3BM44M_S","LOP_3BM12","LOP_3BM12_S","LOP_3BM15","LOP_3BM15_S","LOP_3BM22","LOP_3BM22_S","LOP_3BM26","LOP_3BM26_S","LOP_3BM32","LOP_3BM32_S","LOP_BM8","LOP_BM20","LOP_BM25","LOP_BR365","LOP_BR365P","LOP_1500Rnd_762x54_PKT","LOP_2000Rnd_762x54_PKT","LOP_200Rnd_762x54_PKT","LOP_100Rnd_762x54_PKT","LOP_250Rnd_762x54_PKT","LOP_63Rnd_762x54_DT","LOP_200Rnd_23mm_AZP23"};
		ammo[] = {"LOP_Laserbeam","LOP_Sh_3OF26","LOP_Sh_OF412Sh","LOP_Sh_UOF354M","LOP_Sh_3BM44M","LOP_Sh_3BM12","LOP_Sh_3BM15","LOP_Sh_3BM22","LOP_Sh_3BM26","LOP_Sh_3BM32","LOP_Sh_BM8","LOP_Sh_BM20","LOP_Sh_BM25","LOP_Sh_BR365","LOP_Sh_BR365P","LOP_Sh_3BK29M","LOP_Sh_3BK29m_penetrator","LOP_Sh_3BK12","LOP_Sh_3BK12_penetrator","LOP_Sh_3BK14","LOP_Sh_3BK14_penetrator","LOP_Sh_3BK18","LOP_Sh_3BK18_penetrator","LOP_Sh_3BK18M","LOP_Sh_3BK18m_penetrator","LOP_Sh_3BK21","LOP_Sh_3BK21_penetrator","LOP_Sh_3BK21B","LOP_Sh_3BK21B_penetrator","LOP_Sh_BK5M","LOP_Sh_BK5m_penetrator"};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		PO_T72_Commander = "PO_T72_Commander";
		PO_T72_CommanderOUT = "PO_T72_CommanderOUT";
		PO_T72_Driver = "PO_T72_Driver";
		PO_T72_DriverOUT = "PO_T72_DriverOUT";
		PO_T72_Gunner = "PO_T72_Gunner";
		PO_T72_GunnerOut = "PO_T72_GunnerOut";
		PO_ZSU_Commander = "PO_ZSU_Commander";
		PO_ZSU_CommanderOUT = "PO_ZSU_CommanderOUT";
		PO_ZSU_Gunner = "PO_ZSU_Gunner";
		PO_ZSU_GunnerOut = "PO_ZSU_GunnerOut";		
		PO_M113_Driver = "PO_M113_Driver";
		PO_M113_DriverOut = "PO_M113_DriverOut";
		PO_BMP3_Driver = "PO_BMP3_Driver";
		PO_BMP3_Gunner = "PO_BMP3_Gunner";
		PO_BMP3_Gunner02 = "PO_BMP3_Gunner02";
		PO_BMP3_Gunner03 = "PO_BMP3_Gunner03";
		PO_BMP3_Commander = "PO_BMP3_Commander";
		PO_BMP3_Driver_OUT = "PO_BMP3_Driver_OUT";
		PO_BMP3_Gunner_OUT = "PO_BMP3_Gunner_OUT";
		PO_BMP3_Commander_OUT = "PO_BMP3_Commander_OUT";
		PO_T90_Driver = "PO_T90_Driver";
		PO_T90_Gunner = "PO_T90_Gunner";
		PO_T90_Commander = "PO_T90_Commander";
		PO_T90_DriverOUT = "PO_T90_DriverOUT";
		PO_T90_GunnerOUT = "PO_T90_GunnerOUT";
		PO_T90_CommanderOUT = "PO_T90_CommanderOUT";		
		PO_MH6_Cargo03 = "PO_MH6_Cargo03";
		PO_HMMWV_Driver = "PO_HMMWV_Driver";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class PO_KIA_T72_Commander: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //"\po_vehicles\data\animanim\KIA_T72_Commander.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_KIA_T72_CommanderOUT: DefaultDie
		{
			actions = "DeadActions";
			file =  ""; //"\po_vehicles\data\animanim\KIA_T72_CommanderOut.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_T72_Commander: Crew
		{
			file =  ""; //"\po_vehicles\data\animanim\T72_Commander.rtm";
			interpolateTo[] = {"PO_KIA_T72_Commander",1};
		};
		class PO_T72_CommanderOut: Crew
		{
			file =  ""; //"\po_vehicles\data\animanim\T72_CommanderOut.rtm";
			interpolateTo[] = {"PO_KIA_T72_CommanderOut",1};
			leftHandIKCurve[] = {1};
		};
		class PO_KIA_T72_Driver: DefaultDie
		{
			actions = "DeadActions";
			file =  ""; //"\po_vehicles\data\animanim\KIA_T72_Driver.rtm";
			connectTo[] = {"Unconscious",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class PO_T72_Driver: Crew
		{
			file =  ""; //"\po_vehicles\data\animanim\T72_Driver.rtm";
			interpolateTo[] = {"PO_KIA_T72_Driver",1};
		};
		class PO_KIA_M113_Driver: DefaultDie
		{
			actions = "DeadActions";
			file =  ""; //"\po_vehicles\data\animanim\M113_KIA_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_M113_Driver: Crew
		{
			file =  ""; //"\po_vehicles\data\animanim\M113_Driver.rtm";
			interpolateTo[] = {"PO_KIA_M113_Driver",1};
		};
		class PO_KIA_M113_DriverOUT: DefaultDie
		{
			actions = "DeadActions";
			file =  ""; //"\po_vehicles\data\animanim\M113_KIA_DriverOut.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_M113_DriverOUT: Crew
		{
			file =  ""; //"\po_vehicles\data\animanim\M113_driverout.rtm";
			interpolateTo[] = {"PO_KIA_M113_DriverOUT",1};
		};
		class PO_T72_DriverOut: PO_T72_Driver
		{
			file =  ""; //"\po_vehicles\data\animanim\T72_DriverOut.rtm";
		};
		class PO_KIA_T72_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file =  ""; //"\po_vehicles\data\animanim\KIA_T72_Gunner.rtm";
			connectTo[] = {"Unconscious",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class PO_T72_Gunner: Crew
		{
			file =  ""; //"\po_vehicles\data\animanim\T72_Gunner.rtm";
			interpolateTo[] = {"PO_KIA_T72_Gunner",1};
		};
		class PO_KIA_T72_GunnerOut: DefaultDie
		{
			actions = "DeadActions";
			file =  ""; //"\po_vehicles\data\animanim\KIA_T72_GunnerOut.rtm";
			connectTo[] = {"Unconscious",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class PO_T72_GunnerOut: Crew
		{
			file =  "";//""; //""; //"\po_vehicles\data\anim\T72_GunnerOut.rtm";
			interpolateTo[] = {"PO_KIA_T72_GunnerOut",1};
		};
		class PO_ZSU_Gunner: Crew
		{
			file = ""; //""; //"\po_vehicles\data\anim\ZSU_Gunner.rtm";
			interpolateTo[] = {"PO_KIA_T72_Gunner",1};
		};
		class PO_ZSU_GunnerOut: Crew
		{
			file = ""; //""; //"\po_vehicles\data\anim\ZSU_GunnerOut.rtm";
			interpolateTo[] = {"PO_KIA_T72_GunnerOut",1};
		};
		class PO_ZSU_Commander: Crew
		{
			file = ""; //""; //"\po_vehicles\data\anim\ZSU_Commander.rtm";
			interpolateTo[] = {"PO_KIA_T72_Commander",1};
		};
		class PO_ZSU_CommanderOut: Crew
		{
			file = ""; //""; //"\po_vehicles\data\anim\ZSU_CommanderOut.rtm";
			interpolateTo[] = {"PO_KIA_T72_Commander",1};
		};
		class PO_T55_Gunner: Crew
		{
			file = ""; //""; //"\po_vehicles\data\anim\T55_Gunner.rtm";
			interpolateTo[] = {"PO_T55_KIA_Gunner",1};
		};
		class PO_T55_Commander: Crew
		{
			file = ""; //""; //"\po_vehicles\data\anim\T55_Commander.rtm";
			interpolateTo[] = {"PO_T55_KIA_Commander",1};
		};
		class PO_T55_KIA_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //""; //"\po_vehicles\data\anim\T55_KIA_Gunner";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_T55_KIA_Commander: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //""; //"\po_vehicles\data\anim\T55_KIA_Commander";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_KIA_BMP3_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //""; //"\po_vehicles\data\anim\KIA_bmp3_driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_BMP3_Driver: Crew
		{
			file = ""; //""; //"\po_vehicles\data\anim\bmp3_driver.rtm";
			interpolateTo[] = {"PO_KIA_BMP3_Driver",1};
		};
		class PO_KIA_BMP3_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //""; //"\po_vehicles\data\anim\KIA_bmp3_gunner.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_BMP3_Gunner: Crew
		{
			file = ""; //""; //"\po_vehicles\data\anim\bmp3_gunner.rtm";
			interpolateTo[] = {"PO_KIA_BMP3_Gunner",1};
		};
		class PO_KIA_BMP3_Gunner02: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //""; //"\po_vehicles\data\anim\KIA_bmp3_gunner02.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_BMP3_Gunner02: Crew
		{
			file = ""; //""; //"\po_vehicles\data\anim\bmp3_gunner02.rtm";
			interpolateTo[] = {"PO_KIA_BMP3_Gunner02",1};
		};
		class PO_KIA_BMP3_Gunner03: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //""; //"\po_vehicles\data\anim\KIA_bmp3_gunner03.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_BMP3_Gunner03: Crew
		{
			file = ""; //""; //"\po_vehicles\data\anim\bmp3_gunner03.rtm";
			interpolateTo[] = {"PO_KIA_BMP3_Gunner02",1};
		};
		class PO_KIA_BMP3_Commander: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //""; //"\po_vehicles\data\anim\KIA_bmp3_commander.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_BMP3_Commander: Crew
		{
			file = ""; //""; //"\po_vehicles\data\anim\bmp3_commander.rtm";
			interpolateTo[] = {"PO_KIA_BMP3_Commander",1};
		};
		class PO_KIA_BMP3_Driver_OUT: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //""; //"\po_vehicles\data\anim\KIA_bmp3_driver_out.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_BMP3_Driver_OUT: Crew
		{
			file = ""; //""; //"\po_vehicles\data\anim\BMP3_driver_out.rtm";
			interpolateTo[] = {"PO_KIA_BMP3_Driver_OUT",1};
		};
		class PO_KIA_BMP3_Gunner_OUT: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //""; //"\po_vehicles\data\anim\KIA_bmp3_gunner_out.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_BMP3_Gunner_OUT: Crew
		{
			file = ""; //""; //"\po_vehicles\data\anim\bmp3_gunner_out.rtm";
			interpolateTo[] = {"PO_KIA_BMP3_Gunner_OUT",1};
		};
		class PO_KIA_BMP3_Commander_OUT: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //""; //"\po_vehicles\data\anim\KIA_bmp3_commander_out.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_BMP3_Commander_OUT: Crew
		{
			file = ""; //""; //"\po_vehicles\data\anim\bmp3_commander_out.rtm";
			interpolateTo[] = {"PO_KIA_BMP3_Commander_OUT",1};
		};
		class PO_KIA_T90_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //""; //"\po_vehicles\data\anim\KIA_T72_Driver";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_T90_Driver: Crew
		{
			file = ""; //""; //"\po_vehicles\data\anim\T72_Driver.rtm";
			interpolateTo[] = {"PO_KIA_T90_Driver",1};
		};
		class PO_KIA_T90_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //""; //"\po_vehicles\data\anim\KIA_T72_Gunner.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_T90_Gunner: Crew
		{
			file = ""; //""; //"\po_vehicles\data\anim\T72_Gunner.rtm";
			interpolateTo[] = {"PO_KIA_T90_Gunner",1};
		};
		class PO_KIA_T90_Commander: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //""; //"\po_vehicles\data\anim\KIA_T72_Commander.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_T90_Commander: Crew
		{
			file = ""; //""; //"\po_vehicles\data\anim\T72_Commander.rtm";
			interpolateTo[] = {"PO_KIA_T90_Commander",1};
		};
		class PO_KIA_T90_DriverOUT: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //"\po_vehicles\data\anim\KIA_T72_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_T90_DriverOUT: Crew
		{
			file = ""; //"\po_vehicles\data\anim\T72_DriverOut";
			interpolateTo[] = {"PO_KIA_T90_DriverOUT",1};
		};
		class PO_KIA_T90_GunnerOUT: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //"\po_vehicles\data\anim\KIA_T90_GunnerOUT.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_T90_GunnerOUT: Crew
		{
			file = ""; //"\po_vehicles\data\anim\T90_GunnerOUT.rtm";
			interpolateTo[] = {"PO_KIA_T90_GunnerOUT",1};
		};
		class PO_KIA_T90_CommanderOUT: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //"\po_vehicles\data\anim\KIA_T90_CommanderOUT.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_T90_CommanderOUT: Crew
		{
			file = ""; //"\po_vehicles\data\anim\T90_CommanderOUT.rtm";
			interpolateTo[] = {"PO_KIA_T90_CommanderOUT",1};
		};
		class PO_Stryker_Dead: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = ""; //"\po_vehicles\data\anim\Stryker_Dead.rtm";
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_LR_driver_EP1: Crew
		{
			file = ""; //"\po_vehicles\data\anim\LR_driver";
			interpolateTo[] = {"PO_KIA_LR_driver_EP1",1};
			speed = 1e+010;
		};
		class PO_KIA_LR_driver_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //"\po_vehicles\data\anim\KIA_LR_driver";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_LR_Cargo01_EP1: Crew
		{
			file = ""; //"\po_vehicles\data\anim\LR_Cargo01";
			interpolateTo[] = {"PO_KIA_LR_Cargo01_EP1",1};
			speed = 1e+010;
		};
		class PO_KIA_LR_Cargo01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //"\po_vehicles\data\anim\KIA_LR_Cargo01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_LR_Cargo02_EP1: Crew
		{
			file = ""; //"\po_vehicles\data\anim\LR_Cargo02";
			interpolateTo[] = {"PO_KIA_LR_Cargo02_EP1",1};
			speed = 1e+010;
		};
		class PO_KIA_LR_Cargo02_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //"\po_vehicles\data\anim\KIA_LR_Cargo02";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_LR_Cargo03_EP1: Crew
		{
			file = ""; //"\po_vehicles\data\anim\LR_Cargo03";
			interpolateTo[] = {"PO_KIA_LR_Cargo03_EP1",1};
			speed = 1e+010;
		};
		class PO_KIA_LR_Cargo03_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //"\po_vehicles\data\anim\KIA_LR_Cargo03";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_LR_Cargo04_EP1: Crew
		{
			file = ""; //"\po_vehicles\data\anim\LR_Cargo04";
			interpolateTo[] = {"PO_KIA_LR_Cargo04_EP1",1};
			speed = 1e+010;
		};
		class PO_KIA_LR_Cargo04_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //"\po_vehicles\data\anim\KIA_LR_Cargo04";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_LR_Cargo05_EP1: Crew
		{
			file = ""; //"\po_vehicles\data\anim\LR_Cargo05";
			interpolateTo[] = {"PO_KIA_LR_Cargo05_EP1",1};
			speed = 1e+010;
		};
		class PO_KIA_LR_Cargo05_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //"\po_vehicles\data\anim\KIA_LR_Cargo05";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_LR_gunner_EP1: Crew
		{
			file = ""; //"\po_vehicles\data\anim\LR_gunner";
			connectTo[] = {"PO_Stryker_Dead",1};
			speed = 1e+010;
		};
		class PO_LR_gunner03_EP1: Crew
		{
			file = ""; //"\po_vehicles\data\anim\LR_gunner03";
			connectTo[] = {"PO_Stryker_Dead",1};
			speed = 1e+010;
		};
		class PO_KIA_Datsun_Driver: Crew
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = ""; //"\po_vehicles\data\anim\KIA_Datsun_Driver.rtm";
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class PO_Datsun_Driver: Crew
		{
			file = ""; //"\po_vehicles\data\anim\Datsun_Driver.rtm";
			interpolateTo[] = {"PO_KIA_Datsun_Driver",1};
		};
		class PO_KIA_Hilux_Driver: Crew
		{
			actions = "DeadActions";
			file = ""; //"\po_vehicles\data\anim\KIA_Hilux_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"Unconscious",0.1};
			soundEnabled = 0;
		};
		class PO_Hilux_Driver: Crew
		{
			file = ""; //"\po_vehicles\data\anim\Hilux_Driver.rtm";
			interpolateTo[] = {"PO_KIA_Hilux_Driver",1};
		};
		class PO_KIA_Hilux_Cargo01: Crew
		{
			actions = "DeadActions";
			file = ""; //"\po_vehicles\data\anim\KIA_Hilux_Cargo01.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"Unconscious",0.1};
			soundEnabled = 0;
		};
		class PO_Hilux_Cargo01: Crew
		{
			file = ""; //"\po_vehicles\data\anim\Hilux_Cargo01.rtm";
			interpolateTo[] = {"PO_KIA_Hilux_Cargo01",1};
		};
		class PO_Hilux_Gunner: Crew
		{
			file = ""; //"\po_vehicles\data\anim\gunner.rtm";
			interpolateTo[] = {"PO_Stryker_Dead",1};
		};
		class PO_datsun_Gunner01: Crew
		{
			file = ""; //"\po_vehicles\data\anim\datsun_gunner01.rtm";
			interpolateTo[] = {"PO_KIA_HMMWV_Gunner",1};
		};
		class PO_datsun_Gunner02: Crew
		{
			file = ""; //"\po_vehicles\data\anim\datsun_gunner02.rtm";
			interpolateTo[] = {"PO_KIA_HMMWV_Gunner",1};
		};
		class PO_datsun_cargo02: Crew
		{
			file = ""; //"\po_vehicles\data\anim\Datsun_Cargo02.rtm";
			interpolateTo[] = {"PO_Stryker_Dead",1};
		};
		class PO_AH1Z_Dead: DefaultDie
		{
			actions = "DeadActions";
			file = "";//"po_vehicles\data\Anim\AH1Z_Dead.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class PO_MH6_Cargo03: Crew
		{
			file = "";//"po_vehicles\data\Anim\MH6_Cargo03.rtm";
			interpolateTo[] = {"PO_AH1Z_Dead",1};
			speed = 0.1038;
		};
		class PO_KIA_HMMWV_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = ""; //"\po_vehicles\data\anim\KIA_HMMWV_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"Unconscious",0.1};
			soundEnabled = 0;
		};
		class PO_HMMWV_Driver: Crew
		{
			file = ""; //"\po_vehicles\data\anim\HMMWV_Driver.rtm";
			interpolateTo[] = {"PO_KIA_HMMWV_Driver",1};
		};
		class PO_KIA_HMMWV_Gunner: PO_KIA_HMMWV_Driver
		{
			file = ""; //"\po_vehicles\data\anim\KIA_hmmwv_gunnerOUT.rtm";
		};
	};
};
class Mode_SemiAuto;
class CfgAmmo
{
	class Laserbeam;
	class LOP_Laserbeam: Laserbeam
	{
		hit = 0;
		cost = 100000000000;
	};
	class Sh_120mm_HE;
	class LOP_Sh_3OF26: Sh_120mm_HE
	{
		hit = 350;
		indirectHit = 45;
		indirectHitRange = 7;
		typicalSpeed = 1000;
		explosive = 0.8;
		cost = 300;
		airFriction = -0.00045;
		caliber = 12;
		timeToLive = 15;
		whistleDist = 14;
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class LOP_Sh_OF412Sh: LOP_Sh_3OF26
	{
		caliber = "(220/((15*900)/1000))";
		airFriction = -4.5e-013;
	};
	class LOP_Sh_UOF354M: LOP_Sh_3OF26
	{
		indirectHit = 25;
		indirectHitRange = 7;
		caliber = "(50/((15*680)/1000))";
		airFriction = -0.00045;
	};
	class Sh_125mm_APFSDS;
	class LOP_Sh_3BM44M: Sh_125mm_APFSDS
	{
		hit = 250;
		indirectHit = 11;
		indirectHitRange = 0.15;
		typicalSpeed = 1800;
		cost = 2000;
		deflecting = 15;
		airFriction = -4e-005;
		caliber = "(650/((15*1750)/1000))";
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 14;
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class LOP_Sh_3BM12: LOP_Sh_3BM44M
	{
		caliber = "(280/((15*1800)/1000))";
	};
	class LOP_Sh_3BM15: LOP_Sh_3BM44M
	{
		caliber = "(310/((15*1780)/1000))";
	};
	class LOP_Sh_3BM22: LOP_Sh_3BM44M
	{
		caliber = "(380/((15*1760)/1000))";
	};
	class LOP_Sh_3BM26: LOP_Sh_3BM44M
	{
		caliber = "(410/((15*1720)/1000))";
	};
	class LOP_Sh_3BM32: LOP_Sh_3BM44M
	{
		caliber = "(500/((15*1700)/1000))";
	};
	class LOP_Sh_BM8: LOP_Sh_3BM44M
	{
		hit = 220;
		caliber = "(260/((15*1415)/1000))";
	};
	class LOP_Sh_BM20: LOP_Sh_BM8
	{
		caliber = "(300/((15*1430)/1000))";
	};
	class LOP_Sh_BM25: LOP_Sh_BM8
	{
		caliber = "(350/((15*1430)/1000))";
	};
	class LOP_Sh_BR365: LOP_Sh_BM8
	{
		hit = 200;
		caliber = "(97/((15*792)/1000))";
		airFriction = -0.0011;
	};
	class LOP_Sh_BR365P: LOP_Sh_BR365
	{
		caliber = "(140/((15*1050)/1000))";
	};
	class LOP_Sh_3BK29M: Sh_125mm_APFSDS
	{
		hit = 250;
		indirectHit = 11;
		indirectHitRange = 1.15;
		typicalSpeed = 915;
		caliber = 1;
		deflecting = 0;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class LOP_Sh_3BK29m_penetrator: LOP_Sh_3BM44M
	{
		rhs_ce_penetration = "penetrator";
		caliber = "(800/((15*100)/1000))";
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		typicalSpeed = 1000;
		timeToLive = 3;
		whistleOnFire = 1;
		whistleDist = 14;
		deflecting = 0;
		model = "\A3\Weapons_f\empty";
	};
	class LOP_Sh_3BK12: LOP_Sh_3BK29M
	{
		rhs_ce_penetration = "LOP_Sh_3BK12_penetrator";
	};
	class LOP_Sh_3BK12_penetrator: LOP_Sh_3BK29m_penetrator
	{
		caliber = "(420/((15*1000)/1000))";
	};
	class LOP_Sh_3BK14: LOP_Sh_3BK29M
	{
		rhs_ce_penetration = "LOP_Sh_3BK14_penetrator";
	};
	class LOP_Sh_3BK14_penetrator: LOP_Sh_3BK29m_penetrator
	{
		caliber = "(420/((15*1000)/1000))";
	};
	class LOP_Sh_3BK18: LOP_Sh_3BK29M
	{
		rhs_ce_penetration = "LOP_Sh_3BK18_penetrator";
	};
	class LOP_Sh_3BK18_penetrator: LOP_Sh_3BK29m_penetrator
	{
		caliber = "(500/((15*1000)/1000))";
	};
	class LOP_Sh_3BK18M: LOP_Sh_3BK29M
	{
		rhs_ce_penetration = "LOP_Sh_3BK18m_penetrator";
	};
	class LOP_Sh_3BK18m_penetrator: LOP_Sh_3BK29m_penetrator
	{
		caliber = "(550/((15*1000)/1000))";
	};
	class LOP_Sh_3BK21: LOP_Sh_3BK29M
	{
		rhs_ce_penetration = "LOP_Sh_3BK21_penetrator";
	};
	class LOP_Sh_3BK21_penetrator: LOP_Sh_3BK29m_penetrator
	{
		caliber = "(550/((15*1000)/1000))";
	};
	class LOP_Sh_3BK21B: LOP_Sh_3BK29M
	{
		rhs_ce_penetration = "LOP_Sh_3BK21B_penetrator";
	};
	class LOP_Sh_3BK21B_penetrator: LOP_Sh_3BK29m_penetrator
	{
		caliber = "(750/((15*1000)/1000))";
	};
	class LOP_Sh_BK5M: LOP_Sh_3BK29M
	{
		rhs_ce_penetration = "LOP_Sh_BK5m_penetrator";
	};
	class LOP_Sh_BK5m_penetrator: LOP_Sh_3BK29m_penetrator
	{
		caliber = "(380/((15*1000)/1000))";
	};
};
class CfgMagazines
{
	class Default;
	class VehicleMagazine;
	class Laserbatteries;
	class LOP_LaserMag: Laserbatteries
	{
		ammo = "LOP_laserbeam";
	};
	class LOP_3OF26: VehicleMagazine
	{
		scope = 2;
		displayName = "3OF26 HE-FRAG";
		displayNameShort = "3OF26";
		ammo = "LOP_Sh_3OF26";
		count = 21;
		initSpeed = 850;
		maxLeadSpeed = 100;
		nameSound = "heat";
		tracersEvery = 1;
	};
	class LOP_3OF26_S: LOP_3OF26
	{
		displayName = "3OF26 HE-FRAG (Stowed)";
		displayNameShort = "3OF26 (Stowed)";
		count = 1;
	};
	class LOP_OF416Sh: LOP_3OF26
	{
		displayName = "OF416Sh HE-FRAG";
		displayNameShort = "OF416Sh";
		ammo = "LOP_Sh_OF412Sh";
	};
	class LOP_UOF354M: LOP_3OF26
	{
		initSpeed = 680;
		displayName = "UOF-354M HE-FRAG";
		displayNameShort = "HE-FRAG";
		ammo = "LOP_Sh_UOF354M";
		count = 36;
	};
	class LOP_3BK29M: LOP_3OF26
	{
		displayName = "3BK29M HEAT-FS";
		displayNameShort = "3BK29M";
		ammo = "LOP_Sh_3BK29M";
		count = 6;
		initSpeed = 915;
	};
	class LOP_3BK29M_S: LOP_3BK29M
	{
		displayName = "3BK29M HEAT-FS (Stowed)";
		displayNameShort = "3BK29M (Stowed)";
		count = 1;
	};
	class LOP_3BK12: LOP_3BK29M
	{
		displayName = "3BK12 HEAT-FS";
		displayNameShort = "3BK12";
		ammo = "LOP_Sh_3BK12";
		count = 4;
		initSpeed = 905;
	};
	class LOP_3BK12_S: LOP_3BK12
	{
		displayName = "3BK12 HEAT-FS (Stowed)";
		displayNameShort = "3BK12 (Stowed)";
		count = 1;
	};
	class LOP_3BK14: LOP_3BK29M
	{
		displayName = "3BK14 HEAT-FS";
		displayNameShort = "3BK14";
		ammo = "LOP_Sh_3BK14";
		count = 4;
		initSpeed = 905;
	};
	class LOP_3BK14_S: LOP_3BK14
	{
		displayName = "3BK14 HEAT-FS (Stowed)";
		displayNameShort = "3BK14 (Stowed)";
		count = 1;
	};
	class LOP_3BK18: LOP_3BK29M
	{
		displayName = "3BK18 HEAT-FS";
		displayNameShort = "3BK18";
		ammo = "LOP_Sh_3BK18";
		count = 1;
		initSpeed = 905;
	};
	class LOP_3BK18_S: LOP_3BK18
	{
		displayName = "3BK18 HEAT-FS (Stowed)";
		displayNameShort = "3BK18 (Stowed)";
		count = 1;
	};
	class LOP_3BK18M: LOP_3BK29M
	{
		displayName = "3BK18M HEAT-FS";
		displayNameShort = "3BK18M";
		ammo = "LOP_Sh_3BK18M";
		count = 4;
		initSpeed = 905;
	};
	class LOP_3BK18M_S: LOP_3BK18M
	{
		displayName = "3BK18M HEAT-FS (Stowed)";
		displayNameShort = "3BK18M (Stowed)";
		count = 1;
	};
	class LOP_3BK21: LOP_3BK29M
	{
		displayName = "3BK21 HEAT-FS";
		displayNameShort = "3BK21";
		ammo = "LOP_Sh_3BK21";
		count = 1;
		initSpeed = 905;
	};
	class LOP_3BK21_S: LOP_3BK21
	{
		displayName = "3BK21 HEAT-FS (Stowed)";
		displayNameShort = "3BK21 (Stowed)";
		count = 1;
	};
	class LOP_3BK21B: LOP_3BK29M
	{
		displayName = "3BK21B HEAT-FS";
		displayNameShort = "3BK21B";
		ammo = "LOP_Sh_3BK21B";
		count = 2;
		initSpeed = 905;
	};
	class LOP_3BK21B_S: LOP_3BK21B
	{
		displayName = "3BK21B HEAT-FS (Stowed)";
		displayNameShort = "3BK21B (Stowed)";
		count = 1;
	};
	class LOP_BK5M: LOP_3BK29M
	{
		displayName = "BK5M HEAT-FS";
		displayNameShort = "BK5M";
		ammo = "LOP_Sh_BK5M";
		count = 21;
		initSpeed = 900;
	};
	class LOP_BK5M_S: LOP_BK5M
	{
		displayName = "BK5M HEAT-FS (Stowed)";
		displayNameShort = "BK5M (Stowed)";
		count = 1;
	};
	class LOP_3BM44M: LOP_3OF26
	{
		displayName = "3BM44M APFSDS-T";
		displayNameShort = "3BM44M";
		ammo = "LOP_Sh_3BM44M";
		count = 12;
		initSpeed = 1750;
		nameSound = "sabot";
	};
	class LOP_3BM44M_S: LOP_3BM44M
	{
		displayName = "3BM44M APFSDS-T (Stowed)";
		displayNameShort = "3BM44M (Stowed)";
		count = 1;
	};
	class LOP_3BM12: LOP_3BM44M
	{
		displayName = "3BM12 APFSDS-T";
		displayNameShort = "3BM12";
		ammo = "LOP_Sh_3BM12";
		count = 8;
		initSpeed = 1800;
	};
	class LOP_3BM12_S: LOP_3BM12
	{
		displayName = "3BM12 APFSDS-T (Stowed)";
		displayNameShort = "3BM12 (Stowed)";
		count = 1;
	};
	class LOP_3BM15: LOP_3BM44M
	{
		displayName = "3BM15 APFSDS-T";
		displayNameShort = "3BM15";
		ammo = "LOP_Sh_3BM15";
		count = 8;
		initSpeed = 1780;
	};
	class LOP_3BM15_S: LOP_3BM15
	{
		displayName = "3BM15 APFSDS-T (Stowed)";
		displayNameShort = "3BM15 (Stowed)";
		count = 1;
	};
	class LOP_3BM22: LOP_3BM44M
	{
		displayName = "3BM22 APFSDS-T";
		displayNameShort = "3BM22";
		ammo = "LOP_Sh_3BM22";
		count = 8;
		initSpeed = 1760;
	};
	class LOP_3BM22_S: LOP_3BM22
	{
		displayName = "3BM22 APFSDS-T (Stowed)";
		displayNameShort = "3BM22 (Stowed)";
		count = 1;
	};
	class LOP_3BM26: LOP_3BM44M
	{
		displayName = "3BM26 APFSDS-T";
		displayNameShort = "3BM26";
		ammo = "LOP_Sh_3BM26";
		count = 7;
		initSpeed = 1720;
	};
	class LOP_3BM26_S: LOP_3BM26
	{
		displayName = "3BM26 APFSDS-T (Stowed)";
		displayNameShort = "3BM26 (Stowed)";
		count = 1;
	};
	class LOP_3BM32: LOP_3BM44M
	{
		displayName = "3BM32 APFSDS-T";
		displayNameShort = "3BM32";
		ammo = "LOP_Sh_3BM32";
		count = 8;
		initSpeed = 1700;
	};
	class LOP_3BM32_S: LOP_3BM32
	{
		displayName = "3BM32 APFSDS-T (Stowed)";
		displayNameShort = "3BM32 (Stowed)";
		count = 1;
	};
	class LOP_BM8: LOP_3BM44M
	{
		displayName = "BM8 APDS";
		displayNameShort = "BM8";
		ammo = "LOP_Sh_BM8";
		count = 11;
		initSpeed = 1415;
	};
	class LOP_BM20: LOP_3BM44M
	{
		displayName = "BM20 APFSDS";
		displayNameShort = "BM20";
		ammo = "LOP_Sh_BM20";
		count = 11;
		initSpeed = 1430;
	};
	class LOP_BM25: LOP_3BM44M
	{
		displayName = "BM25 APFSDS-T";
		displayNameShort = "BM25";
		ammo = "LOP_Sh_BM25";
		count = 11;
		initSpeed = 1430;
	};
	class LOP_BR365: LOP_3BM44M
	{
		displayName = "BR365 AP";
		displayNameShort = "BR365";
		ammo = "LOP_Sh_BR365";
		count = 16;
		initSpeed = 792;
	};
	class LOP_BR365P: LOP_3BM44M
	{
		displayName = "BR365P APCR";
		displayNameShort = "BR365P";
		ammo = "LOP_Sh_BR365P";
		count = 4;
		initSpeed = 1050;
	};
	class LOP_1500Rnd_762x54_PKT: VehicleMagazine
	{
		scope = 2;
		displayName = "PKT";
		count = 1500;
		reloadTime = 0.075;
		ammo = "B_762x51_Tracer_Green";
		initSpeed = 900;
		maxLeadSpeed = 200;
		tracersEvery = 4;
		nameSound = "mgun";
	};
	class LOP_2000Rnd_762x54_PKT: LOP_1500Rnd_762x54_PKT
	{
		count = 2000;
	};
	class LOP_200Rnd_762x54_PKT: LOP_1500Rnd_762x54_PKT
	{
		count = 200;
	};
	class LOP_100Rnd_762x54_PKT: LOP_1500Rnd_762x54_PKT
	{
		count = 100;
	};
	class LOP_250Rnd_762x54_PKT: LOP_1500Rnd_762x54_PKT
	{
		count = 250;
	};
	class LOP_63Rnd_762x54_DT: VehicleMagazine
	{
		scope = 2;
		displayName = "DT";
		count = 63;
		ammo = "B_762x51_Tracer_Green";
		magazineReloadTime = 6;
		reloadTime = 0.07;
		dispersion = "0.0014*10";
		tracersEvery = 4;
	};
	class 5Rnd_GAT_missiles;
	class LOP_AT11: 5Rnd_GAT_missiles
	{
		displayName = "9M119M Refleks-M";
		displayNameShort = "Refleks-M";
		ammo = "LOP_M_9M119_AT";
		count = 6;
		initSpeed = 340;
		reloadTime = 12;
		magazineReloadTime = 12;
	};
	class LOP_200Rnd_23mm_AZP23: VehicleMagazine
	{
		scope = 2;
		displayName = "23mm AZP-23";
		ammo = "LOP_B_23mm_AA";
		count = 200;
		initSpeed = 980;
		maxLeadSpeed = 600;
		tracersEvery = 1;
		nameSound = "cannon";
	};
};
class cfgWeapons
{
	class LOP_DSHKM;
	class LOP_DSHKMT: LOP_DSHKM
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne3";
				directionName = "konec hlavne3";
				effectName = "MachineGunCloud";
			};
			class effect2
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridge1";
			};
		};
		cursor = "EmptyCursor";
		cursoraim = "EmptyCursor";
	};
	class LMG_M200;
	class LOP_PKT: LMG_M200
	{
		scope = 1;
		displayName = "PKT";
		class manual;
		class close;
		class short;
		class medium;
		class far;
		aiDispersionCoefY = 7;
		aiDispersionCoefX = 7;
		magazines[] = {"LOP_1500Rnd_762x54_PKT","LOP_2000Rnd_762x54_PKT","LOP_250Rnd_762x54_PKT","LOP_200Rnd_762x54_PKT","LOP_100Rnd_762x54_PKT"};
		magazineReloadTime = 5;
	};
	class LOP_DT: LOP_PKT
	{
		displayName = "DT";
		magazines[] = {"LOP_63Rnd_762x54_DT"};
		magazineReloadTime = 5;
		class manual: manual
		{
			reloadTime = 0.11;
		};
		class close: close
		{
			reloadTime = 0.11;
		};
		class short: short
		{
			reloadTime = 0.11;
		};
		class medium: medium
		{
			reloadTime = 0.11;
		};
		class far: far
		{
			reloadTime = 0.11;
		};
	};
	class LOP_DT2: LOP_DT
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "FrontGunner_chamber";
				directionName = "FrontGunner_muzzle";
				effectName = "MachineGunCloud";
			};
		};
	};
	class cannon_125mm;
	class LOP_D81: cannon_125mm
	{
		canLock = 0;
		scope = 1;
		displayName = "D-81";
		magazines[] = {"LOP_3BM44M","LOP_3BM12","LOP_3BM15","LOP_3BM22","LOP_3BM26","LOP_3BM32","LOP_3OF26","LOP_3BK29M","LOP_3BK12","LOP_3BK14","LOP_3BK18","LOP_3BK18M","LOP_3BK21","LOP_3BK21B","LOP_3BM44M_S","LOP_3BM12_S","LOP_3BM15_S","LOP_3BM22_S","LOP_3BM26_S","LOP_3BM32_S","LOP_3OF26_S","LOP_3BK29M_S","LOP_3BK12_S","LOP_3BK14_S","LOP_3BK18_S","LOP_3BK18M_S","LOP_3BK21_S","LOP_3BK21B_S","LOP_AT11"};
		reloadTime = 6;
		magazineReloadTime = 12;
		autoReload = 0;
		ballisticsComputer = 0;
		weaponLockSystem = 0;
		showaimcursorinternal = 0;
		cursor = "EmptyCursor";
		cursoraim = "EmptyCursor";
		cursoraimon = "EmptyCursor";
		reloadsound[] = {"po_vehicles\data\sounds\Reload_Cannon",13.16228,1,10};
		class player;
	};
	class Laserdesignator_mounted;
	class LOP_T72_FCS: Laserdesignator_mounted
	{
		cursor = "EmptyCursor";
		cursoraim = "EmptyCursor";
		cursoraimon = "EmptyCursor";
		displayname = "Fire Control System";
		magazines[] = {"LOP_lasermag"};
	};
	class LOP_D10: LOP_D81
	{
		displayName = "D-10";
		magazines[] = {"LOP_BM8","LOP_BM20","LOP_BM25","LOP_OF416Sh","LOP_BK5M"};
		class player: player
		{
			reloadtime = 12;
		};
		reloadTime = 12;
		dispersion = 0.0008;
		reloadSound[] = {"po_vehicles\T34\sounds\t34_85_reload",45,1,12};
	};
	class LOP_S53: LOP_D81
	{
		displayName = "ZiS S-53";
		magazines[] = {"LOP_BR365","LOP_BR365P","LOP_UOF354M"};
		reloadTime = 12;
		dispersion = 0.0008;
		modes[] = {"player","close","short"};
		class player: Mode_SemiAuto
		{
			autofire = 0;
			autoreload = 1;
			ballisticscomputer = 1;
			sounds[] = {"StandaLOPound"};
			class StandaLOPound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"po_vehicles\T34\sounds\85.ogg",1.16228,1,1500};
				soundBegin[] = {"begin1",1};
			};
			canlock = 0;
			magazinereloadtime = 12;
			reloadtime = 12;
			soundcontinuous = 0;
		};
		class close: player
		{
			aidispersioncoefx = 4;
			aidispersioncoefy = 4;
			airateoffire = 6;
			airateoffiredistance = 50;
			maxrange = 1000;
			maxrangeprobab = 0.04;
			midrange = 500;
			midrangeprobab = 0.78;
			minrange = 0;
			minrangeprobab = 0.35;
			showtoplayer = 0;
		};
		class short: close
		{
			airateoffire = 10;
			airateoffiredistance = 300;
			maxrange = 1500;
			maxrangeprobab = 0.04;
			midrange = 1000;
			midrangeprobab = 0.58;
			minrange = 500;
			minrangeprobab = 0.05;
		};
		reloadSound[] = {"po_vehicles\T34\sounds\t34_85_reload",45,1,12};
	};
	class CannonCore;
	class LOP_AZP23: CannonCore
	{
		scope = 1;
		displayName = "AZP-23 Amur";
		nameSound = "cannon";
		cartridgePos = "eject1";
		cartridgeVel = "eject1dir";
		cursor = "emptyCursor";
		cursorAim = "mg";
		cursorAimOn = "";
		cursorSize = 1;
		canLock = 2;
		class gunParticles
		{
			class effect1
			{
				positionName = "eject1";
				directionName = "eject1dir";
				effectName = "MachineGunCartridge2";
			};
			class effect2
			{
				positionName = "eject2";
				directionName = "eject2dir";
				effectName = "MachineGunCartridge2";
			};
			class effect3
			{
				positionName = "eject3";
				directionName = "eject3dir";
				effectName = "MachineGunCartridge2";
			};
			class effect4
			{
				positionName = "eject4";
				directionName = "eject4dir";
				effectName = "MachineGunCartridge2";
			};
			class mg1
			{
				positionName = "chase01e";
				directionName = "chase01dir";
				effectName = "MachineGun1";
			};
			class mg2
			{
				positionName = "chase03e";
				directionName = "chase03dir";
				effectName = "MachineGun1";
			};
			class mg3
			{
				positionName = "chase03e";
				directionName = "chase03dir";
				effectName = "MachineGun1";
			};
			class mg4
			{
				positionName = "chase04e";
				directionName = "chase04dir";
				effectName = "MachineGun1";
			};
		};
		magazines[] = {"LOP_200Rnd_23mm_AZP23"};
		magazineReloadTime = 14;
		modes[] = {"manual","close","short","medium","far"};
		class manual: CannonCore
		{
			displayName = "AZP-23 Amur";
			autoFire = 1;
			sounds[] = {"StandaLOPound"};
			class StandaLOPound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"\po_vehicles\data\sounds\2a14_1shot",1,1,1400};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.024;
			dispersion = 0.00035;
			multiplier = 2;
			soundContinuous = 0;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 16;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 1000;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1600;
			maxRangeProbab = 0.3;
		};
		class short: close
		{
			burst = 16;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 1600;
			minRange = 1000;
			minRangeProbab = 0.3;
			midRange = 1600;
			midRangeProbab = 0.58;
			maxRange = 2200;
			maxRangeProbab = 0.3;
		};
		class medium: close
		{
			burst = 20;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 2200;
			minRange = 1600;
			minRangeProbab = 0.3;
			midRange = 2000;
			midRangeProbab = 0.58;
			maxRange = 2800;
			maxRangeProbab = 0.3;
		};
		class far: close
		{
			burst = 12;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 3000;
			minRange = 1600;
			minRangeProbab = 0.3;
			midRange = 2200;
			midRangeProbab = 0.4;
			maxRange = 8500;
			maxRangeProbab = 0.01;
		};
	};
};
class CfgFunctions
{
	class LOP
	{
		tag = "LOP";
		class functions
		{
			class comm_t72
			{
				file = "\po_vehicles\data\scripts\LOP_comm_t72.sqf";
				description = "T72 Commander periscope anims";
			};
			class rF_t72
			{
				file = "\po_vehicles\data\scripts\LOP_rF_t72.sqf";
				description = "FCS for T72";
			};
			class rF_t72_Animate
			{
				file = "\po_vehicles\data\scripts\LOP_rF_T72_anim.sqf";
				description = "FCS for T72 Animation";
			};			
			class getFov
			{
				file = "\po_vehicles\data\scripts\LOP_rF_T72_fov.sqf";
				description = "Get FOV Function";
			};
			class hitHandler
			{
				file = "\po_vehicles\data\scripts\LOP_hitpart.sqf";
				description = "Armor handler";
			};
		};
	};
};
class CfgSounds
{
	class LOP_Error
	{
		name = "Tank beep";
		sound[] = {"\po_vehicles\data\sounds\alarm_loop1.wss",21,1};
		titles[] = {};
	};
};
class RscOpticsText;
class RscOpticsValue;
class RscText;
class RscPicture;
class RscControlsGroup;
class HScrollbar;
class VScrollbar;
class RscInGameUI
{
	class RscUnitInfo;
	class RscWeaponT72_FCS: RscUnitInfo
	{
		idd = 300;
		onLoad = "if (isNil 'a3_ui_initDisplay') then {a3_ui_initDisplay = compile preprocessfilelinenumbers 'A3\ui_f\scripts\initDisplay.sqf'}; ['onLoad',_this,'RscUnitInfo','IGUI'] call a3_ui_initDisplay; _this call LOP_fnc_rF_t72";
		controls[] = {"CA_Laser","CA_Distance","CA_OpticsZoom"};
		class CA_OpticsZoom: RscText
		{
			idc = 180;
			style = 1;
			colorText[] = {0.706,0.0745,0.0196,1};
			sizeEx = "0.038*SafezoneH";
			shadow = 0;
			font = "EtelkaMonospacePro";
			text = "4.5";
			x = "43.85 *   (0.01875 * SafezoneH)";
			y = "19.6 *   (0.025 * SafezoneH)";
			w = "0*   (0.01875 * SafezoneH)";
			h = "0 *   (0.025 * SafezoneH)";
		};
		class CA_Laser: RscText
		{
			idc = 158;
			style = "0x30 + 0x800";
			sizeEx = "0.038*SafezoneH";
			colorText[] = {0.706,0.0745,0.0196,1};
			shadow = 0;
			font = "EtelkaMonospacePro";
			text = "\po_vehicles\data\TPD_K1_lasermark_6x.paa";
			x = "safezoneX + 0.498* SafezoneW";
			y = "safezoneY + 0.495* SafezoneH";
			w = "0.5 *   (0.01875 * SafezoneH)";
			h = "0.5 *   (0.025 * SafezoneH)";
		};
		class CA_Distance: RscOpticsValue
		{
			idc = 151;
			style = 2;
			colorText[] = {1,0.15,0.15,0.65};
			shadow = 0;
			font = "EtelkaMonospacePro";
			x = 0;
			y = "(SafezoneY+SafezoneH) - 0.195";
			w = 0;
			h = 0;
		};
	};
	class RscWeaponT72_Comm: RscUnitInfo
	{
		idd = 300;
		onLoad = "[] call LOP_fnc_comm_t72";
		controls[] = {"CA_Zeroing"};
	};	
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Wheeled_APC_F;
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class textureSources;
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class MBT_02_base_F: Tank_F
	{
		class EventHandlers;
	};
	class rhs_btr_base: Wheeled_APC_F
	{
		class textureSources;
	};
	class APC_Tracked_02_base_F: Tank_F{};
	class Car: LandVehicle
	{
		class NewTurret;
		class HitPoints;
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
		class AnimationSources;
	};
	class Car_F: Car
	{
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class RHS_UH60_Base;
	class Heli_Light_02_base_F;
	class Heli_Attack_02_base_F;	
	class Truck_F;
	class RHS_Ural_MSV_Base;
	class rhs_btr60_base: rhs_btr_base
	{
		class textureSources
		{
			class LOP_TKA
			{
				displayName = "Takistani";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_fic\tka\Data\btr60_body_tka_co.paa","\rhsafrf\addons\rhs_a2port_armor\data\btr60_details_co.paa"};
				factions[] = {};
			};
			class LOP_ISTS
			{
				displayName = "ISTS";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_me\ists\Data\btr60_body_ists_co.paa","\rhsafrf\addons\rhs_a2port_armor\data\btr60_details_co.paa"};
				factions[] = {};
			};
			class LOP_UN
			{
				displayName = "United Nations";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_fic\un\Data\btr60_body_un_co.paa","\rhsafrf\addons\rhs_a2port_armor\data\btr60_details_co.paa"};
				factions[] = {};
			};
			class LOP_IRAN
			{
				displayName = "United Nations";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_me\IRAN\data\btr60_body_iran_co.paa","\rhsafrf\addons\rhs_a2port_armor\data\btr60_details_co.paa"};
				factions[] = {};
			};
		};
	};
	class rhs_btr70_vmf: rhs_btr_base
	{
		class textureSources: textureSources
		{
			class LOP_TKA
			{
				displayName = "Takistani";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_fic\tka\Data\btr70_1_tka_co.paa","\po_factions_fic\tka\Data\Btr70_2_tka_co.paa"};
				factions[] = {};
			};
			class LOP_CDF
			{
				displayName = "CDF";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_fic\cdf\Data\btr70_1_cdf_co.paa","\po_factions_fic\cdf\Data\Btr70_2_cdf_co.paa"};
				factions[] = {};
			};
			class LOP_UN
			{
				displayName = "United Nations";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_fic\un\Data\btr70_1_un_co.paa","\po_factions_fic\tka\Data\Btr70_2_tka_co.paa"};
				factions[] = {};
			};
			class LOP_IRAN
			{
				displayName = "Iranian";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_factions_me\IRAN\data\btr70_1_iran_co.paa","po_factions_me\IRAN\data\Btr70_2_iran_co.paa"};
				factions[] = {};
			};
		};
	};
	class rhs_bmp1tank_base: Tank_F
	{
		class textureSources: textureSources
		{
			class LOP_Afghani
			{
				displayName = "Afghani";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_me\aa\Data\bmp_1_aa_co.paa","\po_factions_me\aa\Data\bmp_2_aa_co.paa","\po_factions_me\aa\Data\bmp_3_aa_co.paa","\po_factions_me\aa\Data\bmp_4_aa_co.paa","\po_factions_me\aa\Data\bmp_5_aa_co.paa","\po_factions_me\aa\Data\bmp_6_aa_co.paa"};
				factions[] = {};
			};
			class LOP_Afghani_C
			{
				displayName = "Afghani Camo";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_me\aa\Data\bmp_1_ana_co.paa","\po_factions_me\aa\Data\bmp_2_ana_co.paa","\po_factions_me\aa\Data\bmp_3_ana_co.paa","\po_factions_me\aa\Data\bmp_4_ana_co.paa","\po_factions_me\aa\Data\bmp_5_ana_co.paa","\po_factions_me\aa\Data\bmp_6_ana_co.paa"};
				factions[] = {};
			};
			class LOP_CDF
			{
				displayName = "CDF";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_fic\cdf\Data\bmp_1_cdf_co.paa","\po_factions_fic\cdf\Data\bmp_2_cdf_co.paa","\po_factions_fic\cdf\Data\bmp_3_cdf_co.paa","\po_factions_fic\cdf\Data\bmp_4_cdf_co.paa","\po_factions_fic\cdf\Data\bmp_5_cdf_co.paa","\po_factions_fic\cdf\Data\bmp_6_cdf_co.paa"};
				factions[] = {};
			};
			class LOP_IA
			{
				displayName = "Iraqi";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_me\ia\Data\bmp_1_ia_co.paa","\po_factions_me\ia\Data\bmp_2_ia_co.paa","\po_factions_me\ia\Data\bmp_3_ia_co.paa","\po_factions_me\ia\Data\bmp_4_ia_co.paa","\po_factions_me\ia\Data\bmp_5_ia_co.paa","\po_factions_me\ia\Data\bmp_6_ia_co.paa"};
				factions[] = {};
			};
			class LOP_TKA
			{
				displayName = "Takistani";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_fic\tka\Data\bmp_1_tka_co.paa","\po_factions_fic\tka\Data\bmp_2_tka_co.paa","\po_factions_fic\tka\Data\bmp_3_tka_co.paa","\po_factions_fic\tka\Data\bmp_4_tka_co.paa","\po_factions_fic\tka\Data\bmp_5_tka_co.paa","\po_factions_fic\tka\Data\bmp_6_tka_co.paa"};
				factions[] = {};
			};
			class LOP_UN
			{
				displayName = "United Nations";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_fic\un\Data\bmp_1_un_co.paa","\po_factions_fic\un\Data\bmp_2_un_co.paa","\po_factions_fic\un\Data\bmp_3_un_co.paa","\po_factions_fic\un\Data\bmp_4_un_co.paa","\po_factions_fic\un\Data\bmp_5_un_co.paa","\po_factions_fic\un\Data\bmp_6_un_co.paa"};
				factions[] = {};
			};
			class LOP_IRAN
			{
				displayName = "Iranian";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_factions_me\IRAN\data\bmp_1_iran_co.paa","\po_factions_me\IRAN\data\bmp_2_iran_co.paa","\po_factions_me\IRAN\data\bmp_3_iran_co.paa","\po_factions_me\IRAN\data\bmp_4_iran_co.paa","\po_factions_me\IRAN\data\bmp_5_iran_co.paa","\po_factions_me\IRAN\data\bmp_6_iran_co.paa"};
				factions[] = {};
			};
		};
	};
	class RHS_Mi8_base: Heli_Light_02_base_F
	{
		class textureSources
		{
			class LOP_SLA
			{
				displayName = "SLA";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_fic\sla\data\mi8_body_olv_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa"};
			};
			class LOP_TKA
			{
				displayName = "Takistani";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_fic\tka\data\mi17_body_ind_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa"};
			};
			class LOP_UA
			{
				displayName = "Ultranationalist";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_fic\uaa\data\mi8_body_g_ua_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa"};
			};
			class LOP_UN
			{
				displayName = "United Nations";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_fic\un\data\mi17_body_un_co.paa","\po_factions_fic\un\data\mi17_det_un_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa"};
			};
			class LOP_AA
			{
				displayName = "Afghani";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_factions_me\aa\data\mi8_body_g_AA_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa"};
			};
			class LOP_IA
			{
				displayName = "Iraqi";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_factions_me\ia\data\mi8_body_g_IA_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa"};
			};
			class LOP_UKR
			{
				displayName = "Ukrainian";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_eu\ukr\data\mi8_body_g_ukr_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa"};
			};
			class LOP_IRAN
			{
				displayName = "Iranian";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_me\IRAN\data\mi8_iran_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa"};
			};
		};
	};
	class RHS_Mi24_base: Heli_Attack_02_base_F
	{
		class textureSources
		{
			class LOP_TKA
			{
				displayName = "Takistani #1";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_fic\tka\data\mi35_001_ind_co.paa","\po_factions_fic\tka\data\mi35_002_ind_co.paa","rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
			};
			class LOP_AA
			{
				displayName = "Afghani";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_factions_me\aa\data\mi24p_001_aa_co.paa","\po_factions_me\aa\data\mi24p_002_aa_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
			};
			class LOP_IA
			{
				displayName = "Iraqi #1";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_factions_me\ia\data\mi24p_001_ia_co.paa","\po_factions_me\ia\data\mi24p_002_ia_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
			};
			class LOP_POL_D
			{
				displayName = "Poland (Desert)";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_vehicles\data\camo\mi24\01_polska_desert_001_co.paa","po_vehicles\data\camo\mi24\01_polska_desert_002_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
			};
			class LOP_POL_G
			{
				displayName = "Poland (Green)";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_vehicles\data\camo\mi24\02_polska_green_001_co.paa","po_vehicles\data\camo\mi24\02_polska_green_002_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
			};
			class LOP_CUB_G
			{
				displayName = "Cuba (Green)";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_vehicles\data\camo\mi24\06_kuba_green_001_co.paa","po_vehicles\data\camo\mi24\06_kuba_green_002_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
			};
			class LOP_CUB_E
			{
				displayName = "Cuba (Expo)";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_vehicles\data\camo\mi24\06a_kuba_santiago_001_co.paa","po_vehicles\data\camo\mi24\06a_kuba_santiago_002_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
			};
			class LOP_IA_D
			{
				displayName = "Iraqi #2";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_vehicles\data\camo\mi24\14_iraq_desert_001_co.paa","po_vehicles\data\camo\mi24\14_iraq_desert_002_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
			};
			class LOP_TIG
			{
				displayName = "Tiger";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_vehicles\data\camo\mi24\17a_cz_tiger_001_co.paa","po_vehicles\data\camo\mi24\17a_cz_tiger_002_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
			};
			class LOP_SHA
			{
				displayName = "Shark";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_vehicles\data\camo\mi24\19_cotedivoire_shark_001_co.paa","po_vehicles\data\camo\mi24\19_cotedivoire_shark_002_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
			};
			class LOP_GRZ
			{
				displayName = "Gruzia (Desert)";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_vehicles\data\camo\mi24\20_gruzia_desert_001_co.paa","po_vehicles\data\camo\mi24\20_gruzia_desert_002_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
			};
			class LOP_YUG
			{
				displayName = "Yugoslavia (Dark)";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_vehicles\data\camo\mi24\23_yugoslavia_dark_001_co.paa","po_vehicles\data\camo\mi24\23_yugoslavia_dark_002_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
			};
			class LOP_SRI
			{
				displayName = "African";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_vehicles\data\camo\mi24\24_srilanka_desert_001_co.paa","po_vehicles\data\camo\mi24\24_srilanka_desert_002_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
			};
			class LOP_UKR
			{
				displayName = "Ukraine (Desert)";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_vehicles\data\camo\mi24\25_ukraina_desert_001_co.paa","po_vehicles\data\camo\mi24\25_ukraina_desert_002_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
			};
			class LOP_UN
			{
				displayName = "United Nations";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_vehicles\data\camo\mi24\26_unitednations_white_001_co.paa","po_vehicles\data\camo\mi24\26_unitednations_white_002_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
			};
			class LOP_ION
			{
				displayName = "Private Military Company";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_vehicles\data\camo\mi24\27_ion_001_co.paa","po_vehicles\data\camo\mi24\27_ion_002_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
			};
			class LOP_TKA2
			{
				displayName = "Takistani #2";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_vehicles\data\camo\mi24\28_takistan_001_co.paa","po_vehicles\data\camo\mi24\28_takistan_002_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
			};
		};
	};
	class rhs_zsutank_base: APC_Tracked_02_base_F
	{
		class textureSources: textureSources
		{
			class LOP_Afghani
			{
				displayName = "Afghani";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_me\aa\Data\zsu_01_aa_co.paa","\po_factions_me\aa\Data\zsu_02_aa_co.paa","\po_factions_me\aa\Data\zsu_03_aa_co.paa"};
				factions[] = {};
			};
			class LOP_CDF
			{
				displayName = "CDF";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_fic\cdf\Data\zsu_01_camo_co.paa","\po_factions_fic\cdf\Data\zsu_02_camo_co.paa","\po_factions_fic\cdf\Data\zsu_03_camo_co.paa"};
				factions[] = {};
			};
			class LOP_IA
			{
				displayName = "Iraqi";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_me\aa\Data\zsu_01_aa_co.paa","\po_factions_me\ia\Data\zsu_02_ia_co.paa","\po_factions_me\aa\Data\zsu_03_aa_co.paa"};
				factions[] = {};
			};
			class LOP_ISTS
			{
				displayName = "ISTS";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_me\aa\Data\zsu_01_aa_co.paa","\po_factions_me\ists\Data\zsu_02_ists_co.paa","\po_factions_me\aa\Data\zsu_03_aa_co.paa"};
				factions[] = {};
			};
			class LOP_TKA
			{
				displayName = "Takistani";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_fic\tka\Data\zsu_01_tka_co.paa","\po_factions_fic\tka\Data\zsu_02_tka_co.paa","\po_factions_fic\tka\Data\zsu_03_tka_co.paa"};
				factions[] = {};
			};
			class LOP_UN
			{
				displayName = "United Nations";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_fic\un\Data\zsu_01_un_co.paa","\po_factions_fic\un\Data\zsu_02_un_co.paa","\po_factions_fic\un\Data\zsu_03_un_co.paa"};
				factions[] = {};
			};
			class LOP_IRAN
			{
				displayName = "Iranian";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_me\IRAN\data\zsu_01_iran_co.paa","\po_factions_me\IRAN\data\zsu_02_iran_co.paa","\po_factions_me\IRAN\data\zsu_03_iran_co.paa"};
				factions[] = {};
			};
		};
	};
	class rhs_bmd_base: Tank_F
	{
		class textureSources: textureSources
		{
			class LOP_CDF
			{
				displayName = "CDF";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_fic\cdf\Data\sa_bmd2_01_cdf_co.paa","\po_factions_fic\cdf\Data\sa_bmd1_02_cdf_co.paa","rhsafrf\addons\rhs_bmd\data\sa_bmd2_03_co.paa"};
			};
		};
	};
	class RHS_UH60M_base: RHS_UH60_Base
	{
		class textureSources
		{
			class LOP_RACS
			{
				displayName = "RACS";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_factions_fic\racs\data\uh60m_fuselage_racs_co.paa","po_factions_fic\racs\data\uh60m_engine_racs_co.paa","rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa"};
			};
		};
	};	
	class rhsusf_m113tank_base: APC_Tracked_02_base_F
	{
		class textureSources
		{
			class Afghani
			{
				displayName = "Afghani";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_factions_me\aa\data\m113a3_01_ana_h_co.paa","po_factions_me\aa\data\m113a3_02_ana_h_co.paa","po_factions_me\aa\data\m113a3_03_ana_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa","po_factions_me\aa\data\M23_pintle_ana_co.paa","po_factions_me\aa\data\m113a3_shield_ana_co.paa"};
			};
			class LOP_IRAN
			{
				displayName = "Iranian";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_factions_me\IRAN\data\m113a3_01_iran_h_co.paa","po_factions_me\IRAN\data\m113a3_02_iran_h_co.paa","po_factions_me\IRAN\data\m113a3_03_iran_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa","po_factions_me\IRAN\data\m23_pintle_iran_co.paa","po_factions_me\IRAN\data\m113a3_shield_iran_co.paa"};
			};
		};
	};
	class RHS_Ural_BaseTurret: Truck_F
	{
		class textureSources
		{
			class Afghani
			{
				displayName = "Afghani Camo";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_factions_me\aa\data\ural_kabina_ana_co.paa","po_factions_me\aa\data\ural_plachta_ana_co.paa"};
			};
			class Iraqi
			{
				displayName = "Iraqi Camo";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_factions_me\ia\data\ural_kabina_iraq_co.paa","po_factions_me\ia\data\ural_plachta_iraq_co.paa"};
			};
		};
	};
	class RHS_Ural_Open_MSV_01: RHS_Ural_MSV_Base
	{
		class textureSources
		{
			class Afghani
			{
				displayName = "Afghani Camo";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_factions_me\aa\data\ural_kabina_ana_co.paa","po_factions_me\aa\data\ural_open_ana_co.paa"};
			};
			class Iraqi
			{
				displayName = "Iraqi Camo";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_factions_me\ia\data\ural_kabina_iraq_co.paa","po_factions_me\ia\data\ural_open_iraq_co.paa"};
			};
		};
	};
	class RHS_BM21_MSV_01: RHS_Ural_BaseTurret
	{
		class textureSources
		{
			class LOP_IA
			{
				displayName = "Iraqi";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_me\ia\data\ural_kabina_ia_co.paa","\po_factions_me\ia\data\ural_bm21_ia_co.paa"};
			};
			class LOP_IA_C
			{
				displayName = "Iraqi (Camo)";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_me\ia\data\ural_kabina_iraq_co.paa","\po_factions_me\ia\data\ural_bm21_iraq_co.paa"};
			};
		};
	};
	class rhsusf_m998_w_4dr_fulltop;
	class rhsusf_m998_w_2dr;
	class rhsusf_m998_w_4dr: rhsusf_m998_w_2dr
	{
		class textureSources
		{
			class LOP_AA
			{
				displayName = "Afghani";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_factions_me\aa\data\m998_exterior_ana_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa","po_factions_me\aa\data\m998_mainbody_ana_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"};
			};
			class LOP_IA
			{
				displayName = "Iraqi";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_factions_me\ia\data\m998_exterior_ia_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa","po_factions_me\ia\data\m998_mainbody_ia_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"};
			};
			class LOP_ISTS
			{
				displayName = "ISTS";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_factions_me\ists\data\m998_exterior_b_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa","po_factions_me\ists\data\A2_parts_b_co.paa","po_factions_me\ists\data\wheel_wranglermt_b_co.paa","po_factions_me\ists\data\m998_mainbody_b_co.paa","po_factions_me\ists\data\gratting_b_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa","po_factions_me\ists\data\m998_2drcargo_b_co.paa","po_factions_me\ists\data\tile_exmetal_b_co.paa"};
			};
		};
	};
	class rhsusf_m1025_w: rhsusf_m998_w_4dr_fulltop
	{
		class textureSources
		{
			class LOP_AA
			{
				displayName = "Afghani";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_factions_me\aa\data\m998_exterior_ana_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa","po_factions_me\aa\data\m998_mainbody_ana_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa","po_factions_me\aa\data\m1025_ana_co.paa","",""};
			};
			class LOP_IA
			{
				displayName = "Iraqi";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_me\ia\data\m998_exterior_ia_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa","\po_factions_me\ia\data\m998_mainbody_ia_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa","\po_factions_me\ia\data\m1025_ia_co.paa","",""};
			};
			class LOP_ISTS
			{
				displayName = "ISTS";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_factions_me\ists\data\m998_exterior_b_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa","po_factions_me\ists\data\A2_parts_b_co.paa","po_factions_me\ists\data\wheel_wranglermt_b_co.paa","po_factions_me\ists\data\m998_mainbody_b_co.paa","po_factions_me\ists\data\gratting_b_co.paa","po_factions_me\ists\data\tile_exmetal_b_co.paa","po_factions_me\ists\data\m1025_b_co.paa","",""};
			};
		};
	};
	class rhsusf_m1025_w_m2: rhsusf_m1025_w
	{
		class textureSources
		{
			class LOP_AA
			{
				displayName = "Afghani";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_factions_me\aa\data\m998_exterior_ana_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa","po_factions_me\aa\data\m998_mainbody_ana_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa","po_factions_me\aa\data\m1025_ana_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa","",""};
			};
			class LOP_IA
			{
				displayName = "Iraqi";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"\po_factions_me\ia\data\m998_exterior_ia_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa","\po_factions_me\ia\data\m998_mainbody_ia_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa","\po_factions_me\ia\data\m1025_ia_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa","",""};
			};
			class LOP_ISTS
			{
				displayName = "ISTS";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_factions_me\ists\data\m998_exterior_b_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa","po_factions_me\ists\data\A2_parts_b_co.paa","po_factions_me\ists\data\wheel_wranglermt_b_co.paa","po_factions_me\ists\data\m998_mainbody_b_co.paa","po_factions_me\ists\data\gratting_b_co.paa","po_factions_me\ists\data\tile_exmetal_b_co.paa","po_factions_me\ists\data\m1025_b_co.paa","po_factions_me\ists\data\mk64mount_b_co.paa","",""};
			};
		};
	};
	class Van_01_base_F;
	class Van_01_transport_base_F: Van_01_base_F
	{
		class textureSources
		{
			class LOP_Blue
			{
				displayName = "Blue";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_vehicles\data\camo\van\van_01_ext_blue_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};
			};
			class LOP_CDF
			{
				displayName = "CDF";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_vehicles\data\camo\van\van_01_ext_cdf_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};
			};
			class LOP_OLV
			{
				displayName = "Olive";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_vehicles\data\camo\van\van_01_ext_olv_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};
			};
			class LOP_RED
			{
				displayName = "Red";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_vehicles\data\camo\van\van_01_ext_red_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};
			};
			class LOP_YEL
			{
				displayName = "Yellow";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {"po_vehicles\data\camo\van\van_01_ext_yell_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};
			};
			class LOP_black
			{
				displayName = "Black";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};
			};
			class LOP_white
			{
				displayName = "White";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};
			};
		};
		textureList[] = {"LOP_Blue",1,"LOP_OLV",1,"LOP_RED",1,"LOP_YEL",1,"LOP_black",1,"LOP_Red",1,"LOP_white",1};
	};
	class LOP_T72_base: MBT_02_base_F
	{
		AGM_FCSEnabled = 0;
		vehicleClass = "Armored";
		displayName = "T-72";
		accuracy = 0.3;
		author = "reyhard (BIS port)";
		commanderCanSee = "1+2+4+8+16+31";
		gunnerCanSee = "2+4+8+16";
		drivercompartments = "Compartment1";
		castdrivershadow = 0;
		attenuationEffectType = "TankAttenuation";
		insideSoundCoef = 0.9;
		forceHideDriver = 0;
		driverForceOptics = 1;
		driverAction = "T72_DriverOut";
		driverInAction = "T72_Driver";
		LODTurnedOut = 1;
		driverDoor = "hatchD";
		destrType = "DestructDefault";
		mapSize = 9.5;
		driveOnComponent[] = {};
		cost = 1500000;
		damageResistance = 0.02;
		crewVulnerable = 0;
		armor = 500;
		armorStructural = 1000;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 0.8;
				material = -1;
				name = "telo";
				visual = "zbytek";
				passThrough = 0;
				minimalHit = 0.14;
				explosionShielding = 0.009;
				radius = 0.25;
			};
			class HitEngine: HitEngine
			{
				armor = 1;
				material = -1;
				name = "motor";
				passThrough = 0;
				minimalHit = 0.24;
				explosionShielding = 0.009;
				radius = 0.33;
			};
			class HitLTrack: HitLTrack
			{
				armor = 0.5;
				material = -1;
				name = "pas_L";
				passThrough = 0;
				minimalHit = 0.25;
				explosionShielding = 0.5;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack
			{
				armor = 0.5;
				material = -1;
				name = "pas_P";
				passThrough = 0;
				minimalHit = 0.25;
				explosionShielding = 0.5;
				radius = 0.3;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction = "PO_T72_GunnerOut";
				gunnerInAction = "PO_T72_Gunner";
				gunnerDoor = "hatchG";
				soundServo[] = {"po_vehicles\data\sounds\gun_elevate2",0.01,1,10};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						LODTurnedOut = 1100;
						gunnerAction = "PO_T72_CommanderOut";
						gunnerInAction = "PO_T72_Commander";
						body = "obsTurret";
						gun = "obsGun";
						gunnerDoor = "hatchC";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;
						stabilizedInAxes = "StabilizedInAxesBoth";
						soundServo[] = {"\po_vehicles\data\sounds\gun_elevate2",0.0177828,1,10};
						minElev = -25;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						memoryPointGun = "usti hlavne3";
						gunBeg = "usti hlavne3";
						gunEnd = "konec hlavne3";
						weapons[] = {"RDS_DSHKMT"};
						magazines[] = {"RDS_150Rnd_127x107_DSHKM","RDS_150Rnd_127x107_DSHKM","RDS_150Rnd_127x107_DSHKM","RDS_150Rnd_127x107_DSHKM"};
						selectionFireAnim = "zasleh3";
						turretInfoType = "RscWeaponT72_Comm";
						discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex = 2;
						memoryPointGunnerOutOptics = "commander_weapon_view";
						memoryPointGunnerOptics = "commanderview";
						gunnerOutForceOptics = 0;
						gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
						gunnerHasFlares = 1;
						class ViewOptics: ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.101;
							minFov = 0.102;
							maxFov = 0.102;
							visionMode[] = {"Normal","NVG"};
						};
						class OpticsIn
						{
							class Wide: ViewOptics
							{
								gunnerOpticsModel = "\po_vehicles\t55\optika_T72_commander";
								gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
							};
							class Periscope: ViewOptics
							{
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initFov = 0.26;
								minFov = 0.26;
								maxFov = 0.26;
								visionMode[] = {"Normal"};
								gunnerOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_f";
								gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
							};
						};
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						startEngine = 0;
						viewGunnerInExternal = 1;
						outGunnerMayFire = 1;
						inGunnerMayFire = 0;
						class HitPoints
						{
							class HitTurret
							{
								armor = 0.3;
								material = -1;
								name = "vezVelitele";
								visual = "vezVelitele";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.001;
								radius = 0.25;
							};
							class HitGun
							{
								armor = 0.3;
								material = -1;
								name = "zbranVelitele";
								visual = "zbranVelitele";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.001;
								radius = 0.25;
							};
						};
					};
				};
				LODTurnedOut = 1100;
				maxHorizontalRotSpeed = 0.32;
				maxVerticalRotSpeed = 0.1;
				memoryPointGun = "usti hlavne2";
				selectionFireAnim = "zasleh2";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				minElev = -5;
				maxElev = 20;
				initElev = 10;
				turretInfoType = "RscWeaponT72_FCS";
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
				memoryPointGunnerOptics = "gunnerview";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				gunnerForceOptics = 1;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.076666;
						minFov = 0.0766666;
						maxFov = 0.0766666;
						visionMode[] = {"Normal"};
						gunnerOpticsModel = "\po_vehicles\t55\NWD_tank_gunner_noreticle";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
					};
					class Periscope: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466666;
						minFov = 0.466666;
						maxFov = 0.466666;
						visionMode[] = {"Normal"};
						gunnerOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_f";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
					};
					class IR: Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.1;
						minFov = 0.1;
						maxFov = 0.1;
						visionMode[] = {"NVG"};
						gunnerOpticsModel = "\po_vehicles\t55\optika_T72_Gunner_IR";
					};
				};
				forceHideGunner = 0;
				inGunnerMayFire = 1;
				viewGunnerInExternal = 1;
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.7;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.15;
						explosionShielding = 0.009;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 0.6;
						material = -1;
						name = "zbran";
						visual = "";
						passThrough = 0;
						minimalHit = 0.15;
						explosionShielding = 0.001;
						radius = 0.25;
					};
				};
			};
		};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","primary_sight_laser_mark"};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "RDS_DSHKMT";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "RDS_DSHKMT";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "RDS_DSHKMT";
			};
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "RDS_D81";
			};
			class muzzle_rot_coax
			{
				source = "ammorandom";
				weapon = "RDS_PKT";
			};
			class muzzle_rot_HMG
			{
				source = "ammorandom";
				weapon = "RDS_DSHKMT";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "RDS_D81";
			};
			class hidePrimarySight
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class gunNotReady
			{
				source = "reload";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class sightRange
			{
				source = "user";
				animPeriod = 0.0005;
				initPhase = 0;
			};
			class sightElevationAPFSDS
			{
				source = "user";
				animPeriod = 0.4;
				initPhase = 0;
			};
			class sightElevationHEAT
			{
				source = "user";
				animPeriod = 0.065;
				initPhase = 0;
			};
			class sightElevationHEF
			{
				source = "user";
				animPeriod = 0.08;
				initPhase = 0;
			};
			class comm_g
			{
				source = "user";
				animPeriod = 22.5;
				initPhase = 0;
			};
			class TC_Override
			{
				source = "user";
				animPeriod = 6.25;
				initPhase = 0;
			};
			class TC_Override2: TC_Override{};
			class HatchC
			{
				source = "door";
				animPeriod = 0.8;
			};
			class HatchG: HatchC{};
			class HatchD: HatchC{};
		};
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","NVG"};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustEffectTankBack";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {1900,1300,950};
				ambient[] = {5,5,5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class Right2: Right
			{
				position = "light_R_flare";
				useFlare = 1;
			};
			class Left2: Left
			{
				position = "light_L_flare";
				useFlare = 1;
			};
			class GunnerLight: Left2
			{
				position = "gunner light";
				direction = "konec gunner light";
				hitpoint = "gunner light";
				selection = "gunner light";
				ambient[] = {0.1,0.1,0.1,0.1};
			};
		};
		aggregateReflectors[] = {{"Left","Right","Left2","Right2"}};
		class EventHandlers: EventHandlers
		{
			hitpart = "_this call SLX_XEH_EH_HitPart;_this call lop_fnc_hitHandler";
		};
	};
};
