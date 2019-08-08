//defined as constant - it shouldn't be changed, as higher speeds cause some quirks in simulation. should speed up things
#define TypicalSpeed 1000
// path to materials for easier 3rd mod adoption
#define MatPath(percentage) 'RDS_Tank\penetration\ce_0.##percentage##.bisurf'

_array = _this select 0;
_direct= _array select 10;

//only direct hits are accounted
if(_direct)then
{
	//checking if round has CE simulation enabled
	_ammo = ((_array select 6) select 4);
	_ammoType= getText (configFile >> "CfgAmmo" >> _ammo >> "rhs_ce_penetration");
	if(_ammoType == "")exitWith{};

	_p = _array select 2;
	_vel = _array select 4;

	//checking if we need to spawn penetrator
	if(_ammoType!="penetrator")then
	{
		//spawning penetrator
		_pos = ASLToATL(_array select 3);
		_p = createVehicle [_ammoType, _pos, [], 0, "CAN_COLLIDE"];
		_vel = (vectorNormalized _vel) vectorMultiply TypicalSpeed;
		_p setVelocity _vel;
	};

	//we cannot do anything with null objects so we are ending script there
	if(isNull _p)exitWith{};


	_surface = _array select 9;
	// surface array containing surfaces name array
	_surfaces =
	[
		MatPath(95),
		MatPath(90),
		MatPath(85),
		MatPath(80),
		MatPath(75),
		MatPath(70),
		MatPath(65),
		MatPath(60),
		MatPath(50),
		MatPath(40),
		MatPath(30),
		MatPath(20),
		MatPath(10)
	];

	// surface modifier
	_mod = _surfaces find _surface;

	// End script if there is no modifier found
	if (_mod != -1) then
	{
		_vel = (velocity _p) vectorMultiply ([0.95,0.9,0.85,0.8,0.75,0.7,0.65,0.6,0.5,0.4,0.3,0.2,0.1] select _mod);
		_p setVelocity _vel;
	};
};