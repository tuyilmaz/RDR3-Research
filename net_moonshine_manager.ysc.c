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

	if (!func_2())
		func_3();

	while (!func_2())
	{
		func_4();
		BUILTIN::WAIT(0);
	}

	while (!func_5())
	{
		BUILTIN::WAIT(0);
	}

	while (!SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(1440))
	{
		BUILTIN::WAIT(0);
	}

	func_6(&Global_1297061);
	func_7(&Global_1297600);
	func_8(&Global_1297229);
	func_9(false);
	func_10();
	return;
}

void func_1() // Position - 0x76 Signature - 22 00 03 00 00 03 01 00 70
{
	int gameTimer;

	gameTimer = MISC::GET_GAME_TIMER();
	func_11(32, -1);
	func_12();

	if (func_13())
		func_10();

	func_14();
	func_15(false);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	return;
}

BOOL func_2() // Position - 0xAA Signature - 22 00 02 00 00 2F 2F
{
	if (func_16(false, false))
		return true;

	return false;
}

void func_3() // Position - 0xC0 Signature - 22 00 03 00 00 2F 67 02 66 02 11 8A 11
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		func_17(i, true);
	}

	return;
}

void func_4() // Position - 0xE2 Signature - 22 00 02 00 00 03 01 00 75
{
	if (!NETWORK::NETWORK_IS_SESSION_ACTIVE() || !func_18())
		return;

	switch (Global_1297229)
	{
		case 0:
			if (Global_1297441 != 1)
				return;
		
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))))
				func_19(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
			else if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
				func_19(PLAYER::PLAYER_ID());
			else
				return;
		
			func_20();
			func_21(1);
			Global_1297229 = 1;
			break;
	
		case 1:
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_22()))
				func_19(PLAYER::PLAYER_ID());
		
			func_23();
			func_24();
			func_25();
			func_26();
			func_27();
			func_28();
			func_29();
			func_30();
			func_31();
			func_32();
			func_33();
			break;
	}

	return;
}

BOOL func_5() // Position - 0x1B4 Signature - 22 00 04 00 00 2F 67
{
	int i;
	BOOL flag;

	flag = false;

	for (i = 0; i < 2; i = i + 1)
	{
		if (!func_34(i, &Global_1297229.f_201.f_1[i /*4*/]))
			flag = true;
		else
			func_35(i, &Global_1297229.f_201.f_1[i /*4*/], 0);
	}

	return !flag;
}

void func_6(int* piParam0) // Position - 0x203 Signature - 22 01 04 00 00 66 03
{
	var unk;

	*piParam0 = unk;
	return;
}

void func_7(Any anParam0) // Position - 0x210 Signature - 22 01 04 00 00 2F 67 03 66 03
{
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		func_36(&anParam0->[i /*87*/]);
	}

	return;
}

void func_8(int iParam0) // Position - 0x235 Signature - 22 01 D7
{
	var unk;

	unk.f_3.f_2 = 32;
	unk.f_3.f_2.f_1 = 255;
	unk.f_3.f_2.f_1.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	unk.f_3.f_132 = 32;
	unk.f_3.f_132.f_1 = 255;
	unk.f_3.f_132.f_1.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_200 = 255;
	unk.f_201.f_1 = 2;
	unk.f_201.f_1.f_1.f_1 = -1;
	unk.f_201.f_1.f_1.f_2 = -1;
	unk.f_201.f_1.f_1.f_4.f_1 = -1;
	unk.f_201.f_1.f_1.f_4.f_2 = -1;
	*iParam0 = { unk };
	return;
}

void func_9(BOOL bParam0) // Position - 0x455 Signature - 22 01 03 00 00 6D
{
	func_37(37, false);
	func_37(33, false);

	if (bParam0)
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1297441.f_44.f_2))
			VOLUME::DELETE_VOLUME(Global_1297441.f_44.f_2);
	
		if (VOLUME::DOES_VOLUME_EXIST(Global_1297441.f_44.f_3))
			VOLUME::DELETE_VOLUME(Global_1297441.f_44.f_3);
	}

	return;
}

void func_10() // Position - 0x4A6 Signature - 22 00 02 00 00 03 00
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_11(int iParam0, int iParam1) // Position - 0x4B2 Signature - 22 02 04 00 00 03 01 00 9E
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_10();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	return;
}

int func_12() // Position - 0x4CF Signature - 22 00 05 00 00 03
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
			func_10();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_10();
					break;
			
				case 2:
					func_10();
					break;
			
				case 3:
					func_10();
					break;
			
				case 4:
					func_10();
					break;
			
				default:
					break;
			}
		}
	
		if (scriptStatus == 3 || scriptStatus == 4 || scriptStatus == 5 || scriptStatus == 6)
			func_10();
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			func_10();
	
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
			func_10();
	
		if (func_38() == 0)
			if (func_39())
				func_10();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_10();

	return 1;
}

BOOL func_13() // Position - 0x5E0 Signature - 22 00 02 00 00 5D 17 00 18 27 0A
{
	if (Global_1572887.f_10)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	return false;
}

BOOL func_14() // Position - 0x60E Signature - 22 00 03 00 00 2F 67 02 5D
{
	BOOL flag;

	flag = false;
	func_6(&Global_1297061);
	func_7(&Global_1297600);
	func_8(&Global_1297229);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1297061, 1, 45);

	if (!func_40(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1297061), 1, "g_mpMoonshineHostData"))
		flag = true;

	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1297600, 2785, 46);

	if (!func_41(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1297600[0 /*87*/]), 2785, "g_mpMoonshinePlayerData"))
		flag = true;

	func_42();
	return !flag;
}

void func_15(BOOL bParam0) // Position - 0x682 Signature - 22 01 0D
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
					func_10();
					break;
			
				case 2:
					func_10();
					break;
			
				case 3:
					func_10();
					break;
			
				case 4:
					func_10();
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
			func_10();
			return;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

BOOL func_16(BOOL bParam0, BOOL bParam1) // Position - 0x74B Signature - 22 02 05 00 00 5D 17
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

BOOL func_17(int iParam0, BOOL bParam1) // Position - 0x82B Signature - 22 02 04 00 00 66 00 39 41
{
	if (func_43(iParam0))
	{
		if (MISC::IS_BIT_SET(Global_1297229.f_201, iParam0))
			MISC::CLEAR_BIT(&(Global_1297229.f_201), iParam0);
	
		if (bParam1)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1297229.f_201.f_1[iParam0 /*4*/], false))
			{
				SCRIPTS::TERMINATE_THREAD(Global_1297229.f_201.f_1[iParam0 /*4*/]);
				Global_1297229.f_201.f_1[iParam0 /*4*/] = 0;
				Global_1297229.f_201.f_1[iParam0 /*4*/].f_1 = -1;
				Global_1297229.f_201.f_1[iParam0 /*4*/].f_3 = 0;
			}
		}
	
		return func_44(iParam0) == 0;
	}

	return false;
}

BOOL func_18() // Position - 0x8B7 Signature - 22 00 02 00 00 5D 17 00 18 27 0E 08
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_3;
}

void func_19(Player plParam0) // Position - 0x8D3 Signature - 22 01 03 00 00 66 00 5D 4D CB 13 6C C8
{
	Global_1297229.f_200 = plParam0;
	return;
}

void func_20() // Position - 0x8E3 Signature - 22 00 03 00 00 39 79 15 00 67 02 66 02 39 DF 15 00 4D
{
	int num;

	num = func_45();
	func_46(num);

	if (func_47(6))
		Global_1297441.f_44.f_1 = 1;
	else
		Global_1297441.f_44.f_1 = 0;

	func_49(func_48());
	return;
}

void func_21(int iParam0) // Position - 0x91C Signature - 22 01 03 00 00 66 00 5D 4D CB 13 6C 01
{
	Global_1297229.f_1 = iParam0;
	return;
}

Player func_22() // Position - 0x92C Signature - 22 00 02 00 00 5D 4D CB 13 27
{
	return Global_1297229.f_200;
}

void func_23() // Position - 0x93A Signature - 22 00 04 00 00 03
{
	int num;
	int num2;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (num < 0 || num >= 32)
		return;

	if (!func_50(PLAYER::PLAYER_ID(), true))
	{
		Global_1297600[num /*87*/].f_1 = -1;
		return;
	}

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1297229.f_200))
	{
		Global_1297600[num /*87*/].f_1 = -1;
		return;
	}

	num2 = Global_1297600[Global_1297229.f_200 /*87*/].f_5.f_12;

	if (Global_1297600[num /*87*/].f_1 == num2)
		return;

	Global_1297600[num /*87*/].f_1 = num2;
	return;
}

void func_24() // Position - 0x9C4 Signature - 22 00 09 00
{
	Player player;
	int uniqueIntForPlayer;
	int num;
	Player gangLeader;
	int num2;
	Player gangLeader2;
	int num3;

	if (!func_18() || !NETWORK::NETWORK_IS_SESSION_ACTIVE() || !ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	player = PLAYER::PLAYER_ID();
	uniqueIntForPlayer = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(player);

	if (GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_149[Global_1295666]))
	{
		num = uniqueIntForPlayer;
	
		if (num != Global_1297600[Global_1295666 /*87*/])
			Global_1297600[Global_1295666 /*87*/] = num;
	}
	else if (GANG::NETWORK_IS_GANG_ACTIVE(Global_1295666.f_10))
	{
		gangLeader = GANG::NETWORK_GET_GANG_LEADER(Global_1295666.f_10);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
		{
			num2 = func_51(gangLeader, true);
		
			if (Global_1297600[Global_1295666 /*87*/] != num2)
				Global_1297600[Global_1295666 /*87*/] = num2;
		}
	}
	else if (GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(player)))
	{
		gangLeader2 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(player));
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader2))
		{
			num3 = func_51(gangLeader2, true);
		
			if (Global_1297600[Global_1295666 /*87*/] != num3)
				Global_1297600[Global_1295666 /*87*/] = num3;
		}
	}

	func_52();
	return;
}

void func_25() // Position - 0xAC9 Signature - 22 00 02 00 00 25 00 10
{
	if (!func_53(4096))
	{
		if (func_54(PLAYER::PLAYER_ID(), 0, true) == 0)
		{
			if (func_55())
			{
				func_49(7);
				func_56(4096);
			}
		}
	}

	return;
}

void func_26() // Position - 0xAFD Signature - 22 00 02 00 00 39 67
{
	func_57();
	func_58();
	func_59();
	func_60();
	func_61();
	return;
}

void func_27() // Position - 0xB19 Signature - 22 00 05 00 00 5D 4D CB 13 27
{
	float num;
	int num2;
	Player gangLeader;

	if (Global_1297229.f_1 == 4)
	{
		func_62();
	}
	else if (Global_1297229.f_1 == 3)
	{
		func_63();
	}
	else
	{
		num2 = func_64(Global_1297229.f_200, true);
	
		if (num2 == -1)
			num = 100000000f;
		else
			num = func_65(num2);
	
		if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		{
			func_66(num);
		}
		else
		{
			gangLeader = GANG::NETWORK_GET_GANG_LEADER(Global_1295666.f_10);
			func_67(gangLeader, num);
		}
	}

	return;
}

void func_28() // Position - 0xB90 Signature - 22 00 02 00 00 03 01 00 40 09 39 B6 17 00 8B 57
{
	if (func_50(PLAYER::PLAYER_ID(), true))
	{
		if (func_44(1) == 0 && !func_68() && !func_69())
		{
			if (func_53(262144))
				func_70(262144);
		
			func_71(128);
			func_71(2048);
			func_70(8192);
			func_70(33554432);
			func_72(1);
		}
	}
	else
	{
		switch (func_44(1))
		{
			case 0:
				if (func_53(262144))
				{
					if (!func_73())
					{
						func_49(7);
						func_70(262144);
					}
				}
				break;
		
			case 3:
				if (!func_53(8192))
				{
					func_56(8192);
					func_56(262144);
				}
				break;
		}
	}

	return;
}

void func_29() // Position - 0xC52 Signature - 22 00 03 00 00 2F 67 02 66 02 11 8A 21
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		func_75(i, &Global_1297229.f_201.f_1[i /*4*/], func_74(i));
	}

	return;
}

void func_30() // Position - 0xC84 Signature - 22 00 02 00 00 03 01 00 40 09 39 B6 17 00 8B 09
{
	if (func_50(PLAYER::PLAYER_ID(), true))
	{
		func_76(true);
		func_77();
	}

	return;
}

void func_31() // Position - 0xCA1 Signature - 22 00 02 00 00 85 32 C5 13 5D 32
{
	if (func_50(Global_1295666.f_149[Global_1295666], true))
		NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();

	return;
}

void func_32() // Position - 0xCC1 Signature - 22 00 03 00 00 39 3B
{
	int num;

	func_78();
	func_79();
	func_80();

	if (func_50(PLAYER::PLAYER_ID(), true))
	{
		func_81();
		func_82();
		func_83();
		func_84();
	}

	num = func_85(Global_1295666.f_149[Global_1295666]);

	switch (num)
	{
		case 0:
			func_86();
			func_87();
			func_88();
			func_89();
		
			if (!func_90(false))
			{
				func_91(1);
				return;
			}
		
			func_92(&(Global_1297441.f_157), 134217728);
		
			if (func_93(1065353216))
			{
				func_91(7);
			}
			else if (func_94())
			{
				func_95();
				func_91(4);
			}
			else
			{
				func_91(2);
			}
			break;
	
		case 1:
			if (func_90(false))
			{
				func_92(&(Global_1297441.f_157), 134217728);
				func_91(2);
			}
			break;
	
		case 2:
			if (!func_96(Global_1295666, 256))
				func_97(256);
		
			if (func_98(Global_1295666.f_5) > 0)
			{
				func_95();
				func_91(4);
				return;
			}
		
			if (func_99(Global_1295666.f_5) > 0)
				func_100();
		
			if (func_101())
				func_91(3);
			break;
	
		case 3:
			if (func_102(&(Global_1297062.f_9)) != 3)
				return;
		
			if (func_98(Global_1295666.f_5) == 0)
				return;
		
			func_103();
			func_95();
			func_104(Global_1297062.f_9.f_1, true);
			func_91(4);
			break;
	
		case 4:
			func_105();
		
			if (func_106(&(Global_1297062.f_1)) > Global_1297062.f_4)
				if (func_93(1065353216) || func_107())
					func_91(6);
				else
					func_98(Global_1295666.f_5) == 0;
			break;
	
		case 5:
			func_105();
		
			if (func_96(Global_1295666, 64))
			{
				func_110(&(Global_1297062.f_1));
				func_91(7);
			}
			break;
	
		case 6:
			if (func_108(&(Global_1297062.f_9)))
				return;
		
			if (func_93(1065353216))
			{
				if (func_109())
				{
					func_91(5);
				}
				else
				{
					func_110(&(Global_1297062.f_1));
					func_91(7);
				}
			}
			else
			{
				func_111(&(Global_1297062.f_1));
				func_91(4);
			}
			break;
	
		case 7:
			if (!func_96(Global_1295666, 524288))
				func_97(524288);
		
			if (func_96(Global_1295666, 4))
				func_112(4);
		
			if (!func_96(Global_1295666, 128))
			{
				func_113();
				func_114();
				func_97(128);
			}
		
			if (func_96(Global_1295666, 8))
			{
				func_112(131072);
				func_112(128);
				func_97(2);
				func_91(8);
			}
			break;
	
		case 8:
			if (func_96(Global_1295666, 8))
				func_112(8);
		
			if (func_96(Global_1295666, 512))
			{
				func_115();
				func_91(9);
			}
			break;
	
		case 9:
			if (func_116())
				func_91(2);
			break;
	
		case 10:
			if (GANG::NETWORK_IS_GANG_ID_VALID(Global_1295666.f_10) && GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_149[Global_1295666]))
			{
				if (!func_90(true))
				{
					func_91(1);
				}
				else if (func_93(1065353216))
				{
					func_91(7);
				}
				else if (func_94())
				{
					func_95();
					func_91(4);
				}
				else
				{
					func_91(2);
				}
			}
			break;
	}

	return;
}

void func_33() // Position - 0x1021 Signature - 22 00 03 00 00 03 01 00 17
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (num < 0 || num >= 32)
		return;

	if (Global_1297600[num /*87*/].f_1 == -1)
		return;

	POPULATION::_0xF45E46DEECF7DF6E(10208, 0, 0, -1, -1);
	return;
}

BOOL func_34(int iParam0, int iParam1) // Position - 0x1060 Signature - 22 02 04 00 00 66 01 76
{
	if (SCRIPTS::DOES_THREAD_EXIST(*iParam1))
	{
		if (!SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(*iParam1))
			SCRIPTS::_REQUEST_THREAD_EXIT(*iParam1);
	
		return false;
	}
	else
	{
		*iParam1 = 0;
		iParam1->f_1 = -1;
	}

	func_17(iParam0, true);
	return true;
}

void func_35(int iParam0, int iParam1, int iParam2) // Position - 0x10A0 Signature - 22 03 05 00 00 66 02 66
{
	iParam1->f_3 = iParam2;
	return;
}

void func_36(var uParam0) // Position - 0x10AE Signature - 22 01 5A
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_5 = 10;
	unk.f_5.f_12 = -1;
	unk.f_5.f_13 = -1;
	unk.f_19.f_1 = 11;
	unk.f_42 = 8;
	unk.f_53 = 8;
	unk.f_53.f_1.f_1 = -1;
	unk.f_53.f_1.f_4.f_1 = -1;
	unk.f_53.f_1.f_4.f_4.f_1 = -1;
	unk.f_53.f_1.f_4.f_4.f_4.f_1 = -1;
	unk.f_53.f_1.f_4.f_4.f_4.f_4.f_1 = -1;
	unk.f_53.f_1.f_4.f_4.f_4.f_4.f_4.f_1 = -1;
	unk.f_53.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = -1;
	unk.f_53.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = -1;
	*uParam0 = { unk };
	return;
}

void func_37(int iParam0, BOOL bParam1) // Position - 0x114D Signature - 22 02 08 00 00 66 00 39 4D
{
	BOOL flag;
	Entity propForScenarioPoint;
	int i;
	int num;

	flag = func_117(iParam0) && !bParam1;

	if (!flag && !func_118(iParam0, 65536))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_21))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1051832.f_92[iParam0 /*75*/].f_21))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1051832.f_92[iParam0 /*75*/].f_21, true, true);
		
			ENTITY::DELETE_ENTITY(&(Global_1051832.f_92[iParam0 /*75*/].f_21));
			Global_1051832.f_92[iParam0 /*75*/].f_21 = 0;
		}
	
		if (STREAMING::IS_MODEL_VALID(Global_1051832.f_92[iParam0 /*75*/].f_19))
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_1051832.f_92[iParam0 /*75*/].f_19);
	
		Global_1051832.f_92[iParam0 /*75*/].f_19 = 0;
	}
	else if (func_119(iParam0, 67108864) && ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_21))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(Global_1051832.f_92[iParam0 /*75*/].f_21);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24))
	{
		NETWORK::_NETWORK_SPAWN_CONFIG_REMOVE_EXCLUSION_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
	
		if (func_118(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_25))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
	
		if (func_118(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_25);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_27))
		if (func_118(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_27);

	if (func_119(iParam0, 16384) && !flag)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_6))
		{
			propForScenarioPoint = TASK::GET_PROP_FOR_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
		
			if (ENTITY::DOES_ENTITY_EXIST(propForScenarioPoint))
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&propForScenarioPoint);
		
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6);
		}
	
		Global_1051832.f_92[iParam0 /*75*/].f_6 = 0;
		func_120(iParam0, 16384);
	}

	Global_1051832.f_92[iParam0 /*75*/] = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_3 = { 0f, 0f, 0f };
	Global_1051832.f_92[iParam0 /*75*/].f_48 = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_73 = 1;
	Global_1915656.f_3[iParam0 /*447*/].f_16 = 0;
	num = func_121(iParam0);

	if (num >= 15)
	{
		Global_1915656.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		for (i = 0; i < num; i = i + 1)
		{
			func_122(Global_1051832.f_92[iParam0 /*75*/].f_31[i]);
			Global_1051832.f_92[iParam0 /*75*/].f_31[i] = 0;
		}
	
		Global_1051832.f_92[iParam0 /*75*/].f_47 = 0;
	}

	func_123(iParam0);

	if (func_118(iParam0, 262144))
		Global_1051832.f_92[iParam0 /*75*/].f_49 = 262144;
	else
		func_124(iParam0);

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24) && func_125(iParam0, 2))
	{
		VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1051832.f_92[iParam0 /*75*/].f_24, joaat("REL_NO_RELATIONSHIP"));
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	}

	Global_1051832.f_92[iParam0 /*75*/].f_50 = Global_1051832.f_92[iParam0 /*75*/].f_50 & 8;
	Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 & 2113536;
	func_126(iParam0);
	Global_1051832.f_92[iParam0 /*75*/].f_18 = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_2 = -1;
	return;
}

int func_38() // Position - 0x14FB Signature - 22 00 02 00 00 5D 17 00 18 27 0E 50
{
	return Global_1572887.f_14;
}

BOOL func_39() // Position - 0x1509 Signature - 22 00 02 00 00 5D FD
{
	return Global_1051645.f_8;
}

BOOL func_40(int iParam0, int iParam1, char* sParam2) // Position - 0x1517 Signature - 22 03 05 00 00 09 50 03 01 22 03
{
	return true;
}

BOOL func_41(int iParam0, int iParam1, char* sParam2) // Position - 0x1520 Signature - 22 03 05 00 00 09 50 03 01 22 00
{
	return true;
}

void func_42() // Position - 0x1529 Signature - 22 00 03 00 00 39 79 15 00 67 02 66 02 39 DF 15 00 39
{
	int num;

	num = func_45();
	func_46(num);
	func_127();
	return;
}

BOOL func_43(int iParam0) // Position - 0x1541 Signature - 22 01 03 00 00 66 00 08 20
{
	return iParam0 > -1 && iParam0 < 2;
}

int func_44(int iParam0) // Position - 0x1556 Signature - 22 01 03 00 00 66 00 39 41 15 00 8B 11
{
	if (func_43(iParam0))
		return Global_1297229.f_201.f_1[iParam0 /*4*/].f_3;

	return 0;
}

int func_45() // Position - 0x1579 Signature - 22 00 02 00 00 5D 21 CC 13 80 3E 39 7F 38 00 05
{
	if (!func_128(&(Global_1297441.f_62)))
		return -1;

	switch (func_129(Global_1297441.f_62, 405591388, 0, true))
	{
		case -127194573:
			return 2;
	
		case 786277441:
			return 1;
	
		case 1273401170:
			return 3;
	
		case 1480239309:
			return 4;
	
		case 1580598647:
			return 0;
	
		default:
		
	}

	return -1;
}

void func_46(int iParam0) // Position - 0x15DF Signature - 22 01 03 00 00 66 00 03 01 00 40
{
	Global_1297600[PLAYER::PLAYER_ID() /*87*/].f_5.f_12 = iParam0;
	return;
}

BOOL func_47(int iParam0) // Position - 0x15F7 Signature - 22 01 05 00 00 66 00 2F 15 04 00 2F 50 01 01 03
{
	Hash unlockHash;
	int num;

	if (iParam0 == 0)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	unlockHash = func_130(iParam0);

	if (unlockHash == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
	{
		num = func_131(1, iParam0);
	
		if (num == 0)
			return false;
	
		if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
			return true;
	}

	return false;
}

int func_48() // Position - 0x1651 Signature - 22 00 02 00 00 5D 21 CC 13 80 3E 39 7F 38 00 8B 58
{
	if (func_128(&(Global_1297441.f_62)))
	{
		switch (func_132(Global_1297441.f_62, 897456793, true, -1))
		{
			case -1647055373:
				return 0;
		
			case -1262899184:
				return 3;
		
			case -660379727:
				return 2;
		
			case -553448238:
				return 4;
		
			case 378713226:
				return 5;
		
			case 729277565:
				return 1;
		
			default:
			
		}
	}

	return 0;
}

void func_49(int iParam0) // Position - 0x16BF Signature - 22 01 08
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	num2 = func_133();
	num3 = func_134();
	num4 = func_135() + 1;
	num5 = func_136();

	if (!func_55())
		num4 = 0;

	func_137(3, num2, true);
	func_137(1, num3, true);
	func_137(0, num4, true);

	if (num4 > 0)
		func_137(5, 1, true);
	else
		func_137(5, 0, true);

	if (num3 > 0)
		func_137(4, 0, true);
	else if (iParam0 == 5)
		func_137(4, 3, true);
	else if (num4 > 1)
		func_137(4, 2, true);
	else
		func_137(4, 1, true);

	if (num4 > 1)
		func_137(2, 1, true);
	else
		func_137(2, 0, true);

	if (iParam0 != 7)
		Global_1297600[num /*87*/].f_5.f_11 = iParam0;

	if (func_138())
		func_137(6, 1, true);
	else
		func_137(6, 0, true);

	func_137(9, num5, true);
	func_139();
	return;
}

BOOL func_50(Player plParam0, BOOL bParam1) // Position - 0x17B6 Signature - 22 02 05 00 00 66 00 67 04 66 04
{
	Player player;

	player = plParam0;

	if (player >= 0 && player < 32)
		return func_140(Global_1297600[player /*87*/].f_86, bParam1);

	return false;
}

int func_51(Player plParam0, BOOL bParam1) // Position - 0x17EA Signature - 22 02 04 00 00 66 01 8B 0E 00 66 00 03 05 00 7A 05 8B 04 00 08 50 02 01 66 00 5D C0 CC 13 17
{
	if (bParam1)
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
			return -1;

	return Global_1297600[plParam0 /*87*/];
}

void func_52() // Position - 0x180D Signature - 22 00 06 00 00 5D
{
	int num;
	Player i;
	Player player;
	Ped playerPed;

	if (Global_1297229.f_211 == 0)
	{
		Global_1297229.f_211 = MISC::GET_SYSTEM_TIME();
		return;
	}
	else if (MISC::GET_SYSTEM_TIME() - Global_1297229.f_211 > 1000)
	{
		Global_1297229.f_211 = 0;
	}
	else
	{
		return;
	}

	num = Global_1297600[Global_1295666 /*87*/].f_3;

	if (num == -1)
		return;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player) && i != Global_1295666)
		{
			playerPed = PLAYER::GET_PLAYER_PED(player);
		
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed) || ENTITY::IS_ENTITY_DEAD(playerPed))
			{
			}
			else if (Global_1297600[i /*87*/].f_3 == num && !func_50(player, 256))
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(playerPed, true, false, num);
			}
			else
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(playerPed, false, false, 256);
			}
		}
	}

	return;
}

BOOL func_53(BOOL bParam0) // Position - 0x18EC Signature - 22 01 03 00 00 5D 21 CC 13 27
{
	return func_140(Global_1297441.f_157, bParam0);
}

int func_54(Player plParam0, int iParam1, BOOL bParam2) // Position - 0x1900 Signature - 22 03 05 00 00 66 02 8B 0E
{
	if (bParam2)
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			return 0;

	return Global_1297600[plParam0 /*87*/].f_5[iParam1];
}

BOOL func_55() // Position - 0x1929 Signature - 22 00 02 00 00 37 A4
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("ROLE_PROGRESSION_MOONSHINE_COOK_SETUP")) || !UNLOCK::UNLOCK_IS_UNLOCKED(joaat("ROLE_PROGRESSION_MOONSHINE_SUPPLIES_SETUP")))
		return false;

	return true;
}

void func_56(int iParam0) // Position - 0x1953 Signature - 22 01 03 00 00 5D 21 CC 13 80 9D 66 00 39 BD
{
	func_92(&(Global_1297441.f_157), iParam0);
	return;
}

void func_57() // Position - 0x1967 Signature - 22 00 03 00 00 03 01 00 40
{
	BOOL flag;

	flag = func_50(PLAYER::PLAYER_ID(), 512);

	if (Global_1297441.f_131.f_5)
	{
		if (flag)
			func_71(512);
	
		return;
	}

	if (func_141(512))
	{
		if (flag)
			func_71(512);
	
		return;
	}

	if (func_142() || func_143())
		if (flag)
			func_71(512);
	else if (!flag)
		func_144(512);

	return;
}

void func_58() // Position - 0x19DC Signature - 22 00 52
{
	int i;
	int num;
	BOOL flag;
	Player player;
	var unk;
	BOOL flag2;
	const char* str;
	Hash hashKey;
	Hash hash;
	int num2;
	var unk17;

	if (Global_1297229.f_1 == 3)
		return;

	if (Global_1297229.f_3.f_1 >= 32)
		return;

	if (Global_1297441.f_131.f_5)
		return;

	for (i = 0; i <= Global_1297229.f_3.f_1 - 1; i = i + 1)
	{
		if (!func_140(Global_1297229.f_3.f_2[i /*4*/].f_3, 8))
		{
			num = i;
			flag = true;
			break;
		}
	}

	if (!flag)
		return;

	if (num < 0 || num >= 32)
	{
		Global_1297229.f_3.f_1 = 0;
		return;
	}

	player = Global_1297229.f_3.f_2[num /*4*/];

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		return;

	if (func_145(255))
		return;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 128);

	switch (func_146(&unk, player, 1))
	{
		case 1:
			Global_1297229.f_3.f_2[num /*4*/].f_2 = 0;
			flag2 = true;
			break;
	
		case 2:
			if (!func_140(Global_1297229.f_3.f_2[num /*4*/].f_3, true))
			{
				func_147(player);
				Global_1297229.f_3.f_2[num /*4*/].f_2 = MISC::GET_GAME_TIMER();
				func_148(&(Global_1297229.f_3.f_2[num /*4*/].f_3), 1);
			}
		
			return;
	
		case 3:
			if (Global_1297229.f_3.f_2[num /*4*/].f_2 == 0)
			{
				Global_1297229.f_3.f_2[num /*4*/].f_2 = MISC::GET_GAME_TIMER();
				return;
			}
			else if (MISC::GET_GAME_TIMER() - Global_1297229.f_3.f_2[num /*4*/].f_2 > 3000)
			{
				func_92(&(Global_1297229.f_3.f_2[num /*4*/].f_3), 2);
				flag2 = true;
			}
			else
			{
				return;
			}
			break;
	
		case 4:
			flag2 = true;
			Global_1297229.f_3.f_2[num /*4*/].f_2 = 0;
			break;
	}

	str = func_149(unk);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		hashKey = MISC::GET_HASH_KEY(str);
		hash = hashKey;
		num2 = 0;
	}
	else
	{
		hashKey = joaat("mp_lobby_textures");
		hash = joaat("temp_pedshot");
		num2 = 1;
	}

	if (flag2)
	{
		unk17 = 1;
		unk17.f_1 = 1;
		unk17.f_2 = joaat("COLOR_WHITE");
		unk17.f_4 = -1;
		unk17.f_5 = -1;
		unk17.f_6 = -1;
		unk17.f_10 = -1;
		unk17.f_11 = -1;
		unk17.f_12 = -1;
		unk17.f_18 = joaat("COLOR_WHITE");
		unk17.f_19 = joaat("COLOR_WHITE");
		unk17.f_25 = 300;
		unk17.f_33.f_8 = joaat("COLOR_WHITE");
		unk17.f_33.f_11 = joaat("COLOR_WHITE");
		unk17.f_33.f_12 = 8000;
		unk17.f_33.f_13 = 1511356879;
		unk17.f_33.f_15 = joaat("player_menu");
		unk17.f_33.f_21 = 1;
		unk17.f_26 = 9;
		unk17.f_27 = player;
		unk17.f_16 = func_151(PLAYER::GET_PLAYER_NAME(player), func_150(player, true, -1, false));
		unk17.f_17 = MISC::VAR_STRING(2, "MS_INVITE_MAIN");
		unk17.f_20 = hashKey;
		unk17.f_21 = hash;
		unk17.f_25 = 120;
		unk17.f_32 = NETWORK::NETWORK_IS_FEATURE_SUPPORTED(0);
		unk17.f_31 = "IB_GAMERCARD";
		unk17.f_30 = 22;
		unk17.f_33.f_2 = func_151(PLAYER::GET_PLAYER_NAME(player), func_150(player, true, -1, false));
		unk17.f_33.f_3 = MISC::VAR_STRING(2, "MS_INVITE_MAIN");
		unk17.f_33.f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_NOTIFICATION");
		unk17.f_33.f_6 = hashKey;
		unk17.f_33.f_7 = hash;
		unk17.f_33.f_17 = "HUD_Toast_Soundset";
		unk17.f_33.f_18 = "Toast_On";
		unk17.f_24 = 0;
		unk17.f_33.f_21 = num2;
		func_92(&(Global_1297229.f_3.f_2[num /*4*/].f_3), 8);
	
		if (!func_153(func_152(unk17), Global_1297229.f_3.f_2[num /*4*/]))
			return;
	}

	return;
}

void func_59() // Position - 0x1D5A Signature - 22 00 02 00 00 5D 4D CB 13 80
{
	if (Global_1297229.f_3.f_1 > 0)
		if (func_68() || func_69())
			func_154();

	return;
}

void func_60() // Position - 0x1D83 Signature - 22 00 07 00 00 5D
{
	var unk;
	int i;

	if (Global_1297229.f_3 == 0)
	{
		Global_1297229.f_3 = MISC::GET_GAME_TIMER();
		return;
	}
	else if (MISC::GET_GAME_TIMER() - Global_1297229.f_3 < 3000)
	{
		return;
	}

	Global_1297229.f_3 = 0;
	unk = 255;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297229.f_3.f_2[i /*4*/].f_1) && func_140(Global_1297229.f_3.f_2[i /*4*/].f_3, 4))
		{
			Global_1297229.f_3.f_2[i /*4*/] = { unk };
			Global_1297229.f_3.f_1 = Global_1297229.f_3.f_1 - 1;
		}
	}

	return;
}

void func_61() // Position - 0x1E2D Signature - 22 00 05 00 00 5D 4D CB 13 80
{
	var unk;
	int i;

	if (Global_1297229.f_3.f_131 == 0)
	{
		Global_1297229.f_3.f_131 = MISC::GET_GAME_TIMER();
		return;
	}
	else if (MISC::GET_GAME_TIMER() - Global_1297229.f_3.f_131 < 2000)
	{
		return;
	}

	Global_1297229.f_3.f_131 = 0;
	unk = 255;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (Global_1297229.f_3.f_132[i /*2*/] != 255 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1297229.f_3.f_132[i /*2*/]) || Global_1297229.f_3.f_132[i /*2*/].f_1 != 0 && MISC::GET_SYSTEM_TIME() - Global_1297229.f_3.f_132[i /*2*/].f_1 >= 120000 || func_155(i))
			Global_1297229.f_3.f_132[i /*2*/] = { unk };
	}

	return;
}

void func_62() // Position - 0x1F06 Signature - 22 00 05 00 00 2F 67 02 39 2C 09 00 67 03 66 03 09 39 A6 1F 00 67 04 66 02 39 56 15 00 1D 72 16
{
	int num;
	Player player;
	int num2;

	num = 0;
	player = func_22();
	num2 = func_64(player, true);

	if (func_44(num) != 3)
	{
		func_156(num2);
		func_72(num);
		func_144(32);
	}
	else if (!func_50(PLAYER::PLAYER_ID(), 32))
	{
		func_17(0, false);
	}

	return;
}

void func_63() // Position - 0x1F55 Signature - 22 00 05 00 00 2F 67 02 39 2C 09 00 67 03 66 03 09 39 A6 1F 00 67 04 66 02 39 56 15 00 1D 72 10
{
	int num;
	Player player;
	int num2;

	num = 0;
	player = func_22();
	num2 = func_64(player, true);

	if (func_44(num) != 3)
	{
		func_156(num2);
		func_72(num);
	}
	else if (func_53(8) && func_44(num) != 4)
	{
		func_17(0, false);
	}

	return;
}

int func_64(Player plParam0, BOOL bParam1) // Position - 0x1FA6 Signature - 22 02 04 00 00 66 01 8B 0E 00 66 00 03 05 00 7A 05 8B 04 00 08 50 02 01 66 00 5D C0 CC 13 63
{
	if (bParam1)
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
			return -1;

	return Global_1297600[plParam0 /*87*/].f_5.f_12;
}

float func_65(int iParam0) // Position - 0x1FCD Signature - 22 01 03 00 00 66 00 5D 21 CC 13 80
{
	return Global_1297441.f_6.f_17[iParam0];
}

void func_66(float fParam0) // Position - 0x1FE1 Signature - 22 01 05 00 00 2F
{
	int num;
	int num2;

	num = 0;
	num2 = func_44(num);

	if (func_53(128))
	{
		if (num2 != 3)
		{
			func_72(0);
			func_21(1);
		}
	
		return;
	}

	if (Global_1297441.f_66 != -1 && func_64(PLAYER::PLAYER_ID(), false) == Global_1297441.f_66)
	{
		if (num2 != 3)
		{
			if (fParam0 > 80f)
				return;
		
			if (func_68())
				return;
		
			if (func_69())
				return;
		
			func_72(0);
			func_21(1);
		}
		else if (func_65(Global_1297441.f_66) > 100f)
		{
			func_17(0, false);
		}
	}
	else
	{
		if (num2 != 3)
			return;
	
		if (func_50(PLAYER::PLAYER_ID(), true))
			return;
	
		func_17(0, false);
	}

	return;
}

void func_67(Player plParam0, float fParam1) // Position - 0x20A3 Signature - 22 02 05 00 00 2F
{
	int num;

	num = 0;

	if (!func_50(PLAYER::PLAYER_ID(), 8))
	{
		if (func_44(num) != 3)
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			{
				if (func_50(PLAYER::PLAYER_ID(), 4) && func_50(plParam0, 2))
				{
					if (func_64(func_22(), true) == -1)
						return;
				
					func_19(plParam0);
					func_72(0);
					func_21(2);
					func_156(Global_1297600[plParam0 /*87*/].f_5.f_12);
					func_144(8);
					func_71(4);
					return;
				}
				else if (func_64(plParam0, true) == Global_1297441.f_66 && fParam1 <= 80f && !func_68() && !func_69() && !func_157() || func_53(128))
				{
					func_72(0);
					func_21(1);
				}
			}
		}
		else
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0) && func_50(plParam0, 2) && func_50(PLAYER::PLAYER_ID(), 4))
			{
				if (Global_1297229.f_1 == 3)
				{
					return;
				}
				else if (Global_1297229.f_1 != 2)
				{
					func_21(2);
					func_144(8);
					func_71(4);
					return;
				}
			}
		
			if (fParam1 > 100f && Global_1297229.f_1 == 1 || Global_1297229.f_1 == 0 && !func_50(PLAYER::PLAYER_ID(), true))
				func_17(0, false);
		}
	}
	else
	{
		if (func_44(num) == 3 && fParam1 > 100f && Global_1297229.f_1 == 1 || Global_1297229.f_1 == 0)
			func_17(0, false);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0) && !func_50(plParam0, 2))
		{
			func_71(8);
			func_71(16);
			func_21(1);
		}
	}

	return;
}

BOOL func_68() // Position - 0x226F Signature - 22 00 02 00 00 85 32 C5 13 5D 82
{
	return Global_263042[Global_1295666 /*65*/] > 2;
}

BOOL func_69() // Position - 0x2283 Signature - 22 00 02 00 00 85 00
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_158(Global_1051268) && Global_1572887.f_8 & true != 0)
		return true;

	return false;
}

void func_70(int iParam0) // Position - 0x22DB Signature - 22 01 03 00 00 5D 21 CC 13 80 9D 66 00 39 CE
{
	func_159(&(Global_1297441.f_157), iParam0);
	return;
}

void func_71(int iParam0) // Position - 0x22EF Signature - 22 01 03 00 00 03 01 00 17 5D C0 CC 13 63 57 80 56 66 00 39 CE
{
	func_159(&(Global_1297600[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_86), iParam0);
	return;
}

BOOL func_72(int iParam0) // Position - 0x2309 Signature - 22 01 03 00 00 66 00 39 41 15 00 8B 2D
{
	if (func_43(iParam0))
		if (!MISC::IS_BIT_SET(Global_1297229.f_201, iParam0))
			MISC::SET_BIT(&(Global_1297229.f_201), iParam0);
		else
			return func_44(iParam0) == 3;

	return false;
}

BOOL func_73() // Position - 0x2348 Signature - 22 00 07 00 00 03
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		return false;

	num = func_51(PLAYER::PLAYER_ID(), true);
	num2 = func_64(PLAYER::PLAYER_ID(), true);

	for (i = 0; i < 32; i = i + 1)
	{
		if (func_160(PLAYER::INT_TO_PLAYERINDEX(i), &num4, &num3, true))
			if (num4 == num2 && num3 == num)
				return true;
	}

	return false;
}

BOOL func_74(int iParam0) // Position - 0x23B2 Signature - 22 01 03 00 00 66 00 39 41 15 00 8B 0F
{
	if (func_43(iParam0))
		return MISC::IS_BIT_SET(Global_1297229.f_201, iParam0);

	return false;
}

void func_75(int iParam0, int iParam1, BOOL bParam2) // Position - 0x23D3 Signature - 22 03 06 00 00 2F 67 05 03
{
	BOOL flag;

	flag = false;

	if (!func_161(PLAYER::PLAYER_ID(), true))
		flag = true;
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_22()))
		flag = true;

	switch (iParam1->f_3)
	{
		case 0:
			if (bParam2 && !flag)
				func_35(iParam0, iParam1, 1);
			break;
	
		case 1:
			if (bParam2 && !flag)
			{
				if (func_162(iParam0))
					func_35(iParam0, iParam1, 2);
			}
			else
			{
				func_163(iParam0);
				func_35(iParam0, iParam1, 0);
			}
			break;
	
		case 2:
			if (bParam2 && !flag)
			{
				if (func_164(iParam0, iParam1))
				{
					func_163(iParam0);
					func_35(iParam0, iParam1, 3);
				}
			}
			else
			{
				func_163(iParam0);
				func_35(iParam0, iParam1, 0);
			}
			break;
	
		case 3:
			if (flag || !bParam2 || !SCRIPTS::DOES_THREAD_EXIST(*iParam1))
				if (func_34(iParam0, iParam1))
					func_35(iParam0, iParam1, 0);
				else
					func_35(iParam0, iParam1, 4);
			break;
	
		case 4:
			if (func_34(iParam0, iParam1))
				func_35(iParam0, iParam1, 0);
			break;
	}

	return;
}

void func_76(BOOL bParam0) // Position - 0x2507 Signature - 22 01 03 00 00 66 00 8B 05
{
	if (bParam0)
		func_165(1);

	func_165(0);
	MISC::SET_BIT(&(Global_1958634.f_1), 0);
	return;
}

void func_77() // Position - 0x2529 Signature - 22 00 02 00 00 09 5D
{
	Global_1896762.f_325.f_5 = 1;
	return;
}

void func_78() // Position - 0x253B Signature - 22 00 12
{
	var unk;
	int num;
	int num2;

	if (Global_1297062.f_32 == 0)
		Global_1297062.f_32 = MISC::GET_SYSTEM_TIME();
	else if (MISC::GET_SYSTEM_TIME() - Global_1297062.f_32 > 2000)
		Global_1297062.f_32 = MISC::GET_SYSTEM_TIME();
	else
		return;

	if (!func_128(&(Global_1297441.f_62)))
	{
		func_166(0);
		func_167(0);
		return;
	}

	unk.f_9 = -1591664384;

	if (func_168(Global_1297441.f_62, 1039159916, &unk, 0, true))
		func_166(unk.f_11);
	else
		func_166(0);

	if (func_168(Global_1297441.f_62, 1111816631, &unk, 0, true))
		func_167(unk.f_11);
	else
		func_167(0);

	num = func_169();
	func_170(num);
	num2 = func_85(Global_1295666.f_149[Global_1295666]);

	if (num2 == 4 || num2 == 5 || num2 == 6 || num2 == 7 || num2 == 8 || num2 == 10)
		func_171();

	if (func_50(PLAYER::PLAYER_ID(), 4096))
	{
		func_103();
		func_104(Global_1297062.f_9.f_1, false);
		func_71(4096);
	}

	return;
}

void func_79() // Position - 0x2676 Signature - 22 00 03 00 00 85 32 C5 13 5D 32 C5 13 80 95 17 01 39 4D 2A 00 67 02 66
{
	int num;

	num = func_85(Global_1295666.f_149[Global_1295666]);

	if (num == 10)
		return;

	if (num <= 0)
		return;

	if (!GANG::NETWORK_IS_GANG_ACTIVE(Global_1295666.f_10))
		return;

	if (GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_149[Global_1295666]))
		return;

	if (func_64(Global_1295666.f_149[Global_1295666], true) != -1)
		func_172(898, true);

	func_91(10);
	return;
}

void func_80() // Position - 0x26ED Signature - 22 00 03 00 00 85 32 C5 13 5D 32 C5 13 80 95 17 01 39 4D 2A 00 67 02 85
{
	int num;

	num = func_85(Global_1295666.f_149[Global_1295666]);

	if (func_96(Global_1295666, 16))
	{
		if (func_96(Global_1295666, 32))
		{
			Global_1297062.f_8 = 600f;
			Global_1297062.f_33 = Global_1297062.f_33 + 1;
			func_173(&(Global_1297062.f_5), true);
			func_112(32);
			func_112(64);
		}
	
		if (num != 4 && num != 6)
			func_112(16);
	}
	else if (num == 4 || num == 6)
	{
		func_97(16);
	}

	if (!func_96(Global_1295666, 64))
	{
		if (func_106(&(Global_1297062.f_5)) > Global_1297062.f_8)
		{
			func_110(&(Global_1297062.f_5));
			func_97(64);
		}
	}

	return;
}

void func_81() // Position - 0x27B3 Signature - 22 00 0A 00 00 5D A6
{
	Player gangLeader;
	Player player;
	int num;
	Hash hash;
	int num2;
	Hash hash2;
	int num3;
	int num4;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297062.f_20))
		return;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(Global_1295666.f_10);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
		return;

	player = gangLeader;
	hash = Global_1297600[player /*87*/].f_19.f_15;
	num2 = Global_1297600[player /*87*/].f_19.f_16;
	hash2 = Global_1297600[Global_1295666 /*87*/].f_19.f_17;

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297062.f_21))
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1297062.f_21, hash);

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297062.f_24))
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1297062.f_24, num2);

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297062.f_23))
	{
		num = func_174(gangLeader);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1297062.f_23, num);
	}

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297062.f_26))
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1297062.f_26, 100);

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297062.f_27))
	{
		num3 = func_175(hash2);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1297062.f_27, num3);
	}

	if (func_109())
	{
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297062.f_29))
		{
			num4 = BUILTIN::FLOOR(func_106(&(Global_1297062.f_5)));
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1297062.f_29, num4);
		}
	
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297062.f_28))
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1297062.f_28, false);
	}
	else if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297062.f_28))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1297062.f_28, true);
	}

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297062.f_31))
		if (func_96(gangLeader, 262144))
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1297062.f_31, true);
		else
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1297062.f_31, false);

	return;
}

void func_82() // Position - 0x2938 Signature - 22 00 02 00 00 39 96
{
	if (func_176() && func_177(Global_33, Global_1051832.f_92[33 /*75*/].f_25, true, 0))
	{
		if (!func_96(Global_1295666, 8192))
		{
			HUD::_ENABLE_HUD_CONTEXT(557238883);
			func_97(8192);
		}
	}
	else if (func_96(Global_1295666, 8192))
	{
		HUD::_DISABLE_HUD_CONTEXT(557238883);
		func_112(8192);
	}

	return;
}

void func_83() // Position - 0x29A1 Signature - 22 00 03 00 00 1D
{
	char* str;

	if (Global_1297600[Global_1295666 /*87*/].f_5[3] > 0)
	{
		if (!func_178(897))
		{
			if (func_96(Global_1295666, 524288) && func_177(Global_33, Global_1297600[Global_1295666 /*87*/].f_19.f_22, true, 0))
			{
				str = func_179(Global_1297600[Global_1295666 /*87*/].f_19.f_20);
				func_180(897, str, false);
			}
		}
	}

	return;
}

void func_84() // Position - 0x2A10 Signature - 22 00 02 00 00 09 39 70
{
	if (func_90(true))
		if (!func_178(899))
			if (func_177(Global_33, Global_1297600[Global_1295666 /*87*/].f_19.f_22, true, 0))
				func_172(899, false);

	return;
}

int func_85(Player plParam0) // Position - 0x2A4D Signature - 22 01 04 00 00 08
{
	int num;

	num = -1;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return num;

	return Global_1297062;
}

void func_86() // Position - 0x2A6B Signature - 22 00 0A 00 00 5D 32
{
	Player gangLeader;
	Hash hash;
	Hash itemSlotMaxCount;
	Hash hash2;
	Hash itemSlotMaxCount2;
	Hash hash3;
	Hash hash4;
	Hash hash5;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(Global_1295666.f_10);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
		return;

	hash = Global_1297600[Global_1295666 /*87*/].f_19.f_15;
	itemSlotMaxCount = INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(joaat("provision_role_moonshiner_mash_low"), 1039159916);
	hash2 = Global_1297600[Global_1295666 /*87*/].f_19.f_16;
	itemSlotMaxCount2 = INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(-545779394, 1111816631);
	hash3 = Global_1297600[Global_1295666 /*87*/].f_19.f_17;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297062.f_20))
		Global_1297062.f_20 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Moonshine_ProgressBars");

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297062.f_21))
		Global_1297062.f_21 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1297062.f_20, "MoonshineMashValue", hash);

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297062.f_22))
		Global_1297062.f_22 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1297062.f_20, "MoonshineMashMaximum", itemSlotMaxCount);

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297062.f_23))
	{
		hash5 = func_174(gangLeader);
		Global_1297062.f_23 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1297062.f_20, "MoonshineMashColorID", hash5);
	}

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297062.f_24))
		Global_1297062.f_24 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1297062.f_20, "MoonshineBottlesValue", hash2);

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297062.f_25))
		Global_1297062.f_25 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1297062.f_20, "MoonshineBottlesMaximum", itemSlotMaxCount2);

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297062.f_26))
		Global_1297062.f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1297062.f_20, "MoonshineBottlesThresholdValue", 100);

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297062.f_27))
	{
		hash4 = func_175(hash3);
		Global_1297062.f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1297062.f_20, "MoonshineFlavor", hash4);
	}

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297062.f_28))
		Global_1297062.f_28 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1297062.f_20, "MoonshineFlavorTimeMeterShowLabel", false);

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297062.f_29))
		Global_1297062.f_29 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1297062.f_20, "FlavoringTimeMeterValue", 0);

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297062.f_30))
		Global_1297062.f_30 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1297062.f_20, "FlavoringTimeMeterMaximum", 600);

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297062.f_31))
		Global_1297062.f_31 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1297062.f_20, "MoonshineShowCash", false);

	return;
}

void func_87() // Position - 0x2C91 Signature - 22 00 03 00 00 39 F1 4B 00 67 02 66 02 2F
{
	int num;

	num = func_169();

	if (num != 0)
		func_97(64);

	Global_1297062.f_33 = 0;
	return;
}

void func_88() // Position - 0x2CB5 Signature - 22 00 04 00 00 39 FF 4F 00 67 02 39 30 50 00 67 03 66 02 37 D4 EA 55 31 0B 6A 05 8B 09 00 66 03 37 3E 11 78 DF 0B 30 8B 13
{
	int num;
	int num2;

	num = func_181();
	num2 = func_182();

	if (num == joaat("provision_role_moonshiner_mash_low") || num2 == -545779394)
	{
		func_183(joaat("provision_role_moonshiner_mash_low"));
		func_97(1024);
	}
	else if (num == joaat("provision_role_moonshiner_mash_medium") || num2 == 1532695640)
	{
		func_183(joaat("provision_role_moonshiner_mash_medium"));
		func_97(2048);
	}
	else if (num == joaat("provision_role_moonshiner_mash_high") || num2 == 1847740267)
	{
		func_183(1847740267);
		func_97(4096);
	}

	return;
}

void func_89() // Position - 0x2D4D Signature - 22 00 02 00 00 85 32 C5 13 5D C0
{
	if (Global_1297600[Global_1295666 /*87*/].f_19.f_16 == 20)
		func_97(524288);

	return;
}

BOOL func_90(BOOL bParam0) // Position - 0x2D70 Signature - 22 01 03 00 00 66 00 8B 12
{
	if (bParam0)
		return func_140(Global_1297441.f_157, 134217728);

	if (UNLOCK::UNLOCK_IS_UNLOCKED(-319651633) && func_128(&(Global_1297441.f_62)))
		return true;

	return false;
}

void func_91(int iParam0) // Position - 0x2DAF Signature - 22 01 03 00 00 66 00 26
{
	Global_1297062 = iParam0;
	return;
}

void func_92(BOOL bParam0, BOOL bParam1) // Position - 0x2DBD Signature - 22 02 04 00 00 66 00 66 01 39 79
{
	func_184(bParam0, bParam1);
	return;
}

BOOL func_93(int iParam0) // Position - 0x2DCD Signature - 22 01 11
{
	var unk;

	unk.f_9 = -1591664384;

	if (func_168(Global_1297441.f_62, 1111816631, &unk, 0, true))
		if ((float)unk.f_11 >= iParam0 * BUILTIN::TO_FLOAT(INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(unk.f_4, 1111816631)))
			return true;

	return false;
}

BOOL func_94() // Position - 0x2E1C Signature - 22 00 03 00 00 5D 21 CC 13 80 3E 39 7F 38 00 05 8B 04 00 2F 50 00 01 42 5D 21 CC 13 80 3E 2D 37 6C 52 F0 3D 2F 09 39 B5 38 00 67 02 66 02 37
{
	Hash hash;

	if (!func_128(&(Global_1297441.f_62)))
		return false;

	hash = func_129(Global_1297441.f_62, 1039159916, 0, true);

	if (hash == joaat("provision_role_moonshiner_mash_low") || hash == joaat("provision_role_moonshiner_mash_medium") || hash == joaat("provision_role_moonshiner_mash_high"))
		return true;

	return false;
}

void func_95() // Position - 0x2E77 Signature - 22 00 02 00 00 25 00 01
{
	func_112(256);
	func_97(4);
	func_185();
	Global_1297062.f_33 = 0;
	Global_1297600[Global_1295666 /*87*/].f_19.f_18 = 0;
	Global_1297600[Global_1295666 /*87*/].f_19.f_20 = 0;
	return;
}

BOOL func_96(Player plParam0, BOOL bParam1) // Position - 0x2EB4 Signature - 22 02 04 00 00 66 00 2F 35 6A 05 8B 06 00 66 00 6D 20 7E 30 8B 04 00 2F
{
	if (plParam0 < 0 || plParam0 >= 32)
		return false;

	return func_140(Global_1297600[plParam0 /*87*/].f_19, bParam1);
}

void func_97(BOOL bParam0) // Position - 0x2EE2 Signature - 22 01 03 00 00 85 32 C5 13 5D C0 CC 13 63 57 27 13 66 00 39 7F 3E 00 05
{
	if (!func_140(Global_1297600[Global_1295666 /*87*/].f_19, bParam0))
		func_92(&(Global_1297600[Global_1295666 /*87*/].f_19), bParam0);

	return;
}

Hash func_98(Player plParam0) // Position - 0x2F15 Signature - 22 01 04 00 00 66 00 03 05 00 14 05 8B 04 00 2F 50 01 01 66 00 67 03 66 03 5D C0 CC 13 63 57 80 13 27 0F
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return 0;

	player = plParam0;
	return Global_1297600[player /*87*/].f_19.f_15;
}

Hash func_99(Player plParam0) // Position - 0x2F3B Signature - 22 01 04 00 00 66 00 03 05 00 14 05 8B 04 00 2F 50 01 01 66 00 67 03 66 03 5D C0 CC 13 63 57 80 13 27 10
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return 0;

	player = plParam0;
	return Global_1297600[player /*87*/].f_19.f_16;
}

void func_100() // Position - 0x2F61 Signature - 22 00 10
{
	var unk;

	unk.f_9 = -1591664384;

	if (func_168(Global_1297441.f_62, 1039159916, &unk, 0, true))
		return;

	if (func_168(Global_1297441.f_62, 1111816631, &unk, 0, true))
		func_186(unk.f_4, unk.f_11, 562618531, 1, true);

	return;
}

BOOL func_101() // Position - 0x2FBD Signature - 22 00 2A
{
	Hash hash;
	int num;
	Hash hash2;
	Hash hash3;
	int num2;
	var unk;
	var unk19;

	if (func_108(&(Global_1297062.f_9)))
		return false;

	hash = func_187();

	if (!func_188(hash, 0))
		return false;

	if (!func_128(&(Global_1297441.f_62)))
		return false;

	if (func_189(&(Global_1297441.f_62), 1039159916, true) > 0)
		return false;
	else if (func_189(&(Global_1297441.f_62), 1111816631, true) > 0)
		return false;

	num = 0;
	hash2 = 0;
	hash3 = func_190(hash, 0, true, -1, true);
	num2 = func_191(hash, hash3, true, false, true, 0);

	if (func_192(hash, &num, &hash2, false) && func_193(num, hash2, false, true) < num2)
	{
		unk.f_9 = 1;
		unk.f_11 = -1591664384;
	
		if (!func_194(&(Global_1297062.f_9), num, &unk, true, hash2, -1, false))
			return false;
	
		Global_1297062.f_19 = func_193(num, hash2, false, true);
		return true;
	}

	unk19.f_9 = 1;
	unk19.f_11 = -1591664384;

	if (!func_195(&(Global_1297062.f_9), hash, Global_1297441.f_62, 1039159916, 1, &unk19, true, hash3, -1, true))
		return false;

	Global_1297062.f_19 = num2;
	return true;
}

int func_102(int* piParam0) // Position - 0x30F9 Signature - 22 01 03 00 00 66 00 27 01
{
	return func_196(piParam0->f_1);
}

void func_103() // Position - 0x3109 Signature - 22 00 03 00 00 39 FF
{
	int num;

	num = func_181();
	Global_1297600[Global_1295666 /*87*/].f_19.f_19 = num;
	return;
}

void func_104(Any* panParam0, BOOL bParam1) // Position - 0x3127 Signature - 22 02 13
{
	var unk;
	int num;
	int num2;
	int num3;
	Any any;
	int num4;
	Hash hash;
	Any any2;
	int any3;
	int num5;
	int num6;
	int p10;

	func_197(panParam0, &unk);
	num = Global_1297600[Global_1295666 /*87*/].f_5.f_12;
	num2 = func_198(num);

	if (bParam1)
		num3 = 1535463323;
	else
		num3 = 733252738;

	if (bParam1)
		any = Global_1297062.f_19;

	num4 = Global_1297600[Global_1295666 /*87*/].f_19.f_19;
	hash = Global_1297600[Global_1295666 /*87*/].f_19.f_17;
	any2 = Global_1297600[Global_1295666 /*87*/].f_19.f_18;
	any3 = Global_1297062.f_33;
	num5 = func_199();
	num6 = Global_1297600[Global_1295666 /*87*/].f_19.f_16;
	p10 = Global_1297600[Global_1295666 /*87*/].f_5[0];
	TELEMETRY::_TELEMETRY_MOONSHINE_BREW(&unk, num2, num3, any, num4, hash, any2, any3, num5, num6, p10);
	return;
}

void func_105() // Position - 0x31EC Signature - 22 00 02 00 00 85 32 C5 13 42
{
	if (!func_96(Global_1295666, 4))
	{
		func_88();
		func_97(4);
	}

	return;
}

float func_106(var uParam0) // Position - 0x320A Signature - 22 01 03 00 00 66 00 39 5E 5B 00 05 8B 04 00 73
{
	if (!func_200(uParam0))
		return 0f;

	return BUILTIN::TO_FLOAT(func_201(uParam0)) * 0.001f;
}

BOOL func_107() // Position - 0x3230 Signature - 22 00 15
{
	Hash hash;
	Hash hash2;
	var unk;

	if (func_108(&(Global_1297062.f_9)))
		return 0;

	if (!func_128(&(Global_1297441.f_62)))
		return 0;

	hash = func_129(Global_1297441.f_62, 1039159916, 0, true);
	hash2 = 0;

	if (hash == joaat("provision_role_moonshiner_mash_high"))
		hash2 = 1847740267;
	else if (hash == joaat("provision_role_moonshiner_mash_medium"))
		hash2 = 1532695640;
	else if (hash == joaat("provision_role_moonshiner_mash_low"))
		hash2 = -545779394;
	else
		hash2 = -545779394;

	unk.f_9 = 1;
	unk.f_11 = -1591664384;

	if (func_195(&(Global_1297062.f_9), hash2, Global_1297441.f_62, 1111816631, 1, &unk, true, -489628648, -1, true))
		return 1;

	return 0;
}

BOOL func_108(int* piParam0) // Position - 0x32F5 Signature - 22 01 04 00 00 66 00 27
{
	int num;

	if (piParam0->f_1 == -1)
		return false;

	num = func_102(piParam0);

	if (num == 1 || num == 5)
		return true;

	return false;
}

BOOL func_109() // Position - 0x3327 Signature - 22 00 02 00 00 5D A6
{
	if (func_200(&(Global_1297062.f_5)))
		return true;

	return false;
}

void func_110(var uParam0) // Position - 0x3341 Signature - 22 01 03 00 00 2F 66 00 6C
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
	return;
}

void func_111(var uParam0) // Position - 0x3357 Signature - 22 01 03 00 00 66 00 2F 39 9F
{
	func_202(uParam0, 0);
	return;
}

void func_112(BOOL bParam0) // Position - 0x3366 Signature - 22 01 03 00 00 85 32 C5 13 5D C0 CC 13 63 57 27 13 66 00 39 7F 3E 00 8B
{
	if (func_140(Global_1297600[Global_1295666 /*87*/].f_19, bParam0))
		func_159(&(Global_1297600[Global_1295666 /*87*/].f_19), bParam0);

	return;
}

void func_113() // Position - 0x3398 Signature - 22 00 03 00 00 39 F1 4B 00 67 02 66 02 37
{
	Hash hash;

	hash = func_169();

	if (func_203(hash, 1372968408))
		func_205(func_204(joaat("made_recipe_type"), joaat("moonshine_recipe_regular")), 1);
	else if (func_203(hash, -710171994))
		func_205(func_204(joaat("made_recipe_type"), joaat("moonshine_recipe_improved")), 1);
	else if (func_203(hash, 956386416))
		func_205(func_204(joaat("made_recipe_type"), joaat("moonshine_recipe_special")), 1);

	return;
}

void func_114() // Position - 0x3412 Signature - 22 00 18
{
	int num;

	if (!func_206())
		return;

	num.f_8 = joaat("COLOR_WHITE");
	num.f_11 = joaat("COLOR_WHITE");
	num.f_12 = 8000;
	num.f_13 = 1511356879;
	num.f_15 = joaat("player_menu");
	num.f_21 = 1;
	num = 5;
	num.f_2 = MISC::VAR_STRING(2, "MOONSHINE_TITLE");
	num.f_3 = MISC::VAR_STRING(2, "MOONSHINE_PRODUCTION_COMPLETE");
	num.f_7 = joaat("moonshiner_workbench_moonshine");
	num.f_6 = joaat("toasts_mp_generic");
	num.f_8 = joaat("COLOR_WHITE");
	num.f_4 = "MOONSHINE_HOLD_INPUT_FOR_CAMP";
	num.f_18 = 0;
	num.f_17 = 0;
	num.f_13 = 2099367966;
	num.f_16 = 0;
	num.f_14 = 0;
	func_207(&num);
	return;
}

void func_115() // Position - 0x34C2 Signature - 22 00 02 00 00 73
{
	Global_1297062.f_4 = 0f;
	func_110(&(Global_1297062.f_1));
	func_110(&(Global_1297062.f_5));
	func_112(32);
	func_112(2048);
	func_112(1024);
	func_112(4096);
	func_112(64);
	func_112(128);
	func_112(2);
	func_112(512);
	func_112(65536);
	return;
}

BOOL func_116() // Position - 0x3520 Signature - 22 00 02 00 00 5D 32
{
	if (func_98(Global_1295666.f_5) == 0 && func_99(Global_1295666.f_5) == 0)
		return true;

	return false;
}

BOOL func_117(int iParam0) // Position - 0x354D Signature - 22 01 03 00 00 66 00 6D 1C
{
	if (iParam0 == 28 || iParam0 == 29 || iParam0 == 38 || iParam0 == 27 || iParam0 == 15 || iParam0 == 39)
		return true;

	if (func_118(iParam0, 65536))
		return true;

	return false;
}

BOOL func_118(int iParam0, int iParam1) // Position - 0x35AA Signature - 22 02 04 00 00 66 00 5D B8 0C 10 80 5C 63 4B 27 31
{
	return Global_1051832.f_92[iParam0 /*75*/].f_49 && iParam1 != false;
}

BOOL func_119(int iParam0, int iParam1) // Position - 0x35C3 Signature - 22 02 04 00 00 66 00 5D B8 0C 10 80 5C 63 4B 27 01
{
	return Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1 != false;
}

void func_120(int iParam0, int iParam1) // Position - 0x35DC Signature - 22 02 04 00 00 66 00 66 01 39 C3
{
	func_119(iParam0, iParam1);
	Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 - Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1;
	return;
}

int func_121(int iParam0) // Position - 0x3617 Signature - 22 01 03 00 00 66 00 5D B8
{
	return Global_1051832.f_92[iParam0 /*75*/].f_47;
}

void func_122(Hash hParam0) // Position - 0x362B Signature - 22 01 03 00 00 66 00 39 A2
{
	if (func_208(hParam0) && func_209())
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(hParam0);

	return;
}

void func_123(int iParam0) // Position - 0x364B Signature - 22 01 03 00 00 50
{
	return;
}

void func_124(int iParam0) // Position - 0x3653 Signature - 22 01 03 00 00 2F 66 00 5D
{
	Global_1051832.f_92[iParam0 /*75*/].f_49 = 0;
	return;
}

BOOL func_125(int iParam0, int iParam1) // Position - 0x3668 Signature - 22 02 04 00 00 66 00 08
{
	if (iParam0 == -1)
		return false;

	return func_210(Global_1051832.f_92[iParam0 /*75*/].f_50, iParam1);
}

void func_126(int iParam0) // Position - 0x368F Signature - 22 01 06 00 00 5D
{
	int i;
	int num;
	BOOL flag;

	if (Global_1051832.f_41 < 1)
		return;

	for (i = 0; i < Global_1051832.f_41; i = i + 1)
	{
		if (iParam0 == Global_1051832[i])
		{
			num = i;
			flag = true;
			break;
		}
	}

	if (!flag)
		return;

	Global_1051832.f_41 = Global_1051832.f_41 - 1;

	if (Global_1051832.f_41 < 0)
		Global_1051832.f_41 = 0;

	Global_1051832[num] = Global_1051832[Global_1051832.f_41];
	return;
}

void func_127() // Position - 0x370E Signature - 22 00 0C
{
	int num;
	int num2;
	Hash hash;
	Hash hash2;
	int arrayCount;
	int i;
	int num3;
	BOOL flag;
	int num4;
	int num5;

	num = func_64(PLAYER::GET_PLAYER_INDEX(), true);
	num2 = -1;
	arrayCount = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1940252.f_1556.f_8632.f_1);
	i = 0;
	num3 = -1;
	num4 = func_211();
	num5 = func_212();

	for (i = 0; i <= arrayCount - 1; i = i + 1)
	{
		num3 = DATABINDING::DATABINDING_READ_INT(Global_1940252.f_1556.f_8632.f_274[i]);
		num2 = num3;
		hash = func_213(num2);
		hash2 = func_190(hash, 0, true, -1, true);
		flag = func_214(hash, 1, hash2, false);
	
		if (num4 && num5)
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_1556.f_8632.f_2[i /*27*/].f_1.f_8, joaat("shop_buy_offer"));
		else if (func_215(hash2))
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_1556.f_8632.f_2[i /*27*/].f_1.f_8, joaat("shop_redeem_reward"));
		else
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_1556.f_8632.f_2[i /*27*/].f_1.f_8, 1447387479);
	
		if (num != -1)
		{
			if (num == num2)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_1556.f_8632.f_2[i /*27*/].f_1.f_22, true);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_1556.f_8632.f_2[i /*27*/].f_1.f_10, false);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_1556.f_8632.f_2[i /*27*/].f_1.f_22, false);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_1556.f_8632.f_2[i /*27*/].f_1.f_10, flag);
			}
		}
	}

	return;
}

BOOL func_128(Any* panParam0) // Position - 0x387F Signature - 22 01 03 00 00 66 00 76 2F 0B 6A 8B 07
{
	if (*panParam0 == 0 && panParam0->f_1 == 0 && panParam0->f_2 == 0 && panParam0->f_3 == 0)
		return false;

	return true;
}

Hash func_129(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x38B5 Signature - 22 07 17
{
	var unk;

	unk.f_9 = -1591664384;

	if (func_168(uParam0, hParam4, &unk, iParam5, bParam6))
		return unk.f_4;

	return 0;
}

Hash func_130(int iParam0) // Position - 0x38E5 Signature - 22 01 03 00 00 66 00 3C 09
{
	switch (iParam0)
	{
		case 1:
			return joaat("CUTSCENE_MPCGOI1");
	
		case 2:
			return joaat("CUTSCENE_MPCGOI2");
	
		case 3:
			return -732709691;
	
		case 4:
			return 1691387227;
	
		case 5:
			return -969278268;
	
		case 6:
			return joaat("CUTSCENE_MPRM1");
	
		case 7:
			return 317202356;
	
		case 8:
			return 2111135919;
	
		case 9:
			return 1835271178;
	
		default:
		
	}

	return 0;
}

int func_131(int iParam0, int iParam1) // Position - 0x3974 Signature - 22 02 04 00 00 66 01 3C
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -562854755;
			
				case 1:
					return -193397860;
			
				case 2:
					return -1639158743;
			
				case 3:
					return -545263819;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 0:
					return -331472846;
			
				case 1:
					return 1266428317;
			
				case 2:
					return -1342435444;
			
				case 3:
					return -243002563;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 0:
					return 429079746;
			
				case 1:
					return 1587973176;
			
				case 2:
					return 1338229360;
			
				case 3:
					return -271501111;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 0:
					return 771711526;
			
				case 1:
					return -466995375;
			
				case 2:
					return -398924971;
			
				case 3:
					return -1232006170;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 0:
					return -2052512212;
			
				case 1:
					return -1144971953;
			
				case 2:
					return 86781479;
			
				case 3:
					return 416111513;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 0:
					return -446960320;
			
				case 1:
					return -2015262927;
			
				case 2:
					return -707938197;
			
				case 3:
					return 2136054096;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1149863246;
			
				case 1:
					return 407185110;
			
				case 2:
					return -769170006;
			
				case 3:
					return -411703805;
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1554709632;
			
				case 1:
					return 410660064;
			
				case 2:
					return -254646314;
			
				case 3:
					return 1524612084;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 0:
					return -602228764;
			
				case 1:
					return 1765518873;
			
				case 2:
					return -1908979734;
			
				case 3:
					return 923460453;
			
				default:
					break;
			}
			break;
	}

	return 0;
}

int func_132(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5, int iParam6) // Position - 0x3C16 Signature - 22 07 09 00 00 4B
{
	return func_216(&uParam0, hParam4, bParam5, iParam6);
}

int func_133() // Position - 0x3C2A Signature - 22 00 02 00 00 5D 21 CC 13 80 3E 39 7F 38 00 8B 60
{
	if (func_128(&(Global_1297441.f_62)))
		if (func_217(-2020197296, &(Global_1297441.f_62), 104187473, true, false))
			return 3;
		else if (func_217(1236975766, &(Global_1297441.f_62), 104187473, true, false))
			return 3;
		else if (func_217(joaat("upgrade_moonshiner_bar"), &(Global_1297441.f_62), 104187473, true, false))
			return 3;

	return 0;
}

int func_134() // Position - 0x3CA0 Signature - 22 00 02 00 00 5D 21 CC 13 80 3E 39 7F 38 00 8B 20
{
	if (func_128(&(Global_1297441.f_62)))
		if (func_217(joaat("upgrade_moonshiner_band"), &(Global_1297441.f_62), 104187473, true, false))
			return 1;

	return 0;
}

int func_135() // Position - 0x3CD6 Signature - 22 00 02 00 00 5D 21 CC 13 80 3E 39 7F 38 00 8B 40
{
	if (func_128(&(Global_1297441.f_62)))
		if (func_217(joaat("upgrade_moonshiner_still_03"), &(Global_1297441.f_62), 104187473, true, false))
			return 2;
		else if (func_217(joaat("upgrade_moonshiner_still_02"), &(Global_1297441.f_62), 104187473, true, false))
			return 1;

	return 0;
}

int func_136() // Position - 0x3D2C Signature - 22 00 02 00 00 5D 21 CC 13 80 3E 39 7F 38 00 8B D0
{
	if (func_128(&(Global_1297441.f_62)))
	{
		switch (func_132(Global_1297441.f_62, -1565675519, true, -1))
		{
			case -1832936964:
				return 2;
		
			case -1779654346:
				return 11;
		
			case -1589105439:
				return 16;
		
			case joaat("upgrade_moonshiner_bar_photo_05"):
				return 5;
		
			case -1267969239:
				return 17;
		
			case -998343303:
				return 3;
		
			case joaat("upgrade_moonshiner_bar_photo_07"):
				return 7;
		
			case -589877714:
				return 6;
		
			case -535382643:
				return 12;
		
			case joaat("upgrade_moonshiner_bar_photo_09"):
				return 9;
		
			case -361084332:
				return 10;
		
			case -147791143:
				return 8;
		
			case -126163595:
				return 4;
		
			case joaat("upgrade_moonshiner_bar_photo_13"):
				return 13;
		
			case 275125803:
				return 14;
		
			case 713312871:
				return 15;
		
			case 1612330162:
				return 1;
		
			default:
			
		}
	}

	return 0;
}

int func_137(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3E12 Signature - 22 03 05 00 00 66 02 8B 10
{
	if (bParam2)
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
			return 0;

	Global_1297600[PLAYER::PLAYER_ID() /*87*/].f_5[iParam0] = iParam1;
	return 1;
}

BOOL func_138() // Position - 0x3E42 Signature - 22 00 02 00 00 39 55
{
	if (!func_218())
		return false;

	return func_140(Global_1901671.f_45.f_5, 8);
}

void func_139() // Position - 0x3E64 Signature - 22 00 02 00 00 09 39 B2
{
	if (!func_74(1))
		return;

	Global_1297441.f_44 = 1;
	return;
}

BOOL func_140(BOOL bParam0, BOOL bParam1) // Position - 0x3E7F Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 01 03 00 00 5D
{
	return bParam0 && bParam1 != false;
}

BOOL func_141(BOOL bParam0) // Position - 0x3E8E Signature - 22 01 03 00 00 5D 17
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && bParam0 != false;
}

BOOL func_142() // Position - 0x3EAF Signature - 22 00 03 00 00 5D 21 CC 13 27
{
	int num;

	if (Global_1297441.f_156 == 0)
		Global_1297441.f_156 = MISC::GET_SYSTEM_TIME();
	else if (MISC::GET_SYSTEM_TIME() - Global_1297441.f_156 > 1000)
		Global_1297441.f_156 = MISC::GET_SYSTEM_TIME();
	else
		return func_140(Global_1297441.f_157, 256);

	if (func_219())
	{
		func_92(&(Global_1297441.f_157), 256);
		return true;
	}

	if (func_220(PLAYER::PLAYER_ID(), true, false, true))
	{
		func_92(&(Global_1297441.f_157), 256);
		return true;
	}

	if (!Global_1297062.f_44)
	{
		func_92(&(Global_1297441.f_157), 256);
		return true;
	}

	if (func_158(func_221(0)))
	{
		func_92(&(Global_1297441.f_157), 256);
		return true;
	}

	if (func_222(false))
	{
		func_92(&(Global_1297441.f_157), 256);
		return true;
	}

	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		func_92(&(Global_1297441.f_157), 256);
		return true;
	}

	num = func_223(joaat("BOUNTY_PLAYER"), PLAYER::PLAYER_ID(), false, true);

	if (func_224(num))
	{
		func_92(&(Global_1297441.f_157), 256);
		return true;
	}

	if (func_157())
	{
		func_92(&(Global_1297441.f_157), 256);
		return true;
	}

	func_159(&(Global_1297441.f_157), 256);
	return false;
}

BOOL func_143() // Position - 0x3FED Signature - 22 00 02 00 00 5D 77
{
	return Global_1072759.f_7;
}

void func_144(int iParam0) // Position - 0x3FFB Signature - 22 01 03 00 00 03 01 00 17 5D C0 CC 13 63 57 80 56 66 00 39 BD
{
	func_92(&(Global_1297600[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_86), iParam0);
	return;
}

BOOL func_145(int iParam0) // Position - 0x401A Signature - 22 01 03 00 00 09 66
{
	return func_225(1, iParam0);
}

int func_146(char* sParam0, Player plParam1, int iParam2) // Position - 0x4029 Signature - 22 03 0D
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
	num = func_226(plParam1, iParam2);

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
					personaPhotoLocalCacheType = func_227(iParam2);
					textureDownloadId = NETWORK::_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(plParam1, personaPhotoLocalCacheType);
				
					if (textureDownloadId == -1)
					{
						return 3;
					}
					else if (textureDownloadId == 0)
					{
						func_228(plParam1, iParam2, 0);
						return 1;
					}
				
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(NETWORK::TEXTURE_DOWNLOAD_GET_NAME(textureDownloadId)))
						func_228(plParam1, iParam2, 3);
					else
						func_228(plParam1, iParam2, 4);
				
					func_229(plParam1, iParam2, textureDownloadId);
					break;
			
				case 3:
					textureDownloadId = func_230(plParam1, iParam2);
				
					if (textureDownloadId == 0)
					{
						func_228(plParam1, iParam2, 0);
						return 1;
					}
				
					statusOfTextureDownload = NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(textureDownloadId);
				
					switch (statusOfTextureDownload)
					{
						case 0:
							func_228(plParam1, iParam2, 4);
							return 3;
					
						case 1:
							return 3;
					
						case 2:
							func_228(plParam1, iParam2, 0);
							return 1;
					
						default:
							break;
					}
					break;
			
				case 4:
					textureDownloadId = func_230(plParam1, iParam2);
				
					if (textureDownloadId == 0)
					{
						func_228(plParam1, iParam2, 0);
						return 1;
					}
				
					name = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(textureDownloadId);
				
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(name))
						return 3;
				
					func_228(plParam1, iParam2, 5);
					break;
			
				case 5:
					textureDownloadId = func_230(plParam1, iParam2);
				
					if (textureDownloadId == 0)
					{
						func_228(plParam1, iParam2, 0);
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

void func_147(Player plParam0) // Position - 0x4218 Signature - 22 01 07 00 00 2F
{
	int num;

	num.f_3 = 0;
	num.f_1 = 1;
	num = 2;
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(num.f_2), plParam0);
	func_231(&num);
	return;
}

void func_148(BOOL bParam0, int iParam1) // Position - 0x423D Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 10
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

const char* func_149(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x424E Signature - 22 10
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_150(Player plParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x4262 Signature - 22 04 0E
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

	if (func_232(func_221(0)) && func_233(func_221(0)) == 7)
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
			num3 = func_234(plParam0);
		
			if (num3 == joaat("color_net_player2") && NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(plParam0))
				return joaat("COLOR_WHITE");
			else
				return num3;
		}
		else
		{
			return func_235(plParam0);
		}
	}

	if (player < 0 || player >= 32)
		return 0;

	if (func_140(Global_1072759.f_21353.f_1[player /*8*/].f_7, 1024))
		return joaat("color_winning_player");

	num4 = func_236(plParam0, true);

	if (!flag)
	{
		if (func_237(plParam0, bParam1))
		{
			return func_235(plParam0);
		}
		else if (func_238(plParam0, bParam1))
		{
			if (func_239(plParam0, bParam1))
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
		return func_234(plParam0);
	}
	else if (func_237(plParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == plParam0)
			return joaat("COLOR_WHITE");
		else if (func_241(func_240(func_221(0)), 1) == 395262693)
			return func_235(plParam0);
		else
			return func_235(plParam0);
	}
	else if (func_238(plParam0, bParam1))
	{
		return joaat("color_posse_enemy");
	}

	return joaat("color_friendly");
}

const char* func_151(const char* sParam0, int iParam1) // Position - 0x44B6 Signature - 22 02 04 00 00 66 00 03
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);

	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);

	return func_242(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

Hash func_152(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54) // Position - 0x44F4 Signature - 22 37
{
	int num;
	int cloudTimeAsInt;
	Hash hash;
	var unk;
	var buffer;
	BOOL flag;
	Hash hash2;
	int num2;

	num = func_243();
	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
	hash = cloudTimeAsInt + uParam0.f_25;
	MISC::_INT_TO_STRING(cloudTimeAsInt, "%i", &buffer);
	Global_1940252.f_245.f_1308 = Global_1940252.f_245.f_1308 + 1;
	TEXT_LABEL_ASSIGN_STRING(&unk, "Invite_Root_", 64);
	TEXT_LABEL_APPEND_STRING(&unk, &buffer, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 64);
	TEXT_LABEL_APPEND_INT(&unk, Global_1940252.f_245.f_1308, 64);
	func_244(&Global_1940252.f_245.f_14[num /*43*/], Global_1940252.f_245.f_4, unk, uParam0);
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
	func_246(Global_1940252.f_245.f_1306 + 1);

	if (Global_1940252.f_245.f_1308 == 2147483647)
		Global_1940252.f_245.f_1308 = 0;

	if (func_247(uParam0.f_26))
	{
		uParam0.f_33 = 5;
		uParam0.f_33.f_1 = 1;
		uParam0.f_33.f_13 = 778915895;
		uParam0.f_33.f_14 = Global_1940252.f_245.f_14[num /*43*/];
		hash2 = func_207(&(uParam0.f_33));
		Global_1940252.f_245.f_14[num /*43*/].f_40 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(95), hash2);
	}

	num2 = func_248();

	if (num2 == 0 || uParam0.f_24 == num2)
	{
		Global_1940252.f_245.f_1307 = Global_1940252.f_245.f_1307 + 1;
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940252.f_245.f_5, 0, "pm_invite_item", Global_1940252.f_245.f_14[num /*43*/]);
	}

	return Global_1940252.f_245.f_14[num /*43*/];
}

BOOL func_153(Hash hParam0, Player plParam1) // Position - 0x486B Signature - 22 02 05 00 00 66 00 03 05
{
	int i;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam0))
		return false;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (Global_1297229.f_3.f_2[i /*4*/] == plParam1)
		{
			Global_1297229.f_3.f_2[i /*4*/].f_1 = hParam0;
			func_148(&(Global_1297229.f_3.f_2[i /*4*/].f_3), 4);
			return true;
		}
	}

	return false;
}

void func_154() // Position - 0x48CD Signature - 22 00 07 00 00 4B
{
	var unk;
	int i;

	unk = 255;

	for (i = 0; i <= Global_1297229.f_3.f_2 - 1; i = i + 1)
	{
		Global_1297229.f_3.f_2[i /*4*/] = { unk };
	}

	Global_1297229.f_3.f_1 = 0;
	Global_1297229.f_3 = 0;
	return;
}

BOOL func_155(int iParam0) // Position - 0x491A Signature - 22 01 03 00 00 66 00 2F 35 6A 05 8B 06 00 66 00 6D 20
{
	if (iParam0 < 0 || iParam0 >= 32)
		return false;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1297229.f_3.f_132[iParam0 /*2*/]) && func_249(Global_1297229.f_3.f_132[iParam0 /*2*/]))
		return true;

	return false;
}

void func_156(int iParam0) // Position - 0x4965 Signature - 22 01 03 00 00 66 00 5D 21 CC 13 6C
{
	Global_1297441.f_66 = iParam0;
	return;
}

BOOL func_157() // Position - 0x4975 Signature - 22 00 02 00 00 5D 0C
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

BOOL func_158(var uParam0, var uParam1) // Position - 0x499A Signature - 22 02 04 00 00 66 00 39 AB
{
	if (!func_250(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_251(uParam0))
		return false;

	return true;
}

void func_159(BOOL bParam0, BOOL bParam1) // Position - 0x49CE Signature - 22 02 04 00 00 66 00 66 01 39 80
{
	func_252(bParam0, bParam1);
	return;
}

BOOL func_160(Player plParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x49DE Signature - 22 04 07 00 00 66 03
{
	Player player;

	if (bParam3)
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
			return 0;

	player = plParam0;

	if (Global_1297600[player /*87*/].f_1 == -1)
		return 0;

	*uParam1 = Global_1297600[player /*87*/].f_1;
	*uParam2 = Global_1297600[player /*87*/].f_3;
	return 1;
}

BOOL func_161(Player plParam0, BOOL bParam1) // Position - 0x4A2A Signature - 22 02 04 00 00 66 00 66 01 39 EA
{
	return func_51(plParam0, bParam1) != -1;
}

BOOL func_162(int iParam0) // Position - 0x4A3C Signature - 22 01 06 00 00 66 00 39
{
	char* scriptName;
	int num;
	eStackSize stackSize;

	scriptName = func_253(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(scriptName))
		return false;

	if (!SCRIPTS::DOES_SCRIPT_EXIST(scriptName))
		return false;

	num = Global_1297229.f_201.f_1[iParam0 /*4*/].f_2;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(scriptName, num, true, 0))
		return false;

	SCRIPTS::REQUEST_SCRIPT(scriptName);
	stackSize = func_255(func_254(iParam0));

	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(stackSize) <= 0)
		return false;

	if (!SCRIPTS::HAS_SCRIPT_LOADED(scriptName))
		return false;

	return true;
}

void func_163(int iParam0) // Position - 0x4AB7 Signature - 22 01 04 00 00 66 00 39 95
{
	char* scriptName;

	scriptName = func_253(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(scriptName))
		return;

	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(scriptName);
	return;
}

BOOL func_164(int iParam0, int iParam1) // Position - 0x4AD9 Signature - 22 02 04 00 00 66 00 66 01 39 73
{
	func_256(iParam0, iParam1);

	if (SCRIPTS::DOES_THREAD_EXIST(*iParam1))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_253(iParam0));
		return true;
	}

	return false;
}

void func_165(int iParam0) // Position - 0x4B02 Signature - 22 01 05 00 00 66 00 39 AF
{
	int num;
	int offset;

	if (!func_257(iParam0))
		return;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::SET_BIT(&Global_1903838.f_496[num], offset);
	return;
}

void func_166(Hash hParam0) // Position - 0x4B36 Signature - 22 01 03 00 00 66 00 2F 8A 03 00 2F 67 00 66
{
	if (hParam0 < 0)
		hParam0 = 0;

	if (hParam0 > Global_1901671.f_815.f_5)
		hParam0 = Global_1901671.f_815.f_5;

	if (Global_1297600[Global_1295666 /*87*/].f_19.f_15 != hParam0)
		Global_1297600[Global_1295666 /*87*/].f_19.f_15 = hParam0;

	return;
}

void func_167(int iParam0) // Position - 0x4B83 Signature - 22 01 03 00 00 66 00 2F 8A 03 00 2F 67 00 85
{
	if (iParam0 < 0)
		iParam0 = 0;

	if (Global_1297600[Global_1295666 /*87*/].f_19.f_16 != iParam0)
		Global_1297600[Global_1295666 /*87*/].f_19.f_16 = iParam0;

	return;
}

BOOL func_168(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, int iParam6, BOOL bParam7) // Position - 0x4BB7 Signature - 22 08 0B
{
	int inventoryId;

	inventoryId = func_258(bParam7);

	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(inventoryId, &uParam0, hParam4) <= iParam6)
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(inventoryId, &uParam0, hParam4, iParam6, panParam5))
		return false;

	return true;
}

Hash func_169() // Position - 0x4BF1 Signature - 22 00 03 00 00 5D 21 CC 13 80 3E 39 7F 38 00 05 8B 04 00 2F 50 00 01 42 5D 21 CC 13 80 3E 2D 37 E9
{
	int num;

	if (!func_128(&(Global_1297441.f_62)))
		return 0;

	num = func_129(Global_1297441.f_62, -268973591, 0, true);
	return num;
}

void func_170(Hash hParam0) // Position - 0x4C22 Signature - 22 01 03 00 00 66 00 2F 1C 6A
{
	if (hParam0 != 0 && Global_1297600[Global_1295666 /*87*/].f_19.f_17 != hParam0)
		Global_1297600[Global_1295666 /*87*/].f_19.f_18 = Global_1297600[Global_1295666 /*87*/].f_19.f_17;

	if (Global_1297600[Global_1295666 /*87*/].f_19.f_17 != hParam0)
	{
		Global_1297600[Global_1295666 /*87*/].f_19.f_17 = hParam0;
		func_97(1048576);
	}

	if (hParam0 != 0 && hParam0 != Global_1297600[Global_1295666 /*87*/].f_19.f_20 && !func_200(&(Global_1297062.f_5)))
		Global_1297600[Global_1295666 /*87*/].f_19.f_20 = hParam0;

	return;
}

void func_171() // Position - 0x4CCB Signature - 22 00 04 00 00 39 FF 4F 00 67 02 39 30 50 00 67 03 66 02 37 D4 EA 55 31 0B 6A 05 8B 09 00 66 03 37 3E 11 78 DF 0B 30 8B 19
{
	int num;
	int num2;

	num = func_181();
	num2 = func_182();

	if (num == joaat("provision_role_moonshiner_mash_low") || num2 == -545779394)
		if (!func_96(Global_1295666, 1024))
			func_97(1024);
	else if (num == joaat("provision_role_moonshiner_mash_medium") || num2 == 1532695640)
		if (!func_96(Global_1295666, 2048))
			func_97(2048);
	else if (num == joaat("provision_role_moonshiner_mash_high") || num2 == 1847740267)
		if (!func_96(Global_1295666, 4096))
			func_97(4096);

	return;
}

void func_172(int iParam0, BOOL bParam1) // Position - 0x4D75 Signature - 22 02 06 00 00 66 00 4B
{
	int num;
	int num2;

	func_259(iParam0, &num, &num2);

	if (!func_260(iParam0, num, num2, bParam1))
		return;

	func_261(num, num2);
	return;
}

void func_173(var uParam0, BOOL bParam1) // Position - 0x4DA2 Signature - 22 02 04 00 00 66 01 6A
{
	if (bParam1 || !func_200(uParam0))
		func_111(uParam0);

	return;
}

Hash func_174(Player plParam0) // Position - 0x4DC2 Signature - 22 01 04 00 00 66 00 67
{
	Player player;

	player = plParam0;

	if (func_96(player, 256))
		return 0;
	else
		return 1;

	return 1;
}

Hash func_175(Hash hParam0) // Position - 0x4DE6 Signature - 22 01 04 00 00 66 00 37
{
	int num;

	if (hParam0 == joaat("provision_role_moonshiner_moonshine_flavor_agarita_sunrise"))
		num = 1;
	else if (hParam0 == joaat("provision_role_moonshiner_moonshine_flavor_apple_berry_crumb"))
		num = 2;
	else if (hParam0 == joaat("provision_role_moonshiner_moonshine_flavor_berry_cobbler"))
		num = 3;
	else if (hParam0 == joaat("provision_role_moonshiner_moonshine_flavor_berry_mint"))
		num = 4;
	else if (hParam0 == joaat("provision_role_moonshiner_moonshine_flavor_evergreen"))
		num = 5;
	else if (hParam0 == joaat("provision_role_moonshiner_moonshine_flavor_poison_poppys"))
		num = 6;
	else if (hParam0 == joaat("provision_role_moonshiner_moonshine_flavor_spiced_island"))
		num = 7;
	else if (hParam0 == joaat("provision_role_moonshiner_moonshine_flavor_tropical_punch"))
		num = 8;
	else if (hParam0 == joaat("provision_role_moonshiner_moonshine_flavor_wild_cider"))
		num = 9;
	else if (hParam0 == joaat("provision_role_moonshiner_moonshine_flavor_wild_creek"))
		num = 10;
	else
		num = 0;

	return num;
}

BOOL func_176() // Position - 0x4E96 Signature - 22 00 02 00 00 03 01 00 E7 8B 04 00 2F 50 00 01 03 01 00 9C 8B 04 00 2F 50 00 01 39 F1 78 00 8B 04 00 2F 50 00 01 39
{
	if (HUD::IS_HUD_HIDDEN())
		return false;

	if (CAM::IS_CINEMATIC_CAM_RENDERING())
		return false;

	if (func_262())
		return false;

	if (func_263() != 2)
		return false;

	return true;
}

BOOL func_177(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x4ECC Signature - 22 04 06 00 00 66 02 6A
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

BOOL func_178(int iParam0) // Position - 0x4F02 Signature - 22 01 06 00 00 66 00 67
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_17418.f_2585[num2], offset);
}

char* func_179(Hash hParam0) // Position - 0x4F2C Signature - 22 01 04 00 00 66 00 3C
{
	char* str;

	switch (hParam0)
	{
		case joaat("provision_role_moonshiner_moonshine_flavor_tropical_punch"):
			str = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_TROPICAL_PUNCH";
			break;
	
		case joaat("provision_role_moonshiner_moonshine_flavor_wild_creek"):
			str = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CREEK";
			break;
	
		case joaat("provision_role_moonshiner_moonshine_flavor_berry_cobbler"):
			str = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_COBBLER";
			break;
	
		case joaat("provision_role_moonshiner_moonshine_flavor_poison_poppys"):
			str = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_POISON_POPPYS";
			break;
	
		case joaat("provision_role_moonshiner_moonshine_flavor_berry_mint"):
			str = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_MINT";
			break;
	
		case joaat("provision_role_moonshiner_moonshine_flavor_apple_berry_crumb"):
			str = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_APPLE_BERRY_CRUMB";
			break;
	
		case joaat("provision_role_moonshiner_moonshine_flavor_wild_cider"):
			str = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CIDER";
			break;
	
		case joaat("provision_role_moonshiner_moonshine_flavor_spiced_island"):
			str = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_SPICED_ISLAND";
			break;
	
		case joaat("provision_role_moonshiner_moonshine_flavor_agarita_sunrise"):
			str = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_AGARITA_SUNRISE";
			break;
	
		case joaat("provision_role_moonshiner_moonshine_flavor_evergreen"):
			str = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_EVERGREEN";
			break;
	
		default:
			str = "PROVISION_ROLE_MOONSHINER_MOONSHINE_UNFLAVORED";
			break;
	}

	return str;
}

void func_180(int iParam0, char* sParam1, BOOL bParam2) // Position - 0x4FDD Signature - 22 03 05 00 00 66 01 03
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return;

	func_264(iParam0, MISC::GET_HASH_KEY(sParam1), bParam2);
	return;
}

int func_181() // Position - 0x4FFF Signature - 22 00 03 00 00 5D 21 CC 13 80 3E 39 7F 38 00 05 8B 04 00 2F 50 00 01 42 5D 21 CC 13 80 3E 2D 37 6C 52 F0 3D 2F 09 39 B5 38 00 67 02 66 02 50
{
	int num;

	if (!func_128(&(Global_1297441.f_62)))
		return 0;

	num = func_129(Global_1297441.f_62, 1039159916, 0, true);
	return num;
}

int func_182() // Position - 0x5030 Signature - 22 00 03 00 00 5D 21 CC 13 80 3E 39 7F 38 00 05 8B 04 00 2F 50 00 01 42 5D 21 CC 13 80 3E 2D 37 B7
{
	int num;

	if (!func_128(&(Global_1297441.f_62)))
		return 0;

	num = func_129(Global_1297441.f_62, 1111816631, 0, true);
	return num;
}

void func_183(int iParam0) // Position - 0x5061 Signature - 22 01 03 00 00 66 00 85
{
	Global_1297600[Global_1295666 /*87*/].f_19.f_19 = iParam0;
	return;
}

void func_184(BOOL bParam0, int iParam1) // Position - 0x5079 Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 00
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

void func_185() // Position - 0x508A Signature - 22 00 04 00 00 5D 21 CC 13 80 3E 39 7F 38 00 05 8B 03
{
	Hash provision;
	int itemSlotMaxCount;

	if (!func_128(&(Global_1297441.f_62)))
		return;

	provision = func_129(Global_1297441.f_62, 1039159916, 0, true);
	itemSlotMaxCount = INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(provision, 1039159916);

	if (provision == joaat("provision_role_moonshiner_mash_high"))
		Global_1297062.f_4 = (Global_1901671.f_815.f_2 / BUILTIN::TO_FLOAT(itemSlotMaxCount)) * 60f;
	else if (provision == joaat("provision_role_moonshiner_mash_medium"))
		Global_1297062.f_4 = (Global_1901671.f_815.f_1 / BUILTIN::TO_FLOAT(itemSlotMaxCount)) * 60f;
	else if (provision == joaat("provision_role_moonshiner_mash_low"))
		Global_1297062.f_4 = (Global_1901671.f_815 / BUILTIN::TO_FLOAT(itemSlotMaxCount)) * 60f;
	else
		Global_1297062.f_4 = (Global_1901671.f_815 / BUILTIN::TO_FLOAT(itemSlotMaxCount)) * 60f;

	if (func_265(15) >= 15)
		Global_1297062.f_4 = Global_1297062.f_4 * 0.8f;

	func_173(&(Global_1297062.f_1), false);
	return;
}

BOOL func_186(Hash hParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x5180 Signature - 22 05 11
{
	int num;
	var unk;
	var unk6;

	if (!func_188(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	num = func_266(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_267(hParam0, iParam1, iParam2, iParam3, bParam4);

	unk = { func_268(hParam0, bParam4, 0) };
	unk6 = { func_269(hParam0, unk, unk.f_4, bParam4) };
	return func_270(hParam0, &unk6, &unk, iParam1, iParam2, iParam3, bParam4);
}

Hash func_187() // Position - 0x51F8 Signature - 22 00 02 00 00 85 32 C5 13 25
{
	if (func_96(Global_1295666, 1024))
		return joaat("provision_role_moonshiner_mash_low");
	else if (func_96(Global_1295666, 2048))
		return joaat("provision_role_moonshiner_mash_medium");
	else if (func_96(Global_1295666, 4096))
		return joaat("provision_role_moonshiner_mash_high");

	return 0;
}

BOOL func_188(Hash hParam0, int iParam1) // Position - 0x5249 Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 48
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_189(Any* panParam0, Hash hParam1, BOOL bParam2) // Position - 0x5263 Signature - 22 03 05 00 00 66 02 39
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_258(bParam2), panParam0, hParam1);
}

Hash func_190(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5279 Signature - 22 05 0A
{
	int num;
	BOOL flag;
	BOOL flag2;

	if (!func_188(hParam0, 0))
		return 0;

	if (func_271(hParam0) || func_203(hParam0, 1077060302))
		return func_274(func_272(hParam0, false), hParam1, bParam2, bParam3, func_273(hParam0));

	if (func_275(hParam0, bParam4) || func_276(hParam0))
	{
		hParam1 = 997808187;
	}
	else if (func_273(hParam0) && func_277(hParam0, &num) || func_278(hParam0, &num))
	{
		hParam1 = num;
	}
	else
	{
		flag = func_279(hParam0, -570078785);
		flag2 = func_279(hParam0, -915411861);
	
		if (flag && !flag2)
			hParam1 = -570078785;
		else if (flag2 && flag)
			if (func_280())
				hParam1 = -570078785;
			else
				hParam1 = -915411861;
		else if (flag2)
			hParam1 = -915411861;
		else if (func_281(15) && func_279(hParam0, 369710026))
			hParam1 = 369710026;
		else
			hParam1 = 0;
	}

	if (hParam1 == 0 && bParam2)
		return -915411861;

	return hParam1;
}

// Unhandled jump detected. Output should be considered invalid
int func_191(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x53B5 Signature - 22 06 29
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (bParam4 && hParam1 == -915411861 && func_279(hParam0, 59806960))
		hParam1 = 59806960;

	if (func_271(hParam0) || func_203(hParam0, 1077060302))
		return func_193(func_272(hParam0, false), hParam1, bParam3, true);

	if (!func_282(hParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam3;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar"))
		{
			if (iParam5 != 0 && unk[i /*2*/] != iParam5)
			{
			}
			else
			{
				return unk[i /*2*/].f_1;
				goto 0xDD;
			}
		}
	
		if (unk[i /*2*/] == 0)
			break;
	}

	!bParam3;
	return 0;
}

BOOL func_192(Hash hParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x54A5 Signature - 22 04 09 00 00 66 00 2F
{
	int num;
	int num2;
	BOOL flag;

	if (!func_188(hParam0, 0))
		return false;

	*uParam2 = 0;
	*uParam1 = 0;
	num = func_283(831658232, true, false, true);
	num2 = func_283(1964703625, true, false, true);
	flag = UNLOCK::UNLOCK_IS_UNLOCKED(-577406511);

	if (bParam3)
	{
		num = 4;
		num2 = 0;
	}

	if (num2 == 0)
	{
		if (flag)
			if (hParam0 == joaat("provision_role_moonshiner_mash_high"))
				*uParam1 = 1770635244;
			else if (hParam0 == joaat("provision_role_moonshiner_mash_medium"))
				*uParam1 = 1694260085;
			else
				*uParam1 = -2006381587;
		else if (hParam0 == joaat("provision_role_moonshiner_mash_high"))
			*uParam1 = -1964533269;
		else if (hParam0 == joaat("provision_role_moonshiner_mash_medium"))
			*uParam1 = 100166317;
		else
			*uParam1 = 1038106552;
	
		switch (num)
		{
			case 1:
				*uParam2 = 600942249;
				break;
		
			case 2:
				*uParam2 = 747826962;
				break;
		
			case 3:
				*uParam2 = 502256076;
				break;
		
			case 4:
				*uParam2 = -834227589;
				break;
		}
	}
	else if (num == 0)
	{
		if (flag)
			if (hParam0 == joaat("provision_role_moonshiner_mash_high"))
				*uParam1 = 1455881441;
			else if (hParam0 == joaat("provision_role_moonshiner_mash_medium"))
				*uParam1 = -98408876;
			else
				*uParam1 = 136850391;
		else if (hParam0 == joaat("provision_role_moonshiner_mash_high"))
			*uParam1 = 535276374;
		else if (hParam0 == joaat("provision_role_moonshiner_mash_medium"))
			*uParam1 = 1279048583;
		else
			*uParam1 = 1003713621;
	
		switch (num2)
		{
			case 1:
				*uParam2 = 600942249;
				break;
		
			case 2:
				*uParam2 = 747826962;
				break;
		
			case 3:
				*uParam2 = 502256076;
				break;
		
			case 4:
				*uParam2 = -834227589;
				break;
		}
	}
	else
	{
		if (flag)
			if (hParam0 == joaat("provision_role_moonshiner_mash_high"))
				*uParam1 = 683835946;
			else if (hParam0 == joaat("provision_role_moonshiner_mash_medium"))
				*uParam1 = 129815171;
			else
				*uParam1 = -280792819;
		else if (hParam0 == joaat("provision_role_moonshiner_mash_high"))
			*uParam1 = -61838317;
		else if (hParam0 == joaat("provision_role_moonshiner_mash_medium"))
			*uParam1 = 185950306;
		else
			*uParam1 = -2110360382;
	
		if (num == 1)
		{
			switch (num2)
			{
				case 1:
					*uParam2 = 600942249;
					break;
			
				case 2:
					*uParam2 = 747826962;
					break;
			
				case 3:
					*uParam2 = 502256076;
					break;
			}
		}
		else if (num == 2)
		{
			if (num2 == 1)
				*uParam2 = -834227589;
			else
				*uParam2 = 1472825031;
		}
		else
		{
			*uParam2 = -489628648;
		}
	}

	if (num == 0 && num2 == 0 && flag)
	{
		if (hParam0 == joaat("provision_role_moonshiner_mash_high"))
			*uParam1 = 683835946;
		else if (hParam0 == joaat("provision_role_moonshiner_mash_medium"))
			*uParam1 = 129815171;
		else
			*uParam1 = -280792819;
	
		*uParam2 = -915411861;
	}

	if (!func_284(*uParam1) || *uParam2 == 0)
		return false;

	return true;
}

int func_193(int iParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x57BE Signature - 22 04 27
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_285(iParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam2;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar") || unk[i /*2*/] == joaat("character_role_token"))
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam2;
	return 0;
}

BOOL func_194(int* piParam0, Hash hParam1, var uParam2, BOOL bParam3, Hash hParam4, BOOL bParam5, BOOL bParam6) // Position - 0x5852 Signature - 22 07 09 00 00 66
{
	if (!func_286(piParam0, false))
		return false;

	if (hParam4 == 0)
		hParam4 = func_274(hParam1, 0, true, bParam5, bParam6);

	if (!func_287(hParam1, hParam4, bParam5))
		return false;

	uParam2->f_17 = hParam1;
	uParam2->f_8 = hParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = hParam4;
	uParam2->f_12 = 1248274121;

	if (!func_288(piParam0, *uParam2, 541670136, bParam3))
		return false;

	if (COLLECTION::_0x9ADEE485726025D4(hParam1) != 0)
	{
		Global_1292143.f_20.f_422 != -1;
		Global_1292143.f_20.f_422.f_1 = hParam1;
		Global_1292143.f_20.f_422 = piParam0->f_1;
	}

	return true;
}

BOOL func_195(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, int iParam7, var uParam8, BOOL bParam9, Hash hParam10, BOOL bParam11, BOOL bParam12) // Position - 0x58FB Signature - 22 0D 32
{
	var unk;
	var unk18;

	if (!func_286(piParam0, false))
		return false;

	if (hParam10 == 0)
		hParam10 = func_190(hParam1, hParam10, true, bParam11, true);

	if (!func_289(piParam0, hParam1, uParam2, hParam6, hParam10, iParam7, bParam11, bParam12))
		return false;

	unk = { func_290(hParam1, uParam2, hParam6, iParam7, bParam12) };
	unk.f_13 = hParam10;
	unk.f_12 = 1248274121;
	*uParam8 = { unk };

	if (func_291(hParam1) == joaat("CLOTHING"))
	{
		unk18.f_9 = 1;
		unk18.f_11 = -1591664384;
		unk18 = { unk };
	
		if (!func_292(piParam0, unk18, 2113164098, bParam9, -1))
			return false;
	}
	else if (!func_293(piParam0, unk, 2113164098, bParam9, bParam11))
	{
		return false;
	}

	return true;
}

int func_196(int iParam0) // Position - 0x59DA Signature - 22 01 05 00 00 66 00 39 B4
{
	int num;
	int status;

	num = func_294(iParam0);

	if (num == 0 || num == 1 || num == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &status))
		{
			if (status == 4 || status == 2 || num == 0 && status != 0)
			{
				func_295(iParam0, status, 0, 0);
				num = status;
			}
		}
		else if (num == 1 || num == 5)
		{
			func_295(iParam0, 4, 0, 0);
		}
	}

	return num;
}

int func_197(Any* panParam0, Any* panParam1) // Position - 0x5A64 Signature - 22 02 04 00 00 66 00 66 01 03
{
	if (TELEMETRY::_TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID(panParam0, panParam1))
		return 1;

	return 0;
}

int func_198(int iParam0) // Position - 0x5A7C Signature - 22 01 03 00 00 66 00 3C 06
{
	switch (iParam0)
	{
		case -1:
			return 2037940248;
	
		case 0:
			return 1397223979;
	
		case 1:
			return 677707590;
	
		case 2:
			return -269277617;
	
		case 3:
			return -1463831630;
	
		case 4:
			return 2031672089;
	
		default:
		
	}

	return 2037940248;
}

int func_199() // Position - 0x5AE5 Signature - 22 00 04 00 00 5D 21 CC 13 80 3E 39 7F 38 00 05 8B 04
{
	Hash hash;
	int num;

	if (!func_128(&(Global_1297441.f_62)))
		return 0;

	hash = func_129(Global_1297441.f_62, -268973591, 0, true);

	if (func_203(hash, 1372968408))
		num = 1372968408;
	else if (func_203(hash, -710171994))
		num = -710171994;
	else if (func_203(hash, 956386416))
		num = 956386416;

	return num;
}

BOOL func_200(var uParam0) // Position - 0x5B5E Signature - 22 01 03 00 00 66 00 76 09
{
	return func_296(*uParam0, 1);
}

int func_201(var uParam0) // Position - 0x5B6E Signature - 22 01 03 00 00 66 00 39 5E 5B 00 05 8B 04 00 2F
{
	if (!func_200(uParam0))
		return 0;

	if (func_297(uParam0))
		return uParam0->f_2;

	return func_298(uParam0->f_1);
}

void func_202(var uParam0, int iParam1) // Position - 0x5B9F Signature - 22 02 04 00 00 03 01 00 24
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}

	func_299(uParam0, 1);
	func_300(uParam0, 2);
	uParam0->f_2 = 0;
	return;
}

BOOL func_203(Hash hParam0, Hash hParam1) // Position - 0x5BDB Signature - 22 02 04 00 00 66 00 2F 39 49 52 00 05 8B 0F
{
	if (!func_188(hParam0, 0))
		return func_302(func_301(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return true;

	return false;
}

struct<2> func_204(int iParam0, int iParam1) // Position - 0x5C1C Signature - 22 02 06 00 00 66 00 67
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_205(var uParam0, var uParam1, int iParam2) // Position - 0x5C32 Signature - 22 03 05 00 00 4B
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

BOOL func_206() // Position - 0x5C4F Signature - 22 00 02 00 00 03 01 00 E7 8B 04 00 2F 50 00 01 03 01 00 9C 8B 04 00 2F 50 00 01 39 F1 78 00 8B 04 00 2F 50 00 01 37
{
	if (HUD::IS_HUD_HIDDEN())
		return false;

	if (CAM::IS_CINEMATIC_CAM_RENDERING())
		return false;

	if (func_262())
		return false;

	if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("shop_menu")))
		return false;

	if (Global_1072759.f_28761)
		return false;

	if (Global_1572887.f_10)
		return false;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(-319651633))
		return false;

	if (func_303())
		return false;

	return true;
}

Hash func_207(var uParam0) // Position - 0x5CC0 Signature - 22 01 03 00 00 66 00 27 02
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
		return func_305(func_304(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_304(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, true, true, uParam0->f_4, uParam0->f_21);
	else if (*uParam0 == 6)
		return func_306(func_304(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_304(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	else if (*uParam0 == 1)
		return func_307(func_304(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_304(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, true, true);
	else if (*uParam0 == 3)
		return func_308(func_304(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_304(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	else if (*uParam0 == 2)
		return func_309(func_304(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_304(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, true, true);
	else if (*uParam0 == 4)
		return func_310(func_304(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_304(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	else if (*uParam0 == 0)
		return func_311(func_304(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_304(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, true, true);

	return 0;
}

BOOL func_208(Hash hParam0) // Position - 0x5FA2 Signature - 22 01 03 00 00 66 00 39 56
{
	if (func_312(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

BOOL func_209() // Position - 0x5FBD Signature - 22 00 02 00 00 09 50
{
	return 1;
}

BOOL func_210(BOOL bParam0, int iParam1) // Position - 0x5FC6 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 00
{
	return bParam0 && iParam1 != false;
}

int func_211() // Position - 0x5FD5 Signature - 22 00 05 00 00 37 56 57 86 52 67 02 5D 21 CC 13 80 3E 39 7F 38 00 8B 07 00 37 41 A4 DD 2E 67 02 66 02 2F 09 08 09 39 79 52 00 67 03 2F 67 04 66 03 37
{
	Hash hash;
	Hash hash2;
	int num;

	hash = 1384535894;

	if (func_128(&(Global_1297441.f_62)))
		hash = 786277441;

	hash2 = func_190(hash, 0, true, -1, true);
	num = 0;

	if (hash2 == -570078785 || func_313(hash, joaat("currency_gold_bar"), hash2, true, true) > 0)
		num = 1;

	return num;
}

int func_212() // Position - 0x602E Signature - 22 00 05 00 00 37 56 57 86 52 67 02 5D 21 CC 13 80 3E 39 7F 38 00 8B 07 00 37 41 A4 DD 2E 67 02 66 02 2F 09 08 09 39 79 52 00 67 03 2F 67 04 66 03 39
{
	Hash hash;
	Hash hash2;
	int num;

	hash = 1384535894;

	if (func_128(&(Global_1297441.f_62)))
		hash = 786277441;

	hash2 = func_190(hash, 0, true, -1, true);
	num = 0;

	if (func_314(hash2))
		num = 1;

	return num;
}

Hash func_213(int iParam0) // Position - 0x606E Signature - 22 01 03 00 00 66 00 3C 05
{
	switch (iParam0)
	{
		case 0:
			return 1580598647;
	
		case 1:
			return 786277441;
	
		case 2:
			return -127194573;
	
		case 3:
			return 1273401170;
	
		case 4:
			return 1480239309;
	
		default:
		
	}

	return 0;
}

BOOL func_214(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0x60C5 Signature - 22 04 09 00 00 66 00 66
{
	var unk;
	var unk3;

	return func_315(hParam0, iParam1, hParam2, &unk, &unk3, false, bParam3, false);
}

BOOL func_215(Hash hParam0) // Position - 0x60DF Signature - 22 01 03 00 00 66 00 3C 04
{
	switch (hParam0)
	{
		case -1551258934:
		case -1103707655:
		case 205718222:
		case 866168015:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_216(Any* panParam0, Hash hParam1, BOOL bParam2, int iParam3) // Position - 0x610C Signature - 22 04 14
{
	var unk;

	unk.f_9 = -1591664384;

	if (func_316(panParam0, hParam1, &unk, bParam2, iParam3))
		return unk.f_4;

	return 0;
}

BOOL func_217(Hash hParam0, Any* panParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x613A Signature - 22 05 07 00 00 66 00 42
{
	return func_317(hParam0, *panParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_218() // Position - 0x6155 Signature - 22 00 03 00 00 5D 67
{
	BOOL flag;

	if (Global_1901671.f_45.f_2 == 1788394582)
	{
		flag = Global_1295666.f_16;
	
		if (flag > Global_1901671.f_45.f_3 && flag < Global_1901671.f_45.f_4)
			return true;
	}

	return false;
}

BOOL func_219() // Position - 0x6198 Signature - 22 00 02 00 00 5D 2A
{
	return Global_1295658.f_2.f_1 == 2 || Global_1295658.f_2.f_1 == 1;
}

BOOL func_220(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x61BA Signature - 22 04 29
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_318(bParam1, bParam2, bParam3);

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

struct<2> func_221(int iParam0) // Position - 0x62EF Signature - 22 01 03 00 00 11
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_222(BOOL bParam0) // Position - 0x6303 Signature - 22 01 03 00 00 66 00 8B 0D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

int func_223(int iParam0, Player plParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6333 Signature - 22 04 07 00 00 66 01
{
	int i;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam1))
		return -1;

	for (i = 0; i <= 12; i = i + 1)
	{
		if (Global_1235687[i /*697*/].f_571 != iParam0)
		{
		}
		else if (bParam2 && !func_319(i, 32, plParam1))
		{
		}
		else if (bParam3 && Global_1225099[i /*28*/].f_15 != plParam1)
		{
		}
		else
		{
			return i;
		}
	}

	return -1;
}

BOOL func_224(int iParam0) // Position - 0x63A8 Signature - 22 01 03 00 00 66 00 2F 7E 6A 8B 06 00 66 00 6D 0C 77 69 50 01 01 22 02 05
{
	return iParam0 >= 0 && iParam0 <= 12;
}

BOOL func_225(int iParam0, int iParam1) // Position - 0x63BE Signature - 22 02 05 00 00 66 00 67 04 66 01
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_320(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_321())
		return func_320(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_320(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

int func_226(Player plParam0, int iParam1) // Position - 0x6432 Signature - 22 02 04 00 00 66 00 2F 35 6A 05 8B 06 00 66 00 6D 20 7E 30 8B 04 00 08
{
	if (plParam0 < 0 || plParam0 >= 32)
		return -1;

	if (iParam1 <= -1)
		return -1;

	return Global_1149432.f_5087[plParam0 /*10*/].f_5[iParam1];
}

int func_227(int iParam0) // Position - 0x646B Signature - 22 01 03 00 00 66 00 3C 02 00 01
{
	switch (iParam0)
	{
		case 1:
		
	
		case 2:
		
	
		default:
		
	}

	return 2;
}

void func_228(Player plParam0, int iParam1, int iParam2) // Position - 0x6490 Signature - 22 03 06 00 00 66 02
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

void func_229(Player plParam0, int iParam1, int iParam2) // Position - 0x64E7 Signature - 22 03 06 00 00 66 01
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

int func_230(Player plParam0, int iParam1) // Position - 0x6533 Signature - 22 02 05 00 00 66 01 08
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

void func_231(var uParam0) // Position - 0x6580 Signature - 22 01 1A
{
	int num;
	int i;
	BOOL flag;
	var unk3;
	var value;
	var unk4;
	var unk12;

	num = -1;
	num.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();

	switch (*uParam0)
	{
		case 0:
			num = 0;
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(num.f_2), PLAYER::NETWORK_PLAYER_ID_TO_INT());
			func_322(num);
			break;
	
		case 1:
			num = uParam0->f_1;
			SCRIPTS::_SET_ALL_PLAYER_BITS(&(num.f_2));
			func_322(num);
		
			if (!uParam0->f_3)
				break;
		
			unk4.f_4 = 0;
			unk4.f_6 = uParam0->f_1;
			unk4.f_5 = *uParam0;
			unk4.f_7 = unk3;
			i = 0;
		
			for (i = 0; i < 32; i = i + 1)
			{
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295666.f_149[i]))
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
		
			func_323(&unk4, value);
			break;
	
		case 2:
			if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(uParam0->f_2)))
				return;
		
			flag = false;
			i = 0;
		
			for (i = 0; i < 32; i = i + 1)
			{
				if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(uParam0->f_2), i) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295666.f_149[i]))
				{
					flag = true;
					break;
				}
			}
		
			if (!flag)
				return;
		
			num = uParam0->f_1;
			num.f_2 = uParam0->f_2;
			func_322(num);
		
			if (!uParam0->f_3)
				break;
		
			unk12.f_4 = 0;
			unk12.f_6 = uParam0->f_1;
			unk12.f_5 = *uParam0;
			unk12.f_7 = uParam0->f_2;
			i = 0;
		
			for (i = 0; i < 32; i = i + 1)
			{
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295666.f_149[i]))
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
		
			func_323(&unk12, value);
			break;
	}

	return;
}

BOOL func_232(var uParam0, var uParam1) // Position - 0x6753 Signature - 22 02 05 00 00 11 4B 00 2D 39 A2
{
	int num;

	num = func_324(uParam0);
	return num == 3 || num == 4;
}

int func_233(int iParam0, var uParam1) // Position - 0x6773 Signature - 22 02 04 00 00 66 00 50
{
	return iParam0;
}

int func_234(Player plParam0) // Position - 0x677D Signature - 22 01 03 00 00 66 00 03 05 00 F2
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

int func_235(Player plParam0) // Position - 0x6814 Signature - 22 01 03 00 00 66 00 03 05 00 6E
{
	if (GANG::NETWORK_GET_GANG_ID(plParam0) != Global_1295666.f_10 && !func_69())
		return joaat("color_posse_neutral");

	return joaat("color_posse_ally");
}

int func_236(Player plParam0, BOOL bParam1) // Position - 0x6843 Signature - 22 02 08 00 00 66 00 66
{
	int num;
	int num2;
	int num3;
	Player player;

	num = BUILTIN::FLOOR(func_325(plParam0, bParam1));

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

BOOL func_237(Player plParam0, BOOL bParam1) // Position - 0x6910 Signature - 22 02 07 00 00 66 00 6D
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

BOOL func_238(Player plParam0, BOOL bParam1) // Position - 0x6A12 Signature - 22 02 05 00 00 66 00 67 04 66 00
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

	if (func_326(plParam0))
		return true;

	return !func_237(plParam0, false);
}

BOOL func_239(Player plParam0, BOOL bParam1) // Position - 0x6A9C Signature - 22 02 05 00 00 66 00 03 01
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

	if (func_327(plParam0))
		return false;

	if (func_326(plParam0))
		return false;

	if (func_328(plParam0))
		return true;

	return func_329(plParam0);
}

int func_240(var uParam0, var uParam1) // Position - 0x6B3E Signature - 22 02 07 00 00 4B
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_330(uParam0, &unk))
		return unk.f_1;

	return -1;
}

int func_241(int iParam0, int iParam1) // Position - 0x6B6A Signature - 22 02 04 00 00 66 00 3C
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

const char* func_242(const char* sParam0, int iParam1) // Position - 0x6BC1 Signature - 22 02 04 00 00 6D
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_243() // Position - 0x6BDB Signature - 22 00 30 00
{
	int i;
	BOOL flag;
	Hash hash;
	BOOL flag2;

	flag = Global_1295666.f_16;

	for (i = 0; i < 30; i = i + 1)
	{
		hash = { Global_1940252.f_245.f_14[i /*43*/] };
		flag2 = DATABINDING::DATABINDING_READ_INT(hash.f_29);
	
		if (flag2 < flag)
		{
			if (func_331(hash))
				func_332(hash);
		
			return i;
		}
	}

	return func_333();
}

void func_244(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33) // Position - 0x6C3E Signature - 22 22
{
	func_334(hParam0, hParam1, uParam2, uParam10);
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x6D11 Signature - 22 01 03 00 00 66 00 3C 62
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

void func_246(int iParam0) // Position - 0x721F Signature - 22 01 03 00 00 66 00 5D 1C
{
	Global_1940252.f_245.f_1306 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_245.f_6, MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(Global_1940252.f_245.f_1306), 0));
	return;
}

BOOL func_247(var uParam0) // Position - 0x7250 Signature - 22 01 03 00 00 09 50
{
	return true;
}

int func_248() // Position - 0x7259 Signature - 22 00 02 00 00 5D 1C
{
	return Global_1940252.f_245.f_1305;
}

BOOL func_249(Player plParam0) // Position - 0x726A Signature - 22 01 06 00 00 66 00 4B
{
	int num;
	int num2;
	BOOL flag;

	flag = func_160(plParam0, &num, &num2, true);
	flag = flag && num == Global_1297600[PLAYER::PLAYER_ID() /*87*/].f_1 && num2 == Global_1297600[PLAYER::PLAYER_ID() /*87*/];
	return flag;
}

BOOL func_250(int iParam0) // Position - 0x72AB Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 21
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

int func_251(int iParam0) // Position - 0x72EA Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 2E
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

void func_252(BOOL bParam0, int iParam1) // Position - 0x7380 Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 01 03 00 00 66 00 3C
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

char* func_253(int iParam0) // Position - 0x7395 Signature - 22 01 03 00 00 66 00 3C 02 00 00 00 00 00 09 00 01 00 00 00 0A
{
	switch (iParam0)
	{
		case 0:
			return "net_moonshine_entrance";
	
		case 1:
			return "net_moonshine_property";
	
		default:
		
	}

	return "";
}

int func_254(int iParam0) // Position - 0x73C2 Signature - 22 01 03 00 00 66 00 3C 02 00 00 00 00 00 11
{
	switch (iParam0)
	{
		case 0:
			return joaat("MINI");
	
		case 1:
			return joaat("net_moonshine_property");
	
		default:
		
	}

	return joaat("MICRO");
}

eStackSize func_255(int iParam0) // Position - 0x73F3 Signature - 22 01 03 00 00 66 00 3C 49
{
	switch (iParam0)
	{
		case joaat("posse_feud"):
			return 1800;
	
		case joaat("MISSION"):
			return 45000;
	
		case joaat("NETWORK_BOT"):
			return 4096;
	
		case joaat("MINIGAME_INTRO"):
			return 6001;
	
		case joaat("net_fetch_hideout_leader"):
			return 200;
	
		case joaat("DEBUG_SCRIPT"):
			return 4080;
	
		case joaat("MP_MISSION_DOWNLOADER"):
			return 3088;
	
		case joaat("net_cutscene"):
			return 2051;
	
		case joaat("MISSION_INTRO"):
			return 6000;
	
		case joaat("FME_THM_LARGE"):
			return 7001;
	
		case joaat("MAP_EVENTS"):
			return 2026;
	
		case joaat("net_moonshine_property"):
			return 3982;
	
		case joaat("UPDATE"):
			return 1300;
	
		case joaat("STRANGER_MISSION_FETCH"):
			return 10000;
	
		case joaat("Transition"):
			return 25500;
	
		case joaat("FME_PV_SMALL"):
			return 3000;
	
		case joaat("posse_versus_race"):
			return 1600;
	
		case joaat("CHARACTER_REROLL"):
			return 10003;
	
		case joaat("region"):
			return 5503;
	
		case joaat("FME_THM_MEDIUM"):
			return 5501;
	
		case joaat("net_beat_manager"):
			return 3500;
	
		case joaat("FME_STD_LARGE"):
			return 7002;
	
		case joaat("DEBUG_MP_STEAL_VEHICLE"):
			return 32768;
	
		case joaat("PAUSE_MENU_SCRIPT"):
			return 2000;
	
		case joaat("SHOP"):
			return 6005;
	
		case joaat("FME_STD_MEDIUM"):
			return 5502;
	
		case joaat("DEFAULT"):
			return 1024;
	
		case joaat("COUPONS_EVENTS"):
			return 2053;
	
		case joaat("DB_MEGA"):
			return 5400;
	
		case joaat("ROLE_PROGRESSION_EVENTS"):
			return 2048;
	
		case joaat("PAUSE_MENU_EVENT_SCRIPT"):
			return 4700;
	
		case joaat("net_gun_for_hire_offline"):
			return 6010;
	
		case joaat("NET_MAIN"):
			return 6002;
	
		case joaat("SHOP_EVENTS"):
			return 2027;
	
		case joaat("SOAK_TEST"):
			return 4088;
	
		case joaat("AUTOSTART"):
			return 7301;
	
		case joaat("shows"):
			return 5504;
	
		case joaat("INSTANCED_CONTENT"):
			return 75000;
	
		case joaat("NET_BEAT"):
			return 2452;
	
		case joaat("MINI"):
			return 512;
	
		case joaat("Matchmaking"):
			return 1301;
	
		case joaat("FME_PV_LARGE"):
			return 7000;
	
		case joaat("FME_PV_MEDIUM"):
			return 5500;
	
		case joaat("REWARDS_EVENTS"):
			return 2549;
	
		case joaat("HUB_EVENTS"):
			return 1026;
	
		case joaat("TOOL_MEGA"):
			return 65536;
	
		case joaat("STABLE_MOUNT"):
			return 400;
	
		case joaat("fishing"):
			return 5505;
	
		case joaat("ABILITY_CARD_EVENTS"):
			return 800;
	
		case joaat("net_gun_for_hire_online"):
			return 3090;
	
		case joaat("MICRO"):
			return 128;
	
		case joaat("net_background"):
			return 1631;
	
		case joaat("DEBUG_MENU"):
			return 50000;
	
		case joaat("CAMPWORKS"):
			return 3081;
	
		case joaat("SATCHEL_EVENTS"):
			return 2025;
	
		case joaat("SCRIPT_XML"):
			return 4592;
	
		case joaat("SAVE_MENU_EVENTS"):
			return 2024;
	
		case joaat("MISSION_CREATOR"):
			return 40500;
	
		case joaat("FME_STD_SMALL"):
			return 3002;
	
		case joaat("STRANGER_MISSION_NON_FETCH"):
			return 5001;
	
		case joaat("PLAYER_MENU_SCRIPT"):
			return 1400;
	
		case joaat("Minigame"):
			return 6500;
	
		case joaat("BACKGROUND_SCRIPT"):
			return 2047;
	
		case joaat("camp_item"):
			return 6700;
	
		case joaat("MP_MISSION_LOBBY"):
			return 10001;
	
		case joaat("CAMP_DOG"):
			return 600;
	
		case joaat("MISSION_TUTORIAL"):
			return 7300;
	
		case joaat("NET_SYSTEM_EXTENDED"):
			return 2050;
	
		case joaat("FME_THM_SMALL"):
			return 3001;
	
		case joaat("virtualization_unit_test_support"):
			return 129;
	
		case joaat("MP_UGC_TRANSITION"):
			return 14335;
	
		case joaat("ENDFLOW"):
			return 5506;
	
		case joaat("camp"):
			return 5000;
	
		default:
		
	}

	return 0;
}

void func_256(int iParam0, int iParam1) // Position - 0x7773 Signature - 22 02 09 00 00 66 00 39
{
	struct<5> args;

	args = { func_335(iParam0) };
	iParam1->f_1 = args.f_1;
	iParam1->f_2 = iParam1->f_1;
	*iParam1 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_253(iParam0), &args, 5, func_255(func_254(iParam0)));
	return;
}

BOOL func_257(int iParam0) // Position - 0x77AF Signature - 22 01 03 00 00 66 00 08 77
{
	if (iParam0 <= -1 || iParam0 >= 117)
		return false;

	return true;
}

int func_258(BOOL bParam0) // Position - 0x77CE Signature - 22 01 03 00 00 39 FB 14 00 08 15 17
{
	if (func_38() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

void func_259(int iParam0, var uParam1, var uParam2) // Position - 0x780F Signature - 22 03 06 00 00 66 00 67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_260(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x782B Signature - 22 04 06 00 00 66 01
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_336(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_337(iParam0))
		return false;

	if (func_338(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_339(iParam0, 1) || func_340(32768))
		if (!func_339(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_341())
		return false;

	return true;
}

void func_261(int iParam0, int iParam1) // Position - 0x78CD Signature - 22 02 05 00 00 66 00 5D
{
	int address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

BOOL func_262() // Position - 0x78F1 Signature - 22 00 02 00 00 70
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false);
}

int func_263() // Position - 0x790D Signature - 22 00 02 00 00 5D 17 00 18 80
{
	if (!func_210(Global_1572887.f_196.f_43, 8))
		return 2;

	if (Global_1572887.f_196.f_2 != 4)
		return 1;

	if (Global_1572887.f_196 > 7 && Global_1572887.f_196 < 23)
		return 0;

	return 2;
}

void func_264(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x7959 Signature - 22 03 07 00 00 66 00 4B
{
	int num;
	int num2;

	func_259(iParam0, &num, &num2);

	if (!func_260(iParam0, num, num2, bParam2))
		return;

	if (!func_339(iParam0, 1024))
		return;

	func_261(num, num2);
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/] = hParam1;
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

Hash func_265(int iParam0) // Position - 0x79B9 Signature - 22 01 04 00 00 66 00 39 68
{
	Hash hash;

	if (!func_342(iParam0))
		return 0;

	hash = func_343(iParam0);

	if (hash != -1)
		return hash;
	else
		return func_344(iParam0, true);

	return 0;
}

int func_266(Hash hParam0, int iParam1) // Position - 0x79F0 Signature - 22 02 04 00 00 66 01 2F
{
	if (iParam1 == 0)
		return 0;

	if (func_345(func_301(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, iParam1);
}

BOOL func_267(Hash hParam0, int iParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x7A1C Signature - 22 05 6A
{
	int num;
	var unk;
	int num2;
	int i;
	int num3;
	var unk62;
	int num4;

	if (func_346(hParam0))
		return 0;

	if (iParam1 <= 0)
		return 0;

	num = func_266(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	if (!func_347(bParam4))
	{
		unk = 10;
	
		if (num == 0)
			return 0;
	
		if (!func_348(&unk, &num2, hParam0, num, iParam1, true) || num2 < 1)
			return 0;
	
		num3 = -1;
		unk62.f_9 = 1;
		unk62.f_11 = -1591664384;
	
		for (i = 0; i < num2; i = i + 1)
		{
			unk62 = { func_349(hParam0, &unk[i /*6*/]) };
			unk62.f_12 = hParam2;
			num3 = func_350(joaat("use"), &unk62, true);
		
			if (num3 == -1)
				return 0;
		}
	
		if (num3 != -1)
		{
			num4.f_7 = -142743235;
			num4.f_16 = -1;
			num4 = iParam3;
			num4.f_7 = hParam2;
			func_351(num3, num4);
			return 1;
		}
	
		return 0;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_258(bParam4), hParam0, iParam1, hParam2))
		return 0;

	return 1;
}

struct<5> func_268(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x7B34 Signature - 22 03 2F 00 00 66
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_352(bParam1) };
	unk.f_4 = 1084182731;
	num = func_291(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_358(hParam0, -1823706425))
			{
				unk = { func_269(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_358(hParam0, -1483207246))
			{
				unk = { func_269(joaat("WARDROBE"), unk, 1034665895, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_269(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1311702610))
			{
				unk.f_4 = -1311702610;
			}
			else if (func_358(hParam0, -1653629781))
			{
				unk = { func_269(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -1591664384;
			unk = { func_356(bParam1) };
		
			switch (func_357(hParam0))
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
			unk = { func_269(joaat("WARDROBE"), unk, 1034665895, bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_353(bParam1) };
		
			if (iParam2 && func_354(hParam0, true))
			{
				unk6.f_9 = -1591664384;
			
				if (!func_217(hParam0, &unk, 1728382685, false, false))
					unk.f_4 = 1728382685;
				else if (!func_217(hParam0, &unk, -649335959, false, false))
					unk.f_4 = -649335959;
				else if (func_355(hParam0, &unk6, 1728382685))
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
			
				if (!func_359(unk, &unk28, bParam1, false, -1))
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
			else if (func_358(hParam0, -1653629781))
			{
				unk = { func_269(1384535894, unk, 1784584921, bParam1) };
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

struct<4> func_269(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x7EA8 Signature - 22 07 0D
{
	var outGuid;

	if (!func_188(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_258(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_270(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x7ED9 Signature - 22 07 3A
{
	var unk;
	int num;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_346(hParam0))
		return false;

	unk.f_9 = -1591664384;

	if (!func_359(*panParam1, &unk, bParam6, false, -1))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_347(bParam6))
	{
		num = -1;
	
		if (unk.f_13)
		{
		}
		else if (func_38() == 0)
		{
			unk15.f_9 = 1;
			unk15.f_11 = -1591664384;
			unk15.f_8 = hParam0;
			unk15 = { *panParam1 };
			unk15.f_4 = { *uParam2 };
			unk15.f_11 = uParam2->f_4;
			unk15.f_9 = iParam3;
			unk15.f_12 = hParam4;
			num = func_350(joaat("use"), &unk15, true);
		
			if (num != -1)
			{
				num2.f_7 = -142743235;
				num2.f_16 = -1;
				num2 = iParam5;
				num2.f_7 = hParam4;
				func_351(num, num2);
			}
		}
	
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_258(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_271(Hash hParam0) // Position - 0x7FF7 Signature - 22 01 03 00 00 66 00 13
{
	if (func_203(hParam0, 75135761))
		return true;

	return false;
}

int func_272(Hash hParam0, BOOL bParam1) // Position - 0x8014 Signature - 22 02 0B
{
	var unk;

	if (!func_188(hParam0, 0))
		return func_360(func_301(hParam0), bParam1);

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk) || unk.f_5 == 0)
		return 0;

	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(unk.f_5))
		return 0;

	return unk.f_5;
}

BOOL func_273(Hash hParam0) // Position - 0x806C Signature - 22 01 03 00 00 39 47
{
	if (!func_361() && func_362())
		return true;

	return func_203(hParam0, 1435272033);
}

Hash func_274(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x8094 Signature - 22 05 0B 00 00 66 00 39
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (!func_284(iParam0))
		return 0;

	flag = func_210(bParam3, 2);
	flag2 = func_363(iParam0, -570078785, flag);
	flag3 = func_363(iParam0, -915411861, flag);

	if (func_363(iParam0, 997808187, flag))
		iParam1 = 997808187;
	else if (bParam4 && func_364(iParam0, &num) || func_365(iParam0, &num))
		iParam1 = num;
	else if (flag2 && !flag3)
		iParam1 = -570078785;
	else if (flag2 && flag3)
		if (func_280())
			iParam1 = -570078785;
		else
			iParam1 = -915411861;
	else if (flag3)
		iParam1 = -915411861;
	else if (func_281(15) && func_363(iParam0, 369710026, flag))
		iParam1 = 369710026;

	if (iParam1 == 0 && bParam2)
		return -915411861;

	return iParam1;
}

BOOL func_275(Hash hParam0, BOOL bParam1) // Position - 0x8199 Signature - 22 02 04 00 00 66 00 37 3B
{
	return func_279(hParam0, 997808187) && !func_366(hParam0, 997808187, bParam1);
}

BOOL func_276(Hash hParam0) // Position - 0x81BF Signature - 22 01 04 00 00 66 00 09
{
	int num;

	num = func_272(hParam0, true);

	if (num != 0 && func_363(num, 997808187, false))
		if (UNLOCK::UNLOCK_IS_UNLOCKED(-1831140953))
			return 1;

	return 0;
}

BOOL func_277(Hash hParam0, var uParam1) // Position - 0x81F9 Signature - 22 02 04 00 00 66 00 09 39 98
{
	*uParam1 = func_367(hParam0, true);
	return *uParam1 != 0;
}

BOOL func_278(Hash hParam0, var uParam1) // Position - 0x8210 Signature - 22 02 04 00 00 66 00 09 2F 39 2B
{
	*uParam1 = func_368(hParam0, true, false);
	return *uParam1 != 0;
}

BOOL func_279(Hash hParam0, Hash hParam1) // Position - 0x8228 Signature - 22 02 04 00 00 66 00 2F 39 49 52 00 05 8B 04
{
	if (!func_188(hParam0, 0))
		return false;

	if (func_271(hParam0) || func_203(hParam0, 1077060302))
		return func_363(func_272(hParam0, false), hParam1, false);

	return ITEMDATABASE::_0xDEE7B3C76ED664BE(hParam0, hParam1) > 0;
}

BOOL func_280() // Position - 0x8274 Signature - 22 00 02 00 00 5D 08
{
	return Global_1915656.f_22477;
}

BOOL func_281(int iParam0) // Position - 0x8283 Signature - 22 01 03 00 00 66 00 6D 22
{
	if (iParam0 == 34 && Global_1915656.f_22504.f_1)
		return true;

	if (func_222(true))
		if (Global_1915656.f_20241 == iParam0)
			return true;

	return false;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_282(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x82BE Signature - 22 06 09 00 00 2F 66 03 32 66 02 76 6D 0F 8A 04 00 2F 50 06 01 66 00 2F
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_188(hParam0, 0))
		return false;

	*uParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(hParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam5;
		return false;
	}

	!bParam5;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM(hParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x71;
	
		!bParam5;
	}

	if (bParam4)
		func_369(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

int func_283(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x834E Signature - 22 04 06 00 00 66 00 39
{
	if (func_370(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_258(bParam1), hParam0, bParam3);
}

BOOL func_284(int iParam0) // Position - 0x8381 Signature - 22 01 03 00 00 66 00 2F 15
{
	if (iParam0 == 0)
		return false;

	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(iParam0);
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_285(int iParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x8399 Signature - 22 06 09 00 00 2F 66 03 32 66 02 76 6D 0F 8A 04 00 2F 50 06 01 66 00 39
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_284(iParam0))
		return false;

	*uParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam4;
		return false;
	}

	!bParam4;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x70;
	
		!bParam4;
	}

	if (bParam5)
		func_371(iParam0, hParam1, uParam2, *uParam3);

	return true;
}

BOOL func_286(int* piParam0, BOOL bParam1) // Position - 0x8428 Signature - 22 02 04 00 00 66 01 05
{
	if (!bParam1)
		if (func_108(piParam0))
			return false;

	if (func_372(&(piParam0->f_6)))
		if (NETWORK::_0xE10F2D7715ABABEC(&(piParam0->f_6)))
			return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(2113164098))
		return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("Sell")))
		return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("UPDATE")))
		return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("use")))
		return false;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return false;

	if (NETSHOPPING::CASHINVENTORY_IS_CONNECTION_FAULTED())
		return false;

	if (NETSHOPPING::_CASHINVENTORY_INIT_SESSION_IS_FAULTED())
		return false;

	return true;
}

BOOL func_287(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x84C4 Signature - 22 03 05 00 00 66 00 2F
{
	if (iParam0 == 0)
		return false;

	if (!func_363(iParam0, hParam1, false))
		return false;

	if (func_210(bParam2, 2))
		if (func_373(iParam0, hParam1))
			return false;

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(iParam0))
		return false;

	if (func_210(bParam2, 8))
		return func_374(iParam0, hParam1);

	return true;
}

BOOL func_288(int* piParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, Hash hParam19, BOOL bParam20) // Position - 0x8524 Signature - 22 15 17 00 00 66 13
{
	if (hParam19 != 541670136)
		return false;

	if (!func_375(uParam1))
		return false;

	if (!func_376(piParam0, hParam19))
		return false;

	if (func_377(*piParam0, hParam19, &uParam1))
	{
	}
	else
	{
		return false;
	}

	return func_378(piParam0, bParam20);
}

BOOL func_289(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, Hash hParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x8578 Signature - 22 0B 0E
{
	Hash hash;

	if (func_379(hParam1))
	{
		hash = func_301(hParam1);
		return func_380(piParam0, hash, hParam7, iParam8, bParam9);
	}

	if (func_210(bParam9, 32))
		if (!func_381(hParam1, uParam2, hParam6))
			return false;

	if (!func_382(hParam1, hParam7, bParam9))
		return false;

	if (func_210(bParam9, 4))
		if (!func_383(piParam0, hParam1, uParam2, hParam6, hParam7, iParam8, false, bParam10))
			return false;

	if (func_210(bParam9, 8))
		return func_384(piParam0, hParam1, hParam7, iParam8);

	return true;
}

struct<17> func_290(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, int iParam6, BOOL bParam7) // Position - 0x8615 Signature - 22 08 1B
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = -1591664384;
	unk.f_4 = { uParam1 };
	unk = { func_269(hParam0, unk.f_4, hParam5, true) };
	unk.f_8 = hParam0;
	unk.f_9 = iParam6;
	unk.f_11 = hParam5;

	if (bParam7)
	{
		unk.f_15 = func_266(hParam0, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_385() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

int func_291(Hash hParam0) // Position - 0x868F Signature - 22 01 0A 00 00 66 00 2F 39 49 52 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 D9 05 8B 04 00 2F 50 01 01 4B 03 27 02
{
	var unk;

	if (!func_188(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_2;
}

BOOL func_292(int* piParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, Hash hParam19, BOOL bParam20, BOOL bParam21) // Position - 0x86BA Signature - 22 16
{
	if (hParam19 != 2113164098 && hParam19 != joaat("Sell") && hParam19 != joaat("UPDATE"))
		return false;

	if (!func_386(hParam19, &uParam1, bParam21))
		return false;

	if (!func_376(piParam0, hParam19))
		return false;

	if (func_387(*piParam0, hParam19, &uParam1))
	{
	}
	else
	{
		return false;
	}

	return func_378(piParam0, bParam20);
}

BOOL func_293(int* piParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, Hash hParam18, BOOL bParam19, BOOL bParam20) // Position - 0x872A Signature - 22 15 17 00 00 66 12
{
	if (hParam18 != 2113164098 && hParam18 != joaat("Sell") && hParam18 != joaat("UPDATE") && hParam18 != joaat("use") && hParam18 != joaat("spend"))
		return false;

	if (!func_386(hParam18, &uParam1, bParam20))
		return false;

	if (!func_376(piParam0, hParam18))
		return false;

	if (func_388(*piParam0, hParam18, &uParam1))
	{
	}
	else
	{
		return false;
	}

	return func_378(piParam0, bParam19);
}

int func_294(int iParam0) // Position - 0x87B4 Signature - 22 01 04 00 00 66 00 08
{
	int i;

	if (iParam0 == -1)
		return 0;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
			return Global_1292143.f_20.f_1[i /*21*/].f_1;
	}

	return 0;
}

void func_295(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x8800 Signature - 22 04 07 00 00 66 00 08 15 03 00 50 04 00 2F
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
		{
			if (Global_1292143.f_20.f_1[i /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1292143.f_20.f_1[i /*21*/].f_1 = iParam1;
			}
		
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1292143.f_20.f_1[i /*21*/].f_2 = iParam2;
				Global_1292143.f_20.f_1[i /*21*/].f_3 = iParam3;
			}
		
			return;
		}
	}

	func_389(iParam0, iParam1, iParam2, iParam3);
	return;
}

BOOL func_296(int iParam0, int iParam1) // Position - 0x889E Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 01 03 00 00 66
{
	return iParam0 && iParam1 != false;
}

BOOL func_297(var uParam0) // Position - 0x88AD Signature - 22 01 03 00 00 66 00 76 11
{
	return func_296(*uParam0, 2);
}

int func_298(int iParam0) // Position - 0x88BD Signature - 22 01 03 00 00 66 00 03 01 00 24
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

void func_299(var uParam0, int iParam1) // Position - 0x88CF Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 02
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_300(var uParam0, int iParam1) // Position - 0x88E0 Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 01 03 00 00 66 00 50
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

Hash func_301(Hash hParam0) // Position - 0x88F5 Signature - 22 01 03 00 00 66 00 50
{
	return hParam0;
}

BOOL func_302(Hash hParam0, Hash hParam1) // Position - 0x88FF Signature - 22 02 04 00 00 66 00 11 39
{
	if (!func_345(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

BOOL func_303() // Position - 0x8935 Signature - 22 00 04 00 00 2F 39
{
	int num;

	num = { func_221(0) };

	if (func_158(num))
		if (num == 2 || num == 3 || num == 4 || num == 5 || num == 7)
			return true;

	return false;
}

const char* func_304(var uParam0, int iParam1) // Position - 0x8985 Signature - 22 02 04 00 00 66 01 37
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", uParam0);

	return func_242(MISC::VAR_STRING(10, "LITERAL_STRING", uParam0), iParam1);
}

int func_305(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, BOOL bParam13, BOOL bParam14, var uParam15, var uParam16) // Position - 0x89BB Signature - 22 11 29
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

int func_306(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19) // Position - 0x8A48 Signature - 22 14
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

int func_307(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0x8AE7 Signature - 22 0E
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

int func_308(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16) // Position - 0x8B63 Signature - 22 11 2B
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

int func_309(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, BOOL bParam13, BOOL bParam14) // Position - 0x8BF1 Signature - 22 0F 27 00 00 4B 11 6A 25 FE FF 3D 41 41 66 08 67 11 66 09 4B 11 6C 01 66 0A 4B 11 6C 02 66 0C 4B 11 6C 03 66 05 4B 11 6C 04 66 07 4B 11 80 04 6C 01 66 06 4B 11 80 04 6C 02 4B 1E 6A 80 07 09 3D 41 41 66 0B 67 1E 66 00 4B 1E 6C 01 66 01 4B 1E 6C 02 2F
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

int func_310(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14) // Position - 0x8C73 Signature - 22 0F 27 00 00 4B 11 6A 25 FE FF 3D 41 41 66 08 67 11 66 09 4B 11 6C 01 66 0A 4B 11 6C 02 66 0C 4B 11 6C 03 66 05 4B 11 6C 04 66 07 4B 11 80 04 6C 01 66 06 4B 11 80 04 6C 02 4B 1E 6A 80 07 09 3D 41 41 66 0B 67 1E 66 00 4B 1E 6C 01 66 01 4B 1E 6C 02 66
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

int func_311(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x8CF0 Signature - 22 0B 23
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

BOOL func_312(Hash hParam0) // Position - 0x8D56 Signature - 22 01 03 00 00 66 00 2F 1C 50 01 01 22 05
{
	return hParam0 != 0;
}

int func_313(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x8D62 Signature - 22 05 28 00 00 4B 07 6D 0F 3D 41 66 00 39
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (func_271(hParam0) || func_203(hParam0, 1077060302))
		return func_390(func_272(hParam0, false), iParam1, hParam2, bParam4, true);

	if (!func_282(hParam0, hParam2, &unk, &num, bParam3, bParam4))
	{
		!bParam4;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == iParam1)
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam4;
	return 0;
}

BOOL func_314(Hash hParam0) // Position - 0x8DFD Signature - 22 01 03 00 00 66 00 39 98
{
	return func_391(hParam0) || func_215(hParam0);
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_315(Hash hParam0, int iParam1, Hash hParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x8E17 Signature - 22 08 33
{
	var unk;
	int num;
	int num2;
	int num3;
	int i;
	BOOL flag;
	int num4;
	int num5;
	Entity entity;
	int num6;
	int num7;

	if (func_271(hParam0) || func_203(hParam0, 1077060302))
		return func_392(func_272(hParam0, true), hParam2, uParam3, true, false);

	unk = 15;

	if (!func_282(hParam0, hParam2, &unk, &num, true, false))
		return false;

	flag = !bParam6 && func_347(false) && !func_393();
	num5 = -1;

	if (Global_1915656.f_20638)
		num5 = Global_1915656.f_20241;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0 || unk[i /*2*/] == 1412640604)
			break;
	
		num2 = unk[i /*2*/].f_1 * iParam1;
	
		if (unk[i /*2*/] == joaat("currency_cash") && bParam7 || func_394(num2))
			goto 0x1F3;
	
		if (unk[i /*2*/] == joaat("currency_gold_bar") && bParam7 || func_395(num2))
		{
		}
		else
		{
			num4 = func_396(num5, unk[i /*2*/]);
		
			if (num4 != 0)
			{
				bParam5 = false;
				num3 = func_397(unk[i /*2*/], num4);
			}
			else
			{
				num3 = func_398(unk[i /*2*/], false, !flag, true);
			}
		
			if (num3 >= num2)
			{
			}
			else
			{
				if (flag)
				{
					if (func_399(unk[i /*2*/]) || func_400(unk[i /*2*/]))
					{
						entity = 0;
					
						if (bParam5)
							num6 = func_401(7, unk[i /*2*/], &entity);
					
						num7 = func_402(unk[i /*2*/], num4);
					
						if (num3 + num6 + num7 >= num2)
							if (num3 + num7 < num2 && ENTITY::DOES_ENTITY_EXIST(entity))
								*uParam4 = entity;
						else
							goto 0x1E3;
					}
				
					if (bParam5 && num3 + func_403(7, unk[i /*2*/]) + func_404(unk[i /*2*/]) >= num2)
					{
					}
					else
					{
						*uParam3 = { unk[i /*2*/] };
						return false;
					}
				}
			
				*uParam3 = { unk[i /*2*/] };
				return false;
			}
		}
	}

	return true;
}

BOOL func_316(Any* panParam0, Hash hParam1, Any* panParam2, BOOL bParam3, int iParam4) // Position - 0x9017 Signature - 22 05 0B 00 00 66 00 03
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (iParam4 == -1)
		iParam4 = func_258(bParam3);

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, panParam0, hParam1, &outGuid))
		return false;

	if (!func_405(&outGuid, panParam2, bParam3, false, iParam4))
		return false;

	return true;
}

Hash func_317(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x9065 Signature - 22 09 10
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_188(hParam0, 0))
		return 0;

	if (!bParam7 && func_266(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_269(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_258(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_258(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_318(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x90E4 Signature - 22 03 05 00 00 5D E7
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

BOOL func_319(int iParam0, int iParam1, Player plParam2) // Position - 0x9182 Signature - 22 03 05 00 00 66 02 6D
{
	if (plParam2 == 255)
		plParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return func_406(iParam0) && func_210(Global_1225687[plParam2 /*303*/][iParam0 /*23*/].f_19, iParam1);
}

BOOL func_320(Any* panParam0, int iParam1, int iParam2) // Position - 0x91B7 Signature - 22 03 07 00 00 66 01
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_321() // Position - 0x91EE Signature - 22 00 02 00 00 5D DD
{
	return Global_1102813.f_3672;
}

void func_322(int iParam0, var uParam1, var uParam2) // Position - 0x91FD Signature - 22 03 05 00 00 5D F8
{
	if (Global_1149432.f_5087.f_325 >= 50)
		return;

	if (iParam0 == -1)
		return;

	Global_1149432.f_5087.f_326[Global_1149432.f_5087.f_324 /*3*/] = { iParam0 };
	Global_1149432.f_5087.f_324 = (Global_1149432.f_5087.f_324 + 1) % 50;
	Global_1149432.f_5087.f_325 = Global_1149432.f_5087.f_325 + 1;
	return;
}

void func_323(Any* panParam0, var uParam1) // Position - 0x926B Signature - 22 02 04 00 00 4B 01 03 05 00 58 05 8B 03 00 50 02 00 6D BD
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 189;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 8, 3, &uParam1);
	return;
}

int func_324(var uParam0, var uParam1) // Position - 0x92A2 Signature - 22 02 05 00 00 11 4B 00 2D 39 9A
{
	int num;

	if (!func_158(uParam0))
		return -1;

	num = func_407(uParam0);

	if (num < 0)
		return 0;

	return Global_1072759.f_19487.f_1[num /*3*/].f_2;
}

float func_325(Player plParam0, BOOL bParam1) // Position - 0x92DD Signature - 22 02 05 00 00 5D F8
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

BOOL func_326(Player plParam0) // Position - 0x937D Signature - 22 01 03 00 00 5D 77 5E 10 18 8F
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28303), plParam0))
		return true;

	return false;
}

BOOL func_327(Player plParam0) // Position - 0x939A Signature - 22 01 03 00 00 5D 77 5E 10 18 8E
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

BOOL func_328(Player plParam0) // Position - 0x93B7 Signature - 22 01 03 00 00 5D 77 5E 10 18 8D
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28301), plParam0))
		return true;

	return false;
}

BOOL func_329(Player plParam0) // Position - 0x93D4 Signature - 22 01 03 00 00 66 00 03 05 00 14
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
	{
		func_408(plParam0);
		return false;
	}

	if (func_328(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 2)
			func_409(plParam0, 5, 1, true, false, 0);
	
		return true;
	}

	return NETWORK::_0x862C5040F4888741(Global_1295666.f_5, plParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 2;
}

BOOL func_330(int iParam0, var uParam1, Any* panParam2) // Position - 0x9438 Signature - 22 03 05 00 00 11
{
	if (!func_158(iParam0))
		return false;

	func_410(panParam2);

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

BOOL func_331(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42) // Position - 0x9543 Signature - 22 2B
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam0.f_41))
		return DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam0);

	return DATABINDING::_DATABINDING_READ_DATA_BOOL(hParam0.f_41);
}

void func_332(Hash hParam0) // Position - 0x9568 Signature - 22 01 03 00 00 66 00 03 05 01
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam0))
		return;

	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1940252.f_245.f_5, hParam0);
	func_411(hParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(hParam0);
	func_246(Global_1940252.f_245.f_1306 - 1);
	return;
}

int func_333() // Position - 0x95A6 Signature - 22 00 08
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

	func_332(Global_1940252.f_245.f_14[num3 /*43*/]);
	return num3;
}

void func_334(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, BOOL bParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25) // Position - 0x9651 Signature - 22 1A
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

struct<5> func_335(int iParam0) // Position - 0x97E5 Signature - 22 01 09
{
	Player player;
	int num;

	player = func_22();
	num.f_1 = func_51(player, true);
	num.f_2 = func_64(player, true);
	num = iParam0;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		num.f_3 = { func_412(player) };

	return num;
}

BOOL func_336(int iParam0, int iParam1) // Position - 0x9826 Signature - 22 02 04 00 00 66 00 87
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_337(int iParam0) // Position - 0x983E Signature - 22 01 03 00 00 66 00 42
{
	if (func_339(iParam0, 4))
		return false;

	return true;
}

BOOL func_338(int iParam0) // Position - 0x9855 Signature - 22 01 07 00 00 66
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
		return false;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	for (i = 0; i < Global_38.f_3542; i = i + 1)
	{
		if (Global_38.f_3542[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
				num2 = 2;
		
			if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
				num2 = 5;
		
			num = cloudTimeAsInt - Global_38.f_3542[i /*3*/];
		
			if (Global_38.f_3542[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && Global_1904402.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
				return true;
		}
	}

	return false;
}

BOOL func_339(int iParam0, int iParam1) // Position - 0x9921 Signature - 22 02 04 00 00 66 00 5D 12
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_340(int iParam0) // Position - 0x993A Signature - 22 01 03 00 00 5D 00
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_341() // Position - 0x994D Signature - 22 00 02 00 00 39 47
{
	if (!func_361())
		return false;

	return Global_1904402.f_8873;
}

BOOL func_342(int iParam0) // Position - 0x9968 Signature - 22 01 03 00 00 66 00 2F 35 6A 05 8B 06 00 66 00 6D 24
{
	if (iParam0 < 0 || iParam0 > 36)
		return false;

	return true;
}

Hash func_343(int iParam0) // Position - 0x9987 Signature - 22 01 03 00 00 66 00 39 68
{
	if (!func_342(iParam0))
		return 0;

	return Global_1292143.f_3024[iParam0];
}

Hash func_344(int iParam0, BOOL bParam1) // Position - 0x99A8 Signature - 22 02 06 00 00 66 00 39
{
	Hash hash;
	Hash xp;

	if (!func_342(iParam0))
		return 0;

	if (bParam1)
	{
		hash = func_413(iParam0);
	
		if (func_188(hash, 0))
		{
			if (iParam0 == 0)
				xp = func_414(255);
			else
				xp = func_317(hash, func_352(true), joaat("SLOTID_PROGRESSION"), true, false, false);
		
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
		hash = func_415(iParam0);
	
		if (func_188(hash, 0))
		{
			if (iParam0 == 0)
				xp = NETWORK::_NETWORK_GET_XP();
			else
				xp = func_317(hash, func_352(true), joaat("SLOTID_PROGRESSION"), true, false, false);
		
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

BOOL func_345(Hash hParam0, int iParam1) // Position - 0x9A67 Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 6D
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

BOOL func_346(Hash hParam0) // Position - 0x9A81 Signature - 22 01 03 00 00 66 00 03 05 00 DE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_347(BOOL bParam0) // Position - 0x9A97 Signature - 22 01 03 00 00 39 FB 14 00 08 15 04
{
	if (func_38() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_258(bParam0));
}

BOOL func_348(Any anParam0, var uParam1, Hash hParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x9AB5 Signature - 22 06 08
{
	*uParam1 = 0;

	if (iParam4 < 1)
		return false;
	else if (*anParam0 != 10)
		return false;

	if (iParam3 == 0)
	{
		iParam3 = func_266(hParam2, joaat("DEFAULT"));
	
		if (iParam3 == 0)
			return false;
	}

	if (!NETSHOPPING::_0xD1555FBC96C88444(hParam2, iParam3, iParam4, anParam0, 10))
		return false;

	if (!func_416(anParam0, uParam1, iParam4, bParam5))
		return false;

	return true;
}

struct<17> func_349(Hash hParam0, var uParam1) // Position - 0x9B22 Signature - 22 02 15
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = -1591664384;
	unk = { func_269(hParam0, *uParam1, uParam1->f_4, true) };
	unk.f_4 = { *uParam1 };
	unk.f_8 = hParam0;
	unk.f_9 = uParam1->f_5;
	unk.f_11 = uParam1->f_4;
	return unk;
}

int func_350(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x9B75 Signature - 22 03 06 00 00 66 00 2F
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_417(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_418(func_388(num, hParam0, panParam1), num, panParam1);
	else
		return func_419(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

void func_351(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x9BDF Signature - 22 12 15
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
		{
			if (Global_1292143.f_20.f_1[i /*21*/].f_1 == 1 || Global_1292143.f_20.f_1[i /*21*/].f_1 == 5)
				Global_1292143.f_20.f_1[i /*21*/].f_4 = { uParam1 };
		
			return;
		}
	}

	return;
}

struct<4> func_352(BOOL bParam0) // Position - 0x9C5D Signature - 22 01 04 00 00 5D 17 00 18 27 0E
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_258(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_269(joaat("character"), func_385(), -1591664384, bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_269(joaat("character"), func_385(), -1591664384, false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_269(joaat("character"), func_385(), -1591664384, bParam0);
}

struct<4> func_353(BOOL bParam0) // Position - 0x9CFD Signature - 22 01 04 00 00 66 00 39 CE 77 00 67 03 66 03 11 15
{
	int num;

	num = func_258(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_269(923904168, func_352(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_269(923904168, func_352(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_269(923904168, func_352(bParam0), -740156546, false);
}

int func_354(Hash hParam0, BOOL bParam1) // Position - 0x9D9E Signature - 22 02 04 00 00 66 00 39 60
{
	if (func_357(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_420();
		else
			return 1;

	return 0;
}

BOOL func_355(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x9DD5 Signature - 22 03 09
{
	var unk;

	if (func_421(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_356(BOOL bParam0) // Position - 0x9DF6 Signature - 22 01 04 00 00 66 00 39 CE 77 00 67 03 66 03 11 0B
{
	int num;

	num = func_258(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_269(271701509, func_352(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_269(271701509, func_352(bParam0), 12999093, false);
}

int func_357(Hash hParam0) // Position - 0x9E60 Signature - 22 01 0A 00 00 66 00 2F 39 49 52 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 D9 05 8B 04 00 2F 50 01 01 4B 03 27 01
{
	var unk;

	if (!func_188(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_1;
}

BOOL func_358(Hash hParam0, int iParam1) // Position - 0x9E8B Signature - 22 02 08 00 00 66 00 2F
{
	Hash hash;
	int num;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || iParam1 == 0)
		return false;

	num = func_357(hParam0);

	if (num == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(num);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(num, i, &hash))
			if (func_422(hParam0, iParam1, hash))
				return true;
	}

	return false;
}

BOOL func_359(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x9EF8 Signature - 22 08 0A 00 00 4B
{
	return func_405(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

int func_360(Hash hParam0, BOOL bParam1) // Position - 0x9F0E Signature - 22 02 05 00 00 66 00 11
{
	int num;

	if (!func_345(hParam0, 2))
		return 0;

	num = 0;

	if (num != 0 && bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
		return 0;

	return num;
}

BOOL func_361() // Position - 0x9F47 Signature - 22 00 02 00 00 03 01 00 EF
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_362() // Position - 0x9F5B Signature - 22 00 02 00 00 2F 39
{
	return func_423(func_221(0));
}

BOOL func_363(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x9F6C Signature - 22 03 05 00 00 66 00 39
{
	if (!func_284(iParam0))
		return false;

	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, hParam1) == 0)
		return false;

	if (bParam2)
		return !func_373(iParam0, hParam1);

	return true;
}

BOOL func_364(int iParam0, var uParam1) // Position - 0x9FA4 Signature - 22 02 04 00 00 66 00 09 39 6E
{
	*uParam1 = func_424(iParam0, true);
	return *uParam1 != 0;
}

BOOL func_365(int iParam0, var uParam1) // Position - 0x9FBB Signature - 22 02 04 00 00 66 00 09 2F 39 03
{
	*uParam1 = func_425(iParam0, true, false);
	return *uParam1 != 0;
}

BOOL func_366(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x9FD3 Signature - 22 03 13 00 00 66 00 2F
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	if (!func_188(hParam0, 0))
		return func_426(func_301(hParam0), hParam1, bParam2);

	if (func_271(hParam0) || func_203(hParam0, 1077060302))
		return func_373(func_272(hParam0, true), hParam1);

	unk = 10;

	if (bParam2 && func_38() == 0 && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return true;

	if (!func_427(hParam0, hParam1, &unk, &num) || num < 1)
		return false;

	for (i = 0; i < num; i = i + 1)
	{
		unlockHash = unk[i];
	
		if (unlockHash == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
		{
			return true;
		}
	}

	return false;
}

Hash func_367(Hash hParam0, BOOL bParam1) // Position - 0xA098 Signature - 22 02 27 00 00 4B 06 6D 0F 3D 41 2F 67 04 66 04 1D 8A 7B 00 66 04 09 2F 39 74 C2 00 67 25 66 00 66 25 4B 06 4B 05 09
{
	int i;
	int num;
	var unk;
	Hash hash;
	int j;

	unk = 15;

	for (i = 0; i < 3; i = i + 1)
	{
		hash = func_428(i, true, false);
	
		if (!func_282(hParam0, hash, &unk, &num, true, false))
		{
		}
		else
		{
			for (j = 0; j < num; j = j + 1)
			{
				if (func_429(unk[j /*2*/]))
				{
					if (!bParam1 || func_398(unk[j /*2*/], false, true, true) > 0)
						return hash;
				
					break;
				}
			
				if (unk[j /*2*/] == 0)
					break;
			}
		}
	}

	return 0;
}

Hash func_368(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xA12B Signature - 22 03 2F 00 00 4B 0E 6D 0F 3D 41 2F 67 05 66 05 62 8A 46 01 66 05 2F 09 39 74 C2 00 67 2D 66 00 66 2D 4B 0E 4B 06 09
{
	int i;
	int num;
	var unk;
	var unk2;
	Hash hash;
	Hash hash2;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var unk3;
	Hash hash3;
	int j;

	unk3 = 15;

	for (i = 0; i < 5; i = i + 1)
	{
		hash3 = func_428(i, false, true);
	
		if (!func_282(hParam0, hash3, &unk3, &num, true, false))
		{
		}
		else
		{
			flag3 = false;
			hash2 = 0;
		
			for (j = 0; j < num; j = j + 1)
			{
				if (func_430(unk3[j /*2*/]))
				{
					if (!bParam1 || func_398(unk3[j /*2*/], false, true, true) > 0)
						flag3 = true;
				}
				else if (unk3[j /*2*/] == joaat("currency_cash") || unk3[j /*2*/] == joaat("currency_gold_bar"))
				{
					if (bParam2 && unk3[j /*2*/] == joaat("currency_cash") || !bParam2 && unk3[j /*2*/] == joaat("currency_gold_bar"))
					{
						if (hash == 0 || flag && unk3[j /*2*/].f_1 < unk)
						{
							hash2 = hash3;
							unk2 = unk3[j /*2*/].f_1;
							flag2 = 1;
						}
					}
					else if (hash == 0 || unk3[j /*2*/].f_1 < unk)
					{
						hash2 = hash3;
						unk2 = unk3[j /*2*/].f_1;
						flag2 = 0;
					}
				}
				else if (unk3[j /*2*/] == 0)
				{
					break;
				}
			}
		
			if (flag3 && hash2 != 0)
			{
				hash = hash2;
				unk = unk2;
				flag = flag2;
			}
		}
	}

	return hash;
}

void func_369(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0xA28A Signature - 22 04 2B 00 00 66 02 76 6D 0F 8A 06 00 50 04 00 68 16 00 66 03 66 02 76 20 6A 05 8B 05 00 66 03 09 35 30 8B 03 00 50 04 00 4B 0D 6A 80 01 6D 0A 3D 41 41 66 00 4B 0D 03 09 00 DF
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Any any;
	int num;
	var unk12;
	var unk14;

	if (*uParam2 < 15)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	num.f_1 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(hParam0, &num) || num == 0)
		return;

	unk14 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk14[i] = 1f;
	}

	for (j = 0; j < num; j = j + 1)
	{
		any = num.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(any);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(any, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(any);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(any, l, &unk12))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (uParam2->[i /*2*/] == unk12)
							{
								unk14[i] = unk14[i] + (unk12.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk14[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk14[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk14[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_357(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

BOOL func_370(Hash hParam0) // Position - 0xA460 Signature - 22 01 03 00 00 66 00 03 05 00 11
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

void func_371(int iParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0xA46E Signature - 22 04 2B 00 00 66 02 76 6D 0F 8A 06 00 50 04 00 68 16 00 66 03 66 02 76 20 6A 05 8B 05 00 66 03 09 35 30 8B 03 00 50 04 00 4B 0D 6A 80 01 6D 0A 3D 41 41 66 00 4B 0D 03 09 00 3F
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Any any;
	int num;
	var unk12;
	var unk14;

	if (*uParam2 < 15)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	num.f_1 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_AWARD_COST_MODIFIERS(iParam0, &num) || num == 0)
		return;

	unk14 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk14[i] = 1f;
	}

	for (j = 0; j < num; j = j + 1)
	{
		any = num.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(any);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(any, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(any);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(any, l, &unk12))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (uParam2->[i /*2*/] == unk12)
							{
								unk14[i] = unk14[i] + (unk12.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk14[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk14[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk14[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_357(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

BOOL func_372(var uParam0) // Position - 0xA644 Signature - 22 01 03 00 00 66 00 76 2F 0B 6A 8B 17
{
	if (*uParam0 == 0 && uParam0->f_1 == 0 || uParam0->f_1 == -889271554 && uParam0->f_2 == 0 && uParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_373(int iParam0, Hash hParam1) // Position - 0xA68A Signature - 22 02 E0
{
	var unk;
	int num;
	Hash unlockHash;
	int num2;
	int i;
	int j;

	unk = 10;
	unk.f_1.f_4 = 15;
	unk.f_1.f_36 = 10;
	unk.f_1.f_47.f_4 = 15;
	unk.f_1.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(iParam0, &unk, &num, 10) || num == 0)
		return false;

	num2 = 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*47*/] == hParam1)
		{
			num2 = unk[i /*47*/].f_35;
		
			for (j = 0; j < num2; j = j + 1)
			{
				unlockHash = unk[i /*47*/].f_36[j];
			
				if (unlockHash == 0)
				{
				}
				else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
				{
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_374(int iParam0, Hash hParam1) // Position - 0xA7D3 Signature - 22 02 08 00 00 66 01
{
	int num;
	int num2;
	var unk;

	if (hParam1 == -570078785)
	{
		num = func_193(iParam0, -570078785, false, true);
		num == 0;
	
		if (!func_395(num))
		{
			if (Global_1915656.f_20644)
				func_432(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_431(num)));
		
			return 0;
		}
	}
	else if (hParam1 == -915411861)
	{
		num2 = func_193(iParam0, -915411861, false, true);
		num2 == 0;
	
		if (!func_394(num2))
		{
			if (Global_1915656.f_20644)
				func_432("SHOP_H_TOO_POOR");
		
			return 0;
		}
	}
	else if (hParam1 == 997808187)
	{
		return 1;
	}

	if (!func_392(iParam0, hParam1, &unk, true, false))
		return 0;

	return 1;
}

BOOL func_375(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0xA88D Signature - 22 12 14
{
	if (!func_284(uParam0.f_17))
		return false;

	return true;
}

BOOL func_376(int* piParam0, Hash hParam1) // Position - 0xA8A6 Signature - 22 02 05 00 00 66 00 76
{
	Hash action;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
		if (!func_433(piParam0, hParam1))
			return false;

	action = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*piParam0);

	if (action != hParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0) >= 50)
	{
		if (!func_434(piParam0))
			return false;
	
		if (!func_433(piParam0, hParam1))
			return false;
	}

	return true;
}

BOOL func_377(int iParam0, Hash hParam1, Any* panParam2) // Position - 0xA909 Signature - 22 03 05 00 00 66 00 66 01 66 02 6D 12 66 02 2F 03 19 00 9A 50 03 01 22 02
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

BOOL func_378(int* piParam0, BOOL bParam1) // Position - 0xA920 Signature - 22 02 04 00 00 66 00 27
{
	piParam0->f_2 = piParam0->f_2 + 1;

	if (bParam1)
		return func_434(piParam0);

	return true;
}

BOOL func_379(Hash hParam0) // Position - 0xA941 Signature - 22 01 04 00 00 66 00 39 F5
{
	Hash hash;

	hash = func_301(hParam0);

	if (func_345(hash, 2))
		return true;

	return false;
}

BOOL func_380(int* piParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0xA960 Signature - 22 05 63
{
	int num;
	var unk;
	var unk2;
	int i;
	var unk4;
	Hash hash;
	var unk85;
	var unk89;

	if (!func_345(hParam1, 2))
		return 0;

	unk2 = 1;
	unk4 = 16;
	func_435(hParam1, &unk2, &unk, &unk4, &num);

	if (func_210(bParam4, 8) && !func_436(hParam1, hParam2, iParam3))
		return 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk4[i /*5*/].f_1 == -1591664384)
		{
			hash = unk4[i /*5*/];
		
			if (func_210(bParam4, 4))
				if (!func_383(piParam0, hash, unk85, unk89, hParam2, iParam3 * unk4[i /*5*/].f_4, true, true))
					return 0;
		}
	}

	return 1;
}

BOOL func_381(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5) // Position - 0xAA0B Signature - 22 06 16 00 00 4B
{
	var unk;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		return false;

	unk.f_9 = -1591664384;

	if (!func_359(uParam1, &unk, true, false, -1))
		return false;

	if (!func_422(hParam0, func_357(unk.f_4), hParam5))
		return false;

	return true;
}

BOOL func_382(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0xAA5C Signature - 22 03 05 00 00 66 02 09
{
	if (func_210(bParam2, 1))
		if (!func_437(hParam0))
			return false;

	if (func_210(bParam2, 2))
		if (func_366(hParam0, hParam1, true))
			return false;

	return true;
}

BOOL func_383(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, Hash hParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0xAA97 Signature - 22 0B 18
{
	var unk;
	Hash hash;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	if (!bParam10 && !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam2))
		return false;

	unk.f_4 = hParam6;
	unk = { uParam2 };
	hash = func_317(hParam1, uParam2, hParam6, true, !bParam10, false);
	num = func_438(hParam1, &unk, !bParam10, true);

	if (bParam9)
		num2 = 1;
	else
		func_439(hParam1, hParam7, &num2, false);

	num3 = func_440(piParam0, hParam1) * num2;
	num3 > 0;

	if (num >= 0)
	{
		num4 = num - (hash + num3);
		num5 = iParam8 * num2;
	
		if (num5 > num)
			num5 = num;
	
		if (num4 <= 0)
			return false;
		else if (num5 - num4 >= num2)
			return false;
	}

	return true;
}

BOOL func_384(int* piParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0xAB4E Signature - 22 04 0D 00 00 66
{
	int num;
	int num2;
	int num3;
	int num4;
	var unk;
	var unk3;

	if (func_441(hParam1, true) && !func_442(hParam1, true))
	{
		if (Global_1915656.f_20644)
			func_432(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_TOKEN"));
	
		return 0;
	}

	if (hParam2 == -570078785)
	{
		num = func_191(hParam1, -570078785, true, false, true, 0);
		num == 0;
		num2 = num * iParam3;
	
		if (!func_395(num2 + func_443(piParam0, hParam2)))
		{
			if (Global_1915656.f_20644)
				func_432(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", num2 / 100));
		
			return 0;
		}
	}
	else if (hParam2 == -915411861)
	{
		num3 = func_191(hParam1, -915411861, true, false, true, 0);
		num3 == 0;
		num4 = num3 * iParam3;
	
		if (!func_394(num4 + func_443(piParam0, hParam2)))
		{
			if (Global_1915656.f_20644)
				func_432("SHOP_H_TOO_POOR");
		
			return 0;
		}
	}
	else if (hParam2 == 997808187)
	{
		return 1;
	}

	if (func_345(func_301(hParam1), 2))
		if (!func_444(func_301(hParam1), iParam3, hParam2, &unk, true))
			return 0;
	else if (func_188(hParam1, 0))
		if (!func_315(hParam1, iParam3, hParam2, &unk, &unk3, false, true, false))
			return 0;

	return 1;
}

struct<4> func_385() // Position - 0xAC96 Signature - 22 00 06 00 00 42
{
	var unk;

	return unk;
}

BOOL func_386(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0xACA2 Signature - 22 03 05 00 00 66 01 27
{
	if (panParam1->f_9 < 1)
		return false;

	if (!func_188(panParam1->f_8, 0) && !func_345(func_301(panParam1->f_8), 2))
		return false;

	if (func_210(bParam2, 128))
		if (!func_345(func_301(panParam1->f_8), 2))
			if (func_357(panParam1->f_8) == 0)
				return false;

	if (func_210(bParam2, 16))
		if (!func_417(hParam0, panParam1))
			return false;

	return true;
}

BOOL func_387(int iParam0, Hash hParam1, Any* panParam2) // Position - 0xAD22 Signature - 22 03 05 00 00 66 00 66 01 66 02 6D 12 66 02 2F 03 19 00 9A 50 03 01 22 03
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

BOOL func_388(int iParam0, Hash hParam1, Any* panParam2) // Position - 0xAD39 Signature - 22 03 05 00 00 66 00 66 01 66 02 6D 11
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

void func_389(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xAD50 Signature - 22 04 07 00 00 66 00 08 15 03 00 50 04 00 5D
{
	int i;

	if (iParam0 == -1)
		return;

	if (Global_1292143.f_20 < 20)
	{
		Global_1292143.f_20 = Global_1292143.f_20 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_20.f_1[i /*21*/] = { Global_1292143.f_20.f_1[i + 1 /*21*/] };
		}
	}

	func_445(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

int func_390(int iParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0xAE2C Signature - 22 05 28 00 00 4B 07 6D 0F 3D 41 66 00 66
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_285(iParam0, hParam2, &unk, &num, bParam3, bParam4))
	{
		!bParam3;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == iParam1)
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam3;
	return 0;
}

BOOL func_391(Hash hParam0) // Position - 0xAE98 Signature - 22 01 03 00 00 66 00 3C 08
{
	switch (hParam0)
	{
		case -1843707398:
		case -1571233163:
		case -1354270243:
		case -1251985981:
		case -1197011183:
		case 75922725:
		case 975507354:
		case 1070046552:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_392(int iParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0xAEDD Signature - 22 05 2B 00 00 4B 07 6D 0F 3D 41 66 00 66 01
{
	var unk;
	int num;
	int i;
	int num2;
	int num3;
	int num4;

	unk = 15;

	if (!func_285(iParam0, hParam1, &unk, &num, false, true))
		return 0;

	num3 = -1;

	if (Global_1915656.f_20638)
		num3 = Global_1915656.f_20241;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0)
			break;
	
		if (unk[i /*2*/] == joaat("currency_cash"))
		{
			if (!bParam4 && !func_394(unk[i /*2*/].f_1))
				return 0;
		}
		else if (unk[i /*2*/] == joaat("currency_gold_bar"))
		{
			if (!bParam4 && !func_395(unk[i /*2*/].f_1))
				return 0;
		}
		else
		{
			num2 = func_396(num3, unk[i /*2*/]);
		
			if (num2 != 0)
				num4 = func_397(unk[i /*2*/], num2);
			else
				num4 = func_398(unk[i /*2*/], false, bParam3, true);
		
			if (num4 < unk[i /*2*/].f_1)
			{
				*uParam2 = { unk[i /*2*/] };
				return 0;
			}
		}
	}

	return 1;
}

BOOL func_393() // Position - 0xAFE4 Signature - 22 00 02 00 00 03 01 00 FB
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
		return false;

	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

BOOL func_394(int iParam0) // Position - 0xB000 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 39
{
	if (iParam0 < 0)
		return false;

	if (func_38() == 0)
		return func_446(iParam0);

	return iParam0 <= func_447();
}

BOOL func_395(int iParam0) // Position - 0xB02D Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 2F 15 04 00 09 50 01 01 2F
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

int func_396(int iParam0, Hash hParam1) // Position - 0xB050 Signature - 22 02 04 00 00 66 00 6D
{
	if (iParam0 == 15 && func_203(hParam1, -2051813666))
		return 1;

	return 0;
}

int func_397(Hash hParam0, int iParam1) // Position - 0xB075 Signature - 22 02 0E
{
	var unk;
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_188(hParam0, 0))
		return 0;

	unk = { func_352(false) };
	unk.f_4 = func_448(iParam1);
	guid = { func_269(hParam0, unk, unk.f_4, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_258(false), &guid, false);
	return inventoryItemCountWithGuid;
}

int func_398(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xB0D0 Signature - 22 04 0D 00 00 2F
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_188(hParam0, 0))
		return 0;

	num = func_291(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_449(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_450(hParam0, false);
	}

	if (func_266(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_258(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_451(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_258(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_399(Hash hParam0) // Position - 0xB192 Signature - 22 01 03 00 00 66 00 2F 39 49 52 00 05 8B 04 00 2F 50 01 01 66 00 37 AA
{
	if (!func_188(hParam0, 0))
		return false;

	if (func_203(hParam0, joaat("ci_tag_item_meat_animal")))
		return true;

	return func_400(hParam0);
}

BOOL func_400(Hash hParam0) // Position - 0xB1C1 Signature - 22 01 03 00 00 66 00 2F 39 49 52 00 05 8B 04 00 2F 50 01 01 66 00 37 30
{
	if (!func_188(hParam0, 0))
		return 0;

	if (func_203(hParam0, -839724752))
		return 1;

	return 0;
}

int func_401(int iParam0, Hash hParam1, var uParam2) // Position - 0xB1EB Signature - 22 03 24
{
	Ped ped;
	ItemSet itemset;
	int itemsetSize;
	var unk;
	int num;
	int i;
	Entity entityFromItem;
	int j;
	Hash hash;

	iParam0 = func_452(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_188(hParam1, 0))
		return 0;

	if (!func_453(iParam0))
		return 0;

	ped = func_454(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return 0;

	if (PED::IS_PED_INJURED(ped))
		return 0;

	if (TASK::IS_PED_IN_WRITHE(ped))
		return 0;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(ped, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);
	unk.f_1 = 10;
	unk.f_12 = 10;
	num = 0;

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (!func_455(entityFromItem))
		{
		}
		else
		{
			MISC::_LOOT_TABLES_GET_INFO(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem), true, true, ENTITY::GET_ENTITY_MODEL(entityFromItem), &unk, 0);
		
			for (j = 0; j < 10; j = j + 1)
			{
				hash = unk.f_1[j];
			
				if (hash == hParam1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
						*uParam2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem);
				
					num = num + 1;
				}
			}
		}
	}

	if (ITEMSET::IS_ITEMSET_VALID(itemset))
		ITEMSET::DESTROY_ITEMSET(itemset);

	return num;
}

int func_402(Hash hParam0, int iParam1) // Position - 0xB318 Signature - 22 02 16
{
	int num;
	int num2;
	int num3;
	var unk;
	int num4;
	Hash hash;
	int i;
	Hash hash2;
	int num5;

	if (!func_188(hParam0, 0))
		return 0;

	if (!func_399(hParam0) && !func_400(hParam0))
		return 0;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	num4 = func_456(hParam0, 1697966752);

	if (num4 == 0)
		return 0;

	unk = { func_457(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, num4, 0) };

	if (func_458(unk, &num2, &num3, 0))
	{
		for (i = 0; i < num3; i = i + 1)
		{
			hash = func_459(i, num2);
		
			if (func_188(hash, 0) && hParam0 != hash)
			{
				hash2 = func_460(hash);
			
				if (hash2 != 0)
				{
					num5 = func_397(hash, iParam1);
				
					if (num5 > 0)
						num = num + (num5 * func_462(hash2, func_461(hash), hParam0));
				}
			}
		}
	
		func_463(num2);
	}

	return num;
}

int func_403(int iParam0, Hash hParam1) // Position - 0xB435 Signature - 22 02 08 00 00 66 00 39 06
{
	Ped horse;
	Hash hash;
	int num;
	int i;

	iParam0 = func_452(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_188(hParam1, 0))
		return 0;

	if (!func_453(iParam0))
		return 0;

	horse = func_454(iParam0);
	hash = hParam1;

	if (ENTITY::IS_ENTITY_DEAD(horse))
		return 0;

	if (PED::IS_PED_INJURED(horse))
		return 0;

	if (TASK::IS_PED_IN_WRITHE(horse))
		return 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (PED::_GET_PELT_FROM_HORSE(horse, i) != hash)
		{
		}
		else
		{
			num = num + 1;
		}
	}

	return num;
}

int func_404(Hash hParam0) // Position - 0xB4D3 Signature - 22 01 05 00 00 66 00 2F 39
{
	int num;
	Entity firstEntityPedIsCarrying;

	if (!func_188(hParam0, 0))
		return 0;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
	
		if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying) && !ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying))
			if (hParam0 == ENTITY::_GET_CARRIABLE_FROM_ENTITY(firstEntityPedIsCarrying))
				num = num + 1;
	}

	return num;
}

BOOL func_405(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0xB525 Signature - 22 05 07 00 00 66 00 03
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_258(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

BOOL func_406(int iParam0) // Position - 0xB55F Signature - 22 01 03 00 00 66 00 2F 7E 6A 8B 06 00 66 00 6D 0C 77 69 50 01 01 22 02 0D
{
	return iParam0 >= 0 && iParam0 <= 12;
}

int func_407(var uParam0, var uParam1) // Position - 0xB575 Signature - 22 02 0D
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

	if (!func_330(uParam0, &unk))
		return -1;

	num = 0;
	num2 = Global_1072759.f_19487 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
		func_330(Global_1072759.f_19487.f_1[num3 /*3*/], &unk4);
	
		if (unk4 > unk)
			num2 = num3 - 1;
		else if (unk4 < unk)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

void func_408(Player plParam0) // Position - 0xB61C Signature - 22 01 04 00 00 5D 17 00 18 27 11
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_464(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_409(Player plParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0xB688 Signature - 22 06 16 00 00 5D
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

	if (func_465(player, iParam1, iParam5))
		num = 1;

	if (Global_1072759.f_21353.f_1[player /*8*/] != 2)
	{
		if (!Global_1295666.f_17[player])
		{
			func_408(plParam0);
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
						func_409(player1, iParam1, 0, true, false, 0);
				}
			}
		}
	
		if (flag)
		{
			unk.f_6 = 255;
			unk.f_4 = 1;
			unk.f_6 = plParam0;
			unk.f_7 = iParam1;
			func_466(&unk, value);
		}
	}

	return;
}

void func_410(Any* panParam0) // Position - 0xB7C3 Signature - 22 01 03 00 00 2F 66 00 32 08
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

void func_411(Hash hParam0) // Position - 0xB7D9 Signature - 22 01 04 00 00 66 00 6D
{
	int feedMessage;

	feedMessage = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(95));

	if (func_467(feedMessage))
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(feedMessage, true);

	return;
}

struct<2> func_412(Player plParam0) // Position - 0xB802 Signature - 22 01 05 00 00 66 00 4B
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

Hash func_413(int iParam0) // Position - 0xB816 Signature - 22 01 03 00 00 66 00 3C 1C 00 00 00 00 00 A5 00 07 00 00 00 A7 00 0B 00 00 00 B1 00 0C 00 00 00 A3 00 0D 00 00 00 AD 00 0E 00 00 00 AF 00 0F 00 00 00 B1 00 10 00 00 00 B3 00 11 00 00 00 B5 00 12 00 00 00 B7 00 13 00 00 00 B9 00 14 00 00 00 BB 00 15 00 00 00 BD 00 16 00 00 00 BF 00 17 00 00 00 C1 00 18 00 00 00 C3 00 19 00 00 00 C5 00 1A 00 00 00 C7 00 1B 00 00 00 C9 00 1C 00 00 00 CB 00 1D 00 00 00 CD 00 1E 00 00 00 CF 00 1F 00 00 00 D1 00 20 00 00 00 D3 00 21 00 00 00 D5 00 22 00 00 00 D7 00 23 00 00 00 D9 00 24 00 00 00 DB 00 68 E0 00 37 36
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

Hash func_414(int iParam0) // Position - 0xB9AF Signature - 22 01 03 00 00 66 00 6D FF
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		return NETWORK::_NETWORK_GET_RANK();

	return Global_1155150[iParam0 /*30*/];
}

Hash func_415(int iParam0) // Position - 0xB9DB Signature - 22 01 03 00 00 66 00 3C 1C 00 00 00 00 00 A5 00 07 00 00 00 A7 00 0B 00 00 00 B1 00 0C 00 00 00 A3 00 0D 00 00 00 AD 00 0E 00 00 00 AF 00 0F 00 00 00 B1 00 10 00 00 00 B3 00 11 00 00 00 B5 00 12 00 00 00 B7 00 13 00 00 00 B9 00 14 00 00 00 BB 00 15 00 00 00 BD 00 16 00 00 00 BF 00 17 00 00 00 C1 00 18 00 00 00 C3 00 19 00 00 00 C5 00 1A 00 00 00 C7 00 1B 00 00 00 C9 00 1C 00 00 00 CB 00 1D 00 00 00 CD 00 1E 00 00 00 CF 00 1F 00 00 00 D1 00 20 00 00 00 D3 00 21 00 00 00 D5 00 22 00 00 00 D7 00 23 00 00 00 D9 00 24 00 00 00 DB 00 68 E0 00 37 4A
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

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_416(Any anParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0xBB74 Signature - 22 04 07 00 00 2F 66
{
	int i;

	*uParam1 = 0;

	if (*anParam0 != 10)
		return false;

	for (i = 0; i < 10; i = i + 1)
	{
		if (iParam2 < 1)
			break;
	
		if (anParam0->[i /*6*/].f_4 == 0)
			goto 0xF4;
	
		if (anParam0->[i /*6*/].f_5 == 0)
			goto 0xF4;
	
		if (func_468(&anParam0->[i /*6*/]))
		{
		}
		else
		{
			if (i != *uParam1)
			{
				anParam0->[*uParam1 /*6*/] = { anParam0->[i /*6*/] };
				anParam0->[*uParam1 /*6*/].f_4 = anParam0->[i /*6*/].f_4;
			}
		
			if (anParam0->[i /*6*/].f_5 > iParam2)
			{
				anParam0->[*uParam1 /*6*/].f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				anParam0->[*uParam1 /*6*/].f_5 = anParam0->[i /*6*/].f_5;
				iParam2 = iParam2 - anParam0->[*uParam1 /*6*/].f_5;
			}
		
			if (i > *uParam1)
			{
				anParam0->[i /*6*/] = { func_385() };
				anParam0->[i /*6*/].f_4 = 0;
				anParam0->[i /*6*/].f_5 = 0;
			}
		
			*uParam1 = *uParam1 + 1;
		}
	}

	if (bParam3 && iParam2 > 0)
	{
		*uParam1 = 0;
		return false;
	}

	return true;
}

BOOL func_417(Hash hParam0, Any* panParam1) // Position - 0xBC8B Signature - 22 02 05 00 00 66 00 66
{
	BOOL flag;

	flag = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_469(panParam1->f_8, hParam0, flag, 2048) || func_469(panParam1->f_8, hParam0, flag, 32768) || func_469(panParam1->f_8, hParam0, flag, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_469(panParam1->f_8, hParam0, flag, 4) || func_469(panParam1->f_8, hParam0, flag, 256) || func_469(panParam1->f_8, hParam0, flag, 65536) || func_469(panParam1->f_8, hParam0, flag, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_469(panParam1->f_8, hParam0, flag, true) || func_469(panParam1->f_8, hParam0, flag, 8) || func_469(panParam1->f_8, hParam0, flag, 65536) || func_469(panParam1->f_8, hParam0, flag, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_469(panParam1->f_8, hParam0, flag, true) || func_469(panParam1->f_8, hParam0, flag, 16) || func_469(panParam1->f_8, hParam0, flag, 2) || func_469(panParam1->f_8, hParam0, flag, 65536))
			return false;
	else if (func_469(panParam1->f_8, hParam0, flag, 8) || func_469(panParam1->f_8, hParam0, flag, 4096) || func_469(panParam1->f_8, hParam0, flag, 256) || func_469(panParam1->f_8, hParam0, flag, 65536))
		return false;

	return true;
}

int func_418(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0xBE61 Signature - 22 03 05 00 00 66 00 8B 21
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_295(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_295(iParam1, 2, 0, 0);
	return -1;
}

int func_419(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0xBEAA Signature - 22 03 05 00 00 66 00 8B 0E
{
	if (bParam0)
	{
		func_295(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

int func_420() // Position - 0xBEC6 Signature - 22 00 02 00 00 37 20
{
	if (func_283(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

BOOL func_421(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0xBEE3 Signature - 22 04 07 00 00 2F 39
{
	int inventoryId;

	inventoryId = func_258(false);
	*panParam1 = { func_269(hParam0, func_353(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_422(Hash hParam0, int iParam1, Hash hParam2) // Position - 0xBF28 Signature - 22 03 05 00 00 66 02 37
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, iParam1, hParam2);
}

BOOL func_423(var uParam0, var uParam1) // Position - 0xBF5B Signature - 22 02 04 00 00 11
{
	return func_470(uParam0, 5, 8);
}

Hash func_424(int iParam0, BOOL bParam1) // Position - 0xBF6E Signature - 22 02 27 00 00 4B 06 6D 0F 3D 41 2F 67 04 66 04 1D 8A 7B 00 66 04 09 2F 39 74 C2 00 67 25 66 00 66 25 4B 06 4B 05 2F
{
	int i;
	int num;
	var unk;
	Hash hash;
	int j;

	unk = 15;

	for (i = 0; i < 3; i = i + 1)
	{
		hash = func_428(i, true, false);
	
		if (!func_285(iParam0, hash, &unk, &num, false, true))
		{
		}
		else
		{
			for (j = 0; j < num; j = j + 1)
			{
				if (func_429(unk[j /*2*/]))
				{
					if (!bParam1 || func_398(unk[j /*2*/], false, true, true) > 0)
						return hash;
				
					break;
				}
			
				if (unk[j /*2*/] == 0)
					break;
			}
		}
	}

	return 0;
}

Hash func_425(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC003 Signature - 22 03 2F 00 00 4B 0E 6D 0F 3D 41 2F 67 05 66 05 62 8A 46 01 66 05 2F 09 39 74 C2 00 67 2D 66 00 66 2D 4B 0E 4B 06 2F
{
	int i;
	int num;
	var unk;
	var unk2;
	Hash hash;
	Hash hash2;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var unk3;
	Hash hash3;
	int j;

	unk3 = 15;

	for (i = 0; i < 5; i = i + 1)
	{
		hash3 = func_428(i, false, true);
	
		if (!func_285(iParam0, hash3, &unk3, &num, false, true))
		{
		}
		else
		{
			flag3 = false;
			hash2 = 0;
		
			for (j = 0; j < num; j = j + 1)
			{
				if (func_430(unk3[j /*2*/]))
				{
					if (!bParam1 || func_398(unk3[j /*2*/], false, true, true) > 0)
						flag3 = true;
				}
				else if (unk3[j /*2*/] == joaat("currency_cash") || unk3[j /*2*/] == joaat("currency_gold_bar"))
				{
					if (bParam2 && unk3[j /*2*/] == joaat("currency_cash") || !bParam2 && unk3[j /*2*/] == joaat("currency_gold_bar"))
					{
						if (hash == 0 || flag && unk3[j /*2*/].f_1 < unk)
						{
							hash2 = hash3;
							unk2 = unk3[j /*2*/].f_1;
							flag2 = 1;
						}
					}
					else if (hash == 0 || unk3[j /*2*/].f_1 < unk)
					{
						hash2 = hash3;
						unk2 = unk3[j /*2*/].f_1;
						flag2 = 0;
					}
				}
				else if (unk3[j /*2*/] == 0)
				{
					break;
				}
			}
		
			if (flag3 && hash2 != 0)
			{
				hash = hash2;
				unk = unk2;
				flag = flag2;
			}
		}
	}

	return hash;
}

BOOL func_426(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0xC162 Signature - 22 03 13 00 00 66 00 11
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	if (!func_345(hParam0, 2))
		return 0;

	unk = 10;

	if (bParam2 && func_38() == 0 && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return 1;

	if (!func_471(hParam0, hParam1, &unk, &num) || num < 1)
		return 0;

	for (i = 0; i < num; i = i + 1)
	{
		unlockHash = unk[i];
	
		if (unlockHash == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
		{
			return 1;
		}
	}

	return 0;
}

BOOL func_427(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0xC1F0 Signature - 22 04 36 00 00 2F 66 03 32 66 02 76 6D 0A 8A 04 00 2F 50 04 01 66 00 2F
{
	var unk;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 10)
		return false;

	if (!func_188(hParam0, 0))
		return false;

	unk.f_4 = 15;
	unk.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &unk))
		return false;

	if (unk.f_35 > 10)
		unk.f_35 = 10;

	*uParam3 = unk.f_35;

	for (i = 0; i < unk.f_35; i = i + 1)
	{
		uParam2->[i] = unk.f_36[i];
	}

	return true;
}

Hash func_428(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC274 Signature - 22 03 06 00 00 2F 67 05 66
{
	int num;

	num = 0;

	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
		
			case 1:
				return 866168015;
		
			case 2:
				return -1103707655;
		
			default:
			
		}
	
		num = 3;
	}

	if (bParam2)
	{
		switch (iParam0 - num)
		{
			case 0:
				return 75922725;
		
			case 1:
				return 1070046552;
		
			case 2:
				return -1843707398;
		
			case 3:
				return -1571233163;
		
			case 4:
				return -1197011183;
		
			default:
			
		}
	}

	return 0;
}

BOOL func_429(Hash hParam0) // Position - 0xC310 Signature - 22 01 03 00 00 66 00 39 60 9E 00 37 0F
{
	return func_357(hParam0) == 1946043663;
}

BOOL func_430(Hash hParam0) // Position - 0xC324 Signature - 22 01 03 00 00 66 00 39 60 9E 00 37 8D
{
	return func_357(hParam0) == -126813555;
}

int func_431(int iParam0) // Position - 0xC338 Signature - 22 01 03 00 00 66 00 6D 64
{
	return iParam0 / 100;
}

void func_432(const char* sParam0) // Position - 0xC345 Signature - 22 01 03 00 00 66 00 25
{
	Global_1915656.f_22470 = func_472(sParam0, 10000, 0, 0, 0, true);
	return;
}

BOOL func_433(int* piParam0, Hash hParam1) // Position - 0xC361 Signature - 22 02 04 00 00 66 00 37 61
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(piParam0, joaat("basket"), hParam1))
		return false;

	return true;
}

BOOL func_434(int* piParam0) // Position - 0xC37F Signature - 22 01 04 00 00 66 00 76
{
	Hash action;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
	{
		func_295(*piParam0, 0, 0, 0);
		return true;
	}

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*piParam0);
		func_295(*piParam0, 4, 0, 0);
		return true;
	}

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*piParam0))
	{
		func_295(*piParam0, 2, 0, 0);
		return false;
	}

	func_295(*piParam0, 1, 0, 0);
	action = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*piParam0);

	if (action == 2113164098 || action == 541670136)
		piParam0->f_3 = 1;

	piParam0->f_1 = *piParam0;
	*piParam0 = -1;
	piParam0->f_2 = 0;
	return true;
}

int func_435(Hash hParam0, Any anParam1, var uParam2, var uParam3, var uParam4) // Position - 0xC41C Signature - 22 05 16
{
	Hash hash;
	Hash hash2;
	int i;
	int j;
	int num;

	if (!func_345(hParam0, 2))
		return 0;

	if (*uParam2 > *anParam1)
		return 0;

	for (i = 0; i < *anParam1; i = i + 1)
	{
	}

	num = ITEMDATABASE::_0x799FCD53358ED5FA(hParam0, anParam1);

	for (j = 0; j < num; j = j + 1)
	{
		if (ITEMDATABASE::_0xC4146375D8A0B374(hParam0, anParam1, j, &hash))
		{
			if (anParam1->[0] == 0)
			{
				anParam1->[0] = hash;
			}
			else
			{
				*uParam2 = *uParam2 + 1;
				anParam1->[*uParam2] = hash;
			}
		
			if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hash, &hash2))
			{
				if (func_188(hash2, 0))
				{
					if (*uParam4 >= 0 && *uParam4 < *uParam3)
					{
						uParam3->[*uParam4 /*5*/] = { hash };
						*uParam4 = *uParam4 + 1;
					}
					else
					{
						return 0;
					}
				}
			}
		
			anParam1->[*uParam2] = 0;
		
			if (*uParam2 > 0)
				*uParam2 = *uParam2 - 1;
		}
	}

	return 1;
}

BOOL func_436(Hash hParam0, Hash hParam1, int iParam2) // Position - 0xC501 Signature - 22 03 36
{
	var unk;
	var unk48;

	unk.f_4 = 15;
	unk.f_36 = 10;
	func_473(hParam0, hParam1, &unk);

	if (hParam1 == -570078785)
	{
		unk.f_3 == 0;
	
		if (!func_395(unk.f_3 * iParam2))
		{
			if (Global_1915656.f_20644)
				func_432(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_431(unk.f_3 * iParam2)));
		
			return false;
		}
	}
	else if (hParam1 == -915411861)
	{
		unk.f_3 == 0;
	
		if (!func_394(unk.f_3 * iParam2))
		{
			if (Global_1915656.f_20644)
				func_432("SHOP_H_TOO_POOR");
		
			return false;
		}
	}
	else if (hParam1 == 997808187)
	{
		return true;
	}

	if (!func_444(hParam0, iParam2, hParam1, &unk48, true))
		return false;

	return true;
}

BOOL func_437(Hash hParam0) // Position - 0xC5CD Signature - 22 01 05 00 00 66 00 2F 15 04 00 2F 50 01 01 2F
{
	BOOL flag;
	Hash weaponUnlock;

	if (hParam0 == 0)
		return false;

	flag = false;

	if (func_38() == -1)
	{
		if (func_474(hParam0))
		{
			weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);
			flag = UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock);
		}
		else
		{
			return true;
		}
	}
	else
	{
		flag = UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	}

	return flag;
}

int func_438(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0xC617 Signature - 22 04 06 00 00 66 00 2F
{
	if (!func_188(hParam0, 0))
	{
		if (func_345(func_301(hParam0), 2))
			return -1;
	
		return 0;
	}

	if (func_291(hParam0) == joaat("fee"))
		return -1;

	if (!bParam2 && func_266(hParam0, joaat("DEFAULT")) == 0)
		bParam2 = true;

	if (bParam2)
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_258(bParam3), hParam0);
}

BOOL func_439(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0xC68B Signature - 22 04 35
{
	var unk;

	if (!func_188(hParam0, 0) && !func_345(func_301(hParam0), 2))
		return false;

	unk.f_4 = 15;
	unk.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &unk))
	{
		!bParam3;
		return false;
	}

	!bParam3;
	*uParam2 = unk.f_1;
	return true;
}

int func_440(int* piParam0, Hash hParam1) // Position - 0xC6EA Signature - 22 02 18 00 00 66 00 76 03 05 00 C4 8B 56
{
	int num;
	int i;
	int numOfItems;
	var itemInfo;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
	{
		numOfItems = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0);
		itemInfo.f_9 = 1;
		itemInfo.f_11 = -1591664384;
	
		for (i = 0; i < numOfItems; i = i + 1)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*piParam0, i, &itemInfo))
			{
			}
			else if (itemInfo.f_8 != hParam1)
			{
			}
			else
			{
				num = num + itemInfo.f_9;
			}
		}
	}

	return num;
}

BOOL func_441(Hash hParam0, BOOL bParam1) // Position - 0xC754 Signature - 22 02 04 00 00 66 00 37 4E
{
	if (!func_203(hParam0, 947377998))
		return false;

	if (bParam1)
	{
		if (func_203(hParam0, -1090933859))
			return func_272(hParam0, true) != 0;
	
		if (func_366(hParam0, -915411861, false) || func_366(hParam0, 600942249, false) || func_366(hParam0, -570078785, false))
			return true;
		else
			return false;
	}

	return true;
}

BOOL func_442(Hash hParam0, BOOL bParam1) // Position - 0xC7CD Signature - 22 02 07 00 00 66 00 09
{
	int num;
	var unk;

	num = func_475(hParam0, true);

	if (num == 0)
		return false;

	if (func_373(num, -2141192156))
		return false;

	if (bParam1)
		if (!func_392(num, -2141192156, &unk, false, false))
			return false;

	return true;
}

int func_443(int* piParam0, Hash hParam1) // Position - 0xC817 Signature - 22 02 18 00 00 66 00 76 03 05 00 C4 8B 65
{
	int num;
	int i;
	int numOfItems;
	var itemInfo;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
	{
		numOfItems = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0);
		itemInfo.f_9 = 1;
		itemInfo.f_11 = -1591664384;
	
		for (i = 0; i < numOfItems; i = i + 1)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*piParam0, i, &itemInfo))
			{
			}
			else if (hParam1 != itemInfo.f_13)
			{
			}
			else
			{
				num = num + (func_191(itemInfo.f_8, hParam1, true, false, true, 0) * itemInfo.f_9);
			}
		}
	}

	return num;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_444(Hash hParam0, int iParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0xC890 Signature - 22 05 2B 00 00 4B 07 6D 0F 3D 41 66 00 66 02
{
	var unk;
	int num;
	int num2;
	int num3;
	int i;
	BOOL flag;

	unk = 15;

	if (!func_476(hParam0, hParam2, &unk, &num, true, false))
		return false;

	flag = !bParam4 && func_347(false) && !func_393();

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0 || unk[i /*2*/] == 1412640604)
			break;
	
		num2 = unk[i /*2*/].f_1 * iParam1;
	
		if (unk[i /*2*/] == joaat("currency_cash") && func_394(num2))
			goto 0xD9;
	
		if (unk[i /*2*/] == joaat("currency_gold_bar") && func_395(num2))
		{
		}
		else
		{
			num3 = func_398(unk[i /*2*/], false, !flag, false);
		
			if (num3 >= num2)
			{
			}
			else
			{
				*uParam3 = { unk[i /*2*/] };
				return false;
			}
		}
	}

	return true;
}

void func_445(int iParam0) // Position - 0xC976 Signature - 22 01 03 00 00 08
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_477(&(iParam0->f_4));
	return;
}

BOOL func_446(int iParam0) // Position - 0xC999 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 2F 15 04 00 09 50 01 01 66
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_447() // Position - 0xC9BC Signature - 22 00 02 00 00 39 FB
{
	if (func_38() == 0)
		return MONEY::_NETWORK_GET_CASH_BALANCE();

	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_448(int iParam0) // Position - 0xC9D7 Signature - 22 01 03 00 00 66 00 3C 02 00 00 00 00 00 09 00 01 00 00 00 0B
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
	
		case 1:
			return -1360128126;
	
		default:
		
	}

	return 1084182731;
}

Hash func_449(Hash hParam0, int iParam1) // Position - 0xCA08 Signature - 22 02 07 00 00 66 00 2F
{
	int num;
	var unk;
	Hash hash;

	if (!func_188(hParam0, 0))
		return 0;

	num = func_291(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_203(hParam0, 1399091007))
	{
		func_478(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_450(Hash hParam0, BOOL bParam1) // Position - 0xCA82 Signature - 22 02 18 00 00 66 00 03
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_479(hParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };

	if (bParam1)
		func_480(&unk, func_353(false));

	if (!func_481(&unk, &num, &num2, false))
		return 0;

	func_482(num);
	return num2;
}

struct<4> func_451(Hash hParam0, BOOL bParam1) // Position - 0xCAE1 Signature - 22 02 09 00 00 66 00 66
{
	var unk;

	unk = { func_268(hParam0, bParam1, 0) };
	return func_269(hParam0, unk, unk.f_4, bParam1);
}

int func_452(int iParam0) // Position - 0xCB06 Signature - 22 01 03 00 00 66 00 0D
{
	if (iParam0 == 7)
		return Global_38.f_289;

	return iParam0;
}

BOOL func_453(int iParam0) // Position - 0xCB1F Signature - 22 01 03 00 00 66 00 39 06 CB 00 67 00 66 00 08 23
{
	iParam0 = func_452(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1902887[iParam0 /*43*/]))
		return true;

	return false;
}

Ped func_454(int iParam0) // Position - 0xCB57 Signature - 22 01 03 00 00 66 00 39 06 CB 00 67 00 66 00 08 15
{
	iParam0 = func_452(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1902887[iParam0 /*43*/];
}

BOOL func_455(Entity eParam0) // Position - 0xCB83 Signature - 22 01 04 00 00 66 00 03 05 00 D3
{
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(eParam0))
		return false;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (!ENTITY::GET_IS_ANIMAL(pedIndexFromEntityIndex))
		return false;

	if (FLOCK::_GET_ANIMAL_RARITY(pedIndexFromEntityIndex) == 2)
		return false;

	if (ENTITY::_IS_ENTITY_FULLY_LOOTED(eParam0))
		return false;

	if (FIRE::_IS_ENTITY_CONSUMED_BY_FIRE(eParam0))
		return false;

	return true;
}

int func_456(Hash hParam0, int iParam1) // Position - 0xCBE6 Signature - 22 02 2F
{
	var unk;
	int num;
	int i;

	unk = 20;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(hParam0, &unk, &num, 20))
	{
		for (i = 0; i < num; i = i + 1)
		{
			if (unk[i /*2*/].f_1 == iParam1)
				return unk[i /*2*/];
		}
	}

	return 0;
}

struct<10> func_457(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0xCC30 Signature - 22 09 15
{
	int num;

	num = -1;
	num.f_1 = -1;
	num.f_2 = -1;
	num.f_3 = -1;
	num.f_4 = -1;
	num.f_5 = -1;
	num.f_6 = -1;
	num.f_7 = -1;
	num.f_8 = -1;

	if (iParam0 != 0 && iParam0 != -1591664384)
		num = iParam0;

	if (iParam1 != 0 && iParam1 != -1591664384)
		num.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != -1)
		num.f_2 = iParam2;

	if (iParam3 != 0)
		num.f_3 = iParam3;

	if (iParam4 != 0)
		num.f_4 = iParam4;

	if (iParam5 != 0)
		num.f_5 = iParam5;

	if (iParam6 != -1)
		num.f_6 = iParam6;

	if (iParam7 != 0)
		num.f_8 = iParam7;

	if (iParam8 != 0)
		num.f_7 = iParam8;

	return num;
}

BOOL func_458(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0xCD04 Signature - 22 0D 0F
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

Hash func_459(int iParam0, int iParam1) // Position - 0xCD25 Signature - 22 02 05 00 00 66 01 2F
{
	int num;

	if (iParam1 < 0)
		return 0;

	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_ITEMDATABASE_GET_COLLECTION_SIZE(iParam1))
		return 0;

	num = 0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iParam1, iParam0, &num))
		return 0;

	return num;
}

Hash func_460(Hash hParam0) // Position - 0xCD68 Signature - 22 01 04 00 00 2F 67 03 66 00
{
	int num;

	num = 0;

	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			num = joaat("a_c_toad_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			num = joaat("a_c_bluejay_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			num = joaat("A_C_Pigeon");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			num = joaat("a_c_cardinal_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			num = joaat("a_c_carolinaparakeet_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			num = joaat("a_c_rat_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			num = joaat("a_c_crow_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			num = joaat("a_c_crab_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			num = joaat("a_c_frogbull_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			num = joaat("a_c_sparrow_01");
			break;
	
		case joaat("provision_fish_chain_pickerel_poor"):
		case joaat("provision_fish_chain_pickerel"):
			num = joaat("a_c_fishchainpickerel_01_sm");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			num = joaat("a_c_quail_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			num = joaat("a_c_chipmunk_01");
			break;
	
		case joaat("provision_fish_muskie"):
		case joaat("provision_fish_muskie_poor"):
			num = joaat("a_c_fishmuskie_01_lg");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			num = joaat("a_c_oriole_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			num = joaat("a_c_bat_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			num = joaat("a_c_woodpecker_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			num = joaat("a_c_cedarwaxwing_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			num = joaat("a_c_robin_01");
			break;
	
		case joaat("provision_fish_smallmouth_bass_poor"):
		case joaat("provision_fish_smallmouth_bass"):
			num = joaat("a_c_fishsmallmouthbass_01_ms");
			break;
	
		case joaat("provision_fish_perch_poor"):
		case joaat("provision_fish_perch"):
			num = joaat("a_c_fishperch_01_sm");
			break;
	
		case joaat("provision_fish_lake_sturgeon"):
		case joaat("provision_fish_lake_sturgeon_poor"):
			num = joaat("a_c_fishlakesturgeon_01_lg");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			num = joaat("a_c_songbird_01");
			break;
	
		case joaat("provision_fish_bluegill_poor"):
		case joaat("provision_fish_bluegill"):
			num = joaat("a_c_fishbluegil_01_sm");
			break;
	
		case joaat("provision_fish_largemouth_bass"):
		case joaat("provision_fish_largemouth_bass_poor"):
			num = joaat("a_c_fishlargemouthbass_01_ms");
			break;
	
		case joaat("provision_fish_northern_pike"):
		case joaat("provision_fish_northern_pike_poor"):
			num = joaat("a_c_fishnorthernpike_01_lg");
			break;
	
		case joaat("provision_fish_bullhead_catfish"):
		case joaat("provision_fish_bullhead_catfish_poor"):
			num = joaat("a_c_fishbullheadcat_01_sm");
			break;
	
		case joaat("provision_fish_redfin_pickerel_poor"):
		case joaat("provision_fish_redfin_pickerel"):
			num = joaat("a_c_fishredfinpickerel_01_sm");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			num = joaat("a_c_squirrel_01");
			break;
	
		case joaat("provision_fish_sockeye_salmon_poor"):
		case joaat("provision_fish_sockeye_salmon"):
			num = joaat("a_c_fishsalmonsockeye_01_ms");
			break;
	
		case joaat("provision_fish_rock_bass_poor"):
		case joaat("provision_fish_rock_bass"):
			num = joaat("a_c_fishrockbass_01_sm");
			break;
	
		case joaat("provision_fish_steelhead_trout_poor"):
		case joaat("provision_fish_steelhead_trout"):
			num = joaat("a_c_fishrainbowtrout_01_ms");
			break;
	
		case joaat("provision_fish_channel_catfish_poor"):
		case joaat("provision_fish_channel_catfish"):
			num = joaat("a_c_fishchannelcatfish_01_lg");
			break;
	
		case joaat("provision_fish_longnose_gar_poor"):
		case joaat("provision_fish_longnose_gar"):
			num = joaat("a_c_fishlongnosegar_01_lg");
			break;
	}

	return num;
}

int func_461(Hash hParam0) // Position - 0xD0DA Signature - 22 01 03 00 00 66 00 37
{
	if (func_203(hParam0, 1064293907))
		return 2;
	else if (func_203(hParam0, -1218707194))
		return 1;
	else if (func_203(hParam0, 1888974372))
		return 0;

	return 1;
}

int func_462(Hash hParam0, int iParam1, Hash hParam2) // Position - 0xD11F Signature - 22 03 17
{
	var unk;
	int num;
	int i;

	unk = 15;
	PED::_0xB29C553BA582D09E(&unk, hParam0, iParam1, 1);
	num = 0;

	for (i = 0; i < 15; i = i + 1)
	{
		if (func_188(unk[i], 0) && hParam2 == unk[i])
			num = num + 1;
	}

	return num;
}

int func_463(int iParam0) // Position - 0xD173 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 03 05 00 D6
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

void func_464(Player plParam0) // Position - 0xD194 Signature - 22 01 03 00 00 66 00 5D 77
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

BOOL func_465(Player plParam0, int iParam1, int iParam2) // Position - 0xD1CF Signature - 22 03 05 00 00 66 00 5D
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

void func_466(Any* panParam0, var uParam1) // Position - 0xD260 Signature - 22 02 04 00 00 4B 01 03 05 00 58 05 8B 03 00 50 02 00 6D BA
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 186;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 8, 2, &uParam1);
	func_483(*panParam0);
	return;
}

BOOL func_467(int iParam0) // Position - 0xD2A0 Signature - 22 01 03 00 00 66 00 2F 1C 50 01 01 22 01
{
	return iParam0 != 0;
}

BOOL func_468(Any* panParam0) // Position - 0xD2AC Signature - 22 01 03 00 00 66 00 39 7F
{
	if (!func_128(panParam0))
		return false;

	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(panParam0);
}

BOOL func_469(var uParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0xD2C8 Signature - 22 04 06 00 00 66 02 66
{
	if (func_140(bParam2, bParam3))
		return true;

	return false;
}

BOOL func_470(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0xD2E0 Signature - 22 04 07 00 00 11
{
	int num;

	if (!func_158(iParam0))
		return false;

	if (iParam0 != 2)
		return false;

	num = func_484(iParam0);
	return num >= iParam2 && num <= iParam3;
}

BOOL func_471(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0xD31B Signature - 22 04 36 00 00 2F 66 03 32 66 02 76 6D 0A 8A 04 00 2F 50 04 01 66 00 11
{
	var unk;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 10)
		return false;

	if (!func_345(hParam0, 2))
		return false;

	unk.f_4 = 15;
	unk.f_36 = 10;

	if (!func_473(hParam0, hParam1, &unk))
		return false;

	if (unk.f_35 > 10)
		unk.f_35 = 10;

	*uParam3 = unk.f_35;

	for (i = 0; i < unk.f_35; i = i + 1)
	{
		uParam2->[i] = unk.f_36[i];
	}

	return true;
}

int func_472(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0xD39F Signature - 22 06 18
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

BOOL func_473(Hash hParam0, Hash hParam1, Any anParam2) // Position - 0xD3DA Signature - 22 03 07 00 00 66 00 03
{
	int i;
	int num;

	num = ITEMDATABASE::_0x7A35A72A692BE9DB(hParam0);

	for (i = 0; i < num; i = i + 1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(hParam0, i, anParam2) && *anParam2 == hParam1)
			return true;
	}

	return false;
}

BOOL func_474(Hash hParam0) // Position - 0xD41A Signature - 22 01 03 00 00 66 00 39 8F
{
	return func_291(hParam0) == joaat("WEAPON");
}

int func_475(Hash hParam0, BOOL bParam1) // Position - 0xD42E Signature - 22 02 04 00 00 66 00 66 01 39 54
{
	if (!func_441(hParam0, bParam1))
		return 0;

	if (hParam0 == joaat("document_pamphlet_tracking_arrow"))
		return func_272(joaat("ammo_arrow_tracking"), true);
	else if (hParam0 == joaat("document_pamphlet_poison_bottle"))
		return func_272(joaat("ammo_poisonbottle"), true);
	else if (hParam0 == 318000298)
		return func_272(-1939515319, true);
	else if (hParam0 == -1771777013)
		return func_272(-1903059161, true);
	else if (hParam0 == 375366730)
		return func_272(-252071901, true);
	else if (hParam0 == -1309887827)
		return func_272(-611782825, true);

	return func_272(hParam0, true);
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_476(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0xD4E6 Signature - 22 06 09 00 00 2F 66 03 32 66 02 76 6D 0F 8A 04 00 2F 50 06 01 66 00 11
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_345(hParam0, 2))
		return false;

	*uParam3 = ITEMDATABASE::_0x388088BFF3681189(hParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam5;
		return false;
	}

	!bParam5;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUNDLE(hParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x71;
	
		!bParam5;
	}

	if (bParam4)
		func_485(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

void func_477(var uParam0) // Position - 0xD576 Signature - 22 01 03 00 00 2F 66 00 32 2F
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
	return;
}

void func_478(Hash hParam0, var uParam1, var uParam2) // Position - 0xD5D1 Signature - 22 03 05 00 00 2F
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

struct<18> func_479(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xD7DD Signature - 22 07 1B
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

void func_480(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0xD8BB Signature - 22 05 07 00 00 4B
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_481(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0xD8D6 Signature - 22 04 06 00 00 66 03
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_258(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_482(int iParam0) // Position - 0xD8FB Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 03 05 00 8F
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

void func_483(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xD91C Signature - 22 08 0A 00 00 50
{
	return;
}

int func_484(int iParam0, var uParam1) // Position - 0xD924 Signature - 22 02 04 00 00 66 00 11 15
{
	if (iParam0 == 2)
		return func_240(iParam0);

	return -1;
}

void func_485(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0xD93E Signature - 22 04 2B 00 00 66 02 76 6D 0F 8A 06 00 50 04 00 68 16 00 66 03 66 02 76 20 6A 05 8B 05 00 66 03 09 35 30 8B 03 00 50 04 00 4B 0D 6A 80 01 6D 0A 3D 41 41 66 00 4B 0D 03 09 01
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Any any;
	int num;
	var unk12;
	var unk14;

	if (*uParam2 < 15)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	num.f_1 = 10;

	if (!ITEMDATABASE::_0xA97EE5E4589FCF5A(hParam0, &num) || num == 0)
		return;

	unk14 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk14[i] = 1f;
	}

	for (j = 0; j < num; j = j + 1)
	{
		any = num.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(any);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(any, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(any);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(any, l, &unk12))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (uParam2->[i /*2*/] == unk12)
							{
								unk14[i] = unk14[i] + (unk12.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk14[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk14[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk14[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_357(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

