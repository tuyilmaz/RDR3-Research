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
	int iLocal_16 = 0;
	var uLocal_17 = -1;
	var uLocal_18 = -1;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	var uLocal_40 = 0;
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
	var uLocal_76 = 4;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = -1;
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
	var uLocal_95 = -1;
	var uLocal_96 = -1;
	var uLocal_97 = -1;
	var uScriptParam_0 = -1;
#endregion

void main() // Position - 0x0 Signature - 22 00 03 00 00 48
{
	var unk;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	unk = uScriptParam_0;
	func_1(unk);
	func_2(&iLocal_16, &uScriptParam_0);

	while (!func_3(true, true) && iLocal_16 != 19)
	{
		func_4(&iLocal_16);
		BUILTIN::WAIT(0);
	}

	func_5(&iLocal_16);
	func_6();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0) // Position - 0x51 Signature - 22 01 03 00 00 03 00
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	return;
}

void func_2(var uParam0, var uParam1) // Position - 0x67 Signature - 22 02 04 00 00 66 01 76
{
	uParam0->f_1 = *uParam1;
	uParam0->f_2 = func_7(uParam0->f_1);
	uParam0->f_3 = { func_8(uParam0->f_1) };
	func_9(uParam0);
	return;
}

BOOL func_3(BOOL bParam0, BOOL bParam1) // Position - 0x96 Signature - 22 02 05 00 00 5D 17
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

void func_4(var uParam0) // Position - 0x176 Signature - 22 01 03 00 00 66 00 39 EE
{
	func_10(uParam0);
	return;
}

BOOL func_5(var uParam0) // Position - 0x184 Signature - 22 01 05 00 00 66 00 27
{
	var unk;

	if (SCRIPTS::DOES_THREAD_EXIST(uParam0->f_7) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_7, false))
		SCRIPTS::_REQUEST_THREAD_EXIT(uParam0->f_7);

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_6))
		VOLUME::DELETE_VOLUME(uParam0->f_6);

	if (!func_11(uParam0->f_1))
		if (func_12(uParam0->f_15))
			UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(uParam0->f_15, false);

	if (func_13(uParam0, 2))
		NETWORK::NETWORK_SESSION_REMOVE_SESSION_FLAGS(func_14());

	func_15(uParam0, false);
	func_16(uParam0);
	func_17(uParam0->f_2);
	func_18(uParam0, -1);
	func_19(uParam0);

	if (func_20(32768))
		func_21();

	func_22(uParam0);
	func_23(2);
	func_24();
	unk = { func_25(uParam0->f_1) };

	if (func_27(func_26(), unk))
		func_28();

	if (func_29(unk) || func_30(unk))
	{
		func_31(unk, false, -1, 0, false);
		func_32(false);
	}

	return true;
}

void func_6() // Position - 0x27D Signature - 22 00 02 00 00 03 00
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

int func_7(int iParam0) // Position - 0x289 Signature - 22 01 03 00 00 66 00 08 15 04 00 08
{
	if (iParam0 == -1)
		return -1;

	return Global_1149172.f_1[iParam0 /*27*/].f_1;
}

Vector3 func_8(int iParam0) // Position - 0x2A7 Signature - 22 01 03 00 00 1D
{
	return Global_1149172.f_1[iParam0 /*27*/].f_7;
}

void func_9(var uParam0) // Position - 0x2BD Signature - 22 01 0B
{
	var name;

	TEXT_LABEL_ASSIGN_STRING(&name, "relPlayerClone", 64);
	TEXT_LABEL_APPEND_STRING(&name, "_", 64);
	TEXT_LABEL_APPEND_INT(&name, uParam0->f_1, 64);
	PED::ADD_RELATIONSHIP_GROUP(&name, &(uParam0->f_14));
	func_33(2, uParam0->f_14);
	return;
}

void func_10(var uParam0) // Position - 0x2EE Signature - 22 01 03 00 00 66 00 76
{
	if (*uParam0 != 18 && func_34(uParam0))
		func_35(uParam0, 18, true, true);

	func_36(uParam0);

	switch (*uParam0)
	{
		case 0:
			func_37(uParam0);
			break;
	
		case 1:
			func_38(uParam0);
			break;
	
		case 2:
			func_39(uParam0);
			break;
	
		case 3:
			func_40(uParam0);
			break;
	
		case 4:
			func_41(uParam0);
			break;
	
		case 5:
			func_42(uParam0);
			break;
	
		case 6:
			func_43(uParam0);
			break;
	
		case 7:
			func_44(uParam0);
			break;
	
		case 8:
			func_45(uParam0);
			break;
	
		case 9:
			func_46(uParam0);
			break;
	
		case 10:
			func_47(uParam0);
			break;
	
		case 11:
			func_48(uParam0);
			break;
	
		case 12:
			func_49(uParam0);
			break;
	
		case 13:
			func_50(uParam0);
			break;
	
		case 14:
			func_51(uParam0);
			break;
	
		case 15:
			func_52(uParam0);
			break;
	
		case 16:
			func_53(uParam0);
			break;
	
		case 17:
			func_54(uParam0);
			break;
	
		case 18:
			func_55(uParam0);
			break;
	}

	return;
}

BOOL func_11(var uParam0) // Position - 0x440 Signature - 22 01 03 00 00 03 01 00 34
{
	if (NETWORK::NETWORK_HAVE_ROS_BANNED_PRIV())
		return true;

	if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE(7))
		return true;

	return false;
}

BOOL func_12(int iParam0) // Position - 0x460 Signature - 22 01 04 00 00 4D
{
	int messageState;

	messageState = 6;

	if (func_56(iParam0))
		messageState = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);

	return messageState != 6;
}

BOOL func_13(var uParam0, int iParam1) // Position - 0x480 Signature - 22 02 04 00 00 66 00 27 4E
{
	return func_57(uParam0->f_78, iParam1);
}

int func_14() // Position - 0x492 Signature - 22 00 02 00 00 11 39 0C 06 00 8B 03
{
	if (func_20(2))
	{
	}

	return 152;
}

void func_15(var uParam0, BOOL bParam1) // Position - 0x4A7 Signature - 22 02 04 00 00 66 01 8B 24
{
	if (bParam1)
	{
		if (!func_13(uParam0, 32))
		{
			func_58(uParam0, 32);
			func_59(true, true, 0, 1, 0, 0, 1, false, 0);
		}
	}
	else if (func_13(uParam0, 32))
	{
		func_60(uParam0, 32);
		func_59(false, true, 0, 0, 0, 0, 0, false, 0);
	}

	return;
}

void func_16(var uParam0) // Position - 0x4F8 Signature - 22 01 03 00 00 66 00 27 08
{
	if (func_61(uParam0->f_8))
		func_62(&(uParam0->f_8), true, true);

	return;
}

void func_17(int iParam0) // Position - 0x515 Signature - 22 01 03 00 00 03 01 00 2C
{
	if (MINIGAME::_0x3EECAADAB0D9FE29() == func_63(iParam0))
		MINIGAME::_0x18A0D48DF9211C07();

	return;
}

void func_18(var uParam0, int iParam1) // Position - 0x531 Signature - 22 02 05 00 00 66 00 27
{
	Ped playerPed;

	if (uParam0->f_79 != iParam1)
	{
		uParam0->f_79 = iParam1;
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
			return;
	
		playerPed = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	
		if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
			return;
	
		if (ENTITY::IS_ENTITY_DEAD(playerPed))
			return;
	
		if (uParam0->f_79 == -1)
		{
			if (DECORATOR::DECOR_EXIST_ON(playerPed, "iMinigameHash"))
				DECORATOR::DECOR_REMOVE(playerPed, "iMinigameHash");
		
			if (DECORATOR::DECOR_EXIST_ON(playerPed, "iMinigameSeat"))
				DECORATOR::DECOR_REMOVE(playerPed, "iMinigameSeat");
		}
		else
		{
			if (!DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("iMinigameHash", INT))
				return;
		
			if (!DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("iMinigameSeat", INT))
				return;
		
			DECORATOR::DECOR_SET_INT(playerPed, "iMinigameHash", uParam0->f_1);
			DECORATOR::DECOR_SET_INT(playerPed, "iMinigameSeat", iParam1);
		}
	}

	return;
}

void func_19(var uParam0) // Position - 0x5E9 Signature - 22 01 03 00 00 66 00 6D 80 39 80 04 00 8B
{
	if (func_13(uParam0, 128))
	{
		func_64(131072);
		func_60(uParam0, 128);
	}

	return;
}

BOOL func_20(int iParam0) // Position - 0x60C Signature - 22 01 03 00 00 5D F4 88 11 27 91 66 00 39 33 20 00 50
{
	return func_57(Global_1149172.f_145, iParam0);
}

void func_21() // Position - 0x620 Signature - 22 00 02 00 00 2F 39
{
	func_65(false);
	return;
}

void func_22(var uParam0) // Position - 0x62D Signature - 22 01 03 00 00 2F 66 00 6C 4E
{
	uParam0->f_78 = 0;
	return;
}

void func_23(int iParam0) // Position - 0x63A Signature - 22 01 03 00 00 5D F4 88 11 27 91 66 00 39 33 20 00 8B
{
	if (func_57(Global_1149172.f_145, iParam0))
		func_66(&(Global_1149172.f_145), iParam0);

	return;
}

void func_24() // Position - 0x65D Signature - 22 00 02 00 00 39 81
{
	func_67();
	func_23(128);
	func_23(256);
	func_23(512);
	func_23(1024);
	func_23(2048);
	func_23(4096);
	func_23(8192);
	func_23(16384);
	func_23(32768);
	return;
}

struct<2> func_25(int iParam0) // Position - 0x6A8 Signature - 22 01 03 00 00 11 66 00 5D F4
{
	return Global_1149172.f_1[iParam0 /*27*/].f_4;
}

struct<2> func_26() // Position - 0x6BE Signature - 22 00 02 00 00 11 5D 84 0A 10 2D 50
{
	return Global_1051268;
}

BOOL func_27(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x6CC Signature - 22 04 06 00 00 66 00 66
{
	return uParam0 == uParam2 && uParam0.f_1 == uParam2.f_1;
}

void func_28() // Position - 0x6E7 Signature - 22 00 02 00 00 39 A1
{
	if (!func_68())
		return;

	if (!func_69(Global_1051268))
		return;

	func_70(&Global_1051268);
	return;
}

BOOL func_29(var uParam0, var uParam1) // Position - 0x713 Signature - 22 02 05 00 00 11 4B 00 2D 39 F8 22 00 67 04 66 04 09
{
	int num;

	num = func_71(uParam0);
	return num == 1 || num == 2;
}

BOOL func_30(var uParam0, var uParam1) // Position - 0x733 Signature - 22 02 05 00 00 11 4B 00 2D 39 F8 22 00 67 04 66 04 1D
{
	int num;

	num = func_71(uParam0);
	return num == 3 || num == 4;
}

void func_31(var uParam0, var uParam1, BOOL bParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x753 Signature - 22 06 09
{
	int num;

	if (!func_69(uParam0))
	{
		!bParam2;
		return;
	}

	if (!func_30(uParam0) && !func_29(uParam0))
	{
		!bParam2;
		return;
	}

	func_72(uParam0) == 0;

	if (iParam3 == 0 || iParam3 == 1 || iParam3 == 4)
		if (func_71(uParam0) == 3)
			func_73(true, -1706799532);
		else if (func_71(uParam0) == 4)
			func_73(false, -1706799532);

	if (func_71(uParam0) == 3 || func_71(uParam0) == 1 || bParam5 && func_71(uParam0) == 4 && STATS::STATSTRACKER_IS_INITIALIZED(func_72(uParam0)))
		if (iParam3 != -1)
			func_74(uParam0, iParam3, iParam4, 255, 0);
		else
			func_74(uParam0, 2, iParam4, 255, 0);

	func_75(uParam0, 0);

	if (func_27(func_76(0), uParam0))
	{
		func_77(true);
		func_78(false);
		func_79(false);
		func_80(1);
	}

	func_81(uParam0);
	Global_1051645.f_45.f_1 = 1;
	num = func_82(uParam0);

	if (num != 2 && num != 7)
		MISC::_0x1096603B519C905F("");

	return;
}

void func_32(BOOL bParam0) // Position - 0x8BA Signature - 22 01 04 00 00 5D 7C
{
	int num;

	if (Global_1900412.f_1 == 0 && !bParam0)
		return;

	num = 0;

	if (func_83() != -1)
		num = 1;

	if (Global_1900412.f_2 == 4 && Global_1900412.f_12 != Global_1900412.f_13 && !bParam0)
	{
		Global_1900412.f_1 = Global_1900412.f_2;
		Global_1900412.f_12 = Global_1900412.f_13;
		func_84(num, Global_1900412.f_12);
	}
	else
	{
		Global_1900412.f_1 = 0;
		Global_1900412.f_7 = num;
		Global_1900412.f_8 = func_85();
		Global_1900412.f_9 = func_86(Global_1893611.f_2);
		Global_1900412.f_11 = func_87(Global_1896646.f_41);
	
		if (Global_1900412.f_9 != -1 && Global_1900412.f_9 != 0)
			func_88(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
		else if (Global_1900412.f_11 != -1)
			func_88(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_11);
		else
			func_88(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
	}

	Global_1900412.f_2 = 0;
	return;
}

void func_33(int iParam0, Hash hParam1) // Position - 0x9DC Signature - 22 02 04 00 00 66 00 66 01 37
{
	func_89(iParam0, hParam1, joaat("rel_player_cop"));
	func_89(iParam0, hParam1, joaat("rel_player_0"));
	func_89(iParam0, hParam1, joaat("rel_player_1"));
	func_89(iParam0, hParam1, joaat("rel_player_2"));
	func_89(iParam0, hParam1, joaat("rel_player_3"));
	func_89(iParam0, hParam1, joaat("rel_player_4"));
	func_89(iParam0, hParam1, joaat("rel_player_5"));
	func_89(iParam0, hParam1, joaat("rel_player_6"));
	func_89(iParam0, hParam1, joaat("rel_player_7"));
	func_89(iParam0, hParam1, joaat("rel_player_8"));
	func_89(iParam0, hParam1, joaat("rel_player_9"));
	func_89(iParam0, hParam1, joaat("rel_player_10"));
	func_89(iParam0, hParam1, joaat("rel_player_11"));
	func_89(iParam0, hParam1, joaat("rel_player_12"));
	func_89(iParam0, hParam1, joaat("rel_player_13"));
	func_89(iParam0, hParam1, joaat("rel_player_14"));
	func_89(iParam0, hParam1, joaat("rel_player_15"));
	func_89(iParam0, hParam1, joaat("rel_player_16"));
	func_89(iParam0, hParam1, joaat("rel_player_17"));
	func_89(iParam0, hParam1, joaat("rel_player_18"));
	func_89(iParam0, hParam1, joaat("rel_player_19"));
	func_89(iParam0, hParam1, joaat("rel_player_20"));
	func_89(iParam0, hParam1, joaat("rel_player_21"));
	func_89(iParam0, hParam1, joaat("rel_player_22"));
	func_89(iParam0, hParam1, joaat("rel_player_23"));
	func_89(iParam0, hParam1, joaat("rel_player_24"));
	func_89(iParam0, hParam1, joaat("rel_player_25"));
	func_89(iParam0, hParam1, joaat("rel_player_26"));
	func_89(iParam0, hParam1, joaat("rel_player_27"));
	func_89(iParam0, hParam1, joaat("rel_player_28"));
	func_89(iParam0, hParam1, joaat("rel_player_29"));
	func_89(iParam0, hParam1, joaat("rel_player_30"));
	func_89(iParam0, hParam1, joaat("rel_player_31"));
	return;
}

BOOL func_34(var uParam0) // Position - 0xB91 Signature - 22 01 04 00 00 39 D2
{
	var unk;

	if (func_90())
	{
		return true;
	}
	else if (func_7(uParam0->f_1) == -1)
	{
		return true;
	}
	else if (func_91(func_25(uParam0->f_1), 0, 2048))
	{
		return true;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return true;
	}
	else if (BUILTIN::VDIST(Global_34, uParam0->f_3) > 100f)
	{
		if (func_92(255))
			return false;
	
		if (func_93())
			return false;
	
		if (PLAYER::_0x0B7803F6F7BB43E0())
			return false;
	
		return true;
	}
	else if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()) && !func_13(uParam0, 1))
	{
		return true;
	}

	if (*uParam0 > 8 && *uParam0 < 14)
		if (!func_94(uParam0->f_2, &unk))
			return true;

	return false;
}

void func_35(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xC6B Signature - 22 04 06 00 00 66 01
{
	*uParam0 = iParam1;

	if (bParam2)
		uParam0->f_80 = MISC::GET_GAME_TIMER();

	if (bParam3)
		uParam0->f_81 = MISC::GET_GAME_TIMER();

	return;
}

void func_36(var uParam0) // Position - 0xC92 Signature - 22 01 04 00 00 70
{
	float num;

	if (ENTITY::DOES_ENTITY_EXIST(Global_33) && !ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		num = BUILTIN::VDIST(Global_34, uParam0->f_3);
	
		if (num < 3f)
			PED::SET_PED_RESET_FLAG(Global_33, 2, true);
	
		if (num < 6f)
		{
			PED::SET_PED_RESET_FLAG(Global_33, 219, true);
			PED::SET_PED_RESET_FLAG(Global_33, 220, true);
			PED::SET_PED_RESET_FLAG(Global_33, 187, true);
			PED::SET_PED_RESET_FLAG(Global_33, 129, true);
		}
	}

	return;
}

void func_37(var uParam0) // Position - 0xD01 Signature - 22 01 03 00 00 39 56
{
	if (!func_95())
		return;

	if (HUD::_DOES_TEXT_BLOCK_EXIST(func_96(uParam0->f_2)))
		HUD::TEXT_BLOCK_REQUEST(func_96(uParam0->f_2));

	func_35(uParam0, 1, true, true);
	return;
}

void func_38(var uParam0) // Position - 0xD39 Signature - 22 01 04 00 00 09
{
	BOOL flag;

	flag = true;

	if (uParam0->f_81 == -1 || MISC::GET_GAME_TIMER() - uParam0->f_81 > 120000)
		uParam0->f_81 == -1;
	else if (func_20(4))
		if (func_92(255))
			flag = false;
	else if (HUD::_DOES_TEXT_BLOCK_EXIST(func_96(uParam0->f_2)) && !HUD::TEXT_BLOCK_IS_LOADED(func_96(uParam0->f_2)))
		flag = false;

	if (flag)
		if (!func_93())
			func_35(uParam0, 2, true, true);
		else if (func_20(4))
			func_35(uParam0, 6, true, true);

	return;
}

void func_39(var uParam0) // Position - 0xDD1 Signature - 22 01 04 00 00 66 00 27 01 39 8A
{
	float num;

	if (func_97(uParam0->f_1))
	{
		func_5(uParam0);
		func_35(uParam0, 15, true, true);
		return;
	}

	if (PLAYER::_0x0B7803F6F7BB43E0() && PLAYER::_0xC74EB3F2EC169F6B(-955807603) == joaat("Matchmaking") && PLAYER::_0xC74EB3F2EC169F6B(-769668011) == 3)
	{
		func_35(uParam0, 6, true, true);
		return;
	}

	if (!func_93())
	{
		num = func_98(uParam0->f_1);
	
		if (BUILTIN::VDIST(Global_34, uParam0->f_3) < num && ENTITY::DOES_ENTITY_EXIST(Global_33) && !ENTITY::IS_ENTITY_DEAD(Global_33) && !PED::IS_PED_DEAD_OR_DYING(Global_33, true))
		{
			if (uParam0->f_77 == 0f)
				MISC::GET_GROUND_Z_FOR_3D_COORD(Global_34, &(uParam0->f_77), false);
		
			if (func_99(uParam0))
			{
				Global_1149172.f_143 = uParam0->f_1;
				func_24();
				func_35(uParam0, 3, true, true);
				func_100(32768);
				func_101(10, false);
			}
		}
		else
		{
			func_16(uParam0);
		
			if (uParam0->f_77 != 0f)
				uParam0->f_77 = 0f;
		}
	}
	else
	{
		func_16(uParam0);
	
		if (func_20(4))
			func_35(uParam0, 6, true, true);
	}

	return;
}

void func_40(var uParam0) // Position - 0xEF6 Signature - 22 01 D0
{
	float num;
	var unk;
	var memberHandles;
	int i;
	int gangMembers;
	int num2;
	Player playerFromGamerHandle;
	int num3;
	int num4;
	var unk76;
	var unk137;

	if (func_97(uParam0->f_1))
	{
		func_5(uParam0);
		func_35(uParam0, 15, true, true);
		return;
	}

	if (!func_93())
	{
		num = func_98(uParam0->f_1);
	
		if (BUILTIN::VDIST(Global_34, uParam0->f_3) < num && ENTITY::DOES_ENTITY_EXIST(Global_33) && !ENTITY::IS_ENTITY_DEAD(Global_33) && !PED::IS_PED_DEAD_OR_DYING(Global_33, true) && !func_102())
		{
			if (uParam0->f_77 == 0f)
				MISC::GET_GROUND_Z_FOR_3D_COORD(Global_34, &(uParam0->f_77), false);
		
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6))
				func_104(&(uParam0->f_6), uParam0->f_3 + { 0.9f, 0f, 0f }, 0f, 0f, 0f, num + 1f, num + 1f, 0.9f, func_103(uParam0->f_2));
		
			if (func_105(Global_33, false, 0, true) == joaat("weapon_kit_camera") || func_105(Global_33, false, 0, true) == 332793555)
				func_106(false);
		
			if (func_20(256))
			{
				func_23(2);
				func_23(32768);
				func_21();
			
				if (!GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
				{
					func_35(uParam0, 6, true, true);
				}
				else
				{
					func_58(uParam0, 32768);
					unk.f_44 = 4;
					unk.f_52 = -1;
					uParam0->f_16 = { unk };
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16.f_1), "MG_ALERT", 16);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16.f_3), "MG_ALERT_GANGMS", 16);
					uParam0->f_16.f_43 = 2;
					uParam0->f_16.f_44[0] = 717564616;
					uParam0->f_16.f_44[1] = joaat("mg_cfg_cancel");
					func_107(&(uParam0->f_16), false);
					func_35(uParam0, 4, true, true);
				}
			}
			else if (func_20(128))
			{
				func_108(536870912);
				func_100(2);
				func_23(32768);
				func_21();
			
				if (!GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
				{
					func_35(uParam0, 6, true, true);
				}
				else if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
				{
					memberHandles = 7;
					num3 = func_109(uParam0->f_2);
					gangMembers = GANG::_NETWORK_GET_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()), &memberHandles);
				
					for (i = 0; i <= gangMembers - 1; i = i + 1)
					{
						playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&memberHandles[i /*2*/]);
					
						if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerFromGamerHandle) || PLAYER::IS_PLAYER_DEAD(playerFromGamerHandle))
						{
						}
						else
						{
							num4 = func_110(num3, playerFromGamerHandle);
						
							if (num4 == -993470410)
								num2 = num2 + 1;
						}
					}
				
					unk76.f_44 = 4;
					unk76.f_52 = -1;
				
					if (num2 > 0)
					{
						func_58(uParam0, 16384);
						uParam0->f_16 = { unk76 };
						TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16.f_1), "MG_ALERT", 16);
						TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16.f_3), "MG_ALERT_GANGLB", 16);
						uParam0->f_16.f_43 = 1;
						uParam0->f_16.f_44[0] = joaat("IB_OK");
						func_107(&(uParam0->f_16), false);
						func_35(uParam0, 4, true, true);
					}
					else if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > func_111(uParam0->f_2))
					{
						func_58(uParam0, 8192);
						uParam0->f_16 = { unk76 };
						TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16.f_1), "MG_ALERT", 16);
						TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16.f_3), "MG_ALERT_GANGLM", 16);
						uParam0->f_16.f_43 = 1;
						uParam0->f_16.f_44[0] = joaat("IB_OK");
						func_107(&(uParam0->f_16), false);
						func_35(uParam0, 4, true, true);
					}
					else
					{
						func_35(uParam0, 6, true, true);
					}
				}
				else
				{
					func_58(uParam0, 4096);
					unk137.f_44 = 4;
					unk137.f_52 = -1;
					uParam0->f_16 = { unk137 };
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16.f_1), "MG_ALERT", 16);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16.f_3), "MG_ALERT_GANGMA", 16);
					uParam0->f_16.f_43 = 2;
					uParam0->f_16.f_44[0] = 717564616;
					uParam0->f_16.f_44[1] = joaat("mg_cfg_cancel");
					func_107(&(uParam0->f_16), false);
					func_35(uParam0, 4, true, true);
				}
			}
			else if (!func_112())
			{
				func_67();
				func_23(32768);
				func_35(uParam0, 2, true, true);
			}
		}
		else
		{
			if (uParam0->f_77 != 0f)
				uParam0->f_77 = 0f;
		
			if (func_112())
				func_21();
		
			func_67();
			func_23(32768);
			func_35(uParam0, 2, true, true);
		}
	}
	else
	{
		if (func_112())
			func_21();
	
		func_67();
		func_23(32768);
	
		if (func_20(4))
			func_35(uParam0, 6, true, true);
	}

	return;
}

void func_41(var uParam0) // Position - 0x1329 Signature - 22 01 04 00 00 66 00 27 10
{
	int num;

	if (UISTICKYFEED::_UI_STICKY_FEED_GET_MESSAGE_STATE(uParam0->f_16) >= 3)
	{
		num = func_113(&(uParam0->f_16), joaat("warning_feed"), &(uParam0->f_16.f_49), true);
	
		if (func_13(uParam0, 4096) || func_13(uParam0, 32768))
		{
			if (num == 0)
			{
				func_114(true);
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(uParam0->f_16);
				uParam0->f_16 = 0;
				func_60(uParam0, 4096);
				func_60(uParam0, 32768);
				func_35(uParam0, 5, true, true);
			}
			else if (num == 1)
			{
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(uParam0->f_16);
				uParam0->f_16 = 0;
				func_115(536870912);
				func_23(2);
				func_24();
				func_60(uParam0, 4096);
				func_60(uParam0, 32768);
				func_35(uParam0, 2, true, true);
			}
		}
		else if (func_13(uParam0, 8192))
		{
			if (num == 0)
			{
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(uParam0->f_16);
				uParam0->f_16 = 0;
				func_115(536870912);
				func_23(2);
				func_24();
				func_60(uParam0, 8192);
				func_35(uParam0, 2, true, true);
			}
		}
		else if (func_13(uParam0, 16384))
		{
			if (num == 0)
			{
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(uParam0->f_16);
				uParam0->f_16 = 0;
				func_115(536870912);
				func_23(2);
				func_24();
				func_60(uParam0, 16384);
				func_35(uParam0, 2, true, true);
			}
		}
	}

	return;
}

void func_42(var uParam0) // Position - 0x1476 Signature - 22 01 03 00 00 03 01 00 60
{
	if (GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
		return;

	func_35(uParam0, 6, true, true);
	return;
}

void func_43(var uParam0) // Position - 0x1499 Signature - 22 01 03 00 00 42
{
	if (func_20(4))
	{
		if (func_92(255))
			return;
	
		func_58(uParam0, 1);
		func_100(2);
	}

	func_116(func_25(uParam0->f_1), true);
	func_100(1);
	func_35(uParam0, 7, false, true);
	return;
}

void func_44(var uParam0) // Position - 0x14DC Signature - 22 01 07 00 00 66 00 25
{
	var unk;
	var unk2;

	if (func_13(uParam0, 512))
	{
		if (func_117())
			func_58(uParam0, 2048);
	
		if (!func_13(uParam0, 1024) && func_13(uParam0, 2048) && !func_117() || Global_1102813.f_26.f_3368.f_5)
		{
			unk2 = { func_118(uParam0->f_1, &unk) };
		
			if (!_IS_NULL_VECTOR(unk2))
				func_120(unk2, unk, true);
		
			func_58(uParam0, 1024);
		}
	
		if (func_92(255))
		{
			func_121(true);
			return;
		}
	}

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		func_58(uParam0, 512);
		return;
	}

	if (!func_13(uParam0, 1))
	{
		if (func_126(2, func_122(uParam0->f_2), 3, func_123(uParam0->f_1), func_25(uParam0->f_1), func_124(), -1, false, func_125(), 0))
		{
			if (func_20(2))
				func_108(536870912);
		
			func_58(uParam0, 1);
		}
	}
	else if (!func_93())
	{
		if (!func_20(4))
		{
			if (!func_20(262144))
				func_128(func_127(uParam0->f_1), 10000, 0, 0, 0, true);
		
			func_35(uParam0, 16, true, true);
		}
	
		func_24();
	}
	else if (func_129())
	{
		if (!SCRIPTS::DOES_THREAD_EXIST(uParam0->f_7))
			SCRIPTS::REQUEST_SCRIPT(func_130(uParam0->f_2));
	
		if (!func_20(2))
		{
			NETWORK::_NETWORK_SESSION_ADD_SESSION_FLAGS(func_14());
		
			if (NETWORK::NETWORK_IS_HOST() && !func_131(NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS(), 8))
				return;
		}
	
		func_132(true);
		NETWORK::_NETWORK_SESSION_SET_PLAYER_FLAGS(0);
		func_133();
		Global_1149172.f_143 = uParam0->f_1;
	
		if (func_20(4))
		{
			func_23(4);
			func_58(uParam0, 256);
		}
		else
		{
			func_100(512);
			func_100(1024);
		}
	
		func_60(uParam0, 1);
		func_58(uParam0, 2);
	
		if (!func_20(8))
			func_58(uParam0, 32);
	
		func_35(uParam0, 8, false, true);
	}

	return;
}

void func_45(var uParam0) // Position - 0x16DE Signature - 22 01 05 00 00 66 00 42
{
	int num;
	BOOL flag;

	if (!func_13(uParam0, 4))
	{
		num = 0;
	
		if (func_20(2))
			num = 1;
	
		if (func_134(uParam0->f_2, uParam0->f_1, num))
		{
			func_58(uParam0, 4);
		}
		else
		{
			func_135(512);
			func_35(uParam0, 16, true, true);
		}
	}
	else
	{
		flag = false;
	
		if (func_94(uParam0->f_2, &flag))
		{
			func_136(func_25(uParam0->f_1), true, false, true);
			func_138(func_137(uParam0->f_2));
			func_35(uParam0, 9, false, true);
		}
		else if (flag)
		{
			func_135(512);
			func_35(uParam0, 16, true, true);
		}
	}

	return;
}

void func_46(var uParam0) // Position - 0x177C Signature - 22 01 30 00 00 39
{
	int num;
	BOOL flag;
	int nextEventType;
	var unk;

	if (!func_93())
	{
		func_128(func_127(uParam0->f_1), 10000, 0, 0, 0, true);
		func_35(uParam0, 16, true, true);
	}

	if (!func_13(uParam0, 8))
	{
		MINIGAME::_MINIGAME_REQUEST_SEAT_AT_TABLE(&(uParam0->f_9));
		func_58(uParam0, 8);
	}
	else if (!func_13(uParam0, 16))
	{
		flag = false;
	
		if (func_139(uParam0, &flag, &num))
		{
			if (flag)
			{
				func_58(uParam0, 16);
			}
			else
			{
				if (num == -908749671)
					func_140(uParam0->f_2, 1320901890, 0);
				else
					func_140(uParam0->f_2, -1700673948, 0);
			
				func_35(uParam0, 16, true, true);
			}
		}
	}
	else
	{
		nextEventType = MINIGAME::_MINIGAME_GET_NEXT_EVENT_TYPE();
	
		if (nextEventType == -1553724839)
		{
			unk.f_10 = 6;
		
			if (MINIGAME::_MINIGAME_GET_NEXT_EVENT(&unk, 42))
			{
				if (unk.f_9 < 0 || unk.f_9 >= func_111(uParam0->f_2))
				{
					func_128(func_127(uParam0->f_1), 10000, 0, 0, 0, true);
					func_35(uParam0, 16, true, true);
					return;
				}
			
				func_18(uParam0, unk.f_9);
				func_141(uParam0);
				func_35(uParam0, 10, false, true);
			}
			else
			{
				func_128(func_127(uParam0->f_1), 10000, 0, 0, 0, true);
				func_35(uParam0, 16, true, true);
			}
		}
	}

	return;
}

void func_47(var uParam0) // Position - 0x18CB Signature - 22 01 27
{
	struct<36> args;

	if (uParam0->f_81 == -1 || MISC::GET_GAME_TIMER() - uParam0->f_81 > 120000)
	{
		func_35(uParam0, 16, true, true);
	}
	else
	{
		if (!SCRIPTS::HAS_SCRIPT_LOADED(func_130(uParam0->f_2)))
			return;
	
		args = -1;
		args.f_1 = -1;
		args.f_2 = -1;
		args.f_4 = -1;
		args.f_4.f_1 = -1;
		args.f_13 = -1;
		args.f_14 = -1;
		args.f_25 = 6;
		args.f_32 = -1;
		args.f_33 = 255;
		args = { Global_1149172.f_1[uParam0->f_1 /*27*/] };
		args.f_14 = uParam0->f_2;
		args.f_16 = { uParam0->f_3 };
		args.f_19 = func_142(uParam0->f_1);
		args.f_21 = uParam0->f_1;
		args.f_23 = Global_33;
		args.f_33 = 255;
		args.f_35 = 0;
		args.f_32 = uParam0->f_79;
		Global_1149172.f_1[uParam0->f_1 /*27*/].f_12 = uParam0->f_79;
		args.f_23 = uParam0->f_13;
	
		if (func_20(2))
		{
			args.f_34 = 1;
			args.f_20 = func_143(uParam0->f_1, 1);
		}
		else
		{
			args.f_34 = 0;
			args.f_20 = func_143(uParam0->f_1, 0);
		
			if (func_144(uParam0->f_1))
				NETWORK::NETWORK_SET_RECENT_GAMERS_ENABLED(false);
		}
	
		uParam0->f_7 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_130(uParam0->f_2), &args, 36, 6500);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_130(uParam0->f_2));
		func_145(uParam0->f_1);
		func_146(uParam0->f_1, 1);
		MISC::CLEAR_AREA(uParam0->f_3, 2f, 65536);
	
		if (SCRIPTS::DOES_THREAD_EXIST(uParam0->f_7))
		{
			if (func_20(8))
			{
				func_100(32);
				func_35(uParam0, 12, true, true);
			}
			else if (func_13(uParam0, 512))
			{
				func_100(32);
				func_35(uParam0, 12, true, true);
			}
			else
			{
				func_147();
				func_35(uParam0, 11, false, true);
			}
		}
	}

	return;
}

void func_48(var uParam0) // Position - 0x1A9B Signature - 22 01 03 00 00 39 92
{
	if (func_148() || func_149())
	{
		if (uParam0->f_80 == -1 || MISC::GET_GAME_TIMER() - uParam0->f_80 > 1000)
		{
		}
		else
		{
			return;
		}
	}
	else if (uParam0->f_81 == -1 || MISC::GET_GAME_TIMER() - uParam0->f_81 > 120000)
	{
	}
	else
	{
		return;
	}

	if (func_150(4194304))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		func_151(&(Global_1572887.f_23.f_24));
		func_115(4194304);
	}

	func_100(32);
	func_35(uParam0, 12, true, true);
	return;
}

void func_49(var uParam0) // Position - 0x1B37 Signature - 22 01 04 00 00 39 18
{
	BOOL flag;

	if (!func_93())
	{
		func_128(func_127(uParam0->f_1), 10000, 0, 0, 0, true);
		func_35(uParam0, 16, true, true);
	}
	else if (!SCRIPTS::DOES_THREAD_EXIST(uParam0->f_7))
	{
		func_128(func_127(uParam0->f_1), 10000, 0, 0, 0, true);
		func_35(uParam0, 16, true, true);
	}

	if (func_13(uParam0, 256))
	{
		flag = true;
	
		if (!func_154(func_152(uParam0), func_153(uParam0->f_1), true))
			flag = false;
	
		if (HUD::_DOES_TEXT_BLOCK_EXIST(func_96(uParam0->f_2)) && !HUD::TEXT_BLOCK_IS_LOADED(func_96(uParam0->f_2)))
			flag = false;
	
		if (!flag)
			return;
	}

	if (func_155(uParam0->f_1, 2))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
	
		if (func_20(8))
		{
			func_23(8);
			func_35(uParam0, 13, false, true);
		}
		else
		{
			func_35(uParam0, 13, true, true);
		}
	}

	return;
}

void func_50(var uParam0) // Position - 0x1C24 Signature - 22 01 04 00 00 03
{
	int num;

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (uParam0->f_80 == -1 || MISC::GET_GAME_TIMER() - uParam0->f_80 > 333)
			func_15(uParam0, false);
		else
			return;
	}
	else
	{
		uParam0->f_80 = MISC::GET_GAME_TIMER();
	
		if (uParam0->f_81 == -1 || MISC::GET_GAME_TIMER() - uParam0->f_81 > 120000)
		{
		}
		else
		{
			return;
		}
	}

	num = func_156(uParam0->f_1);

	if (num == 0)
	{
		func_157(uParam0->f_1, MISC::GET_FRAME_COUNT() + 1);
	}
	else if (MISC::GET_FRAME_COUNT() >= num)
	{
		CAM::DO_SCREEN_FADE_IN(1000);
		AUDIO::_STOP_ALL_SCRIPTED_AUDIO_SOUNDS();
		func_35(uParam0, 14, true, true);
	}

	return;
}

void func_51(var uParam0) // Position - 0x1CCC Signature - 22 01 05 00 00 2F 67 03 66 00
{
	BOOL flag;
	Entity entity;

	flag = false;

	if (!SCRIPTS::DOES_THREAD_EXIST(uParam0->f_7))
	{
		flag = true;
	}
	else if (func_155(uParam0->f_1, 4) && MISC::GET_FRAME_COUNT() >= func_158(uParam0->f_1))
	{
		flag = true;
	}
	else if (func_159() == 1)
	{
		func_100(8);
		flag = true;
	}

	if (flag)
	{
		if (func_93())
		{
			!PLAYER::IS_PLAYER_CONTROL_ON(Global_1295666.f_5);
			CAM::IS_SCREEN_FADING_OUT();
			NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
		}
	
		if (func_160() == uParam0->f_1)
		{
			if (func_144(uParam0->f_1))
				if (NETWORK::_0x273E04A3A7AD1F2D() == false)
					NETWORK::NETWORK_SET_RECENT_GAMERS_ENABLED(true);
		
			entity = func_161(uParam0->f_1);
		
			if (ENTITY::DOES_ENTITY_EXIST(entity))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(entity, false, true);
				uParam0->f_13 = entity;
			}
		
			func_162();
			func_100(64);
		}
	
		func_35(uParam0, 16, true, true);
	}

	return;
}

void func_52(var uParam0) // Position - 0x1D9B Signature - 22 01 03 00 00 66 00 27 01 39
{
	if (!func_97(uParam0->f_1))
		func_35(uParam0, 16, true, true);

	return;
}

void func_53(var uParam0) // Position - 0x1DB9 Signature - 22 01 03 00 00 39 18
{
	if (func_93())
		if (!PLAYER::IS_PLAYER_CONTROL_ON(Global_1295666.f_5))
			NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();

	if (func_5(uParam0))
		func_35(uParam0, 17, true, true);

	return;
}

void func_54(var uParam0) // Position - 0x1DED Signature - 22 01 30 00 00 66
{
	var unk;
	float num;
	int i;
	Vector3 vector;
	float heading;
	int j;

	if (uParam0->f_81 == -1 || MISC::GET_GAME_TIMER() - uParam0->f_81 > 120000)
	{
	}
	else
	{
		if (func_92(255))
		{
			if (func_20(64))
			{
				if (func_163(255))
				{
					unk.f_5 = 2;
					unk.f_1 = { Global_1149172.f_1[uParam0->f_1 /*27*/].f_7 };
					unk.f_16 = 1;
					unk.f_6.f_9 = joaat("volSphere");
					unk.f_6.f_6 = { unk.f_1 };
					unk.f_6 = { 1.5f, 1.5f, 5f };
					unk.f_17.f_9 = joaat("volSphere");
					unk.f_17.f_6 = { unk.f_1 };
					unk.f_17 = { 30f, 30f, 30f };
					num.f_5 = 1;
				
					if (!func_164(Global_1295666.f_12, &(num.f_6), &num))
					{
						num.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
						num = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
					}
				
					NETWORK::NETWORK_SPAWN_CONFIG_SET_FLAGS(32);
					NETWORK::_NETWORK_SPAWN_CONFIG_ADD_PROPERTY_PREFERENCE(5, true, 0.9f);
				
					for (i = 0; i <= 5; i = i + 1)
					{
						vector = { func_165(uParam0->f_1, Global_1149172.f_1[uParam0->f_1 /*27*/].f_12, i, &heading) };
					
						if (!_IS_NULL_VECTOR(vector))
							NETWORK::_NETWORK_SPAWN_CONFIG_ADD_SPAWN_POINT(vector, heading);
					}
				
					func_166(unk, num, 0, 0, 0);
				}
			}
		
			return;
		}
	
		if (func_20(8) && func_20(4) && BUILTIN::VDIST(Global_34, uParam0->f_3) <= 100f)
		{
		}
		else
		{
			if (CAM::IS_SCREEN_FADED_OUT())
				return;
		
			if (func_93())
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(Global_1295666.f_5))
				{
				}
				else
				{
					NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
				}
			
				return;
			}
		}
	}

	for (j = 0; j < 32; j = j + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(j)))
		{
		}
	
		func_167(j);
		func_168(j, false);
		func_167(j);
	}

	func_23(16);
	func_169(uParam0);
	func_170();
	func_23(64);
	func_171(false);
	func_35(uParam0, 0, true, true);
	return;
}

void func_55(var uParam0) // Position - 0x200C Signature - 22 01 03 00 00 66 00 39 84
{
	if (func_5(uParam0))
		func_35(uParam0, 19, true, true);

	return;
}

BOOL func_56(int iParam0) // Position - 0x2027 Signature - 22 01 03 00 00 66 00 2F 1C
{
	return iParam0 != 0;
}

BOOL func_57(BOOL bParam0, int iParam1) // Position - 0x2033 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 02
{
	return bParam0 && iParam1 != false;
}

void func_58(var uParam0, int iParam1) // Position - 0x2042 Signature - 22 02 04 00 00 66 00 80 4E 66 01 39 54
{
	func_172(&(uParam0->f_78), iParam1);
	return;
}

void func_59(BOOL bParam0, BOOL bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8) // Position - 0x2054 Signature - 22 09 0B
{
	if (bParam0)
	{
		Global_1072759.f_28644.f_66.f_28 = 1;
		Global_1072759.f_28644.f_66.f_29 = iParam3;
		Global_1072759.f_28644.f_66.f_26 = iParam6;
		Global_1072759.f_28644.f_66.f_27 = iParam8;
	
		if (bParam7)
			MISC::SET_BIT(&(Global_1072759.f_28644.f_66.f_8), 18);
	}
	else
	{
		Global_1072759.f_28644.f_66.f_30 = 1;
		Global_1072759.f_28644.f_66.f_33 = !bParam1;
		Global_1072759.f_28644.f_66.f_31 = iParam2;
		Global_1072759.f_28644.f_66.f_32 = iParam4;
		Global_1072759.f_28644.f_66.f_35 = iParam5;
	
		if (MISC::IS_BIT_SET(Global_1072759.f_28644.f_66.f_8, 18))
			MISC::CLEAR_BIT(&(Global_1072759.f_28644.f_66.f_8), 18);
	}

	return;
}

void func_60(var uParam0, int iParam1) // Position - 0x2113 Signature - 22 02 04 00 00 66 00 80 4E 66 01 39 71
{
	func_66(&(uParam0->f_78), iParam1);
	return;
}

BOOL func_61(int iParam0) // Position - 0x2125 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 6D
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

void func_62(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2164 Signature - 22 03 06 00 00 66 01 6A
{
	int num;

	if (bParam1 && !func_61(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_173(*uParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_174(num);
	*uParam0 = 0;
	return;
}

int func_63(int iParam0) // Position - 0x21B8 Signature - 22 01 03 00 00 66 00 3C 04 00 00 00 00 00 15
{
	switch (iParam0)
	{
		case 0:
			return -1150372370;
	
		case 1:
			return 355424894;
	
		case 2:
			return -471827042;
	
		case 3:
			return -2033178055;
	
		default:
		
	}

	return 0;
}

void func_64(int iParam0) // Position - 0x2201 Signature - 22 01 03 00 00 03 01 00 B7 5D 77 5E 10 18 69 53 80 01 63 08 27 07 66 00 39 33 20 00 8B
{
	if (func_57(Global_1072759.f_21353.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7, iParam0))
		func_66(&(Global_1072759.f_21353.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7), iParam0);

	return;
}

void func_65(BOOL bParam0) // Position - 0x223A Signature - 22 01 03 00 00 66 00 8B 17
{
	if (bParam0)
		if (!Global_1896762.f_352)
			Global_1896762.f_352 = bParam0;
	else if (Global_1896762.f_352)
		Global_1896762.f_352 = bParam0;

	return;
}

void func_66(BOOL bParam0, int iParam1) // Position - 0x2271 Signature - 22 02 04 00 00 66 00 66 01 39 21
{
	func_175(bParam0, iParam1);
	return;
}

void func_67() // Position - 0x2281 Signature - 22 00 02 00 00 21
{
	func_23(65536);
	func_23(131072);
	func_23(262144);
	return;
}

BOOL func_68() // Position - 0x22A1 Signature - 22 00 02 00 00 11 5D 84 0A 10 2D 39
{
	return func_69(Global_1051268);
}

BOOL func_69(var uParam0, var uParam1) // Position - 0x22B3 Signature - 22 02 04 00 00 66 00 39 36
{
	if (!func_176(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_177(uParam0))
		return false;

	return true;
}

void func_70(int iParam0) // Position - 0x22E7 Signature - 22 01 03 00 00 08
{
	*iParam0 = -1;
	iParam0->f_1 = -1;
	return;
}

int func_71(var uParam0, var uParam1) // Position - 0x22F8 Signature - 22 02 05 00 00 11 4B 00 2D 39 B3 22 00 05 8B 04 00 08 50 02 01 11
{
	int num;

	if (!func_69(uParam0))
		return -1;

	num = func_178(uParam0);

	if (num < 0)
		return 0;

	return Global_1072759.f_19487.f_1[num /*3*/].f_2;
}

Hash func_72(var uParam0, var uParam1) // Position - 0x2333 Signature - 22 02 04 00 00 11 4B 00 2D 39 B2
{
	return func_179(uParam0);
}

int func_73(BOOL bParam0, Hash hParam1) // Position - 0x2343 Signature - 22 02 04 00 00 03
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return 0;

	if (!Global_1102813.f_16)
		return 0;

	if (!func_180())
		return 0;

	if (!func_181())
		return 0;

	Global_0 = hParam1;

	if (bParam0)
		func_182(&Global_0, 8);

	func_182(&Global_0, 1);
	return 1;
}

void func_74(var uParam0, var uParam1, int iParam2, int iParam3, Player plParam4, int iParam5) // Position - 0x2399 Signature - 22 06 18 00 00 11
{
	int deedType;
	Hash deedHash;
	Hash data;
	char* str;

	deedType = func_183(func_82(uParam0));
	deedHash = func_72(uParam0);
	str = "";
	data.f_1 = iParam3;
	data = 0;
	data.f_2 = 0;

	if (func_83() == 0)
	{
		data = Global_265213.f_122484.f_80.f_12;
		str = func_184(Global_265213.f_122484.f_80.f_22);
		func_185(uParam0, &data, iParam2);
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

void func_75(var uParam0, var uParam1, int iParam2) // Position - 0x2468 Signature - 22 03 05 00 00 11 4B 00 2D 39 B3 22 00 05 8B 03 00 50 03 00 66
{
	if (!func_69(uParam0))
		return;

	if (iParam2 == 0 || iParam2 == -1)
		func_186(uParam0);
	else
		func_187(uParam0, iParam2);

	func_188();
	return;
}

struct<2> func_76(int iParam0) // Position - 0x24AB Signature - 22 01 03 00 00 11 66 00 5D AC
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

void func_77(BOOL bParam0) // Position - 0x24BF Signature - 22 01 03 00 00 66 00 8B 14
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_189(&Global_1940199, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_190(&Global_1940199, 8388608);
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

void func_78(BOOL bParam0) // Position - 0x2562 Signature - 22 01 08 00 00 2F
{
	int i;
	Hash crimeType;
	var unk;

	for (i = 0; i <= 58; i = i + 1)
	{
		crimeType = func_191(i, 1);
	
		if (crimeType == joaat("crime_murder_player") || crimeType == joaat("crime_murder_player_horse") || crimeType == joaat("crime_trample_player"))
		{
		}
		else
		{
			if (bParam0)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_192(unk);
			}
			else
			{
				func_193();
			}
		
			LAW::_0xF611DE44AEB36A1D(crimeType, bParam0);
		}
	}

	return;
}

int func_79(BOOL bParam0) // Position - 0x25D3 Signature - 22 01 03 00 00 66 00 05 6A
{
	if (!bParam0 && func_194(373691918))
		return 0;

	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("bountyhuntersglobalcooldown"), bParam0, 0);
	return 1;
}

void func_80(BOOL bParam0) // Position - 0x2600 Signature - 22 01 03 00 00 85
{
	Global_1900460 = Global_1900460 || bParam0;
	return;
}

int func_81(var uParam0, var uParam1) // Position - 0x2613 Signature - 22 02 04 00 00 11 4B 00 2D 39 A8
{
	return func_196(func_195(uParam0));
}

int func_82(var uParam0, var uParam1) // Position - 0x2627 Signature - 22 02 04 00 00 66 00 50
{
	return uParam0;
}

int func_83() // Position - 0x2631 Signature - 22 00 02 00 00 5D 17 00 18 27 0E 50
{
	return Global_1572887.f_14;
}

void func_84(int iParam0, var uParam1) // Position - 0x263F Signature - 22 02 06 00 00 66 00
{
	int num;

	num = iParam0;
	num.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &num, 2, 2);
	return;
}

int func_85() // Position - 0x265A Signature - 22 00 03 00 00 2F
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

int func_86(int iParam0) // Position - 0x26BF Signature - 22 01 03 00 00 66 00 3C 5D
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

int func_87(int iParam0) // Position - 0x2AC9 Signature - 22 01 03 00 00 66 00 3C 11
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

void func_88(int iParam0, var uParam1, int iParam2) // Position - 0x2B95 Signature - 22 03 08 00 00 66 00
{
	int num;

	num = iParam0;
	num.f_1 = uParam1;
	num.f_2 = iParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &num, 3, 3);
	return;
}

void func_89(int iParam0, Hash hParam1, Hash hParam2) // Position - 0x2BB6 Signature - 22 03 05 00 00 66 00 66 01
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, hParam1, hParam2);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, hParam2, hParam1);
	return;
}

BOOL func_90() // Position - 0x2BD2 Signature - 22 00 02 00 00 85 F4 88 11 1D
{
	return Global_1149172 == 3;
}

BOOL func_91(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x2BE0 Signature - 22 04 06 00 00 5D FD
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}

	if (func_69(Global_1051268) && !func_27(Global_1051268, uParam0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}

	if (iParam2 != 0 && func_197(iParam2))
		return true;

	if (iParam3 != 0 && func_198(iParam3, 255))
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

	if (func_199())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}

	if (Global_1572887.f_8 & true != 0)
	{
		if (!func_69(Global_1051268))
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

BOOL func_92(int iParam0) // Position - 0x2D09 Signature - 22 01 03 00 00 09
{
	return func_200(1, iParam0);
}

BOOL func_93() // Position - 0x2D18 Signature - 22 00 02 00 00 5D 17 00 18 80 48
{
	return Global_1572887.f_72.f_40 != 1;
}

BOOL func_94(var uParam0, var uParam1) // Position - 0x2D2A Signature - 22 02 04 00 00 66 00 39 B8
{
	if (MINIGAME::_MINIGAME_IS_CONNECTED_TO_SERVER(func_63(uParam0)))
	{
		return true;
	}
	else if (MINIGAME::_0x39654E1F68B78287())
	{
		*uParam1 = 1;
		return false;
	}

	return false;
}

BOOL func_95() // Position - 0x2D56 Signature - 22 00 02 00 00 85 F4 88 11 11
{
	if (Global_1149172 == 2)
		return true;

	return false;
}

char* func_96(int iParam0) // Position - 0x2D6B Signature - 22 01 03 00 00 66 00 3C 01 00 02 00 00 00 03 00 68 06
{
	switch (iParam0)
	{
		case 2:
			return "MGPKR";
	
		default:
		
	}

	return "";
}

BOOL func_97(int iParam0) // Position - 0x2D8A Signature - 22 01 03 00 00 66 00 5D F4 88 11 80 01 63 1B 27 0E
{
	return Global_1149172.f_1[iParam0 /*27*/].f_14 == 2;
}

float func_98(int iParam0) // Position - 0x2DA0 Signature - 22 01 03 00 00 66 00 5D F4 88 11 80 01 63 1B 27 06
{
	return Global_1149172.f_1[iParam0 /*27*/].f_6;
}

BOOL func_99(var uParam0) // Position - 0x2DB4 Signature - 22 01 04 00 00 66 00 27 01 39 A0
{
	float num;

	num = func_98(uParam0->f_1);

	if (!func_61(uParam0->f_8) && func_201(uParam0))
	{
		if (!func_12(uParam0->f_15))
			uParam0->f_8 = func_202(MISC::VAR_STRING(2, "NET_MG_CONTEXT_POKER"), joaat("INPUT_CONTEXT_Y"), uParam0->f_3, num, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else
	{
		if (!func_203(uParam0))
			func_204(uParam0->f_8, false, true, true);
		else
			func_204(uParam0->f_8, true, true, true);
	
		if (func_205(uParam0->f_8, true))
		{
			func_16(uParam0);
			return true;
		}
	}

	return false;
}

void func_100(int iParam0) // Position - 0x2E5E Signature - 22 01 03 00 00 5D F4 88 11 27 91 66 00 39 33 20 00 05
{
	if (!func_57(Global_1149172.f_145, iParam0))
		func_172(&(Global_1149172.f_145), iParam0);

	return;
}

int func_101(int iParam0, BOOL bParam1) // Position - 0x2E82 Signature - 22 02 04 00 00 66 01 8B 04
{
	if (bParam1)
		func_206();

	if (!func_207(bParam1, bParam1, !bParam1))
		return 0;

	func_208(iParam0);
	Global_1896762.f_356 = 1;
	Global_1896762.f_357 = bParam1;
	return 1;
}

BOOL func_102() // Position - 0x2EBE Signature - 22 00 02 00 00 03 01 00 9B
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33))
		return true;

	return false;
}

char* func_103(int iParam0) // Position - 0x2EE2 Signature - 22 01 03 00 00 66 00 3C 09
{
	switch (iParam0)
	{
		case -1:
			return "Invalid";
	
		case 0:
			return "Blackjack";
	
		case 1:
			return "Dominoes";
	
		case 2:
			return "Poker";
	
		case 3:
			return "Five Finger Fillet";
	
		case 4:
			return "Milking Cows";
	
		case 5:
			return "Cleaning Stalls";
	
		case 6:
			return "Fence Building";
	
		case 7:
			return "Max Minigames";
	}

	return "Unknown Minigame";
}

void func_104(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, char* sParam10) // Position - 0x2F7E Signature - 22 0B 0D
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, fParam4, fParam7, sParam10);
	return;
}

int func_105(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x2F9B Signature - 22 04 07 00 00 37
{
	int weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

void func_106(BOOL bParam0) // Position - 0x2FDD Signature - 22 01 03 00 00 39 3C
{
	if (func_209())
		Global_1958683 = true;

	func_210(joaat("camera_item"));

	if (bParam0 && Global_1940199.f_38 == joaat("weapon_kit_camera") || Global_1940199.f_38 == 332793555)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1940199.f_38 = joaat("WEAPON_UNARMED");
	}

	return;
}

void func_107(var uParam0, BOOL bParam1) // Position - 0x3040 Signature - 22 02 28
{
	char* str;
	var unk19;
	var unk23;
	var unk27;
	var unk31;
	const char* str2;

	*uParam0 = 0;
	_STOPWATCH_RESET(&(uParam0->f_49), false, false);
	unk19 = uParam0->f_44[0];
	unk19.f_3 = uParam0->f_42;
	str.f_3 = { unk19 };

	if (uParam0->f_43 > 1)
	{
		unk23 = uParam0->f_44[1];
		unk23.f_3 = uParam0->f_42;
		str.f_7 = { unk23 };
	
		if (uParam0->f_43 > 2)
		{
			unk27 = uParam0->f_44[2];
			unk27.f_3 = uParam0->f_42;
			str.f_11 = { unk27 };
		
			if (uParam0->f_43 > 3)
			{
				unk31 = uParam0->f_44[3];
				unk31.f_3 = uParam0->f_42;
				str.f_15 = { unk31 };
			}
		}
	}

	str.f_2 = 0;

	if (uParam0->f_41)
	{
		str = "DEATH_FAIL_RESPAWN_SOUNDS";
		str.f_1 = "TITLE_SCREEN_ENTER";
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_5)))
		str2 = MISC::VAR_STRING(10, &(uParam0->f_3), &(uParam0->f_5));
	else
		str2 = func_212(uParam0->f_3);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_7)))
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
			if (uParam0->f_39)
				str2 = MISC::VAR_STRING(42, str2, func_213(&(uParam0->f_7), joaat("COLOR_PURE_WHITE")), func_213(&(uParam0->f_23), joaat("COLOR_PURE_WHITE")), uParam0->f_40);
			else
				str2 = MISC::VAR_STRING(42, str2, func_213(&(uParam0->f_7), joaat("COLOR_PURE_WHITE")), func_213(&(uParam0->f_23), joaat("COLOR_PURE_WHITE")));
		else if (uParam0->f_39)
			str2 = MISC::VAR_STRING(10, str2, func_213(&(uParam0->f_7), joaat("COLOR_PURE_WHITE")), uParam0->f_40);
		else
			str2 = MISC::VAR_STRING(10, str2, func_213(&(uParam0->f_7), joaat("COLOR_PURE_WHITE")));
	else if (uParam0->f_39)
		str2 = MISC::VAR_STRING(2, str2, uParam0->f_40);

	if (bParam1)
		*uParam0 = func_214(&str, &(uParam0->f_1), str2, 0, true);
	else
		*uParam0 = func_215(&str, &(uParam0->f_1), str2, 0, 0, true);

	return;
}

void func_108(int iParam0) // Position - 0x320E Signature - 22 01 03 00 00 5D 17 00 18 80 48 80 0F 66 00 39 80
{
	func_216(&(Global_1572887.f_72.f_15), iParam0);
	return;
}

int func_109(int iParam0) // Position - 0x3224 Signature - 22 01 03 00 00 66 00 11 15
{
	if (iParam0 == 2)
		return -471827042;

	return 0;
}

int func_110(int iParam0, Player plParam1) // Position - 0x323B Signature - 22 02 06 00 00 66 01
{
	int num;
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam1))
		return -1;

	player = plParam1;

	if (!func_217(iParam0, &num))
		return -1;

	return Global_1056554[player /*491*/].f_486[num];
}

int func_111(int iParam0) // Position - 0x3275 Signature - 22 01 03 00 00 66 00 3C 01 00 02 00 00 00 03 00 68 04
{
	switch (iParam0)
	{
		case 2:
			return 6;
	
		default:
		
	}

	return 1;
}

BOOL func_112() // Position - 0x3290 Signature - 22 00 02 00 00 5D 3A
{
	return Global_1896762.f_352;
}

int func_113(var uParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x329F Signature - 22 04 0C
{
	int num;
	BOOL flag;
	int eventData;

	num = -1;
	flag = false;

	if (UIEVENTS::EVENTS_UI_IS_PENDING(hParam1))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(hParam1, &eventData))
		{
			if (_STOPWATCH_IS_INITIALIZED(uParam2))
			{
				if (func_219(uParam2, false, false) > 250)
				{
					switch (eventData)
					{
						case -1203660660:
							if (eventData.f_1 == *uParam0)
							{
								if (eventData.f_2 == 2074623703)
								{
									if (bParam3)
										flag = true;
								
									num = 0;
								}
								else if (eventData.f_2 == 1400745903)
								{
									if (bParam3)
										flag = true;
								
									num = 1;
								}
								else if (eventData.f_2 == 444632721)
								{
									if (bParam3)
										flag = true;
								
									num = 2;
								}
							}
							break;
					}
				}
			
				if (eventData.f_1 == *uParam0)
				{
					UIEVENTS::EVENTS_UI_POP_MESSAGE(hParam1);
				
					if (flag)
						UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(*uParam0);
				
					return num;
				}
			}
			else
			{
				_STOPWATCH_RESET(uParam2, false, false);
			}
		}
	}

	return num;
}

void func_114(BOOL bParam0) // Position - 0x3371 Signature - 22 01 05 00 00 4B 03 03
{
	int num;
	Any gangId;

	POSSE::_0xC08AFF658B2E51DA(&num);

	if (num != 0)
	{
		func_216(&(Global_1203952.f_3), 32);
		func_216(&(Global_1203952.f_4), 12);
		Global_1203952.f_478 = num;
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
			func_216(&(Global_1203952.f_4), 2);
	
		POSSE::_0xC08BFF658B2E51DA(0);
		Global_1203952.f_5[5] = false;
		func_216(&Global_1203952.f_5[5], 1);
	}

	Global_1203952.f_5[3] = false;
	func_216(&Global_1203952.f_5[3], 1);
	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (!GANG::NETWORK_IS_GANG_ID_VALID(gangId))
	{
		func_216(&Global_1203952.f_5[3], 6);
		return;
	}

	if (!GANG::NETWORK_IS_GANG_ACTIVE(gangId))
	{
		func_216(&Global_1203952.f_5[3], 6);
		return;
	}

	GANG::_NETWORK_LEAVE_GANG(bParam0);
	return;
}

void func_115(int iParam0) // Position - 0x3445 Signature - 22 01 03 00 00 5D 17 00 18 80 48 80 0F 66 00 39 35
{
	func_220(&(Global_1572887.f_72.f_15), iParam0);
	return;
}

void func_116(var uParam0, var uParam1, BOOL bParam2) // Position - 0x345B Signature - 22 03 05 00 00 11 4B 00 2D 39 B3 22 00 05 8B 03 00 50 03 00 11
{
	if (!func_69(uParam0))
		return;

	if (!func_221(uParam0))
		return;

	if (bParam2)
		func_222(uParam0);

	func_75(uParam0, 1);
	bParam2 = bParam2;
	return;
}

BOOL func_117() // Position - 0x349B Signature - 22 00 02 00 00 11 39 9F
{
	return func_223(2) && func_224();
}

Vector3 func_118(int iParam0, var uParam1) // Position - 0x34B1 Signature - 22 02 04 00 00 66 00 3C 05
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 109.6245f;
			return -811.0934f, -1316.4077f, 42.678f;
	
		case 1:
			*uParam1 = 164.0893f;
			return 2631.8027f, -1224.3192f, 52.3804f;
	
		case 2:
			*uParam1 = 333.5677f;
			return -328.6093f, -359.6321f, 87.0844f;
	
		case 3:
			*uParam1 = 301.7008f;
			return -5512.2876f, -2914.6853f, 0.6403f;
	
		case 4:
			*uParam1 = 25.8346f;
			return -303.778f, 799.1457f, 118.0019f;
	
		default:
		
	}

	return func_8(iParam0);
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x3567 Signature - 22 03 05 00 00 66 00 73
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_120(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x3591 Signature - 22 05 07
{
	if (func_225(uParam0, uParam3))
		func_226(true, bParam4);

	return;
}

void func_121(BOOL bParam0) // Position - 0x35AD Signature - 22 01 03 00 00 66 00 05 8B
{
	if (!bParam0)
		func_227(18);
	else
		func_228(18);

	return;
}

int func_122(int iParam0) // Position - 0x35CC Signature - 22 01 03 00 00 66 00 3C 04 00 00 00 00 00 1D
{
	switch (iParam0)
	{
		case 0:
			return 4;
	
		case 1:
			return 4;
	
		case 2:
			return 6;
	
		case 3:
			return 2;
	
		default:
		
	}

	return 1;
}

int func_123(int iParam0) // Position - 0x3605 Signature - 22 01 03 00 00 66 00 3C 05 00 00 00 00 00 1B 00 01 00 00 00 15
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 9;
	
		default:
		
	}

	return -1;
}

int func_124() // Position - 0x3639 Signature - 22 00 02 00 00 11 39 0C 06 00 8B 0B
{
	if (func_20(2))
		return 268435457;

	return 268435456;
}

int func_125() // Position - 0x3659 Signature - 22 00 02 00 00 11 39 0C 06 00 8B 07
{
	if (func_20(2))
		return 2;

	return 0;
}

BOOL func_126(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, int iParam6, int iParam7, BOOL bParam8, int iParam9, int iParam10) // Position - 0x3671 Signature - 22 0B 66
{
	int num;
	var unk22;
	var unk30;

	if (!func_229(iParam2, iParam3))
		return false;

	if (func_93() && Global_1572887.f_72.f_40 != 9)
		return false;

	if (!func_230(Global_1295666.f_5))
		return false;

	num.f_3 = -1;
	num.f_3.f_1 = -1;
	num.f_5 = 1;
	num.f_6 = 7;
	num = iParam0;
	num.f_1 = iParam1;
	num.f_2 = 1;
	num.f_3 = { uParam4 };
	func_231(&num);
	func_232(iParam10, true);
	func_233(iParam2, iParam3, iParam7, true);
	func_234(uParam4, true);
	func_235(iParam6);
	func_236(iParam9);
	func_237();

	if (func_69(uParam4) && !func_238() && Global_1220759 == -1)
		func_239(uParam4);

	NETWORK::_NETWORK_SESSION_SET_PLAYER_FLAGS(1);

	if (iParam2 != 2)
		func_240();

	if (func_238())
	{
		func_241(uParam4);
	}
	else if (iParam2 == 3)
	{
		if (!func_150(268435456))
			if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("player_menu")))
				func_101(1, false);
	}
	else
	{
		if (iParam2 == 2)
		{
			unk30 = 255;
			unk30.f_13 = 2147483647;
			unk30.f_16.f_2 = -504335712;
			unk30.f_16.f_4 = 3;
			unk30.f_21 = -1;
			unk30.f_25 = 1;
			unk30.f_26 = 1;
			unk30.f_27 = 1;
			unk30.f_28 = 32;
			unk30.f_29 = 1;
			unk30.f_30 = -2;
			unk30.f_42.f_5 = -1;
			unk30.f_48 = -1;
			unk30.f_48.f_1 = -1;
			unk30.f_50.f_3 = -1;
			func_242(&unk30, iParam3, -1, -1, 3);
			TEXT_LABEL_ASSIGN_STRING(&unk22, func_213(&(unk30.f_32), joaat("COLOR_PURE_WHITE")), 64);
		}
		else if (iParam2 == 1)
		{
			TEXT_LABEL_ASSIGN_STRING(&unk22, MISC::VAR_STRING(2, func_243(iParam3)), 64);
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&unk22, MISC::VAR_STRING(2, func_245(func_244(), iParam3)), 64);
		}
	
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_115, &unk22);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_117, MISC::VAR_STRING(2, "NM_PLAYLIST_MATCHMADE_PLAYERS", 1));
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_118);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_119);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_120);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_121);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_122);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_123);
	}

	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()) && func_246(255, false) && !bParam8)
		func_247("NM_MATCHMAKING_WARNING");

	func_248(10);
	return true;
}

const char* func_127(int iParam0) // Position - 0x38F4 Signature - 22 01 04 00 00 66 00 39 89
{
	int num;

	num = func_7(iParam0);

	switch (num)
	{
		case 2:
			return MISC::VAR_STRING(10, "MG_FAILED_LAUNCH", "MG_POKER");
	
		default:
		
	}

	return "";
}

int func_128(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x3926 Signature - 22 06 18 00 00 4B
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

BOOL func_129() // Position - 0x3961 Signature - 22 00 02 00 00 5D 17 00 18 27 08
{
	return func_131(Global_1572887.f_8, 1);
}

char* func_130(int iParam0) // Position - 0x3974 Signature - 22 01 03 00 00 66 00 3C 01 00 02 00 00 00 03 00 68 07
{
	switch (iParam0)
	{
		case 2:
			return "tg_p";
	
		default:
		
	}

	return "";
}

BOOL func_131(BOOL bParam0, BOOL bParam1) // Position - 0x3994 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 01
{
	return bParam0 && bParam1 != false;
}

void func_132(BOOL bParam0) // Position - 0x39A3 Signature - 22 01 03 00 00 5D 77 5E 10 18 54
{
	if (Global_1072759.f_28756.f_1 != SCRIPTS::GET_ID_OF_THIS_THREAD() && !bParam0)
		return;

	if (Global_1072759.f_28756.f_1 == 0)
		return;

	func_216(&(Global_1072759.f_28756.f_2), 2);
	return;
}

void func_133() // Position - 0x39E5 Signature - 22 00 02 00 00 5D 17 00 18 27 07
{
	if (Global_1572887.f_7)
	{
		Global_1572887.f_7 = 0;
		TELEMETRY::ANALYTICS_PLAYTIME_FREEMODE_END();
	}

	return;
}

BOOL func_134(int iParam0, int iParam1, int iParam2) // Position - 0x3A01 Signature - 22 03 06 00 00 66 02 09
{
	Any any;

	if (iParam2 == 1)
		any = func_249(iParam1, 1);
	else
		any = func_249(iParam1, 0);

	if (MINIGAME::_0x3FFE60DD8A936551(func_63(iParam0), any))
		return true;

	return false;
}

void func_135(int iParam0) // Position - 0x3A38 Signature - 22 01 03 00 00 5D 17 00 18 80 48 80 10
{
	func_216(&(Global_1572887.f_72.f_16), iParam0);
	return;
}

void func_136(var uParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3A4E Signature - 22 05 29
{
	int num;
	var unk;

	if (!func_69(uParam0))
		return;

	if (!func_29(uParam0))
		return;

	if (bParam2)
		func_250(uParam0);

	if (!func_69(func_76(0)))
	{
		func_75(uParam0, 3);
		func_77(bParam3);
		func_78(!bParam4);
		func_251(uParam0, -1);
	
		if (bParam2 && !func_252(2))
			func_182(&Global_0, 1024);
	
		func_80(true);
	}
	else
	{
		func_251(uParam0, -1);
		func_75(uParam0, 4);
		func_253(uParam0, false);
	}

	Global_1051645.f_45.f_1 = 1;
	num = func_82(uParam0);

	if (num != 2 && num != 7)
		if (func_254(uParam0, &unk))
			MISC::_0x1096603B519C905F(&(unk.f_17));

	return;
}

int func_137(int iParam0) // Position - 0x3B25 Signature - 22 01 03 00 00 66 00 3C 01 00 02 00 00 00 03 00 68 05
{
	switch (iParam0)
	{
		case 2:
			return 9;
	
		default:
		
	}

	return 9;
}

void func_138(int iParam0) // Position - 0x3B42 Signature - 22 01 05 00 00 5D
{
	int num;
	int num2;

	if (Global_1900412.f_1 == 2 || Global_1900412.f_1 == 5 || Global_1900412.f_1 == 3)
		return;

	num = 0;

	if (func_83() != -1)
		num = 1;

	num2 = func_86(Global_1893611.f_2);
	Global_1900412.f_1 = 3;
	Global_1900412.f_2 = 0;
	Global_1900412.f_7 = num;
	Global_1900412.f_8 = iParam0;
	Global_1900412.f_9 = num2;

	if (Global_1900412.f_9 != -1 && Global_1900412.f_9 != 0)
		func_88(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
	else if (Global_1900412.f_11 != -1)
		func_88(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_11);

	return;
}

BOOL func_139(var uParam0, var uParam1, var uParam2) // Position - 0x3C05 Signature - 22 03 0D
{
	eEventType eventAtIndex;
	struct<6> eventData;
	int i;

	i = 0;

	for (i = 0; i <= SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK) - 1; i = i + 1)
	{
		eventAtIndex = SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i);
	
		switch (eventAtIndex)
		{
			case -1126217932:
				if (SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, i, &eventData, 6))
				{
					if (uParam0->f_9 == eventData && uParam0->f_9.f_1 == eventData.f_1 && uParam0->f_9.f_2 == eventData.f_2 && uParam0->f_9.f_3 == eventData.f_3)
					{
						*uParam2 = eventData.f_5;
					
						if (eventData.f_4)
							*uParam1 = 1;
					
						return true;
					}
				}
				break;
		}
	}

	return false;
}

void func_140(var uParam0, int iParam1, int iParam2) // Position - 0x3CA0 Signature - 22 03 05 00 00 66 00 5D
{
	Global_1149318.f_2.f_1 = uParam0;
	Global_1149318.f_2 = iParam1;
	Global_1149318.f_2.f_2 = iParam2;
	return;
}

void func_141(var uParam0) // Position - 0x3CC4 Signature - 22 01 03 00 00 66 00 6D 80 39 80 04 00 05
{
	if (!func_13(uParam0, 128))
	{
		func_255(131072);
		func_58(uParam0, 128);
	}

	return;
}

var func_142(int iParam0) // Position - 0x3CE8 Signature - 22 01 03 00 00 66 00 5D F4 88 11 80 01 63 1B 27 0A
{
	return Global_1149172.f_1[iParam0 /*27*/].f_10;
}

int* func_143(int iParam0, int iParam1) // Position - 0x3CFC Signature - 22 02 04 00 00 66 01 66 00 5D F4 88 11 80 01 63 1B 80 0F 63
{
	return Global_1149172.f_1[iParam0 /*27*/].f_15[iParam1 /*3*/].f_1;
}

BOOL func_144(int iParam0) // Position - 0x3D16 Signature - 22 01 03 00 00 66 00 5D F4 88 11 80 01 63 1B 27 01
{
	return Global_1149172.f_1[iParam0 /*27*/].f_1 == 2;
}

void func_145(int iParam0) // Position - 0x3D2C Signature - 22 01 03 00 00 5D F4 88 11 27 89
{
	if (Global_1149172.f_137 != iParam0)
		Global_1149172.f_137 = iParam0;

	return;
}

void func_146(int iParam0, int iParam1) // Position - 0x3D47 Signature - 22 02 04 00 00 66 00 5D F4 88 11 27 89 72 03 00 50 02 00 5D
{
	if (iParam0 != Global_1149172.f_137)
		return;

	if (!func_57(Global_1149172.f_137.f_1, iParam1))
		func_172(&(Global_1149172.f_137.f_1), iParam1);

	return;
}

void func_147() // Position - 0x3D7D Signature - 22 00 02 00 00 03 01 00 93
{
	Global_1072759.f_28644.f_109 = MISC::GET_GAME_TIMER();
	return;
}

int func_148() // Position - 0x3D92 Signature - 22 00 02 00 00 5D 77
{
	if (Global_1072759.f_28644.f_66.f_42 >= 9)
		return 1;

	return 0;
}

int func_149() // Position - 0x3DAF Signature - 22 00 04 00 00 03
{
	int gameTimer;
	int num;

	gameTimer = MISC::GET_GAME_TIMER();
	num = gameTimer - Global_1072759.f_28644.f_109;

	if (num < Global_1901671.f_2.f_39)
		return 0;

	return 1;
}

BOOL func_150(BOOL bParam0) // Position - 0x3DDD Signature - 22 01 03 00 00 5D 17 00 18 80 48 27
{
	return Global_1572887.f_72.f_15 && bParam0 != false;
}

void func_151(var uParam0) // Position - 0x3DF2 Signature - 22 01 04 00 00 2F 67 03 66 03 4D
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->[i]))
			CAM::DESTROY_CAM(uParam0->[i], false);
	
		uParam0->[i] = 0;
	}

	if (uParam0->f_20 != -1)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_20))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_20, "LIVE"))
				ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(uParam0->f_20, "LIVE");
		
			ANIMSCENE::ABORT_ANIM_SCENE(uParam0->f_20, false);
			ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_20, 0);
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_20);
		}
	}

	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_12 = -1;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_17 = 0;
	uParam0->f_16 = 0;
	_STOPWATCH_DESTROY(&(uParam0->f_18));
	uParam0->f_20 = -1;
	uParam0->f_21 = -1;
	uParam0->f_22 = 0;
	return;
}

char* func_152(var uParam0) // Position - 0x3EB7 Signature - 22 01 03 00 00 66 00 27 01 3C
{
	switch (uParam0->f_1)
	{
		case 0:
			return "bla_saloon_int";
	
		case 1:
			return "new_saloon_int_main";
	
		case 2:
			return "swa_depot01_int";
	
		case 3:
			return "tum_saloon_int_gamble";
	
		case 4:
			return "val_saloon_int";
	
		default:
		
	}

	return "";
}

Vector3 func_153(int iParam0) // Position - 0x3F0D Signature - 22 01 0D 00 00 66
{
	var unk;

	iParam0 == -1;
	unk = { func_257(iParam0) };
	_IS_NULL_VECTOR(unk.f_5);
	return unk.f_5;
}

BOOL func_154(char* sParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x3F39 Signature - 22 05 08 00 00 1D
{
	Interior interiorAtCoords;

	interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(vParam1);

	if (INTERIOR::IS_VALID_INTERIOR(interiorAtCoords))
	{
		if (INTERIOR::IS_INTERIOR_READY(interiorAtCoords))
		{
			if (bParam4)
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoords, sParam0, 0);
			else
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoords, sParam0, true);
		
			return true;
		}
	}

	return false;
}

BOOL func_155(int iParam0, int iParam1) // Position - 0x3F82 Signature - 22 02 04 00 00 66 00 5D F4 88 11 27 89 72 04
{
	if (iParam0 != Global_1149172.f_137)
		return false;

	return func_57(Global_1149172.f_137.f_1, iParam1);
}

int func_156(int iParam0) // Position - 0x3FA7 Signature - 22 01 03 00 00 66 00 5D F4 88 11 27 89 72 04 00 2F 50 01 01 5D F4 88 11 80 89 27 02
{
	if (iParam0 != Global_1149172.f_137)
		return 0;

	return Global_1149172.f_137.f_2;
}

void func_157(int iParam0, int iParam1) // Position - 0x3FC6 Signature - 22 02 04 00 00 66 00 5D F4 88 11 27 89 72 03 00 50 02 00 66
{
	if (iParam0 != Global_1149172.f_137)
		return;

	Global_1149172.f_137.f_2 = iParam1;
	return;
}

int func_158(int iParam0) // Position - 0x3FE6 Signature - 22 01 03 00 00 66 00 5D F4 88 11 27 89 72 04 00 2F 50 01 01 5D F4 88 11 13
{
	if (iParam0 != Global_1149172.f_137)
		return 0;

	return Global_1149172.f_137.f_3;
}

int func_159() // Position - 0x4007 Signature - 22 00 02 00 00 5D 17 00 18 80 C4
{
	if (!func_131(Global_1572887.f_196.f_43, 8))
		return 2;

	if (Global_1572887.f_196.f_2 != 4)
		return 1;

	if (Global_1572887.f_196 > 7 && Global_1572887.f_196 < 23)
		return 0;

	return 2;
}

int func_160() // Position - 0x4053 Signature - 22 00 02 00 00 5D F4
{
	return Global_1149172.f_137;
}

Entity func_161(int iParam0) // Position - 0x4061 Signature - 22 01 03 00 00 66 00 5D F4 88 11 27 89 72 04 00 2F 50 01 01 5D F4 88 11 80 89 27 04
{
	if (iParam0 != Global_1149172.f_137)
		return 0;

	return Global_1149172.f_137.f_4;
}

void func_162() // Position - 0x4080 Signature - 22 00 07
{
	var unk;

	unk = -1;
	Global_1149172.f_137 = { unk };
	return;
}

BOOL func_163(int iParam0) // Position - 0x409B Signature - 22 01 03 00 00 6D
{
	return func_200(48, iParam0);
}

BOOL func_164(var uParam0, var uParam1, var uParam2, Vector3* pvParam3, float* pfParam4) // Position - 0x40AB Signature - 22 05 0A
{
	Hash hash;
	int endRange;
	int randomIntInRange;

	hash = Global_1072759.f_23824.f_383[func_258(uParam0) /*272*/];
	endRange = func_259(hash);

	if (endRange <= 0)
	{
		return false;
	}
	else
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
	
		if (func_260(hash, randomIntInRange, pvParam3, pfParam4))
			return true;
	}

	return false;
}

Vector3 func_165(int iParam0, int iParam1, int iParam2, var uParam3) // Position - 0x40FC Signature - 22 04 06 00 00 66 00 3C
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -25.54f;
							return -805.4941f, -1313.9215f, 43.5456f;
					
						default:
							break;
					}
					break;
			
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -122.05f;
							return -805.842f, -1316.4011f, 43.5497f;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -83.36f;
							return -806.1149f, -1322.4402f, 42.6598f;
					
						default:
							break;
					}
					break;
			
				case 3:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -99.05f;
							return -805.8666f, -1324.7781f, 42.6619f;
					
						default:
							break;
					}
					break;
			
				case 4:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 170.59f;
							return -809.6326f, -1330.9711f, 42.6642f;
					
						default:
							break;
					}
					break;
			
				case 5:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 171.6245f;
							return -812.5016f, -1330.4542f, 42.6573f;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 6.13f;
							return 2636.5745f, -1216.9526f, 52.3057f;
					
						default:
							break;
					}
					break;
			
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -16.87f;
							return 2634.2332f, -1216.8103f, 52.2891f;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -2.64f;
							return 2631.5073f, -1216.6294f, 52.2713f;
					
						default:
							break;
					}
					break;
			
				case 3:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 60.25f;
							return 2622.0056f, -1222.1439f, 52.2653f;
					
						default:
							break;
					}
					break;
			
				case 4:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 92.26f;
							return 2621.8352f, -1225.9128f, 52.3185f;
					
						default:
							break;
					}
					break;
			
				case 5:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 93.46f;
							return 2621.8013f, -1229.2328f, 52.3836f;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -20.56f;
							return -323.8307f, -353.4378f, 87.0216f;
					
						default:
							break;
					}
					break;
			
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -82.44f;
							return -325.278f, -351.2291f, 87.051f;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 46.4f;
							return -329.2828f, -349.7032f, 87.0626f;
					
						default:
							break;
					}
					break;
			
				case 3:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 31.32f;
							return -332.8652f, -351.3506f, 87.0617f;
					
						default:
							break;
					}
					break;
			
				case 4:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 39.52f;
							return -336.8102f, -353.0264f, 87.0052f;
					
						default:
							break;
					}
					break;
			
				case 5:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 24.63f;
							return -341.9986f, -355.8522f, 87.0358f;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -178.99f;
							return -5502.251f, -2913.421f, -3.391f;
					
						default:
							break;
					}
					break;
			
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 154.78f;
							return -5507.2017f, -2919.03f, -3.2789f;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -136.18f;
							return -5518.3564f, -2919.3555f, -3.4585f;
					
						default:
							break;
					}
					break;
			
				case 3:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -170.03f;
							return -5523.7383f, -2910.1228f, -3.501f;
					
						default:
							break;
					}
					break;
			
				case 4:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 33.86f;
							return -5524.9395f, -2906.3752f, -3.6494f;
					
						default:
							break;
					}
					break;
			
				case 5:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 31.68f;
							return -5518.7954f, -2901.151f, -3.4988f;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -164.32f;
							return -305.3323f, 796.2567f, 117.9622f;
					
						default:
							break;
					}
					break;
			
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -167.42f;
							return -303.728f, 796.605f, 117.9601f;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -164.13f;
							return -302.3611f, 796.8258f, 117.9617f;
					
						default:
							break;
					}
					break;
			
				case 3:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -170.44f;
							return -311.0975f, 795.3132f, 117.9633f;
					
						default:
							break;
					}
					break;
			
				case 4:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -164.6f;
							return -314.7917f, 798.2899f, 116.6698f;
					
						default:
							break;
					}
					break;
			
				case 5:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 41.65f;
							return -317.6014f, 808.0834f, 116.9352f;
					
						default:
							break;
					}
					break;
			}
			break;
	}

	return 0f, 0f, 0f;
}

int func_166(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, int iParam39, int iParam40, int iParam41) // Position - 0x4722 Signature - 22 2A
{
	if (func_163(255))
	{
		if (uParam0.f_17.f_9 != joaat("volBox") && uParam0.f_17.f_9 != joaat("volSphere") && uParam0.f_17.f_9 != joaat("volCylinder"))
			uParam0.f_17.f_9 = joaat("volSphere");
	
		if (uParam0.f_16)
			if (uParam0.f_6.f_9 != joaat("volBox") && uParam0.f_6.f_9 != joaat("volSphere") && uParam0.f_6.f_9 != joaat("volCylinder"))
				uParam0.f_6.f_9 = joaat("volSphere");
	
		func_261(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = { uParam0 };
		func_262(&(Global_1102813.f_3878));
		Global_1102813.f_3878 = { uParam30 };
		Global_1102813.f_3909 = iParam39;
		Global_1102813.f_3910 = iParam40;
		Global_1102813.f_3911 = iParam41;
		func_263(Global_1102813.f_3839, 36);
		func_264(Global_1102813.f_3878, 36);
		func_227(48);
		return 1;
	}

	return 0;
}

void func_167(int iParam0) // Position - 0x482D Signature - 22 01 03 00 00 66 00 5D 77
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_5 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_5 = 0;
		func_265(iParam0);
	}

	return;
}

void func_168(int iParam0, BOOL bParam1) // Position - 0x485E Signature - 22 02 04 00 00 66 01 8B 27
{
	if (bParam1)
	{
		if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21626.f_260), iParam0))
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_21626.f_260), iParam0);
	}
	else if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21626.f_260), iParam0))
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_21626.f_260), iParam0);
		func_265(iParam0);
	}

	return;
}

void func_169(var uParam0) // Position - 0x48BB Signature - 22 01 04 00 00 66 00 27 0F
{
	const char* str;

	if (func_12(uParam0->f_15))
		return;

	if (!func_266())
		return;

	str = func_267(Global_1149318.f_2.f_1, Global_1149318.f_2, Global_1149318.f_2.f_2);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	uParam0->f_15 = func_128(str, 10000, 0, 0, 0, true);
	return;
}

void func_170() // Position - 0x4915 Signature - 22 00 02 00 00 08
{
	Global_1149318.f_2.f_1 = -1;
	Global_1149318.f_2 = 0;
	Global_1149318.f_2.f_2 = 0;
	return;
}

void func_171(BOOL bParam0) // Position - 0x4936 Signature - 22 01 03 00 00 66 00 8B 0A
{
	if (bParam0)
		func_228(49);
	else
		func_227(49);

	return;
}

void func_172(BOOL bParam0, int iParam1) // Position - 0x4954 Signature - 22 02 04 00 00 66 00 66 01 39 01
{
	func_268(bParam0, iParam1);
	return;
}

int func_173(int iParam0) // Position - 0x4964 Signature - 22 01 03 00 00 66 00 50
{
	return iParam0;
}

void func_174(int iParam0) // Position - 0x496E Signature - 22 01 03 00 00 66 00 39 12
{
	if (!func_269(iParam0))
		return;

	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_DELETE(Global_1951910[iParam0 /*23*/].f_3);

	Global_1951910[iParam0 /*23*/].f_4 = 0;
	Global_1951910[iParam0 /*23*/] = 1;
	Global_1951910[iParam0 /*23*/].f_16 = 0;
	Global_1951910[iParam0 /*23*/].f_1 = 0;
	Global_1951910[iParam0 /*23*/].f_6 = { 0f, 0f, 0f };
	Global_1951910[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951910[iParam0 /*23*/].f_9 = 0f;
	Global_1951910[iParam0 /*23*/].f_10 = 0;
	Global_1951910[iParam0 /*23*/].f_11 = 0;
	Global_1951910[iParam0 /*23*/].f_2 = 1;
	Global_1951910[iParam0 /*23*/].f_15 = -1f;
	return;
}

void func_175(var uParam0, int iParam1) // Position - 0x4A21 Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 01
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_176(int iParam0) // Position - 0x4A36 Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 21 00 04 00 00 00 1B 00 05 00 00 00 15 00 06 00 00 00 0F 00 07 00 00 00 09 00 08 00 00 00 03 00 68 04 00 09 50 01 01 2F 50 01 01 22 01
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

int func_177(int iParam0) // Position - 0x4A75 Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 2E
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

int func_178(var uParam0, var uParam1) // Position - 0x4B0B Signature - 22 02 0D
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

	if (!func_270(uParam0, &unk))
		return -1;

	num = 0;
	num2 = Global_1072759.f_19487 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
		func_270(Global_1072759.f_19487.f_1[num3 /*3*/], &unk4);
	
		if (unk4 > unk)
			num2 = num3 - 1;
		else if (unk4 < unk)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

Hash func_179(var uParam0, var uParam1) // Position - 0x4BB2 Signature - 22 02 07 00 00 4B 04 6A 80 01 08 3D 41 6A 80 02 08 3D 41 41 11 4B 00 2D 4B 04 39 21 6E 00 8B 05
{
	int num;

	num.f_1 = -1;
	num.f_2 = -1;

	if (func_270(uParam0, &num))
		return num;

	return 0;
}

BOOL func_180() // Position - 0x4BDC Signature - 22 00 02 00 00 5D 17 00 18 27 0A
{
	return !Global_1572887.f_10;
}

BOOL func_181() // Position - 0x4BEB Signature - 22 00 02 00 00 03 01 00 0F
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

void func_182(Hash hParam0, int iParam1) // Position - 0x4BFF Signature - 22 02 04 00 00 66 00 27 02
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

int func_183(int iParam0) // Position - 0x4C12 Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 29
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

char* func_184(var uParam0, var uParam1, var uParam2) // Position - 0x4C85 Signature - 22 03 05 00 00 4B
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_185(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x4C99 Signature - 22 04 0D
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

	switch (func_82(uParam0))
	{
		case 4:
			num3 = func_272(func_271(uParam0));
		
			if (num3 == -1 && iParam3 == 2 && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("net_main_offline")) == 0)
			{
				for (j = 0; j <= 112; j = j + 1)
				{
					if (func_273(j) == func_271(uParam0))
					{
						num3 = j;
						break;
					}
				}
			}
		
			num4 = func_274(num3);
		
			if (!func_275(num4, 0))
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

int func_186(var uParam0, var uParam1) // Position - 0x4DAB Signature - 22 02 05 00 00 11 4B 00 2D 39 0B
{
	int num;

	num = func_178(uParam0);

	if (num < 0)
		return 0;

	return func_276(num);
}

int func_187(var uParam0, var uParam1, int iParam2) // Position - 0x4DCD Signature - 22 03 0F
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

	if (!func_270(uParam0, &unk))
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
		func_270(Global_1072759.f_19487.f_1[num /*3*/], &unk4);
	
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
			func_277(num);
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

void func_188() // Position - 0x4F3C Signature - 22 00 06 00 00 2F
{
	int num;
	var unk;

	num = 0;
	unk.f_1 = -1;
	unk.f_2 = -1;

	while (num < Global_1072759.f_19487)
	{
		func_270(Global_1072759.f_19487.f_1[num /*3*/], &unk);
		num = num + 1;
	}

	return;
}

void func_189(int iParam0, int iParam1) // Position - 0x4F83 Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 02 04 00 00 66
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_190(int iParam0, int iParam1) // Position - 0x4F98 Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 02 04 00 00 66 00 3C 3B
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

Hash func_191(int iParam0, int iParam1) // Position - 0x4FA9 Signature - 22 02 04 00 00 66 00 3C 3B
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

void func_192(var uParam0, var uParam1, var uParam2) // Position - 0x52FE Signature - 22 03 05 00 00 1D
{
	Global_1939102.f_75.f_67 = { uParam0 };
	return;
}

void func_193() // Position - 0x5314 Signature - 22 00 02 00 00 6D
{
	TEXT_LABEL_ASSIGN_STRING(&(Global_1939102.f_75.f_67), "", 24);
	return;
}

BOOL func_194(int iParam0) // Position - 0x5329 Signature - 22 01 06
{
	int num;
	int num2;
	int offset;

	num = func_278(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (func_279(num2))
	{
		if (Global_1072759.f_19585.f_24 && !func_280(iParam0))
			return false;
	
		return MISC::IS_BIT_SET(Global_1072759.f_19585[num2], offset) || MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
	}

	return MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
}

int func_195(var uParam0, var uParam1) // Position - 0x53A8 Signature - 22 02 05 00 00 11 4B 00 2D 39 B3 22 00 05 8B 04 00 08 50 02 01 2F
{
	int i;

	if (!func_69(uParam0))
		return -1;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (func_27(Global_1900460.f_1[i /*2*/], uParam0))
			return i;
	}

	return -1;
}

int func_196(int iParam0) // Position - 0x53F3 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 5D
{
	if (iParam0 < 0)
		return 0;

	if (Global_1900460.f_66 == 0)
		return 0;

	if (Global_1900460.f_66 == 1)
	{
		Global_1900460.f_66 = 0;
		func_70(&Global_1900460.f_1[0 /*2*/]);
		return 1;
	}

	func_70(&Global_1900460.f_1[iParam0 /*2*/]);
	Global_1900460.f_66 = Global_1900460.f_66 - 1;
	func_281(iParam0, Global_1900460.f_66);
	return 1;
}

BOOL func_197(BOOL bParam0) // Position - 0x545E Signature - 22 01 03 00 00 5D 17 00 18 27
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && bParam0 != false;
}

BOOL func_198(BOOL bParam0, int iParam1) // Position - 0x547F Signature - 22 02 04 00 00 5D 77
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return false;

	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1206954[iParam1 /*12*/] && bParam0 != false;
}

BOOL func_199() // Position - 0x54BB Signature - 22 00 02 00 00 85 00
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_69(Global_1051268) && Global_1572887.f_8 & true != 0)
		return true;

	return false;
}

BOOL func_200(int iParam0, int iParam1) // Position - 0x5513 Signature - 22 02 05 00 00 66 00 67
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_282(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_283())
		return func_282(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_282(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_201(var uParam0) // Position - 0x5587 Signature - 22 01 03 00 00 39 F0
{
	if (!func_284())
		return false;
	else if (func_129())
		return false;
	else if (!PED::IS_PED_ON_FOOT(Global_33))
		return false;
	else if (ENTITY::GET_CARRIABLE_ENTITY_STATE(Global_33) != 0)
		return false;
	else if (func_285(1106247680, false))
		return false;
	else if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		return false;
	else if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
		return false;
	else if (PED::IS_PED_LASSOED(Global_33))
		return false;
	else if (PED::IS_PED_HOGTIED(Global_33))
		return false;
	else if (PED::IS_PED_SHOOTING(Global_33))
		return false;
	else if (PED::IS_PED_JUMPING(Global_33))
		return false;
	else if (PED::IS_PED_FALLING_OVER(Global_33))
		return false;
	else if (PED::IS_PED_FALLING(Global_33))
		return false;
	else if (TASK::IS_PED_GETTING_UP(Global_33))
		return false;
	else if (PED::IS_PED_RAGDOLL(Global_33))
		return false;
	else if (PED::GET_PED_IS_GRAPPLING(Global_33))
		return false;
	else if (PED::GET_PED_IS_BEING_GRAPPLED(Global_33))
		return false;
	else if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 512, 0))
		return false;
	else if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
		return false;
	else if (!func_286(uParam0))
		return false;
	else if (TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33))
		return false;
	else if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("generic_weapon_item")) > 0)
		return false;

	return true;
}

int func_202(const char* sParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, Hash hParam15, int iParam16) // Position - 0x570C Signature - 22 11 16
{
	int i;
	int num;
	int num2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	if (_IS_NULL_VECTOR(uParam2))
		return 0;

	if (fParam5 <= 0f)
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_287(i, 2))
		{
			if (func_288(uParam2, Global_1951910[i /*23*/].f_6, 0.01f, true) && hParam1 == Global_1951910[i /*23*/].f_4)
			{
				num2 = i;
				return num2;
			}
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_289(num, hParam1, sParam0, 4, iParam6, iParam7, uParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, false, false, 0, hParam15, iParam16);
		return num;
	}

	return 0;
}

BOOL func_203(var uParam0) // Position - 0x57EA Signature - 22 01 10 00 00 66
{
	var unk;
	int num;

	if (func_11(uParam0->f_1))
	{
		uParam0->f_15 = func_128("NET_MG_HELP_BANNED", 10000, 0, 0, 0, true);
		return false;
	}
	else if (func_290(uParam0->f_1))
	{
		uParam0->f_15 = func_128(func_267(uParam0->f_2, 579389526, func_291()), 10000, 0, 0, 0, true);
		return false;
	}
	else if (func_292(uParam0->f_1, -1038316793, &unk))
	{
		uParam0->f_15 = func_128(func_267(uParam0->f_2, -1300909614, unk.f_3), 10000, 0, 0, 0, true);
		return false;
	}
	else if (func_292(uParam0->f_1, 1485265289, &unk))
	{
		uParam0->f_15 = func_128(func_267(uParam0->f_2, -1589038658, unk.f_3), 10000, 0, 0, 0, true);
		return false;
	}
	else if (func_293(uParam0->f_1))
	{
		uParam0->f_15 = func_128(MISC::VAR_STRING(10, "NET_MG_HELP_MAINTENANCE", func_294(uParam0->f_2)), 10000, 0, 0, 0, true);
		return false;
	}
	else if (func_295(PLAYER::PLAYER_ID(), true, false, true))
	{
		uParam0->f_15 = func_128(MISC::VAR_STRING(10, "MISSION_WANTED_REGION", func_294(uParam0->f_2)), 10000, 0, 0, 0, true);
		return false;
	}
	else if (func_296())
	{
		uParam0->f_15 = func_128("MG_POSSE_MEM_IN_JAIL", 10000, 0, 0, 0, true);
		return false;
	}
	else if (func_102() || SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("generic_weapon_item")) > 0)
	{
		return false;
	}

	num = func_297(uParam0->f_1, 1);

	if (num > 0 && !func_298(num))
	{
		uParam0->f_15 = func_128(MISC::VAR_STRING(2, "MGPKR_BROKE_MP", num), 10000, 0, 0, 0, true);
		return false;
	}

	return true;
}

void func_204(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x599E Signature - 22 04 07 00 00 66
{
	int num;

	if (bParam2 && !func_61(iParam0))
		return;

	num = func_173(iParam0);

	if (bParam1)
	{
		func_299(iParam0, 4);
	
		if (bParam3)
			func_300(num, true);
	
		func_301(num, true);
	}
	else
	{
		func_302(iParam0, 4);
		func_301(num, false);
	}

	return;
}

BOOL func_205(int iParam0, BOOL bParam1) // Position - 0x59F2 Signature - 22 02 09
{
	int num;
	int gameTimer;
	float progress;
	int num2;
	int num3;

	if (bParam1 && !func_61(iParam0))
		return false;

	num = func_173(iParam0);

	if (HUD::_UI_PROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1951910[num /*23*/].f_3))
	{
		if (Global_1951910[num /*23*/].f_20)
			gameTimer = MISC::GET_GAME_TIMER();
		else
			gameTimer = MISC::GET_SYSTEM_TIME();
	
		progress = HUD::_UI_PROMPT_GET_PROGRESS(Global_1951910[num /*23*/].f_3);
	
		if (!HUD::_UI_PROMPT_IS_ACTIVE(Global_1951910[num /*23*/].f_3))
		{
			num2 = gameTimer - Global_1951910[num /*23*/].f_21;
			num3 = BUILTIN::FLOOR((float)Global_1951910[num /*23*/].f_18 * (1f - Global_1951910[num /*23*/].f_22));
		
			if (num2 > num3)
				return true;
		}
		else
		{
			Global_1951910[num /*23*/].f_21 = gameTimer;
			Global_1951910[num /*23*/].f_22 = progress;
		}
	}

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951910[num /*23*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1951910[num /*23*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1951910[num /*23*/].f_3);
}

void func_206() // Position - 0x5AEC Signature - 22 00 02 00 00 03 01 00 20
{
	if (!UIAPPS::IS_ANY_UIAPP_RUNNING())
		return;

	UIAPPS::_CLOSE_ALL_UIAPPS();
	return;
}

BOOL func_207(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5B03 Signature - 22 03 06 00 00 66 02 39
{
	BOOL flag;

	flag = func_304(bParam2, func_303(), true, false, true, true, true, bParam0, bParam1);

	if (!flag)
		return false;

	return true;
}

void func_208(int iParam0) // Position - 0x5B2B Signature - 22 01 03 00 00 66 00 5D 3A
{
	Global_1896762.f_365 = iParam0;
	return;
}

BOOL func_209() // Position - 0x5B3C Signature - 22 00 02 00 00 37
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("camera_item")) > 0)
		return true;

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(872480335) > 0)
		return true;

	return false;
}

BOOL func_210(Hash hParam0) // Position - 0x5B67 Signature - 22 01 04 00 00 2F 67 03 2F
{
	int i;

	i = 0;

	for (i = 0; i < Global_1939434.f_161; i = i + 1)
	{
		if (hParam0 == MISC::GET_HASH_KEY(&(Global_1939434[i /*16*/].f_10)))
		{
			func_305(i);
			return true;
		}
	}

	return false;
}

void _STOPWATCH_RESET(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x5BA7 Signature - 22 03 05 00 00 03 01 00 40 6A 8B 04 00 66 01 05 69 8B 1A
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (!useAccurateTime)
			*pStopwatch = NETWORK::GET_NETWORK_TIME();
		else
			*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
	else
		*pStopwatch = MISC::GET_GAME_TIMER();

	pStopwatch->f_1 = 1;
	return;
}

const char* func_212(var uParam0, var uParam1) // Position - 0x5BE4 Signature - 22 02 04 00 00 4B
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

const char* func_213(var uParam0, int iParam1) // Position - 0x5BF8 Signature - 22 02 04 00 00 66 01 37
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", uParam0);

	return func_306(MISC::VAR_STRING(10, "LITERAL_STRING", uParam0), iParam1);
}

int func_214(Any* panParam0, var uParam1, const char* sParam2, int iParam3, BOOL bParam4) // Position - 0x5C2E Signature - 22 05 0B 00 00 66
{
	int num;
	int num2;

	num = iParam3;
	num.f_1 = uParam1;
	num.f_2 = sParam2;
	num2 = UISTICKYFEED::_UI_STICKY_FEED_CREATE_ERROR_MESSAGE(panParam0, &num, bParam4);
	return num2;
}

int func_215(Any* panParam0, var uParam1, const char* sParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x5C54 Signature - 22 06 0D
{
	int num;
	int num2;

	num = iParam4;
	num.f_1 = iParam3;
	num.f_2 = uParam1;
	num.f_3 = sParam2;
	num2 = UISTICKYFEED::_UI_STICKY_FEED_CREATE_WARNING_MESSAGE(panParam0, &num, bParam5);
	return num2;
}

void func_216(BOOL bParam0, int iParam1) // Position - 0x5C80 Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 02 04 00 00 66 00 3C 01
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

BOOL func_217(int iParam0, var uParam1) // Position - 0x5C91 Signature - 22 02 04 00 00 66 00 3C 01 00 9E
{
	switch (iParam0)
	{
		case -471827042:
			*uParam1 = 0;
			return true;
	
		default:
		
	}

	switch (iParam0)
	{
		case -2033178055:
			*uParam1 = 2;
			return true;
	
		case -1150372370:
			*uParam1 = 1;
			return true;
	
		case 355424894:
			*uParam1 = 3;
			return true;
	
		default:
		
	}

	return false;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x5CE2 Signature - 22 01 03 00 00 66 00 27 01 50
{
	return uParam0->f_1;
}

int func_219(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5CEE Signature - 22 03 05 00 00 03 01 00 40 6A 8B 04 00 66 01 05 69 8B 25
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		if (!bParam2)
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME());
		else
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());

	return NETWORK::GET_TIME_DIFFERENCE(*uParam0, MISC::GET_GAME_TIMER());
}

void func_220(BOOL bParam0, int iParam1) // Position - 0x5D35 Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 02 04 00 00 11
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

BOOL func_221(var uParam0, var uParam1) // Position - 0x5D4A Signature - 22 02 04 00 00 11 4B 00 2D 39 F8
{
	return func_71(uParam0) == 0;
}

void func_222(var uParam0, var uParam1) // Position - 0x5D5C Signature - 22 02 04 00 00 11 4B 00 2D 39 33
{
	if (func_72(uParam0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_72(uParam0)))
	{
		STATS::_0x99230691875FC218(func_82(uParam0), func_72(uParam0), Global_34);
	}

	return;
}

BOOL func_223(int iParam0) // Position - 0x5D9F Signature - 22 01 03 00 00 5D DD D3 10 78
{
	return Global_1102813.f_3520 && iParam0 != false;
}

BOOL func_224() // Position - 0x5DB3 Signature - 22 00 02 00 00 42
{
	return func_223(4);
}

BOOL func_225(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x5DC0 Signature - 22 04 06 00 00 1D
{
	if (_IS_NULL_VECTOR(uParam0))
		return false;

	if (func_307(255) == 4)
		return false;

	func_200(4, 255);
	func_228(4);
	func_308(&(Global_1102813.f_3869));
	Global_1102813.f_3869.f_6 = { uParam0 };
	Global_1102813.f_3869 = uParam3;
	Global_1102813.f_3869.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_309(Global_1102813.f_3869, 36);
	return true;
}

void func_226(BOOL bParam0, BOOL bParam1) // Position - 0x5E47 Signature - 22 02 04 00 00 6D FF
{
	if (func_307(255) == 4)
		return;

	if (_IS_NULL_VECTOR(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
		return;

	if (!bParam0)
	{
		func_227(0);
	}
	else
	{
		if (bParam1)
			func_310(0, false, 0, true);
	
		func_228(0);
		func_261(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");
		func_262(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
	
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}

	func_263(Global_1102813.f_3839, 36);
	func_264(Global_1102813.f_3878, 36);
	return;
}

int func_227(int iParam0) // Position - 0x5F92 Signature - 22 01 03 00 00 5D DD D3 10 80 04 66 00 62 39 03
{
	if (func_311(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

int func_228(int iParam0) // Position - 0x5FAF Signature - 22 01 03 00 00 5D DD D3 10 80 04 66 00 62 39 35
{
	if (func_312(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

BOOL func_229(int iParam0, int iParam1) // Position - 0x5FCC Signature - 22 02 04 00 00 66 00 2F 0B
{
	if (iParam0 == 0 || iParam0 == 3)
		return iParam1 != -1;

	return iParam1 != 0;
}

BOOL func_230(Player plParam0) // Position - 0x5FF0 Signature - 22 01 04 00 00 66 00 03
{
	Any gangId;

	gangId = GANG::NETWORK_GET_GANG_ID(plParam0);

	if (GANG::NETWORK_IS_GANG_ACTIVE(gangId) && !GANG::NETWORK_IS_GANG_LEADER(plParam0))
		return false;

	return true;
}

void func_231(Any* panParam0) // Position - 0x601A Signature - 22 01 03 00 00 5D 17 00 18 80 48 80 11
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1572887.f_72.f_17), panParam0, 22);
	return;
}

void func_232(int iParam0, BOOL bParam1) // Position - 0x6032 Signature - 22 02 04 00 00 66 00 5D 17
{
	Global_1572887.f_72.f_39 = iParam0;

	if (bParam1)
		func_313();

	return;
}

void func_233(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x604D Signature - 22 04 06 00 00 66 00 5D
{
	Global_1572887.f_72 = iParam0;
	Global_1572887.f_72.f_9 = iParam1;
	Global_1572887.f_72.f_10 = iParam2;

	if (bParam3)
		func_313();

	return;
}

void func_234(var uParam0, var uParam1, BOOL bParam2) // Position - 0x607A Signature - 22 03 05 00 00 11 4B 00 2D 11
{
	Global_1572887.f_72.f_11 = { uParam0 };

	if (bParam2)
		func_313();

	return;
}

void func_235(int iParam0) // Position - 0x6099 Signature - 22 01 03 00 00 66 00 5D 17 00 18 80 48 6C 0F
{
	Global_1572887.f_72.f_15 = iParam0;
	return;
}

void func_236(int iParam0) // Position - 0x60AB Signature - 22 01 03 00 00 66 00 5D 17 00 18 80 48 6C 0D
{
	Global_1572887.f_72.f_13 = iParam0;
	return;
}

void func_237() // Position - 0x60BD Signature - 22 00 06 00 00 03
{
	Ped ped;
	var entityCoords;

	ped = PLAYER::PLAYER_PED_ID();

	if (PED::IS_PED_INJURED(ped))
		return;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, false, false) };
	Global_1572887.f_72.f_49 = { entityCoords };
	return;
}

BOOL func_238() // Position - 0x60F1 Signature - 22 00 02 00 00 39 31 66
{
	if (func_244() != 0)
		return false;

	if (Global_1572887.f_72.f_9 >= 5 && Global_1572887.f_72.f_9 <= 8)
		return false;

	return true;
}

int func_239(var uParam0, var uParam1) // Position - 0x6127 Signature - 22 02 04 00 00 39
{
	if (func_68())
		return 0;

	if (!func_69(uParam0))
		return 0;

	Global_1051268 = { uParam0 };
	return 1;
}

void func_240() // Position - 0x6155 Signature - 22 00 02 00 00 2F 03
{
	Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_15.f_12 = 0;
	return;
}

void func_241(var uParam0, var uParam1) // Position - 0x616D Signature - 22 02 0F
{
	int num;
	int num2;
	int num3;
	var unk;

	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_117);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_118);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_119);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_120);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_121);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_122);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_123);
	num = func_314(uParam0);

	if (num == -1)
		return;

	num2 = func_315(num);

	if (num2 == -1)
		return;

	num3 = func_316(num);
	unk = { func_317(num2, num3) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_115, MISC::VAR_STRING(2, &unk));
	return;
}

int func_242(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x6215 Signature - 22 05 0C
{
	Hash hash;
	int num;
	int num2;

	if (iParam1 == 0)
		return 0;

	if (uParam0->f_11 == iParam1)
	{
		func_318(uParam0, 4194304);
		return 1;
	}

	hash = func_319(iParam1);

	if (hash == -1)
		return 0;

	TEXT_LABEL_COPY(&(uParam0->f_22), { Global_265213.f_4[hash /*46*/] }, 3);
	uParam0->f_32 = { Global_265213.f_4[hash /*46*/].f_7 };
	uParam0->f_40 = Global_265213.f_4[hash /*46*/].f_17;
	uParam0->f_41 = Global_265213.f_4[hash /*46*/].f_25;
	uParam0->f_11 = Global_265213.f_4[hash /*46*/].f_23;
	uParam0->f_12 = Global_265213.f_57505[hash /*8*/];
	uParam0->f_56 = { Global_265213.f_4[hash /*46*/].f_19 };
	uParam0->f_25 = Global_265213.f_4[hash /*46*/].f_29;
	uParam0->f_27 = Global_265213.f_4[hash /*46*/].f_27;
	uParam0->f_28 = Global_265213.f_4[hash /*46*/].f_28;
	uParam0->f_16 = 1;
	uParam0->f_16.f_1 = 0;
	uParam0->f_16.f_4 = iParam4;
	uParam0->f_16.f_2 = Global_265213.f_4[hash /*46*/].f_24;
	uParam0->f_16.f_3 = Global_265213.f_4[hash /*46*/].f_26;
	uParam0->f_21 = Global_265213.f_4[hash /*46*/].f_26;
	uParam0->f_29 = Global_265213.f_4[hash /*46*/].f_35;
	uParam0->f_1 = { Global_265213.f_4[hash /*46*/].f_15 };
	TEXT_LABEL_COPY(&(uParam0->f_3), { Global_265213.f_4[hash /*46*/].f_4 }, 8);
	func_320(&Global_265213.f_4[hash /*46*/]);

	if (iParam2 != -1)
	{
		if (uParam0->f_16.f_2 == -933924539 && func_321(iParam2) || uParam0->f_16.f_2 == 395262693 && func_322(iParam2))
		{
			uParam0->f_16.f_3 = iParam2;
			uParam0->f_21 = iParam2;
		}
	}

	if (iParam3 > 0)
		uParam0->f_25 = iParam3;

	num = func_323(Global_265213.f_57505[hash /*8*/]);
	num2 = { func_324(uParam0->f_12) };

	if (num != -1)
	{
		uParam0->f_48 = { func_325(num) };
	}
	else if (func_326(uParam0->f_12))
	{
		uParam0->f_48 = { func_328(func_327(uParam0->f_12)) };
	}
	else if (num2.f_1 != -1 && num2 != -1)
	{
		uParam0->f_48 = { func_329(&num2) };
	}
	else if (uParam0->f_16.f_3 == 31269700)
	{
		uParam0->f_48 = { func_330(640937726) };
	}
	else if (uParam0->f_16.f_3 == -698288936)
	{
		uParam0->f_48 = { func_330(1357993786) };
	}
	else
	{
		uParam0->f_48 = { func_331(uParam0->f_11) };
	
		if (!func_69(uParam0->f_48))
			uParam0->f_48 = { func_330(func_332(uParam0->f_16.f_2)) };
	}

	func_333(uParam0);
	func_318(uParam0, 4194304);
	return 1;
}

char* func_243(int iParam0) // Position - 0x64DB Signature - 22 01 04 00 00 66 00 39 83
{
	Hash hash;

	hash = func_334(iParam0);

	if (hash == Global_265189.f_1[0])
		return "NM_BUCKET_RACE";

	if (hash == Global_265189.f_1[1])
		return "NET_PLAYLIST_FEATURED_SERIES_001";

	if (hash == Global_265189.f_1[5])
		return "NET_PLAYLIST_SPECIAL_SERIES_1";

	if (hash == Global_265189.f_1[6])
		return "NET_PLAYLIST_SPECIAL_SERIES_2";

	if (hash == Global_265189.f_1[7])
		return "NET_PLAYLIST_ELIMINATION_SMALL";

	if (hash == Global_265189.f_1[8])
		return "NET_PLAYLIST_ELIMINATION_MEDIUM";

	if (hash == Global_265189.f_1[9])
		return "NET_PLAYLIST_ELIMINATION_LARGE";

	if (hash == Global_265189.f_1[2])
		return "NET_PLAYLIST_ADVERSARY_SERIES_SMALL";

	if (hash == Global_265189.f_1[3])
		return "NET_PLAYLIST_ADVERSARY_SERIES_MEDIUM";

	if (hash == Global_265189.f_1[4])
		return "NET_PLAYLIST_ADVERSARY_SERIES_LARGE";

	if (hash == Global_265189.f_1[15])
		return "NM_BUCKET_ORBIS_SERIES_1";

	if (hash == Global_265189.f_1[16])
		return "NM_BUCKET_ORBIS_SERIES_2";

	if (hash == Global_265189.f_1[17])
		return "NM_BUCKET_ORBIS_SERIES_3";

	if (hash == Global_265189.f_1[19])
		return "NET_PLAYLIST_CAPTURE";

	if (hash == Global_265189.f_1[18])
		return "NET_PLAYLIST_SHOOTOUT";

	return "Unmapped bucket hash";
}

int func_244() // Position - 0x6631 Signature - 22 00 02 00 00 5D 17 00 18 27 48
{
	return Global_1572887.f_72;
}

char* func_245(int iParam0, int iParam1) // Position - 0x663F Signature - 22 02 04 00 00 66 00 3C 01 00 00
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "NM_BUCKET_EIGHT_PLAYER";
			
				case 1:
					return "NM_BUCKET_RACE";
			
				case 2:
					return "NM_BUCKET_TWELVE_PLAYER";
			
				case 3:
					return "NM_BUCKET_ADVERSARIAL";
			
				case 5:
					return "NM_BUCKET_NOMINATED_SERIES_SMALL";
			
				case 6:
					return "NM_BUCKET_NOMINATED_SERIES";
			
				case 7:
					return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
			
				case 8:
					return "NM_BUCKET_NOMINATED_SERIES_LARGE";
			
				case 23:
					return "NM_BUCKET_MISSION_2_PLAYER";
			
				case 24:
					return "NM_BUCKET_FOUR_PLAYER";
			
				case 25:
					return "NM_BUCKET_EIGHT_PLAYER";
			
				case 26:
					return "NM_BUCKET_MISSION_10_PLAYER";
			
				case 27:
					return "NM_BUCKET_TWELVE_PLAYER";
			
				case 28:
					return "NM_BUCKET_ADVERSARIAL";
			
				default:
					break;
			}
			break;
	}

	return "Invalid Net Matchmaking Bucket";
}

BOOL func_246(int iParam0, BOOL bParam1) // Position - 0x671A Signature - 22 02 05 00 00 2F 67 04 66 00
{
	BOOL flag;

	flag = false;

	if (iParam0 == 255)
	{
		flag = true;
		iParam0 = func_283();
	}
	else if (iParam0 == func_283())
	{
		flag = true;
	}

	if (flag)
		if (!bParam1)
			return Global_1295666.f_9;

	if (!flag)
	{
		if (!Global_1295666.f_17[iParam0])
			return false;
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[iParam0]))
			return false;
	}

	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(Global_1295666.f_149[iParam0])) <= 1)
		return false;

	return true;
}

int func_247(char* sParam0) // Position - 0x67A1 Signature - 22 01 05 00 00 11
{
	const char* str;
	int num;

	str = MISC::VAR_STRING(2, sParam0);
	num = func_335(str, -2, 0, 0, 0, true);
	return num;
}

void func_248(int iParam0) // Position - 0x67C3 Signature - 22 01 03 00 00 66 00 5D 17 00 18 80 48 6C 28
{
	Global_1572887.f_72.f_40 = iParam0;
	return;
}

Any func_249(int iParam0, int iParam1) // Position - 0x67D5 Signature - 22 02 04 00 00 66 01 66 00 5D F4 88 11 80 01 63 1B 80 0F 17
{
	return Global_1149172.f_1[iParam0 /*27*/].f_15[iParam1 /*3*/];
}

void func_250(var uParam0, var uParam1) // Position - 0x67ED Signature - 22 02 26
{
	Hash hash;
	var unk;

	if (func_72(uParam0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_72(uParam0)))
	{
	}
	else
	{
		hash = func_72(uParam0);
		STATS::STATSTRACKER_DEED_STARTED(hash, Global_265213.f_122484.f_80.f_12);
		unk_0x6F5BC5C4EAB42B15(hash, 2, &(Global_265213.f_122484.f_80.f_22));
	
		if (func_254(uParam0, &unk))
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

int func_251(var uParam0, var uParam1, int iParam2) // Position - 0x6896 Signature - 22 03 06 00 00 11 4B 00 2D 39 A8
{
	int num;

	num = func_195(uParam0);

	if (num >= 0)
		return num;

	if (Global_1900460.f_66 >= 32)
		return -1;

	num = Global_1900460.f_66;
	func_336(uParam0, num);
	Global_1900460.f_66 = Global_1900460.f_66 + 1;

	if (iParam2 < 0 || iParam2 >= Global_1900460.f_66)
		return num;

	func_281(num, iParam2);
	return iParam2;
}

BOOL func_252(int iParam0) // Position - 0x6907 Signature - 22 01 03 00 00 5D 00
{
	return Global_1572864.f_3 && iParam0 != false;
}

int func_253(var uParam0, var uParam1, BOOL bParam2) // Position - 0x691A Signature - 22 03 06 00 00 11 4B 00 2D 39 B3
{
	int num;

	if (!func_69(uParam0))
		return 0;

	num = func_195(uParam0);

	if (num < 0)
		return 0;

	if (!func_337(uParam0, func_76(0), bParam2))
	{
		func_75(func_76(0), 3);
		func_75(func_76(num), 4);
		return 0;
	}

	func_281(num, 0);
	func_75(func_76(0), 3);
	func_75(func_76(1), 4);
	return 1;
}

BOOL func_254(int iParam0, var uParam1, var uParam2) // Position - 0x698E Signature - 22 03 08 00 00 4B
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;
	func_270(iParam0, &unk);

	if (func_338(iParam0, unk, uParam2))
		return true;

	return false;
}

void func_255(int iParam0) // Position - 0x69C2 Signature - 22 01 03 00 00 03 01 00 B7 5D 77 5E 10 18 69 53 80 01 63 08 27 07 66 00 39 33 20 00 05
{
	if (!func_57(Global_1072759.f_21353.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7, iParam0))
		func_172(&(Global_1072759.f_21353.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7), iParam0);

	return;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x69FC Signature - 22 01 03 00 00 2F 66 00 6C 01
{
	uParam0->f_1 = 0;
	return;
}

struct<10> func_257(int iParam0) // Position - 0x6A09 Signature - 22 01 0D 00 00 4B
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	func_340(func_339(iParam0), &unk);
	return unk;
}

int func_258(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x6A36 Signature - 22 03 09
{
	int i;
	int num;
	float num2;
	float num3;

	i = 0;
	num = -1;
	num2 = 0f;

	for (i = 0; i <= 14; i = i + 1)
	{
		num3 = BUILTIN::VDIST(vParam0, Global_1072759.f_23824.f_383[i /*272*/].f_2);
	
		if (num3 < num2 || num == -1)
		{
			num = i;
			num2 = num3;
		}
	}

	return num;
}

int func_259(Hash hParam0) // Position - 0x6A93 Signature - 22 01 08 00 00 5D
{
	Any any;

	any = Global_1072759.f_23824.f_383.f_4085;
	any.f_2 = 1593794963;
	any.f_3 = hParam0;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&any);
}

BOOL func_260(Hash hParam0, int iParam1, Vector3* pvParam2, float* pfParam3) // Position - 0x6ABF Signature - 22 04 0B
{
	Any any;

	any = Global_1072759.f_23824.f_383.f_4085;
	any.f_2 = 160165798;
	any.f_3 = hParam0;
	any.f_4 = iParam1;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(any.f_1), &any))
	{
		any.f_2 = 1576253240;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam2, &any);
		any.f_2 = -55481687;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam3, &any);
		return true;
	}

	return false;
}

void func_261(var uParam0) // Position - 0x6B21 Signature - 22 01 21
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_262(float* pfParam0) // Position - 0x6B33 Signature - 22 01 0C 00 00 6D 09 4B 03 2D 6D 09 66 00 06 50 01 00 22 1F
{
	var unk;

	*pfParam0 = { unk };
	return;
}

void func_263(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0x6B45 Signature - 22 1F
{
	switch (uParam0.f_5)
	{
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0.f_4))
			{
			}
			break;
	}

	uParam0.f_16;
	VOLUME::DOES_VOLUME_EXIST(uParam0.f_27) && uParam0.f_28;
	return;
}

void func_264(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0x6B9B Signature - 22 0A 0C 00 00 4B 00 27 05 3C 03 00 01 00 00 00 0F 00 02 00 00 00 0C 00 03 00 00 00 09 00 68 09 00 68 06 00 68 03 00 68 00 00 50 0A 00 22 01
{
	switch (uParam0.f_5)
	{
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	}

	return;
}

void func_265(int iParam0) // Position - 0x6BC8 Signature - 22 01 03 00 00 66 00 39 CF
{
	if (!func_341(iParam0))
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_21353.f_260), iParam0);

	return;
}

BOOL func_266() // Position - 0x6BEA Signature - 22 00 02 00 00 5D 86
{
	return Global_1149318.f_2 != 0;
}

const char* func_267(int iParam0, int iParam1, int iParam2) // Position - 0x6BFA Signature - 22 03 06 00 00 2F
{
	int num;

	num = 0;

	if (iParam2 != 0)
	{
		num = iParam2 - Global_1149318.f_7;
	
		if (num < 0)
			num = 0;
	}

	switch (iParam1)
	{
		case -1878199881:
			return MISC::VAR_STRING(10, "NET_MG_HELP_GEO_TOGGLE", func_294(iParam0));
	
		case -1720361368:
			return "NET_MG_HELP_BANNED";
	
		case -1700673948:
			return MISC::VAR_STRING(10, "MG_FAILED_LAUNCH", func_294(iParam0));
	
		case -1695230319:
			return MISC::VAR_STRING(10, "NET_MG_HELP_PLAYER_CLEAN", func_294(iParam0));
	
		case -1589038658:
			if (num == 0)
				return "NET_MG_HELP_DAILY_BUYIN_CAP";
		
			return MISC::VAR_STRING(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_DAILY_BUYIN_CAP", func_342(num, 0, false));
	
		case -1517426354:
			return MISC::VAR_STRING(10, "NET_MG_HELP_MAINTENANCE", func_294(iParam0));
	
		case -1385120212:
		case -1249239171:
		case 0:
			return "";
	
		case -1300909614:
			if (num == 0)
				return "NET_MG_HELP_DAILY_PROFIT_CAP";
		
			return MISC::VAR_STRING(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_DAILY_PROFIT_CAP", func_342(num, 0, false));
	
		case joaat("banned"):
			return "NET_MG_HELP_BANNED2";
	
		case -835571454:
			return MISC::VAR_STRING(10, "NET_MG_HELP_NETWORK_ERROR", func_294(iParam0));
	
		case -592991683:
			return "NET_MG_HELP_NO_PARTY_CHAT";
	
		case -301240451:
			return MISC::VAR_STRING(10, "NET_MG_HELP_SCRIPT_ERROR", func_294(iParam0));
	
		case 579389526:
			if (num == 0)
				return "NET_MG_HELP_OVERALL_CAP";
		
			return MISC::VAR_STRING(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_OVERALL_CAP", func_342(num, 0, false));
	
		case 1053423395:
			return "NET_MG_HELP_PUB_RE_BUYIN_CAP";
	
		case 1320901890:
			return "NET_MG_HELP_ARBITLEGAL";
	
		case 1406403638:
			return "NET_MG_HELP_POSSE_LEADER_LEFT";
	
		case 1671747787:
			if (num == 0)
				return MISC::VAR_STRING(2, "NET_MG_HELP_PRIV_HOUR_BUYIN_CAP");
		
			return MISC::VAR_STRING(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_PRIV_HOUR_BUYIN_CAP", func_342(num, 1, false));
	
		case joaat("DISCONNECTED"):
			return MISC::VAR_STRING(10, "NET_MG_HELP_DISCONNECTED", func_294(iParam0));
	
		case 2124908670:
			return "NET_MG_HELP_BUYIN_TIMEOUT";
	
		default:
		
	}

	return "";
}

void func_268(var uParam0, int iParam1) // Position - 0x6E01 Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 01
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_269(int iParam0) // Position - 0x6E12 Signature - 22 01 03 00 00 66 00 11 39
{
	return func_287(iParam0, 2);
}

BOOL func_270(int iParam0, var uParam1, Any* panParam2) // Position - 0x6E21 Signature - 22 03 05 00 00 11 4B 00 2D 39 B3 22 00 05 8B 04
{
	if (!func_69(iParam0))
		return false;

	func_343(panParam2);

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

int func_271(var uParam0, var uParam1) // Position - 0x6F2C Signature - 22 02 07 00 00 4B 04 6A 80 01 08 3D 41 6A 80 02 08 3D 41 41 11 4B 00 2D 4B 04 39 21 6E 00 8B 07
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_270(uParam0, &unk))
		return unk.f_1;

	return -1;
}

int func_272(int iParam0) // Position - 0x6F58 Signature - 22 01 09 00 00 08
{
	int num;
	int num2;

	num = -1;

	if (func_344(&num2, iParam0))
		num = func_345() - DATAFILE::_0xE13634BB6BAF0734(num2, num2.f_1) - 1;

	return num;
}

int func_273(int iParam0) // Position - 0x6F83 Signature - 22 01 03 00 00 66 00 08 15 04 00 2F 50 01 01 66 00 5D F6 FF 12 17
{
	if (iParam0 == -1)
		return 0;

	return Global_1245174[iParam0 /*5*/];
}

int func_274(int iParam0) // Position - 0x6F9D Signature - 22 01 03 00 00 66 00 08 15 04 00 2F 50 01 01 66 00 5D F6 FF 12 63
{
	if (iParam0 == -1)
		return 0;

	return Global_1245174[iParam0 /*5*/].f_2;
}

BOOL func_275(int iParam0, BOOL bParam1) // Position - 0x6FB9 Signature - 22 02 04 00 00 66 00 3C 0D
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

int func_276(int iParam0) // Position - 0x7021 Signature - 22 01 07 00 00 66 00 67
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

int func_277(int iParam0) // Position - 0x70C2 Signature - 22 01 07 00 00 5D
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

int func_278(int iParam0, int iParam1) // Position - 0x7156 Signature - 22 02 04 00 00 66 00 3C 21
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

BOOL func_279(int iParam0) // Position - 0x89FC Signature - 22 01 04 00 00 66 00 39 59
{
	int num;

	num = func_346(iParam0);

	if (num < 336)
		return false;

	return true;
}

BOOL func_280(int iParam0) // Position - 0x8A19 Signature - 22 01 03 00 00 66 00 37
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
		return true;

	return false;
}

void func_281(int iParam0, int iParam1) // Position - 0x8A30 Signature - 22 02 05 00 00 66 00 66
{
	int i;

	if (iParam0 == iParam1)
		return;

	if (iParam1 < iParam0)
	{
		for (i = iParam0; i > iParam1; i = i - 1)
		{
			func_347(i - 1, i);
		}
	}
	else
	{
		for (i = iParam0; i < iParam1; i = i + 1)
		{
			func_347(i, i + 1);
		}
	}

	if (func_69(Global_1900460.f_1[0 /*2*/]))
		func_75(Global_1900460.f_1[0 /*2*/], 3);

	return;
}

BOOL func_282(Any* panParam0, int iParam1, int iParam2) // Position - 0x8AAA Signature - 22 03 07 00 00 66
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_283() // Position - 0x8AE1 Signature - 22 00 02 00 00 5D DD
{
	return Global_1102813.f_3672;
}

BOOL func_284() // Position - 0x8AF0 Signature - 22 00 02 00 00 5D 17 00 18 27 0E 08
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_4;
}

BOOL func_285(int iParam0, BOOL bParam1) // Position - 0x8B0C Signature - 22 02 04 00 00 70
{
	if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::IS_PED_IN_MELEE_COMBAT(Global_33) || func_131(bParam1, 1024) && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Global_33, Global_34, iParam0, bParam1) > 0)
		return true;

	return false;
}

BOOL func_286(var uParam0) // Position - 0x8B57 Signature - 22 01 04 00 00 1D
{
	float groundZ;

	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Global_34, &groundZ, false))
		return false;

	if (uParam0->f_2 == 0 && MISC::ABSF(groundZ - uParam0->f_77) > 0.5f)
		return false;

	if (BUILTIN::VDIST(Global_34, Global_34, Global_34.f_1, groundZ) > 1.2f)
		return false;

	return true;
}

BOOL func_287(int iParam0, int iParam1) // Position - 0x8BB7 Signature - 22 02 04 00 00 66 00 2F 8A 04
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

BOOL func_288(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x8BD8 Signature - 22 08 0A 00 00 66 06
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

void func_289(int iParam0, Hash hParam1, const char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, var uParam7, var uParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x8C2D Signature - 22 1A
{
	Prompt prompt;

	Global_1951910[iParam0 /*23*/].f_4 = hParam1;
	Global_1951910[iParam0 /*23*/] = iParam4;
	Global_1951910[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951910[iParam0 /*23*/].f_2 = iParam5;
	Global_1951910[iParam0 /*23*/].f_6 = { vParam6 };
	Global_1951910[iParam0 /*23*/].f_9 = fParam9;
	Global_1951910[iParam0 /*23*/].f_10 = volParam10;
	Global_1951910[iParam0 /*23*/].f_11 = volParam11;
	Global_1951910[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951910[iParam0 /*23*/].f_5 = iParam12;
	Global_1951910[iParam0 /*23*/].f_1 = 2;
	Global_1951910[iParam0 /*23*/].f_17 = -1;
	Global_1951910[iParam0 /*23*/].f_18 = iParam16;
	Global_1951910[iParam0 /*23*/].f_19 = iParam15;
	Global_1951910[iParam0 /*23*/].f_20 = bParam25;
	Global_1951910[iParam0 /*23*/].f_22 = 0f;

	if (bParam25)
		Global_1951910[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	else
		Global_1951910[iParam0 /*23*/].f_21 = MISC::GET_SYSTEM_TIME();

	prompt = HUD::_UI_PROMPT_REGISTER_BEGIN();
	HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, hParam1);

	if (hParam23 != 0)
		HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, hParam23);

	HUD::_UI_PROMPT_SET_TEXT(prompt, sParam2);

	if (iParam3 == 4)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, vParam6);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, 0f, 0f, 0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, fParam9);
	}

	HUD::_UI_PROMPT_SET_PRIORITY(prompt, iParam4);
	HUD::_UI_PROMPT_SET_TRANSPORT_MODE(prompt, iParam5);
	HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 18, true);

	if (bParam22)
		HUD::_0x53CE46C01A089DA1(prompt, true);

	switch (iParam14)
	{
		case 0:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(prompt, false);
			break;
	
		case 1:
			HUD::_UI_PROMPT_SET_PRESSED_TIMED_MODE(prompt, iParam16);
			break;
	
		case 2:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(prompt, true);
			break;
	
		case 3:
			HUD::_UI_PROMPT_SET_HOLD_INDEFINITELY_MODE(prompt);
			break;
	
		case 4:
		case 5:
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(prompt, hParam24);
			break;
	
		case 6:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_MODE(prompt, iParam16, iParam15);
		
			if (bParam25)
				HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 24, true);
			break;
	
		case 7:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_WITH_DECAY_MODE(prompt, iParam16, iParam15);
		
			if (bParam25)
				HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 24, true);
			break;
	
		case 8:
			HUD::_UI_PROMPT_SET_MASH_MODE(prompt, iParam17);
			break;
	
		case 9:
			HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(prompt, iParam16, iParam17);
			break;
	
		case 10:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 11:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 12:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 13:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 14:
			HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(prompt);
			break;
	
		case 15:
			HUD::_UI_PROMPT_SET_ROTATE_MODE(prompt, iParam20, bParam21);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 10, true);
			break;
	
		case 16:
			HUD::_UI_PROMPT_SET_TARGET_MODE(prompt, 0.5f, 0.1f, 0);
			break;
	}

	HUD::_UI_PROMPT_REGISTER_END(prompt);
	Global_1951910[iParam0 /*23*/].f_3 = prompt;
	func_300(iParam0, true);
	func_301(iParam0, true);
	func_302(iParam0, 128);
	return;
}

BOOL func_290(int iParam0) // Position - 0x8F47 Signature - 22 01 03 00 00 66 00 39 16
{
	if (!func_144(iParam0))
		return false;

	if (Global_1149318.f_6)
		return true;

	return false;
}

int func_291() // Position - 0x8F6B Signature - 22 00 02 00 00 87
{
	return Global_17418.f_3015.f_88;
}

BOOL func_292(int iParam0, int iParam1, Any anParam2) // Position - 0x8F7B Signature - 22 03 07 00 00 03
{
	int i;
	int num;

	num = MINIGAME::_0x15E90B6A993017AA();

	if (!func_144(iParam0))
		return false;

	if (num == 0)
		return false;

	for (i = 0; i < num; i = i + 1)
	{
		if (MINIGAME::_0x10342CC82E8356E9(i, anParam2))
		{
			if (anParam2->f_2 == iParam1)
			{
				func_348(anParam2->f_1, iParam0);
			
				if (*anParam2 == 1)
					if (anParam2->f_3 > Global_1149318.f_7)
						return true;
				else
					return true;
			}
		}
	}

	return false;
}

BOOL func_293(var uParam0) // Position - 0x8FF3 Signature - 22 01 03 00 00 2F 50
{
	return false;
}

char* func_294(int iParam0) // Position - 0x8FFC Signature - 22 01 03 00 00 66 00 3C 07 00 00
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJACK";
	
		case 1:
			return "MG_DOMIN";
	
		case 2:
			return "MG_POKER";
	
		case 3:
			return "MG_FILLET";
	
		case 4:
			return "MG_MILKING_COW";
	
		case 5:
			return "MG_CLEAN_STALLS";
	
		case 6:
			return "MG_FENCE_BUILDING";
	}

	return "Unknown Minigame";
}

BOOL func_295(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x9080 Signature - 22 04 29
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_349(bParam1, bParam2, bParam3);

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

BOOL func_296() // Position - 0x91B5 Signature - 22 00 14
{
	var memberHandles;
	int i;
	int gangMembers;
	Player playerFromGamerHandle;

	memberHandles = 7;

	if (!GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
		return false;

	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		return false;

	gangMembers = GANG::_NETWORK_GET_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()), &memberHandles);

	for (i = 0; i <= gangMembers - 1; i = i + 1)
	{
		playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&memberHandles[i /*2*/]);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerFromGamerHandle) || PLAYER::IS_PLAYER_DEAD(playerFromGamerHandle))
		{
		}
		else if (func_350(1048576, playerFromGamerHandle))
		{
			return true;
		}
	}

	return false;
}

int func_297(int iParam0, int iParam1) // Position - 0x9242 Signature - 22 02 05 00 00 66 00 08
{
	int num;

	if (iParam0 == -1)
		return 0;

	num = func_143(iParam0, iParam1);
	return num;
}

BOOL func_298(int iParam0) // Position - 0x9260 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 39
{
	if (iParam0 < 0)
		return false;

	if (func_83() == 0)
		return func_351(iParam0);

	return iParam0 <= func_352();
}

void func_299(int iParam0, int iParam1) // Position - 0x928D Signature - 22 02 04 00 00 66 00 2F 8A 03 00 50 02 00 66 00 5D A6 C8 1D 63 17 27 01 66 00
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 - Global_1951910[iParam0 /*23*/].f_1 && iParam1;
	return;
}

void func_300(int iParam0, BOOL bParam1) // Position - 0x92C0 Signature - 22 02 04 00 00 66 00 5D A6 C8 1D 63 17 27 03 03 05 00 78 8B 3F
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		if (Global_1951910[iParam0 /*23*/].f_5 == 5 && !func_287(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_301(int iParam0, BOOL bParam1) // Position - 0x9318 Signature - 22 02 04 00 00 66 00 5D A6 C8 1D 63 17 27 03 03 05 00 78 8B 10
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_302(int iParam0, int iParam1) // Position - 0x9341 Signature - 22 02 04 00 00 66 00 2F 8A 03 00 50 02 00 66 00 5D A6 C8 1D 63 17 27 01 66 01
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 || iParam1;
	return;
}

BOOL func_303() // Position - 0x9369 Signature - 22 00 02 00 00 5D 08
{
	return Global_1915656.f_20643;
}

BOOL func_304(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x9378 Signature - 22 09 10
{
	Player player;
	Ped ped;
	BOOL isEntityDead;
	BOOL isPedIncapacitated;
	int num;

	if (!bParam7 && UIAPPS::IS_ANY_UIAPP_RUNNING())
		return 0;

	if (!NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(-496459706))
		return 0;

	player = Global_1295666.f_149[Global_1295666];
	ped = Global_1295666.f_3;
	isEntityDead = ENTITY::IS_ENTITY_DEAD(ped);
	isPedIncapacitated = PED::IS_PED_INCAPACITATED(ped);

	if (isEntityDead || isPedIncapacitated)
	{
		if (!bParam5)
			return 0;
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
				return 0;
		
			if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "inInspectionMode"))
				return 0;
		}
	
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(player))
		{
			if (bParam6 && Global_1102813.f_3 & 32 != 0)
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(ped, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}

	if (!bParam1)
	{
		if (Global_1915656.f_20638 || Global_1915656.f_22504.f_1)
			return 0;
	
		if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_33) != 0)
			return 0;
	}

	if (func_353())
		return 0;

	if (Global_15)
		return 0;

	if (!bParam2 && Global_1940085.f_10 || Global_1940085.f_11 || Global_1940085.f_12 || Global_1940085.f_13)
		return 0;

	if (!bParam3)
	{
		num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (Global_1235687.f_9479 != -1)
			return 0;
	
		if (Global_1138673[num /*56*/].f_34 & 1 != 0 && Global_1138673[num /*56*/].f_34 & 2 == 0)
			return 0;
	
		if (Global_1140770.f_293)
			return 0;
	
		if (Global_1572887.f_72.f_40 > 11 && Global_1572887.f_72.f_40 < 15)
			return 0;
		else if (Global_1572887.f_72.f_40 > 15)
			return 0;
	}

	if (!bParam8)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if (Global_1048576 || Global_2883584)
				return 0;
		
			if (Global_1048581)
				return 0;
		
			if (Global_1048585)
				return 0;
		}
	}

	return 1;
}

void func_305(int iParam0) // Position - 0x959D Signature - 22 01 13
{
	var unk;

	if (iParam0 < 0 || iParam0 >= 10)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939434[iParam0 /*16*/].f_10)))
		return;

	Global_1939434[iParam0 /*16*/] = { unk };
	Global_1939434.f_161 = Global_1939434.f_161 - 1;

	if (Global_1939434.f_161 < 0)
		Global_1939434.f_161 = 0;

	return;
}

const char* func_306(const char* sParam0, int iParam1) // Position - 0x95FD Signature - 22 02 04 00 00 6D 2A
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_307(int iParam0) // Position - 0x9617 Signature - 22 01 03 00 00 66 00 6D FF
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

void func_308(var uParam0) // Position - 0x9662 Signature - 22 01 0C 00 00 6D 09 4B 03 2D 6D 09 66 00 06 50 01 00 22 0A
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_309(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0x9674 Signature - 22 0A 0C 00 00 4B 00 27 05 3C 03 00 01 00 00 00 0F 00 02 00 00 00 0C 00 03 00 00 00 09 00 68 09 00 68 06 00 68 03 00 68 00 00 50 0A 00 22 04
{
	switch (uParam0.f_5)
	{
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	}

	return;
}

void func_310(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x96A1 Signature - 22 04 06 00 00 66 00 39
{
	func_354(iParam0);

	if (!func_355(1))
		return;

	if (bParam1)
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	else if (!func_356(128) && !func_357(19))
		CAM::DO_SCREEN_FADE_OUT(iParam2);

	if (bParam3 && func_358() == 4)
		func_227(18);

	func_359(1024);
	return;
}

BOOL func_311(Any* panParam0, int iParam1, int iParam2) // Position - 0x9703 Signature - 22 03 08 00 00 66 01 6D 1F 59 67 05 66 01 6D 1F 47 67 06 66 05 66 00 17 01 66 06 03 09 00 E1 67 07 66 05 66 00 63 01 66 06 03 08 00 2F
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

BOOL func_312(Any* panParam0, int iParam1, int iParam2) // Position - 0x9735 Signature - 22 03 08 00 00 66 01 6D 1F 59 67 05 66 01 6D 1F 47 67 06 66 05 66 00 17 01 66 06 03 09 00 E1 67 07 66 05 66 00 63 01 66 06 03 08 00 07
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

void func_313() // Position - 0x9768 Signature - 22 00 03 00 00 39
{
	Player player;

	if (func_83() == -1)
		return;

	player = Global_1295666;

	if (func_131(Global_1572887.f_8, true))
		func_216(&(Global_1056554[player /*491*/].f_204.f_10), 4);
	else
		func_220(&(Global_1056554[player /*491*/].f_204.f_10), 4);

	Global_1056554[player /*491*/].f_204 = Global_1572887.f_72;
	Global_1056554[player /*491*/].f_204.f_1 = Global_1572887.f_72.f_9;
	Global_1056554[player /*491*/].f_204.f_2 = Global_1572887.f_72.f_10;
	Global_1056554[player /*491*/].f_204.f_3 = { Global_1572887.f_72.f_11 };
	Global_1056554[player /*491*/].f_204.f_8 = Global_1572887.f_72.f_13;
	Global_1056554[player /*491*/].f_204.f_5 = { Global_1572887.f_260 };
	Global_1056554[player /*491*/].f_204.f_9 = Global_1572887.f_72.f_39;

	if (func_150(1024))
		func_216(&(Global_1056554[player /*491*/].f_204.f_10), 2);
	else
		func_220(&(Global_1056554[player /*491*/].f_204.f_10), 2);

	return;
}

int func_314(var uParam0, var uParam1) // Position - 0x987D Signature - 22 02 05 00 00 2F 67 04 66 04
{
	int i;

	for (i = 0; i <= 7; i = i + 1)
	{
		if (func_27(Global_1206497.f_78[i /*20*/].f_7, uParam0))
			return i;
	}

	return -1;
}

int func_315(int iParam0) // Position - 0x98B6 Signature - 22 01 03 00 00 66 00 5D E1
{
	return Global_1206497.f_78[iParam0 /*20*/].f_3;
}

int func_316(int iParam0) // Position - 0x98CA Signature - 22 01 03 00 00 66 00 5D B2
{
	return Global_1205938.f_1[iParam0 /*26*/].f_3;
}

struct<8> func_317(int iParam0, int iParam1) // Position - 0x98DE Signature - 22 02 11
{
	var unk;
	var unk9;

	if (func_360(&unk9, iParam0) && func_361(&unk9) && func_362(&unk9, iParam1) && func_363(&unk9))
		func_364(unk9, 37194763, &unk, true);

	return unk;
}

void func_318(var uParam0, int iParam1) // Position - 0x992A Signature - 22 02 04 00 00 66 00 27 0F
{
	uParam0->f_15 = uParam0->f_15 || iParam1;
	return;
}

Hash func_319(Hash hParam0) // Position - 0x993D Signature - 22 01 04 00 00 66 00 2F
{
	Hash i;

	if (hParam0 == 0)
		return -1;

	for (i = 0; i < Global_265213.f_2; i = i + 1)
	{
		if (Global_265213.f_57505[i /*8*/] == hParam0)
			return i;
	
		if (Global_265213.f_4[i /*46*/].f_23 == hParam0)
			return i;
	}

	return -1;
}

void func_320(char* sParam0) // Position - 0x9994 Signature - 22 01 03 00 00 66 00 5D 17 00 18 80 48 80
{
	TEXT_LABEL_ASSIGN_STRING(&(Global_1572887.f_72.f_60.f_6), sParam0, 32);
	return;
}

BOOL func_321(int iParam0) // Position - 0x99AA Signature - 22 01 03 00 00 66 00 2F 39 AC
{
	if (func_365(iParam0, 0) == -1)
		return false;

	return true;
}

BOOL func_322(int iParam0) // Position - 0x99C2 Signature - 22 01 03 00 00 66 00 2F 39 3E
{
	if (func_366(iParam0, 0) == -1)
		return false;

	return true;
}

int func_323(Hash hParam0) // Position - 0x99DA Signature - 22 01 04 00 00 39 31
{
	int i;

	if (func_83() == -1)
		return -1;

	for (i = 9; i <= 25; i = i + 1)
	{
		if (func_367(i) == hParam0)
			return i;
	}

	return -1;
}

Vector3 func_324(int iParam0) // Position - 0x9A13 Signature - 22 01 10 00 00 4B
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;
	int num5;
	var unk7;

	num2 = -1;
	num2.f_1 = -1;
	num2.f_2 = -1;

	if (!func_368(&num))
		return num2;

	if (!func_369(&num, 13, 0, 0, 1))
		return num2;

	if (!func_369(&num, 17, 0, 0, 1))
		return num2;

	unk7 = num.f_1;
	num3 = func_370(&num, 0);

	for (i = 0; i <= num3 - 1; i = i + 1)
	{
		num.f_1 = unk7;
	
		if (!func_369(&num, 19, i, 0, 1))
		{
		}
		else if (!func_369(&num, 20, 0, 0, 1))
		{
		}
		else
		{
			num4 = func_370(&num, 1);
		
			if (!func_369(&num, 22, iParam0, 0, 0))
			{
			}
			else
			{
				num5 = DATAFILE::_0xE13634BB6BAF0734(num, num.f_1);
				num2 = i;
				num2.f_1 = num4 - num5 - 1;
				break;
			}
		}
	}

	return num2;
}

struct<2> func_325(int iParam0) // Position - 0x9AF8 Signature - 22 01 03 00 00 66 00 2F 35 6A 05 8B 06
{
	if (iParam0 < 0 || iParam0 >= 100)
		return func_371();

	return Global_1835011[iParam0 /*72*/].f_1;
}

BOOL func_326(int iParam0) // Position - 0x9B25 Signature - 22 01 03 00 00 66 00 2F 15
{
	if (iParam0 == 0)
		return false;

	return func_327(iParam0) != -1;
}

int func_327(int iParam0) // Position - 0x9B3F Signature - 22 01 05 00 00 2F 67 03 66 03
{
	int i;
	int num;

	for (i = 0; i <= 13 - 1; i = i + 1)
	{
		num = i;
	
		if (iParam0 == func_372(num))
			return num;
	}

	return -1;
}

struct<2> func_328(int iParam0) // Position - 0x9B71 Signature - 22 01 03 00 00 66 00 39 0E
{
	return func_373(iParam0);
}

struct<2> func_329(var uParam0) // Position - 0x9B7F Signature - 22 01 09 00 00 4B
{
	var unk;
	var unk6;

	if (!func_368(&unk))
		return func_371();

	if (!func_369(&unk, 13, 0, 0, 1))
		return func_371();

	if (!func_369(&unk, 17, 0, 0, 1))
		return func_371();

	if (!func_369(&unk, 19, *uParam0, 0, 1))
		return func_371();

	if (!func_369(&unk, 20, 0, 0, 1))
		return func_371();

	if (!func_369(&unk, 23, uParam0->f_1, 0, 1))
		return func_371();

	unk6 = func_374(&unk);
	return func_330(unk6);
}

struct<2> func_330(int iParam0) // Position - 0x9C19 Signature - 22 01 05 00 00 4B 03 6A 08 3D 41 6A 80 01 08 3D 41 41 66
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk = { func_375(iParam0, 2) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_375(iParam0, 7) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_375(iParam0, 5) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_375(iParam0, 6) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_375(iParam0, 8) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_375(iParam0, 3) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_375(iParam0, 4) };

	if (unk.f_1 >= 0)
		return unk;

	return func_371();
}

struct<2> func_331(int iParam0) // Position - 0x9CE9 Signature - 22 01 29
{
	var unk;
	var unk6;

	if (iParam0 == 0)
		return func_371();

	if (!func_376(&unk, 7, iParam0, 76966722))
		return func_371();

	func_377(7, &unk, &unk6);

	if (unk6.f_4 != 7)
		return func_371();

	return func_375(unk6.f_3, unk6.f_4);
}

int func_332(int iParam0) // Position - 0x9D3B Signature - 22 01 03 00 00 66 00 3C 03
{
	switch (iParam0)
	{
		case -933924539:
			return joaat("MP_RACE");
	
		case -504335712:
			return joaat("MP_VS_MISSION");
	
		case 395262693:
			return joaat("MP_DEATHMATCH");
	
		default:
		
	}

	return 0;
}

void func_333(var uParam0) // Position - 0x9D76 Signature - 22 01 03 00 00 2F 66 00 6C 0F
{
	uParam0->f_15 = 0;
	return;
}

Hash func_334(Hash hParam0) // Position - 0x9D83 Signature - 22 01 04 00 00 2F 67 03 66 03 6D
{
	int i;

	for (i = 0; i < 64; i = i + 1)
	{
		if (Global_265213.f_107995.f_13575[i] == hParam0)
			return Global_265213.f_107995.f_13510[i];
	}

	return 0;
}

int func_335(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x9DC7 Signature - 22 06 1A
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

void func_336(var uParam0, var uParam1, int iParam2) // Position - 0x9E02 Signature - 22 03 05 00 00 11 4B 00 2D 39 B3 22 00 05 8B 11
{
	if (!func_69(uParam0))
		func_70(&Global_1900460.f_1[iParam2 /*2*/]);
	else
		Global_1900460.f_1[iParam2 /*2*/] = { uParam0 };

	func_378(uParam0, false, 1, -1);
	return;
}

BOOL func_337(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x9E43 Signature - 22 05 09
{
	int num;
	int num2;

	if (!func_69(uParam0))
		return false;

	if (!func_69(uParam2))
		return true;

	num = func_82(uParam0);
	num2 = func_82(uParam2);

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

BOOL func_338(int iParam0, var uParam1, var uParam2) // Position - 0x9F4A Signature - 22 03 0A 00 00 66 00 39
{
	var unk;

	if (!func_379(iParam0))
		return false;

	if (func_380(iParam0, uParam1, &unk))
		func_377(iParam0, &unk, uParam2);
	else
		return false;

	return true;
}

int func_339(int iParam0) // Position - 0x9F7F Signature - 22 01 03 00 00 66 00 3C 05 00 00 00 00 00 1B 00 01 00 00 00 1A
{
	switch (iParam0)
	{
		case 0:
			return 9;
	
		case 1:
			return 10;
	
		case 2:
			return 11;
	
		case 3:
			return 12;
	
		case 4:
			return 13;
	
		default:
		
	}

	return -1;
}

int func_340(int iParam0, var uParam1) // Position - 0x9FC7 Signature - 22 02 04 00 00 66 00 66 01 32
{
	*uParam1 = iParam0;

	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.2848f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 111;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.5615f, -1372.1733f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 98;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.5818f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
	
		case 3:
			uParam1->f_1 = 1;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.0842f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 4:
			uParam1->f_1 = 1;
			uParam1->f_2 = 74;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.0048f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 5:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.7432f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 6:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1826.2151f, -433.9676f, 159.73857f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 7:
			uParam1->f_1 = 3;
			uParam1->f_2 = 81;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.884895f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 8:
			uParam1->f_1 = 3;
			uParam1->f_2 = 98;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { 2946.4443f, 500.1154f, 45.539986f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 9:
			uParam1->f_1 = 2;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.5474f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 10:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.2505f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 11:
			uParam1->f_1 = 2;
			uParam1->f_2 = 80;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 12:
			uParam1->f_1 = 2;
			uParam1->f_2 = 121;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.3945f, -2913.7637f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 13:
			uParam1->f_1 = 2;
			uParam1->f_2 = 81;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		default:
		
	}

	return 0;
}

BOOL func_341(int iParam0) // Position - 0xA3CF Signature - 22 01 03 00 00 5D 77 5E 10 18 69
{
	return SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21353.f_260), iParam0);
}

const char* func_342(int iParam0, int iParam1, BOOL bParam2) // Position - 0xA3E7 Signature - 22 03 0B
{
	var unk;

	func_381(iParam0, &unk);

	if (iParam1 == 0)
	{
		if (bParam2)
		{
			if (iParam0 > 86400)
				return MISC::VAR_STRING(2, "NET_MG_HELP_GAMBLING_AVAILABLE_D", unk.f_2, unk.f_3, unk.f_4);
			else if (iParam0 > 3600)
				return MISC::VAR_STRING(2, "NET_MG_HELP_GAMBLING_AVAILABLE_H", unk.f_3, unk.f_4);
		
			return MISC::VAR_STRING(2, "NET_MG_HELP_GAMBLING_AVAILABLE_M", unk.f_4);
		}
	
		return MISC::VAR_STRING(2, "NET_MG_HELP_GAMBLING_AVAILABLE_D", unk.f_2, unk.f_3, unk.f_4);
	}

	if (bParam2)
	{
		if (iParam0 > 86400)
			return MISC::VAR_STRING(2, "NET_MG_HELP_PRIVATE_AVAILABLE_D", unk.f_2, unk.f_3, unk.f_4);
		else if (iParam0 > 3600)
			return MISC::VAR_STRING(2, "NET_MG_HELP_PRIVATE_AVAILABLE_H", unk.f_3, unk.f_4);
	
		return MISC::VAR_STRING(2, "NET_MG_HELP_PRIVATE_AVAILABLE_M", unk.f_4);
	}

	return MISC::VAR_STRING(2, "NET_MG_HELP_PRIVATE_AVAILABLE_D", unk.f_2, unk.f_3, unk.f_4);
}

void func_343(Any* panParam0) // Position - 0xA4D4 Signature - 22 01 03 00 00 2F 66 00 32
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

BOOL func_344(Any* panParam0, int iParam1) // Position - 0xA4EA Signature - 22 02 04 00 00 5D F6
{
	*panParam0 = Global_1245174.f_9818;
	panParam0->f_2 = 423895568;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_IS_FILE_LOADED(*panParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_345() // Position - 0xA521 Signature - 22 00 08
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

int func_346(int iParam0) // Position - 0xA559 Signature - 22 01 03 00 00 66 00 39 09
{
	return func_382(iParam0) + 30;
}

void func_347(int iParam0, int iParam1) // Position - 0xA569 Signature - 22 02 06 00 00 4B 04 6A 08 3D 41 6A 80 01 08 3D 41 41 11
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk = { Global_1900460.f_1[iParam0 /*2*/] };
	Global_1900460.f_1[iParam0 /*2*/] = { Global_1900460.f_1[iParam1 /*2*/] };
	Global_1900460.f_1[iParam1 /*2*/] = { unk };
	return;
}

BOOL func_348(int iParam0, int iParam1) // Position - 0xA5B6 Signature - 22 02 04 00 00 66 01 3C
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return iParam0 == -471827042 || iParam0 == -92667149;
	
		default:
		
	}

	return iParam0 == -92667149;
}

BOOL func_349(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xA605 Signature - 22 03 05 00 00 5D E7
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

BOOL func_350(int iParam0, Player plParam1) // Position - 0xA6A3 Signature - 22 02 04 00 00 66 01 6D
{
	if (plParam1 == 255)
		return Global_1102813.f_3 && iParam0 != false;

	return Global_1101558[plParam1 /*38*/].f_3 && iParam0 != false;
}

BOOL func_351(int iParam0) // Position - 0xA6CF Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 2F
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_352() // Position - 0xA6F2 Signature - 22 00 02 00 00 39 31 26
{
	if (func_83() == 0)
		return MONEY::_NETWORK_GET_CASH_BALANCE();

	return MONEY::_MONEY_GET_CASH_BALANCE();
}

BOOL func_353() // Position - 0xA70D Signature - 22 00 02 00 00 70
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false);
}

void func_354(int iParam0) // Position - 0xA729 Signature - 22 01 03 00 00 66 00 5D DD
{
	Global_1102813.f_26.f_12 = iParam0;
	return;
}

BOOL func_355(int iParam0) // Position - 0xA73B Signature - 22 01 03 00 00 5D DD D3 10 80 1A 27 07
{
	return Global_1102813.f_26.f_7 && iParam0 != false;
}

BOOL func_356(BOOL bParam0) // Position - 0xA750 Signature - 22 01 03 00 00 5D DD D3 10 80 1A 27 09 66 00 69 2F
{
	return Global_1102813.f_26.f_9 && bParam0 != false;
}

BOOL func_357(int iParam0) // Position - 0xA765 Signature - 22 01 03 00 00 66 00 5D CF
{
	return Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1 == Global_1106895[iParam0 /*2*/].f_1;
}

int func_358() // Position - 0xA793 Signature - 22 00 02 00 00 85 DD
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

void func_359(BOOL bParam0) // Position - 0xA7C6 Signature - 22 01 03 00 00 66 00 39 15
{
	if (func_383(bParam0))
		return;

	Global_1102813.f_26.f_9 = Global_1102813.f_26.f_9 || bParam0;
	return;
}

BOOL func_360(Any* panParam0, int iParam1) // Position - 0xA7ED Signature - 22 02 04 00 00 5D E1
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1206497.f_455))
		return false;

	*panParam0 = Global_1206497.f_455;
	panParam0->f_2 = -1093317127;
	panParam0->f_3 = func_384(iParam1);
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_361(Any* panParam0) // Position - 0xA82F Signature - 22 01 03 00 00 37 3A
{
	panParam0->f_2 = -310067910;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_362(Any* panParam0, int iParam1) // Position - 0xA84A Signature - 22 02 04 00 00 37
{
	panParam0->f_2 = -1739269194;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_363(Any* panParam0) // Position - 0xA86B Signature - 22 01 03 00 00 37 20
{
	panParam0->f_2 = 1701407264;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_364(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, char* sParam6, BOOL bParam7) // Position - 0xA886 Signature - 22 08 0A 00 00 66 05
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam6, &uParam0))
		return 1;
	else
		bParam7;

	return 0;
}

int func_365(int iParam0, int iParam1) // Position - 0xA8AC Signature - 22 02 04 00 00 66 00 3C 0B
{
	switch (iParam0)
	{
		case -1957416901:
			return 7;
	
		case -1185533313:
			return 10;
	
		case -784189810:
			return 0;
	
		case -79999383:
			return 6;
	
		case -63669280:
			return 2;
	
		case 218185167:
			return 8;
	
		case 851921060:
			return 3;
	
		case 1457860192:
			return 5;
	
		case 1579717899:
			return 1;
	
		case 1744858848:
			return 9;
	
		case 2028478397:
			return 4;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_366(int iParam0, int iParam1) // Position - 0xA93E Signature - 22 02 04 00 00 66 00 3C 13
{
	switch (iParam0)
	{
		case -1918441640:
			return 2;
	
		case -1581094459:
			return 8;
	
		case -1437925683:
			return 12;
	
		case -725256130:
			return 17;
	
		case -632356431:
			return 14;
	
		case -559809431:
			return 10;
	
		case -548018579:
			return 13;
	
		case -533426613:
			return 1;
	
		case -457802746:
			return 3;
	
		case -222655798:
			return 16;
	
		case 10577687:
			return 15;
	
		case 424482930:
			return 6;
	
		case 1153715636:
			return 5;
	
		case 1175500245:
			return 11;
	
		case 1272390114:
			return 7;
	
		case 1788958412:
			return 4;
	
		case 1816768801:
			return 0;
	
		case 1842544025:
			return 9;
	
		case 1943481570:
			return 18;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

Hash func_367(int iParam0) // Position - 0xAA28 Signature - 22 01 03 00 00 66 00 39 46
{
	if (!func_385(iParam0))
		return 0;

	if (func_83() == -1)
		return 0;

	return Global_1835011[iParam0 /*72*/].f_51;
}

BOOL func_368(Any* panParam0) // Position - 0xAA54 Signature - 22 01 09 00 00 6D
{
	int fileHandle;
	var src;

	fileHandle = Global_1072759.f_28418[29 /*4*/].f_3;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(fileHandle))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(fileHandle))
		return false;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 5);
	*panParam0 = fileHandle;
	return true;
}

BOOL func_369(Any* panParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0xAA96 Signature - 22 05 08 00 00 66
{
	var unk;

	unk = panParam0->f_1;
	panParam0->f_2 = iParam1;
	panParam0->f_3 = iParam2;
	panParam0->f_4 = iParam3;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0))
	{
		panParam0->f_1 = unk;
		return false;
	}

	return true;
}

int func_370(Any anParam0, int iParam1) // Position - 0xAACF Signature - 22 02 04 00 00 66 01 66 00 6C
{
	anParam0->f_2 = iParam1;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(anParam0);
}

struct<2> func_371() // Position - 0xAAE3 Signature - 22 00 04 00 00 4B
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	return unk;
}

int func_372(int iParam0) // Position - 0xAAFC Signature - 22 01 03 00 00 66 00 5D E9
{
	return Global_1295849[iParam0 /*37*/].f_9;
}

struct<2> func_373(int iParam0) // Position - 0xAB0E Signature - 22 01 05 00 00 4B 03 6A 08 3D 41 6A 80 01 08 3D 41 41 4B
{
	var dst;

	dst = -1;
	dst.f_1 = -1;
	MISC::COPY_SCRIPT_STRUCT(&dst, &(Global_1295849[iParam0 /*37*/].f_6), 2);
	return dst;
}

var func_374(Any* panParam0) // Position - 0xAB38 Signature - 22 01 03 00 00 66 00 6D 43
{
	return func_386(panParam0, 67, 1);
}

struct<2> func_375(var uParam0, int iParam1) // Position - 0xAB49 Signature - 22 02 06 00 00 4B 04 6A 08 3D 41 6A 80 01 08 3D 41 41 66
{
	int num;

	num = -1;
	num.f_1 = -1;
	num = iParam1;

	switch (iParam1)
	{
		case 2:
			num.f_1 = func_387(uParam0, &(Global_1072759.f_573), func_177(iParam1));
			break;
	
		case 3:
			num.f_1 = func_387(uParam0, &(Global_1072759.f_573.f_602), func_177(iParam1));
			break;
	
		case 4:
			num.f_1 = func_387(uParam0, &(Global_1072759.f_573.f_2104), func_177(iParam1));
			break;
	
		case 5:
			num.f_1 = func_387(uParam0, &(Global_1072759.f_573.f_12606), func_177(iParam1));
			break;
	
		case 6:
			num.f_1 = func_387(uParam0, &(Global_1072759.f_573.f_12908), func_177(iParam1));
			break;
	
		case 7:
			num.f_1 = func_387(uParam0, &(Global_1072759.f_573.f_15910), func_177(iParam1));
			break;
	
		case 8:
			num.f_1 = func_387(uParam0, &(Global_1072759.f_573.f_&func_162), func_177(iParam1));
			break;
	}

	if (num.f_1 < 0)
		return func_371();

	return num;
}

BOOL func_376(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0xAC6F Signature - 22 04 06 00 00 5D F8
{
	*panParam0 = Global_1149432.f_7;
	panParam0->f_2 = iParam3;
	panParam0->f_3 = func_388(iParam1);
	panParam0->f_4 = iParam2;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

void func_377(int iParam0, Any* panParam1, var uParam2) // Position - 0xACA0 Signature - 22 03 06 00 00 66 00
{
	int num;

	*uParam2 = iParam0;
	panParam1->f_2 = -611386243;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), panParam1);
	uParam2->f_3 = func_389(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_390(num);
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
			uParam2->f_5 = func_391(num);
	}
	else if (*uParam2 == 6)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_392(num);
	
		panParam1->f_2 = 162343104;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), panParam1);
	}
	else if (*uParam2 == 7)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_393(num);
	}
	else
	{
		panParam1->f_2 = 1636457257;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), panParam1);
	}

	panParam1->f_2 = 2012757065;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_7 = func_394(num);
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

int func_378(var uParam0, var uParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0xAEFB Signature - 22 05 0B 00 00 11
{
	Hash hash;

	if (func_395(uParam0) >= 0)
		return 0;

	hash.f_1 = -1;
	hash.f_1.f_1 = -1;
	hash.f_1 = { uParam0 };
	hash = func_179(uParam0);
	hash.f_3 = iParam3;
	func_396(&hash, bParam2, iParam4);
	return 1;
}

BOOL func_379(int iParam0) // Position - 0xAF49 Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 21 00 04 00 00 00 1B 00 05 00 00 00 15 00 06 00 00 00 0F 00 07 00 00 00 09 00 08 00 00 00 03 00 68 04 00 09 50 01 01 2F 50 01 01 22 03
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

BOOL func_380(int iParam0, var uParam1, Any* panParam2) // Position - 0xAF88 Signature - 22 03 05 00 00 5D F8 89 11 27 07 66 02 32 37 19
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = 1351168281;
	panParam2->f_3 = func_388(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_381(int iParam0, var uParam1) // Position - 0xAFBC Signature - 22 02 04 00 00 2F
{
	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = iParam0 / 86400;
	iParam0 = iParam0 % 86400;
	uParam1->f_3 = iParam0 / 3600;
	iParam0 = iParam0 % 3600;
	uParam1->f_4 = iParam0 / 60;
	iParam0 = iParam0 % 60;
	uParam1->f_5 = iParam0;
	return;
}

int func_382(int iParam0) // Position - 0xB009 Signature - 22 01 03 00 00 66 00 14
{
	return iParam0 * 31;
}

BOOL func_383(BOOL bParam0) // Position - 0xB015 Signature - 22 01 03 00 00 5D DD D3 10 80 1A 27 09 66 00 69 66
{
	return Global_1102813.f_26.f_9 && bParam0 == bParam0;
}

int func_384(int iParam0) // Position - 0xB02B Signature - 22 01 03 00 00 66 00 3C 13 00 00
{
	switch (iParam0)
	{
		case 0:
			return joaat("ARCHERY");
	
		case 1:
			return joaat("CHALLENGES");
	
		case 2:
			return joaat("DEAD_DROP");
	
		case 3:
			return joaat("GOLDEN_HAT");
	
		case 4:
			return joaat("HOT_PROPERTY");
	
		case 5:
			return joaat("KING_OF_THE_CASTLE");
	
		case 6:
			return joaat("KING_OF_THE_RAILS");
	
		case 7:
			return -142235487;
	
		case 8:
			return joaat("ESCAPED_CONVICTS");
	
		case 9:
			return joaat("ROUND_UP");
	
		case 10:
			return joaat("SUPPLY_TRAIN");
	
		case 11:
			return joaat("WRECKAGE");
	
		case 12:
			return joaat("CONDOR_EGG");
	
		case 13:
			return -27117790;
	
		case 14:
			return 1653867545;
	
		case 15:
			return joaat("PV_CHALLENGE_HERBALIST");
	
		case 16:
			return joaat("PV_CHALLENGE_BIGGEST_FISH");
	
		case 17:
			return joaat("PV_CHALLENGE_FLYING_BIRD");
	
		case 18:
			return joaat("HUNT_THE_POSSE_LEADER");
	
		default:
		
	}

	return 0;
}

BOOL func_385(int iParam0) // Position - 0xB146 Signature - 22 01 03 00 00 66 00 08 20
{
	return iParam0 > -1 && iParam0 <= 80;
}

var func_386(Any* panParam0, int iParam1, int iParam2) // Position - 0xB15C Signature - 22 03 06 00 00 66 01 66 00
{
	var unk;

	panParam0->f_2 = iParam1;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, panParam0);
	return unk;
}

int func_387(var uParam0, Any* panParam1, int iParam2) // Position - 0xB177 Signature - 22 03 08 00 00 2F
{
	int num;
	int num2;
	int num3;

	num = 0;
	num2 = iParam2 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
	
		if (panParam1->[num3 /*3*/] > uParam0)
			num2 = num3 - 1;
		else if (panParam1->[num3 /*3*/] < uParam0)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

int func_388(int iParam0) // Position - 0xB1CC Signature - 22 01 04 00 00 2F 67 03 66 00
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

int func_389(int iParam0, var uParam1) // Position - 0xB341 Signature - 22 02 1F
{
	var unk;

	if (func_397(iParam0, uParam1, &unk))
		return unk.f_2;

	return 0;
}

int func_390(int iParam0) // Position - 0xB35E Signature - 22 01 03 00 00 66 00 3C 1E
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

int func_391(int iParam0) // Position - 0xB4B4 Signature - 22 01 03 00 00 66 00 3C 07 00 18
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

int func_392(int iParam0) // Position - 0xB50B Signature - 22 01 03 00 00 66 00 3C 13 00 D8
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

int func_393(int iParam0) // Position - 0xB5E5 Signature - 22 01 03 00 00 66 00 3C 0D
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

int func_394(int iParam0) // Position - 0xB67D Signature - 22 01 03 00 00 66 00 3C 26
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

int func_395(var uParam0, var uParam1) // Position - 0xB827 Signature - 22 02 05 00 00 5D 2C
{
	int i;

	if (Global_1205804.f_129 <= 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1205804.f_129; i = i + 1)
	{
		if (func_27(Global_1205804[i /*4*/].f_1, uParam0))
			return i;
	}

	return -1;
}

void func_396(var uParam0, BOOL bParam1, int iParam2) // Position - 0xB874 Signature - 22 03 05 00 00 66 00 66 02
{
	func_398(uParam0, iParam2);

	if (Global_1205804.f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}

	if (bParam1)
		func_399(func_395(uParam0->f_1));
	else
		func_400();

	return;
}

BOOL func_397(int iParam0, var uParam1, var uParam2) // Position - 0xB8AE Signature - 22 03 0A 00 00 66 00 66
{
	var unk;

	if (func_401(iParam0, uParam1, &unk))
		func_402(&unk, iParam0, uParam2);
	else
		return false;

	return true;
}

void func_398(var uParam0, int iParam1) // Position - 0xB8D5 Signature - 22 02 0A
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

void func_399(int iParam0) // Position - 0xB9A9 Signature - 22 01 03 00 00 66 00 2F 35 6A 05 8B 0A
{
	if (iParam0 < 0 || iParam0 >= Global_1205804.f_129)
		return;

	Global_1205804.f_130 = iParam0;
	Global_1205804.f_131 = Global_1205804[iParam0 /*4*/];
	return;
}

void func_400() // Position - 0xB9E0 Signature - 22 00 02 00 00 5D 2C
{
	if (Global_1205804.f_131 == 0)
		return;

	Global_1205804.f_130 = func_403(Global_1205804.f_131);

	if (Global_1205804.f_130 < 0)
		Global_1205804.f_131 = 0;

	return;
}

BOOL func_401(int iParam0, var uParam1, Any* panParam2) // Position - 0xBA16 Signature - 22 03 05 00 00 5D F8 89 11 27 07 66 02 32 37 A7
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = -1096981081;
	panParam2->f_3 = func_388(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_402(Any* panParam0, int iParam1, var uParam2) // Position - 0xBA4A Signature - 22 03 06 00 00 66 01 66 02
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

int func_403(int iParam0) // Position - 0xBAC4 Signature - 22 01 04 00 00 5D 2C
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

