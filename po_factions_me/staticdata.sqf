if(isServer) then {
    if (isclass (configFile >> "CfgVehicles" >> "ALiVE_require")) then {
        if (!isnil "ALiVE_fnc_isModuleAvailable") then {

            waitUntil {!isNil "ALiVE_STATIC_DATA_LOADED"};

            private _yourFactionClassname = "";

   			//LOP_AA
			// Mil logistics convoy transport vehicles per faction
            [ALIVE_factionDefaultTransport, "LOP_AA", ["LOP_AA_M1025_W_M2","LOP_AA_Offroad_M2_Police","LOP_AA_M1025_W_Mk19","LOP_AA_Ural","LOP_AA_Ural_open"]] call ALIVE_fnc_hashSet;
			// Mil logistics air transport vehicles per faction
			[ALIVE_factionDefaultAirTransport, "LOP_AA", ["LOP_AA_Mi8MT_Cargo","LOP_AA_Mi8MTV3_UPK23"]] call ALIVE_fnc_hashSet;
			// Mil logistics airdrop containers per faction
			[ALIVE_factionDefaultContainers, "LOP_AA", ["ALIVE_O_supplyCrate_F","O_CargoNet_01_ammo_F"]] call ALIVE_fnc_hashSet;
   			//LOP_IA
            [ALIVE_factionDefaultTransport, "LOP_IA", ["LOP_IA_Ural","LOP_IA_Ural_open"]] call ALIVE_fnc_hashSet;
			[ALIVE_factionDefaultAirTransport, "LOP_IA", ["LOP_IA_Mi8MT_Cargo","LOP_IA_Mi8MTV3_UPK23"]] call ALIVE_fnc_hashSet;
			[ALIVE_factionDefaultContainers, "LOP_IA", ["ALIVE_O_supplyCrate_F","O_CargoNet_01_ammo_F"]] call ALIVE_fnc_hashSet;
			//LOP_ISIS
            [ALIVE_factionDefaultTransport, "LOP_ISTS", ["LOP_ISTS_M1025_W_M2","LOP_ISTS_Offroad_M2","LOP_ISTS_Truck","LOP_ISTS_Landrover_M2","LOP_ISTS_M1025_W_Mk19","LOP_ISTS_BTR60"]] call ALIVE_fnc_hashSet;
			[ALIVE_factionDefaultAirTransport, "LOP_ISTS", []] call ALIVE_fnc_hashSet;
			[ALIVE_factionDefaultContainers, "LOP_ISTS", ["ALIVE_O_supplyCrate_F","O_CargoNet_01_ammo_F"]] call ALIVE_fnc_hashSet;		
			//LOP_ISIS_OPF
            [ALIVE_factionDefaultTransport, "LOP_ISTS_OPF", ["LOP_ISTS_OPF_M1025_W_M2","LOP_ISTS_OPF_Offroad_M2","LOP_ISTS_OPF_Truck","LOP_ISTS_OPF_Landrover_M2","LOP_ISTS_OPF_M1025_W_Mk19","LOP_ISTS_OPF_BTR60"]] call ALIVE_fnc_hashSet;
			[ALIVE_factionDefaultAirTransport, "LOP_ISTS_OPF", []] call ALIVE_fnc_hashSet;
			[ALIVE_factionDefaultContainers, "LOP_ISTS_OPF", ["ALIVE_O_supplyCrate_F","O_CargoNet_01_ammo_F"]] call ALIVE_fnc_hashSet;		
			

        };
    };
};

