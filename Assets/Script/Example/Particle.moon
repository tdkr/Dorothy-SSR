Dorothy!

Data = {
	Angle: {"B","float",90}
	AngleVariance: {"C","float",360}
	BlendFuncDestination: {"D","BlendFunc",BlendFunc\get "One"}
	BlendFuncSource: {"E"," BlendFunc",BlendFunc\get "SrcAlpha"}
	Duration: {"F","floatN",-1}
	EmissionRate: {"G","float",350}
	FinishColor: {"H","Color",Color 0xff000000}
	FinishColorVariance: {"I","Color",Color 0x0}
	RotationStart: {"J","float",0}
	RotationStartVariance: {"K","float",0}
	RotationEnd: {"L","float",0}
	RotationEndVariance: {"M","float",0}
	FinishParticleSize: {"N","floatN",-1}
	FinishParticleSizeVariance: {"O","float",0}
	MaxParticles: {"P","Uint32",100}
	ParticleLifespan: {"Q","float",1}
	ParticleLifespanVariance: {"R","float",0.5}
	StartPosition: {"S","Vec2",Vec2 0,0}
	StartPositionVariance: {"T","Vec2",Vec2 0,0}
	StartColor: {"U","Color",Color 194,64,31,255}
	StartColorVariance: {"V","Color",Color 0x0}
	StartParticleSize: {"W","float",30}
	StartParticleSizeVariance: {"X","float",10}
	TextureName: {"Y","string",""}
	TextureRect: {"Z","Rect",Rect 0,0,0,0}
	EmitterType: {"a","EmitterType",0}
	-- gravity
	RotationIsDir: {"b","bool",false}
	Gravity: {"c","Vec2",Vec2 0,100}
	Speed: {"d","float",20}
	SpeedVariance: {"e","float",5}
	RadialAcceleration: {"f","float",0}
	RadialAccelVariance: {"g","float",0}
	TangentialAcceleration: {"h","float",0}
	TangentialAccelVariance: {"i","float",0}
	-- radius
	-- StartRadius: {"j","float",0}
	-- StartRadiusVariance: {"k","float",0}
	-- FinishRadius: {"l","floatN"-1}
	-- FinishRadiusVariance: {"m","float",0}
	-- RotatePerSecond: {"n","float",0}
	-- RotatePerSecondVariance: {"o","float",0}
}

toString = (value)->
	switch tolua.type value
		when "number"
			"#{value}"
		when "string"
			value
		when "Rect"
			"#{value.x},#{value.y},#{value.width},#{value.height}"
		when "boolean"
			value and "1" or "0"
		when "Vec2"
			"#{value.x},#{value.y}"
		when "Color"
			string.format "%.2f,%.2f,%.2f,%.2f",value.r/255,value.g/255,value.b/255,value.a/255

Cache\update "__test__.par", "<A>"..table.concat(["<#{v[1]} A=\"#{toString v[3]}\"/>" for k,v in pairs Data]).."</A>"

particle = with Particle "__test__.par"
	\start!

Director.entry\addChild with Node!
	.scaleX = 2
	.scaleY = 2
	\addChild particle
	.touchEnabled = true
	\slot "TapMoved",(touch)->
		return unless touch.id == 0
		particle.position += touch.delta/2

-- example codes ends here, some test ui below --

Dorothy builtin.ImGui

DataDirty = false

Item = (name)->
	PushItemWidth -180
	switch Data[name][2]
		when "float"
			changed, Data[name][3] = DragFloat name, Data[name][3], 0.1, 0, 1000, "%.1f"
			DataDirty = true if changed
		when "floatN"
			changed, Data[name][3] = DragFloat name, Data[name][3], 0.1, -1, 1000, "%.1f"
			DataDirty = true if changed
		when "Uint32"
			changed, Data[name][3] = DragInt name, Data[name][3], 1, 0, 1000
			DataDirty = true if changed
		when "EmitterType"
			LabelText "EmitterType","Gravity"
		when "BlendFunc"
			LabelText "BlendFunc","Additive"
		when "Vec2"
			changed = DragInt2 name, Data[name][3], 1, -1000, 1000
			DataDirty = true if changed
		when "Color"
			PushItemWidth -150
			SetColorEditOptions "RGB"
			changed = ColorEdit4 name, Data[name][3]
			DataDirty = true if changed
			PopItemWidth!
		when "bool"
			changed, Data[name][3] = Checkbox name, Data[name][3]
			DataDirty = true if changed
		else
			nil
	PopItemWidth!

work = loop ->
	sleep 1
	if DataDirty
		DataDirty = false
		Cache\update "__test__.par", "<A>"..table.concat(["<#{v[1]} A=\"#{toString v[3]}\"/>" for k,v in pairs Data]).."</A>"
		particle\removeFromParent!
		particle = with Particle "__test__.par"
			\start!
		Director.entry.children.first\addChild particle

Director.entry\addChild with Node!
	\schedule ->
		{:width,:height} = App.designSize
		SetNextWindowPos Vec2(width-400,10), "FirstUseEver"
		SetNextWindowSize Vec2(390,height-80), "FirstUseEver"
		if Begin "Particle", "NoResize|NoSavedSettings"
			for k,_ in pairs Data
				Item k
		End!
		work!
