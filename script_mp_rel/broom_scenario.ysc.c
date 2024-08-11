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
	var uLocal_19 = 5;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	Ped pedLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	float fLocal_91 = 0f;
	BOOL bLocal_92 = 0;
	var uLocal_93 = 1;
	var uLocal_94 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 09
{
	bLocal_13 = 1;
	iLocal_87 = 5;
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

void func_1() // Position - 0x59 Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 39
{
	return;
}

void func_2() // Position - 0x61 Signature - 22 00 02 00 00 39
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(anLocal_15);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_8();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3() // Position - 0x86 Signature - 22 00 02 00 00 54
{
	if (hLocal_14 != 0)
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hLocal_14) == 0)
			return bLocal_13;
		else
			return true;

	return bLocal_13;
}

void func_4() // Position - 0xAF Signature - 22 00 02 00 00 50 00 00 22 00 03
{
	return;
}

void func_5() // Position - 0xB7 Signature - 22 00 03 00 00 2F
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

void func_6() // Position - 0x10F Signature - 22 00 04
{
	int num;
	int i;

	switch (iLocal_18)
	{
		case 0:
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_16))
			{
				iLocal_18 = 7;
				return;
			}
		
			pedLocal_85 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_16);
		
			if (!func_12(pedLocal_85, 0))
			{
				iLocal_18 = 7;
				return;
			}
		
			bLocal_92 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(PERSCHAR::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(pedLocal_85));
		
			if (!bLocal_92)
			{
				TASK::_0xE7BBC4E56B989449(iLocal_16, &uLocal_93, 1);
			
				if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_93[0]))
				{
					iLocal_18 = 7;
					return;
				}
			}
		
			num = BUILTIN::FLOOR(TASK::_GET_SCENARIO_POINT_RADIUS(iLocal_16));
		
			if (!func_13(num, uLocal_17))
			{
				iLocal_18 = 7;
				return;
			}
		
			iLocal_18 = 1;
			break;
	
		case 1:
			if (!func_12(Global_33, 0))
			{
				iLocal_18 = 7;
				return;
			}
		
			if (!func_12(pedLocal_85, 0))
			{
				iLocal_18 = 7;
				return;
			}
		
			if (!PED::IS_PED_USING_THIS_SCENARIO(pedLocal_85, iLocal_16))
			{
				iLocal_18 = 7;
				return;
			}
		
			if (func_14(Global_33, pedLocal_85, true) > 1225f)
			{
				return;
			}
			else if (ENTITY::GET_ENTITY_SPEED(Global_33) < 9.5f)
			{
				iLocal_18 = 2;
				return;
			}
			else
			{
				iLocal_18 = 7;
				return;
			}
			break;
	
		case 2:
			for (i = 0; i < 5; i = i + 1)
			{
				if (uLocal_19[i /*13*/].f_1 == 0)
				{
					iLocal_87 = i;
					break;
				}
			
				if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_19[i /*13*/]))
				{
					if (i > 0)
					{
						uLocal_19[i /*13*/].f_7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(uLocal_19[i - 1 /*13*/], true), TASK::_GET_SCENARIO_POINT_HEADING(uLocal_19[i - 1 /*13*/], true), uLocal_19[i /*13*/].f_4) };
						uLocal_19[i /*13*/].f_11 = TASK::_GET_SCENARIO_POINT_HEADING(uLocal_19[i - 1 /*13*/], true) + uLocal_19[i /*13*/].f_10;
					}
					else
					{
						uLocal_19[i /*13*/].f_7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_16, true), uLocal_19[i /*13*/].f_4) };
						uLocal_19[i /*13*/].f_11 = TASK::_GET_SCENARIO_POINT_HEADING(iLocal_16, true) + uLocal_19[i /*13*/].f_10;
					}
				
					uLocal_19[i /*13*/] = TASK::CREATE_SCENARIO_POINT_HASH(uLocal_19[i /*13*/].f_1, uLocal_19[i /*13*/].f_7, uLocal_19[i /*13*/].f_11, 0, 0, false);
					TASK::_0xE69FDA40AAC3EFC0(uLocal_19[i /*13*/], 0);
					TASK::_0xA7479FB665361EDB(uLocal_19[i /*13*/], 0);
				}
			}
		
			iLocal_18 = 3;
			break;
	
		case 3:
			if (func_15())
			{
				iLocal_18 = 7;
				return;
			}
		
			if (!func_16(&uLocal_88))
				func_17(&uLocal_88, false);
		
			if (func_18(&uLocal_88, fLocal_91) && TASK::_PED_IS_IN_SCENARIO_BASE(pedLocal_85))
				iLocal_18 = 4;
			break;
	
		case 4:
			if (func_15())
			{
				iLocal_18 = 7;
				return;
			}
		
			if (TASK::_0x79197F7D2BB5E73A(pedLocal_85, uLocal_19[iLocal_86 /*13*/], uLocal_19[iLocal_86 /*13*/].f_2, uLocal_19[iLocal_86 /*13*/].f_3, 0, 0))
			{
				if (PED::IS_PED_USING_THIS_SCENARIO(pedLocal_85, uLocal_19[iLocal_86 /*13*/]))
				{
					fLocal_91 = uLocal_19[iLocal_86 /*13*/].f_12;
					iLocal_86 = iLocal_86 + 1;
					func_19(&uLocal_88);
				
					if (iLocal_86 < iLocal_87)
						iLocal_18 = 3;
					else
						iLocal_18 = 5;
				}
			}
			break;
	
		case 5:
			if (func_15())
			{
				iLocal_18 = 7;
				return;
			}
		
			if (!func_16(&uLocal_88))
				func_17(&uLocal_88, false);
		
			if (func_18(&uLocal_88, fLocal_91) && TASK::_PED_IS_IN_SCENARIO_BASE(pedLocal_85))
				iLocal_18 = 6;
			break;
	
		case 6:
			if (func_15())
			{
				iLocal_18 = 7;
				return;
			}
		
			if (!bLocal_92)
			{
				if (!func_20(pedLocal_85, -76381094))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_85, true, false);
					TASK::TASK_USE_SCENARIO_POINT(pedLocal_85, uLocal_93[0], 0, 0, true, false, 0, false, -1082130432, false);
					PED::SET_PED_KEEP_TASK(pedLocal_85, true);
				}
			
				if (PED::IS_PED_USING_THIS_SCENARIO(pedLocal_85, uLocal_93[0]))
					iLocal_18 = 7;
			}
			else
			{
				iLocal_18 = 7;
			}
			break;
	
		case 7:
			bLocal_13 = false;
			return;
	}

	return;
}

void func_7() // Position - 0x48D Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 03
{
	return;
}

void func_8() // Position - 0x495 Signature - 22 00 02 00 00 03
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x4A1 Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 08 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 18 4B 03 39 D6
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_21(&eventData);
	}

	return;
}

void func_10(int iParam0) // Position - 0x4C9 Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 08 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 18 4B 03 39 DE
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_22(&eventData);
	}

	return;
}

void func_11(int iParam0) // Position - 0x4F1 Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 08 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 18 4B 03 39 E6
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_23(&eventData);
	}

	return;
}

BOOL func_12(Ped pedParam0, int iParam1) // Position - 0x519 Signature - 22 02 05
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_24(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_24(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_24(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_24(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_24(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_24(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_24(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_24(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

BOOL func_13(int iParam0, int iParam1) // Position - 0x618 Signature - 22 02 04 00 00 66 01 3C
{
	switch (iParam1)
	{
		case joaat("SC_WORLD_HUMAN_PUSH_BROOM_WORKING"):
			switch (iParam0)
			{
				case 0:
					fLocal_91 = 10f;
					func_25(&uLocal_19[0 /*13*/], joaat("world_human_push_broom_working"), 3, 10f);
					func_25(&uLocal_19[1 /*13*/], joaat("world_human_push_broom_working"), 3, 10f);
					func_25(&uLocal_19[2 /*13*/], joaat("world_human_push_broom_working"), 3, 10f);
					func_25(&uLocal_19[3 /*13*/], joaat("world_human_push_broom_working"), 3, 10f);
					return true;
			
				case 1:
					fLocal_91 = 10f;
					func_25(&uLocal_19[0 /*13*/], joaat("world_human_push_broom_working"), 4, 10f);
					func_25(&uLocal_19[1 /*13*/], joaat("world_human_push_broom_working"), 4, 10f);
					func_25(&uLocal_19[2 /*13*/], joaat("world_human_push_broom_working"), 4, 10f);
					return true;
			}
			break;
	
		case joaat("SC_WORLD_HUMAN_STRAW_BROOM_WORKING"):
			switch (iParam0)
			{
				case 0:
					fLocal_91 = 10f;
				
					if (PED::IS_PED_MALE(pedLocal_85))
					{
						func_25(&uLocal_19[0 /*13*/], joaat("world_human_straw_broom_working"), 4, 10f);
						func_25(&uLocal_19[1 /*13*/], joaat("world_human_straw_broom_working"), 4, 10f);
						func_25(&uLocal_19[2 /*13*/], joaat("world_human_straw_broom_working"), 4, 10f);
					}
					else
					{
						func_25(&uLocal_19[0 /*13*/], joaat("world_human_straw_broom_working"), 5, 10f);
						func_25(&uLocal_19[1 /*13*/], joaat("world_human_straw_broom_working"), 5, 10f);
						func_25(&uLocal_19[2 /*13*/], joaat("world_human_straw_broom_working"), 5, 10f);
					}
				
					return true;
			
				case 1:
					fLocal_91 = 10f;
				
					if (PED::IS_PED_MALE(pedLocal_85))
					{
						func_25(&uLocal_19[0 /*13*/], joaat("world_human_straw_broom_working"), 1, 10f);
						func_25(&uLocal_19[1 /*13*/], joaat("world_human_straw_broom_working"), 1, 10f);
					}
					else
					{
						func_25(&uLocal_19[0 /*13*/], joaat("world_human_straw_broom_working"), 0, 10f);
						func_25(&uLocal_19[1 /*13*/], joaat("world_human_straw_broom_working"), 0, 10f);
					}
				
					return true;
			}
			break;
	}

	return false;
}

float func_14(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x807 Signature - 22 03 05 00 00
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));

	return func_26(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));
}

BOOL func_15() // Position - 0x85E Signature - 22 00 02 00 00 70
{
	if (!func_12(Global_33, 0))
		return true;

	if (!func_12(pedLocal_85, 0))
		return true;

	if (iLocal_86 <= 0)
		if (!PED::IS_PED_USING_THIS_SCENARIO(pedLocal_85, iLocal_16) && !PED::IS_PED_USING_THIS_SCENARIO(pedLocal_85, uLocal_19[iLocal_86 /*13*/]))
			return true;
	else if (iLocal_86 >= iLocal_87)
		if (!bLocal_92)
			if (!PED::IS_PED_USING_THIS_SCENARIO(pedLocal_85, uLocal_19[iLocal_86 - 1 /*13*/]) && !PED::IS_PED_USING_THIS_SCENARIO(pedLocal_85, uLocal_93[0]))
				return true;
	else if (!PED::IS_PED_USING_THIS_SCENARIO(pedLocal_85, uLocal_19[iLocal_86 - 1 /*13*/]) && !PED::IS_PED_USING_THIS_SCENARIO(pedLocal_85, uLocal_19[iLocal_86 /*13*/]))
		return true;

	return false;
}

BOOL func_16(var uParam0) // Position - 0x910 Signature - 22 01 03 00 00 66 00 76 09
{
	return func_27(*uParam0, 1);
}

void func_17(var uParam0, BOOL bParam1) // Position - 0x920 Signature - 22 02 04 00 00 66 01 6A
{
	if (bParam1 || !func_16(uParam0))
		func_28(uParam0);

	return;
}

BOOL func_18(var uParam0, float fParam1) // Position - 0x940 Signature - 22 02 04 00 00 66 00 39
{
	if (!func_16(uParam0))
		return false;

	if (func_29(uParam0) > fParam1)
		return true;

	return false;
}

void func_19(var uParam0) // Position - 0x967 Signature - 22 01 03 00 00 73
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_20(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x97D Signature - 22 02 04 00 00 66 00 03
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			if (esthParam1 == SCRIPT_TASK_DRIVE_BY && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(pedParam0))
				return true;
		
			if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 0)
				return true;
		}
	}

	return false;
}

void func_21(var uParam0) // Position - 0x9D6 Signature - 22 01 03 00 00 50 01 00 22 01 03 00 00 50 01 00 22 01
{
	return;
}

void func_22(var uParam0) // Position - 0x9DE Signature - 22 01 03 00 00 50 01 00 22 01 03 00 00 50 01 00 22 02
{
	return;
}

void func_23(var uParam0) // Position - 0x9E6 Signature - 22 01 03 00 00 50 01 00 22 02
{
	return;
}

BOOL func_24(int iParam0, int iParam1) // Position - 0x9EE Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 04
{
	return iParam0 && iParam1 != false;
}

void func_25(var uParam0, int iParam1, int iParam2, float fParam3) // Position - 0x9FD Signature - 22 04
{
	uParam0->f_1 = iParam1;
	uParam0->f_2 = func_30(iParam1, iParam2);
	uParam0->f_3 = func_31(iParam1, iParam2);
	uParam0->f_4 = { func_32(iParam1, iParam2) };
	uParam0->f_10 = func_33(iParam1, iParam2);
	uParam0->f_12 = fParam3;
	return;
}

float func_26(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0xA43 Signature - 22 06
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_27(int iParam0, int iParam1) // Position - 0xA61 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 01
{
	return iParam0 && iParam1 != false;
}

void func_28(var uParam0) // Position - 0xA70 Signature - 22 01 03 00 00 66 00 73
{
	func_34(uParam0, 0f);
	return;
}

float func_29(var uParam0) // Position - 0xA7F Signature - 22 01 03 00 00 66 00 39
{
	if (!func_16(uParam0))
		return uParam0->f_1;

	if (func_35(uParam0))
		return uParam0->f_2;

	return func_36() - uParam0->f_1;
}

// Unhandled jump detected. Output should be considered invalid
char* func_30(int iParam0, int iParam1) // Position - 0xAB4 Signature - 22 02 04 00 00 66 00 3C 02 00 56 F8 F1 D6 A5
{
	switch (iParam0)
	{
		case joaat("world_human_push_broom_working"):
			switch (iParam1)
			{
				case 0:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_LTURN_90";
			
				case 1:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_RTURN_90";
			
				case 2:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_BACKRIGHT";
			
				case 3:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_FRONTRIGHT";
			
				case 4:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_RIGHT";
			
				default:
					break;
			}
			break;
	
		case joaat("world_human_straw_broom_working"):
			if (PED::IS_PED_MALE(pedLocal_85))
			{
				switch (iParam1)
				{
					case 0:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_LTURN_90";
				
					case 1:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_RTURN_90";
				
					case 2:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_BACKRIGHT";
				
					case 3:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_FRONTRIGHT";
				
					case 4:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_RIGHT";
				
					default:
						goto 0xB2;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_LTURN_90";
				
					case 1:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_RTURN_90";
				
					case 5:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_LEFT";
				
					case 6:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_BACKLEFT";
				
					case 7:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_FRONTLEFT";
				
					default:
						break;
				}
			}
			break;
	}

	return "";
}

char* func_31(int iParam0, int iParam1) // Position - 0xBBC Signature - 22 02 04 00 00 66 00 3C 02 00 56 F8 F1 D6 09 00 36 3C C5 4C 03 00 68 73
{
	switch (iParam0)
	{
		case joaat("world_human_push_broom_working"):
		case joaat("world_human_straw_broom_working"):
			switch (iParam1)
			{
				case 0:
					return "BASE_TRANS_LTURN_90";
			
				case 1:
					return "BASE_TRANS_RTURN_90";
			
				case 2:
					return "BASE_TRANS_BACKRIGHT";
			
				case 3:
					return "BASE_TRANS_FRONTRIGHT";
			
				case 4:
					return "BASE_TRANS_RIGHT";
			
				case 5:
					return "BASE_TRANS_LEFT";
			
				case 6:
					return "BASE_TRANS_BACKLEFT";
			
				case 7:
					return "BASE_TRANS_FRONTLEFT";
			
				default:
					break;
			}
			break;
	}

	return "";
}

Vector3 func_32(int iParam0, int iParam1) // Position - 0xC4F Signature - 22 02 04 00 00 66 00 3C 02 00 56 F8 F1 D6 09 00 36 3C C5 4C 03 00 68 93
{
	switch (iParam0)
	{
		case joaat("world_human_push_broom_working"):
		case joaat("world_human_straw_broom_working"):
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				case 1:
					return 0f, 0f, 0f;
			
				case 2:
					return 0.380574f, -0.380598f, 0f;
			
				case 3:
					return 0.380598f, 0.380574f, 0f;
			
				case 4:
					return 0.53823f, 0f, 0f;
			
				case 5:
					return -0.53823f, 0f, 0f;
			
				case 6:
					return -0.380574f, -0.380598f, 0f;
			
				case 7:
					return -0.380598f, 0.380574f, 0f;
			
				default:
					break;
			}
			break;
	}

	return 0f, 0f, 0f;
}

float func_33(int iParam0, int iParam1) // Position - 0xD01 Signature - 22 02 04 00 00 66 00 3C 02 00 56 F8 F1 D6 09 00 36 3C C5 4C 03 00 68 63
{
	switch (iParam0)
	{
		case joaat("world_human_push_broom_working"):
		case joaat("world_human_straw_broom_working"):
			switch (iParam1)
			{
				case 0:
					return 90f;
			
				case 1:
					return -90f;
			
				case 2:
					return 0f;
			
				case 3:
					return 0f;
			
				case 4:
					return 0f;
			
				case 5:
					return 0f;
			
				case 6:
					return 0f;
			
				case 7:
					return 0f;
			
				default:
					break;
			}
			break;
	}

	return 0f;
}

void func_34(var uParam0, float fParam1) // Position - 0xD81 Signature - 22 02 04 00 00 39
{
	uParam0->f_1 = func_36() - fParam1;
	func_37(uParam0, 1);
	func_38(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_35(var uParam0) // Position - 0xDA7 Signature - 22 01 03 00 00 66 00 76 11
{
	return func_27(*uParam0, 2);
}

float func_36() // Position - 0xDB7 Signature - 22 00 03 00 00 03
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_37(var uParam0, int iParam1) // Position - 0xDE9 Signature - 22 02 04 00 00 66 00 76 66 01
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_38(var uParam0, int iParam1) // Position - 0xDFA Signature - 22 02 04 00 00 66 00 76 66 00
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

