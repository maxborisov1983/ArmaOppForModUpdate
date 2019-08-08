class CfgPatches
{
	class po_main
	{
		units[]=
		{
			"lop_Flag_Afghan_F",
			"lop_Flag_cdf_F",
			"lop_Flag_Iraq_F",
			"lop_Flag_pesh_F",
			"lop_Flag_racs_F",
			"lop_Flag_sla_F",
			"lop_Flag_tak_F",
			"LOP_M113_base",
			"LOP_BMP1_base",
			"LOP_BMP1D_base",
			"LOP_BMP2_base",
			"LOP_BMP2D_base",
			"LOP_BTR60_base",
			"LOP_BTR70_base",
			"LOP_BTR80_base",
			"LOP_T72BA_base",
			"LOP_T72BB_base",
			"LOP_T72BC_base",
			"LOP_ZSU234_base",
			"LOP_BMD1_base",
			"LOP_BMD2_base",
			"LOP_M1A1_base",
			"LOP_M1117_D_base",			
			"LOP_M998_Base",
			"LOP_M1025_M2_base",
			"LOP_M1025_Mk19_base",
			"LOP_M1025_base",
			"LOP_UAZ_base",
			"LOP_UAZ_Open_base",
			"LOP_UAZ_DSHKM_Base",
			"LOP_UAZ_AGS30_Base",
			"LOP_UAZ_SPG9_Base",
			"LOP_URAL_base",
			"LOP_URAL_open_base",
			"LOP_BM21_base",
			"LOP_SUV_base",
			"LOP_Hatchback_base",
			"LOP_KAMAZ_cov_base",
			"LOP_KAMAZ_trans_base",
			"LOP_HEMTT_cov_base",
			"LOP_HEMTT_trans_base",
			"LOP_HEMTT_box_base",
			"LOP_HEMTT_mov_base",			
			"LOP_KAMAZ_med_base",
			"LOP_KAMAZ_rep_base",
			"LOP_KAMAZ_fuel_base",
			"LOP_KAMAZ_ammo_base",
			"LOP_HEMTT_med_base",
			"LOP_HEMTT_rep_base",
			"LOP_HEMTT_fuel_base",
			"LOP_HEMTT_ammo_base",
			"LOP_URAL_fuel_base",
			"LOP_Mi8mt_Cargo_base",
			"LOP_Mi8MTV3_FAB_base",
			"LOP_Mi8MTV3_UPK23_base",
			"LOP_Mi8AMTSh_FAB_base",
			"LOP_Mi8AMTSh_UPK23_base",
			"LOP_Mi24V_AT_base",
			"LOP_Mi24V_FAB_base",
			"LOP_Mi24V_UPK23_base",
			"LOP_SU25SM_base",
			"LOP_LB_Base",
			"LOP_LB_Armed_Base",
			"LOP_LB_Civil_Base",
			"LOP_LB_Stripped_base",
			"LOP_UH60M_Base",
			"LOP_Mi8amt_Base",
			"LOP_CH47F_Base",
			"LOP_CH53E_Base",
			"LOP_UH1Y_UN_Base",
			"LOP_AH1Z_WD_Base",
			"LOP_AH1Z_GS_Base",
			"LOP_AH1Z_CS_Base"
		};
		weapons[]={};
		version="0.2.4";
		requiredVersion=1.5599999;
		requiredAddons[]=
		{
			"po_vehicles",	
			"rhs_c_a2port_armor",
			"rhs_c_a2port_car",
			"rhs_c_bmp",
			"rhs_c_bmd",
			"rhs_c_btr",
			"rhs_c_t72",
			"rhsusf_c_m113",
			"rhsusf_c_m1a1",
			"rhsusf_c_hmmwv",
			"A3_Soft_F_Truck",
			"A3_Soft_F_Car",
			"A3_Soft_F_TruckHeavy",
			"A3_Soft_F_Gamma_HEMTT"
		};
		author="Leight, Keeway";
		authorUrl="http://www.project-opfor.eu/";
	};
};
class RscPicture;
class RscControlsGroup;
class RscStandardDisplay;
class RscPictureKeepAspect;
class RscDisplayMain: RscStandardDisplay
{
	class controls
	{
		class ProjectOPFORLogo: RscPictureKeepAspect
		{
			idc=1299;
			text="\po_main\data\po_logo_128.paa";
			tooltip="Project OPFOR - visit us at http://www.project-opfor.eu/";
			onButtonClick="http://www.project-opfor.eu/";
			x="safezoneX + safezoneW -        2 *     (pixelW * pixelGrid * 2) -  (4 * pixelH)";
			y="safezoneY + safezoneH - (4 *       2 +     1) *    (pixelH * pixelGrid * 2) - 4 *  (4 * pixelH)";
			w="1.28 *             (           ((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.28 *             (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
class CfgMods
{
	class Mod_Base;
	class LOP_LeightsOPFOR: Mod_Base
	{
		picture="po_main\data\po_logo_512_nbg.paa";
		logo="po_main\data\po_logo_64_ca.paa";
		logoOver="po_main\data\po_logo_64_w_ca.paa";
		logoSmall="po_main\data\po_logo_64_ca.paa";
		tooltipOwned="tooltip";
		action="http://www.project-opfor.eu/";
		dlcColor[]={0.31,0.77999997,0.77999997,1};
		overview="overview";
		hideName=1;
		hidePicture=0;
		name="Project OPFOR";
		author="Keeway & Leight";
		dlc="LOP_LeightsOPFOR";
		dir="po_main";
		overviewPicture="\po_main\data\po_logo_512_nbg.paa";
		overviewText="Project OPFOR";
		contentBrowserPicture="\po_main\data\po_logo_64_ca.paa";
		popupMsgPicture="\po_main\data\po_logo_512_nbg.paa";
		popupMsgText="Project OPFOR";
		vehPrevMsgText="Project OPFOR";
		vehPrevNotifText="Project OPFOR";
		itemPrevNotifText="Project OPFOR";
		dronePrevNotifText="Project OPFOR";
		weaponPrevMsgText="Project OPFOR";
		infoPages[]=
		{
			"\po_main\data\po_logo_512_nbg.paa"
		};
		overviewFootnote="Project OPFOR";
	};
};
class CfgFunctions
{
	class LOP
	{
		tag="LOP";
		class functions
		{
			class randomUniform
			{
				file="\po_main\data\scripts\rds_randomUniform.sqf";
				description="Add random uniform";
			};
		};
	};
};
class CfgFactionClasses
{
	class LOP_CHR_Civ
	{
		displayName="$STR_LOP_CHR_Civ";
		priority=-10;
		side=3;
		icon="\po_main\data\fac\cfgfactionclasses_cdf_ca.paa";
		flag="\rhsafrf\addons\rhs_main\data\flag_rus_co.paa";
	};
	class LOP_UN
	{
		displayName="$STR_LOP_UN";
		priority=-10;
		side=2;
		icon="\po_main\data\fac\cfgfactionclasses_un_ca.paa";
		flag="\po_main\data\UI\flags\flag_un_co.paa";
	};
	class LOP_CDF
	{
		displayName="$STR_LOP_CDF";
		priority=-10;
		side=1;
		icon="\po_main\data\fac\cfgfactionclasses_cdf_ca.paa";
		flag="po_main\data\UI\flags\flag_cdf_co.paa";
	};
	class LOP_TAK_Civ
	{
		displayName="$STR_LOP_TAK_Civ";
		priority=-10;
		side=3;
		icon="\po_main\data\fac\cfgfactionclasses_aa_ca.paa";
		flag="a3\data_f\flags\flag_white_co.paa";
	};
	class LOP_AFR_Civ
	{
		displayName="$STR_LOP_AFR_Civ";
		priority=-10;
		side=3;
		icon="\po_main\data\fac\cfgfactionclasses_afrciv_ca.paa";
		flag="a3\data_f\flags\flag_white_co.paa";
	};
	class LOP_AA
	{
		displayName="$STR_LOP_AA";
		priority=-10;
		side=1;
		icon="\po_main\data\fac\cfgfactionclasses_aa_ca.paa";
		flag="po_main\data\UI\flags\flag_afg_co.paa";
	};
	class LOP_IA
	{
		displayName="$STR_LOP_IA";
		priority=-10;
		side=1;
		icon="\po_main\data\fac\cfgfactionclasses_ia_ca.paa";
		flag="po_main\data\UI\flags\flag_ia_co.paa";
	};
	class LOP_US
	{
		displayName="$STR_LOP_US";
		priority=-10;
		side=0;
		icon="\po_main\data\fac\cfgfactionclasses_us_ca.paa";
		flag="\rhsafrf\addons\rhs_main\data\flag_dnr_co.paa";
	};
	class LOP_ChDKZ
	{
		displayName="$STR_LOP_ChDKZ";
		priority=-10;
		side=0;
		icon="\po_main\data\fac\cfgfactionclasses_chdkz_ca.paa";
		flag="po_main\data\UI\flags\flag_chdkz_co.paa";
	};
	class LOP_TKA
	{
		displayName="$STR_LOP_TKA";
		priority=-10;
		side=0;
		icon="\po_main\data\fac\cfgfactionclasses_tka_ca.paa";
		flag="po_main\data\UI\flags\flag_tak_co.paa";
	};
	class LOP_SLA
	{
		displayName="$STR_LOP_SLA";
		priority=-10;
		side=0;
		icon="\po_main\data\fac\cfgfactionclasses_sla_ca.paa";
		flag="po_main\data\UI\flags\flag_sla_co.paa";
	};
	class LOP_RACS
	{
		displayName="$STR_LOP_RACS";
		priority=-10;
		side=2;
		icon="\po_main\data\fac\cfgfactionclasses_racs_ca.paa";
		flag="po_main\data\UI\flags\flag_racs_co.paa";
	};
	class LOP_PMC
	{
		displayName="$STR_LOP_PMC";
		priority=-10;
		side=2;
		icon="\po_main\data\fac\cfgfactionclasses_pmc_ca.paa";
		flag="po_main\data\UI\flags\flag_pmc_co.paa";
	};
	class LOP_ISTS
	{
		displayName="$STR_LOP_ISTS";
		priority=-10;
		side=2;
		icon="\po_main\data\fac\cfgfactionclasses_ists_ca.paa";
		flag="po_main\data\UI\flags\flag_isis_co.paa";
	};
	class LOP_ISTS_OPF
	{
		displayName="$STR_LOP_ISTS";
		priority=-10;
		side=0;
		icon="\po_main\data\fac\cfgfactionclasses_ists_ca.paa";
		flag="po_main\data\UI\flags\flag_isis_co.paa";
	};
	class LOP_NAPA
	{
		displayName="$STR_LOP_NAPA";
		priority=-10;
		side=2;
		icon="\po_main\data\fac\cfgfactionclasses_napa_ca.paa";
		flag="po_main\data\UI\flags\flag_napa_co.paa";
	};
	class LOP_AM
	{
		displayName="$STR_LOP_AM";
		priority=-10;
		side=2;
		icon="\po_main\data\fac\cfgfactionclasses_am_ca.paa";
		flag="po_main\data\UI\flags\flag_am_co.paa";
	};
	class LOP_AM_OPF
	{
		displayName="$STR_LOP_AM";
		priority=-10;
		side=0;
		icon="\po_main\data\fac\cfgfactionclasses_am_ca.paa";
		flag="po_main\data\UI\flags\flag_am_opf_co.paa";
	};
	class LOP_AFR
	{
		displayName="$STR_LOP_AFR";
		priority=-10;
		side=2;
		icon="\po_main\data\fac\cfgfactionclasses_afr_ca.paa";
		flag="po_main\data\UI\flags\flag_afr_co.paa";
	};
	class LOP_AFR_OPF
	{
		displayName="$STR_LOP_AFR";
		priority=-10;
		side=0;
		icon="\po_main\data\fac\cfgfactionclasses_afr_ca.paa";
		flag="po_main\data\UI\flags\flag_afr_co.paa";
	};
	class LOP_UA
	{
		displayName="$STR_LOP_UA";
		priority=-10;
		side=2;
		icon="\po_main\data\fac\cfgfactionclasses_uln_ca.paa";
		flag="po_main\data\UI\flags\flag_ua_co.paa";
	};
	class LOP_PESH
	{
		displayName="$STR_LOP_Pesh";
		priority=-10;
		side=1;
		icon="\po_main\data\fac\cfgfactionclasses_pesh_ca.paa";
		flag="po_main\data\UI\flags\flag_pesh_co.paa";
	};
	class LOP_PESH_IND
	{
		displayName="$STR_LOP_Pesh";
		priority=-10;
		side=2;
		icon="\po_main\data\fac\cfgfactionclasses_pesh_ca.paa";
		flag="po_main\data\UI\flags\flag_pesh_co.paa";
	};
	class LOP_UKR
	{
		displayName="$STR_LOP_UKR";
		priority=-10;
		side=2;
		icon="\po_main\data\fac\cfgfactionclasses_ukr_ca.paa";
		flag="po_main\data\UI\flags\flag_ukr_co.paa";
	};
	class LOP_BH
	{
		displayName="$STR_LOP_BH";
		priority=-10;
		side=0;
		icon="\po_main\data\fac\cfgfactionclasses_ists_ca.paa";
		flag="po_main\data\UI\flags\flag_isis_co.paa";
	};
	class LOP_IRA
	{
		displayName="$STR_LOP_IRA";
		priority=-10;
		side=0;
		icon="\po_main\data\fac\cfgfactionclasses_placeholder_ca.paa";
		flag="po_main\data\UI\flags\flag_ira_co.paa";
	};
	class LOP_UVF
	{
		displayName="$STR_LOP_UVF";
		priority=-10;
		side=2;
		icon="\po_main\data\fac\cfgfactionclasses_placeholder_ca.paa";
		flag="po_main\data\UI\flags\flag_uvf_co.paa";
	};
	class LOP_IRAN
	{
		displayName="$STR_LOP_IRAN";
		priority=-10;
		side=2;
		icon="\po_main\data\fac\cfgfactionclasses_placeholder_ca.paa";
		flag="po_main\data\UI\flags\flag_iran_co.paa";
	};
};
class CfgVehicleClasses
{
	class LOP_Men
	{
		displayName="$STR_LOP_Men";
	};
	class LOP_Men_D
	{
		displayName="$STR_LOP_Men_D";
	};
	class LOP_Men_W
	{
		displayName="$STR_LOP_Men_W";
	};
	class LOP_Men_SF
	{
		displayName="$STR_LOP_Men_SF";
	};
	class LOP_Men_B
	{
		displayName="$STR_LOP_Men_B";
	};
	class LOP_Men_C
	{
		displayName="$STR_LOP_Men_C";
	};
	class LOP_Armed_civ
	{
		displayName="$STR_LOP_Armed_civ";
	};
	class LOP_Men_police
	{
		displayName="$STR_LOP_Men_police";
	};
	class LOP_Wheeled
	{
		displayName="$STR_LOP_Wheeled";
	};
	class LOP_Support
	{
		displayName="$STR_LOP_Support";
	};
	class LOP_Aircraft
	{
		displayName="$STR_LOP_Aircraft";
	};
	class LOP_Armored
	{
		displayName="$STR_LOP_Armored";
	};
	class LOP_Static
	{
		displayName="$STR_LOP_Static";
	};
};
class CfgEditorSubcategories
{
	class LOP_Men
	{
		displayName="$STR_LOP_Men";
	};
	class LOP_Men_D
	{
		displayName="$STR_LOP_Men_D";
	};
	class LOP_Men_W
	{
		displayName="$STR_LOP_Men_W";
	};
	class LOP_Men_B
	{
		displayName="$STR_LOP_Men_B";
	};
	class LOP_Men_SF
	{
		displayName="$STR_LOP_Men_SF";
	};
	class LOP_Men_C
	{
		displayName="$STR_LOP_Men_C";
	};
	class LOP_Armed_civ
	{
		displayName="$STR_LOP_Armed_civ";
	};
	class LOP_Men_police
	{
		displayName="$STR_LOP_Men_police";
	};
	class LOP_Wheeled
	{
		displayName="$STR_LOP_Wheeled";
	};
	class LOP_Support
	{
		displayName="$STR_LOP_Support";
	};
	class LOP_Aircraft
	{
		displayName="$STR_LOP_Aircraft";
	};
	class LOP_Armored
	{
		displayName="$STR_LOP_Armored";
	};
	class LOP_Static
	{
		displayName="$STR_LOP_Static";
	};
};
class CfgUnitInsignia
{
	class LOP_Insignia_ISOF
	{
		displayName="[PO] Iraqi Special Operations Forces";
		texture="\po_main\data\tapes\isof.paa";
		author="$STR_LOP_FULL_NAME";
	};
	class PO_Insignia_ISOF
	{
		displayName="[PO] Iraqi Special Operations Forces";
		texture="\po_main\data\tapes\isof2.paa";
		author="$STR_LOP_FULL_NAME";
	};
	class LOP_Insignia_SLA
	{
		displayName="[PO] SLA patch";
		texture="\po_main\data\tapes\sla.paa";
		author="$STR_LOP_FULL_NAME";
	};
	class LOP_Insignia_TKA
	{
		displayName="[PO] Takistani Army patch";
		texture="\po_main\data\tapes\tka.paa";
		author="$STR_LOP_FULL_NAME";
	};
	class PO_Insignia_patch
	{
		displayName="[PO] Project OPFOR patch";
		texture="\po_main\data\tapes\po.paa";
		author="$STR_LOP_FULL_NAME";
	};
	class PO_Insignia_kurd_z
	{
		displayName="[PO] Kurdish Zeravani";
		texture="\po_main\data\tapes\kurd_zervani.paa";
		author="$STR_LOP_FULL_NAME";
	};
	class PO_Insignia_kurd_ypg
	{
		displayName="[PO] Kurdish YPG";
		texture="\po_main\data\tapes\kurd_ypg.paa";
		author="$STR_LOP_FULL_NAME";
	};
	class PO_Insignia_ana
	{
		displayName="[PO] Afghan National Army";
		texture="\po_main\data\tapes\ana.paa";
		author="$STR_LOP_FULL_NAME";
	};
	class PO_Insignia_anp
	{
		displayName="[PO] Afghan National Police";
		texture="\po_main\data\tapes\anp.paa";
		author="$STR_LOP_FULL_NAME";
	};
	class PO_Insignia_iransf
	{
		displayName="[PO] Iran Special Forces";
		texture="\po_main\data\tapes\iransf.paa";
		author="$STR_LOP_FULL_NAME";
	};
	class PO_Insignia_iranra
	{
		displayName="[PO] Iran Armed Forces";
		texture="\po_main\data\tapes\iranra.paa";
		author="$STR_LOP_FULL_NAME";
	};
};
class CfgWorlds
{
	class GenericNames
	{
		class lop_african_names
		{
			class FirstNames
			{
				Ali="Ali";
				Azibo="Azibo";
				Batou="Batou";
				Davu="Davu";
				Dembe="Dembe";
				Dumi="Dumi";
				Gamba="Gamba";
				Gula="Gula";
				Hamidi="Hamidi";
				Hasan="Hasan";
				Idi="Idi";
				Imre="Imre";
				Jahi="Jahi";
				Katungi="Katungi";
				Kirabo="Kirabo";
				Maalik="Maalik";
				Mobutu="Mobutu";
				Muhammad="Muhammad";
				Nuru="Nuru";
				Omari="Omari";
				Oringo="Oringo";
				Shaan="Shaan";
				Teshi="Teshi";
				Zahur="Zahur";
				Zaim="Zaim";
				Zev="Zev";
				Abu="Abu";
				Boikai="Boikai";
				Lamie="Lamie";
				Oso="Oso";
				Tokpah="Tokpah";
				Varney="Varney";
				Wleh="Wleh";
				Zanele="Zanele";
				Zwana="Zwana";
				Siafa="Siafa";
				Fokra="Fokra";
				Armah="Armah";
				Goma="Goma";
				Kandaki="Kandaki";
				Kwame="Kwame";
				Kofi="Kofi";
				Sidiki="Sidiki";
				Boimah="Boimah";
				Marbue="Marbue";
				Massala="Massala";
				Toyuwa="Toyuwa";
				Zinnah="Zinnah";
			};
			class LastNames
			{
				Okoro="Okoro";
				Gueye="Gueye";
				Keita="Keita";
				Diallo="Diallo";
				Owusu="Owusu";
				Nwosu="Nwosu";
				Cisse="Cisse";
				Toure="Toure";
				Congo="Congo";
				Dia="Dia";
				Kone="Kone";
				Yeboah="Yeboah";
				Sylla="Sylla";
				Chahine="Chahine";
				Diop="Diop";
				Osei="Osei";
				Sane="Sane";
				Maalouf="Maalouf";
				Sesay="Sesay";
				Ba="Ba";
				Balane="Balane";
				Makongo="Makongo";
				Zebogo="Zebogo";
				Awolowo="Awolowo";
				Azikiwe="Azikiwe";
				Balewa="Balewa";
				Egwu="Egwu";
				Ekwensi="Ekwensi";
				Gowon="Gowon";
				Achebe="Achebe";
				Hoxha="Hoxha";
				Ibori="Ibori";
				Sekibo="Sekibo";
				Igwe="Igwe";
				Inouyie="Inouyie";
				SesseSeko="Sesse-Seko";
				Iwu="Iwu";
				Kuma="Kuma";
				Madaki="Madaki";
				Mbanefo="Mbanefo";
				Ngige="Ngige";
				Odili="Odili";
				Okadigbo="Okadigbo";
				Okeke="Okeke";
				Okonjo="Okonjo";
				Okonkwo="Okonkwo";
				Okoye="Okoye";
				Osmani="Osmani";
				Sununu="Sununu";
				Tinibu="Tinibu";
				Zambo="Zambo";
			};
		};
	};
};
class CfgVehicles
{
	class FlagCarrier;
	class lop_Flag_Afghan_F: FlagCarrier
	{
		author="$STR_LOP_FULL_NAME";
		scope=2;
		displayName="Flag (Afghanistan)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\po_main\data\ui\flags\Flag_afg_CO.paa'";
		};
		scopeCurator=2;
	};
	class lop_Flag_cdf_F: FlagCarrier
	{
		author="$STR_LOP_FULL_NAME";
		scope=2;
		displayName="Flag (Chernarussian Defence Forces)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\po_main\data\ui\flags\Flag_cdf_CO.paa'";
		};
		scopeCurator=2;
	};
	class lop_Flag_Iraq_F: FlagCarrier
	{
		author="$STR_LOP_FULL_NAME";
		scope=2;
		displayName="Flag (Iraq)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\po_main\data\ui\flags\Flag_ia_CO.paa'";
		};
		scopeCurator=2;
	};
	class lop_Flag_pesh_F: FlagCarrier
	{
		author="$STR_LOP_FULL_NAME";
		scope=2;
		displayName="Flag (Kurdistan)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\po_main\data\ui\flags\Flag_pesh_CO.paa'";
		};
		scopeCurator=2;
	};
	class lop_Flag_racs_F: FlagCarrier
	{
		author="$STR_LOP_FULL_NAME";
		scope=2;
		displayName="Flag (RACS)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\po_main\data\ui\flags\Flag_racs_CO.paa'";
		};
		scopeCurator=2;
	};
	class lop_Flag_sla_F: FlagCarrier
	{
		author="$STR_LOP_FULL_NAME";
		scope=2;
		displayName="Flag (SLA)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\po_main\data\ui\flags\Flag_sla_CO.paa'";
		};
		scopeCurator=2;
	};
	class lop_Flag_tak_F: FlagCarrier
	{
		author="$STR_LOP_FULL_NAME";
		scope=2;
		displayName="Flag (Takistan)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\po_main\data\ui\flags\Flag_tak_CO.paa'";
		};
		scopeCurator=2;
	};
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
		class NewTurret;
	};
	class Car_F: Car
	{
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
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class EventHandlers;
		class AnimationSources;
	};	
	class Truck_F: Car_F
	{
		class ViewPilot;
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
		class AnimationSources;
	};
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class AnimationSources;
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
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
		class EventHandlers;
		class textureSources;
	};
	class APC_Tracked_02_base_F: Tank_F
	{
	};	
	class rhsusf_m113tank_base: APC_Tracked_02_base_F
	{
		class AnimationSources;
	};
	class rhsusf_m113_usarmy: rhsusf_m113tank_base
	{
	};
	class rhs_bmp1_msv;
	class rhs_bmp1d_msv;
	class rhs_bmp2_msv;
	class rhs_bmp2d_msv;
	class rhs_btr60_msv;
	class rhs_btr70_msv;
	class rhs_btr80_msv;
	class rhs_t72ba_tv;
	class rhs_t72bb_tv;
	class rhs_t72bc_tv;
	class rhs_zsutank_base;
	class rhs_bmd1;
	class rhs_bmd2;
	class MBT_01_base_F: Tank_F
	{
		class EventHandlers;
	};
	class rhsusf_m1a1tank_base: MBT_01_base_F
	{
	};
	class rhsusf_m1a1aimd_usarmy: rhsusf_m1a1tank_base
	{
	};
	class rhsusf_M1117_D;
	class B_G_Van_01_transport_F;
	class rhsusf_m1025_w_m2;
	class rhsusf_m1025_d_mk19;
	class rhsusf_m1025_d;
	class rhsusf_m998_d_4dr;
	class RHS_UAZ_base;
	class rhs_uaz_open_base;
	class rhs_uaz_dshkm_base;
	class rhs_uaz_ags30_base;
	class rhs_uaz_spg9_chdkz;
	class RHS_Ural_base;
	class RHS_Ural_Open_Civ_01;
	class RHS_BM21_MSV_01;
	class C_SUV_01_F;
	class C_Hatchback_01_F;
	class O_Truck_02_covered_F;
	class O_Truck_02_transport_F;
	class B_Truck_01_covered_F;
	class B_Truck_01_transport_F;
	class B_Truck_01_box_F;
	class B_Truck_01_mover_F;
	class O_Truck_02_medical_F;
	class O_Truck_02_box_F;
	class O_Truck_02_fuel_F;
	class O_Truck_02_Ammo_F;
	class B_Truck_01_medical_F;
	class B_Truck_01_fuel_F;
	class B_Truck_01_repair_F;
	class B_Truck_01_Ammo_F;
	class RHS_Ural_Fuel_VV_01;
	class LOP_M113_base: rhsusf_m113_usarmy
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Armored";
		editorSubcategory="LOP_Armored";
		displayName="M113A3 M2";
		class AnimationSources: AnimationSources
		{
			class IFF_Panels_Hide
			{
				source="user";
				mass=-20;
				displayName="hide IFF Panels";
				author="$STR_RHSUSF_AUTHOR_FULL";
				animPeriod=9.9999997e-006;
				initPhase=1;
			};
		};
		rhs_decalParameters[]={};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_BMP1_base: rhs_bmp1_msv
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Armored";
		editorSubcategory="LOP_Armored";
		displayName="$STR_BMP1_Name";
		rhs_decalParameters[]={};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_BMP1D_base: rhs_bmp1d_msv
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Armored";
		editorSubcategory="LOP_Armored";
		displayName="$STR_BMP1D_Name";
		rhs_decalParameters[]={};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_BMP2_base: rhs_bmp2_msv
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Armored";
		editorSubcategory="LOP_Armored";
		displayName="$STR_BMP2e_Name";
		rhs_decalParameters[]={};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_BMP2D_base: rhs_bmp2d_msv
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Armored";
		editorSubcategory="LOP_Armored";
		displayName="$STR_BMP2D_Name";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_BTR60_base: rhs_btr60_msv
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Armored";
		editorSubcategory="LOP_Armored";
		displayName="$STR_RHS_BTR60_Name";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_BTR70_base: rhs_btr70_msv
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Armored";
		editorSubcategory="LOP_Armored";
		displayName="$STR_RHS_BTR70_Name";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_BTR80_base: rhs_btr80_msv
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Armored";
		editorSubcategory="LOP_Armored";
		displayName="$STR_RHS_BTR80_Name";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_T72BA_base: rhs_t72ba_tv
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		armor=400;
		armorHull=1;
		armorTurret=0.80000001;
		armorGun=0.60000002;
		armorEngine=0.80000001;
		armorTracks=0.60000002;
		vehicleClass="LOP_Armored";
		editorSubcategory="LOP_Armored";
		displayName="$STR_T72BA_Name";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_T72BB_base: rhs_t72bb_tv
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Armored";
		editorSubcategory="LOP_Armored";
		displayName="T-72B (obr. 1985g.)";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_T72BC_base: rhs_t72bc_tv
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Armored";
		editorSubcategory="LOP_Armored";
		displayName="T-72B (obr. 1989g.)";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_ZSU234_base: rhs_zsutank_base
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Armored";
		editorSubcategory="LOP_Armored";
		displayName="$STR_RHS_ZSU_Name";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_BMD1_base: rhs_bmd1
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Armored";
		editorSubcategory="LOP_Armored";
		displayName="BMD-1";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_BMD2_base: rhs_bmd2
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Armored";
		editorSubcategory="LOP_Armored";
		displayName="BMD-2";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_M1A1_base: rhsusf_m1a1aimd_usarmy
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Armored";
		editorSubcategory="LOP_Armored";
		displayName="M1A1 Abrams";
		rhs_decalParameters[]={};
		class AnimationSources: AnimationSources
		{
			class IFF_Panels_Hide
			{
				source="user";
				mass=-20;
				displayName="hide IFF panels";
				author="$STR_RHSUSF_AUTHOR_FULL";
				animPeriod=9.9999997e-006;
				initPhase=1;
			};
			class Miles_Hide: IFF_Panels_Hide
			{
				displayName="hide MILES panels";
				author="$STR_RHSUSF_AUTHOR_FULL";
			};
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_M1117_D_base: rhsusf_M1117_D
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Armored";
		editorSubcategory="LOP_Armored";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};	
	class LOP_M998_Base: rhsusf_m998_d_4dr
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Wheeled";
		editorSubcategory="LOP_Wheeled";
		displayName="M1097A2 (Open)";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_M1025_M2_base: rhsusf_m1025_w_m2
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Wheeled";
		editorSubcategory="LOP_Wheeled";
		displayName="M1025A2 (M2)";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_M1025_Mk19_base: rhsusf_m1025_d_mk19
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Wheeled";
		editorSubcategory="LOP_Wheeled";
		displayName="M1025A2 (Mk19)";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_M1025_base: rhsusf_m1025_d
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Wheeled";
		editorSubcategory="LOP_Wheeled";
		displayName="M1025A2 (Unarmed)";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_UAZ_base: RHS_UAZ_base
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		editorPreview="\po_main\Data\3den\1placeholder.jpg";
		vehicleClass="LOP_Wheeled";
		editorSubcategory="LOP_Wheeled";
		displayName="$STR_RHS_UAZ469_NAME";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_UAZ_Open_base: rhs_uaz_open_base
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		editorPreview="\po_main\Data\3den\1placeholder.jpg";
		vehicleClass="LOP_Wheeled";
		editorSubcategory="LOP_Wheeled";
		displayName="$STR_RHS_UAZ469OPEN_NAME";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_UAZ_DSHKM_Base: rhs_uaz_dshkm_base
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		editorPreview="\po_main\Data\3den\1placeholder.jpg";
		vehicleClass="LOP_Wheeled";
		editorSubcategory="LOP_Wheeled";
		displayName="UAZ-3151 (DShKM)";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_UAZ_AGS30_Base: rhs_uaz_ags30_base
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		editorPreview="\po_main\Data\3den\1placeholder.jpg";
		vehicleClass="LOP_Wheeled";
		editorSubcategory="LOP_Wheeled";
		displayName="UAZ-3151 (AGS-30)";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_UAZ_SPG9_Base: rhs_uaz_spg9_chdkz
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		editorPreview="\po_main\Data\3den\1placeholder.jpg";
		vehicleClass="LOP_Wheeled";
		editorSubcategory="LOP_Wheeled";
		displayName="UAZ-3151 (SPG-9)";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_URAL_base: RHS_Ural_base
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		editorPreview="\po_main\Data\3den\1placeholder.jpg";
		vehicleClass="LOP_Wheeled";
		editorSubcategory="LOP_Wheeled";
		displayName="$STR_RHS_URAL4320_NAME";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_URAL_open_base: RHS_Ural_Open_Civ_01
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		editorPreview="\po_main\Data\3den\1placeholder.jpg";
		vehicleClass="LOP_Wheeled";
		editorSubcategory="LOP_Wheeled";
		displayName="$STR_RHS_URAL4320OPEN_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_BM21_base: RHS_BM21_MSV_01
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Wheeled";
		editorSubcategory="LOP_Wheeled";
		displayName="$STR_RHS_BM21_NAME";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_SUV_base: C_SUV_01_F
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Wheeled";
		editorSubcategory="LOP_Wheeled";
		displayName="SUV";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_Hatchback_base: C_Hatchback_01_F
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Wheeled";
		editorSubcategory="LOP_Wheeled";
		displayName="Hatchback";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_KAMAZ_cov_base: O_Truck_02_covered_F
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Wheeled";
		editorSubcategory="LOP_Wheeled";
		displayName="$STR_LOP_KAMAZ_cov_base";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_KAMAZ_trans_base: O_Truck_02_transport_F
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Wheeled";
		editorSubcategory="LOP_Wheeled";
		displayName="$STR_LOP_KAMAZ_trans_base";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_HEMTT_cov_base: B_Truck_01_covered_F
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Wheeled";
		editorSubcategory="LOP_Wheeled";
		displayName="HEMTT (covered)";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_HEMTT_trans_base: B_Truck_01_transport_F
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Wheeled";
		editorSubcategory="LOP_Wheeled";
		displayName="HEMTT Transport";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_HEMTT_box_base: B_Truck_01_box_F
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Wheeled";
		editorSubcategory="LOP_Wheeled";
		displayName="HEMTT Box";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_HEMTT_mov_base: B_Truck_01_mover_F
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Wheeled";
		editorSubcategory="LOP_Wheeled";
		displayName="HEMTT";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};	
	class LOP_KAMAZ_med_base: O_Truck_02_medical_F
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Support";
		editorSubcategory="LOP_Support";
		displayName="$STR_LOP_KAMAZ_med_base";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_KAMAZ_rep_base: O_Truck_02_box_F
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Support";
		editorSubcategory="LOP_Support";
		displayName="$STR_LOP_KAMAZ_rep_base";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_KAMAZ_fuel_base: O_Truck_02_fuel_F
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Support";
		editorSubcategory="LOP_Support";
		displayName="$STR_LOP_kamaz_fuel";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_KAMAZ_ammo_base: O_Truck_02_Ammo_F
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Support";
		editorSubcategory="LOP_Support";
		displayName="$STR_LOP_KAMAZ_ammo_base";
		forceInGarage=0;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_HEMTT_med_base: B_Truck_01_medical_F
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Support";
		editorSubcategory="LOP_Support";
		displayName="HEMTT Medical";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_HEMTT_rep_base: B_Truck_01_repair_F
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Support";
		editorSubcategory="LOP_Support";
		displayName="HEMTT Repair";
		forceInGarage=0;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_HEMTT_fuel_base: B_Truck_01_fuel_F
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Support";
		editorSubcategory="LOP_Support";
		displayName="HEMTT Fuel";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_HEMTT_ammo_base: B_Truck_01_Ammo_F
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Support";
		editorSubcategory="LOP_Support";
		displayName="HEMTT Ammo";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_URAL_fuel_base: RHS_Ural_Fuel_VV_01
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Support";
		editorSubcategory="LOP_Support";
		displayName="$STR_RHS_URAL4320FUEL_NAME";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class AnimationSources;
	};
	class Heli_Attack_02_base_F: Helicopter_Base_F
	{
	};
	class RHS_Mi24_base: Heli_Attack_02_base_F
	{
	};
	class RHS_Mi24P_VVS_Base: RHS_Mi24_base
	{
	};
	class RHS_Mi24V_Base: RHS_Mi24_base
	{
	};
	class RHS_Mi24V_VVS_Base: RHS_Mi24V_Base
	{
	};
	class RHS_Mi24P_AT_VVS_Base: RHS_Mi24P_VVS_Base
	{
	};
	class RHS_Mi24V_FAB_VVS_Base: RHS_Mi24V_VVS_Base
	{
	};
	class RHS_Mi24V_UPK23_VVS_Base: RHS_Mi24V_VVS_Base
	{
	};
	class RHS_Mi8mt_Cargo_vvsc;
	class RHS_Mi8MTV3_FAB_vvsc;
	class RHS_Mi8MTV3_UPK23_vvsc;
	class RHS_Mi8AMTSh_FAB_vvsc;
	class RHS_Mi8AMTSh_UPK23_vvsc;
	class RHS_Su25SM_vvsc;
	class B_Heli_Light_01_F;
	class B_Heli_Light_01_armed_F;
	class C_Heli_Light_01_civil_F;
	class B_Heli_Light_01_stripped_F;
	class RHS_UH60M;
	class RHS_Mi8amt_civilian;
	class RHS_CH_47F_10;
	class rhsusf_CH53E_USMC;
	class RHS_UH1Y_UNARMED;
	class RHS_AH1Z_wd;
	class RHS_AH1Z_GS;
	class RHS_AH1Z_CS;
	class LOP_Mi8mt_Cargo_base: RHS_Mi8mt_Cargo_vvsc
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Aircraft";
		editorSubcategory="LOP_Aircraft";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_Mi8MTV3_FAB_base: RHS_Mi8MTV3_FAB_vvsc
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Aircraft";
		editorSubcategory="LOP_Aircraft";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_Mi8MTV3_UPK23_base: RHS_Mi8MTV3_UPK23_vvsc
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Aircraft";
		editorSubcategory="LOP_Aircraft";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_Mi8AMTSh_FAB_base: RHS_Mi8AMTSh_FAB_vvsc
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Aircraft";
		editorSubcategory="LOP_Aircraft";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_Mi8AMTSh_UPK23_base: RHS_Mi8AMTSh_UPK23_vvsc
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Aircraft";
		editorSubcategory="LOP_Aircraft";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_Mi24V_AT_base: RHS_Mi24P_AT_VVS_Base
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		class AnimationSources: AnimationSources
		{
			class exhaust_hide
			{
				source="user";
				initPhase=1;
				animPeriod=9.9999997e-006;
			};
		};
		vehicleClass="LOP_Aircraft";
		editorSubcategory="LOP_Aircraft";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_Mi24V_FAB_base: RHS_Mi24V_FAB_VVS_Base
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		class AnimationSources: AnimationSources
		{
			class exhaust_hide
			{
				source="user";
				initPhase=1;
				animPeriod=9.9999997e-006;
			};
		};
		vehicleClass="LOP_Aircraft";
		editorSubcategory="LOP_Aircraft";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_Mi24V_UPK23_base: RHS_Mi24V_UPK23_VVS_Base
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		class AnimationSources: AnimationSources
		{
			class exhaust_hide
			{
				source="user";
				initPhase=1;
				animPeriod=9.9999997e-006;
			};
		};
		vehicleClass="LOP_Aircraft";
		editorSubcategory="LOP_Aircraft";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_SU25SM_base: RHS_Su25SM_vvsc
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Aircraft";
		editorSubcategory="LOP_Aircraft";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_LB_Base: B_Heli_Light_01_F
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Aircraft";
		editorSubcategory="LOP_Aircraft";
		forceInGarage=0;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_LB_Armed_Base: B_Heli_Light_01_armed_F
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Aircraft";
		editorSubcategory="LOP_Aircraft";
		forceInGarage=0;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_LB_Civil_Base: C_Heli_Light_01_civil_F
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Aircraft";
		editorSubcategory="LOP_Aircraft";
		forceInGarage=0;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_LB_Stripped_base: B_Heli_Light_01_stripped_F
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Aircraft";
		editorSubcategory="LOP_Aircraft";
		forceInGarage=0;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_UH60M_Base: RHS_UH60M
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Aircraft";
		editorSubcategory="LOP_Aircraft";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_Mi8amt_Base: RHS_Mi8amt_civilian
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Aircraft";
		editorSubcategory="LOP_Aircraft";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_CH47F_Base: RHS_CH_47F_10
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Aircraft";
		editorSubcategory="LOP_Aircraft";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_CH53E_Base: rhsusf_CH53E_USMC
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Aircraft";
		editorSubcategory="LOP_Aircraft";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_UH1Y_UN_Base: RHS_UH1Y_UNARMED
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Aircraft";
		editorSubcategory="LOP_Aircraft";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_AH1Z_WD_Base: RHS_AH1Z_wd
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Aircraft";
		editorSubcategory="LOP_Aircraft";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_AH1Z_GS_Base: RHS_AH1Z_GS
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Aircraft";
		editorSubcategory="LOP_Aircraft";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class LOP_AH1Z_CS_Base: RHS_AH1Z_CS
	{
		author="$STR_LOP_FULL_NAME";
		scope=1;
		dlc="LOP_LeightsOPFOR";
		vehicleClass="LOP_Aircraft";
		editorSubcategory="LOP_Aircraft";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
};
class CfgMarkers
{
	class flag_NATO;
	class lop_flag_Afghan: flag_NATO
	{
		name="Afghanistan";
		icon="\po_main\data\ui\markers\Flag_afg_CO.paa";
		texture="\po_main\data\ui\markers\Flag_afg_CO.paa";
	};
	class lop_flag_cdf: flag_NATO
	{
		name="Chernarussian Defence Forces";
		icon="\po_main\data\ui\markers\Flag_cdf_CO.paa";
		texture="\po_main\data\ui\markers\Flag_cdf_CO.paa";
	};
	class lop_flag_Iraq: flag_NATO
	{
		name="Iraq";
		icon="\po_main\data\ui\markers\Flag_ia_CO.paa";
		texture="\po_main\data\ui\markers\Flag_ia_CO.paa";
	};
	class lop_flag_Isis: flag_NATO
	{
		name="ISIS";
		icon="\po_main\data\ui\markers\Flag_isis_CO.paa";
		texture="\po_main\data\ui\markers\Flag_isis_CO.paa";
	};
	class lop_flag_pesh: flag_NATO
	{
		name="Kurdistan";
		icon="\po_main\data\ui\markers\Flag_pesh_CO.paa";
		texture="\po_main\data\ui\markers\Flag_pesh_CO.paa";
	};
	class lop_flag_racs: flag_NATO
	{
		name="RACS";
		icon="\po_main\data\ui\markers\Flag_racs_CO.paa";
		texture="\po_main\data\ui\markers\Flag_racs_CO.paa";
	};
	class lop_flag_sla: flag_NATO
	{
		name="SLA";
		icon="\po_main\data\ui\markers\Flag_sla_CO.paa";
		texture="\po_main\data\ui\markers\Flag_sla_CO.paa";
	};
	class lop_flag_tak: flag_NATO
	{
		name="Takistan";
		icon="\po_main\data\ui\markers\Flag_tak_CO.paa";
		texture="\po_main\data\ui\markers\Flag_tak_CO.paa";
	};
	class lop_flag_ukr: flag_NATO
	{
		name="Ukraine";
		icon="\po_main\data\ui\markers\Flag_ukr_CO.paa";
		texture="\po_main\data\ui\markers\Flag_ukr_CO.paa";
	};
};
