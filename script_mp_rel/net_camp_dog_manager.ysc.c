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
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 48
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	sLocal_19 = "props_misc@campfires@5_logs";
	sLocal_20 = "Script_PropCampfire";
	func_1();

	while (!func_2(false, false))
	{
		func_3(&Global_1147585, &Global_1147594, &Global_1147587, &Global_1147979);
		BUILTIN::WAIT(0);
	}

	func_4(&Global_1147585, &Global_1147594, &Global_1147587);

	while (!SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(1440))
	{
		func_5();
		BUILTIN::WAIT(0);
	}

	func_6();
	return;
}

void func_1() // Position - 0x6E Signature - 22 00 03
{
	int gameTimer;

	gameTimer = MISC::GET_GAME_TIMER();
	func_7(32, -1);
	func_8();

	if (func_9())
		func_6();

	func_10();
	func_11(false);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	return;
}

BOOL func_2(BOOL bParam0, BOOL bParam1) // Position - 0xA6 Signature - 22 02 05 00 00 5D
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

int func_3(int* piParam0, Any anParam1, var uParam2, var uParam3) // Position - 0x186 Signature - 22 04 06
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		func_12(piParam0, anParam1, uParam2);

	func_13(piParam0, anParam1, uParam2, uParam3);
	func_14(piParam0, anParam1, uParam2, uParam3);
	func_15(piParam0, anParam1, uParam2, uParam3);
	return 1;
}

int func_4(int* piParam0, Any anParam1, var uParam2) // Position - 0x1C6 Signature - 22 03 05 00 00 09 50 03 01 22 00
{
	return 1;
}

void func_5() // Position - 0x1CF Signature - 22 00 02 00 00 5D C3
{
	if (!SCRIPTS::DOES_THREAD_EXIST(Global_1147587.f_2))
		return;

	if (!Global_1147587.f_3)
	{
		if (SCRIPTS::DOES_THREAD_EXIST(Global_1147587.f_2))
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_1147587.f_2);
	
		Global_1147587.f_3 = 1;
	}

	return;
}

void func_6() // Position - 0x210 Signature - 22 00 02 00 00 03
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_7(int iParam0, int iParam1) // Position - 0x21C Signature - 22 02 04 00 00 03
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_6();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	return;
}

int func_8() // Position - 0x239 Signature - 22 00 05
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
	
		if (func_16() == 0)
			if (func_17())
				func_6();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_6();

	return 1;
}

BOOL func_9() // Position - 0x34A Signature - 22 00 02 00 00 5D 17 00 18 27 0A
{
	if (Global_1572887.f_10)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	return false;
}

void func_10() // Position - 0x378 Signature - 22 00 02 00 00 5D C1
{
	func_18(&Global_1147585);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1147585, 2, 48);
	func_19(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1147585), 2, "g_mpNetCampDogManagerHost");
	func_20(&Global_1147594);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1147594, 385, 49);
	func_21(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1147594[0 /*12*/]), 385, "g_mpNetCampDogManagerPlayer");
	func_22(&Global_1147587);
	return;
}

void func_11(BOOL bParam0) // Position - 0x3D7 Signature - 22 01 0D
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

void func_12(int* piParam0, Any anParam1, var uParam2) // Position - 0x4A0 Signature - 22 03 06 00 00 11
{
	int num;

	num = func_23(*piParam0);

	switch (num)
	{
		case 0:
			func_24(piParam0, 1);
			break;
	
		case 1:
			break;
	
		case 2:
			func_24(piParam0, 3);
			break;
	
		case 3:
			break;
	}

	return;
}

int func_13(int* piParam0, Any anParam1, var uParam2, var uParam3) // Position - 0x4EC Signature - 22 04 0A 00 00 03
{
	Player player;
	Player player2;
	int num;
	int num2;

	player = PLAYER::PLAYER_ID();
	player2 = player;
	num = func_25(anParam1->[player2 /*12*/]);

	switch (num)
	{
		case 0:
			func_26(&anParam1->[player2 /*12*/]);
			func_27(&anParam1->[player2 /*12*/]);
			func_28(&anParam1->[player2 /*12*/], 1);
			[[fallthrough]];
	
		case 1:
			num2 = func_29(piParam0, anParam1, uParam2, uParam3);
		
			if (num2 != num)
				func_28(&anParam1->[player2 /*12*/], num2);
			break;
	}

	return 0;
}

int func_14(int* piParam0, Any anParam1, var uParam2, var uParam3) // Position - 0x565 Signature - 22 04 0A 00 00 09
{
	int num;
	int num2;
	BOOL flag;
	int num3;

	num = 1;
	num2 = func_30(*uParam2);

	switch (num2)
	{
		case 0:
			if (func_31(piParam0, anParam1, uParam2))
				func_32(uParam2, 1);
			break;
	
		case 1:
			flag = true;
		
			if (flag)
				if (!func_33())
					flag = false;
		
			if (flag)
				if (!func_34(uParam2))
					flag = false;
		
			if (flag)
				if (!func_35(piParam0, anParam1, uParam2))
					flag = false;
		
			if (flag)
				func_32(uParam2, 2);
			break;
	
		case 2:
			if (func_36(piParam0, anParam1, uParam2))
				func_32(uParam2, 3);
			break;
	
		case 3:
			if (func_37(piParam0, anParam1, uParam2))
				func_32(uParam2, 4);
			break;
	
		case 4:
			if (func_38(piParam0, anParam1, uParam2))
				func_32(uParam2, 5);
			break;
	
		case 5:
			num3 = func_39(piParam0, anParam1, uParam2);
		
			if (num3 == 1)
				func_32(uParam2, 0);
			else if (num3 == 2)
				func_32(uParam2, 6);
			break;
	
		case 6:
			if (func_40(piParam0, anParam1, uParam2))
				func_32(uParam2, 1);
			break;
	
		case 7:
			break;
	}

	return num;
}

void func_15(int* piParam0, Any anParam1, var uParam2, var uParam3) // Position - 0x6A0 Signature - 22 04 08 00 00 2F
{
	int i;
	eEventType eventAtIndex;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		eventAtIndex = SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i);
	
		switch (eventAtIndex)
		{
			case -507840394:
				func_41(piParam0, anParam1, uParam2, uParam3, i);
				break;
		}
	}

	return;
}

int func_16() // Position - 0x6E6 Signature - 22 00 02 00 00 5D 17 00 18 27 0E
{
	return Global_1572887.f_14;
}

BOOL func_17() // Position - 0x6F4 Signature - 22 00 02 00 00 5D FD 0B 10 27 08
{
	return Global_1051645.f_8;
}

void func_18(int* piParam0) // Position - 0x702 Signature - 22 01 03 00 00 2F 66 00 32 2F 66 00 6C 01 50
{
	*piParam0 = 0;
	piParam0->f_1 = 0;
	return;
}

int func_19(int iParam0, int iParam1, char* sParam2) // Position - 0x713 Signature - 22 03 05 00 00 09 50 03 01 22 01 04
{
	return 1;
}

void func_20(Any anParam0) // Position - 0x71C Signature - 22 01 04 00 00 2F 67 03 66 03
{
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		func_26(&anParam0->[i /*12*/]);
	}

	return;
}

int func_21(int iParam0, int iParam1, char* sParam2) // Position - 0x741 Signature - 22 03 05 00 00 09 50 03 01 22 01 03
{
	return 1;
}

void func_22(var uParam0) // Position - 0x74A Signature - 22 01 03 00 00 2F 66 00 32 08
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	return;
}

var func_23(var uParam0, var uParam1) // Position - 0x76A Signature - 22 02 04 00 00 66 00 50
{
	return uParam0;
}

void func_24(int* piParam0, int iParam1) // Position - 0x774 Signature - 22 02 04 00 00 66 01 66 00 32 50 02 00 22 0C
{
	*piParam0 = iParam1;
	return;
}

var func_25(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x781 Signature - 22 0C 0E
{
	return uParam0;
}

void func_26(var uParam0) // Position - 0x78B Signature - 22 01 03 00 00 2F 66 00 32 2F 66 00 6C 01 6D
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_2), "", 64);
	uParam0->f_10 = 0;
	return;
}

void func_27(var uParam0) // Position - 0x7AA Signature - 22 01 0E
{
	Hash hash;
	Hash hash2;
	var unk;
	BOOL flag;

	hash = func_42();
	hash2 = func_43();
	func_44(uParam0, hash);

	if (func_45(&unk))
	{
		func_46(uParam0, unk);
		func_47(PLAYER::PLAYER_ID(), unk);
	}

	flag = false;

	if (func_48(hash, 0))
		if (hash == hash2)
			flag = true;

	if (flag)
		func_49(uParam0, 0);
	else
		func_50(uParam0, 0);

	return;
}

void func_28(var uParam0, int iParam1) // Position - 0x814 Signature - 22 02 04 00 00 66 01 66 00 32 50 02 00 22 04
{
	*uParam0 = iParam1;
	return;
}

int func_29(int* piParam0, Any anParam1, var uParam2, var uParam3) // Position - 0x821 Signature - 22 04 08 00 00 03
{
	Player player;
	Player player2;

	player = PLAYER::PLAYER_ID();
	player2 = player;
	func_51(&anParam1->[player2 /*12*/], uParam3);
	func_52(&anParam1->[player2 /*12*/], uParam2);
	func_53(&anParam1->[player2 /*12*/], uParam2);
	return 1;
}

var func_30(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x858 Signature - 22 07 09 00 00 66
{
	return uParam0;
}

BOOL func_31(int* piParam0, Any anParam1, var uParam2) // Position - 0x862 Signature - 22 03 05 00 00 2F
{
	Global_1147587.f_6 = 0;
	return true;
}

void func_32(var uParam0, int iParam1) // Position - 0x872 Signature - 22 02 04 00 00 66 01 66 00 32 50 02 00 22 00
{
	*uParam0 = iParam1;
	return;
}

BOOL func_33() // Position - 0x87F Signature - 22 00 02 00 00 09
{
	return true;
}

BOOL func_34(var uParam0) // Position - 0x888 Signature - 22 01 05
{
	BOOL num;
	int num2;

	num = 0;

	switch (uParam0->f_5)
	{
		case 1:
			num = 1;
			break;
	}

	num2 = uParam0->f_5;
	num2 = num2 + 1;

	if (num2 >= 10)
		uParam0->f_5 = 0;
	else
		uParam0->f_5 = num2;

	return num;
}

BOOL func_35(int* piParam0, Any anParam1, var uParam2) // Position - 0x8CC Signature - 22 03 06 00 00 66
{
	var unk;

	if (!func_54(piParam0, anParam1, uParam2, &unk))
		return false;

	uParam2->f_1 = unk;
	return true;
}

BOOL func_36(int* piParam0, Any anParam1, var uParam2) // Position - 0x8EF Signature - 22 03 05 00 00 39 A3 0C 00 03 05 00 35
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(func_55()))
		return false;

	SCRIPTS::REQUEST_SCRIPT(func_55());
	return true;
}

BOOL func_37(int* piParam0, Any anParam1, var uParam2) // Position - 0x910 Signature - 22 03 05 00 00 39 A3 0C 00 03 05 00 18
{
	if (!SCRIPTS::HAS_SCRIPT_LOADED(func_55()))
	{
		SCRIPTS::REQUEST_SCRIPT(func_55());
		return false;
	}

	return true;
}

BOOL func_38(int* piParam0, Any anParam1, var uParam2) // Position - 0x931 Signature - 22 03 0A
{
	Player player;
	Player player2;
	struct<3> uniqueIntForPlayer;

	player = uParam2->f_1;
	player2 = player;
	func_56(&uniqueIntForPlayer);
	uniqueIntForPlayer = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(player);
	uniqueIntForPlayer.f_1 = player;
	uniqueIntForPlayer.f_2 = anParam1->[player2 /*12*/].f_1;

	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(600) <= 0)
		return false;

	Global_1147587.f_2 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_55(), &uniqueIntForPlayer, 3, 600);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_55());
	return true;
}

int func_39(int* piParam0, Any anParam1, var uParam2) // Position - 0x98F Signature - 22 03 07 00 00 03
{
	Player player;
	int uniqueIntForPlayer;

	player = PLAYER::PLAYER_ID();
	uniqueIntForPlayer = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(player);

	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_55(), uniqueIntForPlayer, true, 0))
		return 1;

	return 0;
}

BOOL func_40(int* piParam0, Any anParam1, var uParam2) // Position - 0x9BA Signature - 22 03 05 00 00 09 50 03 01 22 05
{
	return true;
}

void func_41(int* piParam0, Any anParam1, var uParam2, var uParam3, int iParam4) // Position - 0x9C3 Signature - 22 05 0B 00 00 09
{
	struct<4> eventData;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam4, &eventData, 4))
		return;

	switch (eventData)
	{
		case 11:
			func_57(iParam4);
			break;
	}

	return;
}

Hash func_42() // Position - 0x9F3 Signature - 22 00 07 00 00 37 61 B7 6B 92 2F 39 04 0D 00 37 CB 50 9F 40 09 39 A4 0D 00 42 4B 02 06 42 4B 02 2D 37 16 9A 16 8E 2F
{
	var unk;
	int num;

	unk = { func_59(joaat("kit_camp"), func_58(false), 1084182731, true) };
	num = func_60(unk, -1911121386, 0, true);
	return num;
}

Hash func_43() // Position - 0xA26 Signature - 22 00 07 00 00 37 61 B7 6B 92 2F 39 04 0D 00 37 CB 50 9F 40 09 39 A4 0D 00 42 4B 02 06 42 4B 02 2D 37 16 9A 16 8E 09
{
	var unk;
	int num;

	unk = { func_59(joaat("kit_camp"), func_58(false), 1084182731, true) };
	num = func_61(unk, -1911121386, true, -1);
	return num;
}

void func_44(var uParam0, int iParam1) // Position - 0xA59 Signature - 22 02 04 00 00 66 01 66 00 6C
{
	uParam0->f_1 = iParam1;
	return;
}

BOOL func_45(var uParam0) // Position - 0xA67 Signature - 22 01 19
{
	var unk;

	unk.f_9 = -1591664384;

	if (!func_62(&unk))
		return false;

	*uParam0 = { unk.f_14 };
	return true;
}

void func_46(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xA99 Signature - 22 09 0B
{
	uParam0->f_2 = { uParam1 };
	return;
}

void func_47(Player plParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xAAD Signature - 22 09 1F
{
	var unk;

	unk.f_4 = 1;
	unk.f_8 = { uParam1 };
	unk.f_7 = plParam0;
	func_64(unk, func_63(0, 8));
	return;
}

BOOL func_48(Hash hParam0, int iParam1) // Position - 0xADC Signature - 22 02 04 00 00 66 00 2F
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

void func_49(var uParam0, int iParam1) // Position - 0xAF6 Signature - 22 02 04 00 00 66 00 27 0A 66 01 39 22 0F 00 8B 03
{
	if (func_65(uParam0->f_10, iParam1))
		return;

	func_66(&(uParam0->f_10), iParam1);
	return;
}

void func_50(var uParam0, int iParam1) // Position - 0xB18 Signature - 22 02 04 00 00 66 00 27 0A 66 01 39 22 0F 00 05
{
	if (!func_65(uParam0->f_10, iParam1))
		return;

	func_67(&(uParam0->f_10), iParam1);
	return;
}

void func_51(var uParam0, var uParam1) // Position - 0xB3B Signature - 22 02 06
{
	BOOL flag;
	BOOL flag2;

	flag = func_68(uParam0, 1);
	flag2 = func_69(uParam1, 0);

	if (flag != flag2)
		if (flag2)
			func_49(uParam0, 1);
		else
			func_50(uParam0, 1);

	return;
}

void func_52(var uParam0, var uParam1) // Position - 0xB72 Signature - 22 02 04 00 00 66 01 2F
{
	if (!func_70(uParam1, 0))
		return;

	func_27(uParam0);
	func_71(uParam1, 0);
	return;
}

void func_53(var uParam0, var uParam1) // Position - 0xB95 Signature - 22 02 08 00 00 37
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	num = func_72(joaat("CAMP_RAID"), PLAYER::PLAYER_ID(), false, true);

	if (!func_73(num))
	{
		func_50(uParam0, 2);
		func_50(uParam0, 3);
		func_50(uParam0, 4);
		return;
	}

	flag = func_74(num, 1);
	flag2 = func_75(num, 16, 255);
	flag3 = func_75(num, 32, 255);

	if (flag && !flag2)
		func_49(uParam0, 2);
	else
		func_50(uParam0, 2);

	if (flag && flag2 || flag3)
		func_49(uParam0, 4);
	else
		func_50(uParam0, 4);

	if (!flag)
		func_50(uParam0, 3);

	return;
}

BOOL func_54(int* piParam0, Any anParam1, var uParam2, var uParam3) // Position - 0xC3F Signature - 22 04 09
{
	Player playerIndex;
	Player player;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!func_76(i, false, true))
		{
		}
		else
		{
			player = PLAYER::INT_TO_PARTICIPANTINDEX(i);
			playerIndex = NETWORK::NETWORK_GET_PLAYER_INDEX(player);
		
			if (!GANG::NETWORK_IS_GANG_LEADER(playerIndex))
			{
			}
			else if (!func_77(piParam0, anParam1, uParam2, playerIndex))
			{
			}
			else
			{
				*uParam3 = playerIndex;
				return true;
			}
		}
	}

	return false;
}

char* func_55() // Position - 0xCA3 Signature - 22 00 02 00 00 6D 73
{
	return "net_camp_dog";
}

void func_56(var uParam0) // Position - 0xCAE Signature - 22 01 03 00 00 08
{
	*uParam0 = -1;
	uParam0->f_1 = 255;
	uParam0->f_2 = 0;
	return;
}

void func_57(int iParam0) // Position - 0xCC5 Signature - 22 01 17
{
	struct<20> eventData;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 20))
		return;

	switch (eventData.f_4)
	{
		case 0:
			break;
	
		case 1:
			break;
	
		case 2:
			break;
	}

	return;
}

struct<4> func_58(BOOL bParam0) // Position - 0xD04 Signature - 22 01 04 00 00 5D 17 00 18 27 0E
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_78(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_59(joaat("character"), func_79(), -1591664384, bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_59(joaat("character"), func_79(), -1591664384, false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_59(joaat("character"), func_79(), -1591664384, bParam0);
}

struct<4> func_59(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xDA4 Signature - 22 07 0D
{
	var outGuid;

	if (!func_48(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_78(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

int func_60(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0xDD5 Signature - 22 07 17
{
	var unk;

	unk.f_9 = -1591664384;

	if (func_80(uParam0, hParam4, &unk, iParam5, bParam6))
		return unk.f_4;

	return 0;
}

int func_61(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5, int iParam6) // Position - 0xE05 Signature - 22 07 09 00 00 4B
{
	return func_81(&uParam0, hParam4, bParam5, iParam6);
}

BOOL func_62(Any* panParam0) // Position - 0xE19 Signature - 22 01 27
{
	Hash hash;
	var guid;
	var guid2;
	int inventoryId;
	var guid3;
	var src;

	hash = func_43();

	if (!func_48(hash, 0))
		return false;

	guid = { func_58(true) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return false;

	guid2 = { func_59(joaat("kit_camp"), guid, 1084182731, true) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid2))
		return false;

	inventoryId = func_78(true);
	guid3 = { func_59(hash, guid2, -1911121386, true) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid2))
		return false;

	src.f_9 = -1591664384;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, &guid3, &src, 22, 1))
		return false;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 22);
	return true;
}

var func_63(int iParam0, int iParam1) // Position - 0xECA Signature - 22 02 04 00 00 73
{
	return func_82(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

void func_64(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20) // Position - 0xEE8 Signature - 22 15
{
	Player player;

	player = PLAYER::PLAYER_ID();

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam20))
		return;

	iParam0 = 11;
	iParam0.f_1 = player;
	iParam0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam0, 20, 6, &uParam20);
	return;
}

BOOL func_65(int iParam0, int iParam1) // Position - 0xF22 Signature - 22 02 04 00 00 66 00 66 01 03 09
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_66(int* piParam0, int iParam1) // Position - 0xF32 Signature - 22 02 04 00 00 66 00 66 01 03 08 00 03
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

void func_67(int* piParam0, int iParam1) // Position - 0xF42 Signature - 22 02 04 00 00 66 00 66 01 03 08 00 43
{
	MISC::CLEAR_BIT(piParam0, iParam1);
	return;
}

BOOL func_68(var uParam0, int iParam1) // Position - 0xF52 Signature - 22 02 04 00 00 66 00 27 0A 66 01 39 22 0F 00 8B 04
{
	if (func_65(uParam0->f_10, iParam1))
		return 1;

	return 0;
}

int func_69(var uParam0, int iParam1) // Position - 0xF6C Signature - 22 02 04 00 00 66 00 76
{
	if (func_65(*uParam0, iParam1))
		return 1;

	return 0;
}

BOOL func_70(var uParam0, int iParam1) // Position - 0xF85 Signature - 22 02 04 00 00 66 00 27 04 66 01 39 22 0F 00 8B
{
	if (func_65(uParam0->f_4, iParam1))
		return true;

	return false;
}

void func_71(var uParam0, int iParam1) // Position - 0xF9F Signature - 22 02 04 00 00 66 00 27 04 66 01 39 22 0F 00 05
{
	if (!func_65(uParam0->f_4, iParam1))
		return;

	func_67(&(uParam0->f_4), iParam1);
	return;
}

int func_72(int iParam0, Player plParam1, BOOL bParam2, BOOL bParam3) // Position - 0xFC2 Signature - 22 04 07 00 00 66 01
{
	int i;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam1))
		return -1;

	for (i = 0; i <= 12; i = i + 1)
	{
		if (Global_1235687[i /*697*/].f_571 != iParam0)
		{
		}
		else if (bParam2 && !func_75(i, 32, plParam1))
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

BOOL func_73(int iParam0) // Position - 0x1037 Signature - 22 01 03 00 00 66 00 2F 7E 6A 8B 06 00 66 00 6D 0C 77 69 50 01 01 22 02 04 00 00 66 00 39
{
	return iParam0 >= 0 && iParam0 <= 12;
}

BOOL func_74(int iParam0, int iParam1) // Position - 0x104D Signature - 22 02 04 00 00 66 00 39
{
	return func_83(iParam0) && func_84(Global_1235687[iParam0 /*697*/].f_568, iParam1);
}

BOOL func_75(int iParam0, int iParam1, Player plParam2) // Position - 0x1072 Signature - 22 03 05 00 00 66 02
{
	if (plParam2 == 255)
		plParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return func_83(iParam0) && func_84(Global_1225687[plParam2 /*303*/][iParam0 /*23*/].f_19, iParam1);
}

BOOL func_76(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x10A7 Signature - 22 03 07 00 00 66 00
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

BOOL func_77(int* piParam0, Any anParam1, var uParam2, Player plParam3) // Position - 0x10FE Signature - 22 04 16
{
	Player player;
	Hash hash;
	int uniqueIntForPlayer;
	Player player2;
	Ped playerPed;
	Player player3;
	Vector3 entityCoords;
	BOOL flag;
	var unk3;
	Vector3 vector;
	var unk6;
	BOOL flag2;

	player = plParam3;
	hash = _STOPWATCH_IS_INITIALIZED(&anParam1->[player /*12*/]);

	if (!func_48(hash, 0))
		return false;

	if (!func_68(&anParam1->[player /*12*/], 0))
		return false;

	if (func_68(&anParam1->[player /*12*/], 1))
		return false;

	uniqueIntForPlayer = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(plParam3);

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_55(), uniqueIntForPlayer, true, 0))
		return false;

	player2 = PLAYER::PLAYER_ID();
	playerPed = PLAYER::GET_PLAYER_PED(player2);
	player3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	entityCoords = { ENTITY::GET_ENTITY_COORDS(playerPed, false, false) };
	flag = false;

	if (func_68(&anParam1->[player /*12*/], 2) && !func_68(&anParam1->[player /*12*/], 3))
		flag = true;

	if (flag)
	{
		if (player == player3)
			flag = true;
		else if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(plParam3, func_55(), uniqueIntForPlayer))
			flag = true;
	}
	else
	{
		flag2 = func_86(plParam3, &unk3, &vector, &unk6);
	
		if (!flag2)
			return false;
	
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vector, true) > 100f)
			return false;
	}

	return true;
}

int func_78(BOOL bParam0) // Position - 0x1204 Signature - 22 01 03 00 00 39
{
	if (func_16() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_79() // Position - 0x1245 Signature - 22 00 06
{
	var unk;

	return unk;
}

BOOL func_80(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, int iParam6, BOOL bParam7) // Position - 0x1251 Signature - 22 08
{
	int inventoryId;

	inventoryId = func_78(bParam7);

	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(inventoryId, &uParam0, hParam4) <= iParam6)
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(inventoryId, &uParam0, hParam4, iParam6, panParam5))
		return false;

	return true;
}

int func_81(Any* panParam0, Hash hParam1, BOOL bParam2, int iParam3) // Position - 0x128B Signature - 22 04 14
{
	var unk;

	unk.f_9 = -1591664384;

	if (func_87(panParam0, hParam1, &unk, bParam2, iParam3))
		return unk.f_4;

	return 0;
}

var func_82(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x12B9 Signature - 22 0C 1A
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

	if (func_88() != 0)
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_89());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_89());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_89());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_90(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_91(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_92(i) != 1)
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
					if (!func_93(player2))
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

BOOL func_83(int iParam0) // Position - 0x164C Signature - 22 01 03 00 00 66 00 2F 7E 6A 8B 06 00 66 00 6D 0C 77 69 50 01 01 22 02 04 00 00 66 00 66
{
	return iParam0 >= 0 && iParam0 <= 12;
}

BOOL func_84(int iParam0, int iParam1) // Position - 0x1662 Signature - 22 02 04 00 00 66 00 66 01 69
{
	return iParam0 && iParam1 != false;
}

Hash _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x1671 Signature - 22 01 03 00 00 66 00 27
{
	return uParam0->f_1;
}

BOOL func_86(Player plParam0, var uParam1, var uParam2, var uParam3) // Position - 0x167D Signature - 22 04 07 00 00 66 00
{
	int scenario;

	if (!func_94(plParam0, &scenario))
		return 0;

	!TASK::DOES_SCENARIO_POINT_EXIST(scenario);
	*uParam1 = scenario;
	*uParam2 = { TASK::_GET_SCENARIO_POINT_COORDS(*uParam1, true) };
	*uParam3 = TASK::_GET_SCENARIO_POINT_HEADING(*uParam1, true);
	return 1;
}

BOOL func_87(Any* panParam0, Hash hParam1, Any* panParam2, BOOL bParam3, int iParam4) // Position - 0x16BC Signature - 22 05 0B 00 00 66
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (iParam4 == -1)
		iParam4 = func_78(bParam3);

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, panParam0, hParam1, &outGuid))
		return false;

	if (!func_95(&outGuid, panParam2, bParam3, false, iParam4))
		return false;

	return true;
}

int func_88() // Position - 0x170A Signature - 22 00 02 00 00 5D FD 0B 10 27 0C
{
	return Global_1051645.f_12;
}

char* func_89() // Position - 0x1718 Signature - 22 00 02 00 00 6D 80
{
	return "unnamed";
}

BOOL func_90(int iParam0) // Position - 0x1723 Signature - 22 01 04 00 00 2F 67 03 66 00
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

BOOL func_91(int iParam0) // Position - 0x17B2 Signature - 22 01 03 00 00 5D 17
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_96(36, iParam0);
}

int func_92(int iParam0) // Position - 0x17D0 Signature - 22 01 03 00 00 66 00 6D
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_93(Player plParam0) // Position - 0x181B Signature - 22 01 03 00 00 03
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_97(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_98(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_94(Player plParam0, var uParam1) // Position - 0x1860 Signature - 22 02 08 00 00 66
{
	Vector3 vector;
	int scenario;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	if (!func_99(plParam0, &vector))
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

BOOL func_95(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x18BE Signature - 22 05 07
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (iParam4 == -1)
		iParam4 = func_78(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return false;

	return true;
}

BOOL func_96(int iParam0, int iParam1) // Position - 0x18F8 Signature - 22 02 05 00 00 66 00 67
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_101(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_102())
		return func_101(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_101(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_97(Player plParam0) // Position - 0x196C Signature - 22 01 03 00 00 5D 77
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_98(Player plParam0) // Position - 0x1989 Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 32
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_103(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_104(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

BOOL func_99(Player plParam0, var uParam1) // Position - 0x1A0C Signature - 22 02 05 00 00 66 00 03
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	player = plParam0;
	*uParam1 = { Global_1144526[player /*83*/].f_38.f_8 };
	return true;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x1A39 Signature - 22 03 05 00 00 66 00
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_101(Any* panParam0, int iParam1, int iParam2) // Position - 0x1A63 Signature - 22 03 07 00 00 66 01
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_102() // Position - 0x1A9A Signature - 22 00 02 00 00 5D DD
{
	return Global_1102813.f_3672;
}

void func_103(Player plParam0) // Position - 0x1AA9 Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 77
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_104(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_104(Player plParam0) // Position - 0x1B15 Signature - 22 01 03 00 00 66 00 5D
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

