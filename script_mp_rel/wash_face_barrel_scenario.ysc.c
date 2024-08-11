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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	float fLocal_19 = 0f;
	float fLocal_20 = 0f;
	BOOL bLocal_21 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 09
{
	bLocal_13 = 1;
	fLocal_19 = 1f;
	fLocal_20 = 1f;
	anLocal_15 = anScriptParam_0;
	uLocal_16 = anScriptParam_0.f_1;
	uLocal_17 = anScriptParam_0.f_2;
	func_1();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(&func_11))
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

void func_1() // Position - 0x5C Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 39
{
	return;
}

void func_2() // Position - 0x64 Signature - 22 00 02 00 00 39
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(anLocal_15);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_8();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3() // Position - 0x89 Signature - 22 00 02 00 00 54
{
	if (hLocal_14 != 0)
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hLocal_14) == 0)
			return bLocal_13;
		else
			return true;

	return bLocal_13;
}

void func_4() // Position - 0xB2 Signature - 22 00 02 00 00 50 00 00 22 00 03
{
	return;
}

void func_5() // Position - 0xBA Signature - 22 00 03
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

void func_6() // Position - 0x112 Signature - 22 00 02 00 00 70
{
	if (PED::IS_PED_INJURED(Global_33) || func_12() != 0)
	{
		bLocal_13 = false;
		return;
	}

	if (!bLocal_21 && ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 442509369))
	{
		PED::_0xEB8886E1065654CD(Global_33, 4, "ALL", 0.5f);
		PED::_0xEB8886E1065654CD(Global_33, 6, "ALL", 0.5f);
		PED::_0xEB8886E1065654CD(Global_33, 1, "ALL", 0.5f);
		PED::_0xA7A806677F8DE138(Global_33);
		bLocal_21 = true;
		bLocal_13 = false;
	
		if (func_13(1))
			func_14(-0.3f, false);
	}

	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_33))
		bLocal_13 = false;

	return;
}

void func_7() // Position - 0x1A7 Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 03
{
	return;
}

void func_8() // Position - 0x1AF Signature - 22 00 02 00 00 03
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x1BB Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 0C 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 09 4B 03 39 6D
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

void func_10(int iParam0) // Position - 0x1E3 Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 0C 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 09 4B 03 39 75
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

void func_11(int iParam0) // Position - 0x20B Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 0C 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 09 4B 03 39 7D
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

int func_12() // Position - 0x233 Signature - 22 00 02 00 00 5D
{
	return Global_1572887.f_14;
}

BOOL func_13(int iParam0) // Position - 0x241 Signature - 22 01 03 00 00 66
{
	return iParam0 > -1 && iParam0 < 2;
}

void func_14(float fParam0, BOOL bParam1) // Position - 0x256 Signature - 22 02 04 00 00 5D
{
	func_18(Global_1940026.f_9 + fParam0, bParam1);
	return;
}

void func_15(var uParam0) // Position - 0x26D Signature - 22 01 03 00 00 50 01 00 22 01 03 00 00 50 01 00 22 01
{
	return;
}

void func_16(var uParam0) // Position - 0x275 Signature - 22 01 03 00 00 50 01 00 22 01 03 00 00 50 01 00 22 02
{
	return;
}

void func_17(var uParam0) // Position - 0x27D Signature - 22 01 03 00 00 50 01 00 22 02
{
	return;
}

void func_18(float fParam0, BOOL bParam1) // Position - 0x285 Signature - 22 02 04 00 00 70
{
	if (PED::IS_PED_ON_MOUNT(Global_33) || PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		if (fParam0 >= func_19())
		{
			Global_1940026.f_9 = func_19() - 0.01f;
			return;
		}
	}

	if (fParam0 < 0f)
	{
		Global_1940026.f_9 = 0f;
		PED::_SET_PED_MOTIVATION(Global_33, 10, Global_1940026.f_9, 0);
	}
	else if (fParam0 >= 1f && Global_1940026.f_14)
	{
		Global_1940026.f_9 = 0.99f;
	}
	else if (fParam0 > 1f)
	{
		Global_1940026.f_9 = 1f;
	}
	else
	{
		Global_1940026.f_9 = fParam0;
	}

	if (bParam1)
		Global_1940026.f_12 = 1;

	return;
}

float func_19() // Position - 0x328 Signature - 22 00 02 00 00 86
{
	return 0.75f;
}

