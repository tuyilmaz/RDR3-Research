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
	BOOL bLocal_18 = 0;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
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

void func_1() // Position - 0x56 Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 39
{
	return;
}

void func_2() // Position - 0x5E Signature - 22 00 02 00 00 39
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

void func_5() // Position - 0xB4 Signature - 22 00 03 00 00 2F
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

void func_6() // Position - 0x10C Signature - 22 00 02 00 00 54 10
{
	if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_16))
		bLocal_13 = false;

	if (bLocal_18)
		if (!ENTITY::DOES_ENTITY_EXIST(fLocal_19.f_3))
			bLocal_13 = false;
		else if (PED::IS_PED_DEAD_OR_DYING(fLocal_19.f_3, true))
			bLocal_13 = false;
		else if (!PED::IS_PED_USING_THIS_SCENARIO(fLocal_19.f_3, iLocal_16))
			bLocal_13 = false;

	if (!bLocal_13)
		return;

	switch (fLocal_19.f_7)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(fLocal_19.f_3))
			{
				fLocal_19.f_3 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_16);
				bLocal_18 = true;
			}
			else
			{
				fLocal_19.f_7 = 1;
			}
			break;
	
		case 1:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(fLocal_19.f_3, -1134697563))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(fLocal_19.f_2))
					fLocal_19.f_2 = PED::_GET_PED_REGISTER_PROP(fLocal_19.f_3, "s_meatbit_Chunck_small01x_PH_L_HAND", false);
			
				fLocal_19.f_7 = 2;
			}
			break;
	
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(fLocal_19.f_2))
			{
				fLocal_19.f_1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(fLocal_19.f_2);
				OBJECT::_SET_OBJECT_BURN_LEVEL(fLocal_19.f_1, 0f, true);
				fLocal_19.f_7 = 3;
			}
			else
			{
				bLocal_13 = false;
			}
			break;
	
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(fLocal_19.f_3, -1334721097))
			{
				if (ENTITY::DOES_ENTITY_EXIST(fLocal_19.f_2))
				{
					if (!func_12(&(fLocal_19.f_4)))
						func_13(&(fLocal_19.f_4));
				
					fLocal_19.f_7 = 4;
				}
				else
				{
					bLocal_13 = false;
				}
			}
			break;
	
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(fLocal_19.f_2))
			{
				fLocal_19 = func_14(&(fLocal_19.f_4));
			
				if (fLocal_19 > 0f && fLocal_19 <= 10f)
					OBJECT::_SET_OBJECT_BURN_LEVEL(fLocal_19.f_1, fLocal_19 / 10f, true);
				else
					bLocal_13 = false;
			}
			break;
	}

	return;
}

void func_7() // Position - 0x292 Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 03
{
	return;
}

void func_8() // Position - 0x29A Signature - 22 00 02 00 00 03
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x2A6 Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 0A 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 15 4B 03 39 72
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

void func_10(int iParam0) // Position - 0x2CE Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 0A 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 15 4B 03 39 7A
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

void func_11(int iParam0) // Position - 0x2F6 Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 0A 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 15 4B 03 39 82
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

BOOL func_12(var uParam0) // Position - 0x31E Signature - 22 01 03 00 00 66 00 76 09
{
	return func_18(*uParam0, 1);
}

void func_13(var uParam0) // Position - 0x32E Signature - 22 01 03 00 00 66 00 73
{
	func_19(uParam0, 0f);
	return;
}

float func_14(var uParam0) // Position - 0x33D Signature - 22 01 03 00 00 66 00 39
{
	if (!func_12(uParam0))
		return uParam0->f_1;

	if (func_20(uParam0))
		return uParam0->f_2;

	return func_21() - uParam0->f_1;
}

void func_15(var uParam0) // Position - 0x372 Signature - 22 01 03 00 00 50 01 00 22 01 03 00 00 50 01 00 22 01
{
	return;
}

void func_16(var uParam0) // Position - 0x37A Signature - 22 01 03 00 00 50 01 00 22 01 03 00 00 50 01 00 22 02
{
	return;
}

void func_17(var uParam0) // Position - 0x382 Signature - 22 01 03 00 00 50 01 00 22 02
{
	return;
}

BOOL func_18(int iParam0, int iParam1) // Position - 0x38A Signature - 22 02 04 00 00 66 00 66
{
	return iParam0 && iParam1 != false;
}

void func_19(var uParam0, float fParam1) // Position - 0x399 Signature - 22 02 04 00 00 39
{
	uParam0->f_1 = func_21() - fParam1;
	func_22(uParam0, 1);
	func_23(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_20(var uParam0) // Position - 0x3BF Signature - 22 01 03 00 00 66 00 76 11
{
	return func_18(*uParam0, 2);
}

float func_21() // Position - 0x3CF Signature - 22 00 03 00 00 03
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_22(var uParam0, int iParam1) // Position - 0x401 Signature - 22 02 04 00 00 66 00 76 66 01
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_23(var uParam0, int iParam1) // Position - 0x412 Signature - 22 02 04 00 00 66 00 76 66 00
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

