////////////////////////////////////////////////////////////////////
//DeRap: po_factions_eu\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sat Jun 29 20:55:42 2019 : 'file' last modified on Sat Nov 04 13:47:24 2017
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class po_factions_eu
	{
		units[] = {"LOP_UKR_Infantry_model_base","LOP_UKR_Infantry_model_pilot","LOP_UKR_Infantry_model_df15","LOP_UKR_Infantry_model_Digit","LOP_UKR_Infantry_model_Flec","LOP_UKR_Infantry_model_Multicam","LOP_UKR_Infantry_model_TTsKO","LOP_UKR_Infantry_model_IzlomTTsKO","LOP_UKR_Infantry_model_TanMTP","LOP_UKR_Infantry_model_DPMWDPMD","LOP_UKR_Infantry_Rifleman","LOP_UKR_Infantry_LAT","LOP_UKR_Infantry_RShG2","LOP_UKR_Infantry_Grenadier","LOP_UKR_Infantry_Light","LOP_UKR_Infantry_AR","LOP_UKR_Infantry_AR_Asst","LOP_UKR_Infantry_RPG","LOP_UKR_Infantry_RPG_Asst","LOP_UKR_Infantry_Marksman","LOP_UKR_Infantry_sergeant","LOP_UKR_Infantry_junior_sergeant","LOP_UKR_Infantry_officer_armored","LOP_UKR_Infantry_officer","LOP_UKR_Infantry_AA","LOP_UKR_Infantry_engineer","LOP_UKR_Infantry_medic","LOP_UKR_Infantry_crew","LOP_UKR_Infantry_pilot","LOP_UKR_Infantry_JetPilot","LOP_UKR_KAMAZ_Covered","LOP_UKR_KAMAZ_Transport","LOP_UKR_KAMAZ_Repair","LOP_UKR_KAMAZ_Fuel","LOP_UKR_KAMAZ_Ammo","LOP_UKR_KAMAZ_Medical","LOP_UKR_BM21","LOP_UKR_Ural","LOP_UKR_Ural_open","LOP_UKR_UAZ","LOP_UKR_UAZ_Open","LOP_UKR_UAZ_DshKM","LOP_UKR_UAZ_AGS","LOP_UKR_UAZ_SPG","LOP_UKR_T72BA","LOP_UKR_T72BB","LOP_UKR_T72BC","LOP_UKR_BMD1","LOP_UKR_BMD2","LOP_UKR_BMP2D","LOP_UKR_BMP2","LOP_UKR_BMP1","LOP_UKR_BMP1D","LOP_UKR_ZSU234","LOP_UKR_BTR60","LOP_UKR_BTR70","LOP_UKR_BTR80","LOP_UKR_Mi24V_UPK23","LOP_UKR_Mi24V_FAB","LOP_UKR_Mi24V_AT","LOP_UKR_Mi8MT_Cargo","LOP_UKR_Mi8MTV3_FAB","LOP_UKR_Mi8MTV3_UPK23","LOP_UKR_SU25SM","LOP_UKR_NSV_TriPod","LOP_UKR_Igla_AA_pod","LOP_UKR_AGS30_TriPod","LOP_UKR_Kord","LOP_UKR_Kord_High","LOP_UKR_Static_SPG9","LOP_UKR_Static_DSHKM","LOP_UKR_Static_D30","LOP_UKR_Static_AT4","LOP_UKR_ZU23","LOP_US_Infantry_Rifleman","LOP_US_Infantry_Rifleman_2","LOP_US_Infantry_Rifleman_3","LOP_US_Infantry_Rifleman_4","LOP_US_Infantry_GL","LOP_US_Infantry_GL_2","LOP_US_Infantry_TL","LOP_US_Infantry_SL","LOP_US_Infantry_Officer","LOP_US_Infantry_AT","LOP_US_Infantry_AT_Asst","LOP_US_Infantry_MG","LOP_US_Infantry_MG_2","LOP_US_Infantry_MG_Asst","LOP_US_Infantry_Marksman","LOP_US_Infantry_AA","LOP_US_Infantry_Crewman","LOP_US_Infantry_Corpsman","LOP_US_Infantry_Engineer","LOP_US_Kitbag_Med","LOP_US_Sidor_SVD","LOP_US_AA_Pack","LOP_US_RPG_Pack","LOP_US_Fieldpack_PKM","LOP_US_BM21","LOP_US_Ural","LOP_US_Ural_open","LOP_US_UAZ","LOP_US_UAZ_Open","LOP_US_UAZ_DshKM","LOP_US_UAZ_AGS","LOP_US_UAZ_SPG","LOP_US_T72BA","LOP_US_T72BB","LOP_US_T72BC","LOP_US_BMP2D","LOP_US_BMP2","LOP_US_BMP1","LOP_US_BMP1D","LOP_US_ZSU234","LOP_US_BTR60","LOP_US_BTR70","LOP_US_NSV_TriPod","LOP_US_Igla_AA_pod","LOP_US_AGS30_TriPod","LOP_US_Kord","LOP_US_Kord_High","LOP_US_ZU23","LOP_CHR_Civ_Villager_01","LOP_CHR_Civ_Villager_02","LOP_CHR_Civ_Villager_03","LOP_CHR_Civ_Villager_04","LOP_CHR_Civ_Woodlander_01","LOP_CHR_Civ_Woodlander_02","LOP_CHR_Civ_Woodlander_03","LOP_CHR_Civ_Woodlander_04","LOP_CHR_Civ_Worker_01","LOP_CHR_Civ_Worker_02","LOP_CHR_Civ_Worker_03","LOP_CHR_Civ_Worker_04","LOP_CHR_Civ_Rocker_01","LOP_CHR_Civ_Rocker_02","LOP_CHR_Civ_Rocker_03","LOP_CHR_Civ_Rocker_04","LOP_CHR_Civ_Profiteer_01","LOP_CHR_Civ_Profiteer_02","LOP_CHR_Civ_Profiteer_03","LOP_CHR_Civ_Profiteer_04","LOP_CHR_Civ_Priest_01","LOP_CHR_Civ_Doctor_01","LOP_CHR_Civ_SchoolTeacher","LOP_CHR_Civ_Assistant","LOP_CHR_Civ_Policeman_01","LOP_CHR_Civ_Functionary_01","LOP_CHR_Civ_Functionary_02","LOP_CHR_Civ_Citizen_01","LOP_CHR_Civ_Citizen_02","LOP_CHR_Civ_Citizen_03","LOP_CHR_Civ_Citizen_04","LOP_CHR_Civ_Citizen_05","LOP_CHR_Civ_Citizen_06","LOP_CHR_Civ_Citizen_07","LOP_CHR_Civ_Woodlander_05","LOP_CHR_Civ_Woodlander_06","LOP_CHR_Civ_Worker_05","LOP_CHR_Civ_Worker_06","LOP_CHR_Civ_Worker_07","LOP_CHR_Civ_Random","LOP_CHR_Civ_Hatchback","LOP_CHR_Civ_Ural","LOP_CHR_Civ_Ural_open","LOP_CHR_Civ_UAZ","LOP_CHR_Civ_UAZ_Open","LOP_UVF_Infantry_Rifleman","LOP_UVF_Infantry_Rifleman_lite","LOP_UVF_Infantry_SL","LOP_UVF_Infantry_TL","LOP_UVF_Infantry_AR","LOP_UVF_Infantry_Corpsman","LOP_UVF_Infantry_IED","LOP_UVF_Infantry_GL","LOP_UVF_Infantry_Marksman","LOP_UVF_Infantry_AT","LOP_UVF_Infantry_AR_Asst","LOP_UVF_Infantry_Driver","LOP_UVF_Infantry_model_BL","LOP_UVF_Infantry_model_BL_OSW","LOP_UVF_Infantry_model_COY_OSW","LOP_UVF_Infantry_model_GREY_GSW","LOP_UVF_Igla_AA_pod","LOP_UVF_AGS30_TriPod","LOP_UVF_Static_SPG9","LOP_UVF_Static_DSHKM","LOP_IRA_Infantry_Rifleman","LOP_IRA_Infantry_Rifleman_lite","LOP_IRA_Infantry_Rifleman_PM63","LOP_IRA_Infantry_SL","LOP_IRA_Infantry_TL","LOP_IRA_Infantry_AR","LOP_IRA_Infantry_Corpsman","LOP_IRA_Infantry_IED","LOP_IRA_Infantry_GL","LOP_IRA_Infantry_Marksman","LOP_IRA_Infantry_AT","LOP_IRA_Infantry_AR_Asst","LOP_IRA_Infantry_Driver","LOP_IRA_Infantry_model_DDPM","LOP_IRA_Infantry_model_DPM_BSW","LOP_IRA_Infantry_model_DPM","LOP_IRA_Infantry_model_DPM_GSW","LOP_IRA_Infantry_model_DPM_TSW","LOP_IRA_Infantry_model_DPM_GNSW","LOP_IRA_Infantry_model_GRK_BLK","LOP_IRA_Infantry_model_GRK_BLUE","LOP_IRA_Infantry_model_GRK_OLV","LOP_IRA_Infantry_model_GRK_DPM","LOP_IRA_Infantry_model_HTR_BLK","LOP_IRA_Infantry_model_HTR_DPM","LOP_IRA_Infantry_model_HTR_DPM_J","LOP_IRA_Igla_AA_pod","LOP_IRA_AGS30_TriPod","LOP_IRA_Static_SPG9","LOP_IRA_Static_DSHKM"};
		weapons[] = {"LOP_U_UKR_Fatigue_DF15","LOP_U_UKR_Fatigue_Digit","LOP_U_UKR_Fatigue_Flec","LOP_U_UKR_Fatigue_Multicam","LOP_U_UKR_Fatigue_TTsKO","LOP_U_UKR_Fatigue_IzlomTTsKO","LOP_U_UKR_Fatigue_TanMTP","LOP_U_UKR_Fatigue_DPMWDPMD","LOP_H_Fieldcap_UKR","LOP_H_6B27M_Digit","LOP_H_6B27M_ess_Digit","LOP_H_6B27M_Izlom","LOP_H_6B27M_ess_Izlom","LOP_H_6B27M_MTP","LOP_H_6B27M_ess_MTP","LOP_H_6B27M_UKR","LOP_H_6B27M_ess_UKR","LOP_H_6B27M_wz93","LOP_H_6B27M_ess_wz93","LOP_H_Beanie_digit","LOP_H_Beanie_dpmw","LOP_H_Beanie_flec","LOP_H_Beanie_marpat","LOP_H_Beanie_mtp","LOP_H_Beanie_multicam","LOP_H_Beanie_tan","LOP_H_Beanie_m81","LOP_V_6B23_TAN","LOP_V_6B23_TTKO","LOP_V_6B23_6Sh92_TAN_ACU","LOP_V_6B23_6Sh92_TAN_DMPi","LOP_V_6B23_6Sh92_TTKO_OLV","LOP_V_6B23_6Sh92_TTKO","LOP_V_6B23_CrewOfficer_TAN","LOP_V_6B23_CrewOfficer_TTKO","LOP_V_6B23_Rifleman_TAN","LOP_V_6B23_Rifleman_TTKO","LOP_V_6B23_Medic_TAN","LOP_V_6B23_Medic_TTKO","LOP_V_6B23_sniper","LOP_V_6B23_headset_mapcase","LOP_U_US_Fatigue_01","LOP_U_US_Fatigue_02","LOP_U_US_Fatigue_03","LOP_U_US_Fatigue_04","LOP_U_US_Fatigue_05","LOP_U_US_Fatigue_06","LOP_U_US_Fatigue_07","LOP_U_US_Fatigue_08","LOP_U_US_Fatigue_09","LOP_U_US_Fatigue_10","LOP_U_US_Fatigue_11","LOP_U_US_Fatigue_12","LOP_U_US_Fatigue_13","LOP_U_US_Fatigue_14","LOP_H_6B27M_Flora","LOP_H_6B27M_ess_Flora","LOP_H_6B27M_Skol","LOP_H_6B27M_ess_Skol","LOP_U_CHR_Villager_01","LOP_U_CHR_Profiteer_01","LOP_U_CHR_Rocker_01","LOP_U_CHR_Woodlander_01","LOP_U_CHR_Worker_01","LOP_U_CHR_Functionary_01","LOP_U_CHR_Policeman_01","LOP_U_CHR_Priest_01","LOP_U_CHR_Doctor_01","LOP_U_CHR_Assistant_01","LOP_U_CHR_SchoolTeacher_01","LOP_U_CHR_Functionary_02","LOP_U_CHR_Profiteer_02","LOP_U_CHR_Profiteer_03","LOP_U_CHR_Profiteer_04","LOP_U_CHR_Villager_02","LOP_U_CHR_Villager_03","LOP_U_CHR_Villager_04","LOP_U_CHR_Woodlander_02","LOP_U_CHR_Woodlander_03","LOP_U_CHR_Woodlander_04","LOP_U_CHR_Worker_02","LOP_U_CHR_Worker_03","LOP_U_CHR_Worker_04","LOP_U_CHR_Rocker_02","LOP_U_CHR_Rocker_03","LOP_U_CHR_Rocker_04","LOP_U_CHR_Citizen_01","LOP_U_CHR_Citizen_02","LOP_U_CHR_Citizen_03","LOP_U_CHR_Citizen_04","LOP_U_CHR_Citizen_05","LOP_U_CHR_Citizen_06","LOP_U_CHR_Citizen_07","LOP_U_CHR_Woodlander_05","LOP_U_CHR_Woodlander_06","LOP_U_CHR_Worker_05","LOP_U_CHR_Worker_06","LOP_U_CHR_Worker_07","LOP_H_Ushanka","LOP_H_Policeman_cap","LOP_H_Villager_cap","LOP_H_Worker_cap","LOP_U_UVF_Fatigue_BL","LOP_U_UVF_Fatigue_BL_OSW","LOP_U_UVF_Fatigue_COY_OSW","LOP_U_UVF_Fatigue_GREY_GSW","LOP_U_IRA_Fatigue_DPM_BSW","LOP_U_IRA_Fatigue_DPM","LOP_U_IRA_Fatigue_DPM_GSW","LOP_U_IRA_Fatigue_DPM_TSW","LOP_U_IRA_Fatigue_DPM_GNSW","LOP_U_IRA_Fatigue_GRK_BLK","LOP_U_IRA_Fatigue_GRK_BLUE","LOP_U_IRA_Fatigue_GRK_OLV","LOP_U_IRA_Fatigue_GRK_DPM","LOP_U_IRA_Fatigue_HTR_BLK","LOP_U_IRA_Fatigue_HTR_DPM","LOP_U_IRA_Fatigue_HTR_DPM_J"};
		requiredVersion = 1.56;
		requiredAddons[] = {"po_main","A3_Characters_F","rhs_c_bmp","rhs_c_bmd","rhs_c_t72","rhs_c_troops","rhs_c_btr","rhs_c_weapons","rhs_c_a2port_air","rhs_c_a2port_car","rhs_c_a2port_armor","rhs_cti_insurgents","rhs_c_heavyweapons","rhsusf_c_troops","rhsusf_c_weapons","rhsusf_c_m1a1","rhsusf_c_m113","RHS_US_A2_AirImport","rhsusf_c_hmmwv"};
		author = "Leight, Keeway";
		authorUrl = "http://www.project-opfor.eu/";
	};
};
class DefaultEventhandlers;
class WeaponCloudsMGun;
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class rhs_6b27m;
	class rhs_6b27m_digi_ess;
	class rhs_fieldcap;
	class rhs_beanie;
	class Vest_Camo_Base;
	class rhs_6b23;
	class rhs_6b23_6sh92;
	class rhs_6sh92_radio;
	class rhs_6sh92_vog;
	class rhs_6sh92;
	class rhs_6b23_crewofficer;
	class rhs_6b23_rifleman;
	class rhs_6b23_medic;
	class rhs_6b23_digi_6sh92_headset_mapcase;
	class rhs_6b23_sniper;
	class LOP_U_UKR_Fatigue_DF15: Uniform_Base
	{
		_generalMacro = "LOP_U_UKR_Fatigue_DF15";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "DF-15-2 (Ukraine)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_df15_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_UKR_Infantry_model_df15";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class LOP_U_UKR_Fatigue_Digit: Uniform_Base
	{
		_generalMacro = "LOP_U_UKR_Fatigue_Digit";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "M88 (Ukraine/Digital)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_UKR_Infantry_model_digit";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class LOP_U_UKR_Fatigue_Flec: Uniform_Base
	{
		_generalMacro = "LOP_U_UKR_Fatigue_Flec";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "M88 (Flectarn)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_UKR_Infantry_model_Flec";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class LOP_U_UKR_Fatigue_Multicam: Uniform_Base
	{
		_generalMacro = "LOP_U_UKR_Fatigue_Multicam";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Combat Uniform (Ukraine/Multicam)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_UKR_Infantry_model_Multicam";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class LOP_U_UKR_Fatigue_TTsKO: Uniform_Base
	{
		_generalMacro = "LOP_U_UKR_Fatigue_TTsKO";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "M88 (Ukraine/TTsKO)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_UKR_Infantry_model_TTsKO";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class LOP_U_UKR_Fatigue_IzlomTTsKO: Uniform_Base
	{
		_generalMacro = "LOP_U_UKR_Fatigue_IzlomTTsKO";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "M88 (Ukraine/TTsKO + Izlom)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_UKR_Infantry_model_IzlomTTsKO";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class LOP_U_UKR_Fatigue_TanMTP: Uniform_Base
	{
		_generalMacro = "LOP_U_UKR_Fatigue_TanMTP";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "M88 (Ukraine/Tan + MTP)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_UKR_Infantry_model_TanMTP";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class LOP_U_UKR_Fatigue_DPMWDPMD: Uniform_Base
	{
		_generalMacro = "LOP_U_UKR_Fatigue_DPMWDPMD";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "M88 (Ukraine/DPMW + DPMD)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_UKR_Infantry_model_DPMWDPMD";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class LOP_H_Fieldcap_UKR: rhs_fieldcap
	{
		_generalMacro = "LOP_H_Fieldcap_UKR";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]Field Cap TTsKO";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b27_helmet_ukr_co.paa"};
	};
	class LOP_H_6B27M_Digit: rhs_6b27m
	{
		_generalMacro = "LOP_H_6B27M_Digit";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B27M Digital";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b27_helmet_digital_co.paa"};
	};
	class LOP_H_6B27M_ess_Digit: rhs_6b27m_digi_ess
	{
		_generalMacro = "LOP_H_6B27M_ess_Digit";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B27M Digital (ESS)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b27_helmet_digital_co.paa"};
	};
	class LOP_H_6B27M_Izlom: rhs_6b27m
	{
		_generalMacro = "LOP_H_6B27M_Izlom";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B27M Izlom";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b27_helmet_izlom_co.paa"};
	};
	class LOP_H_6B27M_ess_Izlom: rhs_6b27m_digi_ess
	{
		_generalMacro = "LOP_H_6B27M_ess_Izlom";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B27M Izlom (ESS)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b27_helmet_izlom_co.paa"};
	};
	class LOP_H_6B27M_MTP: rhs_6b27m
	{
		_generalMacro = "LOP_H_6B27M_MTP";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B27M Multicam";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b27_helmet_MTP_co.paa"};
	};
	class LOP_H_6B27M_ess_MTP: rhs_6b27m_digi_ess
	{
		_generalMacro = "LOP_H_6B27M_ess_MTP";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B27M Multicam (ESS)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b27_helmet_MTP_co.paa"};
	};
	class LOP_H_6B27M_UKR: rhs_6b27m
	{
		_generalMacro = "LOP_H_6B27M_UKR";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B27M TTsKO";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b27_helmet_UKR_co.paa"};
	};
	class LOP_H_6B27M_ess_UKR: rhs_6b27m_digi_ess
	{
		_generalMacro = "LOP_H_6B27M_ess_UKR";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B27M TTsKO (ESS)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b27_helmet_UKR_co.paa"};
	};
	class LOP_H_6B27M_wz93: rhs_6b27m
	{
		_generalMacro = "LOP_H_6B27M_wz93";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B27M Wz.93";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b27_helmet_wz93_co.paa"};
	};
	class LOP_H_6B27M_ess_wz93: rhs_6b27m_digi_ess
	{
		_generalMacro = "LOP_H_6B27M_ess_wz93";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B27M Wz.93 (ESS)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b27_helmet_wz93_co.paa"};
	};
	class LOP_H_Beanie_digit: rhs_beanie
	{
		_generalMacro = "LOP_H_Beanie_digit";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]Beanie (Digital)";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\beanie_digital_co.paa"};
	};
	class LOP_H_Beanie_dpmw: rhs_beanie
	{
		_generalMacro = "LOP_H_Beanie_dpmw";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]Beanie (DPM)";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\beanie_dpmw_co.paa"};
	};
	class LOP_H_Beanie_flec: rhs_beanie
	{
		_generalMacro = "LOP_H_Beanie_flec";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]Beanie (Flectarn)";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\beanie_flectarnwl_co.paa"};
	};
	class LOP_H_Beanie_marpat: rhs_beanie
	{
		_generalMacro = "LOP_H_Beanie_marpat";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]Beanie (Marpat)";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\beanie_marpatw_co.paa"};
	};
	class LOP_H_Beanie_mtp: rhs_beanie
	{
		_generalMacro = "LOP_H_Beanie_mtp";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]Beanie (Multi Terrain Pattern)";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\beanie_mtp_co.paa"};
	};
	class LOP_H_Beanie_multicam: rhs_beanie
	{
		_generalMacro = "LOP_H_Beanie_multicam";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]Beanie (Multicam)";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\beanie_multicam_co.paa"};
	};
	class LOP_H_Beanie_tan: rhs_beanie
	{
		_generalMacro = "LOP_H_Beanie_tan";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]Beanie (Tan)";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\beanie_tan_co.paa"};
	};
	class LOP_H_Beanie_m81: rhs_beanie
	{
		_generalMacro = "LOP_H_Beanie_m81";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]Beanie (M81)";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\beanie_m81_co.paa"};
	};
	class LOP_V_6B23_TAN: rhs_6b23
	{
		_generalMacro = "LOP_V_6B23_TAN";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B23 Tan";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b23_tan_co.paa","po_factions_eu\ukr\data\gearpack1_6sh92_dDPMi_co.paa"};
	};
	class LOP_V_6B23_TTKO: LOP_V_6B23_TAN
	{
		_generalMacro = "LOP_V_6B23_TTKO";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B23 TTKO";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b23_ttko_co.paa","po_factions_eu\ukr\data\gearpack1_6sh92_TTskoi_co.paa"};
	};
	class LOP_V_6B23_6Sh92_TAN_ACU: rhs_6b23_6sh92
	{
		_generalMacro = "LOP_V_6B23_6SH92_TAN_ACU";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B23 Tan (6Sh92 ACU)";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b23_tan_co.paa","po_factions_eu\ukr\data\gearpack1_6sh92_ACU_co.paa"};
	};
	class LOP_V_6B23_6Sh92_TAN_DMPi: rhs_6b23_6sh92
	{
		_generalMacro = "LOP_V_6B23_6SH92_TAN_DMPi";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B23 Tan (6Sh92 DPM)";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b23_tan_co.paa","po_factions_eu\ukr\data\gearpack1_6sh92_dDPMi_co.paa"};
	};
	class LOP_V_6B23_6Sh92_TTKO_OLV: LOP_V_6B23_6Sh92_TAN_ACU
	{
		_generalMacro = "LOP_V_6B23_6Sh92_TTKO_OLV";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B23 TTKO (6Sh92 Olive)";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b23_ttko_co.paa","po_factions_eu\ukr\data\gearpack1_6sh92_olv_co.paa"};
	};
	class LOP_V_6B23_6Sh92_TTKO: LOP_V_6B23_6Sh92_TAN_ACU
	{
		_generalMacro = "LOP_V_6B23_6Sh92_TTKO";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B23 TTKO (6Sh92)";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b23_ttko_co.paa","po_factions_eu\ukr\data\gearpack1_6sh92_TTskoi_co.paa"};
	};
	class LOP_V_6B23_CrewOfficer_TAN: rhs_6b23_crewofficer
	{
		_generalMacro = "LOP_V_6B23_CrewOfficer_TAN";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B23 Tan (Crew Officer)";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b23_tan_co.paa","po_factions_eu\ukr\data\gearpack1_6sh92_dDPMi_co.paa"};
	};
	class LOP_V_6B23_CrewOfficer_TTKO: LOP_V_6B23_CrewOfficer_TAN
	{
		_generalMacro = "LOP_V_6B23_CrewOfficer_TTKO";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B23 TTKO (Crew Officer)";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b23_ttko_co.paa","po_factions_eu\ukr\data\gearpack1_6sh92_TTskoi_co.paa"};
	};
	class LOP_V_6B23_Rifleman_TAN: rhs_6b23_rifleman
	{
		_generalMacro = "LOP_V_6B23_Rifleman_TAN";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B23 Tan (Rifleman)";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b23_tan_co.paa","po_factions_eu\ukr\data\gearpack1_6sh92_ACU_co.paa"};
	};
	class LOP_V_6B23_Rifleman_TTKO: LOP_V_6B23_Rifleman_TAN
	{
		_generalMacro = "LOP_V_6B23_Rifleman_TTKO";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B23 TTKO (Rifleman)";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b23_ttko_co.paa","po_factions_eu\ukr\data\gearpack1_6sh92_TTskoi_co.paa"};
	};
	class LOP_V_6B23_Medic_TAN: rhs_6b23_medic
	{
		_generalMacro = "[PO]LOP_V_6B23_Medic_TAN";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B23 Tan (Medic)";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b23_tan_co.paa","po_factions_eu\ukr\data\gearpack1_6sh92_dDPMi_co.paa"};
	};
	class LOP_V_6B23_Medic_TTKO: LOP_V_6B23_Medic_TAN
	{
		_generalMacro = "LOP_V_6B23_Rifleman_TTKO";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B23 TTKO (Medic)";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b23_ttko_co.paa","po_factions_eu\ukr\data\gearpack1_6sh92_olv_co.paa"};
	};
	class LOP_V_6B23_sniper: rhs_6b23_sniper
	{
		_generalMacro = "LOP_V_6B23_sniper";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B23 TTKO (Sniper)";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b23_ttko_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class LOP_V_6B23_headset_mapcase: rhs_6b23_digi_6sh92_headset_mapcase
	{
		_generalMacro = "LOP_V_6B23_headset_mapcase";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B23 TTKO (6Sh92/Headset/Mapcase)";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\6b23_ttko_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class LOP_U_US_Fatigue_01: Uniform_Base
	{
		_generalMacro = "LOP_U_US_Fatigue_01";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "M88 (Surpat)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_US_Infantry_Rifleman";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class LOP_U_US_Fatigue_02: Uniform_Base
	{
		_generalMacro = "LOP_U_US_Fatigue_02";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "M88 (Multicam)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_US_Infantry_TL";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class LOP_U_US_Fatigue_03: Uniform_Base
	{
		_generalMacro = "LOP_U_US_Fatigue_03";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "M88 (Olive)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_US_Infantry_SL";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class LOP_U_US_Fatigue_04: Uniform_Base
	{
		_generalMacro = "LOP_U_US_Fatigue_04";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "M88 (Partizan)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_US_Infantry_Corpsman";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class LOP_U_US_Fatigue_05: Uniform_Base
	{
		_generalMacro = "LOP_U_US_Fatigue_05";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "M88 (Spectre-S Skvo)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_US_Infantry_GL_2";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class LOP_U_US_Fatigue_06: Uniform_Base
	{
		_generalMacro = "LOP_U_US_Fatigue_06";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "M88 (Flora EMR&Lizard)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_US_Infantry_AT";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class LOP_U_US_Fatigue_07: Uniform_Base
	{
		_generalMacro = "LOP_U_US_Fatigue_07";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "M88 (Flora&Skol)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_US_Infantry_AT_Asst";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class LOP_U_US_Fatigue_08: Uniform_Base
	{
		_generalMacro = "LOP_U_US_Fatigue_08";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "M88 (Olive&Multicam)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_US_Infantry_AA";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class LOP_U_US_Fatigue_09: Uniform_Base
	{
		_generalMacro = "LOP_U_US_Fatigue_09";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "M88 (Olive&Flora EMR)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_US_Infantry_MG_Asst";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class LOP_U_US_Fatigue_10: Uniform_Base
	{
		_generalMacro = "LOP_U_US_Fatigue_10";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "M88 (Tan&Partizan)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_US_Infantry_MG";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class LOP_U_US_Fatigue_11: Uniform_Base
	{
		_generalMacro = "LOP_U_US_Fatigue_11";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "M88 (Partizan Mix)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_US_Infantry_Engineer";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class LOP_U_US_Fatigue_12: Uniform_Base
	{
		_generalMacro = "LOP_U_US_Fatigue_12";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "M88 (Izlom&Skol)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_US_Infantry_GL";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class LOP_U_US_Fatigue_13: Uniform_Base
	{
		_generalMacro = "LOP_U_US_Fatigue_13";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Gorka-R (KLMK)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_US_Infantry_Marksman";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class LOP_U_US_Fatigue_14: Uniform_Base
	{
		_generalMacro = "LOP_U_US_Fatigue_14";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Gorka-R (1st gen)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_US_Infantry_Rifleman_4";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class LOP_H_6B27M_Flora: rhs_6b27m
	{
		_generalMacro = "LOP_H_6B27M_Flora";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B27M Flora";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"po_factions_eu\us\data\6b27_flora_co.paa"};
	};
	class LOP_H_6B27M_ess_Flora: rhs_6b27m_digi_ess
	{
		_generalMacro = "LOP_H_6B27M_ess_Flora";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B27M Flora (ESS)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"po_factions_eu\us\data\6b27_flora_co.paa"};
	};
	class LOP_H_6B27M_Skol: rhs_6b27m
	{
		_generalMacro = "LOP_H_6B27M_Skol";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B27M Skol";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"po_factions_eu\us\data\6b27_skol_co.paa"};
	};
	class LOP_H_6B27M_ess_Skol: rhs_6b27m_digi_ess
	{
		_generalMacro = "LOP_H_6B27M_ess_Skol";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "[PO]6B27M Skol (ESS)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"po_factions_eu\us\data\6b27_skol_co.paa"};
	};
	class LOP_U_CHR_Villager_01: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Villager_01";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Peasant Blue Check)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Villager_01";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Profiteer_01: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Profiteer_01";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Profiteer Gray)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Profiteer_01";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Rocker_01: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Rocker_01";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Rocker Jeans)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Rocker_01";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Woodlander_01: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Woodlander_01";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Woodlander Blue)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Woodlander_01";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Worker_01: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Worker_01";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Worker Brown)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Worker_01";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Functionary_01: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Functionary_01";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Black Suit)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Functionary_01";
			containerClass = "Supply50";
			mass = 20;
		};
	};
	class LOP_U_CHR_Policeman_01: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Policeman_01";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Policeman Coveralls (EE)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Policeman_01";
			containerClass = "Supply50";
			mass = 20;
		};
	};
	class LOP_U_CHR_Priest_01: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Priest_01";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Priest)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Priest_01";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Doctor_01: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Doctor_01";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Doctor)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Doctor_01";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Assistant_01: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Doctor_01";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Assistant)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Assistant";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_SchoolTeacher_01: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Doctor_01";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (School Teacher)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_SchoolTeacher";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Functionary_02: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Functionary_01";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Brown Suit)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Functionary_02";
			containerClass = "Supply50";
			mass = 20;
		};
	};
	class LOP_U_CHR_Profiteer_02: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Profiteer_02";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Profiteer Blue)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Profiteer_02";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Profiteer_03: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Profiteer_03";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Profiteer Brown)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Profiteer_03";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Profiteer_04: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Profiteer_04";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Profiteer Red)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Profiteer_04";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Villager_02: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Villager_02";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Peasant Yellow Check)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Villager_02";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Villager_03: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Villager_03";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Peasant Green)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Villager_03";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Villager_04: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Villager_04";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Peasant Blue)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Villager_04";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Woodlander_02: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Woodlander_02";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Woodlander Brown)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Woodlander_02";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Woodlander_03: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Woodlander_03";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Woodlander Camo)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Woodlander_03";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Woodlander_04: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Woodlander_04";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Woodlander Green)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Woodlander_04";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Worker_02: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Worker_02";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Worker Green)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Worker_02";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Worker_03: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Worker_03";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Worker Blue)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Worker_03";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Worker_04: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Worker_04";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Worker Brown Check)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Worker_04";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Rocker_02: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Rocker_02";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Rocker Skull)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Rocker_02";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Rocker_03: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Rocker_03";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Rocker Anarchy)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Rocker_03";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Rocker_04: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Rocker_04";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Rocker Hippie)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Rocker_04";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Citizen_01: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Citizen_01";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Citizen Brown)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Citizen_01";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Citizen_02: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Citizen_02";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Citizen Gray)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Citizen_02";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Citizen_03: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Citizen_03";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Citizen Beige)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Citizen_03";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Citizen_04: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Citizen_04";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Citizen Blue)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Citizen_04";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Citizen_05: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Citizen_05";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Citizen M81)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Citizen_05";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Citizen_06: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Citizen_06";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Citizen VSR)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Citizen_06";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Citizen_07: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Citizen_07";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Citizen Camo)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Citizen_07";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Woodlander_05: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Woodlander_05";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Woodlander VSR)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Woodlander_05";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Woodlander_06: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Woodlander_06";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Woodlander VSR+M81)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Woodlander_06";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Worker_05: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Worker_05";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Worker M81 + VSR)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Worker_05";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Worker_06: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Worker_06";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Worker VSR)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Worker_06";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class LOP_U_CHR_Worker_07: Uniform_Base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_U_CHR_Worker_07";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Civilian Clothes (Worker KLMK)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_CHR_Civ_Worker_07";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class HeadgearItem;
	class LOP_H_Ushanka: ItemCore
	{
		_generalMacro = "LOP_H_Ushanka";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		weaponPoolAvailable = 1;
		displayName = "[PO]Ushanka cap";
		picture = "\po_main\data\ui\icon_h_lop_helmet_plain_ca.paa";
		model = "\po_factions_eu\civilians\ushanka_cap";
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\po_factions_eu\civilians\ushanka_cap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 1;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	class LOP_H_Policeman_cap: ItemCore
	{
		_generalMacro = "LOP_H_Policeman_cap";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		weaponPoolAvailable = 1;
		displayName = "[PO]Policeman cap";
		picture = "\po_main\data\ui\icon_h_lop_helmet_plain_ca.paa";
		model = "\po_factions_eu\civilians\policeman_cap";
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\po_factions_eu\civilians\policeman_cap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 1;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	class LOP_H_Villager_cap: ItemCore
	{
		_generalMacro = "LOP_H_Villager_cap";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		weaponPoolAvailable = 1;
		displayName = "[PO]Villager cap";
		picture = "\po_main\data\ui\icon_h_lop_helmet_plain_ca.paa";
		model = "\po_factions_eu\civilians\villager_cap";
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\po_factions_eu\civilians\villager_cap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 1;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	class LOP_H_Worker_cap: ItemCore
	{
		_generalMacro = "LOP_H_Worker_cap";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		weaponPoolAvailable = 1;
		displayName = "[PO]Worker cap";
		picture = "\po_main\data\ui\icon_h_lop_helmet_plain_ca.paa";
		model = "\po_factions_eu\civilians\worker_cap";
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\po_factions_eu\civilians\worker_cap";
			modelSides[] = {3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	class LOP_U_UVF_Fatigue_BL: Uniform_Base
	{
		_generalMacro = "LOP_U_UVF_Fatigue_BL";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Guerilla Coveralls (UVF/Black)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_UVF_Infantry_model_BL";
			containerClass = "Supply120";
			mass = 120;
		};
	};
	class LOP_U_UVF_Fatigue_BL_OSW: Uniform_Base
	{
		_generalMacro = "LOP_U_UVF_Fatigue_BL_OSW";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Guerilla Coveralls (UVF/Black+Olive)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_UVF_Infantry_model_BL_OSW";
			containerClass = "Supply120";
			mass = 120;
		};
	};
	class LOP_U_UVF_Fatigue_COY_OSW: Uniform_Base
	{
		_generalMacro = "LOP_U_UVF_Fatigue_COY_OSW";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Guerilla Coveralls (UVF/Coyote+Olive)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_UVF_Infantry_model_COY_OSW";
			containerClass = "Supply120";
			mass = 120;
		};
	};
	class LOP_U_UVF_Fatigue_GREY_GSW: Uniform_Base
	{
		_generalMacro = "LOP_U_UVF_Fatigue_GREY_GSW";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Guerilla Coveralls (UVF/Grey)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_UVF_Infantry_model_GREY_GSW";
			containerClass = "Supply120";
			mass = 120;
		};
	};
	class LOP_U_IRA_Fatigue_DPM_BSW: Uniform_Base
	{
		_generalMacro = "LOP_U_IRA_Fatigue_DPM_BSW";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Guerilla Coveralls (IRA/DPM+Sweater Black)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_IRA_Infantry_model_DPM_BSW";
			containerClass = "Supply120";
			mass = 120;
		};
	};
	class LOP_U_IRA_Fatigue_DPM: Uniform_Base
	{
		_generalMacro = "LOP_U_IRA_Fatigue_DPM";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Guerilla Coveralls (IRA/DPM)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_IRA_Infantry_model_DPM";
			containerClass = "Supply120";
			mass = 120;
		};
	};
	class LOP_U_IRA_Fatigue_DPM_GSW: Uniform_Base
	{
		_generalMacro = "LOP_U_IRA_Fatigue_DPM_GSW";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Guerilla Coveralls (IRA/DPM+Sweater Grey)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_IRA_Infantry_model_DPM_GSW";
			containerClass = "Supply120";
			mass = 120;
		};
	};
	class LOP_U_IRA_Fatigue_DPM_TSW: Uniform_Base
	{
		_generalMacro = "LOP_U_IRA_Fatigue_DPM_TSW";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Guerilla Coveralls (IRA/DPM+Sweater Tan)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_IRA_Infantry_model_DPM_TSW";
			containerClass = "Supply120";
			mass = 120;
		};
	};
	class LOP_U_IRA_Fatigue_DPM_GNSW: Uniform_Base
	{
		_generalMacro = "LOP_U_IRA_Fatigue_DPM_GNSW";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Guerilla Coveralls (IRA/DDPM+Sweater Green)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_IRA_Infantry_model_DPM_GNSW";
			containerClass = "Supply120";
			mass = 120;
		};
	};
	class LOP_U_IRA_Fatigue_GRK_BLK: Uniform_Base
	{
		_generalMacro = "LOP_U_IRA_Fatigue_GRK_BLK";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Gorka-R (Black)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_IRA_Infantry_model_GRK_BLK";
			containerClass = "Supply120";
			mass = 120;
		};
	};
	class LOP_U_IRA_Fatigue_GRK_BLUE: Uniform_Base
	{
		_generalMacro = "LOP_U_IRA_Fatigue_GRK_BLUE";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Gorka-R (Dark Blue)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_IRA_Infantry_model_GRK_BLUE";
			containerClass = "Supply120";
			mass = 120;
		};
	};
	class LOP_U_IRA_Fatigue_GRK_OLV: Uniform_Base
	{
		_generalMacro = "LOP_U_IRA_Fatigue_GRK_OLV";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Gorka-R (Olive)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_IRA_Infantry_model_GRK_OLV";
			containerClass = "Supply120";
			mass = 120;
		};
	};
	class LOP_U_IRA_Fatigue_GRK_DPM: Uniform_Base
	{
		_generalMacro = "LOP_U_IRA_Fatigue_GRK_DPM";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Gorka-R (DPM)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_IRA_Infantry_model_GRK_DPM";
			containerClass = "Supply120";
			mass = 120;
		};
	};
	class LOP_U_IRA_Fatigue_HTR_BLK: Uniform_Base
	{
		_generalMacro = "LOP_U_IRA_Fatigue_HTR_BLK";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Guerilla Coveralls (IRA/Hunter Black+Jeans)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_IRA_Infantry_model_HTR_BLK";
			containerClass = "Supply120";
			mass = 120;
		};
	};
	class LOP_U_IRA_Fatigue_HTR_DPM: Uniform_Base
	{
		_generalMacro = "LOP_U_IRA_Fatigue_HTR_DPM";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Guerilla Coveralls (IRA/Hunter DPM)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_IRA_Infantry_model_HTR_DPM";
			containerClass = "Supply120";
			mass = 120;
		};
	};
	class LOP_U_IRA_Fatigue_HTR_DPM_J: Uniform_Base
	{
		_generalMacro = "LOP_U_IRA_Fatigue_HTR_DPM_J";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		displayName = "Guerilla Coveralls (IRA/Hunter DPM+Jeans)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_IRA_Infantry_model_HTR_DPM_J";
			containerClass = "Supply120";
			mass = 120;
		};
	};
};
class CfgVehicles
{
	class SoldierGB;
	class I_Soldier_base_F: SoldierGB
	{
		class EventHandlers;
	};
	class rhs_msv_rifleman;
	class rhs_pilot;
	class rhs_infantry_msv_base;
	class rhs_pilot_base;
	class rhs_msv_grenadier;
	class rhs_msv_machinegunner;
	class rhs_msv_machinegunner_assistant;
	class rhs_msv_at;
	class rhs_msv_aa;
	class rhs_msv_strelok_rpg_assist;
	class rhs_msv_marksman;
	class rhs_msv_officer;
	class rhs_msv_engineer;
	class rhs_msv_medic;
	class rhs_msv_crew;
	class rhs_msv_sergeant;
	class rhs_msv_junior_sergeant;
	class B_Kitbag_rgr;
	class rhs_sidor;
	class rhs_rpg_empty;
	class B_FieldPack_khk;
	class LOP_KAMAZ_med_base;
	class LOP_KAMAZ_cov_base;
	class LOP_KAMAZ_rep_base;
	class LOP_KAMAZ_trans_base;
	class LOP_KAMAZ_fuel_base;
	class LOP_KAMAZ_ammo_base;
	class LOP_BM21_base;
	class LOP_URAL_base;
	class LOP_URAL_open_base;
	class LOP_UAZ_base;
	class LOP_UAZ_Open_base;
	class LOP_UAZ_DSHKM_Base;
	class LOP_UAZ_AGS30_Base;
	class LOP_UAZ_SPG9_Base;		
	class LOP_Hatchback_base;	
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	};
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
	};
	class rhs_a3t72tank_base: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
					class CommanderMG;
				};
			};
		};
	};
	class rhs_t72ba_tv: rhs_a3t72tank_base{};
	class rhs_t72bb_tv: rhs_a3t72tank_base{};
	class rhs_t72bc_tv: rhs_a3t72tank_base{};
	class LOP_T72BA_base: rhs_t72ba_tv{};
	class LOP_T72BB_base: rhs_t72bb_tv{};
	class LOP_T72BC_base: rhs_t72bc_tv{};
	class LOP_BMD1_base;
	class LOP_BMD2_base;
	class LOP_BMP2D_base;
	class LOP_BMP2_base;
	class LOP_BMP1_base;
	class LOP_BMP1D_base;
	class LOP_ZSU234_base;
	class LOP_BTR60_base;
	class LOP_BTR70_base;
	class LOP_BTR80_base;
	class LOP_Mi8mt_Cargo_base;
	class LOP_Mi8MTV3_FAB_base;
	class LOP_Mi8MTV3_UPK23_base;
	class LOP_Mi8AMTSh_FAB_base;
	class LOP_Mi8AMTSh_UPK23_base;
	class LOP_Mi24V_AT_base;
	class LOP_Mi24V_FAB_base;
	class LOP_Mi24V_UPK23_base;
	class LOP_SU25SM_base;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class MainTurret;
		class EventHandlers;
	};
	class StaticCannon: StaticWeapon
	{
		class ViewOptics;
	};
	class RHS_NSV_TriPod_MSV;
	class RHS_AGS30_TriPod_VDV;
	class rhs_KORD_VDV;
	class rhs_KORD_high_VDV;
	class rhs_Igla_AA_pod_vdv;
	class rhs_SPG9_INS;
	class rhs_DSHKM_ins;
	class rhs_D30_ins;
	class rhs_Metis_9k115_1_ins;
	class RHS_ZU23_base: StaticCannon
	{
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
			class CargoTurret_01: CargoTurret{};
		};
	};
	class RHS_ZU23_VDV: RHS_ZU23_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
			class CargoTurret_01: CargoTurret_01{};
		};
	};
	class LOP_UKR_Infantry_model_base: rhs_msv_rifleman
	{
		_generalMacro = "LOP_UKR_Infantry_model_base";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		dlc = "LOP_LeightsOPFOR";
		side = 1;
		faction = "LOP_UKR";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		modelSides[] = {3,2,1,0};
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_AK74M","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_AK74M","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6B23_Rifleman_CDF","LOP_H_6B27M_CDF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_Rifleman_CDF","LOP_H_6B27M_CDF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "";
	};
	class LOP_UKR_Infantry_model_pilot: rhs_pilot
	{
		_generalMacro = "LOP_UKR_Infantry_model_base";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		dlc = "LOP_LeightsOPFOR";
		side = 1;
		faction = "LOP_UKR";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		modelSides[] = {3,2,1,0};
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_AK74M","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_AK74M","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6B23_Rifleman_CDF","LOP_H_6B27M_CDF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_Rifleman_CDF","LOP_H_6B27M_CDF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "";
	};
	class LOP_UKR_Infantry_model_df15: LOP_UKR_Infantry_model_pilot
	{
		_generalMacro = "LOP_UKR_Infantry_model_df15";
		author = "$STR_LOP_FULL_NAME";
		uniformClass = "LOP_U_UKR_Fatigue_DF15";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\ukr_fatigue_df15_co.paa"};
	};
	class LOP_UKR_Infantry_model_Digit: LOP_UKR_Infantry_model_base
	{
		_generalMacro = "LOP_UKR_Infantry_model_Digit";
		author = "$STR_LOP_FULL_NAME";
		uniformClass = "LOP_U_UKR_Fatigue_Digit";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\ukr_fatigue_digit_co.paa","",""};
	};
	class LOP_UKR_Infantry_model_Flec: LOP_UKR_Infantry_model_base
	{
		_generalMacro = "LOP_UKR_Infantry_model_Flec";
		author = "$STR_LOP_FULL_NAME";
		uniformClass = "LOP_U_UKR_Fatigue_Flec";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\ukr_fatigue_Flec_co.paa","",""};
	};
	class LOP_UKR_Infantry_model_Multicam: LOP_UKR_Infantry_model_base
	{
		_generalMacro = "LOP_UKR_Infantry_model_Multicam";
		author = "$STR_LOP_FULL_NAME";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "LOP_U_UKR_Fatigue_Multicam";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\ukr_fatigue_multicam_co.paa",""};
	};
	class LOP_UKR_Infantry_model_TTsKO: LOP_UKR_Infantry_model_base
	{
		_generalMacro = "LOP_UKR_Infantry_model_TTsKO";
		author = "$STR_LOP_FULL_NAME";
		uniformClass = "LOP_U_UKR_Fatigue_TTsKO";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\ukr_fatigue_TTsKO_co.paa","",""};
	};
	class LOP_UKR_Infantry_model_IzlomTTsKO: LOP_UKR_Infantry_model_base
	{
		_generalMacro = "LOP_UKR_Infantry_model_IzlomTTsKO";
		author = "$STR_LOP_FULL_NAME";
		uniformClass = "LOP_U_UKR_Fatigue_IzlomTTsKO";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\ukr_fatigue_com_izlom_ttsko_co.paa","",""};
	};
	class LOP_UKR_Infantry_model_TanMTP: LOP_UKR_Infantry_model_base
	{
		_generalMacro = "LOP_UKR_Infantry_model_TanMTP";
		author = "$STR_LOP_FULL_NAME";
		uniformClass = "LOP_U_UKR_Fatigue_TanMTP";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\ukr_fatigue_com_tan_mtp_co.paa","",""};
	};
	class LOP_UKR_Infantry_model_DPMWDPMD: LOP_UKR_Infantry_model_base
	{
		_generalMacro = "LOP_UKR_Infantry_model_DPMWDPMD";
		author = "$STR_LOP_FULL_NAME";
		uniformClass = "LOP_U_UKR_Fatigue_DPMWDPMD";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\ukr_fatigue_com_wDPM_dDPM_co.paa","",""};
	};
	class LOP_UKR_Infantry_Base: rhs_infantry_msv_base
	{
		dlc = "LOP_LeightsOPFOR";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\1placeholder.jpg";
		scope = 0;
		side = 2;
		faction = "LOP_UKR";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		displayName = "Rifleman";
		asr_ai_level = 5;
		camouflage = 0.8;
		uniformClass = "LOP_U_UKR_Fatigue_TTsKO";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\ukr_fatigue_TTsKO_co.paa","",""};
		linkedItems[] = {"LOP_V_6B23_TTKO","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_TTKO","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		identityTypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgd5"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class LOP_UKR_Infantry_Rifleman: LOP_UKR_Infantry_Base
	{
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_Infantry_Rifleman.jpg";
		uniformClass = "LOP_U_UKR_Fatigue_TTsKO";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\ukr_fatigue_TTsKO_co.paa","",""};
		linkedItems[] = {"LOP_V_6B23_TTKO","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_TTKO","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LOP_UKR_Infantry_LAT: LOP_UKR_Infantry_Rifleman
	{
		author = "$STR_LOP_FULL_NAME";
		displayName = "Rifleman (RPG-26)";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Infantry_LAT.jpg";
		uniformClass = "LOP_U_UKR_Fatigue_IzlomTTsKO";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\ukr_fatigue_com_izlom_ttsko_co.paa","",""};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		cost = 180000;
		threat[] = {1,0.7,0.3};
		icon = "iconManAT";
		weapons[] = {"rhs_weap_ak74m_plummag_dtk","rhs_weap_rpg26","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_plummag_dtk","rhs_weap_rpg26","Throw","Put"};
		linkedItems[] = {"LOP_V_6B23_6Sh92_TTKO_OLV","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_6Sh92_TTKO_OLV","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgn","rhs_rpg26_mag"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgn","rhs_rpg26_mag"};
		secondaryAmmoCoef = 0.5;
	};
	class LOP_UKR_Infantry_RShG2: LOP_UKR_Infantry_LAT
	{
		author = "$STR_LOP_FULL_NAME";
		displayName = "Rifleman (RShG2)";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Infantry_RShG2.jpg";
		weapons[] = {"rhs_weap_ak74m_dtk","rhs_weap_rshg2","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","rhs_weap_rshg2","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgn","rhs_rshg2_mag"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgn","rhs_rshg2_mag"};
		secondaryAmmoCoef = 0.5;
	};
	class LOP_UKR_Infantry_Grenadier: LOP_UKR_Infantry_Rifleman
	{
		author = "$STR_LOP_FULL_NAME";
		displayName = "Grenadier";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Infantry_Grenadier.jpg";
		uniformClass = "LOP_U_UKR_Fatigue_TanMTP";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\ukr_fatigue_com_tan_mtp_co.paa","",""};
		linkedItems[] = {"LOP_V_6B23_6Sh92_TAN_DMPi","LOP_H_6B27M_ess_MTP","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_6Sh92_TAN_DMPi","LOP_H_6B27M_ess_MTP","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_ak74m_gp25_dtk","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25_dtk","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25"};
		secondaryAmmoCoef = 0.5;
	};
	class LOP_UKR_Infantry_Light: LOP_UKR_Infantry_Rifleman
	{
		author = "$STR_LOP_FULL_NAME";
		displayName = "Rifleman (Light)";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Infantry_Light.jpg";
		uniformClass = "LOP_U_UKR_Fatigue_Flec";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\ukr_fatigue_Flec_co.paa","",""};
		linkedItems[] = {"LOP_V_6B23_6Sh92_TAN_ACU","LOP_H_Beanie_flec","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_6Sh92_TAN_ACU","LOP_H_Beanie_flec","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_aks74u","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_aks74u","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_nspn_red"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_nspn_red"};
		secondaryAmmoCoef = 0.5;
	};
	class LOP_UKR_Infantry_AR: LOP_UKR_Infantry_Rifleman
	{
		author = "$STR_LOP_FULL_NAME";
		displayName = "Machine Gunner (PKM)";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Infantry_AR.jpg";
		uniformClass = "LOP_U_UKR_Fatigue_DPMWDPMD";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\ukr_fatigue_com_wDPM_dDPM_co.paa","",""};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		cost = 125000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"LOP_V_6B23_6Sh92_TAN_DMPi","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_6Sh92_TAN_DMPi","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_pkm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR","rhs_mag_rgn"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_mag_rgn"};
		backpack = "rhs_sidorMG";
		secondaryAmmoCoef = 0.5;
	};
	class LOP_UKR_Infantry_AR_Asst: LOP_UKR_Infantry_Rifleman
	{
		author = "$STR_LOP_FULL_NAME";
		displayName = "Machine Gunner Assistant";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Infantry_AR_Asst.jpg";
		uniformClass = "LOP_U_UKR_Fatigue_DPMWDPMD";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\ukr_fatigue_com_wDPM_dDPM_co.paa","",""};
		backpack = "rhs_sidorMG";
	};
	class LOP_UKR_Infantry_RPG: LOP_UKR_Infantry_Rifleman
	{
		author = "$STR_LOP_FULL_NAME";
		displayName = "Grenadier (RPG-7)";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Infantry_RPG.jpg";
		uniformClass = "LOP_U_UKR_Fatigue_DPMWDPMD";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\ukr_fatigue_com_wDPM_dDPM_co.paa","",""};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		cost = 160000;
		threat[] = {1,0.5,0.2};
		icon = "iconManAT";
		weapons[] = {"rhs_weap_ak74m_plummag_dtk","Throw","Put","rhs_weap_rpg7_pgo"};
		respawnWeapons[] = {"rhs_weap_ak74m_plummag_dtk","Throw","Put","rhs_weap_rpg7_pgo"};
		linkedItems[] = {"LOP_V_6B23_6Sh92_TTKO_OLV","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_6Sh92_TTKO_OLV","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgn"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgn"};
		backpack = "rhs_rpg";
		secondaryAmmoCoef = 0.5;
	};
	class LOP_UKR_Infantry_RPG_Asst: LOP_UKR_Infantry_Rifleman
	{
		author = "$STR_LOP_FULL_NAME";
		displayName = "Grenadier Assistant";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Infantry_RPG_Asst.jpg";
		linkedItems[] = {"LOP_H_6B27M_wz93","LOP_V_6B23_6Sh92_TTKO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_H_6B27M_wz93","LOP_V_6B23_6Sh92_TTKO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "rhs_rpg";
		secondaryAmmoCoef = 0.5;
	};
	class LOP_UKR_Infantry_Marksman: LOP_UKR_Infantry_Rifleman
	{
		author = "$STR_LOP_FULL_NAME";
		displayName = "Marksman";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Infantry_Marksman.jpg";
		uniformClass = "LOP_U_UKR_Fatigue_Flec";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\ukr_fatigue_Flec_co.paa","",""};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		cost = 150000;
		sensitivity = 3.3;
		linkedItems[] = {"LOP_H_Fieldcap_UKR","LOP_V_6B23_sniper","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_H_Fieldcap_UKR","LOP_V_6B23_sniper","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_svdp_pso1","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_svdp_pso1","Throw","Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
	};
	class LOP_UKR_Infantry_sergeant: LOP_UKR_Infantry_Rifleman
	{
		author = "$STR_LOP_FULL_NAME";
		displayName = "Sergeant";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Infantry_sergeant.jpg";
		cost = 500000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"LOP_H_6B27M_MTP","LOP_V_6B23_headset_mapcase","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_H_6B27M_MTP","LOP_V_6B23_headset_mapcase","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_ak74m_gp25_dtk","rhs_weap_makarov_pmm","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25_dtk","rhs_weap_makarov_pmm","Binocular","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_rdg2_white","rhs_mag_rgn","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_GRD40_White"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_rdg2_white","rhs_mag_rgn","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_GRD40_White"};
	};
	class LOP_UKR_Infantry_junior_sergeant: LOP_UKR_Infantry_sergeant
	{
		author = "$STR_LOP_FULL_NAME";
		displayName = "Junior Sergeant";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Infantry_junior_sergeant.jpg";
		uniformClass = "LOP_U_UKR_Fatigue_IzlomTTsKO";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\ukr_fatigue_com_izlom_ttsko_co.paa","",""};
		cost = 450000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";
		linkedItems[] = {"LOP_H_6B27M_Izlom","rhs_6b23_6sh92_vog_headset","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_H_6B27M_Izlom","rhs_6b23_6sh92_vog_headset","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LOP_UKR_Infantry_officer_armored: LOP_UKR_Infantry_Rifleman
	{
		author = "$STR_LOP_FULL_NAME";
		displayName = "Officer (Armored)";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Infantry_officer_armored.jpg";
		uniformClass = "LOP_U_UKR_Fatigue_Digit";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\ukr_fatigue_digit_co.paa","",""};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_officer_s"};
				speechPlural[] = {"veh_infantry_officer_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_officer_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_officer_p";
		nameSound = "veh_infantry_officer_s";
		cost = 600000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManOfficer";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"LOP_H_6B27M_ess_Digit","LOP_V_6B23_CrewOfficer_TTKO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_H_6B27M_ess_Digit","LOP_V_6B23_CrewOfficer_TTKO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_ak74m_folded_dtk","rhs_weap_makarov_pmm","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_folded_dtk","rhs_weap_makarov_pmm","Binocular","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
	};
	class LOP_UKR_Infantry_officer: LOP_UKR_Infantry_officer_armored
	{
		author = "$STR_LOP_FULL_NAME";
		displayName = "Officer";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Infantry_officer.jpg";
		linkedItems[] = {"LOP_H_Beanie_tan","LOP_V_6B23_CrewOfficer_TAN","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_H_Beanie_tan","LOP_V_6B23_CrewOfficer_TAN","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_makarov_pmm","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_makarov_pmm","Binocular","Throw","Put"};
		magazines[] = {"rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
	};
	class LOP_UKR_Infantry_AA: LOP_UKR_Infantry_RPG
	{
		author = "$STR_LOP_FULL_NAME";
		displayName = "Anti-Air Specialist";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Infantry_AA.jpg";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		cost = 200000;
		threat[] = {1,1,0.8};
		camouflage = 1.5;
		icon = "iconManAT";
		linkedItems[] = {"LOP_H_6B27M_Izlom","LOP_V_6B23_6Sh92_TAN_DMPi","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_H_6B27M_Izlom","LOP_V_6B23_6Sh92_TAN_DMPi","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_aks74u","Throw","Put","rhs_weap_igla"};
		respawnWeapons[] = {"rhs_weap_aks74u","Throw","Put","rhs_weap_igla"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_9k38_rocket"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_9k38_rocket"};
		backpack = "";
	};
	class LOP_UKR_Infantry_engineer: LOP_UKR_Infantry_Rifleman
	{
		author = "$STR_LOP_FULL_NAME";
		displayName = "Engineer";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Infantry_engineer.jpg";
		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.5;
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		weapons[] = {"rhs_weap_aks74u","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_aks74u","Throw","Put"};
		linkedItems[] = {"LOP_H_6B27M_UKR","LOP_V_6B23_Rifleman_TAN","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_H_6B27M_UKR","LOP_V_6B23_Rifleman_TAN","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "rhs_assault_umbts_engineer";
	};
	class LOP_UKR_Infantry_medic: LOP_UKR_Infantry_Rifleman
	{
		author = "$STR_LOP_FULL_NAME";
		displayName = "Medic";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Infantry_medic.jpg";
		uniformClass = "LOP_U_UKR_Fatigue_IzlomTTsKO";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\ukr_fatigue_com_izlom_ttsko_co.paa","",""};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "rhs_assault_umbts_medic";
		picture = "pictureHeal";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "medic";
		textPlural = "medics";
		nameSound = "veh_infantry_medic_s";
		linkedItems[] = {"LOP_H_Beanie_marpat","LOP_V_6B23_Medic_TTKO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_H_Beanie_marpat","LOP_V_6B23_Medic_TTKO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LOP_UKR_Infantry_crew: LOP_UKR_Infantry_Rifleman
	{
		author = "$STR_LOP_FULL_NAME";
		displayName = "Crew";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Infantry_crew.jpg";
		cost = 90000;
		camouflage = 1.6;
		sensitivity = 2.5;
		linkedItems[] = {"rhs_tsh4","rhs_vest_pistol_holster","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_vest_pistol_holster","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_aks74u","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_aks74u","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_nspd"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_nspd"};
	};
	class LOP_UKR_Infantry_pilot: rhs_pilot_base
	{
		author = "$STR_LOP_FULL_NAME";
		displayName = "Pilot";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Infantry_pilot.jpg";
		uniformClass = "LOP_U_UKR_Fatigue_DF15";
		hiddenSelectionsTextures[] = {"po_factions_eu\ukr\data\ukr_fatigue_df15_co.paa"};
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "LOP_UKR";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_pilot_s"};
				speechPlural[] = {"veh_infantry_pilot_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound = "veh_infantry_pilot_s";
		cost = 160000;
		camouflage = 2.0;
		linkedItems[] = {"rhs_zsh7a_mike","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_zsh7a_mike","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LOP_UKR_Infantry_JetPilot: LOP_UKR_Infantry_pilot
	{
		displayName = "Jet Pilot";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Infantry_JetPilot.jpg";
		weapons[] = {"rhs_weap_pya","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pya","Throw","Put"};
		magazines[] = {"rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_mag_rdg2_white","rhs_mag_nspd"};
		respawnMagazines[] = {"rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_mag_rdg2_white","rhs_mag_nspd"};
		linkedItems[] = {"rhs_zsh7a","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_zsh7a","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LOP_UKR_KAMAZ_Covered: LOP_KAMAZ_cov_base
	{
		scope = 2;
		scopecurator = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_KAMAZ_Covered.jpg";
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_Rifleman";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\ukr\data\kamaz_kab_co.paa","\po_factions_eu\ukr\data\kamaz_kuz_co.paa"};
	};
	class LOP_UKR_KAMAZ_Transport: LOP_KAMAZ_trans_base
	{
		scope = 2;
		scopecurator = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_KAMAZ_Transport.jpg";
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_Rifleman";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\ukr\data\kamaz_kab_co.paa","\po_factions_eu\ukr\data\kamaz_kuz_co.paa"};
	};
	class LOP_UKR_KAMAZ_Repair: LOP_KAMAZ_rep_base
	{
		scope = 2;
		scopecurator = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_KAMAZ_Repair.jpg";
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_Rifleman";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\ukr\data\kamaz_kab_co.paa","\po_factions_eu\ukr\data\kamaz_repair_co.paa"};
	};
	class LOP_UKR_KAMAZ_Fuel: LOP_KAMAZ_fuel_base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_UKR_KAMAZ_Fuel";
		editorPreview = "\po_main\Data\3den\LOP_UKR_KAMAZ_Fuel.jpg";
		scope = 2;
		scopecurator = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		faction = "LOP_UKR";
		vehicleClass = "LOP_Support";
		editorSubcategory = "LOP_Support";
		displayName = "KAMAZ (fuel)";
		crew = "LOP_UKR_Infantry_Rifleman";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\ukr\data\kamaz_kab_co.paa","\po_factions_eu\ukr\data\kamaz_fuel_co.paa"};
	};
	class LOP_UKR_KAMAZ_Ammo: LOP_KAMAZ_ammo_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 0;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_KAMAZ_Ammo.jpg";
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_Rifleman";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\ukr\data\kamaz_kab_co.paa","\po_factions_eu\ukr\data\kamaz_repair_co.paa"};
		class TransportWeapons
		{
			class _xx_rhs_weap_AK74M
			{
				weapon = "rhs_weap_AK74M";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_30Rnd_545x39_AK
			{
				magazine = "rhs_30Rnd_545x39_AK";
				count = 20;
			};
			class _xx_rhs_100Rnd_762x54mmR
			{
				magazine = "rhs_100Rnd_762x54mmR";
				count = 20;
			};
			class _xx_rhs_rpg7_PG7VL_mag
			{
				magazine = "rhs_rpg7_PG7VL_mag";
				count = 20;
			};
			class _xx_rhs_rpg7_OG7V_mag
			{
				magazine = "rhs_rpg7_OG7V_mag";
				count = 20;
			};
			class _xx_rhs_mag_rgd5
			{
				magazine = "rhs_mag_rgd5";
				count = 20;
			};
			class _xx_rhs_VOG25
			{
				magazine = "rhs_VOG25";
				count = 20;
			};
			class _xx_rhs_mag_rdg2_black
			{
				magazine = "rhs_mag_rdg2_black";
				count = 20;
			};
			class _xx_rhs_mag_rdg2_white
			{
				magazine = "rhs_mag_rdg2_white";
				count = 20;
			};
		};
	};
	class LOP_UKR_KAMAZ_Medical: LOP_KAMAZ_med_base
	{
		scope = 2;
		scopecurator = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_KAMAZ_Medical.jpg";
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_Rifleman";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\ukr\data\kamaz_kab_co.paa","\po_factions_eu\ukr\data\kamaz_kuz_co.paa"};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 10;
			};
		};
	};
	class LOP_UKR_BM21: LOP_BM21_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_BM21.jpg";
		faction = "LOP_UKR";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		crew = "LOP_UKR_Infantry_Rifleman";
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']","['Label', cDecalsCarsRightArmyPlaces, 'Army', [5,1]]"};
	};
	class LOP_UKR_Ural: LOP_URAL_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopecurator = 2;
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_Ural.jpg";
		faction = "LOP_UKR";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		crew = "LOP_UKR_Infantry_Rifleman";
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']","['Label', cDecalsCarsRightArmyPlaces, 'Army', [5,1]]"};
	};
	class LOP_UKR_Ural_open: LOP_URAL_open_base
	{
		scope = 2;
		scopecurator = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_Ural_open.jpg";
		faction = "LOP_UKR";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		crew = "LOP_UKR_Infantry_Rifleman";
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']","['Label', cDecalsCarsRightArmyPlaces, 'Army', [5,1]]"};
	};
	class LOP_UKR_UAZ: LOP_UAZ_base
	{
		accuracy = 0.5;
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_UAZ.jpg";
		faction = "LOP_UKR";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		crew = "LOP_UKR_Infantry_Rifleman";
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']","['Label', cDecalsCarsRightArmyPlaces, 'Army', [5,1]]"};
	};
	class LOP_UKR_UAZ_Open: LOP_UAZ_Open_base
	{
		accuracy = 0.5;
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_UAZ_Open.jpg";
		faction = "LOP_UKR";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		crew = "LOP_UKR_Infantry_Rifleman";
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']","['Label', cDecalsCarsRightArmyPlaces, 'Army', [5,1]]"};
	};
	class LOP_UKR_UAZ_DshKM: LOP_UAZ_DSHKM_Base
	{
		accuracy = 0.5;
		scope = 2;
		scopecurator = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_UAZ_DshKM.jpg";
		faction = "LOP_UKR";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		crew = "LOP_UKR_Infantry_Rifleman";
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']","['Label', cDecalsCarsRightArmyPlaces, 'Army', [5,1]]"};
	};
	class LOP_UKR_UAZ_AGS: LOP_UAZ_AGS30_Base
	{
		accuracy = 0.5;
		scope = 2;
		scopecurator = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_UAZ_AGS.jpg";
		faction = "LOP_UKR";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		crew = "LOP_UKR_Infantry_Rifleman";
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']","['Label', cDecalsCarsRightArmyPlaces, 'Army', [5,1]]"};
	};
	class LOP_UKR_UAZ_SPG: LOP_UAZ_SPG9_Base
	{
		accuracy = 0.5;
		scope = 2;
		scopecurator = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_UAZ_SPG.jpg";
		faction = "LOP_UKR";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		crew = "LOP_UKR_Infantry_Rifleman";
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']","['Label', cDecalsCarsRightArmyPlaces, 'Army', [5,1]]"};
	};
	class LOP_UKR_T72BA: LOP_T72BA_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_T72BA.jpg";
		faction = "LOP_UKR";
		accuracy = 0.5;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"rhs_mag_3bm32_7","rhs_mag_3bk18m_6","rhs_mag_3of26_5","rhs_mag_9m119_4","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_3d17"};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerType = "LOP_UKR_Infantry_crew";
					};
					class CommanderMG: CommanderMG{};
				};
			};
		};
		crew = "LOP_UKR_Infantry_crew";
		typicalCargo[] = {"LOP_UKR_Infantry_crew"};
		rhs_decalParameters[] = {"['Number',cRHST72NumberPlaces,'Default']","['Label',cRHST72HnrSymPlaces, 'Army',[5,0]]"};
	};
	class LOP_UKR_T72BB: LOP_T72BB_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_T72BA.jpg";
		faction = "LOP_UKR";
		accuracy = 0.5;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"rhs_mag_3bm32_7","rhs_mag_3bk18m_6","rhs_mag_3of26_5","rhs_mag_9m119_4","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_3d17"};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerType = "LOP_UKR_Infantry_crew";
					};
					class CommanderMG: CommanderMG{};
				};
			};
		};
		crew = "LOP_UKR_Infantry_crew";
		typicalCargo[] = {"LOP_UKR_Infantry_crew"};
		rhs_decalParameters[] = {"['Number',cRHST72NumberPlaces,'Default']","['Label',cRHST72HnrSymPlaces, 'Army',[5,0]]"};
	};
	class LOP_UKR_T72BC: LOP_T72BC_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_T72BA.jpg";
		faction = "LOP_UKR";
		accuracy = 0.5;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"rhs_mag_3bm32_7","rhs_mag_3bk18m_6","rhs_mag_3of26_5","rhs_mag_9m119_4","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_3d17"};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerType = "LOP_UKR_Infantry_crew";
					};
					class CommanderMG: CommanderMG{};
				};
			};
		};
		crew = "LOP_UKR_Infantry_crew";
		typicalCargo[] = {"LOP_UKR_Infantry_crew"};
		rhs_decalParameters[] = {"['Number',cRHST72NumberPlaces,'Default']","['Label',cRHST72HnrSymPlaces, 'Army',[5,0]]"};
	};
	class LOP_UKR_BMD1: LOP_BMD1_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_BMD1.jpg";
		faction = "LOP_UKR";
		accuracy = 0.5;
		crew = "LOP_UKR_Infantry_crew";
		typicalCargo[] = {"LOP_UKR_Infantry_crew"};
		rhs_decalParameters[] = {"['Number', cBMD3NumberPlaces, 'Default']","['Label', cBMDArmySymPlaces, 'Army', [5,1]]"};
	};
	class LOP_UKR_BMD2: LOP_BMD2_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_BMD2.jpg";
		accuracy = 0.5;
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_crew";
		typicalCargo[] = {"LOP_UKR_Infantry_crew"};
		rhs_decalParameters[] = {"['Number', cBMD3NumberPlaces, 'Default']","['Label', cBMDArmySymPlaces, 'Army', [5,1]]"};
	};
	class LOP_UKR_BMP2D: LOP_BMP2D_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_BMP2D.jpg";
		accuracy = 0.5;
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_crew";
		typicalCargo[] = {"LOP_UKR_Infantry_crew"};
		rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']"};
	};
	class LOP_UKR_BMP2: LOP_BMP2_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_BMP2.jpg";
		accuracy = 0.5;
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_crew";
		typicalCargo[] = {"LOP_UKR_Infantry_crew"};
		rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']"};
	};
	class LOP_UKR_BMP1: LOP_BMP1_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_BMP1.jpg";
		accuracy = 0.5;
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_crew";
		typicalCargo[] = {"LOP_UKR_Infantry_crew"};
		rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']"};
	};
	class LOP_UKR_BMP1D: LOP_BMP1D_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_BMP1D.jpg";
		faction = "LOP_UKR";
		displayName = "BMP-1D";
		crew = "LOP_UKR_Infantry_crew";
		typicalCargo[] = {"LOP_UKR_Infantry_crew"};
		rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']"};
	};
	class LOP_UKR_ZSU234: LOP_ZSU234_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_ZSU234.jpg";
		accuracy = 0.5;
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_crew";
		typicalCargo[] = {"LOP_UKR_Infantry_crew"};
		rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']"};
	};
	class LOP_UKR_BTR60: LOP_BTR60_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_BTR60.jpg";
		accuracy = 0.5;
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_crew";
		typicalCargo[] = {"LOP_UKR_Infantry_crew"};
		rhs_decalParameters[] = {"['Number', cBTR3NumberPlaces, 'Default']"};
	};
	class LOP_UKR_BTR70: LOP_BTR70_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_BTR70.jpg";
		accuracy = 0.5;
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_crew";
		typicalCargo[] = {"LOP_UKR_Infantry_crew"};
		rhs_decalParameters[] = {"['Number', cBTR3NumberPlaces, 'Default']","['Label', cBTROMONSymbolPlaces,'Army',[5,1]]"};
	};
	class LOP_UKR_BTR80: LOP_BTR80_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_BTR80.jpg";
		accuracy = 0.5;
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_crew";
		typicalCargo[] = {"LOP_UKR_Infantry_crew"};
		rhs_decalParameters[] = {"['Number', cBTR3NumberPlaces, 'Default']","['Label', cBTRBackArmSymPlaces, 'Army',5]"};
	};
	class LOP_UKR_Mi24V_UPK23: LOP_Mi24V_UPK23_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_Mi24V_UPK23.jpg";
		faction = "LOP_UKR";
		typicalCargo[] = {"LOP_UKR_Infantry_Pilot"};
		crew = "LOP_UKR_Infantry_Pilot";
		hiddenselectionstextures[] = {"po_vehicles\data\camo\mi24\25_ukraina_desert_001_co.paa","po_vehicles\data\camo\mi24\25_ukraina_desert_002_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
		rhs_decalParameters[] = {"['Number',cRHSAIRMI24NumberPlaces,'Handpaint']"};
	};
	class LOP_UKR_Mi24V_FAB: LOP_Mi24V_FAB_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_Mi24V_FAB.jpg";
		faction = "LOP_UKR";
		typicalCargo[] = {"LOP_UKR_Infantry_Pilot"};
		crew = "LOP_UKR_Infantry_Pilot";
		hiddenselectionstextures[] = {"po_vehicles\data\camo\mi24\25_ukraina_desert_001_co.paa","po_vehicles\data\camo\mi24\25_ukraina_desert_002_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
		rhs_decalParameters[] = {"['Number',cRHSAIRMI24NumberPlaces,'Handpaint']"};
	};
	class LOP_UKR_Mi24V_AT: LOP_Mi24V_AT_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_Mi24V_AT.jpg";
		faction = "LOP_UKR";
		vehicleClass = "LOP_Aircraft";
		editorSubcategory = "LOP_Aircraft";
		typicalCargo[] = {"LOP_UKR_Infantry_Pilot"};
		crew = "LOP_UKR_Infantry_Pilot";
		hiddenselectionstextures[] = {"po_vehicles\data\camo\mi24\25_ukraina_desert_001_co.paa","po_vehicles\data\camo\mi24\25_ukraina_desert_002_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
		rhs_decalParameters[] = {"['Number',cRHSAIRMI24NumberPlaces,'Handpaint']"};
	};
	class LOP_UKR_Mi8MT_Cargo: LOP_Mi8mt_Cargo_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_Mi8MT_Cargo.jpg";
		faction = "LOP_UKR";
		typicalCargo[] = {"LOP_UKR_Infantry_Pilot"};
		crew = "LOP_UKR_Infantry_Pilot";
		hiddenselectionstextures[] = {"\po_factions_eu\ukr\data\mi8_body_g_ukr_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa"};
		rhs_decalParameters[] = {"['Number',cRHSAIRMI8NumberPlaces,'Handpaint']"};
	};
	class LOP_UKR_Mi8MTV3_FAB: LOP_Mi8MTV3_FAB_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_Mi8MTV3_FAB.jpg";
		faction = "LOP_UKR";
		typicalCargo[] = {"LOP_UKR_Infantry_Pilot"};
		crew = "LOP_UKR_Infantry_Pilot";
		hiddenselectionstextures[] = {"\po_factions_eu\ukr\data\mi8_body_g_ukr_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa"};
		rhs_decalParameters[] = {"['Number',cRHSAIRMI8NumberPlaces,'Handpaint']"};
	};
	class LOP_UKR_Mi8MTV3_UPK23: LOP_Mi8MTV3_UPK23_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_Mi8MTV3_UPK23.jpg";
		faction = "LOP_UKR";
		typicalCargo[] = {"LOP_UKR_Infantry_Pilot"};
		crew = "LOP_UKR_Infantry_Pilot";
		hiddenselectionstextures[] = {"\po_factions_eu\ukr\data\mi8_body_g_ukr_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa"};
		rhs_decalParameters[] = {"['Number',cRHSAIRMI8NumberPlaces,'Handpaint']"};
	};
	class LOP_UKR_SU25SM: LOP_SU25SM_base
	{
		scope = 1;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		editorPreview = "\po_main\Data\3den\LOP_UKR_SU25SM.jpg";
		faction = "LOP_UKR";
		typicalCargo[] = {"LOP_UKR_Infantry_JetPilot"};
		crew = "LOP_UKR_Infantry_JetPilot";
		rhs_decalParameters[] = {"['Number',cRHSAIRSU25NumberPlaces,'AviaCDF']"};
	};
	class LOP_UKR_NSV_TriPod: RHS_NSV_TriPod_MSV
	{
		generalMacro = "LOP_UKR_NSV_TriPod";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_UKR_NSV_TriPod.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_Rifleman";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
	};
	class LOP_UKR_Igla_AA_pod: rhs_Igla_AA_pod_vdv
	{
		generalMacro = "LOP_UKR_Igla_AA_pod";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Igla_AA_pod.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_Rifleman";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
	};
	class LOP_UKR_AGS30_TriPod: RHS_AGS30_TriPod_VDV
	{
		generalMacro = "LOP_UKR_AGS30_TriPod";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_UKR_AGS30_TriPod.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_Rifleman";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
	};
	class LOP_UKR_Kord: rhs_KORD_VDV
	{
		generalMacro = "LOP_UKR_Kord";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Kord.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_Rifleman";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
	};
	class LOP_UKR_Kord_High: rhs_KORD_high_VDV
	{
		generalMacro = "LOP_UKR_Kord_High";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Kord_High.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_Rifleman";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
	};
	class LOP_UKR_Static_SPG9: rhs_SPG9_INS
	{
		generalMacro = "LOP_UKR_Static_SPG9";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Static_SPG9.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_Rifleman";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
	};
	class LOP_UKR_Static_DSHKM: rhs_DSHKM_ins
	{
		generalMacro = "LOP_UKR_Static_DSHKM";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Static_DSHKM.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_Rifleman";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
	};
	class LOP_UKR_Static_D30: rhs_D30_ins
	{
		generalMacro = "LOP_UKR_Static_D30";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Static_D30.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_Rifleman";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
	};
	class LOP_UKR_Static_AT4: rhs_Metis_9k115_1_ins
	{
		generalMacro = "LOP_UKR_Static_AT4";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_UKR_Static_AT4.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_Rifleman";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
	};
	class LOP_UKR_ZU23: RHS_ZU23_VDV
	{
		generalMacro = "LOP_UKR_ZU23";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_UKR_ZU23.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		faction = "LOP_UKR";
		crew = "LOP_UKR_Infantry_Rifleman";
		typicalCargo[] = {"LOP_UKR_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerType = "LOP_UKR_Infantry_Rifleman";
			};
		};
	};
	class LOP_US_Infantry_Base: rhs_msv_rifleman
	{
		dlc = "LOP_LeightsOPFOR";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\1placeholder.jpg";
		scope = 0;
		side = 0;
		asr_ai_level = 5;
		camouflage = 0.8;
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rdg2_white","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rdg2_white","rhs_mag_rgd5"};
	};
	class LOP_US_Infantry_Rifleman: LOP_US_Infantry_Base
	{
		_generalMacro = "LOP_US_Infantry_Rifleman";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_Infantry_Rifleman.jpg";
		scope = 2;
		displayName = "Rifleman (AK-103)";
		uniformClass = "LOP_U_US_Fatigue_01";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\us\data\u_fatigue_01_co.paa","",""};
		weapons[] = {"rhs_weap_ak103_dtk","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak103_dtk","Throw","Put"};
		linkedItems[] = {"rhs_6b13_6sh92","rhs_6b26_ess_bala","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b13_6sh92","rhs_6b26_ess_bala","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "";
	};
	class LOP_US_Infantry_Rifleman_2: LOP_US_Infantry_Base
	{
		_generalMacro = "LOP_US_Infantry_Rifleman_2";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_Infantry_Rifleman_2.jpg";
		scope = 2;
		displayName = "Rifleman (AKM)";
		uniformClass = "LOP_U_US_Fatigue_04";
		weapons[] = {"rhs_weap_akm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","Throw","Put"};
		linkedItems[] = {"rhs_6b23_6sh116","rhs_6b26_bala","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_6sh116","rhs_6b26_bala","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "";
	};
	class LOP_US_Infantry_Rifleman_3: LOP_US_Infantry_Base
	{
		_generalMacro = "LOP_US_Infantry_Rifleman_3";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_Infantry_Rifleman_3.jpg";
		scope = 2;
		displayName = "Rifleman (AKMS)";
		uniformClass = "LOP_U_US_Fatigue_02";
		weapons[] = {"rhs_weap_akms","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","Throw","Put"};
		linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_beanie","G_Bandanna_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_beanie","G_Bandanna_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "";
	};
	class LOP_US_Infantry_Rifleman_4: LOP_US_Infantry_Base
	{
		_generalMacro = "LOP_US_Infantry_Rifleman_4";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_Infantry_Rifleman_4.jpg";
		scope = 2;
		uniformClass = "LOP_U_US_Fatigue_14";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_base.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"po_factions_eu\us\data\u_fatigue_14_co.paa"};
		displayName = "Rifleman (RPG-26)";
		weapons[] = {"rhs_weap_akms","rhs_weap_rpg26","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","rhs_weap_rpg26","Throw","Put"};
		magazines[] = {"rhs_rpg26_mag","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rdg2_white","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_rpg26_mag","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rdg2_white","rhs_mag_rgd5"};
		linkedItems[] = {"rhs_6b23_digi_6sh92_radio","rhs_6b28_green_ess_bala","G_Bandanna_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_radio","rhs_6b28_green_ess_bala","G_Bandanna_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "";
	};
	class LOP_US_Infantry_GL: LOP_US_Infantry_Base
	{
		_generalMacro = "LOP_US_Infantry_GL";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_Infantry_GL.jpg";
		scope = 2;
		displayName = "Grenadier (AK-74M GP-25)";
		uniformClass = "LOP_U_US_Fatigue_12";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\us\data\u_fatigue_12_co.paa","",""};
		weapons[] = {"rhs_weap_AK74M_gp25","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_AK74M_gp25","Throw","Put","Binocular"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rdg2_white","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rdg2_white","rhs_mag_rgd5"};
		linkedItems[] = {"rhs_6b23_6sh92","LOP_H_6B27M_Skol","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_6sh92","LOP_H_6B27M_Skol","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "";
	};
	class LOP_US_Infantry_GL_2: LOP_US_Infantry_Base
	{
		_generalMacro = "LOP_US_Infantry_GL_2";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_Infantry_GL_2.jpg";
		scope = 2;
		displayName = "Grenadier (AKM GP-25)";
		uniformClass = "LOP_U_US_Fatigue_05";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\us\data\u_fatigue_05_co.paa","",""};
		weapons[] = {"rhs_weap_akm_gp25","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_akm_gp25","Throw","Put","Binocular"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rdg2_white","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rdg2_white","rhs_mag_rgd5"};
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog","rhs_beret_milp","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog","rhs_beret_milp","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "";
	};
	class LOP_US_Infantry_TL: LOP_US_Infantry_Base
	{
		_generalMacro = "LOP_US_Infantry_TL";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_Infantry_TL.jpg";
		scope = 2;
		displayName = "Sergeant";
		cost = 500000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";
		uniformClass = "LOP_U_US_Fatigue_02";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\us\data\u_fatigue_02_co.paa","",""};
		weapons[] = {"rhs_weap_AK74M_gp25","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_AK74M_gp25","Throw","Put","Binocular"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
		linkedItems[] = {"rhs_6b23_digi_6sh92_radio","rhs_6b28_green","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_radio","rhs_6b28_green","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "";
	};
	class LOP_US_Infantry_SL: LOP_US_Infantry_Base
	{
		_generalMacro = "LOP_US_Infantry_SL";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_Infantry_SL.jpg";
		scope = 2;
		displayName = "Junior Sergeant";
		cost = 450000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";
		uniformClass = "LOP_U_US_Fatigue_03";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\us\data\u_fatigue_03_co.paa","",""};
		weapons[] = {"rhs_weap_AK74M_2mag","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_AK74M_2mag","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
		linkedItems[] = {"rhs_6b23_digi_sniper","rhs_6b26_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_digi_sniper","rhs_6b26_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "";
	};
	class LOP_US_Infantry_Officer: LOP_US_Infantry_Base
	{
		_generalMacro = "LOP_US_Infantry_Officer";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_Infantry_Officer.jpg";
		scope = 2;
		displayName = "Officer";
		uniformClass = "LOP_U_US_Fatigue_01";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_officer_s"};
				speechPlural[] = {"veh_infantry_officer_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_officer_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_officer_p";
		nameSound = "veh_infantry_officer_s";
		cost = 600000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManOfficer";
		weapons[] = {"rhs_weap_AK74M_folded","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_AK74M_folded","Throw","Put","Binocular"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
		linkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "";
	};
	class LOP_US_Infantry_AT: LOP_US_Infantry_Base
	{
		_generalMacro = "LOP_US_Infantry_AT";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_Infantry_AT.jpg";
		scope = 2;
		displayName = "Grenadier (RPG-7)";
		uniformClass = "LOP_U_US_Fatigue_06";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\us\data\u_fatigue_06_co.paa","",""};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		cost = 160000;
		threat[] = {1,0.5,0.2};
		icon = "iconManAT";
		weapons[] = {"rhs_weap_AK74M","rhs_weap_rpg7","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_AK74M","rhs_weap_rpg7","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
		linkedItems[] = {"rhs_6b23_digi_vydra_3m","LOP_H_6B27M_ess_Flora","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_digi_vydra_3m","LOP_H_6B27M_ess_Flora","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "LOP_US_RPG_Pack";
	};
	class LOP_US_Infantry_AT_Asst: LOP_US_Infantry_Base
	{
		_generalMacro = "LOP_US_Infantry_AT_Asst";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_Infantry_AT_Asst.jpg";
		scope = 2;
		displayName = "Grenadier Assistant";
		uniformClass = "LOP_U_US_Fatigue_07";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\us\data\u_fatigue_07_co.paa","",""};
		weapons[] = {"rhs_weap_AK74M_camo","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_AK74M_camo","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
		linkedItems[] = {"rhs_6b13_Flora_6sh92","LOP_H_6B27M_Skol","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b13_Flora_6sh92","LOP_H_6B27M_Skol","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "LOP_US_RPG_Pack";
	};
	class LOP_US_Infantry_MG: LOP_US_Infantry_Base
	{
		_generalMacro = "LOP_US_Infantry_MG";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_Infantry_MG.jpg";
		scope = 2;
		displayName = "Machine Gunner (PKM)";
		uniformClass = "LOP_U_US_Fatigue_10";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\us\data\u_fatigue_10_co.paa","",""};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		cost = 125000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		weapons[] = {"rhs_weap_pkm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR","rhs_mag_rdg2_white","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_mag_rdg2_white","rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6B23_6Sh92_OLV","rhs_6b27m_green_ess","rhs_balaclava1_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_6Sh92_OLV","rhs_6b27m_green_ess","rhs_balaclava1_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "LOP_US_Fieldpack_PKM";
	};
	class LOP_US_Infantry_MG_2: LOP_US_Infantry_Base
	{
		_generalMacro = "LOP_US_Infantry_MG";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_Infantry_MG_2.jpg";
		scope = 2;
		displayName = "Machine Gunner (PKP)";
		uniformClass = "LOP_U_US_Fatigue_07";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		cost = 125000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		weapons[] = {"rhs_weap_pkp","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkp","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR","rhs_mag_rdg2_white","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_mag_rdg2_white","rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6Sh92_Radio_OLV","LOP_H_6B27M_ess_Flora","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6Sh92_Radio_OLV","LOP_H_6B27M_ess_Flora","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "LOP_US_Fieldpack_PKM";
	};
	class LOP_US_Infantry_MG_Asst: LOP_US_Infantry_Base
	{
		_generalMacro = "LOP_US_Infantry_MG_Asst";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_Infantry_MG_Asst.jpg";
		scope = 2;
		displayName = "Machine Gunner Assistant";
		uniformClass = "LOP_U_US_Fatigue_09";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\us\data\u_fatigue_09_co.paa","",""};
		weapons[] = {"rhs_weap_AK74M_camo","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_AK74M_camo","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6B23_Rifleman_OLV","LOP_H_6B27M_Flora","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_Rifleman_OLV","LOP_H_6B27M_Flora","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "LOP_US_Fieldpack_PKM";
	};
	class LOP_US_Infantry_Marksman: LOP_US_Infantry_Base
	{
		_generalMacro = "LOP_US_Infantry_Marksman";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_Infantry_Marksman.jpg";
		scope = 2;
		displayName = "Marksman";
		uniformClass = "LOP_U_US_Fatigue_13";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_base.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"po_factions_eu\us\data\u_fatigue_13_co.paa"};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		cost = 150000;
		sensitivity = 3.3;
		weapons[] = {"LOP_Weap_SVDS","Throw","Put","Binocular"};
		respawnWeapons[] = {"LOP_Weap_SVDS","Throw","Put","Binocular"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_rdg2_white","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_rdg2_white","rhs_mag_rgd5"};
		linkedItems[] = {"rhs_6b23_digi_sniper","rhs_beanie_green","G_Bandanna_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_digi_sniper","rhs_beanie_green","G_Bandanna_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "LOP_US_Sidor_SVD";
	};
	class LOP_US_Infantry_AA: LOP_US_Infantry_Base
	{
		_generalMacro = "LOP_US_Infantry_AA";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_Infantry_AA.jpg";
		scope = 2;
		displayName = "Anti Aircraft (Igla)";
		uniformClass = "LOP_U_US_Fatigue_08";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\us\data\u_fatigue_08_co.paa","",""};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		cost = 200000;
		threat[] = {1,1,0.8};
		camouflage = 1.5;
		icon = "iconManAT";
		weapons[] = {"rhs_weap_AK74M_2mag","rhs_weap_igla","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_AK74M_2mag","rhs_weap_igla","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6B23_Rifleman_OLV","rhs_6b27m_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_Rifleman_OLV","rhs_6b27m_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "LOP_US_AA_Pack";
	};
	class LOP_US_Infantry_Crewman: LOP_US_Infantry_Base
	{
		_generalMacro = "LOP_US_Infantry_Crewman";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_Infantry_Crewman.jpg";
		scope = 2;
		displayName = "Crewman";
		uniformClass = "LOP_U_US_Fatigue_03";
		cost = 90000;
		camouflage = 1.6;
		sensitivity = 2.5;
		weapons[] = {"rhs_weap_aks74u","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_aks74u","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6Sh92_OLV","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6Sh92_OLV","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "";
	};
	class LOP_US_Infantry_Corpsman: LOP_US_Infantry_Base
	{
		_generalMacro = "LOP_US_Infantry_Corpsman";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_Infantry_Corpsman.jpg";
		scope = 2;
		displayName = "Medic";
		uniformClass = "LOP_U_US_Fatigue_04";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\us\data\u_fatigue_04_co.paa","",""};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "rhs_assault_umbts_medic";
		picture = "pictureHeal";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "medic";
		textPlural = "medics";
		nameSound = "veh_infantry_medic_s";
		weapons[] = {"rhs_weap_AK74M_camo","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_AK74M_camo","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6B23_6Sh92_OLV","rhs_6b27m_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_6Sh92_OLV","rhs_6b27m_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LOP_US_Infantry_Engineer: LOP_US_Infantry_Base
	{
		_generalMacro = "LOP_US_Infantry_Engineer";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_Infantry_Engineer.jpg";
		scope = 2;
		displayName = "Engineer";
		uniformClass = "LOP_U_US_Fatigue_11";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\us\data\u_fatigue_11_co.paa","",""};
		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.5;
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		weapons[] = {"rhs_weap_AK74M","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_AK74M","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6B23_6Sh92_OLV","rhs_6b27m_digi","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_6Sh92_OLV","rhs_6b27m_digi","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LOP_US_Kitbag_Med: B_Kitbag_rgr
	{
		_generalMacro = "LOP_US_Kitbag_Med";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				count = 15;
				name = "FirstAidKit";
			};
			class _xx_Medikit
			{
				count = 1;
				name = "Medikit";
			};
		};
	};
	class LOP_US_Sidor_SVD: rhs_sidor
	{
		_generalMacro = "LOP_US_Sidor_SVD";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_10Rnd_762x54mmR_7N1
			{
				count = 5;
				magazine = "rhs_10Rnd_762x54mmR_7N1";
			};
			class _xx_rhs_mag_rgd5
			{
				count = 2;
				magazine = "rhs_mag_rgd5";
			};
			class _xx_rhs_mag_rdg2_white
			{
				count = 1;
				magazine = "rhs_mag_rdg2_white";
			};
		};
	};
	class LOP_US_AA_Pack: rhs_rpg_empty
	{
		_generalMacro = "LOP_US_AA_Pack";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_mag_9k38_rocket
			{
				count = 1;
				magazine = "rhs_mag_9k38_rocket";
			};
		};
	};
	class LOP_US_RPG_Pack: rhs_rpg_empty
	{
		_generalMacro = "LOP_US_RPG_Pack";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_rpg7_PG7VR_mag
			{
				count = 2;
				magazine = "rhs_rpg7_PG7VR_mag";
			};
			class _xx_rhs_rpg7_PG7VL_mag
			{
				count = 1;
				magazine = "rhs_rpg7_PG7VL_mag";
			};
		};
	};
	class LOP_US_Fieldpack_PKM: B_FieldPack_khk
	{
		_generalMacro = "LOP_US_Fieldpack_PKM";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_100Rnd_762x54mmR
			{
				count = 4;
				magazine = "rhs_100Rnd_762x54mmR";
			};
		};
	};
	class LOP_US_BM21: LOP_BM21_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		editorPreview = "\po_main\Data\3den\LOP_US_BM21.jpg";
		faction = "LOP_US";
		typicalCargo[] = {"LOP_US_Infantry_Rifleman"};
		crew = "LOP_US_Infantry_Rifleman";
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']"};
	};
	class LOP_US_Ural: LOP_URAL_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		editorPreview = "\po_main\Data\3den\LOP_US_Ural.jpg";
		faction = "LOP_US";
		typicalCargo[] = {"LOP_US_Infantry_Rifleman"};
		crew = "LOP_US_Infantry_Rifleman";
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa","po_main\data\UI\vehicles\novorus_ca.paa"};
	};
	class LOP_US_Ural_open: LOP_URAL_open_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		editorPreview = "\po_main\Data\3den\LOP_US_Ural_open.jpg";
		faction = "LOP_US";
		typicalCargo[] = {"LOP_US_Infantry_Rifleman"};
		crew = "LOP_US_Infantry_Rifleman";
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']"};
	};
	class LOP_US_UAZ: LOP_UAZ_base
	{
		accuracy = 0.5;
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		editorPreview = "\po_main\Data\3den\LOP_US_UAZ.jpg";
		faction = "LOP_US";
		typicalCargo[] = {"LOP_US_Infantry_Rifleman"};
		crew = "LOP_US_Infantry_Rifleman";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa"};
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']"};
	};
	class LOP_US_UAZ_Open: LOP_UAZ_Open_base
	{
		accuracy = 0.5;
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		editorPreview = "\po_main\Data\3den\LOP_US_UAZ_Open.jpg";
		faction = "LOP_US";
		typicalCargo[] = {"LOP_US_Infantry_Rifleman"};
		crew = "LOP_US_Infantry_Rifleman";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa"};
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']"};
	};
	class LOP_US_UAZ_DshKM: LOP_UAZ_DSHKM_Base
	{
		accuracy = 0.5;
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		editorPreview = "\po_main\Data\3den\LOP_US_UAZ_DshKM.jpg";
		faction = "LOP_US";
		typicalCargo[] = {"LOP_US_Infantry_Rifleman"};
		crew = "LOP_US_Infantry_Rifleman";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa","rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_001_co.paa"};
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']"};
	};
	class LOP_US_UAZ_AGS: LOP_UAZ_AGS30_Base
	{
		accuracy = 0.5;
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		editorPreview = "\po_main\Data\3den\LOP_US_UAZ_AGS.jpg";
		faction = "LOP_US";
		typicalCargo[] = {"LOP_US_Infantry_Rifleman"};
		crew = "LOP_US_Infantry_Rifleman";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa","rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_001_co.paa"};
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']"};
	};
	class LOP_US_UAZ_SPG: LOP_UAZ_SPG9_Base
	{
		accuracy = 0.5;
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		editorPreview = "\po_main\Data\3den\LOP_US_UAZ_SPG.jpg";
		faction = "LOP_US";
		typicalCargo[] = {"LOP_US_Infantry_Rifleman"};
		crew = "LOP_US_Infantry_Rifleman";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa","rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_001_co.paa"};
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']"};
	};
	class LOP_US_T72BA: LOP_T72BA_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		editorPreview = "\po_main\Data\3den\LOP_US_T72BA.jpg";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerType = "LOP_US_Infantry_Crewman";
					};
					class CommanderMG: CommanderMG{};
				};
			};
		};
		faction = "LOP_US";
		crew = "LOP_US_Infantry_Crewman";
		typicalCargo[] = {"LOP_US_Infantry_Crewman"};
		rhs_decalParameters[] = {"['Number',cRHST72NumberPlaces,'Handpaint']","['Label',cRHST72PlnSymPlaces, 'Platoon',0]"};
	};
	class LOP_US_T72BB: LOP_T72BB_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		editorPreview = "\po_main\Data\3den\LOP_US_T72BA.jpg";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"rhs_mag_3bm32_7","rhs_mag_3bk18m_6","rhs_mag_3of26_5","rhs_mag_9m119_4","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_3d17"};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerType = "LOP_US_Infantry_Crewman";
					};
					class CommanderMG: CommanderMG{};
				};
			};
		};
		faction = "LOP_US";
		crew = "LOP_US_Infantry_Crewman";
		typicalCargo[] = {"LOP_US_Infantry_Crewman"};
		rhs_decalParameters[] = {"['Number',cRHST72NumberPlaces,'Handpaint']","['Label',cRHST72PlnSymPlaces, 'Platoon',0]"};
	};
	class LOP_US_T72BC: LOP_T72BC_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		editorPreview = "\po_main\Data\3den\LOP_US_T72BA.jpg";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"rhs_mag_3bm32_7","rhs_mag_3bk18m_6","rhs_mag_3of26_5","rhs_mag_9m119_4","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_3d17"};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerType = "LOP_US_Infantry_Crewman";
					};
					class CommanderMG: CommanderMG{};
				};
			};
		};
		faction = "LOP_US";
		crew = "LOP_US_Infantry_Crewman";
		typicalCargo[] = {"LOP_US_Infantry_Crewman"};
		rhs_decalParameters[] = {"['Number',cRHST72NumberPlaces,'Handpaint']","['Label',cRHST72PlnSymPlaces, 'Platoon',0]"};
	};
	class LOP_US_BMP2D: LOP_BMP2D_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		editorPreview = "\po_main\Data\3den\LOP_US_BMP2D.jpg";
		faction = "LOP_US";
		crew = "LOP_US_Infantry_Crewman";
		typicalCargo[] = {"LOP_US_Infantry_Crewman"};
		rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Handpaint']","['Label', cBMPPlatoon, 'Platoon',0]","['Label', cBMPLeftBack, 'Army', 20]"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_bmp\textures\bmp_1_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_4_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa"};
	};
	class LOP_US_BMP2: LOP_BMP2_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		editorPreview = "\po_main\Data\3den\LOP_US_BMP2.jpg";
		faction = "LOP_US";
		crew = "LOP_US_Infantry_Crewman";
		typicalCargo[] = {"LOP_US_Infantry_Crewman"};
		rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Handpaint']","['Label', cBMPPlatoon, 'Platoon',0]","['Label', cBMPLeftBack, 'Army', 20]"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_bmp\textures\bmp_1_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_4_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa"};
	};
	class LOP_US_BMP1: LOP_BMP1_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		editorPreview = "\po_main\Data\3den\LOP_US_BMP1.jpg";
		faction = "LOP_US";
		crew = "LOP_US_Infantry_Crewman";
		typicalCargo[] = {"LOP_US_Infantry_Crewman"};
		rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Handpaint']","['Label', cBMPPlatoon, 'Platoon',0]","['Label', cBMPLeftBack, 'Army', 20]"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_bmp\textures\bmp_1_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_4_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa"};
	};
	class LOP_US_BMP1D: LOP_BMP1D_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		editorPreview = "\po_main\Data\3den\LOP_US_BMP1D.jpg";
		faction = "LOP_US";
		crew = "LOP_US_Infantry_Crewman";
		typicalCargo[] = {"LOP_US_Infantry_Crewman"};
		rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Handpaint']","['Label', cBMPPlatoon, 'Platoon',0]","['Label', cBMPLeftBack, 'Army', 20]"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_bmp\textures\bmp_1_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_4_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa"};
	};
	class LOP_US_ZSU234: LOP_ZSU234_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		editorPreview = "\po_main\Data\3den\LOP_US_ZSU234.jpg";
		faction = "LOP_US";
		crew = "LOP_US_Infantry_Crewman";
		typicalCargo[] = {"LOP_US_Infantry_Crewman"};
		rhs_decalParameters[] = {"['Number',cRHSZSUNumberPlaces,'Handpaint']"};
	};
	class LOP_US_BTR60: LOP_BTR60_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		editorPreview = "\po_main\Data\3den\LOP_US_BTR60.jpg";
		faction = "LOP_US";
		crew = "LOP_US_Infantry_Crewman";
		typicalCargo[] = {"LOP_US_Infantry_Crewman"};
		rhs_decalParameters[] = {"['Number', cBTRCDF4NumberPlaces, 'Handpaint']"};
	};
	class LOP_US_BTR70: LOP_BTR70_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		editorPreview = "\po_main\Data\3den\LOP_US_BTR70.jpg";
		faction = "LOP_US";
		crew = "LOP_US_Infantry_Crewman";
		typicalCargo[] = {"LOP_US_Infantry_Crewman"};
		rhs_decalParameters[] = {"['Number', cBTRCDF4NumberPlaces, 'Handpaint']"};
	};
	class LOP_US_NSV_TriPod: RHS_NSV_TriPod_MSV
	{
		generalMacro = "LOP_US_NSV_TriPod";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_NSV_TriPod.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		faction = "LOP_US";
		crew = "LOP_US_Infantry_Rifleman";
		typicalCargo[] = {"LOP_US_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
	};
	class LOP_US_Igla_AA_pod: rhs_Igla_AA_pod_vdv
	{
		generalMacro = "LOP_US_Igla_AA_pod";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_Igla_AA_pod.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		faction = "LOP_US";
		crew = "LOP_US_Infantry_Rifleman";
		typicalCargo[] = {"LOP_US_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
	};
	class LOP_US_AGS30_TriPod: RHS_AGS30_TriPod_VDV
	{
		generalMacro = "LOP_US_AGS30_TriPod";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_AGS30_TriPod.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		faction = "LOP_US";
		crew = "LOP_US_Infantry_Rifleman";
		typicalCargo[] = {"LOP_US_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
	};
	class LOP_US_Kord: rhs_KORD_VDV
	{
		generalMacro = "LOP_US_Kord";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_Kord.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		faction = "LOP_US";
		crew = "LOP_US_Infantry_Rifleman";
		typicalCargo[] = {"LOP_US_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
	};
	class LOP_US_Kord_High: rhs_KORD_high_VDV
	{
		generalMacro = "LOP_US_Kord_High";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_Kord_High.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		faction = "LOP_US";
		crew = "LOP_US_Infantry_Rifleman";
		typicalCargo[] = {"LOP_US_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
	};
	class LOP_US_ZU23: RHS_ZU23_VDV
	{
		generalMacro = "LOP_US_ZU23";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_US_ZU23.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		faction = "LOP_US";
		crew = "LOP_US_Infantry_Rifleman";
		typicalCargo[] = {"LOP_US_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerType = "LOP_US_Infantry_Rifleman";
			};
		};
	};
	class Civilian;
	class Civilian_F: Civilian
	{
		class EventHandlers;
	};
	class LOP_CHR_Civ_Villager_01: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Villager_01";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Villager_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\villager";
		uniformClass = "LOP_U_CHR_Villager_01";
		displayName = "Villager (Blue Check)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\villager_co.paa"};
		linkedItems[] = {"LOP_H_Villager_cap"};
		respawnLinkedItems[] = {"LOP_H_Villager_cap"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\villager.rvmat","po_factions_eu\civilians\villager_W1.rvmat","po_factions_eu\civilians\villager_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Villager_02: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Villager_02";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Villager_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\villager";
		uniformClass = "LOP_U_CHR_Villager_02";
		displayName = "Villager (Yellow Check)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\villager_v2_co.paa"};
		linkedItems[] = {"LOP_H_Villager_cap"};
		respawnLinkedItems[] = {"LOP_H_Villager_cap"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\villager.rvmat","po_factions_eu\civilians\villager_W1.rvmat","po_factions_eu\civilians\villager_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Villager_03: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Villager_03";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Villager_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\villager";
		uniformClass = "LOP_U_CHR_Villager_03";
		displayName = "Villager (Green)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\villager_v3_co.paa"};
		linkedItems[] = {"LOP_H_Villager_cap"};
		respawnLinkedItems[] = {"LOP_H_Villager_cap"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\villager.rvmat","po_factions_eu\civilians\villager_W1.rvmat","po_factions_eu\civilians\villager_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Villager_04: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Villager_04";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Villager_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\villager";
		uniformClass = "LOP_U_CHR_Villager_04";
		displayName = "Villager (Blue)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\villager_v4_co.paa"};
		linkedItems[] = {"LOP_H_Villager_cap"};
		respawnLinkedItems[] = {"LOP_H_Villager_cap"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\villager.rvmat","po_factions_eu\civilians\villager_W1.rvmat","po_factions_eu\civilians\villager_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Woodlander_01: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Woodlander_01";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Woodlander_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\woodlander";
		uniformClass = "LOP_U_CHR_Woodlander_01";
		displayName = "Woodlander (Blue)";
		linkedItems[] = {"LOP_H_Ushanka_cap"};
		respawnLinkedItems[] = {"LOP_H_Ushanka_cap"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\woodlander_co.paa"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\woodlander.rvmat","po_factions_eu\civilians\woodlander_W1.rvmat","po_factions_eu\civilians\woodlander_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Woodlander_02: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Woodlander_02";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Woodlander_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\woodlander";
		uniformClass = "LOP_U_CHR_Woodlander_02";
		displayName = "Woodlander (Brown)";
		linkedItems[] = {"LOP_H_Ushanka_cap"};
		respawnLinkedItems[] = {"LOP_H_Ushanka_cap"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\woodlander_v2_co.paa"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\woodlander.rvmat","po_factions_eu\civilians\woodlander_W1.rvmat","po_factions_eu\civilians\woodlander_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Woodlander_03: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Woodlander_03";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Woodlander_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\woodlander";
		uniformClass = "LOP_U_CHR_Woodlander_03";
		displayName = "Woodlander (Camo)";
		linkedItems[] = {"LOP_H_Ushanka_cap"};
		respawnLinkedItems[] = {"LOP_H_Ushanka_cap"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\woodlander_v3_co.paa"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\woodlander.rvmat","po_factions_eu\civilians\woodlander_W1.rvmat","po_factions_eu\civilians\woodlander_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Woodlander_04: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Woodlander_04";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Woodlander_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\woodlander";
		uniformClass = "LOP_U_CHR_Woodlander_04";
		displayName = "Woodlander (Green)";
		linkedItems[] = {"LOP_H_Ushanka_cap"};
		respawnLinkedItems[] = {"LOP_H_Ushanka_cap"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\woodlander_v4_co.paa"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\woodlander.rvmat","po_factions_eu\civilians\woodlander_W1.rvmat","po_factions_eu\civilians\woodlander_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Worker_01: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Worker_01";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Worker_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\worker";
		uniformClass = "LOP_U_CHR_Worker_01";
		displayName = "Worker (Brown)";
		linkedItems[] = {"LOP_H_Worker_cap"};
		respawnLinkedItems[] = {"LOP_H_Worker_cap"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\worker_co.paa"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\worker.rvmat","po_factions_eu\civilians\worker_W1.rvmat","po_factions_eu\civilians\worker_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Worker_02: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Worker_02";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Worker_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\worker";
		uniformClass = "LOP_U_CHR_Worker_02";
		displayName = "Worker (Green)";
		linkedItems[] = {"LOP_H_Worker_cap"};
		respawnLinkedItems[] = {"LOP_H_Worker_cap"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\worker_v2_co.paa"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\worker.rvmat","po_factions_eu\civilians\worker_W1.rvmat","po_factions_eu\civilians\worker_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Worker_03: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Worker_03";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Worker_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\worker";
		uniformClass = "LOP_U_CHR_Worker_03";
		displayName = "Worker (Blue)";
		linkedItems[] = {"LOP_H_Worker_cap"};
		respawnLinkedItems[] = {"LOP_H_Worker_cap"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\worker_v3_co.paa"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\worker.rvmat","po_factions_eu\civilians\worker_W1.rvmat","po_factions_eu\civilians\worker_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Worker_04: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Worker_04";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Worker_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\worker";
		uniformClass = "LOP_U_CHR_Worker_04";
		displayName = "Worker (Brown Check)";
		linkedItems[] = {"LOP_H_Worker_cap"};
		respawnLinkedItems[] = {"LOP_H_Worker_cap"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\worker_v4_co.paa"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\worker.rvmat","po_factions_eu\civilians\worker_W1.rvmat","po_factions_eu\civilians\worker_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Rocker_01: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Rocker_01";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Rocker_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\Rocker";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\rocker_co.paa"};
		uniformClass = "LOP_U_CHR_Rocker_01";
		displayName = "Rocker (Band)";
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\Rocker.rvmat","po_factions_eu\civilians\Rocker_W1.rvmat","po_factions_eu\civilians\Rocker_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Rocker_02: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Rocker_02";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Rocker_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\Rocker";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\rocker_v2_co.paa"};
		uniformClass = "LOP_U_CHR_Rocker_02";
		displayName = "Rocker (Skull)";
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\Rocker.rvmat","po_factions_eu\civilians\Rocker_W1.rvmat","po_factions_eu\civilians\Rocker_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Rocker_03: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Rocker_03";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Rocker_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\Rocker";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\rocker_v3_co.paa"};
		uniformClass = "LOP_U_CHR_Rocker_03";
		displayName = "Rocker (Anarchy)";
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\Rocker.rvmat","po_factions_eu\civilians\Rocker_W1.rvmat","po_factions_eu\civilians\Rocker_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Rocker_04: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Rocker_04";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Rocker_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\Rocker";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\rocker_v4_co.paa"};
		uniformClass = "LOP_U_CHR_Rocker_04";
		displayName = "Rocker (Hippie)";
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\Rocker.rvmat","po_factions_eu\civilians\Rocker_W1.rvmat","po_factions_eu\civilians\Rocker_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Profiteer_01: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Profiteer_01";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Profiteer_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\Profiteer";
		uniformClass = "LOP_U_CHR_Profiteer_01";
		displayName = "Profiteer (Gray)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\Profiteer_co.paa"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\Profiteer.rvmat","po_factions_eu\civilians\Profiteer_W1.rvmat","po_factions_eu\civilians\Profiteer_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Profiteer_02: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Profiteer_02";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Profiteer_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\Profiteer";
		uniformClass = "LOP_U_CHR_Profiteer_02";
		displayName = "Profiteer (Blue)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\Profiteer_v2_co.paa"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\Profiteer.rvmat","po_factions_eu\civilians\Profiteer_W1.rvmat","po_factions_eu\civilians\Profiteer_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Profiteer_03: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Profiteer_03";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Profiteer_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\Profiteer";
		uniformClass = "LOP_U_CHR_Profiteer_03";
		displayName = "Profiteer (Brown)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\Profiteer_v3_co.paa"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\Profiteer.rvmat","po_factions_eu\civilians\Profiteer_W1.rvmat","po_factions_eu\civilians\Profiteer_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Profiteer_04: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Profiteer_04";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Profiteer_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\Profiteer";
		uniformClass = "LOP_U_CHR_Profiteer_04";
		displayName = "Profiteer (Red)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\Profiteer_v4_co.paa"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\Profiteer.rvmat","po_factions_eu\civilians\Profiteer_W1.rvmat","po_factions_eu\civilians\Profiteer_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Priest_01: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Priest_01";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Priest_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\Priest";
		uniformClass = "LOP_U_CHR_Priest_01";
		displayName = "Priest";
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\Priest.rvmat","po_factions_eu\civilians\Priest_W1.rvmat","po_factions_eu\civilians\Priest_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Doctor_01: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Doctor_01";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Doctor_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\Doctor";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\doctor_co.paa"};
		uniformClass = "LOP_U_CHR_Doctor_01";
		displayName = "Doctor";
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\Doctor.rvmat","po_factions_eu\civilians\Doctor_W1.rvmat","po_factions_eu\civilians\Doctor_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_SchoolTeacher: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_SchoolTeacher";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Doctor_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\Doctor";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\doctor_2_co.paa"};
		uniformClass = "LOP_U_CHR_SchoolTeacher_01";
		displayName = "School Teacher";
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\Doctor.rvmat","po_factions_eu\civilians\Doctor_W1.rvmat","po_factions_eu\civilians\Doctor_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Assistant: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_SchoolTeacher";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Doctor_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\Doctor";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\doctor_3_co.paa"};
		uniformClass = "LOP_U_CHR_Assistant_01";
		displayName = "Assistant";
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\Doctor.rvmat","po_factions_eu\civilians\Doctor_W1.rvmat","po_factions_eu\civilians\Doctor_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Policeman_01: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Policeman_01";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Policeman_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\Policeman";
		uniformClass = "LOP_U_CHR_Policeman_01";
		displayName = "Policeman";
		weapons[] = {"rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"LOP_H_Policeman_cap","ItemMap","ItemCompass"};
		respawnLinkedItems[] = {"LOP_H_Policeman_cap","ItemMap","ItemCompass"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\Policeman.rvmat","po_factions_eu\civilians\Policeman_W1.rvmat","po_factions_eu\civilians\Policeman_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Functionary_01: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Functionary_01";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Functionary_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\Functionary";
		uniformClass = "LOP_U_CHR_Functionary_01";
		displayName = "Functionary (Black suit)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\functionary_co.paa"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\Functionary.rvmat","po_factions_eu\civilians\Functionary_W1.rvmat","po_factions_eu\civilians\Functionary_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Functionary_02: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Functionary_02";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Functionary_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\Functionary";
		uniformClass = "LOP_U_CHR_Functionary_02";
		displayName = "Functionary (Brown suit)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\functionary_2_co.paa"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\Functionary.rvmat","po_factions_eu\civilians\Functionary_W1.rvmat","po_factions_eu\civilians\Functionary_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Citizen_01: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Citizen_01";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Villager_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\citizen";
		uniformClass = "LOP_U_CHR_Citizen_01";
		displayName = "Citizen (Brown)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\data\citizen_co.paa"};
		linkedItems[] = {"LOP_H_Villager_cap"};
		respawnLinkedItems[] = {"LOP_H_Villager_cap"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\data\citizen.rvmat","po_factions_eu\civilians\data\W1_citizen.rvmat","po_factions_eu\civilians\data\W2_citizen.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class LOP_CHR_Civ_Citizen_02: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Citizen_02";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Villager_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\citizen";
		uniformClass = "LOP_U_CHR_Citizen_02";
		displayName = "Citizen (Gray)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\data\citizen_v2_co.paa"};
		linkedItems[] = {"LOP_H_Villager_cap"};
		respawnLinkedItems[] = {"LOP_H_Villager_cap"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\data\citizen.rvmat","po_factions_eu\civilians\data\W1_citizen.rvmat","po_factions_eu\civilians\data\W2_citizen.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class LOP_CHR_Civ_Citizen_03: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Citizen_03";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Villager_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\citizen";
		uniformClass = "LOP_U_CHR_Citizen_03";
		displayName = "Citizen (Beige)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\data\citizen_v3_co.paa"};
		linkedItems[] = {"LOP_H_Villager_cap"};
		respawnLinkedItems[] = {"LOP_H_Villager_cap"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\data\citizen.rvmat","po_factions_eu\civilians\data\W1_citizen.rvmat","po_factions_eu\civilians\data\W2_citizen.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class LOP_CHR_Civ_Citizen_04: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Citizen_04";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Villager_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\po_factions_eu\civilians\citizen";
		uniformClass = "LOP_U_CHR_Citizen_04";
		displayName = "Citizen (Blue)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\data\citizen_v4_co.paa"};
		linkedItems[] = {"LOP_H_Villager_cap"};
		respawnLinkedItems[] = {"LOP_H_Villager_cap"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\data\citizen.rvmat","po_factions_eu\civilians\data\W1_citizen.rvmat","po_factions_eu\civilians\data\W2_citizen.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class LOP_CHR_Civ_Citizen_05: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Citizen_05";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Villager_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Armed_civ";
		editorSubcategory = "LOP_Armed_civ";
		model = "\po_factions_eu\civilians\citizen";
		uniformClass = "LOP_U_CHR_Citizen_05";
		displayName = "Chechen Citizen (M81)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\data\Che_Citizen1.paa"};
		linkedItems[] = {"LOP_H_Villager_cap"};
		respawnLinkedItems[] = {"LOP_H_Villager_cap"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\data\citizen.rvmat","po_factions_eu\civilians\data\W1_citizen.rvmat","po_factions_eu\civilians\data\W2_citizen.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class LOP_CHR_Civ_Citizen_06: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Citizen_06";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Villager_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Armed_civ";
		editorSubcategory = "LOP_Armed_civ";
		model = "\po_factions_eu\civilians\citizen";
		uniformClass = "LOP_U_CHR_Citizen_06";
		displayName = "Chechen Citizen (VSR)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\data\Che_Citizen2.paa"};
		linkedItems[] = {"LOP_H_Villager_cap"};
		respawnLinkedItems[] = {"LOP_H_Villager_cap"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\data\citizen.rvmat","po_factions_eu\civilians\data\W1_citizen.rvmat","po_factions_eu\civilians\data\W2_citizen.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class LOP_CHR_Civ_Citizen_07: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Citizen_07";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Villager_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Armed_civ";
		editorSubcategory = "LOP_Armed_civ";
		model = "\po_factions_eu\civilians\citizen";
		uniformClass = "LOP_U_CHR_Citizen_07";
		displayName = "Chechen Citizen (Camo)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\data\Che_Citizen3.paa"};
		linkedItems[] = {"LOP_H_Villager_cap"};
		respawnLinkedItems[] = {"LOP_H_Villager_cap"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\data\citizen.rvmat","po_factions_eu\civilians\data\W1_citizen.rvmat","po_factions_eu\civilians\data\W2_citizen.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class LOP_CHR_Civ_Woodlander_05: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Woodlander_05";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Woodlander_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Armed_civ";
		editorSubcategory = "LOP_Armed_civ";
		model = "\po_factions_eu\civilians\woodlander";
		uniformClass = "LOP_U_CHR_Woodlander_05";
		displayName = "Chechen Woodlander (VSR)";
		linkedItems[] = {"LOP_H_Ushanka_cap"};
		respawnLinkedItems[] = {"LOP_H_Ushanka_cap"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\data\Che_Wood1.paa"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\woodlander.rvmat","po_factions_eu\civilians\woodlander_W1.rvmat","po_factions_eu\civilians\woodlander_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Woodlander_06: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Woodlander_06";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Woodlander_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Armed_civ";
		editorSubcategory = "LOP_Armed_civ";
		model = "\po_factions_eu\civilians\woodlander";
		uniformClass = "LOP_U_CHR_Woodlander_06";
		displayName = "Chechen Woodlander (VSR+M81)";
		linkedItems[] = {"LOP_H_Ushanka_cap"};
		respawnLinkedItems[] = {"LOP_H_Ushanka_cap"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\data\Che_Wood2.paa"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\woodlander.rvmat","po_factions_eu\civilians\woodlander_W1.rvmat","po_factions_eu\civilians\woodlander_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Worker_05: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Worker_05";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Worker_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Armed_civ";
		editorSubcategory = "LOP_Armed_civ";
		model = "\po_factions_eu\civilians\worker";
		uniformClass = "LOP_U_CHR_Worker_05";
		displayName = "Chechen Worker (M81+VSR)";
		linkedItems[] = {"LOP_H_Worker_cap"};
		respawnLinkedItems[] = {"LOP_H_Worker_cap"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\data\Che_Worker1.paa"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\worker.rvmat","po_factions_eu\civilians\worker_W1.rvmat","po_factions_eu\civilians\worker_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Worker_06: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Worker_06";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Worker_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Armed_civ";
		editorSubcategory = "LOP_Armed_civ";
		model = "\po_factions_eu\civilians\worker";
		uniformClass = "LOP_U_CHR_Worker_06";
		displayName = "Chechen Worker (VSR)";
		linkedItems[] = {"LOP_H_Worker_cap"};
		respawnLinkedItems[] = {"LOP_H_Worker_cap"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\data\Che_Worker2.paa"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\worker.rvmat","po_factions_eu\civilians\worker_W1.rvmat","po_factions_eu\civilians\worker_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Worker_07: Civilian_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CHR_Civ_Worker_07";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Worker_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Armed_civ";
		editorSubcategory = "LOP_Armed_civ";
		model = "\po_factions_eu\civilians\worker";
		uniformClass = "LOP_U_CHR_Worker_07";
		displayName = "Chechen Worker (KLMK)";
		linkedItems[] = {"LOP_H_Worker_cap"};
		respawnLinkedItems[] = {"LOP_H_Worker_cap"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\po_factions_eu\civilians\data\Che_Worker3.paa"};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"po_factions_eu\civilians\worker.rvmat","po_factions_eu\civilians\worker_W1.rvmat","po_factions_eu\civilians\worker_W2.rvmat"};
		};
	};
	class LOP_CHR_Civ_Random: LOP_CHR_Civ_Villager_01
	{
		author = "$STR_LOP_FULL_NAME";
		displayName = "Random Civil";
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Functionary_01.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		faction = "LOP_CHR_Civ";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		headgearList[] = {"LOP_H_Ushanka",0.25,"LOP_H_Villager_cap",0.25,"LOP_H_Worker_cap",0.25,"H_Cap_tan",0.25,"H_Cap_blk",0.25,"H_Cap_blk_CMMG",0.25,"H_Cap_brn_SPECOPS",0.25,"H_Cap_tan_specops_US",0.25,"H_Cap_khaki_specops_UK",0.25,"H_Cap_red",0.25,"H_Cap_grn",0.25,"H_Cap_blu",0.25,"H_Cap_grn_BI",0.25,"H_Cap_blk_Raven",0.25,"H_Cap_blk_ION",0.25,"H_Beret_blk",0.25,"H_Beret_red",0.25,"H_Beret_grn",0.25,"",11};
		rds_randomCloths[] = {"LOP_U_CHR_Rocker_01",0.15,"LOP_U_CHR_Rocker_02",0.15,"LOP_U_CHR_Rocker_03",0.15,"LOP_U_CHR_Rocker_04",0.15,"LOP_U_CHR_Villager_01",0.15,"LOP_U_CHR_Villager_02",0.15,"LOP_U_CHR_Villager_03",0.15,"LOP_U_CHR_Villager_04",0.15,"LOP_U_CHR_Worker_01",0.25,"LOP_U_CHR_Worker_02",0.25,"LOP_U_CHR_Worker_03",0.25,"LOP_U_CHR_Worker_04",0.25,"LOP_U_CHR_Citizen_01",0.25,"LOP_U_CHR_Citizen_02",0.25,"LOP_U_CHR_Citizen_03",0.25,"LOP_U_CHR_Citizen_04",0.25,"LOP_U_CHR_Profiteer_01",0.25,"LOP_U_CHR_Profiteer_02",0.25,"LOP_U_CHR_Profiteer_03",0.25,"LOP_U_CHR_Profiteer_04",0.25,"LOP_U_CHR_Woodlander_01",0.2,"LOP_U_CHR_Woodlander_02",0.2,"LOP_U_CHR_Woodlander_03",0.2,"LOP_U_CHR_Woodlander_04",0.2,"LOP_U_CHR_Doctor_01",0.1,"LOP_U_CHR_SchoolTeacher_01",0.1,"LOP_U_CHR_Assistant_01",0.1};
		class EventHandlers: EventHandlers
		{
			class LOP_CIV_EH
			{
				init = "_this call lop_fnc_randomUniform";
			};
		};
		identityTypes[] = {"LanguageRUS","Head_Euro","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
	};	
	
	class LOP_CHR_Civ_Hatchback: LOP_Hatchback_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Hatchback.jpg";
		faction = "LOP_CHR_Civ";
		typicalCargo[] = {"LOP_CHR_Civ_Random"};
		crew = "LOP_CHR_Civ_Random";
	};
	class LOP_CHR_Civ_Ural: LOP_URAL_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Ural.jpg";
		faction = "LOP_CHR_Civ";
		typicalCargo[] = {"LOP_CHR_Civ_Random"};
		crew = "LOP_CHR_Civ_Random";
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'CDF']"};
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civil_co.paa","\rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civil_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
	};
	class LOP_CHR_Civ_Ural_open: LOP_URAL_open_base
	{
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_Ural_open.jpg";
		faction = "LOP_CHR_Civ";
		typicalCargo[] = {"LOP_CHR_Civ_Random"};
		crew = "LOP_CHR_Civ_Random";
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'CDF']"};
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civ1_co.paa","\rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civil_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
	};
	class LOP_CHR_Civ_UAZ: LOP_UAZ_base
	{
		accuracy = 0.5;
		scope = 2;
		scopearsenal = 0;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_UAZ.jpg";
		faction = "LOP_CHR_Civ";
		typicalCargo[] = {"LOP_CHR_Civ_Villager_01"};
		crew = "LOP_CHR_Civ_Villager_01";
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_civil_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
	};
	class LOP_CHR_Civ_UAZ_Open: LOP_UAZ_Open_base
	{
		accuracy = 0.5;
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 3;
		editorPreview = "\po_main\Data\3den\LOP_CHR_Civ_UAZ_Open.jpg";
		faction = "LOP_CHR_Civ";
		typicalCargo[] = {"LOP_CHR_Civ_Villager_01"};
		crew = "LOP_CHR_Civ_Villager_01";
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_civil_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
	};
	class LOP_UVF_Infantry_base: I_Soldier_base_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_UVF_Infantry_base";
		editorPreview = "\po_main\Data\3den\1placeholder.jpg";
		identityTypes[] = {"LanguageENG_F","Head_Euro","G_GUERIL_default"};
		faceType = "Man_A3";
		side = 2;
		faction = "LOP_UVF";
		asr_ai_level = 6;
		camouflage = 2.0;
		genericNames = "GreekMen";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "LOP_U_UVF_Fatigue_BL";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\uvf\data\uvf_soldier_01_clothing_blk_co.paa",""};
		rds_randomCloths[] = {"LOP_U_UVF_Fatigue_BL",0.5,"LOP_U_UVF_Fatigue_BL_OSW",0.45,"LOP_U_UVF_Fatigue_COY_OSW",0.15,"LOP_U_UVF_Fatigue_GREY_GSW",0.45};
		allowedHeadgear[] = {""};
		headgearList[] = {"",1};
		allowedFacewear[] = {"G_Balaclava_blk",1};
		class EventHandlers: EventHandlers
		{
			class LOP_CIV_EH
			{
				init = "_this call lop_fnc_randomUniform";
			};
		};
		scope = 0;
		scopeCurator = 0;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		linkedItems[] = {"G_Balaclava_blk","ItemMap","ItemCompass"};
		respawnLinkedItems[] = {"G_Balaclava_blk","ItemMap","ItemCompass"};
	};
	class LOP_UVF_Infantry_Rifleman: LOP_UVF_Infantry_base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_UVF_Infantry_Rifleman";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Rifleman (AKM)";
		role = "Rifleman";
	};
	class LOP_UVF_Infantry_Rifleman_lite: LOP_UVF_Infantry_base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_UVF_Infantry_Rifleman";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Rifleman (AKMS)";
		cost = 90000;
		role = "Rifleman";
		camouflage = 1.2;
		weapons[] = {"rhs_weap_akms","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
	};
	class LOP_UVF_Infantry_SL: LOP_UVF_Infantry_base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_UVF_Infantry_SL";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Warlord";
		cost = 500000;
		camouflage = 1.6;
		icon = "iconManLeader";
		role = "Rifleman";
		rds_randomCloths[] = {"LOP_U_BH_Fatigue_M81_ACU",0.25,"LOP_U_BH_Fatigue_M81_CHOCO",0.25,"LOP_U_BH_Fatigue_M81_FWDL",0.25,"LOP_U_BH_Fatigue_M81_LIZ",0.25,"LOP_U_BH_Fatigue_M81",0.25,"LOP_U_BH_Fatigue_M81_TRI",0.25,"LOP_U_BH_Fatigue_FWDL_ACU",0.25,"LOP_U_BH_Fatigue_FWDL_CHOCO",0.25,"LOP_U_BH_Fatigue_FWDL",0.25,"LOP_U_BH_Fatigue_FWDL_LIZ",0.25,"LOP_U_BH_Fatigue_FWDL_M81",0.25,"LOP_U_BH_Fatigue_FWDL_TRI",0.25,"LOP_U_BH_Fatigue_ACU",0.25,"LOP_U_BH_Fatigue_ACU_CHOCO",0.25,"LOP_U_BH_Fatigue_ACU_FWDL",0.25,"LOP_U_BH_Fatigue_ACU_LIZ",0.25,"LOP_U_BH_Fatigue_ACU_M81",0.25,"LOP_U_BH_Fatigue_ACU_TRI",0.25,"LOP_U_BH_Fatigue_CHOCO_ACU",0.25,"LOP_U_BH_Fatigue_CHOCO",0.25,"LOP_U_BH_Fatigue_CHOCO_FWDL",0.25,"LOP_U_BH_Fatigue_CHOCO_LIZ",0.25,"LOP_U_BH_Fatigue_CHOCO_M81",0.25,"LOP_U_BH_Fatigue_CHOCO_TRI",0.25,"LOP_U_BH_Fatigue_GUE_FWDL",0.5,"LOP_U_BH_Fatigue_GUE_M81_OLV",0.5,"LOP_U_BH_Fatigue_GUE_TRI_TAN",0.5};
		weapons[] = {"rhs_weap_akms","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_akms","Throw","Put","Binocular"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		linkedItems[] = {"G_Balaclava_blk","ItemMap","ItemCompass","ItemRadio"};
		respawnLinkedItems[] = {"G_Balaclava_blk","ItemMap","ItemCompass","ItemRadio"};
	};
	class LOP_UVF_Infantry_TL: LOP_UVF_Infantry_base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_UVF_Infantry_TL";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		cost = 450000;
		threat[] = {1,0.3,0.1};
		icon = "iconManLeader";
		role = "Grenadier";
		displayName = "Chief";
		rds_randomCloths[] = {"LOP_U_BH_Fatigue_M81_ACU",0.25,"LOP_U_BH_Fatigue_M81_CHOCO",0.25,"LOP_U_BH_Fatigue_M81_FWDL",0.25,"LOP_U_BH_Fatigue_M81_LIZ",0.25,"LOP_U_BH_Fatigue_M81",0.25,"LOP_U_BH_Fatigue_M81_TRI",0.25,"LOP_U_BH_Fatigue_FWDL_ACU",0.25,"LOP_U_BH_Fatigue_FWDL_CHOCO",0.25,"LOP_U_BH_Fatigue_FWDL",0.25,"LOP_U_BH_Fatigue_FWDL_LIZ",0.25,"LOP_U_BH_Fatigue_FWDL_M81",0.25,"LOP_U_BH_Fatigue_FWDL_TRI",0.25,"LOP_U_BH_Fatigue_ACU",0.25,"LOP_U_BH_Fatigue_ACU_CHOCO",0.25,"LOP_U_BH_Fatigue_ACU_FWDL",0.25,"LOP_U_BH_Fatigue_ACU_LIZ",0.25,"LOP_U_BH_Fatigue_ACU_M81",0.25,"LOP_U_BH_Fatigue_ACU_TRI",0.25,"LOP_U_BH_Fatigue_CHOCO_ACU",0.25,"LOP_U_BH_Fatigue_CHOCO",0.25,"LOP_U_BH_Fatigue_CHOCO_FWDL",0.25,"LOP_U_BH_Fatigue_CHOCO_LIZ",0.25,"LOP_U_BH_Fatigue_CHOCO_M81",0.25,"LOP_U_BH_Fatigue_CHOCO_TRI",0.25,"LOP_U_BH_Fatigue_GUE_FWDL",0.5,"LOP_U_BH_Fatigue_GUE_M81_OLV",0.5,"LOP_U_BH_Fatigue_GUE_TRI_TAN",0.5};
		weapons[] = {"rhs_weap_akm_gp25","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm_gp25","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rdg2_white"};
		linkedItems[] = {"G_Balaclava_blk","ItemMap","ItemCompass","ItemRadio"};
		respawnLinkedItems[] = {"G_Balaclava_blk","ItemMap","ItemCompass","ItemRadio"};
		uniformClass = "LOP_U_UVF_Fatigue_BL";
		headgearProbability = 60;
	};
	class LOP_UVF_Infantry_AR: LOP_UVF_Infantry_base
	{
		author = "$STR_LOP_FULL_NAME";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		_generalMacro = "LOP_UVF_Infantry_AR";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Machine Gunner (PKM)";
		weapons[] = {"rhs_weap_pkm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		cost = 120000;
		icon = "iconManMG";
		role = "MachineGunner";
		linkedItems[] = {"V_TacVest_blk","H_ShemagOpen_tan","ItemMap","ItemCompass"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_ShemagOpen_tan","ItemMap","ItemCompass"};
		uniformClass = "LOP_U_UVF_Fatigue_BL";
	};
	class LOP_UVF_Infantry_Corpsman: LOP_UVF_Infantry_base
	{
		author = "$STR_LOP_FULL_NAME";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound = "veh_infantry_medic_s";
		_generalMacro = "LOP_UVF_Infantry_Corpsman";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Bonesetter";
		backpack = "LOP_AFR_Fieldpack_Med";
		weapons[] = {"rhs_weap_akm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		attendant = 1;
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		uniformClass = "LOP_U_UVF_Fatigue_BL";
		cost = 300000;
	};
	class LOP_UVF_Infantry_IED: LOP_UVF_Infantry_base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_UVF_Infantry_IED";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Bomber";
		cost = 115000;
		camouflage = 1.6;
		backpack = "G_Carryall_Exp";
		weapons[] = {"rhs_weap_akms","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		canDeactivateMines = 1;
		detectSkill = 80;
		threat[] = {1,0.5,0.1};
		icon = "iconManExplosive";
		role = "Sapper";
		picture = "pictureExplosive";
		uniformClass = "LOP_U_UVF_Fatigue_BL";
	};
	class LOP_UVF_Infantry_GL: LOP_UVF_Infantry_base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_UVF_Infantry_GL";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Grenadier";
		weapons[] = {"rhs_weap_akm_gp25","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm_gp25","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rdg2_white"};
		cost = 130000;
		role = "Grenadier";
		uniformClass = "LOP_U_UVF_Fatigue_BL";
	};
	class LOP_UVF_Infantry_Marksman: LOP_UVF_Infantry_base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_UVF_Infantry_Marksman";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Rifleman (SVD)";
		weapons[] = {"LOP_Weap_SVDS","Throw","Put"};
		respawnWeapons[] = {"LOP_Weap_SVDS","Throw","Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		cost = 150000;
		role = "Marksman";
		uniformClass = "LOP_U_UVF_Fatigue_BL";
		headgearProbability = 60;
	};
	class LOP_UVF_Infantry_AT: LOP_UVF_Infantry_base
	{
		author = "$STR_LOP_FULL_NAME";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		_generalMacro = "LOP_UVF_Infantry_AT";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Rifleman (RPG-7)";
		weapons[] = {"rhs_weap_akm","rhs_weap_rpg7","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_rpg7","Throw","Put"};
		backpack = "LOP_AFR_RPG_Pack";
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rdg2_white"};
		threat[] = {1,0.6,0.1};
		icon = "iconManAT";
		role = "MissileSpecialist";
		uniformClass = "LOP_U_UVF_Fatigue_BL";
		headgearProbability = 100;
	};
	class LOP_UVF_Infantry_AR_Asst: LOP_UVF_Infantry_base
	{
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_A_F.jpg";
		_generalMacro = "LOP_UVF_Infantry_AR_Asst";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Machine Gunner Assistant";
		cost = 110000;
		role = "Rifleman";
		weapons[] = {"rhs_weap_akms","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		backpack = "LOP_AFR_Sidor_PKM";
		headgearProbability = 60;
	};
	class LOP_UVF_Infantry_Driver: LOP_UVF_Infantry_Rifleman
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_UVF_Infantry_Rifleman";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Driver";
		weapons[] = {"rhs_weap_akms","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","Throw","Put"};
	};
	class LOP_UVF_Infantry_model_BL: LOP_UVF_Infantry_base
	{
		_generalMacro = "LOP_UVF_Infantry_model_BL";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "LOP_U_UVF_Fatigue_BL";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\uvf\data\uvf_soldier_01_clothing_blk_co.paa",""};
	};
	class LOP_UVF_Infantry_model_BL_OSW: LOP_UVF_Infantry_base
	{
		_generalMacro = "LOP_UVF_Infantry_model_BL_OSW";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "LOP_U_UVF_Fatigue_BL_OSW";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\uvf\data\uvf_soldier_01_clothing_blk_olv_sweater_co.paa",""};
	};
	class LOP_UVF_Infantry_model_COY_OSW: LOP_UVF_Infantry_base
	{
		_generalMacro = "LOP_UVF_Infantry_model_COY_OSW";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "LOP_U_UVF_Fatigue_COY_OSW";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\uvf\data\uvf_soldier_01_clothing_cbr_olv_sweater_co.paa",""};
	};
	class LOP_UVF_Infantry_model_GREY_GSW: LOP_UVF_Infantry_base
	{
		_generalMacro = "LOP_UVF_Infantry_model_GREY_GSW";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "LOP_U_UVF_Fatigue_GREY_GSW";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\uvf\data\uvf_soldier_01_clothing_grey_sweater_co.paa",""};
	};	
		
	class LOP_UVF_Igla_AA_pod: rhs_Igla_AA_pod_vdv
	{
		generalMacro = "LOP_UVF_Igla_AA_pod";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_AFR_Igla_AA_pod.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		faction = "LOP_UVF";
		crew = "LOP_UVF_Infantry_Rifleman";
		typicalCargo[] = {"LOP_UVF_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
	};
	class LOP_UVF_AGS30_TriPod: RHS_AGS30_TriPod_VDV
	{
		generalMacro = "LOP_UVF_AGS30_TriPod";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_AFR_AGS30_TriPod.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		faction = "LOP_UVF";
		crew = "LOP_UVF_Infantry_Rifleman";
		typicalCargo[] = {"LOP_UVF_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
	};
	class LOP_UVF_Static_SPG9: rhs_SPG9_INS
	{
		generalMacro = "LOP_UVF_Static_SPG9";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_AFR_Static_SPG9.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		faction = "LOP_UVF";
		crew = "LOP_UVF_Infantry_Rifleman";
		typicalCargo[] = {"LOP_UVF_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
	};
	class LOP_UVF_Static_DSHKM: rhs_DSHKM_ins
	{
		generalMacro = "LOP_UVF_Static_DSHKM";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_AFR_Static_DSHKM.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 2;
		faction = "LOP_UVF";
		crew = "LOP_UVF_Infantry_Rifleman";
		typicalCargo[] = {"LOP_UVF_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
	};
	class LOP_IRA_Infantry_base: I_Soldier_base_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_IRA_Infantry_base";
		editorPreview = "\po_main\Data\3den\1placeholder.jpg";
		identityTypes[] = {"LanguageENG_F","Head_Euro","G_GUERIL_default"};
		faceType = "Man_A3";
		side = 0;
		asr_ai_level = 6;
		camouflage = 1.2;
		faction = "LOP_IRA";
		genericNames = "GreekMen";
		vehicleClass = "LOP_Men";
		editorSubcategory = "LOP_Men";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "LOP_U_IRA_Fatigue_DPM";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ira\data\ira_soldier_01_clothing_wdpm_co.paa",""};
		rds_randomCloths[] = {"LOP_U_IRA_Fatigue_DDPM",0.15,"LOP_U_IRA_Fatigue_DPM_TSW",0.15,"LOP_U_IRA_Fatigue_DPM_BSW",0.45,"LOP_U_IRA_Fatigue_DPM",0.45,"LOP_U_IRA_Fatigue_DPM_GSW",0.45,"LOP_U_IRA_Fatigue_DPM_GNSW",0.45};
		allowedHeadgear[] = {""};
		headgearList[] = {"",1};
		allowedFacewear[] = {"G_Balaclava_blk",1};
		class EventHandlers: EventHandlers
		{
			class LOP_CIV_EH
			{
				init = "_this call lop_fnc_randomUniform";
			};
		};
		scope = 0;
		scopeCurator = 0;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		linkedItems[] = {"G_Balaclava_blk","ItemMap","ItemCompass"};
		respawnLinkedItems[] = {"G_Balaclava_blk","ItemMap","ItemCompass"};
	};
	class LOP_IRA_Infantry_Rifleman: LOP_IRA_Infantry_base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_IRA_Infantry_Rifleman";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Rifleman (AKM)";
		weapons[] = {"rhs_weap_akm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		role = "Rifleman";
	};
	class LOP_IRA_Infantry_Rifleman_lite: LOP_IRA_Infantry_base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_IRA_Infantry_Rifleman";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Rifleman (AKMS)";
		cost = 90000;
		role = "Rifleman";
		camouflage = 1.2;
		weapons[] = {"rhs_weap_akms","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
	};
	class LOP_IRA_Infantry_Rifleman_PM63: LOP_IRA_Infantry_Rifleman
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_IRA_Infantry_Rifleman_PM63";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Rifleman (AKM PM-63)";
		weapons[] = {"rhs_weap_pm63","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pm63","Throw","Put"};
	};
	class LOP_IRA_Infantry_SL: LOP_IRA_Infantry_base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_IRA_Infantry_SL";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Warlord";
		cost = 500000;
		camouflage = 1.6;
		icon = "iconManLeader";
		role = "Rifleman";
		rds_randomCloths[] = {"LOP_U_BH_Fatigue_M81_ACU",0.25,"LOP_U_BH_Fatigue_M81_CHOCO",0.25,"LOP_U_BH_Fatigue_M81_FWDL",0.25,"LOP_U_BH_Fatigue_M81_LIZ",0.25,"LOP_U_BH_Fatigue_M81",0.25,"LOP_U_BH_Fatigue_M81_TRI",0.25,"LOP_U_BH_Fatigue_FWDL_ACU",0.25,"LOP_U_BH_Fatigue_FWDL_CHOCO",0.25,"LOP_U_BH_Fatigue_FWDL",0.25,"LOP_U_BH_Fatigue_FWDL_LIZ",0.25,"LOP_U_BH_Fatigue_FWDL_M81",0.25,"LOP_U_BH_Fatigue_FWDL_TRI",0.25,"LOP_U_BH_Fatigue_ACU",0.25,"LOP_U_BH_Fatigue_ACU_CHOCO",0.25,"LOP_U_BH_Fatigue_ACU_FWDL",0.25,"LOP_U_BH_Fatigue_ACU_LIZ",0.25,"LOP_U_BH_Fatigue_ACU_M81",0.25,"LOP_U_BH_Fatigue_ACU_TRI",0.25,"LOP_U_BH_Fatigue_CHOCO_ACU",0.25,"LOP_U_BH_Fatigue_CHOCO",0.25,"LOP_U_BH_Fatigue_CHOCO_FWDL",0.25,"LOP_U_BH_Fatigue_CHOCO_LIZ",0.25,"LOP_U_BH_Fatigue_CHOCO_M81",0.25,"LOP_U_BH_Fatigue_CHOCO_TRI",0.25,"LOP_U_BH_Fatigue_GUE_FWDL",0.5,"LOP_U_BH_Fatigue_GUE_M81_OLV",0.5,"LOP_U_BH_Fatigue_GUE_TRI_TAN",0.5};
		weapons[] = {"rhs_weap_m16a4_carryhandle","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle","Throw","Put","Binocular"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		linkedItems[] = {"rhs_Booniehat_m81","G_Balaclava_blk","ItemMap","ItemCompass","ItemRadio"};
		respawnLinkedItems[] = {"rhs_Booniehat_m81","G_Balaclava_blk","ItemMap","ItemCompass","ItemRadio"};
	};
	class LOP_IRA_Infantry_TL: LOP_IRA_Infantry_base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_IRA_Infantry_TL";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		cost = 450000;
		threat[] = {1,0.3,0.1};
		icon = "iconManLeader";
		role = "Grenadier";
		displayName = "Chief";
		rds_randomCloths[] = {"LOP_U_BH_Fatigue_M81_ACU",0.25,"LOP_U_BH_Fatigue_M81_CHOCO",0.25,"LOP_U_BH_Fatigue_M81_FWDL",0.25,"LOP_U_BH_Fatigue_M81_LIZ",0.25,"LOP_U_BH_Fatigue_M81",0.25,"LOP_U_BH_Fatigue_M81_TRI",0.25,"LOP_U_BH_Fatigue_FWDL_ACU",0.25,"LOP_U_BH_Fatigue_FWDL_CHOCO",0.25,"LOP_U_BH_Fatigue_FWDL",0.25,"LOP_U_BH_Fatigue_FWDL_LIZ",0.25,"LOP_U_BH_Fatigue_FWDL_M81",0.25,"LOP_U_BH_Fatigue_FWDL_TRI",0.25,"LOP_U_BH_Fatigue_ACU",0.25,"LOP_U_BH_Fatigue_ACU_CHOCO",0.25,"LOP_U_BH_Fatigue_ACU_FWDL",0.25,"LOP_U_BH_Fatigue_ACU_LIZ",0.25,"LOP_U_BH_Fatigue_ACU_M81",0.25,"LOP_U_BH_Fatigue_ACU_TRI",0.25,"LOP_U_BH_Fatigue_CHOCO_ACU",0.25,"LOP_U_BH_Fatigue_CHOCO",0.25,"LOP_U_BH_Fatigue_CHOCO_FWDL",0.25,"LOP_U_BH_Fatigue_CHOCO_LIZ",0.25,"LOP_U_BH_Fatigue_CHOCO_M81",0.25,"LOP_U_BH_Fatigue_CHOCO_TRI",0.25,"LOP_U_BH_Fatigue_GUE_FWDL",0.5,"LOP_U_BH_Fatigue_GUE_M81_OLV",0.5,"LOP_U_BH_Fatigue_GUE_TRI_TAN",0.5};
		weapons[] = {"rhs_weap_akm_gp25","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm_gp25","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rdg2_white"};
		linkedItems[] = {"rhs_Booniehat_m81","G_Balaclava_blk","ItemMap","ItemCompass","ItemRadio"};
		respawnLinkedItems[] = {"rhs_Booniehat_m81","G_Balaclava_blk","ItemMap","ItemCompass","ItemRadio"};
		uniformClass = "LOP_U_IRA_Fatigue_DPM";
		headgearProbability = 60;
	};
	class LOP_IRA_Infantry_AR: LOP_IRA_Infantry_base
	{
		author = "$STR_LOP_FULL_NAME";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		_generalMacro = "LOP_IRA_Infantry_AR";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Machine Gunner (PKM)";
		weapons[] = {"rhs_weap_pkm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		cost = 120000;
		icon = "iconManMG";
		role = "MachineGunner";
		linkedItems[] = {"V_TacVest_blk","H_ShemagOpen_tan","ItemMap","ItemCompass"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_ShemagOpen_tan","ItemMap","ItemCompass"};
		uniformClass = "LOP_U_IRA_Fatigue_DPM";
	};
	class LOP_IRA_Infantry_Corpsman: LOP_IRA_Infantry_base
	{
		author = "$STR_LOP_FULL_NAME";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound = "veh_infantry_medic_s";
		_generalMacro = "LOP_IRA_Infantry_Corpsman";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Bonesetter";
		backpack = "LOP_AFR_Fieldpack_Med";
		weapons[] = {"rhs_weap_m16a4_carryhandle","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		attendant = 1;
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		uniformClass = "LOP_U_IRA_Fatigue_DPM";
		cost = 300000;
	};
	class LOP_IRA_Infantry_IED: LOP_IRA_Infantry_base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_IRA_Infantry_IED";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Bomber";
		cost = 115000;
		camouflage = 1.6;
		backpack = "G_Carryall_Exp";
		weapons[] = {"rhs_weap_m16a4_carryhandle","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		canDeactivateMines = 1;
		detectSkill = 80;
		threat[] = {1,0.5,0.1};
		icon = "iconManExplosive";
		role = "Sapper";
		picture = "pictureExplosive";
		uniformClass = "LOP_U_IRA_Fatigue_DPM";
	};
	class LOP_IRA_Infantry_GL: LOP_IRA_Infantry_base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_IRA_Infantry_GL";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Grenadier";
		weapons[] = {"rhs_weap_akm_gp25","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm_gp25","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rdg2_white"};
		cost = 130000;
		role = "Grenadier";
		uniformClass = "LOP_U_IRA_Fatigue_DPM";
	};
	class LOP_IRA_Infantry_Marksman: LOP_IRA_Infantry_base
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_IRA_Infantry_Marksman";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Rifleman (SVD)";
		weapons[] = {"LOP_Weap_SVDS","Throw","Put"};
		respawnWeapons[] = {"LOP_Weap_SVDS","Throw","Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		cost = 150000;
		role = "Marksman";
		uniformClass = "LOP_U_IRA_Fatigue_DPM";
		headgearProbability = 60;
	};
	class LOP_IRA_Infantry_AT: LOP_IRA_Infantry_base
	{
		author = "$STR_LOP_FULL_NAME";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		_generalMacro = "LOP_IRA_Infantry_AT";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Rifleman (RPG-7)";
		weapons[] = {"rhs_weap_m16a4_carryhandle","rhs_weap_rpg7","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle","rhs_weap_rpg7","Throw","Put"};
		backpack = "LOP_AFR_RPG_Pack";
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_rdg2_white"};
		threat[] = {1,0.6,0.1};
		icon = "iconManAT";
		role = "MissileSpecialist";
		uniformClass = "LOP_U_IRA_Fatigue_DPM";
		headgearProbability = 100;
	};
	class LOP_IRA_Infantry_AR_Asst: LOP_IRA_Infantry_base
	{
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_A_F.jpg";
		_generalMacro = "LOP_IRA_Infantry_AR_Asst";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Machine Gunner Assistant";
		cost = 110000;
		role = "Rifleman";
		weapons[] = {"rhs_weap_m16a4_carryhandle","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_rdg2_white"};
		backpack = "LOP_AFR_Sidor_PKM";
		headgearProbability = 60;
	};
	class LOP_IRA_Infantry_Driver: LOP_IRA_Infantry_Rifleman
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_IRA_Infantry_Rifleman";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		scopeCurator = 2;
		displayName = "Driver";
	};
	class LOP_IRA_Infantry_model_DDPM: LOP_IRA_Infantry_base
	{
		_generalMacro = "LOP_IRA_Infantry_model_DDPM";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "LOP_U_IRA_Fatigue_DDPM";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ira\data\ira_soldier_01_clothing_ddpm_sweater_co.paa",""};
	};
	class LOP_IRA_Infantry_model_DPM_BSW: LOP_IRA_Infantry_base
	{
		_generalMacro = "LOP_IRA_Infantry_model_DPM_BSW";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "LOP_U_IRA_Fatigue_DPM_BSW";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ira\data\ira_soldier_01_clothing_wdpm_bsweater_co.paa",""};
	};
	class LOP_IRA_Infantry_model_DPM: LOP_IRA_Infantry_base
	{
		_generalMacro = "LOP_IRA_Infantry_model_DPM";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "LOP_U_IRA_Fatigue_DPM";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ira\data\ira_soldier_01_clothing_wdpm_co.paa",""};
	};
	class LOP_IRA_Infantry_model_DPM_GSW: LOP_IRA_Infantry_base
	{
		_generalMacro = "LOP_IRA_Infantry_model_DPM_GSW";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "LOP_U_IRA_Fatigue_DPM_GSW";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ira\data\ira_soldier_01_clothing_wdpm_gsweater_co.paa",""};
	};
	class LOP_IRA_Infantry_model_DPM_TSW: LOP_IRA_Infantry_base
	{
		_generalMacro = "LOP_IRA_Infantry_model_DPM_TSW";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "LOP_U_IRA_Fatigue_DPM_TSW";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ira\data\ira_soldier_01_clothing_wdpm_tsweater_co.paa",""};
	};
	class LOP_IRA_Infantry_model_DPM_GNSW: LOP_IRA_Infantry_base
	{
		_generalMacro = "LOP_IRA_Infantry_model_DPM_GNSW";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "LOP_U_IRA_Fatigue_DPM_GNSW";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ira\data\ira_soldier_01_clothing_wdpm_gnsweater_co.paa",""};
	};
	class LOP_IRA_Infantry_model_GRK_BLK: LOP_IRA_Infantry_base
	{
		_generalMacro = "LOP_IRA_Infantry_model_GRK_BLK";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		uniformClass = "LOP_U_IRA_Fatigue_GRK_BLK";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_base.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ira\data\gorkaR_blk_co.paa",""};
	};
	class LOP_IRA_Infantry_model_GRK_BLUE: LOP_IRA_Infantry_base
	{
		_generalMacro = "LOP_IRA_Infantry_model_GRK_BLUE";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		uniformClass = "LOP_U_IRA_Fatigue_GRK_BLUE";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_base.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ira\data\gorkaR_blue_co.paa",""};
	};
	class LOP_IRA_Infantry_model_GRK_OLV: LOP_IRA_Infantry_base
	{
		_generalMacro = "LOP_IRA_Infantry_model_GRK_OLV";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		uniformClass = "LOP_U_IRA_Fatigue_GRK_OLV";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_base.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ira\data\gorkaR_olv_co.paa",""};
	};
	class LOP_IRA_Infantry_model_GRK_DPM: LOP_IRA_Infantry_base
	{
		_generalMacro = "LOP_IRA_Infantry_model_GRK_DPM";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		uniformClass = "LOP_U_IRA_Fatigue_GRK_DPM";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_base.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ira\data\gorkaR_dpm_co.paa",""};
	};
	class LOP_IRA_Infantry_model_HTR_BLK: LOP_IRA_Infantry_base
	{
		_generalMacro = "LOP_IRA_Infantry_model_HTR_BLK";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		uniformClass = "LOP_U_IRA_Fatigue_HTR_BLK";
		model = "\a3\characters_f\civil\c_hunter_f.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ira\data\hunter_bushman_blk_co.paa",""};
	};
	class LOP_IRA_Infantry_model_HTR_DPM: LOP_IRA_Infantry_base
	{
		_generalMacro = "LOP_IRA_Infantry_model_HTR_DPM";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		uniformClass = "LOP_U_IRA_Fatigue_HTR_DPM";
		model = "\a3\characters_f\civil\c_hunter_f.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ira\data\hunter_bushman_dpm_co.paa",""};
	};
	class LOP_IRA_Infantry_model_HTR_DPM_J: LOP_IRA_Infantry_base
	{
		_generalMacro = "LOP_IRA_Infantry_model_HTR_DPM_J";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		uniformClass = "LOP_U_IRA_Fatigue_HTR_DPM_J";
		model = "\a3\characters_f\civil\c_hunter_f.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"po_factions_eu\ira\data\hunter_bushman_jean_dpm_co.paa",""};
	};	
	class LOP_IRA_Igla_AA_pod: rhs_Igla_AA_pod_vdv
	{
		generalMacro = "LOP_IRA_Igla_AA_pod";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_AFR_Igla_AA_pod.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		faction = "LOP_IRA";
		crew = "LOP_IRA_Infantry_Rifleman";
		typicalCargo[] = {"LOP_IRA_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
	};
	class LOP_IRA_AGS30_TriPod: RHS_AGS30_TriPod_VDV
	{
		generalMacro = "LOP_IRA_AGS30_TriPod";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_AFR_AGS30_TriPod.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		faction = "LOP_IRA";
		crew = "LOP_IRA_Infantry_Rifleman";
		typicalCargo[] = {"LOP_IRA_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
	};
	class LOP_IRA_Static_SPG9: rhs_SPG9_INS
	{
		generalMacro = "LOP_IRA_Static_SPG9";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_AFR_Static_SPG9.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		faction = "LOP_IRA";
		crew = "LOP_IRA_Infantry_Rifleman";
		typicalCargo[] = {"LOP_IRA_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
	};
	class LOP_IRA_Static_DSHKM: rhs_DSHKM_ins
	{
		generalMacro = "LOP_IRA_Static_DSHKM";
		author = "$STR_LOP_FULL_NAME";
		editorPreview = "\po_main\Data\3den\LOP_AFR_Static_DSHKM.jpg";
		scope = 2;
		dlc = "LOP_LeightsOPFOR";
		side = 0;
		faction = "LOP_IRA";
		crew = "LOP_IRA_Infantry_Rifleman";
		typicalCargo[] = {"LOP_IRA_Infantry_Rifleman"};
		vehicleClass = "LOP_Static";
		editorSubcategory = "LOP_Static";
	};
};
class CfgGroups
{
	class East
	{
		class LOP_US
		{
			name = "$STR_LOP_US";
			class Infantry
			{
				name = "Infantry";
				class LOP_US_Support_section
				{
					name = "Support team";
					faction = "LOP_US";
					side = 0;
					rarityGroup = 0.1;
					class Unit0
					{
						side = 0;
						vehicle = "LOP_US_Infantry_TL";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_US_Infantry_SL";
						rank = "Corporal";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Corpsman";
						rank = "Corporal";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_US_Infantry_AT";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_US_Infantry_AT_Asst";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_US_Infantry_MG";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_US_Infantry_MG_Asst";
						rank = "Private";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "LOP_US_Infantry_GL_2";
						rank = "Private";
						position[] = {15,0,0};
					};
				};
				class LOP_US_Patrol_section
				{
					name = "Sentry";
					faction = "LOP_US";
					side = 0;
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Rifleman_2";
						rank = "Private";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Rifleman_3";
						rank = "Private";
						position[] = {3,0,0};
					};
				};
				class LOP_US_AT_section
				{
					name = "Anti-armor Team";
					faction = "LOP_US";
					side = 0;
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "LOP_US_Infantry_TL";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Rifleman_4";
						rank = "Corporal";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Rifleman";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_US_Infantry_AT";
						rank = "Private";
						position[] = {7,0,0};
					};
				};
				class LOP_US_AA_section
				{
					name = "Anti-air Team";
					faction = "LOP_US";
					side = 0;
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "LOP_US_Infantry_SL";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Rifleman_2";
						rank = "Corporal";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Rifleman";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_US_Infantry_AA";
						rank = "Private";
						position[] = {7,0,0};
					};
				};
				class LOP_US_Rifle_squad
				{
					name = "Rifle squad";
					faction = "LOP_US";
					side = 0;
					rarityGroup = 0.1;
					class Unit0
					{
						side = 0;
						vehicle = "LOP_US_Infantry_TL";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_US_Infantry_SL";
						rank = "Corporal";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Corpsman";
						rank = "Corporal";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Rifleman";
						rank = "Corporal";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_US_Infantry_AT";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_US_Infantry_AT_Asst";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_US_Infantry_GL";
						rank = "Private";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "LOP_US_Infantry_MG";
						rank = "Private";
						position[] = {15,0,0};
					};
				};
				class LOP_US_SUP_section
				{
					name = "Support Team";
					faction = "LOP_US";
					side = 0;
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "LOP_US_Infantry_SL";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Rifleman_4";
						rank = "Corporal";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_US_Infantry_MG_2";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_US_Infantry_GL";
						rank = "Private";
						position[] = {7,0,0};
					};
				};
				class LOP_US_FT_section
				{
					name = "Fire Team";
					faction = "LOP_US";
					side = 0;
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "LOP_US_Infantry_SL";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Rifleman";
						rank = "Corporal";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Rifleman_2";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Rifleman_3";
						rank = "Private";
						position[] = {7,0,0};
					};
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";
				class LOP_US_MotInf_Team
				{
					name = "Motorized Patrol";
					side = 0;
					faction = "LOP_US";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "LOP_US_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_US_UAZ_Open";
						rank = "SERGEANT";
						position[] = {0,-10,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_US_Infantry_MG";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_US_Infantry_AT";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Corpsman";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Rifleman_2";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
				};
				class LOP_US_MotInf_Team_BTR70
				{
					name = "Motorized Patrol (BTR-70)";
					side = 0;
					faction = "LOP_US";
					rarityGroup = 0.1;
					class Unit0
					{
						side = 0;
						vehicle = "LOP_US_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_US_BTR70";
						rank = "SERGEANT";
						position[] = {0,-10,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_US_Infantry_MG";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_US_Infantry_AT";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Rifleman_2";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Rifleman_3";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
				};
				class LOP_US_MotInf_Team_BTR60
				{
					name = "Motorized Patrol (BTR-60)";
					side = 0;
					faction = "LOP_US";
					rarityGroup = 0.2;
					class Unit0
					{
						side = 0;
						vehicle = "LOP_US_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_US_BTR60";
						rank = "SERGEANT";
						position[] = {0,-10,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_US_Infantry_MG";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Rifleman_4";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Rifleman";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_US_Infantry_GL";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
				};
				class LOP_US_MotInf_Team_Ural
				{
					name = "Motorized Patrol";
					side = 0;
					faction = "LOP_US";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "LOP_US_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_US_Ural";
						rank = "SERGEANT";
						position[] = {0,-10,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_US_Infantry_MG";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_US_Infantry_AT";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Corpsman";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Rifleman_2";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
				};
			};
			class Mechanized
			{
				name = "Mechanized Infantry";
				class LOP_US_Mech_squad_BMP2
				{
					name = "Squad (BMP-2)";
					faction = "LOP_US";
					side = 0;
					rarityGroup = 0.1;
					class Unit0
					{
						side = 0;
						vehicle = "LOP_US_Infantry_TL";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_US_Infantry_SL";
						rank = "Corporal";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Corpsman";
						rank = "Corporal";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_US_Infantry_MG";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_US_Infantry_MG_Asst";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_US_Infantry_GL";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_US_BMP2";
						rank = "Sergeant";
						position[] = {15,0,0};
					};
				};
				class LOP_US_Mech_squad_BMP1
				{
					name = "Squad (BMP-1)";
					faction = "LOP_US";
					side = 0;
					rarityGroup = 0.1;
					class Unit0
					{
						side = 0;
						vehicle = "LOP_US_Infantry_TL";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_US_Infantry_SL";
						rank = "Corporal";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_US_Infantry_Corpsman";
						rank = "Corporal";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_US_Infantry_MG";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_US_Infantry_MG_Asst";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_US_Infantry_GL";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_US_BMP1";
						rank = "Sergeant";
						position[] = {15,0,0};
					};
				};
			};
			class Armored
			{
				name = "Armored";
				class LOP_US_ZSU234_Platoon
				{
					name = "ZSU-23-4V Platoon";
					faction = "LOP_US";
					side = 0;
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "LOP_US_ZSU234";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_US_ZSU234";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_US_ZSU234";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
				class LOP_US_T72_Platoon
				{
					name = "T-72 Platoon";
					faction = "LOP_US";
					side = 0;
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "LOP_US_T72BA";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_US_T72BA";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_US_T72BA";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
				class LOP_US_BMP1_Platoon
				{
					name = "BMP-1 Platoon";
					faction = "LOP_US";
					side = 0;
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "LOP_US_BMP1";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_US_BMP1";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_US_BMP1";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
			};
		};
		class LOP_IRA
		{
			name = "$STR_LOP_IRA";
			class Infantry
			{
				name = "Infantry";
				class LOP_IRA_Sentry
				{
					name = "Sentry";
					side = 0;
					faction = "LOP_IRA";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "LOP_IRA_Infantry_GL";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_Rifleman_lite";
					};
				};
				class LOP_IRA_Fireteam
				{
					name = "Fireteam";
					side = 0;
					faction = "LOP_IRA";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "LOP_IRA_Infantry_TL";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_AR";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_AT";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_Rifleman";
					};
				};
				class LOP_IRA_RifleSquad
				{
					name = "Rifle Squad";
					side = 0;
					faction = "LOP_IRA";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "LOP_IRA_Infantry_SL";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_TL";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_AR";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_AR_Asst";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_AT";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_GL";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_Corpsman";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_Rifleman_lite";
					};
				};
				class LOP_IRA_WeaponSquad
				{
					name = "Weapon Squad";
					side = 0;
					faction = "LOP_IRA";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "LOP_IRA_Infantry_SL";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_TL";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_AR";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_AR";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_AR_Asst";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_AT";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_AT";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_Marksman";
					};
				};
				class LOP_IRA_ATTeam
				{
					name = "AT Team";
					side = 0;
					faction = "LOP_IRA";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "LOP_IRA_Infantry_TL";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_AT";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_AT";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_GL";
					};
				};
			};
			class SpecOps
			{
				name = "Special Forces";
				class LOP_IRA_SniperTeam
				{
					name = "Sniper Team";
					side = 0;
					faction = "LOP_IRA";
					icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "LOP_IRA_Infantry_Marksman";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_Rifleman_lite";
					};
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";				
			};
			class Motorized_MTP
			{
				name = "Motorized Infantry (MTP)";
			};
			class Support
			{
				name = "Support Infantry";
				class LOP_IRA_ShockTeam
				{
					name = "Shock Team";
					side = 0;
					faction = "LOP_IRA";
					icon = "\A3\ui_f\data\map\markers\nato\n_support.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "LOP_IRA_Infantry_TL";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_AT";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_IED";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_GL";
					};
				};
				class LOP_IRA_MedicalTeam
				{
					name = "Medical Team";
					side = 0;
					faction = "LOP_IRA";
					icon = "\A3\ui_f\data\map\markers\nato\n_support.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "LOP_IRA_Infantry_TL";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_Corpsman";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "LOP_IRA_Infantry_Corpsman";
					};
				};
			};
			class Mechanized
			{
				name = "Mechanized Infantry";
			};
			class Armored
			{
				name = "Armor";
			};
			class Artillery
			{
				name = "Artillery";
			};
			class Naval
			{
				name = "Naval";
			};
			class Air
			{
				name = "Air";
			};
		};
	};
	class Indep
	{
		class LOP_UKR
		{
			name = "$STR_LOP_UKR";
			class Infantry
			{
				name = "Infantry";
				aliveCategory = "Infantry";
				class lop_ukr_reg_infantry_squad
				{
					name = "Squad";
					faction = "LOP_UKR";
					side = 2;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_AR";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_RPG";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_Grenadier";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_AR";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_RPG";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_Grenadier";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit9
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_medic";
						rank = "PRIVATE";
						position[] = {18,0,0};
					};
				};
				class lop_ukr_reg_infantry_squad_weap
				{
					name = "Squad (Weapons)";
					faction = "LOP_UKR";
					side = 2;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_AR";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_AR";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_AR";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_RPG";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_RPG";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_Grenadier";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
			};
			class Mechanized
			{
				name = "Mechanized Inf.";
				class LOP_UKR_Mech_squad_BMP2
				{
					name = "Squad (BMP-2)";
					faction = "LOP_UKR";
					side = 2;
					aliveCategory = "Mechanized";
					class Unit0
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_sergeant";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_junior_sergeant";
						rank = "Corporal";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_medic";
						rank = "Corporal";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_AR";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_AR_Asst";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_Grenadier";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "LOP_UKR_BMP2";
						rank = "Sergeant";
						position[] = {15,0,0};
					};
				};
				class LOP_UKR_Mech_squad_BMP1
				{
					name = "Squad (BMP-1)";
					faction = "LOP_UKR";
					side = 2;
					aliveCategory = "Mechanized";
					class Unit0
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_sergeant";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_junior_sergeant";
						rank = "Corporal";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_medic";
						rank = "Corporal";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_AR";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_AR_Asst";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "LOP_UKR_Infantry_Grenadier";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "LOP_UKR_BMP1";
						rank = "Sergeant";
						position[] = {15,0,0};
					};
				};
			};
			class Armored
			{
				name = "Armor";
				class LOP_UKR_ZSU234_Platoon
				{
					name = "ZSU-23-4V Platoon";
					faction = "LOP_UKR";
					side = 2;
					aliveCategory = "Armored";
					class Unit0
					{
						side = 2;
						vehicle = "LOP_UKR_ZSU234";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_UKR_ZSU234";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_UKR_ZSU234";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
			};
		};
		class LOP_UVF
		{
			name = "$STR_LOP_UVF";
			class Infantry
			{
				name = "Infantry";
				class LOP_UVF_Sentry
				{
					name = "Sentry";
					side = 2;
					faction = "LOP_UVF";
					icon = "";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "LOP_UVF_Infantry_GL";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_Rifleman";
					};
				};
				class LOP_UVF_Fireteam
				{
					name = "Fireteam";
					side = 2;
					faction = "LOP_UVF";
					icon = "";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "LOP_UVF_Infantry_TL";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_AR";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_AT";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_Rifleman_lite";
					};
				};
				class LOP_UVF_RifleSquad
				{
					name = "Rifle Squad";
					side = 2;
					faction = "LOP_UVF";
					icon = "";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "LOP_UVF_Infantry_SL";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_TL";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_AR";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_AR_Asst";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_AT";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_Corpsman";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_GL";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_Rifleman";
					};
				};
				class LOP_UVF_WeaponSquad
				{
					name = "Weapon Squad";
					side = 2;
					faction = "LOP_UVF";
					icon = "";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "LOP_UVF_Infantry_SL";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_TL";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_AR";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_AR";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_AR_Asst";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_AT";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_AT";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_Marksman";
					};
				};
				class LOP_UVF_ATTeam
				{
					name = "AT Team";
					side = 2;
					faction = "LOP_UVF";
					icon = "";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "LOP_UVF_Infantry_TL";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_AT";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_AT";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_GL";
					};
				};
			};
			class SpecOps
			{
				name = "Special Forces";
				class LOP_UVF_SniperTeam
				{
					name = "Sniper Team";
					side = 2;
					faction = "LOP_UVF";
					icon = "";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "LOP_UVF_Infantry_Marksman";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_Rifleman_lite";
					};
				};
			};			
			class Motorized_MTP
			{
				name = "Motorized Infantry (MTP)";
			};
			class Support
			{
				name = "Support Infantry";
				class LOP_UVF_ShockTeam
				{
					name = "Shock Team";
					side = 2;
					faction = "LOP_UVF";
					icon = "";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "LOP_UVF_Infantry_TL";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_AT";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_IED";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_GL";
					};
				};
				class LOP_UVF_MedicalTeam
				{
					name = "Medical Team";
					side = 2;
					faction = "LOP_UVF";
					icon = "";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "LOP_UVF_Infantry_TL";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_Corpsman";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "LOP_UVF_Infantry_Corpsman";
					};
				};
			};
			class Mechanized
			{
				name = "Mechanized Infantry";
			};
			class Armored
			{
				name = "Armor";
			};
			class Artillery
			{
				name = "Artillery";
			};
			class Naval
			{
				name = "Naval";
			};
			class Air
			{
				name = "Air";
			};
		};
	};
};
