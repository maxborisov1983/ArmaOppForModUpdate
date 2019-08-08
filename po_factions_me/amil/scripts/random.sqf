if (isServer) then {
	if ((uniform _this == "LOP_U_AM_Fatigue_01")) then {
		_rnd1 = floor random 3;
		_this setObjectTextureGlobal [0, ["\po_factions_me\amil\loc_opfor01_1_co.paa", 
		"\po_factions_me\amil\loc_opfor01_2_co.paa",
		"\po_factions_me\amil\loc_opfor01_3_co.paa"] select _rnd1];

	};	
	if ((uniform _this == "LOP_U_AM_Fatigue_02")) then {
		_rnd1 = floor random 3;
		_this setObjectTextureGlobal [0, ["\po_factions_me\amil\loc_opfor03_1_co.paa", 
		"\po_factions_me\amil\loc_opfor03_2_co.paa",
		"\po_factions_me\amil\loc_opfor03_3_co.paa"] select _rnd1];

	};	
	if ((uniform _this == "LOP_U_AM_Fatigue_03")) then {
		_rnd1 = floor random 3;
		_this setObjectTextureGlobal [0, ["\po_factions_me\amil\loc_opfor04_1_co.paa", 
		"\po_factions_me\amil\loc_opfor04_2_co.paa",
		"\po_factions_me\amil\loc_opfor04_3_co.paa"] select _rnd1];

	};	
	if ((uniform _this == "LOP_U_AM_Fatigue_04")) then {
		_rnd1 = floor random 3;
		_this setObjectTextureGlobal [0, ["\po_factions_me\amil\loc_opfor05_1_co.paa", 
		"\po_factions_me\amil\loc_opfor05_2_co.paa",
		"\po_factions_me\amil\loc_opfor05_3_co.paa"] select _rnd1];

	};	
};