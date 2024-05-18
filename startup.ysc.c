// Program registers 26703 globals at index 0 starting from Global_0
#region Local Var
	char* sLocal_0 = 0;
	var uLocal_1 = 7;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = -1;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
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
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	int iLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 10;
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
#endregion

void main() // Position - 0x0 Signature - 22 00 14
{
	var unk;
	int clockHours;

	sLocal_0 = "";
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	Global_32 = -1;
	Global_17386 = { func_1() };
	func_2();
	func_3();
	BUILTIN::WAIT(0);
	func_4();
	unk = 16;

	while (!func_5(&unk))
	{
		BUILTIN::WAIT(0);
	}

	func_6(true);

	if (!Global_38)
	{
	}

	func_7();
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);

	while (DLC::GET_IS_LOADING_SCREEN_ACTIVE() && func_8(&uLocal_35) < 2)
	{
		func_9();
		BUILTIN::WAIT(0);
	}

	NETWORK::_0xE5FF65CFF5160752();
	NETWORK::_0x603469298A4308AF(true);
	func_10(0);

	while (true)
	{
		if (func_11() == 0 && MISC::IS_ORBIS_VERSION())
		{
			if (!Global_1572887.f_11)
				NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
		
			if (!func_12())
				if (!func_13())
					NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
		
			if (func_14() > 3)
				NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
		}
	
		clockHours = CLOCK::GET_CLOCK_HOURS();
		func_15(clockHours);
		func_16(clockHours);
		func_17(&uLocal_119);
		func_18(func_14() == 3);
		func_19(&Global_1901571);
		func_9();
	
		if (func_20(1024))
		{
			AUDIO::_STOP_AUDIO_SCENESET("Load_Menu_Scenes");
			func_21(1024);
		}
	
		switch (func_14())
		{
			case 0:
				if (Global_38)
				{
					func_22();
					func_21(4);
				}
				else if (MISC::_GAME_FRAMEWORK_MANAGER_GET_MODE() == 496295564)
				{
					func_22();
					func_21(4);
				}
				else if (!func_23())
				{
					func_24(1);
				}
			
				if (func_25() == 1 || func_25() == 0)
				{
					func_26();
					func_10(1);
				}
				else
				{
					func_21(4);
					func_10(2);
				}
				break;
		
			case 1:
				if (func_27())
				{
					func_21(4);
					func_10(2);
				}
				break;
		
			case 2:
				func_28();
			
				if (func_29(func_25()))
					func_10(3);
				break;
		
			case 3:
				func_30();
				func_31();
				func_32();
			
				if (func_33())
				{
					func_34();
					func_10(4);
				}
				break;
		
			case 4:
				if (func_35())
				{
					func_36();
					func_21(4);
					func_37();
					func_38();
				
					if (func_25() == 1)
					{
						func_10(5);
						NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
						SCRIPTS::BAIL_TO_LANDING_PAGE(0);
					}
					else if (func_25() == 5)
					{
						func_10(2);
					}
					else if (func_39() != 1)
					{
						func_10(5);
						SCRIPTS::BAIL_WITH_PASS_THROUGH_PARAMS(func_40());
					}
					else
					{
						func_10(2);
					}
				}
				break;
		
			case 5:
				NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
				SCRIPTS::BAIL_WITH_PASS_THROUGH_PARAMS(func_40());
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

struct<4> func_1() // Position - 0x273 Signature - 22 00 06 00 00 42
{
	var unk;

	return unk;
}

void func_2() // Position - 0x27F Signature - 22 00 02 00 00 03 00 00 2A
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	NETWORK::_0x3E74A687A73979C6(true);
	AUDIO::_START_AUDIO_SCENESET("Main_Menu", "Load_Menu_Scenes");
	return;
}

void func_3() // Position - 0x29A Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 2F
{
	return;
}

void func_4() // Position - 0x2A2 Signature - 22 00 02 00 00 2F 03 04 00 13
{
	MISC::SET_FADE_IN_AFTER_LOAD(false);
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
	func_41();
	func_42();
	func_43();
	return;
}

BOOL func_5(var uParam0) // Position - 0x2C0 Signature - 22 01 05 00 00 09 67
{
	BOOL flag;
	int i;

	flag = true;

	for (i = 0; i < 16; i = i + 1)
	{
		if (func_44(i))
			if (!func_45(i, &uParam0->[i]))
				flag = false;
	}

	if (flag)
		SCRIPTS::_SET_ALL_GLOBAL_BLOCKS_HAVE_BEEN_LOADED(true);

	return flag;
}

void func_6(BOOL bParam0) // Position - 0x306 Signature - 22 01 03 00 00 09 66 00 03
{
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(1, bParam0);
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2, bParam0);
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4, bParam0);
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8, bParam0);
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9, bParam0);
	return;
}

void func_7() // Position - 0x333 Signature - 22 00 02 00 00 39 40
{
	func_46();
	func_47();
	STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(false);
	MAP::_SET_MINIMAP_ZONE(joaat("WORLD"));
	func_48();
	return;
}

int func_8(Any anParam0) // Position - 0x355 Signature - 22 01 03 00 00 66 00 27 4C
{
	return anParam0->f_76;
}

void func_9() // Position - 0x361 Signature - 22 00 02 00 00 03 01 00 DB
{
	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
		func_49(&uLocal_35);
	else if (func_50(&uLocal_35))
		func_51(&uLocal_35);

	return;
}

void func_10(int iParam0) // Position - 0x389 Signature - 22 01 03 00 00 66 00 4E 20
{
	iLocal_32 = iParam0;
	iLocal_32.f_1 = MISC::GET_GAME_TIMER();
	return;
}

int func_11() // Position - 0x39D Signature - 22 00 02 00 00 5D 17 00 18 27 0E 50
{
	return Global_1572887.f_14;
}

BOOL func_12() // Position - 0x3AB Signature - 22 00 02 00 00 03 01 00 2C
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_13() // Position - 0x3BF Signature - 22 00 02 00 00 85 01
{
	return Global_1048577;
}

int func_14() // Position - 0x3CB Signature - 22 00 02 00 00 54 20
{
	return iLocal_32;
}

void func_15(int iParam0) // Position - 0x3D5 Signature - 22 01 03 00 00 66 00 4D 8A
{
	if (iParam0 < 6)
	{
		Global_1902570 = 8;
		return;
	}

	if (iParam0 < 12)
	{
		Global_1902570 = 1;
		return;
	}

	if (iParam0 < 18)
	{
		Global_1902570 = 2;
		return;
	}

	Global_1902570 = 4;
	return;
}

void func_16(int iParam0) // Position - 0x40F Signature - 22 01 05 00 00 03
{
	BOOL flag;
	int clockYear;

	flag = BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_SECONDS(), 0) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_MINUTES(), 6) || BUILTIN::SHIFT_LEFT(iParam0, 12) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_MONTH(), 22) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_DAY_OF_MONTH(), 17);
	clockYear = CLOCK::GET_CLOCK_YEAR();

	if (clockYear < 0 || clockYear > 1930 || clockYear < 1866)
		return;

	if (clockYear < 1898)
	{
		flag = flag || BUILTIN::SHIFT_LEFT(1898 - clockYear, 26) | -2147483648;
	}
	else
	{
		flag = flag || BUILTIN::SHIFT_LEFT(clockYear - 1898, 26);
		flag = flag - flag & -2147483648;
	}

	Global_1902569 = flag;
	return;
}

void func_17(var uParam0) // Position - 0x4B9 Signature - 22 01 04 00 00 39 9D 03 00 25
{
	BOOL flag;

	if (func_11() == -3)
		return;

	flag = COMPAPP::_0x7AF1BB4504EA5ED9();

	if (Global_1958634 != flag)
	{
		Global_1958634 = flag;
	
		if (flag)
		{
			func_52("COMP_APP_CONNECT", 10000, 0, 0, 0, true);
		}
		else
		{
			*uParam0 = 0;
			func_53(&(uParam0->f_1));
			func_52("COMP_APP_DISCONNECT", 10000, 0, 0, 0, true);
		}
	
		func_54();
	}

	if (Global_1958634)
		func_55(uParam0);

	func_54();
	return;
}

void func_18(BOOL bParam0) // Position - 0x52A Signature - 22 01 04 00 00 39 39
{
	int i;

	func_56();
	func_57();

	if (!bParam0)
		return;

	func_58();
	func_59();
	i = 0;

	for (i = 0; i <= 3; i = i + 1)
	{
		func_60(&Global_1072759.f_23.f_306[i /*59*/]);
	}

	return;
}

void func_19(int iParam0) // Position - 0x571 Signature - 22 01 03 00 00 66 00 76 3C
{
	switch (*iParam0)
	{
		case 0:
			if (!MISC::IS_ORBIS_VERSION())
				func_61(3);
		
			if (func_62())
			{
				_STOPWATCH_DESTROY(&(Global_1901571.f_1));
				func_61(1);
			}
			break;
	
		case 1:
			if (func_64(&(Global_1901571.f_1), 10000, true))
				func_61(2);
			break;
	
		case 2:
			func_65();
		
			if (!func_62())
				func_61(0);
			break;
	
		case 3:
			if (func_62())
				func_66();
			break;
	
		default:
			func_61(0);
			break;
	}

	return;
}

BOOL func_20(int iParam0) // Position - 0x603 Signature - 22 01 03 00 00 5D 00 00 18 27 03 66 00 69
{
	return Global_1572864.f_3 && iParam0 != false;
}

void func_21(int iParam0) // Position - 0x616 Signature - 22 01 03 00 00 5D 00 00 18 27 03 5D
{
	Global_1572864.f_3 = Global_1572864.f_3 - Global_1572864.f_3 && iParam0;
	return;
}

void func_22() // Position - 0x634 Signature - 22 00 02 00 00 42 39 22
{
	func_67(4);
	func_68();
	func_24(2);
	func_69(joaat("single_player"), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return;
}

BOOL func_23() // Position - 0x65D Signature - 22 00 03 00 00 2F 67 02 66 02 50
{
	BOOL num;

	num = 0;
	return num;
}

void func_24(int iParam0) // Position - 0x66A Signature - 22 01 03 00 00 66 00 2F 15 03
{
	if (iParam0 == 0)
		iParam0 = 1;

	Global_1572864.f_1 = iParam0;
	return;
}

int func_25() // Position - 0x683 Signature - 22 00 02 00 00 5D 00
{
	return Global_1572864.f_1;
}

void func_26() // Position - 0x691 Signature - 22 00 05 00 00 1D
{
	var unk;

	iLocal_29 = { unk };
	return;
}

BOOL func_27() // Position - 0x6A1 Signature - 22 00 02 00 00 39 F1
{
	func_70();

	switch (func_71())
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				MISC::SET_FADE_IN_AFTER_LOAD(false);
				MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
				PAD::SET_CONTROL_SHAKE_SUPPRESSED_ID(FRONTEND_CONTROL, 0);
				func_68();
				func_72(true);
				func_73(false);
				func_74();
				func_75(0);
				func_76();
				func_77(-1);
				NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(true);
				func_78(1);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				PED::RESURRECT_PED(PLAYER::PLAYER_PED_ID());
			}
			break;
	
		case 1:
			if (func_79())
			{
				func_78(2);
			}
			else if (REPLAY::IS_VIDEO_EDITOR_RUNNING())
			{
				func_78(2);
				iLocal_29.f_2 = 5;
			}
			break;
	
		case 2:
			if (CAM::IS_SCREEN_FADED_OUT() || func_80())
			{
				if (func_81())
				{
					func_82();
				}
				else
				{
					iLocal_29.f_2 = 1;
					func_67(4);
				}
			
				if (func_80())
					CAM::DO_SCREEN_FADE_OUT(0);
			
				func_24(iLocal_29.f_2);
				AUDIO::TRIGGER_MUSIC_EVENT("stop_title_screen_music");
				NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(false);
				PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(FRONTEND_CONTROL);
				return true;
			}
			else if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			break;
	}

	return false;
}

void func_28() // Position - 0x7CA Signature - 22 00 02 00 00 6D 40 39 03
{
	if (!func_20(64))
		return;

	switch (func_83())
	{
		case joaat("MISSION"):
			break;
	
		case joaat("Series"):
			break;
	
		case joaat("freeroam"):
			func_84(0);
		
			if (func_85(joaat("shift_f")))
			{
				Global_28 = 1;
				Global_31 = 1;
			}
		
			if (func_85(joaat("follow_invite")) || func_85(joaat("near_posse")) || NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
				Global_30 = 1;
			else
				Global_30 = 0;
		
			if (func_85(joaat("NEW_GAME")))
				Global_27 = 1;
		
			func_85(joaat("intro_not_done"));
			func_85(joaat("COUPON"));
			func_85(joaat("hub"));
			func_85(413241879);
			func_85(928971890);
		
			if (func_85(joaat("trade_1")))
				Global_32 = 0;
			else if (func_85(joaat("trade_2")))
				Global_32 = 1;
			else if (func_85(joaat("trade_3")))
				Global_32 = 2;
			else if (func_85(joaat("trade_4")))
				Global_32 = 3;
			else
				Global_32 = -1;
			break;
	
		case joaat("MISSION_CREATOR"):
			Global_29 = 1;
			Global_1572887.f_6 = 1;
			break;
	}

	func_21(64);
	return;
}

BOOL func_29(int iParam0) // Position - 0x903 Signature - 22 01 05 00 00 25
{
	char* str;
	eStackSize stackSize;

	stackSize = 1024;

	switch (iParam0)
	{
		case 1:
			func_67(4);
			return true;
	
		case 2:
			str = func_86(2);
			stackSize = 1024;
			break;
	
		case 3:
			str = func_86(3);
			stackSize = 25500;
			break;
	
		case 4:
			str = func_86(4);
			stackSize = 25500;
			break;
	
		case 5:
			str = func_86(5);
			stackSize = 1024;
			break;
	}

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(str)) > 0)
	{
		func_87(iParam0);
		return true;
	}

	if (func_88(str, stackSize))
	{
		func_87(iParam0);
		func_89(iParam0);
		func_36();
		return true;
	}

	return false;
}

void func_30() // Position - 0x9B6 Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 50 00 00 22 00 02 00 00 50
{
	return;
}

void func_31() // Position - 0x9BE Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 50 00 00 22 00 02 00 00 39
{
	return;
}

void func_32() // Position - 0x9C6 Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 39
{
	return;
}

BOOL func_33() // Position - 0x9CE Signature - 22 00 02 00 00 39 4B 0B 00 39
{
	if (func_39() != func_25())
		return true;

	if (func_20(4))
		return true;

	if (func_79())
	{
		func_81();
		CAM::DO_SCREEN_FADE_OUT(0);
		return true;
	}

	return false;
}

void func_34() // Position - 0xA07 Signature - 22 00 02 00 00 39 17
{
	func_41();
	func_21(4);
	PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(PLAYER_CONTROL);

	if (func_39() == 3)
		if (SCRIPTS::DOES_THREAD_EXIST(Global_1572887.f_18))
			func_67(2048);
	else if (func_39() == 4)
		if (SCRIPTS::DOES_THREAD_EXIST(Global_1572887.f_18))
			func_67(2048);
	else
		PLAYER::FORCE_CLEANUP(2);

	return;
}

BOOL func_35() // Position - 0xA60 Signature - 22 00 06 00 00 03 00
{
	int nextThreadId;
	int idOfThisThread;
	BOOL num;
	BOOL flag;

	SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
	nextThreadId = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	idOfThisThread = SCRIPTS::GET_ID_OF_THIS_THREAD();
	num = 1;

	while (SCRIPTS::DOES_THREAD_EXIST(nextThreadId))
	{
		flag = true;
	
		if (nextThreadId == idOfThisThread)
			flag = false;
		else if (SCRIPTS::_IS_BACKGROUND_SCRIPT(nextThreadId))
			flag = false;
	
		if (flag)
		{
			if (!SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(nextThreadId))
				SCRIPTS::_REQUEST_THREAD_EXIT(nextThreadId);
		
			if (func_11() == -1)
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(nextThreadId, 2);
		
			NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
			num = 0;
			BUILTIN::WAIT(0);
		}
	
		nextThreadId = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	}

	return num;
}

void func_36() // Position - 0xADB Signature - 22 00 02 00 00 39 4B 0B 00 11
{
	if (func_39() != 2)
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_86(2));

	if (func_39() != 3)
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_86(3));

	if (func_39() != 4)
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_86(4));

	if (func_39() != 5)
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_86(5));

	return;
}

void func_37() // Position - 0xB27 Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 5D
{
	return;
}

void func_38() // Position - 0xB2F Signature - 22 00 02 00 00 5D 17 00 18 27 07
{
	if (Global_1572887.f_7)
	{
		Global_1572887.f_7 = 0;
		TELEMETRY::ANALYTICS_PLAYTIME_FREEMODE_END();
	}

	return;
}

int func_39() // Position - 0xB4B Signature - 22 00 02 00 00 85 00
{
	return Global_1572864;
}

const char* func_40() // Position - 0xB57 Signature - 22 00 AE
{
	var unk;
	var unk9;
	var unk90;
	int i;
	int num;
	var unk98;
	Hash hash;
	var unk106;
	var unk114;
	var unk122;
	var unk130;
	var unk138;
	var unk146;
	var unk154;
	var unk162;

	TEXT_LABEL_ASSIGN_STRING(&unk, "-mode=", 64);
	TEXT_LABEL_APPEND_STRING(&unk, func_90(func_83()), 64);
	unk9 = 10;
	TEXT_LABEL_ASSIGN_STRING(&unk90, "", 64);

	switch (func_83())
	{
		case joaat("MISSION"):
			TEXT_LABEL_ASSIGN_STRING(&unk162, "-mission_id=", 64);
			TEXT_LABEL_APPEND_STRING(&unk162, "", 64);
			return MISC::VAR_STRING(42, "LAUNCH_PARAMS", &unk, &unk162);
	
		case joaat("goldstore"):
			return MISC::VAR_STRING(10, "LAUNCH_PARAMS", &unk);
	
		case joaat("Series"):
			TEXT_LABEL_ASSIGN_STRING(&unk146, "-series_id=", 64);
			TEXT_LABEL_APPEND_STRING(&unk146, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(Global_1572887.f_300.f_5), 64);
		
			if (Global_1572887.f_300.f_10 == 0)
				return MISC::VAR_STRING(42, "LAUNCH_PARAMS", &unk, &unk146);
		
			if (MISC::ARE_STRINGS_EQUAL(&(Global_1572887.f_300.f_11), ""))
				return MISC::VAR_STRING(42, "LAUNCH_PARAMS", &unk, &unk146);
		
			TEXT_LABEL_APPEND_STRING(&unk154, "-nominated_content_id=", 64);
			TEXT_LABEL_APPEND_STRING(&unk154, &(Global_1572887.f_300.f_11), 64);
			return MISC::VAR_STRING(170, "LAUNCH_PARAMS", &unk, &unk146, &unk154);
	
		case joaat("freeroam"):
			i = 0;
			num = 0;
		
			for (i = 0; i <= 32; i = i + 1)
			{
				if (func_91(i) && num < 10)
				{
					TEXT_LABEL_ASSIGN_STRING(&unk9[num /*8*/], "-arg_", 64);
					TEXT_LABEL_APPEND_INT(&unk9[num /*8*/], num, 64);
					TEXT_LABEL_APPEND_STRING(&unk9[num /*8*/], "=", 64);
					TEXT_LABEL_APPEND_STRING(&unk9[num /*8*/], func_93(func_92(i)), 64);
					num = num + 1;
				}
			}
		
			if (func_85(-1480790826))
			{
				TEXT_LABEL_ASSIGN_STRING(&unk98, "-series_id=", 64);
				TEXT_LABEL_APPEND_STRING(&unk98, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(Global_1572887.f_300.f_5), 64);
			
				if (Global_1572887.f_300.f_10 == 0)
					return MISC::VAR_STRING(43690, "LAUNCH_PARAMS", &unk, &unk98, &unk9[0 /*8*/], &unk9[1 /*8*/], &unk9[2 /*8*/], &unk9[3 /*8*/], &unk9[4 /*8*/]);
			
				hash = func_95(Global_1572887.f_300.f_10);
			
				if (hash == -1)
					return MISC::VAR_STRING(43690, "LAUNCH_PARAMS", &unk, &unk98, &unk9[0 /*8*/], &unk9[1 /*8*/], &unk9[2 /*8*/], &unk9[3 /*8*/], &unk9[4 /*8*/]);
			
				TEXT_LABEL_APPEND_STRING(&unk106, "-nominated_content_id=", 64);
				TEXT_LABEL_APPEND_STRING(&unk106, &Global_265213.f_4[hash /*46*/], 64);
				return MISC::VAR_STRING(174762, "LAUNCH_PARAMS", &unk, &unk98, &unk106, &unk9[0 /*8*/], &unk9[1 /*8*/], &unk9[2 /*8*/], &unk9[3 /*8*/], &unk9[4 /*8*/]);
			}
		
			if (Global_1572887.f_300.f_6 != -1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk114, "-region_id=", 64);
				TEXT_LABEL_APPEND_STRING(&unk114, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(Global_1572887.f_300.f_6), 64);
				return MISC::VAR_STRING(43690, "LAUNCH_PARAMS", &unk, &unk114, &unk9[0 /*8*/], &unk9[1 /*8*/], &unk9[2 /*8*/], &unk9[3 /*8*/], &unk9[4 /*8*/]);
			}
			else if (Global_1572887.f_300.f_7 != -1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk122, "-district_id=", 64);
				TEXT_LABEL_APPEND_STRING(&unk122, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(Global_1572887.f_300.f_7), 64);
				return MISC::VAR_STRING(43690, "LAUNCH_PARAMS", &unk, &unk122, &unk9[0 /*8*/], &unk9[1 /*8*/], &unk9[2 /*8*/], &unk9[3 /*8*/], &unk9[4 /*8*/]);
			}
			else if (Global_1572887.f_300.f_8 != -1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk130, "-state_id=", 64);
				TEXT_LABEL_APPEND_STRING(&unk130, func_98(Global_1572887.f_300.f_8), 64);
				return MISC::VAR_STRING(43690, "LAUNCH_PARAMS", &unk, &unk130, &unk9[0 /*8*/], &unk9[1 /*8*/], &unk9[2 /*8*/], &unk9[3 /*8*/], &unk9[4 /*8*/]);
			}
			else
			{
				return MISC::VAR_STRING(43690, "LAUNCH_PARAMS", &unk, &unk9[0 /*8*/], &unk9[1 /*8*/], &unk9[2 /*8*/], &unk9[3 /*8*/], &unk9[4 /*8*/], &unk90);
			}
		
			if (func_85(928971890))
			{
				TEXT_LABEL_ASSIGN_STRING(&unk138, "-letter_id=", 64);
				TEXT_LABEL_APPEND_INT(&unk138, Global_1572887.f_300.f_15, 64);
				return MISC::VAR_STRING(170, "LAUNCH_PARAMS", &unk, &unk9[0 /*8*/], &unk138);
			}
			break;
	
		case joaat("MISSION_CREATOR"):
			return MISC::VAR_STRING(10, "LAUNCH_PARAMS", &unk);
	
		case joaat("single_player"):
			return MISC::VAR_STRING(10, "LAUNCH_PARAMS", &unk);
	}

	return "";
}

void func_41() // Position - 0xF17 Signature - 22 00 02 00 00 39 43
{
	func_99();
	func_100();
	func_101();
	SCRIPTS::_0x11B0A0B282FA9B10(false);
	return;
}

void func_42() // Position - 0xF30 Signature - 22 00 02 00 00 6D D7
{
	sLocal_0 = "startup";
	SAVE::_0xED4B0C1057892B2E(&Global_17418, 3118, 0, sLocal_0);
	func_102(&Global_17418, "g_mpSavedGlobals.herbs", 0);
	func_103(&(Global_17418.f_55), "g_mpSavedGlobals.sPersona");
	func_104(&(Global_17418.f_2585), "g_mpSavedGlobals.eTutorialsRun", false);
	func_105(&(Global_17418.f_2618), "g_mpSavedGlobals.iTutorialBuffer");
	func_106(&(Global_17418.f_2641), "g_mpSavedGlobals.sNotoriety");
	func_107(&(Global_17418.f_2644), "g_mpSavedGlobals.sNotorietyTU004");
	func_108(&(Global_17418.f_2645), "g_mpSavedGlobals.sOutfitSaveDataTU004");
	func_109(&(Global_17418.f_2734), "g_mpSavedGlobals.sWebInboxData");
	func_110(&(Global_17418.f_2783), "g_mpSavedGlobals.todLastVisited");
	func_111(&(Global_17418.f_2964), "g_mpSavedGlobals.sFlowData");
	func_112(&(Global_17418.f_2992), "g_mpSavedGlobals.mpCollectiblesMapBlip");
	func_113(&(Global_17418.f_3015), "g_mpSavedGlobals.sMGRestrictData");
	func_114(&(Global_17418.f_3104), "g_mpSavedGlobals.sNetShopsTU006");
	func_115(&(Global_17418.f_3106));
	func_116(&(Global_17418.f_3116), "g_mpSaveGlobals.sSimpleTutorialData");
	SAVE::_0xE8346E62FD7FB962();
	SAVE::_0xC0ABF784590798A9(0);
	return;
}

void func_43() // Position - 0x101D Signature - 22 00 02 00 00 11 39 6E
{
	SCRIPTS::REQUEST_SCRIPT(func_86(2));
	SCRIPTS::REQUEST_SCRIPT(func_86(3));
	SCRIPTS::REQUEST_SCRIPT(func_86(4));
	SCRIPTS::REQUEST_SCRIPT(func_86(5));
	func_117();
	return;
}

BOOL func_44(int iParam0) // Position - 0x104D Signature - 22 01 03 00 00 66 00 2F 1C 6A
{
	if (iParam0 != 0 && iParam0 != 3)
		return true;

	return false;
}

BOOL func_45(int iParam0, var uParam1) // Position - 0x106A Signature - 22 02 04 00 00 66 01 76
{
	switch (*uParam1)
	{
		case 0:
			if (func_118(iParam0, true))
			{
				MISC::_SET_GLOBAL_BLOCK_IS_LOADED(iParam0, false);
				SCRIPTS::REQUEST_SCRIPT(func_119(iParam0));
				func_120(uParam1, 1, iParam0);
			}
			else
			{
				func_120(uParam1, 3, iParam0);
				return true;
			}
			break;
	
		case 1:
			if (SCRIPTS::HAS_SCRIPT_LOADED(func_119(iParam0)) && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(MINI) > 0)
			{
				SCRIPTS::START_NEW_SCRIPT(func_119(iParam0), MINI);
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_119(iParam0));
				func_120(uParam1, 2, iParam0);
			}
			break;
	
		case 2:
			if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(func_119(iParam0))) == 0)
			{
				MISC::_SET_GLOBAL_BLOCK_IS_LOADED(iParam0, true);
				func_120(uParam1, 3, iParam0);
				return true;
			}
			break;
	
		case 3:
			return true;
	}

	return false;
}

void func_46() // Position - 0x1140 Signature - 22 00 06 00 00 25
{
	var propertyName;

	DECORATOR::DECOR_REGISTER("outfitChanged", BOOL);
	DECORATOR::DECOR_REGISTER("playerChangeOutfits", BOOL);
	DECORATOR::DECOR_REGISTER("HorseHitchRope", INT);
	DECORATOR::DECOR_REGISTER("Whistling", BOOL);
	DECORATOR::DECOR_REGISTER("Inspecting_Item", BOOL);
	DECORATOR::DECOR_REGISTER("JustSavedAtBed", BOOL);
	DECORATOR::DECOR_REGISTER("CookingMeat", BOOL);
	DECORATOR::DECOR_REGISTER("build_success", BOOL);
	DECORATOR::DECOR_REGISTER("RWARV_Dominoes", BOOL);
	DECORATOR::DECOR_REGISTER("Fishing_LaunchNow", BOOL);
	DECORATOR::DECOR_REGISTER("RKTTY_Asked", BOOL);
	DECORATOR::DECOR_REGISTER("RKTTY_Wagon", BOOL);
	DECORATOR::DECOR_REGISTER("iDamageFrame", INT);
	DECORATOR::DECOR_REGISTER("bIgnoreDamageChecking", BOOL);
	DECORATOR::DECOR_REGISTER("rev_comment", BOOL);
	DECORATOR::DECOR_REGISTER("camp_attacker", BOOL);
	DECORATOR::DECOR_REGISTER("HorseGender", INT);
	DECORATOR::DECOR_REGISTER("HorseCamp", BOOL);
	DECORATOR::DECOR_REGISTER("HorseCompanion", BOOL);
	DECORATOR::DECOR_REGISTER("CaravanCommonHorse", BOOL);
	DECORATOR::DECOR_REGISTER("CaravanLivestock", BOOL);
	DECORATOR::DECOR_REGISTER("StableOwnedHorse", INT);
	DECORATOR::DECOR_REGISTER("HorseMission", BOOL);
	DECORATOR::DECOR_REGISTER("bHorseHasBeenStolen", BOOL);
	DECORATOR::DECOR_REGISTER("bHasBeenLassoedFromHorse", BOOL);
	DECORATOR::DECOR_REGISTER("bHasBeenTrampledByHorse", BOOL);
	DECORATOR::DECOR_REGISTER("SyncedFlags01", INT);
	DECORATOR::DECOR_REGISTER("SummonPosXY", INT);
	DECORATOR::DECOR_REGISTER("SummonPosZ", FLOAT);
	DECORATOR::DECOR_REGISTER("companion_manager_msg", INT);
	DECORATOR::DECOR_REGISTER("companion_manager_command", INT);
	DECORATOR::DECOR_REGISTER("companion_manager_watch_mode", INT);
	DECORATOR::DECOR_REGISTER("outfit_tags", INT);
	DECORATOR::DECOR_REGISTER("metaped_outfit_request", INT);
	DECORATOR::DECOR_REGISTER("metaped_outfit_request_name", INT);
	DECORATOR::DECOR_REGISTER("chinLong", INT);
	DECORATOR::DECOR_REGISTER("chopsLong", INT);
	DECORATOR::DECOR_REGISTER("stacheLong", INT);
	DECORATOR::DECOR_REGISTER("chinShort", INT);
	DECORATOR::DECOR_REGISTER("chopsShort", INT);
	DECORATOR::DECOR_REGISTER("stacheShort", INT);
	DECORATOR::DECOR_REGISTER("hairLong", INT);
	DECORATOR::DECOR_REGISTER("hairShort", INT);
	DECORATOR::DECOR_REGISTER("player_newWeaponType", INT);
	DECORATOR::DECOR_REGISTER("player_newWeaponTime", INT);
	DECORATOR::DECOR_REGISTER("player_newRevolverWeaponType", INT);
	DECORATOR::DECOR_REGISTER("player_newRevolverWeaponTime", INT);
	DECORATOR::DECOR_REGISTER("player_newPistolWeaponType", INT);
	DECORATOR::DECOR_REGISTER("player_newPistolWeaponTime", INT);
	DECORATOR::DECOR_REGISTER("player_newShotgunWeaponType", INT);
	DECORATOR::DECOR_REGISTER("player_newShotgunWeaponTime", INT);
	DECORATOR::DECOR_REGISTER("player_newRifleWeaponType", INT);
	DECORATOR::DECOR_REGISTER("player_newRifleWeaponTime", INT);
	DECORATOR::DECOR_REGISTER("chest_open", BOOL);
	DECORATOR::DECOR_REGISTER("loot_money", INT);
	DECORATOR::DECOR_REGISTER("fLoot_money", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_type1", INT);
	DECORATOR::DECOR_REGISTER("loot_item_bone1", INT);
	DECORATOR::DECOR_REGISTER("loot_item_amt1", INT);
	DECORATOR::DECOR_REGISTER("loot_item_model1", INT);
	DECORATOR::DECOR_REGISTER("loot_item_offset1x", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_offset1y", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_offset1z", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_orient1x", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_orient1y", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_orient1z", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_type2", INT);
	DECORATOR::DECOR_REGISTER("loot_item_bone2", INT);
	DECORATOR::DECOR_REGISTER("loot_item_amt2", INT);
	DECORATOR::DECOR_REGISTER("loot_item_model2", INT);
	DECORATOR::DECOR_REGISTER("loot_item_offset2x", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_offset2y", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_offset2z", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_orient2x", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_orient2y", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_orient2z", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_ammo1_type", INT);
	DECORATOR::DECOR_REGISTER("loot_ammo1_amt", INT);
	DECORATOR::DECOR_REGISTER("loot_ammo2_type", INT);
	DECORATOR::DECOR_REGISTER("loot_ammo2_amt", INT);
	DECORATOR::DECOR_REGISTER("loot_ammo3_type", INT);
	DECORATOR::DECOR_REGISTER("loot_ammo3_amt", INT);
	DECORATOR::DECOR_REGISTER("loot_weapon", INT);
	DECORATOR::DECOR_REGISTER("loot_empty", BOOL);
	DECORATOR::DECOR_REGISTER("lootable_interior", INT);
	DECORATOR::DECOR_REGISTER("scripted_loot_only", BOOL);
	DECORATOR::DECOR_REGISTER("got_loot", BOOL);
	DECORATOR::DECOR_REGISTER("ransack", BOOL);
	DECORATOR::DECOR_REGISTER("loot_long_custom_anim_data_set", UNK);
	DECORATOR::DECOR_REGISTER("letter_item", INT);
	DECORATOR::DECOR_REGISTER("loot_allow_random", BOOL);
	DECORATOR::DECOR_REGISTER("loot_mp_mission_only", BOOL);
	DECORATOR::DECOR_REGISTER("chest_local_only", BOOL);
	DECORATOR::DECOR_REGISTER("bLostLogs", BOOL);
	DECORATOR::DECOR_REGISTER("bNoticePlayer", BOOL);
	DECORATOR::DECOR_REGISTER("bIgnoreThisPed", BOOL);
	DECORATOR::DECOR_REGISTER("bPedAlreadyCounted", BOOL);
	DECORATOR::DECOR_REGISTER("bCowering", BOOL);
	DECORATOR::DECOR_REGISTER("bChopDown", BOOL);
	DECORATOR::DECOR_REGISTER("bGPSEnabled", BOOL);
	DECORATOR::DECOR_REGISTER("interactNeg", INT);
	DECORATOR::DECOR_REGISTER("bOnBreak", BOOL);
	DECORATOR::DECOR_REGISTER("bScriptedILO", BOOL);
	DECORATOR::DECOR_REGISTER("bAmbientCoachLooted", BOOL);
	DECORATOR::DECOR_REGISTER("ValuableCoach", BOOL);
	DECORATOR::DECOR_REGISTER("Herd_Panicked_Member", BOOL);
	DECORATOR::DECOR_REGISTER("honor_bank", INT);
	DECORATOR::DECOR_REGISTER("honor_override", INT);
	DECORATOR::DECOR_REGISTER("not_enemy", BOOL);
	DECORATOR::DECOR_REGISTER("bleed_start_time", INT);
	DECORATOR::DECOR_REGISTER("instigated_by_player", BOOL);
	DECORATOR::DECOR_REGISTER("player_greeted", BOOL);
	DECORATOR::DECOR_REGISTER("player_antagonized", BOOL);
	DECORATOR::DECOR_REGISTER("was_antagonized", BOOL);
	DECORATOR::DECOR_REGISTER("injured_woman", BOOL);
	DECORATOR::DECOR_REGISTER("recently_punched", BOOL);
	DECORATOR::DECOR_REGISTER("was_hurt", BOOL);
	TEXT_LABEL_COPY(&propertyName, { func_121() }, 4);
	DECORATOR::DECOR_REGISTER(&propertyName, INT);
	DECORATOR::DECOR_REGISTER("pedRoam_bInPedRoam", BOOL);
	DECORATOR::DECOR_REGISTER("pedRoam_targetRegion", INT);
	DECORATOR::DECOR_REGISTER("pedRoam_state", INT);
	DECORATOR::DECOR_REGISTER("pedRoam_behavior", INT);
	DECORATOR::DECOR_REGISTER("pedRoam_target", INT);
	DECORATOR::DECOR_REGISTER("pedRoam_targetCoord", INT);
	DECORATOR::DECOR_REGISTER("pedRoam_targetCoord_Z", FLOAT);
	DECORATOR::DECOR_REGISTER("pedRoam_targetArea", INT);
	DECORATOR::DECOR_REGISTER("pedRoam_hashKey", INT);
	DECORATOR::DECOR_REGISTER("pedRoam_owner", INT);
	DECORATOR::DECOR_REGISTER("pedRoam_flags", INT);
	DECORATOR::DECOR_REGISTER("register_open", BOOL);
	DECORATOR::DECOR_REGISTER("register_open_rdy", BOOL);
	DECORATOR::DECOR_REGISTER("camera_takingPic", BOOL);
	DECORATOR::DECOR_REGISTER("wearing_bandana", BOOL);
	DECORATOR::DECOR_REGISTER("temp_HorseBroken", BOOL);
	DECORATOR::DECOR_REGISTER("rcm_bnp_beauHogtie", BOOL);
	DECORATOR::DECOR_REGISTER("rcm_bnp_PenelopeHogtie", BOOL);
	DECORATOR::DECOR_REGISTER("rcm_elz1_elizaHogtie", BOOL);
	DECORATOR::DECOR_REGISTER("rcm_SerialKiller_hogtie", BOOL);
	DECORATOR::DECOR_REGISTER("proc_bounty_target", BOOL);
	DECORATOR::DECOR_REGISTER("rcm_f_acc_played", BOOL);
	DECORATOR::DECOR_REGISTER("rcm_f_acc_passed", BOOL);
	DECORATOR::DECOR_REGISTER("rcm_lakay_bounty_target", BOOL);
	DECORATOR::DECOR_REGISTER("LoanShark_Knowing", BOOL);
	DECORATOR::DECOR_REGISTER("LoanShark_Questioned", BOOL);
	DECORATOR::DECOR_REGISTER("player_crafting_active", BOOL);
	DECORATOR::DECOR_REGISTER("player_whittling_active", BOOL);
	DECORATOR::DECOR_REGISTER("bShowIsReady", BOOL);
	DECORATOR::DECOR_REGISTER("bShowIsPaidFor", BOOL);
	DECORATOR::DECOR_REGISTER("bUpdatedPlayer", BOOL);
	DECORATOR::DECOR_REGISTER("Global_Object_Unique_ID", INT);
	DECORATOR::DECOR_REGISTER("Global_Object_PackedDeed", INT);
	DECORATOR::DECOR_REGISTER("Global_Object_Value", INT);
	DECORATOR::DECOR_REGISTER("Global_Object_ExpStart", INT);
	DECORATOR::DECOR_REGISTER("Global_Object_ExpDuration", INT);
	DECORATOR::DECOR_REGISTER("Global_Object_No_Blip", BOOL);
	DECORATOR::_DECOR_REGISTER_2(func_122(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_123(), 6, true);
	DECORATOR::_DECOR_REGISTER_2(func_124(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_125(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_126(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_127(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_128(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_129(), 2, true);
	DECORATOR::DECOR_REGISTER("iFmeLastEventPlayed", INT);
	DECORATOR::DECOR_REGISTER("bFmeSpecialAnimal", BOOL);
	DECORATOR::DECOR_REGISTER("bFmeIsAnimalKilled", BOOL);
	DECORATOR::_DECOR_REGISTER_2("iMinigameHash", 3, true);
	DECORATOR::_DECOR_REGISTER_2("iMinigameSeat", 3, true);
	DECORATOR::DECOR_REGISTER("Has_Voice", BOOL);
	DECORATOR::DECOR_REGISTER("bUnarmed", BOOL);
	DECORATOR::DECOR_REGISTER("RANSACK", BOOL);
	DECORATOR::DECOR_REGISTER("bIsCriminal", BOOL);
	DECORATOR::DECOR_REGISTER("bDeadOrAlive", BOOL);
	DECORATOR::DECOR_REGISTER("bReacted_To_Shocking_Event", BOOL);
	DECORATOR::DECOR_REGISTER("REDJ_Witness_Time", FLOAT);
	DECORATOR::DECOR_REGISTER("SafeOpened", BOOL);
	DECORATOR::DECOR_REGISTER("TargetHit", BOOL);
	DECORATOR::DECOR_REGISTER("bIsSpecialPed", BOOL);
	DECORATOR::DECOR_REGISTER("iSpecialPedID", INT);
	DECORATOR::DECOR_REGISTER("bPickupThisCorpse", BOOL);
	DECORATOR::DECOR_REGISTER("last_gun_damage_time_in_ms", INT);
	DECORATOR::DECOR_REGISTER("DamagedByPlayer", BOOL);
	DECORATOR::DECOR_REGISTER("grapple_start_time", INT);
	DECORATOR::DECOR_REGISTER("grapple_tutorial_played", BOOL);
	DECORATOR::DECOR_REGISTER("worn_tutorial", BOOL);
	DECORATOR::DECOR_REGISTER("propsetName", UNK);
	DECORATOR::DECOR_REGISTER("witnessCannotBeBribedOrThreatened", BOOL);
	DECORATOR::_DECOR_REGISTER_2("MP_HUD_Bits", 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_130(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_131(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_132(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_133(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_134(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_135(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_136(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_137(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_138(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_139(), 2, true);
	DECORATOR::DECOR_REGISTER("MC_EntityID", INT);
	DECORATOR::DECOR_REGISTER("MC_ChasePedID", INT);
	DECORATOR::DECOR_REGISTER("MC_EntityPropID", INT);
	DECORATOR::_DECOR_REGISTER_2("iCampFollowerCamp", 3, true);
	DECORATOR::_DECOR_REGISTER_2("fCampVehicleMaxSpeed", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_Bluegill", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_BullheadCatfish", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_ChainPickerel", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_ChannelCatfish", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_LakeSturgeon", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_LargemouthBass", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_LongnoseGar", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_Muskie", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_NorthernPike", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_Perch", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_RedfinPickerel", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_RockBass", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_SmallmouthBass", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_SockeyeSalmon", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_SteelheadTrout", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Prevent_Tasking", 2, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Weight", 1, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Lives", 3, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Time", 3, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Laps", 3, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Rounds", 3, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Seated", 2, true);
	DECORATOR::_DECOR_REGISTER_2("PedSeatedForMinigame", 2, true);
	DECORATOR::_DECOR_REGISTER_2("MinigameObject", 2, true);
	DECORATOR::_DECOR_REGISTER_2("DontGrabThisPedForMinigame", 2, true);
	DECORATOR::_DECOR_REGISTER_2("MiniScenePedData", 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_140(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_141(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_142(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_143(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_144(), 3, true);
	DECORATOR::_DECOR_REGISTER_2("NetHorseFence_Sold", 2, true);
	DECORATOR::DECOR_REGISTER("wagonFenceValue", INT);
	DECORATOR::DECOR_REGISTER("ItemSetScriptIndex", INT);
	DECORATOR::DECOR_REGISTER("HorseTeamA", BOOL);
	DECORATOR::DECOR_REGISTER("HorseOwnerTeamA", BOOL);
	DECORATOR::DECOR_REGISTER("HorseTeamB", BOOL);
	DECORATOR::DECOR_REGISTER("HorseOwnerTeamB", BOOL);
	DECORATOR::DECOR_REGISTER("UsesTracker", BOOL);
	DECORATOR::DECOR_REGISTER("bValidRobber", BOOL);
	DECORATOR::DECOR_REGISTER("STORY_COOP_PED_ID", INT);
	DECORATOR::_DECOR_REGISTER_2(func_145(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_146(), 6, true);
	DECORATOR::_DECOR_REGISTER_2("fast_travel_camp_barker", 3, true);
	DECORATOR::_DECOR_REGISTER_2("DigSiteX", 1, true);
	DECORATOR::_DECOR_REGISTER_2("DigSiteY", 1, true);
	DECORATOR::_DECOR_REGISTER_2("DigSiteZ", 1, true);
	DECORATOR::_DECOR_REGISTER_2("EggBroken", 2, true);
	DECORATOR::_DECOR_REGISTER_2("ChestDugUp", 2, true);
	DECORATOR::_DECOR_REGISTER_2("RevivedOnce", 2, true);
	DECORATOR::_DECOR_REGISTER_2("ReputationFlags", 3, true);
	DECORATOR::_DECOR_REGISTER_2("loot_capitale", 2, true);
	return;
}

void func_47() // Position - 0x1A88 Signature - 22 00 02 00 00 39 F8
{
	func_147();
	func_148();
	func_149();
	return;
}

void func_48() // Position - 0x1A9C Signature - 22 00 02 00 00 03 00 00 C3
{
	STREAMING::_0xDEEE1F265B7ECEF5();
	return;
}

int func_49(Any anParam0) // Position - 0x1AA8 Signature - 22 01 03 00 00 66 00 39 55
{
	switch (func_8(anParam0))
	{
		case 0:
			if (func_150(anParam0))
			{
				anParam0->f_81 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "LoadingScreen");
				anParam0->f_82 = DATABINDING::_DATABINDING_ADD_DATA_STRING(anParam0->f_81, "TooltipText", "");
				anParam0->f_83 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(anParam0->f_81, "isVisible", true);
				func_151(anParam0, 1);
				func_152(anParam0, 1);
			}
			else
			{
				func_152(anParam0, 3);
			}
			break;
	
		case 1:
			anParam0->f_77 = MISC::GET_GAME_TIMER();
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(anParam0->f_82, &anParam0->f_5[anParam0->f_78 /*7*/]);
			func_152(anParam0, 2);
			break;
	
		case 2:
			if (MISC::GET_GAME_TIMER() >= anParam0->f_77 + anParam0->f_5[anParam0->f_78 /*7*/].f_5)
			{
				anParam0->f_78 = anParam0->f_78 + 1;
			
				if (anParam0->f_78 < 10)
					func_152(anParam0, 1);
				else
					func_152(anParam0, 3);
			}
			break;
	
		case 3:
			func_51(anParam0);
			return 1;
	}

	return 0;
}

BOOL func_50(var uParam0) // Position - 0x1B9A Signature - 22 01 03 00 00 66 00 27 50
{
	return uParam0->f_80;
}

void func_51(Any anParam0) // Position - 0x1BA6 Signature - 22 01 03 00 00 66 00 27 51
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(anParam0->f_81))
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(anParam0->f_81);

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(anParam0->f_82))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(anParam0->f_82, "");
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(anParam0->f_82);
	}

	if (DATAFILE::PARSEDDATA_IS_FILE_VALID(*anParam0))
		DATAFILE::_PARSEDDATA_UNLOAD_FILE(*anParam0);

	func_151(anParam0, 0);
	return;
}

int func_52(char* sParam0, BOOL bParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x1BF6 Signature - 22 06 18
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num = bParam1;
	num.f_1 = iParam2;
	num.f_2 = iParam3;
	num.f_3 = iParam4;
	unk13.f_1 = sParam0;
	num2 = UIFEED::_UI_FEED_POST_HELP_TEXT(&num, &unk13, bParam5);
	return num2;
}

void func_53(var uParam0) // Position - 0x1C31 Signature - 22 01 03 00 00 73
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_54() // Position - 0x1C47 Signature - 22 00 02 00 00 37 D0
{
	while (!QUEUE::_EVENT_QUEUE_IS_EMPTY(-792505136))
	{
		QUEUE::_EVENT_QUEUE_POP(-792505136);
	}

	return;
}

void func_55(var uParam0) // Position - 0x1C68 Signature - 22 01 05 00 00 2F 67 03 2F 67 04 39
{
	Hash address;
	BOOL flag;

	address = 0;
	flag = false;

	if (func_153() || func_154())
		flag = true;

	if (flag != *uParam0)
	{
		*uParam0 = flag;
	
		if (!flag)
			func_155(&(uParam0->f_1), false);
		else if (func_156(&(uParam0->f_1)))
			func_53(&(uParam0->f_1));
	}

	if (!flag && func_156(&(uParam0->f_1)))
		if (func_157(&(uParam0->f_1)) >= 0.5f)
			func_53(&(uParam0->f_1));
		else
			flag = true;

	if (flag)
		MISC::SET_BIT(&address, 6);

	if (CAM::IS_GAMEPLAY_CAM_RENDERING() || CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		MISC::SET_BIT(&address, 2);
		MISC::SET_BIT(&address, 5);
		MISC::SET_BIT(&address, 4);
	
		if (LAW::GET_WANTED_SCORE(PLAYER::PLAYER_ID()) > 0)
			MISC::SET_BIT(&address, 3);
	}

	func_158(address);
	return;
}

void func_56() // Position - 0x1D39 Signature - 22 00 03 00 00 2F 67 02 66 02 09
{
	int i;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		func_159(SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i), i);
	}

	return;
}

void func_57() // Position - 0x1D64 Signature - 22 00 02 00 00 5D 17 00 18 80 C4 27 36 3C
{
	switch (Global_1572887.f_196.f_54)
	{
		case 0:
			func_160();
			break;
	
		case 1:
			func_161();
			break;
	
		case 2:
			func_162();
			break;
	
		case 3:
			func_163();
			break;
	}

	return;
}

void func_58() // Position - 0x1DAE Signature - 22 00 02 00 00 5D 17 00 18 80 C4 27 34
{
	if (Global_1572887.f_196.f_52 == 0)
		return;

	switch (Global_1572887.f_196.f_52)
	{
		case 1:
			if (MISC::IS_PC_VERSION())
				func_164(4);
			else
				func_164(2);
			break;
	
		case 2:
			func_165();
			func_164(3);
			break;
	
		case 3:
			if (func_166() == 0)
				return;
		
			func_164(4);
			break;
	
		case 4:
			func_164(0);
			break;
	}

	return;
}

void func_59() // Position - 0x1E29 Signature - 22 00 02 00 00 42 39 03
{
	if (func_20(4))
		func_167();

	switch (Global_1572887.f_196)
	{
		case 0:
			break;
	
		case 1:
			func_168();
			break;
	
		case 2:
			func_169();
			break;
	
		case 3:
			func_170();
			break;
	
		case 4:
			func_171();
			break;
	
		case 5:
			func_172();
			break;
	
		case 6:
			func_173();
			break;
	
		case 7:
			func_176();
			break;
	
		case 8:
			func_174();
			break;
	
		case 9:
			func_177();
			break;
	
		case 10:
			func_178();
			break;
	
		case 11:
			func_175();
			break;
	
		case 13:
			func_179();
			break;
	
		case 14:
			func_181();
			break;
	
		case 15:
			func_182();
			break;
	
		case 16:
			func_183();
			break;
	
		case 17:
			func_180();
			break;
	
		case 18:
			func_184();
			break;
	
		case 19:
			func_185();
			break;
	
		case 20:
			func_186();
			break;
	
		case 22:
			func_187();
			break;
	
		case 23:
			func_188();
			break;
	}

	return;
}

void func_60(const char* sParam0) // Position - 0x1F63 Signature - 22 01 41
{
	BOOL flag;
	char* str;
	BOOL flag2;
	var src;

	if (!sParam0->f_56 && !sParam0->f_57)
		return;

	flag = func_189(&(sParam0->f_45)) > 3000 && !sParam0->f_57;

	if (!flag)
	{
		str = func_190(sParam0, sParam0->f_58);
	
		if (MISC::IS_STRING_NULL_OR_EMPTY(str))
			return;
	}

	if (!sParam0->f_57)
	{
		if (sParam0->f_58 > 0)
			func_191(sParam0, str, flag);
		else
			func_192(sParam0, str, flag);
	
		sParam0->f_57 = 1;
		sParam0->f_54 = MISC::GET_GAME_TIMER();
	}

	flag2 = sParam0->f_54 != -1 && MISC::GET_GAME_TIMER() - sParam0->f_54 > 15000;

	if (sParam0->f_55 == 0 || sParam0->f_57 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(sParam0->f_55) == 6 || flag2)
	{
		src.f_12.f_3 = -1;
		src.f_12.f_3.f_1 = -1;
		src.f_12.f_11.f_12 = -1;
		src.f_12.f_11.f_12.f_1 = -1;
		src.f_12.f_11.f_14 = 255;
		src.f_12.f_11.f_15 = 255;
		src.f_52 = -1;
		src.f_52.f_1 = -1;
		src.f_54 = -1;
		MISC::COPY_SCRIPT_STRUCT(sParam0, &src, 59);
	}

	return;
}

void func_61(int iParam0) // Position - 0x2081 Signature - 22 01 03 00 00 66 00 26 03
{
	Global_1901571 = iParam0;
	return;
}

BOOL func_62() // Position - 0x208F Signature - 22 00 04 00 00 2F
{
	BOOL num;
	int i;

	num = 0;

	for (i = 0; i <= 19; i = i + 1)
	{
		if (Global_1900598[i /*47*/] != 0)
		{
			Global_1901571.f_99 = i;
			num = 1;
			i = 20;
		}
	}

	return num;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x20CA Signature - 22 01 03 00 00 2F 66 00 6C 01
{
	uParam0->f_1 = 0;
	return;
}

BOOL func_64(var uParam0, int iParam1, BOOL bParam2) // Position - 0x20D7 Signature - 22 03 05 00 00 66 01 08
{
	if (iParam1 == -1)
		return true;

	_STOPWATCH_INITIALIZE(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			_STOPWATCH_DESTROY(uParam0);
			return true;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		_STOPWATCH_DESTROY(uParam0);
		return true;
	}

	return false;
}

void func_65() // Position - 0x2141 Signature - 22 00 03 00 00 03 01 01 8C
{
	int num;

	if (!MISC::IS_ORBIS_VERSION())
	{
		if (func_62())
			func_66();
	
		return;
	}

	if (Global_1901571.f_99 >= 20 || Global_1901571.f_99 < 0)
		return;

	num = Global_1901571.f_99;

	if (func_194(Global_1900598[num /*47*/]))
	{
		func_195(num);
		Global_1900598[num /*47*/] = 0;
	}

	if (func_196(Global_1900598[num /*47*/]))
		Global_1900598[num /*47*/] = 0;

	if (Global_1900598[num /*47*/] != 0)
		func_197(Global_1900598[num /*47*/], num);

	Global_1901571.f_99 = Global_1901571.f_99 + 1;

	if (Global_1901571.f_99 == 31)
		Global_1901571.f_99 = 0;

	return;
}

void func_66() // Position - 0x21F7 Signature - 22 00 03 00 00 2F 67 02 66 02 6D 13
{
	int i;

	for (i = 0; i <= 19; i = i + 1)
	{
		func_195(i);
	}

	_STOPWATCH_DESTROY(&(Global_1901571.f_1));
	return;
}

void func_67(int iParam0) // Position - 0x2222 Signature - 22 01 03 00 00 5D 00 00 18 27 03 66 00 30
{
	Global_1572864.f_3 = Global_1572864.f_3 || iParam0;
	return;
}

void func_68() // Position - 0x2239 Signature - 22 00 03 00 00 2F 67 02 2F 67 02 66 02 11
{
	int i;

	i = 0;

	for (i = 0; i <= 2; i = i + 1)
	{
		Global_1572887.f_300.f_1[i] = 0;
	}

	return;
}

void func_69(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x2264 Signature - 22 0B 0D
{
	Global_1572887.f_300 = iParam0;

	if (iParam1 != 0)
		func_198(iParam1);

	if (iParam2 != 0)
		func_198(iParam2);

	if (iParam3 != 0)
		func_198(iParam3);

	if (iParam4 != 0)
		func_198(iParam4);

	if (iParam5 != 0)
		func_198(iParam5);

	if (iParam6 != 0)
		func_198(iParam6);

	if (iParam7 != 0)
		func_198(iParam7);

	if (iParam8 != 0)
		func_198(iParam8);

	if (iParam9 != 0)
		func_198(iParam9);

	if (iParam10 != 0)
		func_198(iParam10);

	func_199();
	return;
}

void func_70() // Position - 0x22F1 Signature - 22 00 02 00 00 11 37
{
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, joaat("INPUT_FRONTEND_PAUSE"), false);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, joaat("INPUT_CINEMATIC_CAM"), false);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, joaat("INPUT_NEXT_CAMERA"), false);

	if (func_71() != 0)
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();

	return;
}

int func_71() // Position - 0x2326 Signature - 22 00 02 00 00 54 1D
{
	return iLocal_29;
}

void func_72(BOOL bParam0) // Position - 0x2330 Signature - 22 01 03 00 00 66 00 03 04
{
	NETWORK::_0x704F92B3AF20D857(bParam0);
	return;
}

void func_73(BOOL bParam0) // Position - 0x233E Signature - 22 01 1F
{
	Player player;
	BOOL flag;
	var unk;

	player = PLAYER::PLAYER_ID();
	flag = false;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		flag = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(player)) == player;

	if (NETWORK::NETWORK_SESSION_IS_REQUEST_IN_PROGRESS(&(Global_1572887.f_260)) && bParam0 || flag)
		NETWORK::_NETWORK_SESSION_CANCEL_REQUEST(&(Global_1572887.f_260));

	unk.f_5 = 2;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = -1;
	unk.f_24 = -1;
	Global_1572887.f_260 = { unk };
	return;
}

void func_74() // Position - 0x23BE Signature - 22 00 02 00 00 39 2D 66 00 08
{
	func_200();
	func_201(-1);
	func_202(0);
	Global_1572887.f_196.f_43 = 0;
	Global_1572887.f_196.f_60 = 0;
	Global_1572887.f_196.f_1 = -1;

	if (Global_1572887.f_196.f_56 == 2)
		Global_1572887.f_196.f_56 = 0;

	return;
}

void func_75(int iParam0) // Position - 0x2404 Signature - 22 01 03 00 00 66 00 5D 17 00 18 80 C4 6C 2F
{
	Global_1572887.f_196.f_47 = iParam0;
	return;
}

void func_76() // Position - 0x2416 Signature - 22 00 03 00 00 2F 4B
{
	var unk;

	NETWORK::NETWORK_SET_RICH_PRESENCE(0, &unk, 1, 0);
	return;
}

void func_77(int iParam0) // Position - 0x2427 Signature - 22 01 03 00 00 66 00 5D 17 00 18 6C 0E
{
	Global_1572887.f_14 = iParam0;
	return;
}

void func_78(int iParam0) // Position - 0x2437 Signature - 22 01 03 00 00 66 00 4E 1D
{
	iLocal_29 = iParam0;
	iLocal_29.f_1 = MISC::GET_GAME_TIMER();
	return;
}

BOOL func_79() // Position - 0x244B Signature - 22 00 07 00 00 39
{
	BOOL num;
	int eventData;

	if (func_203())
		return false;

	num = 0;

	while (UIEVENTS::EVENTS_UI_IS_PENDING(joaat("landing_page")))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(joaat("landing_page"), &eventData))
		{
			switch (eventData)
			{
				case -1203660660:
					if (eventData.f_2 == joaat("LOAD_SP"))
					{
						AUDIO::_SET_AUDIO_SCENESET("Fade_To_SP", "Load_Menu_Scenes");
						func_204(joaat("single_player"));
						num = 1;
					}
					else if (eventData.f_2 == 2143694500)
					{
						AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
						num = 1;
					}
					else if (eventData.f_2 == joaat("LANDING_PAGE_TILE"))
					{
						AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
						num = 1;
					}
					else if (eventData.f_2 == joaat("LOAD_MP_INTRO"))
					{
						AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
						func_204(joaat("freeroam"));
						func_198(joaat("intro_not_done"));
						num = 1;
					}
					else if (eventData.f_2 == joaat("SOCIAL_CLUB_OPEN"))
					{
						NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(false);
					}
					else if (eventData.f_2 == joaat("SOCIAL_CLUB_CLOSED"))
					{
						NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(true);
					}
					else if (eventData.f_2 == 728404567)
					{
						func_205();
					}
					break;
			}
		}
	
		UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("landing_page"));
	}

	return num;
}

BOOL func_80() // Position - 0x2561 Signature - 22 00 02 00 00 39 B9
{
	return func_206() > 120000;
}

BOOL func_81() // Position - 0x2572 Signature - 22 00 0C 00 00 37
{
	const char* launchParamValue;
	Hash hashKey;
	var unk;

	if (!NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_207(joaat("Mode"))))
	{
		if (func_83() == 0)
		{
			func_204(joaat("single_player"));
			func_199();
			return true;
		}
		else
		{
			func_199();
			return true;
		}
	}

	func_208(&(Global_1572887.f_300));
	launchParamValue = NETWORK::GET_LAUNCH_PARAM_VALUE(func_207(joaat("Mode")));
	hashKey = MISC::GET_HASH_KEY(launchParamValue);

	if (hashKey != 0)
		func_204(hashKey);

	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_207(joaat("region_id"))))
	{
		launchParamValue = NETWORK::GET_LAUNCH_PARAM_VALUE(func_207(joaat("region_id")));
		Global_1572887.f_300.f_6 = func_209(MISC::GET_HASH_KEY(launchParamValue));
	}

	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_207(joaat("district_id"))))
	{
		launchParamValue = NETWORK::GET_LAUNCH_PARAM_VALUE(func_207(joaat("district_id")));
		Global_1572887.f_300.f_7 = func_210(MISC::GET_HASH_KEY(launchParamValue));
	}

	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_207(joaat("state_id"))))
	{
		launchParamValue = NETWORK::GET_LAUNCH_PARAM_VALUE(func_207(joaat("state_id")));
		Global_1572887.f_300.f_8 = func_211(MISC::GET_HASH_KEY(launchParamValue));
	}

	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_207(joaat("series_id"))))
	{
		launchParamValue = NETWORK::GET_LAUNCH_PARAM_VALUE(func_207(joaat("series_id")));
		Global_1572887.f_300.f_5 = func_212(MISC::GET_HASH_KEY(launchParamValue));
	
		if (Global_1572887.f_300.f_5 <= -1)
			func_213(49, -1);
	}

	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_207(joaat("mission_id"))))
	{
		launchParamValue = NETWORK::GET_LAUNCH_PARAM_VALUE(func_207(joaat("mission_id")));
		Global_1572887.f_300.f_9 = MISC::GET_HASH_KEY(launchParamValue);
	}

	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_207(-1022795800)))
	{
		launchParamValue = NETWORK::GET_LAUNCH_PARAM_VALUE(func_207(-1022795800));
		TEXT_LABEL_ASSIGN_STRING(&(Global_1572887.f_300.f_11), launchParamValue, 32);
		Global_1572887.f_300.f_10 = MISC::GET_HASH_KEY(launchParamValue);
	}

	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_207(156317380)))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, NETWORK::GET_LAUNCH_PARAM_VALUE(func_207(156317380)), 64);
	
		if (MISC::STRING_TO_INT(&unk, &(Global_1572887.f_300.f_15)))
		{
		}
	}

	func_214(joaat("arg_0"));
	func_214(joaat("arg_1"));
	func_214(joaat("arg_2"));
	func_214(joaat("arg_3"));
	func_214(joaat("arg_4"));
	func_214(joaat("arg_5"));
	func_214(joaat("arg_6"));
	func_214(joaat("arg_7"));
	func_214(joaat("arg_8"));
	func_214(joaat("arg_9"));
	NETWORK::CLEAR_SERVICE_EVENT_ARGUMENTS();
	func_199();
	return true;
}

void func_82() // Position - 0x27BE Signature - 22 00 02 00 00 39 3D
{
	switch (func_83())
	{
		case joaat("MISSION"):
			if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
			{
				iLocal_29.f_2 = 1;
				func_67(4);
			
				if (func_85(joaat("follow_invite")) || NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
					NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
			}
			else
			{
				iLocal_29.f_2 = 3;
				func_67(68);
				AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
	
		case joaat("goldstore"):
			break;
	
		case joaat("Series"):
			if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
			{
				iLocal_29.f_2 = 1;
				func_67(4);
			
				if (func_85(joaat("follow_invite")) || NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
					NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
			}
			else
			{
				iLocal_29.f_2 = 3;
				func_67(68);
				AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
	
		case joaat("freeroam"):
			if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
			{
				iLocal_29.f_2 = 1;
				func_67(4);
			
				if (func_85(joaat("follow_invite")) || NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
					NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
			}
			else
			{
				iLocal_29.f_2 = 3;
				func_67(68);
				AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
	
		case joaat("clip"):
			iLocal_29.f_2 = 5;
			func_67(4);
			AUDIO::_SET_AUDIO_SCENESET("Fade_To_SP", "Load_Menu_Scenes");
			break;
	
		case joaat("MISSION_CREATOR"):
			if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
			{
				iLocal_29.f_2 = 1;
				func_67(4);
			
				if (func_85(joaat("follow_invite")) || NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
					NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
			}
			else
			{
				iLocal_29.f_2 = 3;
				func_67(68);
				AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
	
		case joaat("single_player"):
			iLocal_29.f_2 = 2;
			break;
	}

	return;
}

int func_83() // Position - 0x293D Signature - 22 00 02 00 00 5D 17 00 18 78
{
	return Global_1572887.f_300;
}

void func_84(int iParam0) // Position - 0x294C Signature - 22 01 03 00 00 66 00 5D 17 00 18 6C 11
{
	Global_1572887.f_17 = iParam0;
	return;
}

BOOL func_85(int iParam0) // Position - 0x295C Signature - 22 01 03 00 00 66 00 39 E1
{
	return func_91(func_215(iParam0));
}

char* func_86(int iParam0) // Position - 0x296E Signature - 22 01 03 00 00 66 00 3C 04 00 02 00 00 00 15 00 03 00 00 00 19
{
	switch (iParam0)
	{
		case 2:
			return "startup_sp";
	
		case 3:
			return "startup_mp";
	
		case 4:
			return "startup_tlg";
	
		case 5:
			return "startup_clip";
	}

	return "startup_sp";
}

void func_87(int iParam0) // Position - 0x29C2 Signature - 22 01 03 00 00 66 00 26 00
{
	Global_1572864 = iParam0;
	return;
}

BOOL func_88(char* sParam0, eStackSize essParam1) // Position - 0x29D0 Signature - 22 02 04 00 00 66 00 03 05 00 E7
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
		return false;

	SCRIPTS::REQUEST_SCRIPT(sParam0);

	if (!SCRIPTS::HAS_SCRIPT_LOADED(sParam0) || MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(essParam1) <= 0)
		return false;

	SCRIPTS::START_NEW_SCRIPT(sParam0, essParam1);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
	return true;
}

void func_89(int iParam0) // Position - 0x2A18 Signature - 22 01 03 00 00 66 00 3C 04 00 02 00 00 00 15 00 03 00 00 00 1D
{
	switch (iParam0)
	{
		case 2:
			AUDIO::_SET_AUDIO_SCENESET("Fade_To_SP", "Load_Menu_Scenes");
			break;
	
		case 3:
			AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
			break;
	
		case 4:
			AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
			break;
	
		case 5:
			AUDIO::_SET_AUDIO_SCENESET("Fade_To_Editor", "Load_Menu_Scenes");
			break;
	}

	return;
}

char* func_90(int iParam0) // Position - 0x2A78 Signature - 22 01 04 00 00 2F 04 67 03 66 00 3C 08
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case joaat("MISSION"):
			str = "mission";
			break;
	
		case joaat("goldstore"):
			str = "goldstore";
			break;
	
		case joaat("Series"):
			str = "series";
			break;
	
		case joaat("freeroam"):
			str = "freeroam";
			break;
	
		case joaat("clip"):
			str = "clip";
			break;
	
		case 0:
			str = "";
			break;
	
		case joaat("MISSION_CREATOR"):
			str = "mission_creator";
			break;
	
		case joaat("single_player"):
			str = "single_player";
			break;
	}

	return str;
}

BOOL func_91(int iParam0) // Position - 0x2B04 Signature - 22 01 03 00 00 5D 17 00 18 18 2C 01 80 01 66 00 1D
{
	return func_216(&(Global_1572887.f_300.f_1), iParam0, 3);
}

int func_92(int iParam0) // Position - 0x2B1C Signature - 22 01 04 00 00 2F 67 03 66 00 3C 21 00 00
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = joaat("NEW_GAME");
			break;
	
		case 2:
			num = joaat("intro_not_done");
			break;
	
		case 3:
			num = joaat("follow_invite");
			break;
	
		case 4:
			num = -1480790826;
			break;
	
		case 5:
			num = joaat("shift_f");
			break;
	
		case 6:
			num = joaat("bg_custom_1");
			break;
	
		case 7:
			num = joaat("bg_custom_2");
			break;
	
		case 8:
			num = joaat("bg_custom_3");
			break;
	
		case 9:
			num = joaat("open_posse");
			break;
	
		case 10:
			num = joaat("near_posse");
			break;
	
		case 11:
			num = joaat("random_region");
			break;
	
		case 12:
			num = joaat("last_region");
			break;
	
		case 13:
			num = joaat("last_location");
			break;
	
		case 14:
			num = joaat("last_mission");
			break;
	
		case 15:
			num = joaat("random_poker");
			break;
	
		case 16:
			num = joaat("cchar");
			break;
	
		case 17:
			num = joaat("camp");
			break;
	
		case 18:
			num = 1735278055;
			break;
	
		case 19:
			num = -283069378;
			break;
	
		case 20:
			num = joaat("trade_1");
			break;
	
		case 21:
			num = joaat("trade_2");
			break;
	
		case 22:
			num = joaat("trade_3");
			break;
	
		case 23:
			num = joaat("trade_4");
			break;
	
		case 24:
			num = joaat("trade_5");
			break;
	
		case 25:
			num = joaat("trade_6");
			break;
	
		case 26:
			num = joaat("trade_7");
			break;
	
		case 27:
			num = 1449824096;
			break;
	
		case 28:
			num = -1369260209;
			break;
	
		case 29:
			num = joaat("COUPON");
			break;
	
		case 30:
			num = joaat("hub");
			break;
	
		case 31:
			num = 413241879;
			break;
	
		case 32:
			num = 928971890;
			break;
	}

	return num;
}

char* func_93(int iParam0) // Position - 0x2D3D Signature - 22 01 04 00 00 2F 04 67 03 66 00 3C 21
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case joaat("trade_7"):
			str = "trade_7";
			break;
	
		case joaat("follow_invite"):
			str = "follow_invite";
			break;
	
		case joaat("COUPON"):
			str = "coupon";
			break;
	
		case joaat("random_poker"):
			str = "random_poker";
			break;
	
		case joaat("last_mission"):
			str = "last_mission";
			break;
	
		case -1480790826:
			str = "async_mm";
			break;
	
		case -1369260209:
			str = "trade_9";
			break;
	
		case joaat("last_region"):
			str = "last_region";
			break;
	
		case joaat("cchar"):
			str = "cchar";
			break;
	
		case -283069378:
			str = "near_lom";
			break;
	
		case joaat("open_posse"):
			str = "open_posse";
			break;
	
		case joaat("NEW_GAME"):
			str = "new_game";
			break;
	
		case joaat("last_location"):
			str = "last_location";
			break;
	
		case joaat("random_region"):
			str = "random_region";
			break;
	
		case 0:
			str = "";
			break;
	
		case joaat("trade_1"):
			str = "trade_1";
			break;
	
		case 413241879:
			str = "outlaw_pass";
			break;
	
		case joaat("trade_2"):
			str = "trade_2";
			break;
	
		case joaat("trade_6"):
			str = "trade_6";
			break;
	
		case joaat("bg_custom_3"):
			str = "bg_custom_3";
			break;
	
		case joaat("trade_3"):
			str = "trade_3";
			break;
	
		case 928971890:
			str = "mission_letter";
			break;
	
		case joaat("bg_custom_2"):
			str = "bg_custom_2";
			break;
	
		case joaat("trade_4"):
			str = "trade_4";
			break;
	
		case joaat("intro_not_done"):
			str = "intro_not_done";
			break;
	
		case 1449824096:
			str = "trade_8";
			break;
	
		case joaat("bg_custom_1"):
			str = "bg_custom_1";
			break;
	
		case joaat("shift_f"):
			str = "shift_f";
			break;
	
		case joaat("trade_5"):
			str = "trade_5";
			break;
	
		case 1735278055:
			str = "my_moon";
			break;
	
		case joaat("near_posse"):
			str = "near_posse";
			break;
	
		case joaat("hub"):
			str = "hub";
			break;
	
		case joaat("camp"):
			str = "camp";
			break;
	}

	return str;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x2F40 Signature - 22 01 03 00 00 66 00 3C 14
{
	switch (iParam0)
	{
		case 0:
			return "NET_PLAYLIST_RACE_SERIES";
	
		case 1:
			return "NET_PLAYLIST_FEATURED_SERIES_001";
	
		case 2:
			return "NET_PLAYLIST_ADVERSARY_SMALL";
	
		case 3:
			return "NET_PLAYLIST_ADVERSARY_MEDIUM";
	
		case 4:
			return "NET_PLAYLIST_ADVERSARY_LARGE";
	
		case 5:
			return "NET_PLAYLIST_GUN_RUSH_TEAMS";
	
		case 6:
			return "NET_PLAYLIST_GUN_RUSH_FREE_FOR_ALL";
	
		case 7:
			return "NET_PLAYLIST_ELIMINATION_SMALL";
	
		case 8:
			return "NET_PLAYLIST_ELIMINATION_MEDIUM";
	
		case 9:
			return "NET_PLAYLIST_ELIMINATION_LARGE";
	
		case 10:
			return "NET_PLAYLIST_NOMINATED_SERIES";
	
		case 11:
			return "NET_PLAYLIST_NOMINATED_SERIES_SMALL";
	
		case 12:
			return "NET_PLAYLIST_NOMINATED_SERIES_MEDIUM";
	
		case 13:
			return "NET_PLAYLIST_NOMINATED_SERIES_LARGE";
	
		case 14:
			return "NET_PLAYLIST_PRIVATE_SERIES";
	
		case 15:
			return "NET_PLAYLIST_ORBIS_SERIES_1";
	
		case 16:
			return "NET_PLAYLIST_ORBIS_SERIES_2";
	
		case 17:
			return "NET_PLAYLIST_ORBIS_SERIES_3";
	
		case 18:
			return "NET_PLAYLIST_SHOOTOUT";
	
		case 19:
			return "NET_PLAYLIST_CAPTURE";
	
		default:
		
	}

	return "";
}

Hash func_95(Hash hParam0) // Position - 0x3056 Signature - 22 01 04 00 00 66 00 2F 15
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x30AD Signature - 22 01 03 00 00 66 00 3C 8D 00 FF
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
	
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
	
		case 1:
			return "REGION_BAY_MACOMBS_END";
	
		case 2:
			return "REGION_BAY_MERKINSWALLER";
	
		case 3:
			return "REGION_BAY_LAGRAS";
	
		case 4:
			return "REGION_BAY_LAKAY";
	
		case 5:
			return "REGION_BAY_SAINT_DENIS";
	
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
	
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
	
		case 8:
			return "REGION_BAY_SERENDIPITY";
	
		case 9:
			return "REGION_BAY_SHADYBELLE";
	
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
	
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
	
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
	
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
	
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
	
		case 15:
			return "REGION_BGV_FORTRIGGS";
	
		case 16:
			return "REGION_BGV_HANGINGDOG";
	
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
	
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
	
		case 19:
			return "REGION_BGV_MONTO_REST";
	
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
	
		case 21:
			return "REGION_BGV_PAINTEDSKY";
	
		case 22:
			return "REGION_BGV_PRONGHORN";
	
		case 23:
			return "REGION_BGV_RIGGS_STATION";
	
		case 24:
			return "REGION_BGV_SHACK";
	
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
	
		case 26:
			return "REGION_BGV_STRAWBERRY";
	
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
	
		case 28:
			return "REGION_BGV_WALLACE_STATION";
	
		case 29:
			return "REGION_BGV_OLD_MAN_JONES";
	
		case 30:
			return "REGION_BGV_WATSONSCABIN";
	
		case 31:
			return "REGION_BLU_CANEBREAK_MANOR";
	
		case 32:
			return "REGION_BLU_COPPERHEAD";
	
		case 33:
			return "REGION_BLU_SISIKA";
	
		case 34:
			return "REGION_BLU_TRAVELLING_SALESMAN";
	
		case 35:
			return "REGION_CML_BACCHUSBRIDGE";
	
		case 36:
			return "REGION_CML_DINO_LADY";
	
		case 37:
			return "REGION_CML_OLDFORTWALLACE";
	
		case 38:
			return "REGION_CML_SIXPOINTCABIN";
	
		case 39:
			return "REGION_GRT_BEECHERS";
	
		case 40:
			return "REGION_GRT_BLACKWATER";
	
		case 41:
			return "REGION_GRT_QUAKERS_COVE";
	
		case 42:
			return "REGION_GRZ_ADLERRANCH";
	
		case 43:
			return "REGION_GRZ_DEAD_RIVAL";
	
		case 44:
			return "REGION_GRZ_CHEZPORTER";
	
		case 45:
			return "REGION_GRZ_COLTER";
	
		case 46:
			return "REGION_GRZ_FROZEN_EXPLORER";
	
		case 47:
			return "REGION_GRZ_MILLESANI_CLAIM";
	
		case 48:
			return "REGION_GRZ_MOUNTAIN_MAN";
	
		case 49:
			return "REGION_GRZ_MOUNT_HAGEN_PEAK";
	
		case 50:
			return "REGION_GRZ_STARVING_CHILDREN";
	
		case 51:
			return "REGION_GRZ_TEMPEST_RIM";
	
		case 52:
			return "REGION_GRZ_WINTERMINING_TOWN";
	
		case 53:
			return "REGION_GRZ_CALUMETRAVINE";
	
		case 54:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
	
		case 55:
			return "REGION_GRZ_COHUTTA";
	
		case 56:
			return "REGION_GRZ_COTORRA_SPRINGS";
	
		case 57:
			return "REGION_GRZ_GUNFIGHT";
	
		case 58:
			return "REGION_GRZ_THELOFT";
	
		case 59:
			return "REGION_GRE_VETERAN";
	
		case 60:
			return "REGION_GRZ_WAPITI";
	
		case 61:
			return "REGION_GRZ_TRAVELLING_SALESMAN";
	
		case 62:
			return "REGION_GUA_AGUASDULCES";
	
		case 63:
			return "REGION_GUA_CAMP";
	
		case 64:
			return "REGION_GUA_CINCOTORRES";
	
		case 65:
			return "REGION_GUA_LACAPILLA";
	
		case 66:
			return "REGION_GUA_MANICATO";
	
		case 67:
			return "REGION_HRT_ABANDONED_MILL";
	
		case 68:
			return "REGION_ROA_BEECHERS_C";
	
		case 69:
			return "REGION_HRT_CARMODYDELL";
	
		case 70:
			return "REGION_HRT_CORNWALLKEROSENE";
	
		case 71:
			return "REGION_HRT_CROP_FARM";
	
		case 72:
			return "REGION_HRT_CUMBERLANDFALLS";
	
		case 73:
			return "REGION_HRT_DOWNSRANCH";
	
		case 74:
			return "REGION_HRT_EMERALDRANCH";
	
		case 75:
			return "REGION_HRT_GRANGERS_HOGGERY";
	
		case 76:
			return "REGION_HRT_HORSESHOEOVERLOOK";
	
		case 77:
			return "REGION_HRT_LARNEDSOD";
	
		case 78:
			return "REGION_HRT_LOONY_CULT";
	
		case 79:
			return "REGION_HRT_LUCKYSCABIN";
	
		case 80:
			return "REGION_HRT_SWANSONS_STATION";
	
		case 81:
			return "REGION_HRT_VALENTINE";
	
		case 82:
			return "REGION_ROA_ABERDEENPIGFARM";
	
		case 83:
			return "REGION_ROA_ANNESBURG";
	
		case 84:
			return "REGION_ROA_BEAVERHOLLOW";
	
		case 85:
			return "REGION_ROA_BLACK_BALSAM_RISE";
	
		case 86:
			return "REGION_ROA_BRANDYWINE_DROP";
	
		case 87:
			return "REGION_ROA_BUTCHERCREEK";
	
		case 88:
			return "REGION_ROA_DOVERHILL";
	
		case 89:
			return "REGION_ROA_HAPPY_FAMILY";
	
		case 90:
			return "REGION_ROA_ISOLATIONIST";
	
		case 91:
			return "REGION_ROA_MACLEANSHOUSE";
	
		case 92:
			return "REGION_ROA_MOSSY_FLATS";
	
		case 93:
			return "REGION_ROA_ROANOKE_VALLEY";
	
		case 94:
			return "REGION_ROA_ROCKYSEVEN";
	
		case 95:
			return "REGION_ROA_TRAPPER";
	
		case 96:
			return "REGION_ROA_OLD_MAN_JONES";
	
		case 97:
			return "REGION_ROA_VANHORNMANSION";
	
		case 98:
			return "REGION_ROA_VANHORNPOST";
	
		case 99:
			return "REGION_SCM_BRAITHWAITEMANOR";
	
		case 100:
			return "REGION_SCM_BULGERGLADE";
	
		case 101:
			return "REGION_SCM_CALIGAHALL";
	
		case 102:
			return "REGION_SCM_CATFISHJACKSONS";
	
		case 103:
			return "REGION_SCM_CLEMENSCOVE";
	
		case 104:
			return "REGION_SCM_CLEMENSPOINT";
	
		case 105:
			return "REGION_SCM_COMPSONS_STEAD";
	
		case 106:
			return "REGION_SCM_DAIRY_FARM";
	
		case 107:
			return "REGION_SCM_HORSE_SHOP";
	
		case 108:
			return "REGION_SCM_LONNIESSHACK";
	
		case 109:
			return "REGION_SCM_LOVE_TRIANGLE";
	
		case 110:
			return "REGION_SCM_RADLEYS_PASTURE";
	
		case 111:
			return "REGION_SCM_RHODES";
	
		case 112:
			return "REGION_SCM_SLAVE_PEN";
	
		case 113:
			return "REGION_TAL_AURORA_BASIN";
	
		case 114:
			return "REGION_TAL_DEAD_SETTLER";
	
		case 115:
			return "REGION_TAL_COCHINAY";
	
		case 116:
			return "REGION_TAL_MANZANITAPOST";
	
		case 117:
			return "REGION_TAL_PACIFICUNIONRR";
	
		case 118:
			return "REGION_TAL_TANNERSREACH";
	
		case 119:
			return "REGION_TAL_TRAPPER";
	
		case 120:
			return "REGION_GAP_GAPTOOTH_BREACH";
	
		case 121:
			return "REGION_GAP_TUMBLEWEED";
	
		case 122:
			return "REGION_GAP_RATHSKELLER_FORK";
	
		case 123:
			return "REGION_RIO_BENEDICT_POINT";
	
		case 124:
			return "REGION_RIO_FORT_MERCER";
	
		case 125:
			return "REGION_RIO_PLAIN_VIEW";
	
		case 126:
			return "REGION_RIO_TRAVELLING_SALESMAN";
	
		case 127:
			return "REGION_CHO_ARMADILLO";
	
		case 128:
			return "REGION_CHO_COOTS_CHAPEL";
	
		case 129:
			return "REGION_CHO_DON_JULIO_HOUSE";
	
		case 130:
			return "REGION_CHO_RILEYS_CHARGE";
	
		case 131:
			return "REGION_CHO_RIDGEWOOD_FARM";
	
		case 132:
			return "REGION_CHO_TWIN_ROCKS";
	
		case 133:
			return "REGION_CHO_TRAVELLING_SALESMAN";
	
		case 134:
			return "REGION_CHO_TRAPPER";
	
		case 135:
			return "REGION_HEN_MACFARLANES_RANCH";
	
		case 136:
			return "REGION_HEN_THIEVES_LANDING";
	
		case 137:
			return "REGION_HEN_TRAVELLING_SALESMAN";
	
		case 138:
			return "REGION_HEN_HARRIET";
	
		case 139:
			return "REGION_CENTRALUNIONRR";
	
		default:
		
	}

	return "REGION_INVALID";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(int iParam0) // Position - 0x37F4 Signature - 22 01 03 00 00 66 00 3C 11 00 00 00 00 00 63 00 01 00 00 00 64
{
	switch (iParam0)
	{
		case 0:
			return "DISTRICT_BAYOU_NWA";
	
		case 1:
			return "DISTRICT_BIG_VALLEY";
	
		case 2:
			return "DISTRICT_BLUEGILL_MARSH";
	
		case 3:
			return "DISTRICT_CUMBERLAND_FOREST";
	
		case 4:
			return "DISTRICT_GREAT_PLAINS";
	
		case 5:
			return "DISTRICT_GRIZZLIES";
	
		case 6:
			return "DISTRICT_GRIZZLIES_EAST";
	
		case 7:
			return "DISTRICT_GRIZZLIES_WEST";
	
		case 8:
			return "DISTRICT_GUAMA";
	
		case 9:
			return "DISTRICT_HEARTLAND";
	
		case 10:
			return "DISTRICT_ROANOKE_RIDGE";
	
		case 11:
			return "DISTRICT_SCARLETT_MEADOWS";
	
		case 12:
			return "DISTRICT_TALL_TREES";
	
		case 13:
			return "DISTRICT_GAPTOOTH_RIDGE";
	
		case 14:
			return "DISTRICT_RIO_BRAVO";
	
		case 15:
			return "DISTRICT_CHOLLA_SPRINGS";
	
		case 16:
			return "DISTRICT_HENNIGANS_STEAD";
	
		default:
		
	}

	return "";
}

char* func_98(int iParam0) // Position - 0x38E3 Signature - 22 01 03 00 00 66 00 3C 06 00 00 00 00 00 21
{
	switch (iParam0)
	{
		case 0:
			return "AMBARINO";
	
		case 1:
			return "LEMOYNE" /*Lemoyne St*/;
	
		case 2:
			return "NEWAUSTIN";
	
		case 3:
			return "NEWHANOVER";
	
		case 4:
			return "WESTELIZABETH";
	
		case 5:
			return "GUARMA";
	
		default:
		
	}

	return "";
}

void func_99() // Position - 0x3943 Signature - 22 00 02 00 00 09 03 04
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(1);
	return;
}

void func_100() // Position - 0x3950 Signature - 22 00 02 00 00 42 03 04
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(4);
	return;
}

void func_101() // Position - 0x395D Signature - 22 00 02 00 00 11 03
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(2);
	return;
}

void func_102(Any anParam0, char* sParam1, int iParam2) // Position - 0x396A Signature - 22 03 1E
{
	int i;
	var unk;
	var unk9;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "herbs", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 55, &unk);

	for (i = 0; i < 54; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".eHerbTypeFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_103(int iParam0, char* sParam1) // Position - 0x39C9 Signature - 22 02 04 00 00 66 00 25
{
	SAVE::_0x8E8FFB9E4AD051D2(iParam0, 2530, "persona", 11);
	SAVE::_SAVEGAME_GET_INT_3(iParam0, "psna_eLastValidRegion");
	func_217(&(iParam0->f_1), "psna_vLastValidPosition");
	func_218(&(iParam0->f_4));
	func_219(&(iParam0->f_14));
	func_220(&(iParam0->f_61));
	func_221(&(iParam0->f_664));
	func_222(&(iParam0->f_2456));
	func_223(&(iParam0->f_2459));
	func_224(&(iParam0->f_2501));
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_104(Any anParam0, char* sParam1, BOOL bParam2) // Position - 0x3A36 Signature - 22 03 16 00 00 2F
{
	int i;
	var unk;
	var variableName;

	false & !bParam2;
	TEXT_LABEL_ASSIGN_STRING(&unk, "eTutorialsRun", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 33, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_105(Any anParam0, char* sParam1) // Position - 0x3A90 Signature - 22 02 15 00 00 25 9D
{
	int i;
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "iTutorialBuffer", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 23, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_106(float fParam0, char* sParam1) // Position - 0x3ADE Signature - 22 02 04 00 00 66 00 1D
{
	SAVE::_0x443174C20B8B9E7F(fParam0, 3, "psna_sNotoriety");
	SAVE::_SAVEGAME_GET_FLOAT(fParam0, "psna_sNotoriety_fNotoriety");
	SAVE::_SAVEGAME_GET_INT_2(&(fParam0->f_1), "psna_sNotoriety_iPosixTimeStampOfLastReason");
	SAVE::_SAVEGAME_GET_INT_3(&(fParam0->f_2), "psna_sNotoriety_ePassive");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_107(Any anParam0, char* sParam1) // Position - 0x3B17 Signature - 22 02 04 00 00 66 00 09
{
	SAVE::_0x443174C20B8B9E7F(anParam0, 1, "psna_sNotoriety_TU004");
	SAVE::_SAVEGAME_GET_INT_2(anParam0, "iPosixTimeStampOfLastInfraction");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_108(Any anParam0, char* sParam1) // Position - 0x3B38 Signature - 22 02 0D 00 00 25
{
	int i;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&variableName, "clothingTU004", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 89, &variableName);
	TEXT_LABEL_APPEND_STRING(&variableName, "_OutfitArray", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 89, &variableName);

	for (i = 0; i < 11; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&variableName, "clothingTU004", 64);
		TEXT_LABEL_APPEND_STRING(&variableName, "_OutfitArray", 64);
		TEXT_LABEL_APPEND_STRING(&variableName, "_Element_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*8*/], 8, &variableName);
		TEXT_LABEL_APPEND_STRING(&variableName, "_Name", 64);
		SAVE::_SAVEGAME_GET_TEXT_LABEL_63(&anParam0->[i /*8*/], &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_109(Any anParam0, char* sParam1) // Position - 0x3BC3 Signature - 22 02 1D 00 00 66 00 6D 31
{
	var unk;
	var unk9;
	var variableName;
	int i;

	SAVE::_0x443174C20B8B9E7F(anParam0, 49, sParam1);
	TEXT_LABEL_ASSIGN_STRING(&unk, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ".sGiftData", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 46, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*3*/], 3, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".bNotificationPushed", 64);
		SAVE::_SAVEGAME_GET_BOOL(&anParam0->[i /*3*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iGiftItemHash", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*3*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iItemMailCount", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*3*/].f_2), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ".sOfferData", 64);
	SAVE::_0x443174C20B8B9E7F(&(anParam0->f_46), 3, &unk);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, ".bNotificationPushed", 64);
	SAVE::_SAVEGAME_GET_BOOL(&(anParam0->f_46), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, ".iGiftItemHash", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_46.f_1), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, ".iItemMailCount", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_46.f_2), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_110(Any anParam0, char* sParam1) // Position - 0x3CFD Signature - 22 02 15 00 00 25 C9
{
	int i;
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, ".todLastVisited", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 181, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_111(Any anParam0, char* sParam1) // Position - 0x3D4B Signature - 22 02 15 00 00 25 D9
{
	int i;
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "MpFlow", 128);
	SAVE::_0x443174C20B8B9E7F(anParam0, 28, &unk);
	TEXT_LABEL_APPEND_STRING(&unk, ".LastPositionArray", 128);
	SAVE::_0x81F4E92BE3958364(anParam0, 28, &unk);

	for (i = 0; i < 9; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "MpFlow.LastPositionArray.Strand.", 128);
		TEXT_LABEL_APPEND_INT(&unk, i, 128);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*3*/], 3, &unk);
		TEXT_LABEL_APPEND_STRING(&unk, ".vPos", 128);
		func_217(&anParam0->[i /*3*/], &unk);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_112(int iParam0, char* sParam1) // Position - 0x3DC5 Signature - 22 02 0D 00 00 66 01
{
	int i;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	SAVE::_0x443174C20B8B9E7F(iParam0, 23, "psna_blipsdatStruct");
	SAVE::_SAVEGAME_GET_INT_3(iParam0, "psna_sBlipsdatState");
	SAVE::_0x81F4E92BE3958364(&(iParam0->f_1), 16, &variableName);

	for (i = 0; i < iParam0->f_1; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
		TEXT_LABEL_APPEND_STRING(&variableName, "psna_itemDat", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&iParam0->f_1[i /*5*/], 16, &variableName);
		TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
		TEXT_LABEL_APPEND_STRING(&variableName, "ItemPickedUp", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_BOOL(&iParam0->f_1[i /*5*/], &variableName);
		TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
		TEXT_LABEL_APPEND_STRING(&variableName, "SearchVector", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		func_217(&(iParam0->f_1[i /*5*/].f_1), &variableName);
		TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
		TEXT_LABEL_APPEND_STRING(&variableName, "Item", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_1[i /*5*/].f_4), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_17), "psna_sBlipsdatCurrentMap");
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_18), "psna_sBlipsdatPrevMap");
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_19), "psna_sBlipsdatStartingScenarioGroup");
	SAVE::_SAVEGAME_GET_BOOL(&(iParam0->f_20), "psna_sBlipsdatStateChanged");
	SAVE::_SAVEGAME_GET_BOOL(&(iParam0->f_21), "psna_sBlipsdatActiveMapBlips");
	SAVE::_SAVEGAME_GET_BOOL(&(iParam0->f_22), "psna_sBlipsDataHasMapBeenClosed");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_113(Any anParam0, char* sParam1) // Position - 0x3EEC Signature - 22 02 1D 00 00 66 00 6D 59
{
	int i;
	var unk;
	var unk9;
	var variableName;

	SAVE::_0x443174C20B8B9E7F(anParam0, 89, sParam1);
	TEXT_LABEL_ASSIGN_STRING(&unk, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ".Record", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 85, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*3*/], 3, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iDate", 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->[i /*3*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iGamblingSecs", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*3*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iGameSecs", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*3*/].f_2), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iQueueFront", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_85), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iQueueBack", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_86), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iQueueSize", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_87), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iLockdownDate", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_88), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_114(BOOL bParam0, char* sParam1) // Position - 0x4013 Signature - 22 02 0C 00 00 66 00
{
	var variableName;

	SAVE::_0x443174C20B8B9E7F(bParam0, 2, sParam1);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".bCollectorBlipDiscovered", 64);
	SAVE::_SAVEGAME_GET_BOOL(bParam0, &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".eCollectorCheckBlipShop", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(bParam0->f_1), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_115(Any anParam0) // Position - 0x4056 Signature - 22 01 03 00 00 66 00 6D 0A 25 A9
{
	SAVE::_0x443174C20B8B9E7F(anParam0, 10, "psna_collGroup");
	SAVE::_SAVEGAME_GET_INT_3(anParam0, "psna_collGroupArrowhead");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_1), "psna_collGroupBottles");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_2), "psna_collGroupRandom");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_3), "psna_collGroupCoin");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_4), "psna_collGroupHeirloom");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_5), "psna_collGroupJewelry");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_6), "psna_collGroupEgg");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_7), "psna_collGroupFlower");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_8), "psna_collGroupCard");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_9), "psna_collGroupFossil");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_116(Any anParam0, char* sParam1) // Position - 0x40E4 Signature - 22 02 0D 00 00 66 00 11
{
	var variableName;
	int i;

	SAVE::_0x443174C20B8B9E7F(anParam0, 2, sParam1);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".FlagSet", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 2, &variableName);

	for (i = 0; i < 1; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
		TEXT_LABEL_APPEND_STRING(&variableName, ".FlagSet", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_117() // Position - 0x4146 Signature - 22 00 03 00 00 2F 67 02 66 02 6D 10
{
	int i;

	for (i = 0; i < 16; i = i + 1)
	{
		if (func_44(i))
			SCRIPTS::REQUEST_SCRIPT(func_119(i));
	}

	return;
}

BOOL func_118(int iParam0, BOOL bParam1) // Position - 0x4174 Signature - 22 02 05 00 00 66 00 2F
{
	BOOL flag;

	flag = iParam0 >= 0 && iParam0 < 16;
	bParam1 && !flag;
	return flag;
}

char* func_119(int iParam0) // Position - 0x419B Signature - 22 01 04 00 00 66 00 3C
{
	char* str;

	switch (iParam0)
	{
		case 0:
			return "";
	
		case 1:
			return "init_global_block_ugc";
	
		case 2:
			return "init_global_block_mc";
	
		case 3:
			return "init_global_block_profiler";
	
		case 4:
			return "init_global_block_mp";
	
		case 5:
			return "init_global_block_sp";
	
		case 6:
			return "init_global_block_transition";
	
		case 7:
			return "init_global_block_shared";
	
		case 8:
			return "init_global_block_mc_race";
	
		case 9:
			return "init_global_block_mc_deathmatch";
	
		case 10:
			return "init_global_block_softsave";
	
		case 11:
			return "init_global_block_creator";
	
		case 12:
			return "init_global_block_ugc_common";
	
		case 13:
			return "init_global_block_ugc_transition";
	
		case 14:
			return "init_global_block_ugc_cutscene";
	
		case 15:
			return "init_global_block_mc_subsys";
	}

	return str;
}

void func_120(var uParam0, int iParam1, int iParam2) // Position - 0x42AB Signature - 22 03 05 00 00 66 01 66
{
	*uParam0 = iParam1;
	return;
}

Vector3 func_121() // Position - 0x42B8 Signature - 22 00 05 00 00 25 21
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "eDuelResult", 24);
	return unk;
}

char* func_122() // Position - 0x42CC Signature - 22 00 02 00 00 25 2D
{
	return "brain_id";
}

char* func_123() // Position - 0x42D8 Signature - 22 00 02 00 00 25 36
{
	return "brain_player";
}

char* func_124() // Position - 0x42E4 Signature - 22 00 02 00 00 25 43
{
	return "brain_type";
}

char* func_125() // Position - 0x42F0 Signature - 22 00 02 00 00 25 4E
{
	return "brain_isHidden";
}

char* func_126() // Position - 0x42FC Signature - 22 00 02 00 00 25 5D
{
	return "brain_isDisabled";
}

char* func_127() // Position - 0x4308 Signature - 22 00 02 00 00 25 6E
{
	return "brain_timeStamp";
}

char* func_128() // Position - 0x4314 Signature - 22 00 02 00 00 25 7E
{
	return "brain_value";
}

char* func_129() // Position - 0x4320 Signature - 22 00 02 00 00 25 8A
{
	return "bHasScriptBrain";
}

char* func_130() // Position - 0x432C Signature - 22 00 02 00 00 25 9A
{
	return "MP_HUD_Local_Status_Icon";
}

char* func_131() // Position - 0x4338 Signature - 22 00 02 00 00 25 B3
{
	return "MP_HUD_Local_Secondary_Icon";
}

char* func_132() // Position - 0x4344 Signature - 22 00 02 00 00 25 CF
{
	return "MP_HUD_Local_Blip_Sprite";
}

char* func_133() // Position - 0x4350 Signature - 22 00 02 00 00 25 E8
{
	return "MP_HUD_Hide_My_Blip_FOR_TEAMS";
}

char* func_134() // Position - 0x435C Signature - 22 00 02 00 00 25 06
{
	return "MP_HUD_Force_My_Blip_Persistent_For_Teams";
}

char* func_135() // Position - 0x4368 Signature - 22 00 02 00 00 25 30
{
	return "MP_HUD_Force_Can_Hear_Teams";
}

char* func_136() // Position - 0x4374 Signature - 22 00 02 00 00 25 4C
{
	return "fetch_entity_bitfield";
}

char* func_137() // Position - 0x4380 Signature - 22 00 02 00 00 25 62
{
	return "fetch_combat_config";
}

char* func_138() // Position - 0x438C Signature - 22 00 02 00 00 25 76
{
	return "fetch_lockon_end_time";
}

char* func_139() // Position - 0x4398 Signature - 22 00 02 00 00 25 8C
{
	return "chu_vip_ped";
}

char* func_140() // Position - 0x43A4 Signature - 22 00 02 00 00 25 98
{
	return "NetStableMount";
}

char* func_141() // Position - 0x43B0 Signature - 22 00 02 00 00 25 A7
{
	return "NetStableGUID1";
}

char* func_142() // Position - 0x43BC Signature - 22 00 02 00 00 25 B6
{
	return "NetStableGUID2";
}

char* func_143() // Position - 0x43C8 Signature - 22 00 02 00 00 25 C5
{
	return "NetStableGUID3";
}

char* func_144() // Position - 0x43D4 Signature - 22 00 02 00 00 25 D4
{
	return "NetStableGUID4";
}

char* func_145() // Position - 0x43E0 Signature - 22 00 02 00 00 25 E3
{
	return "NSS_PLAYER_FLAG";
}

char* func_146() // Position - 0x43EC Signature - 22 00 02 00 00 25 F3
{
	return "NSS_PLAYER_BOUNTY_CUSTODIAN";
}

void func_147() // Position - 0x43F8 Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 50 00 00 22 00 02 00 00 25
{
	return;
}

void func_148() // Position - 0x4400 Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 25
{
	return;
}

void func_149() // Position - 0x4408 Signature - 22 00 02 00 00 25 0F
{
	BRAIN::REGISTER_OBJECT_SCRIPT_BRAIN("net_fast_travel_barker", joaat("s_fasttravelmarker01x"), 100, 20f, -1, 4);
	return;
}

BOOL func_150(Any anParam0) // Position - 0x4426 Signature - 22 01 8A
{
	BOOL flag;
	var unk;
	BOOL flag2;
	int i;
	var unk4;
	BOOL flag3;
	var unk12;
	var unk13;
	var unk21;
	int randomIntInRange;
	var unk122;
	int num;
	var unk123;

	TEXT_LABEL_ASSIGN_STRING(&unk, "loading_tips", 24);
	flag = DATAFILE::PARSEDDATA_IS_FILE_VALID(*anParam0);

	if (!flag)
		*anParam0 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(MISC::GET_HASH_KEY(&unk));

	flag2 = DATAFILE::PARSEDDATA_IS_FILE_LOADED(*anParam0);

	if (!flag2)
		return false;

	func_225(anParam0);
	anParam0->f_79 = func_226(anParam0, 1);

	if (anParam0->f_79 <= 0)
		return false;

	unk12 = anParam0->f_1;
	unk21 = 100;

	for (i = 0; i < anParam0->f_79; i = i + 1)
	{
		unk21[i] = i;
	}

	for (i = 0; i <= anParam0->f_79 - 1; i = i + 1)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(i, anParam0->f_79 - 1);
		unk122 = unk21[i];
		unk21[i] = unk21[randomIntInRange];
		unk21[randomIntInRange] = unk122;
	}

	num = 0;

	while (num < 10)
	{
		anParam0->f_1 = unk12;
		anParam0->f_3 = unk21[num];
	
		if (func_227(anParam0, 0))
		{
			if (func_228(anParam0, 2, &unk4))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk4))
				{
					TEXT_LABEL_COPY(&unk123, { unk4 }, 4);
				
					if (func_229(anParam0, 4, &flag3))
						if (flag3)
							func_230(&unk123, 1);
				
					if (func_229(anParam0, 5, &flag3))
						if (flag3)
							func_230(&unk123, 2);
				
					func_231(anParam0, 3, &(unk123.f_5));
				
					if (func_228(anParam0, 6, &unk13))
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk13))
							unk123.f_6 = MISC::GET_HASH_KEY(&unk13);
				}
			}
		
			if (unk123.f_6 == 0 || MISSIONDATA::MISSIONDATA_GET_RATING(unk123.f_6) >= 2)
			{
				anParam0->f_5[num /*7*/] = { unk123 };
				num = num + 1;
			}
		}
	}

	DATAFILE::_PARSEDDATA_UNLOAD_FILE(*anParam0);
	return true;
}

void func_151(Any anParam0, int iParam1) // Position - 0x45C5 Signature - 22 02 04 00 00 66 01 66 00 6C 50
{
	anParam0->f_80 = iParam1;
	return;
}

void func_152(Any anParam0, int iParam1) // Position - 0x45D3 Signature - 22 02 04 00 00 66 01 66 00 6C 4C
{
	anParam0->f_76 = iParam1;
	return;
}

int func_153() // Position - 0x45E1 Signature - 22 00 02 00 00 42 03 05
{
	if (!SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
		return 1;

	if (!SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(7))
		return 1;

	if (!SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(0))
		return 1;

	if (MISC::IS_BIT_SET(Global_1958634.f_1, 4))
		return 0;

	if (MISC::IS_BIT_SET(Global_1958634.f_1, 5))
		return 1;

	if (func_232(255))
		return 1;

	if (func_233(false))
		return 1;

	if (Global_13)
		return 1;

	if (CAM::HAS_LETTER_BOX())
		if (CAM::_0x975F6EBB62632FE3() || CAM::_0x1811A02277A9E49D())
			return 1;

	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT())
			return 1;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		return 1;

	if (GRAPHICS::GET_TV_CHANNEL() != -1)
		if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT())
			return 1;

	if (CAM::_0x975F6EBB62632FE3() || CAM::_0x1811A02277A9E49D())
		if (HUD::IS_RADAR_HIDDEN())
			if (!CAM::_0x1204EB53A5FBC63D())
				return 1;

	if (func_234(255))
		return 1;

	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADING_OUT())
		return 1;

	return 0;
}

int func_154() // Position - 0x46FE Signature - 22 00 02 00 00 5D EA
{
	if (MISC::IS_BIT_SET(Global_1958634.f_1, 4))
		return 0;

	if (MISC::IS_BIT_SET(Global_1958634.f_1, 6))
		return 1;

	if (func_11() == -2)
		return 1;

	if (func_235(Global_1940199, 8192))
		return 1;

	if (func_235(Global_1940199, 4096))
		return 1;

	if (!CAM::IS_SCREEN_FADED_IN())
		return 1;

	if (STREAMING::_0x99F92061EFE908BA() || func_235(Global_1940199, 32768))
		return 1;

	if (Global_13 || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_GameIntro"))
		return 1;

	if (func_236())
		if (HUD::IS_RADAR_HIDDEN())
			return 1;

	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
		if (!CAM::_0x1204EB53A5FBC63D() && !CAM::IS_CINEMATIC_CAM_RENDERING() && !func_236())
			return 1;

	if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT())
		return 1;

	if (func_11() == 0)
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
			if (func_237(255) > 2 && !func_238(Global_1295666.f_5, 8192))
				return 1;
			else if (func_239(16))
				return 1;

	return 0;
}

void func_155(var uParam0, BOOL bParam1) // Position - 0x4825 Signature - 22 02 04 00 00 66 01 6A 05 8B 08 00 66 00 39 45
{
	if (bParam1 || !func_156(uParam0))
		func_240(uParam0);

	return;
}

BOOL func_156(var uParam0) // Position - 0x4845 Signature - 22 01 03 00 00 66 00 76 09 39 FB 7B 00 50 01 01 22 01 03 00 00 66 00 39
{
	return func_241(*uParam0, 1);
}

float func_157(var uParam0) // Position - 0x4855 Signature - 22 01 03 00 00 66 00 39 45
{
	if (!func_156(uParam0))
		return uParam0->f_1;

	if (func_242(uParam0))
		return uParam0->f_2;

	return func_243() - uParam0->f_1;
}

void func_158(Hash hParam0) // Position - 0x488A Signature - 22 01 03 00 00 66 00 5D EA
{
	if (hParam0 != Global_1958634.f_3)
	{
		COMPAPP::_0x74BCCEB233AD95B2(joaat("MapState"), hParam0);
		Global_1958634.f_3 = hParam0;
	}

	return;
}

void func_159(eEventType eetParam0, int iParam1) // Position - 0x48B0 Signature - 22 02 04 00 00 66 00 3C 08
{
	switch (eetParam0)
	{
		case -2095977185:
			func_247(iParam1);
			break;
	
		case -725272239:
			func_244(iParam1);
			break;
	
		case 516249386:
			func_250(iParam1);
			break;
	
		case 543140406:
			func_246(iParam1);
			break;
	
		case 809652668:
			func_248(iParam1);
			break;
	
		case 904577075:
			func_251(iParam1);
			break;
	
		case 1121131740:
			func_245(iParam1);
			break;
	
		case 1860341470:
			func_249();
			break;
	}

	return;
}

void func_160() // Position - 0x4936 Signature - 22 00 02 00 00 5D 17 00 18 80 C4 27 2C
{
	if (Global_1572887.f_196.f_44 != false && func_252())
	{
		func_253(1);
		return;
	}

	if (Global_1572887.f_196.f_56 > 2 && func_252())
	{
		func_253(1);
		return;
	}

	if (Global_1572887.f_196.f_46 != -1 && func_252())
	{
		func_253(1);
		return;
	}

	if (Global_1572887.f_196.f_58 != false && func_252())
	{
		func_253(1);
		return;
	}

	if (func_254(Global_1572887.f_196.f_58, 4194304) || func_254(Global_1572887.f_196.f_58, 16777216))
		func_255(16384);

	Global_1572887.f_196.f_58 = 0;
	return;
}

void func_161() // Position - 0x49F0 Signature - 22 00 25 00
{
	char* str;
	int num;
	var string2;
	var string1;
	BOOL flag;
	int ec;

	Global_1572887.f_196.f_61 = MISC::GET_GAME_TIMER();
	str = "";
	str.f_1 = "";
	str.f_2 = 0;
	func_256();

	if (func_257(256) || func_257(512))
	{
		str.f_3 = MISC::GET_HASH_KEY("IB_ACCEPT");
		str.f_3.f_1 = 0;
		str.f_3.f_2 = 0;
		str.f_3.f_3 = 0;
		str.f_7 = MISC::GET_HASH_KEY("IB_EXIT" /*Exit*/);
		str.f_7.f_1 = 0;
		str.f_7.f_2 = 0;
		str.f_7.f_3 = 0;
	}
	else if (func_257(536870912))
	{
		str.f_3 = MISC::GET_HASH_KEY("IB_ACCEPT");
		str.f_3.f_1 = 0;
		str.f_3.f_2 = 0;
		str.f_3.f_3 = 0;
		str.f_7 = MISC::GET_HASH_KEY("IB_CANCEL" /*Cancel*/);
		str.f_7.f_1 = 0;
		str.f_7.f_2 = 0;
		str.f_7.f_3 = 0;
	}
	else if (func_257(131072) || func_257(262144) || func_257(524288) || func_257(1048576) || func_257(2097152) || func_257(4194304) || func_257(8388608) || func_257(16777216) || func_257(33554432) || func_257(67108864))
	{
		str.f_3 = MISC::GET_HASH_KEY("IB_OK" /*OK*/);
		str.f_3.f_1 = 0;
		str.f_3.f_2 = 0;
		str.f_3.f_3 = 0;
	}
	else
	{
		str.f_3 = MISC::GET_HASH_KEY("IB_EXIT" /*Exit*/);
		str.f_3.f_1 = 0;
		str.f_3.f_2 = 0;
		str.f_3.f_3 = 0;
		func_255(512);
	}

	func_258(&str);
	num = 0;
	num.f_2 = "SG_HDNG" /*Alert*/;
	TEXT_LABEL_ASSIGN_STRING(&string2, "JAIL_ALT_BODY", 16);
	TEXT_LABEL_ASSIGN_STRING(&string1, func_259(), 64);
	flag = MISC::ARE_STRINGS_EQUAL(&string1, &string2);
	ec = flag ? Global_1295658.f_2.f_4 : func_260();
	num.f_3 = MISC::VAR_STRING(2, &string1, ec);

	if (!flag)
		NETWORK::_NETWORK_ALERT(0, MISC::GET_HASH_KEY(&string1), ec, 0);

	num.f_1 = 2;
	Global_1572887.f_196.f_55 = UISTICKYFEED::_UI_STICKY_FEED_CREATE_WARNING_MESSAGE(&str, &num, true);
	func_253(2);
	func_262(true);
	return;
}

void func_162() // Position - 0x4C1C Signature - 22 00 0C 00 00 39
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	int eventData;
	int num;

	if (func_11() == 0)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1572887.f_18, false))
		{
			if (func_263() > 5)
			{
				if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					CAM::DO_SCREEN_FADE_OUT(0);
			
				func_253(3);
				return;
			}
		}
	}

	while (UIEVENTS::EVENTS_UI_IS_PENDING(joaat("warning_feed")))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(joaat("warning_feed"), &eventData))
		{
			switch (eventData)
			{
				case -1203660660:
					if (eventData.f_1 == Global_1572887.f_196.f_55)
					{
						if (eventData.f_2 == 2074623703)
						{
							UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("warning_feed"));
							flag = 1;
						}
					
						if (eventData.f_2 == 444632721)
						{
							UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("warning_feed"));
							flag3 = true;
						}
					
						if (eventData.f_2 == 1400745903)
						{
							UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("warning_feed"));
							flag2 = true;
						}
					}
					break;
			
				case -445432096:
					if (eventData.f_1 == Global_1572887.f_196.f_55)
					{
						Global_1572887.f_196.f_55 = 0;
						flag4 = true;
						UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("warning_feed"));
					}
					break;
			}
		}
	
		UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("warning_feed"));
	}

	num = MISC::GET_GAME_TIMER() - Global_1572887.f_196.f_61;
	flag5 = num > Global_1901671.f_2.f_20 && Global_1572887.f_196.f_61 != -1;

	if (flag5 || flag || flag2 || flag3 || flag4)
	{
		func_253(3);
	
		if (func_257(256) || func_257(512))
		{
			if (flag)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				func_264(true, false, false, false, true);
				func_255(8);
			
				if (func_257(512))
					func_255(1024);
			}
			else if (flag2 || flag4 || flag5)
			{
				func_255(16);
				func_255(2);
			}
		}
		else if (func_257(131072) || func_257(262144) || func_257(524288) || func_257(1048576) || func_257(2097152) || func_257(4194304) || func_257(8388608) || func_257(16777216) || func_257(33554432) || func_257(67108864))
		{
			if (flag)
			{
				func_255(16);
				func_255(2);
			}
		}
		else if (func_257(536870912))
		{
			if (flag)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				func_264(true, false, false, false, true);
				func_255(8);
			}
		}
	}

	return;
}

void func_163() // Position - 0x4E9B Signature - 22 00 03 00 00 42
{
	int bailCode;

	if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
		if (func_234(255) && !(CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !func_265(255))
			CAM::DO_SCREEN_FADE_OUT(0);

	if (Global_1572887.f_196.f_55 != 0)
		UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Global_1572887.f_196.f_55);

	if (Global_1572887.f_196.f_46 != -1)
	{
		bailCode = 27200000 + Global_1572887.f_196.f_46;
		NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
		NETWORK::CLEAR_SERVICE_EVENT_ARGUMENTS();
		GRAPHICS::RESET_PAUSED_RENDERPHASES();
		SCRIPTS::BAIL_TO_LANDING_PAGE(bailCode);
	}

	AUDIO::_STOP_ALL_SCRIPTED_AUDIO_SOUNDS();
	Global_1572887.f_196.f_45 = Global_1572887.f_196.f_44;
	Global_1572887.f_196.f_57 = Global_1572887.f_196.f_56;
	Global_1572887.f_196.f_55 = 0;
	Global_1572887.f_196.f_44 = 0;
	Global_1572887.f_196.f_58 = 0;
	Global_1572887.f_196.f_56 = 0;
	Global_1572887.f_196.f_46 = -1;
	Global_1572887.f_196.f_61 = -1;
	func_253(0);
	return;
}

void func_164(int iParam0) // Position - 0x4F7E Signature - 22 01 03 00 00 66 00 5D 17 00 18 80 C4 6C 34
{
	Global_1572887.f_196.f_52 = iParam0;
	return;
}

void func_165() // Position - 0x4F90 Signature - 22 00 07 00 00 4B
{
	var unk;

	unk = 2;
	unk[0 /*2*/] = { Global_1572887.f_196.f_7 };
	unk[1 /*2*/] = { Global_1572887.f_196.f_7.f_2 };
	Global_1572887.f_196.f_53 = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&unk, 2);
	return;
}

int func_166() // Position - 0x4FD0 Signature - 22 00 18
{
	var unk;
	int displaynamesFromHandles;
	const char* str;
	const char* str2;
	const char* str3;
	char* str4;

	unk = 2;

	if (MISC::IS_PC_VERSION() || MISC::IS_STADIA_VERSION())
	{
		displaynamesFromHandles = 0;
	
		if (!NETWORK::_NETWORK_GET_DISPLAY_NAME_FROM_HANDLE(&(Global_1572887.f_196.f_7), &unk[0 /*8*/]))
			displaynamesFromHandles = -1;
		else if (!NETWORK::_NETWORK_GET_DISPLAY_NAME_FROM_HANDLE(&(Global_1572887.f_196.f_7.f_2), &unk[1 /*8*/]))
			displaynamesFromHandles = -1;
	}
	else
	{
		displaynamesFromHandles = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(Global_1572887.f_196.f_53, &unk, 2);
	}

	if (displaynamesFromHandles == -1)
		return 2;
	else if (displaynamesFromHandles == 1)
		return 0;

	str = func_266(&unk[0 /*8*/], joaat("COLOR_PURE_WHITE"));
	str2 = func_266(&unk[1 /*8*/], joaat("COLOR_PURE_WHITE"));
	str3 = str2;
	str4 = "";

	if (Global_1572887.f_196.f_2 == 0 || Global_1572887.f_196.f_2 == 1)
		if (func_254(Global_1572887.f_196.f_13.f_11, 2))
			str4 = MISC::VAR_STRING(10, "NT_INV_JOIN_EXTENDED", str);
		else
			str4 = MISC::VAR_STRING(10, "NT_INV_EXTENDED", str);
	else if (Global_1572887.f_196.f_2 == 2 || Global_1572887.f_196.f_2 == 3)
		if (func_254(Global_1572887.f_196.f_3.f_3, 2))
			str4 = MISC::VAR_STRING(10, "NT_INV_JOIN_EXTENDED", str);
		else
			str4 = MISC::VAR_STRING(10, "NT_INV_EXTENDED", str);
	else if (Global_1572887.f_196.f_2 == 4)
		if (func_254(Global_1572887.f_196.f_7.f_5, 2))
			str4 = MISC::VAR_STRING(10, "NT_INV_JOIN_EXTENDED", str);
		else
			str4 = MISC::VAR_STRING(10, "NT_INV_EXTENDED", str);
	else
		str4 = MISC::VAR_STRING(10, "NT_INV_EXTENDED", str);

	func_267(str3, str4, joaat("blips"), joaat("blip_mp_playlist_teamgame"), 8000, 0, 0, 1, 0, true, true);
	return 1;
}

void func_167() // Position - 0x5186 Signature - 22 00 02 00 00 03 00 00 F3
{
	NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
	func_262(true);
	func_72(false);
	func_74();

	if (Global_1572887.f_196.f_55 != 0)
		UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Global_1572887.f_196.f_55);

	Global_1572887.f_196.f_54 = 0;
	Global_1572887.f_196.f_56 = 0;
	Global_1572887.f_196.f_57 = 0;
	Global_1572887.f_196.f_58 = 0;
	Global_1572887.f_196.f_59 = 0;
	Global_1572887.f_196.f_60 = 0;
	Global_1572887.f_196.f_61 = -1;
	return;
}

void func_168() // Position - 0x51F7 Signature - 22 00 03 00 00 39 2D
{
	BOOL flag;

	func_200();
	func_202(2);

	if (func_268(Global_1572887.f_196.f_13, 131072) || func_269(64) || func_269(128) || Global_1572887.f_196.f_2 == 5)
	{
		func_255(8);
		return;
	}

	if (func_270())
	{
		func_271(536870912);
		return;
	}

	if (Global_1295666.f_9 && GANG::NETWORK_GET_GANG_LEADER(Global_1295666.f_10) != Global_1295666.f_5 && Global_1572887.f_196.f_2 != 4)
	{
		func_271(512);
		return;
	}

	if (func_272() || func_273() && Global_1572887.f_196.f_2 != 4)
	{
		func_271(256);
		return;
	}

	if (func_274() == 2)
		flag = true;

	if (!func_275(flag))
		return;

	Global_1572887.f_196.f_56 = 0;
	Global_1572887.f_196.f_57 = 0;
	func_255(8);
	return;
}

void func_169() // Position - 0x52F4 Signature - 22 00 02 00 00 09 39
{
	if (func_276(true))
		func_202(23);

	if (func_269(16))
	{
		func_202(23);
		return;
	}

	if (!func_269(8))
		return;

	if (!func_277())
		return;

	if (func_269(1024))
		func_278(true);

	func_279();

	if (func_11() == -1)
	{
		func_202(8);
		return;
	}

	func_280();
	func_202(3);
	return;
}

void func_170() // Position - 0x5361 Signature - 22 00 02 00 00 5D 17 00 18 80 C4 27 36 2F 72 12 00 42 39 01 8A 00 39 99 98 00 6D 17 39 53 66 00 50 00 00 03
{
	if (Global_1572887.f_196.f_54 != 0)
	{
		func_255(4);
		func_281();
		func_202(23);
		return;
	}

	if (CAM::IS_SCREEN_FADED_IN() && !func_282())
	{
		if (func_269(8192) && func_283())
		{
			func_284(8192);
			func_285(true, true, 0, 0, 0, 0, 0, false, 1);
		}
		else
		{
			func_285(true, true, 0, 0, 0, 0, 1, true, 0);
		}
	
		func_286(false, 0);
		func_202(4);
		return;
	}

	if (func_287())
	{
		func_288(18);
	}
	else
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
		func_289(0, 5);
	}

	func_202(5);
	return;
}

void func_171() // Position - 0x5402 Signature - 22 00 02 00 00 5D 17 00 18 80 C4 27 36 2F 72 12 00 42 39 01 8A 00 39 99 98 00 6D 17 39 53 66 00 50 00 00 39
{
	if (Global_1572887.f_196.f_54 != 0)
	{
		func_255(4);
		func_281();
		func_202(23);
		return;
	}

	if (!func_290() && !func_291())
		return;

	func_202(5);
	return;
}

void func_172() // Position - 0x5442 Signature - 22 00 02 00 00 5D 17 00 18 80 C4 27 36 2F 72 12 00 42 39 01 8A 00 39 99 98 00 6D 17 39 53 66 00 50 00 00 09
{
	if (Global_1572887.f_196.f_54 != 0)
	{
		func_255(4);
		func_281();
		func_202(23);
		return;
	}

	func_292(true);

	if (func_233(false))
		func_294(func_293(), false);

	func_295();
	func_202(6);
	return;
}

void func_173() // Position - 0x5487 Signature - 22 00 1E
{
	var unk;
	var unk18;

	if (Global_1572887.f_196.f_54 != 0)
	{
		func_255(4);
		func_202(23);
		return;
	}

	if (Global_1572887 != 39)
		return;

	unk18.f_1 = -1;
	unk18.f_2 = -1;
	unk18.f_3 = -1;
	unk18.f_3.f_1 = -1;

	if (!func_269(128))
	{
		switch (Global_1572887.f_196.f_2)
		{
			case 0:
				unk = { func_296() };
				NETWORK::_0xC0CFFDA87C2C163D(NETWORK::_0x27B1AE4D8C652F08(unk.f_10), &unk18, 11);
				func_297(&unk18);
				Global_1572887.f_196.f_1 = NETWORK::_0x6C27442A225A241A(NETWORK::_0x27B1AE4D8C652F08(unk.f_10));
			
				if (!NETWORK::NETWORK_ACCEPT_RS_INVITE(NETWORK::_0x27B1AE4D8C652F08(unk.f_10)))
				{
					Global_1572887.f_196.f_1 = -1;
					func_202(23);
					return;
				}
				break;
		
			case 1:
				Global_1572887.f_196.f_1 = NETWORK::NETWORK_REQUEST_JOIN(&(Global_1572887.f_196.f_13));
			
				if (Global_1572887.f_196.f_1 == -1)
				{
					func_202(23);
					return;
				}
				break;
		
			case 2:
			case 3:
				Global_1572887.f_196.f_1 = NETWORK::_NETWORK_GET_PLATFORM_INVITE_ID();
			
				if (!NETWORK::NETWORK_ACTION_PLATFORM_INVITE())
				{
					Global_1572887.f_196.f_1 = -1;
					func_202(23);
					return;
				}
				break;
		}
	}
	else
	{
		func_75(0);
	}

	if (NETWORK::NETWORK_SESSION_GET_SESSION_TYPE() != 1)
		func_255(2048);

	func_298();

	if (func_299())
	{
		func_300(1);
		func_255(32768);
	}

	func_200();
	func_202(7);
	return;
}

void func_174() // Position - 0x55E9 Signature - 22 00 02 00 00 39 A3 9C 00 05 8B 09
{
	if (!func_301())
	{
		func_202(23);
		return;
	}

	func_302();
	func_202(11);
	return;
}

void func_175() // Position - 0x560C Signature - 22 00 13
{
	var unk;

	if (!func_303())
		return;

	if (func_274() == 2 || func_274() == 3)
	{
		NETWORK::NETWORK_ACTION_PLATFORM_INVITE();
	}
	else if (func_274() == 0 || func_274() == 1)
	{
		unk = { func_296() };
		NETWORK::NETWORK_ACCEPT_RS_INVITE(NETWORK::_0x27B1AE4D8C652F08(unk.f_10));
	}

	func_202(7);
	return;
}

void func_176() // Position - 0x566C Signature - 22 00 02 00 00 39 A3 9C 00 05 8B 0E
{
	if (!func_301())
	{
		func_255(4);
		func_202(23);
		return;
	}

	func_304();

	if (func_274() == 4 && SCRIPTS::IS_THREAD_ACTIVE(*Global_265213.f_122725, false))
		func_285(true, false, 0, 1, 0, 0, 0, false, 0);

	func_73(false);
	NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(true);
	func_200();
	func_202(9);
	return;
}

void func_177() // Position - 0x56CC Signature - 22 00 03 00 00 39 6B
{
	int num;

	num = func_305();

	if (num == 1)
	{
		func_202(10);
	}
	else if (num == 2)
	{
		NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
	
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			CAM::DO_SCREEN_FADE_IN(0);
	
		if (Global_1572887.f_196.f_57 == 15 || Global_1572887.f_196.f_56 == 15)
			func_271(1073741824);
	
		func_306(256);
		func_255(4);
		func_202(23);
	}

	return;
}

void func_178() // Position - 0x5744 Signature - 22 00 02 00 00 39 2D 66 00 2F
{
	func_200();
	func_307(0, false, 0, true);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);

	if (!CAM::IS_SCREEN_FADED_IN())
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) || !func_308(255))
		{
			func_309(true);
			func_255(4096);
		}
	}

	if (func_310(9))
		func_309(true);

	func_304();
	func_202(13);
	func_311(1, 0, false);
	return;
}

void func_179() // Position - 0x57B7 Signature - 22 00 02 00 00 03 00 01
{
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);

	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);

	func_200();
	func_202(17);
	return;
}

void func_180() // Position - 0x57E6 Signature - 22 00 03 00 00 5D 32 C5 13 27 03
{
	Entity firstEntityPedIsCarrying;

	if (!PED::IS_PED_CARRYING_SOMETHING(Global_1295666.f_3) && !func_312(Global_1295666.f_3, -208384378))
	{
		func_202(14);
	}
	else if (PED::IS_PED_CARRYING_SOMETHING(Global_33) && !func_312(Global_33, -208384378))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_1295666.f_3);
	
		if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying))
		{
			TASK::CLEAR_PED_TASKS(Global_1295666.f_3, true, false);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_1295666.f_3, firstEntityPedIsCarrying, Global_1295666.f_12, 1073741824, 9);
		}
	}

	return;
}

void func_181() // Position - 0x5872 Signature - 22 00 02 00 00 39 2D 66 00 39
{
	func_200();
	func_313();
	func_202(15);
	return;
}

void func_182() // Position - 0x5888 Signature - 22 00 02 00 00 2F 03 04 01 77 03 00 01 27 2F 2F 2F 08 08 03 14 00 DC 39 F1
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);

	if (func_314())
	{
		func_200();
		func_315();
		func_202(16);
	}
	else if (func_276(false))
	{
		func_271(2048);
		func_202(23);
	}

	return;
}

void func_183() // Position - 0x58CF Signature - 22 00 03 00 00 2F 03 04 01
{
	int scriptTaskStatus;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);

	if (func_276(false))
	{
		func_271(4096);
		NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
	
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			CAM::DO_SCREEN_FADE_IN(0);
	
		func_255(4);
		func_202(23);
	}

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(Global_1295666.f_3, SCRIPT_TASK_DISMOUNT_ANIMAL, true);

	if (scriptTaskStatus == 0 || scriptTaskStatus == 1)
		return;

	if (PED::IS_PED_ON_MOUNT(Global_1295666.f_3))
	{
		func_295();
		return;
	}

	func_316(13, false, false, true);
	func_317();
	func_318();
	func_202(18);
	return;
}

void func_184() // Position - 0x5970 Signature - 22 00 1F
{
	var unk;
	var unk18;
	var unk22;
	var gamerHandle;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	func_315();

	if (func_276(false))
	{
		func_271(8192);
		func_319();
		return;
	}

	unk = { func_296() };
	unk18 = { func_320() };
	unk22 = { func_321() };

	switch (func_274())
	{
		case 0:
			gamerHandle = { unk };
			break;
	
		case 1:
			gamerHandle = { unk };
			break;
	
		case 2:
			gamerHandle = { unk18 };
			break;
	
		case 3:
			gamerHandle = { unk18 };
			break;
	
		case 4:
			gamerHandle = { unk22 };
			break;
	
		case 5:
			gamerHandle = { unk };
			break;
	}

	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&gamerHandle))
		return;

	func_200();
	func_202(19);
	return;
}

void func_185() // Position - 0x5A44 Signature - 22 00 20
{
	var unk;
	var unk18;
	var unk22;
	var gamerHandle;
	Player playerFromGamerHandle;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	func_315();

	if (func_276(false))
	{
		func_271(16384);
		NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
	
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			CAM::DO_SCREEN_FADE_IN(0);
	
		func_255(4);
		func_202(23);
	}

	unk = { func_296() };
	unk18 = { func_320() };
	unk22 = { func_321() };

	switch (func_274())
	{
		case 0:
			gamerHandle = { unk };
			break;
	
		case 1:
			gamerHandle = { unk };
			break;
	
		case 2:
			gamerHandle = { unk18 };
			break;
	
		case 3:
			gamerHandle = { unk18 };
			break;
	
		case 4:
			gamerHandle = { unk22 };
			break;
	
		case 5:
			gamerHandle = { unk };
			break;
	}

	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&gamerHandle))
	{
		func_271(8);
		func_322();
		func_255(2);
		NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
	
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			CAM::DO_SCREEN_FADE_IN(0);
	
		func_255(4);
		func_202(23);
	}

	playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&gamerHandle);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerFromGamerHandle))
		return;

	func_323(playerFromGamerHandle);
	NETWORK::_0x5A91BCEF74944E93(playerFromGamerHandle, 30f);

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerFromGamerHandle))
		return;

	func_200();
	func_202(20);
	return;
}

void func_186() // Position - 0x5BA7 Signature - 22 00 02 00 00 2F 03 04 01 77 03 00 01 27 2F 2F 2F 08 08 03 14 00 DC 39 02
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	func_315();

	if (func_324() && func_325() && func_237(255) > 0 && func_326() > -1)
		func_202(22);

	return;
}

void func_187() // Position - 0x5BF3 Signature - 22 00 06 00 00 2F
{
	Player player;
	BOOL flag;
	int num;
	Player player2;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	func_315();

	if (func_276(false))
	{
		func_271(32768);
		func_202(23);
	}

	if (CAM::IS_SCREEN_FADED_IN() && !SCRIPTS::IS_LOADING_SCREEN_VISIBLE() && !func_327() && !func_282())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		func_264(true, false, false, false, false);
	}

	player = Global_1572887.f_196.f_41;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
	{
		func_271(16);
		func_328(true);
		func_322();
		func_255(2);
		func_255(4);
		func_202(23);
	}

	if (func_237(player) == 0)
		return;

	if (func_329() != 2 && func_234(255))
		return;

	flag = func_330();
	num = func_331();

	if (num == 1)
	{
		func_332();
		UIAPPS::_CLOSE_ALL_UIAPPS();
		func_255(32);
		func_255(2);
		func_333(16384);
		func_202(23);
	
		if (func_334())
		{
			func_309(true);
			func_335(true);
			func_336(true);
		}
	
		if (flag)
			func_337(player, flag);
	
		return;
	}
	else if (num == 0)
	{
		func_309(true);
		return;
	}
	else if (num == 2 && !func_269(4))
	{
		player2 = player;
	
		switch (NETWORK::NETWORK_SESSION_GET_SESSION_TYPE())
		{
			case 3:
				if (func_338(player2) == 3)
				{
					func_271(64);
					func_255(4);
				}
				break;
		
			case 4:
				func_271(134217728);
				func_255(4);
				return;
		}
	}

	if (func_314())
	{
		func_262(true);
		return;
	}

	if (!func_254(Global_1572887.f_196.f_60, 8) || flag)
		func_337(player, flag);

	if (!func_339())
		return;

	if (func_269(256))
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), false, false, true, true);

	if (func_269(4096))
		func_309(false);

	if (func_327() || func_340(1))
		func_341(512);

	if (func_282())
	{
		func_264(true, false, false, false, true);
		Global_1072759.f_28644.f_66.f_36 = 1;
	}

	UIAPPS::_CLOSE_ALL_UIAPPS();
	func_255(2);
	func_202(23);
	return;
}

void func_188() // Position - 0x5E24 Signature - 22 00 03 00 00 03 00
{
	int num;

	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	func_315();

	if (func_269(4))
	{
		if (Global_1572887.f_196.f_54 != 0)
			return;
	
		if (func_327())
			func_341(32768);
	
		if (func_342())
		{
			if (!Global_1295666.f_9 || Global_1295666.f_11 == Global_1295666)
			{
				func_343(0, 3, 0);
				func_255(2);
				func_328(false);
				func_344(true, true);
			}
			else
			{
				func_343(0, 129, 0);
				func_255(2);
				func_328(false);
				func_344(true, true);
			}
		
			if (!func_269(2) && !func_234(255) && !(CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
				CAM::DO_SCREEN_FADE_IN(0);
		}
		else if (func_11() == 0)
		{
			num = 45;
		
			if (func_269(512) || func_269(16384))
				num = 0;
		
			if (func_329() == 0 || func_329() == 1)
				func_213(num, -1);
			else if (func_329() == 2)
				if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4) && SCRIPTS::IS_THREAD_ACTIVE(*Global_265213.f_122725, false) || Global_1572887 < 39)
					func_213(num, -1);
		}
	}

	if (!func_269(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
	{
		if (func_234(255))
		{
			return;
		}
		else if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			func_328(false);
			func_344(true, true);
		}
		else
		{
			func_334();
		}
	}

	if (SCRIPTS::IS_LOADING_SCREEN_VISIBLE())
	{
		if (!CAM::IS_SCREEN_FADED_OUT() && !func_327())
			CAM::DO_SCREEN_FADE_OUT(0);
	
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	}

	if (Global_1572887.f_196.f_2 == 2 || Global_1572887.f_196.f_2 == 3)
		NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();

	if (!func_269(32))
	{
		if (!func_345(0, 255) && func_346(255) == 1)
		{
			func_285(false, true, 0, 0, 0, 0, 0, false, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		}
		else if (!func_269(2) && !func_269(32768))
		{
			func_328(true);
			func_347(true);
		}
	}

	if (!func_345(23, 255))
		func_256();

	if (!func_269(8))
		func_348(25);

	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	func_349(0, 5, false);
	AUDIO::_STOP_ALL_SCRIPTED_AUDIO_SOUNDS();
	func_350(false);
	func_351();
	func_352();
	func_75(2);
	func_74();
	return;
}

int func_189(var uParam0) // Position - 0x608F Signature - 22 01 03 00 00 66 00 39 06
{
	if (!func_353(uParam0))
		return 0;

	if (func_354(uParam0))
		return uParam0->f_2;

	return func_355(uParam0->f_1);
}

char* func_190(const char* sParam0, int iParam1) // Position - 0x60C0 Signature - 22 02 18
{
	var unk;
	var gamerHandle;
	int num;
	char* str;

	str = "";

	switch (iParam1)
	{
		case 1:
			num = NETWORK::_0x27B1AE4D8C652F08(sParam0->f_11);
			NETWORK::_0x16EFB123C4451032(num, &gamerHandle);
		
			if (!func_361(gamerHandle))
				return str;
		
			str = NETWORK::_REQUEST_PEDSHOT_TEXTURE_MULTIPLAYER_DOWNLOAD(&gamerHandle, 0);
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(str))
				return str;
		
			return str;
	
		case 8:
		case 16:
		case 17:
		case 20:
			switch (func_356(&unk, sParam0->f_43, 1))
			{
				case 1:
					return str;
			
				case 2:
					if (!func_353(&(sParam0->f_48)) || func_189(&(sParam0->f_48)) > 500 && func_357() == 0)
					{
						func_358(sParam0->f_43);
						func_359(&(sParam0->f_48), true);
					}
				
					return str;
			
				case 3:
					return str;
			
				case 4:
					str = func_360(unk);
					return str;
			
				default:
					break;
			}
			break;
	}

	return str;
}

void func_191(const char* sParam0, char* sParam1, BOOL bParam2) // Position - 0x61B9 Signature - 22 03 3C
{
	var unk;

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

	switch (sParam0->f_58)
	{
		case 1:
			func_363(sParam0, &unk, sParam1, bParam2);
			break;
	
		case 8:
		case 16:
		case 17:
		case 20:
			if (Global_1072759.f_23 >= 10)
				return;
		
			func_362(sParam0, &unk, sParam0->f_58, sParam1, bParam2);
			Global_1072759.f_23.f_5[Global_1072759.f_23 /*30*/] = { sParam0->f_12 };
			Global_1072759.f_23 = Global_1072759.f_23 + 1;
			break;
	}

	Global_1072759.f_23.f_2.f_1 = func_364(unk);
	sParam0->f_55 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Global_1072759.f_23.f_2.f_1, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(95));
	func_366(sParam0, Global_1072759.f_23.f_2.f_1);

	if (func_367(&(sParam0->f_12)))
		func_368(&(sParam0->f_12), Global_1072759.f_23);

	if (func_369(&(sParam0->f_12)))
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(sParam0->f_12.f_11.f_14) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(sParam0->f_12.f_11.f_14))
			NETWORK::_0x5A91BCEF74944E93(sParam0->f_12.f_11.f_14, 30f);

	return;
}

void func_192(const char* sParam0, char* sParam1, BOOL bParam2) // Position - 0x6366 Signature - 22 03 05 00 00 50
{
	return;
}

void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x636E Signature - 22 03 05 00 00 66 00 27
{
	if (pStopwatch->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
			if (!useAccurateTime)
				*pStopwatch = NETWORK::GET_NETWORK_TIME();
			else
				*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*pStopwatch = MISC::GET_GAME_TIMER();
	
		pStopwatch->f_1 = 1;
	}

	return;
}

BOOL func_194(int iParam0) // Position - 0x63B3 Signature - 22 01 03 00 00 66 00 6D 1F
{
	if (iParam0 >= 31 || iParam0 <= 0)
		return true;

	return Global_1901539[iParam0] >= 1;
}

void func_195(int iParam0) // Position - 0x63DB Signature - 22 01 04 00 00 66 00 2F 75
{
	int i;

	if (iParam0 >= 0)
	{
		Global_1900598[iParam0 /*47*/] = 0;
		Global_1900598[iParam0 /*47*/].f_1 = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1900598[iParam0 /*47*/].f_2), "", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1900598[iParam0 /*47*/].f_18), "", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1900598[iParam0 /*47*/].f_21), "", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1900598[iParam0 /*47*/].f_24), "", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1900598[iParam0 /*47*/].f_27), "", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1900598[iParam0 /*47*/].f_30), "", 128);
	
		for (i = 0; i <= 3; i = i + 1)
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_1900598[iParam0 /*47*/].f_5[i /*3*/], "", 24);
		}
	}

	return;
}

BOOL func_196(int iParam0) // Position - 0x6475 Signature - 22 01 03 00 00 2F 50 01 01 22 30
{
	return false;
}

void func_197(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, int iParam47) // Position - 0x647E Signature - 22 30
{
	var unk;
	int i;

	if (!func_370(iParam0))
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0.f_18)) || MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0.f_21)))
		return;

	MISC::ACTIVITY_FEED_CREATE(&(iParam0.f_18), &(iParam0.f_21));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0.f_2)))
		MISC::ACTIVITY_FEED_ADD_SUBSTRING_TO_CAPTION(&(iParam0.f_2));

	if (iParam0.f_46)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0.f_24)) && !MISC::IS_STRING_NULL_OR_EMPTY(&iParam0.f_5[0 /*3*/]))
		{
			MISC::ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE(&iParam0.f_5[0 /*3*/], &(iParam0.f_24));
			unk = { func_371(PLAYER::PLAYER_ID()) };
		
			if (func_361(unk))
				MISC::_0xAF530E56505D1BD6(&unk);
		}
	
		for (i = 1; i <= 3; i = i + 1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&iParam0.f_5[i /*3*/]))
				MISC::ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE_ADD(&iParam0.f_5[i /*3*/]);
		}
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0.f_30)))
		MISC::_0xFF252E2BAFB7330F(&(iParam0.f_30));

	MISC::ACTIVITY_FEED_POST();
	func_195(iParam47);
	Global_1901539[iParam0] = Global_1901539[iParam0] + 1;
	return;
}

void func_198(Hash hParam0) // Position - 0x6581 Signature - 22 01 03 00 00 5D 17 00 18 18 2C 01 80 01 66 00 39
{
	func_372(&(Global_1572887.f_300.f_1), func_215(hParam0), 3);
	return;
}

void func_199() // Position - 0x659E Signature - 22 00 03 00 00 2F 67 02 2F 67 02 66 02 6D
{
	int i;

	i = 0;

	for (i = 0; i <= 32; i = i + 1)
	{
		func_91(i);
	}

	Global_1572887.f_300.f_5 != -1;
	Global_1572887.f_300.f_10 != 0;
	Global_1572887.f_300.f_6 != -1;
	Global_1572887.f_300.f_7 != -1;
	Global_1572887.f_300.f_8 != -1;
	Global_1572887.f_300.f_16 != -1;
	Global_1572887.f_300.f_9 != 0;
	Global_1572887.f_300.f_15 != 0;
	return;
}

void func_200() // Position - 0x662D Signature - 22 00 02 00 00 03 01 00 F4 5D 17
{
	Global_1572887.f_196.f_42 = MISC::GET_GAME_TIMER();
	return;
}

void func_201(int iParam0) // Position - 0x6641 Signature - 22 01 03 00 00 66 00 5D 17 00 18 80 C4 6C 02
{
	Global_1572887.f_196.f_2 = iParam0;
	return;
}

void func_202(int iParam0) // Position - 0x6653 Signature - 22 01 03 00 00 66 00 5D 17 00 18 6C C4
{
	Global_1572887.f_196 = iParam0;
	return;
}

BOOL func_203() // Position - 0x6663 Signature - 22 00 02 00 00 5D 17 00 18 80 C4 27 3D
{
	return Global_1572887.f_196.f_61 != -1;
}

void func_204(Hash hParam0) // Position - 0x6675 Signature - 22 01 03 00 00 66 00 5D 17 00 18 8C
{
	Global_1572887.f_300 = hParam0;
	return;
}

void func_205() // Position - 0x6686 Signature - 22 00 04 00 00 37
{
	const char* launchParamValue;
	Hash hashKey;

	launchParamValue = NETWORK::GET_LAUNCH_PARAM_VALUE(func_207(-1022795800));
	hashKey = MISC::GET_HASH_KEY(launchParamValue);
	func_373(2, hashKey, -1, -1);
	func_374(12, 20);
	NETWORK::CLEAR_SERVICE_EVENT_ARGUMENTS();
	return;
}

int func_206() // Position - 0x66B9 Signature - 22 00 02 00 00 03 01 00 F4 89
{
	return MISC::GET_GAME_TIMER() - iLocal_29.f_1;
}

char* func_207(int iParam0) // Position - 0x66CA Signature - 22 01 04 00 00 2F 04 67 03 66 00 3C 14
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case joaat("arg_4"):
			str = "arg_4";
			break;
	
		case joaat("district_id"):
			str = "district_id";
			break;
	
		case joaat("arg_5"):
			str = "arg_5";
			break;
	
		case joaat("launchpreset"):
			str = "launchPreset";
			break;
	
		case joaat("launchgender"):
			str = "launchGender";
			break;
	
		case -1022795800:
			str = "nominated_content_id";
			break;
	
		case joaat("state_id"):
			str = "state_id";
			break;
	
		case joaat("arg_0"):
			str = "arg_0";
			break;
	
		case joaat("arg_1"):
			str = "arg_1";
			break;
	
		case joaat("series_id"):
			str = "series_id";
			break;
	
		case joaat("region_id"):
			str = "region_id";
			break;
	
		case 156317380:
			str = "letter_id";
			break;
	
		case joaat("mission_id"):
			str = "mission_id";
			break;
	
		case joaat("arg_6"):
			str = "arg_6";
			break;
	
		case joaat("arg_7"):
			str = "arg_7";
			break;
	
		case joaat("arg_8"):
			str = "arg_8";
			break;
	
		case joaat("Mode"):
			str = "mode";
			break;
	
		case joaat("arg_9"):
			str = "arg_9";
			break;
	
		case joaat("arg_2"):
			str = "arg_2";
			break;
	
		case joaat("arg_3"):
			str = "arg_3";
			break;
	}

	return str;
}

void func_208(int iParam0) // Position - 0x680C Signature - 22 01 04 00 00 2F 66
{
	int i;

	*iParam0 = 0;
	i = 0;

	for (i = 0; i <= 2; i = i + 1)
	{
		iParam0->f_1[i] = 0;
	}

	iParam0->f_5 = -1;
	iParam0->f_6 = -1;
	iParam0->f_7 = -1;
	iParam0->f_8 = -1;
	iParam0->f_10 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(iParam0->f_11), "", 32);
	iParam0->f_16 = -1;
	iParam0->f_17 = -1;
	iParam0->f_9 = 0;
	return;
}

int func_209(Hash hParam0) // Position - 0x6866 Signature - 22 01 03 00 00 66 00 3C 8D 00 C1
{
	switch (hParam0)
	{
		case joaat("region_rio_fort_mercer"):
			return 124;
	
		case -2085163631:
			return 0;
	
		case joaat("region_bgv_hangingdog"):
			return 16;
	
		case joaat("region_grz_colter"):
			return 45;
	
		case joaat("region_tal_aurora_basin"):
			return 113;
	
		case joaat("region_grz_theloft"):
			return 58;
	
		case joaat("region_grz_tempest_rim"):
			return 51;
	
		case joaat("region_blu_copperhead"):
			return 32;
	
		case joaat("region_bay_lagras"):
			return 3;
	
		case joaat("region_gre_civil_war_bride"):
			return 54;
	
		case joaat("region_bgv_missing_husband"):
			return 18;
	
		case joaat("region_scm_love_triangle"):
			return 109;
	
		case joaat("region_scm_dairy_farm"):
			return 106;
	
		case joaat("region_gua_cincotorres"):
			return 64;
	
		case joaat("region_roa_mossy_flats"):
			return 92;
	
		case joaat("region_roa_butchercreek"):
			return 87;
	
		case joaat("region_bay_siltwaterstrand"):
			return 10;
	
		case joaat("region_hrt_grangers_hoggery"):
			return 75;
	
		case -1573562784:
			return 138;
	
		case joaat("region_roa_brandywine_drop"):
			return 86;
	
		case joaat("region_scm_clemenspoint"):
			return 104;
	
		case joaat("region_cho_rileys_charge"):
			return 130;
	
		case joaat("region_grz_cohutta"):
			return 55;
	
		case joaat("region_tal_trapper"):
			return 119;
	
		case joaat("region_bay_shadybelle"):
			return 9;
	
		case joaat("region_roa_happy_family"):
			return 89;
	
		case joaat("region_hrt_larnedsod"):
			return 77;
	
		case joaat("region_cml_sixpointcabin"):
			return 38;
	
		case joaat("region_rio_benedict_point"):
			return 123;
	
		case joaat("region_bay_serial_killer"):
			return 7;
	
		case joaat("region_tal_cochinay"):
			return 115;
	
		case joaat("region_roa_macleanshouse"):
			return 91;
	
		case joaat("region_scm_slave_pen"):
			return 112;
	
		case joaat("region_grz_wapiti"):
			return 60;
	
		case joaat("region_bgv_pronghorn"):
			return 22;
	
		case joaat("region_bgv_riggs_station"):
			return 23;
	
		case joaat("region_bgv_shack"):
			return 24;
	
		case joaat("region_tal_dead_settler"):
			return 114;
	
		case joaat("region_grz_millesani_claim"):
			return 47;
	
		case joaat("region_roa_rockyseven"):
			return 94;
	
		case joaat("region_roa_doverhill"):
			return 88;
	
		case joaat("region_grz_travelling_salesman"):
			return 61;
	
		case joaat("region_scm_caligahall"):
			return 101;
	
		case joaat("region_scm_rhodes"):
			return 111;
	
		case joaat("region_cho_coots_chapel"):
			return 128;
	
		case joaat("region_scm_bulgerglade"):
			return 100;
	
		case joaat("region_gre_veteran"):
			return 59;
	
		case joaat("region_roa_trapper"):
			return 95;
	
		case joaat("region_grz_gunfight"):
			return 57;
	
		case joaat("region_grz_cotorra_springs"):
			return 56;
	
		case joaat("region_tal_manzanitapost"):
			return 116;
	
		case joaat("region_rio_plain_view"):
			return 125;
	
		case joaat("region_scm_radleys_pasture"):
			return 110;
	
		case joaat("region_grz_mount_hagen_peak"):
			return 49;
	
		case joaat("region_scm_clemenscove"):
			return 103;
	
		case joaat("region_roa_roanoke_valley"):
			return 93;
	
		case joaat("region_bay_orange_plantation"):
			return 6;
	
		case joaat("region_hrt_crop_farm"):
			return 71;
	
		case joaat("region_bgv_watsonscabin"):
			return 30;
	
		case joaat("region_cho_ridgewood_farm"):
			return 131;
	
		case joaat("region_gua_camp"):
			return 63;
	
		case joaat("region_grt_beechers"):
			return 39;
	
		case joaat("region_cho_twin_rocks"):
			return 132;
	
		case joaat("region_gap_gaptooth_breach"):
			return 120;
	
		case joaat("region_grz_starving_children"):
			return 50;
	
		case joaat("region_scm_braithwaitemanor"):
			return 99;
	
		case joaat("region_scm_lonniesshack"):
			return 108;
	
		case joaat("region_bay_crawdadwillies"):
			return 0;
	
		case joaat("region_hrt_downsranch"):
			return 73;
	
		case joaat("region_hrt_valentine"):
			return 81;
	
		case joaat("region_bgv_appleseedtimber"):
			return 11;
	
		case joaat("region_roa_vanhornmansion"):
			return 97;
	
		case joaat("region_grt_quakers_cove"):
			return 41;
	
		case joaat("region_scm_compsons_stead"):
			return 105;
	
		case joaat("region_roa_annesburg"):
			return 83;
	
		case joaat("region_gap_tumbleweed"):
			return 121;
	
		case joaat("region_grz_mountain_man"):
			return 48;
	
		case joaat("region_grz_wintermining_town"):
			return 52;
	
		case joaat("region_cml_bacchusbridge"):
			return 35;
	
		case joaat("region_gua_aguasdulces"):
			return 62;
	
		case joaat("region_bgv_lonemulestead"):
			return 17;
	
		case joaat("region_bgv_fortriggs"):
			return 15;
	
		case joaat("region_bay_merkinswaller"):
			return 2;
	
		case joaat("region_cml_oldfortwallace"):
			return 37;
	
		case joaat("region_roa_black_balsam_rise"):
			return 85;
	
		case joaat("region_bgv_blackboneforest_trapper"):
			return 13;
	
		case joaat("region_roa_beechers_c"):
			return 68;
	
		case joaat("region_roa_old_man_jones"):
			return 96;
	
		case joaat("region_centralunionrr"):
			return 139;
	
		case joaat("region_hen_macfarlanes_ranch"):
			return 135;
	
		case joaat("region_cho_travelling_salesman"):
			return 133;
	
		case joaat("region_bay_saint_denis"):
			return 5;
	
		case joaat("region_scm_horse_shop"):
			return 107;
	
		case joaat("region_blu_sisika"):
			return 33;
	
		case joaat("region_bgv_paintedsky"):
			return 21;
	
		case joaat("region_bgv_valley_view"):
			return 27;
	
		case joaat("region_hrt_loony_cult"):
			return 78;
	
		case joaat("region_grz_frozen_explorer"):
			return 46;
	
		case joaat("region_hen_thieves_landing"):
			return 136;
	
		case joaat("region_tal_pacificunionrr"):
			return 117;
	
		case joaat("region_hrt_abandoned_mill"):
			return 67;
	
		case joaat("region_bay_serendipity"):
			return 8;
	
		case joaat("region_bgv_dakotariver_trapper"):
			return 14;
	
		case joaat("region_roa_isolationist"):
			return 90;
	
		case joaat("region_grz_dead_rival"):
			return 43;
	
		case joaat("region_grz_calumetravine"):
			return 53;
	
		case joaat("region_cml_dino_lady"):
			return 36;
	
		case joaat("region_bgv_wallace_station"):
			return 28;
	
		case joaat("region_roa_beaverhollow"):
			return 84;
	
		case joaat("region_bgv_strawberry"):
			return 26;
	
		case joaat("region_grz_chezporter"):
			return 44;
	
		case joaat("region_blu_canebreak_manor"):
			return 31;
	
		case joaat("region_grz_adlerranch"):
			return 42;
	
		case joaat("region_scm_catfishjacksons"):
			return 102;
	
		case joaat("region_roa_vanhornpost"):
			return 98;
	
		case joaat("region_cho_armadillo"):
			return 127;
	
		case joaat("region_grt_blackwater"):
			return 40;
	
		case joaat("region_bgv_beryls_dream"):
			return 12;
	
		case joaat("region_rio_travelling_salesman"):
			return 126;
	
		case joaat("region_bay_macombs_end"):
			return 1;
	
		case joaat("region_cho_don_julio_house"):
			return 129;
	
		case joaat("region_blu_travelling_salesman"):
			return 34;
	
		case joaat("region_hrt_swansons_station"):
			return 80;
	
		case joaat("region_hen_travelling_salesman"):
			return 137;
	
		case joaat("region_bgv_monto_rest"):
			return 19;
	
		case joaat("region_hrt_cumberlandfalls"):
			return 72;
	
		case joaat("region_hrt_carmodydell"):
			return 69;
	
		case joaat("region_gua_manicato"):
			return 66;
	
		case joaat("region_hrt_emeraldranch"):
			return 74;
	
		case 1869665995:
			return 134;
	
		case joaat("region_bay_lakay"):
			return 4;
	
		case joaat("region_gua_lacapilla"):
			return 65;
	
		case joaat("region_bgv_old_man_jones"):
			return 29;
	
		case joaat("region_bgv_owanjila_dam"):
			return 20;
	
		case joaat("region_hrt_cornwallkerosene"):
			return 70;
	
		case joaat("region_gap_rathskeller_fork"):
			return 122;
	
		case joaat("region_roa_aberdeenpigfarm"):
			return 82;
	
		case joaat("region_hrt_luckyscabin"):
			return 79;
	
		case joaat("region_hrt_horseshoeoverlook"):
			return 76;
	
		case joaat("region_bgv_shepherds_rise"):
			return 25;
	
		case joaat("region_tal_tannersreach"):
			return 118;
	
		default:
		
	}

	return -1;
}

int func_210(Hash hParam0) // Position - 0x6E7D Signature - 22 01 03 00 00 66 00 3C 11 00 4F
{
	switch (hParam0)
	{
		case joaat("district_big_valley"):
			return 1;
	
		case joaat("district_grizzlies"):
			return 5;
	
		case joaat("district_grizzlies_east"):
			return 6;
	
		case joaat("district_cholla_springs"):
			return 15;
	
		case joaat("district_guama"):
			return 8;
	
		case joaat("district_grizzlies_west"):
			return 7;
	
		case joaat("district_rio_bravo"):
			return 14;
	
		case joaat("district_bluegill_marsh"):
			return 2;
	
		case joaat("district_scarlett_meadows"):
			return 11;
	
		case joaat("district_great_plains"):
			return 4;
	
		case joaat("district_bayou_nwa"):
			return 0;
	
		case joaat("district_roanoke_ridge"):
			return 10;
	
		case joaat("district_hennigans_stead"):
			return 16;
	
		case joaat("district_gaptooth_ridge"):
			return 13;
	
		case joaat("district_cumberland_forest"):
			return 3;
	
		case joaat("district_heartland"):
			return 9;
	
		case joaat("district_tall_trees"):
			return 12;
	
		default:
		
	}

	return -1;
}

int func_211(Hash hParam0) // Position - 0x6F41 Signature - 22 01 03 00 00 66 00 3C 06 00 A3
{
	switch (hParam0)
	{
		case joaat("newhanover"):
			return 3;
	
		case joaat("ambarino"):
			return 0;
	
		case joaat("lemoyne"):
			return 1;
	
		case joaat("westelizabeth"):
			return 4;
	
		case joaat("guarma"):
			return 5;
	
		case joaat("newaustin"):
			return 2;
	
		default:
		
	}

	return -1;
}

int func_212(Hash hParam0) // Position - 0x6F8E Signature - 22 01 03 00 00 66 00 3C 15 00 83
{
	switch (hParam0)
	{
		case joaat("net_playlist_gun_rush_teams"):
			return 5;
	
		case joaat("net_playlist_orbis_series_3"):
			return 17;
	
		case joaat("net_playlist_featured_series_001"):
			return 1;
	
		case joaat("net_playlist_elimination_medium"):
			return 8;
	
		case joaat("net_playlist_adversary_large"):
			return 4;
	
		case -1516590035:
			return 20;
	
		case joaat("net_playlist_race_series"):
			return 0;
	
		case joaat("net_playlist_shootout"):
			return 18;
	
		case joaat("net_playlist_nominated_series_medium"):
			return 12;
	
		case joaat("net_playlist_gun_rush_free_for_all"):
			return 6;
	
		case joaat("net_playlist_elimination_large"):
			return 9;
	
		case joaat("net_playlist_elimination_small"):
			return 7;
	
		case joaat("net_playlist_nominated_series_small"):
			return 11;
	
		case joaat("net_playlist_nominated_series"):
			return 10;
	
		case joaat("net_playlist_nominated_series_large"):
			return 13;
	
		case joaat("net_playlist_private_series"):
			return 14;
	
		case joaat("net_playlist_capture"):
			return 19;
	
		case joaat("net_playlist_adversary_small"):
			return 2;
	
		case joaat("net_playlist_orbis_series_2"):
			return 16;
	
		case joaat("net_playlist_orbis_series_1"):
			return 15;
	
		case joaat("net_playlist_adversary_medium"):
			return 3;
	
		default:
		
	}

	return -1;
}

void func_213(int iParam0, int iParam1) // Position - 0x707E Signature - 22 02 04 00 00 66 00 2F 72
{
	if (iParam0 != 0)
		func_375(iParam0, iParam1);

	func_67(4);
	func_68();
	func_24(1);
	return;
}

void func_214(int iParam0) // Position - 0x70A2 Signature - 22 01 06 00 00 66 00 39 CA
{
	char* paramName;
	const char* launchParamValue;
	Hash hashKey;

	paramName = func_207(iParam0);

	if (!NETWORK::_GET_LAUNCH_PARAM_EXISTS(paramName))
		return;

	launchParamValue = NETWORK::GET_LAUNCH_PARAM_VALUE(paramName);
	hashKey = MISC::GET_HASH_KEY(launchParamValue);

	if (hashKey == 0)
		return;

	func_198(hashKey);
	return;
}

int func_215(int iParam0) // Position - 0x70E1 Signature - 22 01 04 00 00 2F 67 03 66 00 3C 21 00 E2
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case joaat("trade_7"):
			num = 26;
			break;
	
		case joaat("follow_invite"):
			num = 3;
			break;
	
		case joaat("COUPON"):
			num = 29;
			break;
	
		case joaat("random_poker"):
			num = 15;
			break;
	
		case joaat("last_mission"):
			num = 14;
			break;
	
		case -1480790826:
			num = 4;
			break;
	
		case -1369260209:
			num = 28;
			break;
	
		case joaat("last_region"):
			num = 12;
			break;
	
		case joaat("cchar"):
			num = 16;
			break;
	
		case -283069378:
			num = 19;
			break;
	
		case joaat("open_posse"):
			num = 9;
			break;
	
		case joaat("NEW_GAME"):
			num = 1;
			break;
	
		case joaat("last_location"):
			num = 13;
			break;
	
		case joaat("random_region"):
			num = 11;
			break;
	
		case 0:
			num = 0;
			break;
	
		case joaat("trade_1"):
			num = 20;
			break;
	
		case 413241879:
			num = 31;
			break;
	
		case joaat("trade_2"):
			num = 21;
			break;
	
		case joaat("trade_6"):
			num = 25;
			break;
	
		case joaat("bg_custom_3"):
			num = 8;
			break;
	
		case joaat("trade_3"):
			num = 22;
			break;
	
		case 928971890:
			num = 32;
			break;
	
		case joaat("bg_custom_2"):
			num = 7;
			break;
	
		case joaat("trade_4"):
			num = 23;
			break;
	
		case joaat("intro_not_done"):
			num = 2;
			break;
	
		case 1449824096:
			num = 27;
			break;
	
		case joaat("bg_custom_1"):
			num = 6;
			break;
	
		case joaat("shift_f"):
			num = 5;
			break;
	
		case joaat("trade_5"):
			num = 24;
			break;
	
		case 1735278055:
			num = 18;
			break;
	
		case joaat("near_posse"):
			num = 10;
			break;
	
		case joaat("hub"):
			num = 30;
			break;
	
		case joaat("camp"):
			num = 17;
			break;
	}

	return num;
}

BOOL func_216(Any* panParam0, int iParam1, int iParam2) // Position - 0x729B Signature - 22 03 07 00 00 66 01
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

void func_217(Any* panParam0, char* sParam1) // Position - 0x72D2 Signature - 22 02 0C 00 00 66 01
{
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".x", 64);
	SAVE::_SAVEGAME_GET_FLOAT(panParam0, &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".y", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(panParam0->f_1), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".z", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(panParam0->f_2), &variableName);
	return;
}

void func_218(Any anParam0) // Position - 0x7320 Signature - 22 01 03 00 00 66 00 6D 0A 25 57
{
	SAVE::_0x443174C20B8B9E7F(anParam0, 10, "psna_sCamp");
	SAVE::_0x443174C20B8B9E7F(anParam0, 3, "psna_sCampLocation");
	SAVE::_SAVEGAME_GET_INT_2(anParam0, "psna_sCampiSize");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_1), "psna_sCampeDistrict");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_2), "psna_sCampeLocation");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0x443174C20B8B9E7F(&(anParam0->f_3), 7, "psna_sCampRecharge");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3), "psna_sCampRechargeYear");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3.f_1), "psna_sCampRechargeMonth");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3.f_2), "psna_sCampRechargeDay");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3.f_3), "psna_sCampRechargeHour");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3.f_4), "psna_sCampRechargeMinute");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3.f_5), "psna_sCampRechargeSecond");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3.f_6), "psna_sCampRechargeMilliseconds");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_219(Any anParam0) // Position - 0x73DA Signature - 22 01 24
{
	int i;
	var unk;
	var unk9;
	var variableName;
	var variableName2;

	SAVE::_0x443174C20B8B9E7F(anParam0, 47, "psna_sPosse");
	SAVE::_SAVEGAME_GET_TEXT_LABEL_31(anParam0, "psna_sPosse_txtGamertag");
	SAVE::_SAVEGAME_GET_INT(&(anParam0->f_4), "psna_sPosse_iLastPosseID");
	SAVE::_SAVEGAME_GET_BOOL(&(anParam0->f_5), "psna_sPosse_bPreferOpen");
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_6), 41, "psna_sPosse_sPosseDataArray");
	TEXT_LABEL_ASSIGN_STRING(&unk9, "psna_sPosse_data_", 64);

	for (i = 0; i <= 4; i = i + 1)
	{
		unk = { unk9 };
		TEXT_LABEL_APPEND_INT(&unk, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->f_6[i /*8*/], 8, &unk);
		variableName = { unk };
		TEXT_LABEL_APPEND_STRING(&variableName, "_iPosseID", 64);
		SAVE::_SAVEGAME_GET_INT(&anParam0->f_6[i /*8*/], &variableName);
		variableName = { unk };
		TEXT_LABEL_APPEND_STRING(&variableName, "_sPosseLock", 64);
		SAVE::_0x443174C20B8B9E7F(&(anParam0->f_6[i /*8*/].f_1), 7, &variableName);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_Year", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_6[i /*8*/].f_1), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_Month", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_6[i /*8*/].f_1.f_1), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_Day", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_6[i /*8*/].f_1.f_2), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_Hour", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_6[i /*8*/].f_1.f_3), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_Minute", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_6[i /*8*/].f_1.f_4), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_Second", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_6[i /*8*/].f_1.f_5), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_Milliseconds", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_6[i /*8*/].f_1.f_6), &variableName2);
		SAVE::_0xE0B45E983BFC0768();
		SAVE::_0xE0B45E983BFC0768();
		TEXT_LABEL_ASSIGN_STRING(&variableName, "", 64);
		TEXT_LABEL_ASSIGN_STRING(&variableName2, "", 64);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_220(Any anParam0) // Position - 0x75B1 Signature - 22 01 0C 00 00 66 00 25
{
	int i;
	var unk;

	SAVE::_0x443174C20B8B9E7F(anParam0, 603, "nssd_sStable_Data");
	func_376(anParam0);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_41), 561, "nssd_sStableBonding_array");

	for (i = 0; i <= 9; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "nssd_sStableBonding_array_", 64);
		TEXT_LABEL_APPEND_INT(&unk, i, 64);
		func_377(&anParam0->f_41[i /*56*/], &unk);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_602), "nssd_eSavedSystemFlags");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_221(Any anParam0) // Position - 0x761F Signature - 22 01 14 00 00 25 9A
{
	int i;
	var variableName;
	var unk8;

	TEXT_LABEL_ASSIGN_STRING(&unk8, "psna_sClothes", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 1792, &unk8);
	variableName = { unk8 };
	TEXT_LABEL_APPEND_STRING(&variableName, "PortableWardrobe", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 33, &variableName);
	func_378(anParam0, variableName);
	SAVE::_0xE0B45E983BFC0768();
	TEXT_LABEL_ASSIGN_STRING(&variableName, "psna_sClothes_OutfitList", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_33), 1321, &variableName);

	for (i = 0; i <= 10; i = i + 1)
	{
		func_379(&anParam0->f_33[i /*120*/], variableName, i);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&variableName, "psna_sClothes_HeadOverlay", 64);
	func_380(&(anParam0->f_1354), variableName);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_1734), "psna_sClothes_SystemFlags");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_1735), "psna_sClothes_PlayerType");
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_1736), 40, "psna_sClothes_fExpressions");

	for (i = 0; i < 39; i = i + 1)
	{
		variableName = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_fExpression", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&anParam0->f_1736[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_1776), "psna_sClothes_fEyeRedness");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_1777), "psna_sClothes_iCurOutfit");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_1778), "psna_sClothes_iWhistleStyle");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_1779), "psna_sClothes_iWhistlePitch");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_1780), "psna_sClothes_iWhistleClarity");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_1781), "psna_sClothes_iDeathsWithPomade");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_1782), "psna_sClothes_ePomadeLifetime");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_1783), "psna_sClothes_iPreferredWalkStyle");
	SAVE::_SAVEGAME_GET_TEXT_LABEL_63(&(anParam0->f_1784), "psna_sClothes_tlPlayerSaveName");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_222(Any anParam0) // Position - 0x779A Signature - 22 01 14 00 00 25 4F
{
	int num;
	var unk;
	var unk9;

	TEXT_LABEL_ASSIGN_STRING(&unk9, "psna_sAbandonedLoot", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 3, &unk9);
	SAVE::_0x81F4E92BE3958364(anParam0, 3, &unk);
	unk = { unk9 };
	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	func_381(&anParam0->[0 /*2*/], unk);
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_223(Any anParam0) // Position - 0x77E2 Signature - 22 01 1D
{
	int i;
	int j;
	var variableName;
	var variableName2;
	var variableName3;

	TEXT_LABEL_ASSIGN_STRING(&variableName3, "psna_sRpg", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 42, &variableName3);
	TEXT_LABEL_APPEND_STRING(&variableName3, "psna_sAttributeData", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 24, &variableName3);

	for (i = 0; i <= 22; i = i + 1)
	{
		variableName = { variableName3 };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i], 1, &variableName);
		TEXT_LABEL_APPEND_STRING(&variableName, "fAttributeXP", 64);
		SAVE::_SAVEGAME_GET_FLOAT(&anParam0->[i], &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&variableName3, "psna_sRpg", 64);
	TEXT_LABEL_APPEND_STRING(&variableName3, "psna_sAttributeCoreData", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_24), 10, &variableName3);

	for (i = 0; i <= 2; i = i + 1)
	{
		variableName = { variableName3 };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->f_24[i /*3*/], 3, &variableName);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "fCoreValue", 64);
		SAVE::_SAVEGAME_GET_FLOAT(&anParam0->f_24[i /*3*/], &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "todDegradeLastFixed", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_24[i /*3*/].f_1), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "iDegradeCount", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_24[i /*3*/].f_2), &variableName2);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&variableName3, "psna_sRpg", 64);
	TEXT_LABEL_APPEND_STRING(&variableName3, "psna_sAttributeOverpoweredTime", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_34), 7, &variableName3);

	for (j = 0; j < anParam0->f_34; j = j + 1)
	{
		variableName = { variableName3 };
		TEXT_LABEL_APPEND_INT(&variableName, j, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->f_34[j /*2*/], 2, &variableName);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "fTankTime", 64);
		SAVE::_SAVEGAME_GET_FLOAT(&anParam0->f_34[j /*2*/], &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "fCoreTime", 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_34[j /*2*/].f_1), &variableName2);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&variableName3, "psna_sRpg", 64);
	TEXT_LABEL_APPEND_STRING(&variableName3, "iTimesEatenFood", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_41), &variableName3);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_224(Any anParam0) // Position - 0x79CA Signature - 22 01 14 00 00 25 16
{
	var unk;
	var unk9;
	int i;

	TEXT_LABEL_ASSIGN_STRING(&unk, "essd_emotes", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 29, &unk);
	TEXT_LABEL_APPEND_STRING(&unk, ".sArr", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 29, &unk);

	for (i = 0; i <= 4 - 1; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_STRING(&unk9, ".sCat", 64);
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		func_382(&anParam0->[i /*7*/], unk9);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_225(Any anParam0) // Position - 0x7A39 Signature - 22 01 04 00 00 2F 67 03 66 03 0D
{
	int i;

	for (i = 0; i < 7; i = i + 1)
	{
		DATAFILE::_PARSEDDATA_REGISTER_QUERY(*anParam0, i, func_383(i));
	}

	return;
}

Any func_226(Any anParam0, int iParam1) // Position - 0x7A63 Signature - 22 02 05 00 00 66 01 66 00 6C 02 66 00 03
{
	Any numNodes;

	anParam0->f_2 = iParam1;
	numNodes = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(anParam0);
	return numNodes;
}

BOOL func_227(Any anParam0, int iParam1) // Position - 0x7A7B Signature - 22 02 05 00 00 66 01 66 00 6C 02 66 00 80
{
	BOOL flag;

	anParam0->f_2 = iParam1;
	flag = DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(anParam0->f_1), anParam0);

	if (flag)
		return true;

	return false;
}

BOOL func_228(Any anParam0, int iParam1, char* sParam2) // Position - 0x7AA2 Signature - 22 03 06 00 00 66 01 66 00 6C 02 66 02 66 00 03 09 00
{
	BOOL flag;

	anParam0->f_2 = iParam1;
	flag = DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam2, anParam0);

	if (flag)
		return true;

	return false;
}

BOOL func_229(Any anParam0, int iParam1, BOOL* pbParam2) // Position - 0x7AC7 Signature - 22 03 06 00 00 66 01 66 00 6C 02 66 02 66 00 03 09 01 0F
{
	BOOL flag;

	anParam0->f_2 = iParam1;
	flag = DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(pbParam2, anParam0);

	if (flag)
		return true;

	return false;
}

void func_230(var uParam0, int iParam1) // Position - 0x7AEC Signature - 22 02 04 00 00 66 00 27 04
{
	uParam0->f_4 = uParam0->f_4 || iParam1;
	return;
}

int func_231(Any anParam0, int iParam1, int* piParam2) // Position - 0x7AFF Signature - 22 03 06 00 00 66 01 66 00 6C 02 66 02 66 00 03 09 01 14
{
	BOOL flag;

	anParam0->f_2 = iParam1;
	flag = DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(piParam2, anParam0);

	if (flag)
		return 1;

	return 0;
}

BOOL func_232(int iParam0) // Position - 0x7B24 Signature - 22 01 03 00 00 66 00 6D FF 15 0E
{
	if (iParam0 == 255)
		return Global_1102813.f_3 & 32 != 0;

	return func_384(32, iParam0);
}

BOOL func_233(BOOL bParam0) // Position - 0x7B49 Signature - 22 01 03 00 00 66 00 8B 0D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

BOOL func_234(int iParam0) // Position - 0x7B79 Signature - 22 01 03 00 00 09 66 00 39
{
	return func_345(1, iParam0);
}

BOOL func_235(int iParam0, int iParam1) // Position - 0x7B88 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 00
{
	return iParam0 && iParam1 != false;
}

BOOL func_236() // Position - 0x7B97 Signature - 22 00 02 00 00 39 CB
{
	return func_385() != -1;
}

int func_237(Player plParam0) // Position - 0x7BA5 Signature - 22 01 03 00 00 66 00 6D FF 15 08 00 5D 32 C5 13 27 05 67 00 66
{
	if (plParam0 == 255)
		plParam0 = Global_1295666.f_5;

	return Global_263042[plParam0 /*65*/];
}

BOOL func_238(Player plParam0, int iParam1) // Position - 0x7BC4 Signature - 22 02 04 00 00 66 00 5D 82
{
	return Global_263042[plParam0 /*65*/].f_63 && iParam1 != false;
}

BOOL func_239(BOOL bParam0) // Position - 0x7BDB Signature - 22 01 03 00 00 85 07
{
	return Global_262151 && bParam0 != false;
}

void func_240(var uParam0) // Position - 0x7BEC Signature - 22 01 03 00 00 66 00 73
{
	func_386(uParam0, 0f);
	return;
}

BOOL func_241(int iParam0, int iParam1) // Position - 0x7BFB Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 01 03 00 00 66
{
	return iParam0 && iParam1 != false;
}

BOOL func_242(var uParam0) // Position - 0x7C0A Signature - 22 01 03 00 00 66 00 76 11 39 FB 7B 00 50 01 01 22 00
{
	return func_241(*uParam0, 2);
}

float func_243() // Position - 0x7C1A Signature - 22 00 03 00 00 03 01 01 58
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_244(int iParam0) // Position - 0x7C4C Signature - 22 01 6E
{
	struct<17> eventData;
	int num;
	var gamerHandle1;
	const char* str;
	var unk33;
	int num2;
	int num3;
	Hash hash;
	int num4;
	const char* str2;
	char* str3;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 17))
		return;

	if (func_11() != -1)
	{
		if (!func_12())
		{
			func_255(2);
			return;
		}
	
		if (Global_1072759.f_28761)
		{
			func_255(2);
			return;
		}
	}

	num = NETWORK::_0x27B1AE4D8C652F08(eventData.f_10);

	if (num == -1)
		return;

	if (func_387())
	{
		gamerHandle1 = { func_296() };
	
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&gamerHandle1, &eventData))
			return;
	}

	if (func_268(eventData, 131072))
	{
		func_388(eventData.f_10);
		func_201(0);
		func_255(8);
		func_389(false);
	}

	if (func_268(eventData, 2048) && func_268(eventData, 32) || func_390(255))
		if (func_391())
			Global_1572887.f_196.f_63 = 1;

	if (func_11() != -1)
		if (func_392(eventData, 1))
			return;

	str = func_266(NETWORK::_0xE59F4924BD3A718D(num), joaat("color_posse_neutral"));
	unk33 = 1;
	unk33.f_1 = 1;
	unk33.f_2 = joaat("COLOR_WHITE");
	unk33.f_4 = -1;
	unk33.f_5 = -1;
	unk33.f_6 = -1;
	unk33.f_10 = -1;
	unk33.f_11 = -1;
	unk33.f_12 = -1;
	unk33.f_18 = joaat("COLOR_WHITE");
	unk33.f_19 = joaat("COLOR_WHITE");
	unk33.f_25 = 300;
	unk33.f_33.f_8 = joaat("COLOR_WHITE");
	unk33.f_33.f_11 = joaat("COLOR_WHITE");
	unk33.f_33.f_12 = 8000;
	unk33.f_33.f_13 = 1511356879;
	unk33.f_33.f_15 = joaat("player_menu");
	unk33.f_33.f_21 = 1;
	unk33.f_26 = 1;
	unk33.f_27 = eventData.f_10;
	unk33.f_16 = str;
	unk33.f_20 = joaat("mp_lobby_textures");
	unk33.f_21 = joaat("temp_pedshot");
	unk33.f_32 = NETWORK::NETWORK_IS_FEATURE_SUPPORTED(0);
	unk33.f_31 = "IB_GAMERCARD";
	unk33.f_30 = 2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(eventData.f_12)))
	{
		num2.f_1 = -1;
		num2.f_2 = -1;
		num2.f_3 = -1;
		num2.f_3.f_1 = -1;
		NETWORK::_0xC0CFFDA87C2C163D(num, &num2, 11);
	
		if (num2 == 3)
		{
			num3 = func_393(num2.f_3);
			unk33.f_17 = MISC::VAR_STRING(10, "NT_INV_RCV_BODY_INFO", func_395(func_394(num3)));
			unk33.f_33.f_3 = MISC::VAR_STRING(10, "NM_TI_VIEW_INVITE_SUBTYPE", func_395(func_394(num3)));
			unk33.f_33.f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			unk33.f_17 = MISC::VAR_STRING(42, "NT_INV_BODY_INFO", func_266(&(eventData.f_2), joaat("COLOR_PURE_WHITE")), "LANDING_FREEROAM_TITLE");
			unk33.f_33.f_3 = MISC::VAR_STRING(2, "NT_INV_FM_CONTENT");
			unk33.f_33.f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
	}
	else if (func_11() != -1)
	{
		hash = func_95(MISC::GET_HASH_KEY(&(eventData.f_12)));
	
		if (hash != -1)
		{
			num4 = Global_265213.f_4[hash /*46*/].f_24;
		
			if (num4 == -504335712)
				str3 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(Global_265213.f_4[hash /*46*/].f_26);
			else if (num4 == 395262693)
				str3 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(Global_265213.f_4[hash /*46*/].f_26);
			else if (num4 == -933924539)
				str3 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(Global_265213.f_4[hash /*46*/].f_26);
		
			unk33.f_33.f_3 = MISC::VAR_STRING(10, "NM_TI_VIEW_INVITE_SUBTYPE", str3);
			str2 = MISC::VAR_STRING(2, str3);
			unk33.f_17 = MISC::VAR_STRING(10, "NT_INV_RCV_BODY_INFO", str2);
		}
	}
	else
	{
		unk33.f_17 = MISC::VAR_STRING(42, "NT_INV_BODY_INFO", func_266(&(eventData.f_2), joaat("COLOR_PURE_WHITE")), "PRES_SET_MODE_MP");
		unk33.f_33.f_3 = MISC::VAR_STRING(2, "NT_INV_MP_PLAYER_JOIN");
	}

	unk33.f_33.f_2 = str;
	unk33.f_33.f_6 = joaat("mp_lobby_textures");
	unk33.f_33.f_7 = joaat("temp_pedshot");
	unk33.f_33.f_17 = "HUD_Toast_Soundset";
	unk33.f_33.f_18 = "Toast_On";
	unk33.f_25 = Global_1901671.f_2.f_23;
	unk33.f_24 = 1;
	func_364(unk33);
	return;
}

void func_245(int iParam0) // Position - 0x8014 Signature - 22 01 09 00 00 09 66 00 4B 03 4D 03 11 01 0B 05 8B 03 00 50 01 00 39
{
	struct<6> eventData;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 6))
		return;

	if (func_387())
	{
		if (Global_1572887.f_196 > 6)
		{
			func_399(&eventData);
			return;
		}
		else
		{
			if (Global_1572887.f_196.f_55 != 0)
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Global_1572887.f_196.f_55);
		
			func_74();
			func_163();
		}
	}

	if (Global_1572887.f_196.f_1 == -1)
		Global_1572887.f_196.f_1 = eventData.f_4;

	if (func_11() != -1)
	{
		if (!func_12())
		{
			func_271(2);
			func_255(2);
			func_202(23);
			return;
		}
	
		if (Global_1072759.f_28761)
		{
			func_271(268435456);
			func_255(2);
			func_202(23);
			return;
		}
	}

	func_399(&eventData);
	func_400(&eventData);
	func_201(4);
	func_389(false);
	func_164(1);
	return;
}

void func_246(int iParam0) // Position - 0x80E1 Signature - 22 01 05 00 00 09 66
{
	struct<2> eventData;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 2))
		return;

	func_401(1, eventData);
	func_402(&eventData);
	return;
}

void func_247(int iParam0) // Position - 0x8107 Signature - 22 01 07 00 00 09
{
	struct<4> eventData;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 4))
		return;

	if (func_387() && !func_269(16384))
	{
		NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
		func_403(&eventData);
		return;
	}

	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&eventData))
	{
		NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
		func_271(128);
		return;
	}

	if (func_11() != -1)
	{
		if (!func_12())
		{
			func_271(2);
			func_255(2);
			func_202(23);
			NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
			return;
		}
	
		if (Global_1072759.f_28761)
		{
			func_271(268435456);
			func_255(2);
			func_202(23);
			NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
			return;
		}
	}

	if (!func_301())
	{
		func_255(4);
		return;
	}

	Global_1572887.f_196.f_1 = eventData.f_2;
	func_403(&eventData);
	func_404(&eventData);

	if (func_405(eventData, 2))
		func_201(3);
	else
		func_201(2);

	func_284(16384);
	func_389(false);
	return;
}

void func_248(int iParam0) // Position - 0x81F0 Signature - 22 01 0C 00 00 09
{
	struct<7> eventData;
	var gamerHandle2;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 7))
		return;

	if (Global_1572887.f_196.f_1 != -1 && Global_1572887.f_196.f_1 != eventData.f_4)
		return;

	gamerHandle2 = { func_371(PLAYER::PLAYER_ID()) };

	if (func_254(eventData.f_5, 2) || func_254(eventData.f_5, true))
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&eventData, &gamerHandle2) && !func_387())
			return;
	else if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(eventData.f_2), &gamerHandle2) && !func_387())
		return;

	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&eventData, &gamerHandle2) && eventData.f_6 == 4)
		return;

	if (Global_1572887.f_196.f_1 != -1 && Global_1572887.f_196.f_1 != eventData.f_4)
		return;

	if (func_254(eventData.f_6, 4194304))
	{
		if (func_406() >= 3 && func_406() <= 5)
			func_281();
	
		func_255(4);
		func_255(16384);
		func_202(23);
	}

	Global_1572887.f_196.f_58 = eventData.f_6;
	Global_1572887.f_196.f_48 = { eventData };
	Global_1572887.f_196.f_50 = { eventData.f_2 };
	Global_1572887.f_196.f_59 = eventData.f_5;
	return;
}

void func_249() // Position - 0x8331 Signature - 22 00 02 00 00 03 01 01 8C
{
	if (MISC::IS_ORBIS_VERSION())
		Global_1572887.f_196.f_46 = NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON();

	return;
}

void func_250(int iParam0) // Position - 0x834C Signature - 22 01 09 00 00 09 66 00 4B 03 4D 03 11 01 0B 05 8B 03 00 50 01 00 21
{
	struct<6> eventData;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 6))
		return;

	func_271(65536);
	Global_1572887.f_196.f_56 = 3;
	Global_1572887.f_196.f_48 = { eventData };
	Global_1572887.f_196.f_50 = { eventData.f_2 };
	return;
}

void func_251(int iParam0) // Position - 0x8394 Signature - 22 01 11
{
	struct<7> eventData;
	var gamerHandle2;
	BOOL flag;
	var unk8;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 7))
		return;

	if (Global_1572887.f_196.f_1 != -1 && Global_1572887.f_196.f_1 != eventData.f_4)
		return;

	gamerHandle2 = { func_371(PLAYER::PLAYER_ID()) };
	flag = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&eventData, &gamerHandle2);

	if (func_254(eventData.f_6, 8) && flag)
		return;

	func_407(&eventData);
	Global_1572887.f_196.f_56 = eventData.f_5;
	Global_1572887.f_196.f_57 = Global_1572887.f_196.f_56;
	Global_1572887.f_196.f_48 = { eventData };
	Global_1572887.f_196.f_50 = { eventData.f_2 };
	Global_1572887.f_196.f_60 = eventData.f_6;

	if (func_269(128))
	{
		unk8 = { eventData };
		func_403(&unk8);
		func_404(&unk8);
	
		if (func_254(eventData.f_6, 8))
			func_201(3);
		else
			func_201(2);
	}

	if (Global_1572887.f_196.f_56 > 2 && !func_252())
	{
		Global_1572887.f_196.f_56 = 0;
		Global_1572887.f_196.f_57 = 0;
	}
	else if (Global_1572887.f_196.f_56 == 2 && flag)
	{
		Global_1572887.f_196.f_56 = 0;
		Global_1572887.f_196.f_57 = 0;
	}

	return;
}

BOOL func_252() // Position - 0x84D1 Signature - 22 00 15
{
	var gamerHandle2;
	BOOL flag;
	var gamerHandle22;
	BOOL flag2;
	BOOL flag3;
	var gamerHandle23;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL flag8;
	BOOL flag9;
	BOOL isDurangoVersion;
	BOOL flag10;
	BOOL flag11;
	BOOL flag12;

	if (Global_1572887.f_196.f_44 != 0)
		return true;

	if (Global_1572887.f_196.f_46 != -1)
		return true;

	if (Global_1572887.f_196.f_56 > 2)
	{
		gamerHandle2 = { func_371(PLAYER::PLAYER_ID()) };
		flag = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887.f_196.f_50), &gamerHandle2);
		gamerHandle22 = { func_371(GANG::NETWORK_GET_GANG_LEADER(Global_1295666.f_10)) };
		flag2 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887.f_196.f_50), &gamerHandle22);
		flag3 = flag || flag2;
	
		if (Global_1572887.f_196.f_56 == 3)
			return flag3;
	
		if (Global_1572887.f_196.f_56 == 4)
			return flag3;
	
		if (Global_1572887.f_196.f_56 == 5)
			return flag3;
	
		if (Global_1572887.f_196.f_56 == 6)
			return flag3;
	
		if (Global_1572887.f_196.f_56 == 7)
			return flag3;
	
		if (Global_1572887.f_196.f_56 == 8)
			return flag3;
	
		if (Global_1572887.f_196.f_56 == 9)
			return flag3;
	
		if (Global_1572887.f_196.f_56 == 10)
			return flag3;
	
		if (Global_1572887.f_196.f_56 == 11)
			return false;
	
		if (Global_1572887.f_196.f_56 == 12)
			return flag3;
	
		if (Global_1572887.f_196.f_56 == 13)
			return flag3;
	
		if (Global_1572887.f_196.f_56 == 14)
			return flag3;
	
		if (Global_1572887.f_196.f_56 == 15)
			return flag3;
	
		if (Global_1572887.f_196.f_56 == 16)
			return flag3;
	
		if (Global_1572887.f_196.f_56 == 17)
			return false;
	
		if (Global_1572887.f_196.f_56 == 18)
			return flag3;
	
		if (Global_1572887.f_196.f_56 == 19)
			return flag3;
	
		if (Global_1572887.f_196.f_56 == 20)
			return flag3;
	
		if (Global_1572887.f_196.f_56 == 21)
			return flag3;
	
		if (Global_1572887.f_196.f_56 == 22)
			return flag3;
	
		if (Global_1572887.f_196.f_56 == 23)
			return flag3;
	
		if (Global_1572887.f_196.f_56 == 24)
			return flag3;
	}

	if (Global_1572887.f_196.f_58 != false)
	{
		gamerHandle23 = { func_371(PLAYER::PLAYER_ID()) };
		flag4 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887.f_196.f_50), &gamerHandle23);
		flag5 = false;
	
		if (Global_1572887.f_196 > 0)
			flag5 = true;
	
		flag6 = !func_254(Global_1572887.f_196.f_59, 524288);
		flag7 = !func_254(Global_1572887.f_196.f_59, 2);
		flag8 = func_254(Global_1572887.f_196.f_59, 2);
		flag9 = func_254(Global_1572887.f_196.f_59, true);
		isDurangoVersion = MISC::IS_DURANGO_VERSION();
		flag10 = flag4 && flag5 || flag9;
		flag11 = flag10 && !isDurangoVersion;
		flag12 = flag6 && flag7 && !flag4;
	
		if (func_254(Global_1572887.f_196.f_58, true))
			return flag10;
	
		if (func_254(Global_1572887.f_196.f_58, 2))
			return flag10;
	
		if (func_254(Global_1572887.f_196.f_58, 4))
			return flag10;
	
		if (func_254(Global_1572887.f_196.f_58, 32))
			return flag10 || flag12;
	
		if (func_254(Global_1572887.f_196.f_58, 64))
			return flag10;
	
		if (func_254(Global_1572887.f_196.f_58, 8))
			return flag10;
	
		if (func_254(Global_1572887.f_196.f_58, 16))
			return flag10;
	
		if (func_254(Global_1572887.f_196.f_58, 128))
			return flag10;
	
		if (func_254(Global_1572887.f_196.f_58, 512))
			return flag10;
	
		if (func_254(Global_1572887.f_196.f_58, 8388608))
			return flag10;
	
		if (func_254(Global_1572887.f_196.f_58, 1024))
			return flag11;
	
		if (func_254(Global_1572887.f_196.f_58, 2048))
			return flag11;
	
		if (func_254(Global_1572887.f_196.f_58, 4096))
			return flag12 || flag12;
	
		if (func_254(Global_1572887.f_196.f_58, 8192))
			return flag10;
	
		if (func_254(Global_1572887.f_196.f_58, 16384))
			return flag10;
	
		if (func_254(Global_1572887.f_196.f_58, 32768))
			return flag10 || flag12;
	
		if (func_254(Global_1572887.f_196.f_58, 65536))
			return flag10;
	
		if (func_254(Global_1572887.f_196.f_58, 262144))
			return flag10;
	
		if (func_254(Global_1572887.f_196.f_58, 524288))
			return flag10;
	
		if (func_254(Global_1572887.f_196.f_58, 2097152))
			return flag10;
	
		if (func_254(Global_1572887.f_196.f_58, 4194304))
			return false;
	
		if (func_254(Global_1572887.f_196.f_58, 16777216))
			return false;
	
		if (func_254(Global_1572887.f_196.f_58, 256))
			return false;
	
		if (func_254(Global_1572887.f_196.f_58, 1048576))
			return flag10 && flag8;
	
		if (func_254(Global_1572887.f_196.f_58, 131072))
			return false;
	}

	return false;
}

void func_253(int iParam0) // Position - 0x89E0 Signature - 22 01 03 00 00 66 00 5D 17 00 18 80 C4 6C 36
{
	Global_1572887.f_196.f_54 = iParam0;
	return;
}

BOOL func_254(BOOL bParam0, BOOL bParam1) // Position - 0x89F2 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 01 03 00 00 5D
{
	return bParam0 && bParam1 != false;
}

void func_255(int iParam0) // Position - 0x8A01 Signature - 22 01 03 00 00 5D 17 00 18 80 C4 80 2B 66 00 39 90
{
	func_408(&(Global_1572887.f_196.f_43), iParam0);
	return;
}

void func_256() // Position - 0x8A17 Signature - 22 00 02 00 00 08
{
	Global_1940085.f_105 = -1;
	Global_1940085.f_105.f_1 = 0;
	return;
}

BOOL func_257(BOOL bParam0) // Position - 0x8A2F Signature - 22 01 03 00 00 5D 17 00 18 80 C4 27 2C
{
	return func_254(Global_1572887.f_196.f_44, bParam0);
}

void func_258(var uParam0) // Position - 0x8A45 Signature - 22 01 03 00 00 50 01 00 22 00 06
{
	return;
}

char* func_259() // Position - 0x8A4D Signature - 22 00 06 00 00 03 01 01
{
	var gamerHandle;
	BOOL flag;
	BOOL flag2;

	gamerHandle = { func_371(PLAYER::PLAYER_ID()) };
	flag = false;
	flag2 = false;

	if (Global_1572887.f_196.f_2 == 3 || Global_1572887.f_196.f_2 == 1 || func_254(Global_1572887.f_196.f_59, 2) || func_254(Global_1572887.f_196.f_60, 8))
		flag = true;

	if (NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_1572887.f_196.f_48)) && NETWORK::NETWORK_IS_HANDLE_VALID(&gamerHandle))
		flag2 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887.f_196.f_48), &gamerHandle);

	if (func_257(true))
		return "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_TARGET";

	if (func_257(2))
		return "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER";

	if (func_257(4))
		return "NT_INV_INCOMPATIBLE_LOBBY_LOAD_FAILURE";

	if (func_257(4096))
		return "NT_INV_INCOMPATIBLE_TIMEOUT";

	if (func_257(8192))
		return "NT_INV_INCOMPATIBLE_TIMEOUT";

	if (func_257(1024))
		return "NT_INV_INCOMPATIBLE_TIMEOUT";

	if (func_257(16384))
		return "NT_INV_INCOMPATIBLE_TIMEOUT";

	if (func_257(65536))
		return "NT_INV_INCOMPATIBLE_TIMEOUT";

	if (func_257(2048))
		return "NT_INV_INCOMPATIBLE_TIMEOUT";

	if (func_257(32768))
		return "NT_INV_INCOMPATIBLE_TIMEOUT";

	if (func_257(64))
		return "NT_INV_INCOMPATIBLE_NOT_IN_SESSION";

	if (func_257(8))
		return "NT_INV_INCOMPATIBLE_TIMEOUT";

	if (func_257(16))
		return "NT_INV_INCOMPATIBLE_TIMEOUT";

	if (func_257(32))
		return "NT_INV_INCOMPATIBLE_TIMEOUT";

	if (func_257(128))
		return flag ? "NT_INV_IN_SESSION" /*You are already a member of this GTA Online session.*/ : "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION";

	if (func_257(256))
		return flag ? "NT_INV_LEAVE_WARNING_JIP" : "NT_INV_LEAVE_WARNING";

	if (func_257(512))
		return flag ? "NT_INV_LEAVE_WARNING_POSSE_JIP" : "NT_INV_LEAVE_WARNING_POSSE";

	if (func_257(131072))
		return "MG_NO_MONEY_INV";

	if (func_257(262144))
		return "MG_ALERT_GANGLF";

	if (func_257(524288))
		return "MG_ALERT_GANGBR";

	if (func_257(1048576))
		return "MG_ALERT_BANNED2";

	if (func_257(2097152))
		return "MG_ALERT_CAPPED";

	if (func_257(4194304))
		return "MG_ALERT_CAPPED";

	if (func_257(8388608))
		return "MG_ALERT_CAPPED";

	if (func_257(16777216))
		return "MG_ALERT_PRIV_CAP";

	if (func_257(33554432))
		return "MG_ALERT_INV_MAINT";

	if (func_257(67108864))
		return "MG_ALERT_WANTED";

	if (func_257(134217728))
		return "NT_INV_INCOMPATIBLE_TIMEOUT";

	if (func_257(268435456))
		return "NT_INV_INCOMPATIBLE_PLAYER_RE_ROLL";

	if (func_257(536870912))
		return "JAIL_ALT_BODY";

	if (func_257(1073741824))
		return "MG_ALERT_GANGLF";

	if (func_254(Global_1572887.f_196.f_58, true))
		return "NT_INV_INCOMPATIBLE_MULTIPLAYER_LOCKED";

	if (func_254(Global_1572887.f_196.f_58, 1024))
		return "NT_INV_INCOMPATIBLE_MULTIPLAYER_PRIVILEGE";

	if (func_254(Global_1572887.f_196.f_58, 2048))
		return "NT_INV_INCOMPATIBLE_USER_CONTENT_PRIVILEGE";

	if (func_254(Global_1572887.f_196.f_58, 4096))
		return "NT_INV_INCOMPATIBLE_COMMUNICATION_PRIVILEGE";

	if (func_254(Global_1572887.f_196.f_58, 8192))
		return "NT_INV_INCOMPATIBLE_INACTIVE_PRIVILEGE";

	if (func_254(Global_1572887.f_196.f_58, 16384))
		return "NT_INV_INCOMPATIBLE_USER_CONTENT_PRIVILEGE_REMOTE";

	if (func_254(Global_1572887.f_196.f_58, 512))
		return "NT_INV_INCOMPATIBLE";

	if (func_254(Global_1572887.f_196.f_58, 8388608))
		return "NT_INV_INCOMPATIBLE_AIM";

	if (func_254(Global_1572887.f_196.f_58, 2))
		return "NT_INV_INCOMPATIBLE_LOCAL_NOT_IN_MULTIPLAYER";

	if (func_254(Global_1572887.f_196.f_58, 4))
		return "NT_INV_INCOMPATIBLE_NOT_IN_SESSION";

	if (func_254(Global_1572887.f_196.f_58, 8))
		return "NT_INV_POLICIES_NEED_ACCEPTING";

	if (func_254(Global_1572887.f_196.f_58, 16))
		return "NT_INV_POLICIES_DOWNLOAD_FAILED";

	if (func_254(Global_1572887.f_196.f_58, 32))
		return flag2 ? "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_TARGET" : "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER";

	if (func_254(Global_1572887.f_196.f_58, 64))
		return flag ? "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINING_PLAYER" : "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER";

	if (func_254(Global_1572887.f_196.f_58, 128))
		return "NT_INV_INCOMPATIBLE_JOIN_TO_LOCAL";

	if (func_254(Global_1572887.f_196.f_58, 32768))
		return flag2 ? "NT_INV_INCOMPATIBLE_REP_TARGET" : "NT_INV_INCOMPATIBLE_REP_JOINER";

	if (func_254(Global_1572887.f_196.f_58, 65536))
		return flag ? "NT_INV_IN_SESSION" /*You are already a member of this GTA Online session.*/ : "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION";

	if (func_254(Global_1572887.f_196.f_58, 262144))
		return "NT_INV_INCOMPATIBLE_NOT_FRIENDS";

	if (func_254(Global_1572887.f_196.f_58, 524288))
		return "NT_INV_INCOMPATIBLE_PRIVATE_SESSION";

	if (func_254(Global_1572887.f_196.f_58, 2097152))
		return "NT_INV_INCOMPATIBLE_IN_PUBLIC_POKER";

	func_254(Global_1572887.f_196.f_58, 4194304);
	func_254(Global_1572887.f_196.f_58, 16777216);
	func_254(Global_1572887.f_196.f_58, 256);

	if (func_254(Global_1572887.f_196.f_58, 1048576))
		return "NT_INV_INCOMPATIBLE_BLOCKED_BY_JOIN_TARGET";

	func_254(Global_1572887.f_196.f_58, 131072);

	if (Global_1572887.f_196.f_56 == 3)
		return "NT_INV_INCOMPATIBLE_TIMEOUT_RESULT";

	if (Global_1572887.f_196.f_56 == 4)
		return flag ? "NT_INV_IN_SESSION" /*You are already a member of this GTA Online session.*/ : "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION";

	if (Global_1572887.f_196.f_56 == 5)
		return "NT_INV_INCOMPATIBLE_INVITES_DISABLED";

	if (Global_1572887.f_196.f_56 == 6)
		return "NT_INV_INCOMPATIBLE_INVITES_DISABLED";

	if (Global_1572887.f_196.f_56 == 7)
		return "NT_INV_INCOMPATIBLE_DISCRIMINATOR";

	if (Global_1572887.f_196.f_56 == 8)
		return "NT_INV_INCOMPATIBLE_INSTANCED";

	if (Global_1572887.f_196.f_56 == 9)
		return "NT_INV_INCOMPATIBLE_VALIDATION_INVITEE";

	if (Global_1572887.f_196.f_56 == 10)
		return "NT_INV_INCOMPATIBLE_PRIVATE_SESSION";

	Global_1572887.f_196.f_56 == 11;

	if (Global_1572887.f_196.f_56 == 12)
		return "NT_INV_INCOMPATIBLE_INVITES_BLOCKED";

	if (Global_1572887.f_196.f_56 == 13)
		return "NT_INV_INCOMPATIBLE_JOIN_BLOCKED";

	if (Global_1572887.f_196.f_56 == 14)
		return "NT_INV_INCOMPATIBLE_HOST_INVITES_ONLY";

	if (Global_1572887.f_196.f_56 == 15)
		return "NT_INV_FAILED_SESSION_FULL";

	if (Global_1572887.f_196.f_56 == 16)
		return "NT_INV_FAILED_INVITER_CLEANED_UP";

	Global_1572887.f_196.f_56 == 17;

	if (Global_1572887.f_196.f_56 == 18)
		return "NT_INV_FAILED_NO_LONGER_IN_GANG";

	if (Global_1572887.f_196.f_56 == 19)
		return "NT_INV_FAILED_ADD_TO_GANG";

	if (Global_1572887.f_196.f_56 == 20)
		return "NT_INV_FAILED_GANG_CHANGED";

	if (Global_1572887.f_196.f_56 == 21)
		return "NT_INV_FAILED_SESSION_SWITCH";

	if (Global_1572887.f_196.f_56 == 22)
		return "NT_INV_FAILED_SESSION_SWITCH";

	if (Global_1572887.f_196.f_56 == 23)
		return "NT_INV_FAILED_SESSION_SWITCH";

	if (Global_1572887.f_196.f_56 == 24)
		return "NT_INV_FAILED_SESSION_SWITCH";

	if (Global_1572887.f_196.f_46 == 0)
		return "NT_INV_INCOMPATIBLE_REASON_OTHER";

	if (Global_1572887.f_196.f_46 == 1)
		return "NT_INV_INCOMPATIBLE_REASON_SYSTEM_UPDATE";

	if (Global_1572887.f_196.f_46 == 2)
		return "NT_INV_INCOMPATIBLE_REASON_GAME_UPDATE";

	if (Global_1572887.f_196.f_46 == 3)
		return "NT_INV_INCOMPATIBLE_REASON_SIGNED_OUT";

	if (Global_1572887.f_196.f_46 == 4)
		return "NT_INV_INCOMPATIBLE_AGE";

	if (Global_1572887.f_196.f_46 == 5)
		return "NT_INV_INCOMPATIBLE_REASON_CONNECTION";

	return "NT_INV_FAILED_GENERIC";
}

int func_260() // Position - 0x91B3 Signature - 22 00 02 00 00 25 00 10
{
	if (func_257(4096))
		return 27100000;

	if (func_257(8192))
		return 27110000;

	if (func_257(1024))
		return 27120000;

	if (func_257(16384))
		return 27130000;

	if (func_257(65536))
		return 27140000;

	if (func_257(2048))
		return 27150000;

	if (func_257(32768))
		return 27160000;

	if (func_257(8))
		return 27170000;

	if (func_257(16))
		return 27180000;

	if (func_257(32))
		return 27190000;

	if (func_257(131072))
		return 27300000;

	if (func_257(262144))
		return 27310000;

	if (func_257(524288))
		return 27320000;

	if (func_257(1048576))
		return 27330000;

	if (func_257(2097152))
		return 27340000;

	if (func_257(4194304))
		return 27350000;

	if (func_257(8388608))
		return 27360000;

	if (func_257(16777216))
		return 27370000;

	if (func_257(33554432))
		return 27380000;

	if (func_257(67108864))
		return 27390000;

	if (func_257(134217728))
		return 27400000;

	if (func_257(1073741824))
		return 27410000;

	return -1;
}

var func_261(BOOL bParam0, var uParam1, var uParam2) // Position - 0x9358 Signature - 22 03 05 00 00 66 00 8B 08 00 66 01 50 03 01 68 05 00 66 02 50 03 01 22 01
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_262(BOOL bParam0) // Position - 0x936F Signature - 22 01 03 00 00 5D 77 5E 10 18 54
{
	if (Global_1072759.f_28756.f_1 != SCRIPTS::GET_ID_OF_THIS_THREAD() && !bParam0)
		return;

	if (Global_1072759.f_28756.f_1 == 0)
		return;

	func_408(&(Global_1072759.f_28756.f_2), 2);
	return;
}

int func_263() // Position - 0x93B1 Signature - 22 00 02 00 00 5D FD
{
	return Global_1051645.f_12;
}

void func_264(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x93BF Signature - 22 05 07 00 00 66 00 8B
{
	if (bParam0)
	{
		func_341(1);
	
		if (bParam1)
			func_341(4);
		else
			func_306(4);
	
		if (bParam3)
			func_341(8);
		else
			func_306(8);
	
		if (bParam4)
			func_341(16);
		else
			func_306(16);
	}
	else
	{
		func_341(2);
	
		if (bParam1)
			func_341(4);
		else
			func_306(4);
	
		if (bParam3)
			func_341(8);
		else
			func_306(8);
	
		if (bParam2)
			func_341(128);
		else
			func_306(128);
	}

	return;
}

BOOL func_265(Player plParam0) // Position - 0x944D Signature - 22 01 03 00 00 66 00 6D FF 15 07
{
	if (plParam0 == 255)
		return func_410();

	return func_384(64, plParam0);
}

const char* func_266(const char* sParam0, int iParam1) // Position - 0x946B Signature - 22 02 04 00 00 66 00 03 05 01
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);

	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);

	return func_411(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_267(const char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x94A9 Signature - 22 0B 23
{
	var unk;
	var unk14;
	int num;

	unk = -2;
	unk = iParam4;
	unk.f_1 = iParam5;
	unk.f_2 = iParam6;
	unk.f_3 = iParam8;
	unk14.f_7 = 1;
	unk14 = iParam7;
	unk14.f_1 = sParam0;
	unk14.f_2 = sParam1;
	unk14.f_3 = 0;
	unk14.f_4 = iParam2;
	unk14.f_5 = iParam3;
	unk14.f_7 = 1;
	num = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&unk, &unk14, bParam9, bParam10);
	return num;
}

BOOL func_268(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, BOOL bParam17) // Position - 0x950F Signature - 22 12 14
{
	return func_254(uParam0.f_11, bParam17);
}

BOOL func_269(int iParam0) // Position - 0x9521 Signature - 22 01 03 00 00 5D 17 00 18 80 C4 27 2B
{
	return func_254(Global_1572887.f_196.f_43, iParam0);
}

BOOL func_270() // Position - 0x9537 Signature - 22 00 02 00 00 5D 2A
{
	return Global_1295658.f_2.f_1 == 2 || Global_1295658.f_2.f_1 == 1;
}

void func_271(int iParam0) // Position - 0x9559 Signature - 22 01 03 00 00 5D 17 00 18 80 C4 80 2C
{
	func_408(&(Global_1572887.f_196.f_44), iParam0);
	return;
}

BOOL func_272() // Position - 0x956F Signature - 22 00 02 00 00 5D AC
{
	return Global_1900460.f_67;
}

BOOL func_273() // Position - 0x957D Signature - 22 00 02 00 00 85 32
{
	return Global_263042[Global_1295666 /*65*/] > 2;
}

int func_274() // Position - 0x9591 Signature - 22 00 02 00 00 5D 17 00 18 80 C4 27 02 50
{
	return Global_1572887.f_196.f_2;
}

BOOL func_275(BOOL bParam0) // Position - 0x95A1 Signature - 22 01 23
{
	var unk;
	int num;
	Player player;
	Player player2;
	int num2;
	int num3;

	num.f_1 = -1;
	num.f_2 = -1;
	num.f_3 = -1;
	num.f_3.f_1 = -1;

	if (bParam0)
	{
		num = { func_412() };
		player = func_413();
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			player2 = player;
		
			if (func_414(player2))
				func_408(&(num.f_10), 4);
			else
				func_415(&(num.f_10), 4);
		
			num = func_338(player2);
			num.f_1 = func_416(player2);
			num.f_2 = func_417(player2);
			num.f_3 = { func_418(player2) };
		}
	}
	else
	{
		unk = { func_296() };
	
		if (NETWORK::_0xD1FFB246F4E088AC(unk.f_10))
			NETWORK::_0xC0CFFDA87C2C163D(NETWORK::_0x27B1AE4D8C652F08(unk.f_10), &num, 11);
	}

	num2 = func_393(num.f_3);
	Global_1149172.f_143 = num2;

	if (num == 3)
	{
		func_255(8192);
		num3 = func_419(num2);
	
		if (!(num3 == 0))
		{
			if (num3 == 5)
				func_271(262144);
			else if (num3 == 8)
				func_271(1048576);
			else if (num3 == 9)
				func_271(2097152);
			else if (num3 == 10)
				func_271(4194304);
			else if (num3 == 11)
				func_271(8388608);
			else if (num3 == 12)
				func_271(16777216);
			else if (num3 == 14)
				func_271(33554432);
			else if (num3 == 15)
				func_271(67108864);
			else if (num3 == 6)
				func_271(131072);
			else if (num3 == 7)
				func_271(524288);
		
			return false;
		}
	}

	return true;
}

BOOL func_276(BOOL bParam0) // Position - 0x9742 Signature - 22 01 04 00 00 66 00 5D
{
	int num;

	num = bParam0 ? Global_1901671.f_2.f_22 : Global_1901671.f_2.f_21;
	return MISC::GET_GAME_TIMER() - Global_1572887.f_196.f_42 > num;
}

BOOL func_277() // Position - 0x9772 Signature - 22 00 03 00 00 85
{
	var unk;

	if (Global_1051194)
		return false;

	if (func_420(&unk))
	{
		func_421(3, 0, 1, 0, -1, true, unk);
		return false;
	}

	return true;
}

void func_278(BOOL bParam0) // Position - 0x979F Signature - 22 01 05 00 00 4B 03 03
{
	int num;
	Any gangId;

	POSSE::_0xC08AFF658B2E51DA(&num);

	if (num != 0)
	{
		func_408(&(Global_1203952.f_3), 32);
		func_408(&(Global_1203952.f_4), 12);
		Global_1203952.f_478 = num;
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
			func_408(&(Global_1203952.f_4), 2);
	
		POSSE::_0xC08BFF658B2E51DA(0);
		Global_1203952.f_5[5] = false;
		func_408(&Global_1203952.f_5[5], 1);
	}

	Global_1203952.f_5[3] = false;
	func_408(&Global_1203952.f_5[3], 1);
	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (!GANG::NETWORK_IS_GANG_ID_VALID(gangId))
	{
		func_408(&Global_1203952.f_5[3], 6);
		return;
	}

	if (!GANG::NETWORK_IS_GANG_ACTIVE(gangId))
	{
		func_408(&Global_1203952.f_5[3], 6);
		return;
	}

	GANG::_NETWORK_LEAVE_GANG(bParam0);
	return;
}

void func_279() // Position - 0x9873 Signature - 22 00 02 00 00 2F 5D 17
{
	Global_1572887.f_196.f_62 = 0;
	return;
}

void func_280() // Position - 0x9884 Signature - 22 00 02 00 00 03 01 00 F4 5D 77
{
	Global_1072759.f_28644.f_109 = MISC::GET_GAME_TIMER();
	return;
}

void func_281() // Position - 0x9899 Signature - 22 00 02 00 00 5D DD D3 10 27
{
	if (!Global_1102813.f_16)
		return;

	Global_1072759.f_28644.f_5 = 1;
	AUDIO::_RELEASE_SOUNDSET("rdro_gamemode_transition_sounds");
	AUDIO::_RELEASE_SOUNDSET("rdro_gamemode_generic_sounds");
	return;
}

BOOL func_282() // Position - 0x98C8 Signature - 22 00 02 00 00 5D 77 5E 10 18 E4 6F 80 42 27 2A 2F
{
	return Global_1072759.f_28644.f_66.f_42 != 0;
}

BOOL func_283() // Position - 0x98DD Signature - 22 00 02 00 00 03 01 00 0C
{
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(func_423(func_422())))
		return 1;

	return 0;
}

void func_284(int iParam0) // Position - 0x9901 Signature - 22 01 03 00 00 5D 17 00 18 80 C4 80 2B 66 00 39 79
{
	func_415(&(Global_1572887.f_196.f_43), iParam0);
	return;
}

void func_285(BOOL bParam0, BOOL bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8) // Position - 0x9917 Signature - 22 09 0B
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

void func_286(BOOL bParam0, int iParam1) // Position - 0x99D6 Signature - 22 02 04 00 00 66 00 8B
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

BOOL func_287() // Position - 0x99F8 Signature - 22 00 02 00 00 09 6D
{
	return func_345(1, 255);
}

int func_288(int iParam0) // Position - 0x9A07 Signature - 22 01 03 00 00 5D DD D3 10 80 04 66 00 62 39 63
{
	if (func_372(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_289(int iParam0, int iParam1) // Position - 0x9A24 Signature - 22 02 04 00 00 66 00 66 01 39 EC
{
	if (!func_424(iParam0, iParam1))
	{
		MISC::SET_BIT(&Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_425();
	}

	return;
}

BOOL func_290() // Position - 0x9A68 Signature - 22 00 02 00 00 5D 77 5E 10 18 E4 6F 80 42 27 2A 6D
{
	if (Global_1072759.f_28644.f_66.f_42 >= 9)
		return true;

	return false;
}

BOOL func_291() // Position - 0x9A85 Signature - 22 00 04 00 00 03 01 00 F4
{
	int gameTimer;
	int num;

	gameTimer = MISC::GET_GAME_TIMER();
	num = gameTimer - Global_1072759.f_28644.f_109;

	if (num < Global_1901671.f_2.f_39)
		return false;

	return true;
}

void func_292(BOOL bParam0) // Position - 0x9AB3 Signature - 22 01 03 00 00 39 1E
{
	if (func_426())
		Global_1958683 = true;

	func_427(joaat("camera_item"));

	if (bParam0 && Global_1940199.f_38 == joaat("weapon_kit_camera") || Global_1940199.f_38 == 332793555)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1940199.f_38 = joaat("WEAPON_UNARMED");
	}

	return;
}

int func_293() // Position - 0x9B16 Signature - 22 00 02 00 00 5D 08 3B 1D 78 11
{
	return Global_1915656.f_20241;
}

void func_294(int iParam0, BOOL bParam1) // Position - 0x9B25 Signature - 22 02 04 00 00 66 00 39 89 D5 00 05 8B 03 00 50 02 00 66
{
	if (!func_428(iParam0))
		return;

	if (bParam1 && func_429(iParam0, 512) || !bParam1 && !func_429(iParam0, 512))
		return;

	if (bParam1)
		func_430(iParam0, 512);
	else
		func_431(iParam0, 512);

	if (func_310(iParam0))
		INVENTORY::_0x9B4E793B1CB6550A();

	return;
}

void func_295() // Position - 0x9B8F Signature - 22 00 04 00 00 03 01 00 0C
{
	Ped rider;
	Ped mount;

	rider = PLAYER::PLAYER_PED_ID();
	mount = PED::GET_MOUNT(rider);

	if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
		TASK::TASK_DISMOUNT_ANIMAL(rider, 0, 0, 0, 0, 0);

	return;
}

struct<17> func_296() // Position - 0x9BC5 Signature - 22 00 02 00 00 6D 11
{
	return Global_1572887.f_196.f_13;
}

void func_297(var uParam0) // Position - 0x9BD8 Signature - 22 01 03 00 00 6D 0B
{
	Global_1572887.f_196.f_30 = { *uParam0 };
	return;
}

void func_298() // Position - 0x9BF0 Signature - 22 00 03 00 00 2F 67 02 66 02 0D
{
	int i;

	for (i = 0; i <= 7; i = i + 1)
	{
		if (SCRIPTS::DOES_THREAD_EXIST(Global_1206497.f_78[i /*20*/].f_5))
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_1206497.f_78[i /*20*/].f_5);
	
		if (SCRIPTS::DOES_THREAD_EXIST(Global_1206497.f_78[i /*20*/].f_4))
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_1206497.f_78[i /*20*/].f_4);
	}

	return;
}

BOOL func_299() // Position - 0x9C50 Signature - 22 00 02 00 00 39 B5
{
	return func_432() != 0 || func_433(1);
}

int func_300(int iParam0) // Position - 0x9C69 Signature - 22 01 03 00 00 39 D9
{
	if (func_434())
		return 0;

	if (!func_299())
		return 0;

	if (func_435())
		func_436(2);
	else
		func_436(1);

	func_437(iParam0);
	return 1;
}

BOOL func_301() // Position - 0x9CA3 Signature - 22 00 03 00 00 03 01 01 42
{
	var loadingState;

	if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
		return false;

	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
		return false;

	if (!NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&loadingState))
		return false;

	return true;
}

void func_302() // Position - 0x9CD2 Signature - 22 00 02 00 00 6D 40 39 22
{
	func_67(64);
	func_68();
	func_69(joaat("freeroam"), joaat("follow_invite"), 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_24(3);
	CAM::DO_SCREEN_FADE_OUT(0);
	return;
}

BOOL func_303() // Position - 0x9D05 Signature - 22 00 02 00 00 5D 17 00 18 27 0E 08 15 04 00 2F 50 00 01 5D 77 5E 10 27 04
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_4;
}

void func_304() // Position - 0x9D21 Signature - 22 00 02 00 00 5D 17 00 18 80 C4 27 02 3C
{
	switch (Global_1572887.f_196.f_2)
	{
		case 0:
		case 2:
		case 4:
			func_438(2);
			break;
	
		case 1:
		case 3:
		case 5:
			func_438(3);
			break;
	}

	return;
}

int func_305() // Position - 0x9D6B Signature - 22 00 03 00 00 09
{
	int num;

	if (func_276(true))
	{
		func_271(1024);
		return 2;
	}

	if (!func_12())
	{
		func_271(2);
		func_255(2);
		func_75(0);
		return 2;
	}

	if (Global_1072759.f_28761)
	{
		func_271(268435456);
		func_255(2);
		return 2;
	}

	if (func_269(16384))
		return 2;

	num = func_439();
	return num;
}

void func_306(int iParam0) // Position - 0x9DD3 Signature - 22 01 03 00 00 66 00 39 3C
{
	if (func_340(iParam0))
		func_440(&(Global_1072759.f_28644.f_23.f_1), iParam0);

	return;
}

void func_307(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x9DF5 Signature - 22 04 06 00 00 66 00 39 EC
{
	func_441(iParam0);

	if (!func_442(1))
		return;

	if (bParam1)
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	else if (!func_443(128) && !func_444(19))
		CAM::DO_SCREEN_FADE_OUT(iParam2);

	if (bParam3 && func_445() == 4)
		func_348(18);

	func_446(1024);
	return;
}

BOOL func_308(int iParam0) // Position - 0x9E57 Signature - 22 01 03 00 00 66 00 39 79
{
	return !func_234(iParam0);
}

void func_309(BOOL bParam0) // Position - 0x9E66 Signature - 22 01 03 00 00 66 00 05 8B 0A 00 6D 12
{
	if (!bParam0)
		func_348(18);
	else
		func_288(18);

	return;
}

BOOL func_310(int iParam0) // Position - 0x9E85 Signature - 22 01 03 00 00 39 B0
{
	if (func_447())
		if (Global_1915656.f_20241 == iParam0)
			return true;

	return false;
}

void func_311(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x9EA5 Signature - 22 03 06 00 00 39
{
	BOOL flag;

	if (func_303())
		if (func_448(255))
			if (!func_345(39, 255))
				return;

	flag = bParam0;

	if (!bParam0)
	{
		if (func_449(Global_1893611.f_2) && func_450(Global_1893611.f_2))
		{
			func_451(Global_1893611.f_2, 0);
		
			if (iParam1 != 0)
			{
				Global_1893611.f_7 = iParam1;
				func_452(16);
			}
		}
		else if (func_449(Global_1893611.f_2) && !func_453(Global_1893611.f_2, 2))
		{
			bParam0 = true;
		}
	}

	if (bParam0)
	{
		!CAM::IS_SCREEN_FADED_OUT();
		Global_1893611.f_7 = 0;
		func_454(16);
		func_455(bParam2);
	
		if (flag)
			func_454(true);
	}

	return;
}

BOOL func_312(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x9F65 Signature - 22 02 04 00 00 66 00 03 05 00 33
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

void func_313() // Position - 0x9FBE Signature - 22 00 02 00 00 5D 77 5E 10 18 54
{
	if (Global_1072759.f_28756.f_1 != 0)
		return;

	func_408(&(Global_1072759.f_28756.f_2), 1);
	Global_1072759.f_28756.f_1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	return;
}

BOOL func_314() // Position - 0x9FF1 Signature - 22 00 02 00 00 5D 77 5E 10 78
{
	return Global_1072759.f_28756 >= 3;
}

void func_315() // Position - 0xA002 Signature - 22 00 02 00 00 09 03 05
{
	if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(1) && func_456(524288))
		return;

	PED::_SET_AMBIENT_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	PED::_SET_AMBIENT_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(true);
	return;
}

int func_316(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xA04E Signature - 22 04 07 00 00 39
{
	Hash hash;

	if (func_457() && !bParam3)
		return 0;

	if (!bParam2)
		func_73(false);

	func_458();

	if (func_459(255, false))
		if (GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) != PLAYER::PLAYER_ID())
			if (!bParam2 && bParam1)
				func_278(true);

	if (NETWORK::NETWORK_IS_SESSION_ACTIVE())
		NETWORK::_NETWORK_SESSION_SET_PLAYER_FLAGS(0);

	func_460();
	func_461(21);
	hash = func_463(func_462(Global_1572887.f_72.f_9));
	Global_1572887.f_72.f_60.f_1 = hash != 0 ? hash : Global_1572887.f_72.f_9;
	Global_1572887.f_72.f_60.f_2 = iParam0;
	Global_1572887.f_72.f_60.f_4 = MISC::GET_GAME_TIMER() - Global_1572887.f_72.f_41;
	func_464();
	return 1;
}

void func_317() // Position - 0xA114 Signature - 22 00 02 00 00 5D 17 00 18 80 08 09 39 79
{
	func_415(&(Global_1572887.f_8), 1);
	func_408(&(Global_1572887.f_8), 1073741824);
	func_465();
	return;
}

void func_318() // Position - 0xA13A Signature - 22 00 03 00 00 25
{
	Hash hashKey;

	hashKey = MISC::GET_HASH_KEY("net_ugc_end_flow");
	SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(hashKey);
	hashKey = MISC::GET_HASH_KEY("mc_transition_results");
	SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(hashKey);
	hashKey = MISC::GET_HASH_KEY("mc_transition_cutscene");
	SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(hashKey);
	hashKey = MISC::GET_HASH_KEY("net_mc_vs_mission_intro");
	SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(hashKey);
	hashKey = MISC::GET_HASH_KEY("net_mission_intro_story_gvo");
	SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(hashKey);
	return;
}

void func_319() // Position - 0xA192 Signature - 22 00 02 00 00 2F 03 04 00 09
{
	NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);

	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		CAM::DO_SCREEN_FADE_IN(0);

	func_255(4);
	func_202(23);
	return;
}

struct<4> func_320() // Position - 0xA1C0 Signature - 22 00 02 00 00 42 5D
{
	return Global_1572887.f_196.f_3;
}

struct<6> func_321() // Position - 0xA1D2 Signature - 22 00 02 00 00 4D
{
	return Global_1572887.f_196.f_7;
}

void func_322() // Position - 0xA1E4 Signature - 22 00 02 00 00 39 7E
{
	if (!func_334())
		func_466(Global_1295666.f_12);

	return;
}

void func_323(Player plParam0) // Position - 0xA200 Signature - 22 01 03 00 00 66 00 5D 17 00 18 80 C4 6C 29
{
	Global_1572887.f_196.f_41 = plParam0;
	return;
}

BOOL func_324() // Position - 0xA212 Signature - 22 00 02 00 00 5D 17 00 18 27 0E 08 15 04 00 2F 50 00 01 5D 77 5E 10 27 03
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_3;
}

BOOL func_325() // Position - 0xA22E Signature - 22 00 02 00 00 5D 17 00 18 27 0E 08 15 04 00 2F 50 00 01 5D 77 5E 10 27 05
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_5;
}

int func_326() // Position - 0xA24A Signature - 22 00 02 00 00 85 0B
{
	return Global_262155;
}

BOOL func_327() // Position - 0xA256 Signature - 22 00 02 00 00 5D 77 5E 10 18 E4 6F 80 17
{
	return Global_1072759.f_28644.f_23.f_3 != 0;
}

void func_328(BOOL bParam0) // Position - 0xA26B Signature - 22 01 03 00 00 66 00 05 8B 0A 00 6D 13
{
	if (!bParam0)
		func_348(19);
	else
		func_288(19);

	return;
}

int func_329() // Position - 0xA28A Signature - 22 00 02 00 00 5D 17 00 18 80 C4 27 2F
{
	return Global_1572887.f_196.f_47;
}

BOOL func_330() // Position - 0xA29A Signature - 22 00 02 00 00 25 00 04 39 13 E0 00 50
{
	return func_467(1024);
}

int func_331() // Position - 0xA2A9 Signature - 22 00 10
{
	int num;
	BOOL flag;
	Player player;
	Player player2;

	num.f_1 = -1;
	num.f_2 = -1;
	num.f_3 = -1;
	num.f_3.f_1 = -1;
	num = { func_412() };
	flag = NETWORK::NETWORK_SESSION_GET_SESSION_TYPE() == 4;
	player = func_413();

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
	{
		player2 = player;
		num.f_10 = func_468(player2);
		num = func_338(player2);
		num.f_1 = func_416(player2);
		num.f_2 = func_417(player2);
		num.f_3 = { func_418(player2) };
		num.f_8 = func_469(player2);
		num.f_9 = func_470(player2);
	}

	if (!func_254(num.f_10, true))
		return 0;

	if (num == 0 && num.f_1 == -1 && !func_471(num.f_3))
		return 2;

	if (!func_254(num.f_10, 4) && !flag)
		return 2;

	switch (num)
	{
		case 2:
			if (func_238(player, 4096))
				return 2;
			break;
	
		case 3:
			if (func_274() == 2)
				if (!func_472())
					return 0;
		
			if (!func_275(true))
			{
				func_255(4);
				func_255(4096);
				return 2;
			}
		
			if (!func_473(num.f_3))
				return 0;
			break;
	}

	switch (func_274())
	{
		case 0:
		case 2:
			func_474(4);
			break;
	
		case 1:
		case 3:
		case 5:
			func_474(9);
			break;
	
		case 4:
			func_474(8);
			break;
	}

	func_475(num, num.f_1, num.f_3, num.f_2, num.f_8, num.f_9);
	return 1;
}

void func_332() // Position - 0xA457 Signature - 22 00 02 00 00 09 5D
{
	Global_1572887.f_196.f_62 = 1;
	return;
}

void func_333(int iParam0) // Position - 0xA468 Signature - 22 01 03 00 00 5D 17 00 18 80 48 80 0F
{
	func_408(&(Global_1572887.f_72.f_15), iParam0);
	return;
}

BOOL func_334() // Position - 0xA47E Signature - 22 00 05 00 00 25 00
{
	int randomIntInRange;
	int num;
	int num2;

	if (!func_269(256))
		return false;

	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), false, false, true, true);
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	num = func_476(randomIntInRange);
	num2 = func_477(num);
	func_478(num2, false);
	return true;
}

void func_335(BOOL bParam0) // Position - 0xA4CB Signature - 22 01 03 00 00 66 00 05 8B 0A 00 6D 19
{
	if (!bParam0)
		func_348(25);
	else
		func_288(25);

	return;
}

void func_336(BOOL bParam0) // Position - 0xA4EA Signature - 22 01 03 00 00 66 00 05 8B 0A 00 6D 14
{
	if (!bParam0)
		func_348(20);
	else
		func_288(20);

	return;
}

void func_337(Player plParam0, BOOL bParam1) // Position - 0xA509 Signature - 22 02 05 00 00 66 00 03
{
	BOOL flag;

	if (func_479(GANG::NETWORK_GET_GANG_ID(plParam0)))
		flag = func_480(plParam0);
	else
		flag = GANG::_NETWORK_REQUEST_GANG_JOIN(GANG::NETWORK_GET_GANG_ID(plParam0));

	if (bParam1)
		if (!flag)
			func_350(true);
		else
			func_481();

	return;
}

int func_338(Player plParam0) // Position - 0xA54C Signature - 22 01 03 00 00 66 00 5D 2A 1F 10 40 EB 01 27
{
	return Global_1056554[plParam0 /*491*/].f_204;
}

BOOL func_339() // Position - 0xA55F Signature - 22 00 0E
{
	Ped playerPed;
	float entityCoords;
	Vector3 vector;
	var groundZ;
	var unk5;
	float num;

	playerPed = PLAYER::GET_PLAYER_PED(Global_1572887.f_196.f_41);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(playerPed))
		return false;

	if (func_234(255))
	{
		func_309(true);
		return false;
	}

	entityCoords = { ENTITY::GET_ENTITY_COORDS(playerPed, false, false) };
	entityCoords.f_2 = PATHFIND::GET_APPROX_FLOOR_FOR_POINT(entityCoords, entityCoords.f_1);
	vector = { entityCoords };
	vector.f_2 = vector.f_2 + 7f;

	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, false))
		entityCoords.f_2 = groundZ;

	num = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;

	if (!func_482(&unk5, &num))
		unk5 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };

	func_309(false);
	func_328(false);
	func_483(entityCoords, num, unk5, num, 5f, 20f, true, 1, 1, 1);
	return true;
}

BOOL func_340(int iParam0) // Position - 0xA63C Signature - 22 01 03 00 00 5D 77 5E 10 18 E4 6F 80 17 27
{
	return func_484(Global_1072759.f_28644.f_23.f_1, iParam0);
}

void func_341(int iParam0) // Position - 0xA655 Signature - 22 01 03 00 00 5D 77 5E 10 18 E4 6F 80 17 80
{
	func_485(&(Global_1072759.f_28644.f_23.f_1), iParam0);
	return;
}

BOOL func_342() // Position - 0xA66E Signature - 22 00 02 00 00 39 8A
{
	if (func_329() != 2)
		return false;

	if (!func_12())
		return false;

	if (func_269(2048))
		return true;

	if (func_254(Global_1572887.f_196.f_45, 1342177410))
		return false;

	if (Global_1572887.f_196.f_57 != 2 && Global_1572887.f_196.f_45 == false)
		return false;

	if (func_254(Global_1572887.f_196.f_58, 65536))
		return false;

	if (Global_1572887 != 39)
		return false;

	return true;
}

int func_343(int iParam0, BOOL bParam1, int iParam2) // Position - 0xA6F9 Signature - 22 03 05 00 00 5D 17
{
	if (Global_1572887.f_260.f_4 != 0)
		return 0;

	if (Global_1572887.f_196 >= 6 && Global_1572887.f_196 < 23)
		return 0;

	Global_1572887.f_260.f_4 = 2;
	Global_1572887.f_260.f_5 = Global_1572887.f_260.f_5 || bParam1;
	Global_1572887.f_260.f_6 = iParam0;
	Global_1572887.f_260.f_20 = iParam2;
	Global_1572887.f_260.f_21 = 0;

	if (func_254(bParam1, 128))
		func_415(&(Global_1572887.f_260.f_5), 2);

	return 1;
}

void func_344(BOOL bParam0, BOOL bParam1) // Position - 0xA788 Signature - 22 02 04 00 00 6D FF
{
	if (func_346(255) == 4)
		return;

	if (_IS_NULL_VECTOR(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
		return;

	if (!bParam0)
	{
		func_348(0);
	}
	else
	{
		if (bParam1)
			func_307(0, false, 0, true);
	
		func_288(0);
		func_487(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");
		func_488(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
	
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}

	func_489(Global_1102813.f_3839, 36);
	func_490(Global_1102813.f_3878, 36);
	return;
}

BOOL func_345(int iParam0, Player plParam1) // Position - 0xA8D3 Signature - 22 02 05 00 00 66 00 67
{
	int num;

	num = iParam0;

	if (plParam1 == 255)
		return func_216(&(Global_1102813.f_4), num, 5);

	if (plParam1 == func_491())
		return func_216(&(Global_1102813.f_4), num, 5);

	if (plParam1 < 0 || plParam1 >= 32)
		return false;

	if (Global_1295666.f_17[plParam1])
		return func_216(&(Global_1101558[plParam1 /*38*/].f_4), num, 5);

	return false;
}

int func_346(int iParam0) // Position - 0xA947 Signature - 22 01 03 00 00 66 00 6D FF 15 09
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

void func_347(BOOL bParam0) // Position - 0xA992 Signature - 22 01 03 00 00 66 00 05 8B 0A 00 6D 17
{
	if (!bParam0)
		func_348(23);
	else
		func_288(23);

	return;
}

int func_348(int iParam0) // Position - 0xA9B1 Signature - 22 01 03 00 00 5D DD D3 10 80 04 66 00 62 39 39
{
	if (func_492(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_349(int iParam0, int iParam1, BOOL bParam2) // Position - 0xA9CE Signature - 22 03 05 00 00 66 00 66 01 39
{
	if (func_424(iParam0, iParam1) && !bParam2 || Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD())
	{
		MISC::CLEAR_BIT(&Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = 0;
		func_425();
	}

	return;
}

void func_350(BOOL bParam0) // Position - 0xAA35 Signature - 22 01 16
{
	var unk;

	if (func_467(1024))
	{
		func_493(1, true);
		func_494(1024);
	
		if (bParam0)
		{
			unk.f_2 = 0;
			unk.f_3 = MISC::GET_HASH_KEY("IB_ACCEPT");
			unk.f_3.f_3 = 0;
			Global_1203952.f_111.f_1 = func_495(&unk, "NG_PP_JOIN_FAIL_TITLE", "NG_PP_JOIN_FAIL_SUBH", 0, 0, true);
		}
	}

	return;
}

void func_351() // Position - 0xAA8B Signature - 22 00 32
{
	int i;
	int num;
	var gamerHandle;
	Hash hash;
	int num2;

	for (i = 0; i <= 29; i = i + 1)
	{
		hash = { Global_1940252.f_245.f_14[i /*43*/] };
		num = DATABINDING::DATABINDING_READ_INT(hash.f_30);
	
		if (num != 1)
		{
		}
		else
		{
			num2 = NETWORK::_0x27B1AE4D8C652F08(DATABINDING::DATABINDING_READ_INT(hash.f_31));
		
			if (!NETWORK::_0x16EFB123C4451032(num2, &gamerHandle))
			{
			}
			else if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&gamerHandle))
			{
				func_496(hash);
			}
		}
	}

	return;
}

void func_352() // Position - 0xAAF9 Signature - 22 00 02 00 00 2F 39
{
	func_497(false);
	return;
}

BOOL func_353(var uParam0) // Position - 0xAB06 Signature - 22 01 03 00 00 66 00 76 09 39 FB 7B 00 50 01 01 22 01 03 00 00 66 00 76
{
	return func_241(*uParam0, 1);
}

BOOL func_354(var uParam0) // Position - 0xAB16 Signature - 22 01 03 00 00 66 00 76 11 39 FB 7B 00 50 01 01 22 01
{
	return func_241(*uParam0, 2);
}

int func_355(int iParam0) // Position - 0xAB26 Signature - 22 01 03 00 00 66 00 03 01
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_356(char* sParam0, int iParam1, int iParam2) // Position - 0xAB38 Signature - 22 03 0D
{
	Player player;
	int textureDownloadId;
	int num;
	var gamerHandle;
	int personaPhotoLocalCacheType;
	int statusOfTextureDownload;
	const char* name;

	if (iParam1 < 0 || iParam1 >= 32)
		return 1;

	player = PLAYER::INT_TO_PLAYERINDEX(iParam1);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		return 1;

	TEXT_LABEL_ASSIGN_STRING(sParam0, "", 128);
	num = func_498(iParam1, iParam2);

	switch (iParam2)
	{
		case 0:
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(PLAYER::INT_TO_PLAYERINDEX(iParam1), &gamerHandle);
		
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
					personaPhotoLocalCacheType = func_499(iParam2);
					textureDownloadId = NETWORK::_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(iParam1, personaPhotoLocalCacheType);
				
					if (textureDownloadId == -1)
					{
						return 3;
					}
					else if (textureDownloadId == 0)
					{
						func_500(iParam1, iParam2, 0);
						return 1;
					}
				
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(NETWORK::TEXTURE_DOWNLOAD_GET_NAME(textureDownloadId)))
						func_500(iParam1, iParam2, 3);
					else
						func_500(iParam1, iParam2, 4);
				
					func_501(iParam1, iParam2, textureDownloadId);
					break;
			
				case 3:
					textureDownloadId = func_502(iParam1, iParam2);
				
					if (textureDownloadId == 0)
					{
						func_500(iParam1, iParam2, 0);
						return 1;
					}
				
					statusOfTextureDownload = NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(textureDownloadId);
				
					switch (statusOfTextureDownload)
					{
						case 0:
							func_500(iParam1, iParam2, 4);
							return 3;
					
						case 1:
							return 3;
					
						case 2:
							func_500(iParam1, iParam2, 0);
							return 1;
					
						default:
							break;
					}
					break;
			
				case 4:
					textureDownloadId = func_502(iParam1, iParam2);
				
					if (textureDownloadId == 0)
					{
						func_500(iParam1, iParam2, 0);
						return 1;
					}
				
					name = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(textureDownloadId);
				
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(name))
						return 3;
				
					func_500(iParam1, iParam2, 5);
					break;
			
				case 5:
					textureDownloadId = func_502(iParam1, iParam2);
				
					if (textureDownloadId == 0)
					{
						func_500(iParam1, iParam2, 0);
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

int func_357() // Position - 0xAD26 Signature - 22 00 02 00 00 5D F8
{
	return Global_1149432.f_5087.f_325;
}

void func_358(int iParam0) // Position - 0xAD38 Signature - 22 01 07 00 00 2F
{
	int num;

	num.f_3 = 0;
	num.f_1 = 1;
	num = 2;
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(num.f_2), iParam0);
	func_503(&num);
	return;
}

void func_359(var uParam0, BOOL bParam1) // Position - 0xAD5D Signature - 22 02 04 00 00 66 01 6A 05 8B 08 00 66 00 39 06
{
	if (bParam1 || !func_353(uParam0))
		func_504(uParam0);

	return;
}

char* func_360(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0xAD7D Signature - 22 10
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

BOOL func_361(var uParam0, var uParam1) // Position - 0xAD91 Signature - 22 02 04 00 00 4B 00
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

void func_362(const char* sParam0, var uParam1, int iParam2, char* sParam3, BOOL bParam4) // Position - 0xAD9F Signature - 22 05 0A 00 00 09
{
	char* str;
	BOOL flag;
	Hash hashKey;

	flag = true;
	hashKey = MISC::GET_HASH_KEY(sParam3);

	switch (iParam2)
	{
		case 8:
			str = func_506(sParam0->f_12.f_11.f_4, &flag);
		
			if (flag)
			{
				if (bParam4)
				{
					uParam1->f_20 = joaat("mp_lobby_textures");
					uParam1->f_21 = joaat("temp_pedshot");
					uParam1->f_33.f_6 = joaat("mp_lobby_textures");
					uParam1->f_33.f_7 = joaat("temp_pedshot");
					uParam1->f_33.f_21 = 1;
				}
				else
				{
					uParam1->f_20 = hashKey;
					uParam1->f_21 = hashKey;
					uParam1->f_33.f_6 = hashKey;
					uParam1->f_33.f_7 = hashKey;
					uParam1->f_33.f_21 = 0;
				}
			
				uParam1->f_26 = 8;
				uParam1->f_27 = Global_1072759.f_23;
				uParam1->f_27.f_1 = sParam0->f_43;
				uParam1->f_27.f_2 = sParam0->f_42;
				uParam1->f_16 = MISC::VAR_STRING(2, str);
				uParam1->f_17 = func_508(MISC::VAR_STRING(10, "CHALLENGE_NOTICE_SUB_INFO", func_507(sParam0->f_43)), joaat("COLOR_PURE_WHITE"));
				uParam1->f_25 = Global_1901671.f_319.f_177 / 1000;
				uParam1->f_32 = NETWORK::NETWORK_IS_FEATURE_SUPPORTED(0);
				uParam1->f_31 = "IB_GAMERCARD";
				uParam1->f_30 = 4;
				uParam1->f_33.f_2 = func_266(PLAYER::GET_PLAYER_NAME(sParam0->f_43), joaat("COLOR_PURE_WHITE"));
				uParam1->f_33.f_3 = MISC::VAR_STRING(2, func_510(func_509(sParam0->f_12)));
				uParam1->f_33.f_17 = "HUD_Toast_Soundset";
				uParam1->f_33.f_18 = "Toast_On";
				uParam1->f_24 = 1;
			}
			break;
	
		case 16:
			func_52(MISC::VAR_STRING(42, "GF_FEUD_HELP_MEMBER_REQUEST_PF", func_266(PLAYER::GET_PLAYER_NAME(sParam0->f_43), joaat("COLOR_PURE_WHITE")), func_505(sParam0->f_42, true, 0)), Global_1901671.f_319.f_176, 0, 0, 0, true);
		
			if (bParam4)
			{
				uParam1->f_20 = joaat("mp_lobby_textures");
				uParam1->f_21 = joaat("temp_pedshot");
				uParam1->f_33.f_6 = joaat("mp_lobby_textures");
				uParam1->f_33.f_7 = joaat("temp_pedshot");
				uParam1->f_33.f_21 = 1;
			}
			else
			{
				uParam1->f_20 = hashKey;
				uParam1->f_21 = hashKey;
				uParam1->f_33.f_6 = hashKey;
				uParam1->f_33.f_7 = hashKey;
				uParam1->f_33.f_21 = 0;
			}
		
			uParam1->f_27.f_2 = sParam0->f_42;
			uParam1->f_27.f_1 = sParam0->f_43;
			uParam1->f_26 = 16;
			uParam1->f_16 = MISC::VAR_STRING(10, "GF_FEUD_REQUEST_TITLE", func_266(PLAYER::GET_PLAYER_NAME(sParam0->f_43), joaat("COLOR_PURE_WHITE")));
			uParam1->f_17 = MISC::VAR_STRING(10, "GF_FEUD_REQUEST_BODY", func_505(sParam0->f_42, true, 0));
			uParam1->f_25 = 120;
			uParam1->f_32 = NETWORK::NETWORK_IS_FEATURE_SUPPORTED(0);
			uParam1->f_31 = "IB_GAMERCARD";
			uParam1->f_30 = 4;
			uParam1->f_33.f_2 = func_266(PLAYER::GET_PLAYER_NAME(sParam0->f_43), joaat("COLOR_PURE_WHITE"));
			uParam1->f_33.f_3 = MISC::VAR_STRING(10, "GF_FEUD_TOAST_OPT_IN_TITLE", "GF_FEUD_POSSE_FEUD");
			uParam1->f_33.f_17 = "HUD_Toast_Soundset";
			uParam1->f_33.f_18 = "Toast_On";
			uParam1->f_24 = 1;
			break;
	
		case 17:
			func_52(MISC::VAR_STRING(42, "GF_FEUD_HELP_MEMBER_REQUEST_PLF", func_266(PLAYER::GET_PLAYER_NAME(sParam0->f_43), joaat("COLOR_PURE_WHITE")), func_505(sParam0->f_42, true, 0)), Global_1901671.f_319.f_176, 0, 0, 0, true);
		
			if (bParam4)
			{
				uParam1->f_20 = joaat("mp_lobby_textures");
				uParam1->f_21 = joaat("temp_pedshot");
				uParam1->f_33.f_6 = joaat("mp_lobby_textures");
				uParam1->f_33.f_7 = joaat("temp_pedshot");
				uParam1->f_33.f_21 = 1;
			}
			else
			{
				uParam1->f_20 = hashKey;
				uParam1->f_21 = hashKey;
				uParam1->f_33.f_6 = hashKey;
				uParam1->f_33.f_7 = hashKey;
				uParam1->f_33.f_21 = 0;
			}
		
			uParam1->f_27.f_2 = sParam0->f_42;
			uParam1->f_27.f_1 = sParam0->f_43;
			uParam1->f_26 = 17;
			uParam1->f_16 = MISC::VAR_STRING(10, "GF_FEUD_REQUEST_TITLE", func_266(PLAYER::GET_PLAYER_NAME(sParam0->f_43), joaat("COLOR_PURE_WHITE")));
			uParam1->f_17 = MISC::VAR_STRING(10, "GF_FEUD_REQUEST_LEADER_BODY", func_505(sParam0->f_42, true, 0));
			uParam1->f_25 = 120;
			uParam1->f_32 = NETWORK::NETWORK_IS_FEATURE_SUPPORTED(0);
			uParam1->f_31 = "IB_GAMERCARD";
			uParam1->f_30 = 4;
			uParam1->f_33.f_2 = func_266(PLAYER::GET_PLAYER_NAME(sParam0->f_43), joaat("COLOR_PURE_WHITE"));
			uParam1->f_33.f_3 = MISC::VAR_STRING(10, "GF_FEUD_TOAST_OPT_IN_TITLE", "GF_FEUD_POSSE_LEADER_FEUD");
			uParam1->f_33.f_17 = "HUD_Toast_Soundset";
			uParam1->f_33.f_18 = "Toast_On";
			uParam1->f_24 = 1;
			break;
	
		case 20:
			if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(sParam0->f_44)) == 1)
				func_52(MISC::VAR_STRING(10, "PARLEY_HELP_REQUESTED_SOLO", func_266(PLAYER::GET_PLAYER_NAME(sParam0->f_43), joaat("COLOR_PURE_WHITE"))), 10000, 0, 0, 0, true);
			else
				func_52(MISC::VAR_STRING(10, "PARLEY_HELP_REQUESTED", func_266(PLAYER::GET_PLAYER_NAME(sParam0->f_43), joaat("COLOR_PURE_WHITE"))), 10000, 0, 0, 0, true);
		
			if (bParam4)
			{
				uParam1->f_20 = joaat("mp_lobby_textures");
				uParam1->f_21 = joaat("temp_pedshot");
				uParam1->f_33.f_6 = joaat("mp_lobby_textures");
				uParam1->f_33.f_7 = joaat("temp_pedshot");
				uParam1->f_33.f_21 = 1;
			}
			else
			{
				uParam1->f_20 = hashKey;
				uParam1->f_21 = hashKey;
				uParam1->f_33.f_6 = hashKey;
				uParam1->f_33.f_7 = hashKey;
				uParam1->f_33.f_21 = 0;
			}
		
			uParam1->f_27 = sParam0->f_43;
			uParam1->f_27.f_1 = sParam0->f_44;
			uParam1->f_26 = 20;
			uParam1->f_16 = MISC::VAR_STRING(10, "PARLEY_REQUEST_TITLE", func_266(PLAYER::GET_PLAYER_NAME(sParam0->f_43), joaat("COLOR_PURE_WHITE")));
		
			if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(sParam0->f_44)) > 1)
				uParam1->f_17 = MISC::VAR_STRING(10, "PARLEY_REQUEST_BODY_GANG", func_266(PLAYER::GET_PLAYER_NAME(sParam0->f_44), joaat("COLOR_PURE_WHITE")));
			else
				uParam1->f_17 = MISC::VAR_STRING(10, "PARLEY_REQUEST_BODY", func_266(PLAYER::GET_PLAYER_NAME(sParam0->f_44), joaat("COLOR_PURE_WHITE")));
		
			uParam1->f_25 = 120;
			uParam1->f_33.f_2 = MISC::VAR_STRING(2, "PARLEY_TOAST_OPT_IN");
			uParam1->f_33.f_3 = MISC::VAR_STRING(2, "PARLEY_TOAST_OPT_IN_BODY");
			uParam1->f_33.f_17 = "HUD_Toast_Soundset";
			uParam1->f_33.f_18 = "Toast_On";
			uParam1->f_24 = 1;
			break;
	}

	return;
}

void func_363(const char* sParam0, var uParam1, char* sParam2, BOOL bParam3) // Position - 0xB310 Signature - 22 04 18
{
	int num;
	const char* str;
	Hash hashKey;
	int num2;
	int num3;
	Hash hash;
	int num4;
	const char* str2;

	num = NETWORK::_0x27B1AE4D8C652F08(sParam0->f_11);
	str = func_266(NETWORK::_0xE59F4924BD3A718D(num), joaat("color_posse_neutral"));
	hashKey = MISC::GET_HASH_KEY(sParam2);
	uParam1->f_26 = 1;
	uParam1->f_27 = sParam0->f_11;
	uParam1->f_16 = str;
	uParam1->f_32 = NETWORK::NETWORK_IS_FEATURE_SUPPORTED(0);
	uParam1->f_31 = "IB_GAMERCARD";
	uParam1->f_30 = 2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(sParam0->f_8)))
	{
		num2.f_1 = -1;
		num2.f_2 = -1;
		num2.f_3 = -1;
		num2.f_3.f_1 = -1;
		NETWORK::_0xC0CFFDA87C2C163D(num, &num2, 11);
	
		if (num2 == 3)
		{
			num3 = func_393(num2.f_3);
			uParam1->f_17 = MISC::VAR_STRING(10, "NT_INV_RCV_BODY_INFO", func_395(func_394(num3)));
			uParam1->f_33.f_3 = MISC::VAR_STRING(10, "NM_TI_VIEW_INVITE_SUBTYPE", func_395(func_394(num3)));
			uParam1->f_33.f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			uParam1->f_17 = MISC::VAR_STRING(42, "NT_INV_BODY_INFO", func_266(sParam0, joaat("COLOR_PURE_WHITE")), "LANDING_FREEROAM_TITLE");
			uParam1->f_33.f_3 = MISC::VAR_STRING(2, "NT_INV_FM_CONTENT");
			uParam1->f_33.f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
	}
	else if (func_11() != -1)
	{
		hash = func_95(MISC::GET_HASH_KEY(&(sParam0->f_8)));
	
		if (hash != -1)
		{
			num4 = Global_265213.f_4[hash /*46*/].f_24;
		
			if (num4 == -504335712)
				str2 = MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(Global_265213.f_4[hash /*46*/].f_26));
			else if (num4 == 395262693)
				str2 = MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(Global_265213.f_4[hash /*46*/].f_26));
			else if (num4 == -933924539)
				str2 = MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(Global_265213.f_4[hash /*46*/].f_26));
		
			uParam1->f_17 = MISC::VAR_STRING(10, "NT_INV_RCV_BODY_INFO", str2);
			uParam1->f_33.f_3 = MISC::VAR_STRING(10, "NM_TI_VIEW_INVITE_SUBTYPE", str2);
			uParam1->f_33.f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
	}

	uParam1->f_33.f_2 = str;
	uParam1->f_33.f_17 = "HUD_Toast_Soundset";
	uParam1->f_33.f_18 = "Toast_On";
	uParam1->f_25 = Global_1901671.f_2.f_23;
	uParam1->f_24 = 1;

	if (bParam3)
	{
		uParam1->f_20 = joaat("mp_lobby_textures");
		uParam1->f_21 = joaat("temp_pedshot");
		uParam1->f_33.f_6 = joaat("mp_lobby_textures");
		uParam1->f_33.f_7 = joaat("temp_pedshot");
		uParam1->f_33.f_21 = 1;
	}
	else
	{
		uParam1->f_20 = hashKey;
		uParam1->f_21 = hashKey;
		uParam1->f_33.f_6 = hashKey;
		uParam1->f_33.f_7 = hashKey;
		uParam1->f_33.f_21 = 0;
	}

	return;
}

Hash func_364(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54) // Position - 0xB576 Signature - 22 37 4B
{
	int num;
	int cloudTimeAsInt;
	Hash hash;
	var unk;
	var buffer;
	BOOL flag;
	Hash hash2;
	int num2;

	num = func_511();
	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
	hash = cloudTimeAsInt + uParam0.f_25;
	MISC::_INT_TO_STRING(cloudTimeAsInt, "%i", &buffer);
	Global_1940252.f_245.f_1308 = Global_1940252.f_245.f_1308 + 1;
	TEXT_LABEL_ASSIGN_STRING(&unk, "Invite_Root_", 64);
	TEXT_LABEL_APPEND_STRING(&unk, &buffer, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 64);
	TEXT_LABEL_APPEND_INT(&unk, Global_1940252.f_245.f_1308, 64);
	func_512(&Global_1940252.f_245.f_14[num /*43*/], Global_1940252.f_245.f_4, unk, uParam0);
	Global_1940252.f_245.f_14[num /*43*/].f_39 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(88), Global_1940252.f_245.f_1308);
	Global_1940252.f_245.f_14[num /*43*/].f_41 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(89), true);
	Global_1940252.f_245.f_14[num /*43*/].f_42 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(90), false);
	Global_1940252.f_245.f_14[num /*43*/].f_37 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(78), uParam0.f_32);

	if (uParam0.f_32)
	{
		Global_1940252.f_245.f_14[num /*43*/].f_36 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(76), uParam0.f_31);
		Global_1940252.f_245.f_14[num /*43*/].f_35 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(79), uParam0.f_30);
	}

	Global_1940252.f_245.f_14[num /*43*/].f_30 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(91), uParam0.f_26);
	flag = false;
	Global_1940252.f_245.f_14[num /*43*/].f_38 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(Global_1940252.f_245.f_14[num /*43*/], 707094655, flag);
	Global_1940252.f_245.f_14[num /*43*/].f_31 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(53), uParam0.f_27);
	Global_1940252.f_245.f_14[num /*43*/].f_32 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(54), uParam0.f_27.f_1);
	Global_1940252.f_245.f_14[num /*43*/].f_33 = DATABINDING::_DATABINDING_ADD_DATA_GANG_ID(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(92), uParam0.f_27.f_2);
	Global_1940252.f_245.f_14[num /*43*/].f_29 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(93), hash);
	Global_1940252.f_245.f_14[num /*43*/].f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(94), uParam0.f_24);
	func_513(Global_1940252.f_245.f_1306 + 1);

	if (Global_1940252.f_245.f_1308 == 2147483647)
		Global_1940252.f_245.f_1308 = 0;

	if (func_514(uParam0.f_26))
	{
		uParam0.f_33 = 5;
		uParam0.f_33.f_1 = 1;
		uParam0.f_33.f_13 = 778915895;
		uParam0.f_33.f_14 = Global_1940252.f_245.f_14[num /*43*/];
		hash2 = func_515(&(uParam0.f_33));
		Global_1940252.f_245.f_14[num /*43*/].f_40 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(95), hash2);
	}

	num2 = func_516();

	if (num2 == 0 || uParam0.f_24 == num2)
	{
		Global_1940252.f_245.f_1307 = Global_1940252.f_245.f_1307 + 1;
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940252.f_245.f_5, 0, "pm_invite_item", Global_1940252.f_245.f_14[num /*43*/]);
	}

	return Global_1940252.f_245.f_14[num /*43*/];
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(int iParam0) // Position - 0xB8ED Signature - 22 01 03 00 00 66 00 3C 62
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

void func_366(const char* sParam0, Hash hParam1) // Position - 0xBDFB Signature - 22 02 04 00 00 66 00 27 3A
{
	switch (sParam0->f_58)
	{
		case 8:
		case 16:
		case 17:
			Global_1287192.f_40[Global_1287192.f_73] = hParam1;
			Global_1287192.f_73 = (Global_1287192.f_73 + 1) % 32;
			break;
	}

	return;
}

BOOL func_367(var uParam0) // Position - 0xBE43 Signature - 22 01 03 00 00 66 00 76 05 8B 04 00 2F 50 01 01 66 00 80 0B 27 04 3C 02
{
	if (!*uParam0)
		return false;

	switch (uParam0->f_11.f_4)
	{
		case 72:
		case 74:
			return true;
	
		default:
		
	}

	return false;
}

void func_368(var uParam0, int iParam1) // Position - 0xBE73 Signature - 22 02 04 00 00 66 01 2F 8A 03 00 50
{
	if (iParam1 < 0)
		return;

	func_517();
	Global_1072759.f_23.f_2 = iParam1;
	Global_1072759.f_23.f_2.f_2 = uParam0->f_11.f_2;
	return;
}

BOOL func_369(var uParam0) // Position - 0xBEA2 Signature - 22 01 03 00 00 66 00 76 05 8B 04 00 2F 50 01 01 66 00 80 0B 27 04 3C 04
{
	if (!*uParam0)
		return false;

	switch (uParam0->f_11.f_4)
	{
		case 68:
		case 72:
		case 74:
		case 75:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_370(int iParam0) // Position - 0xBEDE Signature - 22 01 03 00 00 66 00 5D 03
{
	if (!Global_1901571.f_66[iParam0])
	{
		if (!_STOPWATCH_IS_INITIALIZED(&Global_1901571.f_3[iParam0 /*2*/]))
			_STOPWATCH_INITIALIZE(&Global_1901571.f_3[iParam0 /*2*/], false, false);
	
		Global_1901571.f_66[iParam0] = true;
	}
	else if (func_64(&Global_1901571.f_3[iParam0 /*2*/], func_519(iParam0), false))
	{
		_STOPWATCH_DESTROY(&Global_1901571.f_3[iParam0 /*2*/]);
		return true;
	}

	return false;
}

struct<2> func_371(Player plParam0) // Position - 0xBF4F Signature - 22 01 05 00 00 66 00 4B
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

BOOL func_372(Any* panParam0, int iParam1, int iParam2) // Position - 0xBF63 Signature - 22 03 08 00 00 66 01 6D 1F 59 67 05 66 01 6D 1F 47 67 06 66 05 66 00 17 01 66 06 03 09 00 E8 67 07 66 05 66 00 63 01 66 06 03 08 01 43
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

void func_373(int iParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0xBF96 Signature - 22 04 06 00 00 66 01
{
	Global_1056554[Global_1295666 /*491*/].f_204.f_11[iParam0 /*6*/] = hParam1;
	Global_1056554[Global_1295666 /*491*/].f_204.f_11[iParam0 /*6*/].f_1 = iParam2;
	Global_1056554[Global_1295666 /*491*/].f_204.f_11[iParam0 /*6*/].f_2 = iParam3;
	return;
}

void func_374(int iParam0, int iParam1) // Position - 0xBFE1 Signature - 22 02 07 00 00 66
{
	int num;
	int num2;
	int num3;

	!func_520(iParam0);
	num = 1;
	num2 = iParam0;

	if (iParam0 >= 10 && iParam0 <= 13)
		num = 0;

	if (iParam0 == 18)
		num2 = 3;

	if (iParam1 == 1 || iParam1 == 2)
		if (Global_1901671.f_786.f_1)
			num2 = func_521(iParam0);

	num3 = 0;

	if (num2 == 6 || num2 == 5 || num2 == 8 || num2 == 9)
		num3 = 2;

	func_474(iParam1);
	func_524(1, 32, num, func_522(num2), func_523(), num3, -1, false, 0, 0);
	return;
}

void func_375(int iParam0, int iParam1) // Position - 0xC08B Signature - 22 02 04 00 00 5D 00
{
	if (Global_1572864.f_17 != 0)
		return;

	Global_1572864.f_17 = iParam0;
	Global_1572864.f_18 = iParam1;
	return;
}

void func_376(Any anParam0) // Position - 0xC0B0 Signature - 22 01 0C 00 00 66 00 6D
{
	int i;
	var variableName;

	SAVE::_0x443174C20B8B9E7F(anParam0, 41, "nssd_sStableInventory");
	i = 0;
	SAVE::_0x81F4E92BE3958364(anParam0, 33, "nssd_MountItemGUID_array");

	for (i = 0; i <= 8 - 1; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&variableName, "nssd_StableMountGUID_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*4*/], 4, &variableName);
		TEXT_LABEL_ASSIGN_STRING(&variableName, "nssd_StableItemGUID_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		TEXT_LABEL_APPEND_STRING(&variableName, "_data1", 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->[i /*4*/], &variableName);
		TEXT_LABEL_ASSIGN_STRING(&variableName, "nssd_StableItemGUID_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		TEXT_LABEL_APPEND_STRING(&variableName, "_data2", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*4*/].f_1), &variableName);
		TEXT_LABEL_ASSIGN_STRING(&variableName, "nssd_StableItemGUID_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		TEXT_LABEL_APPEND_STRING(&variableName, "_data3", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*4*/].f_2), &variableName);
		TEXT_LABEL_ASSIGN_STRING(&variableName, "nssd_StableItemGUID_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		TEXT_LABEL_APPEND_STRING(&variableName, "_data4", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*4*/].f_3), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_33), "nssd_eFeeState");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_34), "nssd_iFeesTimer");
	i = 0;
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_35), 6, "nssd_iReservedStats_array");

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&variableName, "nssd_iReservedStats_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->f_35[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_377(Any anParam0, Any anParam1) // Position - 0xC1F9 Signature - 22 02 0D 00 00 66 00 6D
{
	int i;
	var variableName;

	SAVE::_0x443174C20B8B9E7F(anParam0, 56, anParam1);
	variableName = { *anParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_sStableBonding", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 4, &variableName);
	variableName = { *anParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_sHorseGUID_data1", 64);
	SAVE::_SAVEGAME_GET_INT_2(anParam0, &variableName);
	variableName = { *anParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_sHorseGUID_data2", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_1), &variableName);
	variableName = { *anParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_sHorseGUID_data3", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_2), &variableName);
	variableName = { *anParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_sHorseGUID_data4", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	i = 0;
	variableName = { *anParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_fHorseEventXP", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_4), 25, &variableName);

	for (i = 0; i < 24; i = i + 1)
	{
		variableName = { *anParam1 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_fHorseEventXP_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&anParam0->f_4[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	i = 0;
	variableName = { *anParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_sCoreData_array", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_29), 11, &variableName);

	for (i = 0; i <= 1; i = i + 1)
	{
		variableName = { *anParam1 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_sCoreData_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->f_29[i /*5*/], 5, &variableName);
		variableName = { *anParam1 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_sCoreData_iValue_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->f_29[i /*5*/], &variableName);
		variableName = { *anParam1 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_sCoreData_fValueBuffer_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_29[i /*5*/].f_1), &variableName);
		variableName = { *anParam1 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_sCoreData_fDrainBuffer_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_29[i /*5*/].f_2), &variableName);
		variableName = { *anParam1 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_sCoreData_iLastGameTime_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_29[i /*5*/].f_3), &variableName);
		variableName = { *anParam1 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_sCoreData_fOverpowerDuration_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_29[i /*5*/].f_4), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	i = 0;
	variableName = { *anParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_sEfficiencyData_array", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_40), 13, &variableName);

	for (i = 0; i <= 2; i = i + 1)
	{
		variableName = { *anParam1 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_sEfficiencyData_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->f_40[i /*4*/], 4, &variableName);
		variableName = { *anParam1 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_sEfficiencyData_iValue_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->f_40[i /*4*/], &variableName);
		variableName = { *anParam1 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_sEfficiencyData_fValueBuffer_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_40[i /*4*/].f_1), &variableName);
		variableName = { *anParam1 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_sEfficiencyData_fDrainBuffer_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_40[i /*4*/].f_2), &variableName);
		variableName = { *anParam1 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_sEfficiencyData_iLastGameTime_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_40[i /*4*/].f_3), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	variableName = { *anParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_vLastHitch", 64);
	func_217(&(anParam0->f_53), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_378(Any anParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xC53E Signature - 22 09 1C 00 00 6D
{
	int i;
	var variableName;
	var variableName2;

	variableName2 = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName2, "PortableList", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 26, &variableName2);

	for (i = 0; i < 25; i = i + 1)
	{
		variableName = { variableName2 };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	variableName2 = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName2, "PortableArraySize", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_26), &variableName2);
	variableName2 = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName2, "OutfitSlotCount", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_27), &variableName2);
	variableName2 = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName2, "iHatSlotCount", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_28), &variableName2);
	variableName2 = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName2, "iBigMaskSlotCount", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_29), &variableName2);
	variableName2 = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName2, "iSmallMaskSlotCount", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_30), &variableName2);
	variableName2 = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName2, "iGloveSlotCount", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_31), &variableName2);
	variableName2 = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName2, "iBadgeSlotCount", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_32), &variableName2);
	return;
}

void func_379(Any anParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0xC659 Signature - 22 0A 1C
{
	var variableName;
	var unk8;

	unk8 = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&unk8, "Data", 64);
	TEXT_LABEL_APPEND_INT(&unk8, iParam9, 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 120, &unk8);
	variableName = { unk8 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_eFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(anParam0, &variableName);
	variableName = { unk8 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_Components", 64);
	func_525(&(anParam0->f_1), variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_380(Any anParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xC6C0 Signature - 22 09 24
{
	int i;
	var variableName;
	var variableName2;
	var unk15;

	unk15 = { uParam1 };
	SAVE::_0x443174C20B8B9E7F(anParam0, 380, &uParam1);
	TEXT_LABEL_APPEND_STRING(&unk15, "_BaseLayer", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 5, &unk15);
	variableName = { unk15 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_drawable", 64);
	SAVE::_SAVEGAME_GET_INT_2(anParam0, &variableName);
	variableName = { unk15 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_albedo", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_1), &variableName);
	variableName = { unk15 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_normal", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_2), &variableName);
	variableName = { unk15 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_material", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3), &variableName);
	variableName = { unk15 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_tag", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_4), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	unk15 = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&unk15, "_Layers", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_5), 375, &unk15);

	for (i = 0; i < 22; i = i + 1)
	{
		variableName = { uParam1 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_Layer", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x8E8FFB9E4AD051D2(&anParam0->f_5[i /*17*/], 17, &variableName, 17);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_LayerHash", 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->f_5[i /*17*/], &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_LayerPriority", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5[i /*17*/].f_1), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_Albedo", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5[i /*17*/].f_2), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_Normal", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5[i /*17*/].f_3), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_Material", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5[i /*17*/].f_4), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_SheetGridIndex", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5[i /*17*/].f_5), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_ModTexture", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5[i /*17*/].f_6), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_ModChannel", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5[i /*17*/].f_7), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_Palette", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5[i /*17*/].f_8), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_tint0", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5[i /*17*/].f_9), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_tint1", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5[i /*17*/].f_10), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_tint2", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5[i /*17*/].f_11), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_TexAlpha", 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_5[i /*17*/].f_12), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_ModAlpha", 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_5[i /*17*/].f_13), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_TexRough", 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_5[i /*17*/].f_14), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_BlendType", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_5[i /*17*/].f_15), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_LayerType", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_5[i /*17*/].f_16), &variableName2);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_381(Any anParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xCA24 Signature - 22 09 1B
{
	var variableName;
	var unk8;

	unk8 = { uParam1 };
	SAVE::_0x443174C20B8B9E7F(anParam0, 2, &unk8);
	variableName = { unk8 };
	TEXT_LABEL_APPEND_STRING(&variableName, "iLocationIndex", 64);
	SAVE::_SAVEGAME_GET_INT_2(anParam0, &variableName);
	variableName = { unk8 };
	TEXT_LABEL_APPEND_STRING(&variableName, "iVariation", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_1), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_382(Any anParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xCA79 Signature - 22 09 14
{
	var variableName;
	int i;

	SAVE::_0x443174C20B8B9E7F(anParam0, 7, &uParam1);
	variableName = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, ".iNxtIndex", 64);
	SAVE::_SAVEGAME_GET_INT_2(anParam0, &variableName);
	variableName = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, ".iFavEm", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_1), &variableName);
	variableName = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, ".emArray", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_2), 5, &variableName);

	for (i = 0; i <= 3; i = i + 1)
	{
		variableName = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName, ".em_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->f_2[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

char* func_383(int iParam0) // Position - 0xCB1D Signature - 22 01 03 00 00 66 00 3C 07 00 00 00 00 00 27 00 01 00 00 00 2B 00 02 00 00 00 2F 00 03 00 00 00 33 00 04 00 00 00 37 00 05 00 00 00 3B 00 06 00 00 00 3F 00 68 46 00 25 F9
{
	switch (iParam0)
	{
		case 0:
			return "tooltips/tooltip(%i)";
	
		case 1:
			return "tooltips/tooltip";
	
		case 2:
			return ":label";
	
		case 3:
			return ":duration";
	
		case 4:
			return ":onlyInSP";
	
		case 5:
			return ":onlyInMP";
	
		case 6:
			return ":requiredMissionID";
	}

	return "";
}

BOOL func_384(int iParam0, Player plParam1) // Position - 0xCB9F Signature - 22 02 04 00 00 66 01 6D
{
	if (plParam1 == 255)
		return Global_1102813.f_3 && iParam0 != false;

	return Global_1101558[plParam1 /*38*/].f_3 && iParam0 != false;
}

int func_385() // Position - 0xCBCB Signature - 22 00 02 00 00 5D F4 88 11 27 89
{
	return Global_1149172.f_137;
}

void func_386(var uParam0, float fParam1) // Position - 0xCBD9 Signature - 22 02 04 00 00 39 1A
{
	uParam0->f_1 = func_243() - fParam1;
	func_526(uParam0, 1);
	func_527(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_387() // Position - 0xCBFF Signature - 22 00 02 00 00 5D 17 00 18 27 C4 2F
{
	return Global_1572887.f_196 > 0;
}

void func_388(int iParam0) // Position - 0xCC0F Signature - 22 01 15
{
	int num;
	var gamerHandle;

	num = NETWORK::_0x27B1AE4D8C652F08(iParam0);
	TEXT_LABEL_ASSIGN_STRING(&(gamerHandle.f_2), NETWORK::_0xE59F4924BD3A718D(num), 64);
	NETWORK::_0x16EFB123C4451032(num, &gamerHandle);
	TEXT_LABEL_ASSIGN_STRING(&(gamerHandle.f_12), NETWORK::_0xE79BA3BC265895DA(num), 24);
	gamerHandle.f_10 = iParam0;
	gamerHandle.f_16 = NETWORK::_0x5ED39DA62BEB1330(num);
	func_528(&gamerHandle);
	return;
}

void func_389(BOOL bParam0) // Position - 0xCC56 Signature - 22 01 03 00 00 66 00 8B 06
{
	if (bParam0)
		func_255(128);

	if (func_11() == 0)
		func_75(2);

	func_202(1);
	return;
}

BOOL func_390(int iParam0) // Position - 0xCC7B Signature - 22 01 03 00 00 5D 17 00 18 27 0E 08 15 04 00 2F 50 01 01 6D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_345(36, iParam0);
}

BOOL func_391() // Position - 0xCC99 Signature - 22 00 02 00 00 37 E6
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

BOOL func_392(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17) // Position - 0xCCAA Signature - 22 12 15 00 00 39
{
	int num;

	num = func_529();

	if (num == -1)
		return false;

	Global_1072759.f_23.f_306[num /*59*/] = { uParam0.f_2 };
	Global_1072759.f_23.f_306[num /*59*/].f_8 = { uParam0.f_12 };
	Global_1072759.f_23.f_306[num /*59*/].f_11 = uParam0.f_10;
	Global_1072759.f_23.f_306[num /*59*/].f_56 = 1;
	Global_1072759.f_23.f_306[num /*59*/].f_58 = iParam17;
	func_359(&(Global_1072759.f_23.f_306[num /*59*/].f_45), true);
	return true;
}

int func_393(var uParam0, var uParam1) // Position - 0xCD39 Signature - 22 02 04 00 00 11
{
	if (func_530(uParam0) != 5)
		return -1;

	return func_531(uParam0);
}

int func_394(int iParam0) // Position - 0xCD59 Signature - 22 01 03 00 00 66 00 3C 05 00 00 00 00 00 1B 00 01 00 00 00 15
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 2;
	
		default:
		
	}

	return -1;
}

char* func_395(int iParam0) // Position - 0xCD8C Signature - 22 01 03 00 00 66 00 3C 07 00 00 00 00 00 27 00 01 00 00 00 2B 00 02 00 00 00 2F 00 03 00 00 00 33 00 04 00 00 00 37 00 05 00 00 00 3B 00 06 00 00 00 3F 00 68 46 00 25 57
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(Hash hParam0) // Position - 0xCE10 Signature - 22 01 03 00 00 66 00 3C 12 00 CE
{
	switch (hParam0)
	{
		case -1759663922:
			return "UGC_MST_STRY";
	
		case -1649482077:
			return "UGC_MST_UIS";
	
		case -915869673:
			return "UGC_MST_TTYG";
	
		case -777132493:
			return "UGC_MST_PDR";
	
		case -698288936:
			return "UGC_MST_PROT";
	
		case -360644098:
			return "UGC_MST_TTYT";
	
		case -318976023:
			return "UGC_MST_LGNDB";
	
		case -163684180:
			return "UGC_MST_SOW";
	
		case -133550749:
			return "UGC_MST_OUTLAW";
	
		case 31269700:
			return "UGC_MST_LETTR";
	
		case 482206342:
			return "UGC_MST_LEG";
	
		case 534981680:
			return "UGC_MST_ESCF";
	
		case 603385332:
			return "UGC_MST_DEL";
	
		case 604251967:
			return "UGC_MST_FOU";
	
		case 772881414:
			return "UGC_MST_MNSHN";
	
		case joaat("UGC_SUBTYPE_MISSION_PREDATOR_HUNT"):
			return "UGC_MST_PDH";
	
		case 1078150940:
			return "UGC_MST_AWIP";
	
		case 1520184724:
			return "UGC_MST_AFGPO";
	
		default:
		
	}

	return "Invalid MISSION_SUB_TYPE";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(Hash hParam0) // Position - 0xCF0E Signature - 22 01 03 00 00 66 00 3C 12 00 58
{
	switch (hParam0)
	{
		case -1918441640:
			return "GST_DEATHMATCH_LTS";
	
		case -1581094459:
			return "GST_DEATHMATCH_EXC";
	
		case -1437925683:
			return "GST_DEATHMATCH_TWOC";
	
		case -725256130:
			return "GST_DEATHMATCH_TGR";
	
		case -632356431:
			return "GST_DEATHMATCH_TTLG";
	
		case -559809431:
			return "GST_DEATHMATCH_HT";
	
		case -548018579:
			return "GST_DEATHMATCH_EC";
	
		case -533426613:
			return "GST_DEATHMATCH_TEAM";
	
		case -457802746:
			return "GST_DEATHMATCH_FTB";
	
		case -222655798:
			return "GST_DEATHMATCH_GR";
	
		case 10577687:
			return "GST_DEATHMATCH_MC";
	
		case 424482930:
			return "GST_DEATHMATCH_MM";
	
		case 1153715636:
			return "GST_DEATHMATCH_LMS";
	
		case 1175500245:
			return "GST_DEATHMATCH_TFTB";
	
		case 1272390114:
			return "GST_DEATHMATCH_WOC";
	
		case 1788958412:
			return "GST_DEATHMATCH_PITP";
	
		case 1816768801:
			return "GST_DEATHMATCH";
	
		case 1842544025:
			return "GST_DEATHMATCH_TLG";
	
		default:
		
	}

	return "Invalid DEATHMATCH_SUB_TYPE";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(Hash hParam0) // Position - 0xD00C Signature - 22 01 03 00 00 66 00 3C 0B
{
	switch (hParam0)
	{
		case -1957416901:
			return "GST_RACE_RUNAWT";
	
		case -1185533313:
			return "GST_RACE_OPTARA";
	
		case -784189810:
			return "GST_RACE_STANDA";
	
		case -79999383:
			return "GST_RACE_GOLDRU";
	
		case -63669280:
			return "GST_RACE_DUALCO";
	
		case 218185167:
			return "GST_RACE_TARRAC";
	
		case 851921060:
			return "GST_RACE_ELIM";
	
		case 1457860192:
			return "GST_RACE_TIMECP";
	
		case 1579717899:
			return "GST_RACE_COMBAT";
	
		case 1744858848:
			return "GST_RACE_OPERAC";
	
		case 2028478397:
			return "GST_RACE_SURVIV";
	
		default:
		
	}

	return "Invalid RACE_SUB_TYPE";
}

void func_399(var uParam0) // Position - 0xD0AF Signature - 22 01 03 00 00 66 00 39 54 FE 00 66
{
	func_532(uParam0);
	func_532(&(uParam0->f_2));
	return;
}

void func_400(var uParam0) // Position - 0xD0C5 Signature - 22 01 03 00 00 4D
{
	Global_1572887.f_196.f_7 = { *uParam0 };
	return;
}

void func_401(int iParam0, int iParam1) // Position - 0xD0DB Signature - 22 02 32
{
	int i;
	int num;
	Hash hash;
	int num2;

	for (i = 29; i >= 0; i = i + -1)
	{
		hash = { Global_1940252.f_245.f_14[i /*43*/] };
		num = DATABINDING::DATABINDING_READ_INT(hash.f_30);
		num2 = num;
	
		if (iParam0 != num2)
		{
		}
		else
		{
			num = DATABINDING::DATABINDING_READ_INT(hash.f_31);
		
			if (iParam1 != num)
			{
			}
			else
			{
				func_496(hash);
			}
		}
	}

	return;
}

void func_402(var uParam0) // Position - 0xD13C Signature - 22 01 03 00 00 50 01 00 22 01
{
	return;
}

void func_403(var uParam0) // Position - 0xD144 Signature - 22 01 03 00 00 66 00 39 54 FE 00 50
{
	func_532(uParam0);
	return;
}

void func_404(var uParam0) // Position - 0xD152 Signature - 22 01 03 00 00 42
{
	Global_1572887.f_196.f_3 = { *uParam0 };
	return;
}

BOOL func_405(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xD168 Signature - 22 05 07 00 00 4B
{
	return func_254(uParam0.f_3, bParam4);
}

int func_406() // Position - 0xD17A Signature - 22 00 02 00 00 5D 17 00 18 27 C4 50
{
	return Global_1572887.f_196;
}

void func_407(var uParam0) // Position - 0xD188 Signature - 22 01 03 00 00 50 01 00 22 02
{
	return;
}

void func_408(BOOL bParam0, int iParam1) // Position - 0xD190 Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 03
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

var func_409(BOOL bParam0, var uParam1, var uParam2) // Position - 0xD1A1 Signature - 22 03 05 00 00 66 00 8B 08 00 66 01 50 03 01 68 05 00 66 02 50 03 01 22 00
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_410() // Position - 0xD1B8 Signature - 22 00 02 00 00 5D DD D3 10 80
{
	if (Global_1102813.f_26.f_3337 == 9)
		return 0;

	if (Global_1102813.f_26.f_3337 == 10)
		return 0;

	if (Global_1102813.f_26.f_3337 == 11)
		return 0;

	if (func_443(2048))
		return 1;

	if (func_442(1))
		return 1;

	if (Global_1102813.f_26.f_3337 != 0)
		return 1;

	return 0;
}

char* func_411(const char* sParam0, int iParam1) // Position - 0xD222 Signature - 22 02 04 00 00 6D 2A
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

struct<11> func_412() // Position - 0xD23C Signature - 22 00 02 00 00 6D 0B
{
	return Global_1572887.f_196.f_30;
}

Player func_413() // Position - 0xD24F Signature - 22 00 02 00 00 5D 17 00 18 80 C4 27 29
{
	return Global_1572887.f_196.f_41;
}

BOOL func_414(Player plParam0) // Position - 0xD25F Signature - 22 01 03 00 00 66 00 5D 2A 1F 10 40 EB 01 80 CC 27 0A 42
{
	return func_254(Global_1056554[plParam0 /*491*/].f_204.f_10, 4);
}

void func_415(BOOL bParam0, int iParam1) // Position - 0xD279 Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 01 03 00 00 66
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

var func_416(Player plParam0) // Position - 0xD28E Signature - 22 01 03 00 00 66 00 5D 2A 1F 10 40 EB 01 80 CC 27 01
{
	return Global_1056554[plParam0 /*491*/].f_204.f_1;
}

var func_417(Player plParam0) // Position - 0xD2A3 Signature - 22 01 03 00 00 66 00 5D 2A 1F 10 40 EB 01 80 CC 27 02
{
	return Global_1056554[plParam0 /*491*/].f_204.f_2;
}

struct<2> func_418(Player plParam0) // Position - 0xD2B8 Signature - 22 01 03 00 00 11 66 00 5D 2A
{
	return Global_1056554[plParam0 /*491*/].f_204.f_3;
}

int func_419(int iParam0) // Position - 0xD2CF Signature - 22 01 06 00 00 66 00 08
{
	var unk;
	int num;

	if (iParam0 == -1)
		return 1;

	if (func_533())
		return 2;

	func_534(iParam0);
	unk = { func_535() };

	if (func_471(unk))
		return 4;

	if (func_536(iParam0))
		return 8;

	if (func_537(iParam0))
		return 11;

	if (func_538(iParam0, joaat("GAMBLING_RESTRICTED_GEOGRAPHIC")))
		return 7;
	else if (func_538(iParam0, -1038316793))
		return 10;
	else if (func_538(iParam0, 1485265289))
		return 9;
	else if (func_538(iParam0, 430260396))
		return 12;

	if (func_539(iParam0))
		return 14;

	if (func_540(PLAYER::PLAYER_ID(), true, false, true))
		return 15;

	num = func_541(iParam0, 1);

	if (num <= 0)
		return -1;
	else if (!func_542(num))
		return 6;

	if (GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
		if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
			if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > func_543(func_394(iParam0)) - 1)
				return 5;

	return 0;
}

BOOL func_420(var uParam0) // Position - 0xD3FE Signature - 22 01 03 00 00 37 25
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller")) > 0)
	{
		*uParam0 = joaat("fm_mission_controller");
		return true;
	}
	else if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_race_controller")) > 0)
	{
		*uParam0 = joaat("fm_race_controller");
		return true;
	}
	else if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controller")) > 0)
	{
		*uParam0 = joaat("fm_deathmatch_controller");
		return true;
	}

	return false;
}

void func_421(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5, Hash hParam6) // Position - 0xD458 Signature - 22 07 0A 00 00 85
{
	Hash hashOfThisScriptName;

	if (Global_1051194)
		return;

	Global_1051194.f_2 = iParam0;
	Global_1051194.f_3 = iParam1;
	Global_1051194.f_4 = iParam2;
	Global_1051194.f_6 = iParam3;
	Global_1051194.f_5 = iParam4;

	if (!bParam5)
		hashOfThisScriptName = SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME();
	else
		hashOfThisScriptName = hParam6;

	Global_1051194.f_1 = hashOfThisScriptName;
	Global_1051194 = true;
	return;
}

int func_422() // Position - 0xD4B2 Signature - 22 00 02 00 00 5D F4 88 11 27 8F
{
	return Global_1149172.f_143;
}

Vector3 func_423(int iParam0) // Position - 0xD4C0 Signature - 22 01 0D 00 00 66 00 08
{
	var unk;

	iParam0 == -1;
	unk = { func_544(iParam0) };
	_IS_NULL_VECTOR(unk.f_5);
	return unk.f_5;
}

BOOL func_424(int iParam0, int iParam1) // Position - 0xD4EC Signature - 22 02 04 00 00 66 00 5D 77
{
	return MISC::IS_BIT_SET(Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
}

void func_425() // Position - 0xD508 Signature - 22 00 02 00 00 5D 77 5E 10 18 69
{
	SCRIPTS::_SET_ALL_PLAYER_BITS(&(Global_1072759.f_21353.f_260));
	return;
}

BOOL func_426() // Position - 0xD51E Signature - 22 00 02 00 00 37 63
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("camera_item")) > 0)
		return true;

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(872480335) > 0)
		return true;

	return false;
}

BOOL func_427(Hash hParam0) // Position - 0xD549 Signature - 22 01 04 00 00 2F 67 03 2F
{
	int i;

	i = 0;

	for (i = 0; i < Global_1939434.f_161; i = i + 1)
	{
		if (hParam0 == MISC::GET_HASH_KEY(&(Global_1939434[i /*16*/].f_10)))
		{
			func_545(i);
			return true;
		}
	}

	return false;
}

BOOL func_428(int iParam0) // Position - 0xD589 Signature - 22 01 03 00 00 66 00 08 20 6A 8B 06 00 66 00 6D 28
{
	return iParam0 > -1 && iParam0 < 40;
}

BOOL func_429(int iParam0, int iParam1) // Position - 0xD59F Signature - 22 02 04 00 00 66 00 39 89 D5 00 05 8B 04
{
	if (!func_428(iParam0))
		return false;

	if (func_11() == -1)
		return Global_1915656.f_3[iParam0 /*447*/].f_6 && iParam1 != false;
	else
		return Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1 != false;

	return false;
}

void func_430(int iParam0, int iParam1) // Position - 0xD5EA Signature - 22 02 04 00 00 66 00 39 89 D5 00 05 8B 03 00 50 02 00 39 9D 03 00 08 15 20
{
	if (!func_428(iParam0))
		return;

	if (func_11() == -1)
		Global_1915656.f_3[iParam0 /*447*/].f_6 = Global_1915656.f_3[iParam0 /*447*/].f_6 || iParam1;
	else
		Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 || iParam1;

	return;
}

void func_431(int iParam0, int iParam1) // Position - 0xD642 Signature - 22 02 04 00 00 66 00 39 89 D5 00 05 8B 03 00 50 02 00 39 9D 03 00 08 15 2E
{
	if (!func_428(iParam0))
		return;

	if (func_11() == -1)
		Global_1915656.f_3[iParam0 /*447*/].f_6 = Global_1915656.f_3[iParam0 /*447*/].f_6 - Global_1915656.f_3[iParam0 /*447*/].f_6 && iParam1;
	else
		Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 - Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1;

	return;
}

int func_432() // Position - 0xD6B5 Signature - 22 00 02 00 00 5D A3 D7 13 27
{
	return Global_1300387.f_150;
}

BOOL func_433(int iParam0) // Position - 0xD6C3 Signature - 22 01 03 00 00 5D A3
{
	return Global_1300387.f_288.f_2 && iParam0 != false;
}

BOOL func_434() // Position - 0xD6D9 Signature - 22 00 02 00 00 39 53
{
	return func_546() != 0;
}

BOOL func_435() // Position - 0xD6E7 Signature - 22 00 03 00 00 39 62
{
	int threadId;

	threadId = func_547();

	if (!SCRIPTS::DOES_THREAD_EXIST(threadId))
		return false;

	return SCRIPTS::IS_THREAD_ACTIVE(threadId, false);
}

void func_436(int iParam0) // Position - 0xD70A Signature - 22 01 03 00 00 66 00 5D A3 D7 13 8C
{
	Global_1300387.f_288 = iParam0;
	return;
}

void func_437(int iParam0) // Position - 0xD71B Signature - 22 01 03 00 00 66 00 5D A3 D7 13 18
{
	Global_1300387.f_288.f_1 = iParam0;
	return;
}

void func_438(int iParam0) // Position - 0xD72E Signature - 22 01 04 00 00 03
{
	int idOfThisThread;

	idOfThisThread = SCRIPTS::GET_ID_OF_THIS_THREAD();

	if (SCRIPTS::DOES_THREAD_EXIST(Global_1940085.f_105.f_1) && Global_1940085.f_105.f_1 != idOfThisThread)
		return;

	Global_1940085.f_105.f_1 = idOfThisThread;
	Global_1940085.f_105 = iParam0;
	return;
}

int func_439() // Position - 0xD770 Signature - 22 00 02 00 00 5D 17 00 18 80 C4 27 3A
{
	if (Global_1572887.f_196.f_58 != false)
		return 2;

	if (Global_1572887.f_196.f_46 != -1)
		return 2;

	if (Global_1572887.f_196.f_56 > 2 || Global_1572887.f_196.f_57 > 2)
		return 2;

	if (Global_1572887.f_196.f_56 == 2)
	{
		Global_1572887.f_196.f_56 = 0;
		Global_1572887.f_196.f_57 = 0;
		return 1;
	}

	return 0;
}

void func_440(BOOL bParam0, int iParam1) // Position - 0xD7DC Signature - 22 02 04 00 00 66 00 66 01 39 72
{
	func_548(bParam0, iParam1);
	return;
}

void func_441(int iParam0) // Position - 0xD7EC Signature - 22 01 03 00 00 66 00 5D DD
{
	Global_1102813.f_26.f_12 = iParam0;
	return;
}

BOOL func_442(int iParam0) // Position - 0xD7FE Signature - 22 01 03 00 00 5D DD D3 10 80 1A 27 07
{
	return Global_1102813.f_26.f_7 && iParam0 != false;
}

BOOL func_443(BOOL bParam0) // Position - 0xD813 Signature - 22 01 03 00 00 5D DD D3 10 80 1A 27 09 66 00 69 2F
{
	return Global_1102813.f_26.f_9 && bParam0 != false;
}

BOOL func_444(int iParam0) // Position - 0xD828 Signature - 22 01 03 00 00 66 00 5D CF
{
	return Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1 == Global_1106895[iParam0 /*2*/].f_1;
}

int func_445() // Position - 0xD856 Signature - 22 00 02 00 00 85 DD
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

void func_446(BOOL bParam0) // Position - 0xD889 Signature - 22 01 03 00 00 66 00 39 87
{
	if (func_549(bParam0))
		return;

	Global_1102813.f_26.f_9 = Global_1102813.f_26.f_9 || bParam0;
	return;
}

BOOL func_447() // Position - 0xD8B0 Signature - 22 00 02 00 00 5D 08 3B 1D 78 9D
{
	return Global_1915656.f_20637 || Global_1915656.f_22504.f_1;
}

BOOL func_448(int iParam0) // Position - 0xD8CE Signature - 22 01 03 00 00 6D 1B
{
	return func_345(27, iParam0);
}

BOOL func_449(int iParam0) // Position - 0xD8DE Signature - 22 01 03 00 00 66 00 2F 7E
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_450(int iParam0) // Position - 0xD8F4 Signature - 22 01 03 00 00 66 00 39 DE D8 00 05 8B 04 00 2F 50 01 01 66 00 6D
{
	if (!func_449(iParam0))
		return false;

	return func_453(iParam0, 8);
}

void func_451(int iParam0, int iParam1) // Position - 0xD912 Signature - 22 02 04 00 00 66 00 39 DE D8 00 05 8B 03 00 50 02 00 66 01 66
{
	if (!func_449(iParam0))
		return;

	Global_1887363[iParam0 /*36*/].f_20 = iParam1;
	return;
}

void func_452(BOOL bParam0) // Position - 0xD933 Signature - 22 01 03 00 00 85 EB E4 1C 66
{
	Global_1893611 = Global_1893611 || bParam0;
	return;
}

BOOL func_453(int iParam0, BOOL bParam1) // Position - 0xD946 Signature - 22 02 04 00 00 5D 17 00 18 27 0E 08 15 0F
{
	if (Global_1572887.f_14 == -1)
		return Global_8130[iParam0 /*11*/] && bParam1 != false;

	return Global_1072759.f_19611[iParam0 /*11*/] && bParam1 != false;
}

void func_454(BOOL bParam0) // Position - 0xD977 Signature - 22 01 03 00 00 85 EB E4 1C 85
{
	Global_1893611 = Global_1893611 - Global_1893611 && bParam0;
	return;
}

BOOL func_455(BOOL bParam0) // Position - 0xD98F Signature - 22 01 05 00 00 2F 67 03 2F 67 04 66
{
	BOOL flag;
	int i;

	flag = false;

	for (i = 0; i < 150; i = i + 1)
	{
		if (func_453(i, true))
			if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1887363[i /*36*/].f_27)))
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1887363[i /*36*/].f_27));
	
		if (Global_1887363[i /*36*/].f_10 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1887363[i /*36*/].f_10, false))
				if (func_11() == -1)
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1887363[i /*36*/].f_10, 523);
				else if (!SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(Global_1887363[i /*36*/].f_10))
					SCRIPTS::_REQUEST_THREAD_EXIT(Global_1887363[i /*36*/].f_10);
			else if (func_453(i, 2))
				if (func_11() == -1)
					PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1887363[i /*36*/].f_27), 523);
				else
					SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(MISC::GET_HASH_KEY(&(Global_1887363[i /*36*/].f_27)));
		
			if (!SCRIPTS::DOES_THREAD_EXIST(Global_1887363[i /*36*/].f_10))
			{
				Global_1887363[i /*36*/].f_10 = 0;
				func_550(i, 11);
			}
			else
			{
				flag = true;
			}
		}
		else if (bParam0)
		{
			if (func_453(i, true))
				func_550(i, true);
		}
	}

	return !flag;
}

BOOL func_456(int iParam0) // Position - 0xDAB4 Signature - 22 01 03 00 00 5D FD
{
	return Global_265213.f_122484.f_139 && iParam0 != false;
}

BOOL func_457() // Position - 0xDACC Signature - 22 00 02 00 00 39 F0
{
	return func_551() > 11;
}

void func_458() // Position - 0xDADB Signature - 22 00 02 00 00 37 C4
{
	if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("player_menu")) && !func_552(4096))
		UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("player_menu"));

	return;
}

BOOL func_459(int iParam0, BOOL bParam1) // Position - 0xDB05 Signature - 22 02 05 00 00 2F 67 04 66 00
{
	BOOL flag;

	flag = false;

	if (iParam0 == 255)
	{
		flag = true;
		iParam0 = func_491();
	}
	else if (iParam0 == func_491())
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

void func_460() // Position - 0xDB8C Signature - 22 00 02 00 00 2F 5D 0B
{
	Global_1956875.f_1431.f_108 = 0;
	Global_1956875.f_1431.f_108.f_1 = 0f;
	Global_1956875.f_1431.f_108.f_3 = 0f;
	Global_1956875.f_1431.f_108.f_2 = 0f;
	Global_1956875.f_1431.f_108.f_4 = 0f;
	Global_1956875.f_1431.f_108.f_6 = 0f;
	Global_1956875.f_1431.f_108.f_5 = 0f;
	return;
}

void func_461(int iParam0) // Position - 0xDBE6 Signature - 22 01 03 00 00 66 00 5D 17 00 18 80 48 6C 28
{
	Global_1572887.f_72.f_40 = iParam0;
	return;
}

int func_462(Hash hParam0) // Position - 0xDBF8 Signature - 22 01 05 00 00 4D
{
	int i;
	int j;

	if (6 == hParam0)
		return 10;

	if (5 == hParam0)
		return 11;

	if (7 == hParam0)
		return 12;

	if (8 == hParam0)
		return 13;

	for (i = 0; i < 64; i = i + 1)
	{
		if (hParam0 != Global_265213.f_107995.f_13575[i])
		{
		}
		else
		{
			for (j = 0; j < 21; j = j + 1)
			{
				if (Global_265213.f_107995.f_13510[i] != Global_265189.f_1[j])
				{
				}
				else
				{
					return j;
				}
			}
		}
	}

	return -1;
}

Hash func_463(int iParam0) // Position - 0xDC91 Signature - 22 01 03 00 00 66 00 3C 15 00 00
{
	switch (iParam0)
	{
		case 0:
			return joaat("net_playlist_race_series");
	
		case 1:
			return joaat("net_playlist_featured_series_001");
	
		case 2:
			return joaat("net_playlist_adversary_small");
	
		case 3:
			return joaat("net_playlist_adversary_medium");
	
		case 4:
			return joaat("net_playlist_adversary_large");
	
		case 5:
			return joaat("net_playlist_gun_rush_teams");
	
		case 6:
			return joaat("net_playlist_gun_rush_free_for_all");
	
		case 7:
			return joaat("net_playlist_elimination_small");
	
		case 8:
			return joaat("net_playlist_elimination_medium");
	
		case 9:
			return joaat("net_playlist_elimination_large");
	
		case 10:
			return joaat("net_playlist_nominated_series");
	
		case 11:
			return joaat("net_playlist_nominated_series_small");
	
		case 12:
			return joaat("net_playlist_nominated_series_medium");
	
		case 13:
			return joaat("net_playlist_nominated_series_large");
	
		case 14:
			return joaat("net_playlist_private_series");
	
		case 15:
			return joaat("net_playlist_orbis_series_1");
	
		case 16:
			return joaat("net_playlist_orbis_series_2");
	
		case 17:
			return joaat("net_playlist_orbis_series_3");
	
		case 18:
			return joaat("net_playlist_shootout");
	
		case 19:
			return joaat("net_playlist_capture");
	
		case 20:
			return -1516590035;
	
		default:
		
	}

	return 0;
}

void func_464() // Position - 0xDDC8 Signature - 22 00 02 00 00 5D 17 00 18 80 48 27 3C
{
	if (Global_1572887.f_72.f_60)
		return;

	Global_1572887.f_72.f_60 = 1;
	TELEMETRY::_TELEMETRY_MATCH_QUEUE(Global_1572887.f_72.f_60.f_1, Global_1572887.f_72.f_60.f_2, Global_1572887.f_72.f_60.f_3, Global_1572887.f_72.f_60.f_4, Global_1572887.f_72.f_60.f_5, &(Global_1572887.f_72.f_60.f_6), Global_1572887.f_300.f_10 != 0);
	return;
}

void func_465() // Position - 0xDE32 Signature - 22 00 03 00 00 39 9D
{
	Player player;

	if (func_11() == -1)
		return;

	player = Global_1295666;

	if (func_254(Global_1572887.f_8, true))
		func_408(&(Global_1056554[player /*491*/].f_204.f_10), 4);
	else
		func_415(&(Global_1056554[player /*491*/].f_204.f_10), 4);

	Global_1056554[player /*491*/].f_204 = Global_1572887.f_72;
	Global_1056554[player /*491*/].f_204.f_1 = Global_1572887.f_72.f_9;
	Global_1056554[player /*491*/].f_204.f_2 = Global_1572887.f_72.f_10;
	Global_1056554[player /*491*/].f_204.f_3 = { Global_1572887.f_72.f_11 };
	Global_1056554[player /*491*/].f_204.f_8 = Global_1572887.f_72.f_13;
	Global_1056554[player /*491*/].f_204.f_5 = { Global_1572887.f_260 };
	Global_1056554[player /*491*/].f_204.f_9 = Global_1572887.f_72.f_39;

	if (func_552(1024))
		func_408(&(Global_1056554[player /*491*/].f_204.f_10), 2);
	else
		func_415(&(Global_1056554[player /*491*/].f_204.f_10), 2);

	return;
}

void func_466(var uParam0, var uParam1, var uParam2) // Position - 0xDF47 Signature - 22 03 0E
{
	int num;
	Volume volume;
	var volumeCoords;
	float num2;
	float randomFloatInRange;

	volumeCoords = { uParam0 };
	num = func_553(uParam0);

	if (num != -1)
	{
		volume = Global_1887363[num /*36*/].f_5;
	
		if (VOLUME::DOES_VOLUME_EXIST(volume))
			volumeCoords = { VOLUME::GET_VOLUME_COORDS(volume) };
	}
	else
	{
		num2 = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
	
		if (!func_482(&volumeCoords, &num2))
			volumeCoords = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
	}

	randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f);
	randomFloatInRange.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f);
	volumeCoords = { volumeCoords + randomFloatInRange };
	uParam0 = { uParam0 + randomFloatInRange };
	func_483(volumeCoords, 0f, uParam0, 0f, -1082130432, -1082130432, true, 1, 1, 1);
	func_554(false);
	return;
}

BOOL func_467(BOOL bParam0) // Position - 0xE013 Signature - 22 01 03 00 00 5D F0 5E 12 27 03
{
	return func_254(Global_1203952.f_3, bParam0);
}

BOOL func_468(Player plParam0) // Position - 0xE027 Signature - 22 01 03 00 00 66 00 5D 2A 1F 10 40 EB 01 80 CC 27 0A 50
{
	return Global_1056554[plParam0 /*491*/].f_204.f_10;
}

var func_469(Player plParam0) // Position - 0xE03C Signature - 22 01 03 00 00 66 00 5D 2A 1F 10 40 EB 01 80 CC 27 08
{
	return Global_1056554[plParam0 /*491*/].f_204.f_8;
}

BOOL func_470(Player plParam0) // Position - 0xE051 Signature - 22 01 03 00 00 66 00 5D 2A 1F 10 40 EB 01 80 CC 27 09
{
	return Global_1056554[plParam0 /*491*/].f_204.f_9;
}

BOOL func_471(var uParam0, var uParam1) // Position - 0xE066 Signature - 22 02 04 00 00 66 00 39 AF
{
	if (!func_555(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_556(uParam0))
		return false;

	return true;
}

BOOL func_472() // Position - 0xE09A Signature - 22 00 02 00 00 85 F4 88 11 11
{
	if (Global_1149172 == 2)
		return true;

	return false;
}

BOOL func_473(var uParam0, var uParam1) // Position - 0xE0AF Signature - 22 02 09 00 00 11
{
	int num;
	var unk;
	var unk2;

	num = func_393(uParam0);
	unk2 = { func_557(num, &unk) };

	if (_IS_NULL_VECTOR(unk2))
		return false;

	if (func_234(255))
		return false;

	func_558(4);
	func_335(true);
	func_328(true);
	func_309(true);
	func_559(unk2, unk, true);
	func_558(16);
	return true;
}

void func_474(int iParam0) // Position - 0xE10F Signature - 22 01 03 00 00 66 00 5D 17 00 18 80 48 6C 0E
{
	Global_1572887.f_72.f_14 = iParam0;
	return;
}

int func_475(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xE121 Signature - 22 07 0A 00 00 66
{
	Hash hash;

	if (!func_560(iParam0, iParam1))
		return 0;

	func_561();
	func_562(iParam0, iParam1, uParam4, true);
	func_563(uParam2, true);
	func_564(uParam5);
	func_461(14);
	func_565(uParam6, true);
	func_566();
	func_567();
	hash = func_463(func_462(Global_1572887.f_72.f_9));
	Global_1572887.f_72.f_60.f_1 = hash != 0 ? hash : Global_1572887.f_72.f_9;
	Global_1572887.f_72.f_60.f_2 = 1;
	Global_1572887.f_72.f_60.f_4 = MISC::GET_GAME_TIMER() - Global_1572887.f_72.f_41;
	Global_1572887.f_72.f_60.f_5 = func_568(Global_1572887.f_72.f_11);

	if (func_471(uParam2))
		func_569(uParam2);

	return 1;
}

int func_476(int iParam0) // Position - 0xE1E9 Signature - 22 01 05 00 00 2F 21
{
	int randomIntInRange;
	int num;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);

	switch (iParam0)
	{
		case 0:
			num = randomIntInRange % 2;
		
			switch (num)
			{
				case 0:
					return 6;
			
				case 1:
					return 7;
			
				default:
					break;
			}
			break;
	
		case 1:
			num = randomIntInRange % 3;
		
			switch (num)
			{
				case 0:
					return 0;
			
				case 1:
					return 2;
			
				case 2:
					return 11;
			
				default:
					break;
			}
			break;
	
		case 2:
			num = randomIntInRange % 4;
		
			switch (num)
			{
				case 0:
					return 13;
			
				case 1:
					return 14;
			
				case 2:
					return 15;
			
				case 3:
					return 16;
			
				default:
					break;
			}
			break;
	
		case 3:
			num = randomIntInRange % 3;
		
			switch (num)
			{
				case 0:
					return 3;
			
				case 1:
					return 9;
			
				case 2:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 4:
			num = randomIntInRange % 3;
		
			switch (num)
			{
				case 0:
					return 1;
			
				case 1:
					return 4;
			
				case 2:
					return 12;
			
				default:
					break;
			}
			break;
	
		case 5:
			return 8;
	}

	return -1;
}

int func_477(int iParam0) // Position - 0xE321 Signature - 22 01 05 00 00 66 00 08
{
	int randomIntInRange;
	int num;

	if (iParam0 <= -1 || iParam0 >= 17)
		iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 17);

	if (iParam0 == 8)
		iParam0 = 9;

	switch (iParam0)
	{
		case 0:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 10 + 1);
			break;
	
		case 1:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(11, 30 + 1);
			break;
	
		case 2:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(31, 34 + 1);
			break;
	
		case 3:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(35, 38 + 1);
			break;
	
		case 4:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(39, 41 + 1);
			break;
	
		case 5:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(42, 61 + 1);
			break;
	
		case 6:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(53, 61 + 1);
			break;
	
		case 7:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(42, 52 + 1);
			break;
	
		case 8:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(62, 66 + 1);
			break;
	
		case 9:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(67, 81 + 1);
			break;
	
		case 10:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(82, 98 + 1);
			break;
	
		case 11:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(99, 112 + 1);
			break;
	
		case 12:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(113, 119 + 1);
			break;
	
		case 13:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(120, 122 + 1);
			break;
	
		case 14:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(123, 126 + 1);
			break;
	
		case 15:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(127, 134 + 1);
			break;
	
		case 16:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(135, 138 + 1);
			break;
	}

	num = randomIntInRange;

	if (num == 8)
		num = 5;

	if (num == 55)
		num = 45;

	return num;
}

void func_478(int iParam0, BOOL bParam1) // Position - 0xE4C6 Signature - 22 02 2B
{
	var unk;
	float num;

	if (!func_482(&(num.f_6), &num))
	{
		num.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
		num = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
	}

	num.f_5 = 1;
	func_288(92);

	if (func_570(iParam0, &unk))
	{
		func_571(&unk, &num, 1, true, 1);
	
		if (bParam1)
			func_348(0);
	
		return;
	}

	func_572(num.f_6, num, -1082130432, -1082130432, true, 1, 1);

	if (bParam1)
		func_348(0);

	return;
}

BOOL func_479(Any anParam0) // Position - 0xE55B Signature - 22 01 12
{
	Player gangLeader;
	int num;
	var unk;
	int num2;
	int i;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(anParam0))
		return false;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(anParam0);

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
	{
		if (gangLeader == PLAYER::PLAYER_ID())
		{
			POSSE::_0xC08AFF658B2E51DA(&num);
		
			if (num != 0)
				return true;
		}
		else
		{
			unk = { func_371(gangLeader) };
		
			for (i = 0; i <= POSSE::_0xC084FF658B2E61DA(&unk) - 1; i = i + 1)
			{
				if (POSSE::_0xC084FF658B2E81DA(&unk, i, &num2) && num2 != 0 && num2.f_9 == 1)
					return true;
			}
		}
	}

	return false;
}

BOOL func_480(Player plParam0) // Position - 0xE5E7 Signature - 22 01 32
{
	var unk;
	int num;
	int i;

	if (Global_1203952.f_1 == 6 || Global_1203952.f_1 == 7)
		return 1;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return 0;

	if (GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(plParam0)) && GANG::_0x7933754F260B428A(plParam0) > 0)
		return 0;

	unk = { func_371(plParam0) };
	num.f_13 = 10;

	for (i = 0; i <= POSSE::_0xC084FF658B2E61DA(&unk) - 1; i = i + 1)
	{
		if (POSSE::_0xC084FF658B2E71DA(&unk, i, &num))
		{
			if (num.f_9 == 1 && num != 0)
			{
				if (func_573(num))
				{
					func_574(2);
					return func_575(num, 0);
				}
				else if (num.f_12 < 10)
				{
					Global_1203952.f_14 = { unk };
					Global_1203952.f_14.f_2 = num;
					Global_1203952.f_14.f_4 = GANG::NETWORK_GET_GANG_ID(plParam0);
					func_576(6);
					func_577(32);
					func_574(2);
				
					if (GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
						GANG::_NETWORK_LEAVE_GANG(GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()));
				
					return 1;
				}
			}
		}
	}

	return 0;
}

void func_481() // Position - 0xE6FC Signature - 22 00 02 00 00 25 00 04 39 13 E0 00 8B
{
	if (func_467(1024))
		func_494(1024);

	return;
}

BOOL func_482(Vector3* pvParam0, float* pfParam1) // Position - 0xE715 Signature - 22 02 07 00 00 2F
{
	Hash hash;
	int endRange;
	int randomIntInRange;

	hash = Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/];
	endRange = func_578(hash);

	if (endRange <= 0)
	{
		return false;
	}
	else
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
	
		if (func_579(hash, randomIntInRange, pvParam0, pfParam1))
			return true;
	}

	return false;
}

void func_483(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, float fParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13) // Position - 0xE765 Signature - 22 0E 10
{
	if (func_346(255) == 4)
		return;

	if (_IS_NULL_VECTOR(uParam0))
		return;

	if (iParam8 < 0f && iParam9 < 0f)
	{
		iParam8 = Global_1901671.f_51;
		iParam9 = Global_1901671.f_51.f_1;
	}

	if (iParam8 == 0f && iParam9 == 0f)
	{
		iParam8 = Global_1901671.f_51;
		iParam9 = Global_1901671.f_51.f_1;
	}

	if (iParam9 < iParam8)
	{
		iParam8 = Global_1901671.f_51;
		iParam9 = Global_1901671.f_51.f_1;
	}

	if (bParam10)
		func_307(0, false, 0, true);

	func_288(0);
	func_288(3);
	Global_1102813.f_3909 = iParam11;
	Global_1102813.f_3910 = iParam12;
	Global_1102813.f_3911 = iParam13;
	func_487(&(Global_1102813.f_3839));
	Global_1102813.f_3839 = fParam3;
	Global_1102813.f_3839.f_5 = 1;
	Global_1102813.f_3839.f_17.f_6 = { uParam0 };
	Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
	Global_1102813.f_3839.f_17 = { iParam9, iParam9, iParam9 };
	Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");

	if (iParam8 > 1f)
	{
		Global_1102813.f_3839.f_16 = 1;
		Global_1102813.f_3839.f_6.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3839.f_6.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_6 = { iParam8, iParam8, iParam8 };
		Global_1102813.f_3839.f_6.f_9 = joaat("volSphere");
	}

	func_488(&(Global_1102813.f_3878));
	Global_1102813.f_3878.f_6 = { uParam4 };
	Global_1102813.f_3878 = fParam7;
	Global_1102813.f_3878.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_489(Global_1102813.f_3839, 36);
	func_490(Global_1102813.f_3878, 36);
	return;
}

BOOL func_484(BOOL bParam0, BOOL bParam1) // Position - 0xE93A Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 02
{
	return bParam0 && bParam1 != false;
}

void func_485(BOOL bParam0, BOOL bParam1) // Position - 0xE949 Signature - 22 02 04 00 00 66 00 66 01 39 6A
{
	func_580(bParam0, bParam1);
	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0xE959 Signature - 22 03 05 00 00 66 00 73
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_487(var uParam0) // Position - 0xE983 Signature - 22 01 21
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_488(float* pfParam0) // Position - 0xE995 Signature - 22 01 0C 00 00 6D 09 4B 03 2D 6D 09 66 00 06 50 01 00 22 1F
{
	var unk;

	*pfParam0 = { unk };
	return;
}

void func_489(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0xE9A7 Signature - 22 1F
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

void func_490(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0xE9FD Signature - 22 0A 0C 00 00 4B 00 27 05 3C 03 00 01 00 00 00 0F 00 02 00 00 00 0C 00 03 00 00 00 09 00 68 09 00 68 06 00 68 03 00 68 00 00 50 0A 00 22 00 02
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

int func_491() // Position - 0xEA2A Signature - 22 00 02 00 00 5D DD D3 10 78 58
{
	return Global_1102813.f_3672;
}

BOOL func_492(Any* panParam0, int iParam1, int iParam2) // Position - 0xEA39 Signature - 22 03 08 00 00 66 01 6D 1F 59 67 05 66 01 6D 1F 47 67 06 66 05 66 00 17 01 66 06 03 09 00 E8 67 07 66 05 66 00 63 01 66 06 03 08 01 65
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

int func_493(int iParam0, BOOL bParam1) // Position - 0xEA6B Signature - 22 02 08 00 00 03 01 01 23 03 05 00 CF
{
	BOOL flag;
	BOOL flag2;
	var gamerHandle2;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		flag = GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID());
	
		if (GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
			if (flag)
				GANG::_NETWORK_LEAVE_GANG(true);
			else
				GANG::_NETWORK_LEAVE_GANG(false);
	}

	if (Global_1203952.f_472 != -1 && Global_1203952.f_483[Global_1203952.f_472 /*63*/] != 0)
	{
		gamerHandle2 = { func_581() };
	
		if (func_361(Global_1203952.f_483[Global_1203952.f_472 /*63*/].f_19) && func_361(gamerHandle2))
			flag2 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1203952.f_483[Global_1203952.f_472 /*63*/].f_19), &gamerHandle2);
	}

	if (POSSE::_0xC08BFF658B2E51DA(0))
	{
		func_582(flag2, iParam0);
	
		if (bParam1)
			func_583();
	
		return 1;
	}

	return 0;
}

void func_494(int iParam0) // Position - 0xEB37 Signature - 22 01 03 00 00 5D F0 5E 12 80 03 66 00 39 79
{
	func_415(&(Global_1203952.f_3), iParam0);
	return;
}

int func_495(Any* panParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0xEB4B Signature - 22 06 0D
{
	int num;
	int num2;

	num = iParam4;
	num.f_1 = iParam3;
	num.f_2 = sParam1;
	num.f_3 = sParam2;
	num2 = UISTICKYFEED::_UI_STICKY_FEED_CREATE_WARNING_MESSAGE(panParam0, &num, bParam5);
	return num2;
}

void func_496(Hash hParam0) // Position - 0xEB77 Signature - 22 01 03 00 00 66 00 03 05 01 74
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam0))
		return;

	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1940252.f_245.f_5, hParam0);
	func_584(hParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(hParam0);
	func_513(Global_1940252.f_245.f_1306 - 1);
	return;
}

void func_497(BOOL bParam0) // Position - 0xEBB5 Signature - 22 01 03 00 00 66 00 8B 17
{
	if (bParam0)
		if (!Global_1896762.f_352)
			Global_1896762.f_352 = bParam0;
	else if (Global_1896762.f_352)
		Global_1896762.f_352 = bParam0;

	return;
}

int func_498(int iParam0, int iParam1) // Position - 0xEBEC Signature - 22 02 04 00 00 66 00 2F 35
{
	if (iParam0 < 0 || iParam0 >= 32)
		return -1;

	if (iParam1 <= -1)
		return -1;

	return Global_1149432.f_5087[iParam0 /*10*/].f_5[iParam1];
}

int func_499(int iParam0) // Position - 0xEC25 Signature - 22 01 03 00 00 66 00 3C 02 00 01
{
	switch (iParam0)
	{
		case 1:
		
	
		case 2:
		
	
		default:
		
	}

	return 2;
}

void func_500(int iParam0, int iParam1, int iParam2) // Position - 0xEC4A Signature - 22 03 06 00 00 66 02 08
{
	Player player;

	if (iParam2 == -1)
		return;

	if (iParam1 <= -1)
		return;

	if (iParam0 < 0 || iParam0 >= 32)
		return;

	player = PLAYER::INT_TO_PLAYERINDEX(iParam0);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		return;

	Global_1149432.f_5087[iParam0 /*10*/].f_5[iParam1] = iParam2;
	return;
}

void func_501(int iParam0, int iParam1, int iParam2) // Position - 0xECA1 Signature - 22 03 06 00 00 66 01 08
{
	Player player;

	if (iParam1 <= -1)
		return;

	if (iParam0 < 0 || iParam0 >= 32)
		return;

	player = PLAYER::INT_TO_PLAYERINDEX(iParam0);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		return;

	Global_1149432.f_5087[iParam0 /*10*/][iParam1] = iParam2;
	return;
}

int func_502(int iParam0, int iParam1) // Position - 0xECED Signature - 22 02 05 00 00 66 01 08
{
	Player player;

	if (iParam1 <= -1)
		return 0;

	if (iParam0 < 0 || iParam0 >= 32)
		return 0;

	player = PLAYER::INT_TO_PLAYERINDEX(iParam0);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		return 0;

	return Global_1149432.f_5087[iParam0 /*10*/][iParam1];
}

void func_503(var uParam0) // Position - 0xED3A Signature - 22 01 1A
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
			func_585(num);
			break;
	
		case 1:
			num = uParam0->f_1;
			SCRIPTS::_SET_ALL_PLAYER_BITS(&(num.f_2));
			func_585(num);
		
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
		
			func_586(&unk4, value);
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
			func_585(num);
		
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
		
			func_586(&unk12, value);
			break;
	}

	return;
}

void func_504(var uParam0) // Position - 0xEF0D Signature - 22 01 03 00 00 66 00 2F 39 33
{
	func_587(uParam0, 0);
	return;
}

char* func_505(Any anParam0, BOOL bParam1, int iParam2) // Position - 0xEF1C Signature - 22 03 16 00 00 25
{
	char* str;
	Player gangLeader;
	Player player;
	var unk;
	var unk3;
	int num;
	int i;

	str = "Invalid Posse";

	if (!GANG::NETWORK_IS_GANG_ID_VALID(anParam0))
		return str;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(anParam0);

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
	{
		if (Global_1901671.f_51.f_29 && !unk_0xDBDF80673BBA3D65(1))
		{
			str = func_588(anParam0, bParam1, iParam2);
			return str;
		}
		else if (func_479(anParam0))
		{
			player = gangLeader;
		
			if (player >= 0 && player < 32)
			{
				if (Global_1102813.f_17 != Global_1101558[player /*38*/].f_17)
				{
					str = func_588(anParam0, bParam1, iParam2);
					return str;
				}
			}
		
			if (!NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1) && MISC::IS_ORBIS_VERSION())
			{
				str = func_588(anParam0, bParam1, iParam2);
			}
			else
			{
				unk = { func_371(gangLeader) };
			
				for (i = 0; i <= POSSE::_0xC084FF658B2E61DA(&unk) - 1; i = i + 1)
				{
					if (POSSE::_0xC084FF658B2E81DA(&unk, i, &unk3) && unk3.f_9)
					{
						num = 1;
					
						if (iParam2 == 0)
							str = func_508(func_589(unk3.f_1), joaat("COLOR_PURE_WHITE"));
						else
							str = func_508(func_589(unk3.f_1), iParam2);
					
						break;
					}
				}
			
				if (num == 0)
					return func_588(anParam0, bParam1, iParam2);
			
				if (func_590(func_589(unk3.f_1)))
					if (bParam1 == true && func_591(gangLeader, str))
						str = func_588(anParam0, bParam1, iParam2);
				else
					func_588(anParam0, bParam1, iParam2);
			}
		}
		else
		{
			str = func_588(anParam0, bParam1, iParam2);
		}
	}
	else if (Global_1901671.f_51.f_29 && !unk_0xDBDF80673BBA3D65(1))
	{
		str = func_588(anParam0, bParam1, iParam2);
		return str;
	}

	return str;
}

char* func_506(int iParam0, var uParam1) // Position - 0xF0D6 Signature - 22 02 05 00 00 2F 04
{
	char* str;

	str = "";
	*uParam1 = 0;

	if (iParam0 == 80)
	{
		str = "GF_FEUD_POSSE_LEADER_FEUD";
		*uParam1 = 1;
	}

	if (iParam0 == 81)
	{
		str = "GF_FEUD_POSSE_FEUD";
		*uParam1 = 1;
	}

	if (iParam0 == 85)
	{
		str = "GF_FEUD_FEUD";
		*uParam1 = 1;
	}

	if (iParam0 == 82)
	{
		str = "GF_FEUD_POSSE_INFIGHTING";
		*uParam1 = 1;
	}

	return str;
}

char* func_507(Player plParam0) // Position - 0xF12C Signature - 22 01 04 00 00 66 00 03 05 00 35
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return "";

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return "";

	player = plParam0;

	if (player < 0 || player >= 32)
		return "";

	return func_592(player);
}

char* func_508(const char* sParam0, int iParam1) // Position - 0xF173 Signature - 22 02 04 00 00 66 01 37
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);

	return func_411(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

struct<8> func_509(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29) // Position - 0xF1A9 Signature - 22 1E
{
	var unk;
	Hash hash;

	TEXT_LABEL_ASSIGN_STRING(&unk, "GAME_INVITE_HEADER", 64);

	switch (uParam0.f_11.f_4)
	{
		case 69:
		case 70:
			unk = { func_593(uParam0.f_11.f_7) };
			break;
	
		case 72:
			hash = func_95(uParam0.f_11.f_7);
		
			if (hash != -1)
				unk = { Global_265213.f_4[hash /*46*/].f_7 };
			else
				unk = { func_594(uParam0.f_11.f_14) };
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "GF_FEUD_TOAST_OPT_IN_PLFEUD", 64);
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "GF_FEUD_TOAST_OPT_IN_PFEUD", 64);
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "GF_FEUD_TOAST_OPT_IN_FEUD", 64);
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MG_INVITE_HEADER", 64);
			break;
	}

	return unk;
}

const char* func_510(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xF26D Signature - 22 08 0A 00 00 4B 00 4B 00 03 05 01 81 03 09 00 2D 50 08 01 22 00
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_511() // Position - 0xF281 Signature - 22 00 30
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
			if (func_595(hash))
				func_496(hash);
		
			return i;
		}
	}

	return func_596();
}

void func_512(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33) // Position - 0xF2E4 Signature - 22 22 24
{
	func_597(hParam0, hParam1, uParam2, uParam10);
	hParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(15), uParam10.f_16);
	hParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(17), uParam10.f_17);
	hParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(3), uParam10.f_18);
	hParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(4), uParam10.f_19);
	hParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(5), uParam10.f_20);
	hParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(6), uParam10.f_21);
	hParam0->f_25 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(98), uParam10.f_22);
	hParam0->f_26 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(99), uParam10.f_23);
	hParam0->f_27 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(100), uParam10.f_23);
	return;
}

void func_513(int iParam0) // Position - 0xF3B7 Signature - 22 01 03 00 00 66 00 5D 1C 9B 1D 80
{
	Global_1940252.f_245.f_1306 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_245.f_6, MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(Global_1940252.f_245.f_1306), 0));
	return;
}

BOOL func_514(var uParam0) // Position - 0xF3E8 Signature - 22 01 03 00 00 09 50
{
	return true;
}

Hash func_515(var uParam0) // Position - 0xF3F1 Signature - 22 01 03 00 00 66 00 27 02
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
		return func_598(func_508(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_508(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, true, true, uParam0->f_4, uParam0->f_21);
	else if (*uParam0 == 6)
		return func_599(func_508(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_508(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	else if (*uParam0 == 1)
		return func_600(func_508(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_508(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, true, true);
	else if (*uParam0 == 3)
		return func_601(func_508(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_508(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	else if (*uParam0 == 2)
		return func_602(func_508(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_508(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, true, true);
	else if (*uParam0 == 4)
		return func_603(func_508(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_508(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	else if (*uParam0 == 0)
		return func_267(func_508(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_508(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, true, true);

	return 0;
}

int func_516() // Position - 0xF6D3 Signature - 22 00 02 00 00 5D 1C
{
	return Global_1940252.f_245.f_1305;
}

void func_517() // Position - 0xF6E4 Signature - 22 00 05 00 00 39
{
	var unk;

	if (func_604() == -1)
		return;

	func_496(Global_1072759.f_23.f_2.f_1);
	unk = -1;
	Global_1072759.f_23.f_2 = { unk };
	return;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0xF71A Signature - 22 01 03 00 00 66 00 27 01
{
	return uParam0->f_1;
}

int func_519(int iParam0) // Position - 0xF726 Signature - 22 01 03 00 00 21
{
	return 60000;
}

BOOL func_520(int iParam0) // Position - 0xF732 Signature - 22 01 03 00 00 66 00 39 91
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(func_463(iParam0));
}

int func_521(int iParam0) // Position - 0xF744 Signature - 22 01 0B 00 00 2F
{
	int num;
	Hash hash;
	var unk;
	int randomIntInRange;
	int num2;

	num = 0;
	hash = 1;

	if (func_605() > 0)
		hash = func_605();

	unk = 3;

	switch (iParam0)
	{
		case 8:
			if (func_520(7) && func_606(7) >= hash)
			{
				unk[num] = 7;
				num = num + 1;
			}
		
			if (func_520(8) && func_606(8) >= hash)
			{
				unk[num] = 8;
				num = num + 1;
			}
		
			if (func_520(9) && func_606(9) >= hash)
			{
				unk[num] = 9;
				num = num + 1;
			}
			break;
	
		case 15:
			if (func_520(15) && func_606(15) >= hash)
			{
				unk[num] = 15;
				num = num + 1;
			}
		
			if (func_520(16) && func_606(16) >= hash)
			{
				unk[num] = 16;
				num = num + 1;
			}
			break;
	
		case 18:
			if (func_520(2) && func_606(2) >= hash)
			{
				unk[num] = 2;
				num = num + 1;
			}
		
			if (func_520(3) && func_606(3) >= hash)
			{
				unk[num] = 3;
				num = num + 1;
			}
		
			if (func_520(4) && func_606(4) >= hash)
			{
				unk[num] = 4;
				num = num + 1;
			}
			break;
	
		default:
			if (func_520(iParam0) && func_606(iParam0) >= hash)
			{
				unk[num] = iParam0;
				num = num + 1;
			}
			break;
	}

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	num2 = randomIntInRange % num;

	if (num2 < 0 || num2 >= 3)
		num2 = 0;

	return unk[num2];
}

Hash func_522(int iParam0) // Position - 0xF8F8 Signature - 22 01 04 00 00 66 00 08
{
	int i;

	if (iParam0 <= -1)
		return 0;

	if (iParam0 == 10)
		return 6;

	if (iParam0 == 11)
		return 5;

	if (iParam0 == 12)
		return 7;

	if (iParam0 == 13)
		return 8;

	for (i = 0; i < 64; i = i + 1)
	{
		if (Global_265213.f_107995.f_13510[i] == Global_265189.f_1[iParam0])
			return Global_265213.f_107995.f_13575[i];
	}

	return 0;
}

struct<2> func_523() // Position - 0xF97B Signature - 22 00 04 00 00 4B 02 6A
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	return unk;
}

int func_524(int iParam0, int iParam1, int iParam2, Hash hParam3, var uParam4, var uParam5, int iParam6, int iParam7, BOOL bParam8, int iParam9, int iParam10) // Position - 0xF994 Signature - 22 0B 66
{
	int num;
	var unk22;
	var unk30;

	if (!func_560(iParam2, hParam3))
		return 0;

	if (func_607() && Global_1572887.f_72.f_40 != 9)
		return 0;

	if (!func_608(Global_1295666.f_5))
		return 0;

	num.f_3 = -1;
	num.f_3.f_1 = -1;
	num.f_5 = 1;
	num.f_6 = 7;
	num = iParam0;
	num.f_1 = iParam1;
	num.f_2 = 1;
	num.f_3 = { uParam4 };
	func_609(&num);
	func_565(iParam10, true);
	func_562(iParam2, hParam3, iParam7, true);
	func_563(uParam4, true);
	func_610(iParam6);
	func_564(iParam9);
	func_611();

	if (func_471(uParam4) && !func_612() && Global_1220759 == -1)
		func_569(uParam4);

	NETWORK::_NETWORK_SESSION_SET_PLAYER_FLAGS(1);

	if (iParam2 != 2)
		func_613();

	if (func_612())
	{
		func_614(uParam4);
	}
	else if (iParam2 == 3)
	{
		if (!func_552(268435456))
			if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("player_menu")))
				func_615(1, false);
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
			func_616(&unk30, hParam3, -1, -1, 3);
			TEXT_LABEL_ASSIGN_STRING(&unk22, func_508(&(unk30.f_32), joaat("COLOR_PURE_WHITE")), 64);
		}
		else if (iParam2 == 1)
		{
			TEXT_LABEL_ASSIGN_STRING(&unk22, MISC::VAR_STRING(2, func_617(hParam3)), 64);
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&unk22, MISC::VAR_STRING(2, func_619(func_618(), hParam3)), 64);
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

	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()) && func_459(255, false) && !bParam8)
		func_620("NM_MATCHMAKING_WARNING");

	func_461(10);
	return 1;
}

void func_525(Any anParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xFC17 Signature - 22 09 1C 00 00 66
{
	int i;
	var variableName;
	var variableName2;

	SAVE::_0x443174C20B8B9E7F(anParam0, 119, &uParam1);
	variableName = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_iOutfitHash", 64);
	SAVE::_SAVEGAME_GET_INT_2(anParam0, &variableName);
	variableName = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_Array", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_1), 118, &variableName);

	for (i = 0; i <= 38; i = i + 1)
	{
		variableName = { uParam1 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_Array_Idx", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->f_1[i /*3*/], 3, &variableName);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_CompHash", 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->f_1[i /*3*/], &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_WearHash", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_1[i /*3*/].f_1), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_eFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_1[i /*3*/].f_2), &variableName2);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_526(var uParam0, int iParam1) // Position - 0xFD0B Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 02
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_527(var uParam0, int iParam1) // Position - 0xFD1C Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 01 03 00 00 6D
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_528(var uParam0) // Position - 0xFD31 Signature - 22 01 03 00 00 6D 11
{
	Global_1572887.f_196.f_13 = { *uParam0 };
	return;
}

int func_529() // Position - 0xFD49 Signature - 22 00 3E
{
	int i;
	var unk;

	unk.f_12.f_3 = -1;
	unk.f_12.f_3.f_1 = -1;
	unk.f_12.f_11.f_12 = -1;
	unk.f_12.f_11.f_12.f_1 = -1;
	unk.f_12.f_11.f_14 = 255;
	unk.f_12.f_11.f_15 = 255;
	unk.f_52 = -1;
	unk.f_52.f_1 = -1;
	unk.f_54 = -1;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (Global_1072759.f_23.f_306[i /*59*/].f_55 == 0 && !Global_1072759.f_23.f_306[i /*59*/].f_56)
			return i;
	}

	for (i = 0; i <= 3; i = i + 1)
	{
		if (UIFEED::_UI_FEED_GET_MESSAGE_STATE(Global_1072759.f_23.f_306[i /*59*/].f_55) == 6)
		{
			Global_1072759.f_23.f_306[i /*59*/] = { unk };
			return i;
		}
	}

	return -1;
}

int func_530(int iParam0, var uParam1) // Position - 0xFE1E Signature - 22 02 04 00 00 66 00 50
{
	return iParam0;
}

int func_531(var uParam0, var uParam1) // Position - 0xFE28 Signature - 22 02 07 00 00 4B 04 6A 80 01 08 3D 41 6A 80 02 08 3D 41 41 11 4B 00 2D 4B 04 39 D2 1C 01 8B 07
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_621(uParam0, &unk))
		return unk.f_2;

	return -1;
}

void func_532(var uParam0) // Position - 0xFE54 Signature - 22 01 03 00 00 50 01 00 22 00 02
{
	return;
}

BOOL func_533() // Position - 0xFE5C Signature - 22 00 02 00 00 85 F4 88 11 1D
{
	return Global_1149172 == 3;
}

BOOL func_534(int iParam0) // Position - 0xFE6A Signature - 22 01 03 00 00 66 00 5D F4 88 11 80 01 63 1B 27 0E
{
	return Global_1149172.f_1[iParam0 /*27*/].f_14 == 2;
}

struct<2> func_535() // Position - 0xFE80 Signature - 22 00 02 00 00 5D 2C
{
	if (Global_1205804.f_129 <= 0)
		return func_622(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_622(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

BOOL func_536(int iParam0) // Position - 0xFECB Signature - 22 01 03 00 00 03 01 01 2C
{
	if (NETWORK::NETWORK_HAVE_ROS_BANNED_PRIV())
		return true;

	if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE(7))
		return true;

	return false;
}

BOOL func_537(int iParam0) // Position - 0xFEEB Signature - 22 01 03 00 00 66 00 39 F1
{
	if (!func_623(iParam0))
		return false;

	if (Global_1149318.f_6)
		return true;

	return false;
}

BOOL func_538(int iParam0, int iParam1) // Position - 0xFF0F Signature - 22 02 10
{
	var unk;

	return func_624(iParam0, iParam1, &unk);
}

BOOL func_539(int iParam0) // Position - 0xFF21 Signature - 22 01 03 00 00 2F 50 01 01 22 04
{
	return false;
}

BOOL func_540(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xFF2A Signature - 22 04 29
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_625(bParam1, bParam2, bParam3);

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

int func_541(int iParam0, int iParam1) // Position - 0x10060 Signature - 22 02 05 00 00 66 00 08
{
	int num;

	if (iParam0 == -1)
		return 0;

	num = func_626(iParam0, iParam1);
	return num;
}

BOOL func_542(int iParam0) // Position - 0x1007E Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 39
{
	if (iParam0 < 0)
		return false;

	if (func_11() == 0)
		return func_627(iParam0);

	return iParam0 <= func_628();
}

int func_543(int iParam0) // Position - 0x100AB Signature - 22 01 03 00 00 66 00 3C 01
{
	switch (iParam0)
	{
		case 2:
			return 6;
	
		default:
		
	}

	return 1;
}

struct<10> func_544(int iParam0) // Position - 0x100C6 Signature - 22 01 0D 00 00 4B
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	func_630(func_629(iParam0), &unk);
	return unk;
}

void func_545(int iParam0) // Position - 0x100F3 Signature - 22 01 13
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

int func_546() // Position - 0x10153 Signature - 22 00 02 00 00 5D A3 D7 13 78
{
	return Global_1300387.f_288;
}

int func_547() // Position - 0x10162 Signature - 22 00 02 00 00 5D A3 D7 13 80
{
	return Global_1300387.f_150.f_4;
}

void func_548(BOOL bParam0, int iParam1) // Position - 0x10172 Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 01 03 00 00 5D
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

BOOL func_549(BOOL bParam0) // Position - 0x10187 Signature - 22 01 03 00 00 5D DD D3 10 80 1A 27 09 66 00 69 66
{
	return Global_1102813.f_26.f_9 && bParam0 == bParam0;
}

void func_550(int iParam0, BOOL bParam1) // Position - 0x1019D Signature - 22 02 04 00 00 5D 17 00 18 27 0E 08 15 1C
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/] = Global_8130[iParam0 /*11*/] - Global_8130[iParam0 /*11*/] && bParam1;
		return;
	}

	Global_1072759.f_19611[iParam0 /*11*/] = Global_1072759.f_19611[iParam0 /*11*/] - Global_1072759.f_19611[iParam0 /*11*/] && bParam1;
	return;
}

int func_551() // Position - 0x101F0 Signature - 22 00 02 00 00 5D 17 00 18 80 48 27 28 50
{
	return Global_1572887.f_72.f_40;
}

BOOL func_552(BOOL bParam0) // Position - 0x10200 Signature - 22 01 03 00 00 5D 17 00 18 80 48 27
{
	return Global_1572887.f_72.f_15 && bParam0 != false;
}

int func_553(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x10215 Signature - 22 03 0A 00 00 08
{
	int num;
	float num2;
	int num3;
	int i;
	float num4;

	num = -1;
	num2 = 999999.9f;

	if (_IS_NULL_VECTOR(vParam0))
		return -1;

	for (i = 0; i < Global_1893611.f_161; i = i + 1)
	{
		num3 = Global_1893611.f_10[i];
		num4 = BUILTIN::VDIST2(vParam0, Global_1887363[num3 /*36*/].f_7);
	
		if (num4 < num2)
		{
			num = num3;
			num2 = num4;
		}
	}

	if (func_449(num))
	{
	}
	else
	{
		num = -1;
	}

	return num;
}

void func_554(BOOL bParam0) // Position - 0x10290 Signature - 22 01 03 00 00 66 00 05 8B 0A 00 6D 0F
{
	if (!bParam0)
		func_348(15);
	else
		func_288(15);

	return;
}

BOOL func_555(int iParam0) // Position - 0x102AF Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 21
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

int func_556(int iParam0) // Position - 0x102EE Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 2E
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

Vector3 func_557(int iParam0, var uParam1) // Position - 0x10384 Signature - 22 02 04 00 00 66 00 3C 05
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

	return func_631(iParam0);
}

void func_558(BOOL bParam0) // Position - 0x1043A Signature - 22 01 03 00 00 5D F4
{
	if (!func_484(Global_1149172.f_145, bParam0))
		func_485(&(Global_1149172.f_145), bParam0);

	return;
}

void func_559(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1045E Signature - 22 05 07 00 00 1D
{
	if (func_632(uParam0, uParam3))
		func_344(true, bParam4);

	return;
}

BOOL func_560(int iParam0, Hash hParam1) // Position - 0x1047A Signature - 22 02 04 00 00 66 00 2F 0B
{
	if (iParam0 == 0 || iParam0 == 3)
		return hParam1 != -1;

	return hParam1 != 0;
}

void func_561() // Position - 0x1049E Signature - 22 00 02 00 00 03 01 01 23
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		if (func_384(1048576, PLAYER::PLAYER_ID()) || Global_1295658.f_2.f_1 == 2)
			func_633();

	if (LAW::GET_WANTED_SCORE(Global_1295666.f_5) > 0)
	{
		if (func_634())
			func_635();
	
		func_636();
	}

	return;
}

void func_562(int iParam0, Hash hParam1, int iParam2, BOOL bParam3) // Position - 0x104F1 Signature - 22 04 06 00 00 66 00 5D
{
	Global_1572887.f_72 = iParam0;
	Global_1572887.f_72.f_9 = hParam1;
	Global_1572887.f_72.f_10 = iParam2;

	if (bParam3)
		func_465();

	return;
}

void func_563(var uParam0, var uParam1, BOOL bParam2) // Position - 0x1051E Signature - 22 03 05 00 00 11 4B 00 2D 11
{
	Global_1572887.f_72.f_11 = { uParam0 };

	if (bParam2)
		func_465();

	return;
}

void func_564(int iParam0) // Position - 0x1053D Signature - 22 01 03 00 00 66 00 5D 17 00 18 80 48 6C 0D
{
	Global_1572887.f_72.f_13 = iParam0;
	return;
}

void func_565(int iParam0, BOOL bParam1) // Position - 0x1054F Signature - 22 02 04 00 00 66 00 5D 17
{
	Global_1572887.f_72.f_39 = iParam0;

	if (bParam1)
		func_465();

	return;
}

void func_566() // Position - 0x1056A Signature - 22 00 02 00 00 5D 17 00 18 80 08 09 39 90
{
	func_408(&(Global_1572887.f_8), 1);
	func_408(&(Global_1572887.f_8), 1073741824);
	func_465();
	return;
}

void func_567() // Position - 0x10590 Signature - 22 00 09 00
{
	Hash hash;
	int num;
	Hash hash2;
	Hash hash3;
	int i;
	int j;
	BOOL flag;

	hash = func_95(Global_1572887.f_72.f_9);

	if (hash < 0)
		return;

	num = Global_265213.f_4[hash /*46*/].f_24;

	if (num != -504335712)
		return;

	hash2 = Global_265213.f_4[hash /*46*/].f_26;

	if (hash2 != 31269700 && hash2 != -698288936)
		return;

	for (i = 0; i <= 63; i = i + 1)
	{
		for (j = 0; j <= 31; j = j + 1)
		{
			if (Global_265213.f_107995.f_1028[i /*194*/][j /*6*/] == Global_265213.f_57505[hash /*8*/])
			{
				hash3 = Global_265213.f_107995.f_13575[i];
				flag = true;
				break;
			}
		}
	
		if (flag)
			break;
	}

	func_637(hash3);
	return;
}

int func_568(var uParam0, var uParam1) // Position - 0x10663 Signature - 22 02 07 00 00 4B 04 6A 80 01 08 3D 41 6A 80 02 08 3D 41 41 11 4B 00 2D 4B 04 39 D2 1C 01 8B 05
{
	int num;

	num.f_1 = -1;
	num.f_2 = -1;

	if (func_621(uParam0, &num))
		return num;

	return 0;
}

int func_569(var uParam0, var uParam1) // Position - 0x1068D Signature - 22 02 04 00 00 39 16
{
	if (func_638())
		return 0;

	if (!func_471(uParam0))
		return 0;

	Global_1051268 = { uParam0 };
	return 1;
}

BOOL func_570(int iParam0, var uParam1) // Position - 0x106BB Signature - 22 02 09 00 00 66
{
	var groundZ;
	float volumeScale;
	float num;

	if (!func_449(iParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(Global_1887363[iParam0 /*36*/].f_4))
		return false;

	uParam1->f_17.f_6 = { VOLUME::GET_VOLUME_COORDS(Global_1887363[iParam0 /*36*/].f_4) };

	if (MISC::GET_GROUND_Z_FOR_3D_COORD(uParam1->f_17.f_6, &groundZ, false))
		uParam1->f_17.f_6.f_2 = groundZ;

	uParam1->f_17 = Global_1901671.f_51.f_1;
	uParam1->f_17.f_1 = Global_1901671.f_51.f_1;
	uParam1->f_17.f_2 = Global_1901671.f_51.f_1;
	volumeScale = { VOLUME::GET_VOLUME_SCALE(Global_1887363[iParam0 /*36*/].f_4) };
	num = (volumeScale + volumeScale.f_1 + volumeScale.f_2) * 0.3333f;

	if (num < Global_1901671.f_51)
		num = Global_1901671.f_51;

	if (num > Global_1901671.f_51.f_1)
		num = Global_1901671.f_51.f_1;

	uParam1->f_17.f_3 = { 0f, 0f, 0f };
	uParam1->f_17 = num;
	uParam1->f_17.f_1 = num;
	uParam1->f_17.f_2 = num;
	uParam1->f_17.f_9 = joaat("volSphere");
	return true;
}

void func_571(var uParam0, var uParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x107C0 Signature - 22 05 07 00 00 6D
{
	if (func_346(255) == 4)
		return;

	if (bParam3)
	{
		if (_IS_NULL_VECTOR(uParam0->f_17.f_6))
			return;
	
		if (BUILTIN::VMAG(uParam0->f_17) < 1f)
		{
			uParam0->f_17 = Global_1901671.f_51.f_1;
			uParam0->f_17.f_1 = Global_1901671.f_51.f_1;
			uParam0->f_17.f_2 = Global_1901671.f_51.f_1;
		}
	}

	if (_IS_NULL_VECTOR(uParam1->f_6))
		return;

	if (uParam0->f_16)
	{
		if (BUILTIN::VMAG(uParam0->f_6) < 1f)
			return;
	
		if (BUILTIN::VMAG(uParam0->f_17) < BUILTIN::VMAG(uParam0->f_6))
			uParam0->f_16 = 0;
	}

	func_288(0);
	func_288(3);
	Global_1102813.f_3909 = iParam2;
	Global_1102813.f_3910 = bParam3;
	Global_1102813.f_3911 = iParam4;
	func_487(&(Global_1102813.f_3839));
	Global_1102813.f_3839 = { *uParam0 };
	func_488(&(Global_1102813.f_3878));
	Global_1102813.f_3878 = { *uParam1 };
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_489(Global_1102813.f_3839, 36);
	func_490(Global_1102813.f_3878, 36);
	return;
}

void func_572(var uParam0, var uParam1, var uParam2, float fParam3, int iParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8) // Position - 0x108F8 Signature - 22 09 0F
{
	var entityCoords;
	float num;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	num = fParam3;

	if (!func_639(Global_1295666.f_12, &entityCoords, &num))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		num = fParam3;
	}

	func_483(uParam0, fParam3, entityCoords, num, iParam4, iParam5, bParam6, iParam7, iParam8, 1);
	return;
}

BOOL func_573(int iParam0) // Position - 0x10953 Signature - 22 01 04 00 00 2F 67 03 66 03 03
{
	int i;

	for (i = 0; i <= POSSE::POSSE_GET_POSSE_MEMBERSHIP_COUNT() - 1; i = i + 1)
	{
		if (Global_1203952.f_483[i /*63*/] == iParam0)
			return true;
	}

	return false;
}

void func_574(int iParam0) // Position - 0x10987 Signature - 22 01 03 00 00 66 00 09
{
	if (func_640(iParam0, true))
		func_641(iParam0);

	func_642(iParam0, 1);
	return;
}

int func_575(int iParam0, int iParam1) // Position - 0x109A6 Signature - 22 02 0A
{
	int posseMembershipCount;
	int i;
	Player playerFromGamerHandle;
	Any gangId;
	var gamerHandle2;

	if (Global_1203952.f_1 != 0)
		return 1;

	if (GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
		if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
			GANG::_NETWORK_LEAVE_GANG(true);
		else
			GANG::_NETWORK_LEAVE_GANG(false);

	func_643(iParam0);
	posseMembershipCount = POSSE::POSSE_GET_POSSE_MEMBERSHIP_COUNT();

	for (i = 0; i <= posseMembershipCount - 1; i = i + 1)
	{
		if (Global_1203952.f_483[i /*63*/] == iParam0)
		{
			Global_1203952.f_472 = i;
			break;
		}
	}

	Global_1203952.f_14 = { Global_1203952.f_483[Global_1203952.f_472 /*63*/].f_19 };
	Global_1203952.f_14.f_2 = iParam0;

	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Global_1203952.f_14)))
	{
		playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1203952.f_14));
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerFromGamerHandle))
		{
			gangId = GANG::NETWORK_GET_GANG_ID(playerFromGamerHandle);
			Global_1203952.f_14.f_4 = gangId;
		}
	}

	func_576(4);
	func_577(32);
	func_574(4);
	gamerHandle2 = { func_581() };

	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1203952.f_483[i /*63*/].f_19), &gamerHandle2) && iParam1 == 1)
		func_577(16);

	return 1;
}

void func_576(int iParam0) // Position - 0x10AB8 Signature - 22 01 03 00 00 66 00 5D F0
{
	Global_1203952.f_1 = iParam0;
	return;
}

void func_577(int iParam0) // Position - 0x10AC8 Signature - 22 01 03 00 00 5D F0 5E 12 80 03 66 00 39 90
{
	func_408(&(Global_1203952.f_3), iParam0);
	return;
}

int func_578(Hash hParam0) // Position - 0x10ADC Signature - 22 01 08
{
	Any any;

	any = Global_1072759.f_23824.f_383.f_4085;
	any.f_2 = 1593794963;
	any.f_3 = hParam0;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&any);
}

BOOL func_579(Hash hParam0, int iParam1, Vector3* pvParam2, float* pfParam3) // Position - 0x10B08 Signature - 22 04 0B
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

void func_580(BOOL bParam0, int iParam1) // Position - 0x10B6A Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 00
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

struct<2> func_581() // Position - 0x10B7B Signature - 22 00 04 00 00 4B 02 03
{
	var gamerHandle;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&gamerHandle);
	return gamerHandle;
}

void func_582(BOOL bParam0, BOOL bParam1) // Position - 0x10B8D Signature - 22 02 0F 00 00 03
{
	var unk;

	if (NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		if (Global_1203952.f_472 != -1)
		{
			unk.f_4 = 11;
			unk.f_7 = Global_1203952.f_483[Global_1203952.f_472 /*63*/];
			unk.f_5 = Global_1295666.f_10;
			unk.f_9 = bParam0;
			unk.f_10 = bParam1;
			func_644(&unk);
			func_574(5);
		}
	}
	else if (Global_1203952.f_472 != -1)
	{
		func_645(Global_1203952.f_483[Global_1203952.f_472 /*63*/], bParam0, bParam1);
	}

	return;
}

void func_583() // Position - 0x10C08 Signature - 22 00 06 00 00 6D
{
	var unk;
	int num;

	unk = { func_646(255) };

	if (unk.f_2 != 0)
	{
		num = func_647(PLAYER::PLAYER_ID());
	
		if (num != -1 && Global_1141332[num /*27*/].f_9 == PLAYER::PLAYER_ID() && func_648(&unk))
		{
			func_649(unk.f_1, joaat("NET_CAMP_SIZE_SMALLEST"), 0, 0);
			return;
		}
	}

	return;
}

void func_584(Hash hParam0) // Position - 0x10C65 Signature - 22 01 04 00 00 66 00 6D 5F
{
	int feedMessage;

	feedMessage = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(95));

	if (func_650(feedMessage))
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(feedMessage, true);

	return;
}

void func_585(int iParam0, var uParam1, var uParam2) // Position - 0x10C8E Signature - 22 03 05 00 00 5D F8 89 11 18
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

void func_586(Any* panParam0, var uParam1) // Position - 0x10CFC Signature - 22 02 04 00 00 4B 01
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 189;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 8, 3, &uParam1);
	return;
}

void func_587(var uParam0, int iParam1) // Position - 0x10D33 Signature - 22 02 04 00 00 03
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}

	func_526(uParam0, 1);
	func_527(uParam0, 2);
	uParam0->f_2 = 0;
	return;
}

char* func_588(Any anParam0, BOOL bParam1, int iParam2) // Position - 0x10D6F Signature - 22 03 06 00 00 66 00 03
{
	const char* str;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(anParam0))
		return "";

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(GANG::NETWORK_GET_GANG_LEADER(anParam0)))
		return "";

	if (bParam1)
	{
		if (iParam2 == 0)
		{
			return MISC::VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", func_266(PLAYER::GET_PLAYER_NAME(GANG::NETWORK_GET_GANG_LEADER(anParam0)), joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			str = MISC::VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", func_266(PLAYER::GET_PLAYER_NAME(GANG::NETWORK_GET_GANG_LEADER(anParam0)), joaat("COLOR_PURE_WHITE")));
			return func_411(str, iParam2);
		}
	}

	if (iParam2 == 0)
		return MISC::VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", PLAYER::GET_PLAYER_NAME(GANG::NETWORK_GET_GANG_LEADER(anParam0)));

	str = MISC::VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", PLAYER::GET_PLAYER_NAME(GANG::NETWORK_GET_GANG_LEADER(anParam0)));
	return func_411(str, iParam2);
}

const char* func_589(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x10E32 Signature - 22 08 0A 00 00 4B 00 4B 00 03 05 01 81 03 09 00 2D 50 08 01 22 01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

BOOL func_590(const char* sParam0) // Position - 0x10E46 Signature - 22 01 03 00 00 66 00 6F
{
	return NETWORK::_0xD4022C7286B0DFA2(sParam0, 100, 22);
}

BOOL func_591(Player plParam0, char* sParam1) // Position - 0x10E57 Signature - 22 02 06 00 00 66 00 03
{
	const char* playerName;
	int lengthOfLiteralString;

	playerName = PLAYER::GET_PLAYER_NAME(plParam0);
	lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(playerName);

	if (MISC::COMPARE_STRINGS(playerName, sParam1, false, lengthOfLiteralString) == 0)
		return true;

	return false;
}

char* func_592(Player plParam0) // Position - 0x10E83 Signature - 22 01 04 00 00 5D 67
{
	const char* str;

	if (Global_1901671.f_51.f_29)
		if (!unk_0xDBDF80673BBA3D65(1))
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1102813.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1102813.f_12)));

	if (plParam0 == 255)
		if (func_345(40, plParam0))
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1102813.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1102813.f_12)));
		else
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());

	if (plParam0 < 0 || plParam0 >= 32)
		return "";

	str = "";

	if (!Global_1295666.f_17[plParam0])
		return str;

	if (func_345(40, plParam0))
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1101558[plParam0 /*38*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1101558[plParam0 /*38*/].f_12)));

	return PLAYER::GET_PLAYER_NAME(Global_1295666.f_149[plParam0]);
}

struct<8> func_593(int iParam0) // Position - 0x10F56 Signature - 22 01 0B 00 00 66 00 2F
{
	var unk;

	if (iParam0 < 0 || iParam0 >= 100)
		return unk;

	return Global_1835011[iParam0 /*72*/].f_42;
}

struct<8> func_594(Player plParam0) // Position - 0x10F85 Signature - 22 01 03 00 00 66 00 6D FF 15 08 00 5D 32 C5 13 27 05 67 00 6D
{
	if (plParam0 == 255)
		plParam0 = Global_1295666.f_5;

	return Global_263042[plParam0 /*65*/].f_1.f_32;
}

BOOL func_595(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42) // Position - 0x10FAB Signature - 22 2B
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam0.f_41))
		return DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam0);

	return DATABINDING::_DATABINDING_READ_DATA_BOOL(hParam0.f_41);
}

int func_596() // Position - 0x10FD0 Signature - 22 00 08
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

	func_496(Global_1940252.f_245.f_14[num3 /*43*/]);
	return num3;
}

void func_597(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, BOOL bParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25) // Position - 0x1107B Signature - 22 1A 1C
{
	*hParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(hParam1, &uParam2);
	hParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(0), bParam10);
	hParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(1), bParam10.f_1);
	hParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(2), bParam10.f_2);
	hParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(57), bParam10.f_3);
	hParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(58), bParam10.f_4);
	hParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(60), bParam10.f_5);
	hParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(59), bParam10.f_6);

	if (bParam10.f_7 == 0)
		bParam10.f_7 = joaat("IB_SELECT");

	hParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(61), bParam10.f_7);
	hParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(62), "");
	hParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(63), bParam10.f_8);
	hParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(64), bParam10.f_9);
	hParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(65), bParam10.f_10);
	hParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(71), bParam10.f_11);
	hParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(66), bParam10.f_12);

	if (bParam10.f_13 == 0)
		bParam10.f_13 = joaat("IB_SELECT");

	hParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(68), bParam10.f_13);
	hParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(69), bParam10.f_14);
	hParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(70), bParam10.f_15);
	return;
}

int func_598(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, BOOL bParam13, BOOL bParam14, var uParam15, var uParam16) // Position - 0x1120E Signature - 22 11 29
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

int func_599(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19) // Position - 0x1129B Signature - 22 14
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

int func_600(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0x1133A Signature - 22 0E 26
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

int func_601(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16) // Position - 0x113B6 Signature - 22 11 2B
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

int func_602(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, BOOL bParam13, BOOL bParam14) // Position - 0x11444 Signature - 22 0F 27 00 00 4B 11 6A 25 FE FF 3D 41 41 66 08 67 11 66 09 4B 11 6C 01 66 0A 4B 11 6C 02 66 0C 4B 11 6C 03 66 05 4B 11 6C 04 66 07 4B 11 80 04 6C 01 66 06 4B 11 80 04 6C 02 4B 1E 6A 80 07 09 3D 41 41 66 0B 67 1E 66 00 4B 1E 6C 01 66 01 4B 1E 6C 02 2F
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

int func_603(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14) // Position - 0x114C6 Signature - 22 0F 27 00 00 4B 11 6A 25 FE FF 3D 41 41 66 08 67 11 66 09 4B 11 6C 01 66 0A 4B 11 6C 02 66 0C 4B 11 6C 03 66 05 4B 11 6C 04 66 07 4B 11 80 04 6C 01 66 06 4B 11 80 04 6C 02 4B 1E 6A 80 07 09 3D 41 41 66 0B 67 1E 66 00 4B 1E 6C 01 66 01 4B 1E 6C 02 66
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

int func_604() // Position - 0x11543 Signature - 22 00 02 00 00 5D 77 5E 10 80
{
	return Global_1072759.f_23.f_2;
}

int func_605() // Position - 0x11553 Signature - 22 00 02 00 00 5D DD D3 10 78 59
{
	return Global_1102813.f_3673;
}

Hash func_606(int iParam0) // Position - 0x11562 Signature - 22 01 04 00 00 66 00 6D 0A
{
	int i;

	if (iParam0 == 10)
		return 8;

	if (iParam0 == 11)
		return 4;

	if (iParam0 == 12)
		return 16;

	if (iParam0 == 13)
		return 32;

	for (i = 0; i < 64; i = i + 1)
	{
		if (Global_265213.f_107995.f_13510[i] == Global_265189.f_1[iParam0])
			return Global_265213.f_107995.f_1028[i /*194*/].f_193;
	}

	return -1;
}

BOOL func_607() // Position - 0x115DF Signature - 22 00 02 00 00 5D 17 00 18 80 48 27 28 09
{
	return Global_1572887.f_72.f_40 != 1;
}

BOOL func_608(Player plParam0) // Position - 0x115F1 Signature - 22 01 04 00 00 66 00 03 05 00 B3
{
	Any gangId;

	gangId = GANG::NETWORK_GET_GANG_ID(plParam0);

	if (GANG::NETWORK_IS_GANG_ACTIVE(gangId) && !GANG::NETWORK_IS_GANG_LEADER(plParam0))
		return false;

	return true;
}

void func_609(Any* panParam0) // Position - 0x1161B Signature - 22 01 03 00 00 5D 17 00 18 80 48 80 11
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1572887.f_72.f_17), panParam0, 22);
	return;
}

void func_610(int iParam0) // Position - 0x11633 Signature - 22 01 03 00 00 66 00 5D 17 00 18 80 48 6C 0F
{
	Global_1572887.f_72.f_15 = iParam0;
	return;
}

void func_611() // Position - 0x11645 Signature - 22 00 06 00 00 03 01 00
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

BOOL func_612() // Position - 0x11679 Signature - 22 00 02 00 00 39 C7
{
	if (func_618() != 0)
		return false;

	if (Global_1572887.f_72.f_9 >= 5 && Global_1572887.f_72.f_9 <= 8)
		return false;

	return true;
}

void func_613() // Position - 0x116AF Signature - 22 00 02 00 00 2F 03 01 01 6D 5D 2A
{
	Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_15.f_12 = 0;
	return;
}

void func_614(var uParam0, var uParam1) // Position - 0x116C7 Signature - 22 02 0F 00 00 5D
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
	num = func_651(uParam0);

	if (num == -1)
		return;

	num2 = func_652(num);

	if (num2 == -1)
		return;

	num3 = func_653(num);
	unk = { func_654(num2, num3) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_115, MISC::VAR_STRING(2, &unk));
	return;
}

int func_615(int iParam0, BOOL bParam1) // Position - 0x1176F Signature - 22 02 04 00 00 66 01 8B
{
	if (bParam1)
		func_655();

	if (!func_656(bParam1, bParam1, !bParam1))
		return 0;

	func_657(iParam0);
	Global_1896762.f_356 = 1;
	Global_1896762.f_357 = bParam1;
	return 1;
}

int func_616(var uParam0, Hash hParam1, int iParam2, int iParam3, int iParam4) // Position - 0x117AB Signature - 22 05 0C
{
	Hash hash;
	int num;
	int num2;

	if (hParam1 == 0)
		return 0;

	if (uParam0->f_11 == hParam1)
	{
		func_658(uParam0, 4194304);
		return 1;
	}

	hash = func_95(hParam1);

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
	func_659(&Global_265213.f_4[hash /*46*/]);

	if (iParam2 != -1)
	{
		if (uParam0->f_16.f_2 == -933924539 && func_660(iParam2) || uParam0->f_16.f_2 == 395262693 && func_661(iParam2))
		{
			uParam0->f_16.f_3 = iParam2;
			uParam0->f_21 = iParam2;
		}
	}

	if (iParam3 > 0)
		uParam0->f_25 = iParam3;

	num = func_662(Global_265213.f_57505[hash /*8*/]);
	num2 = { func_663(uParam0->f_12) };

	if (num != -1)
	{
		uParam0->f_48 = { func_664(num) };
	}
	else if (func_665(uParam0->f_12))
	{
		uParam0->f_48 = { func_667(func_666(uParam0->f_12)) };
	}
	else if (num2.f_1 != -1 && num2 != -1)
	{
		uParam0->f_48 = { func_668(&num2) };
	}
	else if (uParam0->f_16.f_3 == 31269700)
	{
		uParam0->f_48 = { func_669(640937726) };
	}
	else if (uParam0->f_16.f_3 == -698288936)
	{
		uParam0->f_48 = { func_669(1357993786) };
	}
	else
	{
		uParam0->f_48 = { func_670(uParam0->f_11) };
	
		if (!func_471(uParam0->f_48))
			uParam0->f_48 = { func_669(func_671(uParam0->f_16.f_2)) };
	}

	func_672(uParam0);
	func_658(uParam0, 4194304);
	return 1;
}

char* func_617(Hash hParam0) // Position - 0x11A71 Signature - 22 01 04 00 00 66 00 39 31
{
	Hash hash;

	hash = func_673(hParam0);

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

int func_618() // Position - 0x11BC7 Signature - 22 00 02 00 00 5D 17 00 18 27 48
{
	return Global_1572887.f_72;
}

char* func_619(int iParam0, Hash hParam1) // Position - 0x11BD5 Signature - 22 02 04 00 00 66 00 3C 01
{
	switch (iParam0)
	{
		case 0:
			switch (hParam1)
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

int func_620(char* sParam0) // Position - 0x11CB0 Signature - 22 01 05 00 00 11
{
	const char* str;
	int num;

	str = MISC::VAR_STRING(2, sParam0);
	num = func_674(str, -2, 0, 0, 0, true);
	return num;
}

BOOL func_621(int iParam0, var uParam1, Any* panParam2) // Position - 0x11CD2 Signature - 22 03 05 00 00 11 4B 00 2D 39
{
	if (!func_471(iParam0))
		return false;

	func_675(panParam2);

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

struct<2> func_622(int iParam0) // Position - 0x11DDD Signature - 22 01 03 00 00 11 66 00 5D AC
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_623(int iParam0) // Position - 0x11DF1 Signature - 22 01 03 00 00 66 00 5D F4 88 11 80 01 63 1B 27 01
{
	return Global_1149172.f_1[iParam0 /*27*/].f_1 == 2;
}

BOOL func_624(int iParam0, int iParam1, Any anParam2) // Position - 0x11E07 Signature - 22 03 07 00 00 03
{
	int i;
	int num;

	num = MINIGAME::_0x15E90B6A993017AA();

	if (!func_623(iParam0))
		return 0;

	if (num == 0)
		return 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (MINIGAME::_0x10342CC82E8356E9(i, anParam2))
		{
			if (anParam2->f_2 == iParam1)
			{
				func_676(anParam2->f_1, iParam0);
			
				if (*anParam2 == 1)
					if (anParam2->f_3 > Global_1149318.f_7)
						return 1;
				else
					return 1;
			}
		}
	}

	return 0;
}

BOOL func_625(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x11E7F Signature - 22 03 05 00 00 5D E7
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

int* func_626(int iParam0, int iParam1) // Position - 0x11F1D Signature - 22 02 04 00 00 66 01 66 00 5D
{
	return Global_1149172.f_1[iParam0 /*27*/].f_15[iParam1 /*3*/].f_1;
}

BOOL func_627(int iParam0) // Position - 0x11F37 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_628() // Position - 0x11F5A Signature - 22 00 02 00 00 39 9D
{
	if (func_11() == 0)
		return MONEY::_NETWORK_GET_CASH_BALANCE();

	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_629(int iParam0) // Position - 0x11F75 Signature - 22 01 03 00 00 66 00 3C 05 00 00 00 00 00 1B 00 01 00 00 00 1A
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

int func_630(int iParam0, var uParam1) // Position - 0x11FBD Signature - 22 02 04 00 00 66 00 66 01 32
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

Vector3 func_631(int iParam0) // Position - 0x123C5 Signature - 22 01 03 00 00 1D
{
	return Global_1149172.f_1[iParam0 /*27*/].f_7;
}

BOOL func_632(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x123DB Signature - 22 04 06 00 00 1D
{
	if (_IS_NULL_VECTOR(uParam0))
		return false;

	if (func_346(255) == 4)
		return false;

	func_345(4, 255);
	func_288(4);
	func_677(&(Global_1102813.f_3869));
	Global_1102813.f_3869.f_6 = { uParam0 };
	Global_1102813.f_3869 = uParam3;
	Global_1102813.f_3869.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_678(Global_1102813.f_3869, 36);
	return true;
}

void func_633() // Position - 0x12462 Signature - 22 00 03 00 00 5D 32 C5 13 27 05 03 05 00 0A 05 8B 03 00 50 00 00 39 54
{
	int num;

	if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_5))
		return;

	num = func_679();

	if (num > 0)
		func_680(-1228177771, num, 0);

	return;
}

BOOL func_634() // Position - 0x12497 Signature - 22 00 02 00 00 5D 32
{
	return func_540(Global_1295666.f_5, true, false, true) && func_681() > 0;
}

void func_635() // Position - 0x124B7 Signature - 22 00 03 00 00 5D 32 C5 13 27 05 03 05 00 0A 05 8B 03 00 50 00 00 39 8A
{
	int num;

	if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_5))
		return;

	num = func_681();

	if (num > 0)
		func_682(num, 0, -142743235, false);

	return;
}

void func_636() // Position - 0x124ED Signature - 22 00 03 00 00 03 01 01 23 67
{
	Player player;

	player = PLAYER::PLAYER_ID();
	LAW::CLEAR_WANTED_SCORE(player);
	func_683();
	return;
}

void func_637(Hash hParam0) // Position - 0x12505 Signature - 22 01 03 00 00 66 00 5D 1C 9B 1D 8C
{
	Global_1940252.f_11605 = hParam0;
	return;
}

BOOL func_638() // Position - 0x12516 Signature - 22 00 02 00 00 11 5D
{
	return func_471(Global_1051268);
}

BOOL func_639(var uParam0, var uParam1, var uParam2, Vector3* pvParam3, float* pfParam4) // Position - 0x12528 Signature - 22 05 0A 00 00 1D
{
	Hash hash;
	int endRange;
	int randomIntInRange;

	hash = Global_1072759.f_23824.f_383[func_684(uParam0) /*272*/];
	endRange = func_578(hash);

	if (endRange <= 0)
	{
		return false;
	}
	else
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
	
		if (func_579(hash, randomIntInRange, pvParam3, pfParam4))
			return true;
	}

	return false;
}

BOOL func_640(int iParam0, BOOL bParam1) // Position - 0x12579 Signature - 22 02 04 00 00 66 00 5D F0 5E 12 80 05 17
{
	return func_254(Global_1203952.f_5[iParam0], bParam1);
}

void func_641(int iParam0) // Position - 0x12591 Signature - 22 01 03 00 00 2F 66 00 5D
{
	Global_1203952.f_5[iParam0] = false;
	return;
}

void func_642(int iParam0, int iParam1) // Position - 0x125A4 Signature - 22 02 04 00 00 66 00 5D F0 5E 12 80 05 63
{
	func_408(&Global_1203952.f_5[iParam0], iParam1);
	return;
}

void func_643(int iParam0) // Position - 0x125BC Signature - 22 01 03 00 00 66 00 87
{
	Global_17418.f_55.f_14.f_4 = iParam0;
	return;
}

void func_644(Any* panParam0) // Position - 0x125CF Signature - 22 01 04 00 00 6D 17
{
	var playerBits;

	*panParam0 = 23;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	playerBits = func_685(0, 8);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 11, 40, &playerBits);
	return;
}

void func_645(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x12602 Signature - 22 03 05 00 00 09
{
	if (func_686(true))
		return;

	Global_1203952.f_478 = iParam0;
	func_687(1);

	if (bParam2)
		func_687(4);

	if (bParam1)
		func_687(2);

	return;
}

Vector3 func_646(int iParam0) // Position - 0x12637 Signature - 22 01 03 00 00 66 00 6D FF 15 11
{
	if (iParam0 == 255)
		return Global_1144526[func_491() /*83*/].f_38;

	return Global_1144526[iParam0 /*83*/].f_38;
}

int func_647(Player plParam0) // Position - 0x12663 Signature - 22 01 04 00 00 66 00 67
{
	Player player;

	player = plParam0;

	if (player >= 0 && player < 32)
		return Global_1144526[player /*83*/].f_38.f_3;

	return -1;
}

BOOL func_648(var uParam0) // Position - 0x12693 Signature - 22 01 03 00 00 6D 20
{
	if (func_688(32) && func_689(uParam0->f_2))
		return false;

	if (*uParam0 > 4)
		return true;

	return false;
}

int func_649(var uParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x126C1 Signature - 22 04 09
{
	int num;

	num.f_2 = -2;
	num.f_1 = uParam0;
	num = func_690(iParam1);
	Global_1142424.f_2036.f_3 = bParam2;

	if (bParam2)
	{
		if (!func_691(num, 1))
			return 0;
	
		func_692(1);
	}

	if (func_693(num, 0))
	{
		if (iParam3 == 0)
			func_694(num.f_1);
	
		return 1;
	}

	return 0;
}

BOOL func_650(int iParam0) // Position - 0x12726 Signature - 22 01 03 00 00 66 00 2F 1C 50
{
	return iParam0 != 0;
}

int func_651(var uParam0, var uParam1) // Position - 0x12732 Signature - 22 02 05 00 00 2F 67 04 66 04
{
	int i;

	for (i = 0; i <= 7; i = i + 1)
	{
		if (func_695(Global_1206497.f_78[i /*20*/].f_7, uParam0))
			return i;
	}

	return -1;
}

int func_652(int iParam0) // Position - 0x1276B Signature - 22 01 03 00 00 66 00 5D E1
{
	return Global_1206497.f_78[iParam0 /*20*/].f_3;
}

int func_653(int iParam0) // Position - 0x1277F Signature - 22 01 03 00 00 66 00 5D B2
{
	return Global_1205938.f_1[iParam0 /*26*/].f_3;
}

struct<8> func_654(int iParam0, int iParam1) // Position - 0x12793 Signature - 22 02 11
{
	var unk;
	var unk9;

	if (func_696(&unk9, iParam0) && func_697(&unk9) && func_698(&unk9, iParam1) && func_699(&unk9))
		func_700(unk9, 37194763, &unk, true);

	return unk;
}

void func_655() // Position - 0x127DF Signature - 22 00 02 00 00 03 01 01 69
{
	if (!UIAPPS::IS_ANY_UIAPP_RUNNING())
		return;

	UIAPPS::_CLOSE_ALL_UIAPPS();
	return;
}

BOOL func_656(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x127F6 Signature - 22 03 06 00 00 66 02 39
{
	BOOL flag;

	flag = func_702(bParam2, func_701(), true, false, true, true, true, bParam0, bParam1);

	if (!flag)
		return false;

	return true;
}

void func_657(int iParam0) // Position - 0x1281E Signature - 22 01 03 00 00 66 00 5D 3A
{
	Global_1896762.f_365 = iParam0;
	return;
}

void func_658(var uParam0, int iParam1) // Position - 0x1282F Signature - 22 02 04 00 00 66 00 27 0F
{
	uParam0->f_15 = uParam0->f_15 || iParam1;
	return;
}

void func_659(char* sParam0) // Position - 0x12842 Signature - 22 01 03 00 00 66 00 5D 17 00 18 80 48 80
{
	TEXT_LABEL_ASSIGN_STRING(&(Global_1572887.f_72.f_60.f_6), sParam0, 32);
	return;
}

BOOL func_660(int iParam0) // Position - 0x12858 Signature - 22 01 03 00 00 66 00 2F 39 C4
{
	if (func_703(iParam0, 0) == -1)
		return false;

	return true;
}

BOOL func_661(int iParam0) // Position - 0x12870 Signature - 22 01 03 00 00 66 00 2F 39 56
{
	if (func_704(iParam0, 0) == -1)
		return false;

	return true;
}

int func_662(Hash hParam0) // Position - 0x12888 Signature - 22 01 04 00 00 39 9D 03 00 08
{
	int i;

	if (func_11() == -1)
		return -1;

	for (i = 9; i <= 25; i = i + 1)
	{
		if (func_705(i) == hParam0)
			return i;
	}

	return -1;
}

Vector3 func_663(int iParam0) // Position - 0x128C1 Signature - 22 01 10
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

	if (!func_706(&num))
		return num2;

	if (!func_707(&num, 13, 0, 0, 1))
		return num2;

	if (!func_707(&num, 17, 0, 0, 1))
		return num2;

	unk7 = num.f_1;
	num3 = func_708(&num, 0);

	for (i = 0; i <= num3 - 1; i = i + 1)
	{
		num.f_1 = unk7;
	
		if (!func_707(&num, 19, i, 0, 1))
		{
		}
		else if (!func_707(&num, 20, 0, 0, 1))
		{
		}
		else
		{
			num4 = func_708(&num, 1);
		
			if (!func_707(&num, 22, iParam0, 0, 0))
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

struct<2> func_664(int iParam0) // Position - 0x129A6 Signature - 22 01 03 00 00 66 00 2F 35 6A 05 8B 06 00 66 00 6D 64
{
	if (iParam0 < 0 || iParam0 >= 100)
		return func_523();

	return Global_1835011[iParam0 /*72*/].f_1;
}

BOOL func_665(int iParam0) // Position - 0x129D3 Signature - 22 01 03 00 00 66 00 2F 15 04 00 2F 50 01 01 66 00 39
{
	if (iParam0 == 0)
		return false;

	return func_666(iParam0) != -1;
}

int func_666(int iParam0) // Position - 0x129ED Signature - 22 01 05 00 00 2F 67 03 66
{
	int i;
	int num;

	for (i = 0; i <= 13 - 1; i = i + 1)
	{
		num = i;
	
		if (iParam0 == func_709(num))
			return num;
	}

	return -1;
}

struct<2> func_667(int iParam0) // Position - 0x12A1F Signature - 22 01 03 00 00 66 00 39 0D
{
	return func_710(iParam0);
}

struct<2> func_668(var uParam0) // Position - 0x12A2D Signature - 22 01 09 00 00 4B
{
	var unk;
	var unk6;

	if (!func_706(&unk))
		return func_523();

	if (!func_707(&unk, 13, 0, 0, 1))
		return func_523();

	if (!func_707(&unk, 17, 0, 0, 1))
		return func_523();

	if (!func_707(&unk, 19, *uParam0, 0, 1))
		return func_523();

	if (!func_707(&unk, 20, 0, 0, 1))
		return func_523();

	if (!func_707(&unk, 23, uParam0->f_1, 0, 1))
		return func_523();

	unk6 = func_711(&unk);
	return func_669(unk6);
}

struct<2> func_669(int iParam0) // Position - 0x12AC7 Signature - 22 01 05 00 00 4B 03 6A 08 3D 41 6A 80 01 08 3D 41 41 66
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk = { func_712(iParam0, 2) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_712(iParam0, 7) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_712(iParam0, 5) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_712(iParam0, 6) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_712(iParam0, 8) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_712(iParam0, 3) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_712(iParam0, 4) };

	if (unk.f_1 >= 0)
		return unk;

	return func_523();
}

struct<2> func_670(int iParam0) // Position - 0x12B97 Signature - 22 01 29
{
	var unk;
	var unk6;

	if (iParam0 == 0)
		return func_523();

	if (!func_713(&unk, 7, iParam0, 76966722))
		return func_523();

	func_714(7, &unk, &unk6);

	if (unk6.f_4 != 7)
		return func_523();

	return func_712(unk6.f_3, unk6.f_4);
}

int func_671(int iParam0) // Position - 0x12BE9 Signature - 22 01 03 00 00 66 00 3C 03
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

void func_672(var uParam0) // Position - 0x12C24 Signature - 22 01 03 00 00 2F 66 00 6C 0F
{
	uParam0->f_15 = 0;
	return;
}

Hash func_673(Hash hParam0) // Position - 0x12C31 Signature - 22 01 04 00 00 2F 67 03 66 03 6D
{
	int i;

	for (i = 0; i < 64; i = i + 1)
	{
		if (Global_265213.f_107995.f_13575[i] == hParam0)
			return Global_265213.f_107995.f_13510[i];
	}

	return 0;
}

int func_674(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x12C75 Signature - 22 06 1A
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

void func_675(Any* panParam0) // Position - 0x12CB0 Signature - 22 01 03 00 00 2F 66 00 32 08
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

BOOL func_676(int iParam0, int iParam1) // Position - 0x12CC6 Signature - 22 02 04 00 00 66 01 3C
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

void func_677(var uParam0) // Position - 0x12D15 Signature - 22 01 0C 00 00 6D 09 4B 03 2D 6D 09 66 00 06 50 01 00 22 0A
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_678(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0x12D27 Signature - 22 0A 0C 00 00 4B 00 27 05 3C 03 00 01 00 00 00 0F 00 02 00 00 00 0C 00 03 00 00 00 09 00 68 09 00 68 06 00 68 03 00 68 00 00 50 0A 00 22 00 03
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

int func_679() // Position - 0x12D54 Signature - 22 00 03 00 00 5D 2A
{
	int cashBalance;

	cashBalance = Global_1295658.f_2.f_4;

	if (!func_542(cashBalance))
		cashBalance = MONEY::_NETWORK_GET_CASH_BALANCE();

	return cashBalance;
}

int func_680(int iParam0, int iParam1, int iParam2) // Position - 0x12D78 Signature - 22 03 05 00 00 66 00 66 01 66 02 39
{
	return func_715(iParam0, iParam1, iParam2);
}

int func_681() // Position - 0x12D8A Signature - 22 00 03 00 00 37
{
	int cashBalance;

	cashBalance = func_716(120839576, 59806960, true, false, true, 0);

	if (!func_542(cashBalance))
		cashBalance = MONEY::_NETWORK_GET_CASH_BALANCE();

	return cashBalance;
}

int func_682(int iParam0, char* sParam1, int iParam2, BOOL bParam3) // Position - 0x12DB8 Signature - 22 04 2E
{
	int num;
	var unk;
	var unk6;
	var unk23;

	num = -1;
	unk = { func_717(joaat("currency_cash"), true, 0) };
	unk6 = { func_718(joaat("currency_cash"), unk, unk.f_4, iParam0, true) };
	unk6.f_12 = iParam2;
	num = func_719(joaat("use"), &unk6, bParam3);

	if (num == -1)
	{
	}
	else
	{
		unk23.f_7 = -142743235;
		unk23.f_16 = -1;
		TEXT_LABEL_ASSIGN_STRING(&(unk23.f_12), sParam1, 32);
		func_720(num, unk23);
	}

	return num;
}

void func_683() // Position - 0x12E31 Signature - 22 00 03 00 00 2F 03 04 00
{
	int i;

	VOLUME::_0x748C5F51A18CB8F0(false);

	for (i = 0; i < 6; i = i + 1)
	{
		if (func_721(i))
			func_722(i);
	}

	VOLUME::_0x748C5F51A18CB8F0(true);
	return;
}

int func_684(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x12E64 Signature - 22 03 09 00 00 2F
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

var func_685(int iParam0, int iParam1) // Position - 0x12EC1 Signature - 22 02 04 00 00 73
{
	return func_723(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

BOOL func_686(BOOL bParam0) // Position - 0x12EDF Signature - 22 01 03 00 00 5D F0 5E 12 27 04
{
	return func_254(Global_1203952.f_4, bParam0);
}

void func_687(int iParam0) // Position - 0x12EF3 Signature - 22 01 03 00 00 5D F0 5E 12 80 04
{
	func_408(&(Global_1203952.f_4), iParam0);
	return;
}

BOOL func_688(BOOL bParam0) // Position - 0x12F07 Signature - 22 01 03 00 00 03 01 01 6D 5D CE 76 11 63 53 27
{
	return func_484(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, bParam0);
}

BOOL func_689(int iParam0) // Position - 0x12F21 Signature - 22 01 04 00 00 2F 67 03 66 03 62
{
	int i;

	for (i = 0; i <= 5; i = i + 1)
	{
		if (Global_1142424.f_2020[i] == iParam0)
			return 1;
	}

	return 0;
}

int func_690(int iParam0) // Position - 0x12F50 Signature - 22 01 03 00 00 66 00 3C 02 00 2D
{
	switch (iParam0)
	{
		case joaat("NET_CAMP_SIZE_SMALLEST"):
			return 4;
	
		case joaat("NET_CAMP_SIZE_LARGEST"):
			return 7;
	
		default:
		
	}

	return -1;
}

BOOL func_691(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x12F75 Signature - 22 04 06 00 00 39
{
	if (func_724())
		return false;

	if (func_725(uParam0.f_1, uParam0))
		return false;

	if (!func_726(iParam3, 1))
		return false;

	if (func_727())
		return false;

	if (func_688(64))
		if (!func_729(func_728(uParam0), 1, 59806960))
			return false;

	return true;
}

void func_692(int iParam0) // Position - 0x12FD5 Signature - 22 01 03 00 00 66 00 5D 98 6E 11 18
{
	Global_1142424.f_2027.f_5 = iParam0;
	return;
}

BOOL func_693(int iParam0, var uParam1, var uParam2, int iParam3) // Position - 0x12FE8 Signature - 22 04 06 00 00 66 00 42
{
	if (iParam0 < 4)
		iParam0 = 4;

	if (!func_726(0, 1))
		return false;

	Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33 = { iParam0 };
	Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	func_730();

	if (iParam3 == 1)
	{
		func_731(2);
	}
	else
	{
		Global_1147183.f_330.f_6 = 1;
		func_732(2);
	}

	if (!func_733(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		func_732(8);
		func_734();
	}

	if (!func_735(4) && func_735(8) || func_735(16))
		func_731(4);
	else
		func_732(4);

	if (func_484(Global_1147183.f_8, true))
		func_731(true);
	else
		func_732(1);

	func_736(6);
	return true;
}

void func_694(int iParam0) // Position - 0x130B5 Signature - 22 01 04 00 00 6D 40
{
	int num;

	if (!func_688(64))
		return;

	switch (iParam0)
	{
		case joaat("hennigans_stead_camp"):
			num = joaat("hennigans_stead");
			break;
	
		case joaat("rio_bravo_camp"):
			num = joaat("rio_bravo");
			break;
	
		case joaat("roanoke_ridge_camp"):
			num = joaat("roanoake_ridge");
			break;
	
		case joaat("great_plains_camp"):
			num = joaat("great_plains");
			break;
	
		case joaat("cumberland_forest_camp"):
			num = joaat("cumberland_forest");
			break;
	
		case joaat("tall_trees_camp"):
			num = joaat("tall_trees");
			break;
	
		case joaat("cholla_springs_camp"):
			num = joaat("cholla_springs");
			break;
	
		case joaat("grizzlies_camp"):
			num = joaat("grizzlies");
			break;
	
		case joaat("gaptooth_ridge_camp"):
			num = joaat("gaptooth_ridge");
			break;
	
		case joaat("bayou_nawas_camp"):
			num = joaat("bayou_nwa");
			break;
	
		case joaat("scarlett_meadows_camp"):
			num = joaat("scarlett_meadows");
			break;
	
		case joaat("heartland_camp"):
			num = joaat("heartlands");
			break;
	
		case joaat("big_valley_camp"):
			num = joaat("big_valley");
			break;
	
		default:
			return;
	}

	func_738(func_737(joaat("placed_camp"), num), 1);
	return;
}

BOOL func_695(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x131B5 Signature - 22 04 06 00 00 66 00 66
{
	return uParam0 == uParam2 && uParam0.f_1 == uParam2.f_1;
}

BOOL func_696(Any* panParam0, int iParam1) // Position - 0x131D0 Signature - 22 02 04 00 00 5D E1
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1206497.f_455))
		return false;

	*panParam0 = Global_1206497.f_455;
	panParam0->f_2 = -1093317127;
	panParam0->f_3 = func_739(iParam1);
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_697(Any* panParam0) // Position - 0x13212 Signature - 22 01 03 00 00 37 3A
{
	panParam0->f_2 = -310067910;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_698(Any* panParam0, int iParam1) // Position - 0x1322D Signature - 22 02 04 00 00 37
{
	panParam0->f_2 = -1739269194;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_699(Any* panParam0) // Position - 0x1324E Signature - 22 01 03 00 00 37 20
{
	panParam0->f_2 = 1701407264;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_700(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, char* sParam6, BOOL bParam7) // Position - 0x13269 Signature - 22 08 0A 00 00 66
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam6, &uParam0))
		return 1;
	else
		bParam7;

	return 0;
}

BOOL func_701() // Position - 0x1328F Signature - 22 00 02 00 00 5D 08 3B 1D 78 A3
{
	return Global_1915656.f_20643;
}

BOOL func_702(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x1329E Signature - 22 09 10 00 00 66 07
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

	if (func_740())
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

int func_703(int iParam0, int iParam1) // Position - 0x134C4 Signature - 22 02 04 00 00 66 00 3C 0B
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

int func_704(int iParam0, int iParam1) // Position - 0x13556 Signature - 22 02 04 00 00 66 00 3C 13
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

Hash func_705(int iParam0) // Position - 0x13640 Signature - 22 01 03 00 00 66 00 39 4E
{
	if (!func_741(iParam0))
		return 0;

	if (func_11() == -1)
		return 0;

	return Global_1835011[iParam0 /*72*/].f_51;
}

BOOL func_706(Any* panParam0) // Position - 0x1366C Signature - 22 01 09 00 00 6D
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

BOOL func_707(Any* panParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x136AE Signature - 22 05 08
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

int func_708(Any anParam0, int iParam1) // Position - 0x136E7 Signature - 22 02 04 00 00 66 01 66 00 6C 02
{
	anParam0->f_2 = iParam1;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(anParam0);
}

int func_709(int iParam0) // Position - 0x136FB Signature - 22 01 03 00 00 66 00 5D E9
{
	return Global_1295849[iParam0 /*37*/].f_9;
}

struct<2> func_710(int iParam0) // Position - 0x1370D Signature - 22 01 05 00 00 4B 03 6A 08 3D 41 6A 80 01 08 3D 41 41 4B
{
	var dst;

	dst = -1;
	dst.f_1 = -1;
	MISC::COPY_SCRIPT_STRUCT(&dst, &(Global_1295849[iParam0 /*37*/].f_6), 2);
	return dst;
}

var func_711(Any* panParam0) // Position - 0x13737 Signature - 22 01 03 00 00 66 00 6D 43
{
	return func_742(panParam0, 67, 1);
}

struct<2> func_712(var uParam0, int iParam1) // Position - 0x13748 Signature - 22 02 06 00 00 4B
{
	int num;

	num = -1;
	num.f_1 = -1;
	num = iParam1;

	switch (iParam1)
	{
		case 2:
			num.f_1 = func_743(uParam0, &(Global_1072759.f_573), func_556(iParam1));
			break;
	
		case 3:
			num.f_1 = func_743(uParam0, &(Global_1072759.f_573.f_602), func_556(iParam1));
			break;
	
		case 4:
			num.f_1 = func_743(uParam0, &(Global_1072759.f_573.f_2104), func_556(iParam1));
			break;
	
		case 5:
			num.f_1 = func_743(uParam0, &(Global_1072759.f_573.f_12606), func_556(iParam1));
			break;
	
		case 6:
			num.f_1 = func_743(uParam0, &(Global_1072759.f_573.f_12908), func_556(iParam1));
			break;
	
		case 7:
			num.f_1 = func_743(uParam0, &(Global_1072759.f_573.f_15910), func_556(iParam1));
			break;
	
		case 8:
			num.f_1 = func_743(uParam0, &(Global_1072759.f_573.f_16512), func_556(iParam1));
			break;
	}

	if (num.f_1 < 0)
		return func_523();

	return num;
}

BOOL func_713(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1386E Signature - 22 04 06 00 00 5D
{
	*panParam0 = Global_1149432.f_7;
	panParam0->f_2 = iParam3;
	panParam0->f_3 = func_744(iParam1);
	panParam0->f_4 = iParam2;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

void func_714(int iParam0, Any* panParam1, var uParam2) // Position - 0x1389F Signature - 22 03 06 00 00 66 00 66
{
	int num;

	*uParam2 = iParam0;
	panParam1->f_2 = -611386243;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), panParam1);
	uParam2->f_3 = func_745(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_746(num);
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
			uParam2->f_5 = func_747(num);
	}
	else if (*uParam2 == 6)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_748(num);
	
		panParam1->f_2 = 162343104;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), panParam1);
	}
	else if (*uParam2 == 7)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_749(num);
	}
	else
	{
		panParam1->f_2 = 1636457257;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), panParam1);
	}

	panParam1->f_2 = 2012757065;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_7 = func_750(num);
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

int func_715(int iParam0, int iParam1, int iParam2) // Position - 0x13AFA Signature - 22 03 08 00 00 5D
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

// Unhandled jump detected. Output should be considered invalid
int func_716(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x13BD2 Signature - 22 06 29
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (bParam4 && hParam1 == -915411861 && func_751(hParam0, 59806960))
		hParam1 = 59806960;

	if (func_752(hParam0) || func_753(hParam0, 1077060302))
		return func_755(func_754(hParam0, false), hParam1, bParam3, true);

	if (!func_756(hParam0, hParam1, &unk, &num, bParam2, bParam3))
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

struct<5> func_717(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x13CC2 Signature - 22 03 2F
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_757(bParam1) };
	unk.f_4 = 1084182731;
	num = func_758(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_766(hParam0, -1823706425))
			{
				unk = { func_759(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_766(hParam0, -1483207246))
			{
				unk = { func_759(joaat("WARDROBE"), unk, 1034665895, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_759(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1311702610))
			{
				unk.f_4 = -1311702610;
			}
			else if (func_766(hParam0, -1653629781))
			{
				unk = { func_759(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -1591664384;
			unk = { func_764(bParam1) };
		
			switch (func_765(hParam0))
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
			unk = { func_759(joaat("WARDROBE"), unk, 1034665895, bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_760(bParam1) };
		
			if (iParam2 && func_761(hParam0, true))
			{
				unk6.f_9 = -1591664384;
			
				if (!func_762(hParam0, &unk, 1728382685, false, false))
					unk.f_4 = 1728382685;
				else if (!func_762(hParam0, &unk, -649335959, false, false))
					unk.f_4 = -649335959;
				else if (func_763(hParam0, &unk6, 1728382685))
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
			
				if (!func_767(unk, &unk28, bParam1, false, -1))
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
			else if (func_766(hParam0, -1653629781))
			{
				unk = { func_759(1384535894, unk, 1784584921, bParam1) };
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

struct<17> func_718(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, int iParam6, BOOL bParam7) // Position - 0x14037 Signature - 22 08 1B
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = -1591664384;
	unk.f_4 = { uParam1 };
	unk = { func_759(hParam0, unk.f_4, hParam5, true) };
	unk.f_8 = hParam0;
	unk.f_9 = iParam6;
	unk.f_11 = hParam5;

	if (bParam7)
	{
		unk.f_15 = func_768(hParam0, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_1() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

int func_719(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x140B1 Signature - 22 03 06 00 00 66 00 2F
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_769(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_771(func_770(num, hParam0, panParam1), num, panParam1);
	else
		return func_772(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

void func_720(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x1411B Signature - 22 12 15 00 00 66
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

BOOL func_721(int iParam0) // Position - 0x14199 Signature - 22 01 03 00 00 66 00 08 20 6A 8B 05
{
	return iParam0 > -1 && iParam0 < 6;
}

void func_722(int iParam0) // Position - 0x141AE Signature - 22 01 05 00 00 2F 03
{
	int i;
	int j;

	VOLUME::_0x748C5F51A18CB8F0(false);

	if (!func_721(iParam0))
		return;

	func_773(iParam0, false);

	for (i = 0; i < 150; i = i + 1)
	{
		if (func_449(i))
		{
			if (func_775(func_774(i, true, true)) == iParam0)
			{
				func_776(i, false);
				func_777(i, false, 350);
			}
		}
	}

	for (j = 0; j < 17; j = j + 1)
	{
		if (func_778(j))
			if (func_779(j) == iParam0)
				func_780(j, false);
	}

	VOLUME::_0x748C5F51A18CB8F0(true);
	return;
}

var func_723(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x14240 Signature - 22 0C 1A
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

	if (func_263() != 0)
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_781());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_781());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_781());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_782(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_390(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_346(i) != 1)
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
					if (!func_783(player2))
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

BOOL func_724() // Position - 0x145D3 Signature - 22 00 03 00 00 5D 98
{
	BOOL flag;

	flag = Global_1142424.f_2019 == 2 || Global_1142424.f_2019 >= 6 && Global_1142424.f_2019 <= 11 || Global_1142424.f_2019 == 12 || Global_1142424.f_2019 >= 13 && Global_1142424.f_2019 <= 19;
	return flag;
}

BOOL func_725(var uParam0, var uParam1) // Position - 0x14635 Signature - 22 02 08 00 00 03 01 01 23 03 05 00 B3
{
	Any gangId;
	var unk;

	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	unk = { func_785(func_784(gangId)) };
	return unk.f_1 == uParam0 && uParam1 == unk;
}

BOOL func_726(int iParam0, int iParam1) // Position - 0x14666 Signature - 22 02 05 00 00 39
{
	Any gangId;

	if (!func_324() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
		return false;

	if (!func_688(16))
		return false;

	if (func_12())
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
			return false;

	if (!func_786())
		return false;

	if (func_787(16))
		return false;

	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (iParam1 == 1 && !GANG::NETWORK_IS_GANG_ID_VALID(gangId) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		return false;

	if (iParam0 == 1 && func_484(Global_1147183.f_8, true))
		return false;

	if (func_788())
		return false;

	return true;
}

BOOL func_727() // Position - 0x14726 Signature - 22 00 02 00 00 5D 98
{
	return Global_1142424.f_2027.f_7 == 3;
}

Hash func_728(int iParam0) // Position - 0x14739 Signature - 22 01 03 00 00 66 00 3C 02 00 04
{
	switch (iParam0)
	{
		case 4:
			return joaat("FEE_CAMP_PLACEMENT_SMALL");
	
		case 7:
			return joaat("FEE_CAMP_PLACEMENT_LARGE");
	
		default:
		
	}

	return 0;
}

BOOL func_729(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x14766 Signature - 22 03 07 00 00 66 00
{
	int num;
	BOOL flag;

	num = func_789(hParam0, false, hParam2) * iParam1;
	flag = false;
	num == 0;

	if (num >= 0)
		flag = func_542(num);

	return flag;
}

void func_730() // Position - 0x14795 Signature - 22 00 02 00 00 2F 03 01 01 6D 5D CE
{
	Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4 = 0;
	return;
}

void func_731(BOOL bParam0) // Position - 0x147AC Signature - 22 01 03 00 00 03 01 01 6D 5D CE 76 11 63 53 80 21 80 04 66 00 39 49
{
	func_485(&(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4), bParam0);
	return;
}

void func_732(int iParam0) // Position - 0x147C8 Signature - 22 01 03 00 00 03 01 01 6D 5D CE 76 11 63 53 80 21 80 04 66 00 39 DC
{
	func_440(&(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4), iParam0);
	return;
}

BOOL func_733(int iParam0) // Position - 0x147E4 Signature - 22 01 05 00 00 66 00 2F
{
	Player player;
	int i;

	if (iParam0 < 0 || iParam0 >= 32)
		return false;

	player = PLAYER::INT_TO_PLAYERINDEX(iParam0);

	for (i = 0; i <= 31; i = i + 1)
	{
		if (Global_1141332[i /*27*/].f_9 == player)
			return Global_1141332[i /*27*/].f_1.f_1 == Global_1144526[iParam0 /*83*/].f_33.f_1;
	}

	return false;
}

void func_734() // Position - 0x14849 Signature - 22 00 04 00 00 03 01 01
{
	Player player;
	var unk;

	player = PLAYER::PLAYER_ID();

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1144526[player /*83*/].f_38.f_23.f_1))
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1144526[player /*83*/].f_38.f_23.f_1);

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1144526[player /*83*/].f_38.f_23))
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1144526[player /*83*/].f_38.f_23);

	Global_1144526[player /*83*/].f_38.f_23.f_1 = unk;
	Global_1144526[player /*83*/].f_38.f_23 = unk;
	return;
}

BOOL func_735(BOOL bParam0) // Position - 0x148BF Signature - 22 01 03 00 00 5D 2F
{
	return func_484(Global_1147183.f_8, bParam0);
}

void func_736(int iParam0) // Position - 0x148D3 Signature - 22 01 03 00 00 66 00 5D 98 6E 11 8C
{
	Global_1142424.f_2019 = iParam0;
	return;
}

struct<2> func_737(int iParam0, int iParam1) // Position - 0x148E4 Signature - 22 02 06 00 00 66 00 67
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_738(var uParam0, var uParam1, int iParam2) // Position - 0x148FA Signature - 22 03 05 00 00 4B
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

int func_739(int iParam0) // Position - 0x14917 Signature - 22 01 03 00 00 66 00 3C 13 00 00
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

BOOL func_740() // Position - 0x14A32 Signature - 22 00 02 00 00 70
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false);
}

BOOL func_741(int iParam0) // Position - 0x14A4E Signature - 22 01 03 00 00 66 00 08 20 6A 8B 06 00 66 00 6D 50
{
	return iParam0 > -1 && iParam0 <= 80;
}

var func_742(Any* panParam0, int iParam1, int iParam2) // Position - 0x14A64 Signature - 22 03 06 00 00 66 01 66 00 6C 02 4B
{
	var unk;

	panParam0->f_2 = iParam1;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, panParam0);
	return unk;
}

int func_743(var uParam0, Any* panParam1, int iParam2) // Position - 0x14A7F Signature - 22 03 08 00 00 2F
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

int func_744(int iParam0) // Position - 0x14AD4 Signature - 22 01 04 00 00 2F 67 03 66 00 3C 16
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

int func_745(int iParam0, var uParam1) // Position - 0x14C49 Signature - 22 02 1F
{
	var unk;

	if (func_790(iParam0, uParam1, &unk))
		return unk.f_2;

	return 0;
}

int func_746(int iParam0) // Position - 0x14C66 Signature - 22 01 03 00 00 66 00 3C 1E
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

int func_747(int iParam0) // Position - 0x14DBC Signature - 22 01 03 00 00 66 00 3C 07 00 18
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

int func_748(int iParam0) // Position - 0x14E13 Signature - 22 01 03 00 00 66 00 3C 13 00 D8
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

int func_749(int iParam0) // Position - 0x14EED Signature - 22 01 03 00 00 66 00 3C 0D
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

int func_750(int iParam0) // Position - 0x14F85 Signature - 22 01 03 00 00 66 00 3C 26
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

BOOL func_751(Hash hParam0, Hash hParam1) // Position - 0x1512F Signature - 22 02 04 00 00 66 00 2F 39 EC 61 01 05 8B 04
{
	if (!func_791(hParam0, 0))
		return false;

	if (func_752(hParam0) || func_753(hParam0, 1077060302))
		return func_792(func_754(hParam0, false), hParam1, false);

	return ITEMDATABASE::_0xDEE7B3C76ED664BE(hParam0, hParam1) > 0;
}

BOOL func_752(Hash hParam0) // Position - 0x1517B Signature - 22 01 03 00 00 66 00 37
{
	if (func_753(hParam0, 75135761))
		return true;

	return false;
}

BOOL func_753(Hash hParam0, Hash hParam1) // Position - 0x15196 Signature - 22 02 04 00 00 66 00 2F 39 EC 61 01 05 8B 0F
{
	if (!func_791(hParam0, 0))
		return func_794(func_793(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return true;

	return false;
}

int func_754(Hash hParam0, BOOL bParam1) // Position - 0x151D7 Signature - 22 02 0B
{
	var unk;

	if (!func_791(hParam0, 0))
		return func_795(func_793(hParam0), bParam1);

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk) || unk.f_5 == 0)
		return 0;

	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(unk.f_5))
		return 0;

	return unk.f_5;
}

int func_755(int iParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1522F Signature - 22 04 27
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_796(iParam0, hParam1, &unk, &num, bParam2, bParam3))
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

// Unhandled jump detected. Output should be considered invalid
BOOL func_756(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x152C3 Signature - 22 06 09 00 00 2F 66 03 32 66 02 76 6D 0F 8A 04 00 2F 50 06 01 66 00 2F
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_791(hParam0, 0))
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
		func_797(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

struct<4> func_757(BOOL bParam0) // Position - 0x15353 Signature - 22 01 04 00 00 5D 17 00 18 27 0E
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_798(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_759(joaat("character"), func_1(), -1591664384, bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_759(joaat("character"), func_1(), -1591664384, false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_759(joaat("character"), func_1(), -1591664384, bParam0);
}

int func_758(Hash hParam0) // Position - 0x153F3 Signature - 22 01 0A 00 00 66 00 2F 39 EC 61 01 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 01 2E 05 8B 04 00 2F 50 01 01 4B 03 27 02
{
	var unk;

	if (!func_791(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_2;
}

struct<4> func_759(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1541E Signature - 22 07 0D
{
	var outGuid;

	if (!func_791(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_798(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

struct<4> func_760(BOOL bParam0) // Position - 0x1544F Signature - 22 01 04 00 00 66 00 39 1C 65 01 67 03 66 03 11 15
{
	int num;

	num = func_798(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_759(923904168, func_757(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_759(923904168, func_757(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_759(923904168, func_757(bParam0), -740156546, false);
}

int func_761(Hash hParam0, BOOL bParam1) // Position - 0x154F0 Signature - 22 02 04 00 00 66 00 39 CD
{
	if (func_765(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_799();
		else
			return 1;

	return 0;
}

BOOL func_762(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x15527 Signature - 22 05 07 00 00 66 00 42
{
	return func_800(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_763(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x15542 Signature - 22 03 09 00 00 66 00 4B
{
	var unk;

	if (func_801(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_764(BOOL bParam0) // Position - 0x15563 Signature - 22 01 04 00 00 66 00 39 1C 65 01 67 03 66 03 11 0B
{
	int num;

	num = func_798(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_759(271701509, func_757(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_759(271701509, func_757(bParam0), 12999093, false);
}

int func_765(Hash hParam0) // Position - 0x155CD Signature - 22 01 0A 00 00 66 00 2F 39 EC 61 01 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 01 2E 05 8B 04 00 2F 50 01 01 4B 03 27 01
{
	var unk;

	if (!func_791(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_1;
}

BOOL func_766(Hash hParam0, int iParam1) // Position - 0x155F8 Signature - 22 02 08 00 00 66
{
	Hash hash;
	int num;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || iParam1 == 0)
		return false;

	num = func_765(hParam0);

	if (num == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(num);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(num, i, &hash))
			if (func_802(hParam0, iParam1, hash))
				return true;
	}

	return false;
}

BOOL func_767(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x15665 Signature - 22 08 0A 00 00 4B 00 66
{
	return func_803(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

int func_768(Hash hParam0, int iParam1) // Position - 0x1567B Signature - 22 02 04 00 00 66 01 2F 15
{
	if (iParam1 == 0)
		return 0;

	if (func_804(func_793(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, iParam1);
}

BOOL func_769(Hash hParam0, Any* panParam1) // Position - 0x156A7 Signature - 22 02 05 00 00 66 00 66
{
	BOOL flag;

	flag = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_805(panParam1->f_8, hParam0, flag, 2048) || func_805(panParam1->f_8, hParam0, flag, 32768) || func_805(panParam1->f_8, hParam0, flag, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_805(panParam1->f_8, hParam0, flag, 4) || func_805(panParam1->f_8, hParam0, flag, 256) || func_805(panParam1->f_8, hParam0, flag, 65536) || func_805(panParam1->f_8, hParam0, flag, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_805(panParam1->f_8, hParam0, flag, true) || func_805(panParam1->f_8, hParam0, flag, 8) || func_805(panParam1->f_8, hParam0, flag, 65536) || func_805(panParam1->f_8, hParam0, flag, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_805(panParam1->f_8, hParam0, flag, true) || func_805(panParam1->f_8, hParam0, flag, 16) || func_805(panParam1->f_8, hParam0, flag, 2) || func_805(panParam1->f_8, hParam0, flag, 65536))
			return false;
	else if (func_805(panParam1->f_8, hParam0, flag, 8) || func_805(panParam1->f_8, hParam0, flag, 4096) || func_805(panParam1->f_8, hParam0, flag, 256) || func_805(panParam1->f_8, hParam0, flag, 65536))
		return false;

	return true;
}

BOOL func_770(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x1587D Signature - 22 03 05 00 00 66 00 66 01 66 02 6D
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

int func_771(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x15894 Signature - 22 03 05 00 00 66 00 8B 21
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_806(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_806(iParam1, 2, 0, 0);
	return -1;
}

int func_772(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x158DD Signature - 22 03 05 00 00 66 00 8B 0E
{
	if (bParam0)
	{
		func_806(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

void func_773(int iParam0, BOOL bParam1) // Position - 0x158F9 Signature - 22 02 05 00 00 66 00 39 99
{
	int i;

	if (!func_721(iParam0))
		return;

	if (func_807(iParam0, 2) && !bParam1)
		return;

	if (bParam1)
		func_808(iParam0, 1);
	else
		func_809(iParam0, 1);

	func_810(iParam0, bParam1);

	for (i = 0; i < 17; i = i + 1)
	{
		if (func_779(i) == iParam0)
			func_780(i, false);
	}

	return;
}

int func_774(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x15966 Signature - 22 03 06 00 00 66 00 3C
{
	int num;

	switch (iParam0)
	{
		case 3:
			return joaat("LAW_REGION_LAGRAS");
	
		case 4:
		case 9:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			break;
	
		case 5:
			if (func_11() != -1 && func_812() == joaat("LAW_REGION_SAINT_DENIS_RURAL"))
				return joaat("LAW_REGION_SAINT_DENIS_RURAL");
			else
				return joaat("LAW_REGION_SAINT_DENIS");
			break;
	
		case 22:
			return joaat("LAW_REGION_PRONGHORN_RANCH");
	
		case 26:
			return joaat("LAW_REGION_STRAWBERRY");
	
		case 33:
			return joaat("LAW_REGION_SISIKA");
	
		case 37:
			return joaat("LAW_REGION_FORT_WALLACE");
	
		case 39:
			return joaat("LAW_REGION_BEECHERS_HOPE");
	
		case 40:
			if (!bParam1 || func_11() != -1)
				return joaat("LAW_REGION_BLACKWATER");
		
			if (func_813(44))
				return joaat("LAW_REGION_BLACKWATER");
			else
				return joaat("LAW_REGION_BLACKWATER_MAINGAME");
			break;
	
		case 60:
			if (func_11() != -1)
				return joaat("LAW_REGION_GRIZZLIES");
			else
				return joaat("LAW_REGION_WAPITI");
			break;
	
		case 62:
			return joaat("LAW_REGION_AGUASDULCES");
	
		case 66:
			return joaat("LAW_REGION_MANICATO");
	
		case 70:
			return joaat("LAW_REGION_CORNWALL");
	
		case 74:
			return joaat("LAW_REGION_EMERALD_RANCH");
	
		case 81:
			if (func_811(iParam0))
				return joaat("LAW_REGION_VALENTINE_LOCKDOWN");
			else
				return joaat("LAW_REGION_VALENTINE");
			break;
	
		case 83:
			return joaat("LAW_REGION_ANNESBURG");
	
		case 87:
			if (func_11() != -1)
				return joaat("LAW_REGION_ROANOKE_RIDGE");
			else
				return joaat("LAW_REGION_BUTCHER_CREEK");
			break;
	
		case 98:
			if (func_11() != -1)
				return joaat("LAW_REGION_ROANOKE_RIDGE");
			else
				return joaat("LAW_REGION_VAN_HORN");
			break;
	
		case 99:
			return joaat("LAW_REGION_BRAITHWAITE_MANOR");
	
		case 101:
			return joaat("LAW_REGION_CALIGA_HALL");
	
		case 111:
			if (func_811(iParam0))
				return joaat("LAW_REGION_RHODES_LOCKDOWN");
			else
				return joaat("LAW_REGION_RHODES");
			break;
	
		case 116:
			return joaat("LAW_REGION_MANZANITA_POST");
	
		case 121:
			return joaat("LAW_REGION_TUMBLEWEED");
	
		case 127:
			return joaat("LAW_REGION_ARMADILLO");
	
		case 131:
			return joaat("LAW_REGION_RIDGEWOOD_FARM");
	
		case 135:
			return joaat("LAW_REGION_MACFARLANES_RANCH");
	
		case 136:
			if (func_11() != -1)
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
		
			if (!bParam1)
				return joaat("LAW_REGION_THIEVES_LANDING");
		
			if (func_813(44))
				return joaat("LAW_REGION_THIEVES_LANDING");
			else
				return joaat("LAW_REGION_THIEVES_LANDING_MAINGAME");
			break;
	}

	if (bParam2)
	{
		num = func_814(iParam0);
	
		if (num != -1)
			return func_815(num, bParam1);
	}

	return 0;
}

int func_775(int iParam0) // Position - 0x15C33 Signature - 22 01 03 00 00 66 00 3C 30
{
	switch (iParam0)
	{
		case joaat("LAW_REGION_BAYOU_NWA"):
		case joaat("LAW_REGION_RHODES"):
		case joaat("LAW_REGION_RHODES_LOCKDOWN"):
		case joaat("LAW_REGION_LAGRAS"):
		case joaat("LAW_REGION_CALIGA_HALL"):
		case joaat("LAW_REGION_BLUEGILL_MARSH"):
		case joaat("LAW_REGION_SISIKA"):
		case joaat("LAW_REGION_BRAITHWAITE_MANOR"):
		case joaat("LAW_REGION_SAINT_DENIS"):
		case joaat("LAW_REGION_SCARLETT_MEADOWS"):
			return 2;
	
		case joaat("LAW_REGION_CUMBERLAND_FOREST"):
		case joaat("LAW_REGION_VALENTINE"):
		case joaat("LAW_REGION_HEARTLANDS"):
		case joaat("LAW_REGION_CORNWALL"):
		case joaat("LAW_REGION_FORT_WALLACE"):
		case joaat("LAW_REGION_VALENTINE_LOCKDOWN"):
		case joaat("LAW_REGION_BUTCHER_CREEK"):
		case joaat("LAW_REGION_ROANOKE_RIDGE"):
		case joaat("LAW_REGION_EMERALD_RANCH"):
		case joaat("LAW_REGION_VAN_HORN"):
		case joaat("LAW_REGION_ANNESBURG"):
		case joaat("LAW_REGION_WAPITI"):
			return 1;
	
		case joaat("LAW_REGION_MANZANITA_POST"):
		case joaat("LAW_REGION_GREAT_PLAINS_MAINGAME"):
		case joaat("LAW_REGION_MANZANITA_POST_MAINGAME"):
		case joaat("LAW_REGION_GREAT_PLAINS"):
		case joaat("LAW_REGION_TALL_TREES"):
		case joaat("LAW_REGION_STRAWBERRY"):
		case joaat("LAW_REGION_BEECHERS_HOPE"):
		case joaat("LAW_REGION_TALL_TREES_MAINGAME"):
		case joaat("LAW_REGION_PRONGHORN_RANCH"):
		case joaat("LAW_REGION_BIG_VALLEY"):
		case joaat("LAW_REGION_BLACKWATER"):
		case joaat("LAW_REGION_BLACKWATER_MAINGAME"):
			return 3;
	
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME"):
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS"):
		case joaat("LAW_REGION_ARMADILLO"):
		case joaat("LAW_REGION_TUMBLEWEED"):
		case joaat("LAW_REGION_MACFARLANES_RANCH"):
		case joaat("LAW_REGION_THIEVES_LANDING"):
		case joaat("LAW_REGION_THIEVES_LANDING_MAINGAME"):
		case joaat("LAW_REGION_RIDGEWOOD_FARM"):
			return 4;
	
		case joaat("LAW_REGION_GRIZZLIES"):
			return 0;
	
		case 0:
		case joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP"):
			return -1;
	
		case joaat("LAW_REGION_MANICATO"):
		case joaat("LAW_REGION_GUAMA"):
		case joaat("LAW_REGION_AGUASDULCES"):
			return 5;
	}

	return -1;
}

void func_776(int iParam0, BOOL bParam1) // Position - 0x15D95 Signature - 22 02 05 00 00 66 00 39 DE
{
	BOOL flag;

	if (!func_449(iParam0))
		return;

	flag = func_453(iParam0, 67108864);

	if (bParam1)
	{
		if (!flag)
		{
			func_817(iParam0, func_816());
			func_818(iParam0, 67108864);
		}
	}
	else if (flag)
	{
		func_550(iParam0, 67108864);
		func_817(iParam0, -15);
	}

	func_819(iParam0);
	return;
}

void func_777(int iParam0, BOOL bParam1, int iParam2) // Position - 0x15DF9 Signature - 22 03 09 00 00 66 00 39
{
	Volume volume;
	BOOL flag;
	int num;
	int num2;

	if (!func_449(iParam0))
		return;

	if (func_820(iParam0) && !bParam1)
		return;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iParam0 /*36*/].f_6))
		volume = Global_1887363[iParam0 /*36*/].f_6;
	else
		volume = func_821(iParam0);

	flag = func_453(iParam0, 33554432);

	if (bParam1)
	{
		num = func_822(iParam0);
	
		if (iParam2 > num)
		{
			func_823(iParam0, func_816());
			func_824(iParam0, iParam2);
		}
	
		if (!flag)
		{
			func_818(iParam0, 33554432);
		
			if (VOLUME::DOES_VOLUME_EXIST(volume))
			{
				if (iParam0 == 40)
					num2 = 0;
				else
					num2 = 1;
			
				PATHFIND::_0xF2A2177AC848B3A8(volume, 0, num2);
			}
		}
	}
	else if (flag)
	{
		func_550(iParam0, 33554432);
		func_823(iParam0, -15);
	
		if (VOLUME::DOES_VOLUME_EXIST(volume))
			PATHFIND::_0xF2A2177AC848B3A8(volume, 1, 1);
	}

	func_825(iParam0);
	return;
}

BOOL func_778(int iParam0) // Position - 0x15EE3 Signature - 22 01 03 00 00 66 00 08 20 6A 8B 06 00 66 00 6D 11
{
	return iParam0 > -1 && iParam0 < 17;
}

int func_779(int iParam0) // Position - 0x15EF9 Signature - 22 01 03 00 00 66 00 3C 11 00 00 00 00 00 63 00 01 00 00 00 7D
{
	switch (iParam0)
	{
		case 0:
			return 2;
	
		case 1:
			return 3;
	
		case 2:
			return 2;
	
		case 3:
			return 1;
	
		case 4:
			return 3;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 7:
			return 0;
	
		case 8:
			return 5;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 2;
	
		case 12:
			return 3;
	
		case 13:
			return 4;
	
		case 14:
			return 4;
	
		case 15:
			return 4;
	
		case 16:
			return 4;
	
		default:
		
	}

	return -1;
}

void func_780(int iParam0, BOOL bParam1) // Position - 0x15FB4 Signature - 22 02 04 00 00 66 00 39 E3 5E 01 05 8B 03 00 50 02 00 66 01
{
	if (!func_778(iParam0))
		return;

	if (bParam1)
	{
		func_826(iParam0, true);
	}
	else
	{
		if (func_827(iParam0))
			return;
	
		func_828(iParam0, 1);
	}

	func_829(iParam0, bParam1);
	return;
}

char* func_781() // Position - 0x15FF3 Signature - 22 00 02 00 00 25 A2
{
	return "unnamed";
}

BOOL func_782(int iParam0) // Position - 0x15FFF Signature - 22 01 04 00 00 2F 67 03 66 00 3C 09
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

BOOL func_783(Player plParam0) // Position - 0x1608E Signature - 22 01 03 00 00 03 01 01 58
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_830(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_831(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

int func_784(Any anParam0) // Position - 0x160D3 Signature - 22 01 03 00 00 66 00 03 05 01 63
{
	if (!GANG::NETWORK_IS_GANG_ID_VALID(anParam0))
		return -1;

	if (anParam0 == GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))
		return func_647(PLAYER::PLAYER_ID());

	return func_832(GANG::NETWORK_GET_GANG_LEADER(anParam0));
}

Vector3 func_785(int iParam0) // Position - 0x1610B Signature - 22 01 06 00 00 66 00 39 72
{
	var unk;

	if (!func_833(iParam0))
		return unk;

	return Global_1141332[iParam0 /*27*/].f_1;
}

BOOL func_786() // Position - 0x16130 Signature - 22 00 02 00 00 11 39 07
{
	return !func_688(2);
}

BOOL func_787(BOOL bParam0) // Position - 0x1613E Signature - 22 01 03 00 00 5D 17 00 18 27 0E 08 15 04 00 2F 50 01 01 5D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && bParam0 != false;
}

BOOL func_788() // Position - 0x1615F Signature - 22 00 03 00 00 03 01 01 23 39
{
	int num;

	num = func_647(PLAYER::PLAYER_ID());

	if (num != -1)
		if (Global_1141332[num /*27*/].f_18.f_1 != 0 && func_484(Global_1141332[num /*27*/].f_18, true))
			return true;

	return false;
}

int func_789(Hash hParam0, BOOL bParam1, Hash hParam2) // Position - 0x161A1 Signature - 22 03 05 00 00 66 00 2F
{
	if (!func_791(hParam0, 0))
		return 0;

	return func_716(hParam0, hParam2, true, bParam1, true, 0);
}

BOOL func_790(int iParam0, var uParam1, var uParam2) // Position - 0x161C5 Signature - 22 03 0A 00 00 66
{
	var unk;

	if (func_834(iParam0, uParam1, &unk))
		func_835(&unk, iParam0, uParam2);
	else
		return false;

	return true;
}

BOOL func_791(Hash hParam0, int iParam1) // Position - 0x161EC Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 01 16
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_792(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x16206 Signature - 22 03 05 00 00 66 00 39
{
	if (!func_836(iParam0))
		return false;

	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, hParam1) == 0)
		return false;

	if (bParam2)
		return !func_837(iParam0, hParam1);

	return true;
}

Hash func_793(Hash hParam0) // Position - 0x1623E Signature - 22 01 03 00 00 66 00 50
{
	return hParam0;
}

BOOL func_794(Hash hParam0, Hash hParam1) // Position - 0x16248 Signature - 22 02 04 00 00 66 00 11
{
	if (!func_804(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

int func_795(Hash hParam0, BOOL bParam1) // Position - 0x1627E Signature - 22 02 05 00 00 66 00 11
{
	int num;

	if (!func_804(hParam0, 2))
		return 0;

	num = 0;

	if (num != 0 && bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
		return 0;

	return num;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_796(int iParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x162B7 Signature - 22 06 09 00 00 2F 66 03 32 66 02 76 6D 0F 8A 04 00 2F 50 06 01 66 00 39
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_836(iParam0))
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
		func_838(iParam0, hParam1, uParam2, *uParam3);

	return true;
}

void func_797(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x16346 Signature - 22 04 2B 00 00 66 02 76 6D 0F 8A 06 00 50 04 00 68 16 00 66 03 66 02 76 20 6A 05 8B 05 00 66 03 09 35 30 8B 03 00 50 04 00 4B 0D 6A 80 01 6D 0A 3D 41 41 66 00 4B 0D 03 09 00 04
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
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_765(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

int func_798(BOOL bParam0) // Position - 0x1651C Signature - 22 01 03 00 00 39 9D
{
	if (func_11() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

int func_799() // Position - 0x1655D Signature - 22 00 02 00 00 37 20
{
	if (func_839(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_800(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x1657A Signature - 22 09 10 00 00 66 00
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_791(hParam0, 0))
		return 0;

	if (!bParam7 && func_768(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_759(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_798(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_798(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_801(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x165F9 Signature - 22 04 07 00 00 2F
{
	int inventoryId;

	inventoryId = func_798(false);
	*panParam1 = { func_759(hParam0, func_760(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_802(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x1663E Signature - 22 03 05 00 00 66 02 37
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, iParam1, hParam2);
}

BOOL func_803(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x16671 Signature - 22 05 07 00 00 66 00 03
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_798(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

BOOL func_804(Hash hParam0, int iParam1) // Position - 0x166AB Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 01 67
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

BOOL func_805(var uParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x166C5 Signature - 22 04 06 00 00 66 02
{
	if (func_484(bParam2, bParam3))
		return true;

	return false;
}

void func_806(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x166DD Signature - 22 04 07 00 00 66 00 08 15 03 00 50 04 00 2F
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

	func_840(iParam0, iParam1, iParam2, iParam3);
	return;
}

BOOL func_807(int iParam0, int iParam1) // Position - 0x1677B Signature - 22 02 04 00 00 66 00 39 99 41 01 05 8B 04
{
	if (!func_721(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_198[iParam0 /*12*/].f_5 && iParam1 != false;

	return Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1 != false;
}

void func_808(int iParam0, int iParam1) // Position - 0x167C0 Signature - 22 02 04 00 00 66 00 39 99 41 01 05 8B 03 00 50 02 00 66 00
{
	if (!func_721(iParam0))
		return;

	!func_807(iParam0, iParam1);

	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_198[iParam0 /*12*/].f_5 = Global_38.f_198[iParam0 /*12*/].f_5 || iParam1;
		return;
	}

	Global_1072759.f_21262[iParam0 /*12*/].f_5 = Global_1072759.f_21262[iParam0 /*12*/].f_5 || iParam1;
	return;
}

void func_809(int iParam0, int iParam1) // Position - 0x16824 Signature - 22 02 04 00 00 66 00 39 99 41 01 05 8B 03 00 50 02 00 5D
{
	if (!func_721(iParam0))
		return;

	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_198[iParam0 /*12*/].f_5 = Global_38.f_198[iParam0 /*12*/].f_5 - Global_38.f_198[iParam0 /*12*/].f_5 && iParam1;
		return;
	}

	Global_1072759.f_21262[iParam0 /*12*/].f_5 = Global_1072759.f_21262[iParam0 /*12*/].f_5 - Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1;
	return;
}

void func_810(int iParam0, BOOL bParam1) // Position - 0x16896 Signature - 22 02 04 00 00 66 00 39 99 41 01 05 8B 03 00 50 02 00 66 01
{
	if (!func_721(iParam0))
		return;

	if (bParam1)
		func_842(func_841(iParam0));
	else
		func_843(func_841(iParam0));

	return;
}

BOOL func_811(int iParam0) // Position - 0x168C7 Signature - 22 01 03 00 00 66 00 39 DE D8 00 05 8B 04 00 2F 50 01 01 66 00 37 00 00 00 02
{
	if (!func_449(iParam0))
		return false;

	return func_453(iParam0, 33554432);
}

Hash func_812() // Position - 0x168E8 Signature - 22 00 02 00 00 5D 9E
{
	return Global_1939102.f_26;
}

BOOL func_813(int iParam0) // Position - 0x168F6 Signature - 22 01 03 00 00 66 00 39 FE
{
	if (!func_844(iParam0))
		return false;

	return func_845(iParam0);
}

int func_814(int iParam0) // Position - 0x16912 Signature - 22 01 03 00 00 66 00 2F 8A 07
{
	if (iParam0 < 0)
		return -1;
	else if (iParam0 <= 10)
		return 0;
	else if (iParam0 <= 30)
		return 1;
	else if (iParam0 <= 34)
		return 2;
	else if (iParam0 <= 38)
		return 3;
	else if (iParam0 <= 41)
		return 4;
	else if (iParam0 <= 52)
		return 7;
	else if (iParam0 <= 61)
		return 6;
	else if (iParam0 <= 66)
		return 8;
	else if (iParam0 <= 81)
		return 9;
	else if (iParam0 <= 98)
		return 10;
	else if (iParam0 <= 112)
		return 11;
	else if (iParam0 <= 119)
		return 12;
	else if (iParam0 <= 121)
		return 13;
	else if (iParam0 <= 126)
		return 14;
	else if (iParam0 <= 134)
		return 15;
	else if (iParam0 <= 138)
		return 16;

	return -1;
}

int func_815(int iParam0, BOOL bParam1) // Position - 0x16A0E Signature - 22 02 04 00 00 66 00 3C 11
{
	switch (iParam0)
	{
		case 0:
			return joaat("LAW_REGION_BAYOU_NWA");
	
		case 1:
			return joaat("LAW_REGION_BIG_VALLEY");
	
		case 2:
			return joaat("LAW_REGION_BLUEGILL_MARSH");
	
		case 3:
			return joaat("LAW_REGION_CUMBERLAND_FOREST");
	
		case 4:
			if (!bParam1 || func_11() != -1)
				return joaat("LAW_REGION_GREAT_PLAINS");
		
			if (func_813(44))
				return joaat("LAW_REGION_GREAT_PLAINS");
			else
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			break;
	
		case 5:
			return joaat("LAW_REGION_GRIZZLIES");
	
		case 6:
			return joaat("LAW_REGION_GRIZZLIES");
	
		case 7:
			return joaat("LAW_REGION_GRIZZLIES");
	
		case 8:
			return joaat("LAW_REGION_GUAMA");
	
		case 9:
			return joaat("LAW_REGION_HEARTLANDS");
	
		case 10:
			return joaat("LAW_REGION_ROANOKE_RIDGE");
	
		case 11:
			return joaat("LAW_REGION_SCARLETT_MEADOWS");
	
		case 12:
			if (!bParam1 || func_11() != -1)
				return joaat("LAW_REGION_TALL_TREES");
		
			if (func_813(44))
				return joaat("LAW_REGION_TALL_TREES");
			else
				return joaat("LAW_REGION_TALL_TREES_MAINGAME");
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_11() != -1)
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
		
			if (func_813(44))
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			else
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME");
			break;
	}

	return 0;
}

BOOL func_816() // Position - 0x16B88 Signature - 22 00 02 00 00 85 E9
{
	return Global_1902569;
}

void func_817(int iParam0, BOOL bParam1) // Position - 0x16B94 Signature - 22 02 04 00 00 5D 17 00 18 27 0E 08 15 0E 00 66 01 66 00 87 C2 1F 63 0B 6C 02
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/].f_2 = bParam1;
		return;
	}

	Global_1072759.f_19611[iParam0 /*11*/].f_2 = bParam1;
	return;
}

void func_818(int iParam0, BOOL bParam1) // Position - 0x16BC3 Signature - 22 02 04 00 00 5D 17 00 18 27 0E 08 15 14
{
	if (Global_1572887.f_14 == -1)
		Global_8130[iParam0 /*11*/] = Global_8130[iParam0 /*11*/] || bParam1;
	else
		Global_1072759.f_19611[iParam0 /*11*/] = Global_1072759.f_19611[iParam0 /*11*/] || bParam1;

	return;
}

void func_819(int iParam0) // Position - 0x16C02 Signature - 22 01 03 00 00 66 00 39 DE D8 00 05 8B 03 00 50 01 00 66 00 39 3B
{
	if (!func_449(iParam0))
		return;

	if (func_846(iParam0))
		func_847(iParam0);
	else
		func_848(iParam0);

	return;
}

BOOL func_820(int iParam0) // Position - 0x16C2F Signature - 22 01 03 00 00 66 00 39 DE D8 00 05 8B 04 00 2F 50 01 01 66 00 37 00 00 00 01
{
	if (!func_449(iParam0))
		return false;

	return func_453(iParam0, 16777216);
}

Volume func_821(int iParam0) // Position - 0x16C50 Signature - 22 01 03 00 00 66 00 39 DE D8 00 05 8B 04 00 2F 50 01 01 66 00 5D
{
	if (!func_449(iParam0))
		return 0;

	return Global_1887363[iParam0 /*36*/].f_4;
}

int func_822(int iParam0) // Position - 0x16C70 Signature - 22 01 06 00 00 66 00 39 DE
{
	int num;
	int num2;
	int num3;

	if (!func_449(iParam0))
		return 0;

	num = func_849(iParam0);

	if (num == -1)
		return -1;

	num2 = func_851(func_850(iParam0));
	num3 = num - num2;

	if (num3 < 0)
		num3 = 0;

	return num3;
}

void func_823(int iParam0, BOOL bParam1) // Position - 0x16CB6 Signature - 22 02 04 00 00 5D 17 00 18 27 0E 08 15 0E 00 66 01 66 00 87 C2 1F 63 0B 6C 01
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/].f_1 = bParam1;
		return;
	}

	Global_1072759.f_19611[iParam0 /*11*/].f_1 = bParam1;
	return;
}

void func_824(int iParam0, int iParam1) // Position - 0x16CE5 Signature - 22 02 04 00 00 66 00 39 DE D8 00 05 8B 03 00 50 02 00 66 01 2F
{
	if (!func_449(iParam0))
		return;

	if (iParam1 < 0)
		return;

	Global_8130[iParam0 /*11*/].f_3 = iParam1;
	return;
}

void func_825(int iParam0) // Position - 0x16D0E Signature - 22 01 03 00 00 66 00 39 DE D8 00 05 8B 03 00 50 01 00 66 00 39 C7
{
	if (!func_449(iParam0))
		return;

	if (func_811(iParam0) && func_852(iParam0))
		func_842(func_853(iParam0, false));
	else
		func_843(func_853(iParam0, false));

	return;
}

void func_826(int iParam0, BOOL bParam1) // Position - 0x16D50 Signature - 22 02 04 00 00 66 00 39 E3 5E 01 05 8B 03 00 50 02 00 66 00
{
	if (!func_778(iParam0))
		return;

	!func_854(iParam0, bParam1);

	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_271[iParam0] = Global_38.f_271[iParam0] || bParam1;
		return;
	}

	Global_1072759.f_21335[iParam0] = Global_1072759.f_21335[iParam0] || bParam1;
	return;
}

BOOL func_827(int iParam0) // Position - 0x16DAE Signature - 22 01 03 00 00 66 00 39 E3
{
	if (!func_778(iParam0))
		return false;

	return func_854(iParam0, 2);
}

void func_828(int iParam0, BOOL bParam1) // Position - 0x16DCB Signature - 22 02 04 00 00 66 00 39 E3 5E 01 05 8B 03 00 50 02 00 5D
{
	if (!func_778(iParam0))
		return;

	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_271[iParam0] = Global_38.f_271[iParam0] - Global_38.f_271[iParam0] && bParam1;
		return;
	}

	Global_1072759.f_21335[iParam0] = Global_1072759.f_21335[iParam0] - Global_1072759.f_21335[iParam0] && bParam1;
	return;
}

void func_829(int iParam0, BOOL bParam1) // Position - 0x16E34 Signature - 22 02 05 00 00 66 00 39 E3
{
	Hash hash;

	if (!func_778(iParam0))
		return;

	if (iParam0 == 8)
		return;

	hash = func_855(iParam0);

	if (bParam1)
		func_842(hash);
	else
		func_843(hash);

	return;
}

BOOL func_830(Player plParam0) // Position - 0x16E6F Signature - 22 01 03 00 00 5D 77 5E 10 18 8E
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_831(Player plParam0) // Position - 0x16E8C Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 32
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_856(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_857(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

int func_832(Player plParam0) // Position - 0x16F0F Signature - 22 01 04 00 00 66 00 03 05 00 CF
{
	int i;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return -1;

	if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1141332.f_1091), plParam0))
		return -1;

	for (i = 0; i < 32; i = i + 1)
	{
		if (Global_1141332[i /*27*/].f_9 == plParam0 && Global_1141332[i /*27*/] != 3)
			return i;
	}

	return -1;
}

BOOL func_833(int iParam0) // Position - 0x16F72 Signature - 22 01 03 00 00 66 00 2F 35 6A 05 8B 06 00 66 00 6D 20
{
	if (iParam0 < 0 || iParam0 >= 32)
		return false;

	return true;
}

BOOL func_834(int iParam0, var uParam1, Any* panParam2) // Position - 0x16F91 Signature - 22 03 05 00 00 5D F8 89 11 27
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = -1096981081;
	panParam2->f_3 = func_744(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_835(Any* panParam0, int iParam1, var uParam2) // Position - 0x16FC5 Signature - 22 03 06 00 00 66 01 66 02 32
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

BOOL func_836(int iParam0) // Position - 0x1703F Signature - 22 01 03 00 00 66 00 2F 15 04 00 2F 50 01 01 66 00 03
{
	if (iParam0 == 0)
		return false;

	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(iParam0);
}

BOOL func_837(int iParam0, Hash hParam1) // Position - 0x17057 Signature - 22 02 E0
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

void func_838(int iParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x171A0 Signature - 22 04 2B 00 00 66 02 76 6D 0F 8A 06 00 50 04 00 68 16 00 66 03 66 02 76 20 6A 05 8B 05 00 66 03 09 35 30 8B 03 00 50 04 00 4B 0D 6A 80 01 6D 0A 3D 41 41 66 00 4B 0D 03 09 00 AD
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
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_765(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

int func_839(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x17376 Signature - 22 04 06 00 00 66 00 39 05
{
	if (func_858(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_798(bParam1), hParam0, bParam3);
}

void func_840(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x173A9 Signature - 22 04 07 00 00 66 00 08 15 03 00 50 04 00 5D
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

	func_859(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

Hash func_841(int iParam0) // Position - 0x17485 Signature - 22 01 03 00 00 66 00 3C 06 00 00 00 00 00 39
{
	switch (iParam0)
	{
		case 0:
			return joaat("state_ambarino");
	
		case 1:
			return joaat("state_new_hanover");
	
		case 2:
			return joaat("state_lemoyne");
	
		case 3:
			return joaat("state_west_elizabeth");
	
		case 4:
			return joaat("state_new_austin");
	
		case 5:
			return joaat("state_guarma");
	
		default:
		
	}

	return 0;
}

void func_842(Hash hParam0) // Position - 0x174EA Signature - 22 01 04 00 00 66 00 39 66
{
	Hash styleHash;

	if (func_209(hParam0) == 62)
	{
		MAP::_MAP_ENABLE_REGION_BLIP(-1145496915, -1482012664);
		MAP::_MAP_ENABLE_REGION_BLIP(-1043953850, -1482012664);
		MAP::_MAP_ENABLE_REGION_BLIP(-1783502982, -1482012664);
	}
	else
	{
		styleHash = -1482012664;
	
		if (func_210(hParam0) == 4 || func_210(hParam0) == 12 || func_779(func_210(hParam0)) == 4 || func_854(func_210(hParam0), 8) && func_210(hParam0) == 2 || func_210(hParam0) == 0 || func_210(hParam0) == 10)
			styleHash = -1305340593;
	
		MAP::_MAP_ENABLE_REGION_BLIP(hParam0, styleHash);
	}

	return;
}

void func_843(Hash hParam0) // Position - 0x175A8 Signature - 22 01 03 00 00 66 00 39 66
{
	if (func_209(hParam0) == 62)
	{
		MAP::_MAP_DISABLE_REGION_BLIP(-1145496915);
		MAP::_MAP_DISABLE_REGION_BLIP(-1043953850);
		MAP::_MAP_DISABLE_REGION_BLIP(-1783502982);
	}
	else if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(hParam0, -1305340593) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(hParam0, -1482012664))
	{
		MAP::_MAP_DISABLE_REGION_BLIP(hParam0);
	}

	return;
}

BOOL func_844(int iParam0) // Position - 0x175FE Signature - 22 01 03 00 00 66 00 2F 15 04 00 2F 50 01 01 09
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_845(int iParam0) // Position - 0x17611 Signature - 22 01 06 00 00 66 00 67
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_38.f_3651[num2], offset);
}

BOOL func_846(int iParam0) // Position - 0x1763B Signature - 22 01 03 00 00 66 00 39 DE D8 00 05 8B 04 00 2F 50 01 01 66 00 37 00 00 00 04
{
	if (!func_449(iParam0))
		return false;

	return func_453(iParam0, 67108864);
}

void func_847(int iParam0) // Position - 0x1765C Signature - 22 01 0C 00 00 66 00 39
{
	var unk;
	const char* str;

	TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(iParam0), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_OUTLINE", 64);
	str = func_510(unk);
	MAP::_MAP_ENABLE_REGION_BLIP(MISC::GET_HASH_KEY(str), -1482012664);
	return;
}

void func_848(int iParam0) // Position - 0x17690 Signature - 22 01 0D 00 00 66 00 39
{
	var unk;
	const char* str;
	Hash hashKey;

	TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(iParam0), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_OUTLINE", 64);
	str = func_510(unk);
	hashKey = MISC::GET_HASH_KEY(str);

	if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(hashKey, -1305340593) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(hashKey, -1482012664))
		MAP::_MAP_DISABLE_REGION_BLIP(hashKey);

	return;
}

int func_849(int iParam0) // Position - 0x176E2 Signature - 22 01 03 00 00 66 00 39 DE D8 00 05 8B 04 00 2F 50 01 01 66 00 39
{
	if (!func_449(iParam0))
		return 0;

	if (func_820(iParam0))
		return -1;

	return Global_8130[iParam0 /*11*/].f_3;
}

BOOL func_850(int iParam0) // Position - 0x17711 Signature - 22 01 03 00 00 66 00 39 DE D8 00 05 8B 06
{
	if (!func_449(iParam0))
		return -15;

	if (Global_1572887.f_14 == -1)
		return Global_8130[iParam0 /*11*/].f_1;

	return Global_1072759.f_19611[iParam0 /*11*/].f_1;
}

int func_851(BOOL bParam0) // Position - 0x1774C Signature - 22 01 0B 00 00 66 00 39
{
	int value;
	int value2;
	int value3;
	int value4;
	int value5;
	int value6;
	float value7;
	int num;

	if (!func_860(bParam0))
		return 0;

	func_861(bParam0, &value, &value2, &value3, &value4, &value5, &value6);
	value7 = (BUILTIN::TO_FLOAT(value) / 60f) + BUILTIN::TO_FLOAT(value2) + (BUILTIN::TO_FLOAT(value3) * 60f) + (BUILTIN::TO_FLOAT(value4) * 24f * 60f) + (BUILTIN::TO_FLOAT(value5) * 30.4375f * 24f * 60f) + (BUILTIN::TO_FLOAT(value6) * 365.25f * 24f * 60f);
	num = BUILTIN::ROUND(value7);
	return num;
}

BOOL func_852(int iParam0) // Position - 0x177E5 Signature - 22 01 03 00 00 66 00 39 DE D8 00 05 8B 04 00 2F 50 01 01 66 00 3C
{
	if (!func_449(iParam0))
		return 0;

	switch (iParam0)
	{
		case 26:
		case 33:
		case 37:
		case 40:
		case 62:
		case 66:
		case 81:
		case 83:
		case 99:
		case 101:
		case 111:
		case 121:
			return 1;
	}

	return 0;
}

Hash func_853(int iParam0, BOOL bParam1) // Position - 0x17853 Signature - 22 02 04 00 00 66 00 3C 8C
{
	switch (iParam0)
	{
		case 0:
			return joaat("region_bay_crawdadwillies");
	
		case 1:
			return joaat("region_bay_macombs_end");
	
		case 2:
			return joaat("region_bay_merkinswaller");
	
		case 3:
			return joaat("region_bay_lagras");
	
		case 4:
			return joaat("region_bay_lakay");
	
		case 5:
			return joaat("region_bay_saint_denis");
	
		case 6:
			return joaat("region_bay_orange_plantation");
	
		case 7:
			return joaat("region_bay_serial_killer");
	
		case 8:
			return joaat("region_bay_serendipity");
	
		case 9:
			return joaat("region_bay_shadybelle");
	
		case 10:
			return joaat("region_bay_siltwaterstrand");
	
		case 11:
			return joaat("region_bgv_appleseedtimber");
	
		case 12:
			return joaat("region_bgv_beryls_dream");
	
		case 13:
			return joaat("region_bgv_blackboneforest_trapper");
	
		case 14:
			return joaat("region_bgv_dakotariver_trapper");
	
		case 15:
			return joaat("region_bgv_fortriggs");
	
		case 16:
			return joaat("region_bgv_hangingdog");
	
		case 17:
			return joaat("region_bgv_lonemulestead");
	
		case 18:
			return joaat("region_bgv_missing_husband");
	
		case 19:
			return joaat("region_bgv_monto_rest");
	
		case 20:
			return joaat("region_bgv_owanjila_dam");
	
		case 21:
			return joaat("region_bgv_paintedsky");
	
		case 22:
			return joaat("region_bgv_pronghorn");
	
		case 23:
			return joaat("region_bgv_riggs_station");
	
		case 24:
			return joaat("region_bgv_shack");
	
		case 25:
			return joaat("region_bgv_shepherds_rise");
	
		case 26:
			return joaat("region_bgv_strawberry");
	
		case 27:
			return joaat("region_bgv_valley_view");
	
		case 28:
			return joaat("region_bgv_wallace_station");
	
		case 29:
			return joaat("region_bgv_old_man_jones");
	
		case 30:
			return joaat("region_bgv_watsonscabin");
	
		case 31:
			return joaat("region_blu_canebreak_manor");
	
		case 32:
			return joaat("region_blu_copperhead");
	
		case 33:
			return joaat("region_blu_sisika");
	
		case 34:
			return joaat("region_blu_travelling_salesman");
	
		case 35:
			return joaat("region_cml_bacchusbridge");
	
		case 36:
			return joaat("region_cml_dino_lady");
	
		case 37:
			return joaat("region_cml_oldfortwallace");
	
		case 38:
			return joaat("region_cml_sixpointcabin");
	
		case 39:
			return joaat("region_grt_beechers");
	
		case 40:
			return joaat("region_grt_blackwater");
	
		case 41:
			return joaat("region_grt_quakers_cove");
	
		case 42:
			return joaat("region_grz_adlerranch");
	
		case 43:
			return joaat("region_grz_dead_rival");
	
		case 44:
			return joaat("region_grz_chezporter");
	
		case 45:
			return joaat("region_grz_colter");
	
		case 46:
			return joaat("region_grz_frozen_explorer");
	
		case 47:
			return joaat("region_grz_millesani_claim");
	
		case 48:
			return joaat("region_grz_mountain_man");
	
		case 49:
			return joaat("region_grz_mount_hagen_peak");
	
		case 50:
			return joaat("region_grz_starving_children");
	
		case 51:
			return joaat("region_grz_tempest_rim");
	
		case 52:
			return joaat("region_grz_wintermining_town");
	
		case 53:
			return joaat("region_grz_calumetravine");
	
		case 54:
			return joaat("region_gre_civil_war_bride");
	
		case 55:
			return joaat("region_grz_cohutta");
	
		case 56:
			return joaat("region_grz_cotorra_springs");
	
		case 57:
			return joaat("region_grz_gunfight");
	
		case 58:
			return joaat("region_grz_theloft");
	
		case 59:
			return joaat("region_gre_veteran");
	
		case 60:
			return joaat("region_grz_wapiti");
	
		case 61:
			return joaat("region_grz_travelling_salesman");
	
		case 62:
			return joaat("region_gua_aguasdulces");
	
		case 63:
			return joaat("region_gua_camp");
	
		case 64:
			return joaat("region_gua_cincotorres");
	
		case 65:
			return joaat("region_gua_lacapilla");
	
		case 66:
			return joaat("region_gua_manicato");
	
		case 67:
			return joaat("region_hrt_abandoned_mill");
	
		case 68:
			return joaat("region_roa_beechers_c");
	
		case 69:
			return joaat("region_hrt_carmodydell");
	
		case 70:
			return joaat("region_hrt_cornwallkerosene");
	
		case 71:
			return joaat("region_hrt_crop_farm");
	
		case 72:
			return joaat("region_hrt_cumberlandfalls");
	
		case 73:
			return joaat("region_hrt_downsranch");
	
		case 74:
			return joaat("region_hrt_emeraldranch");
	
		case 75:
			return joaat("region_hrt_grangers_hoggery");
	
		case 76:
			return joaat("region_hrt_horseshoeoverlook");
	
		case 77:
			return joaat("region_hrt_larnedsod");
	
		case 78:
			return joaat("region_hrt_loony_cult");
	
		case 79:
			return joaat("region_hrt_luckyscabin");
	
		case 80:
			return joaat("region_hrt_swansons_station");
	
		case 81:
			return joaat("region_hrt_valentine");
	
		case 82:
			return joaat("region_roa_aberdeenpigfarm");
	
		case 83:
			return joaat("region_roa_annesburg");
	
		case 84:
			return joaat("region_roa_beaverhollow");
	
		case 85:
			return joaat("region_roa_black_balsam_rise");
	
		case 86:
			return joaat("region_roa_brandywine_drop");
	
		case 87:
			return joaat("region_roa_butchercreek");
	
		case 88:
			return joaat("region_roa_doverhill");
	
		case 89:
			return joaat("region_roa_happy_family");
	
		case 90:
			return joaat("region_roa_isolationist");
	
		case 91:
			return joaat("region_roa_macleanshouse");
	
		case 92:
			return joaat("region_roa_mossy_flats");
	
		case 93:
			return joaat("region_roa_roanoke_valley");
	
		case 94:
			return joaat("region_roa_rockyseven");
	
		case 95:
			return joaat("region_roa_trapper");
	
		case 96:
			return joaat("region_roa_old_man_jones");
	
		case 97:
			return joaat("region_roa_vanhornmansion");
	
		case 98:
			return joaat("region_roa_vanhornpost");
	
		case 99:
			return joaat("region_scm_braithwaitemanor");
	
		case 100:
			return joaat("region_scm_bulgerglade");
	
		case 101:
			return joaat("region_scm_caligahall");
	
		case 102:
			return joaat("region_scm_catfishjacksons");
	
		case 103:
			return joaat("region_scm_clemenscove");
	
		case 104:
			return joaat("region_scm_clemenspoint");
	
		case 105:
			return joaat("region_scm_compsons_stead");
	
		case 106:
			return joaat("region_scm_dairy_farm");
	
		case 107:
			return joaat("region_scm_horse_shop");
	
		case 108:
			return joaat("region_scm_lonniesshack");
	
		case 109:
			return joaat("region_scm_love_triangle");
	
		case 110:
			return joaat("region_scm_radleys_pasture");
	
		case 111:
			return joaat("region_scm_rhodes");
	
		case 112:
			return joaat("region_scm_slave_pen");
	
		case 113:
			return joaat("region_tal_aurora_basin");
	
		case 114:
			return joaat("region_tal_dead_settler");
	
		case 115:
			return joaat("region_tal_cochinay");
	
		case 116:
			return joaat("region_tal_manzanitapost");
	
		case 117:
			return joaat("region_tal_pacificunionrr");
	
		case 118:
			return joaat("region_tal_tannersreach");
	
		case 119:
			return joaat("region_tal_trapper");
	
		case 120:
			return joaat("region_gap_gaptooth_breach");
	
		case 121:
			return joaat("region_gap_tumbleweed");
	
		case 122:
			return joaat("region_gap_rathskeller_fork");
	
		case 123:
			return joaat("region_rio_benedict_point");
	
		case 124:
			return joaat("region_rio_fort_mercer");
	
		case 125:
			return joaat("region_rio_plain_view");
	
		case 126:
			return joaat("region_rio_travelling_salesman");
	
		case 127:
			return joaat("region_cho_armadillo");
	
		case 128:
			return joaat("region_cho_coots_chapel");
	
		case 129:
			return joaat("region_cho_don_julio_house");
	
		case 130:
			return joaat("region_cho_rileys_charge");
	
		case 131:
			return joaat("region_cho_ridgewood_farm");
	
		case 132:
			return joaat("region_cho_twin_rocks");
	
		case 133:
			return joaat("region_cho_travelling_salesman");
	
		case 134:
			return 1869665995;
	
		case 135:
			return joaat("region_hen_macfarlanes_ranch");
	
		case 136:
			return joaat("region_hen_thieves_landing");
	
		case 137:
			return joaat("region_hen_travelling_salesman");
	
		case 138:
			return -1573562784;
	
		case 139:
			return joaat("region_centralunionrr");
	
		default:
		
	}

	if (bParam1)
		return joaat("Wilderness");

	return 0;
}

BOOL func_854(int iParam0, BOOL bParam1) // Position - 0x18019 Signature - 22 02 04 00 00 66 00 39 E3 5E 01 05 8B 04
{
	if (!func_778(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_271[iParam0] && bParam1 != false;

	return Global_1072759.f_21335[iParam0] && bParam1 != false;
}

Hash func_855(int iParam0) // Position - 0x1805B Signature - 22 01 03 00 00 66 00 3C 11 00 00 00 00 00 63 00 01 00 00 00 65
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

void func_856(Player plParam0) // Position - 0x1815E Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 77
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_857(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_857(Player plParam0) // Position - 0x181CA Signature - 22 01 03 00 00 66 00 5D 77
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

BOOL func_858(Hash hParam0) // Position - 0x18205 Signature - 22 01 03 00 00 66 00 03 05 00
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

void func_859(int iParam0) // Position - 0x18213 Signature - 22 01 03 00 00 08
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_862(&(iParam0->f_4));
	return;
}

BOOL func_860(BOOL bParam0) // Position - 0x18236 Signature - 22 01 09 00 00 66
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (bParam0 == -15)
		return false;

	num = func_863(bParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_864(bParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_865(bParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_866(bParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_867(bParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_868(bParam0);

	if (num6 < 1 || num6 > func_869(num5, num4))
		return false;

	return true;
}

void func_861(BOOL bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x18312 Signature - 22 07 09
{
	func_870(func_816(), bParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_862(var uParam0) // Position - 0x18330 Signature - 22 01 03 00 00 2F 66 00 32 2F
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

int func_863(BOOL bParam0) // Position - 0x1838A Signature - 22 01 03 00 00 66 00 2F 03
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 0) & 63;
}

int func_864(BOOL bParam0) // Position - 0x1839C Signature - 22 01 03 00 00 66 00 4D 03
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 6) & 63;
}

int func_865(BOOL bParam0) // Position - 0x183AE Signature - 22 01 03 00 00 66 00 6D 0C
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 12) & 31;
}

int func_866(BOOL bParam0) // Position - 0x183C1 Signature - 22 01 03 00 00 66 00 6D 1A
{
	return (BUILTIN::SHIFT_RIGHT(bParam0, 26) & 31 * MISC::IS_BIT_SET(bParam0, 31) ? -1 : 1) + 1898;
}

int func_867(BOOL bParam0) // Position - 0x183E6 Signature - 22 01 03 00 00 66 00 6D 16
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 22) & 15;
}

int func_868(BOOL bParam0) // Position - 0x183F9 Signature - 22 01 03 00 00 66 00 6D 11
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 17) & 31;
}

int func_869(int iParam0, int iParam1) // Position - 0x1840C Signature - 22 02 04 00 00 66 01 2F 8A 03 00 2F
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

void func_870(BOOL bParam0, BOOL bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x184A6 Signature - 22 08 12
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_871(bParam0, bParam1, true))
	{
		num = func_867(bParam1);
		num2 = func_866(bParam0);
		num3 = func_866(bParam0) - func_866(bParam1);
		num4 = func_867(bParam0) - func_867(bParam1);
		num5 = func_868(bParam0) - func_868(bParam1);
		num6 = func_865(bParam0) - func_865(bParam1);
		num7 = func_864(bParam0) - func_864(bParam1);
		num8 = func_863(bParam0) - func_863(bParam1);
	}
	else
	{
		num = func_867(bParam0);
		num2 = func_866(bParam1);
		num3 = func_866(bParam1) - func_866(bParam0);
		num4 = func_867(bParam1) - func_867(bParam0);
		num5 = func_868(bParam1) - func_868(bParam0);
		num6 = func_865(bParam1) - func_865(bParam0);
		num7 = func_864(bParam1) - func_864(bParam0);
		num8 = func_863(bParam1) - func_863(bParam0);
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
	
		num5 = num5 + func_869(num, num2);
		num4 = num4 - 1;
		num = BUILTIN::ROUND(func_872(BUILTIN::TO_FLOAT(num + 1), 0f, 12f));
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

BOOL func_871(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x186A8 Signature - 22 03 05 00 00 66 02 8B
{
	if (bParam2)
		if (!func_860(bParam1) || !func_860(bParam0))
			return true;

	return bParam0 > bParam1;
}

float func_872(float fParam0, float fParam1, float fParam2) // Position - 0x186D5 Signature - 22 03 06 00 00 66 01 66 02 7D
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

