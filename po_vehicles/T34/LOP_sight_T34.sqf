/*
	T-34 Optical Sight handling [TSh-16]
	Script use keyDown event handler to animate up & down bar used for aiming

	a: reyhard
*/
uiNameSpace setVariable ["RDS_t34_Ctrl",_this select 0];

systemChat "init";

// remove additional handler if it's present
if( not ( (uiNameSpace getVariable ["rhs_t34_eh",-1]) isEqualTo -1))then{
	(findDisplay 46) displayRemoveEventHandler ["KeyDown", uiNameSpace getVariable "rhs_t34_eh"];
	systemChat format[" %1 reload passed",(uiNameSpace getVariable ["rhs_hatch_handler_eh",-1])];
};

#define realPLAYER missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player]
#define LimitUP (112.16 *   (0.025 * SafezoneH))
#define LimitDOWN (-15.96 *   (0.025 * SafezoneH))

_id =  (findDisplay 46) displayAddEventHandler ["KeyDown", {
	private _handle=false;

	// deinitialization part
	if(  ctrlText ( (uiNamespace getVariable "RDS_t34_Ctrl")  displayCtrl 1000) != "LOP_T34" )exitWith{
		// remove event handlers & deinitalize variables
		(findDisplay 46) displayRemoveEventHandler ["KeyDown", uiNameSpace getVariable "rhs_t34_eh"];
		uiNameSpace setVariable ["RDS_t34_Ctrl",displayNull];
		{uiNameSpace setVariable [_x,nil]}foreach ["rhs_t34_eh"];

		systemChat "removing EH";
	};

	// reticle range adjustments
	switch(true) do {
		case (inputAction "ZeroingUp" > 0): {
			// exit if play is not in optic mode
			if(cameraView != "GUNNER")exitWith{};

			disableSerialization;

			private _sight = (uiNamespace getVariable "RDS_t34_Ctrl" displayCtrl 1);
			private _t = (ctrLPosition _sight) select 1;
			private _move = _t+0.003;
			if( _move<= LimitUP )then{
				_sight ctrlSetPosition [(ctrLPosition _sight) select 0,_move];
				_sight ctrlCommit 0.005;
			};
		};
		case (inputAction "ZeroingDown" > 0): {
			// exit if play is not in optic mode
			if(cameraView != "GUNNER")exitWith{};

			disableSerialization;

			private _sight = (uiNamespace getVariable "RDS_t34_Ctrl" displayCtrl 1);
			private _t = (ctrLPosition _sight) select 1;
			private _move = _t-0.003;
			if( _move>= LimitDOWN )then{
				_sight ctrlSetPosition [(ctrLPosition _sight) select 0,_move];
				_sight ctrlCommit 0.005;
			};
		};
	};
	_handle;
}];

uiNameSpace setVariable ["rhs_t34_eh",_id];