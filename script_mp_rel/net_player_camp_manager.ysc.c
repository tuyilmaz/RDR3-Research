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
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
#endregion

void main() // Position - 0x0 Signature - 22 00 0B
{
	var unk;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();
	unk.f_7 = -1;

	while (!func_2(false, false))
	{
		func_3(&Global_1147987, &unk, &Global_1148185, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT());
		func_4(&unk);
		BUILTIN::WAIT(0);
	}

	func_5();
	func_6();
	return;
}

void func_1() // Position - 0x4D Signature - 22 00 03 00 00 39
{
	int gameTimer;

	if (func_7())
		func_6();

	gameTimer = MISC::GET_GAME_TIMER();
	func_8(32, -1);
	func_9();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1147987, 198, 29);
	func_10(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1147987), 198, "g_mpNetPlayerCampHost");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1148185, 321, 30);
	func_11(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1148185), 321, "g_mpNetPlayerCampPlayer");
	func_12(false);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	return;
}

BOOL func_2(BOOL bParam0, BOOL bParam1) // Position - 0xBD Signature - 22 02 05 00 00 5D
{
	int i;

	if (Global_1572887.f_13)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::NETWORK_SESSION_IS_TRANSITIONING())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				return true;
		
			case 1:
				return true;
		
			case 2:
				if (!bParam0)
					return true;
				break;
		
			case 3:
				return true;
		
			case 4:
				return true;
		
			default:
				return true;
		}
	}

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i) == 1976253964)
			return true;
	}

	return false;
}

void func_3(int* piParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x19D Signature - 22 04 08
{
	int i;
	eEventType eventAtIndex;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		eventAtIndex = SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i);
	
		switch (eventAtIndex)
		{
			case -507840394:
				func_13(piParam0, uParam1, iParam2, i, bParam3);
				break;
		}
	}

	return;
}

void func_4(var uParam0) // Position - 0x1E3 Signature - 22 01 03 00 00 66 00 39 74
{
	func_14(uParam0);
	return;
}

void func_5() // Position - 0x1F1 Signature - 22 00 02 00 00 50
{
	return;
}

void func_6() // Position - 0x1F9 Signature - 22 00 02 00 00 03
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_7() // Position - 0x205 Signature - 22 00 02 00 00 5D 17 00 18 27 0A
{
	if (Global_1572887.f_10)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	return false;
}

void func_8(int iParam0, int iParam1) // Position - 0x233 Signature - 22 02 04 00 00 03
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_6();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	return;
}

int func_9() // Position - 0x250 Signature - 22 00 05
{
	int scriptStatus;
	int gameTimer;
	int timeoutTime;

	scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	gameTimer = MISC::GET_GAME_TIMER();
	timeoutTime = NETWORK::NETWORK_GET_TIMEOUT_TIME();

	if (timeoutTime < 50000)
		timeoutTime = 50000;

	while (scriptStatus != 2)
	{
		MISC::GET_GAME_TIMER() - gameTimer > timeoutTime - 5000;
	
		if (MISC::GET_GAME_TIMER() - gameTimer > 300000)
			func_6();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_6();
					break;
			
				case 2:
					func_6();
					break;
			
				case 3:
					func_6();
					break;
			
				case 4:
					func_6();
					break;
			
				default:
					break;
			}
		}
	
		if (scriptStatus == 3 || scriptStatus == 4 || scriptStatus == 5 || scriptStatus == 6)
			func_6();
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			func_6();
	
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
			func_6();
	
		if (func_15() == 0)
			if (func_16())
				func_6();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_6();

	return 1;
}

int func_10(int iParam0, int iParam1, char* sParam2) // Position - 0x361 Signature - 22 03 05 00 00 09 50 03 01 22 03
{
	return 1;
}

int func_11(int iParam0, int iParam1, char* sParam2) // Position - 0x36A Signature - 22 03 05 00 00 09 50 03 01 22 01
{
	return 1;
}

void func_12(BOOL bParam0) // Position - 0x373 Signature - 22 01 0D
{
	int num;
	var unk;
	int num2;

	num = MISC::GET_SYSTEM_TIME() + 180000;
	num2 = 0;
	unk = { unk };

	while (true)
	{
		num2 = num2 + 1;
	
		if (bParam0)
			NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_6();
					break;
			
				case 2:
					func_6();
					break;
			
				case 3:
					func_6();
					break;
			
				case 4:
					func_6();
					break;
			
				default:
					break;
			}
		}
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return;
	
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			TEXT_LABEL_ASSIGN_STRING(&unk, "HOST", 64);
		else
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLIENT", 64);
	
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
			return;
	
		if (MISC::GET_SYSTEM_TIME() >= num)
		{
			func_6();
			return;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

void func_13(int* piParam0, var uParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x43C Signature - 22 05 0B
{
	struct<4> eventData;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam3, &eventData, 4))
		return;

	switch (eventData)
	{
		case 201:
			func_17(piParam0, uParam1, iParam2, iParam3, bParam4);
			break;
	}

	return;
}

void func_14(var uParam0) // Position - 0x474 Signature - 22 01 04 00 00 03
{
	Player player;

	player = PLAYER::PLAYER_ID();

	if (func_18(16))
		return;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(-741705372))
		return;

	if (func_19(1, player))
		func_20(uParam0, true);

	if (func_19(2, player))
		func_20(uParam0, false);

	if (func_19(32, player))
		func_21(uParam0);

	if (func_19(4, player))
		func_22(uParam0, true);

	if (func_19(8, player))
		func_22(uParam0, false);

	if (func_19(16, player))
		func_23(uParam0);

	if (func_24())
	{
		if (!func_19(2, player) && !func_19(8, player))
		{
			uParam0->f_4 = uParam0->f_4 + 1;
			func_25(uParam0);
		}
	}

	if (func_19(64, player))
	{
		func_26(5, player, *uParam0, true, false);
		func_27(64, player);
	}

	return;
}

int func_15() // Position - 0x555 Signature - 22 00 02 00 00 5D 17 00 18 27 0E
{
	return Global_1572887.f_14;
}

BOOL func_16() // Position - 0x563 Signature - 22 00 02 00 00 5D FD 0B 10 27 08
{
	return Global_1051645.f_8;
}

void func_17(int* piParam0, var uParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x571 Signature - 22 05 12
{
	struct<9> eventData;
	int num;
	Ped playerPed;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam3, &eventData, 9))
		return;

	num = eventData.f_5;

	switch (eventData.f_4)
	{
		case 0:
			if (!bParam4)
				return;
		
			if (func_28(piParam0, eventData.f_6))
			{
				piParam0->f_67[num /*3*/] = { eventData.f_6 };
				piParam0->f_164[num] = 1;
				func_26(1, eventData.f_5, eventData.f_6, false, false);
			}
			else
			{
				piParam0->f_67[num /*3*/] = { func_29() };
				piParam0->f_164[num] = 0;
				func_26(2, eventData.f_5, eventData.f_6, false, false);
			}
			break;
	
		case 1:
			func_30(32, eventData.f_5);
			break;
	
		case 2:
			func_27(1, eventData.f_5);
			func_31("NET_WCAMP_OWNER_NO_CLOSE_CAMP", 10000, 0, 0, 0, true);
			func_32(uParam1);
			break;
	
		case 5:
			if (!bParam4)
				return;
		
			piParam0->f_67[num /*3*/] = { func_29() };
			piParam0->f_164[num] = 0;
			break;
	
		case 6:
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(eventData.f_1))
				return;
		
			playerPed = PLAYER::GET_PLAYER_PED(eventData.f_1);
		
			if (ENTITY::IS_ENTITY_DEAD(playerPed))
				return;
		
			TASK::_0xFDECCA06E8B81346(playerPed);
			break;
	}

	return;
}

BOOL func_18(BOOL bParam0) // Position - 0x6A9 Signature - 22 01 03 00 00 5D 17 00 18 27 0E 08 15 04 00 2F 50 01 01 5D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && bParam0 != false;
}

BOOL func_19(int iParam0, Player plParam1) // Position - 0x6CA Signature - 22 02 05 00 00 66 01 67 04 66 04 5D 19 85 11 63 0A 27 07 66 00 69
{
	Player player;

	player = plParam1;
	return Global_1148185[player /*10*/].f_7 && iParam0 != false;
}

void func_20(var uParam0, BOOL bParam1) // Position - 0x6E5 Signature - 22 02 05 00 00 66 01 8B
{
	var unk;

	if (bParam1)
	{
		func_33(uParam0, &(uParam0->f_3), &unk, &(uParam0->f_6), &(uParam0->f_5), 0);
	
		if (func_34(uParam0))
		{
			func_27(1, PLAYER::PLAYER_ID());
			func_26(0, PLAYER::PLAYER_ID(), *uParam0, true, false);
		}
		else
		{
			func_32(uParam0);
			func_27(1, PLAYER::PLAYER_ID());
		}
	}
	else
	{
		func_27(2, PLAYER::PLAYER_ID());
		func_30(8, PLAYER::PLAYER_ID());
	}

	return;
}

void func_21(var uParam0) // Position - 0x750 Signature - 22 01 05 00 00 03 01 00 2C 67 03 66 03 67 04 66 04 5D 19 85 11 63 0A 1D
{
	Player player;
	Player player2;

	player = PLAYER::PLAYER_ID();
	player2 = player;
	func_35(&Global_1148185[player2 /*10*/], *uParam0, uParam0->f_6);
	func_27(32, player);
	func_30(16, player);
	return;
}

void func_22(var uParam0, BOOL bParam1) // Position - 0x786 Signature - 22 02 0F
{
	struct<8> args;
	Player player;
	int uniqueIntForPlayer;
	Player player2;

	if (!func_36(uParam0))
	{
		if (bParam1)
			func_27(4, PLAYER::PLAYER_ID());
		else
			func_27(8, PLAYER::PLAYER_ID());
	
		func_32(uParam0);
		return;
	}

	if (!func_37())
		return;

	if (bParam1)
	{
		player = PLAYER::PLAYER_ID();
		uniqueIntForPlayer = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(player);
		args = uniqueIntForPlayer;
		args.f_1 = player;
		args.f_2 = uParam0->f_5;
		player2 = player;
		Global_1148185[player2 /*10*/].f_4 = 1;
		func_38(&(Global_1958675.f_2));
		func_27(4, player);
	}
	else
	{
		player = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_4);
		uniqueIntForPlayer = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(player);
		args = uniqueIntForPlayer;
		args.f_1 = uParam0->f_4;
		func_27(8, PLAYER::PLAYER_ID());
	}

	args.f_7 = player;
	args.f_3 = { *uParam0 };
	args.f_6 = uParam0->f_3;
	func_32(uParam0);
	uParam0->f_8 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_39(), &args, 8, 1024);
	uParam0->f_7 = args;
	return;
}

void func_23(var uParam0) // Position - 0x86E Signature - 22 01 05 00 00 03 01 00 2C 67 03 66 03 67 04 66 04 5D 19 85 11 63 0A 66
{
	Player player;
	Player player2;

	player = PLAYER::PLAYER_ID();
	player2 = player;

	if (!func_40(&Global_1148185[player2 /*10*/], uParam0))
	{
		return;
	}
	else
	{
		func_27(16, player);
		func_30(4, player);
	}

	return;
}

BOOL func_24() // Position - 0x8A7 Signature - 22 00 03 00 00 2F
{
	int i;

	for (i = 0; i < Global_1148185; i = i + 1)
	{
		if (Global_1148185[i /*10*/].f_4)
			return true;
	}

	return false;
}

void func_25(var uParam0) // Position - 0x8D6 Signature - 22 01 06
{
	Player player;
	Player player2;
	Player player3;

	if (uParam0->f_4 < 0 || uParam0->f_4 == 32)
		uParam0->f_4 = 0;

	player = PLAYER::PLAYER_ID();
	player2 = player;

	if (player2 == uParam0->f_4)
		return;

	player3 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_4);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player3) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(player3))
		return;

	if (_IS_NULL_VECTOR(Global_1148185[uParam0->f_4 /*10*/]))
		return;

	if (!Global_1148185[uParam0->f_4 /*10*/].f_4)
		return;

	if (func_42(Global_33, Global_1148185[uParam0->f_4 /*10*/], true) < 22500f)
	{
		if (!SCRIPTS::DOES_THREAD_EXIST(uParam0->f_8) && !SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_8, false))
		{
			*uParam0 = { Global_1148185[uParam0->f_4 /*10*/] };
			uParam0->f_3 = Global_1148185[uParam0->f_4 /*10*/].f_3;
			func_30(2, player);
		}
	}

	return;
}

void func_26(int iParam0, Player plParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6) // Position - 0x9BB Signature - 22 07
{
	int eventData;
	var playerBits;
	Player hostOfThisScript;

	eventData = 201;
	eventData.f_4 = iParam0;
	eventData.f_5 = plParam1;
	eventData.f_6 = { uParam2 };

	if (bParam5)
	{
		hostOfThisScript = NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT();
		playerBits = func_43(NETWORK::NETWORK_GET_PLAYER_INDEX(hostOfThisScript));
	}
	else if (bParam6)
	{
		playerBits = func_44(0, 8);
	}
	else
	{
		playerBits = func_43(plParam1);
	}

	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 9, 28, &playerBits);
	return;
}

void func_27(int iParam0, Player plParam1) // Position - 0xA2D Signature - 22 02 05 00 00 66 01 67 04 66 04 5D 19 85 11 63 0A 27 07 66 04
{
	Player num;

	num = plParam1;
	Global_1148185[num /*10*/].f_7 = Global_1148185[num /*10*/].f_7 - Global_1148185[num /*10*/].f_7 && iParam0;
	return;
}

BOOL func_28(int* piParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0xA5B Signature - 22 04 07 00 00 2F 67 06 66
{
	int i;

	for (i = 0; i < piParam0->f_67; i = i + 1)
	{
		if (func_45(vParam1, piParam0->f_67[i /*3*/]) || BUILTIN::VDIST2(vParam1, piParam0->f_67[i /*3*/]) < 75625f)
			return false;
	}

	return true;
}

Vector3 func_29() // Position - 0xAB0 Signature - 22 00 02 00 00 73
{
	return 0f, 0f, 0f;
}

void func_30(int iParam0, Player plParam1) // Position - 0xABB Signature - 22 02 05 00 00 66 01 67 04 66 04 5D 19 85 11 63 0A 27 07 66 00 30
{
	Player num;

	num = plParam1;
	Global_1148185[num /*10*/].f_7 = Global_1148185[num /*10*/].f_7 || iParam0;
	return;
}

int func_31(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0xADE Signature - 22 06 18
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num = iParam1;
	num.f_1 = iParam2;
	num.f_2 = iParam3;
	num.f_3 = iParam4;
	unk13.f_1 = sParam0;
	num2 = UIFEED::_UI_FEED_POST_HELP_TEXT(&num, &unk13, bParam5);
	return num2;
}

void func_32(var uParam0) // Position - 0xB19 Signature - 22 01 03 00 00 39
{
	*uParam0 = { func_29() };
	uParam0->f_3 = 0f;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	return;
}

void func_33(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) // Position - 0xB38 Signature - 22 06 85
{
	int num;
	int num2;
	int num3;
	int numNodes;
	int i;
	int num4;
	Player j;
	var unk5;
	var unk6;
	var unk7;
	var unk8;
	var unk9;
	Vector3 vector;
	var unk12;
	var unk15;
	var unk16;
	float num5;
	float num6;
	BOOL flag;
	Player player;
	int num7;

	num6 = 999999.9f;
	flag = false;
	num7 = 32;
	num = Global_1072759.f_28418[46 /*4*/].f_3;
	num2 = func_46();
	num3 = func_47(num2);
	num.f_2 = 1655936658;
	num.f_3 = num3;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
	{
		num.f_2 = 1058386141;
		numNodes = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&num);
		unk9 = num.f_1;
	
		for (j = 0; j < num7; j = j + 1)
		{
			player = j;
		
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player) || player == PLAYER::PLAYER_ID())
				num7[j /*3*/] = { func_29() };
			else
				num7[j /*3*/] = { func_48(player) };
		}
	
		for (i = 0; i < numNodes; i = i + 1)
		{
			num.f_1 = unk9;
			flag = false;
			num.f_2 = -738381918;
			num.f_3 = i;
		
			if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
			{
			}
			else if (!(num4 == iParam5 || iParam5 == 0))
			{
			}
			else
			{
				num.f_2 = 170329912;
				DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num4, &num);
				num.f_2 = 519988399;
			
				if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
				{
				}
				else
				{
					num.f_2 = -518277907;
					DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&vector, &num);
					num.f_2 = -1363423190;
					DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(vector.f_1), &num);
					num.f_2 = 861329762;
					DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(vector.f_2), &num);
					num5 = BUILTIN::VDIST2(vector, Global_34);
				
					if (num5 >= num6)
					{
					}
					else
					{
						for (j = 0; j < 32; j = j + 1)
						{
							if (_IS_NULL_VECTOR(num7[j /*3*/]))
							{
							}
							else if (func_45(vector, Global_1148185[j /*10*/]) || !_IS_NULL_VECTOR(Global_1148185[j /*10*/]) && BUILTIN::VDIST2(vector, Global_1148185[j /*10*/]) < 75625f || BUILTIN::VDIST2(num7[j /*3*/], vector) < 100f)
							{
								flag = true;
								break;
							}
						}
					
						if (!flag && !func_49(vector, 1, 0, 0) && !func_50(vector, 150f) && !VOLUME::_0xAA9EE2AAFC717623(vector, 0, 0, 0))
						{
							num.f_2 = -1425398587;
							DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&unk15, &num);
							num.f_2 = 1808799200;
							DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk5, &num);
							num.f_2 = -1067565689;
							DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&unk7, &num);
							unk12 = { vector };
							unk16 = unk15;
							num6 = num5;
							unk6 = unk5;
							unk8 = unk7;
						
							if (num5 > 150f)
								*uParam2 = 1;
							else
								*uParam2 = 0;
						}
					}
				}
			}
		}
	}

	if (_IS_NULL_VECTOR(*uParam0))
	{
		*uParam0 = { unk12 };
		*uParam1 = unk16;
		*uParam3 = unk6;
		*uParam4 = unk8;
	}

	return;
}

BOOL func_34(var uParam0) // Position - 0xE0C Signature - 22 01 03 00 00 1D 66 00 2D
{
	if (_IS_NULL_VECTOR(*uParam0) || BUILTIN::VDIST(*uParam0, func_48(PLAYER::PLAYER_ID())) > 150f)
	{
		func_31("NET_WCAMP_OWNER_NO_CLOSE_CAMP", 10000, 0, 0, 0, true);
		return false;
	}

	return true;
}

void func_35(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0xE4F Signature - 22 05 10
{
	var args;

	args = { uParam1 };
	args.f_4 = 7f;
	args.f_5 = 544;
	args.f_6 = -1975763068;
	args.f_7 = uParam4;
	uParam0->f_5 = VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&args);
	return;
}

BOOL func_36(var uParam0) // Position - 0xE84 Signature - 22 01 03 00 00 37
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(-741705372))
		return false;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_39(), uParam0->f_7, false, 0))
		return false;

	if (SCRIPTS::DOES_THREAD_EXIST(uParam0->f_8) || SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_8, false))
		return false;

	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(1024) < 1)
		return false;

	return true;
}

BOOL func_37() // Position - 0xEE0 Signature - 22 00 02 00 00 39
{
	if (!SCRIPTS::HAS_SCRIPT_LOADED(func_39()))
	{
		SCRIPTS::REQUEST_SCRIPT(func_39());
		return false;
	}

	return true;
}

void func_38(var uParam0) // Position - 0xF01 Signature - 22 01 03 00 00 66 00 73
{
	func_51(uParam0, 0f);
	return;
}

char* func_39() // Position - 0xF10 Signature - 22 00 02 00 00 6D 58
{
	return "player_camp";
}

BOOL func_40(var uParam0, var uParam1) // Position - 0xF1B Signature - 22 02 05 00 00 66 00 27
{
	int volumeLockRequestStatus;

	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(uParam0->f_5))
	{
		func_31("NET_WCAMP_OWNER_NO_CLOSE_CAMP", 10000, 0, 0, 0, true);
		func_32(uParam1);
		func_27(16, PLAYER::PLAYER_ID());
		return false;
	}

	volumeLockRequestStatus = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(uParam0->f_5);

	switch (volumeLockRequestStatus)
	{
		case 1:
		case 2:
			return false;
	
		case 3:
			uParam0->f_6 = VOLUME::_0x351D71B8B72B858B(uParam0->f_5);
			func_30(4, PLAYER::PLAYER_ID());
			func_27(16, PLAYER::PLAYER_ID());
			return true;
	
		case 4:
			func_31("NET_WCAMP_OWNER_NO_CLOSE_CAMP", 10000, 0, 0, 0, true);
			func_32(uParam1);
			func_27(16, PLAYER::PLAYER_ID());
			return false;
	
		default:
		
	}

	return false;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0xFC7 Signature - 22 03 05 00 00 66
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

float func_42(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xFF1 Signature - 22 05 0A
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true, false) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };

	if (bParam4)
		return BUILTIN::VDIST2(entityCoords, vParam1);

	return func_52(entityCoords, vParam1);
}

var func_43(int iParam0) // Position - 0x1041 Signature - 22 01 04 00 00 4B
{
	var value;

	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, iParam0);
	return value;
}

var func_44(int iParam0, int iParam1) // Position - 0x1053 Signature - 22 02 04 00 00 73
{
	return func_53(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

BOOL func_45(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x1071 Signature - 22 06 08 00 00 66
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

int func_46() // Position - 0x109A Signature - 22 00 02 00 00 5D C6
{
	return Global_1896646.f_41;
}

int func_47(int iParam0) // Position - 0x10A8 Signature - 22 01 03 00 00 66 00 3C 11
{
	switch (iParam0)
	{
		case 0:
			return joaat("district_bayou_nwa");
	
		case 1:
			return joaat("district_big_valley");
	
		case 2:
			return joaat("district_bluegill_marsh");
	
		case 3:
			return joaat("district_cumberland_forest");
	
		case 4:
			return joaat("district_great_plains");
	
		case 5:
			return joaat("district_grizzlies");
	
		case 6:
			return joaat("district_grizzlies_east");
	
		case 7:
			return joaat("district_grizzlies_west");
	
		case 8:
			return joaat("district_guama");
	
		case 9:
			return joaat("district_heartland");
	
		case 10:
			return joaat("district_roanoke_ridge");
	
		case 11:
			return joaat("district_scarlett_meadows");
	
		case 12:
			return joaat("district_tall_trees");
	
		case 13:
			return joaat("district_gaptooth_ridge");
	
		case 14:
			return joaat("district_rio_bravo");
	
		case 15:
			return joaat("district_cholla_springs");
	
		case 16:
			return joaat("district_hennigans_stead");
	
		default:
		
	}

	return 1776960747;
}

Vector3 func_48(Player plParam0) // Position - 0x11AB Signature - 22 01 03 00 00 66 00 03
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

BOOL func_49(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5) // Position - 0x11BF Signature - 22 06 12
{
	var unk;
	var unk6;

	if (_IS_NULL_VECTOR(uParam0))
		return false;

	unk = 4;
	unk[0] = iParam4;
	unk6 = 4;
	unk6[0] = 8192;
	unk6[1] = iParam5;

	if (VOLUME::_0x870E9981ED27C815(uParam0, &unk, &unk6, iParam3))
		return true;

	return false;
}

BOOL func_50(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0x120C Signature - 22 04 07 00 00 2F 67 06 2F
{
	int i;

	i = 0;

	for (i = 0; i < 26; i = i + 1)
	{
		if (func_54(i))
			if (BUILTIN::VDIST(func_55(i), vParam0) < fParam3)
				return true;
	}

	return false;
}

void func_51(var uParam0, float fParam1) // Position - 0x124C Signature - 22 02 04 00 00 39
{
	uParam0->f_1 = func_56() - fParam1;
	func_57(uParam0, 1);
	func_58(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

float func_52(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x1272 Signature - 22 06 08 00 00 73
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

var func_53(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x1290 Signature - 22 0C
{
	var value;
	Player bitIndex;
	int i;
	BOOL flag;
	BOOL flag2;
	Player player;
	int num;
	BOOL flag3;
	Volume volume;
	BOOL flag4;
	Player player2;
	Ped playerPed;

	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&value);

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return value;

	if (func_59() != 0)
	{
		bitIndex = PLAYER::PLAYER_ID();
	
		if (bitIndex >= 0 && bitIndex < 32)
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, bitIndex);
	
		return value;
	}

	i = 0;
	flag = false;
	flag2 = false;
	player = Global_1295666.f_5;
	num = Global_1295666.f_10;
	flag3 = true;
	flag4 = bParam10;

	if (BUILTIN::VMAG2(fParam6) < 1f)
	{
		flag3 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("volBox"):
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_60());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_60());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_60());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_61(PLAYER::GET_PLAYER_TEAM(player));

	if (flag4 & 8 != 0 && flag4 & 32768 != 0)
	{
		flag4 = flag4 | 65536;
		flag4 = flag4 - flag4 & 40952;
	}

	if (flag4 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			flag4 = flag4 - flag4 & 4;
			flag4 = flag4 | false;
		}
	}

	for (i = 0; i < 32; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295666.f_149[i]))
		{
			player2 = Global_1295666.f_149[i];
			flag = false;
			flag2 = false;
		
			if (flag4 & true != 0 && player2 == player)
				flag = true;
		
			if (func_62(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_63(i) != 1)
					flag = true;
		
			if (!flag)
				if (flag4 & 16384 != 0 && PED::IS_PED_INCAPACITATED(playerPed))
					flag = true;
		
			if (!flag)
				if (flag4 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(player2))
					flag = true;
		
			if (!flag)
			{
				if (flag4 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(player2))
					{
						case -1:
							if (flag4 & 16 != 0)
								flag2 = true;
							break;
					
						case 0:
							if (flag4 & 32 != 0)
								flag2 = true;
							break;
					
						case 1:
							if (flag4 & 64 != 0)
								flag2 = true;
							break;
					
						case 2:
							if (flag4 & 128 != 0)
								flag2 = true;
							break;
					
						case 3:
							if (flag4 & 256 != 0)
								flag2 = true;
							break;
					
						case 4:
							if (flag4 & 512 != 0)
								flag2 = true;
							break;
					
						case 5:
							if (flag4 & 1024 != 0)
								flag2 = true;
							break;
					
						case 6:
							if (flag4 & 2048 != 0)
								flag2 = true;
							break;
					
						case 8:
							if (flag4 & 4096 != 0)
								flag2 = true;
							break;
					}
				
					if (!flag2)
						flag = true;
				}
			}
		
			if (!flag)
				if (flag4 & 32768 != 0)
					if (GANG::NETWORK_GET_GANG_ID(player2) != num)
						flag = true;
		
			if (!flag)
				if (flag4 & 65536 != 0)
					if (!func_64(player2))
						flag = true;
		
			if (!flag && flag3)
				if (!VOLUME::IS_POINT_IN_VOLUME(volume, ENTITY::GET_ENTITY_COORDS(playerPed, false, false)))
					flag = true;
		
			if (!flag)
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, i);
		}
	}

	if (flag3)
		VOLUME::DELETE_VOLUME(volume);

	return value;
}

BOOL func_54(int iParam0) // Position - 0x1623 Signature - 22 01 03 00 00 66 00 08
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_65(Global_1835011[iParam0 /*72*/].f_1);
}

Vector3 func_55(int iParam0) // Position - 0x1651 Signature - 22 01 03 00 00 66 00 39 2D
{
	return func_66(iParam0);
}

float func_56() // Position - 0x165F Signature - 22 00 03 00 00 03
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_57(var uParam0, int iParam1) // Position - 0x1691 Signature - 22 02 04 00 00 66 00 76 66 01
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_58(var uParam0, int iParam1) // Position - 0x16A2 Signature - 22 02 04 00 00 66 00 76 66 00
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_59() // Position - 0x16B7 Signature - 22 00 02 00 00 5D FD 0B 10 27 0C
{
	return Global_1051645.f_12;
}

char* func_60() // Position - 0x16C5 Signature - 22 00 02 00 00 6D 64
{
	return "unnamed";
}

BOOL func_61(int iParam0) // Position - 0x16D0 Signature - 22 01 04 00 00 2F
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -1:
			num = 16;
			break;
	
		case 0:
			num = 32;
			break;
	
		case 1:
			num = 64;
			break;
	
		case 2:
			num = 128;
			break;
	
		case 3:
			num = 256;
			break;
	
		case 4:
			num = 512;
			break;
	
		case 5:
			num = 1024;
			break;
	
		case 6:
			num = 2048;
			break;
	
		case 8:
			num = 4096;
			break;
	}

	return num;
}

BOOL func_62(int iParam0) // Position - 0x175F Signature - 22 01 03 00 00 5D 17 00 18 27 0E 08 15 04 00 2F 50 01 01 6D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_67(36, iParam0);
}

int func_63(int iParam0) // Position - 0x177D Signature - 22 01 03 00 00 66 00 6D
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_64(Player plParam0) // Position - 0x17C8 Signature - 22 01 03 00 00 03
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_68(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_69(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_65(var uParam0, var uParam1) // Position - 0x180D Signature - 22 02 05 00 00 11 4B 00 2D 39 55
{
	int num;

	num = func_70(uParam0);
	return num == 1 || num == 2;
}

Vector3 func_66(int iParam0) // Position - 0x182D Signature - 22 01 03 00 00 1D 66 00 5D
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

BOOL func_67(int iParam0, int iParam1) // Position - 0x1841 Signature - 22 02 05 00 00 66 00 67
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_71(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_72())
		return func_71(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_71(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_68(Player plParam0) // Position - 0x18B5 Signature - 22 01 03 00 00 5D 77
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_69(Player plParam0) // Position - 0x18D2 Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 32
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_73(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_74(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

int func_70(var uParam0, var uParam1) // Position - 0x1955 Signature - 22 02 05 00 00 11 4B 00 2D 39 7D
{
	int num;

	if (!func_75(uParam0))
		return -1;

	num = func_76(uParam0);

	if (num < 0)
		return 0;

	return Global_1072759.f_19487.f_1[num /*3*/].f_2;
}

BOOL func_71(Any* panParam0, int iParam1, int iParam2) // Position - 0x1990 Signature - 22 03 07
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_72() // Position - 0x19C7 Signature - 22 00 02 00 00 5D DD
{
	return Global_1102813.f_3672;
}

void func_73(Player plParam0) // Position - 0x19D6 Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 77
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_74(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_74(Player plParam0) // Position - 0x1A42 Signature - 22 01 03 00 00 66 00 5D
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

BOOL func_75(var uParam0, var uParam1) // Position - 0x1A7D Signature - 22 02 04 00 00 66 00 39
{
	if (!func_77(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_78(uParam0))
		return false;

	return true;
}

int func_76(var uParam0, var uParam1) // Position - 0x1AB1 Signature - 22 02 0D
{
	var unk;
	var unk4;
	int num;
	int num2;
	int num3;

	if (Global_1072759.f_19487 <= 0)
		return -1;

	unk.f_1 = -1;
	unk.f_2 = -1;
	unk4.f_1 = -1;
	unk4.f_2 = -1;

	if (!func_79(uParam0, &unk))
		return -1;

	num = 0;
	num2 = Global_1072759.f_19487 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
		func_79(Global_1072759.f_19487.f_1[num3 /*3*/], &unk4);
	
		if (unk4 > unk)
			num2 = num3 - 1;
		else if (unk4 < unk)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

BOOL func_77(int iParam0) // Position - 0x1B58 Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 21
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
	
		default:
		
	}

	return false;
}

int func_78(int iParam0) // Position - 0x1B97 Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 2E
{
	switch (iParam0)
	{
		case 2:
			return Global_1072759.f_573.f_601;
	
		case 3:
			return Global_1072759.f_573.f_2103;
	
		case 4:
			return Global_1072759.f_573.f_12605;
	
		case 5:
			return Global_1072759.f_573.f_12907;
	
		case 6:
			return Global_1072759.f_573.f_15909;
	
		case 7:
			return Global_1072759.f_573.f_16511;
	
		case 8:
			return Global_1072759.f_573.f_18913;
	
		default:
		
	}

	return -1;
}

BOOL func_79(int iParam0, var uParam1, Any* panParam2) // Position - 0x1C2D Signature - 22 03 05 00 00 11
{
	if (!func_75(iParam0))
		return false;

	func_80(panParam2);

	switch (iParam0)
	{
		case 2:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 3:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_602[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 4:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_2104[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 5:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_12606[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 6:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_12908[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 7:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_15910[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 8:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_16512[iParam0.f_1 /*3*/], 3);
			return true;
	
		default:
		
	}

	return false;
}

void func_80(Any* panParam0) // Position - 0x1D38 Signature - 22 01 03 00 00 2F
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

