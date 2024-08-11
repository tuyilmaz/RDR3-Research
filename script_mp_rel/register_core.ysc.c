#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 3;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 3;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 1;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 05
{
	var entityCoords;

	uLocal_13.f_12 = uScriptParam_0;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
		func_1(&uLocal_13);

	if (TASK::DOES_SCENARIO_POINT_EXIST(uScriptParam_0.f_1))
	{
		uLocal_13.f_2 = uScriptParam_0.f_1;
		uLocal_13.f_1 = TASK::_GET_SCENARIO_POINT_ENTITY(uLocal_13.f_2);
	}
	else
	{
		func_1(&uLocal_13);
	}

	entityCoords = { ENTITY::GET_ENTITY_COORDS(uLocal_13.f_1, false, false) };

	if (!func_2(entityCoords))
		func_1(&uLocal_13);

	while (true)
	{
		uLocal_13.f_13 = uLocal_13.f_13 + 1;
	
		if (uLocal_13.f_13 >= 30)
		{
			uLocal_13.f_13 = 0;
		
			if (Global_1940199.f_6)
				func_3(&uLocal_13, 5);
		}
	
		if (func_4(Global_1940199, 4194304))
			func_3(&uLocal_13, 5);
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
			func_1(&uLocal_13);
	
		switch (func_5(&uLocal_13))
		{
			case 0:
				if (func_6(&uLocal_13))
				{
					func_7(&uLocal_13);
					func_8(&uLocal_13);
				}
			
				if (TASK::DOES_SCENARIO_POINT_EXIST(uLocal_13.f_2))
					if (func_9(Global_34) && func_10(&uLocal_13))
						func_3(&uLocal_13, 1);
				else
					func_3(&uLocal_13, 5);
				break;
		
			case 1:
				if (func_6(&uLocal_13))
					func_8(&uLocal_13);
			
				if (func_11(&uLocal_13))
					func_3(&uLocal_13, 2);
				break;
		
			case 2:
				if (func_6(&uLocal_13))
					func_8(&uLocal_13);
			
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_13.f_1))
					if (func_12(&uLocal_13))
						func_3(&uLocal_13, 3);
				break;
		
			case 3:
				if (func_6(&uLocal_13))
				{
					func_13(&uLocal_13);
					func_14(&uLocal_13);
					func_8(&uLocal_13);
				}
			
				if (func_15(uLocal_13.f_11))
					func_3(&uLocal_13, 4);
				break;
		
			case 4:
				if (func_6(&uLocal_13))
					func_8(&uLocal_13);
				break;
		
			case 5:
				func_1(&uLocal_13);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

void func_1(var uParam0) // Position - 0x1D2 Signature - 22 01 04
{
	int i;

	SCRIPTS::_0xE7282390542F570D(uParam0->f_12);

	for (i = 0; i < uParam0->f_7; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7[i]))
			OBJECT::DELETE_OBJECT(&uParam0->f_7[i]);
	}

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_11))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_11);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2(var uParam0, var uParam1, var uParam2) // Position - 0x22A Signature - 22 03 05
{
	return false;
}

void func_3(var uParam0, int iParam1) // Position - 0x233 Signature - 22 02 04 00 00 66 01
{
	*uParam0 = iParam1;
	func_16(uParam0);
	return;
}

BOOL func_4(int iParam0, int iParam1) // Position - 0x246 Signature - 22 02 04 00 00 66 00
{
	return iParam0 && iParam1 != false;
}

int func_5(var uParam0) // Position - 0x255 Signature - 22 01 03 00 00 66 00 76
{
	return *uParam0;
}

BOOL func_6(var uParam0) // Position - 0x260 Signature - 22 01 03 00 00 66 00 27 0E
{
	return uParam0->f_14;
}

void func_7(var uParam0) // Position - 0x26C Signature - 22 01 03 00 00 37
{
	uParam0->f_3[0] = joaat("p_cs_billsingle01bx");
	uParam0->f_3[1] = joaat("p_cs_billsingle01bx");

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_11))
		uParam0->f_11 = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@shoprobberies@GLOBAL@EVENT_OPEN_REGISTER@BASE", 2, 0, false, true);

	return;
}

void func_8(var uParam0) // Position - 0x2A6 Signature - 22 01 03 00 00 2F
{
	uParam0->f_14 = 0;
	return;
}

int func_9(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x2B3 Signature - 22 03 06
{
	Interior interiorFromCollision;

	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
	{
		interiorFromCollision = INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam0);
	
		if (INTERIOR::IS_VALID_INTERIOR(interiorFromCollision))
			return 1;
	}

	return 0;
}

int func_10(var uParam0) // Position - 0x2DF Signature - 22 01 05 00 00 2F 67 03 66 03 66 00 27 03 8A 20
{
	int i;
	Hash model;

	for (i = 0; i < uParam0->f_3; i = i + 1)
	{
		model = uParam0->f_3[i];
	
		if (model != 0)
			STREAMING::REQUEST_MODEL(model, false);
	}

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_11) && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_11, true, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_11, true))
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_11);

	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_11, "pblMain"))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_11, "pblMain"))
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_11, "pblMain");
	
		return 0;
	}

	return 1;
}

BOOL func_11(var uParam0) // Position - 0x374 Signature - 22 01 05 00 00 2F 67 03 66 03 66 00 27 03 8A 2A
{
	int i;
	Hash model;

	for (i = 0; i < uParam0->f_3; i = i + 1)
	{
		model = uParam0->f_3[i];
	
		if (model != 0)
			if (!STREAMING::HAS_MODEL_LOADED(model))
				return false;
	}

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_11, true, false))
		return false;

	return true;
}

BOOL func_12(var uParam0) // Position - 0x3C5 Signature - 22 01 03 00 00 66 00 27 01
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_1, "register_open"))
		return false;

	return DECORATOR::DECOR_GET_BOOL(uParam0->f_1, "register_open");
}

void func_13(var uParam0) // Position - 0x3FB Signature - 22 01 06
{
	Vector3 offsetFromEntityInWorldCoords;

	offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0.074814f, -0.117756f, 0.059386f) };
	uParam0->f_7[0] = OBJECT::CREATE_OBJECT(uParam0->f_3[0], offsetFromEntityInWorldCoords, true, true, false, false, true);
	TASK::_ASSOCIATE_PROP_WITH_SCENARIO(uParam0->f_2, uParam0->f_7[0], "OOXO", true);
	offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, -0.082664f, -0.117757f, 0.059386f) };
	uParam0->f_7[1] = OBJECT::CREATE_OBJECT(uParam0->f_3[1], offsetFromEntityInWorldCoords, true, true, false, false, true);
	TASK::_ASSOCIATE_PROP_WITH_SCENARIO(uParam0->f_2, uParam0->f_7[1], "OXOO", true);
	return;
}

void func_14(var uParam0) // Position - 0x497 Signature - 22 01 03 00 00 66 00 27 0B
{
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), ENTITY::GET_ENTITY_ROTATION(uParam0->f_1, 2), 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "OOXO", uParam0->f_7[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "OXOO", uParam0->f_7[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "REGISTER", uParam0->f_1, 0);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_11);
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_11, "pblMain", true);
	return;
}

BOOL func_15(AnimScene ansParam0) // Position - 0x505 Signature - 22 01 03 00 00 66 00 03
{
	if (ANIMSCENE::GET_ANIM_SCENE_PHASE(ansParam0) >= 1f)
		return true;

	return false;
}

void func_16(var uParam0) // Position - 0x51D Signature - 22 01 03 00 00 09
{
	uParam0->f_14 = 1;
	return;
}

