[] spawn {
	private["_v","_i","_g1","_g2"];
	_v=vehicle player;

	while{player==commander _v OR player==driver _v}do{

		waitUntil{sleep 0.01;inputAction "AimUp" >0.15 or inputAction "AimDown" > 0.15 OR (player!=commander _v AND player!=driver _v)};

		_g1=_v animationPhase "ObsGunAnim";
		if(inputaction "AimUp" >0 AND (_g1)<(0.19))then
		{
			_v animate["ObsGunAnim",_g1+0.005];
		};
		if(inputaction "AimDown" >0 AND (_g1)>(-0.1))then
		{
			_v animate["ObsGunAnim",_g1-0.005];
		};
	};
};