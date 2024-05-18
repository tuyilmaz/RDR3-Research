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
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	float fLocal_17 = 0f;
	float fLocal_18 = 0f;
	int iLocal_19 = 0;
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
	var uLocal_32 = 5;
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
	var uLocal_48 = 5;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 4;
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
	var uLocal_71 = 7;
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
	var uLocal_104 = 255;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 2;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 48
{
	fLocal_17 = 1f;
	fLocal_18 = 1f;
	func_1(uScriptParam_0);

	while (!func_2(false, false) && !func_3())
	{
		func_4();
		BUILTIN::WAIT(0);
	}

	func_5();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x3E Signature - 22 05 07
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	iLocal_19.f_1 = uParam0.f_2;
	func_6(64);
	return;
}

BOOL func_2(BOOL bParam0, BOOL bParam1) // Position - 0x58 Signature - 22 02 05 00 00 5D 17
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

BOOL func_3() // Position - 0x138 Signature - 22 00 03 00 00 54
{
	int num;

	if (iLocal_19 == 34)
		return true;

	if (!MISC::IS_BIT_SET(Global_1297229.f_201, 0))
		return true;

	num = func_7(Global_1297229.f_200, true);

	if (iLocal_19.f_1 != num && num != -1 && iLocal_19 < 25 && !func_8())
		return true;

	if (!_IS_NULL_VECTOR(iLocal_19.f_13[3 /*3*/]) && iLocal_19 == 25 && BUILTIN::VDIST(iLocal_19.f_13[3 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false)) > Global_1901671.f_815.f_10 && !func_10(6, 255))
		return true;

	return false;
}

void func_4() // Position - 0x1E9 Signature - 22 00 02 00 00 39 A4
{
	func_11();
	func_12();
	func_13(joaat("GHOSTING_VOLUME"));

	if (func_14(64))
		if (iLocal_19 < 33)
			func_15(33);
	else if (func_14(128))
		if (iLocal_19 > 3)
			if (Global_1297229.f_1 == 4)
				if (iLocal_19 < 21)
					func_15(21);
				else if (func_16(iLocal_19.f_1) < 80f)
					func_6(128);
			else if (iLocal_19 < 25)
				func_15(25);
			else if (func_16(iLocal_19.f_1) < 80f)
				func_6(128);

	func_17(&(iLocal_19.f_87));

	switch (iLocal_19)
	{
		case 0:
			func_18();
			func_15(1);
			break;
	
		case 1:
			if (func_19())
				func_15(2);
			break;
	
		case 2:
			if (func_20())
				func_15(3);
			break;
	
		case 3:
			if (func_14(128))
			{
				if (Global_1297229.f_1 == 4)
					func_15(21);
				else
					func_15(25);
			
				return;
			}
		
			if (Global_1297229.f_1 == 4)
			{
				func_15(21);
				return;
			}
		
			if (!func_21(PLAYER::PLAYER_ID(), 16) && Global_1297229.f_1 == 3 || Global_1297229.f_1 == 2)
			{
				if (func_22())
				{
					if (func_23(PLAYER::PLAYER_ID(), true, false, true))
						func_24(8192, 0);
				
					return;
				}
			
				func_15(10);
			}
			else
			{
				func_15(8);
			}
			break;
	
		case 4:
			func_31();
		
			if (func_35())
			{
				func_36();
				NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(false);
				func_37(true, 1);
				func_15(6);
			}
			break;
	
		case 5:
			func_31();
		
			if (!func_21(PLAYER::PLAYER_ID(), 128))
				break;
		
			if (func_34())
				func_15(4);
			break;
	
		case 6:
			func_31();
		
			if (func_38())
				func_15(7);
			break;
	
		case 7:
			func_31();
		
			if (func_39())
			{
				func_40();
				func_41();
				func_15(9);
			}
			break;
	
		case 8:
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iLocal_19.f_85) || !GANG::_NETWORK_IS_IN_MY_GANG(iLocal_19.f_85))
				func_15(33);
		
			func_25(false);
		
			if (Global_1297229.f_1 == 2 && !func_22())
			{
				func_15(10);
				return;
			}
		
			if (func_26(false))
			{
				if (func_23(PLAYER::PLAYER_ID(), true, false, true))
					func_24(8192, 0);
			
				func_27(false);
				return;
			}
			else
			{
				func_27(true);
			}
		
			func_28();
			func_29();
		
			if (func_30())
			{
				func_31();
				func_27(false);
				func_32(iLocal_19.f_1);
				func_33(16384);
				func_15(5);
			}
			break;
	
		case 9:
			func_31();
			func_42();
		
			if (func_43())
			{
				func_44();
				func_15(30);
				return;
			}
		
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_19.f_6) && ANIMSCENE::IS_ANIM_SCENE_FINISHED(iLocal_19.f_6, false) && iLocal_19.f_4 == 5)
			{
				func_45(false);
				func_44();
				func_27(true);
				func_46();
				NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(true);
				func_37(true, false);
				func_47();
				func_15(25);
			}
			break;
	
		case 10:
			if (func_48())
			{
				func_27(false);
				func_33(16384);
			
				if (Global_1297229.f_1 == 2)
					func_15(11);
				else
					func_15(12);
			}
			break;
	
		case 11:
			if (!func_49())
			{
				func_50(1);
				func_15(33);
				return;
			}
		
			if (func_51())
			{
				func_52();
				func_15(13);
			}
			break;
	
		case 12:
			if (!func_49())
			{
				func_50(1);
				func_15(33);
				return;
			}
		
			func_53();
			func_15(13);
			break;
	
		case 13:
			func_31();
		
			if (!func_49())
			{
				func_15(33);
				func_50(1);
				return;
			}
		
			if (func_39())
			{
				if (func_54())
				{
					func_36();
					func_32(iLocal_19.f_1);
					func_15(15);
				}
				else
				{
					func_32(iLocal_19.f_1);
					func_15(19);
				}
			}
			break;
	
		case 14:
			func_31();
		
			if (func_35())
			{
				NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(false);
				func_37(true, true);
				func_15(16);
			}
			break;
	
		case 15:
			func_31();
		
			if (!func_21(PLAYER::PLAYER_ID(), 128) && !func_55())
				break;
		
			if (func_34())
				func_15(14);
			break;
	
		case 16:
			func_31();
		
			if (func_38())
				func_15(17);
			break;
	
		case 17:
			func_31();
			func_40();
			func_41();
			func_15(18);
			break;
	
		case 18:
			func_31();
			func_42();
		
			if (func_43())
			{
				func_44();
				func_15(30);
				return;
			}
		
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_19.f_6) && ANIMSCENE::IS_ANIM_SCENE_FINISHED(iLocal_19.f_6, false) && iLocal_19.f_4 == 5)
			{
				func_45(false);
				func_44();
				func_27(true);
				func_46();
				NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(true);
				func_37(true, false);
				func_47();
				func_56();
				func_15(25);
			}
			break;
	
		case 19:
			if (!func_49())
			{
				func_15(33);
				func_50(1);
				func_45(false);
				return;
			}
		
			if (func_57(false))
			{
				func_27(true);
				func_58(false);
				func_47();
				func_15(20);
			}
			break;
	
		case 20:
			if (func_59())
			{
				func_37(true, false);
				func_45(false);
				func_56();
				func_15(25);
			}
			break;
	
		case 21:
			if (func_48())
			{
				func_33(16384);
				iLocal_19.f_2 = 2;
				func_15(23);
			}
			break;
	
		case 22:
			if (func_60())
				func_15(24);
			break;
	
		case 23:
			if (func_57(true))
			{
				func_37(true, false);
				func_32(iLocal_19.f_1);
				func_47();
				func_15(22);
			}
			break;
	
		case 24:
			if (func_21(PLAYER::PLAYER_ID(), 64) && func_61())
			{
				func_62(32768);
				func_15(25);
			}
			break;
	
		case 25:
			func_25(false);
		
			if (func_43())
			{
				func_15(30);
				return;
			}
		
			if (func_26(true))
			{
				func_27(false);
				return;
			}
			else
			{
				func_27(true);
			}
		
			if (func_30())
			{
				func_63(2048);
				func_27(false);
				func_15(26);
			}
			break;
	
		case 26:
			if (func_34())
				func_15(27);
			break;
	
		case 27:
			if (func_35())
				func_15(28);
			break;
	
		case 28:
			func_40();
			func_64(2);
			NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(false);
			func_37(true, true);
			func_15(29);
			break;
	
		case 29:
			func_65();
		
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_19.f_6) && ANIMSCENE::IS_ANIM_SCENE_FINISHED(iLocal_19.f_6, false))
			{
				func_44();
				func_46();
				func_66();
				NETWORK::_SET_NETWORK_RESPOT_TIMER(PLAYER::PLAYER_PED_ID(), 1000, true);
				func_33(32768);
				func_15(32);
			}
			break;
	
		case 30:
			if (func_67())
			{
				func_33(32768);
				func_58(true);
				func_68(true);
				func_66();
				func_15(31);
			}
			break;
	
		case 31:
			if (func_69())
				func_15(32);
			break;
	
		case 32:
			NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(true);
			func_37(false, false);
			func_70(false);
			func_45(false);
		
			if (Global_1297229.f_1 == 4)
			{
				func_50(1);
				func_71(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
				func_64(32);
				func_64(64);
			}
			else if (Global_1297229.f_1 == 2)
			{
				func_50(1);
			}
			else if (Global_1297229.f_1 == 3)
			{
				func_50(1);
				func_71(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
				func_62(128);
			}
		
			func_15(33);
			break;
	
		case 33:
			func_72();
			func_73();
		
			if (func_14(64))
			{
				if (Global_1297229.f_1 == 4)
				{
					func_50(1);
					func_71(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
				}
			
				func_6(64);
			}
		
			func_64(2048);
		
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iLocal_19.f_85) || !GANG::_NETWORK_IS_IN_MY_GANG(iLocal_19.f_85))
				func_15(34);
			else if (func_74(128))
				func_15(34);
			else if (iLocal_19.f_3 != 0)
				func_15(34);
			else
				func_15(0);
			break;
	
		case 34:
			break;
	}

	return;
}

void func_5() // Position - 0xA3E Signature - 22 00 03 00 00 39
{
	int i;

	func_72();
	func_25(true);
	func_58(true);
	func_68(true);

	if (Global_1297229.f_1 == 4)
	{
		if (func_74(32768))
		{
			func_50(1);
			func_71(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
		}
	}
	else if (Global_1297229.f_1 == 3)
	{
		if (!func_14(8))
		{
			func_50(1);
			func_71(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
		}
		else
		{
			func_6(8);
		}
	}

	func_70(false);
	func_64(2);
	func_64(32);
	func_64(8);
	func_64(64);
	func_64(2048);
	func_33(32768);
	func_45(false);

	if (func_14(128))
		func_6(128);

	if (func_74(1024))
	{
		if (STREAMING::IS_LOAD_SCENE_ACTIVE())
			STREAMING::LOAD_SCENE_STOP();
	
		func_75(1024);
	}

	if (iLocal_19.f_4 == 1 || iLocal_19.f_4 == 2 || iLocal_19.f_4 == 4)
		if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			CAM::DO_SCREEN_FADE_IN(250);

	func_76(&(iLocal_19.f_87));
	HUD::_TEXT_BLOCK_DELETE("MSMP");
	func_37(false, false);

	for (i = 0; i <= 1; i = i + 1)
	{
		if (VOLUME::DOES_VOLUME_EXIST(iLocal_19.f_94[i]))
			VOLUME::DELETE_VOLUME(iLocal_19.f_94[i]);
	}

	if (func_77(2, 8))
		func_78(2, 8, false);

	return;
}

void func_6(int iParam0) // Position - 0xBA0 Signature - 22 01 03 00 00 5D 21 CC 13 80 9D 66 00 39 0B
{
	func_79(&(Global_1297441.f_157), iParam0);
	return;
}

int func_7(Player plParam0, BOOL bParam1) // Position - 0xBB4 Signature - 22 02 04 00 00 66 01 8B 0E 00 66 00 03 05 00 0C 05 8B 04 00 08 50 02 01 66 00 5D C0 CC 13 63
{
	if (bParam1)
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
			return -1;

	return Global_1297600[plParam0 /*87*/].f_5.f_12;
}

BOOL func_8() // Position - 0xBDB Signature - 22 00 02 00 00 54
{
	if (iLocal_19 == 9 || iLocal_19 == 18 || iLocal_19 == 20)
		return true;

	return false;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0xC06 Signature - 22 03 05 00 00 66 00 73
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_10(int iParam0, int iParam1) // Position - 0xC30 Signature - 22 02 05 00 00 66 00 67 04 66 01
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_80(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_81())
		return func_80(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_80(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

void func_11() // Position - 0xCA4 Signature - 22 00 02 00 00 25 78
{
	if (func_82(888))
		return;

	if (func_21(PLAYER::PLAYER_ID(), 1))
		return;

	if (iLocal_19 != 8)
		return;

	if (iLocal_19.f_85 != PLAYER::PLAYER_ID() || CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		return;

	if (!MAP::DOES_BLIP_EXIST(Global_1297441.f_128))
		return;

	if (func_16(iLocal_19.f_1) < 80f * 0.5f)
		func_83(888, false);

	return;
}

void func_12() // Position - 0xD25 Signature - 22 00 02 00 00 89 13 27 61
{
	switch (iLocal_19.f_97)
	{
		case 0:
			if (func_77(2, 8))
			{
				func_84(1);
				break;
			}
		
			if (func_85())
				break;
		
			if (Global_1048584)
				break;
		
			if (func_87(func_86()))
				break;
		
			if (!func_88(joaat("GHOSTING_VOLUME")))
				break;
		
			func_89(2, 8);
			func_84(1);
			break;
	
		case 1:
			if (!func_77(2, 8))
			{
				func_84(0);
				break;
			}
		
			if (!func_88(joaat("UNGHOSTING_VOLUME")))
			{
				func_78(2, 8, false);
				func_84(0);
				break;
			}
		
			if (func_87(func_86()))
			{
				func_78(2, 8, false);
				func_84(0);
				break;
			}
		
			if (Global_1048584)
			{
				func_78(2, 8, false);
				func_84(0);
				break;
			}
		
			if (func_85())
			{
				func_78(2, 8, false);
				func_84(0);
				break;
			}
			break;
	
		case 2:
			break;
	
		default:
			break;
	}

	return;
}

void func_13(int iParam0) // Position - 0xE1E Signature - 22 01 10
{
	Volume volume;
	float radius;
	Vector3 volumeCoords;
	float volumeScale;
	BOOL flag;
	int numberOfFiresInRange;
	Vector3 outPosition;

	volume = iLocal_19.f_94[func_90(iParam0)];

	if (!VOLUME::DOES_VOLUME_EXIST(volume))
		return;

	if (func_91(&(iLocal_19.f_91)))
		if (!func_92(&(iLocal_19.f_91), 2f))
			return;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volume) };
	volumeScale = { VOLUME::GET_VOLUME_SCALE(volume) };
	radius = func_93(volumeScale, volumeScale.f_1);
	radius = func_93(radius, volumeScale.f_2);
	flag = false;

	if (FIRE::_IS_EXPLOSION_IN_VOLUME(-1, volume))
		flag = true;

	if (!flag)
	{
		numberOfFiresInRange = FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(volumeCoords, radius);
	
		if (numberOfFiresInRange > 0)
			if (FIRE::GET_CLOSEST_FIRE_POS(&outPosition, volumeCoords))
				if (VOLUME::IS_POINT_IN_VOLUME(volume, outPosition))
					flag = true;
	}

	if (flag)
	{
		MISC::_CLEAR_VOLUME_AREA(volume, 589824);
		func_94(&(iLocal_19.f_91));
	}

	return;
}

BOOL func_14(BOOL bParam0) // Position - 0xEE4 Signature - 22 01 03 00 00 5D 21 CC 13 27
{
	return func_95(Global_1297441.f_157, bParam0);
}

void func_15(int iParam0) // Position - 0xEF8 Signature - 22 01 03 00 00 66 00 4E
{
	iLocal_19 = iParam0;
	return;
}

float func_16(int iParam0) // Position - 0xF04 Signature - 22 01 03 00 00 66 00 5D 21 CC 13 80
{
	return Global_1297441.f_6.f_17[iParam0];
}

void func_17(Object* pobParam0) // Position - 0xF18 Signature - 22 01 03 00 00 66 00 27
{
	switch (pobParam0->f_3)
	{
		case 0:
			if (iLocal_19 <= 9)
			{
				if (func_97(func_96(), true))
					if (func_98())
						pobParam0->f_2 = joaat("mp006_p_wreath01x");
			
				if (pobParam0->f_2 != 0)
				{
					STREAMING::REQUEST_MODEL(pobParam0->f_2, false);
					pobParam0->f_3 = 1;
				}
			}
			break;
	
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(pobParam0->f_2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(pobParam0->f_1))
				{
					*pobParam0 = OBJECT::CREATE_OBJECT(pobParam0->f_2, ENTITY::GET_ENTITY_COORDS(pobParam0->f_1, true, false) + { 10f, 0f, 0f }, false, true, false, false, false);
				
					if (ENTITY::DOES_ENTITY_EXIST(*pobParam0))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(*pobParam0, true);
						ENTITY::SET_ENTITY_COLLISION(*pobParam0, false, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(*pobParam0, pobParam0->f_1, 0, 0.55f, 0f, 2f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
						pobParam0->f_3 = 2;
					}
				}
				else if (func_99(iLocal_19.f_1))
				{
					pobParam0->f_1 = func_101(func_100(iLocal_19.f_1, 0, true), 0, false);
				}
			}
			break;
	
		case 2:
			if (iLocal_19 > 9 || !ENTITY::DOES_ENTITY_EXIST(pobParam0->f_1) || !ENTITY::DOES_ENTITY_EXIST(*pobParam0))
			{
				func_76(pobParam0);
				pobParam0->f_3 = 0;
			}
			break;
	}

	return;
}

void func_18() // Position - 0x1049 Signature - 22 00 02 00 00 39 31
{
	func_102();
	iLocal_19.f_85 = func_96();
	iLocal_19.f_86 = GANG::NETWORK_GET_GANG_ID(iLocal_19.f_85);

	if (GANG::NETWORK_GET_GANG_LEADER(iLocal_19.f_86) == PLAYER::PLAYER_ID())
		func_62(131072);
	else if (iLocal_19.f_86 != Global_1295666.f_10)
		func_62(262144);

	func_103();
	func_64(2048);
	return;
}

BOOL func_19() // Position - 0x10A3 Signature - 22 00 04 00 00 09
{
	BOOL num;
	char* textBlock;

	num = 1;
	textBlock = "MSMP";
	HUD::TEXT_BLOCK_REQUEST(textBlock);

	if (!HUD::TEXT_BLOCK_IS_LOADED(textBlock))
		num = 0;

	return num;
}

BOOL func_20() // Position - 0x10C8 Signature - 22 00 1E
{
	var unk;
	var unk14;
	BOOL flag;
	int i;

	unk = 4;
	unk14 = 4;

	if (!func_104(iLocal_19.f_1, &unk, &unk14))
		return false;

	flag = GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()) && GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1295666.f_10) > 1;

	for (i = 0; i < 4; i = i + 1)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(iLocal_19.f_35[i /*4*/].f_2))
			iLocal_19.f_35[i /*4*/].f_2 = VOLUME::CREATE_VOLUME_CYLINDER(unk[i /*3*/], 0f, 0f, 0f, unk14[i /*3*/]);
	
		if (!func_105(iLocal_19.f_35[i /*4*/]))
			iLocal_19.f_35[i /*4*/] = func_107(func_106(i, false), joaat("INPUT_CONTEXT_Y"), iLocal_19.f_35[i /*4*/].f_2, 3, 0, 0, 5, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), 0);
	
		if (i == 0 || i == 1 && !func_105(iLocal_19.f_35[i /*4*/].f_1))
		{
			iLocal_19.f_35[i /*4*/].f_1 = func_107(func_106(i, true), joaat("INPUT_CONTEXT_B"), iLocal_19.f_35[i /*4*/].f_2, 3, 0, 0, 5, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), 0);
		
			if (!flag)
			{
				func_108(iLocal_19.f_35[i /*4*/].f_1, false, false);
				func_109(iLocal_19.f_35[i /*4*/].f_1, false, false, true);
			}
		}
	
		if (i == 0)
			iLocal_19.f_35[i /*4*/].f_3 = -2097019783;
		else if (i == 1)
			iLocal_19.f_35[i /*4*/].f_3 = 302114997;
	}

	func_62(256);
	return true;
}

BOOL func_21(Player plParam0, int iParam1) // Position - 0x1255 Signature - 22 02 05 00 00 66 00 67 04 66 04
{
	Player player;

	player = plParam0;

	if (player >= 0 && player < 32)
		return func_95(Global_1297600[player /*87*/].f_86, iParam1);

	return false;
}

BOOL func_22() // Position - 0x1289 Signature - 22 00 03 00 00 5D 21
{
	int num;

	if (Global_1297441.f_156 == 0)
		Global_1297441.f_156 = MISC::GET_SYSTEM_TIME();
	else if (MISC::GET_SYSTEM_TIME() - Global_1297441.f_156 > 1000)
		Global_1297441.f_156 = MISC::GET_SYSTEM_TIME();
	else
		return func_95(Global_1297441.f_157, 256);

	if (func_110())
	{
		func_111(&(Global_1297441.f_157), 256);
		return true;
	}

	if (func_23(PLAYER::PLAYER_ID(), true, false, true))
	{
		func_111(&(Global_1297441.f_157), 256);
		return true;
	}

	if (!Global_1297062.f_44)
	{
		func_111(&(Global_1297441.f_157), 256);
		return true;
	}

	if (func_87(func_112(0)))
	{
		func_111(&(Global_1297441.f_157), 256);
		return true;
	}

	if (func_113(false))
	{
		func_111(&(Global_1297441.f_157), 256);
		return true;
	}

	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		func_111(&(Global_1297441.f_157), 256);
		return true;
	}

	num = func_114(joaat("BOUNTY_PLAYER"), PLAYER::PLAYER_ID(), false, true);

	if (func_115(num))
	{
		func_111(&(Global_1297441.f_157), 256);
		return true;
	}

	if (func_116())
	{
		func_111(&(Global_1297441.f_157), 256);
		return true;
	}

	func_79(&(Global_1297441.f_157), 256);
	return false;
}

BOOL func_23(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x13C7 Signature - 22 04 29
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_117(bParam1, bParam2, bParam3);

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

void func_24(BOOL bParam0, int iParam1) // Position - 0x14FC Signature - 22 02 05 00 00 66 01 08
{
	int i;

	if (iParam1 == -1)
		return;

	if (func_74(bParam0))
		return;

	if (func_118() || func_119())
		return;

	switch (iParam1)
	{
		case 0:
			for (i = 0; i < 4; i = i + 1)
			{
				if (!VOLUME::DOES_VOLUME_EXIST(iLocal_19.f_35[i /*4*/].f_2))
				{
				}
				else if (!func_105(iLocal_19.f_35[i /*4*/]))
				{
				}
				else if (!func_120(Global_33, iLocal_19.f_35[i /*4*/].f_2, true, 0))
				{
				}
				else if (func_121(MISC::VAR_STRING(2, "MS_WARN_WANTED_NO_ENTRY"), 10000, 0, 0, 0, true) != 0)
				{
					func_62(bParam0);
				}
			}
			break;
	}

	return;
}

void func_25(BOOL bParam0) // Position - 0x15AE Signature - 22 01 05 00 00 66 00 8B
{
	BOOL flag;
	int i;

	if (bParam0)
	{
		if (func_74(64))
		{
			SCRIPTS::_0xF9E951A1E5517C06();
			func_75(64);
		}
	}
	else
	{
		for (i = 0; i < 4; i = i + 1)
		{
			if (func_105(iLocal_19.f_35[i /*4*/]) && func_122(iLocal_19.f_35[i /*4*/], true))
			{
				flag = true;
				break;
			}
		}
	
		if (flag)
		{
			if (!func_74(64))
			{
				SCRIPTS::_0x76CBCD9EADC00955();
				func_62(64);
			}
		}
		else if (func_74(64))
		{
			SCRIPTS::_0xF9E951A1E5517C06();
			func_75(64);
		}
	}

	return;
}

BOOL func_26(BOOL bParam0) // Position - 0x1639 Signature - 22 01 04 00 00 66 00 8B 11
{
	Ped lastLedMount;

	if (bParam0)
	{
		if (Global_1297062.f_42)
			return true;
	
		return false;
	}

	if (Global_1297441.f_131.f_4)
		return true;

	if (func_123(512))
		return true;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33))
		return true;

	if (PED::IS_PED_INCAPACITATED(Global_33))
		return true;

	if (PED::IS_PED_ON_MOUNT(Global_33))
		return true;

	if (PED::IS_PED_ON_VEHICLE(Global_33, false) || PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
		return true;

	if (PED::IS_PED_RAGDOLL(Global_33))
		return true;

	if (PED::IS_PED_LASSOED(Global_33))
		return true;

	if (PED::IS_PED_HOGTIED(Global_33) || PED::IS_PED_BEING_HOGTIED(Global_33))
		return true;

	if (PED::IS_PED_HOGTYING(Global_33))
		return true;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
		return true;

	if (FIRE::IS_ENTITY_ON_FIRE(Global_33))
		return true;

	if (PED::IS_PED_CLIMBING(Global_33))
		return true;

	if (TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33))
		return true;

	if (func_124())
		return true;

	if (CAM::IS_AIM_CAM_ACTIVE())
		return true;

	lastLedMount = PED::_GET_LAST_LED_MOUNT(Global_33);

	if (ENTITY::DOES_ENTITY_EXIST(lastLedMount) && !ENTITY::IS_ENTITY_DEAD(lastLedMount))
		return true;

	if (func_22())
		return true;

	return false;
}

void func_27(BOOL bParam0) // Position - 0x178A Signature - 22 01 04 00 00 66 00 8B 10
{
	int i;

	if (bParam0)
		if (func_74(256))
			return;
	else if (!func_74(256))
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		if (func_105(iLocal_19.f_35[i /*4*/]))
		{
			func_108(iLocal_19.f_35[i /*4*/], bParam0, false);
			func_109(iLocal_19.f_35[i /*4*/], bParam0, false, true);
		}
	
		if (func_105(iLocal_19.f_35[i /*4*/].f_1))
		{
			func_108(iLocal_19.f_35[i /*4*/].f_1, bParam0, false);
			func_109(iLocal_19.f_35[i /*4*/].f_1, bParam0, false, true);
		}
	}

	if (bParam0)
		func_62(256);
	else
		func_75(256);

	return;
}

void func_28() // Position - 0x183F Signature - 22 00 17
{
	BOOL flag;
	int gangMembers;
	var memberHandles;
	int i;
	int num;
	Player playerFromGamerHandle;
	int j;

	if (!func_74(256))
		return;

	flag = false;
	gangMembers = 0;

	if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		memberHandles = 7;
		gangMembers = GANG::_NETWORK_GET_GANG_MEMBERS(Global_1295666.f_10, &memberHandles);
	
		if (gangMembers > 1)
		{
			num = gangMembers;
		
			for (i = 0; i <= gangMembers - 1; i = i + 1)
			{
				if (func_125(memberHandles[i /*2*/]))
				{
					playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&memberHandles[i /*2*/]);
				
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerFromGamerHandle))
					{
						if (func_21(playerFromGamerHandle, 1))
						{
							num = num - 1;
						}
						else if (func_126(1048576, playerFromGamerHandle))
						{
							num = num - 1;
							break;
						}
					}
				}
			}
		
			if (num > 1)
				flag = true;
		}
	}

	for (j = 0; j <= 1; j = j + 1)
	{
		if (func_105(iLocal_19.f_35[j /*4*/].f_1))
		{
			if (flag)
			{
				if (!func_127(iLocal_19.f_35[j /*4*/].f_1, false))
				{
					func_109(iLocal_19.f_35[j /*4*/].f_1, true, false, true);
					func_108(iLocal_19.f_35[j /*4*/].f_1, true, true);
				}
			}
			else if (func_127(iLocal_19.f_35[j /*4*/].f_1, false))
			{
				func_109(iLocal_19.f_35[j /*4*/].f_1, false, false, true);
				func_108(iLocal_19.f_35[j /*4*/].f_1, false, true);
			}
		}
	}

	return;
}

void func_29() // Position - 0x1980 Signature - 22 00 04 00 00 2F
{
	int i;
	Player player;

	for (i = 0; i < 4; i = i + 1)
	{
		if (i == 0 || i == 1)
		{
			if (func_127(iLocal_19.f_35[i /*4*/], false))
			{
				player = func_96();
			
				if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
				{
					HUD::_0x8B55B324A9123F6B(iLocal_19.f_35[i /*4*/].f_3, iLocal_19.f_35[i /*4*/].f_2, MISC::VAR_STRING(10, "MS_ENTER_PROMPT_GROUP", func_129(PLAYER::GET_PLAYER_NAME(player), func_128(player, true, -1, false))), 3, 1, 0);
					HUD::_UI_PROMPT_SET_GROUP(func_130(iLocal_19.f_35[i /*4*/]), iLocal_19.f_35[i /*4*/].f_3, 0);
				
					if (func_127(iLocal_19.f_35[i /*4*/].f_1, false))
						HUD::_UI_PROMPT_SET_GROUP(func_130(iLocal_19.f_35[i /*4*/].f_1), iLocal_19.f_35[i /*4*/].f_3, 0);
				}
			}
		}
	}

	return;
}

BOOL func_30() // Position - 0x1A4B Signature - 22 00 03 00 00 2F 67 02 66 02 42 8A AA
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		if (func_105(iLocal_19.f_35[i /*4*/]) && func_131(iLocal_19.f_35[i /*4*/], true))
		{
			iLocal_19.f_2 = func_132(i);
			func_133(iLocal_19.f_2);
		
			if (i == 0 || i == 1)
				func_62(8);
			else
				func_62(32);
		
			return true;
		}
	
		if (func_105(iLocal_19.f_35[i /*4*/].f_1) && func_131(iLocal_19.f_35[i /*4*/].f_1, true))
		{
			iLocal_19.f_2 = func_132(i);
			func_133(iLocal_19.f_2);
			func_62(16);
			func_63(2);
			func_134();
			return true;
		}
	}

	return false;
}

void func_31() // Position - 0x1B07 Signature - 22 00 02 00 00 39 20
{
	func_135();
	func_136(false);

	if (func_137())
		func_138();

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SECONDARY_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ENTER"), false);
	PED::SET_PED_RESET_FLAG(Global_33, 168, true);
	PED::SET_PED_RESET_FLAG(Global_33, 108, true);
	func_45(true);
	return;
}

void func_32(var uParam0) // Position - 0x1B89 Signature - 22 01 03 00 00 66 00 5D 21 CC 13 6C
{
	Global_1297441.f_131 = uParam0;
	func_33(16);
	func_63(1);
	return;
}

void func_33(int iParam0) // Position - 0x1BA4 Signature - 22 01 03 00 00 5D 21 CC 13 80 9D 66 00 39 A5
{
	func_111(&(Global_1297441.f_157), iParam0);
	return;
}

BOOL func_34() // Position - 0x1BB8 Signature - 22 00 08 00 00 70
{
	float radius;
	Vector3 vector;
	BOOL num;
	Hash hash;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33) || func_139(255))
		return false;

	if (!func_74(1024) && STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		STREAMING::LOAD_SCENE_STOP();
		return false;
	}

	if (iLocal_19.f_2 == -1)
		return true;

	if (iLocal_19.f_2 == 2 || iLocal_19.f_2 == 3)
		radius = 40f;
	else
		radius = 200f;

	vector = { func_140(iLocal_19.f_29[iLocal_19.f_2]) };

	if (!func_74(1024))
	{
		if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
		{
			iLocal_19.f_11 = MISC::GET_SYSTEM_TIME();
			STREAMING::LOAD_SCENE_START(iLocal_19.f_13[iLocal_19.f_2 /*3*/], vector, radius, 0);
			func_62(1024);
		}
		else
		{
			STREAMING::LOAD_SCENE_STOP();
		}
	}
	else if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		num = 1;
	}
	else if (STREAMING::IS_LOAD_SCENE_LOADED())
	{
		num = 1;
	}
	else
	{
		hash = Global_1901671.f_815.f_11;
	
		if (iLocal_19.f_11 == 0)
			iLocal_19.f_11 = MISC::GET_SYSTEM_TIME();
		else if (MISC::GET_SYSTEM_TIME() - iLocal_19.f_11 > hash)
			num = 1;
	}

	return num;
}

BOOL func_35() // Position - 0x1CD8 Signature - 22 00 05 00 00 39
{
	char* animDict;
	char* playbackListName;
	BOOL flag;

	animDict = func_141();

	if (MISC::IS_STRING_NULL_OR_EMPTY(animDict))
		return true;

	playbackListName = func_143(func_142());

	if (MISC::IS_STRING_NULL_OR_EMPTY(playbackListName))
		return true;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_19.f_6))
		iLocal_19.f_6 = ANIMSCENE::_CREATE_ANIM_SCENE(animDict, 0, playbackListName, false, true);

	flag = true;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_19.f_6, true, false))
		flag = false;

	if (!flag && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_19.f_6, true))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_19.f_6);
		return false;
	}

	if (flag)
		return true;

	return false;
}

void func_36() // Position - 0x1D64 Signature - 22 00 16
{
	var memberHandles;
	Player playerFromGamerHandle;
	Player player;
	int i;
	int num;
	BOOL flag;

	if (iLocal_19.f_9 <= 0)
	{
		if (func_74(16) || Global_1297229.f_1 == 2)
		{
			iLocal_19.f_9 = GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1295666.f_10);
			memberHandles = 7;
			GANG::_NETWORK_GET_GANG_MEMBERS(Global_1295666.f_10, &memberHandles);
			num = -1;
		
			for (i = 0; i <= iLocal_19.f_9 - 1; i = i + 1)
			{
				playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&memberHandles[i /*2*/]);
			
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerFromGamerHandle))
				{
					flag = GANG::NETWORK_IS_GANG_LEADER(playerFromGamerHandle);
				
					if (flag || func_21(playerFromGamerHandle, 1) == false)
					{
						if (func_21(playerFromGamerHandle, 512))
						{
							iLocal_19.f_52[i /*4*/] = playerFromGamerHandle;
						
							if (flag)
							{
								num = i;
								player = playerFromGamerHandle;
							}
						
							iLocal_19.f_52[i /*4*/].f_3 = 1;
						}
						else
						{
							iLocal_19.f_52[i /*4*/].f_3 = 0;
						}
					}
					else
					{
						iLocal_19.f_52[i /*4*/].f_3 = 0;
					}
				}
			}
		
			if (num != -1)
			{
				iLocal_19.f_52[num /*4*/] = iLocal_19.f_52[0 /*4*/];
				iLocal_19.f_52[num /*4*/].f_3 = iLocal_19.f_52[0 /*4*/].f_3;
				iLocal_19.f_52[0 /*4*/] = player;
				iLocal_19.f_52[0 /*4*/].f_3 = 1;
			}
		}
		else if (func_74(8))
		{
			iLocal_19.f_9 = 1;
			iLocal_19.f_52[0 /*4*/] = PLAYER::PLAYER_ID();
		}
	}

	return;
}

int func_37(BOOL bParam0, BOOL bParam1) // Position - 0x1E97 Signature - 22 02 06 00 00 66 00 6A
{
	int num;
	int instanceId;

	if (bParam0 || bParam1)
	{
		if (bParam1)
		{
			if (func_14(2))
				func_6(2);
		
			if (!func_21(PLAYER::PLAYER_ID(), 256))
				func_63(256);
		
			if (!func_14(4))
			{
				num = func_144(Global_1297229.f_200, true);
			
				if (num == -1)
					return 0;
			
				func_33(4);
			}
		}
		else
		{
			if (func_14(4))
				func_6(4);
		
			if (func_21(PLAYER::PLAYER_ID(), 256))
				func_64(256);
		
			if (!func_14(2))
			{
				num = func_144(Global_1297229.f_200, true);
			
				if (num == -1)
					return 0;
			
				func_33(2);
			}
		}
	
		instanceId = num;
		Global_1297600[Global_1295666 /*87*/].f_3 = num;
		NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(true, true, instanceId);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, false, instanceId, false);
	}
	else if (func_14(2) || func_14(4))
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
		Global_1297600[Global_1295666 /*87*/].f_3 = -1;
		func_6(2);
		func_6(4);
	
		if (func_21(PLAYER::PLAYER_ID(), 256))
			func_64(256);
	}

	return 1;
}

BOOL func_38() // Position - 0x1FB2 Signature - 22 00 03 00 00 89 13 27 08
{
	Ped playerPed;

	if (iLocal_19.f_8 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_19.f_52[iLocal_19.f_8 /*4*/].f_1))
		{
			iLocal_19.f_8 = iLocal_19.f_8 + 1;
		}
		else if (iLocal_19.f_52[iLocal_19.f_8 /*4*/].f_3 == 0)
		{
			iLocal_19.f_8 = iLocal_19.f_8 + 1;
		}
		else if (PLAYER::PLAYER_ID() == iLocal_19.f_52[iLocal_19.f_8 /*4*/])
		{
			iLocal_19.f_52[iLocal_19.f_8 /*4*/].f_1 = Global_33;
			iLocal_19.f_52[iLocal_19.f_8 /*4*/].f_2 = PED::IS_PED_MALE(Global_33);
			iLocal_19.f_8 = iLocal_19.f_8 + 1;
			return false;
		}
		else
		{
			playerPed = PLAYER::GET_PLAYER_PED(iLocal_19.f_52[iLocal_19.f_8 /*4*/]);
		
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
			{
				iLocal_19.f_8 = iLocal_19.f_8 + 1;
				return false;
			}
		
			iLocal_19.f_52[iLocal_19.f_8 /*4*/].f_1 = PED::CLONE_PED(playerPed, false, true, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_19.f_52[iLocal_19.f_8 /*4*/].f_1))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_19.f_52[iLocal_19.f_8 /*4*/].f_1, false);
				ENTITY::SET_ENTITY_COLLISION(iLocal_19.f_52[iLocal_19.f_8 /*4*/].f_1, false, false);
				iLocal_19.f_52[iLocal_19.f_8 /*4*/].f_2 = PED::IS_PED_MALE(playerPed);
				iLocal_19.f_8 = iLocal_19.f_8 + 1;
				return false;
			}
		}
	}

	return iLocal_19.f_8 >= iLocal_19.f_9;
}

BOOL func_39() // Position - 0x20DF Signature - 22 00 03 00 00 70 21 00 03 05 00 83 8B 3D
{
	Entity firstEntityPedIsCarrying;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
	
		if (!func_145(Global_33))
			if (func_146(firstEntityPedIsCarrying))
				ENTITY::_DELETE_CARRIABLE(&firstEntityPedIsCarrying);
			else
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_33, firstEntityPedIsCarrying, 0f, 0f, 0f, 1073741824, 9);
	
		return false;
	}

	return true;
}

void func_40() // Position - 0x212F Signature - 22 00 02 00 00 89 13 27 02
{
	switch (iLocal_19.f_2)
	{
		case 0:
		case 1:
			iLocal_19.f_83 = func_101(func_100(iLocal_19.f_1, 2, false), 0, false);
			iLocal_19.f_84 = func_101(func_100(iLocal_19.f_1, 3, false), 0, false);
			break;
	
		default:
			iLocal_19.f_83 = func_101(func_100(iLocal_19.f_1, 0, true), 0, false);
			iLocal_19.f_84 = func_101(func_100(iLocal_19.f_1, 1, true), 0, false);
			break;
	}

	return;
}

void func_41() // Position - 0x21A3 Signature - 22 00 03 00 00 70 21 00 03 05 00 A2
{
	Ped mountOwnedByPlayer;

	if (FIRE::IS_ENTITY_ON_FIRE(Global_33))
		FIRE::STOP_ENTITY_FIRE(Global_33, 0);

	mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	if (ENTITY::DOES_ENTITY_EXIST(mountOwnedByPlayer))
		func_62(65536);

	mountOwnedByPlayer = PED::_GET_LAST_LED_MOUNT(Global_33);

	if (ENTITY::DOES_ENTITY_EXIST(mountOwnedByPlayer) && !ENTITY::IS_ENTITY_DEAD(mountOwnedByPlayer))
	{
		func_62(65536);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, false, true);
	}

	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		func_62(65536);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, true, true);
	}

	if (PED::IS_PED_HOGTIED(Global_33) || PED::IS_PED_BEING_HOGTIED(Global_33))
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, false, true);

	return;
}

void func_42() // Position - 0x2242 Signature - 22 00 04 00 00 89
{
	int i;
	float animScenePhase;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_19.f_6))
	{
		func_15(34);
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(Global_33) || func_139(255))
		return;

	if (!func_39())
		return;

	if (PED::IS_PED_IN_ANY_VEHICLE(Global_33, true))
	{
		PED::_WARP_PED_OUT_OF_VEHICLE(Global_33);
		return;
	}

	if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
	{
		PED::_REMOVE_PED_FROM_MOUNT(PLAYER::PLAYER_PED_ID(), true, false);
		return;
	}

	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_19.f_6, false) && !func_74(true))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_19.f_6, func_147(), func_148(), 2);
		ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_19.f_6, "CameraIndex", func_149(), false);
	
		if (func_74(8) && ENTITY::DOES_ENTITY_EXIST(Global_33))
			if (PED::IS_PED_MALE(Global_33))
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_19.f_6, "MP_MALE_01", Global_33, 0);
			else
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_19.f_6, "MP_FEMALE_01", Global_33, 0);
	
		if (iLocal_19.f_2 == 2)
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_19.f_83))
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_19.f_6, "p_doorsgl01x_FRONT", iLocal_19.f_83, 0);
		else if (iLocal_19.f_2 == 3)
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_19.f_84))
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_19.f_6, "p_doorsgl01x_SIDE", iLocal_19.f_84, 0);
	
		if (!func_74(8))
		{
			for (i = 0; i <= iLocal_19.f_9 - 1; i = i + 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_19.f_52[i /*4*/].f_1))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_19.f_52[i /*4*/].f_1, true);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_19.f_6, func_150(i, iLocal_19.f_52[i /*4*/].f_2), iLocal_19.f_52[i /*4*/].f_1, 0);
				}
			}
		}
	
		ANIMSCENE::START_ANIM_SCENE(iLocal_19.f_6);
		func_62(true);
		func_75(16);
		func_75(8);
		func_151(1);
		return;
	}

	animScenePhase = ANIMSCENE::GET_ANIM_SCENE_PHASE(iLocal_19.f_6);

	if (animScenePhase > 0.9f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_33))
			func_152(true);
	}
	else if (animScenePhase > 0.85f)
	{
		if (!func_74(4096))
		{
			func_62(4096);
			func_58(false);
		}
	}

	switch (iLocal_19.f_4)
	{
		case 1:
			if (!CAM::IS_SCREEN_FADED_OUT())
				CAM::DO_SCREEN_FADE_OUT(0);
		
			func_151(2);
			break;
	
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_19.f_6) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_19.f_6, false))
				break;
		
			if (!func_14(33554432))
				CAM::DO_SCREEN_FADE_IN(250);
		
			func_151(3);
			break;
	
		case 3:
			if (CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				iLocal_19.f_11 = MISC::GET_SYSTEM_TIME();
				func_151(4);
			}
			break;
	
		case 4:
			if (STREAMING::IS_LOAD_SCENE_LOADED() || MISC::GET_SYSTEM_TIME() - iLocal_19.f_11 > Global_1901671.f_815.f_11)
			{
				if (!func_14(33554432))
					CAM::DO_SCREEN_FADE_IN(250);
			
				func_151(5);
			}
			break;
	
		case 5:
			break;
	}

	return;
}

BOOL func_43() // Position - 0x2511 Signature - 22 00 04 00 00 5D
{
	Player player;
	int num;

	if (Global_1297441.f_131.f_3)
		return true;

	if (func_123(512))
	{
		iLocal_19.f_3 = 1;
		return true;
	}

	player = iLocal_19.f_85;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
	{
		iLocal_19.f_3 = 1;
		return true;
	}

	if (Global_1295666.f_10 != iLocal_19.f_86 && !func_74(262144))
		if (func_74(131072) && GANG::NETWORK_GET_GANG_LEADER(Global_1295666.f_10) == PLAYER::PLAYER_ID())
			func_153();
		else
			return true;

	if (GANG::NETWORK_GET_GANG_ID(player) != Global_1295666.f_10)
	{
		if (func_7(player, true) != iLocal_19.f_1)
			return true;
	
		if (func_144(player, true) != Global_1297600[Global_1295666 /*87*/].f_3)
			return true;
	}

	if (player != PLAYER::PLAYER_ID() && GANG::NETWORK_GET_GANG_ID(player) != Global_1295666.f_10 && Global_1297229.f_1 == 2 || Global_1297229.f_1 == 1)
	{
		iLocal_19.f_3 = 3;
		return true;
	}

	num = func_7(Global_1297229.f_200, true);

	if (iLocal_19.f_1 != num)
	{
		iLocal_19.f_3 = 2;
		return true;
	}

	if (func_154())
	{
		iLocal_19.f_3 = 4;
		return true;
	}

	return false;
}

void func_44() // Position - 0x2645 Signature - 22 00 03 00 00 2F 67 02 66 02 4D
{
	int i;

	for (i = 0; i <= 6; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_19.f_52[i /*4*/].f_1) && iLocal_19.f_52[i /*4*/].f_1 != Global_33)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_19.f_6, func_150(i, true), iLocal_19.f_52[i /*4*/].f_1);
			PED::DELETE_PED(&(iLocal_19.f_52[i /*4*/].f_1));
		}
	}

	iLocal_19.f_83 = 0;
	iLocal_19.f_84 = 0;

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_19.f_6))
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_19.f_6);

	if (func_74(1024))
	{
		if (STREAMING::IS_LOAD_SCENE_ACTIVE())
			STREAMING::LOAD_SCENE_STOP();
	
		func_75(1024);
	}

	iLocal_19.f_11 = 0;
	func_75(1);
	iLocal_19.f_6 = 0;
	return;
}

void func_45(BOOL bParam0) // Position - 0x26F2 Signature - 22 01 03 00 00 66 00 8B 1E
{
	if (bParam0)
	{
		if (!func_74(16384))
		{
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			func_62(16384);
		}
	}
	else if (func_74(16384))
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
		func_75(16384);
	}

	return;
}

void func_46() // Position - 0x2737 Signature - 22 00 03 00 00 2F 67 02 66 02 1D 23 1A
{
	int i;

	for (i = 0; i <= 3; i = i + 1)
	{
		func_155(func_100(iLocal_19.f_1, i, false), 0f, true);
	}

	return;
}

void func_47() // Position - 0x2762 Signature - 22 00 02 00 00 39 72
{
	func_156();
	func_157();
	return;
}

BOOL func_48() // Position - 0x2772 Signature - 22 00 02 00 00 5D 21
{
	if (Global_1297441.f_29.f_2 != iLocal_19.f_1)
		return false;

	if (Global_1297441.f_29.f_3 != 2)
		return false;

	return true;
}

BOOL func_49() // Position - 0x279E Signature - 22 00 02 00 00 5D 4D CB 13 27 01
{
	return Global_1297229.f_1 != 1 && !func_22();
}

void func_50(int iParam0) // Position - 0x27B8 Signature - 22 01 03 00 00 66 00 5D 4D CB 13 6C 01
{
	Global_1297229.f_1 = iParam0;
	return;
}

BOOL func_51() // Position - 0x27C8 Signature - 22 00 06 00 00 70
{
	Any gangId;
	var gamerHandle;
	Player playerFromGamerHandle;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33))
		return false;

	if (iLocal_19.f_81 == 0)
	{
		if (func_158())
		{
			func_159(true);
			return false;
		}
		else
		{
			gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
		
			if (GANG::NETWORK_IS_GANG_ID_VALID(gangId))
			{
				if (GANG::_NETWORK_GET_GANG_LEADER_HANDLE(gangId, &gamerHandle))
				{
					playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&gamerHandle);
				
					if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
						iLocal_19.f_81 = func_121(MISC::VAR_STRING(10, "MS_WARN_MEMBER_JOIN_CARRY", func_129(PLAYER::GET_PLAYER_NAME(playerFromGamerHandle), func_128(playerFromGamerHandle, true, -1, false))), 10000, 0, 0, 0, true);
					else
						iLocal_19.f_81 = func_121(MISC::VAR_STRING(10, "MS_WARN_MEMBER_JOIN", func_129(PLAYER::GET_PLAYER_NAME(playerFromGamerHandle), func_128(playerFromGamerHandle, true, -1, false))), 10000, 0, 0, 0, true);
				}
			}
		}
	}

	if (iLocal_19.f_10 == 0)
		iLocal_19.f_10 = MISC::GET_GAME_TIMER();
	else if (MISC::GET_GAME_TIMER() - iLocal_19.f_10 >= 11000)
		return true;

	return false;
}

void func_52() // Position - 0x28B5 Signature - 22 00 03 00 00 5D 4D
{
	Player player;

	player = Global_1297229.f_200;

	if (player < 0 || player >= 32)
	{
		iLocal_19.f_2 = 2;
		return;
	}

	iLocal_19.f_2 = Global_1297600[player /*87*/].f_5.f_13;
	return;
}

void func_53() // Position - 0x28EF Signature - 22 00 02 00 00 2F 6D
{
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
		iLocal_19.f_2 = 2;
	else
		iLocal_19.f_2 = 3;

	func_62(8);
	return;
}

BOOL func_54() // Position - 0x2916 Signature - 22 00 03 00 00 70 21 00 03 05 00 A5
{
	float num;

	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		num = BUILTIN::VDIST(Global_34, func_160(iLocal_19.f_1));
	
		if (num < 200f)
			return true;
	}

	return false;
}

BOOL func_55() // Position - 0x294B Signature - 22 00 02 00 00 89 13 27 0C
{
	if (iLocal_19.f_12 == 0)
		iLocal_19.f_12 = MISC::GET_SYSTEM_TIME();
	else if (MISC::GET_SYSTEM_TIME() - iLocal_19.f_12 > 10000)
		return true;

	return false;
}

void func_56() // Position - 0x297A Signature - 22 00 03 00 00 70 21 00 03 05 00 83 8B 18
{
	Entity firstEntityPedIsCarrying;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
	
		if (func_146(firstEntityPedIsCarrying))
			ENTITY::_DELETE_CARRIABLE(&firstEntityPedIsCarrying);
	}

	return;
}

BOOL func_57(BOOL bParam0) // Position - 0x29A4 Signature - 22 01 03 00 00 6D FF
{
	if (func_139(255) || !ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33))
		return false;

	if (!func_39())
		return false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			PED::_WARP_PED_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID());
	
		return false;
	}

	if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
	{
		PED::_REMOVE_PED_FROM_MOUNT(PLAYER::PLAYER_PED_ID(), true, false);
		return false;
	}

	if (iLocal_19.f_2 == -1)
		func_161(iLocal_19.f_13[2 /*3*/], iLocal_19.f_29[2]);
	else
		func_161(iLocal_19.f_13[iLocal_19.f_2 /*3*/], iLocal_19.f_29[iLocal_19.f_2]);

	if (bParam0)
	{
		func_162(true);
		func_163(true);
	}

	func_164(true);
	func_165(145);
	func_166(true, true);
	return true;
}

void func_58(BOOL bParam0) // Position - 0x2A7A Signature - 22 01 03 00 00 70
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		if (bParam0)
		{
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 7, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 8, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 9, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 10, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 16, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 17, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 18, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 19, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 20, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 21, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 22, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 23, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 25, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 27, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 1, bParam0);
		}
		else
		{
			WEAPON::_HOLSTER_PED_WEAPONS(Global_33, false, false, false, true);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 7, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 8, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 9, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 10, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 16, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 17, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 18, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 19, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 20, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 21, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 22, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 23, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 25, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 27, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 1, bParam0);
		}
	}

	return;
}

BOOL func_59() // Position - 0x2BE5 Signature - 22 00 02 00 00 6D FF 39 BF 43 00 6A
{
	if (func_139(255) || !ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33))
		return false;

	return true;
}

BOOL func_60() // Position - 0x2C16 Signature - 22 00 02 00 00 6D FF 39 BF 43 00 8B 04 00 2F 50 00 01 70 21 00 03 05 00 A5 05 6A 05 8B 08 00 70 21 00 03 05 00 CE 30 8B 04 00 2F 50 00 01 25 00 02 39 27 31 00 05
{
	if (func_139(255))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33))
		return false;

	if (!func_74(512))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Global_33))
			ENTITY::SET_ENTITY_VISIBLE(Global_33, false);
	
		func_68(false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
		func_37(true, true);
		func_62(512);
		return true;
	}

	return false;
}

BOOL func_61() // Position - 0x2C87 Signature - 22 00 02 00 00 6D FF 39 BF 43 00 8B 04 00 2F 50 00 01 70 21 00 03 05 00 A5 05 6A 05 8B 08 00 70 21 00 03 05 00 CE 30 8B 04 00 2F 50 00 01 25 00 02 39 27 31 00 8B
{
	if (func_139(255))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33))
		return 0;

	if (func_74(512))
	{
		func_58(false);
		func_68(true);
		func_167(true, 2);
		func_37(true, false);
		func_75(512);
	}

	return 1;
}

void func_62(BOOL bParam0) // Position - 0x2CE1 Signature - 22 01 03 00 00 89 13 80 05 66 00 39 A5
{
	func_111(&(iLocal_19.f_5), bParam0);
	return;
}

void func_63(int iParam0) // Position - 0x2CF3 Signature - 22 01 03 00 00 03 01 00 92 5D C0 CC 13 63 57 80 56 66 00 39 A5
{
	func_111(&(Global_1297600[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_86), iParam0);
	return;
}

void func_64(int iParam0) // Position - 0x2D0D Signature - 22 01 03 00 00 03 01 00 92 5D C0 CC 13 63 57 80 56 66 00 39 0B
{
	func_79(&(Global_1297600[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_86), iParam0);
	return;
}

void func_65() // Position - 0x2D27 Signature - 22 00 03 00 00 89 13 27 06
{
	float animScenePhase;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_19.f_6))
	{
		func_15(34);
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(Global_33) || func_139(255))
		return;

	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_19.f_6, false) && !func_74(true))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_19.f_6, func_147(), func_148(), 2);
	
		if (ENTITY::DOES_ENTITY_EXIST(Global_33))
			if (PED::IS_PED_MALE(Global_33))
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_19.f_6, "MP_MALE_01", Global_33, 0);
			else
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_19.f_6, "MP_FEMALE_01", Global_33, 0);
	
		if (iLocal_19.f_2 == 0)
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_19.f_83))
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_19.f_6, "p_doorsgl01x_FRONT", iLocal_19.f_83, 0);
		else if (iLocal_19.f_2 == 1)
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_19.f_84))
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_19.f_6, "p_doorsgl01x_SIDE", iLocal_19.f_84, 0);
	
		if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
			TASK::CLEAR_PED_SECONDARY_TASK(Global_33);
	
		TASK::_0xFDECCA06E8B81346(Global_33);
		ANIMSCENE::START_ANIM_SCENE(iLocal_19.f_6);
		func_62(true);
		func_75(32);
		return;
	}

	animScenePhase = ANIMSCENE::GET_ANIM_SCENE_PHASE(iLocal_19.f_6);

	if (animScenePhase > 0.9f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_33))
			func_152(false);
	}
	else if (animScenePhase > 0.85f)
	{
		if (!func_74(2048))
		{
			func_58(true);
			func_68(true);
			func_62(2048);
		}
	}

	return;
}

void func_66() // Position - 0x2E81 Signature - 22 00 02 00 00 21
{
	if (func_74(65536))
	{
		func_168(false, true);
		func_75(65536);
	}

	return;
}

BOOL func_67() // Position - 0x2EA2 Signature - 22 00 08 00 00 6D
{
	var unk;
	float num;
	float num2;
	float num3;

	if (func_139(255) || !ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33))
		return false;

	unk = { func_169(iLocal_19.f_1, 0) };
	num = func_170(iLocal_19.f_1, 0);
	num2 = Global_1901671.f_815.f_8;
	num3 = Global_1901671.f_815.f_9;
	func_164(true);
	func_165(145);
	func_171(unk, num, num3, num2, true, 1, 1);
	return true;
}

void func_68(BOOL bParam0) // Position - 0x2F1E Signature - 22 01 03 00 00 66 00 05 8B 0B
{
	if (!bParam0)
		WEAPON::_HOLSTER_PED_WEAPONS(Global_33, false, false, false, true);

	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 2, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 3, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 4, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 5, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 6, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 11, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 12, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 13, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 24, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 14, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 15, bParam0);
	return;
}

BOOL func_69() // Position - 0x2FAB Signature - 22 00 03 00 00 6D
{
	char* str;

	if (func_139(255) || !ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33))
		return false;

	if (!CAM::IS_SCREEN_FADED_IN())
		return false;

	switch (iLocal_19.f_3)
	{
		case 1:
			str = "MS_WARN_FORCE_OUT_INVALID";
			break;
	
		case 2:
			str = "MS_WARN_FORCE_OUT_MOVED";
			break;
	
		case 3:
			str = "MS_WARN_FORCE_OUT_DISBANDED";
			break;
	}

	iLocal_19.f_82 = func_121(str, 10000, 0, 0, 0, true);
	return true;
}

void func_70(BOOL bParam0) // Position - 0x302D Signature - 22 01 03 00 00 6D 10
{
	func_6(16);
	func_64(1);

	if (Global_1297441.f_158 > -1)
	{
		func_172(Global_1297441.f_158);
		Global_1297441.f_158 = -1;
	}

	if (bParam0)
		func_33(64);

	return;
}

void func_71(Player plParam0) // Position - 0x3066 Signature - 22 01 03 00 00 66 00 5D 4D CB 13 6C C8
{
	Global_1297229.f_200 = plParam0;
	return;
}

void func_72() // Position - 0x3076 Signature - 22 00 03 00 00 2F 67 02 66 02 42 8A 66
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		if (VOLUME::DOES_VOLUME_EXIST(iLocal_19.f_35[i /*4*/].f_2))
			VOLUME::DELETE_VOLUME(iLocal_19.f_35[i /*4*/].f_2);
	
		if (func_105(iLocal_19.f_35[i /*4*/]))
			func_173(&iLocal_19.f_35[i /*4*/], true, true);
	
		if (func_105(iLocal_19.f_35[i /*4*/].f_1))
			func_173(&(iLocal_19.f_35[i /*4*/].f_1), true, true);
	}

	return;
}

void func_73() // Position - 0x30ED Signature - 22 00 02 00 00 08
{
	iLocal_19.f_2 = -1;
	iLocal_19.f_5 = 0;
	iLocal_19.f_11 = 0;
	iLocal_19.f_12 = 0;
	iLocal_19.f_6 = 0;
	iLocal_19.f_8 = 0;
	iLocal_19.f_9 = 0;
	iLocal_19.f_10 = 0;
	iLocal_19.f_81 = 0;
	iLocal_19.f_4 = 0;
	return;
}

BOOL func_74(BOOL bParam0) // Position - 0x3127 Signature - 22 01 03 00 00 89 13 27
{
	return func_95(iLocal_19.f_5, bParam0);
}

void func_75(int iParam0) // Position - 0x3139 Signature - 22 01 03 00 00 89 13 80 05 66 00 39 0B
{
	func_79(&(iLocal_19.f_5), iParam0);
	return;
}

void func_76(Object* pobParam0) // Position - 0x314B Signature - 22 01 03 00 00 66 00 76 03
{
	if (ENTITY::DOES_ENTITY_EXIST(*pobParam0))
		OBJECT::DELETE_OBJECT(pobParam0);

	if (pobParam0->f_2 != 0)
		if (STREAMING::HAS_MODEL_LOADED(pobParam0->f_2))
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(pobParam0->f_2);

	pobParam0->f_1 = 0;
	pobParam0->f_3 = 0;
	return;
}

BOOL func_77(int iParam0, int iParam1) // Position - 0x3188 Signature - 22 02 04 00 00 66 00 5D 77
{
	return MISC::IS_BIT_SET(Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
}

void func_78(int iParam0, int iParam1, BOOL bParam2) // Position - 0x31A4 Signature - 22 03 05 00 00 66 00 66
{
	if (func_77(iParam0, iParam1) && !bParam2 || Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD())
	{
		MISC::CLEAR_BIT(&Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = 0;
		func_174();
	}

	return;
}

void func_79(BOOL bParam0, int iParam1) // Position - 0x320B Signature - 22 02 04 00 00 66 00 66 01 39 A0
{
	func_175(bParam0, iParam1);
	return;
}

BOOL func_80(Any* panParam0, int iParam1, int iParam2) // Position - 0x321B Signature - 22 03 07
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_81() // Position - 0x3252 Signature - 22 00 02 00 00 5D DD D3 10 78
{
	return Global_1102813.f_3672;
}

BOOL func_82(int iParam0) // Position - 0x3261 Signature - 22 01 06 00 00 66
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_17418.f_2585[num2], offset);
}

void func_83(int iParam0, BOOL bParam1) // Position - 0x328B Signature - 22 02 06 00 00 66 00 4B
{
	int num;
	int num2;

	func_176(iParam0, &num, &num2);

	if (!func_177(iParam0, num, num2, bParam1))
		return;

	func_178(num, num2);
	return;
}

void func_84(int iParam0) // Position - 0x32B8 Signature - 22 01 03 00 00 66 00 89 13 6C 61
{
	iLocal_19.f_97 = iParam0;
	return;
}

BOOL func_85() // Position - 0x32C6 Signature - 22 00 05 00 00 03
{
	Ped playerPed;
	Ped pedIndexFromEntityIndex;
	Entity firstEntityPedIsCarrying;

	playerPed = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(playerPed))
		return false;

	firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(playerPed);

	if (!ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying))
		return false;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(firstEntityPedIsCarrying);
	return PED::IS_PED_A_PLAYER(pedIndexFromEntityIndex);
}

struct<2> func_86() // Position - 0x3325 Signature - 22 00 02 00 00 5D 2C
{
	if (Global_1205804.f_129 <= 0)
		return func_112(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_112(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

BOOL func_87(var uParam0, var uParam1) // Position - 0x3370 Signature - 22 02 04 00 00 66 00 39 97
{
	if (!func_179(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_180(uParam0))
		return false;

	return true;
}

BOOL func_88(int iParam0) // Position - 0x33A4 Signature - 22 01 03 00 00 03 01 00 7D
{
	return func_120(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iLocal_19.f_94[func_90(iParam0)], true, 0);
}

void func_89(int iParam0, int iParam1) // Position - 0x33C6 Signature - 22 02 04 00 00 66 00 66 01 39 88
{
	if (!func_77(iParam0, iParam1))
	{
		MISC::SET_BIT(&Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_174();
	}

	return;
}

int func_90(int iParam0) // Position - 0x340A Signature - 22 01 03 00 00 66 00 3C 02 00 42
{
	switch (iParam0)
	{
		case joaat("GHOSTING_VOLUME"):
			return 0;
	
		case joaat("UNGHOSTING_VOLUME"):
			return 1;
	
		default:
		
	}

	return -1;
}

BOOL func_91(var uParam0) // Position - 0x342F Signature - 22 01 03 00 00 66 00 76 09
{
	return func_181(*uParam0, 1);
}

BOOL func_92(var uParam0, float fParam1) // Position - 0x343F Signature - 22 02 04 00 00 66 00 66 01 39 7B
{
	if (func_182(uParam0, fParam1))
	{
		func_183(uParam0);
		return true;
	}

	return false;
}

float func_93(float fParam0, float fParam1) // Position - 0x345D Signature - 22 02 04 00 00 66 00 66 01 31
{
	if (fParam0 > fParam1)
		return fParam0;

	return fParam1;
}

void func_94(var uParam0) // Position - 0x3474 Signature - 22 01 03 00 00 66 00 73
{
	func_184(uParam0, 0f);
	return;
}

BOOL func_95(BOOL bParam0, BOOL bParam1) // Position - 0x3483 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 00
{
	return bParam0 && bParam1 != false;
}

Player func_96() // Position - 0x3492 Signature - 22 00 02 00 00 5D 4D CB 13 27 C8
{
	return Global_1297229.f_200;
}

BOOL func_97(Player plParam0, BOOL bParam1) // Position - 0x34A0 Signature - 22 02 05 00 00 66 01 8B
{
	Player player;

	if (bParam1)
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			return false;

	player = plParam0;

	if (!func_185(Global_1297600[player /*87*/]))
		return false;

	if (Global_1297600[player /*87*/].f_5.f_12 == -1)
		return false;

	return true;
}

BOOL func_98() // Position - 0x34F5 Signature - 22 00 02 00 00 39 F4
{
	if (!func_186())
		return false;

	return func_95(Global_1901671.f_45.f_5, 8);
}

BOOL func_99(int iParam0) // Position - 0x3517 Signature - 22 01 03 00 00 66 00 08 20 6A 8B 05
{
	return iParam0 > -1 && iParam0 < 5;
}

Hash func_100(int iParam0, int iParam1, BOOL bParam2) // Position - 0x352C Signature - 22 03 06 00 00 66 02 05
{
	Hash hash;

	if (!bParam2)
	{
		hash = Global_1297441.f_78[iParam0 /*6*/][iParam1];
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						hash = -873861472;
						break;
				
					case 1:
						hash = 559525171;
						break;
				
					case 2:
						hash = -86501425;
						break;
				
					case 3:
						hash = 359873526;
						break;
				}
				break;
		
			case 1:
				switch (iParam1)
				{
					case 0:
						hash = -1636862794;
						break;
				
					case 1:
						hash = -368946392;
						break;
				
					case 2:
						hash = -86501425;
						break;
				
					case 3:
						hash = 359873526;
						break;
				}
				break;
		
			case 2:
				switch (iParam1)
				{
					case 0:
						hash = 1954418654;
						break;
				
					case 1:
						hash = -1030789470;
						break;
				
					case 2:
						hash = -86501425;
						break;
				
					case 3:
						hash = 359873526;
						break;
				}
				break;
		
			case 3:
				switch (iParam1)
				{
					case 0:
						hash = 423023646;
						break;
				
					case 1:
						hash = 155563751;
						break;
				
					case 2:
						hash = -86501425;
						break;
				
					case 3:
						hash = 359873526;
						break;
				}
				break;
		
			case 4:
				switch (iParam1)
				{
					case 0:
						hash = -561680145;
						break;
				
					case 1:
						hash = -7860519;
						break;
				
					case 2:
						hash = -86501425;
						break;
				
					case 3:
						hash = 359873526;
						break;
				}
				break;
		}
	}

	return hash;
}

Entity func_101(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x36EC Signature - 22 03 06 00 00 66 00 66
{
	Entity entity;

	entity = func_187(hParam0, iParam1);

	if (!ENTITY::DOES_ENTITY_EXIST(entity))
		return 0;

	if (!ENTITY::IS_ENTITY_AN_OBJECT(entity))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(entity) && !bParam2)
		return 0;

	return entity;
}

void func_102() // Position - 0x3731 Signature - 22 00 03 00 00 2F 67 02 66 02 1D 23 2F
{
	int i;

	for (i = 0; i <= 3; i = i + 1)
	{
		iLocal_19.f_13[i /*3*/] = { func_169(iLocal_19.f_1, i) };
		iLocal_19.f_29[i] = func_170(iLocal_19.f_1, i);
	}

	return;
}

void func_103() // Position - 0x3771 Signature - 22 00 20
{
	int num;
	int num2;
	var unk5;
	var unk6;
	int i;
	int j;
	int numNodes;
	Hash hash;
	Vector3 vector;
	Vector3 vector2;
	Vector3 vector3;
	Hash typeHash;
	var name;

	if (Global_1297062.f_166)
		func_84(2);

	num = Global_1072759.f_28418[50 /*4*/].f_3;
	num.f_2 = -2002424295;
	num.f_3 = func_188(iLocal_19.f_1);

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
		return;

	unk5 = num.f_1;

	for (i = 0; i <= 1; i = i + 1)
	{
		num.f_1 = unk5;
		num2 = func_189(i);
		TEXT_LABEL_ASSIGN_STRING(&name, "volume#", 64);
		TEXT_LABEL_APPEND_INT(&name, i, 64);
		num.f_2 = -1627797674;
		num.f_3 = num2;
	
		if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
			return;
	
		unk6 = num.f_1;
		num.f_2 = -85904298;
		numNodes = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&num);
		iLocal_19.f_94[i] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME(&name);
	
		for (j = 0; j <= numNodes - 1; j = j + 1)
		{
			num.f_1 = unk6;
			num.f_2 = -204010186;
			num.f_3 = j;
		
			if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
			{
			}
			else
			{
				num.f_2 = 701345319;
				DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&hash, &num);
				typeHash = hash;
				num.f_2 = -1084365561;
				DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vector, &num);
				num.f_2 = 2021743591;
				DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vector2, &num);
				num.f_2 = -600021699;
				DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vector3, &num);
				VOLUME::_ADD_VOLUME_TO_VOLUME_AGGREGATE(iLocal_19.f_94[i], typeHash, vector, vector2, vector3);
			}
		}
	}

	return;
}

BOOL func_104(int iParam0, var uParam1, var uParam2) // Position - 0x38D5 Signature - 22 03 15
{
	Any* p_any;
	var unk5;
	var unk10;
	int i;

	p_any = Global_1297441.f_1;
	p_any.f_2 = -709674112;
	p_any.f_3 = func_188(iParam0);

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(p_any.f_1), &p_any))
		return false;

	for (i = 0; i < 4; i = i + 1)
	{
		unk5 = { p_any };
		unk5.f_2 = -1480766764;
		unk5.f_3 = i;
	
		if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&uParam1->[unk5.f_3 /*3*/], &unk5))
			return false;
	
		unk10 = { p_any };
		unk10.f_2 = 983475634;
		unk10.f_3 = i;
	
		if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&uParam2->[unk10.f_3 /*3*/], &unk10))
			return false;
	}

	return true;
}

BOOL func_105(int iParam0) // Position - 0x3977 Signature - 22 01 03 00 00 66 00 2F 8A
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

char* func_106(int iParam0, BOOL bParam1) // Position - 0x39B6 Signature - 22 02 05 00 00 25
{
	char* str;

	str = "Null";

	switch (iParam0)
	{
		case 0:
			if (bParam1)
				str = "MOONSHINE_ENTER_POSSE";
			else
				str = "MOONSHINE_ENTER_SOLO";
			break;
	
		case 1:
			if (bParam1)
				str = "MOONSHINE_ENTER_POSSE";
			else
				str = "MOONSHINE_ENTER_SOLO";
			break;
	
		case 2:
			str = "MOONSHINE_EXIT_SOLO";
			break;
	
		case 3:
			str = "MOONSHINE_EXIT_SOLO";
			break;
	}

	return str;
}

int func_107(char* sParam0, Hash hParam1, Volume volParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, Hash hParam12, int iParam13) // Position - 0x3A26 Signature - 22 0E 12
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam2))
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_190(i, 2))
			if (volParam2 == Global_1951910[i /*23*/].f_10 && hParam1 == Global_1951910[i /*23*/].f_4)
				return i;
		else if (num == 0)
			num = i;
	}

	if (num != 0)
	{
		func_191(num, hParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, volParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, false, false, 0, hParam12, iParam13);
		return num;
	}

	return 0;
}

void func_108(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3AE6 Signature - 22 03 06 00 00 66 02 6A
{
	int num;

	if (bParam2 && !func_105(iParam0))
		return;

	num = func_192(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[num /*23*/].f_3, bParam1);
	return;
}

void func_109(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3B2F Signature - 22 04 07 00 00 66 02
{
	int num;

	if (bParam2 && !func_105(iParam0))
		return;

	num = func_192(iParam0);

	if (bParam1)
	{
		func_193(iParam0, 4);
	
		if (bParam3)
			func_194(num, true);
	
		func_195(num, true);
	}
	else
	{
		func_196(iParam0, 4);
		func_195(num, false);
	}

	return;
}

BOOL func_110() // Position - 0x3B83 Signature - 22 00 02 00 00 5D 2A
{
	return Global_1295658.f_2.f_1 == 2 || Global_1295658.f_2.f_1 == 1;
}

void func_111(BOOL bParam0, int iParam1) // Position - 0x3BA5 Signature - 22 02 04 00 00 66 00 66 01 39 16
{
	func_197(bParam0, iParam1);
	return;
}

struct<2> func_112(int iParam0) // Position - 0x3BB5 Signature - 22 01 03 00 00 11 66 00 5D
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_113(BOOL bParam0) // Position - 0x3BC9 Signature - 22 01 03 00 00 66 00 8B 0D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

int func_114(int iParam0, Player plParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3BF9 Signature - 22 04 07 00 00 66 01
{
	int i;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam1))
		return -1;

	for (i = 0; i <= 12; i = i + 1)
	{
		if (Global_1235687[i /*697*/].f_571 != iParam0)
		{
		}
		else if (bParam2 && !func_198(i, 32, plParam1))
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

BOOL func_115(int iParam0) // Position - 0x3C6E Signature - 22 01 03 00 00 66 00 2F 7E 6A 8B 06 00 66 00 6D 0C 77 69 50 01 01 22 00
{
	return iParam0 >= 0 && iParam0 <= 12;
}

BOOL func_116() // Position - 0x3C84 Signature - 22 00 02 00 00 5D 0C
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

BOOL func_117(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3CA9 Signature - 22 03 05 00 00 5D
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

BOOL func_118() // Position - 0x3D47 Signature - 22 00 02 00 00 09
{
	return func_10(1, 255);
}

BOOL func_119() // Position - 0x3D56 Signature - 22 00 03 00 00 09 03 05 00 98 67 02 66 02 2F 1C 6A 8B 09 00 66 02 03 05 00 73 42 77
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) <= 4;
}

BOOL func_120(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x3D76 Signature - 22 04 06 00 00 66 02
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

int func_121(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x3DAC Signature - 22 06 18
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

BOOL func_122(int iParam0, BOOL bParam1) // Position - 0x3DE7 Signature - 22 02 05 00 00 66 01 6A
{
	int num;

	if (bParam1 && !func_105(iParam0))
		return false;

	num = func_192(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1951910[num /*23*/].f_3);
}

BOOL func_123(BOOL bParam0) // Position - 0x3E1A Signature - 22 01 03 00 00 5D 17 00 18 27 0E 08 15 04 00 2F 50 01 01 5D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && bParam0 != false;
}

BOOL func_124() // Position - 0x3E3B Signature - 22 00 02 00 00 37
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("camera_item")) > 0)
		return true;

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(872480335) > 0)
		return true;

	return false;
}

BOOL func_125(var uParam0, var uParam1) // Position - 0x3E66 Signature - 22 02 04 00 00 4B 00
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

BOOL func_126(int iParam0, Player plParam1) // Position - 0x3E74 Signature - 22 02 04 00 00 66 01 6D FF 15 0E
{
	if (plParam1 == 255)
		return Global_1102813.f_3 && iParam0 != false;

	return Global_1101558[plParam1 /*38*/].f_3 && iParam0 != false;
}

BOOL func_127(int iParam0, BOOL bParam1) // Position - 0x3EA0 Signature - 22 02 04 00 00 66 01 6A
{
	if (bParam1 && !func_105(iParam0))
		return false;

	return !func_190(iParam0, 4);
}

int func_128(Player plParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x3EC5 Signature - 22 04 0E
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

	if (func_199(func_112(0)) && func_200(func_112(0)) == 7)
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
			num3 = func_201(plParam0);
		
			if (num3 == joaat("color_net_player2") && NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(plParam0))
				return joaat("COLOR_WHITE");
			else
				return num3;
		}
		else
		{
			return func_202(plParam0);
		}
	}

	if (player < 0 || player >= 32)
		return 0;

	if (func_95(Global_1072759.f_21353.f_1[player /*8*/].f_7, 1024))
		return joaat("color_winning_player");

	num4 = func_203(plParam0, true);

	if (!flag)
	{
		if (func_204(plParam0, bParam1))
		{
			return func_202(plParam0);
		}
		else if (func_205(plParam0, bParam1))
		{
			if (func_206(plParam0, bParam1))
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
		return func_201(plParam0);
	}
	else if (func_204(plParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == plParam0)
			return joaat("COLOR_WHITE");
		else if (func_208(func_207(func_112(0)), 1) == 395262693)
			return func_202(plParam0);
		else
			return func_202(plParam0);
	}
	else if (func_205(plParam0, bParam1))
	{
		return joaat("color_posse_enemy");
	}

	return joaat("color_friendly");
}

const char* func_129(const char* sParam0, int iParam1) // Position - 0x411A Signature - 22 02 04 00 00 66 00 03
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);

	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);

	return func_209(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

Prompt func_130(int iParam0) // Position - 0x4158 Signature - 22 01 04 00 00 66 00 39
{
	int num;

	num = func_192(iParam0);

	if (num < 0 || num >= 60)
		return 0;

	return Global_1951910[num /*23*/].f_3;
}

BOOL func_131(int iParam0, BOOL bParam1) // Position - 0x4188 Signature - 22 02 09 00 00 66 01
{
	int num;
	int gameTimer;
	float progress;
	int num2;
	int num3;

	if (bParam1 && !func_105(iParam0))
		return false;

	num = func_192(iParam0);

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

int func_132(int iParam0) // Position - 0x4282 Signature - 22 01 03 00 00 66 00 3C 04
{
	switch (iParam0)
	{
		case 0:
			return 2;
	
		case 1:
			return 3;
	
		case 2:
			return 0;
	
		case 3:
			return 1;
	
		default:
		
	}

	return 4;
}

void func_133(int iParam0) // Position - 0x42BB Signature - 22 01 03 00 00 66 00 2F 0B
{
	if (iParam0 == 0 || iParam0 == 1)
		return;

	Global_1297600[Global_1295666 /*87*/].f_5.f_13 = iParam0;
	return;
}

void func_134() // Position - 0x42E7 Signature - 22 00 1C
{
	var unk;

	unk.f_5 = 255;
	unk.f_7 = -1;
	unk.f_9 = 7;
	unk.f_19 = -1;
	unk.f_19.f_1 = -1;
	unk.f_4 = 5;
	func_210(&unk);
	return;
}

void func_135() // Position - 0x4320 Signature - 22 00 02 00 00 2F 37
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	func_211(false, 0);
	Global_1940252.f_6 = 1;
	return;
}

void func_136(BOOL bParam0) // Position - 0x4340 Signature - 22 01 03 00 00 39
{
	if (func_124())
		Global_1958683 = true;

	func_212(joaat("camera_item"));

	if (bParam0 && Global_1940199.f_38 == joaat("weapon_kit_camera") || Global_1940199.f_38 == 332793555)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1940199.f_38 = joaat("WEAPON_UNARMED");
	}

	return;
}

BOOL func_137() // Position - 0x43A3 Signature - 22 00 02 00 00 5D 3A
{
	return Global_1896762.f_352;
}

void func_138() // Position - 0x43B2 Signature - 22 00 02 00 00 2F 39
{
	func_213(false);
	return;
}

BOOL func_139(int iParam0) // Position - 0x43BF Signature - 22 01 03 00 00 09 66 00 39
{
	return func_10(1, iParam0);
}

Vector3 func_140(float fParam0) // Position - 0x43CE Signature - 22 01 03 00 00 66 00 03 05 00 30
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

char* func_141() // Position - 0x43E4 Signature - 22 00 03 00 00 89 13 27 02 3C 05 00 00 00 00 00 1B 00 01 00 00 00 15
{
	char* str;

	switch (iLocal_19.f_2)
	{
		case 0:
		case 1:
			str = "script@mp@Moonshiner@Moonshine_Property@exit";
			break;
	
		case 2:
		case 3:
			str = "script@mp@moonshiner@moonshine_property@enter";
			break;
	
		case 4:
			break;
	}

	return str;
}

int func_142() // Position - 0x442B Signature - 22 00 03 00 00 89 13 27 02 3C 05 00 00 00 00 00 1B 00 01 00 00 00 1B
{
	int num;

	switch (iLocal_19.f_2)
	{
		case 0:
			num = 3;
			break;
	
		case 1:
			num = 4;
			break;
	
		case 2:
			num = 1;
			break;
	
		case 3:
			num = 2;
			break;
	
		case 4:
			break;
	}

	return num;
}

char* func_143(int iParam0) // Position - 0x4478 Signature - 22 01 06 00 00 25
{
	char* str;
	BOOL flag;
	BOOL flag2;

	str = "";

	switch (iLocal_19.f_2)
	{
		case 0:
		case 1:
			flag = func_214();
			flag2 = func_215();
		
			switch (iParam0)
			{
				case 3:
					if (flag)
						str = "s_FRONT_VERY_DRUNK";
					else if (flag2)
						str = "s_FRONT_MODERATELY_DRUNK";
					else
						str = "s_FRONT";
					break;
			
				case 4:
					if (flag)
						str = "s_SIDE_VERY_DRUNK";
					else if (flag2)
						str = "s_SIDE_MODERATELY_DRUNK";
					else
						str = "s_SIDE";
					break;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam0)
			{
				case 1:
					str = "s_FRONT";
					break;
			
				case 2:
					str = "s_SIDE";
					break;
			}
			break;
	
		case 4:
			break;
	}

	return str;
}

int func_144(Player plParam0, BOOL bParam1) // Position - 0x4549 Signature - 22 02 04 00 00 66 01 8B 0E 00 66 00 03 05 00 0C 05 8B 04 00 08 50 02 01 66 00 5D C0 CC 13 17
{
	if (bParam1)
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
			return -1;

	return Global_1297600[plParam0 /*87*/];
}

BOOL func_145(Ped pedParam0) // Position - 0x456C Signature - 22 01 03 00 00 66 00 08 39
{
	return func_216(pedParam0, -1);
}

BOOL func_146(Entity eParam0) // Position - 0x457B Signature - 22 01 03 00 00 66 00 03 05 00 3A
{
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(eParam0))
		return false;

	if (ENTITY::IS_ENTITY_A_PED(eParam0))
		return false;

	return true;
}

Vector3 func_147() // Position - 0x459E Signature - 22 00 07
{
	var unk;
	BOOL flag;
	BOOL flag2;

	flag = iLocal_19.f_2 == 2 || iLocal_19.f_2 == 3;
	flag2 = iLocal_19.f_2 == 3;

	switch (iLocal_19.f_1)
	{
		case 0:
			if (flag)
				unk = { 1788.7273f, -816.8044f, 45.1f };
			else
				unk = { 1789.5767f, -812.6493f, 191.5339f };
			break;
	
		case 1:
			if (flag)
				if (flag2)
					unk = { -1090.5311f, 711.1215f, 106.522f };
				else
					unk = { -1090.5311f, 711.1215f, 106.722f };
			else
				unk = { -1092.7462f, 707.5026f, 83.1687f };
			break;
	
		case 2:
			if (flag)
				if (flag2)
					unk = { -2774.968f, -3046.8555f, 13.6003f };
				else
					unk = { -2774.968f, -3046.8555f, 13.8003f };
			else
				unk = { -2779.1848f, -3047.399f, -9.7658f };
			break;
	
		case 3:
			if (flag)
				if (flag2)
					unk = { 1629.1378f, 828.3974f, 147.2225f };
				else
					unk = { 1629.1378f, 828.3974f, 147.4225f };
			else
				unk = { 1628.2585f, 832.5888f, 123.8766f };
			break;
	
		case 4:
			if (flag)
				if (flag2)
					unk = { -1863.969f, -1727.8585f, 111.5559f };
				else
					unk = { -1863.969f, -1727.8585f, 111.7559f };
			else
				unk = { -1863.6011f, -1732.0768f, 88.1898f };
			break;
	}

	return unk;
}

Vector3 func_148() // Position - 0x474F Signature - 22 00 06 00 00 89
{
	BOOL flag;
	var unk;

	flag = iLocal_19.f_2 == 2 || iLocal_19.f_2 == 3;

	switch (iLocal_19.f_1)
	{
		case 0:
			if (flag)
				unk = { 0f, 0f, -136.62f };
			else
				unk = { 0f, 0f, -176.6f };
			break;
	
		case 1:
			if (flag)
				unk = { 0f, 0f, 23.421f };
			else
				unk = { 0f, 0f, -16.5f };
			break;
	
		case 2:
			if (flag)
				unk = { 0f, 0f, -27.83f };
			else
				unk = { 0f, 0f, -67.7f };
			break;
	
		case 3:
			if (flag)
				unk = { 0f, 0f, -113.27f };
			else
				unk = { 0f, 0f, -153.2f };
			break;
	
		case 4:
			if (flag)
				unk = { 0f, 0f, 60.01f };
			else
				unk = { 0f, 0f, 20f };
			break;
	}

	return unk;
}

int func_149() // Position - 0x483C Signature - 22 00 03 00 00 89 13 27 01
{
	int num;

	switch (iLocal_19.f_1)
	{
		case 0:
			num = 1;
			break;
	
		case 1:
			num = 2;
			break;
	
		case 2:
			num = 3;
			break;
	
		case 3:
			num = 4;
			break;
	
		case 4:
			num = 5;
			break;
	
		default:
			num = 1;
			break;
	}

	return num;
}

char* func_150(int iParam0, BOOL bParam1) // Position - 0x4892 Signature - 22 02 05 00 00 66 00 3C
{
	char* str;

	switch (iParam0)
	{
		case 0:
			if (bParam1)
				str = "MP_Male_01";
			else
				str = "MP_Female_01";
			break;
	
		case 1:
			if (bParam1)
				str = "MP_Male_02";
			else
				str = "MP_Female_02";
			break;
	
		case 2:
			if (bParam1)
				str = "MP_Male_03";
			else
				str = "MP_Female_03";
			break;
	
		case 3:
			if (bParam1)
				str = "MP_Male_04";
			else
				str = "MP_Female_04";
			break;
	
		case 4:
			if (bParam1)
				str = "MP_Male_05";
			else
				str = "MP_Female_05";
			break;
	
		case 5:
			if (bParam1)
				str = "MP_Male_06";
			else
				str = "MP_Female_06";
			break;
	
		case 6:
			if (bParam1)
				str = "MP_Male_07";
			else
				str = "MP_Female_07";
			break;
	}

	return str;
}

void func_151(int iParam0) // Position - 0x496F Signature - 22 01 03 00 00 66 00 89 13 6C 04
{
	iLocal_19.f_4 = iParam0;
	return;
}

void func_152(BOOL bParam0) // Position - 0x497D Signature - 22 01 03 00 00 66 00 8B 3F
{
	if (bParam0)
	{
		if (!func_74(2))
		{
			ENTITY::SET_ENTITY_COORDS(Global_33, iLocal_19.f_13[iLocal_19.f_2 /*3*/], true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(Global_33, iLocal_19.f_29[iLocal_19.f_2]);
			func_217(0, 0);
			func_62(2);
		}
	}
	else if (!func_74(4))
	{
		ENTITY::SET_ENTITY_COORDS(Global_33, iLocal_19.f_13[iLocal_19.f_2 /*3*/], true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(Global_33, iLocal_19.f_29[iLocal_19.f_2]);
		func_217(0, 0);
		func_62(4);
	}

	return;
}

void func_153() // Position - 0x4A05 Signature - 22 00 02 00 00 39 92
{
	iLocal_19.f_85 = func_96();
	iLocal_19.f_86 = GANG::NETWORK_GET_GANG_ID(iLocal_19.f_85);

	if (GANG::NETWORK_GET_GANG_LEADER(iLocal_19.f_86) == PLAYER::PLAYER_ID())
		func_62(131072);

	return;
}

BOOL func_154() // Position - 0x4A38 Signature - 22 00 02 00 00 5D E5
{
	return Global_1108965.f_775.f_28 != -1;
}

void func_155(Hash hParam0, float fParam1, BOOL bParam2) // Position - 0x4A4B Signature - 22 03 05 00 00 66 00 2F
{
	func_218(hParam0, false, false);

	if (func_219(hParam0))
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, fParam1, bParam2);

	return;
}

void func_156() // Position - 0x4A72 Signature - 22 00 02 00 00 11
{
	if (func_220(2, 255))
		return;

	func_221(2);
	return;
}

void func_157() // Position - 0x4A8C Signature - 22 00 02 00 00 6F
{
	if (func_222(8, 255))
		return;

	func_223(3);
	return;
}

BOOL func_158() // Position - 0x4AA6 Signature - 22 00 03 00 00 09 03 05 00 98 67 02 66 02 2F 1C 6A 8B 09 00 66 02 03 05 00 73 42 0B
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

void func_159(BOOL bParam0) // Position - 0x4AC6 Signature - 22 01 03 00 00 09 66 00 2F
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
	return;
}

Vector3 func_160(int iParam0) // Position - 0x4AD6 Signature - 22 01 03 00 00 1D 66 00 5D
{
	return Global_1297441.f_6.f_1[iParam0 /*3*/];
}

int func_161(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x4AEC Signature - 22 04 06 00 00 1D
{
	if (_IS_NULL_VECTOR(uParam0))
		return 0;

	if (func_224(255) == 4)
		return 0;

	func_10(4, 255);
	func_165(4);
	func_225(&(Global_1102813.f_3869));
	Global_1102813.f_3869.f_6 = { uParam0 };
	Global_1102813.f_3869 = uParam3;
	Global_1102813.f_3869.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_226(Global_1102813.f_3869, 36);
	return 1;
}

void func_162(BOOL bParam0) // Position - 0x4B73 Signature - 22 01 03 00 00 66 00 05 8B 0A 00 6D 12
{
	if (!bParam0)
		func_227(18);
	else
		func_165(18);

	return;
}

void func_163(BOOL bParam0) // Position - 0x4B92 Signature - 22 01 03 00 00 66 00 05 8B 0A 00 6D 13
{
	if (!bParam0)
		func_227(19);
	else
		func_165(19);

	return;
}

void func_164(BOOL bParam0) // Position - 0x4BB1 Signature - 22 01 03 00 00 66 00 8B 0A
{
	if (bParam0)
		func_165(133);
	else
		func_227(133);

	return;
}

int func_165(int iParam0) // Position - 0x4BCF Signature - 22 01 03 00 00 5D DD D3 10 80 04 66 00 62 39 21
{
	if (func_228(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_166(BOOL bParam0, BOOL bParam1) // Position - 0x4BEC Signature - 22 02 04 00 00 6D FF
{
	if (func_224(255) == 4)
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
			func_229(0, false, 0, true);
	
		func_165(0);
		func_230(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");
		func_231(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
	
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}

	func_232(Global_1102813.f_3839, 36);
	func_233(Global_1102813.f_3878, 36);
	return;
}

void func_167(BOOL bParam0, int iParam1) // Position - 0x4D37 Signature - 22 02 0B
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;

	if (bParam0)
	{
		func_234(iParam1);
		return;
	}

	if (iParam1 == 2)
		iParam1 = 56;

	num = iParam1;
	flag = !(num & 4 != 0);
	flag2 = num & 8 != 0;
	flag3 = num & 16 != 0;
	flag4 = num & 32 != 0;
	flag5 = num & 1024 != 0;
	flag6 = num & 64 != 0;
	func_235(flag, flag2, flag3, flag4 || flag5, flag6, false, flag5);
	return;
}

void func_168(BOOL bParam0, BOOL bParam1) // Position - 0x4DAB Signature - 22 02 04 00 00 66 00 8B 06
{
	if (bParam0)
		func_236(49);

	if (bParam1)
		func_236(51);

	func_237(48);
	func_236(52);
	func_236(3);
	return;
}

Vector3 func_169(int iParam0, int iParam1) // Position - 0x4DDA Signature - 22 02 07 00 00 66 00 08
{
	var unk;

	if (iParam0 == -1)
		return 0f, 0f, 0f;

	if (iParam1 == -1)
		return 0f, 0f, 0f;

	unk = { 0f, 0f, 0f };
	func_239(1268215321, func_188(iParam0), func_238(iParam1), 0);

	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&unk, &(Global_1297441.f_1)))
		return 0f, 0f, 0f;

	return unk;
}

float func_170(int iParam0, int iParam1) // Position - 0x4E31 Signature - 22 02 05 00 00 66 00 08
{
	float num;

	if (iParam0 == -1)
		return 0f;

	if (iParam1 == -1)
		return 0f;

	num = 0f;
	func_239(-226869021, func_188(iParam0), func_238(iParam1), 0);

	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&num, &(Global_1297441.f_1)))
		return 0f;

	return num;
}

void func_171(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6, int iParam7, int iParam8) // Position - 0x4E7C Signature - 22 09
{
	var entityCoords;
	float num;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	num = fParam3;

	if (!func_240(Global_1295666.f_12, &entityCoords, &num))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		num = fParam3;
	}

	func_241(uParam0, fParam3, entityCoords, num, fParam4, fParam5, bParam6, iParam7, iParam8, 1);
	return;
}

void func_172(int iParam0) // Position - 0x4ED7 Signature - 22 01 03 00 00 66 00 2F 15
{
	if (iParam0 == 0)
		MAP::_REMOVE_PROP_FROM_MINIMAP(-347798845);
	else if (iParam0 == 1)
		MAP::_REMOVE_PROP_FROM_MINIMAP(-1136456260);
	else if (iParam0 == 2)
		MAP::_REMOVE_PROP_FROM_MINIMAP(518116088);
	else if (iParam0 == 3)
		MAP::_REMOVE_PROP_FROM_MINIMAP(2142311577);
	else if (iParam0 == 4)
		MAP::_REMOVE_PROP_FROM_MINIMAP(-1846003417);

	return;
}

void func_173(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4F36 Signature - 22 03 06 00 00 66 01
{
	int num;

	if (bParam1 && !func_105(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_192(*uParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_242(num);
	*uParam0 = 0;
	return;
}

void func_174() // Position - 0x4F8A Signature - 22 00 02 00 00 5D 77
{
	SCRIPTS::_SET_ALL_PLAYER_BITS(&(Global_1072759.f_21353.f_260));
	return;
}

void func_175(BOOL bParam0, int iParam1) // Position - 0x4FA0 Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 03
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

void func_176(int iParam0, var uParam1, var uParam2) // Position - 0x4FB5 Signature - 22 03 06 00 00 66 00 67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_177(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x4FD1 Signature - 22 04 06 00 00 66 01
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_243(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_244(iParam0))
		return false;

	if (func_245(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_246(iParam0, 1) || func_247(32768))
		if (!func_246(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_248())
		return false;

	return true;
}

void func_178(int iParam0, int iParam1) // Position - 0x5073 Signature - 22 02 05 00 00 66 00 5D
{
	int address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

BOOL func_179(int iParam0) // Position - 0x5097 Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 21
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

int func_180(int iParam0) // Position - 0x50D6 Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 2E
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

BOOL func_181(int iParam0, int iParam1) // Position - 0x516C Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 02 04
{
	return iParam0 && iParam1 != false;
}

BOOL func_182(var uParam0, float fParam1) // Position - 0x517B Signature - 22 02 04 00 00 66 00 39 2F
{
	if (!func_91(uParam0))
		return false;

	if (func_249(uParam0) > fParam1)
		return true;

	return false;
}

void func_183(var uParam0) // Position - 0x51A2 Signature - 22 01 03 00 00 73
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_184(var uParam0, float fParam1) // Position - 0x51B8 Signature - 22 02 04 00 00 39
{
	uParam0->f_1 = func_250() - fParam1;
	func_251(uParam0, 1);
	func_252(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_185(int iParam0) // Position - 0x51DE Signature - 22 01 03 00 00 66 00 08 20 6A 8B 06
{
	return iParam0 > -1 && iParam0 <= 32;
}

BOOL func_186() // Position - 0x51F4 Signature - 22 00 03 00 00 5D 67
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

Entity func_187(Hash hParam0, int iParam1) // Position - 0x5237 Signature - 22 02 05 00 00 66 00 2F
{
	Entity entityByDoorhash;

	func_218(hParam0, false, false);

	if (func_219(hParam0))
	{
		entityByDoorhash = ENTITY::_GET_ENTITY_BY_DOORHASH(hParam0, iParam1);
	
		if (ENTITY::DOES_ENTITY_EXIST(entityByDoorhash))
			return entityByDoorhash;
	}

	return 0;
}

int func_188(int iParam0) // Position - 0x526D Signature - 22 01 03 00 00 66 00 3C 05 00 00 00 00 00 1B 00 01 00 00 00 1D 00 02 00 00 00 1F 00 03 00 00 00 21 00 04 00 00 00 23 00 68 28 00 37 80
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROPERTY_BAYOU");
	
		case 1:
			return joaat("PROPERTY_GRIZZLIES");
	
		case 2:
			return joaat("PROPERTY_HENNIGANS");
	
		case 3:
			return joaat("PROPERTY_HEARTLANDS");
	
		case 4:
			return joaat("PROPERTY_TALL_TREES");
	
		default:
		
	}

	return -1588462292;
}

int func_189(int iParam0) // Position - 0x52C8 Signature - 22 01 03 00 00 66 00 3C 02 00 00
{
	switch (iParam0)
	{
		case 0:
			return joaat("GHOSTING_VOLUME");
	
		case 1:
			return joaat("UNGHOSTING_VOLUME");
	
		default:
		
	}

	return 0;
}

BOOL func_190(int iParam0, int iParam1) // Position - 0x52F5 Signature - 22 02 04 00 00 66 00 2F 8A 04
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

void func_191(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x5316 Signature - 22 1A
{
	Prompt prompt;

	Global_1951910[iParam0 /*23*/].f_4 = hParam1;
	Global_1951910[iParam0 /*23*/] = iParam4;
	Global_1951910[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951910[iParam0 /*23*/].f_2 = iParam5;
	Global_1951910[iParam0 /*23*/].f_6 = { fParam6 };
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
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, fParam6);
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
	func_194(iParam0, true);
	func_195(iParam0, true);
	func_196(iParam0, 128);
	return;
}

int func_192(int iParam0) // Position - 0x5630 Signature - 22 01 03 00 00 66 00 50
{
	return iParam0;
}

void func_193(int iParam0, int iParam1) // Position - 0x563A Signature - 22 02 04 00 00 66 00 2F 8A 03 00 50 02 00 66 00 5D A6 C8 1D 63 17 27 01 66 00
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 - Global_1951910[iParam0 /*23*/].f_1 && iParam1;
	return;
}

void func_194(int iParam0, BOOL bParam1) // Position - 0x566D Signature - 22 02 04 00 00 66 00 5D A6 C8 1D 63 17 27 03 03 05 00 77 8B 3F
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		if (Global_1951910[iParam0 /*23*/].f_5 == 5 && !func_190(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_195(int iParam0, BOOL bParam1) // Position - 0x56C5 Signature - 22 02 04 00 00 66 00 5D A6 C8 1D 63 17 27 03 03 05 00 77 8B 10
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_196(int iParam0, int iParam1) // Position - 0x56EE Signature - 22 02 04 00 00 66 00 2F 8A 03 00 50 02 00 66 00 5D A6 C8 1D 63 17 27 01 66 01
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 || iParam1;
	return;
}

void func_197(var uParam0, int iParam1) // Position - 0x5716 Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 03
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_198(int iParam0, int iParam1, Player plParam2) // Position - 0x5727 Signature - 22 03 05 00 00 66 02
{
	if (plParam2 == 255)
		plParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return func_253(iParam0) && func_254(Global_1225687[plParam2 /*303*/][iParam0 /*23*/].f_19, iParam1);
}

BOOL func_199(var uParam0, var uParam1) // Position - 0x575C Signature - 22 02 05 00 00 11 4B 00 2D 39 F5
{
	int num;

	num = func_255(uParam0);
	return num == 3 || num == 4;
}

int func_200(int iParam0, var uParam1) // Position - 0x577C Signature - 22 02 04 00 00 66 00 50
{
	return iParam0;
}

int func_201(Player plParam0) // Position - 0x5786 Signature - 22 01 03 00 00 66 00 03 05 00 69
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

int func_202(Player plParam0) // Position - 0x581D Signature - 22 01 03 00 00 66 00 03 05 00 A0
{
	if (GANG::NETWORK_GET_GANG_ID(plParam0) != Global_1295666.f_10 && !func_256())
		return joaat("color_posse_neutral");

	return joaat("color_posse_ally");
}

int func_203(Player plParam0, BOOL bParam1) // Position - 0x584C Signature - 22 02 08
{
	int num;
	int num2;
	int num3;
	Player player;

	num = BUILTIN::FLOOR(func_257(plParam0, bParam1));

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

BOOL func_204(Player plParam0, BOOL bParam1) // Position - 0x5919 Signature - 22 02 07 00 00 66 00 6D
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

BOOL func_205(Player plParam0, BOOL bParam1) // Position - 0x5A1B Signature - 22 02 05 00 00 66 00 67 04 66 00
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

	if (func_258(plParam0))
		return true;

	return !func_204(plParam0, false);
}

BOOL func_206(Player plParam0, BOOL bParam1) // Position - 0x5AA5 Signature - 22 02 05 00 00 66 00 03
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

	if (func_259(plParam0))
		return false;

	if (func_258(plParam0))
		return false;

	if (func_260(plParam0))
		return true;

	return func_261(plParam0);
}

int func_207(var uParam0, var uParam1) // Position - 0x5B47 Signature - 22 02 07 00 00 4B
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_262(uParam0, &unk))
		return unk.f_1;

	return -1;
}

int func_208(int iParam0, int iParam1) // Position - 0x5B73 Signature - 22 02 04 00 00 66 00 3C
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

const char* func_209(const char* sParam0, int iParam1) // Position - 0x5BCA Signature - 22 02 04 00 00 6D 2A
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_210(Any* panParam0) // Position - 0x5BE4 Signature - 22 01 04 00 00 6D
{
	var playerBits;

	*panParam0 = 13;
	panParam0->f_1 = PLAYER::GET_PLAYER_INDEX();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	playerBits = func_263(0, 8);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 26, 15, &playerBits);
	return;
}

void func_211(BOOL bParam0, int iParam1) // Position - 0x5C17 Signature - 22 02 04 00 00 66 00 8B 10
{
	if (bParam0)
	{
		Global_1940252 = 1;
		Global_1940252.f_1 = iParam1;
	}
	else
	{
		Global_1940252 = 2;
	}

	return;
}

BOOL func_212(Hash hParam0) // Position - 0x5C39 Signature - 22 01 04 00 00 2F 67 03 2F
{
	int i;

	i = 0;

	for (i = 0; i < Global_1939434.f_161; i = i + 1)
	{
		if (hParam0 == MISC::GET_HASH_KEY(&(Global_1939434[i /*16*/].f_10)))
		{
			func_264(i);
			return true;
		}
	}

	return false;
}

void func_213(BOOL bParam0) // Position - 0x5C79 Signature - 22 01 03 00 00 66 00 8B 17
{
	if (bParam0)
		if (!Global_1896762.f_352)
			Global_1896762.f_352 = bParam0;
	else if (Global_1896762.f_352)
		Global_1896762.f_352 = bParam0;

	return;
}

BOOL func_214() // Position - 0x5CB0 Signature - 22 00 02 00 00 85 3A 9A 1D 11
{
	return Global_1940026 == 2;
}

BOOL func_215() // Position - 0x5CBE Signature - 22 00 02 00 00 85 3A 9A 1D 09
{
	return Global_1940026 == 1;
}

BOOL func_216(Ped pedParam0, int iParam1) // Position - 0x5CCC Signature - 22 02 09 00 00 66 00
{
	var unk;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (PED::IS_PED_INJURED(pedParam0))
		return 0;

	num = PED::_0x4642182A298187D0(pedParam0, iParam1, &unk, 4, 1);

	if (num != 0)
		return 1;

	return 0;
}

void func_217(int iParam0, int iParam1) // Position - 0x5D0B Signature - 22 02 04 00 00 66 00 37
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(iParam0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(iParam1, 1065353216);
	return;
}

Hash func_218(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5D29 Signature - 22 03 05 00 00 66 00 03
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0))
		if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0]) && bParam1)
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051645.f_16[0], 0, false);
		else
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, false, false, 0, 0, false);
	else if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0]) && bParam1)
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(hParam0))
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051645.f_16[0], 0, false);

	if (bParam2)
		OBJECT::_DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(hParam0, true);

	return hParam0;
}

BOOL func_219(Hash hParam0) // Position - 0x5DCD Signature - 22 01 03 00 00 66 00 39 6C
{
	if (func_265(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

BOOL func_220(int iParam0, int iParam1) // Position - 0x5DE8 Signature - 22 02 04 00 00 66 01 6D FF 15 06 00 03 01 00 92 67 01 66 01 2F 35 6A 05 8B 06 00 66 01 6D 20 7E 30 8B 04 00 2F 50 02 01 66 01 5D AB AD 13 63 13 27 09
{
	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	return Global_1289643[iParam1 /*19*/].f_9 && iParam0 != false;
}

void func_221(int iParam0) // Position - 0x5E22 Signature - 22 01 03 00 00 1D 66 00 39
{
	func_266(3, iParam0);
	return;
}

BOOL func_222(int iParam0, int iParam1) // Position - 0x5E31 Signature - 22 02 04 00 00 66 01 6D FF 15 06 00 03 01 00 92 67 01 66 01 2F 35 6A 05 8B 06 00 66 01 6D 20 7E 30 8B 04 00 2F 50 02 01 66 01 5D AB AD 13 63 13 27 0A
{
	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	return Global_1289643[iParam1 /*19*/].f_10 && iParam0 != false;
}

void func_223(int iParam0) // Position - 0x5E6B Signature - 22 01 03 00 00 11 66 00 39
{
	func_266(2, iParam0);
	return;
}

int func_224(int iParam0) // Position - 0x5E7A Signature - 22 01 03 00 00 66 00 6D
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

void func_225(var uParam0) // Position - 0x5EC5 Signature - 22 01 0C 00 00 6D 09 4B 03 2D 6D 09 66 00 06 50 01 00 22 0A
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_226(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0x5ED7 Signature - 22 0A 0C 00 00 4B 00 27 05 3C 03 00 01 00 00 00 0F 00 02 00 00 00 0C 00 03 00 00 00 09 00 68 09 00 68 06 00 68 03 00 68 00 00 50 0A 00 22 01 03
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

int func_227(int iParam0) // Position - 0x5F04 Signature - 22 01 03 00 00 5D DD D3 10 80 04 66 00 62 39 9C
{
	if (func_267(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

BOOL func_228(Any* panParam0, int iParam1, int iParam2) // Position - 0x5F21 Signature - 22 03 08 00 00 66 01 6D 1F 59 67 05 66 01 6D 1F 47 67 06 66 05 66 00 17 01 66 06 03 09 00 F3 67 07 66 05 66 00 63 01 66 06 03 08 00 DD
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

void func_229(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x5F54 Signature - 22 04 06 00 00 66 00
{
	func_268(iParam0);

	if (!func_269(1))
		return;

	if (bParam1)
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	else if (!func_270(128) && !func_271(19))
		CAM::DO_SCREEN_FADE_OUT(iParam2);

	if (bParam3 && func_272() == 4)
		func_227(18);

	func_273(1024);
	return;
}

void func_230(var uParam0) // Position - 0x5FB6 Signature - 22 01 21
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_231(float* pfParam0) // Position - 0x5FC8 Signature - 22 01 0C 00 00 6D 09 4B 03 2D 6D 09 66 00 06 50 01 00 22 1F
{
	var unk;

	*pfParam0 = { unk };
	return;
}

void func_232(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0x5FDA Signature - 22 1F
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

void func_233(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0x6030 Signature - 22 0A 0C 00 00 4B 00 27 05 3C 03 00 01 00 00 00 0F 00 02 00 00 00 0C 00 03 00 00 00 09 00 68 09 00 68 06 00 68 03 00 68 00 00 50 0A 00 22 01 06
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

void func_234(int iParam0) // Position - 0x605D Signature - 22 01 06 00 00 03
{
	Player player;
	Ped ped;
	BOOL flag;

	player = PLAYER::PLAYER_ID();
	ped = PLAYER::PLAYER_PED_ID();
	ENTITY::SET_ENTITY_VISIBLE(ped, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 2, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 3, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 11, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 12, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 1, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 0, true);
	PED::SET_PED_CAN_RAGDOLL(ped, true);
	flag = iParam0 & 256 != 0;

	if (flag)
		PLAYER::SET_PLAYER_CONTROL(player, true, 0, false);
	else
		PLAYER::SET_PLAYER_CONTROL(player, true, SPC_CLEAR_TASKS, false);

	ENTITY::FREEZE_ENTITY_POSITION(ped, false);

	if (iParam0 & 512 != 0)
	{
	}
	else
	{
		func_274();
	}

	PLAYER::SET_PLAYER_INVINCIBLE(player, false);

	if (!PED::IS_PED_IN_ANY_VEHICLE(ped, false))
	{
		ENTITY::SET_ENTITY_COLLISION(ped, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(ped, true, false);
	}

	return;
}

void func_235(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x610F Signature - 22 07
{
	Player player;
	Ped ped;
	eSetPlayerControlFlags flags;

	!bParam0;
	bParam1;
	bParam2;
	bParam3;
	bParam6;
	bParam4;
	bParam5;
	player = PLAYER::PLAYER_ID();
	ped = PLAYER::PLAYER_PED_ID();
	flags = 0;

	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(ped))
		flags = SPC_CLEAR_TASKS;

	if (bParam4)
		flags = flags | SPC_LEAVE_CAMERA_CONTROL_ON;

	if (bParam5)
		flags = flags | SPC_PREVENT_EVERYBODY_BACKOFF;

	PLAYER::SET_PLAYER_CONTROL(player, false, flags, false);
	ENTITY::SET_ENTITY_VISIBLE(ped, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 2, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 3, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 11, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 12, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 1, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 0, bParam0);

	if (bParam1)
		PLAYER::SET_PLAYER_INVINCIBLE(player, true);

	if (!PED::IS_PED_IN_ANY_VEHICLE(ped, true) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(ped) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(ped))
	{
		if (bParam2)
		{
			ENTITY::SET_ENTITY_COLLISION(ped, false, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(ped, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(ped, true);
		}
	}

	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(ped))
		if (TASK::_0x9FF5F9B24E870748(ped))
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ped, false, !bParam6);

	return;
}

void func_236(int iParam0) // Position - 0x6231 Signature - 22 01 05 00 00 66 00 39 C1 6D 00 05 8B 03 00 50 01 00 66 00 6D 20 59 67 03 66 00 6D 20 47 67 04 66 03 5D DE 0C 1D 18 F0 01 63 01 66 04 03 08 00 DD
{
	int num;
	int offset;

	if (!func_275(iParam0))
		return;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::SET_BIT(&Global_1903838.f_496[num], offset);
	return;
}

void func_237(int iParam0) // Position - 0x6265 Signature - 22 01 05 00 00 66 00 39 C1 6D 00 05 8B 03 00 50 01 00 66 00 6D 20 59 67 03 66 00 6D 20 47 67 04 66 03 5D DE 0C 1D 18 F0 01 63 01 66 04 03 08 00 58
{
	int num;
	int offset;

	if (!func_275(iParam0))
		return;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::CLEAR_BIT(&Global_1903838.f_496[num], offset);
	return;
}

int func_238(int iParam0) // Position - 0x6299 Signature - 22 01 03 00 00 66 00 3C 05 00 00 00 00 00 1B 00 01 00 00 00 1D 00 02 00 00 00 1F 00 03 00 00 00 21 00 04 00 00 00 23 00 68 28 00 37 07
{
	switch (iParam0)
	{
		case 0:
			return joaat("EXTERIOR_FRONT");
	
		case 1:
			return joaat("EXTERIOR_SIDE");
	
		case 2:
			return joaat("INTERIOR_GROUND_FRONT");
	
		case 3:
			return joaat("INTERIOR_GROUND_SIDE");
	
		case 4:
			return joaat("INTERIOR_BAR");
	
		default:
		
	}

	return -1950033077;
}

void func_239(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x62F4 Signature - 22 04 06 00 00 39
{
	func_276();
	Global_1297441.f_1.f_2 = iParam0;
	Global_1297441.f_1.f_3 = iParam1;
	Global_1297441.f_1.f_4 = iParam2;
	Global_1297441.f_1.f_1 = iParam3;
	return;
}

BOOL func_240(var uParam0, var uParam1, var uParam2, Vector3* pvParam3, float* pfParam4) // Position - 0x6328 Signature - 22 05 0A
{
	Hash hash;
	int endRange;
	int randomIntInRange;

	hash = Global_1072759.f_23824.f_383[func_277(uParam0) /*272*/];
	endRange = func_278(hash);

	if (endRange <= 0)
	{
		return false;
	}
	else
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
	
		if (func_279(hash, randomIntInRange, pvParam3, pfParam4))
			return true;
	}

	return false;
}

void func_241(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, float fParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13) // Position - 0x6379 Signature - 22 0E 10
{
	if (func_224(255) == 4)
		return;

	if (_IS_NULL_VECTOR(uParam0))
		return;

	if (fParam8 < 0f && fParam9 < 0f)
	{
		fParam8 = Global_1901671.f_51;
		fParam9 = Global_1901671.f_51.f_1;
	}

	if (fParam8 == 0f && fParam9 == 0f)
	{
		fParam8 = Global_1901671.f_51;
		fParam9 = Global_1901671.f_51.f_1;
	}

	if (fParam9 < fParam8)
	{
		fParam8 = Global_1901671.f_51;
		fParam9 = Global_1901671.f_51.f_1;
	}

	if (bParam10)
		func_229(0, false, 0, true);

	func_165(0);
	func_165(3);
	Global_1102813.f_3909 = iParam11;
	Global_1102813.f_3910 = iParam12;
	Global_1102813.f_3911 = iParam13;
	func_230(&(Global_1102813.f_3839));
	Global_1102813.f_3839 = fParam3;
	Global_1102813.f_3839.f_5 = 1;
	Global_1102813.f_3839.f_17.f_6 = { uParam0 };
	Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
	Global_1102813.f_3839.f_17 = { fParam9, fParam9, fParam9 };
	Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");

	if (fParam8 > 1f)
	{
		Global_1102813.f_3839.f_16 = 1;
		Global_1102813.f_3839.f_6.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3839.f_6.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_6 = { fParam8, fParam8, fParam8 };
		Global_1102813.f_3839.f_6.f_9 = joaat("volSphere");
	}

	func_231(&(Global_1102813.f_3878));
	Global_1102813.f_3878.f_6 = { uParam4 };
	Global_1102813.f_3878 = fParam7;
	Global_1102813.f_3878.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_232(Global_1102813.f_3839, 36);
	func_233(Global_1102813.f_3878, 36);
	return;
}

void func_242(int iParam0) // Position - 0x654E Signature - 22 01 03 00 00 66 00 39 0A
{
	if (!func_280(iParam0))
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

BOOL func_243(int iParam0, int iParam1) // Position - 0x6601 Signature - 22 02 04 00 00 66 00 87
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_244(int iParam0) // Position - 0x6619 Signature - 22 01 03 00 00 66 00 42
{
	if (func_246(iParam0, 4))
		return false;

	return true;
}

BOOL func_245(int iParam0) // Position - 0x6630 Signature - 22 01 07
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

BOOL func_246(int iParam0, int iParam1) // Position - 0x66FC Signature - 22 02 04 00 00 66 00 5D 12
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_247(int iParam0) // Position - 0x6715 Signature - 22 01 03 00 00 5D 00
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_248() // Position - 0x6728 Signature - 22 00 02 00 00 39 19
{
	if (!func_281())
		return false;

	return Global_1904402.f_8873;
}

float func_249(var uParam0) // Position - 0x6743 Signature - 22 01 03 00 00 66 00 39 2F
{
	if (!func_91(uParam0))
		return uParam0->f_1;

	if (func_282(uParam0))
		return uParam0->f_2;

	return func_250() - uParam0->f_1;
}

float func_250() // Position - 0x6778 Signature - 22 00 03 00 00 03
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_251(var uParam0, int iParam1) // Position - 0x67AA Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 02
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_252(var uParam0, int iParam1) // Position - 0x67BB Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 01
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_253(int iParam0) // Position - 0x67D0 Signature - 22 01 03 00 00 66 00 2F 7E 6A 8B 06 00 66 00 6D 0C 77 69 50 01 01 22 02
{
	return iParam0 >= 0 && iParam0 <= 12;
}

BOOL func_254(BOOL bParam0, BOOL bParam1) // Position - 0x67E6 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 02 05
{
	return bParam0 && bParam1 != false;
}

int func_255(var uParam0, var uParam1) // Position - 0x67F5 Signature - 22 02 05 00 00 11 4B 00 2D 39 70
{
	int num;

	if (!func_87(uParam0))
		return -1;

	num = func_283(uParam0);

	if (num < 0)
		return 0;

	return Global_1072759.f_19487.f_1[num /*3*/].f_2;
}

BOOL func_256() // Position - 0x6830 Signature - 22 00 02 00 00 85 00
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_87(Global_1051268) && Global_1572887.f_8 & true != 0)
		return true;

	return false;
}

float func_257(Player plParam0, BOOL bParam1) // Position - 0x6888 Signature - 22 02 05 00 00 5D F8
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

BOOL func_258(Player plParam0) // Position - 0x6928 Signature - 22 01 03 00 00 5D 77 5E 10 18 8F
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28303), plParam0))
		return true;

	return false;
}

BOOL func_259(Player plParam0) // Position - 0x6945 Signature - 22 01 03 00 00 5D 77 5E 10 18 8E
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

BOOL func_260(Player plParam0) // Position - 0x6962 Signature - 22 01 03 00 00 5D 77 5E 10 18 8D
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28301), plParam0))
		return true;

	return false;
}

BOOL func_261(Player plParam0) // Position - 0x697F Signature - 22 01 03 00 00 66 00 03 05 00 27
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
	{
		func_284(plParam0);
		return false;
	}

	if (func_260(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 2)
			func_285(plParam0, 5, 1, true, false, 0);
	
		return true;
	}

	return NETWORK::_0x862C5040F4888741(Global_1295666.f_5, plParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 2;
}

BOOL func_262(int iParam0, var uParam1, Any* panParam2) // Position - 0x69E3 Signature - 22 03 05 00 00 11
{
	if (!func_87(iParam0))
		return false;

	func_286(panParam2);

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

var func_263(int iParam0, int iParam1) // Position - 0x6AEE Signature - 22 02 04 00 00 73
{
	return func_287(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

void func_264(int iParam0) // Position - 0x6B0C Signature - 22 01 13
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

BOOL func_265(Hash hParam0) // Position - 0x6B6C Signature - 22 01 03 00 00 66 00 2F 1C
{
	return hParam0 != 0;
}

void func_266(int iParam0, int iParam1) // Position - 0x6B78 Signature - 22 02 0D 00 00 4B
{
	int eventData;
	var value;
	Player player;
	int i;

	eventData.f_4 = -1;
	eventData.f_5 = -1;
	eventData = 47;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	eventData.f_4 = iParam0;
	eventData.f_5 = iParam1;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(eventData.f_1))
		return;

	if (eventData.f_4 == 2 || eventData.f_4 == 3 || eventData.f_4 == 6 || eventData.f_4 == 7 || eventData.f_4 == 8 || eventData.f_4 == 9 || eventData.f_4 == 10 || eventData.f_4 == 11 || eventData.f_4 == 12 || eventData.f_4 == 13 || eventData.f_4 == 14 || eventData.f_4 == 15)
	{
		for (i = 0; i < 32; i = i + 1)
		{
			player = PLAYER::INT_TO_PLAYERINDEX(i);
		
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
			{
			}
			else
			{
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, i);
			}
		}
	}
	else
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 6, 0, &value);
	return;
}

BOOL func_267(Any* panParam0, int iParam1, int iParam2) // Position - 0x6C9C Signature - 22 03 08 00 00 66 01 6D 1F 59 67 05 66 01 6D 1F 47 67 06 66 05 66 00 17 01 66 06 03 09 00 F3 67 07 66 05 66 00 63 01 66 06 03 08 00 58
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

void func_268(int iParam0) // Position - 0x6CCE Signature - 22 01 03 00 00 66 00 5D DD
{
	Global_1102813.f_26.f_12 = iParam0;
	return;
}

BOOL func_269(int iParam0) // Position - 0x6CE0 Signature - 22 01 03 00 00 5D DD D3 10 80 1A 27 07
{
	return Global_1102813.f_26.f_7 && iParam0 != false;
}

BOOL func_270(BOOL bParam0) // Position - 0x6CF5 Signature - 22 01 03 00 00 5D DD D3 10 80 1A 27 09 66 00 69 2F
{
	return Global_1102813.f_26.f_9 && bParam0 != false;
}

BOOL func_271(int iParam0) // Position - 0x6D0A Signature - 22 01 03 00 00 66 00 5D CF
{
	return Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1 == Global_1106895[iParam0 /*2*/].f_1;
}

int func_272() // Position - 0x6D38 Signature - 22 00 02 00 00 85 DD
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

void func_273(BOOL bParam0) // Position - 0x6D6B Signature - 22 01 03 00 00 66 00 39 34
{
	if (func_288(bParam0))
		return;

	Global_1102813.f_26.f_9 = Global_1102813.f_26.f_9 || bParam0;
	return;
}

void func_274() // Position - 0x6D92 Signature - 22 00 02 00 00 5D DD D3 10 27
{
	if (!Global_1102813.f_16)
		return;

	Global_1072759.f_28644.f_5 = 1;
	AUDIO::_RELEASE_SOUNDSET("rdro_gamemode_transition_sounds");
	AUDIO::_RELEASE_SOUNDSET("rdro_gamemode_generic_sounds");
	return;
}

BOOL func_275(int iParam0) // Position - 0x6DC1 Signature - 22 01 03 00 00 66 00 08 77
{
	if (iParam0 <= -1 || iParam0 >= 117)
		return false;

	return true;
}

void func_276() // Position - 0x6DE0 Signature - 22 00 02 00 00 6D 32
{
	Global_1297441.f_1 = Global_1072759.f_28418[50 /*4*/].f_3;
	Global_1297441.f_1.f_1 = 0;
	Global_1297441.f_1.f_2 = 0;
	Global_1297441.f_1.f_3 = 0;
	Global_1297441.f_1.f_4 = 0;
	return;
}

int func_277(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x6E1F Signature - 22 03 09
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

int func_278(Hash hParam0) // Position - 0x6E7C Signature - 22 01 08
{
	Any any;

	any = Global_1072759.f_23824.f_383.f_4085;
	any.f_2 = 1593794963;
	any.f_3 = hParam0;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&any);
}

BOOL func_279(Hash hParam0, int iParam1, Vector3* pvParam2, float* pfParam3) // Position - 0x6EA8 Signature - 22 04 0B
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

BOOL func_280(int iParam0) // Position - 0x6F0A Signature - 22 01 03 00 00 66 00 11
{
	return func_190(iParam0, 2);
}

BOOL func_281() // Position - 0x6F19 Signature - 22 00 02 00 00 03
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_282(var uParam0) // Position - 0x6F2D Signature - 22 01 03 00 00 66 00 76 11
{
	return func_181(*uParam0, 2);
}

int func_283(var uParam0, var uParam1) // Position - 0x6F3D Signature - 22 02 0D 00 00 5D
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

	if (!func_262(uParam0, &unk))
		return -1;

	num = 0;
	num2 = Global_1072759.f_19487 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
		func_262(Global_1072759.f_19487.f_1[num3 /*3*/], &unk4);
	
		if (unk4 > unk)
			num2 = num3 - 1;
		else if (unk4 < unk)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

void func_284(Player plParam0) // Position - 0x6FE4 Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 77
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_289(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_285(Player plParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x7050 Signature - 22 06 16
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

	if (func_290(player, iParam1, iParam5))
		num = 1;

	if (Global_1072759.f_21353.f_1[player /*8*/] != 2)
	{
		if (!Global_1295666.f_17[player])
		{
			func_284(plParam0);
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
						func_285(player1, iParam1, 0, true, false, 0);
				}
			}
		}
	
		if (flag)
		{
			unk.f_6 = 255;
			unk.f_4 = 1;
			unk.f_6 = plParam0;
			unk.f_7 = iParam1;
			func_291(&unk, value);
		}
	}

	return;
}

void func_286(Any* panParam0) // Position - 0x718B Signature - 22 01 03 00 00 2F
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

var func_287(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x71A1 Signature - 22 0C
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

	if (func_292() != 0)
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_293());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_293());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_293());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_294(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_295(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_224(i) != 1)
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
					if (!func_296(player2))
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

BOOL func_288(BOOL bParam0) // Position - 0x7534 Signature - 22 01 03 00 00 5D DD D3 10 80 1A 27 09 66 00 69 66
{
	return Global_1102813.f_26.f_9 && bParam0 == bParam0;
}

void func_289(Player plParam0) // Position - 0x754A Signature - 22 01 03 00 00 66 00 5D 77
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

BOOL func_290(Player plParam0, int iParam1, int iParam2) // Position - 0x7585 Signature - 22 03 05 00 00 66 00 5D
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

void func_291(Any* panParam0, var uParam1) // Position - 0x7616 Signature - 22 02 04 00 00 4B 01
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 186;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 8, 2, &uParam1);
	func_297(*panParam0);
	return;
}

int func_292() // Position - 0x7656 Signature - 22 00 02 00 00 5D FD
{
	return Global_1051645.f_12;
}

char* func_293() // Position - 0x7664 Signature - 22 00 02 00 00 25 05
{
	return "unnamed";
}

BOOL func_294(int iParam0) // Position - 0x7670 Signature - 22 01 04 00 00 2F 67 03 66
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

BOOL func_295(int iParam0) // Position - 0x76FF Signature - 22 01 03 00 00 5D 17 00 18 27 0E 08 15 04 00 2F 50 01 01 6D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_10(36, iParam0);
}

BOOL func_296(Player plParam0) // Position - 0x771D Signature - 22 01 03 00 00 03 01 00 DB
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_259(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_298(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

void func_297(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x7762 Signature - 22 08
{
	return;
}

void func_298(Player plParam0) // Position - 0x776A Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 32
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_284(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_289(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

