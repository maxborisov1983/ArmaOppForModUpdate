/*
	T-55 Optical Sight handling [TSh2B-32P]
	Script use keyDown event handler to animate up & down bar used for aiming
	Also hide reticle on optic & NVG mode

	a: reyhard
*/
uiNameSpace setVariable ["LOP_t55_Ctrl",_this select 0];

systemChat "init";

// remove additional handler if it's present
if( not ( (uiNameSpace getVariable ["rhs_t55_eh",-1]) isEqualTo -1))then{
	(findDisplay 46) displayRemoveEventHandler ["KeyDown", uiNameSpace getVariable "rhs_t55_eh"];
	systemChat format[" %1 reload passed",(uiNameSpace getVariable ["rhs_hatch_handler_eh",-1])];
};

#define realPLAYER missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player]
// loop handling different optics mode, weapon changing & transition fade effect
["rhs_t55_handler", "onEachFrame", {
	params["_v","_mode_old","_time","_hide"];

	// refresh rate 0.01s
	if(time > _time)then{
		_this set [2,time+0.01];

		private _mode = ctrlText (uiNamespace getVariable "LOP_t55_Ctrl" displayCtrl 154);
		// check if mode was changed
		if(_mode!=_mode_old)then{

			// deinitialization part
			if(  ctrlText ( (uiNamespace getVariable "LOP_t55_Ctrl")  displayCtrl 1000) != "LOP_T55" )exitWith{
				// remove event handlers & deinitalize variables
				(findDisplay 46) displayRemoveEventHandler ["KeyDown", uiNameSpace getVariable "rhs_t55_eh"];
				["rhs_t55_handler", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
				uiNameSpace setVariable ["LOP_t55_Ctrl",displayNull];
				{uiNameSpace setVariable [_x,nil]}foreach ["rhs_t55_eh"];


				systemChat "removing EH";
			};

			private _sight=(uiNamespace getVariable "LOP_t55_Ctrl" displayCtrl 1);
			private _bar=(uiNamespace getVariable "LOP_t55_Ctrl" displayCtrl 2);
			private _pos= (ctrlPosition _sight) select 1;
			private _v = vehicle (realPLAYER);
			_this set [0,_v];


			switch(_mode)do{
				case "DAY1" : {
					if(_hide)then{
						private _r1=((_pos+0.005)*100)/( (14.95* (0.025*SafezoneH))+0.005 );
						private _r=(_r1*( (17.75* (0.025*SafezoneH))-(9.0355*(0.025*SafezoneH)) )/100)+((9.0355*(0.025*SafezoneH)) );
						_sight ctrlSetPosition [20.22 *   (0.01875 * Safezoneh), _r,14 *   (0.01875 * SafezoneH),14 *   (0.025 * SafezoneH) ];
						_bar ctrlSetPosition [20.45 *   (0.01875 *   Safezoneh),12.1555*   (0.025 * SafezoneH),12.75 *   (0.01875 * SafezoneH),12.75 *   (0.025 * SafezoneH)];
					};
					{_x ctrlSetTextColor [0.7,0.074,0.02,1];_x ctrlCommit 0}foreach [_sight,_bar];
					_this set [3,true];
				};
				case "DAY2": {
					if(_hide)then{
						private _r1=((_pos- ((9.035*(0.025*SafezoneH)))   )*100 )/ ((17.75* (0.025*SafezoneH))-(9.035*(0.025*SafezoneH))) ;
						private _r=(_r1*(( (14.95* (0.025*SafezoneH))+0.005 )/100))-0.005;
						_sight ctrlSetPosition [14.95 *   (0.01875 * Safezoneh), _r,25.5 *   (0.01875 * SafezoneH),25.5 *   (0.025 * SafezoneH) ];
						_bar ctrlSetPosition [10 *   (0.01875 *   Safezoneh),4.56*   (0.025 * SafezoneH),35.5 *   (0.01875 * SafezoneH),25.5 *   (0.025 * SafezoneH)];
					};
					_this set [3,true];
					{_x ctrlSetTextColor [0.7,0.074,0.02,1];_x ctrlCommit 0}foreach [_sight,_bar];
				};
				case "PERISCOPE";
				case "NIGHT" : {
					_this set [3,false];
					{_x ctrlSetTextColor [0.7,0.074,0.02,0]; }foreach [_sight,_bar];
				};
			};
			// update mode param
			_this set [1,_mode];
		};
	};
},["","",time,true]] call BIS_fnc_addStackedEventHandler;


_id =  (findDisplay 46) displayAddEventHandler ["KeyDown", {
	private _handle=false;
	// reticle range adjustments
	switch(true) do {
		case (inputAction "ZeroingUp" > 0): {
			// exit if play is not in optic mode
			if(cameraView != "GUNNER")exitWith{};

			disableSerialization;

			private _sight = (uiNamespace getVariable "LOP_t55_Ctrl" displayCtrl 1);
			private _t = (ctrLPosition _sight) select 1;
			private _move = _t+0.003;
			if( (_move <=(15.96 *   (0.025 * SafezoneH))) && (_move >= (-0.0455 *   (0.025 * SafezoneH))) )then{
				_sight ctrlSetPosition [(ctrLPosition _sight) select 0,_move];
				_sight ctrlCommit 0.005;
			};
		};
		case (inputAction "ZeroingDown" > 0): {
			// exit if play is not in optic mode
			if(cameraView != "GUNNER")exitWith{};

			disableSerialization;

			private _sight = (uiNamespace getVariable "LOP_t55_Ctrl" displayCtrl 1);
			private _t = (ctrLPosition _sight) select 1;
			private _move = _t-0.003;
			if( (_move <=(15.96 *   (0.025 * SafezoneH))) && (_move >= (-0.0455 *   (0.025 * SafezoneH))) )then{
				_sight ctrlSetPosition [(ctrLPosition _sight) select 0,_move];
				_sight ctrlCommit 0.005;
			};
		};
	};
	_handle;
}];

uiNameSpace setVariable ["rhs_t55_eh",_id];