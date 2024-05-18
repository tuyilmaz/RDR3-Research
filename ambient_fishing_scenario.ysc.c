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
	BOOL bLocal_13 = 0;
	Hash hLocal_14 = 0;
	Any anLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = -1474589744;
	var uLocal_20 = 391506844;
	var uLocal_21 = -294392875;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 1050253722;
	var uLocal_29 = 1036831949;
	var uLocal_30 = 1090519040;
	var uLocal_31 = 1092616192;
	var uLocal_32 = 1065353216;
	var uLocal_33 = 1065353216;
	var uLocal_34 = 1073741824;
	var uLocal_35 = 0;
	Ped pedLocal_36 = 0;
	Entity eLocal_37 = 0;
	BOOL bLocal_38 = 0;
	int iLocal_39 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 09
{
	bLocal_13 = 1;
	anLocal_15 = anScriptParam_0;
	iLocal_16 = anScriptParam_0.f_1;
	uLocal_17 = anScriptParam_0.f_2;
	func_1();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_2();

	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && func_3())
	{
		func_4();
		func_5();
		func_6();
		BUILTIN::WAIT(0);
	}

	func_2();
	return;
}

void func_1() // Position - 0x56 Signature - 22 00 02 00 00 50 00 00 22 00 02
{
	return;
}

void func_2() // Position - 0x5E Signature - 22 00 02 00 00 39 BD
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(anLocal_15);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_8();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3() // Position - 0x83 Signature - 22 00 02 00 00 54 0E
{
	if (hLocal_14 != 0)
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hLocal_14) == 0)
			return bLocal_13;
		else
			return true;

	return bLocal_13;
}

void func_4() // Position - 0xAC Signature - 22 00 02 00 00 50 00 00 22 00 03
{
	return;
}

void func_5() // Position - 0xB4 Signature - 22 00 03
{
	int i;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_ERRORS); i = i + 1)
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_ERRORS, i))
		{
			case -843555838:
				func_11(i);
				break;
		
			case -456923784:
				func_10(i);
				break;
		
			case -45008988:
				func_9(i);
				break;
		}
	}

	return;
}

void func_6() // Position - 0x10C Signature - 22 00 02 00 00 54 27
{
	switch (iLocal_39)
	{
		case 0:
			if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_16))
			{
				pedLocal_36 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_16);
			
				if (!ENTITY::IS_ENTITY_DEAD(pedLocal_36) && TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_36, 1))
				{
					eLocal_37 = PED::_GET_PED_REGISTER_PROP(pedLocal_36, "p_fishingPole02x_PH_R_HAND", false);
				
					if (ENTITY::DOES_ENTITY_EXIST(eLocal_37))
					{
						iLocal_18.f_4 = "p_fishingPole02x_Bone_tip";
						iLocal_39 = 1;
					}
				}
			}
			break;
	
		case 1:
			func_12(pedLocal_36, eLocal_37);
		
			if (!bLocal_38)
			{
				if (iLocal_18 == 1)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_36, joaat("cast")))
					{
						func_13();
						bLocal_38 = true;
					}
					else if (TASK::_PED_IS_IN_SCENARIO_BASE(pedLocal_36))
					{
						func_13();
						bLocal_38 = true;
					}
				}
			}
		
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_36, 1))
				bLocal_13 = false;
			break;
	}

	return;
}

void func_7() // Position - 0x1BD Signature - 22 00 02 00 00 39 3C
{
	func_14();
	return;
}

void func_8() // Position - 0x1C9 Signature - 22 00 02 00 00 03
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x1D5 Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 13 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 0A 4B 03 39 A8
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_15(&eventData);
	}

	return;
}

void func_10(int iParam0) // Position - 0x1FD Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 13 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 0A 4B 03 39 B0
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_16(&eventData);
	}

	return;
}

void func_11(int iParam0) // Position - 0x225 Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 13 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 0A 4B 03 39 B8
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_17(&eventData);
	}

	return;
}

void func_12(Ped pedParam0, Entity eParam1) // Position - 0x24D Signature - 22 02
{
	switch (iLocal_18)
	{
		case 0:
			if (func_18() != 0 && ENTITY::DOES_ENTITY_EXIST(eParam1) && func_19() && func_20(eParam1))
				func_21(1);
			break;
	
		case 1:
			break;
	
		case 2:
			if (func_22(pedParam0))
				func_21(3);
			break;
	
		case 3:
			break;
	
		case 4:
			if (func_23())
				func_21(1);
			break;
	
		case 5:
			func_14();
			break;
	}

	if (iLocal_18 == 1 || iLocal_18 == 2 || iLocal_18 == 3 || iLocal_18 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_18.f_5))
			PHYSICS::ACTIVATE_PHYSICS(iLocal_18.f_5);
	
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_18.f_6))
			PHYSICS::ACTIVATE_PHYSICS(iLocal_18.f_6);
	}

	return;
}

void func_13() // Position - 0x329 Signature - 22 00 02 00 00 54 12 09
{
	if (iLocal_18 == 1)
		func_21(2);

	return;
}

void func_14() // Position - 0x33C Signature - 22 00 02 00 00 54 12 2F
{
	if (iLocal_18 == 0)
		return;

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_18.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_18.f_2);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_18.f_3);

	if (PHYSICS::DOES_ROPE_EXIST(iLocal_18.f_8))
		PHYSICS::DELETE_ROPE(&(iLocal_18.f_8));

	if (PHYSICS::DOES_ROPE_EXIST(iLocal_18.f_9))
		PHYSICS::DELETE_ROPE(&(iLocal_18.f_9));

	func_24(&(iLocal_18.f_5));
	func_24(&(iLocal_18.f_6));
	func_24(&(iLocal_18.f_7));
	func_21(0);
	return;
}

void func_15(var uParam0) // Position - 0x3A8 Signature - 22 01 03 00 00 50 01 00 22 01 03 00 00 50 01 00 22 01
{
	return;
}

void func_16(var uParam0) // Position - 0x3B0 Signature - 22 01 03 00 00 50 01 00 22 01 03 00 00 50 01 00 22 00
{
	return;
}

void func_17(var uParam0) // Position - 0x3B8 Signature - 22 01 03 00 00 50 01 00 22 00
{
	return;
}

int func_18() // Position - 0x3C0 Signature - 22 00 02 00 00 5D
{
	return Global_1572887.f_14;
}

BOOL func_19() // Position - 0x3CE Signature - 22 00 02 00 00 89 12 27 01
{
	STREAMING::REQUEST_MODEL(iLocal_18.f_1, false);
	STREAMING::REQUEST_MODEL(iLocal_18.f_2, false);
	STREAMING::REQUEST_MODEL(iLocal_18.f_3, false);

	if (STREAMING::HAS_MODEL_LOADED(iLocal_18.f_1) && STREAMING::HAS_MODEL_LOADED(iLocal_18.f_2) && STREAMING::HAS_MODEL_LOADED(iLocal_18.f_3))
		return true;

	return false;
}

BOOL func_20(Entity eParam0) // Position - 0x41B Signature - 22 01 0A
{
	int entityBoneIndexByName;
	var worldPositionOfEntityBone;
	Vector3 entityCoords;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return false;

	if (MISC::IS_STRING_NULL_OR_EMPTY(iLocal_18.f_4))
		iLocal_18.f_4 = "line_attach";

	entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(eParam0, iLocal_18.f_4);
	worldPositionOfEntityBone = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(eParam0, entityBoneIndexByName) };

	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_18.f_5))
	{
		entityCoords = { worldPositionOfEntityBone };
		entityCoords.f_2 = entityCoords.f_2 - iLocal_18.f_10;
		iLocal_18.f_5 = OBJECT::CREATE_OBJECT(iLocal_18.f_1, entityCoords, false, true, false, false, true);
		PHYSICS::SET_DAMPING(iLocal_18.f_5, 0, iLocal_18.f_15);
		ENTITY::_0x978AA2323ED32209(iLocal_18.f_5, 0f);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_18.f_5, true);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_18.f_6))
	{
		entityCoords = { worldPositionOfEntityBone };
		entityCoords.f_2 = entityCoords.f_2 - (iLocal_18.f_10 + iLocal_18.f_11);
		iLocal_18.f_6 = OBJECT::CREATE_OBJECT(iLocal_18.f_2, entityCoords, false, true, false, false, true);
		PHYSICS::SET_DAMPING(iLocal_18.f_6, 0, iLocal_18.f_15);
		ENTITY::_0x978AA2323ED32209(iLocal_18.f_6, 0f);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_18.f_6, true);
	}

	if (ENTITY::DOES_ENTITY_EXIST(iLocal_18.f_5) && ENTITY::DOES_ENTITY_EXIST(iLocal_18.f_6))
	{
		if (!PHYSICS::DOES_ROPE_EXIST(iLocal_18.f_8))
		{
			entityCoords = { worldPositionOfEntityBone };
			iLocal_18.f_8 = PHYSICS::_ADD_ROPE_2(entityCoords, 0f, 0f, 0f, iLocal_18.f_12, 8, false, -1, -1082130432);
			PHYSICS::_0xD699E688B49C0FD2(iLocal_18.f_8, 0.5f, iLocal_18.f_10, iLocal_18.f_10, true);
			PHYSICS::_ATTACH_ENTITIES_TO_ROPE_2(iLocal_18.f_8, eParam0, iLocal_18.f_5, 0f, 0f, 0f, 0f, 0f, 0f, iLocal_18.f_4, "rod_attach");
			PHYSICS::_CREATE_ROPE_WINDING_ABILITY(iLocal_18.f_8, 0, 0, -1082130432, true);
			PHYSICS::_0xBB3E9B073E66C3C9(iLocal_18.f_8, true, true, true, false);
			PHYSICS::_0x423C6B1F3786D28B(iLocal_18.f_8, 1);
			PHYSICS::ROPE_SET_UPDATE_ORDER(iLocal_18.f_8, 1);
			PHYSICS::_0xC89E7410A93AC19A(iLocal_18.f_8, 2f);
			PHYSICS::_0x1D97DA8ACB5D2582(iLocal_18.f_8, 15);
		}
	
		if (!PHYSICS::DOES_ROPE_EXIST(iLocal_18.f_9))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(iLocal_18.f_5, true, false) };
			iLocal_18.f_9 = PHYSICS::_ADD_ROPE_2(entityCoords, 0f, 0f, 0f, iLocal_18.f_11, 10, false, -1, -1082130432);
			PHYSICS::_0xD699E688B49C0FD2(iLocal_18.f_9, 0.5f, iLocal_18.f_11, iLocal_18.f_11, true);
			PHYSICS::_ATTACH_ENTITIES_TO_ROPE_2(iLocal_18.f_9, iLocal_18.f_5, iLocal_18.f_6, 0f, 0f, 0f, 0f, 0f, 0f, "hook_attach", "fishingLine_bone");
			PHYSICS::_CREATE_ROPE_WINDING_ABILITY(iLocal_18.f_9, 0, 0, -1082130432, true);
			PHYSICS::_0xBB3E9B073E66C3C9(iLocal_18.f_9, true, true, true, false);
			PHYSICS::ROPE_SET_UPDATE_ORDER(iLocal_18.f_9, 1);
			PHYSICS::_0xC89E7410A93AC19A(iLocal_18.f_9, 0f);
		}
	}

	return PHYSICS::DOES_ROPE_EXIST(iLocal_18.f_8) && PHYSICS::DOES_ROPE_EXIST(iLocal_18.f_9);
}

void func_21(int iParam0) // Position - 0x66F Signature - 22 01 03 00 00 54
{
	if (iLocal_18 != iParam0)
		iLocal_18 = iParam0;

	return;
}

BOOL func_22(Ped pedParam0) // Position - 0x682 Signature - 22 01 03 00 00 66 00 03
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || !PHYSICS::DOES_ROPE_EXIST(iLocal_18.f_8))
		return false;

	if (iLocal_18.f_17 == 0)
	{
		PHYSICS::_0x1FC92BDBA1106BD2(iLocal_18.f_8, iLocal_18.f_13);
		PHYSICS::START_ROPE_UNWINDING_FRONT(iLocal_18.f_8);
		iLocal_18.f_17 = 1;
		func_25(pedParam0);
	}
	else if (PHYSICS::_ROPE_GET_FORCED_LENGTH(iLocal_18.f_8) >= iLocal_18.f_12)
	{
		PHYSICS::STOP_ROPE_UNWINDING_FRONT(iLocal_18.f_8);
		iLocal_18.f_17 = 0;
		return true;
	}

	return false;
}

BOOL func_23() // Position - 0x6F3 Signature - 22 00 02 00 00 89 12 27 08
{
	if (!PHYSICS::DOES_ROPE_EXIST(iLocal_18.f_8) || !ENTITY::DOES_ENTITY_EXIST(iLocal_18.f_5) || !ENTITY::DOES_ENTITY_EXIST(iLocal_18.f_6))
		return false;

	if (iLocal_18.f_17 == 0)
	{
		PHYSICS::_0x1FC92BDBA1106BD2(iLocal_18.f_8, iLocal_18.f_14);
		PHYSICS::START_ROPE_WINDING(iLocal_18.f_8);
		iLocal_18.f_17 = 1;
	}
	else if (PHYSICS::_ROPE_GET_FORCED_LENGTH(iLocal_18.f_8) <= iLocal_18.f_10)
	{
		PHYSICS::STOP_ROPE_UNWINDING_FRONT(iLocal_18.f_8);
		iLocal_18.f_17 = 0;
		PHYSICS::SET_DAMPING(iLocal_18.f_5, 0, iLocal_18.f_15);
		PHYSICS::SET_DAMPING(iLocal_18.f_6, 0, iLocal_18.f_15);
		return true;
	}

	return false;
}

void func_24(Object* pobParam0) // Position - 0x789 Signature - 22 01 03 00 00 66 00 76
{
	if (!ENTITY::DOES_ENTITY_EXIST(*pobParam0))
		return;

	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pobParam0))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*pobParam0, true, false);

	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pobParam0, false))
		return;

	if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*pobParam0))
		ENTITY::DETACH_ENTITY(*pobParam0, true, true);

	OBJECT::DELETE_OBJECT(pobParam0);
	return;
}

void func_25(Ped pedParam0) // Position - 0x7DB Signature - 22 01 15
{
	Vector3 entityCoords;
	float entityHeading;
	var offsetFromCoordAndHeadingInWorldCoords;
	float num;
	float num2;
	float num3;
	var unk7;
	Vector3 vector;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || !ENTITY::DOES_ENTITY_EXIST(iLocal_18.f_5) || !ENTITY::DOES_ENTITY_EXIST(iLocal_18.f_6))
		return;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(iLocal_18.f_5, true, false) };
	entityHeading = ENTITY::GET_ENTITY_HEADING(pedParam0);
	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(entityCoords, entityHeading, 0f, 10f, 0f) };
	num = { func_26(offsetFromCoordAndHeadingInWorldCoords - entityCoords) };
	num2 = 1f;
	num3 = 0f;
	func_27(&num2, &num3, 45f);
	unk7 = { func_26(num, num.f_1, num3) };
	vector = { unk7 * { iLocal_18.f_12 * 5f, iLocal_18.f_12 * 5f, iLocal_18.f_12 * 5f } };
	PHYSICS::SET_DAMPING(iLocal_18.f_5, 0, iLocal_18.f_16);
	PHYSICS::SET_DAMPING(iLocal_18.f_6, 0, iLocal_18.f_16);
	ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_18.f_5, 3, vector, 0f, 0f, 0f, 0, false, true, true, false, true);
	ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_18.f_6, 3, vector, 0f, 0f, 0f, 0, false, true, true, false, true);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_18.f_5, true);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_18.f_6, true);
	return;
}

Vector3 func_26(float fParam0, var uParam1, float fParam2) // Position - 0x8D5 Signature - 22 03 07 00 00 1D
{
	float num;
	float num2;

	num = BUILTIN::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

void func_27(var uParam0, var uParam1, float fParam2) // Position - 0x914 Signature - 22 03 07 00 00 66
{
	float num;
	float num2;

	num = *uParam0;
	num2 = *uParam1;
	*uParam0 = (num * BUILTIN::COS(fParam2)) - (num2 * BUILTIN::SIN(fParam2));
	*uParam1 = (num * BUILTIN::SIN(fParam2)) + (num2 * BUILTIN::COS(fParam2));
	return;
}

