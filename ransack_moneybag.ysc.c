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
	Ped pedLocal_18 = 0;
	var uLocal_19 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 09
{
	bLocal_13 = 1;
	anLocal_15 = anScriptParam_0;
	uLocal_16 = anScriptParam_0.f_1;
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

BOOL func_3() // Position - 0x83 Signature - 22 00 02 00 00 54
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

void func_6() // Position - 0x10C Signature - 22 00 05
{
	int scenarioPointPedIsUsing;
	Entity propForScenarioPoint;
	Entity scenarioPointEntity;

	if (pedLocal_18.f_1)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_18))
		return;

	scenarioPointPedIsUsing = TASK::_GET_SCENARIO_POINT_PED_IS_USING(pedLocal_18, false);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(scenarioPointPedIsUsing))
		return;

	propForScenarioPoint = TASK::GET_PROP_FOR_SCENARIO_POINT(scenarioPointPedIsUsing, "");

	if (!ENTITY::DOES_ENTITY_EXIST(propForScenarioPoint))
		return;

	scenarioPointEntity = TASK::_GET_SCENARIO_POINT_ENTITY(scenarioPointPedIsUsing);

	if (!ENTITY::DOES_ENTITY_EXIST(scenarioPointEntity))
		return;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(propForScenarioPoint))
		return;

	return;
}

void func_7() // Position - 0x17A Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 03
{
	return;
}

void func_8() // Position - 0x182 Signature - 22 00 02 00 00 03
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x18E Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 09 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 0F 4B 03 39 06
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_12(&eventData);
	}

	return;
}

void func_10(int iParam0) // Position - 0x1B6 Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 09 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 0F 4B 03 39 14
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_13(&eventData);
	}

	return;
}

void func_11(int iParam0) // Position - 0x1DE Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 09 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 0F 4B 03 39 1C
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_14(&eventData);
	}

	return;
}

void func_12(var uParam0) // Position - 0x206 Signature - 22 01 03 00 00 66
{
	pedLocal_18 = uParam0->f_1;
	return;
}

void func_13(var uParam0) // Position - 0x214 Signature - 22 01 03 00 00 50 01 00 22
{
	return;
}

void func_14(var uParam0) // Position - 0x21C Signature - Not Found!
{
	return;
}

