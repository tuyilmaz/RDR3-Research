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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 48
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();

	while (!func_2())
	{
		func_3();
		BUILTIN::WAIT(0);
	}

	func_4();

	while (!SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(1440))
	{
		BUILTIN::WAIT(0);
	}

	func_5();
	return;
}

void func_1() // Position - 0x41 Signature - 22 00 03 00 00 03 01 00
{
	int gameTimer;

	gameTimer = MISC::GET_GAME_TIMER();
	func_6(32, -1);
	func_7();

	if (func_8())
		func_5();

	func_9();
	func_10(false);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	return;
}

BOOL func_2() // Position - 0x79 Signature - 22 00 02 00 00 2F 2F
{
	if (func_11(false, false))
		return true;

	return false;
}

void func_3() // Position - 0x8F Signature - 22 00 03 00 00 39 5C
{
	BOOL flag;

	flag = func_12();
	!flag;

	if (func_13())
		func_14(flag);

	func_15(flag);
	return;
}

void func_4() // Position - 0xB6 Signature - 22 00 02 00 00 39 30
{
	func_16();
	return;
}

void func_5() // Position - 0xC2 Signature - 22 00 02 00 00 03 00
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_6(int iParam0, int iParam1) // Position - 0xCE Signature - 22 02 04 00 00 03 01 00 6E
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_5();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	return;
}

int func_7() // Position - 0xEB Signature - 22 00 05 00 00 03 01 00 14
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
			func_5();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_5();
					break;
			
				case 2:
					func_5();
					break;
			
				case 3:
					func_5();
					break;
			
				case 4:
					func_5();
					break;
			
				default:
					break;
			}
		}
	
		if (scriptStatus == 3 || scriptStatus == 4 || scriptStatus == 5 || scriptStatus == 6)
			func_5();
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			func_5();
	
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
			func_5();
	
		if (func_17() == 0)
			if (func_18())
				func_5();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_5();

	return 1;
}

BOOL func_8() // Position - 0x1FC Signature - 22 00 02 00 00 5D 17 00 18 27 0A 8B
{
	if (Global_1572887.f_10)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	return false;
}

void func_9() // Position - 0x22A Signature - 22 00 02 00 00 5D 8B
{
	func_19(&Global_1225099);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1225099, 588, 47);
	func_20(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1225099), 588, "g_mpFetchManagerHostData");

	if (func_21())
		Global_1235384 = { Global_1225687[func_22() /*303*/] };

	func_23(&Global_1225687);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1225687, 9697, 48);
	func_24(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1225687[0 /*303*/]), 9697, "g_mpFetchManagerPlayerData");

	if (!func_21())
		func_25(&Global_1235687);

	return;
}

void func_10(BOOL bParam0) // Position - 0x2B3 Signature - 22 01 0D 00 00 03
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
					func_5();
					break;
			
				case 2:
					func_5();
					break;
			
				case 3:
					func_5();
					break;
			
				case 4:
					func_5();
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
			func_5();
			return;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

BOOL func_11(BOOL bParam0, BOOL bParam1) // Position - 0x37C Signature - 22 02 05 00 00 5D 17
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

BOOL func_12() // Position - 0x45C Signature - 22 00 02 00 00 39 B6
{
	if (func_26())
		return 0;

	return 1;
}

BOOL func_13() // Position - 0x470 Signature - 22 00 02 00 00 6D 0D
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1051645.f_16[13], false))
		return false;

	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_fetch_manager", -1, true, 0))
		return false;

	return PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1051645.f_16[13]);
}

void func_14(BOOL bParam0) // Position - 0x4B4 Signature - 22 01 03 00 00 5D 8B B1 12 78 48 02 3C
{
	switch (Global_1225099.f_584)
	{
		case 0:
			func_27();
			break;
	
		case 1:
			func_28();
			break;
	
		case 2:
			func_29(bParam0);
			break;
	}

	return;
}

void func_15(BOOL bParam0) // Position - 0x4F2 Signature - 22 01 03 00 00 5D E7 DA 12 78 78 23 3C
{
	switch (Global_1235687.f_9080)
	{
		case 0:
			func_30();
			break;
	
		case 1:
			func_31();
			break;
	
		case 2:
			func_32(bParam0);
			break;
	}

	return;
}

void func_16() // Position - 0x530 Signature - 22 00 03 00 00 2F 5D
{
	int i;

	Global_1235687.f_9080 = 0;

	for (i = 0; i <= 12; i = i + 1)
	{
		if (Global_1235687[i /*697*/].f_567 != -1)
		{
			func_33(i, true);
			func_34(i);
		}
	}

	return;
}

int func_17() // Position - 0x571 Signature - 22 00 02 00 00 5D 17 00 18 27 0E
{
	return Global_1572887.f_14;
}

BOOL func_18() // Position - 0x57F Signature - 22 00 02 00 00 5D FD 0B 10 27 08
{
	return Global_1051645.f_8;
}

void func_19(int* piParam0) // Position - 0x58D Signature - 22 01 F3
{
	var src;
	int i;
	var src2;
	int j;
	var src3;
	int k;
	var src4;
	var unk232;
	var unk233;

	src = -1;
	src.f_1 = -1;
	src.f_2 = -1;
	src.f_4 = -1;
	src.f_5 = -1;
	src.f_7 = -1;
	src.f_8 = -1;
	src.f_9 = -1;
	src.f_15 = 255;
	src.f_16 = 255;
	src.f_17 = 255;
	src.f_18 = 255;
	src.f_22.f_1 = -1;

	for (i = 0; i <= 12; i = i + 1)
	{
		MISC::COPY_SCRIPT_STRUCT(&piParam0->[i /*28*/], &src, 28);
	}

	for (j = 0; j <= 3 - 1; j = j + 1)
	{
		MISC::COPY_SCRIPT_STRUCT(&piParam0->f_365[j], &src2, 1);
	}

	src3 = -1;

	for (k = 0; k <= 4; k = k + 1)
	{
		MISC::COPY_SCRIPT_STRUCT(&piParam0->f_369[k /*2*/], &src3, 2);
	}

	src4.f_2 = 5;
	src4.f_3 = 5;
	src4.f_3.f_1 = -1;
	src4.f_3.f_1.f_1 = -1;
	src4.f_3.f_1.f_2 = -1;
	src4.f_3.f_1.f_3 = 255;
	src4.f_3.f_1.f_4 = -1;
	src4.f_3.f_1.f_5 = -1;
	src4.f_3.f_1.f_6 = -1;
	src4.f_3.f_1.f_8 = 2;
	src4.f_3.f_1.f_8.f_1 = -1;
	src4.f_3.f_1.f_8.f_5 = -1;
	src4.f_3.f_1.f_8.f_5.f_1 = -1;
	src4.f_3.f_1.f_8.f_5.f_3 = -1;
	src4.f_3.f_1.f_8.f_5.f_4 = -1;
	src4.f_3.f_1.f_8.f_5.f_5 = -1;
	src4.f_3.f_1.f_8.f_5.f_6 = -1;
	src4.f_3.f_1.f_8.f_5.f_6.f_1 = -1;
	src4.f_3.f_1.f_8.f_5.f_9 = 2;
	src4.f_3.f_1.f_23.f_1 = 1024;
	src4.f_3.f_1.f_23.f_4 = -15;
	src4.f_3.f_1.f_23.f_5 = 255;
	src4.f_3.f_1.f_23.f_8 = 1;
	src4.f_3.f_1.f_23.f_8.f_1.f_1 = 2147483647;
	src4.f_3.f_1.f_23.f_13 = -1;
	src4.f_3.f_1.f_40 = -1;
	src4.f_3.f_1.f_40.f_1 = -1;
	src4.f_3.f_1.f_40.f_2 = -1;
	src4.f_3.f_1.f_40.f_3 = 255;
	src4.f_3.f_1.f_40.f_4 = -1;
	src4.f_3.f_1.f_40.f_5 = -1;
	src4.f_3.f_1.f_40.f_6 = -1;
	src4.f_3.f_1.f_40.f_8 = 2;
	src4.f_3.f_1.f_40.f_8.f_1 = -1;
	src4.f_3.f_1.f_40.f_8.f_5 = -1;
	src4.f_3.f_1.f_40.f_8.f_5.f_1 = -1;
	src4.f_3.f_1.f_40.f_8.f_5.f_3 = -1;
	src4.f_3.f_1.f_40.f_8.f_5.f_4 = -1;
	src4.f_3.f_1.f_40.f_8.f_5.f_5 = -1;
	src4.f_3.f_1.f_40.f_8.f_5.f_6 = -1;
	src4.f_3.f_1.f_40.f_8.f_5.f_6.f_1 = -1;
	src4.f_3.f_1.f_40.f_8.f_5.f_9 = 2;
	src4.f_3.f_1.f_40.f_23.f_1 = 1024;
	src4.f_3.f_1.f_40.f_23.f_4 = -15;
	src4.f_3.f_1.f_40.f_23.f_5 = 255;
	src4.f_3.f_1.f_40.f_23.f_8 = 1;
	src4.f_3.f_1.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	src4.f_3.f_1.f_40.f_23.f_13 = -1;
	src4.f_3.f_1.f_40.f_40 = -1;
	src4.f_3.f_1.f_40.f_40.f_1 = -1;
	src4.f_3.f_1.f_40.f_40.f_2 = -1;
	src4.f_3.f_1.f_40.f_40.f_3 = 255;
	src4.f_3.f_1.f_40.f_40.f_4 = -1;
	src4.f_3.f_1.f_40.f_40.f_5 = -1;
	src4.f_3.f_1.f_40.f_40.f_6 = -1;
	src4.f_3.f_1.f_40.f_40.f_8 = 2;
	src4.f_3.f_1.f_40.f_40.f_8.f_1 = -1;
	src4.f_3.f_1.f_40.f_40.f_8.f_5 = -1;
	src4.f_3.f_1.f_40.f_40.f_8.f_5.f_1 = -1;
	src4.f_3.f_1.f_40.f_40.f_8.f_5.f_3 = -1;
	src4.f_3.f_1.f_40.f_40.f_8.f_5.f_4 = -1;
	src4.f_3.f_1.f_40.f_40.f_8.f_5.f_5 = -1;
	src4.f_3.f_1.f_40.f_40.f_8.f_5.f_6 = -1;
	src4.f_3.f_1.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	src4.f_3.f_1.f_40.f_40.f_8.f_5.f_9 = 2;
	src4.f_3.f_1.f_40.f_40.f_23.f_1 = 1024;
	src4.f_3.f_1.f_40.f_40.f_23.f_4 = -15;
	src4.f_3.f_1.f_40.f_40.f_23.f_5 = 255;
	src4.f_3.f_1.f_40.f_40.f_23.f_8 = 1;
	src4.f_3.f_1.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	src4.f_3.f_1.f_40.f_40.f_23.f_13 = -1;
	src4.f_3.f_1.f_40.f_40.f_40 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_1 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_2 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_3 = 255;
	src4.f_3.f_1.f_40.f_40.f_40.f_4 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_5 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_6 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_8 = 2;
	src4.f_3.f_1.f_40.f_40.f_40.f_8.f_1 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_8.f_5 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	src4.f_3.f_1.f_40.f_40.f_40.f_23.f_1 = 1024;
	src4.f_3.f_1.f_40.f_40.f_40.f_23.f_4 = -15;
	src4.f_3.f_1.f_40.f_40.f_40.f_23.f_5 = 255;
	src4.f_3.f_1.f_40.f_40.f_40.f_23.f_8 = 1;
	src4.f_3.f_1.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	src4.f_3.f_1.f_40.f_40.f_40.f_23.f_13 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_40 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_40.f_1 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_40.f_2 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_40.f_3 = 255;
	src4.f_3.f_1.f_40.f_40.f_40.f_40.f_4 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_40.f_5 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_40.f_6 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_40.f_8 = 2;
	src4.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_1 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	src4.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	src4.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_1 = 1024;
	src4.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_4 = -15;
	src4.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_5 = 255;
	src4.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8 = 1;
	src4.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	src4.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_13 = -1;
	MISC::COPY_SCRIPT_STRUCT(&(piParam0->f_380), &src4, 204);
	piParam0->f_584 = unk232;
	piParam0->f_585 = unk233;
	piParam0->f_587 = 0;
	return;
}

int func_20(int iParam0, int iParam1, char* sParam2) // Position - 0x9CC Signature - 22 03 05 00 00 09 50 03 01 22 00
{
	return 1;
}

BOOL func_21() // Position - 0x9D5 Signature - 22 00 02 00 00 5D 17 00 18 27 0A 05
{
	return !Global_1572887.f_10;
}

int func_22() // Position - 0x9E4 Signature - 22 00 02 00 00 5D DD D3 10 78 58
{
	return Global_1102813.f_3672;
}

void func_23(Any anParam0) // Position - 0x9F3 Signature - 22 01 04 00 00 2F 67 03 66 03 6D 20
{
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		func_35(&anParam0->[i /*303*/]);
	}

	return;
}

int func_24(int iParam0, int iParam1, char* sParam2) // Position - 0xA19 Signature - 22 03 05 00 00 09 50 03 01 22 01
{
	return 1;
}

void func_25(var uParam0) // Position - 0xA22 Signature - 22 01 46
{
	var unk;
	var unk698;
	var unk702;
	var unk703;
	var unk826;
	int i;
	int j;

	unk = 6;
	unk.f_19 = 6;
	unk.f_19.f_1 = -1;
	unk.f_19.f_1.f_5 = 16;
	unk.f_19.f_1.f_77 = -1;
	unk.f_19.f_1.f_82 = -1;
	unk.f_19.f_1.f_86 = -1;
	unk.f_19.f_1.f_87 = -1;
	unk.f_19.f_1.f_89 = -1;
	unk.f_19.f_1.f_89.f_5 = 16;
	unk.f_19.f_1.f_89.f_77 = -1;
	unk.f_19.f_1.f_89.f_82 = -1;
	unk.f_19.f_1.f_89.f_86 = -1;
	unk.f_19.f_1.f_89.f_87 = -1;
	unk.f_19.f_1.f_89.f_89 = -1;
	unk.f_19.f_1.f_89.f_89.f_5 = 16;
	unk.f_19.f_1.f_89.f_89.f_77 = -1;
	unk.f_19.f_1.f_89.f_89.f_82 = -1;
	unk.f_19.f_1.f_89.f_89.f_86 = -1;
	unk.f_19.f_1.f_89.f_89.f_87 = -1;
	unk.f_19.f_1.f_89.f_89.f_89 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_5 = 16;
	unk.f_19.f_1.f_89.f_89.f_89.f_77 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_82 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_86 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_87 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_89 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_89.f_5 = 16;
	unk.f_19.f_1.f_89.f_89.f_89.f_89.f_77 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_89.f_82 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_89.f_86 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_89.f_87 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_89.f_89 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_89.f_89.f_5 = 16;
	unk.f_19.f_1.f_89.f_89.f_89.f_89.f_89.f_77 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_89.f_89.f_82 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_89.f_89.f_86 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_89.f_89.f_87 = -1;
	unk.f_554 = 4;
	unk.f_567 = -1;
	unk.f_572 = 25;
	unk.f_598 = -1;
	unk.f_598.f_1 = -1;
	unk.f_601 = -1082130432;
	unk.f_604 = -1;
	unk.f_610 = 255;
	unk.f_617 = 9;
	unk.f_648 = 6;
	unk.f_657 = 6;
	unk.f_657.f_1.f_1 = -1;
	unk.f_657.f_1.f_2 = -1;
	unk.f_657.f_1.f_6.f_1 = -1;
	unk.f_657.f_1.f_6.f_2 = -1;
	unk.f_657.f_1.f_6.f_6.f_1 = -1;
	unk.f_657.f_1.f_6.f_6.f_2 = -1;
	unk.f_657.f_1.f_6.f_6.f_6.f_1 = -1;
	unk.f_657.f_1.f_6.f_6.f_6.f_2 = -1;
	unk.f_657.f_1.f_6.f_6.f_6.f_6.f_1 = -1;
	unk.f_657.f_1.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_657.f_1.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	unk.f_657.f_1.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_657.f_38 = -1;
	unk698 = -1;
	unk698.f_1 = -1;
	unk703.f_2 = -1;
	unk703.f_9 = 1;
	unk703.f_16 = 10;
	unk703.f_104 = 11;
	unk703.f_116 = 255;
	unk826.f_3 = 2;
	uParam0->f_9208 = { unk826 };

	for (i = 0; i <= 3 - 1; i = i + 1)
	{
		uParam0->f_9081[i] = 0;
	}

	uParam0->f_9085 = { unk703 };

	for (j = 0; j <= 12; j = j + 1)
	{
		uParam0->[j /*697*/] = { unk };
	}

	for (i = 0; i <= 3; i = i + 1)
	{
		uParam0->f_9062[i /*4*/] = { unk698 };
	}

	uParam0->f_9079 = unk702;
	uParam0->f_9080 = 0;
	uParam0->f_9476 = -1;
	uParam0->f_9483 = 1;
	return;
}

BOOL func_26() // Position - 0xCB6 Signature - 22 00 02 00 00 85
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_36(Global_1051268) && Global_1572887.f_8 & true != 0)
		return true;

	return false;
}

void func_27() // Position - 0xD0E Signature - 22 00 02 00 00 09 39 3D
{
	func_37(1);
	return;
}

void func_28() // Position - 0xD1B Signature - 22 00 02 00 00 5D F6 FF 12 78 5A 26 03 05 00 61 8B
{
	if (DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1245174.f_9818))
		func_37(2);

	return;
}

void func_29(BOOL bParam0) // Position - 0xD36 Signature - 22 01 03 00 00 66 00 39 5A
{
	func_38(bParam0);
	func_39(&(Global_1225099.f_380), &(Global_1235687.f_9079));
	return;
}

void func_30() // Position - 0xD56 Signature - 22 00 03 00 00 5D 8B
{
	int i;

	if (Global_1225099.f_584 > 0)
	{
		if (func_21())
		{
			for (i = 0; i <= 12; i = i + 1)
			{
				if (func_40(i, 4))
					Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][i /*23*/] = { Global_1235384[i /*23*/] };
			}
		}
	
		func_41(1);
	}

	return;
}

void func_31() // Position - 0xDAF Signature - 22 00 02 00 00 5D F6 FF 12 78 5A 26 03 05 00 61 6A
{
	if (DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1245174.f_9818) && Global_1225099.f_584 > 1 && Global_1245174.f_9816 > 1)
	{
		func_42("FETCH", 30, -1, false, false);
		func_41(2);
	}

	return;
}

void func_32(BOOL bParam0) // Position - 0xDF3 Signature - 22 01 03 00 00 66 00 39 07
{
	func_43(bParam0);
	func_44(bParam0);
	func_45();

	if (bParam0)
	{
		func_46();
		func_47();
		func_48();
	}

	return;
}

BOOL func_33(int iParam0, BOOL bParam1) // Position - 0xE1C Signature - 22 02 05 00 00 66 00 5D E7
{
	int num;

	num = Global_1235687[iParam0 /*697*/].f_604;

	if (func_49(num))
	{
		if (bParam1)
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_1235687.f_9062[num /*4*/].f_3);
	
		return false;
	}

	return true;
}

void func_34(int iParam0) // Position - 0xE56 Signature - 22 01 D5
{
	var unk;
	Player player;
	int num;
	var unk698;

	if (func_50(Global_1235687[iParam0 /*697*/].f_598) != -1 || func_51(Global_1235687[iParam0 /*697*/].f_598))
		func_52(iParam0);

	func_53(iParam0);

	if (Global_1235687[iParam0 /*697*/].f_604 != -1)
		func_54(Global_1235687[iParam0 /*697*/].f_604, iParam0, false, false);

	func_55(iParam0);
	unk = 6;
	unk.f_19 = 6;
	unk.f_19.f_1 = -1;
	unk.f_19.f_1.f_5 = 16;
	unk.f_19.f_1.f_77 = -1;
	unk.f_19.f_1.f_82 = -1;
	unk.f_19.f_1.f_86 = -1;
	unk.f_19.f_1.f_87 = -1;
	unk.f_19.f_1.f_89 = -1;
	unk.f_19.f_1.f_89.f_5 = 16;
	unk.f_19.f_1.f_89.f_77 = -1;
	unk.f_19.f_1.f_89.f_82 = -1;
	unk.f_19.f_1.f_89.f_86 = -1;
	unk.f_19.f_1.f_89.f_87 = -1;
	unk.f_19.f_1.f_89.f_89 = -1;
	unk.f_19.f_1.f_89.f_89.f_5 = 16;
	unk.f_19.f_1.f_89.f_89.f_77 = -1;
	unk.f_19.f_1.f_89.f_89.f_82 = -1;
	unk.f_19.f_1.f_89.f_89.f_86 = -1;
	unk.f_19.f_1.f_89.f_89.f_87 = -1;
	unk.f_19.f_1.f_89.f_89.f_89 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_5 = 16;
	unk.f_19.f_1.f_89.f_89.f_89.f_77 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_82 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_86 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_87 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_89 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_89.f_5 = 16;
	unk.f_19.f_1.f_89.f_89.f_89.f_89.f_77 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_89.f_82 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_89.f_86 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_89.f_87 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_89.f_89 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_89.f_89.f_5 = 16;
	unk.f_19.f_1.f_89.f_89.f_89.f_89.f_89.f_77 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_89.f_89.f_82 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_89.f_89.f_86 = -1;
	unk.f_19.f_1.f_89.f_89.f_89.f_89.f_89.f_87 = -1;
	unk.f_554 = 4;
	unk.f_567 = -1;
	unk.f_572 = 25;
	unk.f_598 = -1;
	unk.f_598.f_1 = -1;
	unk.f_601 = -1082130432;
	unk.f_604 = -1;
	unk.f_610 = 255;
	unk.f_617 = 9;
	unk.f_648 = 6;
	unk.f_657 = 6;
	unk.f_657.f_1.f_1 = -1;
	unk.f_657.f_1.f_2 = -1;
	unk.f_657.f_1.f_6.f_1 = -1;
	unk.f_657.f_1.f_6.f_2 = -1;
	unk.f_657.f_1.f_6.f_6.f_1 = -1;
	unk.f_657.f_1.f_6.f_6.f_2 = -1;
	unk.f_657.f_1.f_6.f_6.f_6.f_1 = -1;
	unk.f_657.f_1.f_6.f_6.f_6.f_2 = -1;
	unk.f_657.f_1.f_6.f_6.f_6.f_6.f_1 = -1;
	unk.f_657.f_1.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_657.f_1.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	unk.f_657.f_1.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_657.f_38 = -1;
	Global_1235687[iParam0 /*697*/] = { unk };
	func_56(iParam0);
	player = PLAYER::PLAYER_ID();

	if (player >= 0 && player < 32 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_IN_SESSION())
	{
		num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (num >= 0 && num < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			unk698 = 6;
			unk698.f_21 = -1;
			unk698.f_22 = -1;
			Global_1225687[num /*303*/][iParam0 /*23*/] = { unk698 };
		}
	}

	return;
}

void func_35(var uParam0) // Position - 0x10F3 Signature - 22 01 32
{
	var unk;

	unk = 13;
	unk.f_1 = 6;
	unk.f_1.f_21 = -1;
	unk.f_1.f_22 = -1;
	unk.f_1.f_23 = 6;
	unk.f_1.f_23.f_21 = -1;
	unk.f_1.f_23.f_22 = -1;
	unk.f_1.f_23.f_23 = 6;
	unk.f_1.f_23.f_23.f_21 = -1;
	unk.f_1.f_23.f_23.f_22 = -1;
	unk.f_1.f_23.f_23.f_23 = 6;
	unk.f_1.f_23.f_23.f_23.f_21 = -1;
	unk.f_1.f_23.f_23.f_23.f_22 = -1;
	unk.f_1.f_23.f_23.f_23.f_23 = 6;
	unk.f_1.f_23.f_23.f_23.f_23.f_21 = -1;
	unk.f_1.f_23.f_23.f_23.f_23.f_22 = -1;
	unk.f_1.f_23.f_23.f_23.f_23.f_23 = 6;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	unk.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	unk.f_300.f_1 = 255;
	*uParam0 = { unk };
	return;
}

BOOL func_36(var uParam0, var uParam1) // Position - 0x1209 Signature - 22 02 04 00 00 66 00 39 CA
{
	if (!func_57(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_58(uParam0))
		return false;

	return true;
}

void func_37(int iParam0) // Position - 0x123D Signature - 22 01 03 00 00 5D 8B B1 12 78 48 02 66
{
	if (Global_1225099.f_584 != iParam0)
		Global_1225099.f_584 = iParam0;

	return;
}

void func_38(BOOL bParam0) // Position - 0x125A Signature - 22 01 05 00 00 5D 8B
{
	int i;
	int num;

	if (Global_1225099.f_587 <= 0)
		return;

	num = Global_1235687.f_9081[0];

	for (i = 0; i <= 12; i = i + 1)
	{
		if (i == num || Global_1225099[i /*28*/].f_2 > -1 && Global_1225099[i /*28*/].f_2 < 2)
			func_59(Global_1235687.f_9081[0], bParam0);
	}

	func_60(Global_1235687.f_9081[1]);
	return;
}

void func_39(var uParam0, var uParam1) // Position - 0x12D8 Signature - 22 02 2D
{
	int num;
	var unk;

	if (*uParam0 == 0)
		return;

	*uParam1 = *uParam1 + 1;

	if (*uParam1 >= *uParam0)
		*uParam1 = 0;

	num = (uParam0->f_1 + *uParam1) % uParam0->f_2;
	unk = -1;
	unk.f_2 = -1;
	unk.f_3 = 255;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_8 = 2;
	unk.f_8.f_1 = -1;
	unk.f_8.f_5 = -1;
	unk.f_8.f_5.f_1 = -1;
	unk.f_8.f_5.f_3 = -1;
	unk.f_8.f_5.f_4 = -1;
	unk.f_8.f_5.f_5 = -1;
	unk.f_8.f_5.f_6 = -1;
	unk.f_8.f_5.f_6.f_1 = -1;
	unk.f_8.f_5.f_9 = 2;
	unk.f_23.f_1 = 1024;
	unk.f_23.f_4 = -15;
	unk.f_23.f_5 = 255;
	unk.f_23.f_8 = 1;
	unk.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_23.f_13 = -1;

	if (uParam0->f_3[num /*40*/].f_2 != -1)
	{
		unk = { func_61(&(Global_1207480.f_28), uParam0->f_3[num /*40*/]) };
		func_62(unk, uParam0, &uParam0->f_3[num /*40*/]);
	}

	return;
}

BOOL func_40(int iParam0, int iParam1) // Position - 0x13EA Signature - 22 02 04 00 00 66 00 39 FC 20 00 6A 8B 13
{
	return func_63(iParam0) && func_64(Global_1235687[iParam0 /*697*/].f_568, iParam1);
}

void func_41(int iParam0) // Position - 0x140F Signature - 22 01 03 00 00 5D E7 DA 12 78 78 23 66
{
	if (Global_1235687.f_9080 != iParam0)
		Global_1235687.f_9080 = iParam0;

	return;
}

int func_42(char* sParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x142C Signature - 22 05 09 00 00 2F
{
	int num;
	BOOL flag;

	num = 0;

	if (iParam1 < 1)
		iParam1 = 10;

	if (!HUD::_DOES_TEXT_BLOCK_EXIST(sParam0))
	{
		num = 0;
		return 0;
	}

	flag = false;

	while (HUD::TEXT_BLOCK_REQUEST(sParam0) == 0 && num < iParam1 && !flag)
	{
		flag = func_11(bParam3, bParam4);
		num = num + 1;
		BUILTIN::WAIT(0);
	}

	flag = func_11(bParam3, bParam4);

	if (flag)
		func_5();

	if (num >= iParam1)
	{
		num = 0;
		return 0;
	}

	num = 0;

	while (!HUD::TEXT_BLOCK_IS_LOADED(sParam0) && num < iParam1 && !flag)
	{
		flag = func_11(bParam3, bParam4);
		num = num + 1;
		BUILTIN::WAIT(0);
	}

	flag = func_11(bParam3, bParam4);

	if (flag)
		func_5();

	if (num >= iParam1)
	{
		num = 0;
		return 0;
	}

	num = 0;
	return 1;
}

void func_43(BOOL bParam0) // Position - 0x1507 Signature - 22 01 05 00 00 11
{
	BOOL flag;
	int i;

	if (!func_65(2))
		return;

	if (bParam0 && Global_1225099.f_587 > 0)
	{
		for (i = 0; i <= 12; i = i + 1)
		{
			if (func_66(i, 8192, 255))
			{
				flag = true;
				break;
			}
		}
	}

	if (flag)
	{
		if (!func_67(1, 255))
		{
			LAW::_SET_ALLOW_DISABLED_LAW_RESPONSES(true);
			func_68(1, true);
		}
	}
	else if (func_67(1, 255))
	{
		LAW::_SET_ALLOW_DISABLED_LAW_RESPONSES(false);
		func_69(1, true);
	}

	return;
}

void func_44(BOOL bParam0) // Position - 0x1588 Signature - 22 01 06 00 00 5D
{
	int i;
	int num;
	int num2;

	if (Global_1225099.f_587 <= 0)
		return;

	num = -1;
	num2 = Global_1235687.f_9081[0];

	for (i = 0; i <= 12; i = i + 1)
	{
		if (i == num2 || Global_1225099[i /*28*/].f_2 > -1 && !func_66(i, 1048576, 255))
			func_70(i, bParam0);
	
		func_71(i);
		func_72(i);
		func_73(i);
		func_74(i, Global_1235687[i /*697*/].f_571);
	
		if (Global_1225099[i /*28*/].f_2 < 3)
			func_75(i);
	
		if (Global_1225099[i /*28*/].f_2 > 0 && func_76(Global_1235687[i /*697*/].f_571) && func_77(i))
			num = i;
	}

	Global_1235687.f_9081[0] = Global_1235687.f_9081[0] + 1;
	Global_1235687.f_9081[1] = Global_1235687.f_9081[1] + 1;

	if (Global_1235687.f_9081[0] >= 13)
		Global_1235687.f_9081[0] = 0;

	if (Global_1235687.f_9081[1] >= 5)
		Global_1235687.f_9081[1] = 0;

	if (num != -1)
		func_78(num);
	else
		func_79();

	return;
}

void func_45() // Position - 0x16D1 Signature - 22 00 03 00 00 09
{
	int num;

	if (!func_80(1))
		func_81();

	if (Global_1235687.f_9085.f_97 <= 0)
		return;

	num = Global_1235687.f_9085.f_98;

	if (func_82(num))
	{
		func_83(num);
		num = (num + 1) % 10;
		Global_1235687.f_9085.f_98 = num;
		Global_1235687.f_9085.f_97 = Global_1235687.f_9085.f_97 - 1;
	}

	return;
}

void func_46() // Position - 0x1738 Signature - 22 00 03 00 00 39 70
{
	Player player;

	if (func_13())
	{
		func_84(Global_1235687.f_9085.f_122);
		Global_1235687.f_9085.f_122 = (Global_1235687.f_9085.f_122 + 1) % 32;
	}

	player = PLAYER::PLAYER_ID();
	func_85();
	Global_1235687.f_9085.f_6 = func_86(player);

	if (Global_1235687.f_9085.f_6 == -1154721830)
	{
		Global_1235687.f_9085.f_6 = func_87();
	
		if (!func_88(2, 255) && Global_1235687.f_9085.f_6 == -1154721830)
			func_89(2);
		else if (func_88(2, 255) && Global_1235687.f_9085.f_6 != -1154721830)
			func_90(2);
	
		func_91(Global_1235687.f_9085.f_121, player);
	}
	else if (func_88(2, 255))
	{
		func_90(2);
	}

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
	{
		func_92(Global_1235687.f_9085.f_121, player);
		func_93(Global_1235687.f_9085.f_121, player);
	}

	if (func_94() && !func_88(5, Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300.f_1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300.f_1))
		func_95();

	Global_1235687.f_9085.f_121 = (Global_1235687.f_9085.f_121 + 1) % 32;
	return;
}

void func_47() // Position - 0x188C Signature - 22 00 02 00 00 39 2A
{
	func_96();
	func_97();
	return;
}

void func_48() // Position - 0x189C Signature - 22 00 06 00 00 37 19
{
	var unk;
	BOOL flag;
	int num;

	unk = { func_98(joaat("mp_fetch_last_started_business_raid_global_cooldown")) };
	flag = func_99(unk);

	if (!flag)
		return;

	if (!func_100(unk))
		return;

	func_101(unk);
	func_102();

	if (Global_1235687.f_9208.f_6 == 0)
		return;

	num = func_103();

	if (!func_104(num))
		return;

	func_105(num);
	return;
}

BOOL func_49(int iParam0) // Position - 0x1908 Signature - 22 01 03 00 00 66 00 39 43
{
	return func_106(iParam0) && SCRIPTS::DOES_THREAD_EXIST(Global_1235687.f_9062[iParam0 /*4*/].f_3) && SCRIPTS::IS_THREAD_ACTIVE(Global_1235687.f_9062[iParam0 /*4*/].f_3, false);
}

int func_50(var uParam0, var uParam1) // Position - 0x1943 Signature - 22 02 04 00 00 11 4B 00 2D 39 58
{
	return func_107(uParam0);
}

BOOL func_51(var uParam0, var uParam1) // Position - 0x1953 Signature - 22 02 05 00 00 11 4B 00 2D 39 A5 35 00 67 04 66 04 09
{
	int num;

	num = func_108(uParam0);
	return num == 1 || num == 2;
}

void func_52(int iParam0) // Position - 0x1973 Signature - 22 01 0D 00 00 66
{
	var unk;
	BOOL flag;
	int num;
	int num2;
	int num3;
	var unk3;

	if (!func_63(iParam0))
		return;

	if (Global_1235687[iParam0 /*697*/].f_571 == joaat("INTRO_MISSION"))
		return;

	if (func_40(iParam0, 128))
	{
		func_109(false);
		func_110(iParam0, 128);
	}

	if (func_66(iParam0, 64, 255))
		return;

	unk = { Global_1235687[iParam0 /*697*/].f_598 };
	flag = func_40(iParam0, 33554432);
	func_110(iParam0, 33554432);
	func_53(iParam0);
	func_111(iParam0);

	if (!func_112(unk) && !func_51(unk))
		return;

	num = func_113(Global_1235687[iParam0 /*697*/].f_571);

	if (num != 0 && num != 6)
		func_114(false);

	func_110(iParam0, 16);
	func_115(iParam0, 32);
	func_115(iParam0, 16);

	if (!flag && !SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225099[iParam0 /*28*/].f_14), Global_1295666) && !func_40(iParam0, 65536))
	{
		num3 = Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_21;
	
		if (num3 == 1)
			num2 = 1;
	}

	func_116(unk, false, 2, num2, false);
	unk3.f_1 = -1;
	unk3.f_1.f_1 = -1;
	func_117(Global_1235687[iParam0 /*697*/].f_598, &unk3);

	if (Global_1235687[iParam0 /*697*/].f_571 == joaat("hideout"))
		func_118(0);

	if (Global_1235687[iParam0 /*697*/].f_571 == joaat("BOUNTY_PLAYER"))
	{
		if (Global_1225099[iParam0 /*28*/].f_16 == PLAYER::PLAYER_ID())
			func_90(4);
	
		func_119(true, false, false);
	}

	if (func_120(Global_1235687[iParam0 /*697*/].f_571))
		func_121(1, 0, 0);

	if (func_122(iParam0) && Global_1225099[iParam0 /*28*/].f_16 == PLAYER::PLAYER_ID())
	{
		func_123(false);
		func_124(0);
	}

	func_125(Global_1235687[iParam0 /*697*/].f_571);
	return;
}

void func_53(int iParam0) // Position - 0x1B71 Signature - 22 01 04 00 00 66 00 37
{
	int num;

	if (!func_40(iParam0, 134217728))
		return;

	num = Global_1225099[iParam0 /*28*/].f_5;

	if (!func_126(num))
		return;

	func_127(num);
	func_110(iParam0, 134217728);
	return;
}

void func_54(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1BB5 Signature - 22 04 06 00 00 66 00 39 43
{
	if (!func_106(iParam0))
		return;

	if (!func_128(iParam0, iParam1))
	{
		Global_1235687[iParam1 /*697*/].f_604 = -1;
		return;
	}

	if (Global_1235687.f_9062[iParam0 /*4*/] != -1)
	{
		Global_1235687[Global_1235687.f_9062[iParam0 /*4*/] /*697*/].f_604 = -1;
	
		if (bParam3 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
			func_115(Global_1235687.f_9062[iParam0 /*4*/], 2);
	}

	if (bParam2)
		Global_1235687.f_9062[iParam0 /*4*/].f_1 = -1;

	Global_1235687.f_9062[iParam0 /*4*/] = -1;
	Global_1235687.f_9062[iParam0 /*4*/].f_2 = 0;
	return;
}

void func_55(int iParam0) // Position - 0x1C56 Signature - 22 01 04 00 00 2F 67 03 66 03 6D 18
{
	int i;

	for (i = 0; i <= 24; i = i + 1)
	{
		if (Global_1235687[iParam0 /*697*/].f_572[i] == 0)
		{
		}
		else
		{
			PED::REMOVE_RELATIONSHIP_GROUP(Global_1235687[iParam0 /*697*/].f_572[i]);
		}
	}

	return;
}

void func_56(int iParam0) // Position - 0x1C9C Signature - 22 01 03 00 00 66 00 08 1C 6A
{
	if (iParam0 != -1 && iParam0 == Global_1235687.f_9479)
	{
		Global_1235687.f_9479 = -1;
		Global_1235687.f_9480 = -1;
	}

	return;
}

BOOL func_57(int iParam0) // Position - 0x1CCA Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 21 00 04 00 00 00 1B 00 05 00 00 00 15 00 06 00 00 00 0F 00 07 00 00 00 09 00 08 00 00 00 03 00 68 04 00 09 50 01 01 2F 50 01 01 22 01
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

int func_58(int iParam0) // Position - 0x1D09 Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 2E
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

void func_59(int iParam0, BOOL bParam1) // Position - 0x1D9F Signature - 22 02 04 00 00 66 00 5D 8B B1 12 63 1C 27 02 08
{
	if (Global_1225099[iParam0 /*28*/].f_2 == -1)
		return;

	if (Global_1225099[iParam0 /*28*/].f_2 != 3)
		if (!bParam1)
			func_129(iParam0, 3);
		else if (Global_1235687[iParam0 /*697*/].f_571 != 0 && !func_130(Global_1235687[iParam0 /*697*/].f_571))
			func_129(iParam0, 3);

	func_131(iParam0);
	func_132(iParam0);

	switch (Global_1225099[iParam0 /*28*/].f_2)
	{
		case 0:
			func_133(iParam0);
			break;
	
		case 1:
			func_134(iParam0);
			break;
	
		case 2:
			func_135(iParam0);
			break;
	
		case 3:
			func_136(iParam0);
			break;
	}

	return;
}

void func_60(int iParam0) // Position - 0x1E5C Signature - 22 01 03 00 00 66 00 5D 8B B1 12 18
{
	if (Global_1225099.f_369[iParam0 /*2*/].f_1 && Global_1225099.f_369[iParam0 /*2*/] != -1 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_137(), iParam0, false, 0))
		func_138(iParam0);

	return;
}

struct<40> func_61(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40) // Position - 0x1E9E Signature - 22 29
{
	var unk;
	int i;
	int num;

	if (uParam1.f_1 != -1)
		return iParam0->f_2[uParam1.f_1 /*40*/];

	unk = -1;
	unk.f_2 = -1;
	unk.f_3 = 255;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_8 = 2;
	unk.f_8.f_1 = -1;
	unk.f_8.f_5 = -1;
	unk.f_8.f_5.f_1 = -1;
	unk.f_8.f_5.f_3 = -1;
	unk.f_8.f_5.f_4 = -1;
	unk.f_8.f_5.f_5 = -1;
	unk.f_8.f_5.f_6 = -1;
	unk.f_8.f_5.f_6.f_1 = -1;
	unk.f_8.f_5.f_9 = 2;
	unk.f_23.f_1 = 1024;
	unk.f_23.f_4 = -15;
	unk.f_23.f_5 = 255;
	unk.f_23.f_8 = 1;
	unk.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_23.f_13 = -1;

	for (i = 0; i < *iParam0; i = i + 1)
	{
		num = (iParam0->f_1 + i) % 5;
	
		if (iParam0->f_2[num /*40*/].f_2 != uParam1.f_2)
		{
		}
		else if (iParam0->f_2[num /*40*/].f_3 != uParam1.f_3)
		{
		}
		else if (iParam0->f_2[num /*40*/].f_4 != uParam1.f_4)
		{
		}
		else
		{
			return iParam0->f_2[num /*40*/];
		}
	}

	return unk;
}

void func_62(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41) // Position - 0x1FCD Signature - 22 2A
{
	switch (func_139(uParam41))
	{
		case -1:
			func_140(uParam40, uParam41->f_4);
			break;
	
		case 0:
			if (!func_141(&uParam0, uParam41))
			{
				if (NETWORK::GET_NETWORK_TIME_ACCURATE() - uParam41->f_7 > 120000)
				{
					uParam41->f_6 = 2;
					func_142(uParam41, 3);
				}
			
				return;
			}
		
			if (func_143(&uParam0) < 0)
				return;
		
			uParam41->f_1 = uParam0.f_1;
			func_142(uParam41, 1);
			break;
	
		case 1:
			if (!func_141(&uParam0, uParam41))
			{
				uParam41->f_6 = 2;
				func_142(uParam41, 3);
				return;
			}
		
			if (func_143(&uParam0) < 1)
				return;
		
			uParam41->f_6 = uParam0.f_6;
			func_142(uParam41, 2);
			break;
	
		case 2:
			if (!func_141(&uParam0, uParam41))
			{
				if (uParam41->f_6 == -1)
					uParam41->f_6 = 2;
			
				func_142(uParam41, 3);
				return;
			}
		
			if (func_143(&uParam0) < 3)
				return;
		
			func_142(uParam41, 3);
			break;
	
		case 3:
			func_142(uParam41, -1);
			break;
	}

	return;
}

BOOL func_63(int iParam0) // Position - 0x20FC Signature - 22 01 03 00 00 66 00 2F 7E 6A 8B 06 00 66 00 6D 0C 77 69 50 01 01 22 02 04
{
	return iParam0 >= 0 && iParam0 <= 12;
}

BOOL func_64(BOOL bParam0, int iParam1) // Position - 0x2112 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 01
{
	return bParam0 && iParam1 != false;
}

BOOL func_65(int iParam0) // Position - 0x2121 Signature - 22 01 03 00 00 66 00 5D E7 DA 12 18 79
{
	if (Global_1235687.f_9081[iParam0] < func_144(iParam0))
	{
		Global_1235687.f_9081[iParam0] = Global_1235687.f_9081[iParam0] + 1;
		return false;
	}

	Global_1235687.f_9081[iParam0] = 0;
	return true;
}

BOOL func_66(int iParam0, int iParam1, Player plParam2) // Position - 0x2166 Signature - 22 03 05 00 00 66 02 6D
{
	if (plParam2 == 255)
		plParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return func_63(iParam0) && func_64(Global_1225687[plParam2 /*303*/][iParam0 /*23*/].f_19, iParam1);
}

BOOL func_67(int iParam0, Player plParam1) // Position - 0x219B Signature - 22 02 04 00 00 66 01 6D FF 15 06 00 03 01 00 CC 67 01 66 01 5D
{
	if (plParam1 == 255)
		plParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return func_64(Global_1225687[plParam1 /*303*/].f_302, iParam0);
}

void func_68(int iParam0, BOOL bParam1) // Position - 0x21C2 Signature - 22 02 04 00 00 66 00 6D FF 39 9B 21 00 05
{
	if (!func_67(iParam0, 255))
	{
		bParam1;
		func_145(&(Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_302), iParam0);
	}

	return;
}

void func_69(int iParam0, BOOL bParam1) // Position - 0x21EF Signature - 22 02 04 00 00 66 00 6D FF 39 9B 21 00 8B
{
	if (func_67(iParam0, 255))
	{
		bParam1;
		func_146(&(Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_302), iParam0);
	}

	return;
}

void func_70(int iParam0, BOOL bParam1) // Position - 0x221B Signature - 22 02 06 00 00 66 00 5D E7
{
	BOOL flag;
	BOOL flag2;

	flag = Global_1235687[iParam0 /*697*/].f_567 == -1;
	flag2 = Global_1225099[iParam0 /*28*/].f_2 == -1;

	if (flag && flag2)
		return;

	if (!func_147(iParam0, -2147483648))
	{
		if (func_148())
		{
			if (func_147(iParam0, 32) || Global_1235687[iParam0 /*697*/].f_571 != joaat("dynamic") && Global_1235687[iParam0 /*697*/].f_571 != joaat("MOONSHINE_DYNAMIC") && Global_1235687[iParam0 /*697*/].f_571 != -1086711901 && Global_1235687[iParam0 /*697*/].f_571 != -2096602762 && Global_1235687[iParam0 /*697*/].f_571 != -1812122325 && Global_1235687[iParam0 /*697*/].f_571 != 918897273 && Global_1235687[iParam0 /*697*/].f_571 != joaat("AMBUSH") && Global_1235687[iParam0 /*697*/].f_571 != joaat("hideout") && Global_1235687[iParam0 /*697*/].f_571 != -697789102 && Global_1235687[iParam0 /*697*/].f_571 != 0)
			{
				if (!func_40(iParam0, 1073741824) && !func_149())
				{
					func_150(iParam0, 1073741824);
					func_151(2);
					return;
				}
			}
		}
	}

	if (Global_1225099[iParam0 /*28*/].f_4 != -1)
		func_152(Global_1225099[iParam0 /*28*/].f_4, -1);

	func_153(iParam0);
	func_154(iParam0);
	func_155(iParam0);
	func_156(iParam0);

	if (func_157(iParam0, bParam1))
		if (Global_1235687[iParam0 /*697*/].f_567 != 3 && Global_1235687[iParam0 /*697*/].f_567 != -1)
			func_158(iParam0, 3);
	else if (func_159(iParam0, flag, flag2))
		func_158(iParam0, 0);

	switch (Global_1235687[iParam0 /*697*/].f_567)
	{
		case 0:
			func_160(iParam0);
			break;
	
		case 1:
			func_161(iParam0);
			break;
	
		case 2:
			func_162(iParam0);
			break;
	
		case 3:
			func_163(iParam0);
			break;
	}

	return;
}

void func_71(int iParam0) // Position - 0x2451 Signature - 22 01 03 00 00 66 00 5D E7 DA 12 40 B9 02 78 3B 02 3C
{
	switch (Global_1235687[iParam0 /*697*/].f_571)
	{
		case joaat("CAMP_RESUPPLY"):
		case joaat("CAMP_SETUP"):
		case joaat("BOUNTY_PLAYER"):
		case joaat("CAMP_SELL"):
			if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225099[iParam0 /*28*/].f_14), PLAYER::PLAYER_ID()))
				func_164();
			break;
	}

	return;
}

void func_72(int iParam0) // Position - 0x249F Signature - 22 01 04 00 00 2F 67 03 66 03 1D
{
	int i;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (Global_1235687[iParam0 /*697*/].f_554[i /*3*/].f_2 == 0)
		{
		}
		else
		{
			func_165(iParam0, i);
		}
	}

	return;
}

void func_73(int iParam0) // Position - 0x24DA Signature - 22 01 03 00 00 66 00 6F
{
	if (func_66(iParam0, 32, 255) && !func_40(iParam0, 4194304))
		func_166();

	return;
}

void func_74(int iParam0, int iParam1) // Position - 0x2502 Signature - 22 02 04 00 00 66 00 6F
{
	if (func_66(iParam0, 32, 255))
	{
		switch (iParam1)
		{
			case joaat("gun_for_hire"):
				if (func_40(iParam0, 4194304))
					func_168(func_167(), Global_1235687[iParam0 /*697*/].f_598, true, true);
				break;
		
			case joaat("BOUNTY_PLAYER"):
				if (func_40(iParam0, 4194304) && func_66(iParam0, 32, func_167()))
					func_168(func_167(), Global_1235687[iParam0 /*697*/].f_598, true, false);
				break;
		
			case joaat("CAMP_SELL"):
				if (func_40(iParam0, 4194304))
					func_168(func_167(), Global_1235687[iParam0 /*697*/].f_598, true, true);
				break;
		}
	}

	return;
}

void func_75(int iParam0) // Position - 0x25B9 Signature - 22 01 03 00 00 66 00 5D E7 DA 12 40 B9 02 78 3B 02 37 0B
{
	if (Global_1235687[iParam0 /*697*/].f_571 == joaat("BOUNTY_PLAYER") && Global_1225099[iParam0 /*28*/].f_16 == PLAYER::PLAYER_ID() && func_170(func_169(Global_1225099[iParam0 /*28*/]), Global_1235687[iParam0 /*697*/].f_603) == joaat("VERY_HIGH"))
		func_171(4);

	return;
}

BOOL func_76(int iParam0) // Position - 0x2616 Signature - 22 01 03 00 00 66 00 3C 08
{
	switch (iParam0)
	{
		case -2096602762:
		case -1812122325:
		case joaat("AMBUSH"):
		case -1086711901:
		case joaat("MOONSHINE_DYNAMIC"):
		case joaat("hideout"):
		case 918897273:
		case joaat("dynamic"):
			return true;
	}

	return false;
}

BOOL func_77(int iParam0) // Position - 0x265E Signature - 22 01 06 00 00 66 00 5D E7 DA 12 40 B9 02 78 8F
{
	float num;
	float num2;
	int num3;

	num = Global_1235687[iParam0 /*697*/].f_655;
	num2 = func_173(Global_34, func_172(iParam0));
	num3 = 4000;
	Global_1235687[iParam0 /*697*/].f_655 = num2;

	if (num2 < 100f)
	{
		return true;
	}
	else if (num2 < 250f)
	{
		if (num2 < num)
		{
			if (!func_40(iParam0, 1024))
			{
				if (!func_40(iParam0, 2048))
				{
					func_174(&(Global_1235687[iParam0 /*697*/].f_656));
					func_150(iParam0, 2048);
				}
			
				if (func_175(Global_1235687[iParam0 /*697*/].f_656) < num3)
					return false;
			}
		
			func_150(iParam0, 1024);
			return true;
		}
		else
		{
			if (func_40(iParam0, 1024))
			{
				if (func_40(iParam0, 2048))
				{
					func_174(&(Global_1235687[iParam0 /*697*/].f_656));
					func_110(iParam0, 2048);
				}
			
				if (func_175(Global_1235687[iParam0 /*697*/].f_656) < num3)
					return true;
			}
		
			func_110(iParam0, 1024);
			return false;
		}
	}

	return false;
}

void func_78(int iParam0) // Position - 0x2771 Signature - 22 01 03 00 00 5D E7 DA 12 78 06
{
	if (Global_1235687.f_9478 != iParam0)
		Global_1235687.f_9478 = iParam0;

	return;
}

void func_79() // Position - 0x278E Signature - 22 00 02 00 00 5D E7 DA 12 78 06
{
	if (Global_1235687.f_9478 != -1)
		Global_1235687.f_9478 = -1;

	return;
}

BOOL func_80(int iParam0) // Position - 0x27A9 Signature - 22 01 03 00 00 5D E7 DA 12 78 7D 23 66 00 69
{
	return Global_1235687.f_9085 && iParam0 != false;
}

void func_81() // Position - 0x27BD Signature - 22 00 06 00 00 6D
{
	int bountyData;
	var gamerHandle;

	if (!func_176(255))
		return;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(1444561974))
	{
		gamerHandle = { func_177(PLAYER::PLAYER_ID()) };
		BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&gamerHandle, &bountyData);
	
		if (func_178(bountyData))
			func_179(MISC::VAR_STRING(2, "JAIL_BOUNTY_REMOVE", bountyData), 10000, 0, 0, 0, true);
		else if (func_178(1))
			func_179(MISC::VAR_STRING(2, "JAIL_BOUNTY_REMOVE", func_180()), 10000, 0, 0, 0, true);
	
		func_181(-896348601, 0, 0);
	}

	func_171(1);
	return;
}

BOOL func_82(int iParam0) // Position - 0x2846 Signature - 22 01 05 00 00 2F 67 03
{
	BOOL flag;
	BOOL flag2;

	flag = false;

	if (!func_182(iParam0, 64))
		func_183(iParam0, 64);

	if (func_182(iParam0, 32))
	{
		flag2 = false;
	
		switch (Global_1235687.f_9085.f_16[iParam0 /*8*/])
		{
			case -1141463485:
				flag2 = func_185(16, 8);
				break;
		
			case -649633548:
				flag2 = func_184(32, 64);
				break;
		
			case 504244707:
				flag2 = func_185(64, 32);
				break;
		
			case 509970874:
				flag2 = func_184(8, 16);
				break;
		}
	
		if (flag2)
			func_186(iParam0, 32);
	}

	if (!func_187(iParam0))
	{
		switch (Global_1235687.f_9085.f_16[iParam0 /*8*/])
		{
			case -1729966722:
				flag = func_199(iParam0);
				break;
		
			case -1555147881:
				flag = func_204(iParam0);
				break;
		
			case -1473321380:
				flag = func_197(iParam0, Global_1235687.f_9085.f_16[iParam0 /*8*/].f_6);
				break;
		
			case -1454491980:
				flag = func_194(iParam0);
				break;
		
			case -1228177771:
				flag = func_200(iParam0, Global_1235687.f_9085.f_16[iParam0 /*8*/].f_6);
				break;
		
			case -1141463485:
				flag = func_193(iParam0);
				break;
		
			case -896348601:
				flag = func_190(iParam0);
				break;
		
			case -649633548:
				flag = func_195(iParam0, Global_1235687.f_9085.f_16[iParam0 /*8*/].f_6);
				break;
		
			case -506555739:
				flag = func_201(iParam0);
				break;
		
			case -179235043:
				flag = func_191(iParam0);
				break;
		
			case -1303136:
				flag = func_203(iParam0);
				break;
		
			case 355060119:
				flag = func_188(iParam0);
				break;
		
			case 504244707:
				flag = func_196(iParam0);
				break;
		
			case 509970874:
				flag = func_192(iParam0);
				break;
		
			case 607258092:
				flag = func_205(iParam0);
				break;
		
			case 1244342493:
				flag = func_202(iParam0);
				break;
		
			case 1265908607:
				flag = func_198(iParam0);
				break;
		
			case 1393257577:
				flag = func_189(iParam0);
				break;
		}
	
		if (flag)
		{
			func_183(iParam0, 1);
		}
		else
		{
			func_183(iParam0, 1);
			func_183(iParam0, 4);
		}
	}

	return func_182(iParam0, 24);
}

void func_83(int iParam0) // Position - 0x2A7C Signature - 22 01 0B 00 00 66
{
	var unk;

	switch (Global_1235687.f_9085.f_16[iParam0 /*8*/])
	{
		case -1141463485:
			func_90(16);
			break;
	
		case -649633548:
			func_90(32);
			break;
	
		case 504244707:
			func_90(64);
			break;
	
		case 509970874:
			func_90(8);
			break;
	}

	Global_1235687.f_9085.f_16[iParam0 /*8*/] = { unk };
	return;
}

void func_84(Player plParam0) // Position - 0x2AE8 Signature - 22 01 03 00 00 09 66 00 39 FE
{
	if (func_88(1, plParam0))
	{
		if (func_88(4, plParam0))
		{
			if (!func_206(plParam0))
			{
				func_207(plParam0);
				return;
			}
		}
		else
		{
			if (!func_208(plParam0))
			{
				func_209(plParam0);
				return;
			}
		
			func_207(plParam0);
		}
	}
	else
	{
		func_209(plParam0);
	}

	return;
}

void func_85() // Position - 0x2B3C Signature - 22 00 08 00 00 11
{
	int i;
	var unk;
	int bountyData;
	var gamerHandle;

	if (func_80(2) && MISC::GET_GAME_TIMER() - Global_1235687.f_9085.f_15 > 600000)
		func_210(2);

	if (Global_1235687.f_9085.f_14 <= 0)
		return;

	for (i = Global_1235687.f_9085.f_14 - 1; i >= 0; i = i + -1)
	{
		if (!func_211(&Global_1235687.f_9085.f_9[i /*4*/], &unk))
		{
			if (Global_1235687.f_9085.f_9[i /*4*/].f_3 || unk)
			{
				func_171(2);
				Global_1235687.f_9085.f_15 = MISC::GET_GAME_TIMER();
				gamerHandle = { func_177(Global_1235687.f_9085.f_9[i /*4*/]) };
				BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&gamerHandle, &bountyData);
				func_212(Global_1235687.f_9085.f_9[i /*4*/], bountyData);
			}
		
			if (Global_1235687.f_9085.f_14 > 1)
			{
				SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1235687.f_9085.f_8), Global_1235687.f_9085.f_9[i /*4*/]);
				Global_1235687.f_9085.f_9[i /*4*/] = { Global_1235687.f_9085.f_9[Global_1235687.f_9085.f_14 - 1 /*4*/] };
			}
			else
			{
				SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Global_1235687.f_9085.f_8));
				Global_1235687.f_9085.f_9[i /*4*/].f_1 = 0;
				Global_1235687.f_9085.f_9[i /*4*/] = 255;
				Global_1235687.f_9085.f_9[i /*4*/].f_2 = 0;
				Global_1235687.f_9085.f_9[i /*4*/].f_3 = 0;
				Global_1235687.f_9085.f_14 = 0;
				return;
			}
		
			if (Global_1235687.f_9085.f_14 > 0)
				Global_1235687.f_9085.f_14 = Global_1235687.f_9085.f_14 - 1;
		}
	}

	return;
}

int func_86(Player plParam0) // Position - 0x2CD4 Signature - 22 01 06 00 00 6D
{
	var unk;

	if (!func_176(255))
		return 1742861621;

	if (func_213(255))
		return 1742861621;

	if (BOUNTY::BOUNTY_GET_COOLDOWN_COLLECTION(&unk))
		Global_1245174.f_9807.f_4 = unk.f_2;

	if (Global_1295666.f_16 < Global_1245174.f_9807.f_4)
		return -232718588;

	if (Global_1245174.f_9807.f_5 == -1)
		Global_1245174.f_9807.f_5 = Global_1295666.f_16 + 30;

	if (Global_1295666.f_16 < Global_1245174.f_9807.f_5)
		return -855374237;

	if (func_214(plParam0, true, false, true))
		return -1826994236;

	if (func_215(1114112, plParam0))
		return 458635662;

	if (CAM::IS_SCREEN_FADED_OUT())
		return -86457213;

	if (func_217(func_216(), func_216(), false, false))
		return -189894459;

	return -1154721830;
}

int func_87() // Position - 0x2DBD Signature - 22 00 02 00 00 37 C2
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(-133260350))
		return 2138128745;

	if (func_80(2))
		return 1348664310;

	if (func_218())
		return -77347729;

	return -1154721830;
}

BOOL func_88(int iParam0, Player plParam1) // Position - 0x2DFE Signature - 22 02 04 00 00 66 01 6D FF 15 06 00 03 01 00 CC 67 01 66 01 03
{
	if (plParam1 == 255)
		plParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(plParam1)) && Global_1225687[plParam1 /*303*/].f_300 && iParam0 != false;
}

void func_89(int iParam0) // Position - 0x2E33 Signature - 22 01 03 00 00 03 01 00 CC 5D D7 B3 12 40 2F 01 78 2C 01 66
{
	Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300 = Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300 || iParam0;
	return;
}

void func_90(int iParam0) // Position - 0x2E5A Signature - 22 01 03 00 00 03 01 00 CC 5D D7 B3 12 40 2F 01 78 2C 01 03
{
	Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300 = Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300 - Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300 && iParam0;
	return;
}

void func_91(Player plParam0, Player plParam1) // Position - 0x2E90 Signature - 22 02 16 00 00 66 00 39
{
	Player player;
	Hash hashKey;
	var unk;

	if (!func_206(plParam0))
		return;

	player = PLAYER::INT_TO_PLAYERINDEX(plParam0);
	Global_1235687.f_9085.f_7 = func_219(player, plParam1);
	hashKey = 0;

	if (Global_1235687.f_9085.f_7 == -605318450)
	{
		switch (func_220(&unk, player, 1))
		{
			case 0:
			case 3:
				Global_1235687.f_9085.f_7 = 726443182;
				return;
		
			case 1:
				hashKey = 0;
				break;
		
			case 2:
				hashKey = 0;
				break;
		
			case 4:
				hashKey = MISC::GET_HASH_KEY(&unk);
				break;
		}
	}
	else
	{
		return;
	}

	func_221(player, hashKey);
	return;
}

void func_92(Player plParam0, Player plParam1) // Position - 0x2F38 Signature - 22 02 05 00 00 11 66
{
	Player player;

	if (!func_88(2, plParam0))
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1235687.f_9085.f_120), plParam0);
		return;
	}

	player = PLAYER::INT_TO_PLAYERINDEX(plParam0);

	if (plParam1 == player)
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1235687.f_9085.f_120), plParam0);
		return;
	}

	if (GANG::_NETWORK_IS_GANG_MEMBER(GANG::NETWORK_GET_GANG_ID(plParam1), player))
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1235687.f_9085.f_120), plParam0);
		return;
	}

	if (BUILTIN::VDIST(func_222(player), func_222(plParam1)) <= Global_1901671.f_171.f_23 * Global_1155150[plParam0 /*30*/].f_29)
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1235687.f_9085.f_120), plParam0);
	else
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1235687.f_9085.f_120), plParam0);

	return;
}

// Unhandled jump detected. Output should be considered invalid
void func_93(Player plParam0, Player plParam1) // Position - 0x2FF4 Signature - 22 02 07 00 00 39
{
	Player player;
	int i;
	BOOL flag;

	if (func_94())
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(plParam0)))
		return;

	if (!GANG::NETWORK_IS_IN_SAME_GANG(plParam1, PLAYER::INT_TO_PLAYERINDEX(plParam0)))
		return;

	player = Global_1225687[plParam0 /*303*/].f_300.f_1;

	if (player == 255)
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		return;

	if (!func_88(4, player))
		return;

	flag = false;

	for (i = 0; i < 13; i = i + 1)
	{
		if (Global_1225099[i /*28*/].f_16 == player && Global_1235687[i /*697*/].f_571 == joaat("BOUNTY_PLAYER"))
		{
			if (!func_36(Global_1235687[i /*697*/].f_598))
				goto 0xD6;
		
			STATS::STAT_ADD_BOUNTY_TARGET(Global_1235687[i /*697*/].f_598.f_1, PLAYER::GET_PLAYER_PED(player));
			flag = true;
			break;
		}
	}

	if (!flag)
		return;

	func_224(player, func_223(player));
	return;
}

BOOL func_94() // Position - 0x30EB Signature - 22 00 02 00 00 03 01 00 CC
{
	return Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300.f_1 != 255;
}

void func_95() // Position - 0x3106 Signature - 22 00 02 00 00 6D FF
{
	Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300.f_1 = 255;
	Global_1245174.f_9807.f_5 = -1;
	return;
}

void func_96() // Position - 0x312A Signature - 22 00 03 00 00 5D E7
{
	int num;

	switch (Global_1235687.f_9085.f_1)
	{
		case 0:
			if (func_225())
				func_226(1);
			break;
	
		case 1:
			if (func_182(Global_1235687.f_9085.f_100, 32))
			{
				if (func_182(Global_1235687.f_9085.f_100, 2))
				{
					func_226(2);
				}
				else if (func_182(Global_1235687.f_9085.f_100, 4))
				{
					if (func_227(Global_1235687.f_9085.f_100))
					{
						func_228(true);
						func_226(0);
						func_229();
					}
				}
			
				func_186(Global_1235687.f_9085.f_100, 32);
			}
			break;
	
		case 2:
			num = func_231(Global_1235687.f_9085.f_2, func_230(func_169(Global_1235687.f_9085.f_2), Global_1235687.f_9085.f_3), joaat("BOUNTY_PLAYER"), ENTITY::GET_ENTITY_COORDS(Global_33, true, false), true, false, false, -1082130432);
		
			if (num != 0 || func_232(PLAYER::PLAYER_ID(), 1))
			{
				func_228(true);
				func_226(0);
				func_229();
				return;
			}
		
			func_89(4);
			func_233(Global_1235687.f_9085.f_2, Global_1235687.f_9085.f_3, 0);
			func_228(false);
			func_226(0);
			break;
	}

	return;
}

void func_97() // Position - 0x325D Signature - 22 00 08 00 00 5D
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;
	int num5;

	num = Global_1245174.f_9807.f_6;
	num2 = func_234();
	num3 = func_235(false);
	Global_1245174.f_9807.f_6 = num2;
	Global_1235687.f_9085.f_5 = func_236(num3, num, num2, &flag);

	if (Global_1235687.f_9085.f_5 != 1519094052)
	{
		if (flag)
			func_237();
	
		return;
	}

	if (!func_238(num3))
	{
		func_237();
		return;
	}

	num5 = -1;

	if (!func_239(joaat("BOUNTY_PLAYER"), num3, &num4, &num5, true, Global_1901671.f_171.f_24))
	{
		func_237();
		return;
	}

	func_233(num4, num5, 0);
	func_237();
	return;
}

struct<2> func_98(int iParam0) // Position - 0x32FE Signature - 22 01 05 00 00 66 00 4B 03 6C
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

BOOL func_99(var uParam0, var uParam1) // Position - 0x3310 Signature - 22 02 05 00 00 5D 32
{
	int num;

	if (Global_1295666.f_16 - Global_1245174.f_9814 > 60)
	{
		STATS::STAT_ID_GET_INT(&uParam0, &num);
		STATS::STAT_ID_SET_INT(&uParam0, num + 1, true);
		Global_1245174.f_9814 = Global_1295666.f_16;
		return 1;
	}

	return 0;
}

BOOL func_100(var uParam0, var uParam1) // Position - 0x3352 Signature - 22 02 05 00 00 4B 00 4B 04 03 09 00 7A 41 66 04 25
{
	int num;

	STATS::STAT_ID_GET_INT(&uParam0, &num);
	return num >= 600;
}

void func_101(var uParam0, var uParam1) // Position - 0x3369 Signature - 22 02 04 00 00 4B 00
{
	STATS::STAT_ID_SET_INT(&uParam0, 0, true);
	return;
}

void func_102() // Position - 0x337A Signature - 22 00 03 00 00 39 45
{
	int i;

	func_240();
	Global_1235687.f_9208.f_6 = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		if (!func_241(i))
		{
			Global_1235687.f_9208.f_3[i] = 0;
		}
		else
		{
			func_242(&(Global_1235687.f_9208.f_6), i);
		
			switch (i)
			{
				case 0:
					Global_1235687.f_9208.f_3[i] = func_243();
					break;
			
				case 1:
					Global_1235687.f_9208.f_3[i] = func_244();
					break;
			}
		}
	}

	return;
}

int func_103() // Position - 0x3408 Signature - 22 00 05 00 00 2F
{
	int num;
	int i;
	int randomIntInRange;

	for (i = 0; i < 2; i = i + 1)
	{
		num = num + func_245(i);
	}

	if (num == 0)
		return -1;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(1, num + 1);

	for (i = 0; i < 2; i = i + 1)
	{
		if (func_245(i) == 0)
		{
		}
		else
		{
			randomIntInRange = randomIntInRange - func_245(i);
		
			if (randomIntInRange <= 0)
				return i;
		}
	}

	return -1;
}

BOOL func_104(int iParam0) // Position - 0x3478 Signature - 22 01 03 00 00 66 00 3C 02 00 00 00 00 00 09 00 01 00 00 00 0D
{
	switch (iParam0)
	{
		case 0:
			return func_246();
	
		case 1:
			return func_247();
	}

	return false;
}

void func_105(int iParam0) // Position - 0x34A9 Signature - 22 01 07 00 00 66 00 3C
{
	int num;
	int num2;
	var statId;

	switch (iParam0)
	{
		case 0:
			func_239(joaat("CAMP_RAID"), 0, &num, &num2, false, -1082130432);
			func_233(num, num2, 0);
			func_248(1048576);
			func_248(524288);
			break;
	
		case 1:
			func_250(joaat("MOONSHINE_RAID"), 0, &num, &num2, func_249(Global_1297600[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_5.f_12), false, Global_1901671.f_171.f_42);
			func_233(num, num2, 0);
			break;
	}

	statId = { func_98(joaat("mp_fetch_last_started_business_raid_type")) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

BOOL func_106(int iParam0) // Position - 0x3543 Signature - 22 01 03 00 00 66 00 2F 7E 6A 8B 05
{
	return iParam0 >= 0 && iParam0 < 4;
}

int func_107(var uParam0, var uParam1) // Position - 0x3558 Signature - 22 02 05 00 00 5D 2C
{
	int i;

	if (Global_1205804.f_129 <= 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1205804.f_129; i = i + 1)
	{
		if (func_251(Global_1205804[i /*4*/].f_1, uParam0))
			return i;
	}

	return -1;
}

int func_108(var uParam0, var uParam1) // Position - 0x35A5 Signature - 22 02 05 00 00 11 4B 00 2D 39 09 12 00 05 8B 04 00 08 50 02 01 11
{
	int num;

	if (!func_36(uParam0))
		return -1;

	num = func_252(uParam0);

	if (num < 0)
		return 0;

	return Global_1072759.f_19487.f_1[num /*3*/].f_2;
}

int func_109(BOOL bParam0) // Position - 0x35E0 Signature - 22 01 03 00 00 37 7D
{
	if (!func_253(joaat("freemode"), bParam0))
		return 0;

	return 1;
}

void func_110(int iParam0, int iParam1) // Position - 0x35FC Signature - 22 02 04 00 00 66 00 39 FC 20 00 05 8B 03 00 50 02 00 66 00 66 01 39 EA 13 00 8B
{
	if (!func_63(iParam0))
		return;

	if (func_40(iParam0, iParam1))
		func_146(&(Global_1235687[iParam0 /*697*/].f_568), iParam1);

	return;
}

void func_111(int iParam0) // Position - 0x362E Signature - 22 01 03 00 00 66 00 5D E7 DA 12 40 B9 02 78 3B 02 37 DD 11 0A 96 72 03 00 50 01 00 66 00 37
{
	if (Global_1235687[iParam0 /*697*/].f_571 != joaat("bounty_board"))
		return;

	if (!func_40(iParam0, 268435456))
		return;

	if (func_40(iParam0, 536870912))
		return;

	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		return;

	func_181(607258092, 0, 0);
	return;
}

BOOL func_112(var uParam0, var uParam1) // Position - 0x368B Signature - 22 02 05 00 00 11 4B 00 2D 39 A5 35 00 67 04 66 04 1D
{
	int num;

	num = func_108(uParam0);
	return num == 3 || num == 4;
}

int func_113(int iParam0) // Position - 0x36AB Signature - 22 01 03 00 00 66 00 3C 05 00 12
{
	switch (iParam0)
	{
		case joaat("gun_for_hire"):
		case joaat("CAMP_RESUPPLY"):
		case joaat("CAMP_SETUP"):
		case joaat("dynamic"):
			return 6;
	
		case joaat("hideout"):
			return 5;
	}

	return 0;
}

void func_114(BOOL bParam0) // Position - 0x36E8 Signature - 22 01 04 00 00 5D 7C
{
	int num;

	if (Global_1900412.f_1 == 0 && !bParam0)
		return;

	num = 0;

	if (func_17() != -1)
		num = 1;

	if (Global_1900412.f_2 == 4 && Global_1900412.f_12 != Global_1900412.f_13 && !bParam0)
	{
		Global_1900412.f_1 = Global_1900412.f_2;
		Global_1900412.f_12 = Global_1900412.f_13;
		func_254(num, Global_1900412.f_12);
	}
	else
	{
		Global_1900412.f_1 = 0;
		Global_1900412.f_7 = num;
		Global_1900412.f_8 = func_255();
		Global_1900412.f_9 = func_256(Global_1893611.f_2);
		Global_1900412.f_11 = func_257(Global_1896646.f_41);
	
		if (Global_1900412.f_9 != -1 && Global_1900412.f_9 != 0)
			func_258(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
		else if (Global_1900412.f_11 != -1)
			func_258(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_11);
		else
			func_258(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
	}

	Global_1900412.f_2 = 0;
	return;
}

void func_115(int iParam0, int iParam1) // Position - 0x380A Signature - 22 02 04 00 00 66 00 39 FC 20 00 05 8B 03 00 50 02 00 66 00 66 01 6D FF 39 66 21 00 8B
{
	if (!func_63(iParam0))
		return;

	if (func_66(iParam0, iParam1, 255))
		func_146(&(Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_19), iParam1);

	return;
}

void func_116(var uParam0, var uParam1, BOOL bParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x3843 Signature - 22 06 09
{
	int num;

	if (!func_36(uParam0))
	{
		!bParam2;
		return;
	}

	if (!func_112(uParam0) && !func_51(uParam0))
	{
		!bParam2;
		return;
	}

	func_259(uParam0) == 0;

	if (iParam3 == 0 || iParam3 == 1 || iParam3 == 4)
		if (func_108(uParam0) == 3)
			func_260(true, -1706799532);
		else if (func_108(uParam0) == 4)
			func_260(false, -1706799532);

	if (func_108(uParam0) == 3 || func_108(uParam0) == 1 || bParam5 && func_108(uParam0) == 4 && STATS::STATSTRACKER_IS_INITIALIZED(func_259(uParam0)))
		if (iParam3 != -1)
			func_261(uParam0, iParam3, iParam4, 255, 0);
		else
			func_261(uParam0, 2, iParam4, 255, 0);

	func_262(uParam0, 0);

	if (func_251(func_263(0), uParam0))
	{
		func_264(true);
		func_265(false);
		func_266(false);
		func_267(1);
	}

	func_268(uParam0);
	Global_1051645.f_45.f_1 = 1;
	num = func_269(uParam0);

	if (num != 2 && num != 7)
		MISC::_0x1096603B519C905F("");

	return;
}

int func_117(var uParam0, var uParam1, var uParam2) // Position - 0x39AA Signature - 22 03 06 00 00 11 4B 00 2D 39 58
{
	int num;

	num = func_107(uParam0);

	if (func_107(uParam0) < 0)
		return 0;

	func_270(num, uParam2);
	return 1;
}

void func_118(int iParam0) // Position - 0x39D5 Signature - 22 01 03 00 00 5D F0 5E 12 78 A4 01 11 72 03 00 50 01 00 5D F0 5E 12 18 A4 01 27 01 2F 15
{
	if (Global_1203952.f_420 != 2)
		return;

	if (Global_1203952.f_420.f_1 == 0)
		return;

	Global_1203952.f_420.f_1 = 0;
	POSSE::_0xC684FF658B2E55DA(iParam0);
	return;
}

void func_119(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3A0B Signature - 22 03 09 00 00 2F
{
	int num;
	BOOL flag;
	BOOL flag2;
	int num2;

	num = func_235(false);

	if (num == 0)
		return;

	flag = func_271(bParam2);

	if (bParam2)
	{
		num2 = Global_1901671.f_171.f_18 / 1000;
		flag2 = true;
	}
	else if (flag)
	{
		num2 = func_272(num) / 1000;
	}
	else if (bParam1)
	{
		num2 = func_273(num) / 1000;
	}
	else
	{
		num2 = func_274(num) / 1000;
	}

	if (bParam0 || bParam2)
	{
		Global_1245174.f_9807.f_1 = Global_1295666.f_16 + num2;
		func_275(2, true);
	}
	else
	{
		Global_1245174.f_9807.f_1 = 0;
		func_276(2, true);
	}

	if (flag2 && Global_1245174.f_9807 > Global_1295666.f_16)
		Global_1245174.f_9807 = Global_1245174.f_9807 + num2;
	else
		Global_1245174.f_9807 = Global_1295666.f_16 + num2;

	return;
}

BOOL func_120(int iParam0) // Position - 0x3AEC Signature - 22 01 03 00 00 66 00 3C 02 00 B2
{
	switch (iParam0)
	{
		case joaat("MOONSHINE_RAID"):
		case joaat("CAMP_RAID"):
			return true;
	
		default:
		
	}

	return false;
}

void func_121(int iParam0, int iParam1, int iParam2) // Position - 0x3B0D Signature - 22 03 07 00 00 37
{
	var statId;

	statId = { func_98(joaat("mp_fetch_last_started_business_raid_global_cooldown")) };
	STATS::STAT_ID_SET_INT(&statId, 0, true);
	return;
}

BOOL func_122(int iParam0) // Position - 0x3B2B Signature - 22 01 03 00 00 66 00 5D E7 DA 12 40 B9 02 78 3B 02 37 91
{
	if (Global_1235687[iParam0 /*697*/].f_571 != joaat("CAMP_SELL"))
		return false;

	return func_277(Global_1225099[iParam0 /*28*/], Global_1225099[iParam0 /*28*/].f_6, Global_1225099[iParam0 /*28*/].f_19);
}

void func_123(BOOL bParam0) // Position - 0x3B6D Signature - 22 01 05 00 00 37 57
{
	var statId;

	statId = { func_278(1904831575) };
	STATS::STAT_ID_SET_BOOL(&statId, bParam0, true);
	return;
}

void func_124(int iParam0) // Position - 0x3B8C Signature - 22 01 05 00 00 37 0B
{
	var statId;

	statId = { func_98(2083253771) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

void func_125(int iParam0) // Position - 0x3BAB Signature - 22 01 03 00 00 66 00 39 5E
{
	if (func_279(iParam0))
		func_280(1);

	if (func_281(iParam0))
		func_280(2);

	if (func_282(iParam0))
		func_280(3);

	if (func_283(iParam0))
		func_280(4);

	return;
}

BOOL func_126(int iParam0) // Position - 0x3BEB Signature - 22 01 03 00 00 66 00 2F 35 6A 05 8B 06 00 66 00 6D 20 7E 30 8B 04 00 2F
{
	if (iParam0 < 0 || iParam0 >= 32)
		return false;

	return true;
}

void func_127(int iParam0) // Position - 0x3C0A Signature - 22 01 04 00 00 66 00 39 EB 3B 00 05 8B 03
{
	Player player;

	if (!func_126(iParam0))
		return;

	player = PLAYER::PLAYER_ID();
	Global_1144526[player /*83*/].f_70 = iParam0;
	Global_1144526[player /*83*/].f_70.f_2 = 0;
	return;
}

BOOL func_128(int iParam0, int iParam1) // Position - 0x3C3E Signature - 22 02 04 00 00 66 00 39 43
{
	return func_106(iParam0) && Global_1235687.f_9062[iParam0 /*4*/] == -1 || Global_1235687.f_9062[iParam0 /*4*/] == iParam1;
}

void func_129(int iParam0, int iParam1) // Position - 0x3C72 Signature - 22 02 04 00 00 66 00 5D 8B B1 12 63 1C 27 02 66
{
	if (Global_1225099[iParam0 /*28*/].f_2 != iParam1)
		Global_1225099[iParam0 /*28*/].f_2 = iParam1;

	return;
}

BOOL func_130(int iParam0) // Position - 0x3C95 Signature - 22 01 04 00 00 66 00 39 5D
{
	int num;

	num = func_284(iParam0);

	if (num != 0 && func_285(num))
		return false;

	if (iParam0 == joaat("INTRO_MISSION"))
		return func_286();

	return true;
}

void func_131(int iParam0) // Position - 0x3CCD Signature - 22 01 06 00 00 66 00 37 00 00 00 40
{
	var value;
	Player gangLeader;
	int i;

	if (!func_147(iParam0, 1073741824))
	{
		if (GANG::NETWORK_IS_GANG_ID_VALID(Global_1225099[iParam0 /*28*/].f_13))
		{
			if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1225099[iParam0 /*28*/].f_13) > 0)
			{
				gangLeader = GANG::NETWORK_GET_GANG_LEADER(Global_1225099[iParam0 /*28*/].f_13);
			
				if (Global_1225099[iParam0 /*28*/].f_15 != gangLeader)
					Global_1225099[iParam0 /*28*/].f_15 = gangLeader;
			}
		
			for (i = 0; i <= 31; i = i + 1)
			{
				gangLeader = PLAYER::INT_TO_PLAYERINDEX(i);
			
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
				{
					if (GANG::_NETWORK_IS_GANG_MEMBER(Global_1225099[iParam0 /*28*/].f_13, gangLeader))
					{
						SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, i);
					}
					else if (Global_1235687[iParam0 /*697*/].f_571 == joaat("BOUNTY_PLAYER") && Global_1225099[iParam0 /*28*/].f_16 == gangLeader)
					{
						Global_1225099[iParam0 /*28*/].f_13 = GANG::NETWORK_GET_GANG_ID(gangLeader);
						Global_1225099[iParam0 /*28*/].f_15 = gangLeader;
						SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&value);
						SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, i);
					}
				}
			}
		}
		else if (Global_1235687[iParam0 /*697*/].f_571 == joaat("BOUNTY_PLAYER") && func_287(Global_1225099[iParam0 /*28*/].f_16, false, true))
		{
			Global_1225099[iParam0 /*28*/].f_13 = GANG::NETWORK_GET_GANG_ID(Global_1225099[iParam0 /*28*/].f_16);
			Global_1225099[iParam0 /*28*/].f_15 = Global_1225099[iParam0 /*28*/].f_16;
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, Global_1225099[iParam0 /*28*/].f_16);
		}
	}

	Global_1225099[iParam0 /*28*/].f_14 = value;
	return;
}

void func_132(int iParam0) // Position - 0x3E3A Signature - 22 01 05 00 00 66 00 39 8F
{
	int num;
	int num2;

	num = func_288(iParam0);
	num2 = Global_1225099[iParam0 /*28*/].f_1;

	if (num2 != num)
	{
		if (num2 != -1)
			Global_1225099.f_365[num2] = Global_1225099.f_365[num2] - 1;
	
		if (num != -1)
			Global_1225099.f_365[num] = Global_1225099.f_365[num] + 1;
	
		Global_1225099[iParam0 /*28*/].f_1 = num;
	}

	return;
}

void func_133(int iParam0) // Position - 0x3EA5 Signature - 22 01 03 00 00 66 00 09 39 EA
{
	if (func_40(iParam0, 1))
		func_129(iParam0, 2);

	return;
}

void func_134(int iParam0) // Position - 0x3EBE Signature - 22 01 05 00 00 66 00 4B 04
{
	BOOL flag;
	BOOL flag2;

	if (func_289(iParam0, &flag2))
		flag = true;

	if (!func_290(Global_1225099[iParam0 /*28*/].f_10))
		func_174(&(Global_1225099[iParam0 /*28*/].f_10));
	else if (func_175(Global_1225099[iParam0 /*28*/].f_10) > 45000 && !flag)
		flag2 = true;

	if (flag2)
	{
		if (func_291(Global_1235687[iParam0 /*697*/].f_571, 0) && !func_147(iParam0, 524288))
			func_292(Global_1225099[iParam0 /*28*/].f_13, Global_1235687[iParam0 /*697*/].f_598, func_40(iParam0, 67108864));
	
		func_293(&(Global_1225099[iParam0 /*28*/].f_10));
		func_129(iParam0, 3);
	}
	else if (flag)
	{
		func_293(&(Global_1225099[iParam0 /*28*/].f_10));
		func_129(iParam0, 2);
	}

	return;
}

void func_135(int iParam0) // Position - 0x3F9B Signature - 22 01 03 00 00 66 00 6D 20
{
	if (!func_147(iParam0, 32) && func_294(iParam0, 32, false))
	{
		func_295(iParam0);
		func_296(iParam0, 32);
	}
	else if (!func_147(iParam0, 16) && func_294(iParam0, 16, false))
	{
		func_295(iParam0);
		func_296(iParam0, 16);
	}

	if (!func_147(iParam0, 4096) && func_294(iParam0, 4096, false))
		func_296(iParam0, 4096);

	if (func_297(iParam0))
		func_129(iParam0, 3);

	return;
}

void func_136(int iParam0) // Position - 0x402D Signature - 22 01 03 00 00 5D E4 F0 10 78
{
	if (func_64(Global_1110244.f_4648, 1))
	{
		func_146(&(Global_1110244.f_4648), 1);
		func_298(Global_1110244.f_4634.f_1, Global_1110244.f_4634, Global_1110244.f_4647, Global_1110244.f_4634.f_3, Global_1110244.f_4634.f_5, Global_1110244.f_4634.f_9, 0);
	}

	if (func_299(iParam0))
		func_300(iParam0);

	return;
}

char* func_137() // Position - 0x409A Signature - 22 00 02 00 00 6D 6C
{
	return "net_fetch_hideout_leader";
}

void func_138(int iParam0) // Position - 0x40A5 Signature - 22 01 05 00 00 4B 03 6A 08 3D 41 41
{
	var unk;

	unk = -1;
	Global_1225099.f_369[iParam0 /*2*/] = { unk };
	return;
}

int func_139(var uParam0) // Position - 0x40C5 Signature - 22 01 03 00 00 66 00 76 50 01 01 22 02
{
	return *uParam0;
}

struct<40> func_140(var uParam0, int iParam1) // Position - 0x40D0 Signature - 22 02 2C
{
	var unk;

	unk = { func_301(uParam0, iParam1) };
	func_302(uParam0, iParam1);
	return unk;
}

BOOL func_141(var uParam0, var uParam1) // Position - 0x40F2 Signature - 22 02 04 00 00 66 00 27 02 08
{
	if (uParam0->f_2 == -1)
		return false;

	if (uParam1->f_2 == -1)
		return false;

	if (uParam0->f_2 != uParam1->f_2)
		return false;

	if (uParam0->f_3 != uParam1->f_3)
		return false;

	if (uParam0->f_4 != -1 && uParam1->f_1 != -1)
	{
		if (uParam0->f_1 == uParam1->f_1 && uParam0->f_4 == uParam1->f_4)
			return true;
	
		return false;
	}

	if (uParam0->f_5 == -1)
		return false;

	if (uParam1->f_5 == -1)
		return false;

	if (uParam0->f_5 != uParam1->f_5)
		return false;

	if (uParam0->f_7 != uParam1->f_7)
		return false;

	if (uParam0->f_8 != uParam1->f_8)
		return false;

	if (uParam0->f_8.f_1 != uParam1->f_8.f_1)
		return false;

	if (!func_251(uParam0->f_8.f_5, uParam1->f_8.f_5))
		return false;

	if (uParam0->f_8.f_5.f_2 != uParam1->f_8.f_5.f_2)
		return false;

	if (uParam0->f_8.f_5.f_3 != uParam1->f_8.f_5.f_3)
		return false;

	if (uParam0->f_8.f_5.f_4 != uParam1->f_8.f_5.f_4)
		return false;

	if (uParam0->f_8.f_5.f_5 != uParam1->f_8.f_5.f_5)
		return false;

	if (!func_251(uParam0->f_8.f_5.f_6, uParam1->f_8.f_5.f_6))
		return false;

	if (uParam0->f_8.f_5.f_8 != uParam1->f_8.f_5.f_8)
		return false;

	if (uParam0->f_8.f_5.f_9 != uParam1->f_8.f_5.f_9)
		return false;

	return true;
}

void func_142(var uParam0, int iParam1) // Position - 0x4285 Signature - 22 02 04 00 00 66 01 66 00 32
{
	*uParam0 = iParam1;
	return;
}

int func_143(var uParam0) // Position - 0x4292 Signature - 22 01 03 00 00 66 00 76 50 01 01 22 01
{
	return *uParam0;
}

int func_144(int iParam0) // Position - 0x429D Signature - 22 01 03 00 00 66 00 3C 01
{
	switch (iParam0)
	{
		case 2:
			return 10;
	
		default:
		
	}

	return 1;
}

void func_145(BOOL bParam0, int iParam1) // Position - 0x42B9 Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 02 04 00 00 66 00 76
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

void func_146(BOOL bParam0, int iParam1) // Position - 0x42CA Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 02 04 00 00 66 00 39
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

BOOL func_147(int iParam0, int iParam1) // Position - 0x42DF Signature - 22 02 04 00 00 66 00 39 FC 20 00 6A 8B 11
{
	return func_63(iParam0) && func_64(Global_1225099[iParam0 /*28*/].f_3, iParam1);
}

BOOL func_148() // Position - 0x4302 Signature - 22 00 02 00 00 39 5C
{
	return func_303() != 0 || func_304(1);
}

BOOL func_149() // Position - 0x431B Signature - 22 00 02 00 00 39 80
{
	return func_305() != 0;
}

void func_150(int iParam0, int iParam1) // Position - 0x4329 Signature - 22 02 04 00 00 66 00 39 FC 20 00 05 8B 03 00 50 02 00 66 00 66 01 39 EA 13 00 05
{
	if (!func_63(iParam0))
		return;

	if (!func_40(iParam0, iParam1))
		func_145(&(Global_1235687[iParam0 /*697*/].f_568), iParam1);

	return;
}

int func_151(int iParam0) // Position - 0x435C Signature - 22 01 03 00 00 39 1B
{
	if (func_149())
		return 0;

	if (!func_148())
		return 0;

	if (func_306())
		func_307(2);
	else
		func_307(1);

	func_308(iParam0);
	return 1;
}

void func_152(int iParam0, int iParam1) // Position - 0x4396 Signature - 22 02 06 00 00 66 00 08
{
	BOOL flag;
	int num;

	if (iParam0 == -1)
		return;

	if (!func_309(iParam0, 1))
		return;

	flag = func_310();
	func_311(iParam0);

	if (iParam1 == -1)
	{
		num = Global_1207480.f_231.f_1066[iParam0 /*17*/].f_7;
	
		if (num > 1)
			num = 1;
	
		for (iParam1 = 0; iParam1 < num; iParam1 = iParam1 + 1)
		{
			func_312(iParam0, iParam1, flag);
		}
	}
	else
	{
		func_312(iParam0, iParam1, flag);
	}

	if (flag)
		func_313(iParam0);

	return;
}

void func_153(int iParam0) // Position - 0x4416 Signature - 22 01 07 00 00 2F 67 05
{
	BOOL flag;
	BOOL flag2;
	int i;
	Player player;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player) && Global_1225687[i /*303*/][iParam0 /*23*/].f_22 == Global_1225099[iParam0 /*28*/].f_9)
		{
			flag = flag || Global_1225687[i /*303*/][iParam0 /*23*/].f_19;
		
			if (GANG::NETWORK_GET_GANG_ID(player) == GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))
				flag2 = flag2 || Global_1225687[i /*303*/][iParam0 /*23*/].f_19;
		}
	}

	Global_1235687[iParam0 /*697*/].f_569 = flag;
	Global_1235687[iParam0 /*697*/].f_570 = flag2;
	return;
}

void func_154(int iParam0) // Position - 0x44B6 Signature - 22 01 06 00 00 66 00 5D E7 DA 12 40 B9 02 78 37
{
	int num;
	int num2;
	int num3;

	if (Global_1235687[iParam0 /*697*/].f_567 < 0 || Global_1235687[iParam0 /*697*/].f_567 >= 3)
		return;

	if (func_66(iParam0, 8388608, 255))
		return;

	if (func_315(func_314(Global_1225099[iParam0 /*28*/])) && Global_1235687[iParam0 /*697*/].f_567 < 2)
		return;

	num = func_316(iParam0);
	func_317(iParam0, num);

	switch (num)
	{
		case 1:
			func_319(iParam0);
			break;
	
		case 2:
			num2 = Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_21;
		
			if (num2 != -1)
				num3 = Global_1235687[iParam0 /*697*/].f_611;
		
			func_318(iParam0, num3);
			break;
	
		case 3:
			if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
				if (func_51(Global_1235687[iParam0 /*697*/].f_598) || func_112(Global_1235687[iParam0 /*697*/].f_598))
					func_52(iParam0);
			else
				func_318(iParam0, num3);
			break;
	
		case 17:
			break;
	
		default:
			if (func_51(Global_1235687[iParam0 /*697*/].f_598) || func_112(Global_1235687[iParam0 /*697*/].f_598))
				func_52(iParam0);
			break;
	}

	return;
}

void func_155(int iParam0) // Position - 0x4611 Signature - 22 01 03 00 00 03 01 01 13 03
{
	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		return;

	if (func_294(iParam0, 8388608, false))
		return;

	if (func_147(iParam0, 131072))
	{
		func_320(iParam0, 134217728);
		return;
	}

	if (func_294(iParam0, 67108864, true) && !func_294(iParam0, 2, true) && !func_294(iParam0, 134217728, true))
	{
		func_321(joaat("PERSONA_HONOR_ACTION__IGNORE_MISSION"), false, true);
		func_320(iParam0, 134217728);
	}

	return;
}

void func_156(int iParam0) // Position - 0x4699 Signature - 22 01 0E
{
	int i;
	Hash groupHash;
	Hash hash;
	var name;

	if (Global_1225099[iParam0 /*28*/].f_2 == 3 || Global_1235687[iParam0 /*697*/].f_567 == 3)
		return;

	if (Global_1225099[iParam0 /*28*/].f_12 != 0 && Global_1225099[iParam0 /*28*/].f_12 != Global_1235687[iParam0 /*697*/].f_605)
		Global_1235687[iParam0 /*697*/].f_605 = Global_1225099[iParam0 /*28*/].f_12;

	if (Global_1235687[iParam0 /*697*/].f_605 == Global_1235687[iParam0 /*697*/].f_606)
		return;

	Global_1235687[iParam0 /*697*/].f_606 = Global_1235687[iParam0 /*697*/].f_605;

	for (i = 0; i <= 24; i = i + 1)
	{
		if (!MISC::IS_BIT_SET(Global_1235687[iParam0 /*697*/].f_605, i))
		{
		}
		else
		{
			groupHash = hash;
			name = { func_322(iParam0, i) };
		
			if (PED::ADD_RELATIONSHIP_GROUP(&name, &groupHash))
			{
				func_323(iParam0, i, groupHash);
				func_324(iParam0, i, groupHash);
			}
		}
	}

	return;
}

BOOL func_157(int iParam0, BOOL bParam1) // Position - 0x479D Signature - 22 02 05 00 00 66 01 05
{
	int num;

	if (!bParam1)
		return true;

	num = Global_1225099[iParam0 /*28*/].f_2;

	if (num == 3 || num == -1)
		return true;

	if (Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_22 != -1 && Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_22 != Global_1225099[iParam0 /*28*/].f_9)
		return true;

	return false;
}

void func_158(int iParam0, int iParam1) // Position - 0x480C Signature - 22 02 04 00 00 66 00 5D E7 DA 12 40
{
	if (Global_1235687[iParam0 /*697*/].f_567 != iParam1)
		Global_1235687[iParam0 /*697*/].f_567 = iParam1;

	return;
}

BOOL func_159(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4833 Signature - 22 03 05 00 00 66 00 6D
{
	if (func_147(iParam0, 64))
		return false;

	return bParam1 && !bParam2;
}

void func_160(int iParam0) // Position - 0x4854 Signature - 22 01 0A 00 00 66 00 09
{
	int num;
	int num2;
	int num3;
	int i;
	int num4;
	int num5;
	int j;

	if (!func_40(iParam0, 1))
	{
		num = Global_1225099[iParam0 /*28*/];
		num2 = func_169(num);
		num3 = Global_1225099[iParam0 /*28*/].f_6;
		Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_22 = Global_1225099[iParam0 /*28*/].f_9;
		Global_1235687[iParam0 /*697*/].f_602 = func_325(num2, num3);
		Global_1235687[iParam0 /*697*/].f_603 = func_230(num2, num3);
		Global_1235687[iParam0 /*697*/].f_571 = func_314(num);
		Global_1235687[iParam0 /*697*/].f_598 = { func_326(iParam0) };
		Global_1235687[iParam0 /*697*/].f_612 = func_327(num, num3);
		Global_1235687[iParam0 /*697*/].f_613 = func_328(num, num3);
		Global_1235687[iParam0 /*697*/].f_609 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
		num4 = func_329(num2, num3);
	
		for (i = 0; i <= num4 - 1; i = i + 1)
		{
			Global_1235687[iParam0 /*697*/].f_554[i /*3*/] = func_330(num2, num3, i);
			Global_1235687[iParam0 /*697*/].f_554[i /*3*/].f_1 = func_331(num2, num3, i);
			Global_1235687[iParam0 /*697*/].f_554[i /*3*/].f_2 = func_332(num2, num3, i);
		}
	
		if (Global_1235687[iParam0 /*697*/].f_571 == joaat("CAMP_RAID"))
			Global_1235687[iParam0 /*697*/].f_614 = { Global_1225099[iParam0 /*28*/].f_19 };
		else
			Global_1235687[iParam0 /*697*/].f_614 = { func_333(num, num3) };
	
		if (Global_1225099[iParam0 /*28*/].f_22 != 0)
			func_334(&(Global_1225099[iParam0 /*28*/].f_22), &(Global_1235687[iParam0 /*697*/].f_657), 0);
	
		num5 = func_335(num, num3);
	
		if (num5 > 0)
		{
			for (j = 0; j <= num5 - 1; j = j + 1)
			{
				Global_1235687[iParam0 /*697*/].f_617[j /*3*/] = { func_336(num2, num3, j) };
			}
		}
	
		if (func_337(num2, num3))
			func_150(iParam0, 4096);
	
		if (func_338(num2, num3))
			func_150(iParam0, 8192);
	
		if (func_339(num2, num3))
			func_150(iParam0, 16384);
	
		if (func_340(num2, num3) && PLAYER::PLAYER_ID() != Global_1225099[iParam0 /*28*/].f_16)
			func_150(iParam0, 32768);
	
		if (func_341(num2, num3))
			func_150(iParam0, 131072);
	
		if (func_342(num2, num3))
			func_150(iParam0, 262144);
	
		if (func_343(num2, num3))
			func_150(iParam0, 67108864);
	
		func_150(iParam0, 1);
	}

	if (Global_1225099[iParam0 /*28*/].f_2 == 3)
		func_158(iParam0, 3);
	else if (Global_1225099[iParam0 /*28*/].f_2 > 0 && Global_1225099[iParam0 /*28*/].f_2 <= 1)
		func_158(iParam0, 1);
	else if (Global_1225099[iParam0 /*28*/].f_2 >= 2)
		func_158(iParam0, 2);

	return;
}

void func_161(int iParam0) // Position - 0x4B50 Signature - 22 01 03 00 00 66 00 5D E7 DA 12 40 B9 02 78 3B 02 39
{
	if (!func_315(Global_1235687[iParam0 /*697*/].f_571))
	{
		func_344(iParam0);
		func_345(iParam0);
	}

	if (Global_1225099[iParam0 /*28*/].f_2 != 1)
		func_158(iParam0, Global_1225099[iParam0 /*28*/].f_2);

	return;
}

void func_162(int iParam0) // Position - 0x4B96 Signature - 22 01 03 00 00 66 00 21
{
	if (!func_40(iParam0, 131072) && func_147(iParam0, 4096) || func_147(iParam0, 16))
		func_346(Global_1235687[iParam0 /*697*/].f_598);

	func_344(iParam0);
	func_345(iParam0);
	func_347(iParam0);
	return;
}

void func_163(int iParam0) // Position - 0x4BEC Signature - 22 01 03 00 00 66 00 39 AB
{
	if (func_348(iParam0))
		func_34(iParam0);

	return;
}

void func_164() // Position - 0x4C03 Signature - 22 00 02 00 00 09 39 C3
{
	func_349(1);
	return;
}

void func_165(int iParam0, int iParam1) // Position - 0x4C10 Signature - 22 02 04 00 00 66 01 66 00 5D E7
{
	switch (Global_1235687[iParam0 /*697*/].f_554[iParam1 /*3*/].f_1)
	{
		case -476186606:
			if (!func_40(iParam0, 16))
				return;
		
			[[fallthrough]];
	
		case joaat("COWER_ON_AGGRO"):
			if (func_147(iParam0, 1))
			{
				switch (Global_1235687[iParam0 /*697*/].f_554[iParam1 /*3*/])
				{
					case joaat("SHOP"):
						func_351(func_350(Global_1235687[iParam0 /*697*/].f_554[iParam1 /*3*/].f_2), 2, 50f);
						break;
				
					case joaat("SHOP_TYPE"):
						func_353(func_352(Global_1235687[iParam0 /*697*/].f_554[iParam1 /*3*/].f_2), 2, 50f);
						break;
				
					case joaat("Minigame"):
						break;
				}
			}
			break;
	
		case joaat("Disable"):
			switch (Global_1235687[iParam0 /*697*/].f_554[iParam1 /*3*/])
			{
				case joaat("SHOP"):
					func_351(func_350(Global_1235687[iParam0 /*697*/].f_554[iParam1 /*3*/].f_2), 1, 50f);
					break;
			
				case joaat("SHOP_TYPE"):
					func_353(func_352(Global_1235687[iParam0 /*697*/].f_554[iParam1 /*3*/].f_2), 1, 50f);
					break;
			
				case joaat("Minigame"):
					func_355(func_354(Global_1235687[iParam0 /*697*/].f_554[iParam1 /*3*/].f_2));
					break;
			}
			break;
	}

	return;
}

void func_166() // Position - 0x4D5D Signature - 22 00 02 00 00 03 01 00 46
{
	Global_1149432.f_5568.f_22 = MISC::GET_FRAME_COUNT();
	return;
}

Player func_167() // Position - 0x4D72 Signature - 22 00 02 00 00 5D E5
{
	return Global_1108965.f_34.f_612;
}

void func_168(Player plParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4D83 Signature - 22 05 08 00 00 66 03
{
	Player player;

	if (bParam3)
	{
		if (!func_36(uParam1))
			return;
	
		if (func_356(uParam1, true))
			return;
	
		if (func_357(uParam1))
			return;
	}

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return;

	player = plParam0;
	func_358(player);

	if (Global_1108965.f_34.f_353[player /*6*/] && Global_1108965.f_34.f_353[player /*6*/].f_5 == -1)
		return;

	if (!func_112(uParam1) || !bParam3)
	{
		Global_1108965.f_34.f_353[player /*6*/] = true;
		Global_1108965.f_34.f_353[player /*6*/].f_1 = plParam0;
		Global_1108965.f_34.f_353[player /*6*/].f_5 = 5;
		Global_1108965.f_34.f_353[player /*6*/].f_4 = Global_1295666.f_16;
	
		if (bParam4)
			Global_1287273[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/].f_66 = 1;
	
		if (bParam3)
			Global_1108965.f_34.f_353[player /*6*/].f_2 = { uParam1 };
	
		Global_1108965.f_34.f_546[player /*2*/] = { func_177(plParam0) };
	}
	else
	{
		Global_1108965.f_34.f_353[player /*6*/] = true;
		Global_1108965.f_34.f_353[player /*6*/].f_1 = plParam0;
		Global_1108965.f_34.f_353[player /*6*/].f_2 = { uParam1 };
		Global_1108965.f_34.f_353[player /*6*/].f_5 = -1;
		Global_1108965.f_34.f_353[player /*6*/].f_4 = Global_1295666.f_16;
		Global_1108965.f_34.f_546[player /*2*/] = { func_177(plParam0) };
	
		if (bParam4)
			Global_1287273[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/].f_66 = 1;
	}

	if (Global_1108965.f_34[player /*11*/].f_6)
		func_359(player);

	return;
}

int func_169(int iParam0) // Position - 0x4F3B Signature - 22 01 03 00 00 66 00 08 15 04 00 2F 50 01 01 66 00 5D F6 FF 12 17
{
	if (iParam0 == -1)
		return 0;

	return Global_1245174[iParam0 /*5*/];
}

int func_170(int iParam0, int iParam1) // Position - 0x4F55 Signature - 22 02 0A 00 00 2F 67 04 4B 05 66 00 39 04 B2 00 6A 8B 09 00 4B 05 66 01 39 3B B2 00 69 8B 11 00 62 4B 05 2D 37 15
{
	int num;
	var unk;

	num = 0;

	if (func_360(&unk, iParam0) && func_361(&unk, iParam1))
		func_362(unk, -2045057259, &num, false);

	return num;
}

void func_171(int iParam0) // Position - 0x4F8B Signature - 22 01 03 00 00 5D E7 DA 12 78 7D 23 66 00 30
{
	Global_1235687.f_9085 = Global_1235687.f_9085 || iParam0;
	return;
}

Vector3 func_172(int iParam0) // Position - 0x4FA4 Signature - 22 01 03 00 00 1D 66 00 5D E7
{
	return Global_1235687[iParam0 /*697*/].f_614;
}

float func_173(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x4FBA Signature - 22 06 08
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_174(int iParam0) // Position - 0x4FD8 Signature - 22 01 03 00 00 5D 32 C5 13 27 10 66 00 32 50 01 00 22 01 03 00 00 5D
{
	*iParam0 = Global_1295666.f_16;
	return;
}

int func_175(int iParam0) // Position - 0x4FE9 Signature - 22 01 03 00 00 5D 32 C5 13 27 10 66 00 10 7F
{
	return (Global_1295666.f_16 - iParam0) * 1000;
}

BOOL func_176(int iParam0) // Position - 0x4FFD Signature - 22 01 03 00 00 66 00 6D FF 15 09 00 5D DD D3 10 27 10
{
	if (iParam0 == 255)
		return Global_1102813.f_16;

	if (iParam0 < 0 || iParam0 >= 32)
		return false;

	return Global_1101558[iParam0 /*38*/].f_16;
}

struct<2> func_177(Player plParam0) // Position - 0x5035 Signature - 22 01 05 00 00 66 00 4B 03 03
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

BOOL func_178(int iParam0) // Position - 0x5049 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 39
{
	if (iParam0 < 0)
		return false;

	if (func_17() == 0)
		return func_363(iParam0);

	return iParam0 <= func_180();
}

int func_179(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x5076 Signature - 22 06 18 00 00 4B
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

int func_180() // Position - 0x50B1 Signature - 22 00 02 00 00 39 71 05 00 2F 15
{
	if (func_17() == 0)
		return MONEY::_NETWORK_GET_CASH_BALANCE();

	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_181(int iParam0, int iParam1, int iParam2) // Position - 0x50CC Signature - 22 03 05 00 00 66 00 66 01 66 02 39 AF
{
	return func_364(iParam0, iParam1, iParam2);
}

BOOL func_182(int iParam0, int iParam1) // Position - 0x50DE Signature - 22 02 04 00 00 66 00 5D E7 DA 12 18 7D 23 80 10 63 08 27 05 66 01 69
{
	return Global_1235687.f_9085.f_16[iParam0 /*8*/].f_5 && iParam1 != false;
}

void func_183(int iParam0, int iParam1) // Position - 0x50FA Signature - 22 02 04 00 00 66 00 5D E7 DA 12 18 7D 23 80 10 63 08 27 05 66 01 30
{
	Global_1235687.f_9085.f_16[iParam0 /*8*/].f_5 = Global_1235687.f_9085.f_16[iParam0 /*8*/].f_5 || iParam1;
	return;
}

BOOL func_184(int iParam0, int iParam1) // Position - 0x5123 Signature - 22 02 08 00 00 66 00 6D FF
{
	int i;
	int num;
	Player player;
	int num2;

	if (func_88(iParam0, 255))
	{
		if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
			return 1;
	
		num = 1;
		num2 = func_365();
	
		for (i = 0; i < num2; i = i + 1)
		{
			player = func_366(i);
		
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
			{
			}
			else if (!func_88(iParam1, player))
			{
				num = 0;
			}
		}
	
		return num;
	}

	return 0;
}

BOOL func_185(int iParam0, int iParam1) // Position - 0x518C Signature - 22 02 05 00 00 66 00 6D
{
	Player player;

	if (func_88(iParam0, 255))
	{
		player = func_367();
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
			return true;
	
		return !func_88(iParam1, player);
	}

	return false;
}

void func_186(int iParam0, int iParam1) // Position - 0x51C0 Signature - 22 02 04 00 00 66 00 5D E7 DA 12 18 7D 23 80 10 63 08 27 05 66 00
{
	Global_1235687.f_9085.f_16[iParam0 /*8*/].f_5 = Global_1235687.f_9085.f_16[iParam0 /*8*/].f_5 - Global_1235687.f_9085.f_16[iParam0 /*8*/].f_5 && iParam1;
	return;
}

BOOL func_187(int iParam0) // Position - 0x51F9 Signature - 22 01 03 00 00 66 00 09 39 DE
{
	if (func_182(iParam0, 1))
	{
		if (func_182(iParam0, 32))
			return true;
	
		if (func_182(iParam0, 2))
		{
			if (func_182(iParam0, 128))
				func_186(iParam0, 128);
			else
				func_183(iParam0, 8);
		}
		else if (func_182(iParam0, 4))
		{
			if (!func_227(iParam0))
			{
				func_186(iParam0, 4);
				func_186(iParam0, 1);
				Global_1235687.f_9085.f_16[iParam0 /*8*/].f_7 = 0;
				return false;
			}
			else if (func_182(iParam0, 128))
			{
				func_186(iParam0, 128);
			}
			else
			{
				func_183(iParam0, 8);
			}
		}
	
		return true;
	}

	return false;
}

BOOL func_188(int iParam0) // Position - 0x52A1 Signature - 22 01 03 00 00 37 36 44 1A 56 03 05 00 BD 05
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(1444561974))
		func_368(741331401, 0, 255, 0, false);

	return BOUNTY::_BOUNTY_REQUEST_BECOME_TARGET_OF_CHARACTER_BOUNTY_HUNT(&(Global_1235687.f_9085.f_16[iParam0 /*8*/].f_1));
}

BOOL func_189(int iParam0) // Position - 0x52D8 Signature - 22 01 05 00 00 5D E7
{
	var unk;
	var playerBits;

	SCRIPTS::_0xE4ABE20DCE7C7CFE(&(Global_1235687.f_9085.f_118), &(Global_1235687.f_9085.f_119), &unk);
	SCRIPTS::_0x64F765D9A1F8F02C(&unk, &(Global_1235687.f_9085.f_118), &playerBits);

	if (SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&playerBits))
	{
		if (BOUNTY::_0x27D3A0E1FE090A43(&playerBits))
		{
			SCRIPTS::_0xFFDDF802279BE128(&playerBits, &unk, &(Global_1235687.f_9085.f_119));
			func_183(iParam0, 8);
			return 1;
		}
	}
	else
	{
		func_183(iParam0, 8);
		return 1;
	}

	return 0;
}

BOOL func_190(int iParam0) // Position - 0x5348 Signature - 22 01 03 00 00 37 36 44 1A 56 03 05 00 BD 8B 0F 00 37 3A DE 6F 4B 2F 6D FF 2F 2F 39 CE B3 00 41 66
{
	if (UNLOCK::UNLOCK_IS_UNLOCKED(1444561974))
		func_368(1265622586, 0, 255, 0, false);

	return BOUNTY::_BOUNTY_REQUEST_SELF_REPORT_KILLED_BY_BOUNTY_HUNTER(&(Global_1235687.f_9085.f_16[iParam0 /*8*/].f_1));
}

BOOL func_191(int iParam0) // Position - 0x537E Signature - 22 01 03 00 00 37 36 44 1A 56 03 05 00 BD 8B 0F 00 37 3A DE 6F 4B 2F 6D FF 2F 2F 39 CE B3 00 41 5D
{
	if (UNLOCK::UNLOCK_IS_UNLOCKED(1444561974))
		func_368(1265622586, 0, 255, 0, false);

	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Global_1235687.f_9085.f_119));
	func_183(iParam0, 8);
	return 1;
}

BOOL func_192(int iParam0) // Position - 0x53B7 Signature - 22 01 03 00 00 66 00 5D E7 DA 12 18 7D 23 80 10 63 08 80 01 03 05 00 E1
{
	return BOUNTY::_BOUNTY_REQUEST_POSSE_LEADER_ESCAPED_CHARACTER_BOUNTY_HUNT(&(Global_1235687.f_9085.f_16[iParam0 /*8*/].f_1));
}

BOOL func_193(int iParam0) // Position - 0x53D2 Signature - 22 01 04 00 00 39 BF B3 00 67 03 66 03 03 05 00 D5 05 8B 0C 00 66 00 6D 08 39 FA 50 00 2F 50 01 01 6D 08
{
	Player player;

	player = func_367();

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
	{
		func_183(iParam0, 8);
		return false;
	}

	if (!func_88(8, player))
		return false;

	return BOUNTY::_BOUNTY_REQUEST_POSSE_MEMBER_ESCAPED_CHARACTER_BOUNTY_HUNT(&(Global_1235687.f_9085.f_16[iParam0 /*8*/].f_1));
}

BOOL func_194(int iParam0) // Position - 0x5419 Signature - 22 01 03 00 00 66 00 5D E7 DA 12 18 7D 23 80 10 63 08 80 01 03 05 00 78
{
	return BOUNTY::_BOUNTY_REQUEST_ESCAPED_CHARACTER_BOUNTY_HUNT(&(Global_1235687.f_9085.f_16[iParam0 /*8*/].f_1));
}

BOOL func_195(int iParam0, int iParam1) // Position - 0x5434 Signature - 22 02 04 00 00 66 00 5D E7 DA 12 18 7D 23 80 10 63 08 80 01 66 01 5D E7 DA 12 18 7D 23 80 68 03 0D 00 EE
{
	return BOUNTY::_BOUNTY_REQUEST_POSSE_LEADER_CLAIM_CHARACTER_BOUNTY(&(Global_1235687.f_9085.f_16[iParam0 /*8*/].f_1), iParam1, &(Global_1235687.f_9085.f_104));
}

BOOL func_196(int iParam0) // Position - 0x545A Signature - 22 01 04 00 00 39 BF B3 00 67 03 66 03 03 05 00 D5 05 8B 0C 00 66 00 6D 08 39 FA 50 00 2F 50 01 01 6D 20
{
	Player player;

	player = func_367();

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
	{
		func_183(iParam0, 8);
		return false;
	}

	if (!func_88(32, player))
		return false;

	return BOUNTY::_BOUNTY_REQUEST_POSSE_MEMBER_CLAIM_CHARACTER_BOUNTY_SHARE(&(Global_1235687.f_9085.f_16[iParam0 /*8*/].f_1), &(Global_1235687.f_9085.f_104));
}

BOOL func_197(int iParam0, int iParam1) // Position - 0x54AA Signature - 22 02 04 00 00 66 00 5D E7 DA 12 18 7D 23 80 10 63 08 80 01 66 01 5D E7 DA 12 18 7D 23 80 68 03 0D 00 4A
{
	return BOUNTY::_BOUNTY_REQUEST_CLAIM_CHARACTER_BOUNTY(&(Global_1235687.f_9085.f_16[iParam0 /*8*/].f_1), iParam1, &(Global_1235687.f_9085.f_104));
}

BOOL func_198(int iParam0) // Position - 0x54D0 Signature - 22 01 03 00 00 03 00 01
{
	BOUNTY::_BOUNTY_CLEAR_BEING_BOUNTY_HUNTER();
	func_183(iParam0, 8);
	return 1;
}

BOOL func_199(int iParam0) // Position - 0x54E5 Signature - 22 01 03 00 00 03 00 00
{
	BOUNTY::_BOUNTY_CLEAR_BEING_TARGET();
	func_183(iParam0, 8);
	return 1;
}

BOOL func_200(int iParam0, int iParam1) // Position - 0x54FA Signature - 22 02 04 00 00 66 00 5D E7 DA 12 18 7D 23 80 10 63 08 80 01 66 01 03
{
	return BOUNTY::_BOUNTY_REQUEST_BRIBE_JAIL_GUARD(&(Global_1235687.f_9085.f_16[iParam0 /*8*/].f_1), iParam1);
}

BOOL func_201(int iParam0) // Position - 0x5517 Signature - 22 01 03 00 00 66 00 5D E7 DA 12 18 7D 23 80 10 63 08 80 01 03 05 00 85
{
	return BOUNTY::_BOUNTY_REQUEST_SERVED_FULL_JAIL_SENTENCE(&(Global_1235687.f_9085.f_16[iParam0 /*8*/].f_1));
}

BOOL func_202(int iParam0) // Position - 0x5532 Signature - 22 01 03 00 00 66 00 6D 08 39 FA 50 00 66
{
	func_183(iParam0, 8);
	return BOUNTY::_BOUNTY_REQUEST_BEGIN_WANTED_POSTER(&(Global_1235687.f_9085.f_16[iParam0 /*8*/].f_1), &(Global_1235687.f_9085.f_101));
}

BOOL func_203(int iParam0) // Position - 0x555E Signature - 22 01 04 00 00 66 00 5D E7 DA 12 18
{
	int num;

	num = Global_1235687.f_9085.f_16[iParam0 /*8*/].f_6;
	func_183(iParam0, 8);

	if (func_369(num))
		return BOUNTY::_0x81847C2134039BDC(&(Global_1225099[num /*28*/].f_14));

	return false;
}

BOOL func_204(int iParam0) // Position - 0x559A Signature - 22 01 04 00 00 03 01 01
{
	BOOL flag;

	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 1)
		flag = BOUNTY::_BOUNTY_REQUEST_COMPLETE_SPLIT_WANTED_POSTER(&(Global_1235687.f_9085.f_16[iParam0 /*8*/].f_1), &(Global_1235687.f_9085.f_104));
	else
		flag = BOUNTY::_BOUNTY_REQUEST_COMPLETE_WANTED_POSTER(&(Global_1235687.f_9085.f_16[iParam0 /*8*/].f_1), &(Global_1235687.f_9085.f_104));

	if (!flag)
		func_181(607258092, 0, 0);

	return flag;
}

BOOL func_205(int iParam0) // Position - 0x5605 Signature - 22 01 03 00 00 66 00 6D 08 39 FA 50 00 03
{
	func_183(iParam0, 8);
	BOUNTY::_BOUNTY_CANCEL_WANTED_POSTER();
	return 1;
}

BOOL func_206(Player plParam0) // Position - 0x561A Signature - 22 01 03 00 00 5D 8B B1 12 18 4A 02 66 00 03 09
{
	return SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225099.f_586), plParam0);
}

void func_207(Player plParam0) // Position - 0x562F Signature - 22 01 03 00 00 5D 8B B1 12 18 4A 02 66 00 03 08
{
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1225099.f_586), plParam0);
	return;
}

BOOL func_208(Player plParam0) // Position - 0x5644 Signature - 22 01 09 00 00 66
{
	Player i;
	Player player2;
	Player player1;
	Vector3 vector;

	player1 = PLAYER::INT_TO_PLAYERINDEX(plParam0);
	vector = { func_222(player1) };

	for (i = 0; i < 32; i = i + 1)
	{
		if (i == plParam0)
		{
		}
		else if (!func_206(i) || func_88(4, plParam0))
		{
		}
		else
		{
			player2 = PLAYER::INT_TO_PLAYERINDEX(i);
		
			if (GANG::NETWORK_IS_IN_SAME_GANG(player1, player2))
				return false;
		
			if (BUILTIN::VDIST(vector, func_222(player2)) <= Global_1901671.f_171.f_25)
				return false;
		}
	}

	return true;
}

void func_209(Player plParam0) // Position - 0x56CB Signature - 22 01 03 00 00 66 00 39 1A 56
{
	if (!func_206(plParam0))
		return;

	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1225099.f_586), plParam0);
	return;
}

void func_210(int iParam0) // Position - 0x56ED Signature - 22 01 03 00 00 5D E7 DA 12 78 7D 23 5D
{
	Global_1235687.f_9085 = Global_1235687.f_9085 - Global_1235687.f_9085 && iParam0;
	return;
}

BOOL func_211(Player plParam0, var uParam1) // Position - 0x570E Signature - 22 02 04 00 00 2F
{
	*uParam1 = 0;

	if (func_218())
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*plParam0))
		return false;

	if (MISC::GET_GAME_TIMER() - plParam0->f_1 > 300000)
	{
		*uParam1 = 1;
		return false;
	}

	if (plParam0->f_2)
		return false;

	return true;
}

void func_212(Player plParam0, int iParam1) // Position - 0x5758 Signature - 22 02 06 00 00 37
{
	var unk;

	unk = { func_370(1151156158, 4) };
	func_371(unk);
	func_261(unk, -1, 0, plParam0, iParam1);
	return;
}

BOOL func_213(int iParam0) // Position - 0x5784 Signature - 22 01 03 00 00 09 66 00 39 7D
{
	return func_372(1, iParam0);
}

BOOL func_214(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5793 Signature - 22 04 29
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_373(bParam1, bParam2, bParam3);

	if (Global_1572887.f_14 != -1)
		if (plParam0 == Global_1295666.f_5)
			if (!Global_1295666.f_6)
				return false;
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
			return false;
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
		return false;

	if (LAW::IS_LAW_INCIDENT_ACTIVE(plParam0))
	{
		LAW::_0xCBFB4951F2E3934C(plParam0, &data);
	
		if (bParam3 || data.f_10 > 0 || PLAYER::GET_PLAYER_WANTED_LEVEL(plParam0) > 0)
			return true;
	}
	else if (bParam2 && !(LAW::_0x148E7AC8141C9E64(plParam0) == 1370593166))
	{
		return false;
	}

	for (i = 0; i < 24; i = i + 1)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(plParam0, i, &crimeType))
			if (crimeType.f_10 && bParam3 || LAW::_0xDAEFDFDB2AEECE37(crimeType, crimeType.f_7) > 0)
				return true;
	}

	if (bParam1)
		if (LAW::ARE_WITNESSES_ACTIVE(plParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(plParam0, false, 0))
			if (bParam3 || LAW::_0xE083BEDA81709891(plParam0) > 0)
				return true;

	return false;
}

BOOL func_215(int iParam0, Player plParam1) // Position - 0x58C8 Signature - 22 02 04 00 00 66 01 6D FF 15 0E
{
	if (plParam1 == 255)
		return Global_1102813.f_3 && iParam0 != false;

	return Global_1101558[plParam1 /*38*/].f_3 && iParam0 != false;
}

struct<2> func_216() // Position - 0x58F4 Signature - 22 00 04 00 00 4B
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	return unk;
}

BOOL func_217(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x590D Signature - 22 06 0C
{
	var unk;
	var unk3;

	if (!bParam4)
		if (func_26())
			return true;

	unk = -1;
	unk.f_1 = -1;

	if (!func_36(uParam2))
		unk = { func_374() };
	else
		unk = { uParam2 };

	if (!bParam5 && func_36(unk) && !func_251(unk, uParam0))
		return true;

	unk3 = { func_375() };

	if (func_36(unk3) && !func_36(unk3) || !func_251(uParam0, unk3))
		return true;

	return false;
}

BOOL func_218() // Position - 0x59B4 Signature - 22 00 02 00 00 5D 0C
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

int func_219(Player plParam0, Player plParam1) // Position - 0x59D9 Signature - 22 02 08 00 00 11
{
	var gamerHandle;
	int bountyData;

	if (func_80(2))
		return 332948762;

	if (func_94())
		return -1033490187;

	if (!func_88(2, 255))
		return 1842743312;

	if (func_376(plParam0))
		return -1109051462;

	if (Global_1235687.f_9085.f_14 >= 1)
		return 769298471;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return -267458266;

	if (plParam0 == plParam1)
		return -1688739386;

	if (GANG::NETWORK_IS_IN_SAME_GANG(plParam1, plParam0))
		return -1435119901;

	gamerHandle = { func_177(plParam0) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&gamerHandle, &bountyData);

	if (bountyData < BOUNTY::_0xD6A67E2FF373D0E3(func_377(7)))
		return -80401254;

	if (BUILTIN::VDIST(func_222(plParam0), func_222(plParam1)) > Global_1901671.f_171.f_23 * Global_1149432.f_4786)
		return -619167961;

	return -605318450;
}

int func_220(char* sParam0, Player plParam1, int iParam2) // Position - 0x5AC7 Signature - 22 03 0D 00 00 66
{
	Player player;
	int textureDownloadId;
	int num;
	var gamerHandle;
	int personaPhotoLocalCacheType;
	int statusOfTextureDownload;
	const char* name;

	if (plParam1 < 0 || plParam1 >= 32)
		return 1;

	player = PLAYER::INT_TO_PLAYERINDEX(plParam1);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		return 1;

	TEXT_LABEL_ASSIGN_STRING(sParam0, "", 128);
	num = func_378(plParam1, iParam2);

	switch (iParam2)
	{
		case 0:
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(PLAYER::INT_TO_PLAYERINDEX(plParam1), &gamerHandle);
		
			if (!NETWORK::NETWORK_IS_HANDLE_VALID(&gamerHandle))
				return 1;
		
			TEXT_LABEL_ASSIGN_STRING(sParam0, NETWORK::_REQUEST_PEDSHOT_TEXTURE_MULTIPLAYER_DOWNLOAD(&gamerHandle, iParam2), 128);
			return 4;
	
		case 1:
		case 2:
			switch (num)
			{
				case 0:
					return 2;
			
				case 1:
					return 3;
			
				case 2:
					personaPhotoLocalCacheType = func_379(iParam2);
					textureDownloadId = NETWORK::_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(plParam1, personaPhotoLocalCacheType);
				
					if (textureDownloadId == -1)
					{
						return 3;
					}
					else if (textureDownloadId == 0)
					{
						func_380(plParam1, iParam2, 0);
						return 1;
					}
				
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(NETWORK::TEXTURE_DOWNLOAD_GET_NAME(textureDownloadId)))
						func_380(plParam1, iParam2, 3);
					else
						func_380(plParam1, iParam2, 4);
				
					func_381(plParam1, iParam2, textureDownloadId);
					break;
			
				case 3:
					textureDownloadId = func_382(plParam1, iParam2);
				
					if (textureDownloadId == 0)
					{
						func_380(plParam1, iParam2, 0);
						return 1;
					}
				
					statusOfTextureDownload = NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(textureDownloadId);
				
					switch (statusOfTextureDownload)
					{
						case 0:
							func_380(plParam1, iParam2, 4);
							return 3;
					
						case 1:
							return 3;
					
						case 2:
							func_380(plParam1, iParam2, 0);
							return 1;
					
						default:
							break;
					}
					break;
			
				case 4:
					textureDownloadId = func_382(plParam1, iParam2);
				
					if (textureDownloadId == 0)
					{
						func_380(plParam1, iParam2, 0);
						return 1;
					}
				
					name = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(textureDownloadId);
				
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(name))
						return 3;
				
					func_380(plParam1, iParam2, 5);
					break;
			
				case 5:
					textureDownloadId = func_382(plParam1, iParam2);
				
					if (textureDownloadId == 0)
					{
						func_380(plParam1, iParam2, 0);
						return 1;
					}
				
					TEXT_LABEL_ASSIGN_STRING(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(textureDownloadId), 128);
					return 4;
			
				default:
					return 1;
			}
			break;
	}

	return 3;
}

void func_221(Player plParam0, Hash hParam1) // Position - 0x5CB6 Signature - 22 02 3F
{
	var unk;
	var gamerHandle;
	var bountyData;

	unk = 1;
	unk.f_1 = 1;
	unk.f_2 = joaat("COLOR_WHITE");
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_10 = -1;
	unk.f_11 = -1;
	unk.f_12 = -1;
	unk.f_18 = joaat("COLOR_WHITE");
	unk.f_19 = joaat("COLOR_WHITE");
	unk.f_25 = 300;
	unk.f_33.f_8 = joaat("COLOR_WHITE");
	unk.f_33.f_11 = joaat("COLOR_WHITE");
	unk.f_33.f_12 = 8000;
	unk.f_33.f_13 = 1511356879;
	unk.f_33.f_15 = joaat("player_menu");
	unk.f_33.f_21 = 1;
	unk.f_24 = 1;
	unk.f_26 = 21;
	unk.f_27 = plParam0;
	unk.f_16 = MISC::VAR_STRING(2, "FETCH_PLAYER_BOUNTY_REQUEST_TITLE");
	gamerHandle = { func_177(plParam0) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&gamerHandle, &bountyData);
	unk.f_17 = MISC::VAR_STRING(2, "FETCH_PLAYER_BOUNTY_REQUEST_BODY", bountyData);
	unk.f_33.f_2 = MISC::VAR_STRING(2, "FETCH_PLAYER_BOUNTY_REQUEST_TITLE");
	unk.f_33.f_3 = MISC::VAR_STRING(2, "FETCH_PLAYER_BOUNTY_REQUEST_BODY", bountyData);

	if (hParam1 != 0)
	{
		unk.f_33.f_6 = hParam1;
		unk.f_33.f_7 = hParam1;
		unk.f_33.f_21 = 0;
		unk.f_20 = hParam1;
		unk.f_21 = hParam1;
	}
	else
	{
		unk.f_33.f_6 = joaat("mp_lobby_textures");
		unk.f_33.f_7 = joaat("temp_pedshot");
		unk.f_20 = joaat("mp_lobby_textures");
		unk.f_21 = joaat("temp_pedshot");
	}

	unk.f_33.f_17 = "HUD_Toast_Soundset";
	unk.f_33.f_18 = "Toast_On";
	func_383(unk);
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1235687.f_9085.f_8), plParam0);
	Global_1235687.f_9085.f_9[Global_1235687.f_9085.f_14 /*4*/] = plParam0;
	Global_1235687.f_9085.f_9[Global_1235687.f_9085.f_14 /*4*/].f_1 = MISC::GET_GAME_TIMER();
	Global_1235687.f_9085.f_14 = Global_1235687.f_9085.f_14 + 1;
	return;
}

Vector3 func_222(Player plParam0) // Position - 0x5E72 Signature - 22 01 03 00 00 66 00 03 05 00 E2
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

int func_223(Player plParam0) // Position - 0x5E86 Signature - 22 01 04 00 00 2F 67 03 66 03 6D 0D
{
	int i;

	for (i = 0; i < 13; i = i + 1)
	{
		if (func_66(i, 32, plParam0))
			return i;
	}

	return -1;
}

void func_224(Player plParam0, int iParam1) // Position - 0x5EB4 Signature - 22 02 04 00 00 66 00 2F 39 FB
{
	func_384(plParam0, 0);
	Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300.f_1 = plParam0;

	if (iParam1 != -1)
		Global_1225099[iParam1 /*28*/].f_18 = plParam0;

	return;
}

BOOL func_225() // Position - 0x5EE7 Signature - 22 00 04 00 00 09
{
	BOOL flag;
	int num;

	num = func_235(true);
	Global_1235687.f_9085.f_4 = func_385(num, &flag);

	if (Global_1235687.f_9085.f_4 != 1519094052)
	{
		if (flag)
			func_228(!func_88(4, 255));
	
		return false;
	}

	if (!func_88(1, 255))
		func_89(1);

	if (!func_386())
	{
		Global_1235687.f_9085.f_4 = -84140073;
		return false;
	}

	if (!func_239(joaat("BOUNTY_PLAYER"), num, &(Global_1235687.f_9085.f_2), &(Global_1235687.f_9085.f_3), true, Global_1901671.f_171.f_24))
	{
		func_228(true);
		return false;
	}

	Global_1235687.f_9085.f_4 = -888342148;
	Global_1235687.f_9085.f_100 = func_181(355060119, 0, 0);
	return true;
}

void func_226(int iParam0) // Position - 0x5FAD Signature - 22 01 03 00 00 66 00 5D E7 DA 12 18 7D 23 6C
{
	Global_1235687.f_9085.f_1 = iParam0;
	return;
}

BOOL func_227(int iParam0) // Position - 0x5FC0 Signature - 22 01 03 00 00 66 00 5D E7 DA 12 18 7D 23 80 10 63 08 27
{
	return Global_1235687.f_9085.f_16[iParam0 /*8*/].f_7 != -1307093097;
}

void func_228(BOOL bParam0) // Position - 0x5FDD Signature - 22 01 03 00 00 5D F6 FF 12 18
{
	if (Global_1245174.f_9807.f_2 != 0)
		Global_1245174.f_9807.f_2 = 0;

	if (bParam0)
		if (func_88(1, 255))
			func_90(1);

	return;
}

void func_229() // Position - 0x6010 Signature - 22 00 17
{
	var unk;
	var value;
	int i;

	unk.f_12 = -1;
	unk.f_12.f_1 = -1;
	unk.f_14 = 255;
	unk.f_15 = 255;
	unk.f_4 = 108;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)))
		{
		}
		else if (func_387(i) == PLAYER::PLAYER_ID())
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, i);
		}
	}

	if (SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&value))
		func_388(unk, value, false, false);

	return;
}

int func_230(int iParam0, int iParam1) // Position - 0x608C Signature - 22 02 0A 00 00 4B 05 66 00 39 04 B2 00 6A 8B 09 00 4B 05 66 01 39 4F BE 00 69 8B 11 00 62 4B 05 2D 37 E9
{
	var unk;
	var unk2;

	if (func_360(&unk2, iParam0) && func_389(&unk2, iParam1))
		func_362(unk2, -1775150615, &unk, false);

	return unk;
}

int func_231(int iParam0, Hash hParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, int iParam9) // Position - 0x60BF Signature - 22 0A 1B
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	var unk;
	int num4;
	Vector3 vector;
	int num5;
	BOOL flag2;
	Hash unlockHash;
	Hash unlockHash2;

	num = iParam0;

	if (num < 0 || num >= 112)
		return 11;

	if (!func_12())
		return 2;

	num2 = func_169(iParam0);
	num3 = func_390(num2, hParam1);

	if (num3 < 0 || num3 >= 55)
		return 11;

	if (!bParam7 && func_391(iParam0, num3, bParam8, &flag))
		if (flag)
			return 1;
		else
			return 4;

	if (func_392(num2, hParam1) && !bParam7)
	{
		unk = { func_393(num2, hParam1) };
		num4 = func_394(num2, num3);
	
		if (!func_395(num4, unk))
			return 5;
	}

	if (func_396(iParam2) == -1)
		return 6;

	if (iParam9 >= 0f && !_IS_NULL_VECTOR(vParam3))
	{
		vector = { func_333(iParam0, num3) };
	
		if (BUILTIN::VDIST(vParam3, vector) > iParam9)
			return 12;
	}

	if (func_398(iParam2))
	{
		num5 = func_399(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
	
		if (!func_126(num5))
			return 13;
	
		if (func_400(num5))
			return 14;
	}

	if (func_401(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))))
		return 15;

	if (bParam6)
	{
		if (iParam2 != joaat("INTRO_MISSION") && func_217(func_216(), func_216(), false, bParam7))
			return 3;
	
		flag2 = false;
	
		if (!flag2)
		{
			unlockHash = func_327(iParam0, num3);
		
			if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
				return 8;
		
			if (!UNLOCK::UNLOCK_IS_VISIBLE(unlockHash))
				return 7;
		
			unlockHash2 = func_328(iParam0, num3);
		
			if (unlockHash2 != 0)
			{
				if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash2))
					return 10;
			
				if (!UNLOCK::UNLOCK_IS_VISIBLE(unlockHash2))
					return 9;
			}
		}
	}

	return 0;
}

BOOL func_232(Player plParam0, int iParam1) // Position - 0x6296 Signature - 22 02 05 00 00 66 00 67 04 66 04
{
	Player player;

	player = plParam0;

	if (player >= 0 && player < 32)
		return func_402(Global_1297600[player /*87*/].f_86, iParam1);

	return false;
}

void func_233(int iParam0, int iParam1, int iParam2) // Position - 0x62CA Signature - 22 03 2D
{
	var unk;

	unk.f_5 = -1;
	unk.f_10 = -1;
	unk.f_11 = -1;
	unk.f_14.f_1 = -1;
	unk.f_21 = 6;
	func_403(&unk, iParam0, iParam1, iParam2, -1);
	func_404(&unk);
	return;
}

int func_234() // Position - 0x630A Signature - 22 00 02 00 00 5D 9E
{
	return Global_1939102.f_4;
}

int func_235(BOOL bParam0) // Position - 0x6318 Signature - 22 01 08 00 00 03
{
	var gamerHandle;
	int bountyData;
	int num;

	gamerHandle = { func_177(PLAYER::PLAYER_ID()) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&gamerHandle, &bountyData);
	num = bountyData;

	if (bParam0)
	{
		if (num >= BOUNTY::_0xF8BCC5ECA33AC9C1())
			return joaat("VERY_HIGH");
	
		return 0;
	}

	if (num >= Global_1901671.f_171.f_4)
		return joaat("HIGH");
	else if (num >= Global_1901671.f_171.f_3)
		return joaat("MEDIUM");
	else if (num >= Global_1901671.f_171.f_2)
		return joaat("LOW");

	return 0;
}

int func_236(int iParam0, int iParam1, int iParam2, var uParam3) // Position - 0x6399 Signature - 22 04 07 00 00 66 00 66 03
{
	int num;

	num = func_405(iParam0, uParam3);

	if (num != 1519094052)
		return num;

	if (Global_1245174.f_9807 == 0)
		func_119(false, false, false);

	if (Global_1245174.f_9807.f_1 != 0 && Global_1295666.f_16 > Global_1245174.f_9807.f_1)
	{
		func_276(2, true);
		Global_1245174.f_9807.f_1 = 0;
	}

	if (func_406(iParam0) && !func_407(2) && iParam1 != iParam2 && iParam1 != -1 && iParam2 != -1)
		return 1519094052;

	if (Global_1295666.f_16 > Global_1245174.f_9807)
		return 1519094052;
	else
		return 1918714710;

	return -919889546;
}

void func_237() // Position - 0x645F Signature - 22 00 02 00 00 11 39
{
	if (func_407(2))
		return;

	if (Global_1245174.f_9807 != 0 || Global_1245174.f_9807.f_6 != -1)
	{
		Global_1245174.f_9807 = 0;
		Global_1245174.f_9807.f_6 = -1;
	}

	return;
}

BOOL func_238(int iParam0) // Position - 0x64A1 Signature - 22 01 03 00 00 73
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= func_408(iParam0);
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_239(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, int iParam5) // Position - 0x64B6 Signature - 22 06 4D
{
	var unk;
	int num;
	int endRange;
	int i;
	float num2;
	Vector3 vector;
	Vector3 entityCoords;
	BOOL flag;
	BOOL flag2;
	float num3;

	*iParam2 = func_409(iParam0);

	if (*iParam2 == -1)
		return false;

	unk = 55;
	num = func_410(func_169(*iParam2));
	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
	num3 = 32000f;

	for (i = 0; i <= num - 1; i = i + 1)
	{
		if (func_411(func_169(*iParam2), i) == iParam1 && func_412(*iParam2, i, -1) == -1 && func_231(*iParam2, func_327(*iParam2, i), iParam0, entityCoords, true, false, false, -1082130432) == 0)
		{
			if (bParam4)
			{
				vector = { func_413(func_169(*iParam2), i, &flag) };
			
				if (flag)
				{
					if (_IS_NULL_VECTOR(vector))
					{
						if (endRange == 0)
							endRange = endRange + 1;
					
						unk[endRange] = i;
						endRange = endRange + 1;
					}
					else
					{
						num2 = BUILTIN::VDIST(vector, entityCoords);
					
						if (iParam5 != -1f && num2 > iParam5)
						{
						}
						else
						{
							if (num2 < num3)
							{
								if (endRange == 0)
									endRange = endRange + 1;
							
								num3 = num2;
								unk[0] = i;
								flag2 = true;
							}
						
							goto 0x134;
						}
					}
				}
			}
			else
			{
				unk[endRange] = i;
				endRange = endRange + 1;
			}
		}
	}

	if (endRange > 0)
		if (bParam4)
			if (flag2)
				*iParam3 = unk[0];
			else if (endRange > 1)
				*iParam3 = unk[MISC::GET_RANDOM_INT_IN_RANGE(1, endRange)];
			else
				return false;
		else
			*iParam3 = unk[MISC::GET_RANDOM_INT_IN_RANGE(0, endRange)];
	else
		return false;

	return true;
}

void func_240() // Position - 0x6645 Signature - 22 00 05 00 00 37
{
	var unk;
	var statId;

	statId = { func_98(joaat("mp_fetch_last_started_business_raid_type")) };
	STATS::STAT_ID_GET_INT(&statId, &unk);
	Global_1235687.f_9208.f_2 = unk;
	return;
}

BOOL func_241(int iParam0) // Position - 0x666E Signature - 22 01 04 00 00 6D
{
	int i;

	if (!func_176(255))
		return false;

	if (func_213(255))
		return false;

	if (CAM::IS_SCREEN_FADED_OUT())
		return false;

	if (func_215(65536, PLAYER::PLAYER_ID()))
		return false;

	if (func_414(Global_34))
		return false;

	if (func_214(PLAYER::PLAYER_ID(), true, false, true))
		return false;

	if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_149[Global_1295666]))
		return false;

	if (func_415())
		return false;

	if (func_217(func_216(), func_216(), false, false))
		return false;

	for (i = 0; i <= 12; i = i + 1)
	{
		if (Global_1225099[i /*28*/].f_13 == Global_1295666.f_10)
			return false;
	}

	switch (iParam0)
	{
		case 0:
			if (!func_416())
				return false;
			break;
	
		case 1:
			if (!func_417())
				return false;
			break;
	}

	return true;
}

void func_242(int* piParam0, int iParam1) // Position - 0x6766 Signature - 22 02 04 00 00 66 00 66 01 03
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

int func_243() // Position - 0x6776 Signature - 22 00 03 00 00 5D 67 04 1D 80 AB 27 26
{
	int num;

	num = Global_1901671.f_171.f_38;

	if (func_419(-735397297, func_418(true), 1784584921, true, false, false) >= Global_1901671.f_171.f_49)
		num = num + Global_1901671.f_171.f_45;

	if (Global_1235687.f_9208.f_2 == 0)
		num = num - Global_1901671.f_171.f_37;

	return num;
}

int func_244() // Position - 0x67D2 Signature - 22 00 03 00 00 5D 67 04 1D 80 AB 27 27
{
	int num;

	num = Global_1901671.f_171.f_39;

	if (func_419(-545779394, func_418(true), 1784584921, true, false, false) > Global_1901671.f_171.f_41 || func_419(1532695640, func_418(true), 1784584921, true, false, false) > Global_1901671.f_171.f_41 || func_419(1847740267, func_418(true), 1784584921, true, false, false) > Global_1901671.f_171.f_41)
		num = num + Global_1901671.f_171.f_45;

	if (Global_1235687.f_9208.f_2 == 1)
		num = num - Global_1901671.f_171.f_37;

	return num;
}

int func_245(int iParam0) // Position - 0x6879 Signature - 22 01 03 00 00 66 00 5D E7 DA 12 18 F8
{
	return Global_1235687.f_9208.f_3[iParam0];
}

BOOL func_246() // Position - 0x688E Signature - 22 00 02 00 00 86 0A D7 23 3C 48 03 09 00 C7 39 C7
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 1f) <= func_420();
}

BOOL func_247() // Position - 0x68A5 Signature - 22 00 02 00 00 86 0A D7 23 3C 48 03 09 00 C7 39 38
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 1f) <= func_421();
}

void func_248(int iParam0) // Position - 0x68BC Signature - 22 01 03 00 00 66 00 39 20
{
	if (func_422(iParam0))
		func_423(&(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73), iParam0);

	return;
}

Vector3 func_249(int iParam0) // Position - 0x68DF Signature - 22 01 03 00 00 1D 66 00 5D 21
{
	return Global_1297441.f_6.f_1[iParam0 /*3*/];
}

// Unhandled jump detected. Output should be considered invalid
int func_250(int iParam0, int iParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6, BOOL bParam7, int iParam8) // Position - 0x68F5 Signature - 22 09 4D
{
	var unk;
	int num;
	int endRange;
	int i;
	float num2;
	Vector3 vector;
	BOOL flag;
	BOOL flag2;
	float num3;

	*uParam2 = func_409(iParam0);

	if (*uParam2 == -1)
		return 0;

	unk = 55;
	num = func_410(func_169(*uParam2));
	num3 = 32000f;

	for (i = 0; i <= num - 1; i = i + 1)
	{
		if (func_411(func_169(*uParam2), i) == iParam1 && func_412(*uParam2, i, -1) == -1 && func_231(*uParam2, func_327(*uParam2, i), iParam0, vParam4, true, false, false, iParam8) == 0)
		{
			if (bParam7)
			{
				vector = { func_413(func_169(*uParam2), i, &flag) };
			
				if (flag)
				{
					if (_IS_NULL_VECTOR(vector))
					{
						if (endRange == 0)
							endRange = endRange + 1;
					
						unk[endRange] = i;
						endRange = endRange + 1;
					}
					else
					{
						num2 = BUILTIN::VDIST(vector, vParam4);
					
						if (iParam8 != -1f && num2 > iParam8)
						{
						}
						else
						{
							if (num2 < num3)
							{
								if (endRange == 0)
									endRange = endRange + 1;
							
								num3 = num2;
								unk[0] = i;
								flag2 = true;
							}
						
							goto 0x11F;
						}
					}
				}
			}
			else
			{
				unk[endRange] = i;
				endRange = endRange + 1;
			}
		}
	}

	if (endRange > 0)
		if (bParam7)
			if (flag2)
				*uParam3 = unk[0];
			else if (endRange > 1)
				*uParam3 = unk[MISC::GET_RANDOM_INT_IN_RANGE(1, endRange)];
			else
				return 0;
		else
			*uParam3 = unk[MISC::GET_RANDOM_INT_IN_RANGE(0, endRange)];
	else
		return 0;

	return 1;
}

BOOL func_251(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x6A6F Signature - 22 04 06 00 00 66 00 66 02 0B
{
	return uParam0 == uParam2 && uParam0.f_1 == uParam2.f_1;
}

int func_252(var uParam0, var uParam1) // Position - 0x6A8A Signature - 22 02 0D
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

	if (!func_424(uParam0, &unk))
		return -1;

	num = 0;
	num2 = Global_1072759.f_19487 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
		func_424(Global_1072759.f_19487.f_1[num3 /*3*/], &unk4);
	
		if (unk4 > unk)
			num2 = num3 - 1;
		else if (unk4 < unk)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

BOOL func_253(int iParam0, BOOL bParam1) // Position - 0x6B31 Signature - 22 02 09 00 00 2F
{
	var unk;
	int num;
	int num2;
	BOOL flag;
	int i;

	i = 0;

	if (iParam0 == 0)
		return false;

	if (Global_1149432.f_3876.f_711 == iParam0)
		return true;

	Global_1149432.f_3876.f_706.f_1 = 0;
	Global_1149432.f_3876.f_706.f_2 = 1613014828;
	Global_1149432.f_3876.f_706.f_3 = iParam0;
	Global_1149432.f_3876.f_706.f_4 = 0;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1149432.f_3876.f_706))
		Global_1149432.f_3876.f_706 = Global_1149432.f_2;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&unk, &(Global_1149432.f_3876.f_706)))
		return false;

	Global_1149432.f_3876.f_711 = iParam0;

	for (i = 0; i < 106; i = i + 1)
	{
		num2 = func_425(i, 1);
	
		if (num2 == -1)
		{
		}
		else
		{
			num = num2;
		
			if (num == 0)
			{
			}
			else
			{
				Global_1149432.f_3876.f_706.f_4 = num;
				Global_1149432.f_3876.f_706.f_2 = -239316549;
			
				if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&unk, &(Global_1149432.f_3876.f_706)))
					flag = true;
				else
					flag = false;
			
				func_426(num2, flag, bParam1);
			
				if (!flag)
				{
				}
				else
				{
					Global_1149432.f_3876.f_706.f_2 = 1242520881;
				
					if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&flag, &(Global_1149432.f_3876.f_706)))
					{
					}
					else
					{
						flag = true;
					}
				
					Global_1149432.f_3876.f_2[func_427(num2, 1) /*4*/].f_1 = flag;
				}
			}
		}
	}

	return true;
}

void func_254(int iParam0, var uParam1) // Position - 0x6C99 Signature - 22 02 06 00 00 66 00 67
{
	int num;

	num = iParam0;
	num.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &num, 2, 2);
	return;
}

int func_255() // Position - 0x6CB4 Signature - 22 00 03 00 00 2F 37
{
	float randomFloatInRange;

	randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216);

	if (randomFloatInRange < 0.01f)
		return 19;

	if (randomFloatInRange < 0.16f)
		return 15;

	if (randomFloatInRange < 0.31f)
		return 17;

	if (randomFloatInRange < 0.46f)
		return 16;

	if (randomFloatInRange < 0.61f)
		return 18;

	return 0;
}

int func_256(int iParam0) // Position - 0x6D19 Signature - 22 01 03 00 00 66 00 3C 5D
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 112;
	
		case 2:
			return 113;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 9;
	
		case 11:
			return 10;
	
		case 12:
			return 11;
	
		case 15:
			return 12;
	
		case 16:
			return 13;
	
		case 17:
			return 15;
	
		case 19:
			return 17;
	
		case 20:
			return 18;
	
		case 21:
			return 19;
	
		case 22:
			return 20;
	
		case 23:
			return 21;
	
		case 25:
			return 23;
	
		case 26:
			return 25;
	
		case 27:
			return 26;
	
		case 28:
			return 62;
	
		case 30:
			return 27;
	
		case 31:
			return 29;
	
		case 32:
			return 30;
	
		case 33:
			return 31;
	
		case 35:
			return 35;
	
		case 37:
			return 42;
	
		case 38:
			return 43;
	
		case 39:
			return 47;
	
		case 40:
			return 48;
	
		case 41:
			return 49;
	
		case 42:
			return 50;
	
		case 44:
			return 52;
	
		case 45:
			return 54;
	
		case 47:
			return 57;
	
		case 51:
			return 61;
	
		case 52:
			return 28;
	
		case 53:
			return 51;
	
		case 55:
			return 53;
	
		case 60:
			return 63;
	
		case 62:
			return 64;
	
		case 63:
			return 65;
	
		case 64:
			return 66;
	
		case 65:
			return 67;
	
		case 66:
			return 68;
	
		case 67:
			return 71;
	
		case 69:
			return 73;
	
		case 70:
			return 74;
	
		case 72:
			return 76;
	
		case 73:
			return 78;
	
		case 74:
			return 79;
	
		case 75:
			return 80;
	
		case 76:
			return 81;
	
		case 77:
			return 82;
	
		case 80:
			return 84;
	
		case 81:
			return 85;
	
		case 82:
			return 72;
	
		case 83:
			return 87;
	
		case 84:
			return 88;
	
		case 85:
			return 90;
	
		case 86:
			return 91;
	
		case 87:
			return 92;
	
		case 88:
			return 40;
	
		case 92:
			return 96;
	
		case 93:
			return 97;
	
		case 94:
			return 44;
	
		case 98:
			return 99;
	
		case 99:
			return 100;
	
		case 100:
			return 101;
	
		case 101:
			return 102;
	
		case 102:
			return 103;
	
		case 103:
			return 104;
	
		case 104:
			return 105;
	
		case 105:
			return 106;
	
		case 106:
			return 107;
	
		case 110:
			return 114;
	
		case 111:
			return 115;
	
		case 113:
			return 118;
	
		case 115:
			return 119;
	
		case 116:
			return 120;
	
		case 117:
			return 121;
	
		case 118:
			return 122;
	
		case 121:
			return 46;
	
		case 123:
			return 86;
	
		case 127:
			return 32;
	
		case 131:
			return 33;
	
		case 132:
			return 34;
	
		case 135:
			return 69;
	
		case 136:
			return 70;
	
		case 139:
			return 123;
	
		default:
		
	}

	return 0;
}

int func_257(int iParam0) // Position - 0x7123 Signature - 22 01 03 00 00 66 00 3C 11
{
	switch (iParam0)
	{
		case 0:
			return 170;
	
		case 1:
			return 171;
	
		case 2:
			return 172;
	
		case 3:
			return 173;
	
		case 4:
			return 174;
	
		case 5:
			return 175;
	
		case 6:
			return 175;
	
		case 7:
			return 175;
	
		case 8:
			return 176;
	
		case 9:
			return 177;
	
		case 10:
			return 178;
	
		case 11:
			return 179;
	
		case 12:
			return 180;
	
		case 13:
			return 181;
	
		case 14:
			return 182;
	
		case 15:
			return 183;
	
		case 16:
			return 184;
	
		default:
		
	}

	return -1;
}

void func_258(int iParam0, var uParam1, int iParam2) // Position - 0x71EF Signature - 22 03 08 00 00 66 00 67
{
	int num;

	num = iParam0;
	num.f_1 = uParam1;
	num.f_2 = iParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &num, 3, 3);
	return;
}

Hash func_259(var uParam0, var uParam1) // Position - 0x7210 Signature - 22 02 04 00 00 11 4B 00 2D 39 2C
{
	return func_428(uParam0);
}

int func_260(BOOL bParam0, Hash hParam1) // Position - 0x7220 Signature - 22 02 04 00 00 03 01 00 33
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return 0;

	if (!Global_1102813.f_16)
		return 0;

	if (!func_21())
		return 0;

	if (!func_429())
		return 0;

	Global_0 = hParam1;

	if (bParam0)
		func_430(&Global_0, 8);

	func_430(&Global_0, 1);
	return 1;
}

void func_261(var uParam0, var uParam1, int iParam2, int iParam3, Player plParam4, int iParam5) // Position - 0x7276 Signature - 22 06 18 00 00 11
{
	int deedType;
	Hash deedHash;
	int data;
	char* str;

	deedType = func_431(func_269(uParam0));
	deedHash = func_259(uParam0);
	str = "";
	data.f_1 = iParam3;
	data = 0;
	data.f_2 = 0;

	if (func_17() == 0)
	{
		data = Global_265213.f_122484.f_80.f_12;
		str = func_432(Global_265213.f_122484.f_80.f_22);
		func_433(uParam0, &data, iParam2);
	}

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam4))
	{
		data.f_4 = plParam4;
		data.f_3 = iParam5;
	}
	else
	{
		data.f_4 = 255;
		data.f_3 = 0;
	}

	if (Global_1072759.f_16.f_1)
		data.f_6 = 1;

	data.f_5 = Global_1072759.f_16.f_2;

	if (data.f_5 == -1)
		data.f_5 = deedHash;

	unk_0x6F5BC5C4EAB42B15(data.f_5, 2, str);
	STATS::_STATSTRACKER_DEED_STATUS(deedType, deedHash, iParam2, &data);
	return;
}

void func_262(var uParam0, var uParam1, int iParam2) // Position - 0x7345 Signature - 22 03 05 00 00 11 4B 00 2D 39 09 12 00 05 8B 03 00 50 03 00 66
{
	if (!func_36(uParam0))
		return;

	if (iParam2 == 0 || iParam2 == -1)
		func_434(uParam0);
	else
		func_435(uParam0, iParam2);

	func_436();
	return;
}

struct<2> func_263(int iParam0) // Position - 0x7388 Signature - 22 01 03 00 00 11 66 00 5D AC
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

void func_264(BOOL bParam0) // Position - 0x739C Signature - 22 01 03 00 00 66 00 8B
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_437(&Global_1940199, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_438(&Global_1940199, 8388608);
	}

	MISC::ENABLE_DISPATCH_SERVICE(DT_BikerBackup, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceRiders, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobile, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceHelicopter, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_FireDepartment, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_SwatAutomobile, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_AmbulanceDepartment, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceVehicleRequest, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobileWaitPulledOver, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobileWaitCruising, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_Gangs, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_SwatHelicopter, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceBoat, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_ArmyVehicle, bParam0);
	return;
}

void func_265(BOOL bParam0) // Position - 0x743F Signature - 22 01 08 00 00 2F
{
	int i;
	Hash crimeType;
	var unk;

	for (i = 0; i <= 58; i = i + 1)
	{
		crimeType = func_439(i, 1);
	
		if (crimeType == joaat("crime_murder_player") || crimeType == joaat("crime_murder_player_horse") || crimeType == joaat("crime_trample_player"))
		{
		}
		else
		{
			if (bParam0)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_440(unk);
			}
			else
			{
				func_441();
			}
		
			LAW::_0xF611DE44AEB36A1D(crimeType, bParam0);
		}
	}

	return;
}

int func_266(BOOL bParam0) // Position - 0x74B0 Signature - 22 01 03 00 00 66 00 05
{
	if (!bParam0 && func_442(373691918))
		return 0;

	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("bountyhuntersglobalcooldown"), bParam0, 0);
	return 1;
}

void func_267(BOOL bParam0) // Position - 0x74DD Signature - 22 01 03 00 00 85 AC
{
	Global_1900460 = Global_1900460 || bParam0;
	return;
}

int func_268(var uParam0, var uParam1) // Position - 0x74F0 Signature - 22 02 04 00 00 11 4B 00 2D 39 13
{
	return func_444(func_443(uParam0));
}

int func_269(var uParam0, var uParam1) // Position - 0x7504 Signature - 22 02 04 00 00 66 00 50
{
	return uParam0;
}

void func_270(int iParam0, var uParam1) // Position - 0x750E Signature - 22 02 04 00 00 66 01 66 00 39
{
	func_445(uParam1, iParam0);

	if (Global_1205804.f_129 > 0)
		if (Global_1205804.f_130 == iParam0)
			func_446(0);

	func_447();
	return;
}

BOOL func_271(BOOL bParam0) // Position - 0x753C Signature - 22 01 0A 00 00 66 00 8B
{
	var gamerHandle;
	int bountyData;
	int i;
	int num;
	Player player;

	if (bParam0)
		return false;

	gamerHandle = { func_177(PLAYER::PLAYER_ID()) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&gamerHandle, &bountyData);

	if (bountyData < Global_1901671.f_171.f_2)
		return false;

	for (i = 0; i <= 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player) && GANG::_NETWORK_IS_IN_MY_GANG(player))
		{
			if (player == PLAYER::PLAYER_ID())
			{
				num = num + 1;
			}
			else
			{
				gamerHandle = { func_177(player) };
				BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&gamerHandle, &bountyData);
			
				if (bountyData >= Global_1901671.f_171.f_2)
					num = num + 1;
			}
		}
	}

	return num > 1;
}

int func_272(int iParam0) // Position - 0x75DE Signature - 22 01 03 00 00 66 00 3C 04 00 6C 1D 80 0C 15 00 9B FC 8A 38 30 00 E8 3F 42 3A 1F 00 AC 6F E0 74 0E 00 68 2C 00 5D 67 04 1D 80 AB 27 0E
{
	switch (iParam0)
	{
		case joaat("LOW"):
			return Global_1901671.f_171.f_14;
	
		case joaat("VERY_HIGH"):
			return Global_1901671.f_171.f_17;
	
		case joaat("HIGH"):
			return Global_1901671.f_171.f_16;
	
		case joaat("MEDIUM"):
			return Global_1901671.f_171.f_15;
	
		default:
		
	}

	return 0;
}

int func_273(int iParam0) // Position - 0x7633 Signature - 22 01 03 00 00 66 00 3C 04 00 6C 1D 80 0C 15 00 9B FC 8A 38 30 00 E8 3F 42 3A 1F 00 AC 6F E0 74 0E 00 68 2C 00 5D 67 04 1D 80 AB 27 0A
{
	switch (iParam0)
	{
		case joaat("LOW"):
			return Global_1901671.f_171.f_10;
	
		case joaat("VERY_HIGH"):
			return Global_1901671.f_171.f_13;
	
		case joaat("HIGH"):
			return Global_1901671.f_171.f_12;
	
		case joaat("MEDIUM"):
			return Global_1901671.f_171.f_11;
	
		default:
		
	}

	return 0;
}

int func_274(int iParam0) // Position - 0x7688 Signature - 22 01 03 00 00 66 00 3C 04 00 6C 1D 80 0C 15 00 9B FC 8A 38 30 00 E8 3F 42 3A 1F 00 AC 6F E0 74 0E 00 68 2C 00 5D 67 04 1D 80 AB 27 06
{
	switch (iParam0)
	{
		case joaat("LOW"):
			return Global_1901671.f_171.f_6;
	
		case joaat("VERY_HIGH"):
			return Global_1901671.f_171.f_9;
	
		case joaat("HIGH"):
			return Global_1901671.f_171.f_8;
	
		case joaat("MEDIUM"):
			return Global_1901671.f_171.f_7;
	
		default:
		
	}

	return 0;
}

void func_275(int iParam0, BOOL bParam1) // Position - 0x76DD Signature - 22 02 04 00 00 66 00 39 4C C4 00 05
{
	if (!func_407(iParam0))
	{
		bParam1;
		func_145(&(Global_1245174.f_9817), iParam0);
	}

	return;
}

void func_276(int iParam0, BOOL bParam1) // Position - 0x7701 Signature - 22 02 04 00 00 66 00 39 4C C4 00 8B
{
	if (func_407(iParam0))
	{
		bParam1;
		func_146(&(Global_1245174.f_9817), iParam0);
	}

	return;
}

BOOL func_277(int iParam0, int iParam1, Vector3 vParam2, var uParam3, var uParam4) // Position - 0x7724 Signature - 22 05 0B 00 00 66
{
	Vector3 vector;
	float num;

	vector = { func_333(iParam0, iParam1) };
	num = BUILTIN::VDIST(vector, vParam2);
	return num > 2500f;
}

struct<2> func_278(int iParam0) // Position - 0x774E Signature - 22 01 05 00 00 66 00 67
{
	int num;

	num = iParam0;
	return num;
}

BOOL func_279(int iParam0) // Position - 0x775E Signature - 22 01 03 00 00 66 00 3C 06
{
	switch (iParam0)
	{
		case joaat("MOONSHINE_RAID"):
		case joaat("MOONSHINE_DYNAMIC"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case joaat("MOONSHINE_SELL"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
			return true;
	
		default:
		
	}

	return false;
}

void func_280(int iParam0) // Position - 0x7797 Signature - 22 01 06 00 00 39
{
	var statId;
	int value;

	if (!func_429())
		return;

	if (iParam0 == 0)
		return;

	statId = { func_448(iParam0) };

	if (!STATS::STAT_ID_IS_VALID(&statId))
		return;

	value = Global_1295666.f_16;
	!STATS::STAT_ID_SET_INT(&statId, value, true);
	return;
}

BOOL func_281(int iParam0) // Position - 0x77DF Signature - 22 01 03 00 00 66 00 3C 03 00 A3
{
	switch (iParam0)
	{
		case -1086711901:
		case -697789102:
		case 195932838:
			return true;
	}

	return false;
}

BOOL func_282(int iParam0) // Position - 0x7809 Signature - 22 01 03 00 00 66 00 3C 03 00 76
{
	switch (iParam0)
	{
		case -2096602762:
		case joaat("bounty_board"):
		case joaat("BOUNTY_PLAYER"):
			return true;
	}

	return false;
}

BOOL func_283(int iParam0) // Position - 0x7833 Signature - 22 01 03 00 00 66 00 3C 03 00 2B
{
	switch (iParam0)
	{
		case -1812122325:
		case joaat("outlaw"):
		case 918897273:
			return true;
	}

	return false;
}

int func_284(int iParam0) // Position - 0x785D Signature - 22 01 03 00 00 66 00 3C 16
{
	switch (iParam0)
	{
		case -2096602762:
		case -1812122325:
		case joaat("AMBUSH"):
		case -1086711901:
		case joaat("MOONSHINE_DYNAMIC"):
		case joaat("hideout"):
		case 918897273:
			return 8;
	
		case joaat("bounty_board"):
		case joaat("gun_for_hire"):
		case -697789102:
		case joaat("CAMP_RESUPPLY"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case 195932838:
		case joaat("outlaw"):
		case joaat("CAMP_SETUP"):
		case joaat("MOONSHINE_SELL"):
		case joaat("BOUNTY_PLAYER"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("dynamic"):
		case joaat("CAMP_RAID"):
		case joaat("CAMP_SELL"):
			return 1;
	
		default:
		
	}

	return 0;
}

BOOL func_285(int iParam0) // Position - 0x78FB Signature - 22 01 03 00 00 5D 17 00 18 27 0E 08 15 04 00 2F 50 01 01 5D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && iParam0 != false;
}

BOOL func_286() // Position - 0x791C Signature - 22 00 02 00 00 2F 39
{
	return func_449(func_263(0));
}

BOOL func_287(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x792D Signature - 22 03 06 00 00 66 00 03
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	if (bParam1)
		if (!PLAYER::IS_PLAYER_PLAYING(plParam0))
			return false;

	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_SESSION())
		{
			player = plParam0;
		
			if (player < 0 || player >= 32)
				return false;
		
			if (!Global_1051608.f_1[player])
				return false;
		}
	}

	return true;
}

int func_288(int iParam0) // Position - 0x798F Signature - 22 01 04 00 00 66 00 5D 8B B1 12 63
{
	int num;

	if (Global_1225099[iParam0 /*28*/].f_2 == -1 || Global_1225099[iParam0 /*28*/].f_2 == 3)
		return -1;

	num = func_314(Global_1225099[iParam0 /*28*/]);

	if (func_76(num) && !func_147(iParam0, 131072))
		return 1;

	return 0;
}

BOOL func_289(int iParam0, var uParam1) // Position - 0x79E8 Signature - 22 02 1F 00 00 66 00 5D
{
	var unk;
	int num;
	int num2;
	int num3;

	if (!func_315(Global_1235687[iParam0 /*697*/].f_571))
		return true;

	if (!func_450(iParam0, uParam1))
		return false;

	unk = -1;
	unk.f_1 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_6.f_1 = -1;
	unk.f_9 = 2;
	num = 2;
	num.f_1 = -1;
	num.f_5 = -1;
	num.f_5.f_1 = -1;
	num.f_5.f_3 = -1;
	num.f_5.f_4 = -1;
	num.f_5.f_5 = -1;
	num.f_5.f_6 = -1;
	num.f_5.f_6.f_1 = -1;
	num.f_5.f_9 = 2;
	num2 = func_451(func_314(Global_1225099[iParam0 /*28*/]));
	func_452(iParam0, &unk);
	num3 = func_453(&unk);

	if (func_454(num3))
	{
		num = { func_455(num3) };
	
		if (num == num2)
		{
			Global_1225099[iParam0 /*28*/].f_4 = num3;
			return true;
		}
		else
		{
			*uParam1 = 1;
			return true;
		}
	}

	return false;
}

BOOL func_290(int iParam0) // Position - 0x7AE9 Signature - 22 01 03 00 00 66 00 2F 1C 50 01 01 22 02 04 00 00 66 00 3C
{
	return iParam0 != 0;
}

BOOL func_291(int iParam0, BOOL bParam1) // Position - 0x7AF5 Signature - 22 02 04 00 00 66 00 3C 0D
{
	switch (iParam0)
	{
		case joaat("bounty_board"):
		case joaat("gun_for_hire"):
		case -697789102:
		case joaat("CAMP_RESUPPLY"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case 195932838:
		case joaat("outlaw"):
		case joaat("CAMP_SETUP"):
		case joaat("MOONSHINE_SELL"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("CAMP_SELL"):
			return true;
	
		case joaat("dynamic"):
			return bParam1;
	
		default:
		
	}

	return false;
}

int func_292(int iParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x7B5D Signature - 22 04 26
{
	var unk;
	var value;

	if (!Global_1901671.f_319.f_24)
		return 1;

	if (iParam0 == 0)
		return 0;

	if (!GANG::NETWORK_IS_GANG_IN_SESSION(iParam0))
		return 0;

	if (!func_36(uParam1))
		return 0;

	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_7.f_1 = -1;
	unk.f_10 = 255;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = 7;
	unk.f_19.f_1 = 255;
	unk.f_19.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_27.f_1 = -1;
	unk.f_10 = PLAYER::PLAYER_ID();
	unk.f_11 = iParam0;
	unk.f_4 = 13;
	unk.f_7 = { uParam1 };

	if (bParam3)
		unk.f_14 = unk.f_14 | 2;

	value = func_456(iParam0);

	if (SCRIPTS::COUNT_PLAYER_BITS(&value) <= 0)
		return 0;

	func_457(&unk, value);
	unk.f_4 = 14;
	func_458(&unk);
	return 1;
}

void func_293(int iParam0) // Position - 0x7C6D Signature - 22 01 03 00 00 2F 66 00 32 50
{
	*iParam0 = 0;
	return;
}

BOOL func_294(int iParam0, int iParam1, BOOL bParam2) // Position - 0x7C79 Signature - 22 03 05 00 00 66 00 39
{
	if (!func_63(iParam0))
		return false;

	if (bParam2)
		return func_64(Global_1235687[iParam0 /*697*/].f_570, iParam1);

	return func_64(Global_1235687[iParam0 /*697*/].f_569, iParam1);
}

void func_295(int iParam0) // Position - 0x7CBB Signature - 22 01 04 00 00 66 00 5D 8B B1 12 17 1C 66 00 5D 8B B1 12 63 1C 27 06 39 0E E4 00 67 03 66 03 08 15 03 00 50 01 00 66 03 39 3A
{
	int num;

	num = func_459(Global_1225099[iParam0 /*28*/], Global_1225099[iParam0 /*28*/].f_6);

	if (num == -1)
		return;

	func_460(num);
	return;
}

void func_296(int iParam0, int iParam1) // Position - 0x7CEA Signature - 22 02 04 00 00 66 00 39 FC 20 00 05 8B 03 00 50 02 00 66 00 66 01 39 DF
{
	if (!func_63(iParam0))
		return;

	if (!func_147(iParam0, iParam1))
		func_145(&(Global_1225099[iParam0 /*28*/].f_3), iParam1);

	return;
}

BOOL func_297(int iParam0) // Position - 0x7D1B Signature - 22 01 03 00 00 6D F9
{
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_fetch", iParam0, false, 0) && func_461(iParam0, 1048576) && func_461(iParam0, 512))
		if (!func_290(Global_1235687[iParam0 /*697*/].f_607))
			func_174(&(Global_1235687[iParam0 /*697*/].f_607));
		else if (func_175(Global_1235687[iParam0 /*697*/].f_607) > 6000)
			return true;

	if (func_294(iParam0, 8388608, false))
	{
		return true;
	}
	else if (Global_1235687[iParam0 /*697*/].f_571 != joaat("INTRO_MISSION") && !func_76(Global_1235687[iParam0 /*697*/].f_571) || func_147(iParam0, 131072) && !func_462(iParam0))
	{
		return true;
	}
	else if (func_76(Global_1235687[iParam0 /*697*/].f_571) && func_463(iParam0))
	{
		return true;
	}
	else if (func_147(iParam0, 32) && !func_294(iParam0, 32, false))
	{
		func_296(iParam0, 33554432);
		return true;
	}

	return false;
}

void func_298(int iParam0, Any* panParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10) // Position - 0x7E42 Signature - 22 0B 31
{
	var unk;
	var unk32;
	var unk33;
	float num;

	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_7.f_1 = -1;
	unk.f_10 = 255;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = 7;
	unk.f_19.f_1 = 255;
	unk.f_19.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_27.f_1 = -1;
	unk32 = func_464(0, 8);
	unk.f_6 = iParam0;
	unk.f_5 = panParam1;
	unk.f_11 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	unk.f_4 = 3;
	unk.f_9 = uParam3;
	unk.f_14 = uParam2;
	unk.f_7 = { uParam4 };
	unk.f_13 = iParam10;
	MISC::COPY_SCRIPT_STRUCT(&(unk.f_27), &uParam6, 4);
	Global_1110244.f_4647 = uParam2;
	unk33 = { func_465(iParam0) };
	num = func_466(iParam0);
	func_467(&(unk.f_19), unk.f_11, unk33, num);
	func_457(&unk, unk32);
	return;
}

BOOL func_299(int iParam0) // Position - 0x7F43 Signature - 22 01 04 00 00 2F 67 03 66 03 6D 1F
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)) && Global_1225687[i /*303*/][iParam0 /*23*/].f_22 != -1)
			return false;
	}

	return true;
}

void func_300(int iParam0) // Position - 0x7F86 Signature - 22 01 20
{
	int num;
	var unk;

	if (Global_1225099.f_587 == 0)
	{
	}
	else
	{
		Global_1225099.f_587 = Global_1225099.f_587 - 1;
	}

	if (func_315(func_314(Global_1225099[iParam0 /*28*/])))
		func_468(iParam0);

	num = func_469(iParam0);

	if (num != -1)
		func_470(num);

	Global_1225099[iParam0 /*28*/].f_2 = -1;
	func_132(iParam0);
	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	unk.f_9 = -1;
	unk.f_15 = 255;
	unk.f_16 = 255;
	unk.f_17 = 255;
	unk.f_18 = 255;
	unk.f_22.f_1 = -1;
	Global_1225099[iParam0 /*28*/] = { unk };
	return;
}

struct<40> func_301(var uParam0, int iParam1) // Position - 0x8052 Signature - 22 02 54
{
	var unk;
	var unk41;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = 255;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_8 = 2;
	unk.f_8.f_1 = -1;
	unk.f_8.f_5 = -1;
	unk.f_8.f_5.f_1 = -1;
	unk.f_8.f_5.f_3 = -1;
	unk.f_8.f_5.f_4 = -1;
	unk.f_8.f_5.f_5 = -1;
	unk.f_8.f_5.f_6 = -1;
	unk.f_8.f_5.f_6.f_1 = -1;
	unk.f_8.f_5.f_9 = 2;
	unk.f_23.f_1 = 1024;
	unk.f_23.f_4 = -15;
	unk.f_23.f_5 = 255;
	unk.f_23.f_8 = 1;
	unk.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_23.f_13 = -1;

	if (!func_471(uParam0, iParam1))
		return unk;

	unk41 = { uParam0->f_3[iParam1 /*40*/] };
	uParam0->f_3[iParam1 /*40*/] = { unk };
	return unk41;
}

void func_302(var uParam0, int iParam1) // Position - 0x813A Signature - 22 02 09 00 00 66 00 27
{
	int num;
	int i;
	int num2;
	int num3;
	int num4;

	num = ((uParam0->f_1 + *uParam0) - 1) % uParam0->f_2;

	if (uParam0->f_1 == iParam1)
	{
		num2 = *uParam0;
	
		for (i = 0; i < *uParam0; i = i + 1)
		{
			num3 = (uParam0->f_1 + i) % uParam0->f_2;
		
			if (uParam0->f_3[num3 /*40*/] != -1)
				break;
		
			if (uParam0->f_3[num3 /*40*/].f_4 != -1)
				func_301(uParam0, num3);
		
			num2 = num2 - 1;
		}
	
		uParam0->f_1 = num3;
		*uParam0 = num2;
	}
	else if (num == iParam1)
	{
		num2 = *uParam0;
	
		for (i = 0; i < *uParam0; i = i + 1)
		{
			num4 = ((num - i) + 5) % uParam0->f_2;
		
			if (uParam0->f_3[num4 /*40*/] != -1)
				break;
		
			func_301(uParam0, num4);
			num2 = num2 - 1;
		}
	
		*uParam0 = num2;
	}

	return;
}

int func_303() // Position - 0x825C Signature - 22 00 02 00 00 5D A3 D7 13 27
{
	return Global_1300387.f_150;
}

BOOL func_304(int iParam0) // Position - 0x826A Signature - 22 01 03 00 00 5D A3
{
	return Global_1300387.f_288.f_2 && iParam0 != false;
}

int func_305() // Position - 0x8280 Signature - 22 00 02 00 00 5D A3 D7 13 78
{
	return Global_1300387.f_288;
}

BOOL func_306() // Position - 0x828F Signature - 22 00 03 00 00 39 ED
{
	int threadId;

	threadId = func_472();

	if (!SCRIPTS::DOES_THREAD_EXIST(threadId))
		return false;

	return SCRIPTS::IS_THREAD_ACTIVE(threadId, false);
}

void func_307(int iParam0) // Position - 0x82B2 Signature - 22 01 03 00 00 66 00 5D A3 D7 13 8C
{
	Global_1300387.f_288 = iParam0;
	return;
}

void func_308(int iParam0) // Position - 0x82C3 Signature - 22 01 03 00 00 66 00 5D A3 D7 13 18
{
	Global_1300387.f_288.f_1 = iParam0;
	return;
}

BOOL func_309(int iParam0, int iParam1) // Position - 0x82D6 Signature - 22 02 04 00 00 66 00 5D B8
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_6 && iParam1 != false;
}

BOOL func_310() // Position - 0x82F2 Signature - 22 00 02 00 00 5D 77
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION() || func_18())
		return false;

	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1219595, false))
		return false;

	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_ambient_content_evaluator", -1, true, 0))
		return false;

	return PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1219595);
}

void func_311(int iParam0) // Position - 0x835B Signature - 22 01 06 00 00 03
{
	Player player;
	var unk;

	player = PLAYER::PLAYER_ID();
	unk = { func_473(iParam0) };

	if (func_474(iParam0) <= 0)
	{
		unk = { func_475(iParam0) };
	
		if (func_36(unk))
		{
			func_476(iParam0);
			return;
		}
	
		return;
	}

	if (!func_36(unk))
	{
		unk = { func_475(iParam0) };
	
		if (func_36(unk))
		{
			func_476(iParam0);
			return;
		}
	}

	if (func_36(unk))
	{
		if (!func_477(iParam0, player, 0))
		{
			func_478(iParam0, unk);
			func_479(iParam0, 0);
		
			if (func_309(iParam0, 256))
				func_479(iParam0, 1);
		}
	
		if (func_112(unk))
		{
			if (func_480(iParam0, 4))
			{
				func_481(iParam0, false, 0);
				return;
			}
			else if (func_480(iParam0, 5))
			{
				func_482(iParam0, 0);
				return;
			}
		}
	}

	switch (func_483(iParam0))
	{
		case 1:
			break;
	
		case 2:
			if (!func_309(iParam0, 2))
				return;
		
			if (!func_484(iParam0))
			{
				func_485(iParam0, 0);
				return;
			}
		
			if (!func_51(unk) && !func_112(unk))
				if (!func_477(iParam0, player, 2) && !func_477(iParam0, player, 3))
					if (func_480(iParam0, 3) || func_486(iParam0) == Global_1295666.f_10)
						func_487(iParam0);
			else if (!func_480(iParam0, 3) && func_486(iParam0) != Global_1295666.f_10)
				func_485(iParam0, 0);
			break;
	
		case 4:
			if (!func_309(iParam0, 2))
			{
				if (func_309(iParam0, 2048))
					func_488(iParam0);
			
				return;
			}
		
			if (func_51(unk))
			{
				if (func_480(iParam0, 4))
				{
					func_489(iParam0, false, true, true);
					func_481(iParam0, false, 0);
				}
				else
				{
					func_489(iParam0, false, true, true);
					func_482(iParam0, 0);
				}
			}
			else if (func_112(unk))
			{
				func_482(iParam0, 0);
			}
			else
			{
				func_479(iParam0, 6);
			}
		
			if (func_490(iParam0))
				func_488(iParam0);
			break;
	
		case 5:
		case 6:
			if (func_477(iParam0, player, 0))
				func_476(iParam0);
			break;
	}

	return;
}

void func_312(int iParam0, int iParam1, BOOL bParam2) // Position - 0x85AC Signature - 22 03 05 00 00 66 00 66 01 39
{
	func_491(iParam0, iParam1);

	if (!bParam2)
	{
		func_492(iParam0, iParam1);
	}
	else
	{
		func_493(iParam0, iParam1);
		func_494(iParam0, iParam1);
	}

	return;
}

void func_313(int iParam0) // Position - 0x85DE Signature - 22 01 04 00 00 66 00 39 4D
{
	int num;

	num = func_483(iParam0);

	if (num > -1 && num < 5)
	{
		if (!func_36(func_473(iParam0)))
		{
			func_495(iParam0, 5);
			return;
		}
	}

	if (!func_496(iParam0) && num < 5)
	{
		func_497(iParam0);
		func_495(iParam0, 5);
		return;
	}

	switch (num)
	{
		case -1:
			if (!func_36(func_473(iParam0)))
				return;
		
			if (func_309(iParam0, 32))
				Global_1207480.f_231.f_1066[iParam0 /*17*/].f_8[0 /*4*/].f_1 = iParam0;
		
			if (Global_1207480.f_231.f_1066[iParam0 /*17*/].f_5 != 255)
			{
				func_498(iParam0, Global_1207480.f_231.f_1066[iParam0 /*17*/].f_5);
				func_495(iParam0, 2);
			}
			else
			{
				func_495(iParam0, 1);
			}
			break;
	
		case 0:
			break;
	
		case 1:
			if (func_499(iParam0) != 255)
			{
				func_495(iParam0, 2);
				return;
			}
		
			if (func_500(iParam0, 3))
			{
				func_495(iParam0, 2);
				return;
			}
		
			if (func_501(iParam0))
			{
				func_495(iParam0, 5);
				return;
			}
			break;
	
		case 2:
			if (func_499(iParam0) == 255 && !func_500(iParam0, 3))
			{
				func_495(iParam0, 4);
				return;
			}
		
			if (func_502(iParam0))
			{
				func_495(iParam0, 5);
				return;
			}
		
			if (func_500(iParam0, 4) || func_500(iParam0, 5))
			{
				func_495(iParam0, 3);
				return;
			}
		
			func_503(iParam0);
			break;
	
		case 3:
			if (func_504(iParam0))
				return;
		
			func_495(iParam0, 4);
			break;
	
		case 4:
			if (!func_502(iParam0))
				return;
		
			func_495(iParam0, 5);
			break;
	
		case 5:
			if (!func_502(iParam0))
				return;
		
			if (func_474(iParam0) > 1)
				func_505(iParam0, 1);
		
			func_495(iParam0, 6);
			break;
	
		case 6:
			break;
	}

	return;
}

int func_314(int iParam0) // Position - 0x87DB Signature - 22 01 03 00 00 66 00 08 15 04 00 2F 50 01 01 66 00 5D F6 FF 12 63
{
	if (iParam0 == -1)
		return 0;

	return Global_1245174[iParam0 /*5*/].f_2;
}

BOOL func_315(int iParam0) // Position - 0x87F7 Signature - 22 01 03 00 00 2F 50 01 01 22 01
{
	return false;
}

int func_316(int iParam0) // Position - 0x8800 Signature - 22 01 04 00 00 66 00 39 84
{
	int num;

	num = func_506(iParam0);

	if (num != 0)
		return num;

	if (func_76(Global_1235687[iParam0 /*697*/].f_571) && !func_147(iParam0, 131072))
	{
		num = func_507(iParam0);
	
		if (num != 0)
			return num;
	}
	else if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225099[iParam0 /*28*/].f_14), PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		num = func_508(iParam0);
	
		if (num != 0)
			return num;
	}

	return 1;
}

void func_317(int iParam0, int iParam1) // Position - 0x887E Signature - 22 02 04 00 00 66 00 6D FF 39 A4
{
	if (func_509(iParam0, 255) != iParam1)
		Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_20 = iParam1;

	return;
}

void func_318(int iParam0, int iParam1) // Position - 0x88A6 Signature - 22 02 0A 00 00 66 00 39
{
	var unk;
	BOOL flag;
	var unk2;
	int num;
	BOOL flag2;

	if (!func_63(iParam0))
		return;

	if (iParam1 != 0 && !func_40(iParam0, 128))
	{
		func_253(iParam1, false);
		func_150(iParam0, 128);
	}

	if (func_66(iParam0, 32, 255))
		return;

	if (func_66(iParam0, 64, 255))
		return;

	func_510(iParam0, &unk);
	func_511(iParam0);
	flag = Global_1235687[iParam0 /*697*/].f_571 != joaat("INTRO_MISSION");
	unk2 = { Global_1235687[iParam0 /*697*/].f_598 };

	if (flag)
		if (!func_51(unk2) && !func_112(unk2))
			func_319(iParam0);

	func_320(iParam0, 32);
	func_150(iParam0, 16);
	num = func_113(Global_1235687[iParam0 /*697*/].f_571);

	if (num != 0)
		func_512(num);

	if (func_398(Global_1235687[iParam0 /*697*/].f_571) && SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225099[iParam0 /*28*/].f_14), PLAYER::PLAYER_ID()))
		func_513(iParam0);

	if (Global_1235687[iParam0 /*697*/].f_571 == joaat("CAMP_SELL") && !SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225099[iParam0 /*28*/].f_14), PLAYER::PLAYER_ID()))
		func_514();

	if (func_122(iParam0) && Global_1225099[iParam0 /*28*/].f_16 == PLAYER::PLAYER_ID())
	{
		func_123(true);
		func_124(func_515(iParam0));
	}

	if (Global_1235687[iParam0 /*697*/].f_571 == joaat("MOONSHINE_MARKETING") || Global_1235687[iParam0 /*697*/].f_571 == joaat("MOONSHINE_SELL") || Global_1235687[iParam0 /*697*/].f_571 == joaat("MOONSHINE_SETUP_GET_SUPPLIES") || Global_1235687[iParam0 /*697*/].f_571 == joaat("MOONSHINE_SETUP_RESCUE_COOK"))
		func_68(2, true);

	if (flag)
	{
		if (func_112(unk2))
			return;
	
		flag2 = !func_516(func_169(Global_1225099[iParam0 /*28*/]), Global_1225099[iParam0 /*28*/].f_6);
		func_517(unk2, true, flag2, false);
		func_518(Global_1235687[iParam0 /*697*/].f_598, true, 0, -1);
	
		if (Global_1235687[iParam0 /*697*/].f_571 == joaat("hideout"))
			func_519(4);
	}

	return;
}

void func_319(int iParam0) // Position - 0x8AE1 Signature - 22 01 06 00 00 66 00 39 FC
{
	var unk;
	int num;

	if (!func_63(iParam0))
		return;

	if (Global_1235687[iParam0 /*697*/].f_571 == joaat("INTRO_MISSION"))
		return;

	if (func_66(iParam0, 64, 255))
		return;

	unk = { Global_1235687[iParam0 /*697*/].f_598 };

	if (func_112(unk))
		return;

	if (func_51(unk))
		return;

	func_520(unk);

	if (!func_291(Global_1235687[iParam0 /*697*/].f_571, false))
	{
		num = func_521(unk);
	
		if (num != -1)
			func_522(num);
	}

	return;
}

void func_320(int iParam0, int iParam1) // Position - 0x8B7E Signature - 22 02 04 00 00 66 00 39 FC 20 00 05 8B 03 00 50 02 00 66 00 66 01 6D FF 39 66 21 00 05
{
	if (!func_63(iParam0))
		return;

	if (!func_66(iParam0, iParam1, 255))
		func_145(&(Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_19), iParam1);

	return;
}

void func_321(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8BB8 Signature - 22 03 0E 00 00 39
{
	var unk;
	var value;
	int i;

	if (func_17() != 0)
		return;

	if (func_523())
		return;

	if (PED::_IS_ANIMAL_CONTROLLED_BY_A_PLAYER(PLAYER::PLAYER_PED_ID()))
		return;

	if (iParam0 == -1)
		return;

	if (func_427(iParam0, 1) < 0)
		return;

	if (func_427(iParam0, 1) >= 106)
		return;

	if (!bParam1)
		if (!Global_1149432.f_3876.f_2[func_427(iParam0, 1) /*4*/])
			return;

	Global_1149432.f_3876.f_2[func_427(iParam0, 1) /*4*/].f_2 = Global_1149432.f_3876.f_2[func_427(iParam0, 1) /*4*/].f_2 + 1;

	if (!bParam2)
		return;

	if (Global_1295666.f_11 != Global_1295666)
		return;

	unk.f_5 = -1;
	unk.f_4 = 0;
	unk.f_5 = iParam0;
	unk.f_6 = bParam1;
	i = 0;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295666.f_149[i]))
		{
		}
		else if (!GANG::_NETWORK_IS_GANG_MEMBER(Global_1295666.f_10, Global_1295666.f_149[i]))
		{
		}
		else if (Global_1295666.f_149[i] == Global_1295666.f_5)
		{
		}
		else
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, Global_1295666.f_149[i]);
		}
	}

	func_524(&unk, value);
	return;
}

struct<8> func_322(int iParam0, int iParam1) // Position - 0x8CF9 Signature - 22 02 0C 00 00 66
{
	var unk;

	switch (iParam1)
	{
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_friend", 64);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_fake_friend", 64);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_vip", 64);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_friend_primary", 64);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_friend_secondary", 64);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_friend_secondary_and_inactive", 64);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_law_friendly_to_primary", 64);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_law_friendly_to_secondary", 64);
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_law_friendly_to_secondary_none_to_inactive", 64);
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_law_hate_secondary_pvp_active", 64);
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_enemy_team_1", 64);
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_enemy_team_2", 64);
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_prisoner_vip_friendly", 64);
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_prisoner_vip_enemy", 64);
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_enemy_vip_killer", 64);
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_enemy_to_active_players", 64);
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_enemy_to_active_players_only", 64);
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_enemy_to_active_players_likes_inactive_aggro", 64);
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_enemy_to_active_players_and_peds", 64);
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_hate_secondary_pvp_active", 64);
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_hate_secondary_pvp_active_dislike_inactive", 64);
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_friend_to_all", 64);
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_objective_draft_horse", 64);
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "fetch_hostile_animal", 64);
			break;
	}

	TEXT_LABEL_APPEND_STRING(&unk, "_", 64);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 64);
	return unk;
}

void func_323(int iParam0, int iParam1, int iParam2) // Position - 0x8EB4 Signature - 22 03 05 00 00 66 01 39
{
	if (!func_525(iParam1))
		return;

	Global_1235687[iParam0 /*697*/].f_572[iParam1] = iParam2;
	return;
}

void func_324(int iParam0, int iParam1, Hash hParam2) // Position - 0x8EDB Signature - 22 03 05 00 00 66 01 3C 18
{
	switch (iParam1)
	{
		case 1:
			func_526(2, hParam2);
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(2, hParam2);
			break;
	
		case 2:
			func_526(2, hParam2);
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(2, hParam2);
			break;
	
		case 3:
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(2, hParam2);
			func_531(iParam0, 2, hParam2, 1);
			func_531(iParam0, 2, hParam2, 2);
			break;
	
		case 4:
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(2, hParam2);
			func_531(iParam0, 2, hParam2, 1);
			func_531(iParam0, 6, hParam2, 2);
			break;
	
		case 5:
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(2, hParam2);
			func_531(iParam0, 2, hParam2, 1);
			func_531(iParam0, 2, hParam2, 2);
			func_531(iParam0, 6, hParam2, 4);
			func_531(iParam0, 6, hParam2, 3);
			break;
	
		case 6:
			func_526(2, hParam2);
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(2, hParam2);
			func_532(2, hParam2);
			func_531(iParam0, 2, hParam2, 1);
			func_531(iParam0, 2, hParam2, 2);
			func_531(iParam0, 6, hParam2, 4);
			func_531(iParam0, 6, hParam2, 5);
			func_531(iParam0, 6, hParam2, 3);
			break;
	
		case 7:
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(2, hParam2);
			func_532(2, hParam2);
			func_531(iParam0, 2, hParam2, 1);
			func_531(iParam0, 2, hParam2, 2);
			func_531(iParam0, 2, hParam2, 3);
			func_531(iParam0, 2, hParam2, 4);
			func_531(iParam0, 2, hParam2, 5);
			func_531(iParam0, 2, hParam2, 6);
			break;
	
		case 8:
			func_526(6, hParam2);
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(2, hParam2);
			func_532(2, hParam2);
			func_531(iParam0, 2, hParam2, 7);
			func_531(iParam0, 2, hParam2, 3);
			func_531(iParam0, 2, hParam2, 4);
			func_531(iParam0, 2, hParam2, 5);
			func_531(iParam0, 2, hParam2, 6);
			func_531(iParam0, 6, hParam2, 1);
			func_531(iParam0, 6, hParam2, 2);
			break;
	
		case 9:
			func_526(6, hParam2);
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(2, hParam2);
			func_532(2, hParam2);
			func_531(iParam0, 2, hParam2, 7);
			func_531(iParam0, 2, hParam2, 8);
			func_531(iParam0, 2, hParam2, 3);
			func_531(iParam0, 2, hParam2, 4);
			func_531(iParam0, 2, hParam2, 5);
			func_531(iParam0, 2, hParam2, 6);
			func_531(iParam0, 6, hParam2, 1);
			func_531(iParam0, 6, hParam2, 2);
			break;
	
		case 10:
			func_526(2, hParam2);
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(2, hParam2);
			func_532(2, hParam2);
			func_531(iParam0, 2, hParam2, 7);
			func_531(iParam0, 2, hParam2, 3);
			func_531(iParam0, 2, hParam2, 4);
			func_531(iParam0, 2, hParam2, 5);
			func_531(iParam0, 2, hParam2, 6);
			func_531(iParam0, 6, hParam2, 1);
			func_531(iParam0, 6, hParam2, 2);
			break;
	
		case 11:
			func_526(6, hParam2);
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(2, hParam2);
			func_531(iParam0, 6, hParam2, 1);
			func_531(iParam0, 2, hParam2, 2);
			func_531(iParam0, 2, hParam2, 3);
			func_531(iParam0, 2, hParam2, 4);
			func_531(iParam0, 2, hParam2, 5);
			func_531(iParam0, 2, hParam2, 6);
			func_531(iParam0, 6, hParam2, 7);
			func_531(iParam0, 6, hParam2, 8);
			func_531(iParam0, 6, hParam2, 9);
			func_531(iParam0, 6, hParam2, 10);
			break;
	
		case 12:
			func_526(6, hParam2);
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(2, hParam2);
			func_531(iParam0, 6, hParam2, 1);
			func_531(iParam0, 2, hParam2, 2);
			func_531(iParam0, 2, hParam2, 3);
			func_531(iParam0, 2, hParam2, 4);
			func_531(iParam0, 2, hParam2, 5);
			func_531(iParam0, 2, hParam2, 6);
			func_531(iParam0, 6, hParam2, 7);
			func_531(iParam0, 6, hParam2, 8);
			func_531(iParam0, 6, hParam2, 9);
			func_531(iParam0, 6, hParam2, 10);
			func_531(iParam0, 6, hParam2, 11);
			break;
	
		case 13:
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(2, hParam2);
			func_532(2, hParam2);
			func_531(iParam0, 2, hParam2, 1);
			func_531(iParam0, 2, hParam2, 2);
			func_531(iParam0, 2, hParam2, 3);
			func_531(iParam0, 2, hParam2, 4);
			func_531(iParam0, 2, hParam2, 5);
			func_531(iParam0, 2, hParam2, 6);
			func_531(iParam0, 2, hParam2, 7);
			func_531(iParam0, 0, hParam2, 8);
			func_531(iParam0, 0, hParam2, 9);
			func_531(iParam0, 0, hParam2, 10);
			func_531(iParam0, 2, hParam2, 11);
			func_531(iParam0, 2, hParam2, 12);
			break;
	
		case 14:
			func_526(6, hParam2);
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(2, hParam2);
			func_532(2, hParam2);
			func_531(iParam0, 2, hParam2, 1);
			func_531(iParam0, 2, hParam2, 2);
			func_531(iParam0, 2, hParam2, 3);
			func_531(iParam0, 2, hParam2, 4);
			func_531(iParam0, 2, hParam2, 5);
			func_531(iParam0, 2, hParam2, 6);
			func_531(iParam0, 2, hParam2, 7);
			func_531(iParam0, 0, hParam2, 8);
			func_531(iParam0, 0, hParam2, 9);
			func_531(iParam0, 0, hParam2, 10);
			func_531(iParam0, 2, hParam2, 11);
			func_531(iParam0, 2, hParam2, 12);
			break;
	
		case 15:
			func_526(0, hParam2);
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(2, hParam2);
			func_531(iParam0, 2, hParam2, 11);
			func_531(iParam0, 2, hParam2, 12);
			func_531(iParam0, 6, hParam2, 1);
			func_531(iParam0, 6, hParam2, 2);
			func_531(iParam0, 6, hParam2, 3);
			func_531(iParam0, 6, hParam2, 4);
			func_531(iParam0, 2, hParam2, 5);
			func_531(iParam0, 2, hParam2, 6);
			func_531(iParam0, 6, hParam2, 13);
			func_531(iParam0, 6, hParam2, 14);
			func_531(iParam0, 0, hParam2, 7);
			func_531(iParam0, 0, hParam2, 8);
			func_531(iParam0, 0, hParam2, 9);
			func_531(iParam0, 0, hParam2, 10);
			break;
	
		case 16:
			func_526(6, hParam2);
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(2, hParam2);
			func_531(iParam0, 2, hParam2, 11);
			func_531(iParam0, 2, hParam2, 12);
			func_531(iParam0, 6, hParam2, 8);
			func_531(iParam0, 6, hParam2, 9);
			func_531(iParam0, 6, hParam2, 10);
			func_531(iParam0, 2, hParam2, 3);
			func_531(iParam0, 6, hParam2, 1);
			func_531(iParam0, 6, hParam2, 2);
			func_531(iParam0, 6, hParam2, 7);
			func_531(iParam0, 6, hParam2, 4);
			func_531(iParam0, 6, hParam2, 5);
			func_531(iParam0, 6, hParam2, 6);
			func_531(iParam0, 6, hParam2, 13);
			func_531(iParam0, 6, hParam2, 14);
			break;
	
		case 17:
			func_526(6, hParam2);
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(2, hParam2);
			func_531(iParam0, 2, hParam2, 11);
			func_531(iParam0, 2, hParam2, 12);
			func_531(iParam0, 2, hParam2, 8);
			func_531(iParam0, 2, hParam2, 9);
			func_531(iParam0, 2, hParam2, 10);
			func_531(iParam0, 2, hParam2, 3);
			func_531(iParam0, 2, hParam2, 1);
			func_531(iParam0, 2, hParam2, 2);
			func_531(iParam0, 2, hParam2, 7);
			func_531(iParam0, 2, hParam2, 4);
			func_531(iParam0, 2, hParam2, 5);
			func_531(iParam0, 2, hParam2, 6);
			func_531(iParam0, 2, hParam2, 13);
			func_531(iParam0, 2, hParam2, 14);
			break;
	
		case 18:
			func_526(6, hParam2);
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(2, hParam2);
			func_531(iParam0, 2, hParam2, 11);
			func_531(iParam0, 2, hParam2, 12);
			func_531(iParam0, 2, hParam2, 8);
			func_531(iParam0, 2, hParam2, 9);
			func_531(iParam0, 6, hParam2, 10);
			func_531(iParam0, 2, hParam2, 3);
			func_531(iParam0, 6, hParam2, 1);
			func_531(iParam0, 6, hParam2, 2);
			func_531(iParam0, 6, hParam2, 7);
			func_531(iParam0, 6, hParam2, 4);
			func_531(iParam0, 6, hParam2, 5);
			func_531(iParam0, 6, hParam2, 6);
			func_531(iParam0, 6, hParam2, 13);
			func_531(iParam0, 6, hParam2, 14);
			func_531(iParam0, 2, hParam2, 16);
			break;
	
		case 19:
			func_526(6, hParam2);
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(2, hParam2);
			func_531(iParam0, 2, hParam2, 11);
			func_531(iParam0, 2, hParam2, 12);
			func_531(iParam0, 6, hParam2, 8);
			func_531(iParam0, 6, hParam2, 9);
			func_531(iParam0, 6, hParam2, 10);
			func_531(iParam0, 2, hParam2, 3);
			func_531(iParam0, 6, hParam2, 1);
			func_531(iParam0, 6, hParam2, 2);
			func_531(iParam0, 6, hParam2, 7);
			func_531(iParam0, 6, hParam2, 4);
			func_531(iParam0, 6, hParam2, 5);
			func_531(iParam0, 6, hParam2, 6);
			func_531(iParam0, 6, hParam2, 13);
			func_531(iParam0, 6, hParam2, 14);
			func_531(iParam0, 6, hParam2, 20);
			func_531(iParam0, 6, hParam2, 21);
			break;
	
		case 20:
			func_526(2, hParam2);
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(2, hParam2);
			func_531(iParam0, 2, hParam2, 1);
			func_531(iParam0, 2, hParam2, 2);
			func_531(iParam0, 2, hParam2, 3);
			func_531(iParam0, 2, hParam2, 4);
			func_531(iParam0, 6, hParam2, 5);
			func_531(iParam0, 6, hParam2, 6);
			func_531(iParam0, 6, hParam2, 7);
			func_531(iParam0, 2, hParam2, 8);
			func_531(iParam0, 2, hParam2, 9);
			func_531(iParam0, 6, hParam2, 10);
			func_531(iParam0, 6, hParam2, 13);
			func_531(iParam0, 6, hParam2, 11);
			func_531(iParam0, 6, hParam2, 12);
			break;
	
		case 21:
			func_526(0, hParam2);
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(2, hParam2);
			func_531(iParam0, 2, hParam2, 1);
			func_531(iParam0, 2, hParam2, 2);
			func_531(iParam0, 2, hParam2, 3);
			func_531(iParam0, 2, hParam2, 4);
			func_531(iParam0, 6, hParam2, 5);
			func_531(iParam0, 6, hParam2, 6);
			func_531(iParam0, 6, hParam2, 7);
			func_531(iParam0, 2, hParam2, 8);
			func_531(iParam0, 2, hParam2, 9);
			func_531(iParam0, 6, hParam2, 10);
			func_531(iParam0, 6, hParam2, 13);
			func_531(iParam0, 6, hParam2, 11);
			func_531(iParam0, 6, hParam2, 12);
			func_531(iParam0, 6, hParam2, 15);
			break;
	
		case 22:
			func_526(2, hParam2);
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(2, hParam2);
			func_530(2, hParam2);
			func_531(iParam0, 2, hParam2, 11);
			func_531(iParam0, 2, hParam2, 12);
			func_531(iParam0, 2, hParam2, 1);
			func_531(iParam0, 2, hParam2, 2);
			func_531(iParam0, 2, hParam2, 3);
			func_531(iParam0, 2, hParam2, 4);
			func_531(iParam0, 2, hParam2, 5);
			func_531(iParam0, 2, hParam2, 6);
			func_531(iParam0, 2, hParam2, 13);
			func_531(iParam0, 2, hParam2, 14);
			func_531(iParam0, 2, hParam2, 16);
			func_531(iParam0, 2, hParam2, 18);
			func_531(iParam0, 2, hParam2, 7);
			func_531(iParam0, 2, hParam2, 8);
			func_531(iParam0, 2, hParam2, 9);
			func_531(iParam0, 2, hParam2, 10);
			break;
	
		case 23:
			func_526(2, hParam2);
			func_527(2, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(2, hParam2);
			func_531(iParam0, 2, hParam2, 11);
			func_531(iParam0, 2, hParam2, 12);
			func_531(iParam0, 2, hParam2, 1);
			func_531(iParam0, 2, hParam2, 2);
			func_531(iParam0, 2, hParam2, 3);
			func_531(iParam0, 2, hParam2, 4);
			func_531(iParam0, 2, hParam2, 5);
			func_531(iParam0, 2, hParam2, 6);
			func_531(iParam0, 2, hParam2, 13);
			func_531(iParam0, 2, hParam2, 14);
			func_531(iParam0, 2, hParam2, 16);
			func_531(iParam0, 2, hParam2, 18);
			func_531(iParam0, 2, hParam2, 7);
			func_531(iParam0, 2, hParam2, 8);
			func_531(iParam0, 2, hParam2, 9);
			func_531(iParam0, 2, hParam2, 10);
			break;
	
		case 24:
			func_526(6, hParam2);
			func_527(0, hParam2);
			func_528(0, hParam2);
			func_529(0, hParam2);
			func_530(0, hParam2);
			func_531(iParam0, 6, hParam2, 11);
			func_531(iParam0, 6, hParam2, 12);
			func_531(iParam0, 0, hParam2, 1);
			func_531(iParam0, 0, hParam2, 2);
			func_531(iParam0, 6, hParam2, 3);
			func_531(iParam0, 6, hParam2, 4);
			func_531(iParam0, 6, hParam2, 5);
			func_531(iParam0, 6, hParam2, 6);
			func_531(iParam0, 6, hParam2, 13);
			func_531(iParam0, 6, hParam2, 14);
			func_531(iParam0, 6, hParam2, 16);
			func_531(iParam0, 6, hParam2, 18);
			func_531(iParam0, 6, hParam2, 7);
			func_531(iParam0, 6, hParam2, 8);
			func_531(iParam0, 6, hParam2, 9);
			func_531(iParam0, 6, hParam2, 10);
			break;
	}

	return;
}

var func_325(int iParam0, int iParam1) // Position - 0x9C9D Signature - 22 02 0A 00 00 4B 05 66 00 39 04 B2 00 6A 8B 09 00 4B 05 66 01 39 4F BE 00 69 8B 11 00 62 4B 05 2D 37 7E
{
	var unk;
	var unk2;

	if (func_360(&unk2, iParam0) && func_389(&unk2, iParam1))
		func_362(unk2, -1303506050, &unk, true);

	return unk;
}

struct<2> func_326(int iParam0) // Position - 0x9CD0 Signature - 22 01 05 00 00 66 00 5D 8B
{
	int num;
	int num2;

	num = Global_1225099[iParam0 /*28*/];
	num2 = Global_1225099[iParam0 /*28*/].f_6;
	return func_533(num, num2);
}

Hash func_327(int iParam0, int iParam1) // Position - 0x9CF6 Signature - 22 02 05 00 00 66 00 08 15 04 00 2F 50 02 01 66 00 66 01 39 13 06 01 67 04 66 04 5D F6 FF 12 18 36 02 17
{
	int num;

	if (iParam0 == -1)
		return 0;

	num = func_534(iParam0, iParam1);
	return Global_1245174.f_566[num /*7*/];
}

Hash func_328(int iParam0, int iParam1) // Position - 0x9D1D Signature - 22 02 05 00 00 66 00 08 15 04 00 2F 50 02 01 66 00 66 01 39 13 06 01 67 04 66 04 5D F6 FF 12 18 36 02 63
{
	int num;

	if (iParam0 == -1)
		return 0;

	num = func_534(iParam0, iParam1);
	return Global_1245174.f_566[num /*7*/].f_1;
}

int func_329(int iParam0, int iParam1) // Position - 0x9D46 Signature - 22 02 0A 00 00 2F 67 04 4B 05 66 00 39 04 B2 00 6A 8B 09 00 4B 05 66 01 39 4F BE 00 69 8B 22
{
	int numChildren;
	Any any;

	numChildren = 0;

	if (func_360(&any, iParam0) && func_389(&any, iParam1))
	{
		any.f_2 = -1052194144;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(any.f_1), &any))
			numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any.f_1);
	}

	return numChildren;
}

var func_330(int iParam0, int iParam1, int iParam2) // Position - 0x9D8D Signature - 22 03 0B 00 00 4B 06 66 00 39 04 B2 00 6A 8B 09 00 4B 06 66 01 39 4F BE 00 69 6A 8B 09 00 4B 06 66 02 39 32 06 01 69 8B 11 00 62 4B 06 2D 37 05
{
	var unk;
	var unk2;

	if (func_360(&unk2, iParam0) && func_389(&unk2, iParam1) && func_535(&unk2, iParam2))
		func_362(unk2, 1609846533, &unk, false);

	return unk;
}

var func_331(int iParam0, int iParam1, int iParam2) // Position - 0x9DCD Signature - 22 03 0B 00 00 4B 06 66 00 39 04 B2 00 6A 8B 09 00 4B 06 66 01 39 4F BE 00 69 6A 8B 09 00 4B 06 66 02 39 32 06 01 69 8B 11 00 62 4B 06 2D 37 11
{
	var unk;
	var unk2;

	if (func_360(&unk2, iParam0) && func_389(&unk2, iParam1) && func_535(&unk2, iParam2))
		func_362(unk2, -1702365423, &unk, false);

	return unk;
}

var func_332(int iParam0, int iParam1, int iParam2) // Position - 0x9E0D Signature - 22 03 0B 00 00 4B 06 66 00 39 04 B2 00 6A 8B 09 00 4B 06 66 01 39 4F BE 00 69 6A 8B 09 00 4B 06 66 02 39 32 06 01 69 8B 11 00 62 4B 06 2D 37 7E
{
	var unk;
	var unk2;

	if (func_360(&unk2, iParam0) && func_389(&unk2, iParam1) && func_535(&unk2, iParam2))
		func_362(unk2, -1303506050, &unk, false);

	return unk;
}

Vector3 func_333(int iParam0, int iParam1) // Position - 0x9E4D Signature - 22 02 05 00 00 66 00 08 15 06
{
	int num;

	if (iParam0 == -1)
		return 0f, 0f, 0f;

	num = func_534(iParam0, iParam1);
	return Global_1245174.f_566[num /*7*/].f_3;
}

int func_334(int iParam0, var uParam1, int iParam2) // Position - 0x9E7A Signature - 22 03 05 00 00 66 01 66 00 76
{
	return func_536(uParam1, *iParam0, iParam0->f_1, iParam2, 1);
}

int func_335(int iParam0, int iParam1) // Position - 0x9E92 Signature - 22 02 05 00 00 66 00 08 15 04 00 08
{
	int num;

	if (iParam0 == -1)
		return -1;

	num = func_534(iParam0, iParam1);
	return Global_1245174.f_566[num /*7*/].f_6;
}

Vector3 func_336(int iParam0, int iParam1, int iParam2) // Position - 0x9EBB Signature - 22 03 0D 00 00 4B
{
	var unk;
	var unk4;

	if (func_360(&unk4, iParam0) && func_389(&unk4, iParam1) && func_537(&unk4, iParam2))
		func_538(unk4, 1702777600, &unk, false);

	return unk;
}

BOOL func_337(int iParam0, int iParam1) // Position - 0x9EFD Signature - 22 02 0A 00 00 4B 05 66 00 39 04 B2 00 6A 8B 09 00 4B 05 66 01 39 4F BE 00 69 8B 11 00 62 4B 05 2D 37 61
{
	BOOL unk;
	var unk2;

	if (func_360(&unk2, iParam0) && func_389(&unk2, iParam1))
		func_539(unk2, 1172354913, &unk, false);

	return unk;
}

BOOL func_338(int iParam0, int iParam1) // Position - 0x9F30 Signature - 22 02 0A 00 00 4B 05 66 00 39 04 B2 00 6A 8B 09 00 4B 05 66 01 39 4F BE 00 69 8B 11 00 62 4B 05 2D 37 08
{
	BOOL unk;
	var unk2;

	if (func_360(&unk2, iParam0) && func_389(&unk2, iParam1))
		func_539(unk2, -542588664, &unk, false);

	return unk;
}

BOOL func_339(int iParam0, int iParam1) // Position - 0x9F63 Signature - 22 02 0A 00 00 4B 05 66 00 39 04 B2 00 6A 8B 09 00 4B 05 66 01 39 4F BE 00 69 8B 11 00 62 4B 05 2D 37 85
{
	BOOL unk;
	var unk2;

	if (func_360(&unk2, iParam0) && func_389(&unk2, iParam1))
		func_539(unk2, -666510715, &unk, false);

	return unk;
}

BOOL func_340(int iParam0, int iParam1) // Position - 0x9F96 Signature - 22 02 0A 00 00 4B 05 66 00 39 04 B2 00 6A 8B 09 00 4B 05 66 01 39 4F BE 00 69 8B 11 00 62 4B 05 2D 37 D8
{
	BOOL unk;
	var unk2;

	if (func_360(&unk2, iParam0) && func_389(&unk2, iParam1))
		func_539(unk2, -1530051112, &unk, false);

	return unk;
}

BOOL func_341(int iParam0, int iParam1) // Position - 0x9FC9 Signature - 22 02 0A 00 00 4B 05 66 00 39 04 B2 00 6A 8B 09 00 4B 05 66 01 39 4F BE 00 69 8B 11 00 62 4B 05 2D 37 A1
{
	BOOL unk;
	var unk2;

	if (func_360(&unk2, iParam0) && func_389(&unk2, iParam1))
		func_539(unk2, -1755519071, &unk, false);

	return unk;
}

BOOL func_342(int iParam0, int iParam1) // Position - 0x9FFC Signature - 22 02 0A 00 00 4B 05 66 00 39 04 B2 00 6A 8B 09 00 4B 05 66 01 39 4F BE 00 69 8B 11 00 62 4B 05 2D 37 B3
{
	BOOL unk;
	var unk2;

	if (func_360(&unk2, iParam0) && func_389(&unk2, iParam1))
		func_539(unk2, 311522483, &unk, false);

	return unk;
}

BOOL func_343(int iParam0, int iParam1) // Position - 0xA02F Signature - 22 02 0A 00 00 2F 67 04 4B 05 66 00 39 04 B2 00 6A 8B 09 00 4B 05 66 01 39 3B B2 00 69 8B 11 00 62 4B 05 2D 37 C4
{
	BOOL num;
	var unk;

	num = 0;

	if (func_360(&unk, iParam0) && func_361(&unk, iParam1))
		func_539(unk, 521215940, &num, false);

	return num;
}

void func_344(int iParam0) // Position - 0xA065 Signature - 22 01 0C
{
	BOOL flag;
	int num;
	int num2;
	int num3;
	BOOL flag2;
	int num4;
	float num5;
	BOOL flag3;
	BOOL flag4;

	num5 = 425f;
	flag3 = func_147(iParam0, 16);

	if (!flag3)
		num5 = Global_1901671.f_245.f_64;

	if (func_66(iParam0, 2, 255))
		num5 = num5 + 50f;

	switch (Global_1235687[iParam0 /*697*/].f_571)
	{
		case -2096602762:
		case -1812122325:
		case joaat("bounty_board"):
		case joaat("gun_for_hire"):
		case -697789102:
		case joaat("CAMP_RESUPPLY"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case 195932838:
		case joaat("outlaw"):
		case joaat("CAMP_SETUP"):
		case 918897273:
		case joaat("MOONSHINE_SELL"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("CAMP_SELL"):
			if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225099[iParam0 /*28*/].f_14), PLAYER::PLAYER_ID()) && !func_66(iParam0, 32, 255))
			{
				if (!flag3 || func_40(iParam0, 4096))
					num = 1;
			
				flag = true;
				num2 = 1;
			}
			break;
	
		case joaat("AMBUSH"):
		case -1086711901:
		case joaat("MOONSHINE_DYNAMIC"):
		case joaat("hideout"):
			flag = true;
			num = 1;
			flag2 = true;
			num5 = Global_1901671.f_245.f_64 + 50f;
			break;
	
		case joaat("BOUNTY_PLAYER"):
			if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225099[iParam0 /*28*/].f_14), PLAYER::PLAYER_ID()) && !func_66(iParam0, 32, 255) && !func_88(4, 255))
			{
				flag = true;
				num3 = 1;
			}
			break;
	
		case joaat("dynamic"):
			flag = true;
			num2 = 1;
		
			if (!func_147(iParam0, 131072))
			{
				num = 1;
				flag2 = true;
			}
			break;
	
		case joaat("CAMP_RAID"):
			if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225099[iParam0 /*28*/].f_14), PLAYER::PLAYER_ID()) && !func_66(iParam0, 32, 255))
			{
				flag = true;
				num4 = 1;
			}
			break;
	}

	if (flag)
	{
		Global_1235687[iParam0 /*697*/].f_600 = num5;
		func_150(iParam0, 524288);
	
		if (func_540(iParam0, 255, false, false) && func_40(iParam0, 512))
			flag4 = true;
	
		if (!flag4 && !func_541(iParam0, num5, num, num2, num3, flag2, num4))
			func_320(iParam0, 1024);
		else
			func_115(iParam0, 1024);
	
		func_320(iParam0, 512);
	}
	else
	{
		func_110(iParam0, 524288);
		func_115(iParam0, 1024);
		func_320(iParam0, 512);
	}

	return;
}

void func_345(int iParam0) // Position - 0xA2B8 Signature - 22 01 06 00 00 66 00 39 17
{
	int num;
	int num2;
	BOOL flag;

	num = func_542(iParam0);

	if (num == 0)
	{
		func_543(iParam0);
	}
	else
	{
		num2 = Global_1235687[iParam0 /*697*/].f_604;
	
		if (num2 == -1)
			num2 = func_544(num);
	
		if (num2 != -1)
		{
			if (Global_1235687[iParam0 /*697*/].f_604 != num2)
			{
				if (Global_1235687[iParam0 /*697*/].f_604 == -1)
					func_115(iParam0, 2);
			
				Global_1235687[iParam0 /*697*/].f_604 = num2;
			}
		
			if (Global_1235687.f_9062[num2 /*4*/] != -1 && Global_1235687.f_9062[num2 /*4*/] != iParam0)
			{
				func_545(num2, iParam0);
				return;
			}
		
			if (Global_1235687.f_9062[num2 /*4*/].f_1 != -1 && Global_1235687.f_9062[num2 /*4*/].f_1 != iParam0)
			{
				func_543(iParam0);
				return;
			}
		
			func_546(num2, iParam0, iParam0);
			func_547(num2, iParam0, num);
		
			if (func_548(iParam0, num2, &flag))
			{
				if (flag)
					func_320(iParam0, 1048576);
			
				func_320(iParam0, 2);
			}
		}
		else
		{
			func_543(iParam0);
		}
	}

	return;
}

void func_346(var uParam0, var uParam1) // Position - 0xA3CD Signature - 22 02 06 00 00 03 01 01 13 67
{
	int num;
	Player player;

	player = PLAYER::PLAYER_ID();

	if (!func_251(uParam0, func_374()))
		return;

	num = func_549(player);

	if (!func_550(num))
		return;

	func_551(num);

	if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		if (func_552(1) && func_553(num, 1))
			func_554();
	
		if (func_552(0) && NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS() & 9 != 0)
			func_555();
	}

	return;
}

void func_347(int iParam0) // Position - 0xA446 Signature - 22 01 03 00 00 66 00 5D E7 DA 12 40 B9 02 78 3B 02 37 DD 11 0A 96 72 03 00 50 01 00 66 00 25
{
	if (Global_1235687[iParam0 /*697*/].f_571 != joaat("bounty_board"))
		return;

	if (!func_66(iParam0, 4096, 255) && !func_147(iParam0, 4096))
		return;

	if (!func_66(iParam0, 32, 255))
		return;

	if (func_66(iParam0, 64, 255))
		return;

	func_556(iParam0);
	return;
}

BOOL func_348(int iParam0) // Position - 0xA4AB Signature - 22 01 03 00 00 66 00 2F 39 1C
{
	if (!func_33(iParam0, false))
		return false;

	return true;
}

void func_349(int iParam0) // Position - 0xA4C3 Signature - 22 01 03 00 00 5D 98
{
	func_557(&(Global_1142424.f_2040), iParam0);
	return;
}

int func_350(int iParam0) // Position - 0xA4D8 Signature - 22 01 03 00 00 66 00 3C AE
{
	switch (iParam0)
	{
		case joaat("shop_tbl_bartender"):
			return 105;
	
		case joaat("shop_sdn_photo_studio"):
			return 60;
	
		case joaat("SHOP_SDN_THEATER_MAGIC_MP"):
			return 62;
	
		case joaat("shop_shb_doctor"):
			return 172;
	
		case -2076086367:
			return 66;
	
		case joaat("shop_blk_photo_studio"):
			return 12;
	
		case joaat("shop_str_bartender"):
			return 75;
	
		case joaat("shop_asb_bountyhunting_mp_return"):
			return 129;
	
		case joaat("shop_clm_general_store"):
			return 160;
	
		case joaat("shop_asb_train_station"):
			return 2;
	
		case joaat("SHOP_TAL_TRAVELLING_SALESMAN"):
			return 138;
	
		case joaat("shop_dynamic"):
			return 119;
	
		case joaat("SHOP_VAL_PIANIST"):
			return 80;
	
		case joaat("shop_tbl_gunsmith"):
			return 103;
	
		case joaat("shop_rgg_train_station"):
			return 28;
	
		case joaat("shop_amd_general_store"):
			return 108;
	
		case joaat("shop_val_butcher"):
			return 82;
	
		case joaat("SHOP_HRT_W_TRAVELLING_SALESMAN"):
			return 141;
	
		case joaat("shop_emr_train_station"):
			return 25;
	
		case joaat("shop_camp_shaving"):
			return 178;
	
		case joaat("shop_anywhere_handheld"):
			return 152;
	
		case joaat("shop_sdn_coach"):
			return 125;
	
		case joaat("shop_tbl_horse_shop"):
			return 107;
	
		case joaat("shop_tbl_general_store"):
			return 102;
	
		case joaat("shop_blk_butcher"):
			return 9;
	
		case joaat("shop_roj_honor_mp"):
			return 113;
	
		case joaat("shop_amd_bartender"):
			return 110;
	
		case joaat("shop_rho_bank"):
			return 29;
	
		case joaat("SHOP_SDN_THEATER_MP"):
			return 61;
	
		case joaat("shop_van_horse_shop"):
			return 96;
	
		case joaat("SHOP_SDN_MUSICIAN_BANJO"):
			return 59;
	
		case joaat("shop_rho_train_station"):
			return 39;
	
		case joaat("shop_sdn_gunsmith"):
			return 49;
	
		case joaat("shop_boj_honor_mp"):
			return 114;
	
		case joaat("shop_wilderness_supplies"):
			return 133;
	
		case joaat("shop_hso_general_store"):
			return 165;
	
		case joaat("SHOP_RHO_MUSICIAN_BANJO"):
			return 38;
	
		case joaat("shop_blk_barber"):
			return 8;
	
		case joaat("shop_sdn_post_office"):
			return 51;
	
		case joaat("shop_sdn_doctor"):
			return 45;
	
		case joaat("SHOP_BLK_PIANIST"):
			return 11;
	
		case joaat("SHOP_SCM_TRAVELLING_SALESMAN"):
			return 143;
	
		case joaat("shop_amd_honor_mp"):
			return 109;
	
		case joaat("shop_blk_coach"):
			return 123;
	
		case joaat("SHOP_BUT_MUSICIAN_BANJO"):
			return 132;
	
		case joaat("shop_val_general_store"):
			return 84;
	
		case joaat("shop_rgg_post_office"):
			return 27;
	
		case -765151559:
			return 134;
	
		case joaat("SHOP_BGV_TRAVELLING_SALESMAN"):
			return 139;
	
		case joaat("SHOP_RHO_PIANIST"):
			return 37;
	
		case joaat("SHOP_LAK_GENERAL_STORE"):
			return 169;
	
		case joaat("shop_sdn_horse_shop"):
			return 50;
	
		case joaat("SHOP_STR_MUSICIAN_BANJO"):
			return 72;
	
		case joaat("shop_thl_fence"):
			return 130;
	
		case joaat("SHOP_LAK_DOCTOR"):
			return 168;
	
		case joaat("shop_sdn_trapper"):
			return 63;
	
		case joaat("shop_clm_horse_fence"):
			return 163;
	
		case joaat("shop_val_hotel"):
			return 90;
	
		case joaat("SHOP_BLK_TRAIN_STATION"):
			return 15;
	
		case joaat("shop_val_bartender"):
			return 79;
	
		case joaat("SHOP_SDN_PIANIST_SLUM"):
			return 57;
	
		case joaat("shop_van_post_office"):
			return 98;
	
		case joaat("shop_str_post_office"):
			return 74;
	
		case -305029900:
			return 40;
	
		case joaat("shop_bvh_general_store"):
			return 156;
	
		case joaat("shop_bvh_doctor"):
			return 155;
	
		case joaat("shop_shb_gunsmith"):
			return 174;
	
		case joaat("shop_blk_bartender"):
			return 10;
	
		case joaat("shop_lag_bait_store"):
			return 26;
	
		case joaat("shop_str_bountyhunting_mp_return"):
			return 127;
	
		case joaat("SHOP_HRT_E_TRAVELLING_SALESMAN"):
			return 140;
	
		case joaat("shop_sdn_tailor"):
			return 53;
	
		case joaat("SHOP_TBL_PIANIST"):
			return 106;
	
		case joaat("SHOP_GRZ_TRAVELLING_SALESMAN"):
			return 142;
	
		case joaat("shop_bvh_gunsmith"):
			return 157;
	
		case joaat("shop_wal_post_office"):
			return 101;
	
		case joaat("SHOP_SDN_MUSICIAN_GUITARIST"):
			return 58;
	
		case joaat("shop_camp_butchertable"):
			return 154;
	
		case joaat("shop_sdn_barber"):
			return 43;
	
		case joaat("shop_tbl_butcher"):
			return 104;
	
		case joaat("shop_emr_post_office"):
			return 24;
	
		case joaat("shop_sdn_bank"):
			return 42;
	
		case joaat("SHOP_CAMP_TRAVELLING_SALESMAN"):
			return 147;
	
		case joaat("shop_emr_general_store"):
			return 23;
	
		case joaat("shop_van_train_station"):
			return 97;
	
		case 243086140:
			return 4;
	
		case joaat("shop_sdn_train_station"):
			return 52;
	
		case joaat("shop_blk_post_office"):
			return 14;
	
		case joaat("shop_clm_horse_trainer"):
			return 162;
	
		case joaat("shop_shb_horse_trainer"):
			return 175;
	
		case joaat("shop_rho_post_office"):
			return 35;
	
		case joaat("shop_rho_bartender"):
			return 36;
	
		case joaat("shop_rho_fence"):
			return 31;
	
		case 317019665:
			return 150;
	
		case joaat("shop_sdn_fence"):
			return 46;
	
		case joaat("shop_rho_butcher"):
			return 30;
	
		case joaat("shop_val_horse_shop"):
			return 86;
	
		case joaat("shop_ben_post_office"):
			return 117;
	
		case joaat("shop_blk_general_store"):
			return 6;
	
		case joaat("shop_amd_train_station"):
			return 112;
	
		case joaat("SHOP_VAN_PIANIST"):
			return 95;
	
		case joaat("SHOP_SDN_PIANIST"):
			return 55;
	
		case joaat("SHOP_DER_TRAVELLING_SALESMAN"):
			return 145;
	
		case joaat("shop_wal_general_store"):
			return 99;
	
		case 548657065:
			return 3;
	
		case joaat("shop_str_horse_shop"):
			return 71;
	
		case joaat("shop_asb_post_office"):
			return 1;
	
		case joaat("SHOP_CHO_TRAVELLING_SALESMAN"):
			return 136;
	
		case joaat("shop_van_coach"):
			return 128;
	
		case joaat("shop_val_doctor"):
			return 83;
	
		case joaat("shop_val_barber"):
			return 78;
	
		case joaat("shop_val_post_office"):
			return 87;
	
		case joaat("shop_rho_gunsmith"):
			return 34;
	
		case joaat("SHOP_VAL_THEATER_MAGIC_MP"):
			return 89;
	
		case joaat("shop_val_coach"):
			return 121;
	
		case joaat("shop_sdn_general_store"):
			return 48;
	
		case 878376253:
			return 64;
	
		case joaat("SHOP_BLK_MUSICIAN_GUITARIST_FIRST"):
			return 16;
	
		case joaat("shop_blk_horse_shop"):
			return 13;
	
		case joaat("shop_str_general_store"):
			return 69;
	
		case joaat("shop_sdn_butcher"):
			return 44;
	
		case joaat("shop_rho_general_store"):
			return 33;
	
		case 1008537949:
			return 76;
	
		case joaat("shop_moonshine_still"):
			return 20;
	
		case joaat("shop_blk_gunsmith"):
			return 7;
	
		case joaat("shop_clothing"):
			return 177;
	
		case joaat("shop_ryc_fence"):
			return 116;
	
		case joaat("shop_camp_lockbox"):
			return 153;
	
		case joaat("shop_asb_gunsmith"):
			return 0;
	
		case joaat("shop_clm_doctor"):
			return 159;
	
		case joaat("SHOP_VAL_BARTENDER_KEANE"):
			return 81;
	
		case joaat("shop_val_bank"):
			return 77;
	
		case joaat("shop_hso_gunsmith"):
			return 166;
	
		case 1239556700:
			return 148;
	
		case joaat("shop_wardrobe"):
			return 179;
	
		case joaat("shop_emr_fence"):
			return 22;
	
		case joaat("SHOP_HEN_TRAVELLING_SALESMAN"):
			return 137;
	
		case joaat("shop_amd_post_office"):
			return 111;
	
		case joaat("shop_ben_train_station"):
			return 118;
	
		case joaat("shop_shb_general_store"):
			return 173;
	
		case 1388932648:
			return 65;
	
		case joaat("SHOP_STR_MUSICIAN_GUITARIST"):
			return 73;
	
		case 1421441577:
			return 151;
	
		case joaat("shop_sdn_bartender_slum"):
			return 56;
	
		case joaat("shop_blk_tailor"):
			return 19;
	
		case joaat("SHOP_VAN_FENCE"):
			return 93;
	
		case joaat("shop_val_gunsmith"):
			return 85;
	
		case joaat("shop_hso_doctor"):
			return 164;
	
		case joaat("shop_sdn_bountyhunting_mp_return"):
			return 124;
	
		case joaat("shop_scm_horse_shop"):
			return 41;
	
		case joaat("shop_van_bartender"):
			return 94;
	
		case 1529797091:
			return 67;
	
		case joaat("SHOP_LAK_GUNSMITH"):
			return 170;
	
		case joaat("shop_rho_bountyhunting_mp_return"):
			return 126;
	
		case joaat("shop_val_train_station"):
			return 88;
	
		case joaat("shop_blk_bank"):
			return 5;
	
		case joaat("shop_val_bartender_slum"):
			return 91;
	
		case joaat("shop_val_bountyhunting_mp_return"):
			return 120;
	
		case joaat("SHOP_BBR_TRAVELLING_SALESMAN"):
			return 146;
	
		case joaat("SHOP_RIO_TRAVELLING_SALESMAN"):
			return 135;
	
		case joaat("shop_sdn_bartender"):
			return 54;
	
		case joaat("shop_weapon_mod_store"):
			return 176;
	
		case joaat("SHOP_LAK_HORSE_TRAINER"):
			return 171;
	
		case joaat("SHOP_BLK_MUSICIAN_GUITARIST_THIRD"):
			return 18;
	
		case joaat("shop_blk_bountyhunting_mp_return"):
			return 122;
	
		case joaat("shop_wal_train_station"):
			return 100;
	
		case joaat("rage_p2_3") /* collision: shop_str_welcome_center */:
			return 70;
	
		case joaat("SHOP_BLK_MUSICIAN_GUITARIST_SECOND"):
			return 17;
	
		case 1968750441:
			return 149;
	
		case joaat("shop_clm_gunsmith"):
			return 161;
	
		case joaat("shop_str_butcher"):
			return 68;
	
		case joaat("SHOP_BLU_TRAVELLING_SALESMAN"):
			return 144;
	
		case joaat("shop_hso_horse_trainer"):
			return 167;
	
		case joaat("shop_bvh_horse_trainer"):
			return 158;
	
		default:
		
	}

	return -1;
}

void func_351(int iParam0, int iParam1, float fParam2) // Position - 0xAC5B Signature - 22 03 06 00 00 2F 67 05 66 05 1D 8A 84
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1051832.f_4702[i /*5*/] == iParam0 || Global_1051832.f_4702[i /*5*/].f_3 < MISC::GET_FRAME_COUNT() - 1)
		{
			Global_1051832.f_4702[i /*5*/] = iParam0;
			Global_1051832.f_4702[i /*5*/].f_1 = -1;
			Global_1051832.f_4702[i /*5*/].f_2 = iParam1;
			Global_1051832.f_4702[i /*5*/].f_4 = fParam2 * fParam2;
			Global_1051832.f_4702[i /*5*/].f_3 = MISC::GET_FRAME_COUNT();
			return;
		}
	}

	return;
}

int func_352(int iParam0) // Position - 0xACF0 Signature - 22 01 03 00 00 66 00 3C 27
{
	switch (iParam0)
	{
		case joaat("st_wilderness_supplies"):
			return 27;
	
		case joaat("st_post_office"):
			return 2;
	
		case joaat("st_general"):
			return 3;
	
		case joaat("st_theater_mp"):
			return 36;
	
		case joaat("st_barber"):
			return 8;
	
		case joaat("st_pianist"):
			return 31;
	
		case joaat("st_fence"):
			return 4;
	
		case joaat("st_quartermaster"):
			return 22;
	
		case joaat("st_horse_shop"):
			return 9;
	
		case joaat("st_doctor"):
			return 0;
	
		case joaat("st_moonshine_property"):
			return 37;
	
		case joaat("st_pearson"):
			return 16;
	
		case joaat("st_camp_lockbox"):
			return 28;
	
		case joaat("st_weapon_mod_store"):
			return 19;
	
		case joaat("st_bait"):
			return 14;
	
		case joaat("st_photo_studio"):
			return 18;
	
		case joaat("st_blacksmith"):
			return 24;
	
		case joaat("st_horse_trainer"):
			return 23;
	
		case joaat("st_gunsmith"):
			return 6;
	
		case joaat("st_travelling_salesman"):
			return 38;
	
		case joaat("st_moonshine_still"):
			return 33;
	
		case joaat("st_bountyhunting_mp_return"):
			return 25;
	
		case joaat("st_dynamic"):
			return 11;
	
		case joaat("st_tailor"):
			return 7;
	
		case 374439621:
			return 39;
	
		case joaat("st_horse_fence"):
			return 5;
	
		case joaat("st_clothing"):
			return 20;
	
		case joaat("st_butcher"):
			return 10;
	
		case joaat("st_musician"):
			return 32;
	
		case joaat("st_camp_butchertable"):
			return 29;
	
		case joaat("st_handheld"):
			return 34;
	
		case joaat("st_trapper"):
			return 15;
	
		case joaat("st_coach"):
			return 26;
	
		case joaat("st_hotel"):
			return 17;
	
		case joaat("st_honor_mp"):
			return 35;
	
		case joaat("st_train_station"):
			return 1;
	
		case joaat("st_camp_shaving"):
			return 21;
	
		case joaat("st_bartender"):
			return 30;
	
		case joaat("st_bank"):
			return 12;
	
		default:
		
	}

	return -1;
}

void func_353(int iParam0, int iParam1, float fParam2) // Position - 0xAEA6 Signature - 22 03 06 00 00 2F 67 05 66 05 1D 8A 86
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1051832.f_4702[i /*5*/].f_1 == iParam0 || Global_1051832.f_4702[i /*5*/].f_3 < MISC::GET_FRAME_COUNT() - 1)
		{
			Global_1051832.f_4702[i /*5*/].f_1 = iParam0;
			Global_1051832.f_4702[i /*5*/] = -1;
			Global_1051832.f_4702[i /*5*/].f_2 = iParam1;
			Global_1051832.f_4702[i /*5*/].f_4 = fParam2 * fParam2;
			Global_1051832.f_4702[i /*5*/].f_3 = MISC::GET_FRAME_COUNT();
			return;
		}
	}

	return;
}

int func_354(int iParam0) // Position - 0xAF3D Signature - 22 01 03 00 00 66 00 3C 05 00 DC
{
	switch (iParam0)
	{
		case joaat("MINIGAME_MP_POKER_TUMBLEWEED"):
			return 3;
	
		case joaat("MINIGAME_MP_POKER_VALENTINE"):
			return 4;
	
		case joaat("MINIGAME_MP_POKER_SWANSONS_STATION"):
			return 2;
	
		case joaat("MINIGAME_MP_POKER_BLACKWATER"):
			return 0;
	
		case joaat("MINIGAME_MP_POKER_SAINT_DENIS"):
			return 1;
	
		default:
		
	}

	return 4;
}

void func_355(int iParam0) // Position - 0xAF80 Signature - 22 01 03 00 00 03 01 00 46
{
	Global_1149172.f_1[iParam0 /*27*/].f_26 = MISC::GET_FRAME_COUNT();
	return;
}

BOOL func_356(var uParam0, var uParam1, BOOL bParam2) // Position - 0xAF98 Signature - 22 03 06 00 00 11 4B 00 2D 39 A5
{
	int num;

	num = func_108(uParam0);
	return num == 5 || num == 6 && bParam2;
}

BOOL func_357(var uParam0, var uParam1) // Position - 0xAFBF Signature - 22 02 04 00 00 11 4B 00 2D 39 A5 35 00 0D
{
	return func_108(uParam0) == 7;
}

void func_358(Player plParam0) // Position - 0xAFD1 Signature - 22 01 03 00 00 66 00 5D E5
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1108965.f_34.f_353[plParam0 /*6*/].f_1))
		return;

	if (!Global_1108965.f_34.f_353[plParam0 /*6*/])
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1108965.f_34.f_353[plParam0 /*6*/].f_1))
	{
		func_558(plParam0);
		return;
	}

	if (Global_1108965.f_34.f_353[plParam0 /*6*/].f_5 != -1)
	{
		if (Global_1295666.f_16 - Global_1108965.f_34.f_353[plParam0 /*6*/].f_4 > Global_1108965.f_34.f_353[plParam0 /*6*/].f_5)
			func_558(plParam0);
	
		return;
	}

	if (func_112(Global_1108965.f_34.f_353[plParam0 /*6*/].f_2))
		return;

	if (!func_36(Global_1108965.f_34.f_353[plParam0 /*6*/].f_2))
	{
		func_558(plParam0);
		return;
	}

	if (!func_112(Global_1108965.f_34.f_353[plParam0 /*6*/].f_2))
	{
		func_558(plParam0);
		return;
	}

	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Global_1108965.f_34.f_546[plParam0 /*2*/]) != Global_1108965.f_34.f_353[plParam0 /*6*/].f_1)
	{
		func_558(plParam0);
		return;
	}

	return;
}

void func_359(Player plParam0) // Position - 0xB0F6 Signature - 22 01 04 00 00 66 00 2F
{
	Player player;

	if (plParam0 < 0 || plParam0 >= 32)
		return;

	player = PLAYER::INT_TO_PLAYERINDEX(plParam0);

	if (Global_1108965.f_34.f_353[plParam0 /*6*/])
		func_358(plParam0);

	if (!Global_1108965.f_34[plParam0 /*11*/].f_6)
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
	{
		func_559(plParam0);
		return;
	}

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
	{
		func_559(plParam0);
		return;
	}

	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Global_1108965.f_34.f_546[plParam0 /*2*/]) != player)
	{
		func_559(plParam0);
		return;
	}

	if (GANG::_NETWORK_IS_IN_MY_GANG(player))
	{
		func_560(player, false);
		return;
	}

	if (Global_1287273[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/].f_66)
	{
		func_560(player, false);
		return;
	}

	if (Global_1287273[plParam0 /*67*/].f_66)
	{
		func_560(player, false);
		return;
	}

	if (func_561(plParam0))
	{
		func_560(player, false);
		return;
	}

	if (NETWORK::GET_TIME_DIFFERENCE(Global_1108965.f_34[plParam0 /*11*/].f_7, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 600000)
	{
		func_560(player, false);
		return;
	}

	return;
}

BOOL func_360(Any* panParam0, int iParam1) // Position - 0xB204 Signature - 22 02 04 00 00 5D F6
{
	*panParam0 = Global_1245174.f_9818;
	panParam0->f_2 = 423895568;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_IS_FILE_LOADED(*panParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_361(Any* panParam0, int iParam1) // Position - 0xB23B Signature - 22 02 04 00 00 37 88
{
	panParam0->f_2 = 775488648;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_362(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, BOOL bParam7) // Position - 0xB25C Signature - 22 08 0B
{
	var unk;

	uParam0.f_2 = iParam5;
	unk = *uParam6;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, &uParam0))
	{
		*uParam6 = unk;
		return 1;
	}
	else
	{
		bParam7;
	}

	return 0;
}

BOOL func_363(int iParam0) // Position - 0xB28C Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 2F
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_364(int iParam0, int iParam1, int iParam2) // Position - 0xB2AF Signature - 22 03 08 00 00 5D
{
	int num;
	int i;
	int num2;

	if (Global_1235687.f_9085.f_97 >= 10)
		return -1;

	if (iParam0 == 1393257577)
	{
		num = Global_1235687.f_9085.f_99;
	
		for (i = Global_1235687.f_9085.f_97; i > 0; i = i - 1)
		{
			num = num - 1;
		
			if (num < 0)
				num = 9;
		
			if (Global_1235687.f_9085.f_16[num /*8*/] == iParam0)
				return -1;
		}
	}

	num2 = Global_1235687.f_9085.f_99;
	Global_1235687.f_9085.f_16[num2 /*8*/] = iParam0;
	Global_1235687.f_9085.f_16[num2 /*8*/].f_5 = iParam2;
	Global_1235687.f_9085.f_16[num2 /*8*/].f_6 = iParam1;
	Global_1235687.f_9085.f_97 = Global_1235687.f_9085.f_97 + 1;
	Global_1235687.f_9085.f_99 = (Global_1235687.f_9085.f_99 + 1) % 10;
	return num2;
}

int func_365() // Position - 0xB387 Signature - 22 00 02 00 00 5D DD D3 10 78 59
{
	return Global_1102813.f_3673;
}

Player func_366(int iParam0) // Position - 0xB396 Signature - 22 01 03 00 00 66 00 2F 35 6A 05 8B 05
{
	if (iParam0 < 0 || iParam0 >= 7)
		return 255;

	return Global_1102813.f_3675[iParam0];
}

Player func_367() // Position - 0xB3BF Signature - 22 00 02 00 00 5D DD D3 10 78 5A
{
	return Global_1102813.f_3674;
}

int func_368(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0xB3CE Signature - 22 05 24
{
	var unk;
	var unk13;
	var unk26;

	unk.f_1 = 10;
	unk13.f_1 = 11;
	return func_562(iParam0, &unk26, &unk13, &unk, iParam1, iParam2, iParam3, bParam4);
}

BOOL func_369(int iParam0) // Position - 0xB3FE Signature - 22 01 03 00 00 66 00 2F 7E 6A 8B 06 00 66 00 6D 0C 77 69 50 01 01 22 02 06
{
	return iParam0 >= 0 && iParam0 <= 12;
}

struct<2> func_370(int iParam0, int iParam1) // Position - 0xB414 Signature - 22 02 06 00 00 4B 04 6A 08 3D 41 6A 80 01 08 3D 41 41 66
{
	int num;

	num = -1;
	num.f_1 = -1;
	num = iParam1;

	switch (iParam1)
	{
		case 2:
			num.f_1 = func_563(iParam0, &(Global_1072759.f_573), func_58(iParam1));
			break;
	
		case 3:
			num.f_1 = func_563(iParam0, &(Global_1072759.f_573.f_602), func_58(iParam1));
			break;
	
		case 4:
			num.f_1 = func_563(iParam0, &(Global_1072759.f_573.f_2104), func_58(iParam1));
			break;
	
		case 5:
			num.f_1 = func_563(iParam0, &(Global_1072759.f_573.f_12606), func_58(iParam1));
			break;
	
		case 6:
			num.f_1 = func_563(iParam0, &(Global_1072759.f_573.f_12908), func_58(iParam1));
			break;
	
		case 7:
			num.f_1 = func_563(iParam0, &(Global_1072759.f_573.f_15910), func_58(iParam1));
			break;
	
		case 8:
			num.f_1 = func_563(iParam0, &(Global_1072759.f_573.f_16512), func_58(iParam1));
			break;
	}

	if (num.f_1 < 0)
		return func_216();

	return num;
}

void func_371(var uParam0, var uParam1) // Position - 0xB53A Signature - 22 02 04 00 00 11 4B 00 2D 39 10
{
	if (func_259(uParam0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_259(uParam0)))
	{
		STATS::_0x99230691875FC218(func_269(uParam0), func_259(uParam0), Global_34);
	}

	return;
}

BOOL func_372(int iParam0, int iParam1) // Position - 0xB57D Signature - 22 02 05 00 00 66 00 67 04 66 01
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_564(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_22())
		return func_564(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_564(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_373(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xB5F1 Signature - 22 03 05 00 00 5D E7
{
	if (Global_1940199.f_12)
		if (bParam2 || Global_1940199.f_13 > 0 || Global_1940199.f_11 > 0)
			return 1;
	else if (bParam1 && !(Global_1940199.f_9 == 1370593166))
		return 0;

	if (Global_1940199.f_14 > 0 || bParam2 && Global_1940199.f_14 > -1)
		return 1;

	if (bParam0)
		if (Global_1940199.f_7)
			if (bParam2 || Global_1940199.f_15 > 0)
				return 1;

	return 0;
}

struct<2> func_374() // Position - 0xB68F Signature - 22 00 02 00 00 11 5D 84 0A 10 2D 50
{
	return Global_1051268;
}

struct<2> func_375() // Position - 0xB69D Signature - 22 00 02 00 00 5D 2C 66 12 27 81
{
	if (Global_1205804.f_129 <= 0)
		return func_263(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_263(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

BOOL func_376(Player plParam0) // Position - 0xB6E8 Signature - 22 01 03 00 00 5D E7 DA 12 18
{
	return SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1235687.f_9085.f_8), plParam0);
}

Hash func_377(int iParam0) // Position - 0xB6FF Signature - 22 01 04 00 00 66 00 39 DE
{
	Hash hash;

	if (!func_565(iParam0))
		return 0;

	hash = func_566(iParam0);

	if (hash != -1)
		return hash;
	else
		return func_567(iParam0, true);

	return 0;
}

int func_378(Player plParam0, int iParam1) // Position - 0xB736 Signature - 22 02 04 00 00 66 00 2F 35
{
	if (plParam0 < 0 || plParam0 >= 32)
		return -1;

	if (iParam1 <= -1)
		return -1;

	return Global_1149432.f_5087[plParam0 /*10*/].f_5[iParam1];
}

int func_379(int iParam0) // Position - 0xB76F Signature - 22 01 03 00 00 66 00 3C 02 00 01
{
	switch (iParam0)
	{
		case 1:
		
	
		case 2:
		
	
		default:
		
	}

	return 2;
}

void func_380(Player plParam0, int iParam1, int iParam2) // Position - 0xB794 Signature - 22 03 06 00 00 66 02
{
	Player player;

	if (iParam2 == -1)
		return;

	if (iParam1 <= -1)
		return;

	if (plParam0 < 0 || plParam0 >= 32)
		return;

	player = PLAYER::INT_TO_PLAYERINDEX(plParam0);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		return;

	Global_1149432.f_5087[plParam0 /*10*/].f_5[iParam1] = iParam2;
	return;
}

void func_381(Player plParam0, int iParam1, int iParam2) // Position - 0xB7EB Signature - 22 03 06 00 00 66 01 08
{
	Player player;

	if (iParam1 <= -1)
		return;

	if (plParam0 < 0 || plParam0 >= 32)
		return;

	player = PLAYER::INT_TO_PLAYERINDEX(plParam0);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		return;

	Global_1149432.f_5087[plParam0 /*10*/][iParam1] = iParam2;
	return;
}

int func_382(Player plParam0, int iParam1) // Position - 0xB837 Signature - 22 02 05 00 00 66 01 08
{
	Player player;

	if (iParam1 <= -1)
		return 0;

	if (plParam0 < 0 || plParam0 >= 32)
		return 0;

	player = PLAYER::INT_TO_PLAYERINDEX(plParam0);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		return 0;

	return Global_1149432.f_5087[plParam0 /*10*/][iParam1];
}

Hash func_383(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54) // Position - 0xB884 Signature - 22 37 4B
{
	int num;
	int cloudTimeAsInt;
	Hash hash;
	var unk;
	var buffer;
	BOOL flag;
	Hash hash2;
	int num2;

	num = func_568();
	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
	hash = cloudTimeAsInt + uParam0.f_25;
	MISC::_INT_TO_STRING(cloudTimeAsInt, "%i", &buffer);
	Global_1940252.f_245.f_1308 = Global_1940252.f_245.f_1308 + 1;
	TEXT_LABEL_ASSIGN_STRING(&unk, "Invite_Root_", 64);
	TEXT_LABEL_APPEND_STRING(&unk, &buffer, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 64);
	TEXT_LABEL_APPEND_INT(&unk, Global_1940252.f_245.f_1308, 64);
	func_569(&Global_1940252.f_245.f_14[num /*43*/], Global_1940252.f_245.f_4, unk, uParam0);
	Global_1940252.f_245.f_14[num /*43*/].f_39 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(88), Global_1940252.f_245.f_1308);
	Global_1940252.f_245.f_14[num /*43*/].f_41 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(89), true);
	Global_1940252.f_245.f_14[num /*43*/].f_42 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(90), false);
	Global_1940252.f_245.f_14[num /*43*/].f_37 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(78), uParam0.f_32);

	if (uParam0.f_32)
	{
		Global_1940252.f_245.f_14[num /*43*/].f_36 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(76), uParam0.f_31);
		Global_1940252.f_245.f_14[num /*43*/].f_35 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(79), uParam0.f_30);
	}

	Global_1940252.f_245.f_14[num /*43*/].f_30 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(91), uParam0.f_26);
	flag = false;
	Global_1940252.f_245.f_14[num /*43*/].f_38 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(Global_1940252.f_245.f_14[num /*43*/], 707094655, flag);
	Global_1940252.f_245.f_14[num /*43*/].f_31 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(53), uParam0.f_27);
	Global_1940252.f_245.f_14[num /*43*/].f_32 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(54), uParam0.f_27.f_1);
	Global_1940252.f_245.f_14[num /*43*/].f_33 = DATABINDING::_DATABINDING_ADD_DATA_GANG_ID(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(92), uParam0.f_27.f_2);
	Global_1940252.f_245.f_14[num /*43*/].f_29 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(93), hash);
	Global_1940252.f_245.f_14[num /*43*/].f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(94), uParam0.f_24);
	func_571(Global_1940252.f_245.f_1306 + 1);

	if (Global_1940252.f_245.f_1308 == 2147483647)
		Global_1940252.f_245.f_1308 = 0;

	if (func_572(uParam0.f_26))
	{
		uParam0.f_33 = 5;
		uParam0.f_33.f_1 = 1;
		uParam0.f_33.f_13 = 778915895;
		uParam0.f_33.f_14 = Global_1940252.f_245.f_14[num /*43*/];
		hash2 = func_573(&(uParam0.f_33));
		Global_1940252.f_245.f_14[num /*43*/].f_40 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(95), hash2);
	}

	num2 = func_574();

	if (num2 == 0 || uParam0.f_24 == num2)
	{
		Global_1940252.f_245.f_1307 = Global_1940252.f_245.f_1307 + 1;
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940252.f_245.f_5, 0, "pm_invite_item", Global_1940252.f_245.f_14[num /*43*/]);
	}

	return Global_1940252.f_245.f_14[num /*43*/];
}

void func_384(Player plParam0, int iParam1) // Position - 0xBBFB Signature - 22 02 06 00 00 5D E7
{
	Player player;
	int i;

	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1235687.f_9085.f_8), plParam0);
	player = PLAYER::INT_TO_PLAYERINDEX(plParam0);

	for (i = 0; i < Global_1235687.f_9085.f_14; i = i + 1)
	{
		if (Global_1235687.f_9085.f_9[i /*4*/] == player)
		{
			Global_1235687.f_9085.f_9[i /*4*/].f_2 = 1;
			Global_1235687.f_9085.f_9[i /*4*/].f_3 = iParam1;
			break;
		}
	}

	return;
}

int func_385(int iParam0, var uParam1) // Position - 0xBC6A Signature - 22 02 09 00 00 66 00 66 01 39
{
	int num;
	var unk;
	int num2;

	num = func_405(iParam0, uParam1);

	if (num != 1519094052)
		return num;

	if (BOUNTY::BOUNTY_GET_COOLDOWN_COLLECTION(&unk))
		Global_1245174.f_9807.f_3 = unk.f_1;

	if (Global_1295666.f_16 < Global_1245174.f_9807.f_3)
		return 590089107;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(1124430142))
		return -580253866;

	if (func_401(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))))
		return 1421345077;

	if (Global_1245174.f_9807.f_2 == 0)
	{
		num2 = (func_274(iParam0) / 1000) + func_575(60);
		Global_1245174.f_9807.f_2 = Global_1295666.f_16 + num2;
	}

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(Global_1235687.f_9085.f_120)))
		return -828578368;

	if (Global_1295666.f_16 > Global_1245174.f_9807.f_2)
		return 1519094052;

	return 1918714710;
}

BOOL func_386() // Position - 0xBD55 Signature - 22 00 04 00 00 03 01 01
{
	int i;
	Player player;

	player = PLAYER::PLAYER_ID();

	for (i = 0; i <= 31; i = i + 1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)))
		{
		}
		else if (Global_1225687[i /*303*/].f_300.f_1 == player)
		{
			return true;
		}
	}

	return false;
}

Player func_387(int iParam0) // Position - 0xBD9F Signature - 22 01 03 00 00 66 00 5D D7
{
	return Global_1225687[iParam0 /*303*/].f_300.f_1;
}

void func_388(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, BOOL bParam20, BOOL bParam21) // Position - 0xBDB5 Signature - 22 16 2D
{
	var unk;

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam19))
		return;

	iParam0 = 0;
	iParam0.f_1 = PLAYER::PLAYER_ID();
	iParam0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (!bParam20)
	{
		if (iParam0.f_18)
		{
			if (bParam21)
			{
				unk.f_12 = -1;
				unk.f_12.f_1 = -1;
				unk.f_14 = 255;
				unk.f_15 = 255;
				unk.f_20 = -1;
				unk = { iParam0 };
				unk.f_19 = uParam19;
				unk.f_20 = iParam0.f_2;
				func_576(&(Global_1072759.f_22981), unk);
				return;
			}
		}
	}

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam0, 19, 11, &uParam19);
	return;
}

BOOL func_389(Any* panParam0, int iParam1) // Position - 0xBE4F Signature - 22 02 04 00 00 37 2B
{
	panParam0->f_2 = 333456427;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_390(int iParam0, int iParam1) // Position - 0xBE70 Signature - 22 02 0A 00 00 08
{
	int num;
	int num2;

	num = -1;

	if (func_360(&num2, iParam0) && func_361(&num2, iParam1))
		num = func_410(iParam0) - DATAFILE::_0xE13634BB6BAF0734(num2, num2.f_1) - 1;

	return num;
}

BOOL func_391(int iParam0, int iParam1, BOOL bParam2, var uParam3) // Position - 0xBEAA Signature - 22 04 0B
{
	BOOL flag;
	var unk;
	float num;

	flag = func_577(iParam0, iParam1, 2);

	if (func_578(iParam0, iParam1, flag))
		return true;

	unk = { func_333(iParam0, iParam1) };

	if (_IS_NULL_VECTOR(unk))
		return false;

	num = func_579(func_169(iParam0), iParam1);

	if (bParam2 && func_577(iParam0, iParam1, 1) && func_580(unk, num))
	{
		*uParam3 = 1;
		return true;
	}

	return func_581(unk, num, flag);
}

BOOL func_392(int iParam0, int iParam1) // Position - 0xBF2D Signature - 22 02 0A 00 00 2F 67 04 4B 05 66 00 39 04 B2 00 6A 8B 09 00 4B 05 66 01 39 3B B2 00 69 8B 11 00 62 4B 05 2D 37 E1
{
	BOOL num;
	var unk;

	num = 0;

	if (func_360(&unk, iParam0) && func_361(&unk, iParam1))
		func_539(unk, -528314399, &num, false);

	return num;
}

Vector3 func_393(int iParam0, int iParam1) // Position - 0xBF63 Signature - 22 02 0C 00 00 4B
{
	var unk;
	var unk4;

	if (func_360(&unk4, iParam0) && func_361(&unk4, iParam1))
		func_538(unk4, -370006557, &unk, true);

	return unk;
}

int func_394(int iParam0, int iParam1) // Position - 0xBF98 Signature - 22 02 0B 00 00 2F
{
	int num;
	var unk;
	int num2;

	num = 0;

	if (func_360(&unk, iParam0))
		if (func_389(&unk, iParam1))
			func_362(unk, 1342438652, &num, false);

	num2 = 0;

	if (num != 0)
		num2 = func_582(num);

	return num2;
}

BOOL func_395(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0xBFDD Signature - 22 04 0C
{
	float num;
	float num2;
	Player player;
	Ped playerPed;
	float num3;
	int i;

	if (_IS_NULL_VECTOR(vParam1))
		return false;

	if (func_583(iParam0))
		return false;

	if (func_584(iParam0))
		return false;

	num = 5f;
	num2 = func_585(iParam0);

	if (num2 > 300f)
		num2 = 300f;

	if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::PLAYER_ID(), vParam1, num, num2))
		return false;

	if (NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(vParam1, num, num2))
		return false;

	num2 = num2 * 0.75f;

	if (num2 < 150f)
		num2 = 150f;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			playerPed = PLAYER::GET_PLAYER_PED(player);
		
			if (ENTITY::DOES_ENTITY_EXIST(playerPed))
			{
				num3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(playerPed, false, false), vParam1);
			
				if (num3 < num2 && !func_586(iParam0))
					return false;
			}
		}
	}

	return true;
}

int func_396(int iParam0) // Position - 0xC0DF Signature - 22 01 04 00 00 66 00 39 95
{
	int i;

	if (!func_130(iParam0))
		return -1;

	for (i = 0; i <= 12; i = i + 1)
	{
		if (func_587(i))
			return i;
	}

	return -1;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0xC117 Signature - 22 03 05 00 00 66 00 73
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_398(int iParam0) // Position - 0xC141 Signature - 22 01 03 00 00 66 00 3C 04 00 EC
{
	switch (iParam0)
	{
		case joaat("CAMP_RESUPPLY"):
		case joaat("CAMP_SETUP"):
		case joaat("CAMP_RAID"):
		case joaat("CAMP_SELL"):
			return true;
	
		default:
		
	}

	return false;
}

int func_399(Player plParam0) // Position - 0xC16E Signature - 22 01 04 00 00 66 00 67 03 66 03 2F 7E
{
	Player player;

	player = plParam0;

	if (player >= 0 && player < 32)
		return Global_1144526[player /*83*/].f_38.f_3;

	return -1;
}

BOOL func_400(int iParam0) // Position - 0xC19E Signature - 22 01 03 00 00 66 00 39 EB 3B 00 05 8B 04 00 2F 50 01 01 66 00 39 19 21 01 6A
{
	if (!func_126(iParam0))
		return false;

	return func_588(iParam0) && Global_1141332[iParam0 /*27*/].f_18.f_1 != 0;
}

BOOL func_401(Player plParam0) // Position - 0xC1CD Signature - 22 01 15
{
	var memberHandles;
	int i;
	int gangMembers;
	Player playerFromGamerHandle;

	memberHandles = 7;

	if (!GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(plParam0)))
		return false;

	if (!GANG::NETWORK_IS_GANG_LEADER(plParam0))
		return false;

	gangMembers = GANG::_NETWORK_GET_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(plParam0), &memberHandles);

	for (i = 0; i <= gangMembers - 1; i = i + 1)
	{
		playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&memberHandles[i /*2*/]);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerFromGamerHandle) || PLAYER::IS_PLAYER_DEAD(playerFromGamerHandle))
		{
		}
		else if (func_215(1048576, playerFromGamerHandle))
		{
			return true;
		}
	}

	return false;
}

BOOL func_402(BOOL bParam0, int iParam1) // Position - 0xC254 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 05
{
	return bParam0 && iParam1 != false;
}

void func_403(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0xC263 Signature - 22 05 07 00 00 09
{
	uParam0->f_4 = 1;
	uParam0->f_6 = iParam1;
	uParam0->f_10 = iParam2;
	uParam0->f_11 = iParam4;
	uParam0->f_13 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	uParam0->f_21[0 /*3*/] = { Global_34 };
	uParam0->f_7 = iParam3;
	return;
}

void func_404(Any* panParam0) // Position - 0xC2A2 Signature - 22 01 03 00 00 03 01 00 6E 05 8B 03 00 50 01 00 6D 0D
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_1051645.f_16[13] == 0 || !SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[13]))
		return;

	*panParam0 = 178;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(panParam0, 40, 5, Global_1051645.f_16[13]);
	func_589(panParam0, panParam0->f_1);
	return;
}

int func_405(int iParam0, var uParam1) // Position - 0xC30E Signature - 22 02 05 00 00 66 00 2F 15
{
	Player player;

	if (iParam0 == 0)
	{
		*uParam1 = 1;
		return -863629719;
	}

	player = PLAYER::PLAYER_ID();

	if (func_232(player, 1))
	{
		*uParam1 = 1;
		return -1365133205;
	}

	if (func_590())
		return -744198205;

	if (!func_176(255))
		return 1419392741;

	if (func_213(255))
		return 56985339;

	if (func_214(player, true, false, true))
		return -1208627562;

	if (func_215(65536, player))
		return 1340027376;

	if (CAM::IS_SCREEN_FADED_OUT())
		return -429228396;

	if (func_414(Global_34))
		return 736245819;

	if (func_217(func_216(), func_216(), false, false))
	{
		*uParam1 = 1;
		return -590391633;
	}

	if (func_218())
	{
		*uParam1 = 1;
		return -1892967971;
	}

	return 1519094052;
}

BOOL func_406(int iParam0) // Position - 0xC3F7 Signature - 22 01 03 00 00 66 00 3C 04 00 6C 1D 80 0C 15 00 9B FC 8A 38 30 00 E8 3F 42 3A 1F 00 AC 6F E0 74 0E 00 68 2C 00 5D 67 04 1D 80 AB 27 1B
{
	switch (iParam0)
	{
		case joaat("LOW"):
			return Global_1901671.f_171.f_27;
	
		case joaat("VERY_HIGH"):
			return Global_1901671.f_171.f_30;
	
		case joaat("HIGH"):
			return Global_1901671.f_171.f_29;
	
		case joaat("MEDIUM"):
			return Global_1901671.f_171.f_28;
	
		default:
		
	}

	return false;
}

BOOL func_407(int iParam0) // Position - 0xC44C Signature - 22 01 03 00 00 5D F6 FF 12 78
{
	return func_64(Global_1245174.f_9817, iParam0);
}

float func_408(int iParam0) // Position - 0xC461 Signature - 22 01 03 00 00 66 00 3C 04 00 6C 1D 80 0C 15 00 9B FC 8A 38 30 00 E8 3F 42 3A 1F 00 AC 6F E0 74 0E 00 68 2C 00 5D 67 04 1D 80 AB 27 13
{
	switch (iParam0)
	{
		case joaat("LOW"):
			return Global_1901671.f_171.f_19;
	
		case joaat("VERY_HIGH"):
			return Global_1901671.f_171.f_22;
	
		case joaat("HIGH"):
			return Global_1901671.f_171.f_21;
	
		case joaat("MEDIUM"):
			return Global_1901671.f_171.f_20;
	
		default:
		
	}

	return 0f;
}

int func_409(int iParam0) // Position - 0xC4B6 Signature - 22 01 77
{
	var unk;
	int endRange;
	int i;

	unk = 113;

	for (i = 0; i <= 112; i = i + 1)
	{
		if (func_314(i) == iParam0)
		{
			unk[endRange] = i;
			endRange = endRange + 1;
		}
	}

	if (endRange > 0)
		return unk[MISC::GET_RANDOM_INT_IN_RANGE(0, endRange)];

	return -1;
}

int func_410(int iParam0) // Position - 0xC505 Signature - 22 01 09 00 00 2F
{
	int numChildren;
	Any any;

	numChildren = 0;

	if (func_360(&any, iParam0))
	{
		any.f_2 = 866900867;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(any.f_1), &any))
			numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any.f_1);
	}

	return numChildren;
}

int func_411(int iParam0, int iParam1) // Position - 0xC53F Signature - 22 02 0A 00 00 2F 67 04 4B 05 66 00 39 04 B2 00 6A 8B 09 00 4B 05 66 01 39 4F BE 00 69 8B 11 00 62 4B 05 2D 37 15
{
	int num;
	var unk;

	num = 0;

	if (func_360(&unk, iParam0) && func_389(&unk, iParam1))
		func_362(unk, -2045057259, &num, false);

	return num;
}

int func_412(int iParam0, int iParam1, int iParam2) // Position - 0xC575 Signature - 22 03 06 00 00 2F 67 05 66 05 6D
{
	int i;

	for (i = 0; i <= 12; i = i + 1)
	{
		if (Global_1225099[i /*28*/] == iParam0 && Global_1225099[i /*28*/].f_6 == iParam1 && iParam2 == -1 || Global_1225099[i /*28*/].f_9 == iParam2)
			return i;
	}

	return -1;
}

Vector3 func_413(int iParam0, int iParam1, var uParam2) // Position - 0xC5D2 Signature - 22 03 0D 00 00 2F
{
	var unk;
	var unk4;

	*uParam2 = 0;

	if (func_360(&unk4, iParam0) && func_389(&unk4, iParam1))
		if (func_538(unk4, 1702777600, &unk, true))
			*uParam2 = 1;

	return unk;
}

BOOL func_414(float fParam0, var uParam1, var uParam2) // Position - 0xC611 Signature - 22 03 0E 00 00 86
{
	float num;
	float num2;
	float num3;
	float num4;
	int numNavmeshesExistingInArea;

	num = 150f;
	num2 = num * 1.5f;
	num2 = num2 + 0.1f;
	num3 = fParam0 - num2;
	num3.f_1 = fParam0.f_1 - num2;
	num3.f_2 = fParam0.f_2 - num2;
	num4 = fParam0 + num2;
	num4.f_1 = fParam0.f_1 + num2;
	num4.f_2 = fParam0.f_2 + num2;
	numNavmeshesExistingInArea = PATHFIND::GET_NUM_NAVMESHES_EXISTING_IN_AREA(num3, num4);

	if (numNavmeshesExistingInArea < 16)
		return true;

	return false;
}

BOOL func_415() // Position - 0xC688 Signature - 22 00 03 00 00 03 01 01 13 03 05 00 B8 03 05 01 04 39
{
	int num;

	num = func_399(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));

	if (func_400(num))
		return true;

	return false;
}

BOOL func_416() // Position - 0xC6B0 Signature - 22 00 06 00 00 37 BF
{
	int num;
	var unk;

	if (!func_591(joaat("upgrade_camp_butcher_table"), 1))
		return false;

	num = func_399(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));

	if (!func_126(num))
		return false;

	unk = { func_592(num) };

	if (_IS_NULL_VECTOR(unk))
		return false;

	if (func_173(Global_34, unk) > Global_1901671.f_171.f_58)
		return false;

	if (func_399(PLAYER::GET_PLAYER_INDEX()) == -1)
		return false;

	if (func_419(-735397297, func_418(true), 1784584921, true, false, false) < Global_1901671.f_171.f_48)
		return false;

	return true;
}

BOOL func_417() // Position - 0xC756 Signature - 22 00 05 00 00 03 01 00 CC
{
	var unk;

	if (Global_1297600[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_5.f_12 == -1)
		return false;

	unk = { func_249(Global_1297600[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_5.f_12) };

	if (func_173(Global_34, unk) > Global_1901671.f_171.f_58)
		return false;

	return true;
}

struct<4> func_418(BOOL bParam0) // Position - 0xC7A8 Signature - 22 01 04 00 00 5D 17 00 18 27 0E
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_593(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_595(joaat("character"), func_594(), -1591664384, bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_595(joaat("character"), func_594(), -1591664384, false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_595(joaat("character"), func_594(), -1591664384, bParam0);
}

Hash func_419(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0xC848 Signature - 22 09 10
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_596(hParam0, 0))
		return 0;

	if (!bParam7 && func_597(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_595(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_593(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_593(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

float func_420() // Position - 0xC8C7 Signature - 22 00 03 00 00 73
{
	float num;

	num = 0f;

	if (func_419(-735397297, func_418(true), 1784584921, true, false, false) >= Global_1901671.f_171.f_48)
		num = Global_1901671.f_171.f_50 * (1f - func_598());

	if (func_419(-735397297, func_418(true), 1784584921, true, false, false) >= Global_1901671.f_171.f_48)
		num = Global_1901671.f_171.f_51 * (1f - func_598());

	return num;
}

float func_421() // Position - 0xC938 Signature - 22 00 04 00 00 73
{
	float num;
	Hash hash;

	num = 0f;
	hash = 0;

	if (func_419(-545779394, func_418(true), 1784584921, true, false, false) > 0)
		hash = func_419(-545779394, func_418(true), 1784584921, true, false, false);
	else if (func_419(1532695640, func_418(true), 1784584921, true, false, false) > 0)
		hash = func_419(1532695640, func_418(true), 1784584921, true, false, false);
	else if (func_419(1847740267, func_418(true), 1784584921, true, false, false) > 0)
		hash = func_419(1847740267, func_418(true), 1784584921, true, false, false);

	if (hash >= Global_1901671.f_171.f_40)
		num = Global_1901671.f_171.f_43 * (1f - func_599());

	if (hash >= Global_1901671.f_171.f_41)
		num = Global_1901671.f_171.f_44 * (1f - func_599());

	return num;
}

BOOL func_422(int iParam0) // Position - 0xCA20 Signature - 22 01 03 00 00 03 01 00 CC 5D CE
{
	return func_402(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

void func_423(BOOL bParam0, int iParam1) // Position - 0xCA3A Signature - 22 02 04 00 00 66 00 66 01 39 3D
{
	func_600(bParam0, iParam1);
	return;
}

BOOL func_424(int iParam0, var uParam1, Any* panParam2) // Position - 0xCA4A Signature - 22 03 05 00 00 11 4B 00 2D 39 09 12 00 05 8B 04
{
	if (!func_36(iParam0))
		return false;

	func_601(panParam2);

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

int func_425(int iParam0, int iParam1) // Position - 0xCB55 Signature - 22 02 04 00 00 66 00 3C 6A 00 00
{
	switch (iParam0)
	{
		case 0:
			return -1;
	
		case 1:
			return joaat("PERSONA_HONOR_ACTION__MURDER_BUTCHER");
	
		case 2:
			return joaat("PERSONA_HONOR_ACTION__MURDER");
	
		case 3:
			return joaat("PERSONA_HONOR_ACTION__MURDER_CAMP_FOLLOWER");
	
		case 4:
			return joaat("PERSONA_HONOR_ACTION__MURDER_PLAYER");
	
		case 5:
			return joaat("PERSONA_HONOR_ACTION__MURDER_RAMPAGE");
	
		case 6:
			return joaat("PERSONA_HONOR_ACTION__MURDER_MISSION_PEDS");
	
		case 7:
			return joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER");
	
		case 8:
			return joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER_UNARMED");
	
		case 9:
			return joaat("PERSONA_HONOR_ACTION__HOGTIE_PLAYER");
	
		case 10:
			return joaat("PERSONA_HONOR_ACTION__EXECUTION_PLAYER");
	
		case 11:
			return joaat("PERSONA_HONOR_ACTION__WATCH_BLEED_OUT");
	
		case 12:
			return joaat("PERSONA_HONOR_ACTION__MURDER_HORSE");
	
		case 13:
			return joaat("PERSONA_HONOR_ACTION__SLAUGHTER_PETS");
	
		case 14:
			return joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_AI");
	
		case 15:
			return joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_AI");
	
		case 16:
			return joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_PLAYER");
	
		case 17:
			return joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_PLAYER");
	
		case 18:
			return joaat("PERSONA_HONOR_ACTION__MURDER_HORSE_PLAYER");
	
		case 19:
			return joaat("PERSONA_HONOR_ACTION__TRAMPLE");
	
		case 20:
			return joaat("PERSONA_HONOR_ACTION__LOOTING_BODIES");
	
		case 21:
			return joaat("PERSONA_HONOR_ACTION__UNPROVOKED_ANTAGONIZATION");
	
		case 22:
			return joaat("PERSONA_HONOR_ACTION__GRIEFING");
	
		case 23:
			return joaat("PERSONA_HONOR_ACTION__IGNORE_MISSION");
	
		case 24:
			return joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_KILL");
	
		case 25:
			return joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE_THEN_KILL");
	
		case 26:
			return joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL");
	
		case 27:
			return joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL_PVP");
	
		case 28:
			return joaat("PERSONA_HONOR_ACTION__RUSTLING");
	
		case 29:
			return joaat("PERSONA_HONOR_ACTION__HERDING_STEAL");
	
		case 30:
			return joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_NEG");
	
		case 31:
			return joaat("PERSONA_HONOR_ACTION__MISSION_OUTLAW");
	
		case 32:
			return joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_NEG");
	
		case 33:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIVE");
	
		case 34:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TEN");
	
		case 35:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTEEN");
	
		case 36:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTY");
	
		case 37:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTYFIVE");
	
		case 38:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTY");
	
		case 39:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTYFIVE");
	
		case 40:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTY");
	
		case 41:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTYFIVE");
	
		case 42:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTY");
	
		case 43:
			return joaat("PERSONA_HONOR_ACTION__LOOTING");
	
		case 44:
			return joaat("PERSONA_HONOR_ACTION__THEFT");
	
		case 45:
			return joaat("PERSONA_HONOR_ACTION__ANIMAL_CRUELTY");
	
		case 46:
			return joaat("PERSONA_HONOR_ACTION__ARSON");
	
		case 47:
			return joaat("PERSONA_HONOR_ACTION__VANDALISM_LOW");
	
		case 48:
			return joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_ACCEPT");
	
		case 49:
			return joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_KILL");
	
		case 50:
			return joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_KILL");
	
		case 51:
			return joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_KILL");
	
		case 52:
			return joaat("PERSONA_HONOR_ACTION__NB_TREASURE_HUNTER_KILL");
	
		case 53:
			return joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_KILL");
	
		case 54:
			return joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_LOOT");
	
		case 55:
			return joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_BLEED_OUT");
	
		case 56:
			return joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_MURDER");
	
		case 57:
			return joaat("PERSONA_HONOR_ACTION__NB_HOBO_DOG_KILL");
	
		case 58:
			return 1723535349;
	
		case 59:
			return joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_MURDER");
	
		case 60:
			return joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_DEAD");
	
		case 61:
			return joaat("PERSONA_HONOR_ACTION__NB_RANDOM_EVENT_MURDER");
	
		case 62:
			return joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_ASSAULT");
	
		case 63:
			return joaat("PERSONA_HONOR_ACTION__BOUNTY_BRIBE_GUARD");
	
		case 64:
			return -2086327823;
	
		case 65:
			return 1623086000;
	
		case 66:
			return 796310207;
	
		case 67:
			return joaat("PERSONA_HONOR_ACTION__REVIVE_POSSE");
	
		case 68:
			return joaat("PERSONA_HONOR_ACTION__REVIVE_PLAYER");
	
		case 69:
			return joaat("PERSONA_HONOR_ACTION__REVIVE_MULTI");
	
		case 70:
			return joaat("PERSONA_HONOR_ACTION__HORSE_CARE");
	
		case 71:
			return joaat("PERSONA_HONOR_ACTION__HORSE_CARE_CLEAN");
	
		case 72:
			return joaat("PERSONA_HONOR_ACTION__HORSE_CARE_FULL");
	
		case 73:
			return joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER");
	
		case 74:
			return joaat("PERSONA_HONOR_ACTION__RESOURCEFUL");
	
		case 75:
			return joaat("PERSONA_HONOR_ACTION__CLEAR_HIDEOUT");
	
		case 76:
			return joaat("PERSONA_HONOR_ACTION__CLEAR_AMBUSH");
	
		case 77:
			return joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE");
	
		case 78:
			return joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL");
	
		case 79:
			return joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL_PVP");
	
		case 80:
			return joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_POS");
	
		case 81:
			return joaat("PERSONA_HONOR_ACTION__MISSION_GUNSLINGER");
	
		case 82:
			return joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_POS");
	
		case 83:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIVE");
	
		case 84:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_TEN");
	
		case 85:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTEEN");
	
		case 86:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTY");
	
		case 87:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTYFIVE");
	
		case 88:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTY");
	
		case 89:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTYFIVE");
	
		case 90:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTY");
	
		case 91:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTYFIVE");
	
		case 92:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTY");
	
		case 93:
			return joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_SAVE");
	
		case 94:
			return joaat("PERSONA_HONOR_ACTION__MERCY_KILL");
	
		case 95:
			return joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_FEED");
	
		case 96:
			return joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_RESCUE");
	
		case 97:
			return joaat("PERSONA_HONOR_ACTION__NB_TIED_UP_RESCUE");
	
		case 98:
			return joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_MERCY_KILL");
	
		case 99:
			return joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_ASSIST");
	
		case 100:
			return joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_ASSIST");
	
		case 101:
			return joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_RETURN");
	
		case 102:
			return joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_DONATE");
	
		case 103:
			return -29468993;
	
		case 104:
			return 669386338;
	
		case 105:
			return joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_ALIVE");
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

void func_426(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xD13B Signature - 22 03 05 00 00 66 00 08
{
	if (iParam0 == -1)
		return;

	if (Global_1149432.f_3876.f_2[func_427(iParam0, 1) /*4*/] == bParam1)
		return;

	if (bParam2)
		func_602(iParam0);

	Global_1149432.f_3876.f_2[func_427(iParam0, 1) /*4*/] = bParam1;
	return;
}

int func_427(int iParam0, int iParam1) // Position - 0xD185 Signature - 22 02 04 00 00 66 00 3C 6A 00 F1
{
	switch (iParam0)
	{
		case -2086327823:
			return 64;
	
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_MERCY_KILL"):
			return 98;
	
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_RETURN"):
			return 101;
	
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_ASSAULT"):
			return 62;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER_PLAYER"):
			return 4;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTYFIVE"):
			return 39;
	
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_MURDER"):
			return 56;
	
		case joaat("PERSONA_HONOR_ACTION__REVIVE_PLAYER"):
			return 68;
	
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_DONATE"):
			return 102;
	
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_KILL"):
			return 50;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER_RAMPAGE"):
			return 5;
	
		case joaat("PERSONA_HONOR_ACTION__SLAUGHTER_PETS"):
			return 13;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTY"):
			return 92;
	
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_PLAYER"):
			return 16;
	
		case joaat("PERSONA_HONOR_ACTION__LOOTING"):
			return 43;
	
		case joaat("PERSONA_HONOR_ACTION__EXECUTION_PLAYER"):
			return 10;
	
		case joaat("PERSONA_HONOR_ACTION__ANIMAL_CRUELTY"):
			return 45;
	
		case joaat("PERSONA_HONOR_ACTION__REVIVE_POSSE"):
			return 67;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER_BUTCHER"):
			return 1;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_NEG"):
			return 30;
	
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_KILL"):
			return 53;
	
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_MURDER"):
			return 59;
	
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_KILL"):
			return 49;
	
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_FEED"):
			return 95;
	
		case joaat("PERSONA_HONOR_ACTION__UNPROVOKED_ANTAGONIZATION"):
			return 21;
	
		case joaat("PERSONA_HONOR_ACTION__WATCH_BLEED_OUT"):
			return 11;
	
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_ACCEPT"):
			return 48;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTYFIVE"):
			return 37;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE_PLAYER"):
			return 18;
	
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_SAVE"):
			return 93;
	
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_NEG"):
			return 32;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE"):
			return 12;
	
		case joaat("PERSONA_HONOR_ACTION__NB_HOBO_DOG_KILL"):
			return 57;
	
		case joaat("PERSONA_HONOR_ACTION__RESOURCEFUL"):
			return 74;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TEN"):
			return 34;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_OUTLAW"):
			return 31;
	
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_PLAYER"):
			return 17;
	
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_POS"):
			return 82;
	
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_AI"):
			return 15;
	
		case joaat("PERSONA_HONOR_ACTION__THEFT"):
			return 44;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER"):
			return 2;
	
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_ALIVE"):
			return 105;
	
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE"):
			return 70;
	
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL_PVP"):
			return 79;
	
		case joaat("PERSONA_HONOR_ACTION__CLEAR_HIDEOUT"):
			return 75;
	
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_ASSIST"):
			return 100;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTEEN"):
			return 35;
	
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER"):
			return 73;
	
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_KILL"):
			return 51;
	
		case joaat("PERSONA_HONOR_ACTION__LOOTING_BODIES"):
			return 20;
	
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE"):
			return 77;
	
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_RESCUE"):
			return 96;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTY"):
			return 86;
	
		case -29468993:
			return 103;
	
		case -1:
			return 0;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTYFIVE"):
			return 87;
	
		case joaat("PERSONA_HONOR_ACTION__IGNORE_MISSION"):
			return 23;
	
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL_PVP"):
			return 27;
	
		case joaat("PERSONA_HONOR_ACTION__NB_RANDOM_EVENT_MURDER"):
			return 61;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTY"):
			return 42;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTYFIVE"):
			return 41;
	
		case joaat("PERSONA_HONOR_ACTION__NB_TREASURE_HUNTER_KILL"):
			return 52;
	
		case joaat("PERSONA_HONOR_ACTION__REVIVE_MULTI"):
			return 69;
	
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_KILL"):
			return 24;
	
		case joaat("PERSONA_HONOR_ACTION__HERDING_STEAL"):
			return 29;
	
		case joaat("PERSONA_HONOR_ACTION__VANDALISM_LOW"):
			return 47;
	
		case joaat("PERSONA_HONOR_ACTION__GRIEFING"):
			return 22;
	
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_BLEED_OUT"):
			return 55;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER_MISSION_PEDS"):
			return 6;
	
		case joaat("PERSONA_HONOR_ACTION__ARSON"):
			return 46;
	
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER_UNARMED"):
			return 8;
	
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER"):
			return 7;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTYFIVE"):
			return 89;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTY"):
			return 36;
	
		case joaat("PERSONA_HONOR_ACTION__MERCY_KILL"):
			return 94;
	
		case 669386338:
			return 104;
	
		case 796310207:
			return 66;
	
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_DEAD"):
			return 60;
	
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_FULL"):
			return 72;
	
		case joaat("PERSONA_HONOR_ACTION__CLEAR_AMBUSH"):
			return 76;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIVE"):
			return 83;
	
		case joaat("PERSONA_HONOR_ACTION__NB_TIED_UP_RESCUE"):
			return 97;
	
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_AI"):
			return 14;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER_CAMP_FOLLOWER"):
			return 3;
	
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL"):
			return 26;
	
		case joaat("PERSONA_HONOR_ACTION__RUSTLING"):
			return 28;
	
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL"):
			return 78;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTY"):
			return 90;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_GUNSLINGER"):
			return 81;
	
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_LOOT"):
			return 54;
	
		case 1623086000:
			return 65;
	
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_CLEAN"):
			return 71;
	
		case 1723535349:
			return 58;
	
		case joaat("PERSONA_HONOR_ACTION__HOGTIE_PLAYER"):
			return 9;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIVE"):
			return 33;
	
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_ASSIST"):
			return 99;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TEN"):
			return 84;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTY"):
			return 40;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTEEN"):
			return 85;
	
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE_THEN_KILL"):
			return 25;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTY"):
			return 38;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTYFIVE"):
			return 91;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_POS"):
			return 80;
	
		case joaat("PERSONA_HONOR_ACTION__BOUNTY_BRIBE_GUARD"):
			return 63;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTY"):
			return 88;
	
		case joaat("PERSONA_HONOR_ACTION__TRAMPLE"):
			return 19;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

Hash func_428(var uParam0, var uParam1) // Position - 0xD62C Signature - 22 02 07 00 00 4B 04 6A 80 01 08 3D 41 6A 80 02 08 3D 41 41 11 4B 00 2D 4B 04 39 4A CA 00 8B 05
{
	int num;

	num.f_1 = -1;
	num.f_2 = -1;

	if (func_424(uParam0, &num))
		return num;

	return 0;
}

BOOL func_429() // Position - 0xD656 Signature - 22 00 02 00 00 03 01 00 09
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

void func_430(Hash hParam0, int iParam1) // Position - 0xD66A Signature - 22 02 04 00 00 66 00 27 02 66
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

int func_431(int iParam0) // Position - 0xD67D Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 29
{
	switch (iParam0)
	{
		case 2:
			return joaat("UNLOCK_GROUP__MISSION_STORY");
	
		case 3:
			return joaat("UNLOCK_GROUP__MISSION_PROCEDURAL");
	
		case 4:
			return joaat("UNLOCK_GROUP__MISSION_FETCH");
	
		case 5:
			return joaat("UNLOCK_GROUP__MISSION_MINIGAME");
	
		case 6:
			return joaat("UNLOCK_GROUP__MISSION_FREE_MODE_EVENT");
	
		case 7:
			return joaat("UNLOCK_GROUP__MISSION_UGC");
	
		case 8:
			return 634321112;
	
		default:
		
	}

	return 0;
}

char* func_432(var uParam0, var uParam1, var uParam2) // Position - 0xD6F0 Signature - 22 03 05 00 00 4B
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_433(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0xD704 Signature - 22 04 0D 00 00 03
{
	int num;
	int i;
	int num2;
	int gangId;
	int num3;
	int j;
	int num4;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	num2 = -1;
	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (gangId == 0)
		return;

	switch (func_269(uParam0))
	{
		case 4:
			num3 = func_604(func_603(uParam0));
		
			if (num3 == -1 && iParam3 == 2 && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("net_main_offline")) == 0)
			{
				for (j = 0; j <= 112; j = j + 1)
				{
					if (func_169(j) == func_603(uParam0))
					{
						num3 = j;
						break;
					}
				}
			}
		
			num4 = func_314(num3);
		
			if (!func_291(num4, false))
				return;
			break;
	
		case 8:
			return;
	}

	for (i = 0; i <= 31; i = i + 1)
	{
		if (Global_1107816.f_33[i /*16*/] == gangId)
		{
			num2 = i;
			break;
		}
	}

	if (num2 == -1)
		return;

	num = Global_1107816.f_33[num2 /*16*/].f_3.f_1;

	if (num == -1)
		return;

	uParam2->f_2 = Global_1114893[num /*70*/];
	return;
}

int func_434(var uParam0, var uParam1) // Position - 0xD816 Signature - 22 02 05 00 00 11 4B 00 2D 39 8A
{
	int num;

	num = func_252(uParam0);

	if (num < 0)
		return 0;

	return func_605(num);
}

int func_435(var uParam0, var uParam1, int iParam2) // Position - 0xD838 Signature - 22 03 0F
{
	var unk;
	var unk4;
	var unk7;
	int num;

	if (Global_1072759.f_19487 >= 32)
		return -1;

	unk.f_1 = -1;
	unk.f_2 = -1;
	unk4.f_1 = -1;
	unk4.f_2 = -1;

	if (!func_424(uParam0, &unk))
		return -1;

	unk7 = -1;
	unk7.f_1 = -1;
	unk7 = { uParam0 };
	unk7.f_2 = iParam2;

	if (Global_1072759.f_19487 == 0)
	{
		Global_1072759.f_19487.f_1[Global_1072759.f_19487 /*3*/] = { unk7 };
		Global_1072759.f_19487 = Global_1072759.f_19487 + 1;
		return 0;
	}

	num = 0;

	while (num < Global_1072759.f_19487)
	{
		func_424(Global_1072759.f_19487.f_1[num /*3*/], &unk4);
	
		if (unk == unk4)
		{
			Global_1072759.f_19487.f_1[num /*3*/] = { unk7 };
			return num;
		}
		else if (unk > unk4)
		{
			num = num + 1;
		}
		else if (unk < unk4)
		{
			func_606(num);
			Global_1072759.f_19487.f_1[num /*3*/] = { unk7 };
			return num;
		}
	}

	if (Global_1072759.f_19487 < 31)
	{
		num = Global_1072759.f_19487;
		Global_1072759.f_19487.f_1[num /*3*/] = { unk7 };
		Global_1072759.f_19487 = Global_1072759.f_19487 + 1;
	
		if (Global_1072759.f_19487 > 32)
			Global_1072759.f_19487 = 32;
	
		return num;
	}

	return -1;
}

void func_436() // Position - 0xD9A7 Signature - 22 00 06 00 00 2F
{
	int num;
	var unk;

	num = 0;
	unk.f_1 = -1;
	unk.f_2 = -1;

	while (num < Global_1072759.f_19487)
	{
		func_424(Global_1072759.f_19487.f_1[num /*3*/], &unk);
		num = num + 1;
	}

	return;
}

void func_437(int iParam0, int iParam1) // Position - 0xD9EE Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 02 04 00 00 66 00 76
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_438(int iParam0, int iParam1) // Position - 0xDA03 Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 02 04 00 00 66 00 3C
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

Hash func_439(int iParam0, int iParam1) // Position - 0xDA14 Signature - 22 02 04 00 00 66 00 3C 3B
{
	switch (iParam0)
	{
		case 0:
			return joaat("crime_arson");
	
		case 1:
			return joaat("crime_assault");
	
		case 2:
			return joaat("crime_assault_animal");
	
		case 3:
			return joaat("crime_assault_corpse");
	
		case 4:
			return joaat("crime_assault_horse");
	
		case 5:
			return joaat("crime_assault_law");
	
		case 6:
			return joaat("crime_assault_livestock");
	
		case 7:
			return joaat("crime_bank_robbery");
	
		case 8:
			return joaat("crime_burglary");
	
		case 9:
			return joaat("crime_cheating");
	
		case 10:
			return joaat("CRIME_DISTURBANCE");
	
		case 11:
			return joaat("crime_explosion");
	
		case 12:
			return joaat("crime_grave_robbery");
	
		case 13:
			return joaat("CRIME_HASSLE");
	
		case 14:
			return joaat("crime_hit_and_run");
	
		case 15:
			return joaat("crime_hit_and_run_law");
	
		case 16:
			return joaat("crime_intimidation");
	
		case 17:
			return joaat("crime_jack_horse");
	
		case 18:
			return joaat("crime_jack_vehicle");
	
		case 19:
			return joaat("crime_jail_break");
	
		case 20:
			return joaat("crime_kidnapping");
	
		case 21:
			return joaat("crime_kidnapping_law");
	
		case 22:
			return joaat("crime_lasso_assault");
	
		case 23:
			return joaat("crime_law_is_threatened");
	
		case 24:
			return joaat("crime_loitering");
	
		case 25:
			return joaat("crime_looting");
	
		case 26:
			return joaat("crime_murder");
	
		case 27:
			return joaat("crime_murder_animal");
	
		case 28:
			return joaat("crime_murder_horse");
	
		case 29:
			return joaat("crime_murder_law");
	
		case 30:
			return joaat("crime_murder_livestock");
	
		case 31:
			return joaat("crime_property_destruction");
	
		case 32:
			return joaat("CRIME_RESIST_ARREST");
	
		case 33:
			return joaat("crime_robbery");
	
		case 34:
			return joaat("crime_stagecoach_robbery");
	
		case 35:
			return joaat("crime_stolen_goods");
	
		case 36:
			return joaat("crime_theft");
	
		case 37:
			return joaat("crime_theft_horse");
	
		case 38:
			return joaat("crime_theft_livestock");
	
		case 39:
			return joaat("crime_theft_vehicle");
	
		case 40:
			return joaat("crime_threaten");
	
		case 41:
			return joaat("crime_threaten_law");
	
		case 42:
			return joaat("crime_train_robbery");
	
		case 43:
			return joaat("crime_trample");
	
		case 44:
			return joaat("crime_trample_law");
	
		case 45:
			return joaat("crime_trespassing");
	
		case 46:
			return joaat("crime_unarmed_assault");
	
		case 47:
			return joaat("crime_vandalism");
	
		case 48:
			return joaat("crime_vandalism_vehicle");
	
		case 49:
			return joaat("crime_vehicle_destruction");
	
		case 50:
			return joaat("crime_wanted_level_up_debug_high");
	
		case 51:
			return joaat("crime_wanted_level_up_debug_low");
	
		case 52:
			return joaat("crime_accomplice");
	
		case 53:
			return joaat("crime_explosion_poison");
	
		case 54:
			return joaat("crime_murder_player");
	
		case 55:
			return joaat("crime_murder_player_horse");
	
		case 56:
			return joaat("crime_self_defence");
	
		case 57:
			return joaat("crime_trample_player");
	
		case 58:
			return 0;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

void func_440(var uParam0, var uParam1, var uParam2) // Position - 0xDD69 Signature - 22 03 05 00 00 1D
{
	Global_1939102.f_75.f_67 = { uParam0 };
	return;
}

void func_441() // Position - 0xDD7F Signature - 22 00 02 00 00 6D 6B
{
	TEXT_LABEL_ASSIGN_STRING(&(Global_1939102.f_75.f_67), "", 24);
	return;
}

BOOL func_442(int iParam0) // Position - 0xDD94 Signature - 22 01 06 00 00 66 00 09
{
	int num;
	int num2;
	int offset;

	num = func_607(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (func_608(num2))
	{
		if (Global_1072759.f_19585.f_24 && !func_609(iParam0))
			return false;
	
		return MISC::IS_BIT_SET(Global_1072759.f_19585[num2], offset) || MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
	}

	return MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
}

int func_443(var uParam0, var uParam1) // Position - 0xDE13 Signature - 22 02 05 00 00 11 4B 00 2D 39 09 12 00 05 8B 04 00 08 50 02 01 2F 67 04 2F
{
	int i;

	if (!func_36(uParam0))
		return -1;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (func_251(Global_1900460.f_1[i /*2*/], uParam0))
			return i;
	}

	return -1;
}

int func_444(int iParam0) // Position - 0xDE5E Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 5D
{
	if (iParam0 < 0)
		return 0;

	if (Global_1900460.f_66 == 0)
		return 0;

	if (Global_1900460.f_66 == 1)
	{
		Global_1900460.f_66 = 0;
		func_610(&Global_1900460.f_1[0 /*2*/]);
		return 1;
	}

	func_610(&Global_1900460.f_1[iParam0 /*2*/]);
	Global_1900460.f_66 = Global_1900460.f_66 - 1;
	func_611(iParam0, Global_1900460.f_66);
	return 1;
}

void func_445(var uParam0, int iParam1) // Position - 0xDEC9 Signature - 22 02 0A 00 00 5D 2C 66 12 27 81 2F
{
	var unk;
	int num;
	int i;

	if (Global_1205804.f_129 <= 0)
	{
		Global_1205804.f_129 = 0;
		return;
	}

	if (iParam1 >= Global_1205804.f_129)
		iParam1 = 0;

	if (iParam1 >= 32)
		iParam1 = Global_1205804.f_129 - 1;

	unk.f_1 = -1;
	unk.f_1.f_1 = -1;

	if (Global_1205804.f_129 == 1)
	{
		*uParam0 = { Global_1205804[0 /*4*/] };
		Global_1205804[0 /*4*/] = { unk };
		Global_1205804.f_129 = 0;
		return;
	}

	*uParam0 = { Global_1205804[iParam1 /*4*/] };
	Global_1205804.f_129 = Global_1205804.f_129 - 1;
	num = Global_1205804.f_129 - 1;

	for (i = iParam1; i <= num; i = i + 1)
	{
		Global_1205804[i /*4*/] = { Global_1205804[i + 1 /*4*/] };
		Global_1205804[i + 1 /*4*/] = { unk };
	}

	return;
}

void func_446(int iParam0) // Position - 0xDFA3 Signature - 22 01 03 00 00 66 00 2F 35 6A 05 8B 0A
{
	if (iParam0 < 0 || iParam0 >= Global_1205804.f_129)
		return;

	Global_1205804.f_130 = iParam0;
	Global_1205804.f_131 = Global_1205804[iParam0 /*4*/];
	return;
}

void func_447() // Position - 0xDFDA Signature - 22 00 02 00 00 5D 2C 66 12 27 83
{
	if (Global_1205804.f_131 == 0)
		return;

	Global_1205804.f_130 = func_612(Global_1205804.f_131);

	if (Global_1205804.f_130 < 0)
		Global_1205804.f_131 = 0;

	return;
}

struct<2> func_448(int iParam0) // Position - 0xE010 Signature - 22 01 05 00 00 66 00 3C
{
	var unk;

	switch (iParam0)
	{
		case 1:
			return func_98(joaat("mp_beat_manager_moonshiner_cooldown_timestamp"));
	
		case 2:
			return func_98(-1122351331);
	
		case 3:
			return func_98(1185140727);
	
		case 4:
			return func_98(1185140727);
	}

	return unk;
}

BOOL func_449(var uParam0, var uParam1) // Position - 0xE078 Signature - 22 02 04 00 00 11 4B 00 2D 09
{
	return func_613(uParam0, 1, 4);
}

BOOL func_450(int iParam0, var uParam1) // Position - 0xE08A Signature - 22 02 2F
{
	var unk;
	int num;
	int num2;
	int networkTimeAccurate;

	if (func_147(iParam0, 536870912))
		return true;

	if (func_614(&(Global_1225099.f_380)))
		return false;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = 255;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_8 = 2;
	unk.f_8.f_1 = -1;
	unk.f_8.f_5 = -1;
	unk.f_8.f_5.f_1 = -1;
	unk.f_8.f_5.f_3 = -1;
	unk.f_8.f_5.f_4 = -1;
	unk.f_8.f_5.f_5 = -1;
	unk.f_8.f_5.f_6 = -1;
	unk.f_8.f_5.f_6.f_1 = -1;
	unk.f_8.f_5.f_9 = 2;
	unk.f_23.f_1 = 1024;
	unk.f_23.f_4 = -15;
	unk.f_23.f_5 = 255;
	unk.f_23.f_8 = 1;
	unk.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_23.f_13 = -1;
	num = func_314(Global_1225099[iParam0 /*28*/]);
	num2 = func_451(num);
	networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (Global_1207480.f_13[num2] >= Global_1207480.f_3[num2])
	{
		*uParam1 = 1;
		return false;
	}

	unk.f_2 = 2;
	unk.f_5 = 0;
	unk.f_7 = networkTimeAccurate;
	unk.f_8.f_1 = 2;
	unk.f_8 = func_451(num);
	unk.f_8.f_5.f_9 = num2;
	unk.f_8.f_5 = { func_326(iParam0) };
	unk.f_8.f_2 = { func_333(Global_1225099[iParam0 /*28*/], Global_1225099[iParam0 /*28*/].f_6) };
	func_615(&unk);
	func_616(&(Global_1225099.f_380), &unk, true, 15, 6, 24, 0);
	func_296(iParam0, 536870912);
	return true;
}

int func_451(int iParam0) // Position - 0xE216 Signature - 22 01 03 00 00 11 50
{
	return 2;
}

void func_452(int iParam0, var uParam1) // Position - 0xE21F Signature - 22 02 05 00 00 66 00 5D 8B
{
	int num;

	num = func_314(Global_1225099[iParam0 /*28*/]);
	*uParam1 = { func_326(iParam0) };
	uParam1->f_9 = func_451(num);
	return;
}

int func_453(var uParam0) // Position - 0xE249 Signature - 22 01 05 00 00 66 00 39 CF
{
	int num;
	int i;

	if (!func_617(uParam0))
		return -1;

	num = func_618(uParam0, uParam0->f_9);

	if (num != -1)
		return num;

	for (i = 0; i < 4; i = i + 1)
	{
		if (i == uParam0->f_9)
		{
		}
		else
		{
			num = func_618(uParam0, i);
		
			if (num != -1)
				return num;
		}
	}

	return -1;
}

BOOL func_454(int iParam0) // Position - 0xE2AA Signature - 22 01 03 00 00 66 00 2F 7E 6A 8B 06 00 66 00 6D 47
{
	return iParam0 >= 0 && iParam0 < 71;
}

struct<15> func_455(int iParam0) // Position - 0xE2C0 Signature - 22 01 12 00 00 4B
{
	var unk;

	unk = 2;
	unk.f_1 = -1;
	unk.f_5 = -1;
	unk.f_5.f_1 = -1;
	unk.f_5.f_3 = -1;
	unk.f_5.f_4 = -1;
	unk.f_5.f_5 = -1;
	unk.f_5.f_6 = -1;
	unk.f_5.f_6.f_1 = -1;
	unk.f_5.f_9 = 2;

	if (!func_454(iParam0))
		return unk;

	return Global_1207480.f_231[iParam0 /*15*/];
}

var func_456(int iParam0) // Position - 0xE32A Signature - 22 01 16
{
	var memberHandles;
	var value;
	int gangMembers;
	int i;
	Player playerFromGamerHandle;

	memberHandles = 7;
	gangMembers = GANG::_NETWORK_GET_GANG_MEMBERS(iParam0, &memberHandles);

	if (gangMembers == 0)
		return value;

	i = 0;

	for (i = 0; i <= gangMembers - 1; i = i + 1)
	{
		playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&memberHandles[i /*2*/]);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerFromGamerHandle))
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, playerFromGamerHandle);
	}

	return value;
}

void func_457(Any* panParam0, var uParam1) // Position - 0xE383 Signature - 22 02 04 00 00 4B 01 03 05 00 AE 05 8B 03 00 50 02 00 6D 09
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 9;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 31, 28, &uParam1);
	return;
}

void func_458(Any* panParam0) // Position - 0xE3BA Signature - 22 01 03 00 00 2F 5D
{
	if (Global_1051645.f_16[0] == 0 || !SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0]))
		return;

	*panParam0 = 9;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(panParam0, 31, 28, Global_1051645.f_16[0]);
	return;
}

int func_459(int iParam0, int iParam1) // Position - 0xE40E Signature - 22 02 05 00 00 66 00 39 72
{
	int num;

	num = func_619(iParam0);

	if (num == 0)
		return -1;

	if (iParam1 == -1)
		return -1;

	return func_620(num, iParam1);
}

void func_460(int iParam0) // Position - 0xE43A Signature - 22 01 0B 00 00 09
{
	var unk;

	unk.f_4 = 1;
	unk.f_5 = iParam0;
	func_621(&unk);
	return;
}

BOOL func_461(int iParam0, int iParam1) // Position - 0xE453 Signature - 22 02 05 00 00 66 00 39 FC
{
	int i;

	if (!func_63(iParam0))
		return false;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)) && Global_1225687[i /*303*/][iParam0 /*23*/].f_22 != Global_1225099[iParam0 /*28*/].f_9 || !func_66(iParam0, iParam1, i))
			return false;
	}

	return true;
}

BOOL func_462(int iParam0) // Position - 0xE4BE Signature - 22 01 04 00 00 66 00 39 FC
{
	int i;

	if (!func_63(iParam0))
		return false;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)) && Global_1225687[i /*303*/][iParam0 /*23*/].f_22 != Global_1225099[iParam0 /*28*/].f_9 || func_540(iParam0, i, true, false))
			return true;
	}

	return false;
}

BOOL func_463(int iParam0) // Position - 0xE528 Signature - 22 01 03 00 00 66 00 25
{
	return func_461(iParam0, 1024);
}

var func_464(int iParam0, int iParam1) // Position - 0xE539 Signature - 22 02 04 00 00 73
{
	return func_622(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

Vector3 func_465(int iParam0) // Position - 0xE557 Signature - 22 01 03 00 00 1D 66 00 5D 0D
{
	return Global_1114893[iParam0 /*70*/].f_7.f_1;
}

float func_466(int iParam0) // Position - 0xE56D Signature - 22 01 03 00 00 66 00 5D 0D 03 11 63
{
	return Global_1114893[iParam0 /*70*/].f_7;
}

// Unhandled jump detected. Output should be considered invalid
void func_467(var uParam0, Any anParam1, var uParam2, var uParam3, var uParam4, float fParam5) // Position - 0xE57F Signature - 22 06 15
{
	int num;
	int num2;
	int i;
	int value;
	var unk;
	Player player;

	unk = 7;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (!GANG::_NETWORK_IS_GANG_MEMBER(anParam1, player))
		{
		}
		else
		{
			if (GANG::NETWORK_IS_GANG_LEADER(player))
			{
				uParam0->[0] = player;
				goto 0x9F;
			}
		
			if (func_623(player, uParam2, fParam5))
			{
				if (num + 1 < 7)
				{
					uParam0->[1 + num] = player;
					num = num + 1;
				}
			}
			else if (num2 < 7)
			{
				unk[num2] = i;
				num2 = num2 + 1;
			}
		}
	}

	for (i = 0; i <= num2 - 1; i = i + 1)
	{
		value = unk[i];
		player = PLAYER::INT_TO_PLAYERINDEX(value);
	
		if (num + 1 < 7)
		{
			uParam0->[1 + num] = player;
			num = num + 1;
		}
	}

	return;
}

void func_468(int iParam0) // Position - 0xE66A Signature - 22 01 2C
{
	var unk;
	int num;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = 255;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_8 = 2;
	unk.f_8.f_1 = -1;
	unk.f_8.f_5 = -1;
	unk.f_8.f_5.f_1 = -1;
	unk.f_8.f_5.f_3 = -1;
	unk.f_8.f_5.f_4 = -1;
	unk.f_8.f_5.f_5 = -1;
	unk.f_8.f_5.f_6 = -1;
	unk.f_8.f_5.f_6.f_1 = -1;
	unk.f_8.f_5.f_9 = 2;
	unk.f_23.f_1 = 1024;
	unk.f_23.f_4 = -15;
	unk.f_23.f_5 = 255;
	unk.f_23.f_8 = 1;
	unk.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_23.f_13 = -1;
	num = func_314(Global_1225099[iParam0 /*28*/]);
	unk.f_2 = 2;
	unk.f_5 = 7;
	unk.f_8.f_1 = 2;
	unk.f_8 = func_451(num);
	unk.f_8.f_5.f_9 = func_451(num);
	unk.f_8.f_5 = { func_326(iParam0) };
	unk.f_8.f_2 = { func_333(Global_1225099[iParam0 /*28*/], Global_1225099[iParam0 /*28*/].f_6) };
	func_616(&(Global_1225099.f_380), &unk, false, 0, 0, 0, 0);
	return;
}

int func_469(int iParam0) // Position - 0xE78F Signature - 22 01 04 00 00 2F 67 03 66 03 42
{
	int i;

	for (i = 0; i <= 4; i = i + 1)
	{
		if (Global_1225099.f_369[i /*2*/] == iParam0)
			return i;
	}

	return -1;
}

void func_470(int iParam0) // Position - 0xE7BF Signature - 22 01 03 00 00 09 66 00 5D
{
	Global_1225099.f_369[iParam0 /*2*/].f_1 = 1;
	return;
}

BOOL func_471(var uParam0, int iParam1) // Position - 0xE7D5 Signature - 22 02 04 00 00 66 01 2F 7E
{
	return iParam1 >= 0 && iParam1 < uParam0->f_2;
}

int func_472() // Position - 0xE7ED Signature - 22 00 02 00 00 5D A3 D7 13 80
{
	return Global_1300387.f_150.f_4;
}

struct<2> func_473(int iParam0) // Position - 0xE7FD Signature - 22 01 03 00 00 66 00 2F 8A 07
{
	if (iParam0 < 0)
		return func_216();

	return Global_1207480.f_231[iParam0 /*15*/].f_5;
}

int func_474(int iParam0) // Position - 0xE820 Signature - 22 01 03 00 00 66 00 39 AA E2 00 05 8B 04 00 08
{
	if (!func_454(iParam0))
		return -1;

	return Global_1207480.f_231[iParam0 /*15*/].f_1;
}

struct<2> func_475(int iParam0) // Position - 0xE842 Signature - 22 01 03 00 00 11 66 00 5D 0B
{
	return Global_1219595.f_1[iParam0 /*10*/].f_4;
}

void func_476(int iParam0) // Position - 0xE858 Signature - 22 01 05 00 00 66 00 5D B8
{
	int i;
	int num;

	num = Global_1207480.f_231.f_1066[iParam0 /*17*/].f_7;

	if (num > 1)
		num = 1;

	for (i = 0; i < num; i = i + 1)
	{
		func_624(iParam0, i);
		func_625(iParam0, i);
	}

	func_485(iParam0, 0);
	func_626(iParam0);
	func_488(iParam0);
	return;
}

BOOL func_477(int iParam0, Player plParam1, int iParam2) // Position - 0xE8B0 Signature - 22 03 05 00 00 66 01 03
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam1))
		return false;

	return MISC::IS_BIT_SET(Global_1217218[plParam1 /*72*/][iParam0], iParam2);
}

void func_478(int iParam0, var uParam1, var uParam2) // Position - 0xE8D8 Signature - 22 03 05 00 00 11 4B 01
{
	Global_1219595.f_1[iParam0 /*10*/].f_4 = { uParam1 };
	Global_1219595.f_1[iParam0 /*10*/].f_6 = func_428(uParam1);
	return;
}

void func_479(int iParam0, int iParam1) // Position - 0xE906 Signature - 22 02 05 00 00 03 01 00 25 67 04 66 00 66 04 66
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (func_477(iParam0, playerIndex, iParam1))
		return;

	MISC::SET_BIT(&Global_1217218[playerIndex /*72*/][iParam0], iParam1);
	return;
}

BOOL func_480(int iParam0, int iParam1) // Position - 0xE936 Signature - 22 02 06 00 00 2F 67 05 66 05 39
{
	Player player;
	int i;

	for (i = 0; i < func_365(); i = i + 1)
	{
		player = func_366(i);
	
		if (func_477(iParam0, player, iParam1))
			return true;
	}

	return func_477(iParam0, PLAYER::PLAYER_ID(), iParam1);
}

void func_481(int iParam0, BOOL bParam1, int iParam2) // Position - 0xE978 Signature - 22 03 08 00 00 66 00 39
{
	var unk;
	int num;

	unk = { func_475(iParam0) };

	if (!func_36(unk))
		return;

	if (func_51(unk))
		return;

	if (!func_112(unk))
		return;

	if (func_477(iParam0, PLAYER::PLAYER_ID(), 5))
		return;

	if (bParam1)
		num = 4;
	else
		num = 0;

	func_116(unk, false, num, iParam2, false);
	func_479(iParam0, 4);
	return;
}

void func_482(int iParam0, int iParam1) // Position - 0xE9EA Signature - 22 02 06 00 00 66 00 39 42 E8 00 11 4B 04 06 11 4B 04 2D 39 09 12 00 05 8B 03 00 50 02 00 11 4B 04 2D 39 53 19 00 8B
{
	var unk;

	unk = { func_475(iParam0) };

	if (!func_36(unk))
		return;

	if (func_51(unk))
		return;

	if (!func_112(unk))
		return;

	if (func_477(iParam0, PLAYER::PLAYER_ID(), 5))
		return;

	func_116(unk, false, 1, iParam1, false);
	func_479(iParam0, 5);
	return;
}

int func_483(int iParam0) // Position - 0xEA4D Signature - 22 01 03 00 00 66 00 5D B8 6C 12 80 E7 18 2A 04 63 11 27 0D
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_13;
}

BOOL func_484(int iParam0) // Position - 0xEA64 Signature - 22 01 03 00 00 66 00 39 78
{
	if (!func_496(iParam0))
		return false;

	if (func_483(iParam0) >= 5)
		return false;

	if (func_483(iParam0) <= 0)
		return false;

	if (!func_477(iParam0, PLAYER::PLAYER_ID(), 0))
		return false;

	return true;
}

void func_485(int iParam0, int iParam1) // Position - 0xEAAA Signature - 22 02 06 00 00 66 00 39 42 E8 00 11 4B 04 06 11 4B 04 2D 39 09 12 00 05 8B 03 00 50 02 00 11 4B 04 2D 39 53 19 00 05
{
	var unk;

	unk = { func_475(iParam0) };

	if (!func_36(unk))
		return;

	if (!func_51(unk) && !func_112(unk))
		return;

	func_627(iParam0, 2);
	func_627(iParam0, 3);
	func_479(iParam0, 6);
	func_116(unk, false, 2, iParam1, false);
	return;
}

int func_486(int iParam0) // Position - 0xEB0A Signature - 22 01 03 00 00 66 00 5D B8 6C 12 18 C9 09 63 06 27 04
{
	return Global_1207480.f_2505[iParam0 /*6*/].f_4;
}

void func_487(int iParam0) // Position - 0xEB1F Signature - 22 01 05 00 00 66 00 39 42
{
	var unk;

	unk = { func_475(iParam0) };

	if (!func_36(unk))
		return;

	if (func_51(unk))
		return;

	if (func_112(unk))
		return;

	func_479(iParam0, 2);
	func_627(iParam0, 3);
	func_627(iParam0, 6);
	func_520(unk);
	return;
}

void func_488(int iParam0) // Position - 0xEB7A Signature - 22 01 04 00 00 03 01 00 25
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	Global_1217218[playerIndex /*72*/][iParam0] = 0;
	return;
}

void func_489(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xEB95 Signature - 22 04 08 00 00 66
{
	var unk;

	unk = { func_475(iParam0) };

	if (!func_36(unk))
		return;

	if (!func_51(unk))
		return;

	if (func_112(unk))
		return;

	if (bParam1)
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);

	if (bParam1)
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);

	func_479(iParam0, 3);
	func_517(unk, true, bParam2, bParam3);
	return;
}

BOOL func_490(int iParam0) // Position - 0xEBFB Signature - 22 01 07 00 00 2F 67 04
{
	Player player;
	int i;
	var unk;

	for (i = 0; i < func_365(); i = i + 1)
	{
		player = func_366(i);
	
		if (func_477(iParam0, player, 2) && !(func_477(iParam0, player, 4) || func_477(iParam0, player, 5) || func_477(iParam0, player, 6)))
			return false;
	}

	unk = { func_475(iParam0) };
	return !(func_51(unk) || func_112(unk));
}

void func_491(int iParam0, int iParam1) // Position - 0xEC7E Signature - 22 02 08 00 00 66 00 39
{
	Hash scriptHash;
	int num;
	int num2;
	int num3;

	scriptHash = func_628(iParam0);
	num = func_629(iParam0, iParam1);
	num2 = func_630(iParam0, iParam1);
	num3 = func_483(iParam0);

	switch (func_631(iParam0, iParam1))
	{
		case -1:
			if (!func_484(iParam0))
				return;
		
			func_632(iParam0, iParam1, 1);
			break;
	
		case 0:
			if (!func_484(iParam0))
				return;
		
			func_632(iParam0, iParam1, 1);
			break;
	
		case 1:
			if (!func_484(iParam0))
			{
				func_633(iParam0, iParam1);
				func_632(iParam0, iParam1, 0);
				return;
			}
		
			if (num2 < 1)
				return;
		
			if (num2 >= 3)
				return;
		
			func_632(iParam0, iParam1, 2);
			break;
	
		case 2:
			if (!func_484(iParam0))
			{
				func_633(iParam0, iParam1);
				func_632(iParam0, iParam1, 0);
				return;
			}
		
			if (num2 < 1)
			{
				func_632(iParam0, iParam1, 1);
				return;
			}
		
			if (num2 >= 3)
			{
				func_632(iParam0, iParam1, 6);
				return;
			}
		
			if (!func_634(iParam0, iParam1))
				return;
		
			func_635(iParam0, iParam1, 0);
			func_632(iParam0, iParam1, 3);
			break;
	
		case 3:
			if (!func_484(iParam0))
			{
				func_633(iParam0, iParam1);
				func_632(iParam0, iParam1, 0);
				return;
			}
		
			if (num2 < 1)
			{
				func_632(iParam0, iParam1, 7);
				return;
			}
		
			if (num2 >= 3)
			{
				func_632(iParam0, iParam1, 6);
				return;
			}
		
			if (!func_636(iParam0, iParam1))
				return;
		
			func_632(iParam0, iParam1, 4);
			break;
	
		case 4:
			if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(scriptHash, num, true, 0))
			{
				if (!func_637(iParam0, iParam1))
				{
					func_638(iParam0, iParam1, 0);
					func_639(iParam0, iParam1, 0);
					func_632(iParam0, iParam1, 2);
				}
			
				return;
			}
		
			func_632(iParam0, iParam1, 5);
			break;
	
		case 5:
			if (func_474(iParam0) <= 0 || num3 >= 5 || num3 < 1)
				func_624(iParam0, iParam1);
		
			if (func_640(iParam0, iParam1))
				func_624(iParam0, iParam1);
		
			if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(scriptHash, num, true, 0))
				return;
		
			if (func_637(iParam0, iParam1))
				return;
		
			func_638(iParam0, iParam1, 0);
		
			if (func_500(iParam0, 4) || func_500(iParam0, 5) || func_483(iParam0) > 2 && num2 == 3)
			{
				func_632(iParam0, iParam1, 6);
			}
			else
			{
				func_639(iParam0, iParam1, 0);
				func_632(iParam0, iParam1, 8);
			}
			break;
	
		case 6:
			if (!func_490(iParam0))
				return;
		
			func_632(iParam0, iParam1, 7);
			break;
	
		case 7:
			func_633(iParam0, iParam1);
			func_632(iParam0, iParam1, 8);
			break;
	
		case 8:
			func_479(iParam0, 7);
		
			if (num2 == 2 || num2 == 3)
				return;
		
			func_632(iParam0, iParam1, 1);
			func_627(iParam0, 7);
			break;
	}

	return;
}

BOOL func_492(int iParam0, int iParam1) // Position - 0xEF76 Signature - 22 02 05 00 00 66 00 66 01 39 B3
{
	int volLockRequestId;

	volLockRequestId = func_641(iParam0, iParam1);

	if (volLockRequestId == 0)
		return true;

	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(volLockRequestId))
	{
		func_642(iParam0, iParam1, 0);
		return true;
	}

	func_642(iParam0, iParam1, 0);
	return true;
}

void func_493(int iParam0, int iParam1) // Position - 0xEFB3 Signature - 22 02 06 00 00 66 00 6D
{
	int num;
	int num2;

	if (!func_309(iParam0, 8))
		return;

	num = func_643(iParam0, iParam1);
	num2 = func_474(iParam0);

	if (!func_496(iParam0) || func_483(iParam0) >= 5)
	{
		if (num != 1)
		{
			func_644(iParam0, iParam1);
			func_645(iParam0, iParam1, 1);
		}
	
		return;
	}

	switch (num)
	{
		case -2:
			break;
	
		case -1:
			if (!func_36(func_473(iParam0)))
				return;
		
			if (func_646(iParam0, iParam1) <= 0)
			{
				func_645(iParam0, iParam1, 0);
				return;
			}
			else
			{
				if (num2 == 1)
					func_645(iParam0, iParam1, 5);
				else
					func_645(iParam0, iParam1, 2);
			
				return;
			}
			break;
	
		case 0:
			if (func_646(iParam0, iParam1) > 0)
			{
				func_645(iParam0, iParam1, 2);
				return;
			}
			break;
	
		case 1:
			func_645(iParam0, iParam1, -1);
			break;
	
		case 2:
			if (func_647(iParam0, iParam1) != 0)
			{
				func_645(iParam0, iParam1, 4);
				return;
			}
		
			func_648(iParam0, iParam1, false);
			func_645(iParam0, iParam1, 3);
			break;
	
		case 3:
			if (func_641(iParam0, iParam1) == 0)
			{
				func_645(iParam0, iParam1, 2);
				return;
			}
		
			if (func_649(iParam0, iParam1))
			{
				func_645(iParam0, iParam1, 4);
				return;
			}
			break;
	
		case 4:
			if (num2 == 1)
			{
				VOLUME::_0xD4FA73FE628FEC63(func_647(iParam0, iParam1), 160);
				func_645(iParam0, iParam1, 7);
				return;
			}
		
			if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(func_647(iParam0, iParam1)))
			{
				func_650(iParam0, iParam1);
				func_645(iParam0, iParam1, 2);
				return;
			}
			break;
	
		case 5:
			if (func_630(iParam0, iParam1) == 2 || func_483(iParam0) == 2 || num2 > 1)
			{
				func_645(iParam0, iParam1, 2);
				return;
			}
			break;
	
		case 6:
			if (func_641(iParam0, iParam1) == 0)
			{
				func_645(iParam0, iParam1, 5);
				return;
			}
		
			if (func_630(iParam0, iParam1) == 2 || func_483(iParam0) == 2 || num2 > 1)
			{
				func_492(iParam0, iParam1);
				func_645(iParam0, iParam1, 2);
				return;
			}
		
			if (func_649(iParam0, iParam1))
			{
				func_645(iParam0, iParam1, 7);
				return;
			}
			break;
	
		case 7:
			if (func_630(iParam0, iParam1) == 2 || func_483(iParam0) == 2 || num2 > 1)
			{
				VOLUME::_0xD4FA73FE628FEC63(func_647(iParam0, iParam1), 32);
				func_645(iParam0, iParam1, 4);
				return;
			}
		
			if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(func_647(iParam0, iParam1)))
			{
				func_650(iParam0, iParam1);
				func_645(iParam0, iParam1, 5);
				return;
			}
			break;
	}

	return;
}

void func_494(int iParam0, int iParam1) // Position - 0xF275 Signature - 22 02 08 00 00 66 00 6D 10
{
	Hash scriptHash;
	int num;
	int num2;
	int num3;

	if (!func_309(iParam0, 16))
		return;

	scriptHash = func_628(iParam0);
	num = func_629(iParam0, iParam1);
	num3 = func_630(iParam0, iParam1);

	if (num3 > 0)
	{
		if (!func_496(iParam0))
		{
			func_651(iParam0, iParam1, 0);
			return;
		}
	}

	switch (num3)
	{
		case -1:
			if (!func_36(func_473(iParam0)))
				return;
		
			if (func_652(iParam0, iParam1) <= 0)
			{
				func_651(iParam0, iParam1, 0);
				return;
			}
			else
			{
				func_651(iParam0, iParam1, 1);
				return;
			}
			break;
	
		case 0:
			if (!func_496(iParam0))
				return;
		
			if (func_652(iParam0, iParam1) <= 0)
				return;
		
			num2 = func_653(iParam0);
		
			if (num2 != -15 && func_654(num2))
				return;
		
			func_651(iParam0, iParam1, 1);
			break;
	
		case 1:
			if (func_655(iParam0, iParam1, 0))
			{
				func_651(iParam0, iParam1, 2);
				func_505(iParam0, 3);
				return;
			}
			break;
	
		case 2:
			if (!func_655(iParam0, iParam1, 0) && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(scriptHash, num, false, 0))
			{
				func_651(iParam0, iParam1, 3);
				return;
			}
		
			if (func_483(iParam0) >= 3)
			{
				func_651(iParam0, iParam1, 3);
				return;
			}
			break;
	
		case 3:
			if (func_483(iParam0) >= 3)
				return;
		
			if (!func_656(iParam0, iParam1))
			{
				func_651(iParam0, iParam1, 2);
				return;
			}
		
			if (func_499(iParam0) != 255)
				func_505(iParam0, 2);
			else
				func_505(iParam0, 1);
		
			num2 = func_653(iParam0);
		
			if (num2 != -15 && func_654(num2))
			{
				func_651(iParam0, iParam1, 0);
				return;
			}
		
			if (func_483(iParam0) >= 4)
				return;
		
			if (func_657(iParam0, 7))
				return;
		
			func_651(iParam0, iParam1, 1);
			break;
	}

	return;
}

void func_495(int iParam0, int iParam1) // Position - 0xF45F Signature - 22 02 04 00 00 66 01 66 00 5D B8 6C 12 80 E7 18 2A 04 63 11 6C
{
	Global_1207480.f_231.f_1066[iParam0 /*17*/].f_13 = iParam1;
	return;
}

BOOL func_496(int iParam0) // Position - 0xF478 Signature - 22 01 04 00 00 66 00 39 42
{
	BOOL flag;

	flag = !func_659(func_475(iParam0), func_658(iParam0), 0);
	return flag;
}

int func_497(int iParam0) // Position - 0xF496 Signature - 22 01 23
{
	var unk;
	int num;
	int num2;
	int num3;

	if (!func_454(iParam0))
		return 0;

	unk = 2;
	unk.f_1 = -1;
	unk.f_5 = -1;
	unk.f_5.f_1 = -1;
	unk.f_5.f_3 = -1;
	unk.f_5.f_4 = -1;
	unk.f_5.f_5 = -1;
	unk.f_5.f_6 = -1;
	unk.f_5.f_6.f_1 = -1;
	unk.f_5.f_9 = 2;
	num = { Global_1207480.f_231[iParam0 /*15*/] };
	unk.f_1 = 0;
	Global_1207480.f_231[iParam0 /*15*/] = { unk };
	num2 = num;
	num3 = num.f_5.f_9;
	Global_1207480.f_13[num3] = Global_1207480.f_13[num3] - 1;
	Global_1207480.f_8[num2] = Global_1207480.f_8[num2] - 1;

	if (num2 != num3)
		Global_1207480.f_18[num2] = Global_1207480.f_18[num2] - 1;

	if (func_660(iParam0))
		Global_1207480.f_23[num2] = Global_1207480.f_23[num2] - 1;

	return 1;
}

void func_498(int iParam0, Player plParam1) // Position - 0xF58D Signature - 22 02 04 00 00 66 00 2F 8A
{
	if (iParam0 < 0)
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam1))
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam1))
		return;

	Global_1207480.f_2505[iParam0 /*6*/].f_4 = GANG::NETWORK_GET_GANG_ID(plParam1);
	Global_1207480.f_2505[iParam0 /*6*/].f_5 = plParam1;
	return;
}

Player func_499(int iParam0) // Position - 0xF5DA Signature - 22 01 03 00 00 66 00 5D B8 6C 12 18 C9 09 63 06 27 05
{
	return Global_1207480.f_2505[iParam0 /*6*/].f_5;
}

BOOL func_500(int iParam0, int iParam1) // Position - 0xF5EF Signature - 22 02 06 00 00 2F 67 05 66 05 6D 20 8A 2F
{
	Player player;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (func_477(iParam0, player, iParam1))
		{
			return true;
		}
	}

	return false;
}

BOOL func_501(int iParam0) // Position - 0xF631 Signature - 22 01 05 00 00 66 00 25
{
	int num;
	var value;

	if (!func_309(iParam0, 512))
		return false;

	num = func_661(iParam0);

	if (num <= 0)
		return false;

	value = func_622(func_662(iParam0, 0), 0f, 0f, 0f, (float)num, (float)num, (float)num * 2, joaat("volSphere"), false, 8);
	return SCRIPTS::COUNT_PLAYER_BITS(&value) <= 0;
}

BOOL func_502(int iParam0) // Position - 0xF687 Signature - 22 01 05 00 00 2F 67 04 66 04 6D 20 8A 2E
{
	Player player;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (!func_663(iParam0, player))
		{
			return false;
		}
	}

	return true;
}

void func_503(int iParam0) // Position - 0xF6C8 Signature - 22 01 06 00 00 66 00 5D B8
{
	Player player;
	Player gangLeader;
	int gangId;

	if (Global_1207480.f_231.f_1066[iParam0 /*17*/].f_6 & 4096 != 0)
		return;

	player = Global_1207480.f_2505[iParam0 /*6*/].f_5;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		return;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
	{
		gangId = GANG::NETWORK_GET_GANG_ID(player);
	
		if (Global_1207480.f_2505[iParam0 /*6*/].f_4 != gangId)
		{
			if (GANG::NETWORK_IS_GANG_ID_VALID(Global_1207480.f_2505[iParam0 /*6*/].f_4) && GANG::NETWORK_IS_GANG_IN_SESSION(Global_1207480.f_2505[iParam0 /*6*/].f_4) && GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1207480.f_2505[iParam0 /*6*/].f_4) > 0)
			{
				gangLeader = GANG::NETWORK_GET_GANG_LEADER(Global_1207480.f_2505[iParam0 /*6*/].f_4);
				func_498(iParam0, gangLeader);
			}
			else if (GANG::NETWORK_GET_GANG_LEADER(gangId) == player)
			{
				Global_1207480.f_2505[iParam0 /*6*/].f_4 = gangId;
			}
			else
			{
				func_664(iParam0);
			}
		}
	
		return;
	}

	if (Global_1207480.f_2505[iParam0 /*6*/].f_4 == 0)
	{
		func_664(iParam0);
		return;
	}

	if (!GANG::NETWORK_IS_GANG_IN_SESSION(Global_1207480.f_2505[iParam0 /*6*/].f_4))
	{
		func_664(iParam0);
		return;
	}

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(Global_1207480.f_2505[iParam0 /*6*/].f_4);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(gangLeader))
	{
		func_664(iParam0);
		return;
	}

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
	{
		func_664(iParam0);
		return;
	}

	func_498(iParam0, gangLeader);
	return;
}

BOOL func_504(int iParam0) // Position - 0xF828 Signature - 22 01 05 00 00 2F 67 04 66 04 6D 20 8A 33
{
	Player player;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (Global_1217218[player /*72*/][iParam0] > 127)
		{
			return true;
		}
	}

	return false;
}

void func_505(int iParam0, int iParam1) // Position - 0xF86E Signature - 22 02 04 00 00 66 01 66 00 5D B8 6C 12 80 E7 63
{
	Global_1207480.f_231[iParam0 /*15*/].f_1 = iParam1;
	return;
}

int func_506(int iParam0) // Position - 0xF884 Signature - 22 01 07 00 00 09
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Player player;

	flag = true;

	if (flag && !UNLOCK::UNLOCK_IS_UNLOCKED(Global_1235687[iParam0 /*697*/].f_612))
		return 4;

	if (func_66(iParam0, 8, 255))
		return 5;

	if (func_218())
		return 26;

	if (func_66(iParam0, 64, 255) && func_509(iParam0, 255) == 16 || !func_40(iParam0, 32))
		return 16;

	if (func_217(Global_1235687[iParam0 /*697*/].f_598, func_216(), false, false) && Global_1235687[iParam0 /*697*/].f_571 != joaat("INTRO_MISSION"))
		return 7;

	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()) && func_665(Global_1235687[iParam0 /*697*/].f_598))
	{
		if (func_66(iParam0, 32, 255) && !func_40(iParam0, 256))
		{
			func_666();
			func_150(iParam0, 256);
		}
	
		return 8;
	}

	if (Global_1235687[iParam0 /*697*/].f_571 != joaat("BOUNTY_PLAYER") || Global_1225099[iParam0 /*28*/].f_16 != PLAYER::PLAYER_ID())
	{
		if (func_40(iParam0, 8388608) || func_66(iParam0, 32, 255) && func_510(iParam0, &flag2))
		{
			func_150(iParam0, 8388608);
		
			if (flag2)
				func_150(iParam0, 16777216);
		
			return 17;
		}
	}

	flag3 = func_667(iParam0, 255);

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225099[iParam0 /*28*/].f_14), PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		if (func_120(Global_1235687[iParam0 /*697*/].f_571))
			if (!func_66(iParam0, 16, 255) && !func_147(iParam0, 16))
				return 21;
	
		if (flag3 && func_40(iParam0, 262144))
			return 3;
		else
			return 2;
	}

	player = func_668(iParam0);

	if (player != 255)
	{
		if (player != PLAYER::PLAYER_ID())
			func_320(iParam0, 16777216);
	
		return 2;
	}

	if (func_401(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))))
		return 23;

	if (Global_1235687[iParam0 /*697*/].f_613 != 0 && !UNLOCK::UNLOCK_IS_UNLOCKED(Global_1235687[iParam0 /*697*/].f_613))
		return 24;

	if (flag3)
		return 15;

	return 0;
}

int func_507(int iParam0) // Position - 0xFAD9 Signature - 22 01 03 00 00 66 00 5D 8B B1 12 17 1C 39
{
	if (func_669(Global_1225099[iParam0 /*28*/]))
		return 12;

	if (func_214(PLAYER::PLAYER_ID(), true, false, true))
		return 13;

	return 0;
}

int func_508(int iParam0) // Position - 0xFB09 Signature - 22 01 08 00 00 09
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int num;
	int num2;

	flag = true;

	if (flag && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1235687[iParam0 /*697*/].f_612))
		return 4;

	flag2 = func_540(iParam0, 255, false, false);
	flag3 = func_40(iParam0, 512);
	num = Global_1901671.f_319.f_170;

	if (Global_1235687[iParam0 /*697*/].f_571 == joaat("CAMP_SELL"))
		num = num + (num * func_670());

	if (Global_1235687[iParam0 /*697*/].f_571 != joaat("BOUNTY_PLAYER") && !func_671(Global_1235687[iParam0 /*697*/].f_601, flag2, flag3, num))
		return 9;

	if (!func_147(iParam0, 2097152) && !func_66(iParam0, 32, 255))
		return 10;

	if (Global_1235687[iParam0 /*697*/].f_571 == joaat("CAMP_SELL"))
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(-1607036473))
			return 18;
	
		num2 = func_672();
	
		if (func_290(num2) && func_175(num2) < Global_1901671.f_171.f_59)
			return 19;
	
		if (func_673(iParam0, 1))
			return 20;
	}
	else if (Global_1235687[iParam0 /*697*/].f_571 == joaat("BOUNTY_PLAYER"))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1225099[iParam0 /*28*/].f_16) && Global_1225099[iParam0 /*28*/].f_16 == Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300.f_1)
			return 2;
		else
			return 22;
	}

	if (func_147(iParam0, 1073741824))
		return 25;

	if (func_674(PLAYER::PLAYER_ID(), true, true))
		return 11;

	return 0;
}

int func_509(int iParam0, int iParam1) // Position - 0xFCA4 Signature - 22 02 04 00 00 66 01 6D FF 15 06 00 03 01 00 CC 67 01 66 00
{
	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1225687[iParam1 /*303*/][iParam0 /*23*/].f_20;
}

BOOL func_510(int iParam0, var uParam1) // Position - 0xFCC8 Signature - 22 02 06 00 00 03 01 01 13 03
{
	Any gangId;
	BOOL flag;

	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (gangId != Global_1235687[iParam0 /*697*/].f_609)
	{
		flag = GANG::NETWORK_IS_GANG_ID_VALID(Global_1235687[iParam0 /*697*/].f_609);
	
		if (Global_1235687[iParam0 /*697*/].f_608 > 1 && GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1235687[iParam0 /*697*/].f_609) > 0 && GANG::NETWORK_GET_GANG_LEADER(Global_1235687[iParam0 /*697*/].f_609) != 255 && GANG::NETWORK_GET_GANG_LEADER(Global_1235687[iParam0 /*697*/].f_609) == Global_1235687[iParam0 /*697*/].f_610)
			*uParam1 = 1;
	
		Global_1235687[iParam0 /*697*/].f_609 = gangId;
		return flag;
	}

	Global_1235687[iParam0 /*697*/].f_608 = GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1235687[iParam0 /*697*/].f_609);
	Global_1235687[iParam0 /*697*/].f_610 = GANG::NETWORK_GET_GANG_LEADER(Global_1235687[iParam0 /*697*/].f_609);
	return false;
}

void func_511(int iParam0) // Position - 0xFDAF Signature - 22 01 04 00 00 66 00 5D 8B B1 12 17 1C 66 00 5D 8B B1 12 63 1C 27 06 39 0E E4 00 67 03 66 03 08 15 03 00 50 01 00 66 03 39 18
{
	int num;

	num = func_459(Global_1225099[iParam0 /*28*/], Global_1225099[iParam0 /*28*/].f_6);

	if (num == -1)
		return;

	func_675(num);
	return;
}

void func_512(int iParam0) // Position - 0xFDDE Signature - 22 01 05 00 00 5D 7C
{
	int num;
	int num2;

	if (Global_1900412.f_1 == 2 || Global_1900412.f_1 == 5 || Global_1900412.f_1 == 3)
		return;

	num = 0;

	if (func_17() != -1)
		num = 1;

	num2 = func_256(Global_1893611.f_2);
	Global_1900412.f_1 = 3;
	Global_1900412.f_2 = 0;
	Global_1900412.f_7 = num;
	Global_1900412.f_8 = iParam0;
	Global_1900412.f_9 = num2;

	if (Global_1900412.f_9 != -1 && Global_1900412.f_9 != 0)
		func_258(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
	else if (Global_1900412.f_11 != -1)
		func_258(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_11);

	return;
}

void func_513(int iParam0) // Position - 0xFEA1 Signature - 22 01 06 00 00 66 00 37 00 00 00 08
{
	int num;
	BOOL flag;
	int num2;

	if (func_40(iParam0, 134217728))
		return;

	num = Global_1225099[iParam0 /*28*/].f_5;

	if (!func_126(num))
		return;

	switch (Global_1235687[iParam0 /*697*/].f_571)
	{
		case joaat("CAMP_RESUPPLY"):
		case joaat("CAMP_SETUP"):
		case joaat("CAMP_SELL"):
			flag = true;
			num2 = 3;
			break;
	
		case joaat("CAMP_RAID"):
			flag = true;
			num2 = 3;
			break;
	}

	func_676(num, num2, flag);
	func_150(iParam0, 134217728);
	return;
}

void func_514() // Position - 0xFF25 Signature - 22 00 04 00 00 37
{
	var statId;

	statId = { func_98(joaat("mp_fetch_last_attempted_camp_sell_pvp_timestamp")) };
	STATS::STAT_ID_SET_INT(&statId, Global_1295666.f_16, true);
	return;
}

int func_515(int iParam0) // Position - 0xFF48 Signature - 22 01 03 00 00 66 00 5D 8B B1 12 63
{
	return Global_1225099[iParam0 /*28*/].f_26.f_1;
}

BOOL func_516(int iParam0, int iParam1) // Position - 0xFF5C Signature - 22 02 0A 00 00 2F 67 04 4B 05 66 00 39 04 B2 00 6A 8B 09 00 4B 05 66 01 39 4F BE 00 69 8B 11 00 62 4B 05 2D 37 8F
{
	BOOL num;
	var unk;

	num = 0;

	if (func_360(&unk, iParam0) && func_389(&unk, iParam1))
		func_539(unk, 572283279, &num, false);

	return num;
}

void func_517(var uParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xFF92 Signature - 22 05 29
{
	int num;
	var unk;

	if (!func_36(uParam0))
		return;

	if (!func_51(uParam0))
		return;

	if (bParam2)
		func_677(uParam0);

	if (!func_36(func_263(0)))
	{
		func_262(uParam0, 3);
		func_264(bParam3);
		func_265(!bParam4);
		func_678(uParam0, -1);
	
		if (bParam2 && !func_679(2))
			func_430(&Global_0, 1024);
	
		func_267(true);
	}
	else
	{
		func_678(uParam0, -1);
		func_262(uParam0, 4);
		func_680(uParam0, false);
	}

	Global_1051645.f_45.f_1 = 1;
	num = func_269(uParam0);

	if (num != 2 && num != 7)
		if (func_681(uParam0, &unk))
			MISC::_0x1096603B519C905F(&(unk.f_17));

	return;
}

int func_518(var uParam0, var uParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0x1006A Signature - 22 05 0B 00 00 11
{
	Hash hash;

	if (func_107(uParam0) >= 0)
		return 0;

	hash.f_1 = -1;
	hash.f_1.f_1 = -1;
	hash.f_1 = { uParam0 };
	hash = func_428(uParam0);
	hash.f_3 = iParam3;
	func_682(&hash, bParam2, iParam4);
	return 1;
}

void func_519(int iParam0) // Position - 0x100B8 Signature - 22 01 03 00 00 5D F0 5E 12 78 A4 01 11 72 03 00 50 01 00 5D F0 5E 12 18 A4 01 27 01 2F 72
{
	if (Global_1203952.f_420 != 2)
		return;

	if (Global_1203952.f_420.f_1 != 0)
		return;

	Global_1203952.f_420.f_1 = iParam0;
	POSSE::_0xC584FF658B2E55DA(iParam0);
	return;
}

int func_520(var uParam0, var uParam1) // Position - 0x100EF Signature - 22 02 08 00 00 85
{
	int num;
	int num2;
	var unk;

	if (Global_1900530 == 15)
		return -1;

	if (!func_683(uParam0))
		return -1;

	num2 = func_684(uParam0);

	if (num2 >= 0)
	{
		func_685(uParam0, true);
		return num2;
	}
	else
	{
		num = Global_1900530;
		Global_1900531[num /*2*/] = { uParam0 };
		Global_1900562[num /*2*/] = { unk };
		func_685(uParam0, true);
		Global_1900530 = Global_1900530 + 1;
	
		if (Global_1900530 > 15)
			Global_1900530 = 15;
	
		return num;
	}

	return -1;
}

int func_521(var uParam0, var uParam1) // Position - 0x1017F Signature - 22 02 05 00 00 11 4B 00 2D 39 09 12 00 05 8B 04 00 08 50 02 01 2F 67 04 66
{
	int i;

	if (!func_36(uParam0))
		return -1;

	for (i = 0; i < 32; i = i + 1)
	{
		if (func_251(uParam0, func_686(i)))
			return i;
	}

	return -1;
}

void func_522(int iParam0) // Position - 0x101C1 Signature - 22 01 03 00 00 5D E4 F0 10 27
{
	if (Global_1110244.f_17)
		func_687(iParam0);
	else
		func_688(iParam0);

	return;
}

BOOL func_523() // Position - 0x101E1 Signature - 22 00 02 00 00 39 71 05 00 2F 72
{
	if (func_17() != 0)
		return true;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_HONOR")))
		return true;

	if (Global_1149432.f_3876.f_1 & 2 != 0)
		return true;

	if (Global_1149432.f_3876.f_1 & 4 != 0)
		return true;

	if (!NETWORK::HAS_NETWORK_TIME_STARTED())
		return true;

	return false;
}

void func_524(Any* panParam0, var uParam1) // Position - 0x10239 Signature - 22 02 04 00 00 4B 01 03 05 00 AE 05 8B 03 00 50 02 00 6D BC
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 188;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 7, 14, &uParam1);
	return;
}

BOOL func_525(int iParam0) // Position - 0x10270 Signature - 22 01 03 00 00 66 00 08 1C 50
{
	return iParam0 != -1;
}

void func_526(int iParam0, Hash hParam1) // Position - 0x1027C Signature - 22 02 04 00 00 66 00 66 01 37 9E 13
{
	func_689(iParam0, hParam1, joaat("rel_player_cop"), false);
	func_689(iParam0, hParam1, joaat("rel_player_0"), false);
	func_689(iParam0, hParam1, joaat("rel_player_1"), false);
	func_689(iParam0, hParam1, joaat("rel_player_2"), false);
	func_689(iParam0, hParam1, joaat("rel_player_3"), false);
	func_689(iParam0, hParam1, joaat("rel_player_4"), false);
	func_689(iParam0, hParam1, joaat("rel_player_5"), false);
	func_689(iParam0, hParam1, joaat("rel_player_6"), false);
	func_689(iParam0, hParam1, joaat("rel_player_7"), false);
	func_689(iParam0, hParam1, joaat("rel_player_8"), false);
	func_689(iParam0, hParam1, joaat("rel_player_9"), false);
	func_689(iParam0, hParam1, joaat("rel_player_10"), false);
	func_689(iParam0, hParam1, joaat("rel_player_11"), false);
	func_689(iParam0, hParam1, joaat("rel_player_12"), false);
	func_689(iParam0, hParam1, joaat("rel_player_13"), false);
	func_689(iParam0, hParam1, joaat("rel_player_14"), false);
	func_689(iParam0, hParam1, joaat("rel_player_15"), false);
	func_689(iParam0, hParam1, joaat("rel_player_16"), false);
	func_689(iParam0, hParam1, joaat("rel_player_17"), false);
	func_689(iParam0, hParam1, joaat("rel_player_18"), false);
	func_689(iParam0, hParam1, joaat("rel_player_19"), false);
	func_689(iParam0, hParam1, joaat("rel_player_20"), false);
	func_689(iParam0, hParam1, joaat("rel_player_21"), false);
	func_689(iParam0, hParam1, joaat("rel_player_22"), false);
	func_689(iParam0, hParam1, joaat("rel_player_23"), false);
	func_689(iParam0, hParam1, joaat("rel_player_24"), false);
	func_689(iParam0, hParam1, joaat("rel_player_25"), false);
	func_689(iParam0, hParam1, joaat("rel_player_26"), false);
	func_689(iParam0, hParam1, joaat("rel_player_27"), false);
	func_689(iParam0, hParam1, joaat("rel_player_28"), false);
	func_689(iParam0, hParam1, joaat("rel_player_29"), false);
	func_689(iParam0, hParam1, joaat("rel_player_30"), false);
	func_689(iParam0, hParam1, joaat("rel_player_31"), false);
	return;
}

void func_527(int iParam0, Hash hParam1) // Position - 0x10452 Signature - 22 02 04 00 00 66 00 66 01 37 C3
{
	func_689(iParam0, hParam1, joaat("rel_guama_law"), false);
	func_689(iParam0, hParam1, joaat("rel_pinkertons"), false);
	func_689(iParam0, hParam1, joaat("rel_criminals"), false);
	func_689(iParam0, hParam1, joaat("rel_gunslingers"), false);
	func_689(iParam0, hParam1, joaat("rel_gang_dutchs"), false);
	func_689(iParam0, hParam1, joaat("rel_gang_laramie_gang"), false);
	func_689(iParam0, hParam1, joaat("rel_gang_skinner_brothers"), false);
	func_689(iParam0, hParam1, joaat("rel_gang_creole"), false);
	func_689(iParam0, hParam1, joaat("rel_gang_lemoyne_raiders"), false);
	func_689(iParam0, hParam1, joaat("rel_gang_odriscoll"), false);
	func_689(iParam0, hParam1, joaat("rel_gang_murfree_brood"), false);
	return;
}

void func_528(int iParam0, Hash hParam1) // Position - 0x104F4 Signature - 22 02 04 00 00 66 00 66 01 37 CF
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, hParam1, joaat("rel_civmale"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, hParam1, joaat("rel_civfemale"));
	return;
}

void func_529(int iParam0, Hash hParam1) // Position - 0x10516 Signature - 22 02 04 00 00 66 00 66 01 37 9E 51
{
	func_689(iParam0, hParam1, joaat("REL_ALLIGATOR"), false);
	func_689(iParam0, hParam1, joaat("REL_WILD_ANIMAL_PREDATOR"), false);
	return;
}

void func_530(int iParam0, Hash hParam1) // Position - 0x1053A Signature - 22 02 04 00 00 66 00 66 01 37 CC
{
	func_689(iParam0, hParam1, joaat("REL_WILD_ANIMAL"), false);
	func_689(iParam0, hParam1, joaat("rel_domesticated_animal"), false);
	func_689(iParam0, hParam1, joaat("REL_WILD_ANIMAL_BIRD"), false);
	func_689(iParam0, hParam1, joaat("REL_BOAR"), false);
	func_689(iParam0, hParam1, joaat("rel_hen_animal"), false);
	return;
}

void func_531(int iParam0, int iParam1, Hash hParam2, int iParam3) // Position - 0x10588 Signature - 22 04 06 00 00 66 01 66
{
	func_689(iParam1, hParam2, func_690(iParam0, iParam3), false);
	return;
}

void func_532(int iParam0, Hash hParam1) // Position - 0x105A1 Signature - 22 02 04 00 00 66 00 66 01 37 08
{
	func_689(iParam0, hParam1, joaat("rel_cop"), false);
	return;
}

struct<2> func_533(int iParam0, int iParam1) // Position - 0x105B7 Signature - 22 02 28
{
	var unk;
	var unk2;
	var unk35;

	unk = func_230(func_169(iParam0), iParam1);
	unk2 = { func_691(unk, 1, iParam0, iParam1) };

	if (unk2.f_3 != 0)
	{
		unk35 = { func_370(unk2.f_3, 4) };
	
		if (!func_36(unk35))
			return func_216();
	
		return unk35;
	}

	return func_216();
}

int func_534(int iParam0, int iParam1) // Position - 0x10613 Signature - 22 02 04 00 00 66 00 08
{
	if (iParam0 == -1)
		return -1;

	return Global_1245174[iParam0 /*5*/].f_4 + iParam1;
}

BOOL func_535(Any* panParam0, int iParam1) // Position - 0x10632 Signature - 22 02 04 00 00 37 0A
{
	panParam0->f_2 = 1168896522;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_536(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x10653 Signature - 22 05 11
{
	var unk;
	int num;
	var unk6;
	var unk7;
	int num2;
	int i;

	num2 = func_692(iParam1);

	if (num2 == -1)
		return 0;

	if (!func_693(&unk))
		return 0;

	if (!func_694(&unk, 5, 0, 0, 1))
		return 0;

	if (!func_694(&unk, 6, 0, 0, 1))
		return 0;

	if (!func_694(&unk, 8, func_695(num2), 0, 1))
		return 0;

	if (!func_694(&unk, 9, 0, 0, 1))
		return 0;

	if (!func_694(&unk, 10, iParam1, 0, 1))
		return 0;

	unk7 = unk.f_1;

	if (num2 != 4)
	{
		if (!func_694(&unk, 20, 0, 0, 1))
			return 0;
	
		if (!func_694(&unk, 21, func_696(iParam4), 0, 1))
			return 0;
	
		if (!func_694(&unk, 22, func_697(4), 0, 1))
			return 0;
	
		if (!func_694(&unk, 23, iParam2, 0, 1))
			return 0;
	
		uParam0->f_39 = func_698(&unk, 1);
	}

	unk.f_1 = unk7;

	if (func_694(&unk, 17, 0, 0, 0))
	{
		uParam0->f_37 = func_699(&unk, 0);
		unk6 = unk.f_1;
	}

	uParam0->f_37 = uParam0->f_37 + 1;

	for (i = 0; i <= uParam0->f_37 - 1; i = i + 1)
	{
		unk.f_1 = unk6;
	
		if (i == 0)
		{
			num = iParam1;
		}
		else
		{
			if (!func_694(&unk, 11, i - 1, 0, 1))
				return 0;
		
			num = func_700(&unk, 1);
		}
	
		if (!func_701(&uParam0->[i /*6*/], num, iParam2, iParam3, iParam4))
			return 0;
	}

	return 1;
}

BOOL func_537(Any* panParam0, int iParam1) // Position - 0x107DE Signature - 22 02 04 00 00 37 B4
{
	panParam0->f_2 = 1700129460;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_538(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, Vector3* pvParam6, BOOL bParam7) // Position - 0x107FF Signature - 22 08 0A 00 00 66 05 4B 00 6C 02 66 06 4B 00 03 09 00 04
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam6, &uParam0))
		return true;
	else
		bParam7;

	return false;
}

int func_539(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, BOOL* pbParam6, BOOL bParam7) // Position - 0x10825 Signature - 22 08 0A 00 00 66 05 4B 00 6C 02 66 06 4B 00 03 09 00 D2
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(pbParam6, &uParam0))
		return 1;
	else
		bParam7;

	return 0;
}

BOOL func_540(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1084B Signature - 22 04 07 00 00 66 01
{
	int num;

	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	num = func_509(iParam0, iParam1);

	if (bParam2 && num == 0)
		return true;

	if (bParam3 && num == 21)
		return true;

	switch (num)
	{
		case 1:
		case 2:
		case 3:
		case 21:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_541(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6) // Position - 0x108B4 Signature - 22 07 09
{
	if (iParam2 && func_702(iParam0, fParam1, bParam5))
		return true;

	if (iParam3 && func_703(iParam0, fParam1))
		return true;

	if (iParam4 && func_704(iParam0, fParam1))
		return true;

	if (iParam6 && func_705(iParam0, fParam1))
		return true;

	return false;
}

int func_542(int iParam0) // Position - 0x10917 Signature - 22 01 03 00 00 11 66 00 5D E7
{
	if (func_36(Global_1235687[iParam0 /*697*/].f_598) && func_659(Global_1235687[iParam0 /*697*/].f_598, func_284(Global_1235687[iParam0 /*697*/].f_571), 0))
		return 0;

	if (func_706())
		return 2;

	if (Global_1235687[iParam0 /*697*/].f_571 == joaat("BOUNTY_PLAYER") && func_40(iParam0, 65536) && func_147(iParam0, 1073741824))
		return 2;

	if (func_667(iParam0, 255) && !SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225099[iParam0 /*28*/].f_14), PLAYER::PLAYER_ID()) || !func_66(iParam0, 512, 255))
	{
		if (!func_707(4, Global_1225099[iParam0 /*28*/].f_13, Global_1225099[iParam0 /*28*/].f_15) && NETWORK::NETWORK_GET_HOST_OF_SCRIPT("net_fetch", iParam0, 0) == PLAYER::PLAYER_ID())
			return 2;
	
		return 0;
	}

	if (func_66(iParam0, 8388608, 255))
		return 0;

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225099[iParam0 /*28*/].f_14), PLAYER::PLAYER_ID()) || func_66(iParam0, 32, 255))
		return 3;

	if (func_76(Global_1235687[iParam0 /*697*/].f_571) && !func_147(iParam0, 131072))
		return 2;

	return 1;
}

void func_543(int iParam0) // Position - 0x10A89 Signature - 22 01 04 00 00 66 00 5D E7 DA 12 40
{
	int num;

	num = Global_1235687[iParam0 /*697*/].f_604;

	if (!func_49(num))
	{
		func_115(iParam0, 2);
	
		if (func_106(num))
			func_54(num, iParam0, false, false);
	}
	else
	{
		func_547(num, iParam0, 0);
	}

	func_320(iParam0, 1048576);
	return;
}

int func_544(int iParam0) // Position - 0x10AD9 Signature - 22 01 05 00 00 08
{
	int i;
	int num;

	num = -1;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (func_708(i))
			return i;
		else if (num == -1 && !func_709(i) && Global_1235687.f_9062[i /*4*/].f_2 < iParam0)
			num = i;
	}

	return num;
}

void func_545(int iParam0, int iParam1) // Position - 0x10B35 Signature - 22 02 04 00 00 66 00 5D E7 DA 12 18 66
{
	if (Global_1235687.f_9062[iParam0 /*4*/].f_1 != iParam1)
		Global_1235687.f_9062[iParam0 /*4*/].f_1 = iParam1;

	return;
}

void func_546(int iParam0, int iParam1, int iParam2) // Position - 0x10B5E Signature - 22 03 05 00 00 66 00 5D E7 DA 12 18 66 23 17
{
	if (Global_1235687.f_9062[iParam0 /*4*/] != iParam2)
	{
		if (!func_128(iParam0, iParam1))
			return;
	
		Global_1235687.f_9062[iParam0 /*4*/] = iParam2;
		Global_1235687.f_9062[iParam0 /*4*/].f_1 = -1;
	}

	return;
}

void func_547(int iParam0, int iParam1, int iParam2) // Position - 0x10BA0 Signature - 22 03 05 00 00 66 00 5D E7 DA 12 18 66 23 63
{
	if (Global_1235687.f_9062[iParam0 /*4*/].f_2 != iParam2)
	{
		if (!func_128(iParam0, iParam1))
			return;
	
		Global_1235687.f_9062[iParam0 /*4*/].f_2 = iParam2;
	}

	return;
}

BOOL func_548(int iParam0, int iParam1, var uParam2) // Position - 0x10BD8 Signature - 22 03 18
{
	var scriptName;
	int num;
	struct<10> args;

	TEXT_LABEL_ASSIGN_STRING(&scriptName, "net_fetch", 64);
	num = iParam0;

	if (num != -1)
	{
		if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(10000) <= 0)
			return false;
	
		if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&scriptName, num, true, 0))
		{
			*uParam2 = 1;
			return true;
		}
	
		if (func_66(iParam0, 2, 255))
			return true;
	
		SCRIPTS::REQUEST_SCRIPT(&scriptName);
	
		if (SCRIPTS::HAS_SCRIPT_LOADED(&scriptName))
		{
			args.f_7 = -1;
			args.f_7.f_1 = -1;
			args.f_9 = 255;
			args.f_7 = { Global_1235687[iParam0 /*697*/].f_598 };
			args.f_6 = iParam0;
			args = num;
			Global_1235687.f_9062[iParam1 /*4*/].f_3 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&scriptName, &args, 10, 10000);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&scriptName);
			func_710(&scriptName, num);
			return true;
		}
	}

	return false;
}

int func_549(Player plParam0) // Position - 0x10C97 Signature - 22 01 05 00 00 66 00 39 C7
{
	int num;
	int num2;

	num = func_711(plParam0);
	num2 = func_712(plParam0, num);

	if (num != num2)
	{
		if (func_550(num2))
		{
			func_713(num2);
			num = num2;
		}
	}

	return num;
}

BOOL func_550(int iParam0) // Position - 0x10CCD Signature - 22 01 03 00 00 66 00 2F 7E 6A 8B 06 00 66 00 6D 20
{
	return iParam0 >= 0 && iParam0 < 32;
}

void func_551(int iParam0) // Position - 0x10CE3 Signature - 22 01 03 00 00 03 01 01 13 66
{
	if (!func_714(PLAYER::PLAYER_ID(), iParam0, 8))
		return;

	func_715();
	Global_1110244.f_15 = 1;
	func_716(iParam0, 8);
	return;
}

BOOL func_552(int iParam0) // Position - 0x10D11 Signature - 22 01 03 00 00 66 00 39 C8
{
	if (!func_717(iParam0))
		return true;

	return MISC::GET_GAME_TIMER() - func_718(iParam0) >= func_719(iParam0);
}

BOOL func_553(int iParam0, int iParam1) // Position - 0x10D39 Signature - 22 02 04 00 00 66 00 5D 68
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_8 && iParam1 != false;
}

void func_554() // Position - 0x10D54 Signature - 22 00 21
{
	var unk;

	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_7.f_1 = -1;
	unk.f_10 = 255;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = 7;
	unk.f_19.f_1 = 255;
	unk.f_19.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_27.f_1 = -1;
	unk.f_10 = PLAYER::PLAYER_ID();
	unk.f_11 = GANG::NETWORK_GET_GANG_ID(unk.f_10);
	unk.f_4 = 12;
	func_720(1);
	func_458(&unk);
	return;
}

void func_555() // Position - 0x10DF8 Signature - 22 00 23
{
	var unk;
	var value;
	Player sessionHost;

	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_7.f_1 = -1;
	unk.f_10 = 255;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = 7;
	unk.f_19.f_1 = 255;
	unk.f_19.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_27.f_1 = -1;
	sessionHost = NETWORK::_NETWORK_GET_SESSION_HOST();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(sessionHost))
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(sessionHost))
		return;

	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, sessionHost);
	unk.f_10 = PLAYER::PLAYER_ID();
	unk.f_11 = GANG::NETWORK_GET_GANG_ID(unk.f_10);
	unk.f_4 = 11;
	func_720(0);
	func_457(&unk, value);
	return;
}

void func_556(int iParam0) // Position - 0x10EC6 Signature - 22 01 06 00 00 66 00 5D E7 DA 12 40 B9 02 78 3B
{
	int num;

	if (Global_1235687[iParam0 /*697*/].f_571 != joaat("bounty_board"))
		return;

	if (func_40(iParam0, 268435456))
		return;

	if (Global_1225099[iParam0 /*28*/].f_7 == -1)
		return;

	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		func_150(iParam0, 268435456);
		return;
	}

	num = func_722(func_721(Global_1225099[iParam0 /*28*/].f_7));
	num.f_1 = Global_1225099[iParam0 /*28*/].f_22.f_3;
	num.f_2 = Global_1225099[iParam0 /*28*/].f_22.f_2;
	func_723(1244342493, &num, 0, 0);
	func_150(iParam0, 268435456);
	return;
}

void func_557(BOOL bParam0, int iParam1) // Position - 0x10F6E Signature - 22 02 04 00 00 66 00 66 01 39 87
{
	func_724(bParam0, iParam1);
	return;
}

void func_558(Player plParam0) // Position - 0x10F7E Signature - 22 01 09 00 00 4B
{
	var unk;

	unk.f_1 = 255;
	unk.f_2 = -1;
	unk.f_2.f_1 = -1;
	unk.f_5 = -1;
	Global_1108965.f_34.f_353[plParam0 /*6*/] = { unk };
	Global_1287273[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/].f_66 = 0;
	return;
}

void func_559(Player plParam0) // Position - 0x10FC4 Signature - 22 01 10 00
{
	var unk;
	var unk12;

	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28302), plParam0);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28306), plParam0);
	Global_1108965.f_34[plParam0 /*11*/].f_6 = 0;
	unk = 4;
	Global_1108965.f_34[plParam0 /*11*/] = { unk };
	func_725(plParam0);
	unk12 = 255;
	Global_1287273[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/][plParam0 /*2*/] = { unk12 };

	if (!func_726() || !func_727() || Global_1572887.f_7)
		func_728(MISC::VAR_STRING(2, "PARLEY_TICKER_END_DC"), -2, 0, 0, 0, true);

	if (!func_729(&(Global_1108965.f_34[plParam0 /*11*/].f_8), 256))
	{
		if (func_730(Global_1108965.f_34.f_614) < 2 || Global_1108965.f_34.f_618 != 255)
			func_731(&(Global_1108965.f_34.f_613), 64);
		else
			func_731(&(Global_1108965.f_34.f_613), 32);
	
		Global_1108965.f_34.f_614 = Global_1295666.f_16;
	}

	return;
}

void func_560(Player plParam0, BOOL bParam1) // Position - 0x110CD Signature - 22 02 1C
{
	Player bitIndex;
	var unk;
	var unk12;
	var value;
	var unk14;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(plParam0))
		return;

	bitIndex = plParam0;

	if (!Global_1108965.f_34[bitIndex /*11*/].f_6)
		return;

	func_732(plParam0);
	func_733(plParam0);
	func_734(plParam0);
	func_735(&(Global_1108965.f_34[bitIndex /*11*/].f_8), 2);
	func_725(bitIndex);

	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Global_1108965.f_34.f_546[bitIndex /*2*/]) == plParam0 && !func_729(&(Global_1108965.f_34[bitIndex /*11*/].f_8), 256))
	{
		if (func_730(Global_1108965.f_34.f_614) < 2 || Global_1108965.f_34.f_618 != 255)
		{
			func_731(&(Global_1108965.f_34.f_613), 64);
		}
		else
		{
			func_731(&(Global_1108965.f_34.f_613), 32);
			Global_1108965.f_34.f_618 = plParam0;
		}
	
		Global_1108965.f_34.f_614 = Global_1295666.f_16;
		func_728(MISC::VAR_STRING(10, "PARLEY_TICKER_END", func_737(PLAYER::GET_PLAYER_NAME(plParam0), func_736(plParam0, true, -1, false))), -2, 0, 0, 0, true);
	}

	unk = 4;
	Global_1108965.f_34[bitIndex /*11*/] = { unk };
	unk12 = 255;
	Global_1287273[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/][bitIndex /*2*/] = { unk12 };

	if (!bParam1)
		return;

	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, bitIndex);
	unk14.f_5 = PLAYER::PLAYER_ID();
	unk14.f_4 = 5;
	func_738(&unk14, &value);
	return;
}

BOOL func_561(Player plParam0) // Position - 0x11242 Signature - 22 01 03 00 00 66 00 5D 69
{
	if (Global_1287273[plParam0 /*67*/].f_66)
		return Global_1287273[plParam0 /*67*/].f_66;

	return Global_1108965.f_34.f_353[plParam0 /*6*/];
}

int func_562(int iParam0, Any anParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x11271 Signature - 22 08 1E
{
	BOOL flag;
	int num;
	var unk;
	var unk2;

	if (iParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(iParam0))
		return 1;

	if (bParam7)
	{
		flag = GANG::NETWORK_IS_GANG_ID_VALID(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) && GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
		bParam7 = flag;
	}

	POSSE::_0xC08AFF658B2E51DA(&num);

	if (num != 0)
		func_739(iParam2, -372840566);

	SECURE_STORE(&unk, iParam0);

	if (!bParam7)
		if (!NETWORK::_0x64A36BA85CE01A81(&unk, &(uParam3->f_1), &(iParam2->f_1), anParam1))
			return 0;
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&unk, &(iParam2->f_1), anParam1))
		return 0;

	unk2.f_1 = 11;
	unk2.f_16 = 255;
	unk2.f_13 = iParam4;
	unk2.f_16 = iParam5;
	unk2.f_14 = iParam6;
	unk2 = { *iParam2 };
	func_740(anParam1, iParam0, unk2);
	return 1;
}

int func_563(var uParam0, var uParam1, int iParam2) // Position - 0x11352 Signature - 22 03 08 00 00 2F
{
	int num;
	int num2;
	int num3;

	num = 0;
	num2 = iParam2 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
	
		if (uParam1->[num3 /*3*/] > uParam0)
			num2 = num3 - 1;
		else if (uParam1->[num3 /*3*/] < uParam0)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

BOOL func_564(Any* panParam0, int iParam1, int iParam2) // Position - 0x113A7 Signature - 22 03 07 00 00 66 01
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

BOOL func_565(int iParam0) // Position - 0x113DE Signature - 22 01 03 00 00 66 00 2F 35 6A 05 8B 06 00 66 00 6D 24
{
	if (iParam0 < 0 || iParam0 > 36)
		return false;

	return true;
}

Hash func_566(int iParam0) // Position - 0x113FD Signature - 22 01 03 00 00 66 00 39 DE
{
	if (!func_565(iParam0))
		return 0;

	return Global_1292143.f_3024[iParam0];
}

Hash func_567(int iParam0, BOOL bParam1) // Position - 0x1141E Signature - 22 02 06 00 00 66 00 39 DE
{
	Hash hash;
	Hash xp;

	if (!func_565(iParam0))
		return 0;

	if (bParam1)
	{
		hash = func_741(iParam0);
	
		if (func_596(hash, 0))
		{
			if (iParam0 == 0)
				xp = func_742(255);
			else
				xp = func_419(hash, func_418(true), joaat("SLOTID_PROGRESSION"), true, false, false);
		
			Global_1292143.f_3024[iParam0] = xp;
			return xp;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		hash = func_743(iParam0);
	
		if (func_596(hash, 0))
		{
			if (iParam0 == 0)
				xp = NETWORK::_NETWORK_GET_XP();
			else
				xp = func_419(hash, func_418(true), joaat("SLOTID_PROGRESSION"), true, false, false);
		
			Global_1292143.f_2986[iParam0] = xp;
			return xp;
		}
		else
		{
			return 0;
		}
	}

	return 0;
}

int func_568() // Position - 0x114DD Signature - 22 00 30
{
	int i;
	int num;
	Hash hash;
	int num2;

	num = Global_1295666.f_16;

	for (i = 0; i < 30; i = i + 1)
	{
		hash = { Global_1940252.f_245.f_14[i /*43*/] };
		num2 = DATABINDING::DATABINDING_READ_INT(hash.f_29);
	
		if (num2 < num)
		{
			if (func_744(hash))
				func_745(hash);
		
			return i;
		}
	}

	return func_746();
}

void func_569(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33) // Position - 0x11540 Signature - 22 22
{
	func_747(hParam0, hParam1, uParam2, uParam10);
	hParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(15), uParam10.f_16);
	hParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(17), uParam10.f_17);
	hParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(3), uParam10.f_18);
	hParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(4), uParam10.f_19);
	hParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(5), uParam10.f_20);
	hParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(6), uParam10.f_21);
	hParam0->f_25 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(98), uParam10.f_22);
	hParam0->f_26 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(99), uParam10.f_23);
	hParam0->f_27 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(100), uParam10.f_23);
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x11613 Signature - 22 01 03 00 00 66 00 3C 62
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
	
		case 1:
			return "dynamic_list_item_visible";
	
		case 2:
			return "dynamic_list_item_main_color";
	
		case 3:
			return "dynamic_list_item_secondary_color";
	
		case 4:
			return "dynamic_list_item_tertiary_color";
	
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
	
		case 6:
			return "dynamic_list_item_main_img_texture";
	
		case 7:
			return "dynamic_list_item_main_img_visible";
	
		case 8:
			return "dynamic_list_item_main_img_enabled";
	
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
	
		case 10:
			return "dynamic_list_item_status_icon_texture";
	
		case 11:
			return "dynamic_list_item_status_icon_visible";
	
		case 12:
			return "dynamic_list_item_deco_texture_dic";
	
		case 13:
			return "dynamic_list_item_deco__texture";
	
		case 14:
			return "dynamic_list_item_deco_visible";
	
		case 15:
			return "dynamic_list_item_raw_text_entry";
	
		case 16:
			return "dynamic_list_item_text_label_entry";
	
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
	
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
	
		case 19:
			return "dynamic_list_item_secondary_text_visible";
	
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
	
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
	
		case 22:
			return "dynamic_list_item_end_img_texture";
	
		case 23:
			return "dynamic_list_item_end_img_visible";
	
		case 24:
			return "dynamic_list_item_end_img_left_texture_dic";
	
		case 25:
			return "dynamic_list_item_end_img_left_texture";
	
		case 26:
			return "dynamic_list_item_end_img_left_visible";
	
		case 27:
			return "dynamic_list_item_corner_end_img_texture_dic";
	
		case 28:
			return "dynamic_list_item_corner_end_img_texture";
	
		case 29:
			return "dynamic_list_item_corner_end_img_visible";
	
		case 30:
			return "dynamic_list_item_entry_player_index";
	
		case 31:
			return "dynamic_list_item_entry_friend_index";
	
		case 32:
			return "dynamic_list_item_player_gamer_handle";
	
		case 33:
			return "dynamic_list_item_option_stepper_visible";
	
		case 34:
			return "dynamic_list_item_option_stepper_text_enabled";
	
		case 35:
			return "dynamic_list_item_option_stepper_items";
	
		case 36:
			return "dynamic_list_item_option_stepper_current_hash";
	
		case 37:
			return "dynamic_list_item_option_stepper_current_index";
	
		case 38:
			return "dynamic_list_item_option_stepper_max_index";
	
		case 39:
			return "dynamic_list_item_left_chevron_enabled";
	
		case 40:
			return "dynamic_list_item_right_chevron_enabled";
	
		case 41:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
	
		case 42:
			return "dynamic_list_item_main_fill_maximum";
	
		case 43:
			return "dynamic_list_item_main_fill_value";
	
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
	
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
	
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
	
		case 47:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
	
		case 48:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
	
		case 49:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
	
		case 50:
			return "dynamic_list_item_extra_img_texture_one_dic";
	
		case 51:
			return "dynamic_list_item_extra_img_one_texture";
	
		case 52:
			return "dynamic_list_item_extra_img_one_visible";
	
		case 53:
			return "dynamic_list_item_extra_int_field_one_value";
	
		case 54:
			return "dynamic_list_item_extra_int_field_two_value";
	
		case 55:
			return "dynamic_list_item_extra_vector_field_one_value";
	
		case 56:
			return "dynamic_list_item_extra_bool_field_one_value";
	
		case 57:
			return "dynamic_list_item_link";
	
		case 58:
			return "dynamic_list_item_event_channel_hash";
	
		case 59:
			return "dynamic_list_item_focus_hash";
	
		case 60:
			return "dynamic_list_item_select_hash";
	
		case 61:
			return "dynamic_list_item_prompt_text";
	
		case 62:
			return "dynamic_list_item_prompt_text_raw";
	
		case 63:
			return "dynamic_list_item_prompt_enabled";
	
		case 64:
			return "dynamic_list_item_prompt_visible";
	
		case 68:
			return "dynamic_list_item_prompt_option_text";
	
		case 69:
			return "dynamic_list_item_prompt_option_enabled";
	
		case 70:
			return "dynamic_list_item_prompt_option_visible";
	
		case 71:
			return "dynamic_list_item_prompt_option_select_hash";
	
		case 72:
			return "dynamic_list_item_prompt_toggle_text";
	
		case 73:
			return "dynamic_list_item_prompt_toggle_enabled";
	
		case 74:
			return "dynamic_list_item_prompt_toggle_visible";
	
		case 75:
			return "dynamic_list_item_prompt_toggle_select_hash";
	
		case 76:
			return "dynamic_list_item_prompt_r3_text";
	
		case 77:
			return "dynamic_list_item_prompt_r3_enabled";
	
		case 78:
			return "dynamic_list_item_prompt_r3_visible";
	
		case 79:
			return "dynamic_list_item_select_r3_select_hash";
	
		case 80:
			return "dynamic_list_item_prompt_dpad_left_right_text";
	
		case 81:
			return "dynamic_list_item_prompt_dpad_left_right_enabled";
	
		case 82:
			return "dynamic_list_item_prompt_dpad_left_right_visible";
	
		case 83:
			return "dynamic_list_item_select_dpad_left_right_select_hash";
	
		case 84:
			return "mount_collection_index";
	
		case 85:
			return "dynamic_list_item_rename_prompt_enabled";
	
		case 86:
			return "dynamic_list_item_rename_prompt_visible";
	
		case 87:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
	
		case 88:
			return "invite_unique_id";
	
		case 89:
			return "invite_tracked";
	
		case 90:
			return "invite_processed";
	
		case 91:
			return "invite_script_type";
	
		case 92:
			return "invite_gang_id";
	
		case 93:
			return "invite_expiration_time";
	
		case 94:
			return "invite_filter_type";
	
		case 95:
			return "invite_feed_message_id";
	
		case 96:
			return "invite_all_enabled";
	
		case 97:
			return "invite_all_visible";
	
		case 98:
			return "dynamic_list_item_overlay_tick_visible";
	
		case 99:
			return "dynamic_list_item_overlay_time_visible";
	
		case 100:
			return "dynamic_list_item_overlay_new_visible";
	
		default:
		
	}

	return "null";
}

void func_571(int iParam0) // Position - 0x11B21 Signature - 22 01 03 00 00 66 00 5D 1C
{
	Global_1940252.f_245.f_1306 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_245.f_6, MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(Global_1940252.f_245.f_1306), 0));
	return;
}

BOOL func_572(var uParam0) // Position - 0x11B52 Signature - 22 01 03 00 00 09 50 01 01 22 01 03 00 00 66
{
	return true;
}

Hash func_573(var uParam0) // Position - 0x11B5B Signature - 22 01 03 00 00 66 00 27 02
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
		return 0;
	else if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
		return 0;
	else if (uParam0->f_6 == 0)
		return 0;
	else if (uParam0->f_7 == 0)
		return 0;

	if (uParam0->f_13 == 778915895)
		if (Global_1896762.f_354)
			uParam0->f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
		else
			uParam0->f_4 = MISC::VAR_STRING(2, "NM_TI_ACCEPT_INVITE");

	if (*uParam0 == 5)
		return func_749(func_748(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_748(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, true, true, uParam0->f_4, uParam0->f_21);
	else if (*uParam0 == 6)
		return func_750(func_748(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_748(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	else if (*uParam0 == 1)
		return func_751(func_748(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_748(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, true, true);
	else if (*uParam0 == 3)
		return func_752(func_748(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_748(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	else if (*uParam0 == 2)
		return func_753(func_748(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_748(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, true, true);
	else if (*uParam0 == 4)
		return func_754(func_748(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_748(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	else if (*uParam0 == 0)
		return func_755(func_748(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_748(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, true, true);

	return 0;
}

int func_574() // Position - 0x11E3D Signature - 22 00 02 00 00 5D 1C
{
	return Global_1940252.f_245.f_1305;
}

int func_575(int iParam0) // Position - 0x11E4E Signature - 22 01 0A 00 00 66 00 2F 23
{
	int num;
	int year;
	var month;
	var day;
	var hour;
	var minute;
	var second;

	if (iParam0 <= 0)
		return 0;

	CLOCK::GET_POSIX_TIME(&year, &month, &day, &hour, &minute, &second);
	num = year + month + day + hour + minute + second + MISC::GET_RANDOM_INT_IN_RANGE(0, 60000);
	num = num % iParam0;
	return num;
}

int func_576(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21) // Position - 0x11E96 Signature - 22 16 18
{
	if (!func_756(uParam0))
		return 0;

	uParam0->f_2[*uParam0 /*21*/] = { uParam1 };
	*uParam0 = *uParam0 + 1;
	return 1;
}

BOOL func_577(int iParam0, int iParam1, int iParam2) // Position - 0x11EC6 Signature - 22 03 06 00 00 66 00 08
{
	int num;

	if (iParam0 == -1)
		return false;

	num = func_534(iParam0, iParam1);
	return func_402(Global_1245174.f_566[num /*7*/].f_2, iParam2);
}

BOOL func_578(int iParam0, int iParam1, BOOL bParam2) // Position - 0x11EF5 Signature - 22 03 0A 00 00 2F
{
	int i;
	var unk;
	float num;

	for (i = 0; i <= func_335(iParam0, iParam1) - 1; i = i + 1)
	{
		unk = { func_336(func_169(iParam0), iParam1, i) };
		num = func_757(func_169(iParam0), iParam1, i);
	
		if (_IS_NULL_VECTOR(unk))
			break;
	
		if (func_581(unk, num, bParam2))
			return true;
	}

	return false;
}

float func_579(int iParam0, int iParam1) // Position - 0x11F5C Signature - 22 02 0A 00 00 5D 67
{
	var unk;
	var unk2;

	unk = Global_1901671.f_171.f_34;

	if (func_360(&unk2, iParam0) && func_389(&unk2, iParam1))
		func_758(unk2, -364402952, &unk, false);

	return unk;
}

BOOL func_580(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0x11F99 Signature - 22 04 08 00 00 2F
{
	int i;
	Player player;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(player), false, false), vParam0) < fParam3)
			return true;
	}

	return false;
}

BOOL func_581(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4) // Position - 0x11FE6 Signature - 22 05 08 00 00 66 04
{
	int num;

	if (!bParam4)
		num = joaat("net_train");

	return VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(vParam0, fParam3, false, 0, num);
}

int func_582(int iParam0) // Position - 0x12009 Signature - 22 01 03 00 00 66 00 3C 03 00 9C
{
	switch (iParam0)
	{
		case joaat("SECONDARY"):
			return 1;
	
		case joaat("TROLLEY"):
			return 2;
	
		case joaat("PRIMARY"):
			return 0;
	}

	return 0;
}

BOOL func_583(int iParam0) // Position - 0x12041 Signature - 22 01 03 00 00 66 00 42 39 21
{
	return func_759(iParam0, 4);
}

BOOL func_584(int iParam0) // Position - 0x12050 Signature - 22 01 04 00 00 03 01 00 46 67 03 66 00 5D 6B 88 11 80 02 63 2B 27 0B
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (Global_1149035.f_2[iParam0 /*43*/].f_11 == frameCount || Global_1149035.f_2[iParam0 /*43*/].f_11 == frameCount - 1)
		return true;

	return false;
}

float func_585(int iParam0) // Position - 0x1208C Signature - 22 01 03 00 00 66 00 3C 03 00 00 00 00 00 0F 00 01 00 00 00 11 00 02 00 00 00 13 00 68 18 00 86
{
	switch (iParam0)
	{
		case 0:
			return 450f;
	
		case 1:
			return 450f;
	
		case 2:
			return 250f;
	
		default:
		
	}

	return 450f;
}

BOOL func_586(int iParam0) // Position - 0x120CB Signature - 22 01 04 00 00 03 01 00 46 67 03 66 00 5D 6B 88 11 80 02 63 2B 27 09
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (Global_1149035.f_2[iParam0 /*43*/].f_9 == frameCount || Global_1149035.f_2[iParam0 /*43*/].f_9 == frameCount - 1)
		return true;

	return false;
}

BOOL func_587(int iParam0) // Position - 0x12107 Signature - 22 01 03 00 00 66 00 5D 8B B1 12 17 1C 08
{
	return Global_1225099[iParam0 /*28*/] == -1;
}

BOOL func_588(int iParam0) // Position - 0x12119 Signature - 22 01 04 00 00 66 00 39 EB 3B 00 05 8B 04
{
	int num;

	if (!func_126(iParam0))
		return false;

	num = func_760(iParam0);
	return num != 0 && num != 3;
}

void func_589(Any* panParam0, var uParam1) // Position - 0x12144 Signature - 22 02 07 00 00 2F
{
	int i;
	int num;
	int j;

	for (i = 0; i <= 31; i = i + 1)
	{
		num = func_761(i);
		func_64(panParam0->f_7, num);
	}

	for (j = 0; j <= 5; j = j + 1)
	{
	}

	return;
}

BOOL func_590() // Position - 0x12186 Signature - 22 00 02 00 00 5D 2A
{
	return Global_1295658.f_2.f_1 == 2 || Global_1295658.f_2.f_1 == 1;
}

BOOL func_591(Hash hParam0, int iParam1) // Position - 0x121A8 Signature - 22 02 05 00 00 66 00 2F 39
{
	int num;

	if (!func_596(hParam0, 0))
		return false;

	num = func_762(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_764(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_763(hParam0, 1))
				return false;
			break;
	}

	return func_765(hParam0, false, false, false) >= iParam1;
}

Vector3 func_592(int iParam0) // Position - 0x1222B Signature - 22 01 03 00 00 66 00 39 EB 3B 00 05 8B 06
{
	if (!func_126(iParam0))
		return 0f, 0f, 0f;

	return Global_1141332[iParam0 /*27*/].f_20;
}

int func_593(BOOL bParam0) // Position - 0x1224F Signature - 22 01 03 00 00 39 71
{
	if (func_17() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_594() // Position - 0x12290 Signature - 22 00 06 00 00 42
{
	var unk;

	return unk;
}

struct<4> func_595(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1229C Signature - 22 07 0D 00
{
	var outGuid;

	if (!func_596(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_593(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_596(Hash hParam0, int iParam1) // Position - 0x122CD Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 01
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_597(Hash hParam0, int iParam1) // Position - 0x122E7 Signature - 22 02 04 00 00 66 01 2F 15 04
{
	if (iParam1 == 0)
		return 0;

	if (func_767(func_766(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, iParam1);
}

float func_598() // Position - 0x12313 Signature - 22 00 02 00 00 6D 55
{
	return Global_1156111.f_2169[85 /*205*/].f_201;
}

float func_599() // Position - 0x12328 Signature - 22 00 02 00 00 6D 56
{
	return Global_1156111.f_2169[86 /*205*/].f_201;
}

void func_600(BOOL bParam0, int iParam1) // Position - 0x1233D Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 01
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

void func_601(Any* panParam0) // Position - 0x12352 Signature - 22 01 03 00 00 2F 66 00 32 08
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

void func_602(int iParam0) // Position - 0x12368 Signature - 22 01 03 00 00 66 00 08 15 03
{
	if (iParam0 == -1)
		return;

	func_768(&Global_1149432.f_3876.f_2[func_427(iParam0, 1) /*4*/]);
	return;
}

int func_603(var uParam0, var uParam1) // Position - 0x1238F Signature - 22 02 07 00 00 4B 04 6A 80 01 08 3D 41 6A 80 02 08 3D 41 41 11 4B 00 2D 4B 04 39 4A CA 00 8B 07
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_424(uParam0, &unk))
		return unk.f_1;

	return -1;
}

int func_604(int iParam0) // Position - 0x123BB Signature - 22 01 09 00 00 08
{
	int num;
	int num2;

	num = -1;

	if (func_360(&num2, iParam0))
		num = func_769() - DATAFILE::_0xE13634BB6BAF0734(num2, num2.f_1) - 1;

	return num;
}

int func_605(int iParam0) // Position - 0x123E6 Signature - 22 01 07 00 00 66 00 67
{
	int i;
	var unk;

	for (i = iParam0; i < Global_1072759.f_19487; i = i + 1)
	{
		if (i + 1 < 32)
			Global_1072759.f_19487.f_1[i /*3*/] = { Global_1072759.f_19487.f_1[i + 1 /*3*/] };
	}

	unk = -1;
	unk.f_1 = -1;

	if (Global_1072759.f_19487 < 32)
		Global_1072759.f_19487.f_1[Global_1072759.f_19487 /*3*/] = { unk };

	Global_1072759.f_19487 = Global_1072759.f_19487 - 1;

	if (Global_1072759.f_19487 < 0)
		Global_1072759.f_19487 = 0;

	return 1;
}

int func_606(int iParam0) // Position - 0x12487 Signature - 22 01 07 00 00 5D
{
	int num;
	var unk;

	num = Global_1072759.f_19487 - 1;
	unk = -1;
	unk.f_1 = -1;

	while (num >= iParam0)
	{
		if (num + 1 < 32)
			Global_1072759.f_19487.f_1[num + 1 /*3*/] = { Global_1072759.f_19487.f_1[num /*3*/] };
	
		num = num - 1;
	}

	Global_1072759.f_19487.f_1[iParam0 /*3*/] = { unk };
	Global_1072759.f_19487 = Global_1072759.f_19487 + 1;

	if (Global_1072759.f_19487 > 32)
		Global_1072759.f_19487 = 32;

	return 1;
}

int func_607(int iParam0, int iParam1) // Position - 0x1251B Signature - 22 02 04 00 00 66 00 3C 21
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return 521;
	
		case -2141419899:
			return 404;
	
		case -2106445152:
			return 277;
	
		case -2106214197:
			return 102;
	
		case -2101264851:
			return 192;
	
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return 470;
	
		case -2073072369:
			return 57;
	
		case -2069570138:
			return 25;
	
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 394;
	
		case -2058120606:
			return 194;
	
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return 464;
	
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			return 338;
	
		case -2038424081:
			return 49;
	
		case -2034257789:
			return 90;
	
		case -2022369555:
			return 251;
	
		case -2021582629:
			return 110;
	
		case -2020023971:
			return 263;
	
		case -1957523409:
			return 205;
	
		case -1952856164:
			return 163;
	
		case -1949204933:
			return 261;
	
		case joaat("ws_mp_camp_defend_radleys_pasture"):
			return 387;
	
		case -1939389836:
			return 416;
	
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return 428;
	
		case -1925798111:
			return 41;
	
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return 439;
	
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
			return 403;
	
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return 463;
	
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 380;
	
		case -1852605133:
			return 10;
	
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return 409;
	
		case -1847672446:
			return 312;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return 504;
	
		case -1840704908:
			return 274;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_608(int iParam0) // Position - 0x13DC0 Signature - 22 01 04 00 00 66 00 39 63
{
	int num;

	num = func_770(iParam0);

	if (num < 336)
		return false;

	return true;
}

BOOL func_609(int iParam0) // Position - 0x13DDD Signature - 22 01 03 00 00 66 00 37
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
		return true;

	return false;
}

void func_610(int iParam0) // Position - 0x13DF4 Signature - 22 01 03 00 00 08
{
	*iParam0 = -1;
	iParam0->f_1 = -1;
	return;
}

void func_611(int iParam0, int iParam1) // Position - 0x13E05 Signature - 22 02 05 00 00 66 00 66 01 15
{
	int i;

	if (iParam0 == iParam1)
		return;

	if (iParam1 < iParam0)
	{
		for (i = iParam0; i > iParam1; i = i - 1)
		{
			func_771(i - 1, i);
		}
	}
	else
	{
		for (i = iParam0; i < iParam1; i = i + 1)
		{
			func_771(i, i + 1);
		}
	}

	if (func_36(Global_1900460.f_1[0 /*2*/]))
		func_262(Global_1900460.f_1[0 /*2*/], 3);

	return;
}

int func_612(int iParam0) // Position - 0x13E7F Signature - 22 01 04 00 00 5D 2C
{
	int i;

	if (Global_1205804.f_129 <= 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1205804.f_129; i = i + 1)
	{
		if (Global_1205804[i /*4*/] == iParam0)
			return i;
	}

	return -1;
}

BOOL func_613(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x13EC2 Signature - 22 04 07 00 00 11
{
	int num;

	if (!func_36(iParam0))
		return false;

	if (iParam0 != 2)
		return false;

	num = func_772(iParam0);
	return num >= iParam2 && num <= iParam3;
}

BOOL func_614(var uParam0) // Position - 0x13EFD Signature - 22 01 03 00 00 66 00 76 66
{
	return *uParam0 == uParam0->f_2;
}

void func_615(var uParam0) // Position - 0x13F0D Signature - 22 01 30
{
	var unk;

	unk.f_5 = -1;
	unk.f_5.f_1 = -1;
	unk.f_5.f_2 = -1;
	unk.f_5.f_3 = 255;
	unk.f_5.f_4 = -1;
	unk.f_5.f_5 = -1;
	unk.f_5.f_6 = -1;
	unk.f_5.f_8 = 2;
	unk.f_5.f_8.f_1 = -1;
	unk.f_5.f_8.f_5 = -1;
	unk.f_5.f_8.f_5.f_1 = -1;
	unk.f_5.f_8.f_5.f_3 = -1;
	unk.f_5.f_8.f_5.f_4 = -1;
	unk.f_5.f_8.f_5.f_5 = -1;
	unk.f_5.f_8.f_5.f_6 = -1;
	unk.f_5.f_8.f_5.f_6.f_1 = -1;
	unk.f_5.f_8.f_5.f_9 = 2;
	unk.f_5.f_23.f_1 = 1024;
	unk.f_5.f_23.f_4 = -15;
	unk.f_5.f_23.f_5 = 255;
	unk.f_5.f_23.f_8 = 1;
	unk.f_5.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_5.f_23.f_13 = -1;
	unk.f_5 = { *uParam0 };
	unk.f_4 = 0;
	func_773(&unk, func_464(0, 8));
	return;
}

int func_616(var uParam0, var uParam1, BOOL bParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x13FDE Signature - 22 07 0B
{
	int num;
	int num2;

	if (func_614(uParam0))
		return 0;

	if (!func_774(&(uParam1->f_8)))
		return 0;

	if (uParam1->f_2 == -1)
		return 0;

	if (uParam1->f_2 == 5)
		uParam1->f_3 = PLAYER::PLAYER_ID();

	if (uParam1->f_5 == -1)
		return 0;

	if (uParam1->f_8 != uParam1->f_8.f_5.f_9)
		return 0;

	num = func_775(uParam0, uParam1);

	if (num >= 0)
		return 0;

	switch (uParam1->f_5)
	{
		case 0:
		case 1:
		case 3:
			if (!func_776(uParam1, bParam2, iParam3, iParam4, iParam5, iParam6))
				return 0;
			break;
	
		default:
			break;
	}

	uParam1->f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	num2 = (uParam0->f_1 + *uParam0) % uParam0->f_2;
	uParam1->f_4 = num2;
	uParam0->f_3[num2 /*40*/] = { *uParam1 };
	func_142(&uParam0->f_3[num2 /*40*/], 0);
	*uParam0 = *uParam0 + 1;
	return 1;
}

BOOL func_617(var uParam0) // Position - 0x140CF Signature - 22 01 03 00 00 11 66 00 2D
{
	if (func_36(*uParam0))
		return true;

	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
			return true;
	
		if (uParam0->f_4 != -1)
			return true;
	
		if (uParam0->f_5 != -1)
			return true;
	}

	return false;
}

int func_618(var uParam0, int iParam1) // Position - 0x14113 Signature - 22 02 0B 00 00 66
{
	int num;
	int num2;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	int i;

	num = func_777(iParam1);
	num2 = (num + Global_1207480.f_3[iParam1]) - 1;

	if (Global_1207480.f_23[iParam1] != 0)
		num2 = (num + func_778(iParam1)) - 1;

	flag = func_36(*uParam0);
	flag2 = uParam0->f_2 != 0 && uParam0->f_3 != -1;
	flag3 = uParam0->f_2 != 0 && uParam0->f_4 != -1;
	flag4 = uParam0->f_2 != 0 && uParam0->f_5 != -1;

	for (i = num; i <= num2; i = i + 1)
	{
		if (flag)
			if (func_251(Global_1207480.f_231[i /*15*/].f_5, *uParam0))
				return i;
	
		if (flag2)
			if (Global_1207480.f_231[i /*15*/].f_5.f_2 == uParam0->f_2 && Global_1207480.f_231[i /*15*/].f_5.f_3 == uParam0->f_3)
				return i;
	
		if (flag3)
			if (Global_1207480.f_231[i /*15*/].f_5.f_2 == uParam0->f_2 && Global_1207480.f_231[i /*15*/].f_5.f_4 == uParam0->f_4)
				return i;
	
		if (flag4)
			if (Global_1207480.f_231[i /*15*/].f_5.f_2 == uParam0->f_2 && Global_1207480.f_231[i /*15*/].f_5.f_5 == uParam0->f_5)
				return i;
	}

	return -1;
}

int func_619(int iParam0) // Position - 0x14272 Signature - 22 01 04 00 00 2F 67 03 66 03 6D 2E
{
	int i;

	for (i = 0; i <= 46; i = i + 1)
	{
		if (Global_1260806.f_3432[i] == iParam0)
			return i;
	}

	return 0;
}

int func_620(int iParam0, int iParam1) // Position - 0x142A3 Signature - 22 02 26 00 00 4B
{
	int num;
	var unk;
	int num2;
	int i;

	unk.f_10 = 1106247680;
	unk.f_15 = 4;
	unk.f_20 = 4;
	unk.f_26 = -1;
	unk.f_28 = 2;

	for (i = 1; i <= 46; i = i + 1)
	{
		num2 = i;
	
		if (num2 == iParam0)
		{
			return num + iParam1;
		}
		else
		{
			func_779(&unk, num2, -1, -1, 255);
			num = num + unk;
		}
	}

	return -1;
}

void func_621(Any* panParam0) // Position - 0x1430D Signature - 22 01 03 00 00 03 01 00 6E 05 8B 03 00 50 01 00 6D 0F
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_1051645.f_16[15] == 0 || !SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[15]))
		return;

	*panParam0 = 183;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(panParam0, 8, 39, Global_1051645.f_16[15]);
	func_780(panParam0, panParam0->f_1);
	return;
}

var func_622(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x14378 Signature - 22 0C 1A
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

	if (func_781() != 0)
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_782());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_782());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_782());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_783(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_784(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_785(i) != 1)
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
					if (!func_786(player2))
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

BOOL func_623(Player plParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4) // Position - 0x1470B Signature - 22 05 07 00 00 66 00 39
{
	return BUILTIN::VDIST(func_222(plParam0), vParam1) <= fParam4;
}

void func_624(int iParam0, int iParam1) // Position - 0x14724 Signature - 22 02 05 00 00 66 00 66 01 39 27
{
	int threadId;

	if (!func_637(iParam0, iParam1))
		return;

	threadId = func_787(iParam0, iParam1);

	if (!SCRIPTS::IS_THREAD_ACTIVE(threadId, false))
		return;

	SCRIPTS::_REQUEST_THREAD_EXIT(threadId);
	return;
}

void func_625(int iParam0, int iParam1) // Position - 0x14759 Signature - 22 02 04 00 00 66 00 66 01 39 2E
{
	func_633(iParam0, iParam1);
	func_632(iParam0, iParam1, -1);
	return;
}

void func_626(int iParam0) // Position - 0x14772 Signature - 22 01 03 00 00 66 00 5D 0B
{
	func_610(&(Global_1219595.f_1[iParam0 /*10*/].f_4));
	Global_1219595.f_1[iParam0 /*10*/].f_6 = 0;
	return;
}

void func_627(int iParam0, int iParam1) // Position - 0x14797 Signature - 22 02 05 00 00 03 01 00 25 67 04 66 00 66 04 5D
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	MISC::CLEAR_BIT(&Global_1217218[playerIndex /*72*/][iParam0], iParam1);
	return;
}

Hash func_628(int iParam0) // Position - 0x147B7 Signature - 22 01 03 00 00 66 00 5D B8 6C 12 80 E7 18 2A 04 17
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/];
}

int func_629(int iParam0, int iParam1) // Position - 0x147CC Signature - 22 02 04 00 00 66 01 66 00 5D B8 6C 12 80 E7 18 2A 04 63 11 80 08 63 04 27 01
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_1;
}

int func_630(int iParam0, int iParam1) // Position - 0x147E9 Signature - 22 02 04 00 00 66 01 66 00 5D B8 6C 12 18 C9 09 63 06 17
{
	return Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/];
}

int func_631(int iParam0, int iParam1) // Position - 0x14800 Signature - 22 02 04 00 00 66 01 66 00 5D 0B 9C 12 80 01 63 0A 17
{
	return Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/];
}

void func_632(int iParam0, int iParam1, int iParam2) // Position - 0x14816 Signature - 22 03 05 00 00 66 02 66 01 66 00 5D 0B 9C 12 80 01 63 0A 64
{
	Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/] = iParam2;
	return;
}

void func_633(int iParam0, int iParam1) // Position - 0x1482E Signature - 22 02 05 00 00 2F 67 04 66 04 11
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		func_639(iParam0, iParam1, i);
	}

	return;
}

BOOL func_634(int iParam0, int iParam1) // Position - 0x14852 Signature - 22 02 08 00 00 66 00 66 01 39 01
{
	int num;
	var unk;

	num = func_652(iParam0, iParam1);

	if (num == 2147483647)
		return true;

	unk = { func_222(PLAYER::PLAYER_ID()) };

	if (_IS_NULL_VECTOR(unk))
		return false;

	return func_173(unk, func_662(iParam0, iParam1)) < (float)num;
}

void func_635(int iParam0, int iParam1, int iParam2) // Position - 0x148A1 Signature - 22 03 05 00 00 66 00 66 01 66 02 39 3B 7E 01 39 06
{
	func_479(iParam0, func_788(iParam1, iParam2));
	return;
}

BOOL func_636(int iParam0, int iParam1) // Position - 0x148B7 Signature - 22 02 17
{
	int num;
	Hash scriptHash;
	int num2;
	struct<10> args;
	struct<5> args2;
	var args3;

	num = func_629(iParam0, iParam1);
	scriptHash = func_628(iParam0);

	if (func_637(iParam0, iParam1))
		return false;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(scriptHash, num, true, 0))
		return false;

	if (func_309(iParam0, 8))
		if (func_643(iParam0, iParam1) != 4)
			return false;

	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(scriptHash);

	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(scriptHash))
	{
		if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(func_789(iParam0)) <= 0)
			return false;
	
		if (func_309(iParam0, 64))
		{
			args.f_7 = -1;
			args.f_7.f_1 = -1;
			args.f_9 = 255;
			args = num;
			args.f_9 = func_499(iParam0);
			args.f_1 = { func_662(iParam0, iParam1) };
			args.f_5 = iParam0;
			args.f_7 = { func_475(iParam0) };
			num2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(scriptHash, &args, 10, func_789(iParam0));
		}
		else if (func_309(iParam0, 128))
		{
			args2 = num;
			args2.f_1 = func_790(scriptHash);
			args2.f_2 = Global_1207480.f_231.f_1066[iParam0 /*17*/].f_14;
			args2.f_3 = Global_1207480.f_231.f_1066[iParam0 /*17*/].f_15;
			args2.f_4 = Global_1207480.f_231.f_1066[iParam0 /*17*/].f_16;
			num2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(scriptHash, &args2, 5, func_789(iParam0));
		}
		else
		{
			num2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(scriptHash, &args3, 1, func_789(iParam0));
		}
	
		func_638(iParam0, iParam1, num2);
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(scriptHash);
		func_791(scriptHash, num);
		return true;
	}

	return false;
}

BOOL func_637(int iParam0, int iParam1) // Position - 0x14A27 Signature - 22 02 04 00 00 66 01 66 00 5D 0B 9C 12 80 01 63 0A 63 03 27 02 03
{
	return SCRIPTS::DOES_THREAD_EXIST(Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2);
}

void func_638(int iParam0, int iParam1, int iParam2) // Position - 0x14A43 Signature - 22 03 05 00 00 66 02 66 01 66 00 5D 0B 9C 12 80 01 63 0A 63
{
	Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2 = iParam2;
	return;
}

void func_639(int iParam0, int iParam1, int iParam2) // Position - 0x14A5D Signature - 22 03 05 00 00 66 00 66 01 66 02 39 3B 7E 01 39 97
{
	func_627(iParam0, func_788(iParam1, iParam2));
	return;
}

BOOL func_640(int iParam0, int iParam1) // Position - 0x14A73 Signature - 22 02 05 00 00 66 00 25
{
	int num;

	if (!func_309(iParam0, 1024))
		return false;

	num = func_661(iParam0);

	if (num <= 0)
		return false;

	return func_173(Global_34, func_662(iParam0, iParam1)) > (float)num;
}

int func_641(int iParam0, int iParam1) // Position - 0x14AB3 Signature - 22 02 04 00 00 66 01 66 00 5D 0B 9C 12 80 01 63 0A 63 03 27 01
{
	return Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1;
}

void func_642(int iParam0, int iParam1, int iParam2) // Position - 0x14ACB Signature - 22 03 05 00 00 66 02 03 05 00
{
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(iParam2))
	{
		Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1 = 0;
		return;
	}

	Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1 = iParam2;
	return;
}

int func_643(int iParam0, int iParam1) // Position - 0x14B03 Signature - 22 02 04 00 00 66 01 66 00 5D B8 6C 12 18 C9 09 63 06 63 03 27 01
{
	return Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_1;
}

void func_644(int iParam0, int iParam1) // Position - 0x14B1C Signature - 22 02 04 00 00 66 00 66 01 39 9F
{
	func_650(iParam0, iParam1);
	func_492(iParam0, iParam1);
	return;
}

void func_645(int iParam0, int iParam1, int iParam2) // Position - 0x14B35 Signature - 22 03 05 00 00 66 02 66 01 66 00 5D B8 6C 12 18 C9 09 63 06 63
{
	Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_1 = iParam2;
	return;
}

int func_646(int iParam0, int iParam1) // Position - 0x14B50 Signature - 22 02 04 00 00 66 01 66 00 5D B8 6C 12 80 E7 18 2A 04 63 11 80 08 63 04 27 02
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_2;
}

int func_647(int iParam0, int iParam1) // Position - 0x14B6D Signature - 22 02 04 00 00 66 01 66 00 5D B8 6C 12 18 C9 09 63 06 63 03 27 02
{
	return Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2;
}

void func_648(int iParam0, int iParam1, BOOL bParam2) // Position - 0x14B86 Signature - 22 03 12
{
	int num;
	var args;
	var unk9;
	Hash hash;

	if (func_641(iParam0, iParam1) != 0 && !func_792(func_641(iParam0, iParam1)))
		return;

	num = 96;

	if (!bParam2)
		num = num + 128;

	if (func_492(iParam0, iParam1))
	{
		args = { func_662(iParam0, iParam1) };
		args.f_4 = BUILTIN::TO_FLOAT(func_646(iParam0, iParam1));
		args.f_5 = num;
		args.f_6 = func_793(iParam0);
		unk9 = { func_475(iParam0) };
		hash = 0;
	
		if (func_36(unk9))
			hash = func_428(unk9);
	
		if (hash != 0)
			args.f_7 = hash;
		else
			args.f_7 = -1546799264;
	
		func_642(iParam0, iParam1, VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&args));
	}

	return;
}

BOOL func_649(int iParam0, int iParam1) // Position - 0x14C3F Signature - 22 02 05 00 00 66 00 66 01 39 6D 4B 01 2F
{
	int num;

	if (func_647(iParam0, iParam1) != 0)
		return true;

	func_794(iParam0, iParam1);
	func_648(iParam0, iParam1, true);
	num = func_641(iParam0, iParam1);

	if (num == 0)
		return false;

	if (!func_795(num))
		return false;

	func_796(iParam0, iParam1, VOLUME::_0x351D71B8B72B858B(func_641(iParam0, iParam1)));
	return true;
}

void func_650(int iParam0, int iParam1) // Position - 0x14C9F Signature - 22 02 05 00 00 66 00 66 01 39 6D 4B 01 67
{
	int volLockRequestId;

	volLockRequestId = func_647(iParam0, iParam1);

	if (volLockRequestId == 0)
		return;

	if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId))
	{
		func_796(iParam0, iParam1, 0);
		return;
	}

	VOLUME::_RELEASE_LOCK_VOLUME(volLockRequestId);
	func_796(iParam0, iParam1, 0);
	func_492(iParam0, iParam1);
	return;
}

void func_651(int iParam0, int iParam1, int iParam2) // Position - 0x14CE8 Signature - 22 03 05 00 00 66 02 66 01 66 00 5D B8 6C 12 18 C9 09 63 06 64
{
	Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/] = iParam2;
	return;
}

int func_652(int iParam0, int iParam1) // Position - 0x14D01 Signature - 22 02 04 00 00 66 01 66 00 5D B8 6C 12 80 E7 18 2A 04 63 11 80 08 63 04 27 03
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_3;
}

int func_653(int iParam0) // Position - 0x14D1E Signature - 22 01 03 00 00 66 00 5D B8 6C 12 80 E7 18 2A 04 63 11 27 04
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_4;
}

BOOL func_654(int iParam0) // Position - 0x14D35 Signature - 22 01 03 00 00 85 E9
{
	return Global_1902569 > iParam0;
}

BOOL func_655(int iParam0, int iParam1, int iParam2) // Position - 0x14D44 Signature - 22 03 07 00 00 2F
{
	Player player;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (func_797(iParam0, iParam1, player, iParam2))
		{
			return true;
		}
	}

	return false;
}

BOOL func_656(int iParam0, int iParam1) // Position - 0x14D88 Signature - 22 02 06 00 00 2F 67 05 66 05 6D 20 8A 30
{
	Player player;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (!func_798(iParam0, iParam1, player))
		{
			return false;
		}
	}

	return true;
}

BOOL func_657(int iParam0, int iParam1) // Position - 0x14DCB Signature - 22 02 06 00 00 2F 67 05 66 05 6D 20 8A 40
{
	Player player;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (!func_477(iParam0, player, 2))
		{
		}
		else if (!func_477(iParam0, player, iParam1))
		{
			return true;
		}
	}

	return false;
}

int func_658(int iParam0) // Position - 0x14E1E Signature - 22 01 03 00 00 66 00 39 AA E2 00 05 8B 04 00 2F
{
	if (!func_454(iParam0))
		return 0;

	return Global_1207480.f_231[iParam0 /*15*/].f_5.f_8;
}

BOOL func_659(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x14E42 Signature - 22 04 06 00 00 5D
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}

	if (func_36(Global_1051268) && !func_251(Global_1051268, uParam0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}

	if (iParam2 != 0 && func_285(iParam2))
		return true;

	if (iParam3 != 0 && func_799(iParam3, 255))
	{
		Global_1072759.f_28307 = 4;
		return true;
	}

	if (Global_263042[Global_1295666 /*65*/] > 2)
	{
		Global_1072759.f_28307 = 5;
		return true;
	}

	if (Global_262155 >= 1)
	{
		Global_1072759.f_28307 = 6;
		return true;
	}

	if (func_26())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}

	if (Global_1572887.f_8 & true != 0)
	{
		if (!func_36(Global_1051268))
		{
			Global_1072759.f_28307 = 8;
			return true;
		}
	}

	if (*Global_265213.f_122646 != 0 && SCRIPTS::DOES_THREAD_EXIST(*Global_265213.f_122646))
	{
		Global_1072759.f_28307 = 9;
		return true;
	}

	Global_1072759.f_28307 = 0;
	return false;
}

BOOL func_660(int iParam0) // Position - 0x14F6B Signature - 22 01 03 00 00 66 00 1D 8A
{
	if (iParam0 < 3)
		return false;

	if (iParam0 < 3 + Global_1207480.f_3[1])
		return false;

	if (iParam0 < 35)
		return true;

	if (iParam0 < 35 + Global_1207480.f_3[2])
		return false;

	if (iParam0 < 35 + Global_1207480.f_3[2] + 16)
		return false;

	return true;
}

int func_661(int iParam0) // Position - 0x14FC9 Signature - 22 01 03 00 00 66 00 5D B8 6C 12 80 E7 18 2A 04 63 11 27 02
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_2;
}

Vector3 func_662(int iParam0, int iParam1) // Position - 0x14FE0 Signature - 22 02 04 00 00 66 01 66 00 5D B8 6C 12 80 E7 18 2A 04 63 11 80 08 17
{
	return func_800(Global_1207480.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/]);
}

BOOL func_663(int iParam0, Player plParam1) // Position - 0x14FFF Signature - 22 02 04 00 00 66 00 66 01 5D
{
	return Global_1217218[plParam1 /*72*/][iParam0] == 0;
}

void func_664(int iParam0) // Position - 0x15015 Signature - 22 01 03 00 00 2F 66 00 5D
{
	Global_1207480.f_2505[iParam0 /*6*/].f_4 = 0;
	Global_1207480.f_2505[iParam0 /*6*/].f_5 = 255;
	return;
}

BOOL func_665(var uParam0, var uParam1) // Position - 0x1503A Signature - 22 02 05 00 00 03 01 01 13 03
{
	Player gangLeader;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (gangLeader == 255)
		return false;

	if (!func_36(Global_1056554[gangLeader /*491*/].f_2))
		return false;

	if (!func_251(Global_1235687.f_9481, Global_1056554[gangLeader /*491*/].f_2))
	{
		if (!func_57(Global_1056554[gangLeader /*491*/].f_2))
			return false;
	
		Global_1235687.f_9481 = { Global_1056554[gangLeader /*491*/].f_2 };
	}

	return func_217(uParam0, Global_1235687.f_9481, true, false);
}

void func_666() // Position - 0x150D2 Signature - 22 00 03 00 00 03 01 01 13 03 05 00 B8 03 05 01 04 67
{
	Player gangLeader;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (gangLeader == 255)
		return;

	func_179(MISC::VAR_STRING(10, "GFH_HELP_POSSE_LEADER_CANCELLED", func_737(PLAYER::GET_PLAYER_NAME(gangLeader), joaat("color_posse_ally"))), 10000, 0, 0, 0, true);
	return;
}

BOOL func_667(int iParam0, int iParam1) // Position - 0x15117 Signature - 22 02 04 00 00 66 00 25
{
	return func_66(iParam0, 1024, iParam1);
}

Player func_668(int iParam0) // Position - 0x1512A Signature - 22 01 05 00 00 66 00 6F
{
	int i;
	Player player;

	if (func_66(iParam0, 32, 255))
		return PLAYER::PLAYER_ID();

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player) && GANG::_NETWORK_IS_IN_MY_GANG(player) && func_66(iParam0, 32, i))
			return player;
	}

	return 255;
}

BOOL func_669(int iParam0) // Position - 0x1518A Signature - 22 01 03 00 00 2F 50 01 01 22 00
{
	return false;
}

float func_670() // Position - 0x15193 Signature - 22 00 02 00 00 6D 54
{
	return Global_1156111.f_2169[84 /*205*/].f_201;
}

BOOL func_671(float fParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x151A8 Signature - 22 04 06 00 00 66 03 73
{
	if (iParam3 == 0f)
		iParam3 = Global_1901671.f_319.f_170;

	if (bParam1)
		iParam3 = Global_1901671.f_319.f_170 + 50f;

	if (bParam1 && bParam2)
		return true;

	return Global_1110244.f_3659 == 0 || Global_1295666.f_16 - Global_1110244.f_3659 > Global_1110244.f_3659.f_1 && fParam0 >= 0f && fParam0 < iParam3;
}

int func_672() // Position - 0x15222 Signature - 22 00 02 00 00 37 25
{
	return func_801(func_98(joaat("mp_fetch_last_attempted_camp_sell_pvp_timestamp")));
}

BOOL func_673(int iParam0, int iParam1) // Position - 0x15237 Signature - 22 02 04 00 00 66 00 5D 8B B1 12 63 1C 27 1A
{
	return func_64(Global_1225099[iParam0 /*28*/].f_26, iParam1);
}

BOOL func_674(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1524F Signature - 22 03 06 00 00 5D
{
	Player player;

	if (!Global_1149432.f_5568)
		return false;

	if (plParam0 == Global_1295666.f_149[Global_1295666])
		return Global_17418.f_2641.f_2 == 2 || bParam1 && Global_17418.f_2641.f_2 == 1 || bParam2 && Global_17418.f_2641.f_2 == 3;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	player = plParam0;

	if (player < 0 || player >= 32)
		return false;

	return Global_1101558[player /*38*/].f_33 == 2 || bParam1 && Global_1101558[player /*38*/].f_33 == 1 || bParam2 && Global_1101558[player /*38*/].f_33 == 3;
}

void func_675(int iParam0) // Position - 0x15318 Signature - 22 01 2A
{
	int num;
	int num2;
	var unk;
	int value;
	var statId;
	int value2;
	var statId2;

	if (func_802(Global_1260806[iParam0 /*4*/]))
		return;

	func_803(iParam0, &num, &num2);
	unk.f_10 = 1106247680;
	unk.f_15 = 4;
	unk.f_20 = 4;
	unk.f_26 = -1;
	unk.f_28 = 2;
	func_779(&unk, num, num2, -1, 255);
	func_804(&Global_1260806[iParam0 /*4*/]);
	value = unk.f_5;

	if (value != 0)
	{
		statId = { func_98(joaat("mp_fetch_last_attempted_dynamic_mission_unlock")) };
		STATS::STAT_ID_SET_INT(&statId, value, true);
		statId = { func_98(joaat("mp_fetch_last_attempted_dynamic_mission_timestamp")) };
		STATS::STAT_ID_SET_INT(&statId, Global_1295666.f_16, true);
	}

	value2 = unk.f_9;

	if (value2 != 0)
	{
		statId2 = { func_98(joaat("mp_fetch_last_attempted_cooldown_tag_id")) };
		STATS::STAT_ID_SET_INT(&statId2, value2, true);
		statId2 = { func_98(joaat("mp_fetch_last_attempted_cooldown_tag_timestamp")) };
		STATS::STAT_ID_SET_INT(&statId2, Global_1295666.f_16, true);
	}

	return;
}

int func_676(int iParam0, int iParam1, BOOL bParam2) // Position - 0x153F7 Signature - 22 03 07 00 00 66 00
{
	int num;
	Player player;

	if (!func_126(iParam0))
		return 0;

	num = func_805(iParam0);

	if (num != 0)
		return 0;

	player = PLAYER::PLAYER_ID();
	Global_1144526[player /*83*/].f_70 = iParam0;
	Global_1144526[player /*83*/].f_70.f_2 = iParam1;

	if (bParam2)
		func_557(&(Global_1144526[player /*83*/].f_70.f_1), 1);
	else
		func_423(&(Global_1144526[player /*83*/].f_70.f_1), 1);

	return 1;
}

void func_677(var uParam0, var uParam1) // Position - 0x1546A Signature - 22 02 26 00 00 11
{
	Hash hash;
	var unk;

	if (func_259(uParam0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_259(uParam0)))
	{
	}
	else
	{
		hash = func_259(uParam0);
		STATS::STATSTRACKER_DEED_STARTED(hash, Global_265213.f_122484.f_80.f_12);
		unk_0x6F5BC5C4EAB42B15(hash, 2, &(Global_265213.f_122484.f_80.f_22));
	
		if (func_681(uParam0, &unk))
		{
			if (unk.f_29 == joaat("race_impromptu"))
				STATS::_0xF21A5D66874FCEDD(unk.f_2, 0, joaat("RACE"));
		
			STATS::_0xF21A5D66874FCEDD(unk.f_2, unk.f_29, 0);
			STATS::_0xF21A5D66874FCEDD(unk.f_2, unk.f_30, 0);
			STATS::_0xF21A5D66874FCEDD(unk.f_2, unk.f_31, 0);
		}
	}

	return;
}

int func_678(var uParam0, var uParam1, int iParam2) // Position - 0x15513 Signature - 22 03 06 00 00 11 4B 00 2D 39 13
{
	int num;

	num = func_443(uParam0);

	if (num >= 0)
		return num;

	if (Global_1900460.f_66 >= 32)
		return -1;

	num = Global_1900460.f_66;
	func_806(uParam0, num);
	Global_1900460.f_66 = Global_1900460.f_66 + 1;

	if (iParam2 < 0 || iParam2 >= Global_1900460.f_66)
		return num;

	func_611(num, iParam2);
	return iParam2;
}

BOOL func_679(int iParam0) // Position - 0x15584 Signature - 22 01 03 00 00 5D 00
{
	return Global_1572864.f_3 && iParam0 != false;
}

int func_680(var uParam0, var uParam1, BOOL bParam2) // Position - 0x15597 Signature - 22 03 06 00 00 11 4B 00 2D 39 09
{
	int num;

	if (!func_36(uParam0))
		return 0;

	num = func_443(uParam0);

	if (num < 0)
		return 0;

	if (!func_807(uParam0, func_263(0), bParam2))
	{
		func_262(func_263(0), 3);
		func_262(func_263(num), 4);
		return 0;
	}

	func_611(num, 0);
	func_262(func_263(0), 3);
	func_262(func_263(1), 4);
	return 1;
}

BOOL func_681(int iParam0, var uParam1, var uParam2) // Position - 0x1560B Signature - 22 03 08 00 00 4B
{
	int num;

	num.f_1 = -1;
	num.f_2 = -1;
	func_424(iParam0, &num);

	if (func_808(iParam0, num, uParam2))
		return true;

	return false;
}

void func_682(var uParam0, BOOL bParam1, int iParam2) // Position - 0x1563F Signature - 22 03 05 00 00 66 00 66 02
{
	func_809(uParam0, iParam2);

	if (Global_1205804.f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}

	if (bParam1)
		func_446(func_107(uParam0->f_1));
	else
		func_447();

	return;
}

BOOL func_683(var uParam0, var uParam1) // Position - 0x15679 Signature - 22 02 04 00 00 11 4B 00 2D 39 A5 35 00 2F
{
	return func_108(uParam0) == 0;
}

int func_684(var uParam0, var uParam1) // Position - 0x1568B Signature - 22 02 05 00 00 85
{
	int i;

	if (Global_1900530 <= 0)
		return -1;

	i = 0;

	for (i = 0; i <= Global_1900530 - 1; i = i + 1)
	{
		if (func_251(Global_1900531[i /*2*/], uParam0))
			return i;
	}

	return -1;
}

void func_685(var uParam0, var uParam1, BOOL bParam2) // Position - 0x156D4 Signature - 22 03 05 00 00 11 4B 00 2D 39 09 12 00 05 8B 03 00 50 03 00 11
{
	if (!func_36(uParam0))
		return;

	if (!func_683(uParam0))
		return;

	if (bParam2)
		func_371(uParam0);

	func_262(uParam0, 1);
	bParam2 = bParam2;
	return;
}

struct<2> func_686(int iParam0) // Position - 0x15714 Signature - 22 01 03 00 00 66 00 39 69
{
	if (!func_810(iParam0))
		return func_216();

	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_5;
}

void func_687(int iParam0) // Position - 0x1573D Signature - 22 01 12 00 00 03 01 01 13 67 03 66 03 39 97 0C 01 67 04 66 04 39 CD 0C 01 05 8B 03 00 50 01 00 66 04
{
	Player player;
	int num;
	int num2;

	player = PLAYER::PLAYER_ID();
	num = func_549(player);

	if (!func_550(num))
		return;

	if (num != iParam0)
	{
		func_716(iParam0, 7);
		func_716(iParam0, 8);
	}

	num2 = { func_811(num) };

	switch (func_812(num))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_36(num2.f_5))
			{
				if (!func_714(player, num, 8) && func_553(num, 1))
				{
					func_813(num2.f_5);
					func_814(num, 8);
				}
			
				if (func_112(num2.f_5))
				{
					func_814(num, 2);
					func_716(num, 5);
				}
				else if (func_51(num2.f_5))
				{
					func_814(num, true);
					func_716(num, 6);
				}
				else
				{
					func_815(num2);
					func_814(num, 4);
					func_716(num, 3);
				}
			}
			else
			{
				func_716(num, 7);
			}
			break;
	
		case 8:
			if (Global_1110244.f_19)
			{
				if (func_553(num, 4))
				{
				}
				else
				{
					func_816();
				}
			
				func_551(num);
				func_817(1);
				func_817(0);
			}
			else
			{
				func_816();
				func_551(num);
				func_817(1);
				func_817(0);
			}
			break;
	}

	return;
}

void func_688(int iParam0) // Position - 0x1588C Signature - 22 01 12 00 00 03 01 01 13 67 03 66 03 39 97 0C 01 67 04 66 04 39 CD 0C 01 05 8B 03 00 50 01 00 66 00
{
	Player player;
	int num;
	int num2;

	player = PLAYER::PLAYER_ID();
	num = func_549(player);

	if (!func_550(num))
		return;

	num2 = { func_811(iParam0) };

	switch (func_812(num))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_36(num2.f_5))
			{
				if (!func_714(player, iParam0, 8) && func_553(iParam0, 1))
				{
					func_813(num2.f_5);
					func_814(iParam0, 8);
				}
			
				if (func_112(num2.f_5))
				{
					func_814(iParam0, 2);
					func_716(iParam0, 5);
				}
				else if (func_51(num2.f_5))
				{
					func_814(iParam0, true);
					func_716(iParam0, 6);
				}
				else
				{
					func_815(num2);
					func_814(iParam0, 4);
					func_716(iParam0, 3);
				}
			}
			else
			{
				func_716(iParam0, 7);
			}
			break;
	
		case 8:
			if (Global_1110244.f_19)
			{
				if (func_553(num, 4))
				{
				}
				else
				{
					func_816();
				}
			
				func_551(num);
				func_817(1);
				func_817(0);
			}
			else
			{
				func_816();
				func_551(num);
				func_817(1);
				func_817(0);
			}
			break;
	}

	return;
}

void func_689(int iParam0, Hash hParam1, Hash hParam2, BOOL bParam3) // Position - 0x159C5 Signature - 22 04 06 00 00 66 01 2F
{
	if (hParam1 == 0 || hParam2 == 0)
		return;

	if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(hParam1, hParam2) != iParam0)
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, hParam1, hParam2);

	if (!bParam3 && PED::GET_RELATIONSHIP_BETWEEN_GROUPS(hParam2, hParam1) != iParam0)
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, hParam2, hParam1);

	return;
}

Hash func_690(int iParam0, int iParam1) // Position - 0x15A18 Signature - 22 02 04 00 00 66 01 39
{
	if (!func_525(iParam1))
		return joaat("REL_NO_RELATIONSHIP");

	return Global_1235687[iParam0 /*697*/].f_572[iParam1];
}

struct<33> func_691(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x15A42 Signature - 22 04 27
{
	var unk;

	!func_808(4, uParam0, &unk);
	return unk;
}

int func_692(int iParam0) // Position - 0x15A5C Signature - 22 01 08 00 00 4B
{
	var unk;

	if (!func_693(&unk))
		return -1;

	if (!func_694(&unk, 5, 0, 0, 1))
		return -1;

	if (!func_694(&unk, 7, 0, 0, 1))
		return -1;

	if (!func_694(&unk, 9, 0, 0, 1))
		return -1;

	if (!func_694(&unk, 10, iParam0, 0, 1))
		return -1;

	return func_818(&unk, 1);
}

BOOL func_693(Any* panParam0) // Position - 0x15AC4 Signature - 22 01 09 00 00 6D
{
	var src;
	int fileHandle;

	fileHandle = Global_1072759.f_28418[31 /*4*/].f_3;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(fileHandle))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(fileHandle))
		return false;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 5);
	*panParam0 = fileHandle;
	return true;
}

BOOL func_694(Any* panParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x15B06 Signature - 22 05 08 00 00 66 01
{
	var unk;

	panParam0->f_2 = iParam1;
	panParam0->f_3 = iParam2;
	panParam0->f_4 = iParam3;
	unk = panParam0->f_1;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0))
	{
		panParam0->f_1 = unk;
		return false;
	}

	return true;
}

int func_695(int iParam0) // Position - 0x15B3F Signature - 22 01 03 00 00 66 00 3C 05 00 00 00 00 00 1B
{
	switch (iParam0)
	{
		case 0:
			return joaat("bounty");
	
		case 1:
			return -1340981006;
	
		case 2:
			return joaat("moonshine");
	
		case 3:
			return joaat("MOONSHINE_RECIPE");
	
		case 4:
			return joaat("LEGENDARY_ANIMAL");
	
		default:
		
	}

	return 0;
}

int func_696(int iParam0) // Position - 0x15B99 Signature - 22 01 03 00 00 66 00 3C 02 00 00 00 00 00 09 00 01 00 00 00 0B 00 68 10 00 37 27
{
	switch (iParam0)
	{
		case 0:
			return joaat("English");
	
		case 1:
			return joaat("LOCALIZED");
	
		default:
		
	}

	return 0;
}

int func_697(int iParam0) // Position - 0x15BC9 Signature - 22 01 03 00 00 66 00 3C 05 00 00 00 00 00 23
{
	switch (iParam0)
	{
		case 0:
			return joaat("GANG_NAME");
	
		case 1:
			return joaat("ILO_NAME");
	
		case 2:
			return joaat("Crime");
	
		case 3:
			return joaat("HEADER");
	
		case 4:
			return joaat("shard");
	
		default:
		
	}

	return 0;
}

var func_698(Any* panParam0, int iParam1) // Position - 0x15C23 Signature - 22 02 04 00 00 66 00 6D 25
{
	return func_819(panParam0, 37, iParam1);
}

Any func_699(Any anParam0, int iParam1) // Position - 0x15C35 Signature - 22 02 05 00 00 66 01 66
{
	Any numNodes;

	anParam0->f_2 = iParam1;
	numNodes = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(anParam0);
	return numNodes;
}

int func_700(Any* panParam0, int iParam1) // Position - 0x15C4D Signature - 22 02 04 00 00 66 00 6D 1F
{
	return func_819(panParam0, 31, iParam1);
}

BOOL func_701(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x15C5F Signature - 22 05 0F
{
	var unk;
	var unk6;
	int num;
	BOOL flag;

	num = func_692(iParam1);

	if (num == -1)
		return false;

	if (!func_693(&unk))
		return false;

	if (!func_694(&unk, 5, 0, 0, 1))
		return false;

	if (!func_694(&unk, 6, 0, 0, 1))
		return false;

	if (!func_694(&unk, 8, func_695(num), 0, 1))
		return false;

	if (!func_694(&unk, 9, 0, 0, 1))
		return false;

	if (!func_694(&unk, 10, iParam1, 0, 1))
		return false;

	unk6 = unk.f_1;

	if (!func_694(&unk, 16, 0, 0, 1))
		return false;

	*uParam0 = iParam1;
	flag = num != 4;
	uParam0->f_3 = func_820(&unk, flag);
	uParam0->f_1 = func_821(&unk, flag);

	if (num == 0 || num == 1)
		flag = true;
	else
		flag = false;

	uParam0->f_2 = func_822(&unk, flag);
	unk.f_1 = unk6;

	if (!func_694(&unk, 20, 0, 0, 1))
		return false;

	if (!func_694(&unk, 21, func_696(iParam4), 0, 1))
		return false;

	if (!func_694(&unk, 22, func_697(1), 0, 1))
		return false;

	if (!func_694(&unk, 23, iParam2, 0, 1))
		return false;

	uParam0->f_5 = func_698(&unk, 1);
	unk6 = unk.f_1;

	if (!func_823(uParam0, iParam3))
		return false;

	return func_824(num, uParam0);
}

int func_702(int iParam0, float fParam1, BOOL bParam2) // Position - 0x15DD1 Signature - 22 03 0C
{
	var unk;
	int num;
	int num2;
	int num3;
	int i;

	unk = { func_172(iParam0) };
	num = Global_1225099[iParam0 /*28*/];
	num2 = Global_1225099[iParam0 /*28*/].f_6;
	num3 = func_335(num, num2);

	if (!_IS_NULL_VECTOR(unk) && func_173(Global_34, unk) < fParam1)
	{
		return 1;
	}
	else if (bParam2 && num3 > 0)
	{
		for (i = 0; i <= num3 - 1; i = i + 1)
		{
			if (!_IS_NULL_VECTOR(Global_1235687[iParam0 /*697*/].f_617[i /*3*/]) && func_173(Global_34, Global_1235687[iParam0 /*697*/].f_617[i /*3*/]) < fParam1)
				return 1;
		}
	}

	return 0;
}

int func_703(int iParam0, float fParam1) // Position - 0x15E90 Signature - 22 02 05 00 00 66 00 21
{
	int i;

	if (func_40(iParam0, 1048576))
		return 1;

	for (i = 0; i <= 5; i = i + 1)
	{
		if (!_IS_NULL_VECTOR(Global_1235687[iParam0 /*697*/][i /*3*/]) && func_173(Global_34, Global_1235687[iParam0 /*697*/][i /*3*/]) < fParam1)
			return 1;
	}

	return 0;
}

int func_704(int iParam0, float fParam1) // Position - 0x15EF7 Signature - 22 02 06 00 00 66 00 5D 8B
{
	Player player;
	Ped playerPed;

	player = Global_1225099[iParam0 /*28*/].f_16;

	if (player != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
	{
		playerPed = PLAYER::GET_PLAYER_PED(player);
	
		if (ENTITY::DOES_ENTITY_EXIST(playerPed) && func_173(Global_34, ENTITY::GET_ENTITY_COORDS(playerPed, false, false)) < fParam1)
			return 1;
	}

	return 0;
}

int func_705(int iParam0, float fParam1) // Position - 0x15F4D Signature - 22 02 04 00 00 1D
{
	if (!_IS_NULL_VECTOR(Global_1225099[iParam0 /*28*/].f_19) && func_173(Global_34, Global_1225099[iParam0 /*28*/].f_19) < fParam1)
		return 1;

	return 0;
}

BOOL func_706() // Position - 0x15F8B Signature - 22 00 02 00 00 5D E7 DA 12 78 07
{
	if (Global_1235687.f_9479 != -1)
		return true;

	return false;
}

BOOL func_707(int iParam0, int iParam1, Player plParam2) // Position - 0x15FA3 Signature - 22 03 17
{
	int gangMembers;
	int i;
	var memberHandles;
	Player playerFromGamerHandle;

	memberHandles = 7;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam1))
		return func_67(iParam0, plParam2);

	gangMembers = GANG::_NETWORK_GET_GANG_MEMBERS(iParam1, &memberHandles);

	for (i = 0; i <= gangMembers - 1; i = i + 1)
	{
		playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&memberHandles[i /*2*/]);
	
		if (!func_67(iParam0, playerFromGamerHandle))
			return false;
	}

	return true;
}

BOOL func_708(int iParam0) // Position - 0x16001 Signature - 22 01 03 00 00 66 00 5D E7 DA 12 18 66 23 17
{
	return Global_1235687.f_9062[iParam0 /*4*/] == -1 && Global_1235687.f_9062[iParam0 /*4*/].f_1 == -1;
}

BOOL func_709(int iParam0) // Position - 0x1602A Signature - 22 01 03 00 00 66 00 5D E7 DA 12 18 66 23 63
{
	return Global_1235687.f_9062[iParam0 /*4*/].f_1 != -1;
}

void func_710(const char* sParam0, int iParam1) // Position - 0x16041 Signature - 22 02 05 00 00 5D FD 0B 10 80 50 27 65 6D 0A 75
{
	int num;

	if (Global_1051645.f_80.f_101 >= 10)
		return;

	num = func_825(sParam0, iParam1);

	if (num != -1)
		return;

	TEXT_LABEL_ASSIGN_STRING(&Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/], sParam0, 64);
	Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/].f_8 = MISC::GET_HASH_KEY(sParam0);
	Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/].f_9 = iParam1;
	Global_1051645.f_80.f_101 = Global_1051645.f_80.f_101 + 1;
	Global_1051645.f_45.f_1 = 1;
	return;
}

int func_711(Player plParam0) // Position - 0x160C7 Signature - 22 01 03 00 00 66 00 5D F1
{
	return Global_1138673[plParam0 /*56*/];
}

int func_712(Player plParam0, int iParam1) // Position - 0x160D7 Signature - 22 02 06 00 00 66 00 03
{
	int gangId;
	int i;

	gangId = GANG::NETWORK_GET_GANG_ID(plParam0);

	if (func_550(iParam1))
		if (gangId == func_826(iParam1))
			return iParam1;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (gangId == func_826(i))
			return i;
	}

	return -1;
}

void func_713(int iParam0) // Position - 0x16124 Signature - 22 01 03 00 00 66 00 39 CD
{
	if (!func_550(iParam0))
		return;

	Global_1138673[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/] = iParam0;
	return;
}

BOOL func_714(Player plParam0, int iParam1, BOOL bParam2) // Position - 0x16145 Signature - 22 03 05 00 00 66 01 66 00 5D
{
	return Global_1138673[plParam0 /*56*/].f_1[iParam1] && bParam2 != false;
}

void func_715() // Position - 0x16160 Signature - 22 00 02 00 00 39 73
{
	if (!func_827())
		return;

	if (!func_36(Global_1051268))
		return;

	func_610(&Global_1051268);
	return;
}

void func_716(int iParam0, BOOL bParam1) // Position - 0x1618C Signature - 22 02 05 00 00 03 01 01 13 67 04 66 00 66 04 5D F1 5F 11 63 38 80 01 17 01 66 00
{
	Player player;

	player = PLAYER::PLAYER_ID();
	Global_1138673[player /*56*/].f_1[iParam0] = Global_1138673[player /*56*/].f_1[iParam0] - Global_1138673[player /*56*/].f_1[iParam0] && bParam1;
	return;
}

BOOL func_717(int iParam0) // Position - 0x161C8 Signature - 22 01 03 00 00 5D F3 67 11 66 00 09 39 A7
{
	return func_564(&Global_1140723, iParam0, 1);
}

int func_718(int iParam0) // Position - 0x161DB Signature - 22 01 03 00 00 66 00 5D F3
{
	return Global_1140723.f_2[iParam0];
}

int func_719(int iParam0) // Position - 0x161ED Signature - 22 01 03 00 00 66 00 3C 02 00 00 00 00 00 15
{
	switch (iParam0)
	{
		case 0:
			return Global_1901671.f_319.f_43;
	
		case 1:
			return Global_1901671.f_319.f_42;
	
		default:
		
	}

	return 0;
}

void func_720(int iParam0) // Position - 0x16225 Signature - 22 01 03 00 00 66 00 39 85
{
	func_828(iParam0);
	func_829(iParam0, MISC::GET_GAME_TIMER());
	return;
}

int func_721(int iParam0) // Position - 0x1623D Signature - 22 01 03 00 00 66 00 5D 0D 03 11 17
{
	return Global_1114893[iParam0 /*70*/];
}

int func_722(int iParam0) // Position - 0x1624D Signature - 22 01 03 00 00 66 00 39 AF
{
	return func_830(iParam0);
}

int func_723(int iParam0, Any* panParam1, int iParam2, int iParam3) // Position - 0x1625B Signature - 22 04 07 00 00 66 00 66 02
{
	int num;

	num = func_364(iParam0, iParam2, iParam3);

	if (num != -1)
		MISC::COPY_SCRIPT_STRUCT(&(Global_1235687.f_9085.f_101), panParam1, 3);

	return num;
}

void func_724(var uParam0, int iParam1) // Position - 0x16287 Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 01
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_725(Player plParam0) // Position - 0x16298 Signature - 22 01 03 00 00 66 00 5D 77 5E 10 18 7A
{
	if (Global_1072759.f_21626[plParam0 /*8*/].f_5 != 0)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1072759.f_21626[plParam0 /*8*/]))
			MAP::BLIP_REMOVE_MODIFIER(Global_1072759.f_21626[plParam0 /*8*/], Global_1072759.f_21626[plParam0 /*8*/].f_5);
	
		Global_1072759.f_21626[plParam0 /*8*/].f_5 = 0;
		func_831(plParam0);
	}

	return;
}

BOOL func_726() // Position - 0x162F4 Signature - 22 00 02 00 00 5D 17 00 18 27 08
{
	return func_64(Global_1572887.f_8, 1);
}

BOOL func_727() // Position - 0x16307 Signature - 22 00 02 00 00 5D 17 00 18 80
{
	return Global_1572887.f_72.f_40 >= 14 && Global_1572887.f_72.f_40 < 21;
}

int func_728(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x1632A Signature - 22 06 1A
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
	num2 = UIFEED::_UI_FEED_POST_FEED_TICKER(&num, &unk13, bParam5);
	return num2;
}

BOOL func_729(BOOL bParam0, int iParam1) // Position - 0x16365 Signature - 22 02 04 00 00 66 00 76 66 01 39
{
	return func_402(*bParam0, iParam1);
}

int func_730(var uParam0) // Position - 0x16376 Signature - 22 01 03 00 00 5D 32 C5 13 27 10 66 00 10 50
{
	return Global_1295666.f_16 - uParam0;
}

void func_731(BOOL bParam0, int iParam1) // Position - 0x16387 Signature - 22 02 04 00 00 66 00 66 01 39 65
{
	if (func_729(bParam0, iParam1))
		return;

	func_557(bParam0, iParam1);
	return;
}

void func_732(Player plParam0) // Position - 0x163A5 Signature - 22 01 04 00 00 66 00 67 03 66 03 2F 35
{
	Player player;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	Global_1108965.f_34[player /*11*/].f_10 = 0;
	return;
}

void func_733(Player plParam0) // Position - 0x163D3 Signature - 22 01 03 00 00 5D 77 5E 10 18 8E 6E 66 00 03 09 00 36 8B 1C
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28302), plParam0);
	
		if (func_786(plParam0))
			func_832(plParam0);
	}

	return;
}

void func_734(Player plParam0) // Position - 0x16407 Signature - 22 01 03 00 00 5D 77 5E 10 18 92
{
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28306), plParam0);
	return;
}

void func_735(BOOL bParam0, int iParam1) // Position - 0x1641C Signature - 22 02 04 00 00 66 00 66 01 39 3A
{
	func_423(bParam0, iParam1);
	return;
}

int func_736(Player plParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x1642C Signature - 22 04 0E
{
	BOOL flag;
	BOOL isBitSet;
	Player player;
	int num;
	int num2;
	int offset;
	int num3;
	int num4;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		if (iParam2 == -1)
			return joaat("COLOR_GREYDARK");
		else
			return joaat("color_posse_neutral");

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return joaat("color_posse_neutral");

	player = plParam0;

	if (func_112(func_263(0)) && func_269(func_263(0)) == 7)
	{
		flag = true;
		num = 11;
		num2 = num / 32;
		offset = num - (num2 * 32);
		isBitSet = MISC::IS_BIT_SET(Global_3145858.f_6[num2], offset);
	}

	if (Global_1072759.f_21353.f_1[player /*8*/].f_5 != 0)
		return Global_1072759.f_21353.f_1[player /*8*/].f_5;

	if (bParam3 && Global_1072759.f_21353.f_1[player /*8*/].f_6 != 0)
		return Global_1072759.f_21353.f_1[player /*8*/].f_6;

	if (plParam0 == PLAYER::PLAYER_ID())
	{
		if (flag && isBitSet)
		{
			num3 = func_833(plParam0);
		
			if (num3 == joaat("color_net_player2") && NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(plParam0))
				return joaat("COLOR_WHITE");
			else
				return num3;
		}
		else
		{
			return func_834(plParam0);
		}
	}

	if (player < 0 || player >= 32)
		return 0;

	if (func_402(Global_1072759.f_21353.f_1[player /*8*/].f_7, 1024))
		return joaat("color_winning_player");

	num4 = func_835(plParam0, true);

	if (!flag)
	{
		if (func_836(plParam0, bParam1))
		{
			return func_834(plParam0);
		}
		else if (func_837(plParam0, bParam1))
		{
			if (func_838(plParam0, bParam1))
			{
				return joaat("color_posse_enemy");
			}
			else
			{
				if (num4 > 5)
					return joaat("color_notoriety_high");
				else if (num4 > 3)
					return joaat("color_notoriety_high");
				else if (num4 > 1)
					return joaat("color_notoriety_medium");
			
				return joaat("color_notoriety_low");
			}
		}
	}
	else if (isBitSet)
	{
		return func_833(plParam0);
	}
	else if (func_836(plParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == plParam0)
			return joaat("COLOR_WHITE");
		else if (func_839(func_603(func_263(0)), 1) == 395262693)
			return func_834(plParam0);
		else
			return func_834(plParam0);
	}
	else if (func_837(plParam0, bParam1))
	{
		return joaat("color_posse_enemy");
	}

	return joaat("color_friendly");
}

const char* func_737(const char* sParam0, int iParam1) // Position - 0x16680 Signature - 22 02 04 00 00 66 00 03
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);

	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);

	return func_840(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

void func_738(Any* panParam0, int* piParam1) // Position - 0x166BE Signature - 22 02 04 00 00 6D 1C
{
	*panParam0 = 28;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 9, 17, piParam1);
	return;
}

void func_739(int iParam0, int iParam1) // Position - 0x166E0 Signature - 22 02 04 00 00 66 01 2F 15 03
{
	if (iParam1 == 0)
		return;

	if (SECURE_LOAD(&iParam0) >= 11)
		return;

	SECURE_STORE(&iParam0->f_1[SECURE_LOAD(&iParam0)], iParam1);
	SECURE_STORE(&iParam0, SECURE_LOAD(&iParam0) + 1);
	return;
}

void func_740(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0x16710 Signature - 22 13
{
	int i;
	var unk;

	if (!func_841(anParam0))
		return;

	if (Global_1292143.f_2012 < 20)
	{
		Global_1292143.f_2012 = Global_1292143.f_2012 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_2012.f_1[i /*24*/] = { Global_1292143.f_2012.f_1[i + 1 /*24*/] };
		}
	}

	unk.f_7.f_1 = 11;
	unk.f_7.f_16 = 255;
	unk = { *anParam0 };
	unk.f_4 = iParam1;
	unk.f_7 = { uParam2 };
	unk.f_6 = 1;
	Global_1292143.f_2012.f_1[Global_1292143.f_2012 - 1 /*24*/] = { unk };
	return;
}

Hash func_741(int iParam0) // Position - 0x167CB Signature - 22 01 03 00 00 66 00 3C 1C 00 00 00 00 00 A5 00 07 00 00 00 A7 00 0B 00 00 00 B1 00 0C 00 00 00 A3 00 0D 00 00 00 AD 00 0E 00 00 00 AF 00 0F 00 00 00 B1 00 10 00 00 00 B3 00 11 00 00 00 B5 00 12 00 00 00 B7 00 13 00 00 00 B9 00 14 00 00 00 BB 00 15 00 00 00 BD 00 16 00 00 00 BF 00 17 00 00 00 C1 00 18 00 00 00 C3 00 19 00 00 00 C5 00 1A 00 00 00 C7 00 1B 00 00 00 C9 00 1C 00 00 00 CB 00 1D 00 00 00 CD 00 1E 00 00 00 CF 00 1F 00 00 00 D1 00 20 00 00 00 D3 00 21 00 00 00 D5 00 22 00 00 00 D7 00 23 00 00 00 D9 00 24 00 00 00 DB 00 68 E0 00 37 36
{
	switch (iParam0)
	{
		case 0:
			return joaat("CHARACTER_RANK");
	
		case 7:
			return joaat("CHARACTER_RANK_BOUNTY_HUNTER");
	
		case 11:
			return joaat("CHARACTER_RANK_TRADER");
	
		case 12:
			return joaat("CHARACTER_RANK_COLLECTOR");
	
		case 13:
			return joaat("CHARACTER_RANK_SEASON_005");
	
		case 14:
			return joaat("CHARACTER_RANK_VIP_SEASON_005");
	
		case 15:
			return joaat("CHARACTER_RANK_MOONSHINER");
	
		case 16:
			return joaat("CHARACTER_RANK_SEASON_006");
	
		case 17:
			return joaat("CHARACTER_RANK_VIP_SEASON_006");
	
		case 18:
			return -296143963;
	
		case 19:
			return -575193412;
	
		case 20:
			return 1364208910;
	
		case 21:
			return 1936286816;
	
		case 22:
			return -361115047;
	
		case 23:
			return -874931455;
	
		case 24:
			return -1692024648;
	
		case 25:
			return -1371940008;
	
		case 26:
			return -108990605;
	
		case 27:
			return -122883667;
	
		case 28:
			return -2093379718;
	
		case 29:
			return -362851054;
	
		case 30:
			return -244323351;
	
		case 31:
			return 1314790674;
	
		case 32:
			return -550123659;
	
		case 33:
			return 944566512;
	
		case 34:
			return 1589331582;
	
		case 35:
			return 721639005;
	
		case 36:
			return 1289855691;
	
		default:
		
	}

	return 0;
}

Hash func_742(int iParam0) // Position - 0x16964 Signature - 22 01 03 00 00 66 00 6D FF 0B
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		return NETWORK::_NETWORK_GET_RANK();

	return Global_1155150[iParam0 /*30*/];
}

Hash func_743(int iParam0) // Position - 0x16990 Signature - 22 01 03 00 00 66 00 3C 1C 00 00 00 00 00 A5 00 07 00 00 00 A7 00 0B 00 00 00 B1 00 0C 00 00 00 A3 00 0D 00 00 00 AD 00 0E 00 00 00 AF 00 0F 00 00 00 B1 00 10 00 00 00 B3 00 11 00 00 00 B5 00 12 00 00 00 B7 00 13 00 00 00 B9 00 14 00 00 00 BB 00 15 00 00 00 BD 00 16 00 00 00 BF 00 17 00 00 00 C1 00 18 00 00 00 C3 00 19 00 00 00 C5 00 1A 00 00 00 C7 00 1B 00 00 00 C9 00 1C 00 00 00 CB 00 1D 00 00 00 CD 00 1E 00 00 00 CF 00 1F 00 00 00 D1 00 20 00 00 00 D3 00 21 00 00 00 D5 00 22 00 00 00 D7 00 23 00 00 00 D9 00 24 00 00 00 DB 00 68 E0 00 37 4A
{
	switch (iParam0)
	{
		case 0:
			return joaat("CHARACTER_XP");
	
		case 7:
			return joaat("CHARACTER_XP_BOUNTY_HUNTER");
	
		case 11:
			return joaat("CHARACTER_XP_TRADER");
	
		case 12:
			return joaat("CHARACTER_XP_COLLECTOR");
	
		case 13:
			return joaat("CHARACTER_XP_SEASON_005");
	
		case 14:
			return joaat("CHARACTER_XP_VIP_SEASON_005");
	
		case 15:
			return joaat("CHARACTER_XP_MOONSHINER");
	
		case 16:
			return joaat("CHARACTER_XP_SEASON_006");
	
		case 17:
			return joaat("CHARACTER_XP_VIP_SEASON_006");
	
		case 18:
			return -399749454;
	
		case 19:
			return 1428145499;
	
		case 20:
			return -1318783204;
	
		case 21:
			return 893948884;
	
		case 22:
			return -187008013;
	
		case 23:
			return 92055054;
	
		case 24:
			return 2141983659;
	
		case 25:
			return 1021617260;
	
		case 26:
			return 451790629;
	
		case 27:
			return -379952091;
	
		case 28:
			return -2076041980;
	
		case 29:
			return -453223575;
	
		case 30:
			return -1366789744;
	
		case 31:
			return -745162596;
	
		case 32:
			return 312097202;
	
		case 33:
			return -1063349586;
	
		case 34:
			return 48798287;
	
		case 35:
			return -1288374309;
	
		case 36:
			return 1026199250;
	
		default:
		
	}

	return 0;
}

BOOL func_744(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42) // Position - 0x16B29 Signature - 22 2B 2D
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam0.f_41))
		return DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam0);

	return DATABINDING::_DATABINDING_READ_DATA_BOOL(hParam0.f_41);
}

void func_745(Hash hParam0) // Position - 0x16B4E Signature - 22 01 03 00 00 66 00 03 05 00 67
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam0))
		return;

	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1940252.f_245.f_5, hParam0);
	func_842(hParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(hParam0);
	func_571(Global_1940252.f_245.f_1306 - 1);
	return;
}

int func_746() // Position - 0x16B8C Signature - 22 00 08 00 00 2F 5D
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	num4 = DATABINDING::DATABINDING_READ_INT(Global_1940252.f_245.f_14[0 /*43*/].f_29);
	num5 = DATABINDING::DATABINDING_READ_INT(Global_1940252.f_245.f_14[0 /*43*/].f_39);

	for (i = 0; i < 30; i = i + 1)
	{
		num = DATABINDING::DATABINDING_READ_INT(Global_1940252.f_245.f_14[i /*43*/].f_29);
		num2 = DATABINDING::DATABINDING_READ_INT(Global_1940252.f_245.f_14[i /*43*/].f_39);
	
		if (num < num4)
		{
			num3 = i;
			num4 = num;
			num5 = num2;
		}
		else if (num == num4)
		{
			if (num2 < num5)
			{
				num3 = i;
				num4 = num;
				num5 = num2;
			}
		}
	}

	func_745(Global_1940252.f_245.f_14[num3 /*43*/]);
	return num3;
}

void func_747(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, BOOL bParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25) // Position - 0x16C37 Signature - 22 1A 1C
{
	*hParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(hParam1, &uParam2);
	hParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(0), bParam10);
	hParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1), bParam10.f_1);
	hParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(2), bParam10.f_2);
	hParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(57), bParam10.f_3);
	hParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(58), bParam10.f_4);
	hParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(60), bParam10.f_5);
	hParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(59), bParam10.f_6);

	if (bParam10.f_7 == 0)
		bParam10.f_7 = joaat("IB_SELECT");

	hParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(61), bParam10.f_7);
	hParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(62), "");
	hParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(63), bParam10.f_8);
	hParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(64), bParam10.f_9);
	hParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(65), bParam10.f_10);
	hParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(71), bParam10.f_11);
	hParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(66), bParam10.f_12);

	if (bParam10.f_13 == 0)
		bParam10.f_13 = joaat("IB_SELECT");

	hParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(68), bParam10.f_13);
	hParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(69), bParam10.f_14);
	hParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(70), bParam10.f_15);
	return;
}

const char* func_748(var uParam0, int iParam1) // Position - 0x16DCB Signature - 22 02 04 00 00 66 01 37
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", uParam0);

	return func_840(MISC::VAR_STRING(10, "LITERAL_STRING", uParam0), iParam1);
}

int func_749(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, BOOL bParam13, BOOL bParam14, var uParam15, var uParam16) // Position - 0x16E01 Signature - 22 11 29
{
	var unk;
	var unk14;
	int num;

	unk = -2;
	unk = uParam8;
	unk.f_1 = uParam9;
	unk.f_2 = uParam10;
	unk.f_3 = iParam12;
	unk.f_9 = uParam4;
	unk.f_9.f_1 = uParam5;
	unk.f_9.f_2 = uParam6;
	unk.f_9.f_3 = uParam7;
	unk.f_4.f_2 = uParam15;
	unk14.f_7 = 1;
	unk14 = uParam11;
	unk14.f_1 = sParam0;
	unk14.f_2 = sParam1;
	unk14.f_3 = 0;
	unk14.f_4 = uParam2;
	unk14.f_5 = uParam3;
	unk14.f_7 = uParam16;
	num = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&unk, &unk14, bParam13, bParam14);
	return num;
}

int func_750(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19) // Position - 0x16E8E Signature - 22 14
{
	var unk;
	var unk14;
	int num;

	unk = -2;
	unk = uParam11;
	unk.f_1 = uParam12;
	unk.f_2 = uParam13;
	unk.f_3 = iParam15;
	unk.f_9 = uParam7;
	unk.f_9.f_1 = uParam8;
	unk.f_9.f_2 = uParam9;
	unk.f_9.f_3 = uParam10;
	unk.f_4.f_2 = uParam18;
	unk14.f_9 = 1;
	unk14 = uParam14;
	unk14.f_1 = sParam0;
	unk14.f_2 = sParam1;
	unk14.f_3 = 0;
	unk14.f_4 = uParam2;
	unk14.f_5 = uParam3;
	unk14.f_6 = uParam4;
	unk14.f_7 = uParam5;
	unk14.f_8 = uParam6;
	unk14.f_9 = uParam19;
	num = UIFEED::_UI_FEED_POST_SAMPLE_NOTIFICATION(&unk, &unk14, iParam16, iParam17);
	return num;
}

int func_751(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0x16F2D Signature - 22 0E 26
{
	var unk;
	var unk14;
	int num;

	unk = -2;
	unk = uParam7;
	unk.f_1 = uParam8;
	unk.f_2 = uParam9;
	unk.f_3 = iParam11;
	unk.f_4 = uParam4;
	unk.f_4.f_1 = uParam6;
	unk.f_4.f_2 = uParam5;
	unk14.f_7 = 1;
	unk14 = uParam10;
	unk14.f_1 = sParam0;
	unk14.f_2 = sParam1;
	unk14.f_3 = 0;
	unk14.f_4 = uParam2;
	unk14.f_5 = uParam3;
	unk14.f_7 = 1;
	num = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&unk, &unk14, bParam12, bParam13);
	return num;
}

int func_752(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16) // Position - 0x16FA9 Signature - 22 11 2B
{
	var unk;
	var unk14;
	int num;

	unk = -2;
	unk = uParam10;
	unk.f_1 = uParam11;
	unk.f_2 = uParam12;
	unk.f_3 = iParam14;
	unk.f_4 = uParam7;
	unk.f_4.f_1 = uParam9;
	unk.f_4.f_2 = uParam8;
	unk14.f_9 = 1;
	unk14 = uParam13;
	unk14.f_1 = sParam0;
	unk14.f_2 = sParam1;
	unk14.f_3 = 0;
	unk14.f_4 = uParam2;
	unk14.f_5 = uParam3;
	unk14.f_6 = uParam4;
	unk14.f_7 = uParam5;
	unk14.f_8 = uParam6;
	unk14.f_9 = 1;
	num = UIFEED::_UI_FEED_POST_SAMPLE_NOTIFICATION(&unk, &unk14, iParam15, iParam16);
	return num;
}

int func_753(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, BOOL bParam13, BOOL bParam14) // Position - 0x17037 Signature - 22 0F 27 00 00 4B 11 6A 25 FE FF 3D 41 41 66 08 67 11 66 09 4B 11 6C 01 66 0A 4B 11 6C 02 66 0C 4B 11 6C 03 66 05 4B 11 6C 04 66 07 4B 11 80 04 6C 01 66 06 4B 11 80 04 6C 02 4B 1E 6A 80 07 09 3D 41 41 66 0B 67 1E 66 00 4B 1E 6C 01 66 01 4B 1E 6C 02 2F
{
	var unk;
	var unk14;
	int num;

	unk = -2;
	unk = uParam8;
	unk.f_1 = uParam9;
	unk.f_2 = uParam10;
	unk.f_3 = iParam12;
	unk.f_4 = uParam5;
	unk.f_4.f_1 = uParam7;
	unk.f_4.f_2 = uParam6;
	unk14.f_7 = 1;
	unk14 = uParam11;
	unk14.f_1 = sParam0;
	unk14.f_2 = sParam1;
	unk14.f_3 = 0;
	unk14.f_4 = uParam2;
	unk14.f_5 = uParam3;
	unk14.f_6 = uParam4;
	unk14.f_7 = 1;
	num = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&unk, &unk14, bParam13, bParam14);
	return num;
}

int func_754(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14) // Position - 0x170B9 Signature - 22 0F 27 00 00 4B 11 6A 25 FE FF 3D 41 41 66 08 67 11 66 09 4B 11 6C 01 66 0A 4B 11 6C 02 66 0C 4B 11 6C 03 66 05 4B 11 6C 04 66 07 4B 11 80 04 6C 01 66 06 4B 11 80 04 6C 02 4B 1E 6A 80 07 09 3D 41 41 66 0B 67 1E 66 00 4B 1E 6C 01 66 01 4B 1E 6C 02 66
{
	var unk;
	var unk14;
	int num;

	unk = -2;
	unk = uParam8;
	unk.f_1 = uParam9;
	unk.f_2 = uParam10;
	unk.f_3 = iParam12;
	unk.f_4 = uParam5;
	unk.f_4.f_1 = uParam7;
	unk.f_4.f_2 = uParam6;
	unk14.f_7 = 1;
	unk14 = uParam11;
	unk14.f_1 = sParam0;
	unk14.f_2 = sParam1;
	unk14.f_3 = uParam2;
	unk14.f_4 = uParam3;
	unk14.f_5 = uParam4;
	unk14.f_7 = 1;
	num = UIFEED::_UI_FEED_POST_RANKUP_TOAST(&unk, &unk14, iParam13, iParam14);
	return num;
}

int func_755(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x17136 Signature - 22 0B 23
{
	var unk;
	var unk14;
	int num;

	unk = -2;
	unk = uParam4;
	unk.f_1 = uParam5;
	unk.f_2 = uParam6;
	unk.f_3 = iParam8;
	unk14.f_7 = 1;
	unk14 = uParam7;
	unk14.f_1 = sParam0;
	unk14.f_2 = sParam1;
	unk14.f_3 = 0;
	unk14.f_4 = uParam2;
	unk14.f_5 = uParam3;
	unk14.f_7 = 1;
	num = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&unk, &unk14, bParam9, bParam10);
	return num;
}

BOOL func_756(var uParam0) // Position - 0x1719C Signature - 22 01 03 00 00 66 00 76 6D
{
	if (*uParam0 >= 40)
		return false;

	return true;
}

float func_757(int iParam0, int iParam1, int iParam2) // Position - 0x171B1 Signature - 22 03 0B 00 00 5D
{
	var unk;
	var unk2;

	unk = Global_1901671.f_171.f_35;

	if (func_360(&unk2, iParam0) && func_389(&unk2, iParam1) && func_537(&unk2, iParam2))
		func_758(unk2, -364402952, &unk, false);

	return unk;
}

int func_758(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, float* pfParam6, BOOL bParam7) // Position - 0x171FB Signature - 22 08 0A 00 00 66 05 4B 00 6C 02 66 06 4B 00 03 09 00 A4
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam6, &uParam0))
		return 1;
	else
		bParam7;

	return 0;
}

BOOL func_759(int iParam0, int iParam1) // Position - 0x17221 Signature - 22 02 05 00 00 2F 67 04 2F
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)) && func_402(Global_1148618[i /*13*/][iParam0 /*4*/], iParam1))
			return 1;
	}

	return 0;
}

int func_760(int iParam0) // Position - 0x17268 Signature - 22 01 03 00 00 66 00 39 EB 3B 00 05 8B 04 00 2F 50 01 01 66 00 5D
{
	if (!func_126(iParam0))
		return 0;

	return Global_1142424.f_1[iParam0 /*63*/].f_3;
}

int func_761(int iParam0) // Position - 0x1728A Signature - 22 01 03 00 00 09 66 00 03
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

int func_762(Hash hParam0) // Position - 0x17299 Signature - 22 01 0A 00 00 66 00 2F 39 CD 22 01 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 39 05 8B 04 00 2F 50 01 01 4B 03 27 02
{
	var unk;

	if (!func_596(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_2;
}

BOOL func_763(Hash hParam0, int iParam1) // Position - 0x172C4 Signature - 22 02 16 00 00 66 00 2F
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_596(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_843(hParam0, iParam1);
	unk.f_9 = -1591664384;

	if (func_844("ALL WEAPONS", &num, &num2, -1591664384, false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_845(&unk, i, num, num2))
			{
			}
			else if (!func_846(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_847(num);
				return true;
			}
		}
	
		func_847(num);
	}

	return false;
}

BOOL func_764(Hash hParam0) // Position - 0x1736C Signature - 22 01 06 00 00 66 00 2F
{
	int num;
	int num2;
	int num3;

	if (!func_596(hParam0, 0))
		return false;

	num = func_848(hParam0);

	switch (num)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1115104855:
		case 1216664798:
		case 1341188928:
			break;
	
		default:
			return false;
	}

	num2 = func_849(hParam0);

	if (!(num2 == 0))
	{
		num3 = func_850(&(Global_17418.f_55.f_664.f_1354.f_5), num2);
	
		if (num3 == -1)
			return true;
	}

	num2 = func_851(hParam0);
	num3 = func_850(&(Global_17418.f_55.f_664.f_1354.f_5), num2);

	if (num3 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num3 /*17*/];
}

int func_765(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x17428 Signature - 22 04 0D 00 00 2F
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_596(hParam0, 0))
		return 0;

	num = func_762(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_843(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_852(hParam0, false);
	}

	if (func_597(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_593(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_853(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_593(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

Hash func_766(Hash hParam0) // Position - 0x174EA Signature - 22 01 03 00 00 66 00 50
{
	return hParam0;
}

BOOL func_767(Hash hParam0, int iParam1) // Position - 0x174F4 Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

void func_768(BOOL bParam0) // Position - 0x1750E Signature - 22 01 07 00 00 4B
{
	var unk;

	unk = 1;
	unk.f_1 = 1;
	*bParam0 = { unk };
	return;
}

int func_769() // Position - 0x1752B Signature - 22 00 08 00 00 2F 67
{
	int numChildren;
	int num;

	numChildren = 0;
	num = Global_1245174.f_9818;
	num.f_2 = -1041770777;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
		numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(num, num.f_1);

	return numChildren;
}

int func_770(int iParam0) // Position - 0x17563 Signature - 22 01 03 00 00 66 00 39 FC
{
	return func_854(iParam0) + 30;
}

void func_771(int iParam0, int iParam1) // Position - 0x17573 Signature - 22 02 06 00 00 4B 04 6A 08 3D 41 6A 80 01 08 3D 41 41 11
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk = { Global_1900460.f_1[iParam0 /*2*/] };
	Global_1900460.f_1[iParam0 /*2*/] = { Global_1900460.f_1[iParam1 /*2*/] };
	Global_1900460.f_1[iParam1 /*2*/] = { unk };
	return;
}

int func_772(int iParam0, var uParam1) // Position - 0x175C0 Signature - 22 02 04 00 00 66 00 11 15
{
	if (iParam0 == 2)
		return func_603(iParam0);

	return -1;
}

void func_773(Any* panParam0, var uParam1) // Position - 0x175DA Signature - 22 02 04 00 00 4B 01 03 05 00 AE 05 8B 03 00 50 02 00 42
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 4;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 45, 37, &uParam1);
	return;
}

BOOL func_774(var uParam0) // Position - 0x17608 Signature - 22 01 03 00 00 66 00 27 01
{
	if (uParam0->f_1 == -1)
		return false;

	if (!func_617(&(uParam0->f_5)))
		return false;

	return true;
}

int func_775(var uParam0, var uParam1) // Position - 0x1762D Signature - 22 02 06 00 00 2F 67 04
{
	int i;
	int num;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		num = (uParam0->f_1 + i) % uParam0->f_2;
	
		if (func_855(uParam1, &uParam0->f_3[num /*40*/]))
			return i;
	}

	return -1;
}

BOOL func_776(var uParam0, BOOL bParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1766E Signature - 22 06 38
{
	var unk;
	var unk34;
	BOOL flag;
	var unk36;
	int i;
	int num;
	int numReservedMissionPeds;
	int numReservedMissionVehicles;
	int numReservedMissionObjects;
	int numReservedMissionPickups;
	int num2;

	unk34 = -1;
	unk34.f_1 = -1;

	if (func_36(uParam0->f_8.f_5))
		unk34 = { uParam0->f_8.f_5 };
	else if (func_36(uParam0->f_8.f_5.f_6))
		unk34 = { uParam0->f_8.f_5.f_6 };
	else
		return true;

	flag = false;

	if (_IS_NULL_VECTOR(uParam0->f_8.f_2))
		flag = true;
	else
		flag = false;

	if (bParam1)
	{
		unk.f_25 = iParam2;
		unk.f_26 = iParam3;
		unk.f_27 = iParam4;
		unk.f_28 = iParam5;
	}
	else if (!func_856(func_428(unk34), &unk))
	{
		return false;
	}

	unk36 = 4;

	if (unk.f_25 <= 0 || unk.f_25 > 50)
	{
		unk.f_25 != 0;
		unk36[0] = 0;
	}
	else
	{
		unk36[0] = 1;
	}

	if (unk.f_26 <= 0 || unk.f_26 > 10)
	{
		unk.f_26 != 0;
		unk36[1] = 0;
	}
	else
	{
		unk36[1] = 1;
	}

	if (unk.f_27 <= 0 || unk.f_27 > 25)
	{
		unk.f_27 != 0;
		unk36[2] = 0;
	}
	else
	{
		unk36[2] = 1;
	}

	if (unk.f_28 <= 0 || unk.f_28 > 10)
	{
		unk.f_28 != 0;
		unk36[3] = 0;
	}
	else
	{
		unk36[3] = 1;
	}

	if (flag)
	{
		numReservedMissionPeds = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(true);
		numReservedMissionVehicles = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(true);
		numReservedMissionObjects = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(true);
		numReservedMissionPickups = NETWORK::_GET_NUM_RESERVED_MISSION_PICKUPS(true);
	}
	else
	{
		NETWORK::GET_RESERVED_MISSION_ENTITIES_IN_AREA(uParam0->f_8.f_2, false, &numReservedMissionPeds, &numReservedMissionVehicles, &numReservedMissionObjects, &numReservedMissionPickups);
	}

	for (i = 0; i < 4; i = i + 1)
	{
		num2 = i;
	
		if (num2 == -1)
		{
		}
		else if (!unk36[i])
		{
		}
		else
		{
			switch (num2)
			{
				case 0:
					num = NETWORK::GET_MAX_NUM_NETWORK_PEDS() - numReservedMissionPeds;
				
					if (num < unk.f_25)
						return false;
					break;
			
				case 1:
					num = NETWORK::GET_MAX_NUM_NETWORK_VEHICLES() - numReservedMissionVehicles;
				
					if (num < unk.f_26)
						return false;
					break;
			
				case 2:
					num = NETWORK::GET_MAX_NUM_NETWORK_OBJECTS() - numReservedMissionObjects;
				
					if (num < unk.f_27)
						return false;
					break;
			
				case 3:
					num = NETWORK::GET_MAX_NUM_NETWORK_PICKUPS() - numReservedMissionPickups;
				
					if (num < unk.f_28)
						return false;
					break;
			}
		}
	}

	return true;
}

int func_777(int iParam0) // Position - 0x178C7 Signature - 22 01 03 00 00 66 00 3C 04 00 00 00 00 00 15 00 01 00 00 00 13 00 02 00 00 00 11
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 3;
	
		case 2:
			return 35;
	
		case 3:
			return 55;
	
		default:
		
	}

	return 0;
}

int func_778(int iParam0) // Position - 0x17902 Signature - 22 01 03 00 00 66 00 3C 04 00 00 00 00 00 15 00 01 00 00 00 13 00 02 00 00 00 32
{
	switch (iParam0)
	{
		case 0:
			return 3;
	
		case 1:
			if (Global_1207480.f_3[iParam0] * 2 <= 32)
				return Global_1207480.f_3[iParam0] * 2;
		
			return 32;
	
		case 2:
			if (Global_1207480.f_3[iParam0] * 2 <= 20)
				return Global_1207480.f_3[iParam0] * 2;
		
			return 20;
	
		case 3:
			if (Global_1207480.f_3[iParam0] * 2 <= 16)
				return Global_1207480.f_3[iParam0] * 2;
		
			return 16;
	
		default:
		
	}

	return 0;
}

void func_779(Any* panParam0, int iParam1, int iParam2, int iParam3, Player plParam4) // Position - 0x1799E Signature - 22 05 27
{
	var src;
	int i;

	src.f_10 = 1106247680;
	src.f_15 = 4;
	src.f_20 = 4;
	src.f_26 = -1;
	src.f_28 = 2;
	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 31);

	for (i = 0; i < 2; i = i + 1)
	{
		panParam0->f_28[i] = 0;
	}

	if (plParam4 == 255)
		plParam4 = PLAYER::PLAYER_ID();

	switch (iParam1)
	{
		case 0:
			*panParam0 = 0;
			panParam0->f_1 = 0;
			panParam0->f_2 = 0;
			break;
	
		case 1:
			func_857(panParam0, iParam2);
			break;
	
		case 2:
			func_858(panParam0, iParam2);
			break;
	
		case 3:
			func_859(panParam0, iParam2);
			break;
	
		case 4:
			func_860(panParam0, iParam2);
			break;
	
		case 5:
			func_864(panParam0, iParam2);
			break;
	
		case 6:
			func_862(panParam0, iParam2);
			break;
	
		case 7:
			func_863(panParam0, iParam2, iParam3);
			break;
	
		case 8:
			func_868(panParam0, iParam2);
			break;
	
		case 9:
			func_866(panParam0, iParam2, iParam3);
			break;
	
		case 10:
			func_867(panParam0, iParam2);
			break;
	
		case 11:
			func_865(panParam0, iParam2);
			break;
	
		case 12:
			func_861(panParam0, iParam2);
			break;
	
		case 13:
			func_869(panParam0, iParam2, plParam4);
			break;
	
		case 14:
			func_870(panParam0, iParam2, iParam3);
			break;
	
		case 15:
			func_871(panParam0, iParam2);
			break;
	
		case 16:
			func_872(panParam0, iParam2, iParam3);
			break;
	
		case 17:
			func_887(panParam0, iParam2);
			break;
	
		case 18:
			func_888(panParam0, iParam2);
			break;
	
		case 19:
			func_889(panParam0, iParam2);
			break;
	
		case 20:
			func_890(panParam0, iParam2);
			break;
	
		case 21:
			func_874(panParam0, iParam2);
			break;
	
		case 22:
			func_878(panParam0, iParam2);
			break;
	
		case 23:
			func_879(panParam0, iParam2);
			break;
	
		case 24:
			func_877(panParam0, iParam2);
			break;
	
		case 25:
			func_876(panParam0, iParam2);
			break;
	
		case 26:
			func_881(panParam0, iParam2);
			break;
	
		case 27:
			func_883(panParam0, iParam2);
			break;
	
		case 28:
			func_875(panParam0, iParam2);
			break;
	
		case 29:
			func_880(panParam0, iParam2);
			break;
	
		case 30:
			func_882(panParam0, iParam2);
			break;
	
		case 31:
			func_873(panParam0, iParam2);
			break;
	
		case 32:
			func_884(panParam0, iParam2, iParam3);
			break;
	
		case 33:
			func_885(panParam0, iParam2, iParam3);
			break;
	
		case 34:
			func_886(panParam0, iParam2);
			break;
	
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			func_891(panParam0, iParam1, iParam2);
			break;
	
		default:
			break;
	}

	return;
}

void func_780(Any* panParam0, var uParam1) // Position - 0x17CC4 Signature - 22 02 04 00 00 50
{
	return;
}

int func_781() // Position - 0x17CCC Signature - 22 00 02 00 00 5D FD 0B 10 27 0C
{
	return Global_1051645.f_12;
}

char* func_782() // Position - 0x17CDA Signature - 22 00 02 00 00 25
{
	return "unnamed";
}

BOOL func_783(int iParam0) // Position - 0x17CE6 Signature - 22 01 04 00 00 2F 67 03 66 00 3C 09
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

BOOL func_784(int iParam0) // Position - 0x17D75 Signature - 22 01 03 00 00 5D 17 00 18 27 0E 08 15 04 00 2F 50 01 01 6D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_372(36, iParam0);
}

int func_785(int iParam0) // Position - 0x17D93 Signature - 22 01 03 00 00 66 00 6D FF 15 09 00 5D DD D3 10 27 01
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_786(Player plParam0) // Position - 0x17DDE Signature - 22 01 03 00 00 03 01 00 6E 05 8B 04
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_892(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_893(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

int func_787(int iParam0, int iParam1) // Position - 0x17E23 Signature - 22 02 04 00 00 66 01 66 00 5D 0B 9C 12 80 01 63 0A 63 03 27 02 50
{
	return Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2;
}

int func_788(int iParam0, int iParam1) // Position - 0x17E3B Signature - 22 02 04 00 00 6D 08
{
	return 8 + (iParam0 * 2) + iParam1;
}

eStackSize func_789(int iParam0) // Position - 0x17E4D Signature - 22 01 03 00 00 66 00 5D B8 6C 12 80 E7 18 2A 04 63 11 27 01
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_1;
}

int func_790(Hash hParam0) // Position - 0x17E64 Signature - 22 01 03 00 00 66 00 3C 23
{
	switch (hParam0)
	{
		case joaat("nb_kidnapped"):
			return 6;
	
		case joaat("nb_slumped_hunter"):
			return 18;
	
		case joaat("la_beaver"):
			return 28;
	
		case joaat("nb_treasure_hunter"):
			return 9;
	
		case joaat("nb_photography"):
			return 7;
	
		case joaat("nb_hobo_dog"):
			return 12;
	
		case joaat("la_cougar"):
			return 22;
	
		case joaat("nb_tied_up_ped"):
			return 8;
	
		case -1209093440:
			return 33;
	
		case joaat("nb_tree_map"):
			return 10;
	
		case joaat("nb_moonshine_camp"):
			return 15;
	
		case joaat("la_fox"):
			return 26;
	
		case joaat("la_boar"):
			return 24;
	
		case joaat("la_moose"):
			return 30;
	
		case joaat("nb_rival_collector"):
			return 5;
	
		case joaat("nb_graverobber"):
			return 4;
	
		case joaat("nb_egg_protector"):
			return 3;
	
		case joaat("nb_runaway_wagon"):
			return 11;
	
		case 0:
			return 0;
	
		case joaat("nb_stalking_hunter"):
			return 17;
	
		case joaat("la_bear"):
			return 21;
	
		case joaat("nb_suspension_trap"):
			return 20;
	
		case 569695338:
			return 23;
	
		case joaat("la_coyote"):
			return 29;
	
		case joaat("la_alligator"):
			return 31;
	
		case 901959776:
			return 34;
	
		case joaat("nb_beggar"):
			return 16;
	
		case joaat("la_wolf"):
			return 27;
	
		case joaat("la_bison"):
			return 25;
	
		case joaat("nb_duel"):
			return 14;
	
		case joaat("nb_arrowhead_injury"):
			return 2;
	
		case 1773252799:
			return 32;
	
		case joaat("nb_crashed_wagon"):
			return 19;
	
		case joaat("nb_animal_attack"):
			return 1;
	
		case joaat("nb_wildman"):
			return 13;
	
		default:
		
	}

	return 0;
}

void func_791(Hash hParam0, int iParam1) // Position - 0x17FEE Signature - 22 02 05 00 00 5D FD 0B 10 80 50 27 65 6D 0A 7E
{
	int num;

	if (Global_1051645.f_80.f_101 >= 10)
		return;

	num = func_894(hParam0, iParam1);

	if (num != -1)
		return;

	TEXT_LABEL_ASSIGN_STRING(&Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/], "HashOnlyScript", 64);
	Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/].f_8 = hParam0;
	Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/].f_9 = iParam1;
	Global_1051645.f_80.f_101 = Global_1051645.f_80.f_101 + 1;
	Global_1051645.f_45.f_1 = 1;
	return;
}

BOOL func_792(int iParam0) // Position - 0x18075 Signature - 22 01 03 00 00 66 00 03 05 00 3A
{
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(iParam0))
		return true;

	if (VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(iParam0) == 4)
		return true;

	return false;
}

var func_793(int iParam0) // Position - 0x1809A Signature - 22 01 03 00 00 66 00 5D B8 6C 12 80 E7 18 2A 04 63 11 27 03
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_3;
}

void func_794(int iParam0, int iParam1) // Position - 0x180B1 Signature - 22 02 04 00 00 66 00 66 01 39 B3
{
	if (func_641(iParam0, iParam1) != 0)
	{
		if (func_792(func_641(iParam0, iParam1)))
		{
			func_650(iParam0, iParam1);
			func_492(iParam0, iParam1);
		}
	}

	return;
}

BOOL func_795(int iParam0) // Position - 0x180E5 Signature - 22 01 04 00 00 66 00 03
{
	int volumeLockRequestStatus;

	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(iParam0))
		return false;

	volumeLockRequestStatus = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(iParam0);

	if (volumeLockRequestStatus == 3)
		return true;

	return false;
}

void func_796(int iParam0, int iParam1, int iParam2) // Position - 0x1810E Signature - 22 03 05 00 00 66 02 03 05 01
{
	if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iParam2))
	{
		Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2 = 0;
		return;
	}

	Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2 = iParam2;
	return;
}

BOOL func_797(int iParam0, int iParam1, Player plParam2, int iParam3) // Position - 0x18148 Signature - 22 04 06 00 00 66 00 66 02 66
{
	return func_477(iParam0, plParam2, func_788(iParam1, iParam3));
}

BOOL func_798(int iParam0, int iParam1, Player plParam2) // Position - 0x18160 Signature - 22 03 06 00 00 2F 67 05 66 05 11
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (func_797(iParam0, iParam1, plParam2, i))
			return false;
	}

	return true;
}

BOOL func_799(int iParam0, int iParam1) // Position - 0x1818E Signature - 22 02 04 00 00 5D 77
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return false;

	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1206954[iParam1 /*12*/] && iParam0 != false;
}

Vector3 func_800(int iParam0) // Position - 0x181CA Signature - 22 01 08 00 00 66
{
	float num;
	int value;
	int value2;

	value = iParam0 & 32767;
	value2 = BUILTIN::SHIFT_RIGHT(iParam0, 15) & 32767;
	num = BUILTIN::TO_FLOAT(value);
	num.f_1 = BUILTIN::TO_FLOAT(value2);

	if (iParam0 & 1073741824 == 0)
		num = num * -1f;

	if (iParam0 & -2147483648 == 0)
		num.f_1 = num.f_1 * -1f;

	return num;
}

var func_801(var uParam0, var uParam1) // Position - 0x18226 Signature - 22 02 05 00 00 4B 00 4B 04 03 09 00 7A 41 66 04 50
{
	var unk;

	STATS::STAT_ID_GET_INT(&uParam0, &unk);
	return unk;
}

BOOL func_802(int iParam0) // Position - 0x18239 Signature - 22 01 03 00 00 66 00 2F 1C 50 01 01 22 03
{
	return iParam0 != 0;
}

int func_803(int iParam0, var uParam1, var uParam2) // Position - 0x18245 Signature - 22 03 26
{
	int num;
	int i;
	int num2;

	num2.f_10 = 1106247680;
	num2.f_15 = 4;
	num2.f_20 = 4;
	num2.f_26 = -1;
	num2.f_28 = 2;

	for (i = 1; i <= 46; i = i + 1)
	{
		*uParam1 = i;
		func_779(&num2, *uParam1, -1, -1, 255);
		num = num + num2;
	
		if (num >= iParam0)
		{
			num = num - num2;
			*uParam2 = 0;
		
			while (*uParam2 <= num2 - 1)
			{
				if (num == iParam0)
					return 1;
			
				num = num + 1;
				*uParam2 = *uParam2 + 1;
			}
		}
	}

	return 0;
}

void func_804(int iParam0) // Position - 0x182D7 Signature - 22 01 03 00 00 5D 32 C5 13 27 10 66 00 32 50 01 00 22 01 03 00 00 66
{
	*iParam0 = Global_1295666.f_16;
	return;
}

int func_805(int iParam0) // Position - 0x182E8 Signature - 22 01 03 00 00 66 00 39 EB 3B 00 05 8B 04 00 2F 50 01 01 66 00 39 19 21 01 05
{
	if (!func_126(iParam0))
		return 0;

	if (!func_588(iParam0))
		return 0;

	return Global_1141332[iParam0 /*27*/].f_18.f_1;
}

void func_806(var uParam0, var uParam1, int iParam2) // Position - 0x18318 Signature - 22 03 05 00 00 11 4B 00 2D 39 09 12 00 05 8B 11
{
	if (!func_36(uParam0))
		func_610(&Global_1900460.f_1[iParam2 /*2*/]);
	else
		Global_1900460.f_1[iParam2 /*2*/] = { uParam0 };

	func_518(uParam0, false, 1, -1);
	return;
}

BOOL func_807(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x18359 Signature - 22 05 09 00 00 11
{
	int num;
	int num2;

	if (!func_36(uParam0))
		return false;

	if (!func_36(uParam2))
		return true;

	num = func_269(uParam0);
	num2 = func_269(uParam2);

	if (num2 == num)
		if (bParam4)
			return true;

	if (num2 == 2 || num2 == 7)
	{
		if (bParam4 && num == 2 || num == 7)
			return true;
	
		return false;
	}

	if (num == 2 || num == 7)
		return true;

	if (num2 == 6)
		return false;

	if (num == 6)
		return true;

	if (num2 == 5)
		return false;

	if (num == 5)
		return true;

	if (num2 == 3)
	{
		if (bParam4 && num == 3)
			return true;
	
		return false;
	}

	if (num == 3)
		return true;

	if (num2 == 4)
	{
		if (bParam4 && num == 4)
			return true;
	
		return false;
	}

	if (num == 4)
		return true;

	return false;
}

BOOL func_808(int iParam0, int iParam1, var uParam2) // Position - 0x18460 Signature - 22 03 0A 00 00 66 00 39
{
	var unk;

	if (!func_895(iParam0))
		return false;

	if (func_896(iParam0, iParam1, &unk))
		func_897(iParam0, &unk, uParam2);
	else
		return false;

	return true;
}

void func_809(var uParam0, int iParam1) // Position - 0x18495 Signature - 22 02 0A 00 00 5D 2C 66 12 27 81 6D
{
	int num;
	int num2;
	var unk;

	if (Global_1205804.f_129 >= 32)
	{
		Global_1205804.f_129 = 32;
		return;
	}

	if (iParam1 >= Global_1205804.f_129)
		iParam1 = -1;

	if (iParam1 <= -1)
	{
		Global_1205804[Global_1205804.f_129 /*4*/] = { *uParam0 };
		Global_1205804.f_129 = Global_1205804.f_129 + 1;
		return;
	}

	num = iParam1;
	num2 = Global_1205804.f_129 - 1;
	unk.f_1 = -1;
	unk.f_1.f_1 = -1;

	while (num2 >= num)
	{
		unk = { Global_1205804[num2 /*4*/] };
		Global_1205804[num2 /*4*/] = { Global_1205804[num2 + 1 /*4*/] };
		Global_1205804[num2 + 1 /*4*/] = { unk };
		num2 = num2 - 1;
	}

	Global_1205804[iParam1 /*4*/] = { *uParam0 };
	Global_1205804.f_129 = Global_1205804.f_129 + 1;
	return;
}

BOOL func_810(int iParam0) // Position - 0x18569 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 6D
{
	if (iParam0 < 0)
		return false;

	if (iParam0 >= 32)
		return false;

	return true;
}

struct<13> func_811(int iParam0) // Position - 0x18587 Signature - 22 01 03 00 00 6D 0D
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3;
}

int func_812(int iParam0) // Position - 0x1859E Signature - 22 01 03 00 00 66 00 2F 35 6A 05 8B 06 00 66 00 6D 20 7E 30 8B 04 00 08
{
	if (iParam0 < 0 || iParam0 >= 32)
		return -1;

	return func_898(iParam0);
}

int func_813(var uParam0, var uParam1) // Position - 0x185C2 Signature - 22 02 04 00 00 39
{
	if (func_827())
		return 0;

	if (!func_36(uParam0))
		return 0;

	Global_1051268 = { uParam0 };
	return 1;
}

void func_814(int iParam0, BOOL bParam1) // Position - 0x185F0 Signature - 22 02 05 00 00 03 01 01 13 67 04 66 00 66 04 5D F1 5F 11 63 38 80 01 17 01 66 01
{
	Player player;

	player = PLAYER::PLAYER_ID();
	Global_1138673[player /*56*/].f_1[iParam0] = Global_1138673[player /*56*/].f_1[iParam0] || bParam1;
	return;
}

void func_815(int iParam0) // Position - 0x1861D Signature - 22 01 03 00 00 66 00 39 86
{
	func_899(iParam0);
	return;
}

void func_816() // Position - 0x1862B Signature - 22 00 04 00 00 03 01 00
{
	BOOL sessionFlags;
	BOOL flags;

	if (!NETWORK::NETWORK_IS_HOST())
		return;

	sessionFlags = NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS();
	flags = flags | 8;

	if (NETWORK::_NETWORK_AUTO_SESSION_IS_INSTANCED_SESSION())
		NETWORK::NETWORK_AUTO_SESSION_FINISH_INSTANCE();

	if (sessionFlags && flags != false)
	{
		flags = flags && sessionFlags;
		NETWORK::NETWORK_SESSION_REMOVE_SESSION_FLAGS(flags);
	}

	return;
}

void func_817(int iParam0) // Position - 0x1866D Signature - 22 01 03 00 00 66 00 39 A1
{
	func_900(iParam0);
	func_829(iParam0, 0);
	return;
}

int func_818(Any* panParam0, int iParam1) // Position - 0x18682 Signature - 22 02 04 00 00 66 00 6D 28
{
	return func_901(func_819(panParam0, 40, iParam1));
}

var func_819(Any* panParam0, int iParam1, BOOL bParam2) // Position - 0x18698 Signature - 22 03 06 00 00 66 01 66 00
{
	var unk;

	panParam0->f_2 = iParam1;
	!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, panParam0);
	return unk;
}

var func_820(Any* panParam0, BOOL bParam1) // Position - 0x186B4 Signature - 22 02 04 00 00 66 00 6D 20
{
	return func_819(panParam0, 32, bParam1);
}

int func_821(Any* panParam0, BOOL bParam1) // Position - 0x186C6 Signature - 22 02 04 00 00 66 00 6D 26
{
	return func_902(func_819(panParam0, 38, bParam1));
}

int func_822(Any* panParam0, BOOL bParam1) // Position - 0x186DC Signature - 22 02 04 00 00 66 00 6D 27
{
	return func_903(func_819(panParam0, 39, bParam1));
}

BOOL func_823(var uParam0, int iParam1) // Position - 0x186F2 Signature - 22 02 0A 00 00 66 00 76
{
	var unk;
	int num;

	num = func_692(*uParam0);

	if (num == -1)
		return false;

	if (!func_693(&unk))
		return false;

	if (!func_694(&unk, 5, 0, 0, 1))
		return false;

	if (!func_694(&unk, 6, 0, 0, 1))
		return false;

	if (!func_694(&unk, 8, func_695(num), 0, 1))
		return false;

	if (!func_694(&unk, 9, 0, 0, 1))
		return false;

	if (!func_694(&unk, 10, *uParam0, 0, 1))
		return false;

	if (!func_694(&unk, 18, 0, 0, 0))
		return false;

	if (!func_694(&unk, 19, func_904(iParam1), 0, 1))
		return false;

	uParam0->f_4 = func_905(&unk, true);
	return true;
}

BOOL func_824(int iParam0, var uParam1) // Position - 0x187B6 Signature - 22 02 04 00 00 66 00 3C 03
{
	switch (iParam0)
	{
		case 0:
			return func_906(uParam1);
	
		case 2:
			return func_907(uParam1);
	
		case 4:
			return func_908(uParam1);
	
		default:
		
	}

	return 0;
}

int func_825(const char* sParam0, int iParam1) // Position - 0x187F7 Signature - 22 02 06 00 00 5D FD
{
	int i;
	Hash hashKey;

	if (Global_1051645.f_80.f_101 == 0)
		return -1;

	i = 0;
	hashKey = MISC::GET_HASH_KEY(sParam0);

	for (i = 0; i <= Global_1051645.f_80.f_101 - 1; i = i + 1)
	{
		if (Global_1051645.f_80[i /*10*/].f_8 == hashKey && Global_1051645.f_80[i /*10*/].f_9 == iParam1)
			return i;
	}

	return -1;
}

int func_826(int iParam0) // Position - 0x18861 Signature - 22 01 03 00 00 66 00 5D 68 E7 10 80 21 17
{
	return Global_1107816.f_33[iParam0 /*16*/];
}

BOOL func_827() // Position - 0x18873 Signature - 22 00 02 00 00 11 5D 84 0A 10 2D 39
{
	return func_36(Global_1051268);
}

void func_828(int iParam0) // Position - 0x18885 Signature - 22 01 03 00 00 5D F3 67 11 66 00 09 39 E7
{
	func_909(&Global_1140723, iParam0, 1);
	return;
}

void func_829(int iParam0, int iParam1) // Position - 0x1889B Signature - 22 02 04 00 00 66 01 66 00 5D F3
{
	Global_1140723.f_2[iParam0] = iParam1;
	return;
}

int func_830(int iParam0) // Position - 0x188AF Signature - 22 01 03 00 00 66 00 3C 0D 00 92
{
	switch (iParam0)
	{
		case joaat("GFH_BOUNTY_BOARD_EMERALD_RANCH_STATION"):
			return joaat("emerald_ranch_station_bounty_board");
	
		case joaat("GFH_BOUNTY_BOARD_VAN_HORN_POST_OFFICE"):
			return joaat("van_horn_post_office_bounty_board");
	
		case joaat("GFH_BOUNTY_BOARD_RIGGS_STATION"):
			return joaat("riggs_station_bounty_board");
	
		case joaat("GFH_BOUNTY_BOARD_VALENTINE_SHERIFF"):
			return joaat("valentine_sheriff_bounty_board");
	
		case joaat("GFH_BOUNTY_BOARD_STRAWBERRY_SHERIFF"):
			return joaat("strawberry_sheriff_bounty_board");
	
		case joaat("GFH_BOUNTY_BOARD_ANNESBURG_SHERIFF"):
			return joaat("annesburg_sheriff_bounty_board");
	
		case joaat("GFH_BOUNTY_BOARD_TUMBLEWEED_SHERIFF"):
			return joaat("tumbleweed_sheriff_bounty_board");
	
		case joaat("GFH_BOUNTY_BOARD_BENEDICT_POINT_STATION"):
			return joaat("benedict_point_station_bounty_board");
	
		case joaat("GFH_BOUNTY_BOARD_RHODES_SHERIFF"):
			return joaat("rhodes_sheriff_bounty_board");
	
		case joaat("GFH_BOUNTY_BOARD_BLACKWATER_SHERIFF"):
			return joaat("blackwater_sheriff_bounty_board");
	
		case joaat("GFH_BOUNTY_BOARD_WALLACE_STATION"):
			return joaat("wallace_station_bounty_board");
	
		case joaat("GFH_BOUNTY_BOARD_SAINT_DENIS_SHERIFF"):
			return joaat("saint_denis_sheriff_bounty_board");
	
		case joaat("GFH_BOUNTY_BOARD_ARMADILLO_SHERIFF"):
			return joaat("armadillo_sheriff_bounty_board");
	
		default:
		
	}

	return 0;
}

void func_831(Player plParam0) // Position - 0x18979 Signature - 22 01 03 00 00 66 00 39 1A F8
{
	if (!func_910(plParam0))
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_21353.f_260), plParam0);

	return;
}

void func_832(Player plParam0) // Position - 0x1899B Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 77
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_911(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

int func_833(Player plParam0) // Position - 0x18A07 Signature - 22 01 03 00 00 66 00 03 05 00 51
{
	switch (PLAYER::GET_PLAYER_TEAM(plParam0))
	{
		case 0:
			return joaat("color_net_player3");
	
		case 1:
			return joaat("color_net_player4");
	
		case 2:
			return joaat("color_net_player5");
	
		case 3:
			return joaat("color_net_player6");
	
		case 4:
			return joaat("color_net_player7");
	
		case 5:
			return joaat("color_net_player8");
	
		case 6:
			return joaat("color_net_player9");
	
		case 7:
			return joaat("color_net_player10");
	
		case 8:
			return joaat("color_net_player11");
	
		default:
		
	}

	return joaat("color_net_player2");
}

int func_834(Player plParam0) // Position - 0x18A9E Signature - 22 01 03 00 00 66 00 03 05 00 B8
{
	if (GANG::NETWORK_GET_GANG_ID(plParam0) != Global_1295666.f_10 && !func_26())
		return joaat("color_posse_neutral");

	return joaat("color_posse_ally");
}

int func_835(Player plParam0, BOOL bParam1) // Position - 0x18ACD Signature - 22 02 08 00 00 66 00 66 01 39 6D
{
	int num;
	int num2;
	int num3;
	Player player;

	num = BUILTIN::FLOOR(func_912(plParam0, bParam1));

	if (bParam1)
	{
		player = plParam0;
	
		if (player < 0 || player >= 32)
			num3 = 0;
		else
			num3 = BUILTIN::FLOOR(Global_1101558[player /*38*/].f_18);
	
		if (num3 > num)
			num2 = num3;
		else
			num2 = num;
	}
	else
	{
		num2 = num;
	}

	if (num2 < Global_1901671.f_740.f_31)
		return 0;

	if (num2 < Global_1901671.f_740.f_32)
		return 1;

	if (num2 < Global_1901671.f_740.f_33)
		return 2;

	if (num2 < Global_1901671.f_740.f_34)
		return 3;

	if (num2 < Global_1901671.f_740.f_35)
		return 4;

	if (num2 < Global_1901671.f_740.f_36)
		return 5;

	return 6;
}

BOOL func_836(Player plParam0, BOOL bParam1) // Position - 0x18B9A Signature - 22 02 07 00 00 66 00 6D
{
	Player bitIndex;
	int playerTeam;
	int playerTeam2;

	if (plParam0 == 255)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (plParam0 == Global_1295666.f_5)
		return true;

	bitIndex = plParam0;

	if (!Global_1295666.f_17[bitIndex])
		return false;

	if (bParam1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), bitIndex) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28304), bitIndex))
			return false;
	
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28305), bitIndex))
			return true;
	}

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), bitIndex))
		return true;

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28301), bitIndex) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28303), bitIndex))
		return false;

	playerTeam = PLAYER::GET_PLAYER_TEAM(Global_1295666.f_5);
	playerTeam2 = PLAYER::GET_PLAYER_TEAM(plParam0);

	if (playerTeam != -1 && playerTeam2 != -1 && playerTeam == playerTeam2)
		return true;
	else if (GANG::_NETWORK_IS_IN_MY_GANG(plParam0))
		return true;

	return false;
}

BOOL func_837(Player plParam0, BOOL bParam1) // Position - 0x18C9C Signature - 22 02 05 00 00 66 00 67 04 66 00
{
	Player bitIndex;

	bitIndex = plParam0;

	if (plParam0 == PLAYER::PLAYER_ID())
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return true;

	if (bParam1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28305), bitIndex))
			return false;
	
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), bitIndex) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28304), bitIndex))
			return true;
	}

	if (func_913(plParam0))
		return true;

	return !func_836(plParam0, false);
}

BOOL func_838(Player plParam0, BOOL bParam1) // Position - 0x18D26 Signature - 22 02 05 00 00 66 00 03
{
	Player bitIndex;

	if (plParam0 == PLAYER::PLAYER_ID())
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	bitIndex = plParam0;

	if (bParam1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28305), bitIndex) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), bitIndex))
			return false;
	
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28304), bitIndex))
			return true;
	}

	if (func_892(plParam0))
		return false;

	if (func_913(plParam0))
		return false;

	if (func_914(plParam0))
		return true;

	return func_915(plParam0);
}

int func_839(int iParam0, int iParam1) // Position - 0x18DC8 Signature - 22 02 04 00 00 66 00 3C 04
{
	switch (iParam0)
	{
		case 0:
			return -504335712;
	
		case 1:
			return 395262693;
	
		case 2:
			return -933924539;
	
		case 3:
			return 371211549;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

const char* func_840(const char* sParam0, int iParam1) // Position - 0x18E1F Signature - 22 02 04 00 00 6D 2A
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

BOOL func_841(Any anParam0) // Position - 0x18E39 Signature - 22 01 03 00 00 66 00 76 2F 0B
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 || anParam0->f_1 == -889271554 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

void func_842(Hash hParam0) // Position - 0x18E7F Signature - 22 01 04 00 00 66 00 6D
{
	int feedMessage;

	feedMessage = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(95));

	if (func_916(feedMessage))
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(feedMessage, true);

	return;
}

Hash func_843(Hash hParam0, int iParam1) // Position - 0x18EA8 Signature - 22 02 07 00 00 66 00 2F
{
	int num;
	var unk;
	Hash hash;

	if (!func_596(hParam0, 0))
		return 0;

	num = func_762(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_917(hParam0, 1399091007))
	{
		func_918(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_844(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x18F22 Signature - 22 05 07 00 00 66 04
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_593(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_845(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x18F49 Signature - 22 04 06 00 00 66 02
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_846(Hash hParam0) // Position - 0x18F84 Signature - 22 01 03 00 00 66 00 03 05 00 8F
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_847(int iParam0) // Position - 0x18F9F Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 03
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_848(Hash hParam0) // Position - 0x18FC0 Signature - 22 01 0A 00 00 66 00 2F 39 CD 22 01 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 39 05 8B 04 00 2F 50 01 01 4B 03 27 01
{
	var unk;

	if (!func_596(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_1;
}

int func_849(Hash hParam0) // Position - 0x18FEB Signature - 22 01 03 00 00 66 00 3C 0F
{
	switch (hParam0)
	{
		case joaat("clothing_blend_eyeshadow_none"):
			return -875805376;
	
		case joaat("clothing_blend_foundation_none"):
			return -2056583192;
	
		case joaat("clothing_blend_complexion_none"):
			return -1180698265;
	
		case joaat("clothing_blend_complexion_2_none"):
			return -487028314;
	
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
	
		case joaat("clothing_blend_lipstick_none"):
			return -768760704;
	
		case joaat("clothing_blend_spots_none"):
			return 1301555144;
	
		case -643819742:
			return -559080197;
	
		case joaat("clothing_blend_freckles_none"):
			return 241235545;
	
		case -28107610:
			return -2118203104;
	
		case joaat("clothing_blend_moles_none"):
			return 1827902148;
	
		case joaat("clothing_blend_scar_none"):
			return 1858448324;
	
		case 1687431937:
			return -1811760631;
	
		case joaat("clothing_blend_blusher_none"):
			return 1015239729;
	
		case joaat("clothing_blend_eyeliner_none"):
			return -340627321;
	
		default:
		
	}

	return 0;
}

int func_850(var uParam0, int iParam1) // Position - 0x190CE Signature - 22 02 05 00 00 2F 67 04 66 04 6D
{
	int i;

	for (i = 0; i < 22; i = i + 1)
	{
		if (uParam0->[i /*17*/].f_1 == -1)
			break;
	
		if (uParam0->[i /*17*/].f_16 == iParam1)
			return i;
	}

	return -1;
}

int func_851(Hash hParam0) // Position - 0x1910B Signature - 22 01 04 00 00 66 00 39 C0
{
	int num;

	num = func_848(hParam0);

	switch (num)
	{
		case -636562458:
			return -875805376;
	
		case 252325943:
			return -768760704;
	
		case 829857647:
			return -340627321;
	
		case 1115104855:
			return -2118203104;
	
		case 1216664798:
			return 1015239729;
	
		case 1341188928:
			return -2056583192;
	
		default:
		
	}

	return 0;
}

int func_852(Hash hParam0, BOOL bParam1) // Position - 0x19178 Signature - 22 02 18
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_919(hParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };

	if (bParam1)
		func_921(&unk, func_920(false));

	if (!func_922(&unk, &num, &num2, false))
		return 0;

	func_847(num);
	return num2;
}

struct<4> func_853(Hash hParam0, BOOL bParam1) // Position - 0x191D7 Signature - 22 02 09 00 00 66 00 66 01 2F
{
	var unk;

	unk = { func_923(hParam0, bParam1, 0) };
	return func_595(hParam0, unk, unk.f_4, bParam1);
}

int func_854(int iParam0) // Position - 0x191FC Signature - 22 01 03 00 00 66 00 14
{
	return iParam0 * 31;
}

BOOL func_855(var uParam0, var uParam1) // Position - 0x19208 Signature - 22 02 04 00 00 66 01 27
{
	if (uParam1->f_2 == -1)
		return false;

	if (uParam0->f_2 == -1)
		return false;

	if (uParam1->f_2 != uParam0->f_2)
		return false;

	if (uParam1->f_5 == -1)
		return false;

	if (uParam0->f_5 == -1)
		return false;

	if (uParam1->f_5 != uParam0->f_5)
		return false;

	if (uParam1->f_8 != uParam0->f_8)
		return false;

	if (uParam1->f_8.f_1 != uParam0->f_8.f_1)
		return false;

	if (!func_251(uParam1->f_8.f_5, uParam0->f_8.f_5))
		return false;

	if (uParam1->f_8.f_5.f_4 != uParam0->f_8.f_5.f_4)
		return false;

	if (uParam1->f_8.f_5.f_2 != uParam0->f_8.f_5.f_2)
		return false;

	return true;
}

BOOL func_856(int iParam0, var uParam1) // Position - 0x192CB Signature - 22 02 06 00 00 66 00 39 39
{
	int num;

	num = { func_924(iParam0) };

	if (!func_36(num))
		return false;

	func_808(num, iParam0, uParam1);
	return true;
}

void func_857(Any* panParam0, int iParam1) // Position - 0x192F9 Signature - 22 02 04 00 00 09 66 00 6C 06 6D 0A 66 00 32 42 66 00 6C 01 0D
{
	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 4;
	panParam0->f_2 = 7;
	func_925(panParam0, iParam1);

	switch (iParam1)
	{
		case 0:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_ROANOKE_RIDGE_1");
			panParam0->f_11 = { 2150.3738f, 1728.2147f, 125.2313f };
			break;
	
		case 1:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_ROANOKE_RIDGE_2");
			panParam0->f_11 = { 2179.106f, -25.3714f, 51.3658f };
			break;
	
		case 2:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_1");
			panParam0->f_11 = { -1055.963f, -794.308f, 59.2567f };
			break;
	
		case 3:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_2");
			panParam0->f_11 = { -1158.078f, -155.114f, 88.889f };
			break;
	
		case 4:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_3");
			panParam0->f_11 = { -1370.7115f, -515.7384f, 125.267f };
			break;
	
		case 5:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_4");
			panParam0->f_11 = { -1029.465f, -492.4087f, 101.0615f };
			break;
	
		case 6:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_HEARTLANDS_1");
			panParam0->f_11 = { -319.5499f, 203.8464f, 62.1121f };
			break;
	
		case 7:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_HEARTLANDS_2");
			panParam0->f_11 = { -513.8f, 345.2f, 49.8945f };
			break;
	
		case 8:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_GREAT_PLAINS_1");
			panParam0->f_11 = { -1234.665f, -1371.778f, 80.796f };
			break;
	
		case 9:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_GRIZZLIES_WEST_1");
			panParam0->f_11 = { -1525.164f, 1722.86f, 239.152f };
			break;
	}

	return;
}

void func_858(Any* panParam0, int iParam1) // Position - 0x194AB Signature - 22 02 04 00 00 09 66 00 6C 06 6D 14 66 00 32 11
{
	panParam0->f_6 = 1;
	*panParam0 = 20;
	panParam0->f_1 = 2;
	panParam0->f_2 = 1;
	func_926(panParam0);

	switch (iParam1)
	{
		case 0:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_MACFARLANES");
			panParam0->f_11 = { -1925.3425f, -2119.336f, 52.16934f };
			break;
	
		case 1:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HEARTLANDS_1");
			panParam0->f_11 = { 136.29797f, 35.34337f, 101.27948f };
			break;
	
		case 2:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_1");
			panParam0->f_11 = { -910.7408f, 860.84534f, 134.66505f };
			break;
	
		case 3:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_ROANOKE_1");
			panParam0->f_11 = { 2788.7786f, 1077.2836f, 57.99089f };
			break;
	
		case 4:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BAYOU_1");
			panParam0->f_11 = { 1751.9142f, -1117.7389f, 40.70011f };
			break;
	
		case 5:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_SCARLETT_1");
			panParam0->f_11 = { 1290.4315f, -836.7289f, 77.47561f };
			break;
	
		case 6:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CUMBERLAND_1");
			panParam0->f_11 = { 308.11407f, 1187.8075f, 180.17459f };
			break;
	
		case 7:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_STRAWBERRY_1");
			panParam0->f_11 = { -1779.5381f, -235.38936f, 181.20294f };
			break;
	
		case 8:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_PLAINS_1");
			panParam0->f_11 = { -1290.3986f, -1179.1986f, 72.33453f };
			break;
	
		case 9:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_TALL_TREES_1");
			panParam0->f_11 = { -2306.8904f, -1546.2078f, 152.01866f };
			break;
	
		case 10:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HENNIGANS_1");
			panParam0->f_11 = { -2724.458f, -2521.5242f, 64.76124f };
			break;
	
		case 11:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_RIO_1");
			panParam0->f_11 = { -4461.8833f, -3271.474f, 14.54459f };
			break;
	
		case 12:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CHOLLA_1");
			panParam0->f_11 = { -4631.0537f, -2738.483f, -12.13559f };
			break;
	
		case 13:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GAPTOOTH_1");
			panParam0->f_11 = { -5678.259f, -3182.9395f, -22.66476f };
			break;
	
		case 14:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_THIEVES_1");
			panParam0->f_11 = { -1688.8683f, -2272.0908f, 44.12061f };
			break;
	
		case 15:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_2");
			panParam0->f_11 = { -1621.917f, 1628.2081f, 235.96451f };
			break;
	
		case 16:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_3");
			panParam0->f_11 = { 420.36334f, 2020.9095f, 230.44226f };
			break;
	
		case 17:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_VALENTINE_1");
			panParam0->f_11 = { -517.4607f, 510.53485f, 102.23069f };
			break;
	
		case 18:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_EMERALD_1");
			panParam0->f_11 = { 1775.6008f, 546.3866f, 106.63338f };
			break;
	
		case 19:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BOLGER_1");
			panParam0->f_11 = { 1612.415f, -1715.3972f, 52.91364f };
			break;
	}

	return;
}

void func_859(Any* panParam0, int iParam1) // Position - 0x19858 Signature - 22 02 04 00 00 09 66 00 6C 06 6D 15 66 00 32 6D
{
	panParam0->f_6 = 1;
	*panParam0 = 21;
	panParam0->f_1 = 8;
	panParam0->f_2 = 1;
	func_926(panParam0);

	switch (iParam1)
	{
		case 0:
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			func_928(panParam0, 5);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_1");
			panParam0->f_11 = { 2252.0354f, 1342.7057f, 84.5573f };
			break;
	
		case 1:
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			func_928(panParam0, 5);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_2");
			panParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
			break;
	
		case 2:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			func_928(panParam0, 5);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_3");
			panParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
			break;
	
		case 3:
			func_928(panParam0, 0);
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			func_928(panParam0, 4);
			func_928(panParam0, 5);
			func_928(panParam0, 7);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_1");
			panParam0->f_11 = { 1130.5413f, 575.7938f, 86.66257f };
			break;
	
		case 4:
			func_928(panParam0, 0);
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			func_928(panParam0, 5);
			func_928(panParam0, 7);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_2");
			panParam0->f_11 = { -754.38934f, -399.11334f, 40.84306f };
			break;
	
		case 5:
			func_928(panParam0, 0);
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			func_928(panParam0, 5);
			func_928(panParam0, 7);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_3");
			panParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
			break;
	
		case 6:
			func_928(panParam0, 0);
			func_928(panParam0, 2);
			func_928(panParam0, 4);
			func_928(panParam0, 5);
			func_928(panParam0, 6);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_1");
			panParam0->f_11 = { -2085.7773f, -161.9067f, 208.0633f };
			break;
	
		case 7:
			func_928(panParam0, 0);
			func_928(panParam0, 2);
			func_928(panParam0, 4);
			func_928(panParam0, 5);
			func_928(panParam0, 6);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_2");
			panParam0->f_11 = { -1678.3037f, -517.8369f, 140.867f };
			break;
	
		case 8:
			func_928(panParam0, 0);
			func_928(panParam0, 2);
			func_928(panParam0, 4);
			func_928(panParam0, 5);
			func_928(panParam0, 6);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_3");
			panParam0->f_11 = { -2624.8809f, -339.7662f, 141.8102f };
			break;
	
		case 9:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_1");
			panParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
			break;
	
		case 10:
			func_928(panParam0, 0);
			func_928(panParam0, 2);
			func_928(panParam0, 5);
			func_928(panParam0, 7);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_2");
			panParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
			break;
	
		case 11:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_3");
			panParam0->f_11 = { -1069.1802f, -1919.6165f, 42.3447f };
			break;
	
		case 12:
			func_928(panParam0, 0);
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			func_928(panParam0, 4);
			func_928(panParam0, 5);
			func_928(panParam0, 6);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_1");
			panParam0->f_11 = { 1673.6715f, 1440.0455f, 146.0849f };
			break;
	
		case 13:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_2");
			panParam0->f_11 = { 1562.4343f, 1445.2374f, 145.2842f };
			break;
	
		case 14:
			func_928(panParam0, 3);
			func_928(panParam0, 4);
			func_928(panParam0, 5);
			func_928(panParam0, 6);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_3");
			panParam0->f_11 = { 1244.9269f, 1177.2512f, 148.8856f };
			break;
	
		case 15:
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			func_928(panParam0, 5);
			func_928(panParam0, 7);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_1");
			panParam0->f_11 = { 1926.7029f, -362.3477f, 42.4864f };
			break;
	
		case 16:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			func_928(panParam0, 3);
			func_928(panParam0, 5);
			func_928(panParam0, 7);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_2");
			panParam0->f_11 = { 2192.4888f, -318.3198f, 40.7232f };
			break;
	
		case 17:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			func_928(panParam0, 3);
			func_928(panParam0, 5);
			func_928(panParam0, 7);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_3");
			panParam0->f_11 = { 2408.447f, -490.45618f, 40.9243f };
			break;
	
		case 18:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			func_928(panParam0, 5);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_1");
			panParam0->f_11 = { -3243.502f, -3187.1414f, -9.3137f };
			break;
	
		case 19:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_2");
			panParam0->f_11 = { -1745.0105f, -2929.1406f, -12.3355f };
			break;
	
		case 20:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			func_928(panParam0, 5);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_3");
			panParam0->f_11 = { -1735.0702f, -2378.3552f, 41.289f };
			break;
	}

	return;
}

void func_860(Any* panParam0, int iParam1) // Position - 0x19E1E Signature - 22 02 04 00 00 09 66 00 6C 06 6D 0B 66 00 32 09 66 00 6C 01 11
{
	panParam0->f_6 = 1;
	*panParam0 = 11;
	panParam0->f_1 = 1;
	panParam0->f_2 = 2;
	func_926(panParam0);
	panParam0->f_15[0] = joaat("22_TO_4");

	switch (iParam1)
	{
		case 0:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_VALENTINE_1");
			panParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
			break;
	
		case 1:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_RHODES_1");
			panParam0->f_11 = { 1274.5785f, -1218.2861f, 80.6496f };
			break;
	
		case 2:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_BLACKWATER_1");
			panParam0->f_11 = { -954.4733f, -1203.2461f, 54.5241f };
			break;
	
		case 3:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_TUMBLEWEED_1");
			panParam0->f_11 = { -5442.5366f, -2904.5088f, -0.0668f };
			break;
	
		case 4:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_ODDFELLOWS_REST_1");
			panParam0->f_11 = { -4438.9077f, -2693.0728f, -12.033f };
			break;
	
		case 5:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_COOTS_CHAPEL_1");
			panParam0->f_11 = { -3339.6006f, -2869.2827f, -6.9507f };
			break;
	
		case 6:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_RINGNECK_CREEK_1");
			panParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
			break;
	
		case 7:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_PLEASANCE_1");
			panParam0->f_11 = { 1735.8651f, -422.7769f, 47.1349f };
			break;
	
		case 8:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_SHADY_BELLE_1");
			panParam0->f_11 = { 1978.5011f, -1902.6475f, 41.0487f };
			break;
	
		case 9:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_SAINT_DENIS_1");
			panParam0->f_11 = { 2757.9985f, -1078.6664f, 45.8905f };
			break;
	
		case 10:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_OLD_TOMS_BLIND_1");
			panParam0->f_11 = { -1762.1147f, -237.9833f, 181.9701f };
			break;
	}

	return;
}

void func_861(Any* panParam0, int iParam1) // Position - 0x1A043 Signature - 22 02 04 00 00 09 66 00 6C 06 6D 0F
{
	panParam0->f_6 = 1;
	*panParam0 = 15;
	panParam0->f_1 = 3;
	panParam0->f_2 = 1;
	func_926(panParam0);

	switch (iParam1)
	{
		case 0:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_VAN_HORN_1");
			panParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
			break;
	
		case 1:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_BOLGER_1");
			panParam0->f_11 = { 1428.8171f, -1812.9952f, 57.37384f };
			break;
	
		case 2:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_BAYOU_1");
			panParam0->f_11 = { 2578.8933f, -852.3694f, 41.3078f };
			break;
	
		case 3:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_ANNESBURG_1");
			panParam0->f_11 = { 2798.119f, 1432.1865f, 77.71185f };
			break;
	
		case 4:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_EMERALD_1");
			panParam0->f_11 = { 1243.4546f, 526.5765f, 87.43867f };
			break;
	
		case 5:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_CUMBERLAND_1");
			panParam0->f_11 = { -28.69774f, 1111.2297f, 167.99446f };
			break;
	
		case 6:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_FLATNECK_1");
			panParam0->f_11 = { -546.60913f, -298.20566f, 52.56811f };
			break;
	
		case 7:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_WALLACE_1");
			panParam0->f_11 = { -1403.6885f, 383.75064f, 102.2472f };
			break;
	
		case 8:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_STRAWBERRY_1");
			panParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
			break;
	
		case 9:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_QUAKER_1");
			panParam0->f_11 = { -1459.7523f, -1915.6023f, 50.93545f };
			break;
	
		case 10:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_MACFARLENE_1");
			panParam0->f_11 = { -2470.0183f, -2426.993f, 59.1458f };
			break;
	
		case 11:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_DON_JULIO_1");
			panParam0->f_11 = { -3092.9353f, -3166.527f, -1.36638f };
			break;
	
		case 12:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_ARMADILLO_1");
			panParam0->f_11 = { -3685.6243f, -2769.2468f, -15.14988f };
			break;
	
		case 13:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_PLAINVIEW_1");
			panParam0->f_11 = { -4668.993f, -3706.8193f, 12.54352f };
			break;
	
		case 14:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_TUMBLEWEED_1");
			panParam0->f_11 = { -5194.4834f, -2883.913f, 2.32447f };
			break;
	}

	return;
}

void func_862(Any* panParam0, int iParam1) // Position - 0x1A310 Signature - 22 02 04 00 00 09 66 00 6C 06 6D 10
{
	panParam0->f_6 = 1;
	*panParam0 = 16;
	panParam0->f_1 = 2;
	panParam0->f_2 = 8;
	func_929(panParam0, iParam1);

	switch (iParam1)
	{
		case 0:
			func_928(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_1");
			panParam0->f_11 = { 498.92355f, 1191.2755f, 179.50165f };
			break;
	
		case 1:
			func_928(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_2");
			panParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
			break;
	
		case 2:
			func_928(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_1");
			panParam0->f_11 = { 2271.7534f, -440.52768f, 40.82026f };
			break;
	
		case 3:
			func_928(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_2");
			panParam0->f_11 = { 2000.5798f, -499.0656f, 41.0245f };
			break;
	
		case 4:
			func_928(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_1");
			panParam0->f_11 = { 2299.8096f, -898.4015f, 41.04434f };
			break;
	
		case 5:
			func_928(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_2");
			panParam0->f_11 = { 2369.2922f, -673.8396f, 41.36789f };
			break;
	
		case 6:
			func_928(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_1");
			panParam0->f_11 = { 1531.3302f, 1578.8372f, 147.40665f };
			break;
	
		case 7:
			func_928(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_2");
			panParam0->f_11 = { 945.3031f, 1142.5409f, 147.4809f };
			break;
	
		case 8:
			func_928(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_1");
			panParam0->f_11 = { -1126.4692f, 815.38293f, 117.65359f };
			break;
	
		case 9:
			func_928(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_2");
			panParam0->f_11 = { -2063.8135f, 935.3212f, 147.08078f };
			break;
	
		case 10:
			func_928(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_1");
			panParam0->f_11 = { -1589.6876f, -1425.3187f, 80.34965f };
			break;
	
		case 11:
			func_928(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_2");
			panParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
			break;
	
		case 12:
			func_928(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_1");
			panParam0->f_11 = { -2690.1038f, -2892.6267f, 64.73759f };
			break;
	
		case 13:
			func_928(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_2");
			panParam0->f_11 = { -2914.5295f, -2558.9668f, 61.66708f };
			break;
	
		case 14:
			func_928(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_1");
			panParam0->f_11 = { -4545.762f, -3673.9324f, 17.87756f };
			break;
	
		case 15:
			func_928(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_2");
			panParam0->f_11 = { -4720.841f, -3356.9995f, 8.61745f };
			break;
	}

	return;
}

void func_863(Any* panParam0, int iParam1, int iParam2) // Position - 0x1A61D Signature - 22 03 05 00 00 09 66 00 6C 06 6D 0A 66 00 32 6D
{
	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 12;
	panParam0->f_2 = 3;

	switch (iParam1)
	{
		case 0:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			func_928(panParam0, 2);
			func_928(panParam0, 9);
			func_928(panParam0, 10);
			func_928(panParam0, 11);
			func_930(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_CLIFF_1");
			panParam0->f_11 = { 468.69318f, 60.0849f, 134.48164f };
			break;
	
		case 1:
			func_928(panParam0, 1);
			func_928(panParam0, 2);
			func_928(panParam0, 8);
			func_928(panParam0, 9);
			func_928(panParam0, 10);
			func_928(panParam0, 11);
			func_930(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_RIVER_1");
			panParam0->f_11 = { -408.7124f, 154.07425f, 40.84526f };
			break;
	
		case 2:
			func_928(panParam0, 1);
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			func_928(panParam0, 4);
			func_928(panParam0, 5);
			func_928(panParam0, 6);
			func_928(panParam0, 9);
			func_928(panParam0, 10);
			func_928(panParam0, 11);
			func_930(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_1");
			panParam0->f_11 = { -1929.6549f, -1348.3383f, 105.84004f };
			break;
	
		case 3:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			func_928(panParam0, 2);
			func_928(panParam0, 9);
			func_928(panParam0, 10);
			func_928(panParam0, 11);
			func_930(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_2");
			panParam0->f_11 = { -2003.943f, -2158.1348f, 54.2301f };
			break;
	
		case 4:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			func_928(panParam0, 2);
			func_928(panParam0, 9);
			func_928(panParam0, 10);
			func_928(panParam0, 11);
			func_930(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_1");
			panParam0->f_11 = { -1272.2256f, 97.47642f, 70.53004f };
			break;
	
		case 5:
			func_928(panParam0, 1);
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			func_928(panParam0, 4);
			func_928(panParam0, 7);
			func_928(panParam0, 8);
			func_928(panParam0, 9);
			func_928(panParam0, 10);
			func_928(panParam0, 11);
			func_930(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_2");
			panParam0->f_11 = { -2350.8613f, -359.48505f, 143.74742f };
			break;
	
		case 6:
			func_928(panParam0, 1);
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			func_928(panParam0, 6);
			func_928(panParam0, 7);
			func_928(panParam0, 9);
			func_928(panParam0, 10);
			func_928(panParam0, 11);
			func_930(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_3");
			panParam0->f_11 = { -1736.7568f, 306.27814f, 108.13549f };
			break;
	
		case 7:
			func_928(panParam0, 1);
			func_928(panParam0, 2);
			func_928(panParam0, 4);
			func_928(panParam0, 5);
			func_928(panParam0, 6);
			func_928(panParam0, 9);
			func_928(panParam0, 10);
			func_928(panParam0, 11);
			func_930(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_RIO_BRAVO_1");
			panParam0->f_11 = { -4964.499f, -3399.8892f, 7.97322f };
			break;
	
		case 8:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			func_928(panParam0, 2);
			func_928(panParam0, 9);
			func_928(panParam0, 10);
			func_928(panParam0, 11);
			func_930(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HENNIGANS_STEAD_1");
			panParam0->f_11 = { -2192.8054f, -2778.9773f, 69.01174f };
			break;
	
		case 9:
			func_928(panParam0, 1);
			func_928(panParam0, 2);
			func_928(panParam0, 5);
			func_928(panParam0, 9);
			func_928(panParam0, 10);
			func_928(panParam0, 11);
			func_930(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_CHOLLA_SPRINGS_1");
			panParam0->f_11 = { -4603.1655f, -2701.4338f, -10.12116f };
			break;
	}

	return;
}

void func_864(Any* panParam0, int iParam1) // Position - 0x1AA22 Signature - 22 02 04 00 00 09 66 00 6C 06 6D 15 66 00 32 09
{
	panParam0->f_6 = 1;
	*panParam0 = 21;
	panParam0->f_1 = 1;
	panParam0->f_2 = 1;
	func_926(panParam0);

	switch (iParam1)
	{
		case 0:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BOLGER_GLADE_1");
			panParam0->f_11 = { 1452.2505f, -1695.1158f, 64.9668f };
			break;
	
		case 1:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ERIS_FIELD_1");
			panParam0->f_11 = { 1163.5503f, -324.00864f, 97.10712f };
			break;
	
		case 2:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ROANOKE_RIDGE_1");
			panParam0->f_11 = { 2682.1038f, 858.447f, 85.90118f };
			break;
	
		case 3:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MOONSTONE_POND_1");
			panParam0->f_11 = { 1311.3326f, 1183.9337f, 151.58594f };
			break;
	
		case 4:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_COTORRA_SPRINGS_1");
			panParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
			break;
	
		case 5:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_CUMBERLAND_1");
			panParam0->f_11 = { 109.94106f, 1282.2561f, 176.292f };
			break;
	
		case 6:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BEARTOOTH_1");
			panParam0->f_11 = { -1450.8594f, 1686.2659f, 255.2526f };
			break;
	
		case 7:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FLATNECK_1");
			panParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
			break;
	
		case 8:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_LITTLE_CREEK_1");
			panParam0->f_11 = { -1698.0358f, 380.6171f, 106.08258f };
			break;
	
		case 9:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_UPPER_MONTANA_1");
			panParam0->f_11 = { -2016.359f, -909.59174f, 84.91344f };
			break;
	
		case 10:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BLACKWATER_1");
			panParam0->f_11 = { -1362.0912f, -1267.6244f, 82.41972f };
			break;
	
		case 11:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_AURORA_BASIN_1");
			panParam0->f_11 = { -2449.0513f, -1457.9423f, 148.70496f };
			break;
	
		case 12:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GREAT_PLAINS_1");
			panParam0->f_11 = { -1559.3394f, -1930.7284f, 50.99157f };
			break;
	
		case 13:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MANTECA_FALLS_1");
			panParam0->f_11 = { -1764.4445f, -2717.768f, 62.81413f };
			break;
	
		case 14:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MACFARLANES_RANCH_1");
			panParam0->f_11 = { -2190.5444f, -2200.2883f, 64.42333f };
			break;
	
		case 15:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_SAN_LUIS_1");
			panParam0->f_11 = { -2803.2598f, -3142.291f, 5.88098f };
			break;
	
		case 16:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_HENNIGANS_STEAD_1");
			panParam0->f_11 = { -3175.1685f, -2402.267f, 22.72451f };
			break;
	
		case 17:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_JORGES_GAP_1");
			panParam0->f_11 = { -4220.6113f, -2690.138f, 0.65931f };
			break;
	
		case 18:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FORT_MERCER_1");
			panParam0->f_11 = { -4372.619f, -3274.0547f, 20.26154f };
			break;
	
		case 19:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BENEDICT_POINT_1");
			panParam0->f_11 = { -5456.922f, -3562.7441f, -21.1142f };
			break;
	
		case 20:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GAPTOOTH_RIDGE_1");
			panParam0->f_11 = { -5796.2217f, -2650.1453f, -16.68393f };
			break;
	}

	return;
}

void func_865(Any* panParam0, int iParam1) // Position - 0x1ADFD Signature - 22 02 04 00 00 09 66 00 6C 06 6D 0A 66 00 32 42 66 00 6C 01 09
{
	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 4;
	panParam0->f_2 = 1;
	func_926(panParam0);
	func_931(panParam0, 2);

	switch (iParam1)
	{
		case 0:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_EMERALD_RANCH_1");
			panParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
			break;
	
		case 1:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_LEMOYNE_1");
			panParam0->f_11 = { 1465.5144f, -821.0334f, 50.2372f };
			break;
	
		case 2:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIGGS_STATION_1");
			panParam0->f_11 = { -1082.3317f, -696.7548f, 70.5432f };
			break;
	
		case 3:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BLACKWATER_1");
			panParam0->f_11 = { -1462.9519f, -1929.859f, 48.4187f };
			break;
	
		case 4:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIO_BRAVO_1");
			panParam0->f_11 = { -4988.295f, -3902.3462f, -0.03286f };
			break;
	
		case 5:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_HENNIGANS_1");
			panParam0->f_11 = { -2770.4727f, -2936.5059f, 64.84297f };
			break;
	
		case 6:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_GREAT_PLAINS_1");
			panParam0->f_11 = { -1209.6105f, -1812.1654f, 61.23543f };
			break;
	
		case 7:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_STRAWBERRY_1");
			panParam0->f_11 = { -1706.9928f, -580.9286f, 149.92998f };
			break;
	
		case 8:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_SCARLETT_1");
			panParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
			break;
	
		case 9:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BOLGER_1");
			panParam0->f_11 = { 1778.2363f, -1731.3589f, 48.27552f };
			break;
	}

	return;
}

void func_866(Any* panParam0, int iParam1, int iParam2) // Position - 0x1AFF0 Signature - 22 03 05 00 00 09 66 00 6C 06 6D 0C
{
	panParam0->f_6 = 1;
	*panParam0 = 12;
	panParam0->f_1 = 4;
	panParam0->f_2 = 5;

	switch (iParam1)
	{
		case 0:
			func_932(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_0");
			panParam0->f_11 = { -1159.1152f, 397.0877f, 60.4953f };
			break;
	
		case 1:
			func_932(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_1");
			panParam0->f_11 = { -1278.3585f, 291.4224f, 76.6652f };
			break;
	
		case 2:
			func_932(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_2");
			panParam0->f_11 = { -1371.2797f, 283.4114f, 86.0114f };
			break;
	
		case 3:
			func_932(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_3");
			panParam0->f_11 = { -1117.6871f, 406.6783f, 55.3681f };
			break;
	
		case 4:
			func_932(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_4");
			panParam0->f_11 = { -1288.3231f, 148.5012f, 71.7864f };
			break;
	
		case 5:
			func_932(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_5");
			panParam0->f_11 = { -1648.4469f, -114.858f, 170.0504f };
			break;
	
		case 6:
			func_932(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_6");
			panParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
			break;
	
		case 7:
			func_932(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_0");
			panParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
			break;
	
		case 8:
			func_932(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_1");
			panParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
			break;
	
		case 9:
			func_932(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_2");
			panParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
			break;
	
		case 10:
			func_932(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_3");
			panParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
			break;
	
		case 11:
			func_932(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_4");
			panParam0->f_11 = { 817.72473f, 566.34467f, 114.37611f };
			break;
	}

	return;
}

void func_867(Any* panParam0, int iParam1) // Position - 0x1B248 Signature - 22 02 04 00 00 09 66 00 6C 06 6D 14 66 00 32 09
{
	panParam0->f_6 = 1;
	*panParam0 = 20;
	panParam0->f_1 = 1;
	panParam0->f_2 = 1;
	func_926(panParam0);

	switch (iParam1)
	{
		case 0:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_MACFARLANES_1");
			panParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
			break;
	
		case 1:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_THEIVES_LANDING_1");
			panParam0->f_11 = { -1541.353f, -2334.6106f, 43.10187f };
			break;
	
		case 2:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_HANGING_ROCK_1");
			panParam0->f_11 = { -3456.3904f, -2262.3394f, 0.01624f };
			break;
	
		case 3:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_DEL_LOBO_1");
			panParam0->f_11 = { -3703.7117f, -3594.2244f, 45.18983f };
			break;
	
		case 4:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_BEECHERS_1");
			panParam0->f_11 = { -1581.5511f, -1656.278f, 78.51012f };
			break;
	
		case 5:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_BLACKWATER_1");
			panParam0->f_11 = { -1236.2917f, -1118.5502f, 68.58572f };
			break;
	
		case 6:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_MONTANA_RIVER_1");
			panParam0->f_11 = { -1264.1251f, -773.21173f, 91.83559f };
			break;
	
		case 7:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_MONTOS_REST_1");
			panParam0->f_11 = { -1414.6073f, -234.21231f, 99.22668f };
			break;
	
		case 8:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_WATSONS_1");
			panParam0->f_11 = { -1721.4021f, 553.60004f, 112.52401f };
			break;
	
		case 9:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_DAKOTA_RIVER_1");
			panParam0->f_11 = { -484.79907f, -70.36918f, 42.94242f };
			break;
	
		case 10:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_FLATNECK_1");
			panParam0->f_11 = { -458.58392f, -346.5686f, 80.66556f };
			break;
	
		case 11:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_1");
			panParam0->f_11 = { 1089.5831f, 23.75282f, 88.22131f };
			break;
	
		case 12:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_2");
			panParam0->f_11 = { 1000.1311f, 417.59085f, 107.90821f };
			break;
	
		case 13:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_DREAMCATCHER_TREE_1");
			panParam0->f_11 = { 713.73315f, 23.52884f, 152.07973f };
			break;
	
		case 14:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_CUMBERLAND_1");
			panParam0->f_11 = { 63.77304f, 1023.48724f, 201.97491f };
			break;
	
		case 15:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_FORT_WALLACE_1");
			panParam0->f_11 = { 366.667f, 1408.6646f, 175.0605f };
			break;
	
		case 16:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_OCREAGHS_RUN_1");
			panParam0->f_11 = { 1785.9344f, 1522.0093f, 155.1442f };
			break;
	
		case 17:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_MOONSTONE_POND_1");
			panParam0->f_11 = { 1279.0696f, 1164.6782f, 149.25081f };
			break;
	
		case 18:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_KAMASA_RIVER_1");
			panParam0->f_11 = { 2106.4556f, 207.61694f, 72.68985f };
			break;
	
		case 19:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_VAN_HORN_1");
			panParam0->f_11 = { 2675.5486f, 179.96567f, 54.14579f };
			break;
	}

	return;
}

void func_868(Any* panParam0, int iParam1) // Position - 0x1B5F6 Signature - 22 02 04 00 00 09 66 00 6C 06 6D 09
{
	panParam0->f_6 = 1;
	*panParam0 = 9;
	panParam0->f_1 = 2;
	panParam0->f_2 = 1;
	func_926(panParam0);
	panParam0->f_10 = 60f;

	switch (iParam1)
	{
		case 0:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_1");
			panParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
			break;
	
		case 1:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_2");
			panParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
			break;
	
		case 2:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_3");
			panParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
			break;
	
		case 3:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_4");
			panParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
			break;
	
		case 4:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_5");
			panParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
			break;
	
		case 5:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_6");
			panParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
			break;
	
		case 6:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_7");
			panParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
			break;
	
		case 7:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_8");
			panParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
			break;
	
		case 8:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_9");
			panParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
			break;
	}

	return;
}

void func_869(Any* panParam0, int iParam1, Player plParam2) // Position - 0x1B7BE Signature - 22 03 05 00 00 09 66 00 6C 06 09
{
	panParam0->f_6 = 1;
	*panParam0 = 1;
	panParam0->f_1 = 6;
	panParam0->f_2 = 1;
	func_926(panParam0);
	func_931(panParam0, 1);
	func_931(panParam0, 4);
	func_931(panParam0, 8);
	func_931(panParam0, 16);

	switch (iParam1)
	{
		case 0:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_WILD_MAN_PLAYER_CAMP_1");
			panParam0->f_11 = { func_592(func_399(plParam2)) };
			break;
	}

	return;
}

void func_870(Any* panParam0, int iParam1, int iParam2) // Position - 0x1B82D Signature - 22 03 05 00 00 09 66 00 6C 06 6D 0A 66 00 32 62
{
	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 5;
	panParam0->f_2 = 6;

	switch (iParam1)
	{
		case 0:
			func_933(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_1");
			panParam0->f_11 = { -347.45312f, 740.86426f, 116.4549f };
			break;
	
		case 1:
			func_933(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_2");
			panParam0->f_11 = { -360.64975f, 824.0327f, 115.47684f };
			break;
	
		case 2:
			func_933(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_1");
			panParam0->f_11 = { 2957.2253f, 524.47064f, 43.66619f };
			break;
	
		case 3:
			func_933(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_2");
			panParam0->f_11 = { 2975.8853f, 537.22455f, 42.42131f };
			break;
	
		case 4:
			func_933(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_RHODES_1");
			panParam0->f_11 = { 1444.6334f, -1417.9818f, 78.22246f };
			break;
	
		case 5:
			func_933(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_RHODES_2");
			panParam0->f_11 = { 1394.1692f, -1422.8539f, 78.97552f };
			break;
	
		case 6:
			func_933(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_1");
			panParam0->f_11 = { 2996.1448f, 1351.8083f, 42.95977f };
			break;
	
		case 7:
			func_933(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_2");
			panParam0->f_11 = { 2915.7434f, 1231.9519f, 43.5792f };
			break;
	
		case 8:
			func_933(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_1");
			panParam0->f_11 = { -833.56085f, -1543.9165f, 59.6274f };
			break;
	
		case 9:
			func_933(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_2");
			panParam0->f_11 = { -1019.64f, -1138.9438f, 56.39161f };
			break;
	}

	return;
}

void func_871(Any* panParam0, int iParam1) // Position - 0x1BA27 Signature - 22 02 04 00 00 09 66 00 6C 06 09
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 1;
	*panParam0 = 12;
	panParam0->f_1 = 3;
	panParam0->f_2 = 1;
	func_926(panParam0);

	switch (iParam1)
	{
		case 0:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_1");
			panParam0->f_11 = { 2208.6682f, -350.9536f, 41.488f };
			break;
	
		case 1:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_2");
			panParam0->f_11 = { 1733.9232f, -727.6727f, 40.8996f };
			break;
	
		case 2:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BIG_VALLEY_1");
			panParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
			break;
	
		case 3:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_1");
			panParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
			break;
	
		case 4:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_2");
			panParam0->f_11 = { 646.006f, 1304.9276f, 193.4366f };
			break;
	
		case 5:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_1");
			panParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
			break;
	
		case 6:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_2");
			panParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
			break;
	
		case 7:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_3");
			panParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
			break;
	
		case 8:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_1");
			panParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
			break;
	
		case 9:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_2");
			panParam0->f_11 = { 2566.8933f, -71.0977f, 49.3333f };
			break;
	
		case 10:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_1");
			panParam0->f_11 = { 1389.072f, -2196.6956f, 48.3307f };
			break;
	
		case 11:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_2");
			panParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
			break;
	}

	return;
}

void func_872(Any* panParam0, int iParam1, int iParam2) // Position - 0x1BC72 Signature - 22 03 05 00 00 09 66 00 6C 06 6D 0F
{
	panParam0->f_6 = 1;
	*panParam0 = 15;
	panParam0->f_1 = 2;
	panParam0->f_2 = 4;
	func_934(panParam0, iParam2);

	switch (iParam1)
	{
		case 0:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_0");
			panParam0->f_11 = { 2815.91f, -1222.949f, 46.526f };
			break;
	
		case 1:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_1");
			panParam0->f_11 = { 2602.444f, -1286.5703f, 51.2567f };
			break;
	
		case 2:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_2");
			panParam0->f_11 = { 2661.251f, -1202.6f, 52.2783f };
			break;
	
		case 3:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_3");
			panParam0->f_11 = { 2750.527f, -1206.293f, 48.3767f };
			break;
	
		case 4:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_4");
			panParam0->f_11 = { 2530.8828f, -1149.3745f, 49.0052f };
			break;
	
		case 5:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_5");
			panParam0->f_11 = { 2714.385f, -1233.121f, 49.172f };
			break;
	
		case 6:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_6");
			panParam0->f_11 = { 2639.789f, -1417.126f, 45.376f };
			break;
	
		case 7:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_7");
			panParam0->f_11 = { 2703.266f, -1184.961f, 50.865f };
			break;
	
		case 8:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_8");
			panParam0->f_11 = { 2781.518f, -1278.669f, 46.429f };
			break;
	
		case 9:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_9");
			panParam0->f_11 = { 2593.1646f, -1207.4845f, 52.3112f };
			break;
	
		case 10:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_10");
			panParam0->f_11 = { 2670.08f, -1113.233f, 49.552f };
			break;
	
		case 11:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_11");
			panParam0->f_11 = { 2482.088f, -1465.71f, 45.1902f };
			break;
	
		case 12:
			panParam0->f_5 = joaat("BEAT_BEGGAR_BLACKWATER_0");
			panParam0->f_11 = { -791.817f, -1311.097f, 42.623f };
			break;
	
		case 13:
			panParam0->f_5 = joaat("BEAT_BEGGAR_BLACKWATER_1");
			panParam0->f_11 = { -778.963f, -1260.098f, 42.643f };
			break;
	
		case 14:
			panParam0->f_5 = joaat("BEAT_BEGGAR_BLACKWATER_2");
			panParam0->f_11 = { -843.7784f, -1282.6638f, 42.3634f };
			break;
	}

	return;
}

void func_873(Any* panParam0, int iParam1) // Position - 0x1BEE7 Signature - 22 02 04 00 00 09 66 00 6C 06 11 66 00 6C 07 6D 0F 66 00 32 42
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 15;
	panParam0->f_1 = 4;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = -1084113577;

	if (iParam1 < 5)
	{
		panParam0->f_20[0] = joaat("Night");
		panParam0->f_27 = 18;
	}
	else
	{
		panParam0->f_20[0] = joaat("Dawn");
		panParam0->f_27 = 8;
	}

	func_926(panParam0);

	switch (iParam1)
	{
		case 0:
			func_935(panParam0, iParam1);
			panParam0->f_5 = -672003008;
			panParam0->f_11 = { 2153.7854f, -1677.7432f, 40.5666f };
			break;
	
		case 1:
			func_935(panParam0, iParam1);
			panParam0->f_5 = -396317411;
			panParam0->f_11 = { 2188.5845f, -1595.6418f, 40.591f };
			break;
	
		case 2:
			func_935(panParam0, iParam1);
			panParam0->f_5 = -1239103346;
			panParam0->f_11 = { 2078.438f, -1694.9067f, 40.6896f };
			break;
	
		case 3:
			func_935(panParam0, iParam1);
			panParam0->f_5 = -889851344;
			panParam0->f_11 = { 2066.834f, -1767.3042f, 40.1183f };
			break;
	
		case 4:
			func_935(panParam0, iParam1);
			panParam0->f_5 = -1582784618;
			panParam0->f_11 = { 2131.7183f, -1865.6598f, 40.0837f };
			break;
	
		case 5:
			func_935(panParam0, iParam1);
			panParam0->f_5 = 407459900;
			panParam0->f_11 = { 2189.6125f, -654.0466f, 40.5628f };
			break;
	
		case 6:
			func_935(panParam0, iParam1);
			panParam0->f_5 = -1359903346;
			panParam0->f_11 = { 2311.974f, -546.9454f, 40.5628f };
			break;
	
		case 7:
			func_935(panParam0, iParam1);
			panParam0->f_5 = -1075501195;
			panParam0->f_11 = { 2212.4346f, -599.6181f, 40.5628f };
			break;
	
		case 8:
			func_935(panParam0, iParam1);
			panParam0->f_5 = -761049871;
			panParam0->f_11 = { 2273.3408f, -693.9393f, 40.5628f };
			break;
	
		case 9:
			func_935(panParam0, iParam1);
			panParam0->f_5 = 1397804618;
			panParam0->f_11 = { 2314.6592f, -599.6119f, 40.5628f };
			break;
	
		case 10:
			func_935(panParam0, iParam1);
			panParam0->f_5 = -636095416;
			panParam0->f_11 = { 2773.734f, -612.6971f, 40.6339f };
			break;
	
		case 11:
			func_935(panParam0, iParam1);
			panParam0->f_5 = -933474091;
			panParam0->f_11 = { 2800.1301f, -727.0102f, 40.6116f };
			break;
	
		case 12:
			func_935(panParam0, iParam1);
			panParam0->f_5 = -1209520147;
			panParam0->f_11 = { 2726.1284f, -662.6138f, 40.5283f };
			break;
	
		case 13:
			func_935(panParam0, iParam1);
			panParam0->f_5 = -1524528544;
			panParam0->f_11 = { 2710.1377f, -534.5544f, 40.615f };
			break;
	
		case 14:
			func_935(panParam0, iParam1);
			panParam0->f_5 = -449082741;
			panParam0->f_11 = { 2728.1738f, -468.3862f, 40.7744f };
			break;
	}

	return;
}

void func_874(Any* panParam0, int iParam1) // Position - 0x1C210 Signature - 22 02 04 00 00 09 66 00 6C 06 11 66 00 6C 07 6D 0D
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 13;
	panParam0->f_1 = 3;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = 477228254;

	if (iParam1 > 7)
	{
		panParam0->f_27 = 18;
		panParam0->f_20[0] = joaat("Night");
	}
	else
	{
		panParam0->f_27 = 1;
		panParam0->f_20[0] = joaat("DAY");
	}

	switch (iParam1)
	{
		case 0:
			func_936(panParam0, iParam1);
			panParam0->f_5 = -42638554;
			panParam0->f_11 = { -1712f, 644f, 122.8f };
			break;
	
		case 1:
			func_936(panParam0, iParam1);
			panParam0->f_5 = -330841909;
			panParam0->f_11 = { -2537.1f, 853.9f, 156.5f };
			break;
	
		case 2:
			func_936(panParam0, iParam1);
			panParam0->f_5 = -637690825;
			panParam0->f_11 = { -2510.7f, 519.2f, 140f };
			break;
	
		case 3:
			func_936(panParam0, iParam1);
			panParam0->f_5 = 1210841234;
			panParam0->f_11 = { -1919.8f, 751.1f, 150.5f };
			break;
	
		case 4:
			func_936(panParam0, iParam1);
			panParam0->f_5 = -275624566;
			panParam0->f_11 = { -2023.4004f, 662.6884f, 119.8702f };
			break;
	
		case 5:
			func_936(panParam0, iParam1);
			panParam0->f_5 = -2051147289;
			panParam0->f_11 = { -2435.442f, 828.0525f, 138.9454f };
			break;
	
		case 6:
			func_936(panParam0, iParam1);
			panParam0->f_5 = -1760846718;
			panParam0->f_11 = { -2487.2324f, 414.2487f, 148.2772f };
			break;
	
		case 7:
			func_936(panParam0, iParam1);
			panParam0->f_5 = -1591562064;
			panParam0->f_11 = { -2579.019f, 342.2418f, 149.5684f };
			break;
	
		case 8:
			func_936(panParam0, iParam1);
			panParam0->f_5 = -1159724897;
			panParam0->f_11 = { -1377.9451f, 265.2666f, 78.222f };
			break;
	
		case 9:
			func_936(panParam0, iParam1);
			panParam0->f_5 = -114459335;
			panParam0->f_11 = { -1209.213f, 172.2838f, 40.4974f };
			break;
	
		case 10:
			func_936(panParam0, iParam1);
			panParam0->f_5 = 564350440;
			panParam0->f_11 = { -1091.1877f, -37.3214f, 40.5256f };
			break;
	
		case 11:
			func_936(panParam0, iParam1);
			panParam0->f_5 = -840522068;
			panParam0->f_11 = { -867.4355f, 535.2601f, 57.9307f };
			break;
	
		case 12:
			func_936(panParam0, iParam1);
			panParam0->f_5 = -2076667055;
			panParam0->f_11 = { -792.3045f, 647.1317f, 88.5497f };
			break;
	}

	return;
}

void func_875(Any* panParam0, int iParam1) // Position - 0x1C4D4 Signature - 22 02 04 00 00 09 66 00 6C 06 11 66 00 6C 07 6D 0A 66 00 32 42 66 00 6C 01 09 66 00 6C 02 37 1B
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 10;
	panParam0->f_1 = 4;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = 1796670491;

	if (iParam1 < 5)
	{
		panParam0->f_20[0] = joaat("Dusk");
		panParam0->f_20[1] = joaat("Dawn");
		panParam0->f_27 = 0;
	}
	else
	{
		panParam0->f_20[0] = joaat("Dusk");
		panParam0->f_20[1] = joaat("Dawn");
		panParam0->f_27 = 18;
	}

	func_926(panParam0);

	switch (iParam1)
	{
		case 0:
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			panParam0->f_5 = -666643000;
			panParam0->f_11 = { -2323.8208f, -444.3168f, 143.2396f };
			break;
	
		case 1:
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			panParam0->f_5 = -930743103;
			panParam0->f_11 = { -2387.7808f, -333.0453f, 142.8896f };
			break;
	
		case 2:
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			panParam0->f_5 = -4199612;
			panParam0->f_11 = { -2622.5005f, -342.7303f, 141.5315f };
			break;
	
		case 3:
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			panParam0->f_5 = -1480377528;
			panParam0->f_11 = { -2760.3196f, -77.8632f, 151.8582f };
			break;
	
		case 4:
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			panParam0->f_5 = -1817640794;
			panParam0->f_11 = { -2273.776f, -473.7863f, 138.3616f };
			break;
	
		case 5:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			panParam0->f_5 = -915442079;
			panParam0->f_11 = { 2448.226f, 553.928f, 66.09f };
			break;
	
		case 6:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			panParam0->f_5 = 1928422814;
			panParam0->f_11 = { 2257.8928f, 256.7348f, 43.6559f };
			break;
	
		case 7:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			panParam0->f_5 = 1940620434;
			panParam0->f_11 = { 2324.8257f, 895.6353f, 71.6451f };
			break;
	
		case 8:
			func_928(panParam0, 1);
			panParam0->f_5 = -665538457;
			panParam0->f_11 = { 2383.811f, 1084.1549f, 85.9333f };
			break;
	
		case 9:
			func_928(panParam0, 1);
			panParam0->f_5 = 355243564;
			panParam0->f_11 = { 2398.5303f, 773.5043f, 67.0099f };
			break;
	}

	return;
}

void func_876(Any* panParam0, int iParam1) // Position - 0x1C757 Signature - 22 02 04 00 00 09 66 00 6C 06 11 66 00 6C 07 6D 0A 66 00 32 11
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 10;
	panParam0->f_1 = 2;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = 326651247;
	func_926(panParam0);

	if (iParam1 > 4)
	{
		panParam0->f_20[0] = joaat("DAY");
		panParam0->f_27 = 18;
	}
	else
	{
		panParam0->f_20[0] = joaat("Night");
		panParam0->f_27 = 9;
	}

	switch (iParam1)
	{
		case 0:
			func_928(panParam0, 0);
			panParam0->f_5 = -1024453831;
			panParam0->f_11 = { -1856.6093f, 1802.9187f, 234.305f };
			break;
	
		case 1:
			func_928(panParam0, 0);
			panParam0->f_5 = -652787833;
			panParam0->f_11 = { -1821.1525f, 1566.3519f, 235.8068f };
			break;
	
		case 2:
			func_928(panParam0, 0);
			panParam0->f_5 = 230697180;
			panParam0->f_11 = { -2069.5774f, 1812.8115f, 246.0542f };
			break;
	
		case 3:
			func_928(panParam0, 0);
			panParam0->f_5 = -543699832;
			panParam0->f_11 = { -1932.0067f, 2153.2158f, 322.7221f };
			break;
	
		case 4:
			func_928(panParam0, 0);
			panParam0->f_5 = 894826503;
			panParam0->f_11 = { -1752.3472f, 1951.3691f, 264.5091f };
			break;
	
		case 5:
			func_928(panParam0, 1);
			panParam0->f_5 = 1666294228;
			panParam0->f_11 = { 959.16f, 618.9481f, 97.743f };
			break;
	
		case 6:
			func_928(panParam0, 1);
			panParam0->f_5 = 1426851145;
			panParam0->f_11 = { 996.1093f, 512.002f, 97.3018f };
			break;
	
		case 7:
			func_928(panParam0, 1);
			panParam0->f_5 = -807339271;
			panParam0->f_11 = { 1215.257f, 557.647f, 87.103f };
			break;
	
		case 8:
			func_928(panParam0, 1);
			panParam0->f_5 = -1050255868;
			panParam0->f_11 = { 1251.4652f, 344.8225f, 92.1045f };
			break;
	
		case 9:
			func_928(panParam0, 1);
			panParam0->f_5 = -1406848126;
			panParam0->f_11 = { 913.0093f, 113.5476f, 116.3f };
			break;
	}

	return;
}

void func_877(Any* panParam0, int iParam1) // Position - 0x1C98B Signature - 22 02 04 00 00 09 66 00 6C 06 11 66 00 6C 07 6D 0B
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 11;
	panParam0->f_1 = 3;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = -1848813677;
	func_926(panParam0);

	if (iParam1 > 5)
	{
		panParam0->f_20[0] = joaat("Dawn");
		panParam0->f_27 = 9;
	}
	else
	{
		panParam0->f_20[0] = joaat("DAY");
		panParam0->f_27 = 18;
	}

	switch (iParam1)
	{
		case 0:
			func_928(panParam0, 0);
			panParam0->f_5 = -1741150966;
			panParam0->f_11 = { -1352.6392f, -2550.3784f, 74.9777f };
			break;
	
		case 1:
			func_928(panParam0, 0);
			panParam0->f_5 = -796584541;
			panParam0->f_11 = { -1913.6312f, -2213.5647f, 42.0518f };
			break;
	
		case 2:
			func_928(panParam0, 0);
			panParam0->f_5 = 80182823;
			panParam0->f_11 = { -1745.8838f, -2388.8066f, 42.8205f };
			break;
	
		case 3:
			func_928(panParam0, 1);
			panParam0->f_5 = 1964620432;
			panParam0->f_11 = { -1593.1063f, -2351.92f, 43.0229f };
			break;
	
		case 4:
			func_928(panParam0, 1);
			panParam0->f_5 = 1731665611;
			panParam0->f_11 = { -1800.6515f, -1644.9438f, 96.7288f };
			break;
	
		case 5:
			func_928(panParam0, 1);
			panParam0->f_5 = -1728544175;
			panParam0->f_11 = { -1628.2157f, -1943.5537f, 50.1671f };
			break;
	
		case 6:
			func_928(panParam0, 2);
			panParam0->f_5 = -1242537170;
			panParam0->f_11 = { 2443.7122f, -19.2163f, 43.2151f };
			break;
	
		case 7:
			func_928(panParam0, 2);
			panParam0->f_5 = 2036591126;
			panParam0->f_11 = { 2715.9102f, -128.7452f, 42.0147f };
			break;
	
		case 8:
			func_928(panParam0, 2);
			panParam0->f_5 = 197299925;
			panParam0->f_11 = { 2363.7769f, 13.1458f, 41.3272f };
			break;
	
		case 9:
			func_928(panParam0, 2);
			panParam0->f_5 = 1291850063;
			panParam0->f_11 = { 2355.3376f, -247.3491f, 41.5576f };
			break;
	
		case 10:
			func_928(panParam0, 2);
			panParam0->f_5 = 1599124976;
			panParam0->f_11 = { 2601.3857f, -212.5256f, 43.7812f };
			break;
	}

	return;
}

void func_878(Any* panParam0, int iParam1) // Position - 0x1CBED Signature - 22 02 04 00 00 09 66 00 6C 06 11 66 00 6C 07 6D 14 66 00 32 42 66 00 6C 01 11
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 20;
	panParam0->f_1 = 4;
	panParam0->f_2 = 2;
	panParam0->f_28[0] = 458679075;

	switch (iParam1)
	{
		case 0:
			func_937(panParam0, iParam1);
			panParam0->f_5 = 980541174;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6072.735f, -3593.837f, -4.3615f };
			break;
	
		case 1:
			func_937(panParam0, iParam1);
			panParam0->f_5 = 1220770713;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6201.49f, -3702.74f, -4.28209f };
			break;
	
		case 2:
			func_937(panParam0, iParam1);
			panParam0->f_5 = 1322813407;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -5571.36f, -3890.84f, -31.2513f };
			break;
	
		case 3:
			func_937(panParam0, iParam1);
			panParam0->f_5 = 1552098100;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6119.04f, -3793.32f, -32.966f };
			break;
	
		case 4:
			func_937(panParam0, iParam1);
			panParam0->f_5 = 1916358304;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6009.02f, -3759.14f, -25.1f };
			break;
	
		case 5:
			func_937(panParam0, iParam1);
			panParam0->f_5 = -1363212564;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -5896.217f, -3811.8545f, -31.2514f };
			break;
	
		case 6:
			func_937(panParam0, iParam1);
			panParam0->f_5 = 686685000;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6360.1875f, -3401.3994f, -14.7027f };
			break;
	
		case 7:
			func_937(panParam0, iParam1);
			panParam0->f_5 = -1524698208;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6241.614f, -3430.4648f, 1.465f };
			break;
	
		case 8:
			func_937(panParam0, iParam1);
			panParam0->f_5 = -1804348854;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6091.5396f, -3398.5269f, 17.9157f };
			break;
	
		case 9:
			func_937(panParam0, iParam1);
			panParam0->f_5 = -2035403073;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6054.187f, -3594.0505f, -4.8637f };
			break;
	
		case 10:
			func_937(panParam0, iParam1);
			panParam0->f_5 = 728964560;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -5609.956f, -3781.1257f, -24.15435f };
			break;
	
		case 11:
			func_937(panParam0, iParam1);
			panParam0->f_5 = 765075998;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -5664.643f, -3561.7263f, -24.1565f };
			break;
	
		case 12:
			func_937(panParam0, iParam1);
			panParam0->f_5 = 1070974613;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -5811.0273f, -3789.5337f, -27.8079f };
			break;
	
		case 13:
			func_937(panParam0, iParam1);
			panParam0->f_5 = -1088797396;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -5906.5083f, -3520.4355f, -24.1555f };
			break;
	
		case 14:
			func_937(panParam0, iParam1);
			panParam0->f_5 = -740987230;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -5753.8623f, -3302.776f, -24.1569f };
			break;
	
		case 15:
			func_937(panParam0, iParam1);
			panParam0->f_5 = 2110034336;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 2;
			panParam0->f_11 = { -937.2829f, -1900.0708f, 50.81326f };
			break;
	
		case 16:
			func_937(panParam0, iParam1);
			panParam0->f_5 = -783796062;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 16;
			panParam0->f_11 = { -1060.5697f, -1731.0603f, 75.49813f };
			break;
	
		case 17:
			func_937(panParam0, iParam1);
			panParam0->f_5 = -545106666;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 2;
			panParam0->f_11 = { -1052.6598f, -1784.9424f, 62.46124f };
			break;
	
		case 18:
			func_937(panParam0, iParam1);
			panParam0->f_5 = 379536207;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 16;
			panParam0->f_11 = { -960.0064f, -1661.613f, 67.8736f };
			break;
	
		case 19:
			func_937(panParam0, iParam1);
			panParam0->f_5 = -992108595;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 2;
			panParam0->f_11 = { -1331.61f, -1892.6777f, 60.4174f };
			break;
	}

	return;
}

void func_879(Any* panParam0, int iParam1) // Position - 0x1D124 Signature - 22 02 04 00 00 09 66 00 6C 06 11 66 00 6C 07 6D 0F 66 00 32 62
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 15;
	panParam0->f_1 = 5;
	panParam0->f_2 = 2;
	panParam0->f_28[0] = 78935770;

	switch (iParam1)
	{
		case 0:
			func_938(panParam0, iParam1);
			panParam0->f_5 = 1750035473;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 8;
			panParam0->f_11 = { 1486.6128f, -2140.1343f, 47.13319f };
			break;
	
		case 1:
			func_938(panParam0, iParam1);
			panParam0->f_5 = -1499633496;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 8;
			panParam0->f_11 = { 1400.0927f, -2166.3218f, 47.3376f };
			break;
	
		case 2:
			func_938(panParam0, iParam1);
			panParam0->f_5 = 2019068959;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 8;
			panParam0->f_11 = { 1229.7979f, -2101.0017f, 57.1906f };
			break;
	
		case 3:
			func_938(panParam0, iParam1);
			panParam0->f_5 = 1010504677;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 8;
			panParam0->f_11 = { 1036.5808f, -2147.274f, 43.912f };
			break;
	
		case 4:
			func_938(panParam0, iParam1);
			panParam0->f_5 = 1297331734;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 8;
			panParam0->f_11 = { 1190.8431f, -2218.737f, 57.2836f };
			break;
	
		case 5:
			func_938(panParam0, iParam1);
			panParam0->f_5 = 980309385;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 18;
			panParam0->f_11 = { 2260.786f, -372.8623f, 40.8656f };
			break;
	
		case 6:
			func_938(panParam0, iParam1);
			panParam0->f_5 = 1451396569;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 18;
			panParam0->f_11 = { 1632.4163f, -616.6262f, 42.8678f };
			break;
	
		case 7:
			func_938(panParam0, iParam1);
			panParam0->f_5 = -1404978858;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 18;
			panParam0->f_11 = { 2127.6238f, -907.4355f, 40.6492f };
			break;
	
		case 8:
			func_938(panParam0, iParam1);
			panParam0->f_5 = -1173302028;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 18;
			panParam0->f_11 = { 2023.6965f, -1017.1588f, 42.3998f };
			break;
	
		case 9:
			func_938(panParam0, iParam1);
			panParam0->f_5 = 2143543387;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 18;
			panParam0->f_11 = { 2093.953f, -739.3283f, 41.2796f };
			break;
	
		case 10:
			func_938(panParam0, iParam1);
			panParam0->f_5 = 1187325752;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 2;
			panParam0->f_11 = { 2183.5396f, -213.3573f, 45.5331f };
			break;
	
		case 11:
			func_938(panParam0, iParam1);
			panParam0->f_5 = 201273773;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 16;
			panParam0->f_11 = { 2185.6724f, -43.506f, 52.2188f };
			break;
	
		case 12:
			func_938(panParam0, iParam1);
			panParam0->f_5 = 36249089;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 2;
			panParam0->f_11 = { 2447.455f, -55.0326f, 43.6877f };
			break;
	
		case 13:
			func_938(panParam0, iParam1);
			panParam0->f_5 = -1717449488;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 16;
			panParam0->f_11 = { 1832.4199f, -317.352f, 45.708f };
			break;
	
		case 14:
			func_938(panParam0, iParam1);
			panParam0->f_5 = -2014041707;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 2;
			panParam0->f_11 = { 1876.5323f, -453.5455f, 43.2695f };
			break;
	}

	return;
}

void func_880(Any* panParam0, int iParam1) // Position - 0x1D525 Signature - 22 02 04 00 00 09 66 00 6C 06 11 66 00 6C 07 6D 0A 66 00 32 4D
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 10;
	panParam0->f_1 = 6;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = 29257535;
	func_926(panParam0);

	if (iParam1 < 5)
	{
		panParam0->f_20[0] = joaat("DAY");
		panParam0->f_20[1] = joaat("Dusk");
		panParam0->f_27 = 0;
	}
	else
	{
		panParam0->f_20[0] = joaat("DAY");
		panParam0->f_20[1] = joaat("Dawn");
		panParam0->f_27 = 9;
	}

	switch (iParam1)
	{
		case 0:
			func_928(panParam0, 3);
			func_928(panParam0, 4);
			func_928(panParam0, 5);
			panParam0->f_5 = -813726569;
			panParam0->f_11 = { -2685.8171f, -2697.8298f, 71.8905f };
			break;
	
		case 1:
			func_928(panParam0, 3);
			func_928(panParam0, 4);
			func_928(panParam0, 5);
			panParam0->f_5 = -991070207;
			panParam0->f_11 = { -2841.4717f, -2845.1875f, 86.3463f };
			break;
	
		case 2:
			func_928(panParam0, 3);
			func_928(panParam0, 4);
			func_928(panParam0, 5);
			panParam0->f_5 = 1385332783;
			panParam0->f_11 = { -3043.8962f, -2154.732f, 59.9256f };
			break;
	
		case 3:
			func_928(panParam0, 3);
			func_928(panParam0, 4);
			func_928(panParam0, 5);
			panParam0->f_5 = 1394180521;
			panParam0->f_11 = { -2653.5857f, -2143.5112f, 75.962f };
			break;
	
		case 4:
			func_928(panParam0, 3);
			func_928(panParam0, 4);
			func_928(panParam0, 5);
			panParam0->f_5 = -1581141590;
			panParam0->f_11 = { -3228.7905f, -2434.5234f, 26.6737f };
			break;
	
		case 5:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			func_928(panParam0, 2);
			panParam0->f_5 = 1300807189;
			panParam0->f_11 = { -1177.5936f, -748.8547f, 67.811f };
			break;
	
		case 6:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			func_928(panParam0, 2);
			panParam0->f_5 = -1226288496;
			panParam0->f_11 = { -1735.6862f, -628.3361f, 145.1246f };
			break;
	
		case 7:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			func_928(panParam0, 2);
			panParam0->f_5 = -566411244;
			panParam0->f_11 = { -1572.9393f, -328.771f, 160.6099f };
			break;
	
		case 8:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			func_928(panParam0, 2);
			panParam0->f_5 = 1931184426;
			panParam0->f_11 = { -1463.6456f, -481.3466f, 129.9887f };
			break;
	
		case 9:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			func_928(panParam0, 2);
			panParam0->f_5 = 432310963;
			panParam0->f_11 = { -1525.9829f, -916.2361f, 88.1698f };
			break;
	}

	return;
}

void func_881(Any* panParam0, int iParam1) // Position - 0x1D7FC Signature - 22 02 04 00 00 09 66 00 6C 06 11 66 00 6C 07 6D 14 66 00 32 42 66 00 6C 01 09
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 20;
	panParam0->f_1 = 4;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = -463663296;

	if (iParam1 < 10)
	{
		panParam0->f_20[0] = joaat("Dusk");
		panParam0->f_20[1] = joaat("Dawn");
		panParam0->f_27 = 57;
	}
	else
	{
		panParam0->f_20[0] = joaat("Dusk");
		panParam0->f_20[1] = joaat("Dawn");
		panParam0->f_27 = 57;
	}

	switch (iParam1)
	{
		case 0:
			func_939(panParam0, iParam1);
			panParam0->f_5 = 439376203;
			panParam0->f_11 = { 1200.3378f, -568.1477f, 67.3878f };
			break;
	
		case 1:
			func_939(panParam0, iParam1);
			panParam0->f_5 = -862568936;
			panParam0->f_11 = { 1238.1017f, -546.7609f, 66.5485f };
			break;
	
		case 2:
			func_939(panParam0, iParam1);
			panParam0->f_5 = -1361247578;
			panParam0->f_11 = { 1294.0115f, -627.1522f, 58.9807f };
			break;
	
		case 3:
			func_939(panParam0, iParam1);
			panParam0->f_5 = -518330591;
			panParam0->f_11 = { 1330.1124f, -709.0779f, 64.7788f };
			break;
	
		case 4:
			func_939(panParam0, iParam1);
			panParam0->f_5 = 1666706329;
			panParam0->f_11 = { 1174.0096f, -520.5736f, 69.0551f };
			break;
	
		case 5:
			func_939(panParam0, iParam1);
			panParam0->f_5 = 618479763;
			panParam0->f_11 = { 627.306f, -1038.2047f, 42.0511f };
			break;
	
		case 6:
			func_939(panParam0, iParam1);
			panParam0->f_5 = 916579356;
			panParam0->f_11 = { 675.5718f, -1121.4354f, 50.7543f };
			break;
	
		case 7:
			func_939(panParam0, iParam1);
			panParam0->f_5 = -1544831314;
			panParam0->f_11 = { 799.3545f, -1190.9348f, 42.9927f };
			break;
	
		case 8:
			func_939(panParam0, iParam1);
			panParam0->f_5 = -1524645610;
			panParam0->f_11 = { 753.5811f, -983.9583f, 47.8422f };
			break;
	
		case 9:
			func_939(panParam0, iParam1);
			panParam0->f_5 = 5765001;
			panParam0->f_11 = { 745.8436f, -1119.9094f, 55.5229f };
			break;
	
		case 10:
			func_939(panParam0, iParam1);
			panParam0->f_5 = -147337997;
			panParam0->f_11 = { -963.4839f, 2238.2976f, 342.2684f };
			break;
	
		case 11:
			func_939(panParam0, iParam1);
			panParam0->f_5 = 46195721;
			panParam0->f_11 = { -1100.6395f, 2080.9211f, 365.7759f };
			break;
	
		case 12:
			func_939(panParam0, iParam1);
			panParam0->f_5 = -41952889;
			panParam0->f_11 = { -1209.4318f, 2421.6323f, 309.8767f };
			break;
	
		case 13:
			func_939(panParam0, iParam1);
			panParam0->f_5 = -280740592;
			panParam0->f_11 = { -1280.9374f, 2445.1343f, 305.019f };
			break;
	
		case 14:
			func_939(panParam0, iParam1);
			panParam0->f_5 = -636874084;
			panParam0->f_11 = { -1340.4723f, 2298.7341f, 308.7317f };
			break;
	
		case 15:
			func_939(panParam0, iParam1);
			panParam0->f_5 = -1240479072;
			panParam0->f_11 = { -1159.649f, 2341.108f, 323.5332f };
			break;
	
		case 16:
			func_939(panParam0, iParam1);
			panParam0->f_5 = -1479922155;
			panParam0->f_11 = { -1329.4703f, 2266.8655f, 309.1315f };
			break;
	
		case 17:
			func_939(panParam0, iParam1);
			panParam0->f_5 = -1836252261;
			panParam0->f_11 = { -1202.5902f, 2191.1006f, 333.5445f };
			break;
	
		case 18:
			func_939(panParam0, iParam1);
			panParam0->f_5 = -2075236578;
			panParam0->f_11 = { -1171.6855f, 2299.1843f, 323.3623f };
			break;
	
		case 19:
			func_939(panParam0, iParam1);
			panParam0->f_5 = 1074322888;
			panParam0->f_11 = { -1394.3943f, 2394.8376f, 308.3089f };
			break;
	}

	return;
}

void func_882(Any* panParam0, int iParam1) // Position - 0x1DC22 Signature - 22 02 04 00 00 09 66 00 6C 06 11 66 00 6C 07 6D 0A 66 00 32 42 66 00 6C 01 09 66 00 6C 02 37 04
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 10;
	panParam0->f_1 = 4;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = -2109368060;
	func_926(panParam0);

	if (iParam1 < 5)
	{
		panParam0->f_20[0] = joaat("Night");
		panParam0->f_27 = 18;
	}
	else
	{
		panParam0->f_20[0] = joaat("DAY");
		panParam0->f_27 = 0;
	}

	switch (iParam1)
	{
		case 0:
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			panParam0->f_5 = 1070019252;
			panParam0->f_11 = { 2876.5347f, 2181.4087f, 156.7777f };
			break;
	
		case 1:
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			panParam0->f_5 = -510012600;
			panParam0->f_11 = { 2808.3577f, 2290.3066f, 155.8015f };
			break;
	
		case 2:
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			panParam0->f_5 = -250768090;
			panParam0->f_11 = { 2324.25f, 2143.9644f, 211.2929f };
			break;
	
		case 3:
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			panParam0->f_5 = 1057891329;
			panParam0->f_11 = { 2876.5347f, 2181.4087f, 156.7777f };
			break;
	
		case 4:
			func_928(panParam0, 2);
			func_928(panParam0, 3);
			panParam0->f_5 = 863129034;
			panParam0->f_11 = { 2489.669f, 2265.4365f, 175.6015f };
			break;
	
		case 5:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			panParam0->f_5 = -1100103111;
			panParam0->f_11 = { -957.019f, 1550.1614f, 237.4414f };
			break;
	
		case 6:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			panParam0->f_5 = -383805560;
			panParam0->f_11 = { -1023.7738f, 1561.6144f, 237.4295f };
			break;
	
		case 7:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			panParam0->f_5 = -233104073;
			panParam0->f_11 = { -986.7993f, 1636.2957f, 237.4295f };
			break;
	
		case 8:
			func_928(panParam0, 1);
			panParam0->f_5 = -604353467;
			panParam0->f_11 = { -874.8361f, 1499.4232f, 245.7041f };
			break;
	
		case 9:
			func_928(panParam0, 1);
			panParam0->f_5 = 1641665016;
			panParam0->f_11 = { -919.2281f, 1482.4799f, 245.1043f };
			break;
	}

	return;
}

void func_883(Any* panParam0, int iParam1) // Position - 0x1DE8D Signature - 22 02 04 00 00 09 66 00 6C 06 11 66 00 6C 07 6D 19
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 25;
	panParam0->f_1 = 4;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = -646307557;

	if (iParam1 < 10)
	{
		panParam0->f_20[0] = joaat("Dusk");
		panParam0->f_20[1] = joaat("Night");
		panParam0->f_27 = 18;
	}
	else
	{
		panParam0->f_20[0] = joaat("Night");
		panParam0->f_27 = 57;
	}

	switch (iParam1)
	{
		case 0:
			func_940(panParam0, iParam1);
			panParam0->f_5 = -1895828765;
			panParam0->f_11 = { 1649.5977f, 1335.1406f, 144.8913f };
			break;
	
		case 1:
			func_940(panParam0, iParam1);
			panParam0->f_5 = 1786489311;
			panParam0->f_11 = { 1711.2482f, 1464.3175f, 146.3869f };
			break;
	
		case 2:
			func_940(panParam0, iParam1);
			panParam0->f_5 = 1548029298;
			panParam0->f_11 = { 1569.2794f, 1372.5167f, 145.0414f };
			break;
	
		case 3:
			func_940(panParam0, iParam1);
			panParam0->f_5 = -718766281;
			panParam0->f_11 = { 1427.0967f, 1701.4105f, 197.8922f };
			break;
	
		case 4:
			func_940(panParam0, iParam1);
			panParam0->f_5 = -1212595111;
			panParam0->f_11 = { 1593.9575f, 1646.358f, 143.5214f };
			break;
	
		case 5:
			func_940(panParam0, iParam1);
			panParam0->f_5 = -1283376151;
			panParam0->f_11 = { 1694.9733f, 1740.2335f, 188.4962f };
			break;
	
		case 6:
			func_940(panParam0, iParam1);
			panParam0->f_5 = -1525768444;
			panParam0->f_11 = { 1487.9932f, 1066.912f, 182.3846f };
			break;
	
		case 7:
			func_940(panParam0, iParam1);
			panParam0->f_5 = 249590434;
			panParam0->f_11 = { 1401.9225f, 1325.5527f, 163.9692f };
			break;
	
		case 8:
			func_940(panParam0, iParam1);
			panParam0->f_5 = 9885199;
			panParam0->f_11 = { 1812.5867f, 1193.9237f, 215.9388f };
			break;
	
		case 9:
			func_940(panParam0, iParam1);
			panParam0->f_5 = 1343123829;
			panParam0->f_11 = { 1940.4858f, 1389.0662f, 177.8712f };
			break;
	
		case 10:
			func_940(panParam0, iParam1);
			panParam0->f_5 = -2039750752;
			panParam0->f_11 = { 127.6135f, 1824.7876f, 199.2989f };
			break;
	
		case 11:
			func_940(panParam0, iParam1);
			panParam0->f_5 = -2028740368;
			panParam0->f_11 = { 160.7978f, 1748.951f, 192.5338f };
			break;
	
		case 12:
			func_940(panParam0, iParam1);
			panParam0->f_5 = 1508771493;
			panParam0->f_11 = { 128.1839f, 1871.354f, 200.8744f };
			break;
	
		case 13:
			func_940(panParam0, iParam1);
			panParam0->f_5 = 1820404683;
			panParam0->f_11 = { 185.3962f, 1824.2019f, 200.2588f };
			break;
	
		case 14:
			func_940(panParam0, iParam1);
			panParam0->f_5 = 1332736425;
			panParam0->f_11 = { 196.2743f, 1749.555f, 195.3678f };
			break;
	
		case 15:
			func_940(panParam0, iParam1);
			panParam0->f_5 = 536875722;
			panParam0->f_11 = { 239.17f, 1914.0143f, 204.8216f };
			break;
	
		case 16:
			func_940(panParam0, iParam1);
			panParam0->f_5 = 795259287;
			panParam0->f_11 = { 512.8569f, 1926.0737f, 199.1983f };
			break;
	
		case 17:
			func_940(panParam0, iParam1);
			panParam0->f_5 = 20501824;
			panParam0->f_11 = { 325.2433f, 1902.0831f, 200.069f };
			break;
	
		case 18:
			func_940(panParam0, iParam1);
			panParam0->f_5 = 320272636;
			panParam0->f_11 = { 360.4333f, 1843.8536f, 185.1447f };
			break;
	
		case 19:
			func_940(panParam0, iParam1);
			panParam0->f_5 = 1135434088;
			panParam0->f_11 = { 506.2105f, 1883.9572f, 201.9437f };
			break;
	
		case 20:
			func_940(panParam0, iParam1);
			panParam0->f_5 = 1976647087;
			panParam0->f_11 = { 253.8551f, 1705.4384f, 187.3591f };
			break;
	
		case 21:
			func_940(panParam0, iParam1);
			panParam0->f_5 = -2028969939;
			panParam0->f_11 = { 320.4962f, 1736.1595f, 192.2878f };
			break;
	
		case 22:
			func_940(panParam0, iParam1);
			panParam0->f_5 = 2065778767;
			panParam0->f_11 = { -29.8717f, 1716.4124f, 179.3378f };
			break;
	
		case 23:
			func_940(panParam0, iParam1);
			panParam0->f_5 = -1385354006;
			panParam0->f_11 = { -20.6945f, 1632.4878f, 162.0277f };
			break;
	
		case 24:
			func_940(panParam0, iParam1);
			panParam0->f_5 = -1602546938;
			panParam0->f_11 = { 480.1275f, 2070.2236f, 235.143f };
			break;
	}

	return;
}

void func_884(Any* panParam0, int iParam1, int iParam2) // Position - 0x1E392 Signature - 22 03 06 00 00 09
{
	BOOL flag;

	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 3;
	panParam0->f_2 = 2;
	panParam0->f_7 = 2;
	panParam0->f_28[0] = -196458416;
	flag = iParam1 >= 5;

	if (!flag)
	{
		panParam0->f_20[0] = joaat("DAY");
		panParam0->f_27 = 1;
	}
	else
	{
		panParam0->f_20[0] = joaat("Dawn");
		panParam0->f_27 = 1;
	}

	func_941(panParam0, iParam1, iParam2);

	switch (iParam1)
	{
		case 0:
			panParam0->f_5 = -1725684832;
			panParam0->f_11 = { 261.4861f, -558.9222f, 61.15959f };
			break;
	
		case 1:
			panParam0->f_5 = -1992129571;
			panParam0->f_11 = { 477.293f, -270.40164f, 143.05318f };
			break;
	
		case 2:
			panParam0->f_5 = 2064181094;
			panParam0->f_11 = { 178.33774f, -192.74625f, 126.56092f };
			break;
	
		case 3:
			panParam0->f_5 = 1983503816;
			panParam0->f_11 = { -138.12213f, -21.41103f, 95.08842f };
			break;
	
		case 4:
			panParam0->f_5 = 1603580030;
			panParam0->f_11 = { 788.4693f, -359.1041f, 88.02867f };
			break;
	
		case 5:
			panParam0->f_5 = 1591141935;
			panParam0->f_11 = { -2105.9136f, -1658.8076f, 139.23032f };
			break;
	
		case 6:
			panParam0->f_5 = 1382010177;
			panParam0->f_11 = { -2322.8457f, -1606.9253f, 147.5517f };
			break;
	
		case 7:
			panParam0->f_5 = -1315566672;
			panParam0->f_11 = { -2327.0935f, -1401.0499f, 142.41951f };
			break;
	
		case 8:
			panParam0->f_5 = 395106204;
			panParam0->f_11 = { -2004.4985f, -1326.4708f, 115.41615f };
			break;
	
		case 9:
			panParam0->f_5 = 88814361;
			panParam0->f_11 = { -2532.945f, -1409.8516f, 145.39828f };
			break;
	}

	return;
}

void func_885(Any* panParam0, int iParam1, int iParam2) // Position - 0x1E588 Signature - 22 03 05 00 00 09 66 00 6C 06 6D 0A 66 00 32 1D
{
	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 3;
	panParam0->f_2 = 2;
	panParam0->f_7 = 2;
	panParam0->f_28[0] = 970130440;

	if (iParam1 < 5)
	{
		panParam0->f_20[0] = joaat("Dawn");
		panParam0->f_20[1] = joaat("DAY");
		panParam0->f_27 = 57;
	}
	else
	{
		panParam0->f_20[0] = joaat("DAY");
		panParam0->f_20[1] = joaat("Dusk");
		panParam0->f_27 = 57;
	}

	func_942(panParam0, iParam1, iParam2);

	switch (iParam1)
	{
		case 0:
			panParam0->f_5 = -44146172;
			panParam0->f_11 = { -4886.7227f, -3659.6113f, 23.51921f };
			break;
	
		case 1:
			panParam0->f_5 = -1882192159;
			panParam0->f_11 = { -3706.045f, -3561.4067f, 47.211f };
			break;
	
		case 2:
			panParam0->f_5 = -1446495535;
			panParam0->f_11 = { -3997.8872f, -3743.6997f, 39.394f };
			break;
	
		case 3:
			panParam0->f_5 = -1153835596;
			panParam0->f_11 = { -4533.075f, -3761.2876f, 13.8127f };
			break;
	
		case 4:
			panParam0->f_5 = 345870470;
			panParam0->f_11 = { -4165.4634f, -3614.1619f, 49.5309f };
			break;
	
		case 5:
			panParam0->f_5 = -1885586340;
			panParam0->f_11 = { 1612.212f, 2114.094f, 315.281f };
			break;
	
		case 6:
			panParam0->f_5 = 1366147128;
			panParam0->f_11 = { 1879.3193f, 2050.4155f, 269.9333f };
			break;
	
		case 7:
			panParam0->f_5 = 1740369108;
			panParam0->f_11 = { 1522.469f, 2192.8547f, 333.81f };
			break;
	
		case 8:
			panParam0->f_5 = -416486532;
			panParam0->f_11 = { 693.7542f, 2222.7292f, 222.769f };
			break;
	
		case 9:
			panParam0->f_5 = -1184690199;
			panParam0->f_11 = { 756.6907f, 2034.3179f, 266.4209f };
			break;
	}

	return;
}

void func_886(Any* panParam0, int iParam1) // Position - 0x1E792 Signature - 22 02 04 00 00 09 66 00 6C 06 6D 0A 66 00 32 11
{
	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 2;
	panParam0->f_2 = 1;
	panParam0->f_7 = 2;
	panParam0->f_28[0] = -405566878;
	func_926(panParam0);

	if (iParam1 < 5)
	{
		panParam0->f_27 = 24;
		panParam0->f_20[0] = joaat("6_TO_18");
	}
	else
	{
		panParam0->f_27 = 24;
		panParam0->f_20[0] = joaat("18_TO_0");
		panParam0->f_20[1] = joaat("22_TO_4");
	}

	switch (iParam1)
	{
		case 0:
			panParam0->f_5 = -145880949;
			panParam0->f_11 = { 451.6826f, 1053.771f, 197.3474f };
			func_928(panParam0, 0);
			break;
	
		case 1:
			panParam0->f_5 = 1765108824;
			panParam0->f_11 = { 546.6983f, 939.2978f, 161.589f };
			func_928(panParam0, 0);
			break;
	
		case 2:
			panParam0->f_5 = 1620892455;
			panParam0->f_11 = { -142.6579f, 1231.1278f, 164.5134f };
			func_928(panParam0, 0);
			break;
	
		case 3:
			panParam0->f_5 = 1380531840;
			panParam0->f_11 = { 411.3364f, 1329.0742f, 180.39f };
			func_928(panParam0, 0);
			break;
	
		case 4:
			panParam0->f_5 = -1542790654;
			panParam0->f_11 = { 473.7581f, 1011.3758f, 173.0766f };
			func_928(panParam0, 0);
			break;
	
		case 5:
			panParam0->f_5 = -1733556405;
			panParam0->f_11 = { -4209.333f, -2677.5925f, 5.4303f };
			func_928(panParam0, 1);
			break;
	
		case 6:
			panParam0->f_5 = -478503693;
			panParam0->f_11 = { -4260.6167f, -2412.103f, 23.6335f };
			func_928(panParam0, 1);
			break;
	
		case 7:
			panParam0->f_5 = -156122271;
			panParam0->f_11 = { -4620.429f, -2660.025f, -5.9085f };
			func_928(panParam0, 1);
			break;
	
		case 8:
			panParam0->f_5 = 1073468916;
			panParam0->f_11 = { -4371.066f, -3137.245f, -2.59f };
			func_928(panParam0, 1);
			break;
	
		case 9:
			panParam0->f_5 = -249481152;
			panParam0->f_11 = { -4104.4595f, -2061.2197f, 4.8147f };
			func_928(panParam0, 1);
			break;
	}

	return;
}

void func_887(Any* panParam0, int iParam1) // Position - 0x1E9D2 Signature - 22 02 04 00 00 09 66 00 6C 06 6D 0B 66 00 32 09 66 00 6C 01 09
{
	panParam0->f_6 = 1;
	*panParam0 = 11;
	panParam0->f_1 = 1;
	panParam0->f_2 = 1;
	func_926(panParam0);

	switch (iParam1)
	{
		case 0:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_0");
			panParam0->f_11 = { -2586.9229f, -264.5349f, 161.6671f };
			break;
	
		case 1:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_1");
			panParam0->f_11 = { -2578.181f, 388.9668f, 148.3721f };
			break;
	
		case 2:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_2");
			panParam0->f_11 = { -2196.5764f, 468.8412f, 119.5676f };
			break;
	
		case 3:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GREAT_PLAINS_0");
			panParam0->f_11 = { -1637.2004f, -1513.2339f, 82.6688f };
			break;
	
		case 4:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GREAT_PLAINS_1");
			panParam0->f_11 = { -825.3087f, -1804.9507f, 59.0313f };
			break;
	
		case 5:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_0");
			panParam0->f_11 = { 1786.9149f, 1588.926f, 167.4663f };
			break;
	
		case 6:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_1");
			panParam0->f_11 = { 1959.8942f, 1387.2507f, 179.786f };
			break;
	
		case 7:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_2");
			panParam0->f_11 = { 637.5925f, 2099.4553f, 222.0308f };
			break;
	
		case 8:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_3");
			panParam0->f_11 = { 1296.321f, 1161.6852f, 150.1379f };
			break;
	
		case 9:
			func_927(panParam0);
			panParam0->f_5 = 2107537913;
			panParam0->f_11 = { -2100.2473f, -1372.8866f, 127.74232f };
			break;
	
		case 10:
			func_927(panParam0);
			panParam0->f_5 = -1477292384;
			panParam0->f_11 = { -2205.0159f, -1584.1448f, 148.39436f };
			break;
	}

	return;
}

void func_888(Any* panParam0, int iParam1) // Position - 0x1EBEB Signature - 22 02 04 00 00 09 66 00 6C 06 6D 0A 66 00 32 09
{
	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 1;
	panParam0->f_2 = 1;
	func_926(panParam0);

	switch (iParam1)
	{
		case 0:
			func_927(panParam0);
			panParam0->f_5 = -274965770;
			panParam0->f_11 = { -1109.7175f, 2104.703f, 361.4368f };
			break;
	
		case 1:
			func_927(panParam0);
			panParam0->f_5 = 1652259747;
			panParam0->f_11 = { -4300.761f, -3445.6018f, 33.26603f };
			break;
	
		case 2:
			func_927(panParam0);
			panParam0->f_5 = -743720569;
			panParam0->f_11 = { -3895.4612f, -2492.511f, -11.57848f };
			break;
	
		case 3:
			func_927(panParam0);
			panParam0->f_5 = -1200331578;
			panParam0->f_11 = { -2190.5076f, -2867.2227f, 25.40727f };
			break;
	
		case 4:
			func_927(panParam0);
			panParam0->f_5 = -1026512984;
			panParam0->f_11 = { -2083.8928f, -1412.5518f, 131.8581f };
			break;
	
		case 5:
			func_927(panParam0);
			panParam0->f_5 = -1017773316;
			panParam0->f_11 = { -897.5998f, 535.8544f, 58.2352f };
			break;
	
		case 6:
			func_927(panParam0);
			panParam0->f_5 = 303940131;
			panParam0->f_11 = { 280.7151f, 263.9585f, 112.8886f };
			break;
	
		case 7:
			func_927(panParam0);
			panParam0->f_5 = 1273284251;
			panParam0->f_11 = { 1548.0837f, 1355.0973f, 146.0557f };
			break;
	
		case 8:
			func_927(panParam0);
			panParam0->f_5 = -950817569;
			panParam0->f_11 = { 2652.989f, 1189.5033f, 118.7033f };
			break;
	
		case 9:
			func_927(panParam0);
			panParam0->f_5 = -910888222;
			panParam0->f_11 = { 1509.1018f, -2101.4487f, 45.3134f };
			break;
	}

	return;
}

void func_889(Any* panParam0, int iParam1) // Position - 0x1EDD7 Signature - 22 02 04 00 00 09 66 00 6C 06 0D
{
	panParam0->f_6 = 1;
	*panParam0 = 7;
	panParam0->f_1 = 3;
	panParam0->f_2 = 1;
	func_926(panParam0);

	switch (iParam1)
	{
		case 0:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_1");
			panParam0->f_11 = { -1499.3971f, -553.9472f, 131.81976f };
			break;
	
		case 1:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_2");
			panParam0->f_11 = { -1760.5497f, 268.62433f, 118.69484f };
			break;
	
		case 2:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_3");
			panParam0->f_11 = { -2762.128f, -158.04846f, 150.8974f };
			break;
	
		case 3:
			func_927(panParam0);
			panParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_4");
			panParam0->f_11 = { -719.5702f, -756.90515f, 49.81378f };
			break;
	
		case 4:
			func_928(panParam0, 0);
			func_928(panParam0, 2);
			panParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_1");
			panParam0->f_11 = { 951.5258f, -1248.3708f, 53.86922f };
			break;
	
		case 5:
			func_928(panParam0, 0);
			func_928(panParam0, 2);
			panParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_2");
			panParam0->f_11 = { 1088.2909f, -1418.5994f, 55.54557f };
			break;
	
		case 6:
			func_928(panParam0, 0);
			func_928(panParam0, 2);
			panParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_3");
			panParam0->f_11 = { 1289.6934f, -1603.7043f, 64.23989f };
			break;
	}

	return;
}

void func_890(Any* panParam0, int iParam1) // Position - 0x1EF53 Signature - 22 02 04 00 00 09 66 00 6C 06 6D 08
{
	panParam0->f_6 = 1;
	*panParam0 = 8;
	panParam0->f_1 = 2;
	panParam0->f_2 = 1;

	switch (iParam1)
	{
		case 0:
			func_943(panParam0, iParam1);
			panParam0->f_5 = -418287183;
			panParam0->f_11 = { -2081.231f, -2774.5967f, 77.5683f };
			break;
	
		case 1:
			func_943(panParam0, iParam1);
			panParam0->f_5 = -1127015115;
			panParam0->f_11 = { -2258.97f, -2879.726f, 25.0912f };
			break;
	
		case 2:
			func_943(panParam0, iParam1);
			panParam0->f_5 = -1853700459;
			panParam0->f_11 = { -2925.0168f, -2769.882f, 95.6414f };
			break;
	
		case 3:
			func_943(panParam0, iParam1);
			panParam0->f_5 = 529883832;
			panParam0->f_11 = { -2648.38f, -2977.7717f, 76.4237f };
			break;
	
		case 4:
			func_943(panParam0, iParam1);
			panParam0->f_5 = -204230900;
			panParam0->f_11 = { -2323.9211f, -2074.8455f, 88.1254f };
			break;
	
		case 5:
			func_943(panParam0, iParam1);
			panParam0->f_5 = -1938530367;
			panParam0->f_11 = { -3455.5781f, -2264.6997f, 4.7142f };
			break;
	
		case 6:
			func_943(panParam0, iParam1);
			panParam0->f_5 = 1968802033;
			panParam0->f_11 = { -3581.2175f, -3650.8904f, -12.8679f };
			break;
	
		case 7:
			func_943(panParam0, iParam1);
			panParam0->f_5 = -2098551789;
			panParam0->f_11 = { -5254.539f, -4050.37f, -3.6288f };
			break;
	}

	return;
}

void func_891(Any* panParam0, int iParam1, int iParam2) // Position - 0x1F0EF Signature - 22 03 06 00 00 66 01 3C
{
	int num;

	switch (iParam1)
	{
		case 35:
			panParam0->f_8 = joaat("hideout");
			break;
	
		case 36:
			panParam0->f_8 = joaat("DYNAMIC_AMBUSH");
			break;
	
		case 37:
			panParam0->f_8 = joaat("DYNAMIC_RESCUE_PED_MULTIPLE");
			break;
	
		case 38:
			panParam0->f_8 = joaat("DYNAMIC_ESCORT");
			break;
	
		case 39:
			panParam0->f_8 = joaat("DYNAMIC_CAMPSITE_DEFEND");
			break;
	
		case 40:
			panParam0->f_8 = joaat("MOONSHINE_DYNAMIC_SABOTAGE");
			break;
	
		case 41:
			panParam0->f_8 = joaat("MOONSHINE_DYNAMIC_DESTROY");
			break;
	
		case 42:
			panParam0->f_8 = joaat("MOONSHINE_DYNAMIC_ROADBLOCK");
			break;
	
		case 43:
			panParam0->f_8 = 362795228;
			break;
	
		case 44:
			panParam0->f_8 = -2096602762;
			break;
	
		case 45:
			panParam0->f_8 = -1812122325;
			break;
	
		case 46:
			panParam0->f_8 = 918897273;
			break;
	}

	num = func_944(iParam1);

	if (num == -1)
		return;

	if (iParam1 == 41 || iParam1 == 42 || iParam1 == 40)
		panParam0->f_7 = 1;
	else if (iParam1 == 43)
		panParam0->f_7 = 2;
	else if (iParam1 == 44)
		panParam0->f_7 = 3;
	else if (iParam1 == 45 || iParam1 == 46)
		panParam0->f_7 = 4;

	*panParam0 = func_945(num);
	panParam0->f_1 = 0;
	panParam0->f_6 = 2;
	func_931(panParam0, 32);

	if (iParam2 != -1)
	{
		panParam0->f_9 = func_946(func_169(num), iParam2);
		panParam0->f_15[0] = func_947(func_169(num), iParam2);
		panParam0->f_5 = func_327(num, iParam2);
		panParam0->f_11 = { func_333(num, iParam2) };
	}

	return;
}

BOOL func_892(Player plParam0) // Position - 0x1F2A2 Signature - 22 01 03 00 00 5D 77 5E 10 18 8E 6E 66 00 03 09 00 36 8B 04
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_893(Player plParam0) // Position - 0x1F2BF Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 32
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_832(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_911(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

int func_894(Hash hParam0, int iParam1) // Position - 0x1F342 Signature - 22 02 05 00 00 5D FD 0B 10 80 50 27 65 2F
{
	int i;

	if (Global_1051645.f_80.f_101 == 0)
		return -1;

	i = 0;

	for (i = 0; i <= Global_1051645.f_80.f_101 - 1; i = i + 1)
	{
		if (Global_1051645.f_80[i /*10*/].f_8 == hParam0 && Global_1051645.f_80[i /*10*/].f_9 == iParam1)
			return i;
	}

	return -1;
}

BOOL func_895(int iParam0) // Position - 0x1F3A4 Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 21 00 04 00 00 00 1B 00 05 00 00 00 15 00 06 00 00 00 0F 00 07 00 00 00 09 00 08 00 00 00 03 00 68 04 00 09 50 01 01 2F 50 01 01 22 03
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

BOOL func_896(int iParam0, var uParam1, Any* panParam2) // Position - 0x1F3E3 Signature - 22 03 05 00 00 5D F8 89 11 27 07 66 02 32 37 19
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = 1351168281;
	panParam2->f_3 = func_948(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_897(int iParam0, Any* panParam1, var uParam2) // Position - 0x1F417 Signature - 22 03 06 00 00 66 00 66
{
	int num;

	*uParam2 = iParam0;
	panParam1->f_2 = -611386243;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), panParam1);
	uParam2->f_3 = func_949(iParam0, uParam2->f_1);
	panParam1->f_2 = -2140901307;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_2 = num;
	panParam1->f_2 = -2140901307;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_9), panParam1);
	panParam1->f_2 = 1292053410;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_17), panParam1);

	if (*uParam2 == 3)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_950(num);
	}
	else if (*uParam2 == 4)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = num;
	}
	else if (*uParam2 == 5)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_951(num);
	}
	else if (*uParam2 == 6)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_952(num);
	
		panParam1->f_2 = 162343104;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), panParam1);
	}
	else if (*uParam2 == 7)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_953(num);
	}
	else
	{
		panParam1->f_2 = 1636457257;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), panParam1);
	}

	panParam1->f_2 = 2012757065;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_7 = func_954(num);
	panParam1->f_2 = 1060782978;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_8), panParam1);
	panParam1->f_2 = 162343104;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), panParam1);
	panParam1->f_2 = -733480474;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_25), panParam1);
	panParam1->f_2 = 492825771;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_26), panParam1);
	panParam1->f_2 = -839279581;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_27), panParam1);
	panParam1->f_2 = -640941103;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_28), panParam1);
	num = 0;
	panParam1->f_2 = -2025968302;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_29 = num;
	num = 0;
	panParam1->f_2 = -1829781569;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_30 = num;
	num = 0;
	panParam1->f_2 = -1999176766;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_31 = num;
	num = 0;
	panParam1->f_2 = -739728609;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_32 = num;
	return;
}

int func_898(int iParam0) // Position - 0x1F672 Signature - 22 01 03 00 00 66 00 5D 68 E7 10 80 21 63
{
	return Global_1107816.f_33[iParam0 /*16*/].f_2;
}

void func_899(int iParam0) // Position - 0x1F686 Signature - 22 01 03 00 00 66 00 39 EB 11
{
	if (!func_955(iParam0))
		return;

	func_956(iParam0);
	return;
}

void func_900(int iParam0) // Position - 0x1F6A1 Signature - 22 01 03 00 00 5D F3 67 11 66 00 09 39 17
{
	func_957(&Global_1140723, iParam0, 1);
	return;
}

int func_901(int iParam0) // Position - 0x1F6B7 Signature - 22 01 03 00 00 66 00 3C 05 00 F2
{
	switch (iParam0)
	{
		case -1340981006:
			return 1;
	
		case joaat("LEGENDARY_ANIMAL"):
			return 4;
	
		case joaat("bounty"):
			return 0;
	
		case joaat("moonshine"):
			return 2;
	
		case joaat("MOONSHINE_RECIPE"):
			return 3;
	
		default:
		
	}

	return -1;
}

int func_902(int iParam0) // Position - 0x1F6FD Signature - 22 01 03 00 00 66 00 3C 02 00 13
{
	switch (iParam0)
	{
		case joaat("Male"):
			return 0;
	
		case joaat("female"):
			return 1;
	
		default:
		
	}

	return -1;
}

int func_903(int iParam0) // Position - 0x1F725 Signature - 22 01 03 00 00 66 00 3C 03 00 07
{
	switch (iParam0)
	{
		case joaat("aggressive"):
			return 1;
	
		case joaat("Townsfolk"):
			return 0;
	
		case joaat("uni_criminal"):
			return 2;
	
		default:
		
	}

	return -1;
}

int func_904(int iParam0) // Position - 0x1F757 Signature - 22 01 03 00 00 66 00 3C 02 00 00 00 00 00 09 00 01 00 00 00 0B 00 68 10 00 37 D5
{
	switch (iParam0)
	{
		case 0:
			return joaat("DEFAULT");
	
		case 1:
			return joaat("Cold");
	
		default:
		
	}

	return 0;
}

var func_905(Any* panParam0, BOOL bParam1) // Position - 0x1F787 Signature - 22 02 04 00 00 66 00 6D 21
{
	return func_819(panParam0, 33, bParam1);
}

int func_906(var uParam0) // Position - 0x1F799 Signature - 22 01 03 00 00 66 00 76 2F 15
{
	if (*uParam0 == 0)
		return 0;

	if (func_958(uParam0->f_2) == 0)
		return 0;

	if (uParam0->f_3 == 0)
		return 0;

	if (uParam0->f_5 == 0)
		return 0;

	return 1;
}

int func_907(var uParam0) // Position - 0x1F7D5 Signature - 22 01 03 00 00 09 50 01 01 22 01 03 00 00 09
{
	return 1;
}

int func_908(var uParam0) // Position - 0x1F7DE Signature - 22 01 03 00 00 09 50 01 01 22 03
{
	return 1;
}

BOOL func_909(Any* panParam0, int iParam1, int iParam2) // Position - 0x1F7E7 Signature - 22 03 08 00 00 66 01 6D 1F 59 67 05 66 01 6D 1F 47 67 06 66 05 66 00 17 01 66 06 03 09 00 31 67 07 66 05 66 00 63 01 66 06 03 08 00
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(panParam0->[num], offset);
	MISC::SET_BIT(&panParam0->[num], offset);
	return !isBitSet;
}

BOOL func_910(Player plParam0) // Position - 0x1F81A Signature - 22 01 03 00 00 5D 77 5E 10 18 69
{
	return SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21353.f_260), plParam0);
}

void func_911(Player plParam0) // Position - 0x1F832 Signature - 22 01 03 00 00 66 00 5D 77 5E 10 18 69
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

float func_912(Player plParam0, BOOL bParam1) // Position - 0x1F86D Signature - 22 02 05 00 00 5D F8
{
	Player player;

	if (!Global_1149432.f_5568)
		return 0f;

	if (plParam0 == Global_1295666.f_149[Global_1295666])
		return Global_17418.f_2641;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return 0f;

	player = plParam0;

	if (player < 0 || player >= 32)
		return 0f;

	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(plParam0)) > 1 && bParam1 && Global_1101558[player /*38*/].f_18 >= Global_1101558[player /*38*/].f_30)
		return Global_1101558[player /*38*/].f_18;

	return Global_1101558[player /*38*/].f_30;
}

BOOL func_913(Player plParam0) // Position - 0x1F90D Signature - 22 01 03 00 00 5D 77 5E 10 18 8F
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28303), plParam0))
		return true;

	return false;
}

BOOL func_914(Player plParam0) // Position - 0x1F92A Signature - 22 01 03 00 00 5D 77 5E 10 18 8D
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28301), plParam0))
		return true;

	return false;
}

BOOL func_915(Player plParam0) // Position - 0x1F947 Signature - 22 01 03 00 00 66 00 03 05 00 D5
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
	{
		func_832(plParam0);
		return false;
	}

	if (func_914(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 2)
			func_959(plParam0, 5, 1, true, false, 0);
	
		return true;
	}

	return NETWORK::_0x862C5040F4888741(Global_1295666.f_5, plParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 2;
}

BOOL func_916(int iParam0) // Position - 0x1F9AB Signature - 22 01 03 00 00 66 00 2F 1C 50 01 01 22 02 04 00 00 66 00 2F
{
	return iParam0 != 0;
}

BOOL func_917(Hash hParam0, Hash hParam1) // Position - 0x1F9B7 Signature - 22 02 04 00 00 66 00 2F 39 CD
{
	if (!func_596(hParam0, 0))
		return func_960(func_766(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return true;

	return false;
}

void func_918(Hash hParam0, var uParam1, var uParam2) // Position - 0x1F9F8 Signature - 22 03 05 00 00 2F
{
	*uParam1 = 0;
	*uParam2 = 0;

	switch (hParam0)
	{
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("repeater_ammo_box_express");
			*uParam2 = joaat("ammo_repeater_express");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("repeater_ammo_box");
			*uParam2 = joaat("ammo_repeater");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("revolver_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_revolver_high_velocity");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("pistol_ammo_box");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("revolver_ammo_box_used");
			*uParam2 = joaat("ammo_revolver");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("shotgun_ammo_box_used");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("rifle_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_rifle_high_velocity");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("pistol_ammo_box_express");
			*uParam2 = joaat("ammo_pistol_express");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("rifle_ammo_box_express");
			*uParam2 = joaat("ammo_rifle_express");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("repeater_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_repeater_high_velocity");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("shotgun_ammo_box_slug");
			*uParam2 = joaat("ammo_shotgun_slug");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("rifle_ammo_box");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
	
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_ammo_box");
			*uParam2 = joaat("ammo_22");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("revolver_ammo_box");
			*uParam2 = joaat("ammo_revolver");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("revolver_ammo_box_express");
			*uParam2 = joaat("ammo_revolver_express");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("rifle_ammo_box_used");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("pistol_ammo_box_used");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("pistol_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_pistol_high_velocity");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("shotgun_ammo_box");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("repeater_ammo_box_used");
			*uParam2 = joaat("ammo_repeater");
			break;
	}

	return;
}

struct<18> func_919(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1FC04 Signature - 22 07 1B
{
	Hash hash;

	hash = -1;
	hash.f_1 = -1;
	hash.f_2 = -1;
	hash.f_3 = -1;
	hash.f_4 = -1;
	hash.f_5 = -1;
	hash.f_6 = -1;
	hash.f_7 = -1;
	hash.f_8 = -1;
	hash.f_13 = -1;
	hash.f_14 = -1;
	hash.f_15 = -1;
	hash.f_16 = -1;
	hash.f_17 = -1;

	if (hParam0 != 0)
		hash = hParam0;

	if (iParam1 != 0 && iParam1 != -1591664384)
		hash.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != -1591664384)
		hash.f_2 = iParam2;

	if (iParam3 != 0 && iParam3 != -1591664384)
		hash.f_3 = iParam3;

	if (iParam4 != 0)
		hash.f_4 = iParam4;

	if (iParam5 != 0)
		hash.f_5 = iParam5;

	if (iParam6 != 0)
		hash.f_8 = iParam6;

	return hash;
}

struct<4> func_920(BOOL bParam0) // Position - 0x1FCE2 Signature - 22 01 04 00 00 66 00 39 4F 22 01 67 03 66 03 11 15
{
	int num;

	num = func_593(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_595(923904168, func_418(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_595(923904168, func_418(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_595(923904168, func_418(bParam0), -740156546, false);
}

void func_921(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1FD83 Signature - 22 05 07 00 00 4B
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_922(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x1FD9E Signature - 22 04 06 00 00 66 03 39
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_593(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

struct<5> func_923(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x1FDC3 Signature - 22 03 2F
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_418(bParam1) };
	unk.f_4 = 1084182731;
	num = func_762(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_965(hParam0, -1823706425))
			{
				unk = { func_595(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_965(hParam0, -1483207246))
			{
				unk = { func_595(joaat("WARDROBE"), unk, 1034665895, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_595(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1311702610))
			{
				unk.f_4 = -1311702610;
			}
			else if (func_965(hParam0, -1653629781))
			{
				unk = { func_595(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -1591664384;
			unk = { func_964(bParam1) };
		
			switch (func_848(hParam0))
			{
				case -2101244071:
					unk.f_4 = -268116367;
					break;
			
				case -1070622585:
					unk.f_4 = -6796437;
					break;
			
				case -1057349201:
					unk.f_4 = 1473261684;
					break;
			
				case 874188557:
					unk.f_4 = -241855024;
					break;
			}
			break;
	
		case joaat("CLOTHING"):
			unk = { func_595(joaat("WARDROBE"), unk, 1034665895, bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_920(bParam1) };
		
			if (iParam2 && func_961(hParam0, true))
			{
				unk6.f_9 = -1591664384;
			
				if (!func_962(hParam0, &unk, 1728382685, false, false))
					unk.f_4 = 1728382685;
				else if (!func_962(hParam0, &unk, -649335959, false, false))
					unk.f_4 = -649335959;
				else if (func_963(hParam0, &unk6, 1728382685))
					unk.f_4 = 1728382685;
				else
					unk.f_4 = -649335959;
			}
			else
			{
				unk.f_4 = 1728382685;
			}
			break;
	
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, 1084182731))
			{
				unk.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, 1034665895))
			{
				unk.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -833319691))
			{
				unk28.f_9 = -1591664384;
			
				if (!func_966(unk, &unk28, bParam1, false, -1))
				{
					unk.f_4 = 0;
				}
				else
				{
					unk = { unk28.f_5 };
					unk.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -718417579))
			{
				unk.f_4 = -718417579;
			}
			else if (func_965(hParam0, -1653629781))
			{
				unk = { func_595(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			else
			{
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("character"));
				unk.f_4 == 0;
			}
			break;
	}

	return unk;
}

struct<2> func_924(int iParam0) // Position - 0x20139 Signature - 22 01 05 00 00 4B 03 6A 08 3D 41 6A
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk = { func_370(iParam0, 2) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_370(iParam0, 7) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_370(iParam0, 5) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_370(iParam0, 6) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_370(iParam0, 8) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_370(iParam0, 3) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_370(iParam0, 4) };

	if (unk.f_1 >= 0)
		return unk;

	return func_216();
}

void func_925(Any* panParam0, int iParam1) // Position - 0x20209 Signature - 22 02 04 00 00 66 01 3C 0A
{
	switch (iParam1)
	{
		case 0:
			func_967(panParam0);
			break;
	
		case 1:
			func_967(panParam0);
			break;
	
		case 2:
			func_967(panParam0);
			break;
	
		case 3:
			func_968(panParam0);
			break;
	
		case 4:
			func_967(panParam0);
			break;
	
		case 5:
			func_967(panParam0);
			break;
	
		case 6:
			func_968(panParam0);
			break;
	
		case 7:
			func_968(panParam0);
			break;
	
		case 8:
			func_968(panParam0);
			break;
	
		case 9:
			func_967(panParam0);
			break;
	
		default:
			func_927(panParam0);
			func_926(panParam0);
			break;
	}

	return;
}

void func_926(Any* panParam0) // Position - 0x202BE Signature - 22 01 04 00 00 2F 67 03 66 03 66 00 27 02
{
	int i;

	for (i = 0; i <= panParam0->f_2 - 1; i = i + 1)
	{
		func_969(panParam0, i);
	}

	return;
}

void func_927(Any* panParam0) // Position - 0x202E5 Signature - 22 01 04 00 00 2F 67 03 66 03 66 00 27 01
{
	int i;

	for (i = 0; i <= panParam0->f_1 - 1; i = i + 1)
	{
		func_928(panParam0, i);
	}

	return;
}

void func_928(Any* panParam0, int iParam1) // Position - 0x2030C Signature - 22 02 04 00 00 66 00 80 03
{
	MISC::SET_BIT(&(panParam0->f_3), iParam1);
	return;
}

void func_929(Any* panParam0, int iParam1) // Position - 0x2031E Signature - 22 02 04 00 00 66 01 3C 10
{
	switch (iParam1)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 8:
		case 10:
		case 12:
		case 14:
			func_970(panParam0);
			break;
	
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
		case 11:
		case 13:
		case 15:
			func_971(panParam0);
			break;
	
		default:
			func_927(panParam0);
			func_926(panParam0);
			break;
	}

	return;
}

void func_930(Any* panParam0, int iParam1) // Position - 0x203AF Signature - 22 02 04 00 00 66 01 3C 0C
{
	switch (iParam1)
	{
		case 0:
			func_969(panParam0, 0);
			break;
	
		case 1:
		case 2:
			func_969(panParam0, 1);
			func_969(panParam0, 2);
			break;
	
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_969(panParam0, 0);
			func_969(panParam0, 2);
			break;
	
		case 8:
			func_969(panParam0, 1);
			break;
	
		case 9:
		case 10:
		case 11:
			func_969(panParam0, 1);
			break;
	
		default:
			func_926(panParam0);
			break;
	}

	return;
}

void func_931(Any* panParam0, int iParam1) // Position - 0x20450 Signature - 22 02 04 00 00 66 00 80 19
{
	func_557(&(panParam0->f_25), iParam1);
	return;
}

void func_932(Any* panParam0, int iParam1) // Position - 0x20462 Signature - 22 02 04 00 00 66 01 3C 04
{
	switch (iParam1)
	{
		case 0:
			func_972(panParam0);
			break;
	
		case 1:
			func_973(panParam0);
			break;
	
		case 2:
			func_974(panParam0);
			break;
	
		case 3:
			func_975(panParam0);
			break;
	
		default:
			func_927(panParam0);
			func_926(panParam0);
			break;
	}

	return;
}

void func_933(Any* panParam0, int iParam1) // Position - 0x204BD Signature - 22 02 04 00 00 66 01 3C 05
{
	switch (iParam1)
	{
		case 0:
			func_976(panParam0);
			break;
	
		case 1:
		case 2:
			func_977(panParam0);
			break;
	
		case 3:
		case 4:
			func_978(panParam0);
			break;
	
		default:
			func_926(panParam0);
			break;
	}

	func_927(panParam0);
	return;
}

void func_934(Any* panParam0, int iParam1) // Position - 0x20515 Signature - 22 02 04 00 00 66 01 3C 02
{
	switch (iParam1)
	{
		case 0:
			func_969(panParam0, 0);
			func_969(panParam0, 2);
			break;
	
		case 1:
			func_969(panParam0, 1);
			func_969(panParam0, 3);
			break;
	
		default:
			func_927(panParam0);
			func_926(panParam0);
			break;
	}

	return;
}

void func_935(Any* panParam0, int iParam1) // Position - 0x20562 Signature - 22 02 04 00 00 66 01 3C 0F 00 00 00 00 00 57 00 01 00 00 00 51 00 02 00 00 00 4B
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_928(panParam0, 2);
			break;
	
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_928(panParam0, 1);
			break;
	
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_928(panParam0, 0);
			break;
	
		default:
			func_928(panParam0, 0);
			break;
	}

	func_926(panParam0);
	return;
}

void func_936(Any* panParam0, int iParam1) // Position - 0x205FA Signature - 22 02 04 00 00 66 01 3C 0D
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_928(panParam0, 0);
			break;
	
		case 4:
		case 5:
		case 6:
		case 7:
			func_928(panParam0, 1);
			break;
	
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_928(panParam0, 2);
			break;
	
		default:
			func_927(panParam0);
			break;
	}

	func_926(panParam0);
	return;
}

void func_937(Any* panParam0, int iParam1) // Position - 0x20685 Signature - 22 02 04 00 00 66 01 3C 14 00 00 00 00 00 75 00 01 00 00 00 6F 00 02 00 00 00 69 00 03 00 00 00 63 00 04 00 00 00 5D 00 05 00 00 00 68
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_928(panParam0, 0);
			func_969(panParam0, 1);
			break;
	
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_928(panParam0, 1);
			func_969(panParam0, 1);
			break;
	
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_928(panParam0, 2);
			func_969(panParam0, 1);
			break;
	
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_928(panParam0, 3);
			func_969(panParam0, 0);
			break;
	}

	return;
}

void func_938(Any* panParam0, int iParam1) // Position - 0x20751 Signature - 22 02 04 00 00 66 01 3C 0F 00 00 00 00 00 57 00 01 00 00 00 51 00 02 00 00 00 5C
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_928(panParam0, 0);
			func_969(panParam0, 0);
			break;
	
		case 2:
			func_928(panParam0, 1);
			func_969(panParam0, 0);
			break;
	
		case 3:
		case 4:
			func_928(panParam0, 2);
			func_969(panParam0, 0);
			break;
	
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_928(panParam0, 3);
			func_969(panParam0, 1);
			break;
	
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_928(panParam0, 4);
			func_969(panParam0, 1);
			break;
	}

	return;
}

void func_939(Any* panParam0, int iParam1) // Position - 0x20810 Signature - 22 02 04 00 00 66 01 3C 14 00 00 00 00 00 75 00 01 00 00 00 6F 00 02 00 00 00 69 00 03 00 00 00 63 00 04 00 00 00 5D 00 05 00 00 00 57
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_928(panParam0, 3);
			break;
	
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			func_928(panParam0, 2);
			break;
	
		default:
			func_927(panParam0);
			break;
	}

	func_926(panParam0);
	return;
}

void func_940(Any* panParam0, int iParam1) // Position - 0x208C9 Signature - 22 02 04 00 00 66 01 3C 19
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_928(panParam0, 3);
			break;
	
		case 10:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 20:
		case 21:
		case 24:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			func_928(panParam0, 2);
			break;
	
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			break;
	
		default:
			func_927(panParam0);
			break;
	}

	func_926(panParam0);
	return;
}

void func_941(Any* panParam0, int iParam1, int iParam2) // Position - 0x209B1 Signature - 22 03 05 00 00 66 01 3C 0A 00 00 00 00 00 39 00 01 00 00 00 33 00 02 00 00 00 2D 00 03 00 00 00 27 00 04 00 00 00 21 00 05 00 00 00 2C 00 06 00 00 00 26 00 07 00 00 00 20 00 08 00 00 00 1A 00 09 00 00 00 14 00 68 30
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_969(panParam0, 0);
			func_928(panParam0, 0);
			break;
	
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_969(panParam0, 1);
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			func_928(panParam0, 2);
			break;
	
		default:
			func_969(panParam0, 0);
			func_928(panParam0, 0);
			break;
	}

	return;
}

void func_942(Any* panParam0, int iParam1, int iParam2) // Position - 0x20A3E Signature - 22 03 05 00 00 66 01 3C 0A 00 00 00 00 00 39 00 01 00 00 00 33 00 02 00 00 00 2D 00 03 00 00 00 27 00 04 00 00 00 21 00 05 00 00 00 2C 00 06 00 00 00 26 00 07 00 00 00 20 00 08 00 00 00 1A 00 09 00 00 00 14 00 68 29
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_969(panParam0, 0);
			func_928(panParam0, 0);
			break;
	
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_969(panParam0, 1);
			func_928(panParam0, 0);
			func_928(panParam0, 1);
			break;
	
		default:
			func_969(panParam0, 0);
			func_928(panParam0, 0);
			break;
	}

	return;
}

void func_943(Any* panParam0, int iParam1) // Position - 0x20AC4 Signature - 22 02 04 00 00 66 01 3C 01
{
	switch (iParam1)
	{
		case 0:
			func_926(panParam0);
			func_927(panParam0);
			break;
	
		default:
			func_926(panParam0);
			func_927(panParam0);
			break;
	}

	return;
}

int func_944(int iParam0) // Position - 0x20AF8 Signature - 22 01 03 00 00 66 00 5D 06
{
	return Global_1260806.f_3432[iParam0];
}

int func_945(int iParam0) // Position - 0x20B0B Signature - 22 01 03 00 00 66 00 08 15 04 00 08
{
	if (iParam0 == -1)
		return -1;

	return Global_1245174[iParam0 /*5*/].f_3;
}

var func_946(int iParam0, int iParam1) // Position - 0x20B27 Signature - 22 02 0A 00 00 4B 05 66 00 39 04 B2 00 6A 8B 09 00 4B 05 66 01 39 4F BE 00 69 8B 11 00 62 4B 05 2D 37 0F
{
	var unk;
	var unk2;

	if (func_360(&unk2, iParam0) && func_389(&unk2, iParam1))
		func_362(unk2, 1099008783, &unk, false);

	return unk;
}

int func_947(int iParam0, int iParam1) // Position - 0x20B5A Signature - 22 02 0A 00 00 2F 67 04 4B 05 66 00 39 04 B2 00 6A 8B 09 00 4B 05 66 01 39 4F BE 00 69 8B 11 00 62 4B 05 2D 37 A2
{
	int num;
	var unk;

	num = 0;

	if (func_360(&unk, iParam0) && func_389(&unk, iParam1))
		func_362(unk, -1052341598, &num, false);

	return num;
}

int func_948(int iParam0) // Position - 0x20B90 Signature - 22 01 04 00 00 2F 67 03 66 00 3C 16
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -3:
			num = 1300413597;
			break;
	
		case -2:
			num = joaat("GOLD");
			break;
	
		case 0:
			num = joaat("Challenge");
			break;
	
		case 1:
			num = joaat("feature");
			break;
	
		case 2:
			num = joaat("MISSION_STORY");
			break;
	
		case 3:
			num = joaat("MISSION_PROCEDURAL");
			break;
	
		case 4:
			num = joaat("MISSION_FETCH");
			break;
	
		case 5:
			num = joaat("MISSION_MINIGAME");
			break;
	
		case 6:
			num = joaat("MISSION_FREE_MODE_EVENT");
			break;
	
		case 7:
			num = joaat("MISSION_UGC");
			break;
	
		case 8:
			num = joaat("MISSION_BEAT");
			break;
	
		case 9:
			num = joaat("Property");
			break;
	
		case 10:
			num = joaat("Recipe");
			break;
	
		case 11:
			num = joaat("TITLE");
			break;
	
		case 12:
			num = joaat("SHOP");
			break;
	
		case 13:
			num = joaat("GFH_GIVERS");
			break;
	
		case 14:
			num = joaat("GFH_LOCATIONS");
			break;
	
		case 15:
			num = 1332629624;
			break;
	
		case 16:
			num = 1746212499;
			break;
	
		case 17:
			num = joaat("GVO_UNLOCKS");
			break;
	
		case 18:
			num = 1151893103;
			break;
	
		case 19:
			num = -312924468;
			break;
	}

	return num;
}

int func_949(int iParam0, var uParam1) // Position - 0x20D05 Signature - 22 02 1F 00 00 66 00 66
{
	var unk;

	if (func_979(iParam0, uParam1, &unk))
		return unk.f_2;

	return 0;
}

int func_950(int iParam0) // Position - 0x20D22 Signature - 22 01 03 00 00 66 00 3C 1E
{
	switch (iParam0)
	{
		case joaat("IWD_INF"):
			return 19;
	
		case joaat("COACH_HOLDUP_KIDNAPPING"):
			return 27;
	
		case joaat("ASSASSINATION_PVP_POSSE"):
			return 25;
	
		case -1381389849:
			return 5;
	
		case joaat("AMBUSH"):
			return 10;
	
		case -867762478:
			return 14;
	
		case joaat("IWD_1V1"):
			return 17;
	
		case -668110249:
			return 4;
	
		case -621956193:
			return 11;
	
		case joaat("ASSASSINATION_PVP_PLAYER"):
			return 24;
	
		case joaat("COACH_HOLDUP_ROBBERY"):
			return 26;
	
		case joaat("GANG_EVENT_IMPROMPTU_RACE"):
			return 13;
	
		case joaat("ROBBERY_TRAIN"):
			return 2;
	
		case joaat("IWD_PF"):
			return 20;
	
		case joaat("ASSASSINATION"):
			return 22;
	
		case 377122918:
			return 8;
	
		case 536699577:
			return 6;
	
		case 541147288:
			return 7;
	
		case 602097925:
			return 15;
	
		case joaat("IWD_PLF"):
			return 21;
	
		case joaat("GANG_EVENT_SHOWDOWN"):
			return 12;
	
		case 1158195437:
			return 9;
	
		case 1336837986:
			return 0;
	
		case joaat("IWD_PVP"):
			return 18;
	
		case 1443764480:
			return 3;
	
		case 1518877519:
			return 30;
	
		case joaat("ASSASSINATION_TRACKING"):
			return 23;
	
		case joaat("IWD_F"):
			return 28;
	
		case joaat("TRAIN_ESCORT"):
			return 16;
	
		case 2124631622:
			return 1;
	
		default:
		
	}

	return -1;
}

int func_951(int iParam0) // Position - 0x20E78 Signature - 22 01 03 00 00 66 00 3C 07 00 18
{
	switch (iParam0)
	{
		case joaat("fence_building"):
			return 6;
	
		case joaat("blackjack"):
			return 0;
	
		case joaat("clean_stalls"):
			return 5;
	
		case joaat("Poker"):
			return 2;
	
		case joaat("dominoes"):
			return 1;
	
		case joaat("fillet"):
			return 3;
	
		case joaat("milking_cow"):
			return 4;
	
		default:
		
	}

	return -1;
}

int func_952(int iParam0) // Position - 0x20ECF Signature - 22 01 03 00 00 66 00 3C 13
{
	switch (iParam0)
	{
		case joaat("HUNT_THE_POSSE_LEADER"):
			return 18;
	
		case joaat("KING_OF_THE_RAILS"):
			return 6;
	
		case joaat("CONDOR_EGG"):
			return 12;
	
		case joaat("DEAD_DROP"):
			return 2;
	
		case joaat("KING_OF_THE_CASTLE"):
			return 5;
	
		case joaat("HOT_PROPERTY"):
			return 4;
	
		case joaat("PV_CHALLENGE_HERBALIST"):
			return 15;
	
		case joaat("ESCAPED_CONVICTS"):
			return 8;
	
		case -142235487:
			return 7;
	
		case -27117790:
			return 13;
	
		case joaat("PV_CHALLENGE_BIGGEST_FISH"):
			return 16;
	
		case joaat("ROUND_UP"):
			return 9;
	
		case joaat("PV_CHALLENGE_FLYING_BIRD"):
			return 17;
	
		case joaat("GOLDEN_HAT"):
			return 3;
	
		case 1653867545:
			return 14;
	
		case joaat("ARCHERY"):
			return 0;
	
		case joaat("CHALLENGES"):
			return 1;
	
		case joaat("WRECKAGE"):
			return 11;
	
		case joaat("SUPPLY_TRAIN"):
			return 10;
	
		default:
		
	}

	return -1;
}

int func_953(int iParam0) // Position - 0x20FA9 Signature - 22 01 03 00 00 66 00 3C 0D 00 DC
{
	switch (iParam0)
	{
		case -1641798436:
			return 4;
	
		case joaat("UGC_MAJOR_ID_MOONSHINE_COOP"):
			return 9;
	
		case joaat("UGC_MAJOR_ID_LBM"):
			return 8;
	
		case joaat("UGC_MAJOR_ID_DBG_RACE"):
			return 2;
	
		case 352400957:
			return 5;
	
		case 434282564:
			return 11;
	
		case 787592898:
			return 7;
	
		case 1039801657:
			return 10;
	
		case 1211286129:
			return 6;
	
		case 1228993410:
			return 12;
	
		case joaat("UGC_MAJOR_ID_DBG_DEATHMATCH"):
			return 1;
	
		case 2006131499:
			return 3;
	
		case joaat("UGC_MAJOR_ID_DBG_VERSUS"):
			return 0;
	
		default:
		
	}

	return 0;
}

int func_954(int iParam0) // Position - 0x21041 Signature - 22 01 03 00 00 66 00 3C 26
{
	switch (iParam0)
	{
		case -1968391995:
			return 34;
	
		case joaat("intro_generic"):
			return 2;
	
		case -1797632736:
			return 36;
	
		case joaat("Collector"):
			return 12;
	
		case -1317631038:
			return 27;
	
		case -862833187:
			return 23;
	
		case -713504854:
			return 19;
	
		case joaat("intro_char"):
			return 1;
	
		case joaat("intro_freemode"):
			return 4;
	
		case joaat("season006"):
			return 16;
	
		case joaat("season005"):
			return 13;
	
		case -171568028:
			return 33;
	
		case -89188661:
			return 24;
	
		case joaat("hunter"):
			return 10;
	
		case joaat("trader"):
			return 11;
	
		case 67219675:
			return 31;
	
		case joaat("outlaw"):
			return 9;
	
		case joaat("vipseason006"):
			return 17;
	
		case 547199896:
			return 22;
	
		case 591458137:
			return 29;
	
		case joaat("BountyHunter"):
			return 7;
	
		case 696644969:
			return 26;
	
		case joaat("vipseason005"):
			return 14;
	
		case 753957709:
			return 20;
	
		case joaat("NULL"):
			return -1;
	
		case joaat("teamster"):
			return 6;
	
		case 1054483531:
			return 21;
	
		case 1322114923:
			return 3;
	
		case joaat("normal"):
			return 0;
	
		case joaat("intro_clay2"):
			return 5;
	
		case 1539627774:
			return 28;
	
		case joaat("moonshiner"):
			return 15;
	
		case joaat("gunslinger"):
			return 8;
	
		case 1792833819:
			return 25;
	
		case 1837071987:
			return 30;
	
		case 1885832251:
			return 32;
	
		case 1976336482:
			return 18;
	
		case 2042305612:
			return 35;
	
		default:
		
	}

	return -1;
}

BOOL func_955(int iParam0) // Position - 0x211EB Signature - 22 01 03 00 00 66 00 2F 7E 6A 8B 06 00 66 00 6D 24
{
	return iParam0 >= 0 && iParam0 < 36;
}

void func_956(int iParam0) // Position - 0x21201 Signature - 22 01 03 00 00 66 00 5D 03
{
	func_610(&(Global_1119235[iParam0 /*35*/].f_16));
	return;
}

BOOL func_957(Any* panParam0, int iParam1, int iParam2) // Position - 0x21217 Signature - 22 03 08 00 00 66 01 6D 1F 59 67 05 66 01 6D 1F 47 67 06 66 05 66 00 17 01 66 06 03 09 00 31 67 07 66 05 66 00 63 01 66 06 03 08 01
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(panParam0->[num], offset);
	MISC::CLEAR_BIT(&panParam0->[num], offset);
	return isBitSet;
}

int func_958(int iParam0) // Position - 0x21249 Signature - 22 01 03 00 00 66 00 3C 03 00 00 00 00 00 0F 00 01 00 00 00 11 00 02 00 00 00 13 00 68 18 00 37
{
	switch (iParam0)
	{
		case 0:
			return joaat("Townsfolk");
	
		case 1:
			return joaat("aggressive");
	
		case 2:
			return joaat("uni_criminal");
	
		default:
		
	}

	return 0;
}

void func_959(Player plParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x21287 Signature - 22 06 16
{
	Player player;
	int num;
	Player i;
	Player player1;
	var value;
	BOOL flag;
	var unk;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (func_980(player, iParam1, iParam5))
		num = 1;

	if (Global_1072759.f_21353.f_1[player /*8*/] != 2)
	{
		if (!Global_1295666.f_17[player])
		{
			func_832(plParam0);
			return;
		}
	
		NETWORK::_0x51951DE06C0D1C40(plParam0, 2);
		Global_1072759.f_21353.f_1[player /*8*/] = 2;
		num = 1;
	}

	if (iParam2 && num)
	{
		for (i = 0; i <= 31; i = i + 1)
		{
			player1 = PLAYER::INT_TO_PLAYERINDEX(i);
		
			if (i != Global_1295666 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(player1))
			{
				if (GANG::_NETWORK_IS_IN_MY_GANG(player1))
				{
					if (bParam3)
					{
						SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, i);
						flag = true;
					}
				}
				else if (GANG::NETWORK_IS_IN_SAME_GANG(player1, plParam0))
				{
					if (bParam4)
					{
						SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, i);
						flag = true;
					}
				
					if (i != player)
						func_959(player1, iParam1, 0, true, false, 0);
				}
			}
		}
	
		if (flag)
		{
			unk.f_6 = 255;
			unk.f_4 = 1;
			unk.f_6 = plParam0;
			unk.f_7 = iParam1;
			func_981(&unk, value);
		}
	}

	return;
}

BOOL func_960(Hash hParam0, Hash hParam1) // Position - 0x213C2 Signature - 22 02 04 00 00 66 00 11 39
{
	if (!func_767(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

int func_961(Hash hParam0, BOOL bParam1) // Position - 0x213F8 Signature - 22 02 04 00 00 66 00 39 C0
{
	if (func_848(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_982();
		else
			return 1;

	return 0;
}

BOOL func_962(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2142F Signature - 22 05 07 00 00 66 00 42
{
	return func_419(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_963(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x2144A Signature - 22 03 09 00 00 66
{
	var unk;

	if (func_983(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_964(BOOL bParam0) // Position - 0x2146B Signature - 22 01 04 00 00 66 00 39 4F 22 01 67 03 66 03 11 0B
{
	int num;

	num = func_593(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_595(271701509, func_418(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_595(271701509, func_418(bParam0), 12999093, false);
}

BOOL func_965(Hash hParam0, int iParam1) // Position - 0x214D5 Signature - 22 02 08 00 00 66 00 2F
{
	Hash hash;
	int num;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || iParam1 == 0)
		return false;

	num = func_848(hParam0);

	if (num == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(num);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(num, i, &hash))
			if (func_984(hParam0, iParam1, hash))
				return true;
	}

	return false;
}

BOOL func_966(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x21542 Signature - 22 08 0A 00 00 4B
{
	return func_985(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

void func_967(Any* panParam0) // Position - 0x21558 Signature - 22 01 03 00 00 66 00 2F 39 0C 03 02 66 00 09
{
	func_928(panParam0, 0);
	func_928(panParam0, 1);
	func_928(panParam0, 3);
	func_926(panParam0);
	return;
}

void func_968(Any* panParam0) // Position - 0x2157B Signature - 22 01 03 00 00 66 00 39 E5
{
	func_927(panParam0);
	func_986(panParam0, 0, 3);
	return;
}

void func_969(Any* panParam0, int iParam1) // Position - 0x21591 Signature - 22 02 04 00 00 66 00 80 04
{
	MISC::SET_BIT(&(panParam0->f_4), iParam1);
	return;
}

void func_970(Any* panParam0) // Position - 0x215A3 Signature - 22 01 03 00 00 66 00 2F 39 0C 03 02 66 00 2F 39 91 15 02 66 00 09 39 91 15 02 66 00 42
{
	func_928(panParam0, 0);
	func_969(panParam0, 0);
	func_969(panParam0, 1);
	func_969(panParam0, 4);
	func_969(panParam0, 5);
	return;
}

void func_971(Any* panParam0) // Position - 0x215CE Signature - 22 01 03 00 00 66 00 09 39 0C 03 02 66 00 11
{
	func_928(panParam0, 1);
	func_969(panParam0, 2);
	func_969(panParam0, 3);
	func_969(panParam0, 6);
	func_969(panParam0, 7);
	func_931(panParam0, 2);
	return;
}

void func_972(Any* panParam0) // Position - 0x21600 Signature - 22 01 03 00 00 66 00 2F 39 0C 03 02 66 00 2F 39 91 15 02 66 00 09 39 91 15 02 66 00 11
{
	func_928(panParam0, 0);
	func_969(panParam0, 0);
	func_969(panParam0, 1);
	func_969(panParam0, 2);
	return;
}

void func_973(Any* panParam0) // Position - 0x21624 Signature - 22 01 03 00 00 66 00 09 39 0C 03 02 66 00 39
{
	func_928(panParam0, 1);
	func_926(panParam0);
	return;
}

void func_974(Any* panParam0) // Position - 0x21639 Signature - 22 01 03 00 00 66 00 11 39 0C
{
	func_928(panParam0, 2);
	func_969(panParam0, 3);
	return;
}

void func_975(Any* panParam0) // Position - 0x2164F Signature - 22 01 03 00 00 66 00 1D 39
{
	func_928(panParam0, 3);
	func_969(panParam0, 4);
	return;
}

void func_976(Any* panParam0) // Position - 0x21665 Signature - 22 01 03 00 00 66 00 2F 39 91
{
	func_969(panParam0, 0);
	func_969(panParam0, 1);
	return;
}

void func_977(Any* panParam0) // Position - 0x2167B Signature - 22 01 03 00 00 66 00 11 39 91
{
	func_969(panParam0, 2);
	func_969(panParam0, 3);
	return;
}

void func_978(Any* panParam0) // Position - 0x21691 Signature - 22 01 03 00 00 66 00 42 39 91
{
	func_969(panParam0, 4);
	func_969(panParam0, 5);
	return;
}

BOOL func_979(int iParam0, var uParam1, var uParam2) // Position - 0x216A7 Signature - 22 03 0A 00 00 66 00 66
{
	var unk;

	if (func_987(iParam0, uParam1, &unk))
		func_988(&unk, iParam0, uParam2);
	else
		return false;

	return true;
}

BOOL func_980(Player plParam0, int iParam1, int iParam2) // Position - 0x216CE Signature - 22 03 05 00 00 66 00 5D 77
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 < iParam1)
	{
		if (iParam2 != 0)
			Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = iParam2;
		else
			Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = Global_1295666.f_16;
	
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = iParam1;
		return true;
	}
	else if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 == iParam1)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = Global_1295666.f_16;
		return true;
	}

	return false;
}

void func_981(Any* panParam0, var uParam1) // Position - 0x2175F Signature - 22 02 04 00 00 4B 01 03 05 00 AE 05 8B 03 00 50 02 00 6D BA
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 186;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 8, 2, &uParam1);
	func_989(*panParam0);
	return;
}

int func_982() // Position - 0x2179F Signature - 22 00 02 00 00 37 20
{
	if (func_990(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

BOOL func_983(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x217BC Signature - 22 04 07 00 00 2F
{
	int inventoryId;

	inventoryId = func_593(false);
	*panParam1 = { func_595(hParam0, func_920(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_984(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x21801 Signature - 22 03 05 00 00 66 02 37
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, iParam1, hParam2);
}

BOOL func_985(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x21834 Signature - 22 05 07 00 00 66 00 03
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_593(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

void func_986(Any* panParam0, int iParam1, int iParam2) // Position - 0x2186E Signature - 22 03 06 00 00 66 01 2F
{
	int i;

	if (iParam1 < 0)
		iParam1 = 0;

	if (iParam2 < iParam1)
		iParam2 = panParam0->f_2 - 1;

	for (i = iParam1; i <= iParam2; i = i + 1)
	{
		func_969(panParam0, i);
	}

	return;
}

BOOL func_987(int iParam0, var uParam1, Any* panParam2) // Position - 0x218AA Signature - 22 03 05 00 00 5D F8 89 11 27 07 66 02 32 37 A7
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = -1096981081;
	panParam2->f_3 = func_948(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_988(Any* panParam0, int iParam1, var uParam2) // Position - 0x218DE Signature - 22 03 06 00 00 66 01 66 02
{
	var unk;

	*uParam2 = iParam1;
	panParam0->f_2 = -611386243;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), panParam0);
	panParam0->f_2 = -2140901307;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, panParam0))
		uParam2->f_2 = unk;

	panParam0->f_2 = -2140901307;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_11), panParam0);
	panParam0->f_2 = 1292053410;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_19), panParam0);
	panParam0->f_2 = 1234058424;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_3), panParam0);
	return;
}

void func_989(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x21958 Signature - 22 08 0A 00 00 50
{
	return;
}

int func_990(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x21960 Signature - 22 04 06 00 00 66 00 39 93
{
	if (func_991(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_593(bParam1), hParam0, bParam3);
}

BOOL func_991(Hash hParam0) // Position - 0x21993 Signature - 22 01 03 00 00 66 00 03 05 01
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

