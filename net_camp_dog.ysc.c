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
	char* sLocal_19 = 0;
	char* sLocal_20 = 0;
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
	var uLocal_40 = 32;
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
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 48
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	sLocal_19 = "props_misc@campfires@5_logs";
	sLocal_20 = "Script_PropCampfire";
	func_1(uScriptParam_0);

	while (!func_2(false, false) && func_3(&uLocal_21, &uLocal_40, &uLocal_105, uScriptParam_0))
	{
		BUILTIN::WAIT(0);
	}

	func_4();
	return;
}

void func_1(int iParam0, var uParam1, var uParam2) // Position - 0x48 Signature - 22 03 05 00 00 6D
{
	func_5(32, iParam0);
	func_6();
	func_7(&uLocal_21);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_21, 19, 48);
	func_8(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&uLocal_21), 19, "m_sNetCampDogHostData");
	func_9(&uLocal_40);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_40, 65, 49);
	func_10(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&uLocal_40[0 /*2*/]), 65, "m_sNetCampDogPlayerData");
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	func_11(false);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	return;
}

BOOL func_2(BOOL bParam0, BOOL bParam1) // Position - 0xAB Signature - 22 02 05 00 00 5D
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

BOOL func_3(var uParam0, var uParam1, int* piParam2, var uParam3, var uParam4, var uParam5) // Position - 0x18B Signature - 22 06 0C
{
	BOOL flag;
	Ped ped;
	BOOL flag2;
	BOOL flag3;

	flag = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
	flag2 = false;
	flag3 = false;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		ped = NETWORK::NET_TO_PED(uParam0->f_1);
		flag2 = ENTITY::DOES_ENTITY_EXIST(ped);
	}

	if (flag2)
		flag3 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(ped);

	if (flag)
		if (!func_12(uParam0, uParam1, piParam2, uParam3))
			return false;

	if (flag3)
	{
		func_13(uParam0, uParam1, piParam2);
		func_14(uParam0, uParam1, piParam2);
	}

	if (!func_15(uParam0, uParam1, piParam2, uParam3))
		return false;

	return true;
}

void func_4() // Position - 0x215 Signature - 22 00 02 00 00 03 00
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_5(int iParam0, int iParam1) // Position - 0x221 Signature - 22 02 04 00 00 03
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_4();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	return;
}

int func_6() // Position - 0x23E Signature - 22 00 05
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
			func_4();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_4();
					break;
			
				case 2:
					func_4();
					break;
			
				case 3:
					func_4();
					break;
			
				case 4:
					func_4();
					break;
			
				default:
					break;
			}
		}
	
		if (scriptStatus == 3 || scriptStatus == 4 || scriptStatus == 5 || scriptStatus == 6)
			func_4();
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			func_4();
	
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
			func_4();
	
		if (func_16() == 0)
			if (func_17())
				func_4();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_4();

	return 1;
}

void func_7(var uParam0) // Position - 0x34F Signature - 22 01 03 00 00 08
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 255;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	func_18(&(uParam0->f_6));
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	func_19(&(uParam0->f_12));
	func_20(&(uParam0->f_18));
	return;
}

int func_8(int iParam0, int iParam1, char* sParam2) // Position - 0x397 Signature - 22 03 05 00 00 09 50 03 01 22 01 04
{
	return 1;
}

void func_9(var uParam0) // Position - 0x3A0 Signature - 22 01 04 00 00 2F 67 03 66 03 6D 20 8A 13
{
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		func_21(&uParam0->[i /*2*/]);
	}

	return;
}

int func_10(int iParam0, int iParam1, char* sParam2) // Position - 0x3C5 Signature - 22 03 05 00 00 09 50 03 01 22 01 0D
{
	return 1;
}

void func_11(BOOL bParam0) // Position - 0x3CE Signature - 22 01 0D
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
					func_4();
					break;
			
				case 2:
					func_4();
					break;
			
				case 3:
					func_4();
					break;
			
				case 4:
					func_4();
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
			func_4();
			return;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

BOOL func_12(var uParam0, var uParam1, int* piParam2, var uParam3, var uParam4, var uParam5) // Position - 0x497 Signature - 22 06 0E 00 00 66 00 39 D6
{
	int num;
	int num2;
	Ped ped;
	BOOL flag;
	BOOL isEntityDead;
	BOOL flag2;

	num = func_22(uParam0);
	num2 = 0;
	num2 = num2;
	flag = false;
	isEntityDead = false;
	flag2 = false;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		ped = NETWORK::NET_TO_PED(uParam0->f_1);
		flag = ENTITY::DOES_ENTITY_EXIST(ped);
	}

	if (flag)
	{
		isEntityDead = ENTITY::IS_ENTITY_DEAD(ped);
		isEntityDead = isEntityDead;
	}

	if (flag)
		flag2 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(ped);

	switch (num)
	{
		case 0:
			func_7(uParam0);
			func_23(uParam0, uParam3);
			func_24(uParam0, 1);
			break;
	
		case 1:
			if (func_25(uParam0, uParam1, piParam2, uParam3))
				func_24(uParam0, 2);
			break;
	
		case 2:
			func_26(uParam0, ped);
			num2 = func_27(uParam0, uParam1, piParam2);
		
			if (func_28(uParam0, uParam1, piParam2))
				func_24(uParam0, 3);
			break;
	
		case 3:
			if (flag)
				if (flag2)
					func_29(uParam0, uParam1, piParam2);
				else
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(ped);
			else
				func_24(uParam0, 4);
			break;
	
		case 4:
			return false;
	}

	return true;
}

void func_13(var uParam0, var uParam1, int* piParam2) // Position - 0x5AC Signature - 22 03 07 00 00 66 00 27 01 03 05 00 27 05 8B 03
{
	Ped ped;
	BOOL isEntityDead;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
		return;

	ped = NETWORK::NET_TO_PED(uParam0->f_1);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	isEntityDead = ENTITY::IS_ENTITY_DEAD(ped);

	if (isEntityDead)
	{
		if (!func_30(piParam2, 0))
		{
			func_31(uParam0->f_2);
			func_32(piParam2, 0);
		}
	}

	return;
}

int func_14(var uParam0, var uParam1, int* piParam2) // Position - 0x601 Signature - 22 03 08 00 00 66 00 27 01 03 05 00 27
{
	Ped ped;
	int num;
	int num2;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
		return 0;

	ped = NETWORK::NET_TO_PED(uParam0->f_1);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return 0;

	num = func_33(uParam0);
	num2 = 0;

	switch (num)
	{
		case 0:
			break;
	
		case 1:
			num2 = func_34(uParam0, uParam1, piParam2);
			break;
	
		case 2:
			num2 = func_35(uParam0, uParam1, piParam2);
			break;
	
		case 3:
			break;
	
		case 4:
			PED::_PED_EMOTIONAL_PRESET_LOCO_MOTION(ped, "Interaction_Happy", 0, 20000, 4);
			break;
	
		case 5:
			break;
	
		case 6:
			num2 = func_36(uParam0, uParam1, piParam2);
			break;
	
		case 7:
			num2 = func_37(uParam0, uParam1, piParam2);
			break;
	
		case 8:
			num2 = func_38(uParam0, uParam1, piParam2);
			break;
	}

	return num2;
}

BOOL func_15(var uParam0, var uParam1, int* piParam2, int iParam3, var uParam4, var uParam5) // Position - 0x6EE Signature - 22 06 0D
{
	BOOL flag;
	Ped ped;
	Player player;
	Player player2;
	int num;

	flag = false;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		ped = NETWORK::NET_TO_PED(uParam0->f_1);
	
		if (ENTITY::DOES_ENTITY_EXIST(ped))
			flag = true;
	}

	player = PLAYER::PLAYER_ID();
	player2 = player;
	num = func_39(&uParam1->[player2 /*2*/]);

	switch (num)
	{
		case 0:
			func_40(piParam2);
			func_21(&uParam1->[player2 /*2*/]);
			func_41(piParam2, iParam3);
			func_42(&uParam1->[player2 /*2*/]);
			func_43(&uParam1->[player2 /*2*/], 1);
			break;
	
		case 1:
			func_44(uParam0, uParam1, piParam2);
			func_45(uParam0, piParam2);
		
			if (func_46(uParam0) != 11)
				return true;
		
			if (flag)
			{
				func_47(uParam0, ped);
				func_48(piParam2);
				func_49(uParam0, piParam2);
				func_50(player2, ped);
				func_51(uParam1, piParam2, uParam0->f_2, ped);
				func_52(piParam2, uParam0->f_2, 2);
				func_53(uParam1, piParam2, uParam0->f_2, ped);
				func_52(piParam2, uParam0->f_2, 4);
				func_54(uParam0, &uParam1->[player2 /*2*/], ped, player);
				func_55(uParam0, &uParam1->[player2 /*2*/]);
				func_56(uParam0, &uParam1->[player2 /*2*/], ped);
				func_57(uParam0, uParam1, ped);
				return true;
			}
		
			if (!flag)
				func_43(&uParam1->[player2 /*2*/], 2);
		
			[[fallthrough]];
	
		case 2:
			if (!func_58(uParam0, uParam1, piParam2))
				return true;
		
			func_43(&uParam1->[player2 /*2*/], 3);
			break;
	
		case 3:
			break;
	}

	return true;
}

int func_16() // Position - 0x863 Signature - 22 00 02 00 00 5D 17
{
	return Global_1572887.f_14;
}

BOOL func_17() // Position - 0x871 Signature - 22 00 02 00 00 5D FD 0B 10 27 08
{
	return Global_1051645.f_8;
}

void func_18(var uParam0) // Position - 0x87F Signature - 22 01 03 00 00 73
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	return;
}

void func_19(var uParam0) // Position - 0x893 Signature - 22 01 03 00 00 6D FF
{
	*uParam0 = 255;
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = -15;
	uParam0->f_5 = -15;
	return;
}

void func_20(var uParam0) // Position - 0x8B7 Signature - 22 01 03 00 00 25
{
	*uParam0 = -15;
	return;
}

void func_21(var uParam0) // Position - 0x8C5 Signature - 22 01 03 00 00 2F 66 00 32 2F 66 00 6C 01 50
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	return;
}

int func_22(var uParam0) // Position - 0x8D6 Signature - 22 01 03 00 00 66 00 27 04
{
	return uParam0->f_4;
}

void func_23(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x8E2 Signature - 22 04 06 00 00 66 01 66
{
	*uParam0 = uParam1;
	uParam0->f_2 = uParam1.f_1;
	uParam0->f_3 = uParam1.f_2;
	return;
}

void func_24(var uParam0, int iParam1) // Position - 0x8FF Signature - 22 02 04 00 00 66 00 27 04
{
	if (uParam0->f_4 == iParam1)
		return;

	uParam0->f_4 = iParam1;
	return;
}

BOOL func_25(var uParam0, var uParam1, int* piParam2, var uParam3, var uParam4, var uParam5) // Position - 0x919 Signature - 22 06 0E 00 00 66 00 39 45
{
	int num;
	int num2;
	BOOL flag;
	var unk;

	num = func_46(uParam0);

	switch (num)
	{
		case 0:
			func_59(uParam0, uParam1, piParam2);
			func_60(uParam0, 1);
			[[fallthrough]];
	
		case 1:
			if (func_61(uParam0, uParam1, piParam2))
				func_60(uParam0, 2);
			break;
	
		case 2:
			if (func_62(uParam0, uParam1, piParam2))
				func_60(uParam0, 3);
			break;
	
		case 3:
			if (func_63(uParam0, uParam1, piParam2))
				func_60(uParam0, 4);
			break;
	
		case 4:
			num2 = uParam0->f_2;
			flag = false;
		
			if (func_64(num2) && !func_65(num2))
				flag = true;
		
			if (flag)
				func_60(uParam0, 6);
			else
				func_60(uParam0, 5);
			break;
	
		case 5:
			if (func_69(uParam0))
				func_60(uParam0, 10);
			break;
	
		case 6:
			if (func_66(uParam1, uParam0->f_2))
			{
				func_67(uParam0->f_2, 451736625);
				func_60(uParam0, 7);
			}
			break;
	
		case 7:
			if (func_68(uParam0, 2))
				func_60(uParam0, 8);
		
			if (func_68(uParam0, 3))
				func_60(uParam0, 5);
			break;
	
		case 8:
			if (func_66(uParam1, uParam0->f_2))
			{
				func_70(uParam0->f_2);
				func_60(uParam0, 9);
			}
			break;
	
		case 9:
			if (func_68(uParam0, 1))
			{
				unk = { func_71(&(piParam2->f_10)) };
				func_72(uParam0, unk, 0f);
				func_73(uParam0, 1);
				func_60(uParam0, 10);
			}
			break;
	
		case 10:
			if (func_74(uParam0, uParam1, piParam2))
				func_60(uParam0, 11);
			break;
	
		case 11:
			return true;
	}

	return false;
}

void func_26(var uParam0, Ped pedParam1) // Position - 0xADB Signature - 22 02 06 00 00 66
{
	BOOL flag;
	BOOL isEntityVisible;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam1);
	flag = func_68(uParam0, 0);
	isEntityVisible = ENTITY::IS_ENTITY_VISIBLE(pedParam1);

	if (flag && isEntityVisible)
		func_73(uParam0, 0);

	return;
}

int func_27(var uParam0, var uParam1, int* piParam2) // Position - 0xB1D Signature - 22 03 09 00 00 66
{
	Ped ped;
	int num;
	int num2;
	int num3;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
		return 0;

	ped = NETWORK::NET_TO_PED(uParam0->f_1);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return 0;

	num = uParam0->f_2;

	if (func_75(uParam0))
		func_76(uParam0, 8);

	if (func_77(uParam0, uParam1))
		func_76(uParam0, 4);

	num2 = func_33(uParam0);

	switch (num2)
	{
		case 0:
			if (func_64(num))
			{
				num3 = 6;
				func_76(uParam0, num3);
			}
			else
			{
				num3 = 1;
				func_76(uParam0, num3);
			}
			break;
	
		case 1:
			num3 = func_78(uParam0, uParam1, piParam2);
		
			if (num3 != num2)
				func_76(uParam0, num3);
			break;
	
		case 2:
			num3 = func_79(uParam0, uParam1, piParam2);
		
			if (num3 != num2)
				func_76(uParam0, num3);
			break;
	
		case 3:
			break;
	
		case 4:
			func_80(uParam0->f_2);
			func_76(uParam0, 5);
			break;
	
		case 5:
			if (!func_81(uParam1))
				func_76(uParam0, 1);
			break;
	
		case 6:
			num3 = func_82(uParam0, uParam1, piParam2);
		
			if (num3 != num2)
				func_76(uParam0, num3);
			break;
	
		case 7:
			num3 = func_83(uParam0, uParam1, piParam2);
		
			if (num3 != num2)
				func_76(uParam0, num3);
			break;
	
		case 8:
			num3 = func_84(uParam0, uParam1, piParam2);
		
			if (num3 != num2)
				func_76(uParam0, num3);
			break;
	}

	return 1;
}

BOOL func_28(var uParam0, var uParam1, int* piParam2) // Position - 0xCAE Signature - 22 03 16 00 00 66 00 27 01 03 05 00 27
{
	Ped ped;
	Player player;
	Player player2;
	Ped playerPed;
	Hash hash;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var unk;
	var unk2;
	var unk5;
	BOOL flag4;
	var entityCoords;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
		return true;

	ped = NETWORK::NET_TO_PED(uParam0->f_1);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return true;

	ENTITY::IS_ENTITY_DEAD(ped);
	player = uParam0->f_2;
	player2 = player;
	playerPed = PLAYER::GET_PLAYER_PED(player);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
		return true;

	ENTITY::IS_ENTITY_DEAD(playerPed);
	hash = func_85(player2);

	if (!func_86(hash, 0))
		return true;

	if (!func_87(player2))
		return true;

	if (func_88(player2))
		return true;

	if (hash != uParam0->f_3)
		return true;

	flag = func_64(player2);
	flag2 = func_89(player2);
	flag3 = true;

	if (flag || flag2)
		flag3 = false;

	if (func_81(uParam1))
		flag3 = false;

	if (flag3)
	{
		flag4 = func_90(player, &unk, &unk2, &unk5);
	
		if (!flag4)
			return true;
	}

	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, true, false) };

	if (!func_91(entityCoords, 150f))
		return true;

	return false;
}

int func_29(var uParam0, var uParam1, int* piParam2) // Position - 0xDBD Signature - 22 03 07 00 00 66 00 27 01 03 05 00 27 05 8B 04
{
	Ped ped;
	BOOL isEntityDead;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
		return 1;

	ped = NETWORK::NET_TO_PED(uParam0->f_1);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 1;

	isEntityDead = ENTITY::IS_ENTITY_DEAD(ped);

	if (isEntityDead)
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);
	else if (!PED::_IS_PED_QUEUED_FOR_DELETION(ped))
		PED::FADE_AND_DESTROY_PED(&ped);

	return 1;
}

BOOL func_30(int* piParam0, int iParam1) // Position - 0xE14 Signature - 22 02 04 00 00 66 00 76 66 01 39 E4 20 00 8B 04
{
	if (func_92(*piParam0, iParam1))
		return true;

	return false;
}

void func_31(var uParam0) // Position - 0xE2D Signature - 22 01 17 00 00 2F
{
	var unk;

	unk.f_4 = 0;
	unk.f_7 = uParam0;
	func_94(unk, func_93(0, 8));
	return;
}

void func_32(int* piParam0, int iParam1) // Position - 0xE50 Signature - 22 02 04 00 00 66 00 76 66 01 39 E4 20 00 8B 03
{
	if (func_92(*piParam0, iParam1))
		return;

	func_95(piParam0, iParam1);
	return;
}

int func_33(var uParam0) // Position - 0xE6F Signature - 22 01 03 00 00 66 00 27 0B
{
	return uParam0->f_11;
}

int func_34(var uParam0, var uParam1, int* piParam2) // Position - 0xE7B Signature - 22 03 08 00 00 66 00 27 01 03 05 00 13 67 05 66 05 37 5A
{
	Ped ped;
	BOOL flag;
	int num;

	ped = NETWORK::NET_TO_PED(uParam0->f_1);

	if (!func_96(ped, -76381094))
	{
		flag = func_68(uParam0, 0);
		num = func_97(uParam0->f_2, ped, flag);
		return num;
	}

	return 1;
}

int func_35(var uParam0, var uParam1, int* piParam2) // Position - 0xEB9 Signature - 22 03 08 00 00 66 00 27 01 03 05 00 13 67 05 66 05 37 CB
{
	Ped ped;
	Ped playerPed;
	int num;

	ped = NETWORK::NET_TO_PED(uParam0->f_1);

	if (!func_96(ped, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
	{
		playerPed = PLAYER::GET_PLAYER_PED(uParam0->f_12);
		num = func_98(ped, playerPed);
		return num;
	}

	PED::SET_PED_RESET_FLAG(ped, 229, true);
	return 1;
}

int func_36(var uParam0, var uParam1, int* piParam2) // Position - 0xEFD Signature - 22 03 0A 00 00 66
{
	Ped ped;
	Ped playerPed;
	BOOL flag;
	int num;
	int num2;

	ped = NETWORK::NET_TO_PED(uParam0->f_1);
	playerPed = PLAYER::GET_PLAYER_PED(uParam0->f_2);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(playerPed))
		return 0;

	flag = func_99(ped, playerPed, true, true) > 8f;

	if (flag)
	{
		if (!func_96(ped, SCRIPT_TASK_GO_TO_ENTITY))
		{
			num = func_100(ped, uParam0->f_2);
			return num;
		}
	
		return 1;
	}

	if (!func_96(ped, -1927882907))
	{
		num2 = func_101(ped, playerPed);
		return num2;
	}

	return 1;
}

int func_37(var uParam0, var uParam1, int* piParam2) // Position - 0xF8E Signature - 22 03 08 00 00 66 00 27 01 03 05 00 13 67 05 66 00
{
	Ped ped;
	Ped playerPed;
	int num;

	ped = NETWORK::NET_TO_PED(uParam0->f_1);
	playerPed = PLAYER::GET_PLAYER_PED(uParam0->f_2);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(playerPed))
		return 0;

	if (!func_96(ped, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
	{
		num = func_102(ped, uParam0->f_2);
		return num;
	}

	return 1;
}

int func_38(var uParam0, var uParam1, int* piParam2) // Position - 0xFE6 Signature - 22 03 18
{
	Ped ped;
	Ped playerPed;
	Vector3 entityCoords;
	Vector3 vector;
	float distanceBetweenCoords;
	int num;
	Ped ped2;
	var unk5;
	BOOL flag;
	Player player;
	Player player2;
	int num2;
	Player player3;
	Ped playerPed2;
	int num3;

	ped = NETWORK::NET_TO_PED(uParam0->f_1);
	playerPed = PLAYER::GET_PLAYER_PED(uParam0->f_2);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(playerPed))
		return 0;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, true, false) };
	vector = { func_103(uParam0->f_2) };

	if (_IS_NULL_VECTOR(vector))
		return 0;

	distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vector, true);

	if (distanceBetweenCoords > 12f)
	{
		if (!func_96(ped, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
		{
			num = func_105(ped, vector, 6f);
			return num;
		}
	
		return 1;
	}

	flag = func_106(playerPed, entityCoords, 60f, &ped2, &unk5);
	player = PLAYER::PLAYER_ID();
	player2 = player;

	if (flag)
		func_107(&uParam1->[player2 /*2*/], 3);
	else
		func_108(&uParam1->[player2 /*2*/], 3);

	if (flag)
	{
		if (!func_96(ped, -1927882907))
		{
			num2 = func_101(ped, ped2);
			return num2;
		}
	}
	else
	{
		if (!func_109(entityCoords, &player3, &distanceBetweenCoords))
			return 0;
	
		playerPed2 = PLAYER::GET_PLAYER_PED(player3);
	
		if (!func_96(ped, -1927882907))
		{
			num3 = func_101(ped, playerPed2);
			return num3;
		}
	}

	return 1;
}

int func_39(var uParam0) // Position - 0x1121 Signature - 22 01 03 00 00 66 00 76 50 01 01 22 01
{
	return *uParam0;
}

void func_40(int* piParam0) // Position - 0x112C Signature - 22 01 03 00 00 2F 66 00 32 6D
{
	*piParam0 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(piParam0->f_1), "", 64);
	piParam0->f_9 = -1;
	func_110(&(piParam0->f_10));
	return;
}

void func_41(int* piParam0, int iParam1) // Position - 0x114E Signature - 22 02 04 00 00 66 00 66 01 39
{
	if (!func_111(piParam0, iParam1))
		return;

	func_112(2, Global_1147587.f_6, joaat("rel_cop"));
	func_112(6, Global_1147587.f_6, joaat("rel_guama_law"));
	func_112(6, Global_1147587.f_6, joaat("rel_pinkertons"));
	func_112(6, Global_1147587.f_6, joaat("rel_criminals"));
	func_112(6, Global_1147587.f_6, joaat("rel_gunslingers"));
	func_112(6, Global_1147587.f_6, joaat("rel_gang_laramie_gang"));
	func_112(6, Global_1147587.f_6, joaat("rel_gang_skinner_brothers"));
	func_112(6, Global_1147587.f_6, joaat("rel_gang_creole"));
	func_112(6, Global_1147587.f_6, joaat("rel_gang_lemoyne_raiders"));
	func_112(6, Global_1147587.f_6, joaat("rel_gang_smugglers"));
	func_112(6, Global_1147587.f_6, joaat("rel_gang_odriscoll"));
	func_112(6, Global_1147587.f_6, joaat("rel_gang_murfree_brood"));
	func_112(6, Global_1147587.f_6, joaat("rel_fetch_enemy_1"));
	func_112(6, Global_1147587.f_6, joaat("rel_fetch_enemy_2"));

	if (Global_1142424.f_2060 != 0)
		func_112(2, Global_1147587.f_6, Global_1142424.f_2060);

	return;
}

void func_42(var uParam0) // Position - 0x1262 Signature - 22 01 04 00 00 66 00 42
{
	BOOL flag;

	if (func_113(uParam0, 4))
		return;

	if (MISC::IS_ORBIS_VERSION())
	{
		flag = false;
	
		if (!NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1))
			flag = true;
	
		if (!NETWORK::_UGC_HAS_PRIVILEGE())
			flag = true;
	
		if (flag)
			func_107(uParam0, 5);
	}

	func_107(uParam0, 4);
	return;
}

void func_43(var uParam0, int iParam1) // Position - 0x12AB Signature - 22 02 04 00 00 66 00 76 66 01 15
{
	if (*uParam0 == iParam1)
		return;

	*uParam0 = iParam1;
	return;
}

void func_44(var uParam0, var uParam1, int* piParam2) // Position - 0x12C3 Signature - 22 03 07 00 00 2F
{
	int i;
	eEventType eventAtIndex;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		eventAtIndex = SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i);
	
		switch (eventAtIndex)
		{
			case -507840394:
				func_114(i, uParam0, piParam2);
				break;
		}
	}

	return;
}

void func_45(var uParam0, int* piParam1) // Position - 0x1305 Signature - 22 02 07 00 00 66 01 62
{
	var unk;

	if (!func_30(piParam1, 5))
		return;

	if (func_115(&(piParam1->f_10)))
	{
		unk = { func_71(&(piParam1->f_10)) };
		func_116(uParam0->f_2, unk);
		func_117(piParam1, 5);
	}

	return;
}

int func_46(var uParam0) // Position - 0x1345 Signature - 22 01 03 00 00 66 00 27 05
{
	return uParam0->f_5;
}

void func_47(var uParam0, Ped pedParam1) // Position - 0x1351 Signature - 22 02 07 00 00 66 01 03
{
	BOOL flag;
	int num;
	BOOL flag2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam1);
	flag = func_68(uParam0, 0);

	if (!flag)
		return;

	num = func_33(uParam0);
	flag2 = false;

	switch (num)
	{
		case 1:
			flag2 = true;
			break;
	}

	if (flag2)
	{
		if (!func_118(pedParam1, -76381094))
			return;
	
		if (!TASK::_PED_IS_IN_SCENARIO_BASE(pedParam1))
			return;
	}

	if (ENTITY::IS_ENTITY_VISIBLE(pedParam1))
		return;

	ENTITY::SET_ENTITY_VISIBLE(pedParam1, true);
	ENTITY::_SET_ENTITY_FADE_IN(pedParam1);
	return;
}

void func_48(int* piParam0) // Position - 0x13DD Signature - 22 01 04 00 00 03
{
	Ped ped;

	ped = PLAYER::PLAYER_PED_ID();
	func_112(2, PED::GET_PED_RELATIONSHIP_GROUP_HASH(ped), Global_1147587.f_6);
	return;
}

void func_49(var uParam0, int* piParam1) // Position - 0x13FC Signature - 22 02 0A
{
	Player player;
	Ped ped;
	BOOL isEntityDead;
	Player player2;
	BOOL flag;
	BOOL flag2;

	player = PLAYER::PLAYER_ID();

	if (player != uParam0->f_2)
		return;

	ped = NETWORK::NET_TO_PED(uParam0->f_1);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	isEntityDead = ENTITY::IS_ENTITY_DEAD(ped);
	player2 = uParam0->f_2;
	flag = false;

	if (func_64(player2) || func_89(player2))
		flag = true;

	flag2 = false;

	if (flag)
		flag2 = true;

	if (isEntityDead)
		flag2 = false;

	if (flag2)
		if (!MAP::DOES_BLIP_EXIST(piParam1->f_9))
			piParam1->f_9 = MAP::BLIP_ADD_FOR_ENTITY(-89429847, ped);
	else if (MAP::DOES_BLIP_EXIST(piParam1->f_9))
		MAP::REMOVE_BLIP(&(piParam1->f_9));

	return;
}

void func_50(Player plParam0, Ped pedParam1) // Position - 0x149F Signature - 22 02 06 00 00 03 01 00 8F
{
	BOOL flag;
	int playerFastInstanceId;

	flag = NETWORK::NETWORK_IS_IN_MP_CUTSCENE();

	if (!flag)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam1);
	playerFastInstanceId = NETWORK::_NETWORK_GET_PLAYER_FAST_INSTANCE_ID(plParam0);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(pedParam1, false, true, playerFastInstanceId);
	return;
}

void func_51(var uParam0, int* piParam1, Player plParam2, Ped pedParam3) // Position - 0x14DE Signature - 22 04 16
{
	Player player;
	Ped playerPed;
	BOOL isEntityDead;
	BOOL isEntityDead2;
	float num;
	var text;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	player = PLAYER::PLAYER_ID();
	playerPed = PLAYER::GET_PLAYER_PED(player);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
	{
		func_117(piParam1, 1);
		return;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam3))
	{
		func_117(piParam1, 1);
		return;
	}

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam2))
	{
		func_117(piParam1, 1);
		return;
	}

	isEntityDead = ENTITY::IS_ENTITY_DEAD(playerPed);
	isEntityDead2 = ENTITY::IS_ENTITY_DEAD(pedParam3);
	num = func_119(playerPed, pedParam3, true);
	TEXT_LABEL_ASSIGN_STRING(&text, "", 64);
	flag3 = 0;

	if (!func_30(piParam1, 1))
	{
		if (num <= BUILTIN::POW(5f, 2f))
		{
			flag = func_120(uParam0, piParam1, plParam2, &text, &flag3);
			flag2 = MISC::REGISTER_INTERACTION_LOCKON_PROMPT(pedParam3, &text, 2.5f, 0, 0, 0, 0, 0, flag, -1);
		
			if (flag2 || flag3)
				func_32(piParam1, 1);
		}
	}
	else if (isEntityDead || isEntityDead2 || num > BUILTIN::POW(7.5f, 2f))
	{
		flag2 = MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(pedParam3);
	
		if (flag2)
			func_117(piParam1, 1);
	}

	return;
}

void func_52(int* piParam0, Player plParam1, int iParam2) // Position - 0x15DE Signature - 22 03 16 00 00 66 00 66
{
	Player player;
	var string1;
	var string2;

	if (!func_30(piParam0, iParam2))
		return;

	player = plParam1;
	string2 = { func_121(piParam0) };

	if (!func_122(player, &string1))
		return;

	if (!MISC::ARE_STRINGS_EQUAL(&string1, &string2))
		return;

	func_117(piParam0, iParam2);
	return;
}

void func_53(var uParam0, int* piParam1, Player plParam2, Ped pedParam3) // Position - 0x162A Signature - 22 04 07 00 00 66 01
{
	BOOL flag;

	if (!func_30(piParam1, 4) && func_30(piParam1, 3))
		return;

	flag = func_123(uParam0, piParam1, plParam2, pedParam3);

	if (!flag)
		return;

	return;
}

void func_54(var uParam0, var uParam1, Ped pedParam2, Player plParam3) // Position - 0x1663 Signature - 22 04 0B 00 00 66
{
	Ped playerPed;
	int num;
	int num2;
	BOOL flag;
	BOOL flag2;

	playerPed = PLAYER::GET_PLAYER_PED(plParam3);
	num = func_124(playerPed);
	num2 = func_124(pedParam2);
	flag = false;

	if (num && num2)
		flag = PED::_0x8BE24D74D74C6E9B(playerPed) == pedParam2;

	if (flag)
		func_107(uParam1, 1);
	else
		func_108(uParam1, 1);

	flag2 = false;

	if (func_22(uParam0) == 3)
		flag2 = true;

	if (flag2)
	{
		func_125(playerPed);
		func_125(pedParam2);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedParam2))
		{
			ENTITY::IS_ENTITY_DEAD(pedParam2);
			PED::SET_PED_CONFIG_FLAG(pedParam2, 301, true);
		}
	}

	return;
}

void func_55(var uParam0, var uParam1) // Position - 0x16EE Signature - 22 02 05 00 00 66 00 39 6F 0E 00 0D
{
	int num;

	if (func_33(uParam0) == 7)
	{
		num = uParam0->f_2;
		func_126(num);
		func_108(uParam1, 2);
	}

	return;
}

void func_56(var uParam0, var uParam1, Ped pedParam2) // Position - 0x1713 Signature - 22 03 08 00 00 66 01
{
	Player player;
	Ped playerPed;
	Blip blip;

	if (func_113(uParam1, 2))
		return;

	if (func_33(uParam0) != 6)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam2))
		return;

	player = PLAYER::PLAYER_ID();

	if (player != uParam0->f_2)
		return;

	playerPed = PLAYER::GET_PLAYER_PED(player);

	if (func_99(pedParam2, playerPed, true, true) > 8f)
		return;

	if (!func_127())
		return;

	blip = MAP::_BLIP_ADD_FOR_STYLE(776060936);
	Global_1904402.f_8879 = PLAYER::PLAYER_ID();
	func_128(620, blip, true);
	func_107(uParam1, 2);
	return;
}

void func_57(var uParam0, var uParam1, Ped pedParam2) // Position - 0x17B0 Signature - 22 03 0A 00 00 2F
{
	BOOL flag;
	int i;
	BOOL bActionModeEnabled;
	int num;
	BOOL isPedUsingActionMode;

	flag = false;

	for (i = 0; i < 32; i = i + 1)
	{
		if (func_113(&uParam1->[i /*2*/], 3))
		{
			flag = true;
			break;
		}
	}

	bActionModeEnabled = false;
	num = func_33(uParam0);

	switch (num)
	{
		case 6:
		case 7:
			bActionModeEnabled = true;
			break;
	
		case 8:
			if (flag)
				bActionModeEnabled = true;
			break;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam2))
		return;

	isPedUsingActionMode = PED::IS_PED_USING_ACTION_MODE(pedParam2);

	if (bActionModeEnabled != isPedUsingActionMode)
		PED::SET_PED_USING_ACTION_MODE(pedParam2, bActionModeEnabled, -1, 0);

	return;
}

BOOL func_58(var uParam0, var uParam1, int* piParam2) // Position - 0x184A Signature - 22 03 05 00 00 5D
{
	PED::REMOVE_RELATIONSHIP_GROUP(Global_1147587.f_6);
	return true;
}

void func_59(var uParam0, var uParam1, int* piParam2) // Position - 0x185D Signature - 22 03 05 00 00 09 03
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
		return;

	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	return;
}

void func_60(var uParam0, int iParam1) // Position - 0x1876 Signature - 22 02 04 00 00 66 00 27 05
{
	if (uParam0->f_5 == iParam1)
		return;

	uParam0->f_5 = iParam1;
	return;
}

BOOL func_61(var uParam0, var uParam1, int* piParam2) // Position - 0x1890 Signature - 22 03 06 00 00 2F
{
	int numReservedMissionPeds;

	numReservedMissionPeds = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false);

	if (numReservedMissionPeds < 1)
		return false;

	return true;
}

BOOL func_62(var uParam0, var uParam1, int* piParam2) // Position - 0x18AA Signature - 22 03 06 00 00 66 00 27 03 39 E0 2D 00 67 05 66 05 03 05 00 5F 05 8B 04 00 2F 50 03 01 66 05 2F
{
	Hash model;

	model = func_129(uParam0->f_3);

	if (!STREAMING::IS_MODEL_VALID(model))
		return false;

	STREAMING::REQUEST_MODEL(model, false);
	return true;
}

BOOL func_63(var uParam0, var uParam1, int* piParam2) // Position - 0x18D2 Signature - 22 03 06 00 00 66 00 27 03 39 E0 2D 00 67 05 66 05 03 05 00 5F 05 8B 04 00 2F 50 03 01 66 05 03
{
	Hash model;

	model = func_129(uParam0->f_3);

	if (!STREAMING::IS_MODEL_VALID(model))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(model))
	{
		STREAMING::REQUEST_MODEL(model, false);
		return false;
	}

	return true;
}

BOOL func_64(Player plParam0) // Position - 0x1908 Signature - 22 01 03 00 00 66 00 2F 35 6A 05 8B 06 00 66 00 6D 20 7E 30 8B 04 00 2F 50 01 01 66 00 5D CA 82 11 63 0C 11
{
	if (plParam0 < 0 || plParam0 >= 32)
		return false;

	if (func_130(&Global_1147594[plParam0 /*12*/], 2))
		return true;

	return false;
}

BOOL func_65(int iParam0) // Position - 0x193B Signature - 22 01 03 00 00 66 00 2F 35 6A 05 8B 06 00 66 00 6D 20 7E 30 8B 04 00 2F 50 01 01 66 00 5D CA 82 11 63 0C 1D
{
	if (iParam0 < 0 || iParam0 >= 32)
		return false;

	if (func_130(&Global_1147594[iParam0 /*12*/], 3))
		return true;

	return false;
}

BOOL func_66(var uParam0, Player plParam1) // Position - 0x196E Signature - 22 02 05 00 00 66 01
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam1))
		return false;

	player = plParam1;

	if (func_39(&uParam0->[player /*2*/]) != 1)
		return false;

	return true;
}

void func_67(int iParam0, int iParam1) // Position - 0x199B Signature - 22 02 18
{
	var unk;

	unk.f_4 = 5;
	unk.f_7 = iParam0;
	unk.f_6 = iParam1;
	func_94(unk, func_131(iParam0));
	return;
}

BOOL func_68(var uParam0, int iParam1) // Position - 0x19C3 Signature - 22 02 04 00 00 66 00 27 0A 66 01 39 E4 20 00 8B 04 00 09 50 02 01 2F 50 02 01 22 01 08
{
	if (func_92(uParam0->f_10, iParam1))
		return true;

	return false;
}

BOOL func_69(var uParam0) // Position - 0x19DD Signature - 22 01 08
{
	var unk;
	var unk2;
	var unk5;

	if (!func_90(uParam0->f_2, &unk, &unk2, &unk5))
		return false;

	uParam0->f_6 = { unk2 };
	uParam0->f_6.f_3 = unk5;
	return true;
}

void func_70(int iParam0) // Position - 0x1A0E Signature - 22 01 17 00 00 1D
{
	var unk;

	unk.f_4 = 3;
	unk.f_7 = iParam0;
	func_94(unk, func_131(iParam0));
	return;
}

Vector3 func_71(var uParam0) // Position - 0x1A30 Signature - 22 01 03 00 00 1D
{
	return uParam0->f_3.f_3;
}

int func_72(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x1A40 Signature - 22 05 07 00 00 1D
{
	uParam0->f_6 = { uParam1 };
	uParam0->f_6.f_3 = fParam4;
	return 1;
}

void func_73(var uParam0, int iParam1) // Position - 0x1A5B Signature - 22 02 04 00 00 66 00 27 0A 66 01 39 E4 20 00 05
{
	if (!func_92(uParam0->f_10, iParam1))
		return;

	func_132(&(uParam0->f_10), iParam1);
	return;
}

BOOL func_74(var uParam0, var uParam1, int* piParam2) // Position - 0x1A7E Signature - 22 03 0E 00 00 66 00 27 03
{
	Hash hash;
	ePedType type;
	var unk;
	float num;
	Ped ped;
	int presetId;
	Ped playerPed;

	hash = uParam0->f_3;
	type = func_129(hash);
	unk = { uParam0->f_6 };
	num = uParam0->f_6.f_3;

	if (!func_133(&(uParam0->f_1), type, unk, num, true, 0, false, true, true))
		return false;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
		return false;

	ped = NETWORK::NET_TO_PED(uParam0->f_1);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return false;

	ENTITY::IS_ENTITY_DEAD(ped);
	presetId = func_134(hash);
	PED::_EQUIP_META_PED_OUTFIT_PRESET(ped, presetId, false);

	if (!NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(ped))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, false);

	playerPed = PLAYER::GET_PLAYER_PED(uParam0->f_2);

	if (ENTITY::DOES_ENTITY_EXIST(playerPed))
		ENTITY::SET_ENTITY_INVINCIBLE(ped, true);

	NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(uParam0->f_1, 1, 1, 256);
	NETWORK::NETWORK_ALLOW_ENTITY_FADING_FOR_INSTANCES(ped, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(ped, Global_1147587.f_6);
	ENTITY::SET_ENTITY_VISIBLE(ped, false);
	func_135(uParam0, 0);
	func_136(ped);
	func_123(uParam1, piParam2, uParam0->f_2, ped);
	return true;
}

BOOL func_75(var uParam0) // Position - 0x1B75 Signature - 22 01 0F
{
	int num;
	int num2;
	Ped ped;
	BOOL flag;
	BOOL flag2;
	Vector3 entityCoords;
	Vector3 vector;
	float distanceBetweenCoords;

	num = func_33(uParam0);

	if (num == 8)
		return false;

	num2 = uParam0->f_2;
	ped = NETWORK::NET_TO_PED(uParam0->f_1);
	flag = func_64(num2);
	flag2 = func_89(num2);

	if (!flag && !flag2)
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return false;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, true, false) };
	vector = { func_103(num2) };
	distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vector, true);

	if (distanceBetweenCoords > 30f)
		return false;

	return true;
}

void func_76(var uParam0, int iParam1) // Position - 0x1C12 Signature - 22 02 04 00 00 66 00 27 0B
{
	if (uParam0->f_11 == iParam1)
		return;

	uParam0->f_11 = iParam1;
	return;
}

BOOL func_77(var uParam0, var uParam1) // Position - 0x1C2C Signature - 22 02 05 00 00 66 00 39 6F 0E 00 67
{
	int num;

	num = func_33(uParam0);

	if (num == 4 || num == 5)
		return false;

	if (!func_81(uParam1))
		return false;

	return true;
}

int func_78(var uParam0, var uParam1, int* piParam2) // Position - 0x1C60 Signature - 22 03 12
{
	Ped ped;
	BOOL flag;
	Player player;
	int participantIndex;
	int num;
	int num2;
	BOOL flag2;
	var unk;
	var unk2;
	int num3;
	var unk3;
	var unk4;
	var unk5;

	ped = NETWORK::NET_TO_PED(uParam0->f_1);
	flag = func_68(uParam0, 0);

	if (flag)
		return 1;

	if (func_137(uParam0->f_2, ped, &player))
	{
		participantIndex = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(player);
		num = participantIndex;
	
		if (func_113(&uParam1->[num /*2*/], 0))
			return 1;
	
		num2 = func_138();
		flag2 = func_139(uParam0->f_12.f_5);
	
		if (flag2)
		{
			func_140(num2, uParam0->f_12.f_5, &unk, &unk2, &num3, &unk3, &unk4, &unk5);
		
			if (num3 < 2)
				return 1;
		}
	
		if (func_141(player))
			return 1;
	
		uParam0->f_12 = player;
		return 2;
	}

	return 1;
}

int func_79(var uParam0, var uParam1, int* piParam2) // Position - 0x1D02 Signature - 22 03 16 00 00 66 00 27 01 03 05 00 13
{
	Ped ped;
	int num;
	var entityCoords;
	BOOL flag;
	var unk3;
	int num2;
	var unk4;
	var unk5;
	var unk6;
	var unk7;
	Vector3 entityCoords2;
	Entity pedMotionFocusEntity;
	float distanceBetweenCoords;

	ped = NETWORK::NET_TO_PED(uParam0->f_1);
	num = func_138();
	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, true, false) };
	flag = true;

	if (uParam0->f_12.f_4 == -15)
	{
		func_19(&(uParam0->f_12));
		uParam0->f_12.f_1 = { entityCoords };
		uParam0->f_12.f_4 = num;
	}

	func_140(num, uParam0->f_12.f_4, &unk3, &num2, &unk4, &unk5, &unk6, &unk7);

	if (num2 >= 20)
		flag = false;

	entityCoords2 = { entityCoords };
	pedMotionFocusEntity = PED::GET_PED_MOTION_FOCUS_ENTITY(ped);

	if (ENTITY::DOES_ENTITY_EXIST(pedMotionFocusEntity))
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedMotionFocusEntity, true, false) };

	distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords2, uParam0->f_12.f_1, true);

	if (distanceBetweenCoords >= 15f)
		flag = false;

	if (func_141(uParam0->f_12))
		flag = false;

	if (!flag)
	{
		func_19(&(uParam0->f_12));
		uParam0->f_12.f_5 = num;
		return 1;
	}

	return 2;
}

void func_80(var uParam0) // Position - 0x1DE2 Signature - 22 01 17 00 00 11
{
	var unk;

	unk.f_4 = 2;
	unk.f_7 = uParam0;
	func_94(unk, func_93(0, 8));
	return;
}

BOOL func_81(var uParam0) // Position - 0x1E05 Signature - 22 01 04 00 00 2F 67 03 66 03 6D 20 8A 2A
{
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!func_142(i, true, true))
		{
		}
		else if (func_113(&uParam0->[i /*2*/], 1))
		{
			return true;
		}
	}

	return false;
}

int func_82(var uParam0, var uParam1, int* piParam2) // Position - 0x1E42 Signature - 22 03 11 00 00 66 00
{
	Ped ped;
	Ped playerPed;
	BOOL flag;
	float num;
	int num2;
	BOOL flag2;
	var unk;
	int num3;
	var unk2;
	var unk3;
	var unk4;
	var unk5;

	ped = NETWORK::NET_TO_PED(uParam0->f_1);
	playerPed = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	flag = false;
	num = func_99(ped, playerPed, true, true);

	if (num <= 8f)
		flag = true;

	num2 = func_138();

	if (flag)
	{
		if (uParam0->f_18 == -15)
		{
			func_20(&(uParam0->f_18));
			uParam0->f_18 = num2;
		}
	}

	flag2 = true;

	if (uParam0->f_18 != -15)
	{
		func_140(num2, uParam0->f_18, &unk, &num3, &unk2, &unk3, &unk4, &unk5);
	
		if (num3 >= 5)
			flag2 = false;
	}

	if (!flag2)
		return 7;

	return 6;
}

int func_83(var uParam0, var uParam1, int* piParam2) // Position - 0x1ED5 Signature - 22 03 0D
{
	Ped ped;
	Vector3 entityCoords;
	Vector3 vector;
	float distanceBetweenCoords;

	ped = NETWORK::NET_TO_PED(uParam0->f_1);
	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, true, false) };
	vector = { func_103(uParam0->f_2) };
	distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vector, true);

	if (distanceBetweenCoords <= 15f)
		return 1;

	return 7;
}

int func_84(var uParam0, var uParam1, int* piParam2) // Position - 0x1F1E Signature - 22 03 0E 00 00 66 00 27 02
{
	int num;
	Ped ped;
	Vector3 entityCoords;
	Vector3 vector;
	float distanceBetweenCoords;

	num = uParam0->f_2;
	ped = NETWORK::NET_TO_PED(uParam0->f_1);
	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, true, false) };
	vector = { func_103(num) };
	distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vector, true);

	if (distanceBetweenCoords > 30f)
		return 7;

	if (!func_89(num))
		return 1;

	return 8;
}

Hash func_85(Player plParam0) // Position - 0x1F7A Signature - 22 01 03 00 00 66 00 2F 35 6A 05 8B 06 00 66 00 6D 20 7E 30 8B 04 00 2F 50 01 01 66 00 5D CA 82 11 63 0C 27
{
	if (plParam0 < 0 || plParam0 >= 32)
		return 0;

	return Global_1147594[plParam0 /*12*/].f_1;
}

BOOL func_86(Hash hParam0, int iParam1) // Position - 0x1FA2 Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 59
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_87(Player plParam0) // Position - 0x1FBC Signature - 22 01 04 00 00 66 00 2F 35 6A 05 8B 06 00 66 00 6D 20 7E 30 8B 04 00 2F 50 01 01 66 00 5D CA 82 11 63 0C 2F
{
	BOOL flag;

	if (plParam0 < 0 || plParam0 >= 32)
		return false;

	flag = func_130(&Global_1147594[plParam0 /*12*/], 0);
	return flag;
}

BOOL func_88(Player plParam0) // Position - 0x1FEB Signature - 22 01 04 00 00 66 00 2F 35 6A 05 8B 06 00 66 00 6D 20 7E 30 8B 04 00 2F 50 01 01 66 00 5D CA 82 11 63 0C 09
{
	BOOL flag;

	if (plParam0 < 0 || plParam0 >= 32)
		return false;

	flag = func_130(&Global_1147594[plParam0 /*12*/], 1);
	return flag;
}

BOOL func_89(Player plParam0) // Position - 0x201A Signature - 22 01 03 00 00 66 00 2F 35 6A 05 8B 06 00 66 00 6D 20 7E 30 8B 04 00 2F 50 01 01 66 00 5D CA 82 11 63 0C 42
{
	if (plParam0 < 0 || plParam0 >= 32)
		return 0;

	if (func_130(&Global_1147594[plParam0 /*12*/], 4))
		return 1;

	return 0;
}

BOOL func_90(Player plParam0, var uParam1, var uParam2, var uParam3) // Position - 0x204D Signature - 22 04 07 00 00 66 00 4B
{
	int scenario;

	if (!func_143(plParam0, &scenario))
		return false;

	!TASK::DOES_SCENARIO_POINT_EXIST(scenario);
	*uParam1 = scenario;
	*uParam2 = { TASK::_GET_SCENARIO_POINT_COORDS(*uParam1, true) };
	*uParam3 = TASK::_GET_SCENARIO_POINT_HEADING(*uParam1, true);
	return true;
}

BOOL func_91(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0x208C Signature - 22 04 0A
{
	Player playerIndex;
	Player player;
	float distanceBetweenCoords;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!func_142(i, true, true))
		{
		}
		else
		{
			player = PLAYER::INT_TO_PARTICIPANTINDEX(i);
			playerIndex = NETWORK::NETWORK_GET_PLAYER_INDEX(player);
			distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(func_144(playerIndex), vParam0, true);
		
			if (distanceBetweenCoords <= fParam3)
				return true;
		}
	}

	return false;
}

BOOL func_92(int iParam0, int iParam1) // Position - 0x20E4 Signature - 22 02 04 00 00 66 00 66 01 03 09
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

var func_93(int iParam0, int iParam1) // Position - 0x20F4 Signature - 22 02 04 00 00 73
{
	return func_145(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

void func_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20) // Position - 0x2112 Signature - 22 15
{
	Player player;

	player = PLAYER::PLAYER_ID();

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam20))
		return;

	iParam0 = 11;
	iParam0.f_1 = player;
	iParam0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam0, 20, 5, &uParam20);
	return;
}

void func_95(int* piParam0, int iParam1) // Position - 0x214C Signature - 22 02 04 00 00 66 00 66 01 03 08 00 78
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

BOOL func_96(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x215C Signature - 22 02 04 00 00 66 00 03 05 00 41 8B 47
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

int func_97(Player plParam0, Ped pedParam1, BOOL bParam2) // Position - 0x21B5 Signature - 22 03 0E 00 00 66 01
{
	int scenario;
	var unk;
	var unk4;
	BOOL flag;
	BOOL flag2;
	Hash hash;
	float num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return 0;

	if (TASK::IS_PED_EXITING_SCENARIO(pedParam1, true))
		return 0;

	flag = func_90(plParam0, &scenario, &unk, &unk4);

	if (!flag)
		return 0;

	if (!TASK::DOES_SCENARIO_POINT_EXIST(scenario))
		return 0;

	flag2 = true;
	hash = 0;
	num = -1f;

	if (bParam2)
	{
		flag2 = false;
		hash = joaat("world_animal_dog_sitting");
		num = 0f;
	}

	TASK::TASK_USE_SCENARIO_POINT(pedParam1, scenario, 0, 0, flag2, bParam2, hash, false, num, false);
	return 1;
}

int func_98(Ped pedParam0, Ped pedParam1) // Position - 0x223C Signature - 22 02 04 00 00 66 00 03 05 00 41 05
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return 0;

	TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(pedParam0, pedParam1, 0, 0, 2f, 2f, 8, 0, 0, 1069547520, 1073741824);
	PED::_0xAAC0EE3B4999ABB5(pedParam0, pedParam1);
	PED::_0xF634E2892220EF34(pedParam0, 0);
	PED::SET_PED_RESET_FLAG(pedParam0, 229, true);
	PED::_PED_EMOTIONAL_PRESET_LOCO_MOTION(pedParam0, "Interaction_Happy", pedParam1, 20000, 4);
	return 1;
}

float func_99(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x22BC Signature - 22 04 06 00 00 66 00
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

int func_100(Ped pedParam0, Player plParam1) // Position - 0x2304 Signature - 22 02 05 00 00 66 00 03 05 00 41 05 8B 04 00 2F 50 02 01 66 00 03 05 00 BA 8B 04 00 2F 50 02 01 66 01 03 05 00 33
{
	Ped playerPed;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	playerPed = PLAYER::GET_PLAYER_PED(plParam1);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(playerPed))
		return 0;

	TASK::TASK_GO_TO_ENTITY(pedParam0, playerPed, -1, 8f, 2f, 12f, 0);
	return 1;
}

int func_101(Ped pedParam0, Ped pedParam1) // Position - 0x2360 Signature - 22 02 05 00 00 66 00 03 05 00 41 05 8B 04 00 2F 50 02 01 66 00 03 05 00 BA 8B 04 00 2F 50 02 01 66 01 03 05 00 41
{
	Hash mood;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return 0;

	mood = joaat("MoodStressed");
	TASK::TASK_BARK(pedParam0, pedParam1, mood);
	return 1;
}

int func_102(Ped pedParam0, Player plParam1) // Position - 0x23B0 Signature - 22 02 09
{
	Ped playerPed;
	Vector3 vector;
	int flags;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	playerPed = PLAYER::GET_PLAYER_PED(plParam1);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(playerPed))
		return 0;

	vector = { func_103(plParam1) };

	if (_IS_NULL_VECTOR(vector))
		return 0;

	flags = 5242884;
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedParam0, vector, 2f, -1, 10f, flags, 1193033728);
	return 1;
}

Vector3 func_103(Player plParam0) // Position - 0x242E Signature - 22 01 03 00 00 66 00 6D FF 15 13
{
	if (plParam0 == 255)
		return Global_1144526[func_146() /*83*/].f_38.f_4;

	return Global_1144526[plParam0 /*83*/].f_38.f_4;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x245E Signature - 22 03 05 00 00 66 00 73
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_105(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4) // Position - 0x2488 Signature - 22 05 08
{
	int flags;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	flags = 5242884;
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedParam0, vParam1, 2f, -1, fParam4, flags, 1193033728);
	return 1;
}

BOOL func_106(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, var uParam5, var uParam6) // Position - 0x24C7 Signature - 22 07 14
{
	ItemSet itemSet;
	int entitiesNearPoint;
	Ped ped;
	float num;
	BOOL flag;
	int i;
	ScrHandle indexedItemInItemset;
	Entity entityFromItem;
	Ped pedFromIndexedItem;
	int relationshipBetweenPeds;
	float num2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	itemSet = ITEMSET::CREATE_ITEMSET(true);

	if (!ITEMSET::IS_ITEMSET_VALID(itemSet))
		return 0;

	entitiesNearPoint = ENTITY::_GET_ENTITIES_NEAR_POINT(vParam1, fParam4, itemSet, 1);
	num = 1000000f;
	flag = false;

	for (i = 0; i < entitiesNearPoint; i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet);
	
		if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(indexedItemInItemset))
		{
		}
		else
		{
			entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(indexedItemInItemset);
		
			if (ENTITY::IS_ENTITY_DEAD(entityFromItem))
			{
			}
			else if (!ENTITY::IS_ENTITY_A_PED(entityFromItem))
			{
			}
			else
			{
				pedFromIndexedItem = MISC::_GET_PED_FROM_INDEXED_ITEM(entityFromItem);
				relationshipBetweenPeds = PED::GET_RELATIONSHIP_BETWEEN_PEDS(pedParam0, pedFromIndexedItem);
			
				if (relationshipBetweenPeds != 6)
				{
				}
				else
				{
					num2 = func_99(pedParam0, pedFromIndexedItem, true, true);
				
					if (num2 < num)
					{
						flag = true;
						ped = pedFromIndexedItem;
						num = num2;
					}
				}
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemSet);

	if (flag)
	{
		*uParam5 = ped;
		*uParam6 = num;
		return 1;
	}

	return 0;
}

void func_107(var uParam0, int iParam1) // Position - 0x25B7 Signature - 22 02 04 00 00 66 00 27 01 66 01 39 E4 20 00 8B 03
{
	if (func_92(uParam0->f_1, iParam1))
		return;

	func_95(&(uParam0->f_1), iParam1);
	return;
}

void func_108(var uParam0, int iParam1) // Position - 0x25D9 Signature - 22 02 04 00 00 66 00 27 01 66 01 39 E4 20 00 05
{
	if (!func_92(uParam0->f_1, iParam1))
		return;

	func_132(&(uParam0->f_1), iParam1);
	return;
}

BOOL func_109(Vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x25FC Signature - 22 05 12
{
	Player player;
	float num;
	BOOL flag;
	int i;
	Player player2;
	Player playerIndex;
	Ped playerPed;
	Vector3 entityCoords;
	float distanceBetweenCoords;

	num = 1000000f;
	flag = false;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!func_142(i, true, true))
		{
		}
		else
		{
			player2 = PLAYER::INT_TO_PARTICIPANTINDEX(i);
			playerIndex = NETWORK::NETWORK_GET_PLAYER_INDEX(player2);
			playerPed = PLAYER::GET_PLAYER_PED(playerIndex);
			entityCoords = { ENTITY::GET_ENTITY_COORDS(playerPed, true, false) };
		
			if (ENTITY::IS_ENTITY_DEAD(playerPed))
			{
			}
			else
			{
				distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vParam0, true);
			
				if (distanceBetweenCoords < num)
				{
					player = playerIndex;
					num = distanceBetweenCoords;
					flag = true;
				}
			}
		}
	}

	if (flag)
	{
		*uParam3 = player;
		*uParam4 = num;
		return true;
	}

	return false;
}

void func_110(var uParam0) // Position - 0x2696 Signature - 22 01 03 00 00 2F 66 00 32 2F 66 00 6C 01 2F 66 00 6C 02 66
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_147(&(uParam0->f_3));
	uParam0->f_12 = 1;
	uParam0->f_13 = 0;
	return;
}

BOOL func_111(int* piParam0, int iParam1) // Position - 0x26BE Signature - 22 02 0D
{
	var name;
	BOOL flag;

	TEXT_LABEL_ASSIGN_STRING(&name, "relGroupCampDog", 64);
	TEXT_LABEL_APPEND_STRING(&name, "_", 64);
	TEXT_LABEL_APPEND_INT(&name, iParam1, 64);
	flag = PED::ADD_RELATIONSHIP_GROUP(&name, &(Global_1147587.f_6));
	return flag;
}

void func_112(int iParam0, Hash hParam1, Hash hParam2) // Position - 0x26EA Signature - 22 03 05 00 00 66 00 66
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, hParam1, hParam2);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, hParam2, hParam1);
	return;
}

BOOL func_113(var uParam0, int iParam1) // Position - 0x2706 Signature - 22 02 04 00 00 66 00 27 01 66 01 39 E4 20 00 8B 04
{
	if (func_92(uParam0->f_1, iParam1))
		return true;

	return false;
}

void func_114(int iParam0, var uParam1, int* piParam2) // Position - 0x2720 Signature - 22 03 09 00 00 09
{
	struct<4> eventData;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 4))
		return;

	switch (eventData)
	{
		case 11:
			func_148(iParam0, uParam1, piParam2);
			break;
	}

	return;
}

BOOL func_115(var uParam0) // Position - 0x2754 Signature - 22 01 24
{
	var unk;
	var outPosition;
	int num;
	Vector3 vector;
	float value;
	var gameplayCamRot;
	float num2;
	float num3;
	int value2;
	Vector3 vector2;
	int num4;
	int i;
	BOOL flag;
	Vector3 vector3;
	var groundZ;
	Vector3 vector4;
	int bitFlag;
	int num5;
	int num6;

	unk = { func_103(PLAYER::NETWORK_PLAYER_ID_TO_INT()) };
	num = 1;
	vector = { Global_1295666.f_12 };

	if (_IS_NULL_VECTOR(unk))
	{
		gameplayCamRot = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
		value = gameplayCamRot.f_2;
	}
	else
	{
		value = func_149(unk, vector, 1);
	}

	num2 = 40f;
	num3 = 80f;
	value2 = uParam0->f_2 % 20;
	value = value + (BUILTIN::TO_FLOAT(value2) * 30f * uParam0->f_2 % 2 == 0 ? 1f : -1f);
	vector2 = { vector + ({ 0f, -BUILTIN::COS(value), BUILTIN::SIN(value) } * { (num3 + num2) * 0.5f, (num3 + num2) * 0.5f, (num3 + num2) * 0.5f }) };
	num4 = func_151(uParam0);

	switch (num4)
	{
		case 0:
			func_153(uParam0, func_152());
			uParam0->f_3.f_2 = 0;
			uParam0->f_3 = 0;
			uParam0->f_1 = 0;
			uParam0->f_13 = 0;
			uParam0->f_14 = 0;
			func_154(uParam0, 1);
			break;
	
		case 1:
			for (i = 0; i < 10; i = i + 1)
			{
				if (!PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vector2, i, &outPosition, 1, 1077936128, 0))
				{
					func_154(uParam0, 2);
					return false;
				}
			
				if (!func_155(outPosition))
				{
				}
				else
				{
					func_153(uParam0, outPosition);
					func_154(uParam0, 3);
					return false;
				}
			}
		
			func_154(uParam0, 2);
			break;
	
		case 2:
			if (func_156(vector2, &(uParam0->f_3), &flag, num, false, 1127481344, 1101004800, -1138501878, -1138501878, 0))
			{
				vector3 = { func_71(uParam0) };
			
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vector3, &groundZ, true))
					vector3 = { vector3, vector3.f_1, groundZ };
			
				if (!func_155(vector3))
					func_154(uParam0, 5);
			
				func_154(uParam0, 3);
				return false;
			}
		
			if (flag)
			{
				func_154(uParam0, 5);
				return false;
			}
			break;
	
		case 3:
			if (uParam0->f_13 == 0)
			{
				vector4 = { func_71(uParam0) };
				bitFlag = 23;
				uParam0->f_13 = PATHFIND::NAVMESH_REQUEST_PATH(0, vector4, vector, bitFlag);
			
				if (uParam0->f_13 == -1)
				{
					uParam0->f_14 = uParam0->f_14 + 1;
					uParam0->f_13 = 0;
				
					if (uParam0->f_14 >= 50)
						func_154(uParam0, 5);
				}
			}
			else
			{
				num5 = PATHFIND::_NAVMESH_REQUESTED_QUERY_STATUS(uParam0->f_13);
			
				switch (num5)
				{
					case 0:
						PATHFIND::_NAVMESH_CLEAR_REQUESTED_PATH(uParam0->f_13);
						func_154(uParam0, 5);
						return false;
				
					case 1:
						if (!PATHFIND::_NAVMESH_REQUESTED_PATH_WAYPOINTS_FOUND(uParam0->f_13))
						{
							PATHFIND::_NAVMESH_CLEAR_REQUESTED_PATH(uParam0->f_13);
							func_154(uParam0, 5);
							return false;
						}
					
						num6 = PATHFIND::_NAVMESH_REQUESTED_PATH_WAYPOINTS_TERRAIN(uParam0->f_13);
					
						if (func_157(num6, 2))
						{
							PATHFIND::_NAVMESH_CLEAR_REQUESTED_PATH(uParam0->f_13);
							func_154(uParam0, 5);
							return false;
						}
					
						func_154(uParam0, 4);
						break;
				
					case 2:
						break;
				}
			}
			break;
	
		case 4:
			uParam0->f_2 = 0;
			func_154(uParam0, 0);
			return true;
	
		case 5:
			uParam0->f_2 = uParam0->f_2 + 1;
		
			if (uParam0->f_2 > 20)
			{
				uParam0->f_2 = 0;
				uParam0->f_1 = 1;
			}
			else
			{
				uParam0->f_1 = 0;
			}
		
			func_154(uParam0, 0);
			break;
	}

	return false;
}

void func_116(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x2A6B Signature - 22 04 1A
{
	var unk;

	unk.f_4 = 4;
	unk.f_7 = uParam0;
	unk.f_16 = { uParam1 };
	func_94(unk, func_93(0, 8));
	return;
}

void func_117(int* piParam0, int iParam1) // Position - 0x2A98 Signature - 22 02 04 00 00 66 00 76 66 01 39 E4 20 00 05
{
	if (!func_92(*piParam0, iParam1))
		return;

	func_132(piParam0, iParam1);
	return;
}

BOOL func_118(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x2AB8 Signature - 22 02 04 00 00 66 00 03 05 00 41 8B 35
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			if (esthParam1 == SCRIPT_TASK_DRIVE_BY && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(pedParam0))
				return true;
		
			if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 1)
				return true;
		}
	}

	return false;
}

float func_119(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x2AFF Signature - 22 03 05 00 00 66 00 03
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));

	return func_158(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));
}

BOOL func_120(var uParam0, int* piParam1, Player plParam2, var uParam3, var uParam4) // Position - 0x2B56 Signature - 22 05 0B
{
	Player player;
	Player player2;
	Player player3;
	BOOL flag;

	player = PLAYER::PLAYER_ID();
	player2 = player;

	if (!func_113(&uParam0->[player2 /*2*/], 4))
		return false;

	player3 = plParam2;

	if (!func_113(&uParam0->[player3 /*2*/], 4))
		return false;

	flag = true;

	if (plParam2 == player)
		flag = false;

	if (flag)
	{
		if (func_113(&uParam0->[player2 /*2*/], 5) || func_113(&uParam0->[player3 /*2*/], 5))
		{
			*uParam4 = 1;
			return false;
		}
	}

	if (func_30(piParam1, 2))
	{
		*uParam3 = { func_121(piParam1) };
		return true;
	}
	else
	{
		return func_122(player3, uParam3);
	}

	return false;
}

struct<8> func_121(int* piParam0) // Position - 0x2BF3 Signature - 22 01 03 00 00 6D 08
{
	return piParam0->f_1;
}

BOOL func_122(Player plParam0, var uParam1) // Position - 0x2C02 Signature - 22 02 04 00 00 66 00 2F 35
{
	if (plParam0 < 0 || plParam0 >= 32)
		return 0;

	*uParam1 = { Global_1147594[plParam0 /*12*/].f_2 };
	return 1;
}

BOOL func_123(var uParam0, int* piParam1, Player plParam2, Ped pedParam3) // Position - 0x2C33 Signature - 22 04 10
{
	var name;
	BOOL flag;
	BOOL flag2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam3))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam3))
		return 0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam2))
		return 0;

	TEXT_LABEL_ASSIGN_STRING(&name, "", 64);
	flag = false;
	flag2 = func_120(uParam0, piParam1, plParam2, &name, &flag);

	if (flag)
	{
		func_32(piParam1, 3);
		return 1;
	}

	if (flag2)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(func_159(&name)) <= 0)
			return 0;
	
		PED::_SET_PED_PROMPT_NAME(pedParam3, &name);
		func_32(piParam1, 3);
		return 1;
	}

	return 0;
}

int func_124(Ped pedParam0) // Position - 0x2CB9 Signature - 22 01 03 00 00 66 00 03 05 00 41 05 8B 04
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam0))
		return 0;

	if (PED::_IS_ANIMAL_INTERACTION_RUNNING(pedParam0))
		return 1;

	return 0;
}

void func_125(Ped pedParam0) // Position - 0x2CF8 Signature - 22 01 03 00 00 66 00 03 05 00 41 05 8B 03 00 50 01 00 66 00 03 05 00 BA 8B 03 00 50 01 00 66 00 03
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam0))
		return;

	if (PED::_IS_ANIMAL_INTERACTION_RUNNING(pedParam0))
		TASK::CLEAR_PED_TASKS(pedParam0, true, false);

	return;
}

void func_126(int iParam0) // Position - 0x2D37 Signature - 22 01 03 00 00 66 00 2F 35 6A 05 8B 06 00 66 00 6D 20 7E 30 8B 03
{
	if (iParam0 < 0 || iParam0 >= 32)
		return;

	func_160(&Global_1147594[iParam0 /*12*/], 3);
	return;
}

BOOL func_127() // Position - 0x2D61 Signature - 22 00 02 00 00 39 25
{
	if (!func_161() && func_162(true))
		return true;

	return false;
}

void func_128(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x2D80 Signature - 22 03 07 00 00 66 00 4B
{
	int num;
	int num2;

	func_163(iParam0, &num, &num2);

	if (!func_164(iParam0, num, num2, bParam2))
		return;

	if (!func_165(iParam0, 1024))
		return;

	func_166(num, num2);
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/] = hParam1;
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 3;
	return;
}

ePedType func_129(Hash hParam0) // Position - 0x2DE0 Signature - 22 01 0A
{
	var unk;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_4;
}

BOOL func_130(var uParam0, int iParam1) // Position - 0x2DFC Signature - 22 02 04 00 00 66 00 27 0A 66 01 39 E4 20 00 8B 04 00 09 50 02 01 2F 50 02 01 22 01 04
{
	if (func_92(uParam0->f_10, iParam1))
		return true;

	return false;
}

var func_131(int iParam0) // Position - 0x2E16 Signature - 22 01 04 00 00 4B
{
	var value;

	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, iParam0);
	return value;
}

void func_132(int* piParam0, int iParam1) // Position - 0x2E28 Signature - 22 02 04 00 00 66 00 66 01 03 08 00 92
{
	MISC::CLEAR_BIT(piParam0, iParam1);
	return;
}

BOOL func_133(var uParam0, ePedType eptParam1, var uParam2, var uParam3, var uParam4, float fParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x2E38 Signature - 22 0B 0E
{
	Ped ped;

	if (bParam6)
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			return false;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
		return false;

	if (NETWORK::NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED())
		return false;

	if (!func_167(eptParam1))
		return false;

	ped = func_168(eptParam1, uParam2, fParam5, bParam8, true, bParam6, iParam7, bParam9);
	*uParam0 = NETWORK::PED_TO_NET(ped);

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam9)
			WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(ped, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(eptParam1));
	
		if (bParam10)
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(ped, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));
	
		if (bParam6)
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
	
		return true;
	}

	return false;
}

int func_134(Hash hParam0) // Position - 0x2ED5 Signature - 22 01 04 00 00 66 00 37
{
	int num;

	if (func_169(hParam0, -1372720971))
		num = 0;
	else if (func_169(hParam0, 1028787971))
		num = 1;
	else if (func_169(hParam0, 1271835644))
		num = 2;
	else
		num = 0;

	return num;
}

void func_135(var uParam0, int iParam1) // Position - 0x2F1E Signature - 22 02 04 00 00 66 00 27 0A 66 01 39 E4 20 00 8B 03 00 50 02 00 66 00 80 0A 66 01 39 4C 21 00 50 02 00 22 01
{
	if (func_92(uParam0->f_10, iParam1))
		return;

	func_95(&(uParam0->f_10), iParam1);
	return;
}

void func_136(Ped pedParam0) // Position - 0x2F40 Signature - 22 01 03 00 00 66 00 03 05 00 41 05 8B 03 00 50 01 00 66 00 03 05 00 BA 8B 03 00 50 01 00 66 00 09
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::SET_PED_KEEP_TASK(pedParam0, true);
	PED::SET_PED_CAN_RAGDOLL(pedParam0, false);
	PED::SET_LOOTING_FLAG(pedParam0, 1, false);
	PED::SET_LOOTING_FLAG(pedParam0, 0, false);
	ENTITY::SET_ENTITY_PROOFS(pedParam0, 2, false);
	return;
}

BOOL func_137(Player plParam0, Ped pedParam1, var uParam2) // Position - 0x2F87 Signature - 22 03 11 00 00 66 01
{
	Vector3 entityCoords;
	var unk3;
	Vector3 vector;
	var unk6;
	BOOL flag;
	float distanceBetweenCoords;
	Player player;
	Ped playerPed;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return false;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, true, false) };
	flag = func_90(plParam0, &unk3, &vector, &unk6);

	if (!flag)
		return false;

	distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vector, true);

	if (distanceBetweenCoords > 10f)
		return false;

	if (!func_109(entityCoords, &player, &distanceBetweenCoords))
		return false;

	playerPed = PLAYER::GET_PLAYER_PED(player);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(playerPed))
		return false;

	if (distanceBetweenCoords <= 10f)
	{
		*uParam2 = player;
		return true;
	}

	return false;
}

int func_138() // Position - 0x3038 Signature - 22 00 02 00 00 85
{
	return Global_1902569;
}

BOOL func_139(int iParam0) // Position - 0x3044 Signature - 22 01 09
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return 0;

	num = func_170(iParam0);

	if (num < 0 || num >= 60)
		return 0;

	num2 = func_171(iParam0);

	if (num2 < 0 || num2 >= 60)
		return 0;

	num3 = func_172(iParam0);

	if (num3 < 0 || num3 > 23)
		return 0;

	num4 = func_173(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return 0;

	num5 = func_174(iParam0);

	if (num5 < 0 || num5 > 11)
		return 0;

	num6 = func_175(iParam0);

	if (num6 < 1 || num6 > func_176(num5, num4))
		return 0;

	return 1;
}

void func_140(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x3120 Signature - 22 08 12
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_177(iParam0, iParam1, true))
	{
		num = func_174(iParam1);
		num2 = func_173(iParam0);
		num3 = func_173(iParam0) - func_173(iParam1);
		num4 = func_174(iParam0) - func_174(iParam1);
		num5 = func_175(iParam0) - func_175(iParam1);
		num6 = func_172(iParam0) - func_172(iParam1);
		num7 = func_171(iParam0) - func_171(iParam1);
		num8 = func_170(iParam0) - func_170(iParam1);
	}
	else
	{
		num = func_174(iParam0);
		num2 = func_173(iParam1);
		num3 = func_173(iParam1) - func_173(iParam0);
		num4 = func_174(iParam1) - func_174(iParam0);
		num5 = func_175(iParam1) - func_175(iParam0);
		num6 = func_172(iParam1) - func_172(iParam0);
		num7 = func_171(iParam1) - func_171(iParam0);
		num8 = func_170(iParam1) - func_170(iParam0);
	}

	while (num8 < 0)
	{
		num8 = num8 + 60;
		num7 = num7 - 1;
	}

	while (num8 > 59)
	{
		num8 = num8 - 60;
		num7 = num7 + 1;
	}

	while (num7 < 0)
	{
		num7 = num7 + 60;
		num6 = num6 - 1;
	}

	while (num7 > 59)
	{
		num7 = num7 - 60;
		num6 = num6 + 1;
	}

	while (num6 < 0)
	{
		num6 = num6 + 24;
		num5 = num5 - 1;
	}

	while (num6 > 23)
	{
		num6 = num6 - 24;
		num5 = num5 + 1;
	}

	while (num5 < 0)
	{
		while (num4 < 0)
		{
			num4 = num4 + 12;
			num3 = num3 - 1;
		}
	
		num5 = num5 + func_176(num, num2);
		num4 = num4 - 1;
		num = BUILTIN::ROUND(func_178(BUILTIN::TO_FLOAT(num + 1), 0f, 12f));
	}

	while (num4 < 0)
	{
		num4 = num4 + 12;
		num3 = num3 - 1;
	}

	while (num4 > 12)
	{
		num4 = num4 - 12;
		num3 = num3 + 1;
	}

	*uParam2 = num8;
	*uParam3 = num7;
	*uParam4 = num6;
	*uParam5 = num5;
	*uParam6 = num4;
	*uParam7 = num3;
	return;
}

BOOL func_141(Player plParam0) // Position - 0x3322 Signature - 22 01 06
{
	Ped playerPed;
	int scenarioPointTypePedIsUsing;
	int num;

	playerPed = PLAYER::GET_PLAYER_PED(plParam0);
	scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(playerPed);
	num = scenarioPointTypePedIsUsing;

	switch (num)
	{
		case joaat("world_player_camp_fire_kneel4"):
		case joaat("world_player_camp_fire_kneel3"):
		case joaat("world_player_camp_fire_kneel1"):
		case joaat("world_player_camp_fire_kneel2"):
			return true;
	}

	return false;
}

BOOL func_142(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3366 Signature - 22 03 07 00 00 66 00 03
{
	Player player;
	Player playerIndex;

	player = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);

	if (player != 255)
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(player))
			return false;

	playerIndex = NETWORK::NETWORK_GET_PLAYER_INDEX(player);

	if (bParam2 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerIndex))
		return false;

	if (bParam1 && PLAYER::IS_PLAYER_DEAD(playerIndex))
		return false;

	return true;
}

BOOL func_143(Player plParam0, var uParam1) // Position - 0x33BD Signature - 22 02 08
{
	Vector3 vector;
	int scenario;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	if (!func_179(plParam0, &vector))
		return false;

	if (_IS_NULL_VECTOR(vector))
		return false;

	scenario = TASK::FIND_SCENARIO_OF_TYPE_HASH(vector, joaat("world_animal_dog_player_tent_tg"), 5.5f, 0, false);

	if (TASK::DOES_SCENARIO_POINT_EXIST(scenario))
	{
		*uParam1 = scenario;
		return true;
	}

	return false;
}

Vector3 func_144(Player plParam0) // Position - 0x341B Signature - 22 01 03 00 00 66 00 03 05 00 33
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

var func_145(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x342F Signature - 22 0C 1A
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

	if (func_180() != 0)
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_181());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_181());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_181());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_182(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_183(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_184(i) != 1)
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
					if (!func_185(player2))
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

int func_146() // Position - 0x37C2 Signature - 22 00 02 00 00 5D DD
{
	return Global_1102813.f_3672;
}

void func_147(var uParam0) // Position - 0x37D1 Signature - 22 01 03 00 00 2F 66 00 32 2F 66 00 6C 01 2F 66 00 6C 02 73
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
	return;
}

void func_148(int iParam0, var uParam1, int* piParam2) // Position - 0x37F9 Signature - 22 03 19 00 00 09
{
	struct<20> eventData;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 20))
		return;

	switch (eventData.f_4)
	{
		case 1:
			func_186(&eventData, uParam1, piParam2);
			break;
	
		case 3:
			func_187(&eventData, piParam2);
			break;
	
		case 4:
			func_188(&eventData, uParam1, piParam2);
			break;
	
		case 5:
			func_189(&eventData, uParam1);
			break;
	
		case 6:
			func_190(&eventData, uParam1);
			break;
	}

	return;
}

float func_149(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x3876 Signature - 22 07 0C
{
	float num;
	float num2;
	float num3;

	num2 = fParam3 - uParam0;
	num3 = fParam3.f_1 - uParam0.f_1;

	if (num3 != 0f)
		num = MISC::ATAN2(num2, num3);
	else if (num2 < 0f)
		num = -90f;
	else
		num = 90f;

	if (iParam6 == 1)
	{
		num = num * -1f;
	
		if (num < 0f)
			num = num + 360f;
	}

	return num;
}

var func_150(BOOL bParam0, var uParam1, var uParam2) // Position - 0x38DB Signature - 22 03 05 00 00 66 00 8B 08 00 66 01 50 03 01 68 05 00 66 02 50 03 01 22 01
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

var func_151(var uParam0) // Position - 0x38F2 Signature - 22 01 03 00 00 66 00 76 50 01 01 22 00
{
	return *uParam0;
}

Vector3 func_152() // Position - 0x38FD Signature - 22 00 02 00 00 73
{
	return 0f, 0f, 0f;
}

void func_153(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x3908 Signature - 22 04 06 00 00 1D
{
	uParam0->f_3.f_3 = { uParam1 };
	return;
}

void func_154(var uParam0, int iParam1) // Position - 0x391C Signature - 22 02 04 00 00 66 01 66
{
	*uParam0 = iParam1;
	return;
}

BOOL func_155(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x3929 Signature - 22 03 07 00 00 1D 4B 00 2D 03 0D 00 4D
{
	var groundZ;
	BOOL isSphereVisible;

	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
		return false;

	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
		return false;

	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0 + { 1f, 0f, 0f }, &groundZ, false))
		return false;

	isSphereVisible = CAM::IS_SPHERE_VISIBLE(vParam0, 5f);

	if (isSphereVisible)
		return false;

	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, 7f))
		return false;

	if (VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 15f, 0, 0, 0))
		return false;

	return true;
}

BOOL func_156(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11) // Position - 0x39A7 Signature - 22 0C 0F
{
	int num;

	switch (*uParam3)
	{
		case 0:
			if (uParam3->f_2 > 4)
			{
				*uParam4 = 1;
				return false;
			}
		
			uParam3->f_1 = TASK::_0x74F0209674864CBD();
			func_191(&(uParam3->f_1), uParam3->f_2, uParam0, iParam5, iParam7, iParam8, iParam9, iParam10, iParam11);
		
			if (!TASK::_0x1AC5A8AB50CFAA33(uParam3->f_1))
			{
			}
			else
			{
				func_192(&(uParam3->f_1), iParam5, uParam0);
			
				if (!_IS_NULL_VECTOR(uParam3->f_6))
					TASK::_0xCE4E669400E5F8AA(uParam3->f_1, func_193(uParam3->f_6));
			
				TASK::_0x2B8AF29A78024BD3(uParam3->f_1);
			}
		
			*uParam3 = 3;
			break;
	
		case 3:
			if (!TASK::_0x1AC5A8AB50CFAA33(uParam3->f_1))
				num = 4;
			else
				num = TASK::_0x0365000D8BF86531(&(uParam3->f_1));
		
			switch (num)
			{
				case 3:
					uParam3->f_3 = { TASK::_0x865732725536EE39(&(uParam3->f_1)) };
					*uParam3 = 4;
				
					if (!bParam6)
						return true;
					break;
			
				case 4:
					if (bParam6 && uParam3->f_2 < 4)
					{
						uParam3->f_2 = uParam3->f_2 + 1;
						*uParam3 = 0;
					}
					else
					{
						*uParam4 = 1;
					}
					break;
			}
			break;
	
		case 4:
			return true;
	}

	return false;
}

BOOL func_157(int iParam0, int iParam1) // Position - 0x3ACC Signature - 22 02 04 00 00 66 00 66 01 69
{
	return iParam0 && iParam1 != false;
}

float func_158(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x3ADB Signature - 22 06 08
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

const char* func_159(const char* sParam0) // Position - 0x3AF9 Signature - 22 01 03 00 00 66 00 50 01 01 22 02 04 00 00 66 00 27
{
	return sParam0;
}

void func_160(var uParam0, int iParam1) // Position - 0x3B03 Signature - 22 02 04 00 00 66 00 27 0A 66 01 39 E4 20 00 8B 03 00 50 02 00 66 00 80 0A 66 01 39 4C 21 00 50 02 00 22 00
{
	if (func_92(uParam0->f_10, iParam1))
		return;

	func_95(&(uParam0->f_10), iParam1);
	return;
}

BOOL func_161() // Position - 0x3B25 Signature - 22 00 03 00 00 39 09
{
	int i;

	if (func_194())
		return true;

	for (i = 0; i < 32; i = i + 1)
	{
		if (Global_1904402[i] != 0)
			return true;
	}

	return false;
}

BOOL func_162(BOOL bParam0) // Position - 0x3B5C Signature - 22 01 03 00 00 39
{
	if (func_195())
		return false;

	if (!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADING_OUT())
		return false;

	if (func_196(&(Global_1102813.f_4), 1, 5))
		return false;

	if (!bParam0)
		if (!func_161())
			return false;

	if (Global_13 || Global_1048584 || func_197())
		return false;

	if (!func_198())
		return false;

	if (func_199())
		return false;

	if (MISC::_IS_MISSION_CREATOR_ACTIVE())
		return false;

	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (Global_1915656.f_20638 && Global_1915656.f_20241.f_43 == 2 && Global_1940252.f_2)
		return false;

	if (func_200())
		return false;

	return true;
}

void func_163(int iParam0, var uParam1, var uParam2) // Position - 0x3C34 Signature - 22 03 06 00 00 66 00 67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_164(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x3C50 Signature - 22 04 06 00 00 66 01 2F
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_201(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_202(iParam0))
		return false;

	if (func_203(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_165(iParam0, 1) || func_204(32768))
		if (!func_165(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_198())
		return false;

	return true;
}

BOOL func_165(int iParam0, int iParam1) // Position - 0x3CF2 Signature - 22 02 04 00 00 66 00 5D
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

void func_166(int iParam0, int iParam1) // Position - 0x3D0B Signature - 22 02 05 00 00 66 00 5D
{
	int address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

BOOL func_167(ePedType eptParam0) // Position - 0x3D2F Signature - 22 01 03 00 00 66 00 2F 15
{
	if (eptParam0 == PED_TYPE_PLAYER_0)
		return true;

	STREAMING::REQUEST_MODEL(eptParam0, false);
	return STREAMING::HAS_MODEL_LOADED(eptParam0);
}

Ped func_168(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, int iParam8, BOOL bParam9) // Position - 0x3D4E Signature - 22 0A
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);

	if (bParam5)
		PED::_SET_RANDOM_OUTFIT_VARIATION(ped, true);

	return ped;
}

BOOL func_169(Hash hParam0, Hash hParam1) // Position - 0x3D7A Signature - 22 02 04 00 00 66 00 2F 39
{
	if (!func_86(hParam0, 0))
		return func_206(func_205(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return true;

	return false;
}

int func_170(int iParam0) // Position - 0x3DBB Signature - 22 01 03 00 00 66 00 2F 03
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_171(int iParam0) // Position - 0x3DCD Signature - 22 01 03 00 00 66 00 4D
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_172(int iParam0) // Position - 0x3DDF Signature - 22 01 03 00 00 66 00 6D 0C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_173(int iParam0) // Position - 0x3DF2 Signature - 22 01 03 00 00 66 00 6D 1A
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_174(int iParam0) // Position - 0x3E17 Signature - 22 01 03 00 00 66 00 6D 16
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_175(int iParam0) // Position - 0x3E2A Signature - 22 01 03 00 00 66 00 6D 11
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_176(int iParam0, int iParam1) // Position - 0x3E3D Signature - 22 02 04 00 00 66 01 2F
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		default:
		
	}

	return 30;
}

BOOL func_177(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3ED7 Signature - 22 03 05 00 00 66 02
{
	if (bParam2)
		if (!func_139(iParam1) || !func_139(iParam0))
			return true;

	return iParam0 > iParam1;
}

float func_178(float fParam0, float fParam1, float fParam2) // Position - 0x3F04 Signature - 22 03 06 00 00 66 01
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)BUILTIN::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

BOOL func_179(Player plParam0, var uParam1) // Position - 0x3F46 Signature - 22 02 05 00 00 66 00 03 05 00 D0
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	player = plParam0;
	*uParam1 = { Global_1144526[player /*83*/].f_38.f_8 };
	return true;
}

int func_180() // Position - 0x3F73 Signature - 22 00 02 00 00 5D FD 0B 10 27 0C
{
	return Global_1051645.f_12;
}

char* func_181() // Position - 0x3F81 Signature - 22 00 02 00 00 6D
{
	return "unnamed";
}

BOOL func_182(int iParam0) // Position - 0x3F8C Signature - 22 01 04 00 00 2F 67 03 66 00
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

BOOL func_183(int iParam0) // Position - 0x401D Signature - 22 01 03 00 00 5D 17
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_208(36, iParam0);
}

int func_184(int iParam0) // Position - 0x403B Signature - 22 01 03 00 00 66 00 6D FF 15 09
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_185(Player plParam0) // Position - 0x4086 Signature - 22 01 03 00 00 03
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_209(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_210(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

void func_186(var uParam0, var uParam1, int* piParam2) // Position - 0x40CB Signature - 22 03 07 00 00 66 00 27 07
{
	Ped ped;
	BOOL flag;

	if (uParam0->f_7 != uParam1->f_2)
		return;

	ped = NETWORK::NET_TO_PED(uParam1->f_1);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	func_211(piParam2, uParam0->f_8);
	flag = MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(ped);
	func_117(piParam2, 1);
	func_117(piParam2, 3);
	func_32(piParam2, 2);
	func_32(piParam2, 4);
	return;
}

void func_187(var uParam0, int* piParam1) // Position - 0x4129 Signature - 22 02 05 00 00 03
{
	Player player;

	player = PLAYER::PLAYER_ID();

	if (player != uParam0->f_7)
		return;

	func_110(&(piParam1->f_10));
	func_32(piParam1, 5);
	return;
}

void func_188(var uParam0, var uParam1, int* piParam2) // Position - 0x4152 Signature - 22 03 05 00 00 66 00 27
{
	if (uParam0->f_7 != uParam1->f_2)
		return;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		return;

	func_110(&(piParam2->f_10));
	func_153(&(piParam2->f_10), uParam0->f_16);
	func_135(uParam1, 1);
	return;
}

void func_189(var uParam0, var uParam1) // Position - 0x4190 Signature - 22 02 06 00 00 03 01 00 CC
{
	Player player;
	BOOL flag;

	player = PLAYER::PLAYER_ID();

	if (player != uParam0->f_7)
		return;

	flag = UNLOCK::UNLOCK_IS_UNLOCKED(uParam0->f_6);
	func_212(uParam1->f_2, 451736625, flag);
	return;
}

void func_190(var uParam0, var uParam1) // Position - 0x41C3 Signature - 22 02 04 00 00 66 00 27 07
{
	if (uParam0->f_7 != uParam1->f_2)
		return;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		return;

	if (uParam0->f_19)
		func_135(uParam1, 2);
	else
		func_135(uParam1, 3);

	return;
}

void func_191(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x41FC Signature - 22 0B 0F
{
	int num;
	int num2;

	if (!_IS_NULL_VECTOR(uParam2))
		TASK::_0x2064B33F6E6B92D4(*uParam0, uParam2);

	TASK::_0x9B6A58FDB0024F12(*uParam0, iParam7);

	switch (iParam5)
	{
		case 27:
			TASK::_0xB8E3486D107F4194(*uParam0, 90f);
			TASK::_0x827A58CED9D4D5B4(*uParam0, 180f);
			break;
	
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
			break;
	
		case 42:
			TASK::_0xB8E3486D107F4194(*uParam0, iParam10);
			break;
	
		case 48:
			TASK::_0x827A58CED9D4D5B4(*uParam0, iParam6);
			break;
	
		default:
			TASK::_0x827A58CED9D4D5B4(*uParam0, iParam6);
		
			if (iParam10 != 0f)
				TASK::_0xB8E3486D107F4194(*uParam0, iParam10);
			break;
	}

	switch (iParam5)
	{
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 18:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 32:
		case 33:
		case 34:
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
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
			TASK::_0xE9225354FB7437A7(*uParam0, 1);
			break;
	}

	switch (iParam5)
	{
		case 12:
		case 13:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 8192);
			break;
	}

	switch (iParam5)
	{
		case 2:
		case 3:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 5);
			break;
	}

	switch (iParam5)
	{
		case 35:
		case 43:
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			break;
	}

	if (iParam8 == -0.01f)
	{
		switch (iParam5)
		{
			case 0:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 55f);
				break;
		
			case 2:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
		
			case 4:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 2.5f);
				break;
		
			case 5:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
		
			case 6:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 7:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 8:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 9:
				TASK::_0x954451EA2D2120FB(*uParam0, 12f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 18f);
				break;
		
			case 10:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 11:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				break;
		
			case 12:
			case 13:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, (80f - 40f) / 2f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 0f);
				break;
		
			case 14:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
		
			case 15:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 40f);
				break;
		
			case 16:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 18:
				TASK::_0x954451EA2D2120FB(*uParam0, 1f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 20f);
				break;
		
			case 20:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 21:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 22:
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 23:
			case 24:
			case 25:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 26:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
		
			case 27:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
		
			case 28:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 50f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 45f);
				break;
		
			case 29:
				TASK::_0x954451EA2D2120FB(*uParam0, 15f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 25f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 20f);
				break;
		
			case 30:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
		
			case 31:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 140f);
				break;
		
			case 32:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 125f);
				break;
		
			case 33:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 34:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 35:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
		
			case 36:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_213(10f, 40f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(30f, 60f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_213(40f, 80f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(50f, 90f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_213(30f, 60f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(50f, 80f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_213(0f, 10f, 1f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(5f, 15f, 1f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_213(60f, 120f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(100f, 130f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_213(10f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(25f, 50f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 42:
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_213(50f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(65f, 85f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_213(95f, 90f, 80f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_213(95f, 90f, 80f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(125f, 115f, 100f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 60f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_213(60f, 80f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(75f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 46:
				num = func_214(uParam2, true);
				num2 = func_215(uParam2);
			
				if (num2 == 15 || num2 == 14 || num2 == 13 || num2 == 9 && num == -1 || num2 == 4 && num == -1)
				{
					TASK::_0x2EB977293923C723(*uParam0, func_213(100f, 80f, -5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, func_213(100f, 80f, -5f, iParam1));
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(110f, 160f, 12.5f, iParam1));
				}
				else
				{
					TASK::_0x2EB977293923C723(*uParam0, func_213(100f, 70f, -7.5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, 70f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(80f, 150f, 17.5f, iParam1));
				}
			
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
			
				if (iParam1 <= 2)
				{
					TASK::_0x19BC99C678FBA139(*uParam0, 2, 0);
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
		
			case 47:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(50f, 90f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
			
				if (iParam1 <= 2)
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				break;
		
			case 48:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, func_213(100f, 70f, -7.5f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(150f, 190f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
			
				if (iParam1 <= 2)
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				break;
		
			case 49:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(10f, 50f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 50:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_213(30f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(65f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 51:
				TASK::_0x2EB977293923C723(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_213(25f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(40f, 50f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 8f);
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 52:
				TASK::_0x2EB977293923C723(*uParam0, 0f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(40f, 100f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			default:
				if (iParam1 == 0)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 1f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 5f);
				}
				else if (iParam1 == 1)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 5f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				}
				else if (iParam1 == 2)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 15f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 35f);
				}
				else
				{
					iParam1 = 3;
					TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
					TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
					TASK::_0x954451EA2D2120FB(*uParam0, 35f);
				
					if (iParam5 != 19)
						TASK::_0x0F4F6C4CE471259D(*uParam0, 160f);
					else
						TASK::_0x0F4F6C4CE471259D(*uParam0, 65f);
				}
				break;
		}
	}
	else
	{
		TASK::_0x954451EA2D2120FB(*uParam0, iParam8);
		TASK::_0x0F4F6C4CE471259D(*uParam0, iParam9);
	}

	return;
}

void func_192(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4) // Position - 0x500A Signature - 22 05 07 00 00 66
{
	switch (iParam1)
	{
		case 0:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 1:
		case 19:
		case 20:
		case 45:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 2:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
	
		case 3:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
	
		case 4:
		case 5:
		case 6:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 7:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 8:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 9:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 10:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 11:
		case 30:
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 12:
		case 13:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
			TASK::_0x450080DDEDB91258(*uParam0, 25f);
			break;
	
		case 14:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 15:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
	
		case 16:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 5, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 17:
			TASK::_0x2EB977293923C723(*uParam0, 40f);
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 18:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 21:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
	
		case 22:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 23:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 24:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 25:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 26:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 27:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 74, 0);
			break;
	
		case 28:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
	
		case 29:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 12, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 31:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
	
		case 32:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
	
		case 33:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 3, 0);
			break;
	
		case 34:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 35:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
	
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			break;
	
		case 41:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			break;
	
		case 42:
		case 44:
		case 49:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
	
		case 43:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 5, 0);
			break;
	
		case 46:
		case 47:
		case 48:
			if (func_214(uParam2, true) == 5)
			{
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 53, 1, 0);
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 74, 1, 0);
			}
			else
			{
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			}
		
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
	
		case 50:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
	
		case 51:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			break;
	
		case 52:
			break;
	
		case 53:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 9, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			break;
	}

	return;
}

Vector3 func_193(float fParam0, var uParam1, var uParam2) // Position - 0x57CA Signature - 22 03 07 00 00 1D 4B 00 2D 03 0D 00 38
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

BOOL func_194() // Position - 0x5809 Signature - 22 00 02 00 00 5D 12
{
	return Global_1904402.f_8872 != -1;
}

BOOL func_195() // Position - 0x581A Signature - 22 00 03 00 00 09
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) <= 4;
}

BOOL func_196(Any* panParam0, int iParam1, int iParam2) // Position - 0x583A Signature - 22 03 07 00 00 66 01
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

BOOL func_197() // Position - 0x5871 Signature - 22 00 02 00 00 5D 77
{
	return Global_1072759.f_28644.f_23.f_3 != 0;
}

BOOL func_198() // Position - 0x5886 Signature - 22 00 02 00 00 39 1C
{
	if (!func_216())
		return false;

	return Global_1904402.f_8873;
}

BOOL func_199() // Position - 0x58A1 Signature - 22 00 02 00 00 5D 3A
{
	return Global_1896762.f_352;
}

BOOL func_200() // Position - 0x58B0 Signature - 22 00 03 00 00 39 1C
{
	BOOL num;

	if (!func_216())
		return false;

	num = Global_1904402.f_8874;
	Global_1904402.f_8874 = 0;
	return num;
}

BOOL func_201(int iParam0, int iParam1) // Position - 0x58D7 Signature - 22 02 04 00 00 66 00 87
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_202(int iParam0) // Position - 0x58EF Signature - 22 01 03 00 00 66 00 42
{
	if (func_165(iParam0, 4))
		return false;

	return true;
}

BOOL func_203(int iParam0) // Position - 0x5906 Signature - 22 01 07
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

BOOL func_204(int iParam0) // Position - 0x59D2 Signature - 22 01 03 00 00 5D 00
{
	return Global_1572864.f_3 && iParam0 != false;
}

Hash func_205(Hash hParam0) // Position - 0x59E5 Signature - 22 01 03 00 00 66 00 50 01 01 22 02 04 00 00 66 00 11
{
	return hParam0;
}

BOOL func_206(Hash hParam0, Hash hParam1) // Position - 0x59EF Signature - 22 02 04 00 00 66 00 11
{
	if (!func_217(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

var func_207(BOOL bParam0, var uParam1, var uParam2) // Position - 0x5A25 Signature - 22 03 05 00 00 66 00 8B 08 00 66 01 50 03 01 68 05 00 66 02 50 03 01 22 02
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_208(int iParam0, int iParam1) // Position - 0x5A3C Signature - 22 02 05 00 00 66 00 67
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_196(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_146())
		return func_196(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_196(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_209(Player plParam0) // Position - 0x5AB0 Signature - 22 01 03 00 00 5D 77
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_210(Player plParam0) // Position - 0x5ACD Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 32
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_218(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_219(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

void func_211(int* piParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0x5B50 Signature - 22 09
{
	piParam0->f_1 = { uParam1 };
	return;
}

void func_212(var uParam0, int iParam1, BOOL bParam2) // Position - 0x5B64 Signature - 22 03 19 00 00 4D
{
	var unk;

	unk.f_4 = 6;
	unk.f_7 = uParam0;
	unk.f_6 = iParam1;
	unk.f_19 = bParam2;
	func_94(unk, func_93(0, 8));
	return;
}

float func_213(float fParam0, float fParam1, float fParam2, int iParam3) // Position - 0x5B93 Signature - 22 04 07 00 00 66 00 67
{
	float num;

	num = fParam0;
	num = num + (fParam2 * (float)iParam3);

	if (num > fParam1)
		num = fParam1;

	return num;
}

int func_214(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x5BB8 Signature - 22 04 07 00 00 39
{
	int num;

	num = func_220();

	if (func_221(num))
		if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[num /*36*/].f_4) && VOLUME::IS_POINT_IN_VOLUME(Global_1887363[num /*36*/].f_4, vParam0))
			return num;

	return func_222(vParam0, bParam3);
}

int func_215(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x5C06 Signature - 22 03 05 00 00 1D
{
	return func_223(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

BOOL func_216() // Position - 0x5C1C Signature - 22 00 02 00 00 03 01
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_217(Hash hParam0, int iParam1) // Position - 0x5C30 Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 5D
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

void func_218(Player plParam0) // Position - 0x5C4A Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 77
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_219(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_219(Player plParam0) // Position - 0x5CB6 Signature - 22 01 03 00 00 66 00 5D
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

int func_220() // Position - 0x5CF1 Signature - 22 00 02 00 00 5D EB
{
	return Global_1893611.f_2;
}

BOOL func_221(int iParam0) // Position - 0x5CFF Signature - 22 01 03 00 00 66 00 2F 7E
{
	return iParam0 >= 0 && iParam0 <= 150;
}

int func_222(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x5D15 Signature - 22 04 0B 00 00 1D
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;

	num = func_224(vParam0);
	num2 = -1;

	if (Global_1893594[num] > 0)
	{
		num3 = Global_1893594[num] - 1;
		flag = false;
	
		while (num3 >= 0 && !flag)
		{
			num4 = Global_1892777[num /*51*/][num3];
		
			if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[num4 /*36*/].f_4))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1887363[num4 /*36*/].f_4, vParam0))
				{
					switch (Global_1887363[num4 /*36*/].f_21)
					{
						case 5:
							if (!bParam3)
							{
								num2 = num4;
								flag = true;
							}
							break;
					
						default:
							num2 = num4;
							flag = true;
							break;
					}
				}
			}
		
			num3 = num3 - 1;
		}
	}

	if (num2 != -1)
	{
	}

	return num2;
}

int func_223(Hash hParam0) // Position - 0x5DCC Signature - 22 01 03 00 00 66 00 3C
{
	switch (hParam0)
	{
		case joaat("riobravo"):
			return 14;
	
		case joaat("GaptoothRidge"):
			return 13;
	
		case joaat("scarlettmeadows"):
			return 11;
	
		case joaat("GuarmaD"):
			return 8;
	
		case joaat("GrizzliesEast"):
			return 6;
	
		case joaat("ChollaSprings"):
			return 15;
	
		case joaat("heartlands"):
			return 9;
	
		case joaat("roanoke"):
			return 10;
	
		case joaat("greatplains"):
			return 4;
	
		case joaat("bigvalley"):
			return 1;
	
		case joaat("HennigansStead"):
			return 16;
	
		case joaat("BluewaterMarsh"):
			return 2;
	
		case joaat("GrizzliesWest"):
			return 7;
	
		case joaat("talltrees"):
			return 12;
	
		case joaat("Cumberland"):
			return 3;
	
		case joaat("bayounwa"):
			return 0;
	
		default:
		
	}

	return -1;
}

int func_224(var uParam0, var uParam1, var uParam2) // Position - 0x5E86 Signature - 22 03 06 00 00 1D
{
	int num;

	num = func_225(uParam0, 0f, 0f, 0, 2);
	return func_225(uParam0, Global_1892764[num /*3*/].f_1, Global_1892764[num /*3*/].f_2, Global_1892764[num /*3*/], 4);
}

int func_225(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6) // Position - 0x5EC1 Signature - 22 07 09
{
	if (fParam0 < fParam3)
		if (fParam0.f_1 < fParam4)
			return iParam5 + iParam6;
		else
			return iParam5;

	if (fParam0.f_1 < fParam4)
		return iParam5 + iParam6 + 1;

	return iParam5 + 1;
}

