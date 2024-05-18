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

void main() // Position - 0x0 Signature - 22 00 06 00 00 48
{
	int gameTimer;
	int num;
	Player player;
	int i;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	gameTimer = MISC::GET_GAME_TIMER();
	func_1();
	num = MISC::GET_GAME_TIMER() - gameTimer;

	while (!func_2(false, false) && func_3())
	{
		Global_1219595.f_1.f_718 = Global_1219595.f_1.f_718 + 1;
	
		if (Global_1219595.f_1.f_718 >= 3)
			Global_1219595.f_1.f_718 = 0;
	
		switch (Global_1219595.f_1.f_718)
		{
			case 0:
				func_4();
				break;
		
			case 1:
				func_5();
				break;
		
			case 2:
				func_6();
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	player = PLAYER::PLAYER_ID();

	for (i = 0; i < 71; i = i + 1)
	{
		if (func_7(i, player, 0) && func_7(i, player, 1))
			func_8(i);
	}

	while (!SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(1440))
	{
		BUILTIN::WAIT(0);
	}

	func_9();
	return;
}

void func_1() // Position - 0xED Signature - 22 00 02 00 00 6D 20
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	func_10();

	if (func_11())
		func_9();

	func_12();
	func_13(false);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::_0xB711EB4BC8D06013();
	return;
}

BOOL func_2(BOOL bParam0, BOOL bParam1) // Position - 0x11F Signature - 22 02 05 00 00 5D 17
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

BOOL func_3() // Position - 0x1FF Signature - 22 00 02 00 00 39 D4
{
	return !func_15(func_14(), 0, 0);
}

void func_4() // Position - 0x212 Signature - 22 00 04 00 00 2F
{
	int i;
	int address;

	for (i = 0; i < 6; i = i + 1)
	{
		Global_1219595.f_1.f_715 = Global_1219595.f_1.f_715 + 1;
	
		if (Global_1219595.f_1.f_715 < 0 || Global_1219595.f_1.f_715 >= Global_1207480.f_2505.f_499)
			Global_1219595.f_1.f_715 = 0;
	
		if (Global_1219595.f_1.f_715 >= Global_1207480.f_2505.f_499)
			return;
	
		if (!func_16(Global_1207480.f_2505.f_427[Global_1219595.f_1.f_715]))
			return;
	
		if (MISC::IS_BIT_SET(address, Global_1219595.f_1.f_715))
			return;
	
		MISC::SET_BIT(&address, Global_1219595.f_1.f_715);
		func_17(Global_1207480.f_2505.f_427[Global_1219595.f_1.f_715], -1);
	}

	return;
}

void func_5() // Position - 0x2E9 Signature - 22 00 02 00 00 39 A5
{
	if (func_18())
		func_19();

	if (Global_1207480 < 1)
		return;

	func_20();
	return;
}

void func_6() // Position - 0x30B Signature - 22 00 02 00 00 85 B8 6C 12 09
{
	if (Global_1207480 < 1)
		return;

	func_21(&Global_1210485[Global_1295666 /*204*/], &(Global_1219595.f_1.f_719));
	func_22();

	if (!func_18())
		return;

	func_23(&(Global_1207480.f_28), Global_1219595.f_1.f_717, 5, Global_1219595.f_1.f_716);
	return;
}

BOOL func_7(int iParam0, Player plParam1, int iParam2) // Position - 0x361 Signature - 22 03 05 00 00 66 01
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam1))
		return false;

	return MISC::IS_BIT_SET(Global_1217218[plParam1 /*72*/][iParam0], iParam2);
}

void func_8(int iParam0) // Position - 0x389 Signature - 22 01 05 00 00 66 00 5D
{
	int i;
	int num;

	num = Global_1207480.f_231.f_1066[iParam0 /*17*/].f_7;

	if (num > 1)
		num = 1;

	for (i = 0; i < num; i = i + 1)
	{
		func_24(iParam0, i);
		func_25(iParam0, i);
	}

	func_26(iParam0, 0);
	func_27(iParam0);
	func_28(iParam0);
	return;
}

void func_9() // Position - 0x3E1 Signature - 22 00 02 00 00 03 00
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

int func_10() // Position - 0x3ED Signature - 22 00 05
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
			func_9();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_9();
					break;
			
				case 2:
					func_9();
					break;
			
				case 3:
					func_9();
					break;
			
				case 4:
					func_9();
					break;
			
				default:
					break;
			}
		}
	
		if (scriptStatus == 3 || scriptStatus == 4 || scriptStatus == 5 || scriptStatus == 6)
			func_9();
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			func_9();
	
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
			func_9();
	
		if (func_29() == 0)
			if (func_30())
				func_9();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_9();

	return 1;
}

BOOL func_11() // Position - 0x4FE Signature - 22 00 02 00 00 5D 17 00 18 27 0A 8B
{
	if (Global_1572887.f_10)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	return false;
}

void func_12() // Position - 0x52C Signature - 22 00 02 00 00 5D B8
{
	func_31(&Global_1207480);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1207480, 3005, 31);
	func_32(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1207480), 3005, "g_mpACEHostData");
	func_33(&(Global_1219595.f_1));

	if (func_34())
	{
		func_35(&Global_1210485);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1210485, 6529, 32);
		func_36(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1210485[0 /*204*/]), 6529, "g_mpACEPlayerData");
		func_37(&Global_1217218);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1217218, 2305, 33);
		func_36(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1217218[0 /*72*/]), 2305, "g_mpACELauncherPlayerData");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1210485, 6529, 32);
		func_36(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1210485[0 /*204*/]), 6529, "g_mpACEPlayerData");
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1217218, 2305, 33);
		func_36(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1217218[0 /*72*/]), 2305, "g_mpACELauncherPlayerData");
	}

	return;
}

void func_13(BOOL bParam0) // Position - 0x60B Signature - 22 01 0D 00 00 03
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
					func_9();
					break;
			
				case 2:
					func_9();
					break;
			
				case 3:
					func_9();
					break;
			
				case 4:
					func_9();
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
			func_9();
			return;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

struct<2> func_14() // Position - 0x6D4 Signature - 22 00 02 00 00 11
{
	return Global_1140723.f_5.f_3;
}

BOOL func_15(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x6E6 Signature - 22 04 06 00 00 5D
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}

	if (func_38(Global_1051268) && !func_39(Global_1051268, uParam0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}

	if (iParam2 != 0 && func_40(iParam2))
		return true;

	if (iParam3 != 0 && func_41(iParam3, 255))
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

	if (func_42())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}

	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_38(Global_1051268))
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

BOOL func_16(int iParam0) // Position - 0x80F Signature - 22 01 03 00 00 66 00 2F 7E 6A 8B 06
{
	return iParam0 >= 0 && iParam0 < 71;
}

void func_17(int iParam0, int iParam1) // Position - 0x825 Signature - 22 02 06 00 00 66 00 08
{
	BOOL flag;
	int num;

	if (iParam0 == -1)
		return;

	if (!func_43(iParam0, 1))
		return;

	flag = func_18();
	func_44(iParam0);

	if (iParam1 == -1)
	{
		num = Global_1207480.f_231.f_1066[iParam0 /*17*/].f_7;
	
		if (num > 1)
			num = 1;
	
		for (iParam1 = 0; iParam1 < num; iParam1 = iParam1 + 1)
		{
			func_45(iParam0, iParam1, flag);
		}
	}
	else
	{
		func_45(iParam0, iParam1, flag);
	}

	if (flag)
		func_46(iParam0);

	return;
}

BOOL func_18() // Position - 0x8A5 Signature - 22 00 02 00 00 5D 77
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION() || func_30())
		return false;

	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1219595, false))
		return false;

	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_ambient_content_evaluator", -1, true, 0))
		return false;

	return PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1219595);
}

void func_19() // Position - 0x90D Signature - 22 00 02 00 00 85 B8 6C 12 3C
{
	switch (Global_1207480)
	{
		case -1:
			Global_1207480 = 0;
			return;
	
		case 0:
			Global_1207480.f_3[0] = 3;
			Global_1207480.f_3[1] = 10;
			Global_1207480.f_3[2] = 10;
			Global_1207480.f_3[3] = 16;
			Global_1207480.f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			Global_1207480 = 1;
			return;
	
		case 1:
			func_23(&(Global_1207480.f_28), Global_1219595.f_1.f_714, Global_1219595.f_1.f_711, -1);
			func_47(Global_1219595.f_1.f_713);
			func_48();
			break;
	}

	return;
}

void func_20() // Position - 0x9A7 Signature - 22 00 03
{
	int num;

	num = Global_1219595.f_1.f_711;
	num = num + 1;

	if (num >= 8)
		num = 0;

	Global_1219595.f_1.f_711 = num;
	Global_1219595.f_1.f_713 = Global_1219595.f_1.f_713 + 1;

	if (!func_16(Global_1219595.f_1.f_713))
		Global_1219595.f_1.f_713 = 0;

	if (!func_18() && func_49(&(Global_1219595.f_1[Global_1219595.f_1.f_713 /*10*/].f_7)))
		func_50(&(Global_1219595.f_1[Global_1219595.f_1.f_713 /*10*/].f_7));

	Global_1219595.f_1.f_714 = Global_1219595.f_1.f_714 + 1;

	if (Global_1219595.f_1.f_714 < 0 || Global_1219595.f_1.f_714 >= 5)
		Global_1219595.f_1.f_714 = 0;

	return;
}

void func_21(int* piParam0, var uParam1) // Position - 0xA7C Signature - 22 02 2D
{
	int num;
	var unk;

	if (*piParam0 == 0)
		return;

	*uParam1 = *uParam1 + 1;

	if (*uParam1 >= *piParam0)
		*uParam1 = 0;

	num = (piParam0->f_1 + *uParam1) % piParam0->f_2;
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

	if (piParam0->f_3[num /*40*/].f_2 != -1)
	{
		unk = { func_51(&(Global_1207480.f_28), piParam0->f_3[num /*40*/]) };
		func_52(unk, piParam0, &piParam0->f_3[num /*40*/]);
	}

	return;
}

void func_22() // Position - 0xB8E Signature - 22 00 02 00 00 5D 0B
{
	Global_1219595.f_1.f_716 = Global_1219595.f_1.f_716 + 1;

	if (Global_1219595.f_1.f_716 < 0 || Global_1219595.f_1.f_716 >= 32)
		Global_1219595.f_1.f_716 = 0;

	Global_1219595.f_1.f_717 = Global_1219595.f_1.f_717 + 1;

	if (Global_1219595.f_1.f_717 < 0 || Global_1219595.f_1.f_717 >= 5)
		Global_1219595.f_1.f_717 = 0;

	return;
}

void func_23(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xC11 Signature - 22 04 2E
{
	var unk;

	if (!func_53(iParam0))
	{
		if (iParam2 == 5 && iParam3 == -1)
			return;
	
		func_54(iParam0, iParam2, iParam3);
	}

	if (func_55(iParam0))
		return;

	if (iParam0->f_2[iParam1 /*40*/].f_2 != -1)
	{
		unk = { func_56(&iParam0->f_2[iParam1 /*40*/]) };
	
		if (unk.f_2 == -1)
			func_57(iParam0, iParam1);
		else
			func_58(iParam0, &iParam0->f_2[iParam1 /*40*/], unk);
	}

	return;
}

void func_24(int iParam0, int iParam1) // Position - 0xCB9 Signature - 22 02 05 00 00 66 00 66 01 39 12
{
	int threadId;

	if (!func_59(iParam0, iParam1))
		return;

	threadId = func_60(iParam0, iParam1);

	if (!SCRIPTS::IS_THREAD_ACTIVE(threadId, false))
		return;

	SCRIPTS::_REQUEST_THREAD_EXIT(threadId);
	return;
}

void func_25(int iParam0, int iParam1) // Position - 0xCEE Signature - 22 02 04 00 00 66 00 66 01 39 46
{
	func_61(iParam0, iParam1);
	func_62(iParam0, iParam1, -1);
	return;
}

void func_26(int iParam0, int iParam1) // Position - 0xD07 Signature - 22 02 06 00 00 66 00 39 82 1E 00 11 4B 04 06 11 4B 04 2D 39 CC 0E 00 05 8B 03 00 50 02 00 11 4B 04 2D 39 98 1E 00 05
{
	var unk;

	unk = { func_63(iParam0) };

	if (!func_38(unk))
		return;

	if (!func_64(unk) && !func_65(unk))
		return;

	func_66(iParam0, 2);
	func_66(iParam0, 3);
	func_67(iParam0, 6);
	func_68(unk, false, 2, iParam1, false);
	return;
}

void func_27(int iParam0) // Position - 0xD67 Signature - 22 01 03 00 00 66 00 5D 0B
{
	func_69(&(Global_1219595.f_1[iParam0 /*10*/].f_4));
	Global_1219595.f_1[iParam0 /*10*/].f_6 = 0;
	return;
}

void func_28(int iParam0) // Position - 0xD8C Signature - 22 01 04 00 00 03
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	Global_1217218[playerIndex /*72*/][iParam0] = 0;
	return;
}

int func_29() // Position - 0xDA7 Signature - 22 00 02 00 00 5D 17 00 18 27 0E
{
	return Global_1572887.f_14;
}

BOOL func_30() // Position - 0xDB5 Signature - 22 00 02 00 00 5D FD 0B 10 27 08
{
	return Global_1051645.f_8;
}

void func_31(int* piParam0) // Position - 0xDC3 Signature - 22 01 03 00 00 66 00 39 A0
{
	func_70(piParam0);
	func_71(&(piParam0->f_231));
	func_72(&(piParam0->f_2505));
	return;
}

int func_32(int iParam0, int iParam1, char* sParam2) // Position - 0xDE2 Signature - 22 03 05 00 00 09 50 03 01 22 01 0F
{
	return 1;
}

void func_33(var uParam0) // Position - 0xDEB Signature - 22 01 0F
{
	var unk;
	int i;
	var unk11;

	unk = 1;
	unk.f_1 = -1;
	unk.f_4 = -1;
	unk.f_4.f_1 = -1;

	for (i = 0; i < 71; i = i + 1)
	{
		uParam0->[i /*10*/] = { unk };
	}

	uParam0->f_711 = 0;
	uParam0->f_712 = 0;
	uParam0->f_713 = 0;
	uParam0->f_714 = 0;
	uParam0->f_715 = 0;
	uParam0->f_716 = 0;
	uParam0->f_717 = 0;
	uParam0->f_718 = 0;
	uParam0->f_719 = unk11;
	return;
}

BOOL func_34() // Position - 0xE6A Signature - 22 00 02 00 00 5D 17 00 18 27 0A 05
{
	return !Global_1572887.f_10;
}

void func_35(Any anParam0) // Position - 0xE79 Signature - 22 01 04 00 00 2F 67 03 66 03 6D 20 8A 13 00 66 03 66 00 63 CC
{
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		func_73(&anParam0->[i /*204*/]);
	}

	return;
}

int func_36(int iParam0, int iParam1, char* sParam2) // Position - 0xE9E Signature - 22 03 05 00 00 09 50 03 01 22 01 04
{
	return 1;
}

void func_37(Any anParam0) // Position - 0xEA7 Signature - 22 01 04 00 00 2F 67 03 66 03 6D 20 8A 13 00 66 03 66 00 63 48
{
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		func_74(&anParam0->[i /*72*/]);
	}

	return;
}

BOOL func_38(var uParam0, var uParam1) // Position - 0xECC Signature - 22 02 04 00 00 66 00 39
{
	if (!func_75(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_76(uParam0))
		return false;

	return true;
}

BOOL func_39(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xF00 Signature - 22 04 06 00 00 66 00 66 02 0B
{
	return uParam0 == uParam2 && uParam0.f_1 == uParam2.f_1;
}

BOOL func_40(int iParam0) // Position - 0xF1B Signature - 22 01 03 00 00 5D 17 00 18 27 0E 08 15 04 00 2F 50 01 01 5D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && iParam0 != false;
}

BOOL func_41(int iParam0, int iParam1) // Position - 0xF3C Signature - 22 02 04 00 00 5D 77
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return false;

	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1206954[iParam1 /*12*/] && iParam0 != false;
}

BOOL func_42() // Position - 0xF78 Signature - 22 00 02 00 00 85 00
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_38(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	return false;
}

BOOL func_43(int iParam0, int iParam1) // Position - 0xFD0 Signature - 22 02 04 00 00 66 00 5D B8 6C 12 80 E7 18
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_6 && iParam1 != false;
}

void func_44(int iParam0) // Position - 0xFEC Signature - 22 01 06 00 00 03
{
	Player player;
	var unk;

	player = PLAYER::PLAYER_ID();
	unk = { func_77(iParam0) };

	if (func_78(iParam0) <= 0)
	{
		unk = { func_63(iParam0) };
	
		if (func_38(unk))
		{
			func_8(iParam0);
			return;
		}
	
		return;
	}

	if (!func_38(unk))
	{
		unk = { func_63(iParam0) };
	
		if (func_38(unk))
		{
			func_8(iParam0);
			return;
		}
	}

	if (func_38(unk))
	{
		if (!func_7(iParam0, player, 0))
		{
			func_79(iParam0, unk);
			func_67(iParam0, 0);
		
			if (func_43(iParam0, 256))
				func_67(iParam0, 1);
		}
	
		if (func_65(unk))
		{
			if (func_80(iParam0, 4))
			{
				func_81(iParam0, false, 0);
				return;
			}
			else if (func_80(iParam0, 5))
			{
				func_82(iParam0, 0);
				return;
			}
		}
	}

	switch (func_83(iParam0))
	{
		case 1:
			break;
	
		case 2:
			if (!func_43(iParam0, 2))
				return;
		
			if (!func_84(iParam0))
			{
				func_26(iParam0, 0);
				return;
			}
		
			if (!func_64(unk) && !func_65(unk))
				if (!func_7(iParam0, player, 2) && !func_7(iParam0, player, 3))
					if (func_80(iParam0, 3) || func_85(iParam0) == Global_1295666.f_10)
						func_86(iParam0);
			else if (!func_80(iParam0, 3) && func_85(iParam0) != Global_1295666.f_10)
				func_26(iParam0, 0);
			break;
	
		case 4:
			if (!func_43(iParam0, 2))
			{
				if (func_43(iParam0, 2048))
					func_28(iParam0);
			
				return;
			}
		
			if (func_64(unk))
			{
				if (func_80(iParam0, 4))
				{
					func_87(iParam0, false, true, true);
					func_81(iParam0, false, 0);
				}
				else
				{
					func_87(iParam0, false, true, true);
					func_82(iParam0, 0);
				}
			}
			else if (func_65(unk))
			{
				func_82(iParam0, 0);
			}
			else
			{
				func_67(iParam0, 6);
			}
		
			if (func_88(iParam0))
				func_28(iParam0);
			break;
	
		case 5:
		case 6:
			if (func_7(iParam0, player, 0))
				func_8(iParam0);
			break;
	}

	return;
}

void func_45(int iParam0, int iParam1, BOOL bParam2) // Position - 0x123D Signature - 22 03 05 00 00 66 00 66 01 39
{
	func_89(iParam0, iParam1);

	if (!bParam2)
	{
		func_90(iParam0, iParam1);
	}
	else
	{
		func_91(iParam0, iParam1);
		func_92(iParam0, iParam1);
	}

	return;
}

void func_46(int iParam0) // Position - 0x126F Signature - 22 01 04 00 00 66 00 39 24
{
	int num;

	num = func_83(iParam0);

	if (num > -1 && num < 5)
	{
		if (!func_38(func_77(iParam0)))
		{
			func_93(iParam0, 5);
			return;
		}
	}

	if (!func_94(iParam0) && num < 5)
	{
		func_95(iParam0);
		func_93(iParam0, 5);
		return;
	}

	switch (num)
	{
		case -1:
			if (!func_38(func_77(iParam0)))
				return;
		
			if (func_43(iParam0, 32))
				Global_1207480.f_231.f_1066[iParam0 /*17*/].f_8[0 /*4*/].f_1 = iParam0;
		
			if (Global_1207480.f_231.f_1066[iParam0 /*17*/].f_5 != 255)
			{
				func_96(iParam0, Global_1207480.f_231.f_1066[iParam0 /*17*/].f_5);
				func_93(iParam0, 2);
			}
			else
			{
				func_93(iParam0, 1);
			}
			break;
	
		case 0:
			break;
	
		case 1:
			if (func_97(iParam0) != 255)
			{
				func_93(iParam0, 2);
				return;
			}
		
			if (func_98(iParam0, 3))
			{
				func_93(iParam0, 2);
				return;
			}
		
			if (func_99(iParam0))
			{
				func_93(iParam0, 5);
				return;
			}
			break;
	
		case 2:
			if (func_97(iParam0) == 255 && !func_98(iParam0, 3))
			{
				func_93(iParam0, 4);
				return;
			}
		
			if (func_100(iParam0))
			{
				func_93(iParam0, 5);
				return;
			}
		
			if (func_98(iParam0, 4) || func_98(iParam0, 5))
			{
				func_93(iParam0, 3);
				return;
			}
		
			func_101(iParam0);
			break;
	
		case 3:
			if (func_102(iParam0))
				return;
		
			func_93(iParam0, 4);
			break;
	
		case 4:
			if (!func_100(iParam0))
				return;
		
			func_93(iParam0, 5);
			break;
	
		case 5:
			if (!func_100(iParam0))
				return;
		
			if (func_78(iParam0) > 1)
				func_103(iParam0, 1);
		
			func_93(iParam0, 6);
			break;
	
		case 6:
			break;
	}

	return;
}

void func_47(int iParam0) // Position - 0x146C Signature - 22 01 23 00 00 66 00 5D
{
	var unk;
	var unk7;
	int num;
	int gangId;
	Player gangLeader;
	int num2;
	int i;
	int num3;
	BOOL flag;
	BOOL flag2;
	int num4;

	if (Global_1207480.f_231[iParam0 /*15*/].f_1 == -1)
		return;

	if (Global_1207480.f_231[iParam0 /*15*/].f_1 == 0)
	{
		if (func_100(iParam0))
		{
			func_104(iParam0);
			unk = 1;
			unk.f_1 = -1;
			unk.f_1.f_1 = -1;
			unk.f_5 = 255;
			unk7.f_1 = 1024;
			unk7.f_4 = -15;
			unk7.f_5 = 255;
			unk7.f_8 = 1;
			unk7.f_8.f_1.f_1 = 2147483647;
			unk7.f_13 = -1;
			Global_1207480.f_2505[iParam0 /*6*/] = { unk };
			Global_1207480.f_231.f_1066[iParam0 /*17*/] = { unk7 };
			Global_1207480.f_231[iParam0 /*15*/].f_1 = -1;
		}
	
		return;
	}

	if (Global_1207480.f_231[iParam0 /*15*/].f_5.f_8 != 0)
	{
		if (func_40(Global_1207480.f_231[iParam0 /*15*/].f_5.f_8))
		{
			func_95(iParam0);
			return;
		}
	}

	if (Global_1207480.f_231[iParam0 /*15*/].f_5.f_2 != 0 && Global_1207480.f_231[iParam0 /*15*/].f_5.f_3 != -1)
	{
		num = func_105(Global_1207480.f_231[iParam0 /*15*/].f_5.f_3);
		gangId = func_106(Global_1207480.f_231[iParam0 /*15*/].f_5.f_3);
	
		if (num < 1 || num >= 4)
		{
			func_95(iParam0);
			return;
		}
		else if (gangId != Global_1207480.f_231[iParam0 /*15*/].f_5.f_2)
		{
			func_95(iParam0);
			return;
		}
		else if (num == 1)
		{
			if (!GANG::NETWORK_IS_GANG_IN_SESSION(gangId))
			{
				func_95(iParam0);
				return;
			}
		
			gangLeader = GANG::NETWORK_GET_GANG_LEADER(gangId);
		
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
			{
				func_95(iParam0);
				return;
			}
		}
	}

	if (Global_1207480.f_231[iParam0 /*15*/].f_5.f_2 != 0 && Global_1207480.f_231[iParam0 /*15*/].f_5.f_4 != -1)
	{
		num2 = Global_1207480.f_231[iParam0 /*15*/].f_5.f_4;
	
		if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("net_gun_for_hire_online"), num2, false, 0))
		{
			func_95(iParam0);
			return;
		}
	
		if (!GANG::NETWORK_IS_GANG_IN_SESSION(Global_1207480.f_231[iParam0 /*15*/].f_5.f_2))
		{
			func_95(iParam0);
			return;
		}
	}

	Global_1207480.f_231[iParam0 /*15*/].f_5.f_2 != 0 && Global_1207480.f_231[iParam0 /*15*/].f_5.f_5 != -1;

	if (func_43(iParam0, 2048))
	{
		num3 = Global_1207480.f_231.f_1066[iParam0 /*17*/].f_7;
	
		for (i = 0; i < num3; i = i + 1)
		{
			if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(func_107(iParam0), func_108(iParam0, i), false, 0))
				flag = true;
		}
	
		if (!flag)
		{
			if (func_83(iParam0) == 6)
			{
				func_95(iParam0);
				return;
			}
		
			if (func_83(iParam0) == 2)
				flag2 = true;
		}
	
		if (flag2)
		{
			if (!func_49(&(Global_1219595.f_1[iParam0 /*10*/].f_7)))
				func_109(&(Global_1219595.f_1[iParam0 /*10*/].f_7), false);
		
			num4 = Global_1901671.f_245.f_69;
		
			if (num4 > 0 && func_110(&(Global_1219595.f_1[iParam0 /*10*/].f_7)) > num4)
			{
				func_95(iParam0);
				return;
			}
		}
		else if (func_49(&(Global_1219595.f_1[iParam0 /*10*/].f_7)))
		{
			func_50(&(Global_1219595.f_1[iParam0 /*10*/].f_7));
		}
	}

	return;
}

void func_48() // Position - 0x17B4 Signature - 22 00 04 00 00 03
{
	int networkTimeAccurate;
	int num;

	networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (NETWORK::GET_TIME_DIFFERENCE(Global_1207480.f_1, networkTimeAccurate) < 30000)
		return;

	func_111(Global_1207480.f_2);
	Global_1207480.f_1 = networkTimeAccurate;
	num = Global_1207480.f_2;
	num = num + 1;

	if (num < 0 || num >= 4)
		num = 0;

	Global_1207480.f_2 = num;
	return;
}

BOOL func_49(var uParam0) // Position - 0x1813 Signature - 22 01 03 00 00 66 00 76 09
{
	return func_112(*uParam0, 1);
}

void func_50(var uParam0) // Position - 0x1823 Signature - 22 01 03 00 00 2F 66 00 6C
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
	return;
}

struct<40> func_51(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40) // Position - 0x1839 Signature - 22 29
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

void func_52(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, int* piParam40, var uParam41) // Position - 0x1968 Signature - 22 2A 2C 00 00 66 29
{
	switch (func_113(uParam41))
	{
		case -1:
			func_114(piParam40, uParam41->f_4);
			break;
	
		case 0:
			if (!func_115(&uParam0, uParam41))
			{
				if (NETWORK::GET_NETWORK_TIME_ACCURATE() - uParam41->f_7 > 120000)
				{
					uParam41->f_6 = 2;
					func_116(uParam41, 3);
				}
			
				return;
			}
		
			if (func_117(&uParam0) < 0)
				return;
		
			uParam41->f_1 = uParam0.f_1;
			func_116(uParam41, 1);
			break;
	
		case 1:
			if (!func_115(&uParam0, uParam41))
			{
				uParam41->f_6 = 2;
				func_116(uParam41, 3);
				return;
			}
		
			if (func_117(&uParam0) < 1)
				return;
		
			uParam41->f_6 = uParam0.f_6;
			func_116(uParam41, 2);
			break;
	
		case 2:
			if (!func_115(&uParam0, uParam41))
			{
				if (uParam41->f_6 == -1)
					uParam41->f_6 = 2;
			
				func_116(uParam41, 3);
				return;
			}
		
			if (func_117(&uParam0) < 3)
				return;
		
			func_116(uParam41, 3);
			break;
	
		case 3:
			func_116(uParam41, -1);
			break;
	}

	return;
}

BOOL func_53(var uParam0) // Position - 0x1A97 Signature - 22 01 03 00 00 66 00 76 62
{
	return *uParam0 == 5;
}

void func_54(var uParam0, int iParam1, int iParam2) // Position - 0x1AA4 Signature - 22 03 55
{
	var unk;
	var unk41;

	unk = { func_118(uParam0, &iParam1, iParam2) };

	if (unk.f_2 == -1)
		return;

	unk41 = -1;
	unk41.f_2 = -1;
	unk41.f_3 = 255;
	unk41.f_4 = -1;
	unk41.f_5 = -1;
	unk41.f_6 = -1;
	unk41.f_8 = 2;
	unk41.f_8.f_1 = -1;
	unk41.f_8.f_5 = -1;
	unk41.f_8.f_5.f_1 = -1;
	unk41.f_8.f_5.f_3 = -1;
	unk41.f_8.f_5.f_4 = -1;
	unk41.f_8.f_5.f_5 = -1;
	unk41.f_8.f_5.f_6 = -1;
	unk41.f_8.f_5.f_6.f_1 = -1;
	unk41.f_8.f_5.f_9 = 2;
	unk41.f_23.f_1 = 1024;
	unk41.f_23.f_4 = -15;
	unk41.f_23.f_5 = 255;
	unk41.f_23.f_8 = 1;
	unk41.f_23.f_8.f_1.f_1 = 2147483647;
	unk41.f_23.f_13 = -1;
	unk41.f_2 = unk.f_2;
	unk41.f_3 = unk.f_3;
	unk41.f_5 = unk.f_5;
	unk41.f_4 = unk.f_4;
	unk41.f_7 = unk.f_7;
	unk41.f_8 = { unk.f_8 };
	unk41.f_23 = { unk.f_23 };
	func_119(uParam0, &unk41);
	return;
}

BOOL func_55(var uParam0) // Position - 0x1BB4 Signature - 22 01 03 00 00 66 00 76 2F
{
	return *uParam0 == 0;
}

struct<40> func_56(var uParam0) // Position - 0x1BC1 Signature - 22 01 2B
{
	var unk;

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

	switch (uParam0->f_2)
	{
		case 0:
			return func_120(uParam0, &(Global_1107816.f_33.f_513));
	
		case 2:
			return func_120(uParam0, &(Global_1225099.f_380));
	
		case 5:
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(uParam0->f_3))
				return unk;
		
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_3))
				return unk;
		
			return func_120(uParam0, &Global_1210485[uParam0->f_3 /*204*/]);
	
		default:
		
	}

	return unk;
}

struct<40> func_57(var uParam0, int iParam1) // Position - 0x1CEE Signature - 22 02 2C 00 00 66 00 66 01 39 D7
{
	var unk;

	unk = { func_121(uParam0, iParam1) };
	func_122(uParam0, iParam1);
	return unk;
}

void func_58(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41) // Position - 0x1D10 Signature - 22 2A 2C 00 00 66 01
{
	switch (func_117(uParam1))
	{
		case -1:
			func_57(uParam0, uParam1->f_1);
			break;
	
		case 0:
			if (!func_115(uParam1, &uParam2))
			{
				func_123(uParam1, 2);
				return;
			}
		
			if (func_113(&uParam2) < 1)
				return;
		
			uParam1->f_6 = func_124(&uParam2);
			func_123(uParam1, 1);
			break;
	
		case 1:
			if (!func_115(uParam1, &uParam2))
			{
				func_123(uParam1, 2);
				return;
			}
		
			if (func_113(&uParam2) < 2)
				return;
		
			func_123(uParam1, 3);
			break;
	
		case 2:
			func_123(uParam1, -1);
			break;
	
		case 3:
			if (!func_115(uParam1, &uParam2))
			{
				func_123(uParam1, -1);
				return;
			}
		
			if (func_113(&uParam2) < 3)
				return;
		
			func_123(uParam1, -1);
			break;
	}

	return;
}

BOOL func_59(int iParam0, int iParam1) // Position - 0x1E12 Signature - 22 02 04 00 00 66 01 66 00 5D 0B 9C 12 80 01 63 0A 63 03 27 02 03
{
	return SCRIPTS::DOES_THREAD_EXIST(Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2);
}

int func_60(int iParam0, int iParam1) // Position - 0x1E2E Signature - 22 02 04 00 00 66 01 66 00 5D 0B 9C 12 80 01 63 0A 63 03 27 02 50
{
	return Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2;
}

void func_61(int iParam0, int iParam1) // Position - 0x1E46 Signature - 22 02 05 00 00 2F
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		func_125(iParam0, iParam1, i);
	}

	return;
}

void func_62(int iParam0, int iParam1, int iParam2) // Position - 0x1E6A Signature - 22 03 05 00 00 66 02 66 01 66 00 5D 0B 9C 12 80 01 63 0A 64
{
	Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/] = iParam2;
	return;
}

struct<2> func_63(int iParam0) // Position - 0x1E82 Signature - 22 01 03 00 00 11 66 00 5D 0B
{
	return Global_1219595.f_1[iParam0 /*10*/].f_4;
}

BOOL func_64(var uParam0, var uParam1) // Position - 0x1E98 Signature - 22 02 05 00 00 11 4B 00 2D 39 32 3E 00 67 04 66 04 09
{
	int num;

	num = func_126(uParam0);
	return num == 1 || num == 2;
}

BOOL func_65(var uParam0, var uParam1) // Position - 0x1EB8 Signature - 22 02 05 00 00 11 4B 00 2D 39 32 3E 00 67 04 66 04 1D
{
	int num;

	num = func_126(uParam0);
	return num == 3 || num == 4;
}

void func_66(int iParam0, int iParam1) // Position - 0x1ED8 Signature - 22 02 05 00 00 03 01 00 06 67 04 66 00 66 04 5D
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	MISC::CLEAR_BIT(&Global_1217218[playerIndex /*72*/][iParam0], iParam1);
	return;
}

void func_67(int iParam0, int iParam1) // Position - 0x1EF8 Signature - 22 02 05 00 00 03 01 00 06 67 04 66 00 66 04 66
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (func_7(iParam0, playerIndex, iParam1))
		return;

	MISC::SET_BIT(&Global_1217218[playerIndex /*72*/][iParam0], iParam1);
	return;
}

void func_68(var uParam0, var uParam1, BOOL bParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x1F28 Signature - 22 06 09
{
	int num;

	if (!func_38(uParam0))
	{
		!bParam2;
		return;
	}

	if (!func_65(uParam0) && !func_64(uParam0))
	{
		!bParam2;
		return;
	}

	func_127(uParam0) == 0;

	if (iParam3 == 0 || iParam3 == 1 || iParam3 == 4)
		if (func_126(uParam0) == 3)
			func_128(true, -1706799532);
		else if (func_126(uParam0) == 4)
			func_128(false, -1706799532);

	if (func_126(uParam0) == 3 || func_126(uParam0) == 1 || bParam5 && func_126(uParam0) == 4 && STATS::STATSTRACKER_IS_INITIALIZED(func_127(uParam0)))
		if (iParam3 != -1)
			func_129(uParam0, iParam3, iParam4, 255, 0);
		else
			func_129(uParam0, 2, iParam4, 255, 0);

	func_130(uParam0, 0);

	if (func_39(func_131(0), uParam0))
	{
		func_132(true);
		func_133(false);
		func_134(false);
		func_135(1);
	}

	func_136(uParam0);
	Global_1051645.f_45.f_1 = 1;
	num = func_137(uParam0);

	if (num != 2 && num != 7)
		MISC::_0x1096603B519C905F("");

	return;
}

void func_69(var uParam0) // Position - 0x208F Signature - 22 01 03 00 00 08
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	return;
}

void func_70(int* piParam0) // Position - 0x20A0 Signature - 22 01 2D 00 00 08
{
	int i;
	var unk;
	int j;

	*piParam0 = -1;
	piParam0->f_1 = 0;
	piParam0->f_2 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		piParam0->f_3[i] = 0;
		piParam0->f_8[i] = 0;
		piParam0->f_13[i] = 0;
		piParam0->f_18[i] = 0;
		piParam0->f_23[i] = 0;
	}

	piParam0->f_28 = 0;
	piParam0->f_28.f_1 = 0;
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

	for (j = 0; j < 5; j = j + 1)
	{
		piParam0->f_28.f_2[j /*40*/] = { unk };
	}

	return;
}

void func_71(var uParam0) // Position - 0x21C6 Signature - 22 01 24
{
	var unk;
	var unk16;
	int i;

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
	unk16.f_1 = 1024;
	unk16.f_4 = -15;
	unk16.f_5 = 255;
	unk16.f_8 = 1;
	unk16.f_8.f_1.f_1 = 2147483647;
	unk16.f_13 = -1;

	for (i = 0; i < 71; i = i + 1)
	{
		uParam0->[i /*15*/] = { unk };
		uParam0->f_1066[i /*17*/] = { unk16 };
	}

	return;
}

void func_72(var uParam0) // Position - 0x2279 Signature - 22 01 0A
{
	var unk;
	int i;

	unk = 1;
	unk.f_1 = -1;
	unk.f_1.f_1 = -1;
	unk.f_5 = 255;

	for (i = 0; i < 71; i = i + 1)
	{
		uParam0->[i /*6*/] = { unk };
		uParam0->f_427[i] = 0;
	}

	uParam0->f_499 = 0;
	return;
}

void func_73(var uParam0) // Position - 0x22CE Signature - 22 01 2C
{
	var unk;
	int i;

	*uParam0 = 0;
	uParam0->f_1 = 0;
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
	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		uParam0->f_3[i /*40*/] = { unk };
	}

	return;
}

void func_74(var uParam0) // Position - 0x23AB Signature - 22 01 4B
{
	var unk;

	unk = 71;
	*uParam0 = { unk };
	return;
}

BOOL func_75(int iParam0) // Position - 0x23C5 Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 21 00 04 00 00 00 1B 00 05 00 00 00 15 00 06 00 00 00 0F 00 07 00 00 00 09 00 08 00 00 00 03 00 68 04 00 09 50 01 01 2F 50 01 01 22 01
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

int func_76(int iParam0) // Position - 0x2404 Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 2E
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

struct<2> func_77(int iParam0) // Position - 0x249A Signature - 22 01 03 00 00 66 00 2F 8A 07
{
	if (iParam0 < 0)
		return func_138();

	return Global_1207480.f_231[iParam0 /*15*/].f_5;
}

int func_78(int iParam0) // Position - 0x24BD Signature - 22 01 03 00 00 66 00 39 0F 08 00 05 8B 04 00 08
{
	if (!func_16(iParam0))
		return -1;

	return Global_1207480.f_231[iParam0 /*15*/].f_1;
}

void func_79(int iParam0, var uParam1, var uParam2) // Position - 0x24DF Signature - 22 03 05 00 00 11 4B 01 2D 11 66 00 5D 0B
{
	Global_1219595.f_1[iParam0 /*10*/].f_4 = { uParam1 };
	Global_1219595.f_1[iParam0 /*10*/].f_6 = func_139(uParam1);
	return;
}

BOOL func_80(int iParam0, int iParam1) // Position - 0x250D Signature - 22 02 06 00 00 2F 67 05 66 05 39
{
	Player player;
	int i;

	for (i = 0; i < func_140(); i = i + 1)
	{
		player = func_141(i);
	
		if (func_7(iParam0, player, iParam1))
			return true;
	}

	return func_7(iParam0, PLAYER::PLAYER_ID(), iParam1);
}

void func_81(int iParam0, BOOL bParam1, int iParam2) // Position - 0x254F Signature - 22 03 08 00 00 66 00
{
	var unk;
	int num;

	unk = { func_63(iParam0) };

	if (!func_38(unk))
		return;

	if (func_64(unk))
		return;

	if (!func_65(unk))
		return;

	if (func_7(iParam0, PLAYER::PLAYER_ID(), 5))
		return;

	if (bParam1)
		num = 4;
	else
		num = 0;

	func_68(unk, false, num, iParam2, false);
	func_67(iParam0, 4);
	return;
}

void func_82(int iParam0, int iParam1) // Position - 0x25C1 Signature - 22 02 06 00 00 66 00 39 82 1E 00 11 4B 04 06 11 4B 04 2D 39 CC 0E 00 05 8B 03 00 50 02 00 11 4B 04 2D 39 98 1E 00 8B
{
	var unk;

	unk = { func_63(iParam0) };

	if (!func_38(unk))
		return;

	if (func_64(unk))
		return;

	if (!func_65(unk))
		return;

	if (func_7(iParam0, PLAYER::PLAYER_ID(), 5))
		return;

	func_68(unk, false, 1, iParam1, false);
	func_67(iParam0, 5);
	return;
}

int func_83(int iParam0) // Position - 0x2624 Signature - 22 01 03 00 00 66 00 5D B8 6C 12 80 E7 18 2A 04 63 11 27 0D
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_13;
}

BOOL func_84(int iParam0) // Position - 0x263B Signature - 22 01 03 00 00 66 00 39 D4
{
	if (!func_94(iParam0))
		return false;

	if (func_83(iParam0) >= 5)
		return false;

	if (func_83(iParam0) <= 0)
		return false;

	if (!func_7(iParam0, PLAYER::PLAYER_ID(), 0))
		return false;

	return true;
}

int func_85(int iParam0) // Position - 0x2681 Signature - 22 01 03 00 00 66 00 5D B8 6C 12 18 C9 09 63 06 27 04
{
	return Global_1207480.f_2505[iParam0 /*6*/].f_4;
}

void func_86(int iParam0) // Position - 0x2696 Signature - 22 01 05 00 00 66 00 39 82
{
	var unk;

	unk = { func_63(iParam0) };

	if (!func_38(unk))
		return;

	if (func_64(unk))
		return;

	if (func_65(unk))
		return;

	func_67(iParam0, 2);
	func_66(iParam0, 3);
	func_66(iParam0, 6);
	func_142(unk);
	return;
}

void func_87(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x26F1 Signature - 22 04 08
{
	var unk;

	unk = { func_63(iParam0) };

	if (!func_38(unk))
		return;

	if (!func_64(unk))
		return;

	if (func_65(unk))
		return;

	if (bParam1)
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);

	if (bParam1)
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);

	func_67(iParam0, 3);
	func_143(unk, true, bParam2, bParam3);
	return;
}

BOOL func_88(int iParam0) // Position - 0x2757 Signature - 22 01 07 00 00 2F
{
	Player player;
	int i;
	var unk;

	for (i = 0; i < func_140(); i = i + 1)
	{
		player = func_141(i);
	
		if (func_7(iParam0, player, 2) && !(func_7(iParam0, player, 4) || func_7(iParam0, player, 5) || func_7(iParam0, player, 6)))
			return false;
	}

	unk = { func_63(iParam0) };
	return !(func_64(unk) || func_65(unk));
}

void func_89(int iParam0, int iParam1) // Position - 0x27DA Signature - 22 02 08 00 00 66 00 39
{
	Hash scriptHash;
	int num;
	int num2;
	int num3;

	scriptHash = func_107(iParam0);
	num = func_108(iParam0, iParam1);
	num2 = func_144(iParam0, iParam1);
	num3 = func_83(iParam0);

	switch (func_145(iParam0, iParam1))
	{
		case -1:
			if (!func_84(iParam0))
				return;
		
			func_62(iParam0, iParam1, 1);
			break;
	
		case 0:
			if (!func_84(iParam0))
				return;
		
			func_62(iParam0, iParam1, 1);
			break;
	
		case 1:
			if (!func_84(iParam0))
			{
				func_61(iParam0, iParam1);
				func_62(iParam0, iParam1, 0);
				return;
			}
		
			if (num2 < 1)
				return;
		
			if (num2 >= 3)
				return;
		
			func_62(iParam0, iParam1, 2);
			break;
	
		case 2:
			if (!func_84(iParam0))
			{
				func_61(iParam0, iParam1);
				func_62(iParam0, iParam1, 0);
				return;
			}
		
			if (num2 < 1)
			{
				func_62(iParam0, iParam1, 1);
				return;
			}
		
			if (num2 >= 3)
			{
				func_62(iParam0, iParam1, 6);
				return;
			}
		
			if (!func_146(iParam0, iParam1))
				return;
		
			func_147(iParam0, iParam1, 0);
			func_62(iParam0, iParam1, 3);
			break;
	
		case 3:
			if (!func_84(iParam0))
			{
				func_61(iParam0, iParam1);
				func_62(iParam0, iParam1, 0);
				return;
			}
		
			if (num2 < 1)
			{
				func_62(iParam0, iParam1, 7);
				return;
			}
		
			if (num2 >= 3)
			{
				func_62(iParam0, iParam1, 6);
				return;
			}
		
			if (!func_148(iParam0, iParam1))
				return;
		
			func_62(iParam0, iParam1, 4);
			break;
	
		case 4:
			if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(scriptHash, num, true, 0))
			{
				if (!func_59(iParam0, iParam1))
				{
					func_149(iParam0, iParam1, 0);
					func_125(iParam0, iParam1, 0);
					func_62(iParam0, iParam1, 2);
				}
			
				return;
			}
		
			func_62(iParam0, iParam1, 5);
			break;
	
		case 5:
			if (func_78(iParam0) <= 0 || num3 >= 5 || num3 < 1)
				func_24(iParam0, iParam1);
		
			if (func_150(iParam0, iParam1))
				func_24(iParam0, iParam1);
		
			if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(scriptHash, num, true, 0))
				return;
		
			if (func_59(iParam0, iParam1))
				return;
		
			func_149(iParam0, iParam1, 0);
		
			if (func_98(iParam0, 4) || func_98(iParam0, 5) || func_83(iParam0) > 2 && num2 == 3)
			{
				func_62(iParam0, iParam1, 6);
			}
			else
			{
				func_125(iParam0, iParam1, 0);
				func_62(iParam0, iParam1, 8);
			}
			break;
	
		case 6:
			if (!func_88(iParam0))
				return;
		
			func_62(iParam0, iParam1, 7);
			break;
	
		case 7:
			func_61(iParam0, iParam1);
			func_62(iParam0, iParam1, 8);
			break;
	
		case 8:
			func_67(iParam0, 7);
		
			if (num2 == 2 || num2 == 3)
				return;
		
			func_62(iParam0, iParam1, 1);
			func_66(iParam0, 7);
			break;
	}

	return;
}

BOOL func_90(int iParam0, int iParam1) // Position - 0x2AD2 Signature - 22 02 05 00 00 66 00 66 01 39 AB
{
	int volLockRequestId;

	volLockRequestId = func_151(iParam0, iParam1);

	if (volLockRequestId == 0)
		return true;

	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(volLockRequestId))
	{
		func_152(iParam0, iParam1, 0);
		return true;
	}

	func_152(iParam0, iParam1, 0);
	return true;
}

void func_91(int iParam0, int iParam1) // Position - 0x2B0F Signature - 22 02 06 00 00 66 00 6D
{
	int num;
	int num2;

	if (!func_43(iParam0, 8))
		return;

	num = func_153(iParam0, iParam1);
	num2 = func_78(iParam0);

	if (!func_94(iParam0) || func_83(iParam0) >= 5)
	{
		if (num != 1)
		{
			func_154(iParam0, iParam1);
			func_155(iParam0, iParam1, 1);
		}
	
		return;
	}

	switch (num)
	{
		case -2:
			break;
	
		case -1:
			if (!func_38(func_77(iParam0)))
				return;
		
			if (func_156(iParam0, iParam1) <= 0)
			{
				func_155(iParam0, iParam1, 0);
				return;
			}
			else
			{
				if (num2 == 1)
					func_155(iParam0, iParam1, 5);
				else
					func_155(iParam0, iParam1, 2);
			
				return;
			}
			break;
	
		case 0:
			if (func_156(iParam0, iParam1) > 0)
			{
				func_155(iParam0, iParam1, 2);
				return;
			}
			break;
	
		case 1:
			func_155(iParam0, iParam1, -1);
			break;
	
		case 2:
			if (func_157(iParam0, iParam1) != 0)
			{
				func_155(iParam0, iParam1, 4);
				return;
			}
		
			func_158(iParam0, iParam1, false);
			func_155(iParam0, iParam1, 3);
			break;
	
		case 3:
			if (func_151(iParam0, iParam1) == 0)
			{
				func_155(iParam0, iParam1, 2);
				return;
			}
		
			if (func_159(iParam0, iParam1))
			{
				func_155(iParam0, iParam1, 4);
				return;
			}
			break;
	
		case 4:
			if (num2 == 1)
			{
				VOLUME::_0xD4FA73FE628FEC63(func_157(iParam0, iParam1), 160);
				func_155(iParam0, iParam1, 7);
				return;
			}
		
			if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(func_157(iParam0, iParam1)))
			{
				func_160(iParam0, iParam1);
				func_155(iParam0, iParam1, 2);
				return;
			}
			break;
	
		case 5:
			if (func_144(iParam0, iParam1) == 2 || func_83(iParam0) == 2 || num2 > 1)
			{
				func_155(iParam0, iParam1, 2);
				return;
			}
			break;
	
		case 6:
			if (func_151(iParam0, iParam1) == 0)
			{
				func_155(iParam0, iParam1, 5);
				return;
			}
		
			if (func_144(iParam0, iParam1) == 2 || func_83(iParam0) == 2 || num2 > 1)
			{
				func_90(iParam0, iParam1);
				func_155(iParam0, iParam1, 2);
				return;
			}
		
			if (func_159(iParam0, iParam1))
			{
				func_155(iParam0, iParam1, 7);
				return;
			}
			break;
	
		case 7:
			if (func_144(iParam0, iParam1) == 2 || func_83(iParam0) == 2 || num2 > 1)
			{
				VOLUME::_0xD4FA73FE628FEC63(func_157(iParam0, iParam1), 32);
				func_155(iParam0, iParam1, 4);
				return;
			}
		
			if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(func_157(iParam0, iParam1)))
			{
				func_160(iParam0, iParam1);
				func_155(iParam0, iParam1, 5);
				return;
			}
			break;
	}

	return;
}

void func_92(int iParam0, int iParam1) // Position - 0x2DD1 Signature - 22 02 08 00 00 66 00 6D
{
	Hash scriptHash;
	int num;
	int num2;
	int num3;

	if (!func_43(iParam0, 16))
		return;

	scriptHash = func_107(iParam0);
	num = func_108(iParam0, iParam1);
	num3 = func_144(iParam0, iParam1);

	if (num3 > 0)
	{
		if (!func_94(iParam0))
		{
			func_161(iParam0, iParam1, 0);
			return;
		}
	}

	switch (num3)
	{
		case -1:
			if (!func_38(func_77(iParam0)))
				return;
		
			if (func_162(iParam0, iParam1) <= 0)
			{
				func_161(iParam0, iParam1, 0);
				return;
			}
			else
			{
				func_161(iParam0, iParam1, 1);
				return;
			}
			break;
	
		case 0:
			if (!func_94(iParam0))
				return;
		
			if (func_162(iParam0, iParam1) <= 0)
				return;
		
			num2 = func_163(iParam0);
		
			if (num2 != -15 && func_164(num2))
				return;
		
			func_161(iParam0, iParam1, 1);
			break;
	
		case 1:
			if (func_165(iParam0, iParam1, 0))
			{
				func_161(iParam0, iParam1, 2);
				func_103(iParam0, 3);
				return;
			}
			break;
	
		case 2:
			if (!func_165(iParam0, iParam1, 0) && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(scriptHash, num, false, 0))
			{
				func_161(iParam0, iParam1, 3);
				return;
			}
		
			if (func_83(iParam0) >= 3)
			{
				func_161(iParam0, iParam1, 3);
				return;
			}
			break;
	
		case 3:
			if (func_83(iParam0) >= 3)
				return;
		
			if (!func_166(iParam0, iParam1))
			{
				func_161(iParam0, iParam1, 2);
				return;
			}
		
			if (func_97(iParam0) != 255)
				func_103(iParam0, 2);
			else
				func_103(iParam0, 1);
		
			num2 = func_163(iParam0);
		
			if (num2 != -15 && func_164(num2))
			{
				func_161(iParam0, iParam1, 0);
				return;
			}
		
			if (func_83(iParam0) >= 4)
				return;
		
			if (func_167(iParam0, 7))
				return;
		
			func_161(iParam0, iParam1, 1);
			break;
	}

	return;
}

void func_93(int iParam0, int iParam1) // Position - 0x2FBB Signature - 22 02 04 00 00 66 01 66 00 5D B8 6C 12 80 E7 18 2A 04 63 11 6C 0D
{
	Global_1207480.f_231.f_1066[iParam0 /*17*/].f_13 = iParam1;
	return;
}

BOOL func_94(int iParam0) // Position - 0x2FD4 Signature - 22 01 04 00 00 66 00 39 82
{
	BOOL flag;

	flag = !func_15(func_63(iParam0), func_168(iParam0), 0);
	return flag;
}

int func_95(int iParam0) // Position - 0x2FF2 Signature - 22 01 23 00 00 66 00 39
{
	var unk;
	int num;
	int num2;
	int num3;

	if (!func_16(iParam0))
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

	if (func_169(iParam0))
		Global_1207480.f_23[num2] = Global_1207480.f_23[num2] - 1;

	return 1;
}

void func_96(int iParam0, Player plParam1) // Position - 0x30E9 Signature - 22 02 04 00 00 66 00 2F
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

int func_97(int iParam0) // Position - 0x3136 Signature - 22 01 03 00 00 66 00 5D B8 6C 12 18 C9 09 63 06 27 05
{
	return Global_1207480.f_2505[iParam0 /*6*/].f_5;
}

BOOL func_98(int iParam0, int iParam1) // Position - 0x314B Signature - 22 02 06 00 00 2F 67 05 66 05 6D 20 8A 2F
{
	Player player;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (func_7(iParam0, player, iParam1))
		{
			return true;
		}
	}

	return false;
}

BOOL func_99(int iParam0) // Position - 0x318D Signature - 22 01 05 00 00 66 00 25
{
	int num;
	var value;

	if (!func_43(iParam0, 512))
		return false;

	num = func_170(iParam0);

	if (num <= 0)
		return false;

	value = func_172(func_171(iParam0, 0), 0f, 0f, 0f, (float)num, (float)num, (float)num * 2, joaat("volSphere"), 0, 8);
	return SCRIPTS::COUNT_PLAYER_BITS(&value) <= 0;
}

BOOL func_100(int iParam0) // Position - 0x31E3 Signature - 22 01 05 00 00 2F 67 04 66 04 6D 20 8A 2E
{
	Player player;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (!func_173(iParam0, player))
		{
			return false;
		}
	}

	return true;
}

void func_101(int iParam0) // Position - 0x3224 Signature - 22 01 06 00 00 66 00 5D
{
	Player player;
	Player gangLeader;
	Any gangId;

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
				func_96(iParam0, gangLeader);
			}
			else if (GANG::NETWORK_GET_GANG_LEADER(gangId) == player)
			{
				Global_1207480.f_2505[iParam0 /*6*/].f_4 = gangId;
			}
			else
			{
				func_174(iParam0);
			}
		}
	
		return;
	}

	if (Global_1207480.f_2505[iParam0 /*6*/].f_4 == 0)
	{
		func_174(iParam0);
		return;
	}

	if (!GANG::NETWORK_IS_GANG_IN_SESSION(Global_1207480.f_2505[iParam0 /*6*/].f_4))
	{
		func_174(iParam0);
		return;
	}

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(Global_1207480.f_2505[iParam0 /*6*/].f_4);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(gangLeader))
	{
		func_174(iParam0);
		return;
	}

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
	{
		func_174(iParam0);
		return;
	}

	func_96(iParam0, gangLeader);
	return;
}

BOOL func_102(int iParam0) // Position - 0x3384 Signature - 22 01 05 00 00 2F 67 04 66 04 6D 20 8A 33
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

void func_103(int iParam0, int iParam1) // Position - 0x33CA Signature - 22 02 04 00 00 66 01 66 00 5D B8 6C 12 80 E7 63
{
	Global_1207480.f_231[iParam0 /*15*/].f_1 = iParam1;
	return;
}

void func_104(int iParam0) // Position - 0x33E0 Signature - 22 01 04 00 00 2F 67 03 66 03 09
{
	int i;

	for (i = 0; i < 1; i = i + 1)
	{
		func_160(iParam0, i);
	}

	return;
}

int func_105(int iParam0) // Position - 0x3402 Signature - 22 01 03 00 00 66 00 5D 68 E7 10 18 F0 02 17
{
	return Global_1107816.f_752[iParam0 /*6*/];
}

int func_106(int iParam0) // Position - 0x3415 Signature - 22 01 03 00 00 66 00 5D 68 E7 10 18 F0 02 63
{
	return Global_1107816.f_752[iParam0 /*6*/].f_1;
}

Hash func_107(int iParam0) // Position - 0x342A Signature - 22 01 03 00 00 66 00 5D B8 6C 12 80 E7 18 2A 04 17
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/];
}

int func_108(int iParam0, int iParam1) // Position - 0x343F Signature - 22 02 04 00 00 66 01 66 00 5D B8 6C 12 80 E7 18 2A 04 63 11 80 08 63 04 27 01
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_1;
}

void func_109(var uParam0, BOOL bParam1) // Position - 0x345C Signature - 22 02 04 00 00 66 01 6A
{
	if (bParam1 || !func_49(uParam0))
		func_175(uParam0);

	return;
}

int func_110(var uParam0) // Position - 0x347C Signature - 22 01 03 00 00 66 00 39 13
{
	if (!func_49(uParam0))
		return 0;

	if (func_176(uParam0))
		return uParam0->f_2;

	return func_177(uParam0->f_1);
}

void func_111(int iParam0) // Position - 0x34AD Signature - 22 01 0D 00 00 66
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	int i;

	num = func_178(iParam0);
	num2 = (func_178(iParam0) + func_179(iParam0)) - 1;
	num3 = (func_178(iParam0) + func_179(iParam0)) - 1;
	num4 = Global_1207480.f_8[iParam0];
	num5 = Global_1207480.f_18[iParam0];
	num6 = Global_1207480.f_23[iParam0];
	num7 = 0;
	num8 = 0;
	num9 = 0;

	for (i = num; i <= num3; i = i + 1)
	{
		if (Global_1207480.f_231[i /*15*/].f_1 <= 0)
		{
		}
		else
		{
			num7 = num7 + 1;
		
			if (iParam0 != Global_1207480.f_231[i /*15*/].f_5.f_9)
				num8 = num8 + 1;
		
			if (i >= num2)
				num9 = num9 + 1;
		}
	}

	if (num4 != num7)
		Global_1207480.f_8[iParam0] = num7;

	if (num5 != num8)
		Global_1207480.f_18[iParam0] = num8;

	if (num6 != num9)
		Global_1207480.f_23[iParam0] = num9;

	return;
}

BOOL func_112(int iParam0, int iParam1) // Position - 0x3598 Signature - 22 02 04 00 00 66 00 66 01 69
{
	return iParam0 && iParam1 != false;
}

int func_113(var uParam0) // Position - 0x35A7 Signature - 22 01 03 00 00 66 00 76 50 01 01 22 02
{
	return *uParam0;
}

struct<40> func_114(int* piParam0, int iParam1) // Position - 0x35B2 Signature - 22 02 2C 00 00 66 00 66 01 39 A4
{
	var unk;

	unk = { func_180(piParam0, iParam1) };
	func_181(piParam0, iParam1);
	return unk;
}

BOOL func_115(var uParam0, var uParam1) // Position - 0x35D4 Signature - 22 02 04 00 00 66 00 27 02 08
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

	if (!func_39(uParam0->f_8.f_5, uParam1->f_8.f_5))
		return false;

	if (uParam0->f_8.f_5.f_2 != uParam1->f_8.f_5.f_2)
		return false;

	if (uParam0->f_8.f_5.f_3 != uParam1->f_8.f_5.f_3)
		return false;

	if (uParam0->f_8.f_5.f_4 != uParam1->f_8.f_5.f_4)
		return false;

	if (uParam0->f_8.f_5.f_5 != uParam1->f_8.f_5.f_5)
		return false;

	if (!func_39(uParam0->f_8.f_5.f_6, uParam1->f_8.f_5.f_6))
		return false;

	if (uParam0->f_8.f_5.f_8 != uParam1->f_8.f_5.f_8)
		return false;

	if (uParam0->f_8.f_5.f_9 != uParam1->f_8.f_5.f_9)
		return false;

	return true;
}

void func_116(var uParam0, int iParam1) // Position - 0x3767 Signature - 22 02 04 00 00 66 01 66 00 32 50 02 00 22 01 03
{
	*uParam0 = iParam1;
	return;
}

int func_117(var uParam0) // Position - 0x3774 Signature - 22 01 03 00 00 66 00 76 50 01 01 22 03
{
	return *uParam0;
}

struct<40> func_118(var uParam0, var uParam1, int iParam2) // Position - 0x377F Signature - 22 03 2D
{
	var unk;

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

	switch (*uParam1)
	{
		case 0:
			return func_182(&(Global_1107816.f_33.f_513));
	
		case 2:
			return func_182(&(Global_1225099.f_380));
	
		case 5:
			if (iParam2 == -1)
				return unk;
		
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295666.f_149[iParam2]))
				return unk;
		
			return func_182(&Global_1210485[iParam2 /*204*/]);
	
		default:
		
	}

	return unk;
}

int func_119(var uParam0, var uParam1) // Position - 0x38A3 Signature - 22 02 05 00 00 66 00 39
{
	int num;

	if (func_53(uParam0))
		return 0;

	num = (uParam0->f_1 + *uParam0) % 5;
	uParam1->f_1 = num;
	uParam0->f_2[num /*40*/] = { *uParam1 };
	func_123(&uParam0->f_2[num /*40*/], 0);
	*uParam0 = *uParam0 + 1;
	return 1;
}

struct<40> func_120(var uParam0, int* piParam1) // Position - 0x38F0 Signature - 22 02 2C 00 00 4B
{
	var unk;

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

	if (uParam0->f_4 == -1)
		return unk;

	if (func_115(uParam0, &piParam1->f_3[uParam0->f_4 /*40*/]))
		return piParam1->f_3[uParam0->f_4 /*40*/];

	return unk;
}

struct<40> func_121(var uParam0, int iParam1) // Position - 0x39D7 Signature - 22 02 54 00 00 4B 04 6A 08 3D 41 6A 80 02
{
	var unk;
	var unk41;

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

	if (!func_183(iParam1))
		return unk;

	unk41 = { uParam0->f_2[iParam1 /*40*/] };
	uParam0->f_2[iParam1 /*40*/] = { unk };
	return unk41;
}

void func_122(var uParam0, int iParam1) // Position - 0x3AB7 Signature - 22 02 09 00 00 66 00 27 01 66 00 76 43 09 10 62
{
	int num;
	int i;
	int num2;
	int num3;
	int num4;

	num = ((uParam0->f_1 + *uParam0) - 1) % 5;

	if (uParam0->f_1 == iParam1)
	{
		num2 = *uParam0;
	
		for (i = 0; i < *uParam0; i = i + 1)
		{
			num3 = (uParam0->f_1 + i) % 5;
		
			if (uParam0->f_2[num3 /*40*/] != -1)
				break;
		
			if (uParam0->f_2[num3 /*40*/].f_1 != -1)
				func_121(uParam0, num3);
		
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
			num4 = ((num - i) + 5) % 5;
		
			if (uParam0->f_2[num4 /*40*/] != -1)
				break;
		
			func_121(uParam0, num4);
			num2 = num2 - 1;
		}
	
		*uParam0 = num2;
	}

	return;
}

void func_123(var uParam0, int iParam1) // Position - 0x3BD0 Signature - 22 02 04 00 00 66 01 66 00 32 50 02 00 22 01 05
{
	*uParam0 = iParam1;
	return;
}

int func_124(var uParam0) // Position - 0x3BDD Signature - 22 01 05 00 00 66 00 80
{
	int num;
	int i;

	if (!func_184(&(uParam0->f_8)))
		return 2;

	num = func_185(&(uParam0->f_8.f_5));

	switch (uParam0->f_5)
	{
		case 0:
			if (func_16(num))
				return 0;
		
			if (uParam0->f_8.f_5.f_8 != 0)
				if (func_40(uParam0->f_8.f_5.f_8))
					return 1;
		
			if (func_186(&(uParam0->f_8), &(uParam0->f_23), uParam0->f_8))
				return 0;
		
			if (uParam0->f_8.f_1 > 1)
				if (func_187(&(uParam0->f_8), &(uParam0->f_23), uParam0->f_8))
					return 0;
		
			if (uParam0->f_8.f_1 > 2)
			{
				for (i = 0; i < 4; i = i + 1)
				{
					if (func_188(i))
					{
					}
					else if (i == uParam0->f_8)
					{
					}
					else if (func_186(&(uParam0->f_8), &(uParam0->f_23), i))
					{
						return 0;
					}
				}
			
				if (func_189(&(uParam0->f_8), &(uParam0->f_23), uParam0->f_8))
					return 0;
			}
		
			return 1;
	
		case 1:
			if (!func_16(num))
				return 1;
		
			func_103(num, uParam0->f_8.f_1);
			func_190(num, &(uParam0->f_8.f_5), &(uParam0->f_23));
			return 0;
	
		case 2:
			if (!func_16(num))
				return 1;
		
			func_103(num, uParam0->f_8.f_1);
			return 0;
	
		case 3:
			if (!func_16(num))
				return 1;
		
			func_194(num, uParam0->f_8);
			return 0;
	
		case 4:
			if (!func_16(num))
				return 1;
		
			func_191(num, uParam0->f_8.f_5.f_6);
			func_190(num, &(uParam0->f_8.f_5), &(uParam0->f_23));
			return 0;
	
		case 5:
			if (!func_16(num))
				return 1;
		
			func_192(num, uParam0->f_23.f_6);
			return 0;
	
		case 6:
			if (!func_16(num))
				return 1;
		
			if (!func_38(uParam0->f_8.f_5))
				return 1;
		
			if (func_193(&(uParam0->f_8.f_5)))
			{
				func_190(num, &(uParam0->f_8.f_5), &(uParam0->f_23));
				return 0;
			}
		
			return 1;
	
		case 7:
			if (!func_16(num))
				return 0;
		
			func_95(num);
			return 0;
	
		default:
		
	}

	return 2;
}

void func_125(int iParam0, int iParam1, int iParam2) // Position - 0x3E1C Signature - 22 03 05 00 00 66 00 66 01 66 02 39 85 57 00 39 D8
{
	func_66(iParam0, func_195(iParam1, iParam2));
	return;
}

int func_126(var uParam0, var uParam1) // Position - 0x3E32 Signature - 22 02 05 00 00 11 4B 00 2D 39 CC 0E 00 05 8B 04 00 08 50 02 01 11
{
	int num;

	if (!func_38(uParam0))
		return -1;

	num = func_196(uParam0);

	if (num < 0)
		return 0;

	return Global_1072759.f_19487.f_1[num /*3*/].f_2;
}

Hash func_127(var uParam0, var uParam1) // Position - 0x3E6D Signature - 22 02 04 00 00 11 4B 00 2D 39 86
{
	return func_139(uParam0);
}

int func_128(BOOL bParam0, Hash hParam1) // Position - 0x3E7D Signature - 22 02 04 00 00 03 01 00 61
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return 0;

	if (!Global_1102813.f_16)
		return 0;

	if (!func_34())
		return 0;

	if (!func_197())
		return 0;

	Global_0 = hParam1;

	if (bParam0)
		func_198(&Global_0, 8);

	func_198(&Global_0, 1);
	return 1;
}

void func_129(var uParam0, var uParam1, int iParam2, int iParam3, Player plParam4, int iParam5) // Position - 0x3ED3 Signature - 22 06 18
{
	int deedType;
	Hash deedHash;
	int data;
	char* str;

	deedType = func_199(func_137(uParam0));
	deedHash = func_127(uParam0);
	str = "";
	data.f_1 = iParam3;
	data = 0;
	data.f_2 = 0;

	if (func_29() == 0)
	{
		data = Global_265213.f_122484.f_80.f_12;
		str = func_200(Global_265213.f_122484.f_80.f_22);
		func_201(uParam0, &data, iParam2);
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

void func_130(var uParam0, var uParam1, int iParam2) // Position - 0x3FA2 Signature - 22 03 05 00 00 11 4B 00 2D 39 CC 0E 00 05 8B 03 00 50 03 00 66
{
	if (!func_38(uParam0))
		return;

	if (iParam2 == 0 || iParam2 == -1)
		func_202(uParam0);
	else
		func_203(uParam0, iParam2);

	func_204();
	return;
}

struct<2> func_131(int iParam0) // Position - 0x3FE5 Signature - 22 01 03 00 00 11 66 00 5D AC
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

void func_132(BOOL bParam0) // Position - 0x3FF9 Signature - 22 01 03 00 00 13
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_205(&Global_1940199, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_206(&Global_1940199, 8388608);
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

void func_133(BOOL bParam0) // Position - 0x409E Signature - 22 01 08 00 00 2F
{
	int i;
	Hash crimeType;
	var unk;

	for (i = 0; i <= 58; i = i + 1)
	{
		crimeType = func_207(i, 1);
	
		if (crimeType == joaat("crime_murder_player") || crimeType == joaat("crime_murder_player_horse") || crimeType == joaat("crime_trample_player"))
		{
		}
		else
		{
			if (bParam0)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_208(unk);
			}
			else
			{
				func_209();
			}
		
			LAW::_0xF611DE44AEB36A1D(crimeType, bParam0);
		}
	}

	return;
}

int func_134(BOOL bParam0) // Position - 0x410F Signature - 22 01 03 00 00 66 00 05
{
	if (!bParam0 && func_210(373691918))
		return 0;

	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("bountyhuntersglobalcooldown"), bParam0, 0);
	return 1;
}

void func_135(BOOL bParam0) // Position - 0x413C Signature - 22 01 03 00 00 85 AC
{
	Global_1900460 = Global_1900460 || bParam0;
	return;
}

int func_136(var uParam0, var uParam1) // Position - 0x414F Signature - 22 02 04 00 00 11 4B 00 2D 39 FB
{
	return func_212(func_211(uParam0));
}

int func_137(var uParam0, var uParam1) // Position - 0x4163 Signature - 22 02 04 00 00 66 00 50
{
	return uParam0;
}

struct<2> func_138() // Position - 0x416D Signature - 22 00 04 00 00 4B
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	return unk;
}

Hash func_139(var uParam0, var uParam1) // Position - 0x4186 Signature - 22 02 07 00 00 4B 04 6A 80 01 08 3D 41 6A 80 02 08 3D 41 41 11 4B 00 2D 4B 04 39 B1 60 00 8B 05
{
	int num;

	num.f_1 = -1;
	num.f_2 = -1;

	if (func_213(uParam0, &num))
		return num;

	return 0;
}

int func_140() // Position - 0x41B0 Signature - 22 00 02 00 00 5D DD D3 10 78 59
{
	return Global_1102813.f_3673;
}

Player func_141(int iParam0) // Position - 0x41BF Signature - 22 01 03 00 00 66 00 2F 35 6A 05 8B 05
{
	if (iParam0 < 0 || iParam0 >= 7)
		return 255;

	return Global_1102813.f_3675[iParam0];
}

int func_142(var uParam0, var uParam1) // Position - 0x41E8 Signature - 22 02 08 00 00 85
{
	int num;
	int num2;
	var unk;

	if (Global_1900530 == 15)
		return -1;

	if (!func_214(uParam0))
		return -1;

	num2 = func_215(uParam0);

	if (num2 >= 0)
	{
		func_216(uParam0, true);
		return num2;
	}
	else
	{
		num = Global_1900530;
		Global_1900531[num /*2*/] = { uParam0 };
		Global_1900562[num /*2*/] = { unk };
		func_216(uParam0, true);
		Global_1900530 = Global_1900530 + 1;
	
		if (Global_1900530 > 15)
			Global_1900530 = 15;
	
		return num;
	}

	return -1;
}

void func_143(var uParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4278 Signature - 22 05 29
{
	int num;
	var unk;

	if (!func_38(uParam0))
		return;

	if (!func_64(uParam0))
		return;

	if (bParam2)
		func_217(uParam0);

	if (!func_38(func_131(0)))
	{
		func_130(uParam0, 3);
		func_132(bParam3);
		func_133(!bParam4);
		func_218(uParam0, -1);
	
		if (bParam2 && !func_219(2))
			func_198(&Global_0, 1024);
	
		func_135(true);
	}
	else
	{
		func_218(uParam0, -1);
		func_130(uParam0, 4);
		func_220(uParam0, false);
	}

	Global_1051645.f_45.f_1 = 1;
	num = func_137(uParam0);

	if (num != 2 && num != 7)
		if (func_221(uParam0, &unk))
			MISC::_0x1096603B519C905F(&(unk.f_17));

	return;
}

int func_144(int iParam0, int iParam1) // Position - 0x434F Signature - 22 02 04 00 00 66 01 66 00 5D B8 6C 12 18 C9 09 63 06 17
{
	return Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/];
}

int func_145(int iParam0, int iParam1) // Position - 0x4366 Signature - 22 02 04 00 00 66 01 66 00 5D 0B 9C 12 80 01 63 0A 17
{
	return Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/];
}

BOOL func_146(int iParam0, int iParam1) // Position - 0x437C Signature - 22 02 08 00 00 66 00 66
{
	int num;
	var unk;

	num = func_162(iParam0, iParam1);

	if (num == 2147483647)
		return true;

	unk = { func_222(PLAYER::PLAYER_ID()) };

	if (_IS_NULL_VECTOR(unk))
		return false;

	return func_224(unk, func_171(iParam0, iParam1)) < (float)num;
}

void func_147(int iParam0, int iParam1, int iParam2) // Position - 0x43CB Signature - 22 03 05 00 00 66 00 66 01 66 02 39 85 57 00 39 F8
{
	func_67(iParam0, func_195(iParam1, iParam2));
	return;
}

BOOL func_148(int iParam0, int iParam1) // Position - 0x43E1 Signature - 22 02 17
{
	int num;
	Hash scriptHash;
	int num2;
	struct<10> args;
	struct<5> args2;
	var args3;

	num = func_108(iParam0, iParam1);
	scriptHash = func_107(iParam0);

	if (func_59(iParam0, iParam1))
		return false;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(scriptHash, num, true, 0))
		return false;

	if (func_43(iParam0, 8))
		if (func_153(iParam0, iParam1) != 4)
			return false;

	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(scriptHash);

	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(scriptHash))
	{
		if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(func_225(iParam0)) <= 0)
			return false;
	
		if (func_43(iParam0, 64))
		{
			args.f_7 = -1;
			args.f_7.f_1 = -1;
			args.f_9 = 255;
			args = num;
			args.f_9 = func_97(iParam0);
			args.f_1 = { func_171(iParam0, iParam1) };
			args.f_5 = iParam0;
			args.f_7 = { func_63(iParam0) };
			num2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(scriptHash, &args, 10, func_225(iParam0));
		}
		else if (func_43(iParam0, 128))
		{
			args2 = num;
			args2.f_1 = func_226(scriptHash);
			args2.f_2 = Global_1207480.f_231.f_1066[iParam0 /*17*/].f_14;
			args2.f_3 = Global_1207480.f_231.f_1066[iParam0 /*17*/].f_15;
			args2.f_4 = Global_1207480.f_231.f_1066[iParam0 /*17*/].f_16;
			num2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(scriptHash, &args2, 5, func_225(iParam0));
		}
		else
		{
			num2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(scriptHash, &args3, 1, func_225(iParam0));
		}
	
		func_149(iParam0, iParam1, num2);
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(scriptHash);
		func_227(scriptHash, num);
		return true;
	}

	return false;
}

void func_149(int iParam0, int iParam1, int iParam2) // Position - 0x4551 Signature - 22 03 05 00 00 66 02 66 01 66 00 5D 0B 9C 12 80 01 63 0A 63
{
	Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2 = iParam2;
	return;
}

BOOL func_150(int iParam0, int iParam1) // Position - 0x456B Signature - 22 02 05 00 00 66 00 25
{
	int num;

	if (!func_43(iParam0, 1024))
		return false;

	num = func_170(iParam0);

	if (num <= 0)
		return false;

	return func_224(Global_34, func_171(iParam0, iParam1)) > (float)num;
}

int func_151(int iParam0, int iParam1) // Position - 0x45AB Signature - 22 02 04 00 00 66 01 66 00 5D 0B 9C 12 80 01 63 0A 63 03 27 01
{
	return Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1;
}

void func_152(int iParam0, int iParam1, int iParam2) // Position - 0x45C3 Signature - 22 03 05 00 00 66 02 03 05 00 15
{
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(iParam2))
	{
		Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1 = 0;
		return;
	}

	Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1 = iParam2;
	return;
}

int func_153(int iParam0, int iParam1) // Position - 0x45FB Signature - 22 02 04 00 00 66 01 66 00 5D B8 6C 12 18 C9 09 63 06 63 03 27 01
{
	return Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_1;
}

void func_154(int iParam0, int iParam1) // Position - 0x4614 Signature - 22 02 04 00 00 66 00 66 01 39 97
{
	func_160(iParam0, iParam1);
	func_90(iParam0, iParam1);
	return;
}

void func_155(int iParam0, int iParam1, int iParam2) // Position - 0x462D Signature - 22 03 05 00 00 66 02 66 01 66 00 5D B8 6C 12 18 C9 09 63 06 63
{
	Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_1 = iParam2;
	return;
}

int func_156(int iParam0, int iParam1) // Position - 0x4648 Signature - 22 02 04 00 00 66 01 66 00 5D B8 6C 12 80 E7 18 2A 04 63 11 80 08 63 04 27 02
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_2;
}

int func_157(int iParam0, int iParam1) // Position - 0x4665 Signature - 22 02 04 00 00 66 01 66 00 5D B8 6C 12 18 C9 09 63 06 63 03 27 02
{
	return Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2;
}

void func_158(int iParam0, int iParam1, BOOL bParam2) // Position - 0x467E Signature - 22 03 12
{
	int num;
	var args;
	var unk9;
	Hash hash;

	if (func_151(iParam0, iParam1) != 0 && !func_228(func_151(iParam0, iParam1)))
		return;

	num = 96;

	if (!bParam2)
		num = num + 128;

	if (func_90(iParam0, iParam1))
	{
		args = { func_171(iParam0, iParam1) };
		args.f_4 = BUILTIN::TO_FLOAT(func_156(iParam0, iParam1));
		args.f_5 = num;
		args.f_6 = func_229(iParam0);
		unk9 = { func_63(iParam0) };
		hash = 0;
	
		if (func_38(unk9))
			hash = func_139(unk9);
	
		if (hash != 0)
			args.f_7 = hash;
		else
			args.f_7 = -1546799264;
	
		func_152(iParam0, iParam1, VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&args));
	}

	return;
}

BOOL func_159(int iParam0, int iParam1) // Position - 0x4737 Signature - 22 02 05 00 00 66 00 66 01 39 65 46 00 2F
{
	int num;

	if (func_157(iParam0, iParam1) != 0)
		return true;

	func_230(iParam0, iParam1);
	func_158(iParam0, iParam1, true);
	num = func_151(iParam0, iParam1);

	if (num == 0)
		return false;

	if (!func_231(num))
		return false;

	func_232(iParam0, iParam1, VOLUME::_0x351D71B8B72B858B(func_151(iParam0, iParam1)));
	return true;
}

void func_160(int iParam0, int iParam1) // Position - 0x4797 Signature - 22 02 05 00 00 66 00 66 01 39 65 46 00 67
{
	int volLockRequestId;

	volLockRequestId = func_157(iParam0, iParam1);

	if (volLockRequestId == 0)
		return;

	if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId))
	{
		func_232(iParam0, iParam1, 0);
		return;
	}

	VOLUME::_RELEASE_LOCK_VOLUME(volLockRequestId);
	func_232(iParam0, iParam1, 0);
	func_90(iParam0, iParam1);
	return;
}

void func_161(int iParam0, int iParam1, int iParam2) // Position - 0x47E0 Signature - 22 03 05 00 00 66 02 66 01 66 00 5D B8 6C 12 18 C9 09 63 06 64
{
	Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/] = iParam2;
	return;
}

int func_162(int iParam0, int iParam1) // Position - 0x47F9 Signature - 22 02 04 00 00 66 01 66 00 5D B8 6C 12 80 E7 18 2A 04 63 11 80 08 63 04 27 03
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_3;
}

int func_163(int iParam0) // Position - 0x4816 Signature - 22 01 03 00 00 66 00 5D B8 6C 12 80 E7 18 2A 04 63 11 27 04
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_4;
}

BOOL func_164(int iParam0) // Position - 0x482D Signature - 22 01 03 00 00 85 E9
{
	return Global_1902569 > iParam0;
}

BOOL func_165(int iParam0, int iParam1, int iParam2) // Position - 0x483C Signature - 22 03 07 00 00 2F
{
	Player player;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (func_233(iParam0, iParam1, player, iParam2))
		{
			return true;
		}
	}

	return false;
}

BOOL func_166(int iParam0, int iParam1) // Position - 0x4880 Signature - 22 02 06 00 00 2F 67 05 66 05 6D 20 8A 30
{
	Player player;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (!func_234(iParam0, iParam1, player))
		{
			return false;
		}
	}

	return true;
}

BOOL func_167(int iParam0, int iParam1) // Position - 0x48C3 Signature - 22 02 06 00 00 2F 67 05 66 05 6D 20 8A 40
{
	Player player;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (!func_7(iParam0, player, 2))
		{
		}
		else if (!func_7(iParam0, player, iParam1))
		{
			return true;
		}
	}

	return false;
}

int func_168(int iParam0) // Position - 0x4916 Signature - 22 01 03 00 00 66 00 39 0F 08 00 05 8B 04 00 2F
{
	if (!func_16(iParam0))
		return 0;

	return Global_1207480.f_231[iParam0 /*15*/].f_5.f_8;
}

BOOL func_169(int iParam0) // Position - 0x493A Signature - 22 01 03 00 00 66 00 1D
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

int func_170(int iParam0) // Position - 0x4998 Signature - 22 01 03 00 00 66 00 5D B8 6C 12 80 E7 18 2A 04 63 11 27 02
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_2;
}

Vector3 func_171(int iParam0, int iParam1) // Position - 0x49AF Signature - 22 02 04 00 00 66 01 66 00 5D B8 6C 12 80 E7 18 2A 04 63 11 80 08 17
{
	return func_235(Global_1207480.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/]);
}

var func_172(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x49CE Signature - 22 0C 1A
{
	var value;
	Player bitIndex;
	int i;
	BOOL flag;
	BOOL flag2;
	Player player;
	Any any;
	BOOL flag3;
	Volume volume;
	BOOL flag4;
	Player player2;
	Ped playerPed;

	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&value);

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return value;

	if (func_236() != 0)
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
	any = Global_1295666.f_10;
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, fParam3, fParam6, func_237());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, fParam3, fParam6, func_237());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, fParam3, fParam6, func_237());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_238(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_239(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_240(i) != 1)
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
					if (GANG::NETWORK_GET_GANG_ID(player2) != any)
						flag = true;
		
			if (!flag)
				if (flag4 & 65536 != 0)
					if (!func_241(player2))
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

BOOL func_173(int iParam0, Player plParam1) // Position - 0x4D61 Signature - 22 02 04 00 00 66 00 66 01 5D
{
	return Global_1217218[plParam1 /*72*/][iParam0] == 0;
}

void func_174(int iParam0) // Position - 0x4D77 Signature - 22 01 03 00 00 2F 66 00 5D
{
	Global_1207480.f_2505[iParam0 /*6*/].f_4 = 0;
	Global_1207480.f_2505[iParam0 /*6*/].f_5 = 255;
	return;
}

void func_175(var uParam0) // Position - 0x4D9C Signature - 22 01 03 00 00 66 00 2F 39
{
	func_242(uParam0, 0);
	return;
}

BOOL func_176(var uParam0) // Position - 0x4DAB Signature - 22 01 03 00 00 66 00 76 11
{
	return func_112(*uParam0, 2);
}

int func_177(int iParam0) // Position - 0x4DBB Signature - 22 01 03 00 00 66 00 03 01
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_178(int iParam0) // Position - 0x4DCD Signature - 22 01 03 00 00 66 00 3C 04 00 00 00 00 00 15 00 01 00 00 00 13 00 02 00 00 00 11
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

int func_179(int iParam0) // Position - 0x4E08 Signature - 22 01 03 00 00 66 00 3C 04 00 00 00 00 00 15 00 01 00 00 00 13 00 02 00 00 00 32
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

struct<40> func_180(int* piParam0, int iParam1) // Position - 0x4EA4 Signature - 22 02 54 00 00 4B 04 6A 08 3D 41 6A 80 01
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

	if (!func_243(piParam0, iParam1))
		return unk;

	unk41 = { piParam0->f_3[iParam1 /*40*/] };
	piParam0->f_3[iParam1 /*40*/] = { unk };
	return unk41;
}

void func_181(int* piParam0, int iParam1) // Position - 0x4F8C Signature - 22 02 09 00 00 66 00 27 01 66 00 76 43 09 10 66
{
	int num;
	int i;
	int num2;
	int num3;
	int num4;

	num = ((piParam0->f_1 + *piParam0) - 1) % piParam0->f_2;

	if (piParam0->f_1 == iParam1)
	{
		num2 = *piParam0;
	
		for (i = 0; i < *piParam0; i = i + 1)
		{
			num3 = (piParam0->f_1 + i) % piParam0->f_2;
		
			if (piParam0->f_3[num3 /*40*/] != -1)
				break;
		
			if (piParam0->f_3[num3 /*40*/].f_4 != -1)
				func_180(piParam0, num3);
		
			num2 = num2 - 1;
		}
	
		piParam0->f_1 = num3;
		*piParam0 = num2;
	}
	else if (num == iParam1)
	{
		num2 = *piParam0;
	
		for (i = 0; i < *piParam0; i = i + 1)
		{
			num4 = ((num - i) + 5) % piParam0->f_2;
		
			if (piParam0->f_3[num4 /*40*/] != -1)
				break;
		
			func_180(piParam0, num4);
			num2 = num2 - 1;
		}
	
		*piParam0 = num2;
	}

	return;
}

struct<40> func_182(int* piParam0) // Position - 0x50AE Signature - 22 01 2D 00 00 4B
{
	var unk;
	int i;
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

	for (i = 0; i < *piParam0; i = i + 1)
	{
		num = (piParam0->f_1 + i) % piParam0->f_2;
	
		if (!func_244(piParam0->f_3[num /*40*/]))
			return piParam0->f_3[num /*40*/];
	}

	return unk;
}

BOOL func_183(int iParam0) // Position - 0x51A5 Signature - 22 01 03 00 00 66 00 2F 7E 6A 8B 05
{
	return iParam0 >= 0 && iParam0 < 5;
}

BOOL func_184(var uParam0) // Position - 0x51BA Signature - 22 01 03 00 00 66 00 27
{
	if (uParam0->f_1 == -1)
		return false;

	if (!func_245(&(uParam0->f_5)))
		return false;

	return true;
}

int func_185(var uParam0) // Position - 0x51DF Signature - 22 01 05 00 00 66 00 39 3A
{
	int num;
	int i;

	if (!func_245(uParam0))
		return -1;

	num = func_246(uParam0, uParam0->f_9);

	if (num != -1)
		return num;

	for (i = 0; i < 4; i = i + 1)
	{
		if (i == uParam0->f_9)
		{
		}
		else
		{
			num = func_246(uParam0, i);
		
			if (num != -1)
				return num;
		}
	}

	return -1;
}

BOOL func_186(var uParam0, var uParam1, int iParam2) // Position - 0x5240 Signature - 22 03 08 00 00 66 02 5D
{
	int num;
	int num2;
	int i;

	if (Global_1207480.f_8[iParam2] - Global_1207480.f_23[iParam2] >= Global_1207480.f_3[iParam2])
		return false;

	if (Global_1207480.f_13[iParam2] >= Global_1207480.f_3[iParam2])
		return false;

	num = func_178(iParam2);
	num2 = (num + Global_1207480.f_3[iParam2]) - 1;

	for (i = num; i <= num2; i = i + 1)
	{
		if (Global_1207480.f_231[i /*15*/].f_1 == -1)
		{
			func_247(*uParam0, *uParam1, iParam2, i);
			return true;
		}
	}

	return false;
}

BOOL func_187(var uParam0, var uParam1, int iParam2) // Position - 0x52DD Signature - 22 03 08 00 00 66 02 39 CD 4D 00 67
{
	int num;
	int num2;
	int i;

	num = func_178(iParam2);
	num2 = (num + Global_1207480.f_3[iParam2]) - 1;

	for (i = num; i <= num2; i = i + 1)
	{
		if (Global_1207480.f_231[i /*15*/].f_1 == -1 || Global_1207480.f_231[i /*15*/].f_1 == 1)
		{
			func_247(*uParam0, *uParam1, iParam2, i);
			return true;
		}
	}

	return false;
}

BOOL func_188(int iParam0) // Position - 0x534E Signature - 22 01 03 00 00 66 00 3C 03
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			return false;
	
		case 2:
			return false;
	
		default:
		
	}

	return true;
}

BOOL func_189(var uParam0, var uParam1, int iParam2) // Position - 0x537D Signature - 22 03 08 00 00 66 02 39 CD 4D 00 66
{
	int num;
	int num2;
	int i;

	num = func_178(iParam2) + Global_1207480.f_3[iParam2];
	num2 = (func_178(iParam2) + func_179(iParam2)) - 1;

	for (i = num; i <= num2; i = i + 1)
	{
		if (Global_1207480.f_231[i /*15*/].f_1 == -1)
		{
			func_247(*uParam0, *uParam1, iParam2, i);
			return true;
		}
	}

	return false;
}

void func_190(int iParam0, var uParam1, var uParam2) // Position - 0x53E4 Signature - 22 03 0B
{
	var unk;

	if (func_43(iParam0, 1))
		func_248(iParam0);

	if (!func_38(Global_1207480.f_231[iParam0 /*15*/].f_5))
		Global_1207480.f_231[iParam0 /*15*/].f_5 = { *uParam1 };

	Global_1207480.f_231.f_1066[iParam0 /*17*/] = { *uParam2 };
	unk = 1;
	unk.f_1 = -1;
	unk.f_1.f_1 = -1;
	unk.f_5 = 255;
	Global_1207480.f_2505[iParam0 /*6*/] = { unk };

	if (func_43(iParam0, 1))
		func_249(iParam0);

	return;
}

void func_191(int iParam0, var uParam1, var uParam2) // Position - 0x5479 Signature - 22 03 05 00 00 11 4B 01 2D 11 66 00 5D B8
{
	Global_1207480.f_231[iParam0 /*15*/].f_5.f_6 = { uParam1 };
	return;
}

void func_192(int iParam0, var uParam1) // Position - 0x5495 Signature - 22 02 04 00 00 66 01 66 00 5D B8 6C 12 80 E7 18 2A 04 63 11 6C 06
{
	Global_1207480.f_231.f_1066[iParam0 /*17*/].f_6 = uParam1;
	return;
}

BOOL func_193(var uParam0) // Position - 0x54AE Signature - 22 01 1C
{
	var unk;
	var unk11;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	unk = -1;
	unk.f_1 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_6.f_1 = -1;
	unk.f_9 = 2;
	unk11 = -1;
	unk11.f_1 = -1;
	unk11.f_3 = -1;
	unk11.f_4 = -1;
	unk11.f_5 = -1;
	unk11.f_6 = -1;
	unk11.f_6.f_1 = -1;
	unk11.f_9 = 2;
	unk = { unk11 };
	unk = { *uParam0 };
	num = func_185(&unk);
	unk = { unk11 };
	unk.f_2 = uParam0->f_2;
	unk.f_3 = uParam0->f_3;
	num2 = func_185(&unk);
	unk = { unk11 };
	unk.f_2 = uParam0->f_2;
	unk.f_4 = uParam0->f_4;
	num3 = func_185(&unk);
	unk = { unk11 };
	unk.f_2 = uParam0->f_2;
	unk.f_5 = uParam0->f_5;
	num4 = func_185(&unk);

	if (!func_16(num2) && !func_16(num3) && !func_16(num4))
		return false;

	num5 = -1;

	if (func_16(num2))
		num5 = num2;
	else if (func_16(num4))
		num5 = num4;
	else
		num5 = num3;

	if (!func_16(num))
	{
		if (!func_16(num5))
			return false;
	}
	else
	{
		if (func_16(num5))
			func_95(num5);
	
		num5 = num;
	}

	Global_1207480.f_231[num5 /*15*/].f_5 = { *uParam0 };
	Global_1207480.f_231[num5 /*15*/].f_5.f_2 = 0;
	Global_1207480.f_231[num5 /*15*/].f_5.f_3 = -1;
	Global_1207480.f_231[num5 /*15*/].f_5.f_4 = -1;
	Global_1207480.f_231[num5 /*15*/].f_5.f_5 = -1;
	return true;
}

void func_194(int iParam0, int iParam1) // Position - 0x566B Signature - 22 02 04 00 00 66 00 5D B8 6C 12 80 E7 63
{
	if (Global_1207480.f_231[iParam0 /*15*/].f_5.f_9 == iParam1)
		return;

	if (Global_1207480.f_231[iParam0 /*15*/].f_5.f_9 == Global_1207480.f_231[iParam0 /*15*/] && Global_1207480.f_231[iParam0 /*15*/] != iParam1)
		Global_1207480.f_18[Global_1207480.f_231[iParam0 /*15*/]] = Global_1207480.f_18[Global_1207480.f_231[iParam0 /*15*/]] + 1;

	if (Global_1207480.f_231[iParam0 /*15*/].f_5.f_9 != Global_1207480.f_231[iParam0 /*15*/] && Global_1207480.f_231[iParam0 /*15*/] == iParam1)
		Global_1207480.f_18[Global_1207480.f_231[iParam0 /*15*/]] = Global_1207480.f_18[Global_1207480.f_231[iParam0 /*15*/]] - 1;

	Global_1207480.f_13[Global_1207480.f_231[iParam0 /*15*/].f_5.f_9] = Global_1207480.f_13[Global_1207480.f_231[iParam0 /*15*/].f_5.f_9] - 1;
	Global_1207480.f_13[iParam1] = Global_1207480.f_13[iParam1] + 1;
	Global_1207480.f_231[iParam0 /*15*/].f_5.f_9 = iParam1;
	return;
}

int func_195(int iParam0, int iParam1) // Position - 0x5785 Signature - 22 02 04 00 00 6D
{
	return 8 + (iParam0 * 2) + iParam1;
}

int func_196(var uParam0, var uParam1) // Position - 0x5797 Signature - 22 02 0D
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

	if (!func_213(uParam0, &unk))
		return -1;

	num = 0;
	num2 = Global_1072759.f_19487 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
		func_213(Global_1072759.f_19487.f_1[num3 /*3*/], &unk4);
	
		if (unk4 > unk)
			num2 = num3 - 1;
		else if (unk4 < unk)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

BOOL func_197() // Position - 0x583E Signature - 22 00 02 00 00 03 01
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

void func_198(Hash hParam0, int iParam1) // Position - 0x5852 Signature - 22 02 04 00 00 66 00 27 02 66
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

int func_199(int iParam0) // Position - 0x5865 Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 29
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

char* func_200(var uParam0, var uParam1, var uParam2) // Position - 0x58D8 Signature - 22 03 05 00 00 4B
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_201(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x58EC Signature - 22 04 0D
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

	switch (func_137(uParam0))
	{
		case 4:
			num3 = func_251(func_250(uParam0));
		
			if (num3 == -1 && iParam3 == 2 && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("net_main_offline")) == 0)
			{
				for (j = 0; j <= 112; j = j + 1)
				{
					if (func_252(j) == func_250(uParam0))
					{
						num3 = j;
						break;
					}
				}
			}
		
			num4 = func_253(num3);
		
			if (!func_254(num4, 0))
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

int func_202(var uParam0, var uParam1) // Position - 0x59FE Signature - 22 02 05 00 00 11 4B 00 2D 39 97
{
	int num;

	num = func_196(uParam0);

	if (num < 0)
		return 0;

	return func_255(num);
}

int func_203(var uParam0, var uParam1, int iParam2) // Position - 0x5A20 Signature - 22 03 0F
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

	if (!func_213(uParam0, &unk))
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
		func_213(Global_1072759.f_19487.f_1[num /*3*/], &unk4);
	
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
			func_256(num);
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

void func_204() // Position - 0x5B8F Signature - 22 00 06 00 00 2F
{
	int num;
	var unk;

	num = 0;
	unk.f_1 = -1;
	unk.f_2 = -1;

	while (num < Global_1072759.f_19487)
	{
		func_213(Global_1072759.f_19487.f_1[num /*3*/], &unk);
		num = num + 1;
	}

	return;
}

void func_205(int iParam0, int iParam1) // Position - 0x5BD6 Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 02 04 00 00 66
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_206(int iParam0, int iParam1) // Position - 0x5BEB Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 02 04 00 00 66 00 3C
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

Hash func_207(int iParam0, int iParam1) // Position - 0x5BFC Signature - 22 02 04 00 00 66 00 3C 3B
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

void func_208(var uParam0, var uParam1, var uParam2) // Position - 0x5F51 Signature - 22 03 05 00 00 1D
{
	Global_1939102.f_75.f_67 = { uParam0 };
	return;
}

void func_209() // Position - 0x5F67 Signature - 22 00 02 00 00 6D 66
{
	TEXT_LABEL_ASSIGN_STRING(&(Global_1939102.f_75.f_67), "", 24);
	return;
}

BOOL func_210(int iParam0) // Position - 0x5F7C Signature - 22 01 06 00 00 66 00 09
{
	int num;
	int num2;
	int offset;

	num = func_257(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (func_258(num2))
	{
		if (Global_1072759.f_19585.f_24 && !func_259(iParam0))
			return false;
	
		return MISC::IS_BIT_SET(Global_1072759.f_19585[num2], offset) || MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
	}

	return MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
}

int func_211(var uParam0, var uParam1) // Position - 0x5FFB Signature - 22 02 05 00 00 11 4B 00 2D 39 CC 0E 00 05 8B 04 00 08 50 02 01 2F
{
	int i;

	if (!func_38(uParam0))
		return -1;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (func_39(Global_1900460.f_1[i /*2*/], uParam0))
			return i;
	}

	return -1;
}

int func_212(int iParam0) // Position - 0x6046 Signature - 22 01 03 00 00 66 00 2F 8A 04
{
	if (iParam0 < 0)
		return 0;

	if (Global_1900460.f_66 == 0)
		return 0;

	if (Global_1900460.f_66 == 1)
	{
		Global_1900460.f_66 = 0;
		func_69(&Global_1900460.f_1[0 /*2*/]);
		return 1;
	}

	func_69(&Global_1900460.f_1[iParam0 /*2*/]);
	Global_1900460.f_66 = Global_1900460.f_66 - 1;
	func_260(iParam0, Global_1900460.f_66);
	return 1;
}

BOOL func_213(int iParam0, var uParam1, Any* panParam2) // Position - 0x60B1 Signature - 22 03 05 00 00 11 4B 00 2D 39 CC 0E 00 05 8B 04
{
	if (!func_38(iParam0))
		return false;

	func_261(panParam2);

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

BOOL func_214(var uParam0, var uParam1) // Position - 0x61BC Signature - 22 02 04 00 00 11 4B 00 2D 39 32
{
	return func_126(uParam0) == 0;
}

int func_215(var uParam0, var uParam1) // Position - 0x61CE Signature - 22 02 05 00 00 85
{
	int i;

	if (Global_1900530 <= 0)
		return -1;

	i = 0;

	for (i = 0; i <= Global_1900530 - 1; i = i + 1)
	{
		if (func_39(Global_1900531[i /*2*/], uParam0))
			return i;
	}

	return -1;
}

void func_216(var uParam0, var uParam1, BOOL bParam2) // Position - 0x6217 Signature - 22 03 05 00 00 11 4B 00 2D 39 CC 0E 00 05 8B 03 00 50 03 00 11
{
	if (!func_38(uParam0))
		return;

	if (!func_214(uParam0))
		return;

	if (bParam2)
		func_262(uParam0);

	func_130(uParam0, 1);
	bParam2 = bParam2;
	return;
}

void func_217(var uParam0, var uParam1) // Position - 0x6257 Signature - 22 02 26
{
	Hash hash;
	var unk;

	if (func_127(uParam0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_127(uParam0)))
	{
	}
	else
	{
		hash = func_127(uParam0);
		STATS::STATSTRACKER_DEED_STARTED(hash, Global_265213.f_122484.f_80.f_12);
		unk_0x6F5BC5C4EAB42B15(hash, 2, &(Global_265213.f_122484.f_80.f_22));
	
		if (func_221(uParam0, &unk))
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

int func_218(var uParam0, var uParam1, int iParam2) // Position - 0x6300 Signature - 22 03 06 00 00 11 4B 00 2D 39 FB
{
	int num;

	num = func_211(uParam0);

	if (num >= 0)
		return num;

	if (Global_1900460.f_66 >= 32)
		return -1;

	num = Global_1900460.f_66;
	func_263(uParam0, num);
	Global_1900460.f_66 = Global_1900460.f_66 + 1;

	if (iParam2 < 0 || iParam2 >= Global_1900460.f_66)
		return num;

	func_260(num, iParam2);
	return iParam2;
}

BOOL func_219(int iParam0) // Position - 0x6371 Signature - 22 01 03 00 00 5D 00
{
	return Global_1572864.f_3 && iParam0 != false;
}

int func_220(var uParam0, var uParam1, BOOL bParam2) // Position - 0x6384 Signature - 22 03 06 00 00 11 4B 00 2D 39 CC
{
	int num;

	if (!func_38(uParam0))
		return 0;

	num = func_211(uParam0);

	if (num < 0)
		return 0;

	if (!func_264(uParam0, func_131(0), bParam2))
	{
		func_130(func_131(0), 3);
		func_130(func_131(num), 4);
		return 0;
	}

	func_260(num, 0);
	func_130(func_131(0), 3);
	func_130(func_131(1), 4);
	return 1;
}

BOOL func_221(int iParam0, var uParam1, var uParam2) // Position - 0x63F8 Signature - 22 03 08 00 00 4B
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;
	func_213(iParam0, &unk);

	if (func_265(iParam0, unk, uParam2))
		return true;

	return false;
}

Vector3 func_222(Player plParam0) // Position - 0x642C Signature - 22 01 03 00 00 66 00 03 05 00 3D
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x6440 Signature - 22 03 05 00 00 66 00 73
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

float func_224(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x646A Signature - 22 06 08
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

eStackSize func_225(int iParam0) // Position - 0x6488 Signature - 22 01 03 00 00 66 00 5D B8 6C 12 80 E7 18 2A 04 63 11 27 01
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_1;
}

int func_226(Hash hParam0) // Position - 0x649F Signature - 22 01 03 00 00 66 00 3C 23
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

void func_227(Hash hParam0, int iParam1) // Position - 0x6629 Signature - 22 02 05 00 00 5D FD 0B 10 80 50 27 65 6D
{
	int num;

	if (Global_1051645.f_80.f_101 >= 10)
		return;

	num = func_266(hParam0, iParam1);

	if (num != -1)
		return;

	TEXT_LABEL_ASSIGN_STRING(&Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/], "HashOnlyScript", 64);
	Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/].f_8 = hParam0;
	Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/].f_9 = iParam1;
	Global_1051645.f_80.f_101 = Global_1051645.f_80.f_101 + 1;
	Global_1051645.f_45.f_1 = 1;
	return;
}

BOOL func_228(int iParam0) // Position - 0x66AC Signature - 22 01 03 00 00 66 00 03 05 00 15
{
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(iParam0))
		return true;

	if (VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(iParam0) == 4)
		return true;

	return false;
}

var func_229(int iParam0) // Position - 0x66D1 Signature - 22 01 03 00 00 66 00 5D B8 6C 12 80 E7 18 2A 04 63 11 27 03
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_3;
}

void func_230(int iParam0, int iParam1) // Position - 0x66E8 Signature - 22 02 04 00 00 66 00 66 01 39 AB
{
	if (func_151(iParam0, iParam1) != 0)
	{
		if (func_228(func_151(iParam0, iParam1)))
		{
			func_160(iParam0, iParam1);
			func_90(iParam0, iParam1);
		}
	}

	return;
}

BOOL func_231(int iParam0) // Position - 0x671C Signature - 22 01 04 00 00 66 00 03
{
	int volumeLockRequestStatus;

	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(iParam0))
		return false;

	volumeLockRequestStatus = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(iParam0);

	if (volumeLockRequestStatus == 3)
		return true;

	return false;
}

void func_232(int iParam0, int iParam1, int iParam2) // Position - 0x6745 Signature - 22 03 05 00 00 66 02 03 05 00 03
{
	if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iParam2))
	{
		Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2 = 0;
		return;
	}

	Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2 = iParam2;
	return;
}

BOOL func_233(int iParam0, int iParam1, Player plParam2, int iParam3) // Position - 0x677F Signature - 22 04 06 00 00 66 00 66 02 66
{
	return func_7(iParam0, plParam2, func_195(iParam1, iParam3));
}

BOOL func_234(int iParam0, int iParam1, Player plParam2) // Position - 0x6797 Signature - 22 03 06 00 00 2F
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (func_233(iParam0, iParam1, plParam2, i))
			return false;
	}

	return true;
}

Vector3 func_235(int iParam0) // Position - 0x67C5 Signature - 22 01 08 00 00 66
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

int func_236() // Position - 0x6821 Signature - 22 00 02 00 00 5D FD 0B 10 27 0C
{
	return Global_1051645.f_12;
}

char* func_237() // Position - 0x682F Signature - 22 00 02 00 00 6D 8B
{
	return "unnamed";
}

BOOL func_238(int iParam0) // Position - 0x683A Signature - 22 01 04 00 00 2F 67 03 66 00 3C 09
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

BOOL func_239(int iParam0) // Position - 0x68C9 Signature - 22 01 03 00 00 5D 17 00 18 27 0E 08 15 04 00 2F 50 01 01 6D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_267(36, iParam0);
}

int func_240(int iParam0) // Position - 0x68E7 Signature - 22 01 03 00 00 66 00 6D
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_241(Player plParam0) // Position - 0x6932 Signature - 22 01 03 00 00 03
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_268(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_269(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

void func_242(var uParam0, int iParam1) // Position - 0x6977 Signature - 22 02 04 00 00 03 01 00 17
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}

	func_270(uParam0, 1);
	func_271(uParam0, 2);
	uParam0->f_2 = 0;
	return;
}

BOOL func_243(int* piParam0, int iParam1) // Position - 0x69B3 Signature - 22 02 04 00 00 66 01 2F
{
	return iParam1 >= 0 && iParam1 < piParam0->f_2;
}

BOOL func_244(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39) // Position - 0x69CB Signature - 22 28
{
	int i;
	int num;

	if (uParam0.f_1 != -1)
		return true;

	for (i = 0; i < Global_1207480.f_28; i = i + 1)
	{
		num = (Global_1207480.f_28.f_1 + i) % 5;
	
		if (Global_1207480.f_28.f_2[num /*40*/].f_2 != uParam0.f_2)
		{
		}
		else if (Global_1207480.f_28.f_2[num /*40*/].f_4 != uParam0.f_4)
		{
		}
		else
		{
			return true;
		}
	}

	return false;
}

BOOL func_245(var uParam0) // Position - 0x6A3A Signature - 22 01 03 00 00 11 66 00 2D
{
	if (func_38(*uParam0))
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

int func_246(var uParam0, int iParam1) // Position - 0x6A7E Signature - 22 02 0B
{
	int num;
	int num2;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	int i;

	num = func_178(iParam1);
	num2 = (num + Global_1207480.f_3[iParam1]) - 1;

	if (Global_1207480.f_23[iParam1] != 0)
		num2 = (num + func_179(iParam1)) - 1;

	flag = func_38(*uParam0);
	flag2 = uParam0->f_2 != 0 && uParam0->f_3 != -1;
	flag3 = uParam0->f_2 != 0 && uParam0->f_4 != -1;
	flag4 = uParam0->f_2 != 0 && uParam0->f_5 != -1;

	for (i = num; i <= num2; i = i + 1)
	{
		if (flag)
			if (func_39(Global_1207480.f_231[i /*15*/].f_5, *uParam0))
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

void func_247(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, int iParam32, int iParam33) // Position - 0x6BDD Signature - 22 22
{
	Global_1207480.f_231[iParam33 /*15*/] = { uParam0 };
	Global_1207480.f_231[iParam33 /*15*/] = iParam32;
	Global_1207480.f_231.f_1066[iParam33 /*17*/] = { uParam15 };

	if (iParam32 != uParam0.f_5.f_9)
		Global_1207480.f_18[iParam32] = Global_1207480.f_18[iParam32] + 1;

	if (func_169(iParam33))
		Global_1207480.f_23[iParam32] = Global_1207480.f_23[iParam32] + 1;

	Global_1207480.f_8[iParam32] = Global_1207480.f_8[iParam32] + 1;
	Global_1207480.f_13[uParam0.f_5.f_9] = Global_1207480.f_13[uParam0.f_5.f_9] + 1;

	if (func_43(iParam33, 1))
		func_249(iParam33);

	return;
}

void func_248(int iParam0) // Position - 0x6C9D Signature - 22 01 05 00 00 66 00 39 0F
{
	int i;
	int num;

	if (!func_16(iParam0))
		return;

	num = -1;

	for (i = 0; i < Global_1207480.f_2505.f_499; i = i + 1)
	{
		if (Global_1207480.f_2505.f_427[i] == iParam0)
		{
			num = i;
			break;
		}
	}

	if (num == -1)
		return;

	if (Global_1207480.f_2505.f_499 == 1)
	{
		Global_1207480.f_2505.f_499 = 0;
		return;
	}

	for (i = num; i <= Global_1207480.f_2505.f_499 - 2; i = i + 1)
	{
		Global_1207480.f_2505.f_427[i] = Global_1207480.f_2505.f_427[i + 1];
	}

	Global_1207480.f_2505.f_499 = Global_1207480.f_2505.f_499 - 1;
	return;
}

int func_249(int iParam0) // Position - 0x6D61 Signature - 22 01 04 00 00 5D B8
{
	int i;

	if (Global_1207480.f_2505.f_499 >= 71)
		return 0;

	if (!func_16(iParam0))
		return 0;

	for (i = 0; i < Global_1207480.f_2505.f_499; i = i + 1)
	{
		if (Global_1207480.f_2505.f_427[i] == iParam0)
			return 1;
	}

	Global_1207480.f_2505.f_427[Global_1207480.f_2505.f_499] = iParam0;
	Global_1207480.f_2505.f_499 = Global_1207480.f_2505.f_499 + 1;
	return 1;
}

int func_250(var uParam0, var uParam1) // Position - 0x6DEB Signature - 22 02 07 00 00 4B 04 6A 80 01 08 3D 41 6A 80 02 08 3D 41 41 11 4B 00 2D 4B 04 39 B1 60 00 8B 07
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_213(uParam0, &unk))
		return unk.f_1;

	return -1;
}

int func_251(int iParam0) // Position - 0x6E17 Signature - 22 01 09
{
	int num;
	int num2;

	num = -1;

	if (func_272(&num2, iParam0))
		num = func_273() - DATAFILE::_0xE13634BB6BAF0734(num2, num2.f_1) - 1;

	return num;
}

int func_252(int iParam0) // Position - 0x6E42 Signature - 22 01 03 00 00 66 00 08 15 04 00 2F 50 01 01 66 00 5D F6 FF 12 17
{
	if (iParam0 == -1)
		return 0;

	return Global_1245174[iParam0 /*5*/];
}

int func_253(int iParam0) // Position - 0x6E5C Signature - 22 01 03 00 00 66 00 08 15 04 00 2F 50 01 01 66 00 5D F6 FF 12 63
{
	if (iParam0 == -1)
		return 0;

	return Global_1245174[iParam0 /*5*/].f_2;
}

BOOL func_254(int iParam0, BOOL bParam1) // Position - 0x6E78 Signature - 22 02 04 00 00 66 00 3C 0D
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

int func_255(int iParam0) // Position - 0x6EE0 Signature - 22 01 07 00 00 66
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

int func_256(int iParam0) // Position - 0x6F81 Signature - 22 01 07 00 00 5D
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

int func_257(int iParam0, int iParam1) // Position - 0x7015 Signature - 22 02 04 00 00 66 00 3C 21
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

BOOL func_258(int iParam0) // Position - 0x88BD Signature - 22 01 04 00 00 66 00 39 4C
{
	int num;

	num = func_274(iParam0);

	if (num < 336)
		return false;

	return true;
}

BOOL func_259(int iParam0) // Position - 0x88DA Signature - 22 01 03 00 00 66 00 37
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
		return true;

	return false;
}

void func_260(int iParam0, int iParam1) // Position - 0x88F1 Signature - 22 02 05 00 00 66 00 66 01 15
{
	int i;

	if (iParam0 == iParam1)
		return;

	if (iParam1 < iParam0)
	{
		for (i = iParam0; i > iParam1; i = i - 1)
		{
			func_275(i - 1, i);
		}
	}
	else
	{
		for (i = iParam0; i < iParam1; i = i + 1)
		{
			func_275(i, i + 1);
		}
	}

	if (func_38(Global_1900460.f_1[0 /*2*/]))
		func_130(Global_1900460.f_1[0 /*2*/], 3);

	return;
}

void func_261(Any* panParam0) // Position - 0x896B Signature - 22 01 03 00 00 2F 66 00 32
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

void func_262(var uParam0, var uParam1) // Position - 0x8981 Signature - 22 02 04 00 00 11 4B 00 2D 39 6D
{
	if (func_127(uParam0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_127(uParam0)))
	{
		STATS::_0x99230691875FC218(func_137(uParam0), func_127(uParam0), Global_34);
	}

	return;
}

void func_263(var uParam0, var uParam1, int iParam2) // Position - 0x89C4 Signature - 22 03 05 00 00 11 4B 00 2D 39 CC 0E 00 05 8B 11
{
	if (!func_38(uParam0))
		func_69(&Global_1900460.f_1[iParam2 /*2*/]);
	else
		Global_1900460.f_1[iParam2 /*2*/] = { uParam0 };

	func_276(uParam0, false, 1, -1);
	return;
}

BOOL func_264(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x8A05 Signature - 22 05 09
{
	int num;
	int num2;

	if (!func_38(uParam0))
		return false;

	if (!func_38(uParam2))
		return true;

	num = func_137(uParam0);
	num2 = func_137(uParam2);

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

BOOL func_265(int iParam0, var uParam1, var uParam2) // Position - 0x8B0C Signature - 22 03 0A 00 00 66 00 39
{
	var unk;

	if (!func_277(iParam0))
		return false;

	if (func_278(iParam0, uParam1, &unk))
		func_279(iParam0, &unk, uParam2);
	else
		return false;

	return true;
}

int func_266(Hash hParam0, int iParam1) // Position - 0x8B41 Signature - 22 02 05 00 00 5D FD 0B 10 80 50 27 65 2F
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

BOOL func_267(int iParam0, int iParam1) // Position - 0x8BA3 Signature - 22 02 05 00 00 66 00 67
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_280(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_281())
		return func_280(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_280(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_268(Player plParam0) // Position - 0x8C17 Signature - 22 01 03 00 00 5D 77
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_269(Player plParam0) // Position - 0x8C34 Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 32
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_282(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_283(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

void func_270(var uParam0, int iParam1) // Position - 0x8CB7 Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 02 04 00 00 66 00 76
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_271(var uParam0, int iParam1) // Position - 0x8CC8 Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 02 04 00 00 5D
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_272(Any* panParam0, int iParam1) // Position - 0x8CDD Signature - 22 02 04 00 00 5D F6
{
	*panParam0 = Global_1245174.f_9818;
	panParam0->f_2 = 423895568;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_IS_FILE_LOADED(*panParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_273() // Position - 0x8D14 Signature - 22 00 08
{
	int numChildren;
	Any any;

	numChildren = 0;
	any = Global_1245174.f_9818;
	any.f_2 = -1041770777;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(any.f_1), &any))
		numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any.f_1);

	return numChildren;
}

int func_274(int iParam0) // Position - 0x8D4C Signature - 22 01 03 00 00 66 00 39 B2
{
	return func_284(iParam0) + 30;
}

void func_275(int iParam0, int iParam1) // Position - 0x8D5C Signature - 22 02 06 00 00 4B
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk = { Global_1900460.f_1[iParam0 /*2*/] };
	Global_1900460.f_1[iParam0 /*2*/] = { Global_1900460.f_1[iParam1 /*2*/] };
	Global_1900460.f_1[iParam1 /*2*/] = { unk };
	return;
}

int func_276(var uParam0, var uParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0x8DA9 Signature - 22 05 0B
{
	Hash hash;

	if (func_285(uParam0) >= 0)
		return 0;

	hash.f_1 = -1;
	hash.f_1.f_1 = -1;
	hash.f_1 = { uParam0 };
	hash = func_139(uParam0);
	hash.f_3 = iParam3;
	func_286(&hash, bParam2, iParam4);
	return 1;
}

BOOL func_277(int iParam0) // Position - 0x8DF7 Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 21 00 04 00 00 00 1B 00 05 00 00 00 15 00 06 00 00 00 0F 00 07 00 00 00 09 00 08 00 00 00 03 00 68 04 00 09 50 01 01 2F 50 01 01 22 03
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

BOOL func_278(int iParam0, var uParam1, Any* panParam2) // Position - 0x8E36 Signature - 22 03 05 00 00 5D F8 89 11 27 07 66 02 32 37 19
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = 1351168281;
	panParam2->f_3 = func_287(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_279(int iParam0, Any* panParam1, var uParam2) // Position - 0x8E6A Signature - 22 03 06 00 00 66 00
{
	int num;

	*uParam2 = iParam0;
	panParam1->f_2 = -611386243;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), panParam1);
	uParam2->f_3 = func_288(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_289(num);
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
			uParam2->f_5 = func_290(num);
	}
	else if (*uParam2 == 6)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_291(num);
	
		panParam1->f_2 = 162343104;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), panParam1);
	}
	else if (*uParam2 == 7)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_292(num);
	}
	else
	{
		panParam1->f_2 = 1636457257;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), panParam1);
	}

	panParam1->f_2 = 2012757065;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_7 = func_293(num);
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

BOOL func_280(Any* panParam0, int iParam1, int iParam2) // Position - 0x90C5 Signature - 22 03 07 00 00 66
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_281() // Position - 0x90FC Signature - 22 00 02 00 00 5D DD D3 10 78 58
{
	return Global_1102813.f_3672;
}

void func_282(Player plParam0) // Position - 0x910B Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 77
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_283(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_283(Player plParam0) // Position - 0x9177 Signature - 22 01 03 00 00 66 00 5D 77
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

int func_284(int iParam0) // Position - 0x91B2 Signature - 22 01 03 00 00 66 00 14
{
	return iParam0 * 31;
}

int func_285(var uParam0, var uParam1) // Position - 0x91BE Signature - 22 02 05 00 00 5D 2C
{
	int i;

	if (Global_1205804.f_129 <= 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1205804.f_129; i = i + 1)
	{
		if (func_39(Global_1205804[i /*4*/].f_1, uParam0))
			return i;
	}

	return -1;
}

void func_286(var uParam0, BOOL bParam1, int iParam2) // Position - 0x920B Signature - 22 03 05 00 00 66 00 66 02
{
	func_294(uParam0, iParam2);

	if (Global_1205804.f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}

	if (bParam1)
		func_295(func_285(uParam0->f_1));
	else
		func_296();

	return;
}

int func_287(int iParam0) // Position - 0x9245 Signature - 22 01 04 00 00 2F 67 03 66 00 3C 16
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

int func_288(int iParam0, var uParam1) // Position - 0x93BA Signature - 22 02 1F
{
	var unk;

	if (func_297(iParam0, uParam1, &unk))
		return unk.f_2;

	return 0;
}

int func_289(int iParam0) // Position - 0x93D7 Signature - 22 01 03 00 00 66 00 3C 1E
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

int func_290(int iParam0) // Position - 0x952D Signature - 22 01 03 00 00 66 00 3C 07 00 18
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

int func_291(int iParam0) // Position - 0x9584 Signature - 22 01 03 00 00 66 00 3C 13
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

int func_292(int iParam0) // Position - 0x965E Signature - 22 01 03 00 00 66 00 3C 0D
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

int func_293(int iParam0) // Position - 0x96F6 Signature - 22 01 03 00 00 66 00 3C 26
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

void func_294(var uParam0, int iParam1) // Position - 0x98A0 Signature - 22 02 0A
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

void func_295(int iParam0) // Position - 0x9974 Signature - 22 01 03 00 00 66 00 2F 35 6A 05 8B 0A
{
	if (iParam0 < 0 || iParam0 >= Global_1205804.f_129)
		return;

	Global_1205804.f_130 = iParam0;
	Global_1205804.f_131 = Global_1205804[iParam0 /*4*/];
	return;
}

void func_296() // Position - 0x99AB Signature - 22 00 02 00 00 5D 2C
{
	if (Global_1205804.f_131 == 0)
		return;

	Global_1205804.f_130 = func_298(Global_1205804.f_131);

	if (Global_1205804.f_130 < 0)
		Global_1205804.f_131 = 0;

	return;
}

BOOL func_297(int iParam0, var uParam1, var uParam2) // Position - 0x99E1 Signature - 22 03 0A 00 00 66 00 66
{
	var unk;

	if (func_299(iParam0, uParam1, &unk))
		func_300(&unk, iParam0, uParam2);
	else
		return false;

	return true;
}

int func_298(int iParam0) // Position - 0x9A08 Signature - 22 01 04 00 00 5D 2C
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

BOOL func_299(int iParam0, var uParam1, Any* panParam2) // Position - 0x9A4B Signature - 22 03 05 00 00 5D F8 89 11 27 07 66 02 32 37 A7
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = -1096981081;
	panParam2->f_3 = func_287(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_300(Any* panParam0, int iParam1, var uParam2) // Position - 0x9A7F Signature - 22 03 06 00 00 66 01
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

