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
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 39 37
{
	func_1();

	while (!func_2())
	{
		func_3();
		BUILTIN::WAIT(0);
	}

	while (!SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(1440))
	{
		BUILTIN::WAIT(0);
	}

	func_4();
	return;
}

void func_1() // Position - 0x37 Signature - 22 00 03
{
	int gameTimer;

	gameTimer = MISC::GET_GAME_TIMER();
	func_5(32, -1);
	func_6();

	if (func_7())
		func_4();

	func_8(&Global_1148506);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1148506, 112, 6);
	func_9(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1148506), 112, "g_mpTrainManagerHostData");
	func_10(&Global_1148618);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1148618, 417, 7);
	func_11(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1148618[0 /*13*/]), 417, "g_mpTrainManagerPlayerData");
	func_12(&Global_1149035);
	func_13(false);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	return;
}

BOOL func_2() // Position - 0xBC Signature - 22 00 02 00 00 2F 2F
{
	if (func_14(false, false))
		return true;

	return false;
}

void func_3() // Position - 0xD2 Signature - 22 00 02 00 00 03 01 00 14
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		func_15();

	func_16();
	return;
}

void func_4() // Position - 0xE9 Signature - 22 00 02 00 00 39 6F
{
	func_17();
	return;
}

void func_5(int iParam0, int iParam1) // Position - 0xF5 Signature - 22 02 04 00 00 03 01 00 38
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_17();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	return;
}

int func_6() // Position - 0x112 Signature - 22 00 05 00
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
			func_17();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_17();
					break;
			
				case 2:
					func_17();
					break;
			
				case 3:
					func_17();
					break;
			
				case 4:
					func_17();
					break;
			
				default:
					break;
			}
		}
	
		if (scriptStatus == 3 || scriptStatus == 4 || scriptStatus == 5 || scriptStatus == 6)
			func_17();
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			func_17();
	
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
			func_17();
	
		if (func_18() == 0)
			if (func_19())
				func_17();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_17();

	return 1;
}

BOOL func_7() // Position - 0x223 Signature - 22 00 02 00 00 5D 17 00 18 27 0A
{
	if (Global_1572887.f_10)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	return false;
}

void func_8(int* piParam0) // Position - 0x251 Signature - 22 01 73
{
	var unk;

	unk.f_2 = 3;
	unk.f_2.f_1.f_7 = -1;
	unk.f_2.f_1.f_7.f_1 = -1;
	unk.f_2.f_1.f_18.f_7 = -1;
	unk.f_2.f_1.f_18.f_7.f_1 = -1;
	unk.f_2.f_1.f_18.f_18.f_7 = -1;
	unk.f_2.f_1.f_18.f_18.f_7.f_1 = -1;
	unk.f_57 = 3;
	unk.f_57.f_1.f_7 = -1;
	unk.f_57.f_1.f_7.f_1 = -1;
	unk.f_57.f_1.f_18.f_7 = -1;
	unk.f_57.f_1.f_18.f_7.f_1 = -1;
	unk.f_57.f_1.f_18.f_18.f_7 = -1;
	unk.f_57.f_1.f_18.f_18.f_7.f_1 = -1;
	*piParam0 = { unk };
	return;
}

int func_9(int iParam0, int iParam1, char* sParam2) // Position - 0x2DA Signature - 22 03 05 00 00 09 50 03 01 22 01 04
{
	return 1;
}

void func_10(Any anParam0) // Position - 0x2E3 Signature - 22 01 04 00 00 2F 67 03 2F
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_20(&anParam0->[i /*13*/]);
	}

	return;
}

int func_11(int iParam0, int iParam1, char* sParam2) // Position - 0x30B Signature - 22 03 05 00 00 09 50 03 01 22 01 8C
{
	return 1;
}

void func_12(var uParam0) // Position - 0x314 Signature - 22 01 8C
{
	var unk;

	unk.f_2 = 3;
	unk.f_2.f_1.f_12 = 15;
	unk.f_2.f_1.f_43.f_12 = 15;
	unk.f_2.f_1.f_43.f_43.f_12 = 15;
	unk.f_132 = 4;
	*uParam0 = { unk };
	return;
}

void func_13(BOOL bParam0) // Position - 0x354 Signature - 22 01 0D
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
					func_17();
					break;
			
				case 2:
					func_17();
					break;
			
				case 3:
					func_17();
					break;
			
				case 4:
					func_17();
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
			func_17();
			return;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

BOOL func_14(BOOL bParam0, BOOL bParam1) // Position - 0x41D Signature - 22 02 05 00 00 5D
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

void func_15() // Position - 0x4FD Signature - 22 00 02 00 00 85 5A 86 11 3C
{
	switch (Global_1148506)
	{
		case 0:
			func_21();
			break;
	
		case 1:
			func_22();
			break;
	
		case 2:
			func_23();
			break;
	}

	return;
}

void func_16() // Position - 0x536 Signature - 22 00 02 00 00 85 6B
{
	switch (Global_1149035)
	{
		case 0:
			func_24();
			break;
	
		case 1:
			func_25();
			break;
	
		case 2:
			func_26();
			break;
	}

	return;
}

void func_17() // Position - 0x56F Signature - 22 00 02 00 00 03 00
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

int func_18() // Position - 0x57B Signature - 22 00 02 00 00 5D 17 00 18 27 0E 50
{
	return Global_1572887.f_14;
}

BOOL func_19() // Position - 0x589 Signature - 22 00 02 00 00 5D FD 0B 10 27 08
{
	return Global_1051645.f_8;
}

void func_20(var uParam0) // Position - 0x597 Signature - 22 01 10
{
	var unk;

	unk = 3;
	*uParam0 = { unk };
	return;
}

void func_21() // Position - 0x5B0 Signature - 22 00 02 00 00 39 3A
{
	if (func_27())
		func_28(2);

	func_29();
	func_30(1);
	return;
}

void func_22() // Position - 0x5CE Signature - 22 00 02 00 00 39 BE 06 00 8B
{
	if (func_31())
		func_30(2);

	return;
}

void func_23() // Position - 0x5E2 Signature - 22 00 02 00 00 39 DF
{
	func_32();
	return;
}

void func_24() // Position - 0x5EE Signature - 22 00 02 00 00 85 5A 86 11 2F
{
	if (Global_1148506 > 0)
	{
		func_33();
		func_34(1);
	}

	return;
}

void func_25() // Position - 0x607 Signature - 22 00 02 00 00 39 BE 06 00 6A
{
	if (func_31() && Global_1148506 > 1)
		func_34(2);

	return;
}

void func_26() // Position - 0x626 Signature - 22 00 02 00 00 39 E3
{
	func_35();
	func_36();
	func_37();
	return;
}

BOOL func_27() // Position - 0x63A Signature - 22 00 02 00 00 2F 21
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
		return true;

	return false;
}

void func_28(int iParam0) // Position - 0x65B Signature - 22 01 03 00 00 5D 5A 86 11 80
{
	func_38(&(Global_1148506.f_1), iParam0);
	return;
}

int func_29() // Position - 0x66F Signature - 22 00 1A
{
	var unk;

	if (!func_39())
	{
		unk.f_12 = -1;
		unk.f_12.f_1 = -1;
		unk.f_4 = 12;
		return func_41(&unk, func_40(0, 8));
	}

	return 1;
}

void func_30(int iParam0) // Position - 0x6A7 Signature - 22 01 03 00 00 85 5A
{
	if (Global_1148506 != iParam0)
		Global_1148506 = iParam0;

	return;
}

BOOL func_31() // Position - 0x6BE Signature - 22 00 02 00 00 39 33
{
	if (!func_42())
		return false;

	if (!func_43())
		return false;

	return true;
}

void func_32() // Position - 0x6DF Signature - 22 00 02 00 00 2F 5D
{
	if (Global_1149035.f_132[0] >= 3)
		Global_1149035.f_132[0] = 0;

	func_44(Global_1149035.f_132[0]);
	Global_1149035.f_132[0] = Global_1149035.f_132[0] + 1;
	return;
}

void func_33() // Position - 0x71F Signature - 22 00 02 00 00 5D 17 00 18 27 07
{
	if (!Global_1572887.f_7)
		return;

	if (Global_2883584)
		return;

	if (Global_1048577)
		return;

	if (func_45(2))
		func_46(joaat("FLATNECK_TO_VALENTINE"), true);
	else
		func_46(joaat("FLATNECK_TO_VALENTINE"), false);

	func_46(1548096282, true);
	func_46(-245962931, true);
	func_46(-500348165, true);
	func_46(joaat("EMERALD_RANCH_DEAD_END_TO_RHODES"), true);
	func_46(-1420724065, true);
	func_46(joaat("macfarlanes_ranch"), true);
	func_46(1603023256, true);
	func_46(joaat("BACCHUS_STATION"), true);
	func_46(joaat("APPLESEED_TIMBER_FORK"), true);
	return;
}

void func_34(int iParam0) // Position - 0x7CC Signature - 22 01 03 00 00 85 6B
{
	if (Global_1149035 != iParam0)
		Global_1149035 = iParam0;

	return;
}

void func_35() // Position - 0x7E3 Signature - 22 00 02 00 00 6F
{
	if (func_47(64, 255) || Global_1901671.f_319.f_277 > false && !func_48())
		if (!func_49(1))
			func_50(1);
	else if (func_49(1))
		func_51(1);

	return;
}

void func_36() // Position - 0x82F Signature - 22 00 02 00 00 03 01 00 10 05 8B 03
{
	if (!NETWORK::NETWORK_IS_HOST())
		return;

	Global_1149035.f_132[2] = Global_1149035.f_132[2] + 1;

	if (Global_1149035.f_132[2] >= 300)
	{
		func_33();
		Global_1149035.f_132[2] = 0;
	}

	return;
}

void func_37() // Position - 0x873 Signature - 22 00 02 00 00 09
{
	if (Global_1149035.f_132[1] >= 3)
		Global_1149035.f_132[1] = 0;

	func_52(Global_1149035.f_132[1]);
	Global_1149035.f_132[1] = Global_1149035.f_132[1] + 1;
	return;
}

void func_38(BOOL bParam0, int iParam1) // Position - 0x8B3 Signature - 22 02 04 00 00 66 00 66 01 39 0F
{
	func_53(bParam0, iParam1);
	return;
}

BOOL func_39() // Position - 0x8C3 Signature - 22 00 02 00 00 03 01 00 10 05 8B 04
{
	if (!NETWORK::NETWORK_IS_HOST())
		return false;

	VEHICLE::_SET_ALL_JUNCTIONS_CLEARED();
	return true;
}

var func_40(int iParam0, int iParam1) // Position - 0x8DC Signature - 22 02 04 00 00 73
{
	return func_54(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

int func_41(Any* panParam0, var uParam1) // Position - 0x8FA Signature - 22 02 04 00 00 4B
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return 0;

	*panParam0 = 20;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 24, 0, &uParam1);
	return 1;
}

BOOL func_42() // Position - 0x933 Signature - 22 00 02 00 00 5D 17 00 18 27 0E 08 15 04 00 2F 50 00 01 5D 77 5E 10 27 03
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_3;
}

BOOL func_43() // Position - 0x94F Signature - 22 00 02 00 00 5D 17 00 18 27 0E 08 15 04 00 2F 50 00 01 5D 77 5E 10 27 05
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_5;
}

void func_44(int iParam0) // Position - 0x96B Signature - 22 01 03 00 00 66 00 5D 5A 86 11 80 02 17 12 3C
{
	switch (Global_1148506.f_2[iParam0 /*18*/])
	{
		case 0:
			func_55(iParam0);
			break;
	
		case 1:
			func_56(iParam0);
			break;
	
		case 3:
			func_57(iParam0);
			break;
	
		case 4:
			func_58(iParam0);
			break;
	}

	return;
}

BOOL func_45(int iParam0) // Position - 0x9BF Signature - 22 01 03 00 00 5D 5A 86 11 27
{
	return func_59(Global_1148506.f_1, iParam0);
}

int func_46(int iParam0, BOOL bParam1) // Position - 0x9D3 Signature - 22 02 1C
{
	var unk;

	if (!func_60(iParam0, bParam1))
	{
		unk.f_12 = -1;
		unk.f_12.f_1 = -1;
		unk.f_4 = 11;
		unk.f_7 = iParam0;
		unk.f_11 = bParam1;
		return func_41(&unk, func_40(0, 8));
	}

	return 1;
}

BOOL func_47(BOOL bParam0, int iParam1) // Position - 0xA1B Signature - 22 02 04 00 00 5D
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return false;

	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1206954[iParam1 /*12*/] && bParam0 != false;
}

BOOL func_48() // Position - 0xA57 Signature - 22 00 02 00 00 5D 17 00 18 27 08
{
	return func_61(Global_1572887.f_8, 1);
}

BOOL func_49(int iParam0) // Position - 0xA6A Signature - 22 01 03 00 00 5D 6B 88 11 27
{
	return func_59(Global_1149035.f_1, iParam0);
}

void func_50(int iParam0) // Position - 0xA7E Signature - 22 01 03 00 00 5D 6B 88 11 80 01 66 00 39 B3
{
	func_38(&(Global_1149035.f_1), iParam0);
	return;
}

void func_51(int iParam0) // Position - 0xA92 Signature - 22 01 03 00 00 5D 6B 88 11 80 01 66 00 39 3B
{
	func_62(&(Global_1149035.f_1), iParam0);
	return;
}

void func_52(int iParam0) // Position - 0xAA6 Signature - 22 01 03 00 00 66 00 39 4B
{
	func_63(iParam0);

	switch (Global_1149035.f_2[iParam0 /*43*/])
	{
		case 0:
			func_64(iParam0);
			break;
	
		case 1:
			func_65(iParam0);
			break;
	
		case 2:
			func_66(iParam0);
			break;
	
		case 3:
			func_67(iParam0);
			break;
	
		case 4:
			func_68(iParam0);
			break;
	}

	return;
}

void func_53(BOOL bParam0, int iParam1) // Position - 0xB0F Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 0C
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

var func_54(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0xB20 Signature - 22 0C
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

	if (func_69() != 0)
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_70());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_70());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_70());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_71(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_72(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_73(i) != 1)
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
					if (!func_74(player2))
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

void func_55(int iParam0) // Position - 0xEB3 Signature - 22 01 03 00 00 09 39 6A 0A 00 8B 03 00 50 01 00 66 00 39 CE 16 00 8B 03 00 50 01 00 66 00 5D 5A 86 11 80 39
{
	if (func_49(1))
		return;

	if (func_75(iParam0))
		return;

	if (Global_1148506.f_57[iParam0 /*18*/].f_1 != 0)
	{
		Global_1148506.f_2[iParam0 /*18*/] = { Global_1148506.f_57[iParam0 /*18*/] };
		func_76(&Global_1148506.f_57[iParam0 /*18*/]);
		func_77(iParam0, 1);
	}
	else
	{
		func_78(iParam0);
	}

	return;
}

void func_56(int iParam0) // Position - 0xF1A Signature - 22 01 03 00 00 09 39 6A 0A 00 8B 0D 00 66 00 42 39 2D 17 00 50 01 00 68 13
{
	if (func_49(1))
	{
		func_77(iParam0, 4);
		return;
	}
	else if (func_75(iParam0))
	{
		func_77(iParam0, 4);
		return;
	}

	func_77(iParam0, 3);
	return;
}

void func_57(int iParam0) // Position - 0xF51 Signature - 22 01 03 00 00 09 39 6A 0A 00 8B 0D 00 66 00 42 39 2D 17 00 50 01 00 68 48
{
	if (func_49(1))
	{
		func_77(iParam0, 4);
		return;
	}
	else if (!func_79(iParam0, 1))
	{
		func_77(iParam0, 4);
		return;
	}
	else if (Global_1148506.f_57[iParam0 /*18*/].f_1 != 0)
	{
		func_77(iParam0, 4);
		return;
	}
	else if (func_75(iParam0))
	{
		func_77(iParam0, 4);
		return;
	}

	func_80(iParam0);

	if (!func_81(&(Global_1148506.f_2[iParam0 /*18*/].f_13)))
	{
		if (!func_79(iParam0, 2))
		{
			Global_1148506.f_2[iParam0 /*18*/].f_17 = MISC::GET_RANDOM_INT_IN_RANGE(180000, 300000);
			func_82(&(Global_1148506.f_2[iParam0 /*18*/].f_13));
		}
	}
	else if (func_79(iParam0, 2))
	{
		func_83(&(Global_1148506.f_2[iParam0 /*18*/].f_13));
	}
	else if (func_84(&(Global_1148506.f_2[iParam0 /*18*/].f_13)) > Global_1148506.f_2[iParam0 /*18*/].f_17)
	{
		func_77(iParam0, 4);
		return;
	}

	return;
}

void func_58(int iParam0) // Position - 0x104C Signature - 22 01 03 00 00 66 00 39 FE
{
	if (!func_85(iParam0))
		return;

	if (!func_79(iParam0, 1))
		func_76(&Global_1148506.f_2[iParam0 /*18*/]);

	return;
}

BOOL func_59(BOOL bParam0, int iParam1) // Position - 0x107A Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 02 09
{
	return bParam0 && iParam1 != false;
}

BOOL func_60(int iParam0, BOOL bParam1) // Position - 0x1089 Signature - 22 02 09
{
	Hash trainTrack;
	Vector3 vector;
	int junctionIndex;

	if (!NETWORK::NETWORK_IS_HOST())
		return false;

	if (iParam0 == 0)
		return false;

	switch (iParam0)
	{
		case -1420724065:
			trainTrack = joaat("trains3");
			vector = { 2659.8428f, -435.69714f, 42.38826f };
			break;
	
		case joaat("macfarlanes_ranch"):
			trainTrack = joaat("trains_old_west01");
			vector = { -2174.3418f, -2508.3506f, 64.79848f };
			break;
	
		case joaat("FLATNECK_TO_VALENTINE"):
			trainTrack = joaat("freight_group");
			vector = { -281.02634f, -319.55322f, 88.02095f };
			break;
	
		case -500348165:
			trainTrack = joaat("braithwaites2_track_config");
			vector = { 1529.881f, 467.63788f, 89.20429f };
			break;
	
		case joaat("BACCHUS_STATION"):
			trainTrack = joaat("freight_group");
			vector = { 610.215f, 1662.1654f, 186.37042f };
			break;
	
		case -245962931:
			trainTrack = joaat("trains3");
			vector = { 1481.5092f, 648.35266f, 91.52025f };
			break;
	
		case joaat("EMERALD_RANCH_DEAD_END_TO_RHODES"):
			trainTrack = joaat("trains3");
			vector = { 1692.8655f, 544.33276f, 97.59906f };
			break;
	
		case joaat("APPLESEED_TIMBER_FORK"):
			trainTrack = joaat("freight_group");
			vector = { -1375.6461f, -137.36201f, 99.87008f };
			break;
	
		case 1548096282:
			trainTrack = joaat("trains3");
			vector = { 31.56687f, -29.40786f, 102.32334f };
			break;
	
		case 1603023256:
			trainTrack = joaat("trains_old_west03");
			vector = { -4916.622f, -3009.5647f, -19.15694f };
			break;
	}

	if (!VEHICLE::_GET_TRAIN_TRACK_JUNCTION_AT_COORDS(trainTrack, vector, &junctionIndex))
		return false;

	VEHICLE::_SET_TRAIN_TRACK_JUNCTION_SWITCH(trainTrack, junctionIndex, bParam1);
	return true;
}

BOOL func_61(BOOL bParam0, BOOL bParam1) // Position - 0x122C Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 02 04 00 00 66
{
	return bParam0 && bParam1 != false;
}

void func_62(BOOL bParam0, int iParam1) // Position - 0x123B Signature - 22 02 04 00 00 66 00 66 01 39 20
{
	func_86(bParam0, iParam1);
	return;
}

void func_63(int iParam0) // Position - 0x124B Signature - 22 01 06 00 00 66 00 39
{
	float num;
	var unk;

	num = func_87(iParam0);
	unk = { Global_1148506.f_2[iParam0 /*18*/].f_7 };

	if (func_88(unk) && func_90(func_89(0), unk))
		num = -1f;

	if (Global_1149035.f_2[iParam0 /*43*/].f_3 != num)
		Global_1149035.f_2[iParam0 /*43*/].f_3 = num;

	return;
}

void func_64(int iParam0) // Position - 0x12AD Signature - 22 01 03 00 00 09 39 6A 0A 00 8B 03 00 50 01 00 66 00 39 CE 16 00 8B 03 00 50 01 00 66 00 5D 5A 86 11 80 02
{
	if (func_49(1))
		return;

	if (func_75(iParam0))
		return;

	if (Global_1148506.f_2[iParam0 /*18*/] > 0 && Global_1148506.f_2[iParam0 /*18*/] < 4)
	{
		func_91(iParam0, 1);
		func_92(iParam0, 1);
	}

	return;
}

void func_65(int iParam0) // Position - 0x12FA Signature - 22 01 04 00 00 66 00 5D
{
	float num;

	if (Global_1148506.f_2[iParam0 /*18*/] == 4)
	{
		func_92(iParam0, 4);
		return;
	}
	else if (func_49(1))
	{
		func_92(iParam0, 4);
		return;
	}
	else if (func_75(iParam0))
	{
		func_92(iParam0, 4);
		return;
	}

	if (Global_1148506.f_2[iParam0 /*18*/] > 1)
	{
		if (Global_1149035.f_2[iParam0 /*43*/].f_3 > 0f)
		{
			if (!_IS_NULL_VECTOR(Global_1148506.f_2[iParam0 /*18*/].f_3))
			{
				num = BUILTIN::VDIST(Global_1148506.f_2[iParam0 /*18*/].f_3, Global_34);
			
				if (num < Global_1149035.f_2[iParam0 /*43*/].f_3 || func_94(iParam0))
					func_92(iParam0, 2);
			}
		}
		else if (Global_1149035.f_2[iParam0 /*43*/].f_3 == -1f)
		{
			func_92(iParam0, 2);
		}
	}

	return;
}

void func_66(int iParam0) // Position - 0x13D6 Signature - 22 01 05 00 00 66 00 5D
{
	struct<2> args;

	if (Global_1148506.f_2[iParam0 /*18*/] == 4)
	{
		func_92(iParam0, 4);
		return;
	}
	else if (func_49(1))
	{
		func_92(iParam0, 4);
		return;
	}
	else if (func_75(iParam0))
	{
		func_92(iParam0, 4);
		return;
	}

	if (!SCRIPTS::DOES_THREAD_EXIST(Global_1149035.f_2[iParam0 /*43*/].f_1))
	{
		SCRIPTS::REQUEST_SCRIPT("net_train");
	
		if (!SCRIPTS::HAS_SCRIPT_LOADED("net_train"))
			return;
	
		if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(1024) <= 0)
			return;
	
		args = iParam0;
		args.f_1 = Global_1148506.f_2[iParam0 /*18*/].f_1;
		Global_1149035.f_2[iParam0 /*43*/].f_1 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("net_train", &args, 2, 1024);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_train");
		func_91(iParam0, 2);
	}
	else
	{
		func_92(iParam0, 3);
	}

	return;
}

void func_67(int iParam0) // Position - 0x149D Signature - 22 01 03 00 00 66 00 5D 5A 86 11 80 02 17 12 42
{
	if (Global_1148506.f_2[iParam0 /*18*/] == 4)
		func_92(iParam0, 4);
	else if (func_49(1))
		func_92(iParam0, 4);
	else if (!SCRIPTS::DOES_THREAD_EXIST(Global_1149035.f_2[iParam0 /*43*/].f_1))
		func_92(iParam0, 4);
	else if (func_75(iParam0))
		func_92(iParam0, 4);

	return;
}

void func_68(int iParam0) // Position - 0x14FD Signature - 22 01 32
{
	var unk;
	var unk5;

	if (SCRIPTS::DOES_THREAD_EXIST(Global_1149035.f_2[iParam0 /*43*/].f_1))
		return;

	Global_1148618[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][iParam0 /*4*/] = { unk };
	unk5.f_12 = 15;

	if (Global_1149035.f_2[iParam0 /*43*/].f_9 != 0)
		unk5.f_9 = Global_1149035.f_2[iParam0 /*43*/].f_9;

	if (!func_85(iParam0))
		return;

	Global_1149035.f_2[iParam0 /*43*/] = { unk5 };
	return;
}

int func_69() // Position - 0x1578 Signature - 22 00 02 00 00 5D FD 0B 10 27 0C
{
	return Global_1051645.f_12;
}

char* func_70() // Position - 0x1586 Signature - 22 00 02 00 00 6D
{
	return "unnamed";
}

BOOL func_71(int iParam0) // Position - 0x1591 Signature - 22 01 04 00 00 2F 67 03 66
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

BOOL func_72(int iParam0) // Position - 0x1620 Signature - 22 01 03 00 00 5D 17
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_95(36, iParam0);
}

int func_73(int iParam0) // Position - 0x163E Signature - 22 01 03 00 00 66 00 6D
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_74(Player plParam0) // Position - 0x1689 Signature - 22 01 03 00 00 03
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_96(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_97(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_75(int iParam0) // Position - 0x16CE Signature - 22 01 04 00 00 03 01 00 3B 67 03 66 00 5D 6B 88 11 80 02 63 2B 27 0B
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (Global_1149035.f_2[iParam0 /*43*/].f_11 == frameCount || Global_1149035.f_2[iParam0 /*43*/].f_11 == frameCount - 1)
		return true;

	return false;
}

void func_76(int iParam0) // Position - 0x170A Signature - 22 01 15
{
	var unk;

	unk.f_7 = -1;
	unk.f_7.f_1 = -1;
	*iParam0 = { unk };
	return;
}

void func_77(int iParam0, int iParam1) // Position - 0x172D Signature - 22 02 04 00 00 66 00 5D 5A
{
	if (Global_1148506.f_2[iParam0 /*18*/] != iParam1)
		Global_1148506.f_2[iParam0 /*18*/] = iParam1;

	return;
}

void func_78(int iParam0) // Position - 0x1750 Signature - 22 01 11
{
	BOOL flag;
	int num;
	int num2;
	int trackIndex;
	float distance;
	Vector3 stationCoordsFromTrainStationData;
	var checkpointTrainSpawnLocation;
	int i;

	Global_1149035.f_2[iParam0 /*43*/].f_7 = Global_1149035.f_2[iParam0 /*43*/].f_7 + 1;

	if (Global_1149035.f_2[iParam0 /*43*/].f_7 < 60)
		return;

	Global_1149035.f_2[iParam0 /*43*/].f_7 = 0;

	if (func_48())
		return;

	if (!func_81(&(Global_1148506.f_2[iParam0 /*18*/].f_10)))
	{
		flag = func_98(iParam0);
	
		if (flag > false)
		{
			Global_1148506.f_2[iParam0 /*18*/].f_16 = flag;
			func_82(&(Global_1148506.f_2[iParam0 /*18*/].f_10));
		}
	
		return;
	}
	else if (func_84(&(Global_1148506.f_2[iParam0 /*18*/].f_10)) < Global_1148506.f_2[iParam0 /*18*/].f_16)
	{
		return;
	}

	num = func_99(iParam0);

	if (num == 0)
		return;

	num2 = func_100(iParam0);

	if (num2 == 0)
		return;

	trackIndex = { func_101(num2) };
	distance = 0f;
	stationCoordsFromTrainStationData = { VEHICLE::_GET_STATION_COORDS_FROM_TRAIN_STATION_DATA(trackIndex, trackIndex.f_1) };

	for (i = 0; i <= 30; i = i + 1)
	{
		distance = 200f + ((float)i * 10f);
		checkpointTrainSpawnLocation = { VEHICLE::_GET_CHECKPOINT_TRAIN_SPAWN_LOCATION(trackIndex, stationCoordsFromTrainStationData, distance, !trackIndex.f_2) };
	
		if (func_102(iParam0, checkpointTrainSpawnLocation))
		{
			func_104(iParam0, num, checkpointTrainSpawnLocation, trackIndex.f_2, func_103(), false);
			return;
		}
	}

	return;
}

BOOL func_79(int iParam0, int iParam1) // Position - 0x18A1 Signature - 22 02 05 00 00 2F
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)) && func_59(Global_1148618[i /*13*/][iParam0 /*4*/], iParam1))
			return 1;
	}

	return 0;
}

void func_80(int iParam0) // Position - 0x18E8 Signature - 22 01 08
{
	int value;
	Player player;
	Vector3 vector;

	value = Global_1149035.f_2[iParam0 /*43*/].f_8;
	player = PLAYER::INT_TO_PLAYERINDEX(value);

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
	{
		vector = { Global_1148618[value /*13*/][iParam0 /*4*/].f_1 };
	
		if (!_IS_NULL_VECTOR(vector))
			if (BUILTIN::VDIST(vector, Global_1148506.f_2[iParam0 /*18*/].f_3) > 10f)
				Global_1148506.f_2[iParam0 /*18*/].f_3 = { vector };
	}

	Global_1149035.f_2[iParam0 /*43*/].f_8 = Global_1149035.f_2[iParam0 /*43*/].f_8 + 1;

	if (Global_1149035.f_2[iParam0 /*43*/].f_8 >= 32)
		Global_1149035.f_2[iParam0 /*43*/].f_8 = 0;

	return;
}

BOOL func_81(var uParam0) // Position - 0x1998 Signature - 22 01 03 00 00 66 00 76 09
{
	return func_105(*uParam0, 1);
}

void func_82(var uParam0) // Position - 0x19A8 Signature - 22 01 03 00 00 66 00 2F
{
	func_106(uParam0, 0);
	return;
}

void func_83(var uParam0) // Position - 0x19B7 Signature - 22 01 03 00 00 2F
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
	return;
}

int func_84(var uParam0) // Position - 0x19CD Signature - 22 01 03 00 00 66 00 39 98
{
	if (!func_81(uParam0))
		return 0;

	if (func_107(uParam0))
		return uParam0->f_2;

	return func_108(uParam0->f_1);
}

BOOL func_85(int iParam0) // Position - 0x19FE Signature - 22 01 03 00 00 66 00 5D 6B
{
	if (Global_1149035.f_2[iParam0 /*43*/].f_10 < Global_1295666.f_16)
		return true;

	return false;
}

void func_86(BOOL bParam0, int iParam1) // Position - 0x1A20 Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 01
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

float func_87(int iParam0) // Position - 0x1A35 Signature - 22 01 03 00 00 66 00 3C 03 00 00 00 00 00 0F 00 01 00 00 00 11 00 02 00 00 00 13 00 68 18 00 86
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

BOOL func_88(var uParam0, var uParam1) // Position - 0x1A74 Signature - 22 02 04 00 00 66 00 39
{
	if (!func_109(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_110(uParam0))
		return false;

	return true;
}

struct<2> func_89(int iParam0) // Position - 0x1AA8 Signature - 22 01 03 00 00 11
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_90(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1ABC Signature - 22 04 06
{
	return uParam0 == uParam2 && uParam0.f_1 == uParam2.f_1;
}

void func_91(int iParam0, int iParam1) // Position - 0x1AD7 Signature - 22 02 04 00 00 66 00 03
{
	if (!func_59(Global_1148618[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][iParam0 /*4*/], iParam1))
		func_38(&Global_1148618[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][iParam0 /*4*/], iParam1);

	return;
}

void func_92(int iParam0, int iParam1) // Position - 0x1B0B Signature - 22 02 04 00 00 66 00 5D 6B
{
	if (Global_1149035.f_2[iParam0 /*43*/] != iParam1)
		Global_1149035.f_2[iParam0 /*43*/] = iParam1;

	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x1B2E Signature - 22 03 05 00 00 66
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_94(int iParam0) // Position - 0x1B58 Signature - 22 01 04 00 00 03 01 00 3B 67 03 66 00 5D 6B 88 11 80 02 63 2B 27 09
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (Global_1149035.f_2[iParam0 /*43*/].f_9 == frameCount || Global_1149035.f_2[iParam0 /*43*/].f_9 == frameCount - 1)
		return true;

	return false;
}

BOOL func_95(int iParam0, int iParam1) // Position - 0x1B94 Signature - 22 02 05 00 00 66
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_111(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_112())
		return func_111(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_111(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_96(Player plParam0) // Position - 0x1C08 Signature - 22 01 03 00 00 5D 77
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_97(Player plParam0) // Position - 0x1C25 Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 32
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_113(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_114(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

BOOL func_98(int iParam0) // Position - 0x1CA8 Signature - 22 01 03 00 00 66 00 3C 03 00 00 00 00 00 0F 00 01 00 00 00 16
{
	switch (iParam0)
	{
		case 0:
			return Global_1901671.f_319.f_274;
	
		case 1:
			return Global_1901671.f_319.f_275;
	
		case 2:
			return Global_1901671.f_319.f_276;
	
		default:
		
	}

	return false;
}

int func_99(int iParam0) // Position - 0x1CF2 Signature - 22 01 04 00 00 66 00 3C
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = 756707084;
			break;
	
		case 1:
			num = 756707084;
			break;
	
		case 2:
			num = -1083616881;
			break;
	}

	return num;
}

int func_100(int iParam0) // Position - 0x1D34 Signature - 22 01 2E
{
	int num;
	float num2;
	int i;

	if (iParam0 == 2)
		return func_115(iParam0);

	num = 20;
	num.f_1 = 1203982336;
	num.f_1.f_2 = 1203982336;
	num.f_1.f_2.f_2 = 1203982336;
	num.f_1.f_2.f_2.f_2 = 1203982336;
	num.f_1.f_2.f_2.f_2.f_2 = 1203982336;
	num.f_1.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	num.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	num.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	num.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	num.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	num.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	num.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	num.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	num.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	num.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	num.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	num.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	num.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	num.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	num.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;

	for (i = func_116(iParam0); i <= func_117(iParam0); i = i + 1)
	{
		num2 = func_118(iParam0, i);
	
		if (num2 > 0f)
		{
			num[i /*2*/] = num2;
			num[i /*2*/].f_1 = i;
		}
	}

	NETWORK::_0x7E300B5B86AB1D1A(&num, num, 2, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return num[0 /*2*/].f_1;
}

Vector3 func_101(int iParam0) // Position - 0x1E78 Signature - 22 01 06 00 00 66 00 3C
{
	int num;

	switch (iParam0)
	{
		case 1:
			num = 0;
			num.f_1 = 0;
			num.f_2 = 0;
			break;
	
		case 2:
			num = 0;
			num.f_1 = 1;
			num.f_2 = 0;
			break;
	
		case 3:
			num = 0;
			num.f_1 = 2;
			num.f_2 = 0;
			break;
	
		case 4:
			num = 0;
			num.f_1 = 3;
			num.f_2 = 0;
			break;
	
		case 5:
			num = 0;
			num.f_1 = 4;
			num.f_2 = 0;
			break;
	
		case 6:
			num = 0;
			num.f_1 = 5;
			num.f_2 = 0;
			break;
	
		case 7:
			num = 1;
			num.f_1 = 0;
			num.f_2 = 1;
			break;
	
		case 8:
			num = 2;
			num.f_1 = 0;
			num.f_2 = 0;
			break;
	
		case 9:
			num = 24;
			num.f_1 = 0;
			num.f_2 = 1;
			break;
	
		case 10:
			num = 24;
			num.f_1 = 1;
			num.f_2 = 1;
			break;
	
		case 11:
			num = 23;
			num.f_1 = 1;
			num.f_2 = 0;
			break;
	
		case 12:
			num = 3;
			num.f_1 = 0;
			num.f_2 = 1;
			break;
	
		case 13:
			num = 3;
			num.f_1 = 1;
			num.f_2 = 1;
			break;
	
		case 14:
			num = 3;
			num.f_1 = 2;
			num.f_2 = 1;
			break;
	
		case 15:
			num = 3;
			num.f_1 = 3;
			num.f_2 = 1;
			break;
	
		case 16:
			num = 3;
			num.f_1 = 4;
			num.f_2 = 1;
			break;
	
		case 17:
			num = 3;
			num.f_1 = 5;
			num.f_2 = 1;
			break;
	
		case 18:
			num = 3;
			num.f_1 = 6;
			num.f_2 = 1;
			break;
	
		case 19:
			num = 3;
			num.f_1 = 7;
			num.f_2 = 1;
			break;
	
		default:
			break;
	}

	return num;
}

BOOL func_102(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x2034 Signature - 22 04 0C
{
	float num;
	float num2;
	Player player;
	Ped playerPed;
	float num3;
	int i;

	if (_IS_NULL_VECTOR(vParam1))
		return false;

	if (func_119(iParam0))
		return false;

	if (func_75(iParam0))
		return false;

	num = 5f;
	num2 = func_87(iParam0);

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
			
				if (num3 < num2 && !func_94(iParam0))
					return false;
			}
		}
	}

	return true;
}

struct<2> func_103() // Position - 0x2134 Signature - 22 00 04
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	return unk;
}

int func_104(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, BOOL bParam8) // Position - 0x214D Signature - 22 09
{
	if (!func_120())
		return 0;

	if (iParam1 == 0)
		return 0;
	else if (_IS_NULL_VECTOR(uParam2))
		return 0;

	Global_1148506.f_57[iParam0 /*18*/].f_1 = iParam1;
	Global_1148506.f_57[iParam0 /*18*/].f_3 = { uParam2 };
	Global_1148506.f_57[iParam0 /*18*/].f_6 = uParam5;
	Global_1148506.f_57[iParam0 /*18*/].f_7 = { uParam6 };

	if (bParam8)
		Global_1148506.f_57[iParam0 /*18*/].f_2 = iParam1;

	return 1;
}

BOOL func_105(int iParam0, int iParam1) // Position - 0x21D1 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 02 04 00 00 03
{
	return iParam0 && iParam1 != false;
}

void func_106(var uParam0, int iParam1) // Position - 0x21E0 Signature - 22 02 04 00 00 03 01 00 18
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}

	func_121(uParam0, 1);
	func_122(uParam0, 2);
	uParam0->f_2 = 0;
	return;
}

BOOL func_107(var uParam0) // Position - 0x221C Signature - 22 01 03 00 00 66 00 76 11
{
	return func_105(*uParam0, 2);
}

int func_108(int iParam0) // Position - 0x222C Signature - 22 01 03 00 00 66 00 03
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

BOOL func_109(int iParam0) // Position - 0x223E Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 21
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

int func_110(int iParam0) // Position - 0x227D Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 2E
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

BOOL func_111(Any* panParam0, int iParam1, int iParam2) // Position - 0x2313 Signature - 22 03 07
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_112() // Position - 0x234A Signature - 22 00 02 00 00 5D DD
{
	return Global_1102813.f_3672;
}

void func_113(Player plParam0) // Position - 0x2359 Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 77
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_114(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_114(Player plParam0) // Position - 0x23C5 Signature - 22 01 03 00 00 66 00 5D 77
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

int func_115(int iParam0) // Position - 0x2400 Signature - 22 01 05 00 00 66 00 39
{
	int startRange;
	int num;

	startRange = func_116(iParam0);
	num = func_117(iParam0);
	return MISC::GET_RANDOM_INT_IN_RANGE(startRange, num + 1);
}

int func_116(int iParam0) // Position - 0x2422 Signature - 22 01 03 00 00 66 00 3C 03 00 00 00 00 00 0F 00 01 00 00 00 10
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 9;
	
		case 2:
			return 12;
	}

	return 0;
}

int func_117(int iParam0) // Position - 0x245C Signature - 22 01 03 00 00 66 00 3C 03 00 00 00 00 00 0F 00 01 00 00 00 11 00 02 00 00 00 13 00 68 18 00 6D
{
	switch (iParam0)
	{
		case 0:
			return 8;
	
		case 1:
			return 11;
	
		case 2:
			return 19;
	}

	return 0;
}

float func_118(int iParam0, int iParam1) // Position - 0x2497 Signature - 22 02 14
{
	float num;
	int trackIndex;
	float distance;
	Vector3 stationCoordsFromTrainStationData;
	var checkpointTrainSpawnLocation;
	float num2;
	Player player;
	Ped playerPed;
	int i;
	int j;

	num = 0f;
	trackIndex = { func_101(iParam1) };
	distance = 0f;
	stationCoordsFromTrainStationData = { VEHICLE::_GET_STATION_COORDS_FROM_TRAIN_STATION_DATA(trackIndex, trackIndex.f_1) };

	for (j = 0; j <= 30; j = j + 1)
	{
		distance = 200f + ((float)j * 10f);
		checkpointTrainSpawnLocation = { VEHICLE::_GET_CHECKPOINT_TRAIN_SPAWN_LOCATION(trackIndex, stationCoordsFromTrainStationData, distance, !trackIndex.f_2) };
	
		if (func_102(iParam0, checkpointTrainSpawnLocation))
		{
			for (i = 0; i <= 31; i = i + 1)
			{
				player = PLAYER::INT_TO_PLAYERINDEX(i);
			
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
				{
					playerPed = PLAYER::GET_PLAYER_PED(player);
				
					if (ENTITY::DOES_ENTITY_EXIST(playerPed))
						num2 = num2 + func_123(checkpointTrainSpawnLocation, ENTITY::GET_ENTITY_COORDS(playerPed, false, false));
				}
			}
		
			num = num2;
			break;
		}
	}

	return num;
}

BOOL func_119(int iParam0) // Position - 0x255C Signature - 22 01 03 00 00 66 00 42
{
	return func_79(iParam0, 4);
}

BOOL func_120() // Position - 0x256B Signature - 22 00 02 00 00 1D
{
	return SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[3]) && SCRIPTS::IS_THREAD_ACTIVE(Global_1051645.f_16[3], false) && NETWORK::_NETWORK_IS_THREAD_ACTIVE(Global_1051645.f_16[3]) && NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1051645.f_16[3]) == PLAYER::PLAYER_ID();
}

void func_121(var uParam0, int iParam1) // Position - 0x25BC Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 02
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_122(var uParam0, int iParam1) // Position - 0x25CD Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 06
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

float func_123(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x25E2 Signature - 22 06
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

