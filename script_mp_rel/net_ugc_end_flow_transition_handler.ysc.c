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
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 4;
	var uLocal_16 = 0;
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
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	int iLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	BOOL bScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 37 9F
{
	iLocal_13 = joaat("w_binocular_inner01");
	fLocal_28 = 1f;
	fLocal_29 = 1f;

	if (bScriptParam_0)
	{
	}

	func_1();

	while (!func_2(true, true))
	{
		func_3(true);
		NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MAP"), true);
		func_4();
		func_5();
	
		switch (iLocal_30)
		{
			case 0:
				if (Global_1051192)
				{
					if (!func_6() || Global_1572887.f_260.f_21 != 0 || !bScriptParam_0 || Global_1572887.f_72.f_13 == 1)
					{
						if (!func_7())
							GRAPHICS::ANIMPOSTFX_STOP_ALL();
					
						HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_MISSION_CONTROLLER"));
						func_8(false);
						func_9(1);
					}
					else
					{
						func_6();
						bScriptParam_0;
					
						if (Global_1572887.f_72.f_13 == 1)
						{
						}
					
						if (Global_1572887.f_260.f_21 != 0)
						{
						}
					
						func_8(true);
					}
				}
				break;
		
			case 1:
				if (func_6())
					func_9(2);
				break;
		
			case 2:
				if (func_10() && !func_11())
				{
					if (func_12(Global_3407872.f_2338, 4))
						func_9(3);
				}
				else
				{
					func_13(true, 1);
				
					if (func_12(Global_1051189, 64))
					{
						func_14(0);
					}
					else if (func_15(255) == 4)
					{
					}
					else
					{
						func_16(true, true);
					}
				
					func_9(3);
				}
				break;
		
			case 3:
				if (func_15(255) != 1)
				{
				}
				else
				{
					func_9(4);
				}
				break;
		
			case 4:
				if (!func_7())
				{
					func_17(&(Global_3407872.f_2338), 1);
					func_9(5);
				}
				break;
		
			case 5:
				if (func_11() || func_12(Global_3407872.f_2338, 2))
				{
					GRAPHICS::RESET_PAUSED_RENDERPHASES();
					func_18();
				
					if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
						CAM::DO_SCREEN_FADE_IN(0);
				
					GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
					AUDIO::_STOP_ALL_SCRIPTED_AUDIO_SOUNDS();
				
					if (func_19(32768))
					{
						func_20(32768);
						AUDIO::SET_AUDIO_FLAG("OpenWorldMusicDisabled", false);
					}
				
					_STOPWATCH_RESET(&uLocal_31, true, false);
					func_9(6);
				}
				break;
		
			case 6:
				if (func_22(&uLocal_31, true, false) > 1500)
				{
					func_9(7);
					GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT("RespawnMissionCheckpoint");
				}
				break;
		
			case 7:
				AUDIO::_STOP_ALL_SCRIPTED_AUDIO_SOUNDS();
			
				if (!func_23())
				{
					func_24();
					func_25();
				}
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_24();
	func_25();
	return;
}

void func_1() // Position - 0x26A Signature - 22 00 02 00 00 03 00 00 2B
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::_0xB711EB4BC8D06013();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	return;
}

BOOL func_2(BOOL bParam0, BOOL bParam1) // Position - 0x27F Signature - 22 02 05
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

void func_3(BOOL bParam0) // Position - 0x35F Signature - 22 01 03 00 00 66 00 05 8B 0A 00 6D 15
{
	if (!bParam0)
		func_26(21);
	else
		func_14(21);

	return;
}

void func_4() // Position - 0x37E Signature - 22 00 02 00 00 37 D2
{
	if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("pause_menu")) || UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("pause_menu")))
		UIAPPS::_CLOSE_UIAPP_BY_HASH_IMMEDIATE(joaat("pause_menu"));

	if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("Abilities")) || UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("Abilities")))
		UIAPPS::_CLOSE_UIAPP_BY_HASH_IMMEDIATE(joaat("Abilities"));

	if (func_27())
		func_28();

	if (func_29())
		func_30();

	func_31();
	return;
}

void func_5() // Position - 0x3E8 Signature - 22 00 05
{
	int num;
	var args;
	int threadId;

	if (iLocal_33 != 0)
		return;

	if (!func_10())
	{
		iLocal_33 = 2;
		return;
	}

	if (func_23())
	{
		iLocal_33 = 1;
		return;
	}

	func_32();

	if (iLocal_30 <= 1)
		return;

	num = func_33();

	if (num == 0)
		return;

	if (num == 1)
	{
		args = -1;
		func_34(&Global_3407872, &args);
		threadId = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(joaat("net_ugc_end_flow_transition_online"), &args, 1, 14335);
	
		if (SCRIPTS::DOES_THREAD_EXIST(threadId))
		{
			iLocal_33 = 1;
		
			if (func_35())
				func_17(&(Global_3407872.f_2338), 8);
			else
				func_36(&(Global_3407872.f_2338), 8);
		}
		else
		{
			iLocal_33 = 2;
		}
	}

	return;
}

BOOL func_6() // Position - 0x48E Signature - 22 00 02 00 00 5D 17
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_5;
}

BOOL func_7() // Position - 0x4AA Signature - 22 00 02 00 00 5D 77
{
	return Global_1072759.f_28644.f_23.f_3 != 0;
}

void func_8(BOOL bParam0) // Position - 0x4BF Signature - 22 01 03 00 00 66 00 8B 0A
{
	if (bParam0)
		func_37(16384);
	else
		func_38(16384);

	return;
}

void func_9(int iParam0) // Position - 0x4DD Signature - 22 01 03 00 00 66 00 4E
{
	iLocal_30 = iParam0;
	return;
}

BOOL func_10() // Position - 0x4E9 Signature - 22 00 02 00 00 5D 00
{
	return Global_3407872.f_65 != 0;
}

BOOL func_11() // Position - 0x4F9 Signature - 22 00 02 00 00 54
{
	if (iLocal_33 == 0)
		return false;

	return !func_23();
}

BOOL func_12(int iParam0, int iParam1) // Position - 0x510 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 02 04 00 00 66 00 8B
{
	return iParam0 && iParam1 != false;
}

void func_13(BOOL bParam0, int iParam1) // Position - 0x51F Signature - 22 02 04 00 00 66 00 8B
{
	if (bParam0)
	{
		if (iParam1 != -1)
			Global_1102813.f_3799 = 0;
		else
			Global_1102813.f_3799 = 1;
	
		func_14(62);
		Global_1102813.f_3798 = iParam1;
	}
	else
	{
		func_26(62);
	}

	return;
}

int func_14(int iParam0) // Position - 0x55F Signature - 22 01 03 00 00 5D DD D3 10 80 04 66 00 62 39 5F
{
	if (func_39(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

int func_15(int iParam0) // Position - 0x57C Signature - 22 01 03 00 00 66 00 6D
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

void func_16(BOOL bParam0, BOOL bParam1) // Position - 0x5C7 Signature - 22 02 04 00 00 6D
{
	if (func_15(255) == 4)
		return;

	if (_IS_NULL_VECTOR(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
		return;

	if (!bParam0)
	{
		func_26(0);
	}
	else
	{
		if (bParam1)
			func_41(0, false, 0, true);
	
		func_14(0);
		func_42(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");
		func_43(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
	
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}

	func_44(Global_1102813.f_3839, 36);
	func_45(Global_1102813.f_3878, 36);
	return;
}

void func_17(int iParam0, int iParam1) // Position - 0x712 Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 00
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_18() // Position - 0x723 Signature - 22 00 02 00 00 08
{
	Global_1940085.f_105 = -1;
	Global_1940085.f_105.f_1 = 0;
	return;
}

BOOL func_19(BOOL bParam0) // Position - 0x73B Signature - 22 01 03 00 00 85 07 00 04 66
{
	return Global_262151 && bParam0 != false;
}

void func_20(BOOL bParam0) // Position - 0x74C Signature - 22 01 03 00 00 85 07 00 04 85
{
	Global_262151 = Global_262151 - Global_262151 && bParam0;
	return;
}

void _STOPWATCH_RESET(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x764 Signature - 22 03 05 00 00 03 01 00 27 6A 8B 04 00 66 01 05 69 8B 1A
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

int func_22(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7A1 Signature - 22 03 05 00 00 03 01 00 27 6A 8B 04 00 66 01 05 69 8B 25
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		if (!bParam2)
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME());
		else
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());

	return NETWORK::GET_TIME_DIFFERENCE(*uParam0, MISC::GET_GAME_TIMER());
}

BOOL func_23() // Position - 0x7E8 Signature - 22 00 02 00 00 37 6F 33 67 A7 03 05
{
	return SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("net_ugc_end_flow_transition_online")) > 0;
}

void func_24() // Position - 0x7FB Signature - 22 00 02 00 00 39
{
	func_46();
	Global_1051193 = 0;
	func_3(false);
	func_47(false);
	func_48(false);
	AUDIO::_STOP_ALL_SCRIPTED_AUDIO_SOUNDS();
	func_49();
	return;
}

void func_25() // Position - 0x823 Signature - 22 00 02 00 00 03 00 00 29
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

int func_26(int iParam0) // Position - 0x82F Signature - 22 01 03 00 00 5D DD D3 10 80 04 66 00 62 39 12
{
	if (func_50(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

BOOL func_27() // Position - 0x84C Signature - 22 00 02 00 00 5D 3A
{
	return Global_1896762.f_352;
}

void func_28() // Position - 0x85B Signature - 22 00 02 00 00 2F 39
{
	func_51(false);
	return;
}

BOOL func_29() // Position - 0x868 Signature - 22 00 02 00 00 5D 1C
{
	return Global_1940252.f_2;
}

void func_30() // Position - 0x876 Signature - 22 00 02 00 00 37 15
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("satchel")) > 0)
		Global_1940252.f_13 = 1;

	return;
}

void func_31() // Position - 0x895 Signature - 22 00 02 00 00 5D 75
{
	if (Global_1940085.f_111)
		Global_1940085.f_111 = 0;

	HUD::_DISABLE_HUD_CONTEXT(36547242);
	return;
}

void func_32() // Position - 0x8B6 Signature - 22 00 02 00 00 37 6F 33 67 A7 03 04
{
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("net_ugc_end_flow_transition_online"));
	return;
}

int func_33() // Position - 0x8C7 Signature - 22 00 06
{
	int num;
	int num2;
	int i;
	Player playerFromGamerHandle;

	if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("net_ugc_end_flow_transition_online")))
		return 0;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(&Global_3407872[i /*2*/]))
		{
		}
		else
		{
			num2 = num2 + 1;
		
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Global_3407872[i /*2*/]))
			{
			}
			else
			{
				playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Global_3407872[i /*2*/]);
			
				if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerFromGamerHandle))
				{
				}
				else
				{
					num = num + 1;
				}
			}
		}
	}

	if (num >= num2)
		return 1;

	if (!_STOPWATCH_IS_INITIALIZED(&uLocal_34))
		_STOPWATCH_RESET(&uLocal_34, true, false);

	if (!func_35())
		return 0;

	return 1;
}

void func_34(Any* panParam0, var uParam1) // Position - 0x96A Signature - 22 02 08
{
	int i;
	int num;
	Player playerFromGamerHandle;
	int uniqueIntForPlayer;

	num = -1;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(&panParam0->[i /*2*/]))
		{
		}
		else if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&panParam0->[i /*2*/]))
		{
		}
		else
		{
			playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&panParam0->[i /*2*/]);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerFromGamerHandle))
			{
			}
			else
			{
				uniqueIntForPlayer = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(playerFromGamerHandle);
			
				if (num == -1 || uniqueIntForPlayer < num)
					num = uniqueIntForPlayer;
			}
		}
	}

	*uParam1 = num;
	return;
}

BOOL func_35() // Position - 0x9E6 Signature - 22 00 02 00 00 89
{
	if (!_STOPWATCH_IS_INITIALIZED(&uLocal_34))
		return false;

	if (func_22(&uLocal_34, true, false) <= 20000)
		return false;

	return true;
}

void func_36(int iParam0, int iParam1) // Position - 0xA0F Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 01 03 00 00 5D 77
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_37(int iParam0) // Position - 0xA24 Signature - 22 01 03 00 00 5D 77 5E 10 18 E4 6F 80 17 80
{
	func_53(&(Global_1072759.f_28644.f_23.f_1), iParam0);
	return;
}

void func_38(int iParam0) // Position - 0xA3D Signature - 22 01 03 00 00 66 00 39 97
{
	if (func_54(iParam0))
		func_55(&(Global_1072759.f_28644.f_23.f_1), iParam0);

	return;
}

BOOL func_39(Any* panParam0, int iParam1, int iParam2) // Position - 0xA5F Signature - 22 03 08 00 00 66 01 6D 1F 59 67 05 66 01 6D 1F 47 67 06 66 05 66 00 17 01 66 06 03 09 00 0B 67 07 66 05 66 00 63 01 66 06 03 08 00 15
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

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0xA92 Signature - 22 03 05 00 00 66
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_41(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0xABC Signature - 22 04
{
	func_56(iParam0);

	if (!func_57(1))
		return;

	if (bParam1)
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	else if (!func_58(128) && !func_59(19))
		CAM::DO_SCREEN_FADE_OUT(iParam2);

	if (bParam3 && func_60() == 4)
		func_26(18);

	func_61(1024);
	return;
}

void func_42(var uParam0) // Position - 0xB1E Signature - 22 01 21
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_43(float* pfParam0) // Position - 0xB30 Signature - 22 01 0C
{
	var unk;

	*pfParam0 = { unk };
	return;
}

void func_44(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0xB42 Signature - 22 1F
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

void func_45(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0xB98 Signature - 22 0A
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

void func_46() // Position - 0xBC5 Signature - 22 00 02 00 00 2F 26
{
	Global_1051189 = 0;
	return;
}

void func_47(BOOL bParam0) // Position - 0xBD2 Signature - 22 01 03 00 00 66 00 05 8B 0A 00 6D 13
{
	if (!bParam0)
		func_26(19);
	else
		func_14(19);

	return;
}

void func_48(BOOL bParam0) // Position - 0xBF1 Signature - 22 01 03 00 00 66 00 05 8B 0A 00 6D 12
{
	if (!bParam0)
		func_26(18);
	else
		func_14(18);

	return;
}

void func_49() // Position - 0xC10 Signature - 22 00 25
{
	var src;

	src = 32;
	src.f_67 = 1;
	src.f_67.f_1.f_25 = 4;
	src.f_67.f_1.f_25.f_1.f_11 = 2;
	src.f_67.f_1.f_25.f_1.f_11.f_1.f_5 = -1082130432;
	src.f_67.f_1.f_25.f_1.f_11.f_1.f_13.f_5 = -1082130432;
	src.f_67.f_1.f_25.f_1.f_11.f_1.f_34.f_5 = -1082130432;
	src.f_67.f_1.f_25.f_1.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	src.f_67.f_1.f_25.f_1.f_80.f_11 = 2;
	src.f_67.f_1.f_25.f_1.f_80.f_11.f_1.f_5 = -1082130432;
	src.f_67.f_1.f_25.f_1.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	src.f_67.f_1.f_25.f_1.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	src.f_67.f_1.f_25.f_1.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	src.f_67.f_1.f_25.f_1.f_80.f_80.f_11 = 2;
	src.f_67.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_5 = -1082130432;
	src.f_67.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	src.f_67.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	src.f_67.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	src.f_67.f_1.f_25.f_1.f_80.f_80.f_80.f_11 = 2;
	src.f_67.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_5 = -1082130432;
	src.f_67.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	src.f_67.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	src.f_67.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	src.f_67.f_1.f_346 = 20;
	src.f_67.f_1.f_346.f_1 = -1;
	src.f_67.f_1.f_346.f_1.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_16.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29 = -1;
	src.f_67.f_1.f_346.f_1.f_29.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_16.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29 = -1;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_16.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29 = -1;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29 = -1;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29 = -1;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	src.f_67.f_1.f_927 = 20;
	src.f_67.f_1.f_927.f_1 = -1;
	src.f_67.f_1.f_927.f_1.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15 = -1;
	src.f_67.f_1.f_927.f_1.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15 = -1;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1228 = 10;
	src.f_67.f_1.f_1228.f_1 = -1;
	src.f_67.f_1.f_1228.f_1.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1228.f_1.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1228.f_1.f_15 = -1;
	src.f_67.f_1.f_1228.f_1.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1228.f_1.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1228.f_1.f_15.f_15 = -1;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1379 = 10;
	src.f_67.f_1.f_1379.f_1 = -1;
	src.f_67.f_1.f_1379.f_1.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1379.f_1.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1379.f_1.f_15 = -1;
	src.f_67.f_1.f_1379.f_1.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1379.f_1.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1379.f_1.f_15.f_15 = -1;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1530 = 1;
	src.f_67.f_1.f_1530.f_1 = -1;
	src.f_67.f_1.f_1530.f_1.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1530.f_1.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1546 = 5;
	src.f_67.f_1.f_1546.f_1 = -1;
	src.f_67.f_1.f_1546.f_1.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1546.f_1.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1546.f_1.f_15 = -1;
	src.f_67.f_1.f_1546.f_1.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1546.f_1.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1546.f_1.f_15.f_15 = -1;
	src.f_67.f_1.f_1546.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1546.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1546.f_1.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_1546.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1546.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1546.f_1.f_15.f_15.f_15.f_15 = -1;
	src.f_67.f_1.f_1546.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	src.f_67.f_1.f_1546.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	src.f_67.f_1.f_1622 = 8;
	src.f_67.f_1.f_1648 = 2;
	src.f_67.f_1.f_1652 = 4;
	src.f_67.f_1.f_1669 = 20;
	src.f_67.f_1.f_1830 = 20;
	src.f_67.f_1.f_1911 = 10;
	src.f_67.f_1.f_1952 = 1;
	src.f_67.f_1.f_1957 = 10;
	src.f_67.f_1.f_1998 = 5;
	src.f_67.f_1.f_2019 = 3;
	src.f_67.f_1.f_2044 = 3;
	src.f_67.f_1.f_2057 = 8;
	src.f_67.f_1.f_2057.f_1.f_21 = 3;
	src.f_67.f_1.f_2057.f_1.f_26.f_21 = 3;
	src.f_67.f_1.f_2057.f_1.f_26.f_26.f_21 = 3;
	src.f_67.f_1.f_2057.f_1.f_26.f_26.f_26.f_21 = 3;
	src.f_67.f_1.f_2057.f_1.f_26.f_26.f_26.f_26.f_21 = 3;
	src.f_67.f_1.f_2057.f_1.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	src.f_67.f_1.f_2057.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	src.f_67.f_1.f_2057.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	MISC::COPY_SCRIPT_STRUCT(&Global_3407872, &src, 2339);
	return;
}

BOOL func_50(Any* panParam0, int iParam1, int iParam2) // Position - 0x1812 Signature - 22 03 08 00 00 66 01 6D 1F 59 67 05 66 01 6D 1F 47 67 06 66 05 66 00 17 01 66 06 03 09 00 0B 67 07 66 05 66 00 63 01 66 06 03 08 00 1F
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

void func_51(BOOL bParam0) // Position - 0x1844 Signature - 22 01 03 00 00 66 00 8B 17
{
	if (bParam0)
		if (!Global_1896762.f_352)
			Global_1896762.f_352 = bParam0;
	else if (Global_1896762.f_352)
		Global_1896762.f_352 = bParam0;

	return;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x187B Signature - 22 01 03 00 00 66 00 27
{
	return uParam0->f_1;
}

void func_53(BOOL bParam0, int iParam1) // Position - 0x1887 Signature - 22 02 04 00 00 66 00 66 01 39 84
{
	func_62(bParam0, iParam1);
	return;
}

BOOL func_54(int iParam0) // Position - 0x1897 Signature - 22 01 03 00 00 5D 77 5E 10 18 E4 6F 80 17 27
{
	return func_63(Global_1072759.f_28644.f_23.f_1, iParam0);
}

void func_55(BOOL bParam0, int iParam1) // Position - 0x18B0 Signature - 22 02 04 00 00 66 00 66 01 39 A4
{
	func_64(bParam0, iParam1);
	return;
}

void func_56(int iParam0) // Position - 0x18C0 Signature - 22 01 03 00 00 66 00 5D DD
{
	Global_1102813.f_26.f_12 = iParam0;
	return;
}

BOOL func_57(int iParam0) // Position - 0x18D2 Signature - 22 01 03 00 00 5D DD D3 10 80 1A 27 07
{
	return Global_1102813.f_26.f_7 && iParam0 != false;
}

BOOL func_58(BOOL bParam0) // Position - 0x18E7 Signature - 22 01 03 00 00 5D DD D3 10 80 1A 27 09 66 00 69 2F
{
	return Global_1102813.f_26.f_9 && bParam0 != false;
}

BOOL func_59(int iParam0) // Position - 0x18FC Signature - 22 01 03 00 00 66 00 5D CF
{
	return Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1 == Global_1106895[iParam0 /*2*/].f_1;
}

int func_60() // Position - 0x192A Signature - 22 00 02 00 00 85
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

void func_61(BOOL bParam0) // Position - 0x195D Signature - 22 01 03 00 00 66 00 39 B9
{
	if (func_65(bParam0))
		return;

	Global_1102813.f_26.f_9 = Global_1102813.f_26.f_9 || bParam0;
	return;
}

void func_62(BOOL bParam0, int iParam1) // Position - 0x1984 Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 02
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

BOOL func_63(BOOL bParam0, BOOL bParam1) // Position - 0x1995 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 02 04 00 00 66 00 76
{
	return bParam0 && bParam1 != false;
}

void func_64(BOOL bParam0, int iParam1) // Position - 0x19A4 Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 01 03 00 00 5D DD
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

BOOL func_65(BOOL bParam0) // Position - 0x19B9 Signature - 22 01 03 00 00 5D DD D3 10 80 1A 27 09 66 00 69 66
{
	return Global_1102813.f_26.f_9 && bParam0 == bParam0;
}

