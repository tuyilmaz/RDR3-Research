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
	BOOL bLocal_13 = 0;
	Hash hLocal_14 = 0;
	Any anLocal_15 = 0;
	int iLocal_16 = 0;
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
	var uLocal_48 = 1;
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
	float fLocal_64 = 0f;
	float fLocal_65 = 0f;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	BOOL bLocal_73 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 09 4E
{
	bLocal_13 = 1;
	fLocal_64 = 1f;
	fLocal_65 = 1f;
	anLocal_15 = anScriptParam_0;
	iLocal_16 = anScriptParam_0.f_1;
	uLocal_17 = anScriptParam_0.f_2;
	func_1();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_2();

	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && func_3())
	{
		func_4();
		func_5();
		func_6();
		BUILTIN::WAIT(0);
	}

	func_2();
	return;
}

void func_1() // Position - 0x5C Signature - 22 00 02 00 00 50 00 00 22 00 02
{
	return;
}

void func_2() // Position - 0x64 Signature - 22 00 02 00 00 39 5C
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(anLocal_15);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_8();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3() // Position - 0x89 Signature - 22 00 02 00 00 54 0E
{
	if (hLocal_14 != 0)
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hLocal_14) == 0)
			return bLocal_13;
		else
			return true;

	return bLocal_13;
}

void func_4() // Position - 0xB2 Signature - 22 00 02 00 00 50 00 00 22 00 03
{
	return;
}

void func_5() // Position - 0xBA Signature - 22 00 03 00 00 2F 67 02 66 02 11
{
	int i;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_ERRORS); i = i + 1)
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_ERRORS, i))
		{
			case -843555838:
				func_11(i);
				break;
		
			case -456923784:
				func_10(i);
				break;
		
			case -45008988:
				func_9(i);
				break;
		}
	}

	return;
}

void func_6() // Position - 0x112 Signature - 22 00 04 00 00 39
{
	var outEntity;
	BOOL isPedInCombat;

	func_12();

	if (!ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		switch (iLocal_66)
		{
			case 0:
				PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 42, 0, true);
				func_13(&iLocal_66, 1);
				break;
		
			case 1:
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("showMenu")))
				{
					if (!PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("camera_item")) == 0)
					{
						HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_33, 1f, 1, 1, 342152817, "REST_UI_GROUP", 0);
					
						if (func_14() == 0)
						{
							if (func_15(joaat("upgrade_upg_mortar_pestle"), 1) && !func_16(0, false, true) || func_17())
							{
								iLocal_67 = func_18("CAMP_CRAFT", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), 0);
								func_19(iLocal_67, 342152817, 0, true);
								MISC::SET_BIT(&(Global_1958634.f_1), 2);
								MISC::CLEAR_BIT(&(Global_1958634.f_1), 3);
							}
						}
						else
						{
							if (!(func_20("simple_crafting") || SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("simple_crafting")) > 0))
							{
								if (func_15(-1448210800, 1) && !func_16(0, false, true) || func_17())
								{
									if (!func_21())
									{
										iLocal_67 = func_18("CAMP_CRAFT", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), 0);
										func_19(iLocal_67, 342152817, 0, true);
									}
								}
							
								if (func_22(0, 0) && func_15(joaat("kit_camp"), 1) || func_15(joaat("kit_camp_simple"), 1))
								{
									iLocal_68 = func_18("SET_CAMP", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), 0);
									func_19(iLocal_68, 342152817, 0, true);
								}
							}
						
							MISC::SET_BIT(&(Global_1958634.f_1), 2);
							MISC::CLEAR_BIT(&(Global_1958634.f_1), 3);
						}
					
						iLocal_69 = func_18("LEAVE", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 5, 570, 4000, 10, 1073741824, joaat("MEDIUM_TIMED_EVENT"), 0);
						func_23(iLocal_69, 17, true, true);
						func_19(iLocal_69, 342152817, 0, true);
						func_13(&iLocal_66, 2);
					}
				}
				break;
		
			case 2:
				if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false) || SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("camera_item")) > 0)
				{
					func_24();
					func_13(&iLocal_66, 1);
					return;
				}
			
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_QUICK_USE_ITEM"), false);
				HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_33, 1f, 1, 1, 342152817, "REST_UI_GROUP", 0);
				isPedInCombat = PED::IS_PED_IN_COMBAT(Global_33, 0);
			
				if (func_25(joaat("simple_crafting")) || SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("simple_crafting")) > 0 || Global_1913634.f_1581)
				{
					func_24();
					MISC::CLEAR_BIT(&(Global_1958634.f_1), 2);
					func_13(&iLocal_66, 3);
					return;
				}
				else if (func_26())
				{
					func_24();
					MISC::CLEAR_BIT(&(Global_1958634.f_1), 2);
					func_13(&iLocal_66, 4);
					return;
				}
				else if (func_27())
				{
					func_24();
					MISC::CLEAR_BIT(&(Global_1958634.f_1), 2);
					func_13(&iLocal_66, 5);
					return;
				}
				else if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
				{
					func_24();
					MISC::CLEAR_BIT(&(Global_1958634.f_1), 2);
					func_13(&iLocal_66, 6);
					return;
				}
			
				if (func_28(iLocal_67, true))
				{
					func_29(false);
					func_24();
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
					MISC::CLEAR_BIT(&(Global_1958634.f_1), 2);
					func_13(&iLocal_66, 3);
				}
				else if (func_28(iLocal_68, true))
				{
					if (func_15(joaat("kit_camp"), 1) && func_30(joaat("kit_camp"), false, 0, 0, true, false, false) || func_15(joaat("kit_camp_simple"), 1) && func_30(joaat("kit_camp_simple"), false, 0, 0, true, false, false))
					{
						func_24();
						MISC::CLEAR_BIT(&(Global_1958634.f_1), 2);
					}
				}
				else if (func_31(iLocal_69, true) || isPedInCombat)
				{
					if (!isPedInCombat)
						PED::_GIVE_PED_HASH_COMMAND(Global_33, joaat("DYNAMIC_KNEEL_SLOW_EXIT"), 2f);
				
					TASK::CLEAR_PED_TASKS(Global_33, !PED::IS_PED_MALE(Global_33), false);
					func_24();
				}
			
				if (!func_32(&uLocal_70))
				{
					if (func_33())
					{
						func_34(&uLocal_70);
					
						if (!PED::IS_PED_MALE(Global_33))
							PED::_SET_PED_CROUCH_MOVEMENT(Global_33, false, 0, false);
					}
				}
				else if (!func_33())
				{
					bLocal_73 = false;
					func_35(&uLocal_70);
				}
				else if (!func_36(&uLocal_70, 0.15f))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_SPRINT")))
						bLocal_73 = true;
				}
				else if (!bLocal_73)
				{
					PED::_GIVE_PED_HASH_COMMAND(Global_33, joaat("DYNAMIC_KNEEL_SLOW_EXIT"), 0.2f);
				}
				break;
		
			case 3:
				if (!func_20("simple_crafting") && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("simple_crafting")) == 0 && !Global_1913634.f_1581)
					func_13(&iLocal_66, 1);
				break;
		
			case 4:
				if (!func_26())
					func_13(&iLocal_66, 1);
				break;
		
			case 5:
				if (!func_27())
					func_13(&iLocal_66, 1);
				break;
		
			case 6:
				if (!TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
					func_13(&iLocal_66, 1);
				break;
		}
	
		if (!PED::IS_PED_USING_ANY_SCENARIO(Global_33) || iLocal_66 > 1 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) || TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_33, false) != iLocal_16)
			bLocal_13 = false;
	}

	return;
}

void func_7() // Position - 0x65C Signature - 22 00 02 00 00 70 21 00 48
{
	HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_33, 1f, 1, 1, 342152817, "REST_UI_GROUP", 0);
	func_24();
	PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 42, 0, false);
	MISC::CLEAR_BIT(&(Global_1958634.f_1), 2);
	return;
}

void func_8() // Position - 0x692 Signature - 22 00 02 00 00 03 00
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x69E Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 B4 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 61 4B 03 39 F7
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_37(&eventData);
	}

	return;
}

void func_10(int iParam0) // Position - 0x6C6 Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 B4 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 61 4B 03 39 FF
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_38(&eventData);
	}

	return;
}

void func_11(int iParam0) // Position - 0x6EE Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 B4 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 61 4B 03 39 07
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_39(&eventData);
	}

	return;
}

void func_12() // Position - 0x716 Signature - 22 00 02 00 00 2F 39 0F
{
	func_40(false);
	return;
}

void func_13(var uParam0, int iParam1) // Position - 0x723 Signature - 22 02 04 00 00 66 01 66 00 32
{
	*uParam0 = iParam1;
	return;
}

int func_14() // Position - 0x730 Signature - 22 00 02 00 00 5D 17 00 18 27 0E 50
{
	return Global_1572887.f_14;
}

BOOL func_15(Hash hParam0, int iParam1) // Position - 0x73E Signature - 22 02 05 00 00 66 00 2F 39 31 17 00 05 8B 04 00 2F 50 02 01 66 00 39
{
	int num;

	if (!func_41(hParam0, 0))
		return false;

	num = func_42(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_44(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_43(hParam0, 1))
				return false;
			break;
	}

	return func_45(hParam0, false, false, false) >= iParam1;
}

BOOL func_16(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7C1 Signature - 22 03 05 00 00 5D 17
{
	if (Global_1572887.f_14 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1900460.f_67;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1900460.f_68;
	
		if (func_46())
			return true;
	
		if (Global_1072759.f_3 && !Global_1572887.f_10)
			if (Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_481 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
				return true;
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
			return Global_1900460.f_67;
		else
			return Global_1900460.f_68;
	}

	if (iParam0 == 0 && func_48(func_47(0)))
		return true;

	if (Global_1940199 && 81919 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1900595)
			return true;

	switch (func_49(func_47(0)))
	{
		case -1:
			return false;
	
		case 2:
			return iParam0 & 1 == 0;
	
		case 3:
			return iParam0 & 16 == 0;
	
		case 4:
			return iParam0 & 32 == 0;
	
		case 5:
			return iParam0 & 2 == 0;
	
		case 7:
			return iParam0 & 1024 == 0;
	
		default:
		
	}

	return false;
}

BOOL func_17() // Position - 0x937 Signature - 22 00 02 00 00 5D 22
{
	return Global_1913634.f_1578;
}

int func_18(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, Hash hParam10, int iParam11) // Position - 0x946 Signature - 22 0C 10
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_50(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_51(num, hParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, false, false, 0, hParam10, iParam11);
		return num;
	}

	return 0;
}

void func_19(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x9CF Signature - 22 04 07 00 00 66 03 6A 8B 08 00 66 00 39 81 1D 00 05 69 8B 03 00 50 04 00 66 00 39 C0 1D 00 67 06 66 06 5D A6 C8 1D 63 17 27 03 03 05 01 22 05 8B 03 00 50 04 00 66 06 5D A6 C8 1D 63 17 27 03 66 01 66 02 03 0C 00
{
	int num;

	if (bParam3 && !func_52(iParam0))
		return;

	num = func_53(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_GROUP(Global_1951910[num /*23*/].f_3, iParam1, iParam2);
	return;
}

BOOL func_20(char* sParam0) // Position - 0xA1A Signature - 22 01 04 00 00 2F 67 03 2F 67 03 66 03 5D EA 97 1D 27 A1 8A 20 00 66 03
{
	int i;

	i = 0;

	for (i = 0; i < Global_1939434.f_161; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1939434[i /*16*/].f_10), sParam0))
			return true;
	}

	return false;
}

BOOL func_21() // Position - 0xA54 Signature - 22 00 02 00 00 70 21 00 03
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return false;

	if (!PED::IS_PED_IN_ANY_TRAIN(Global_33))
		return false;

	return false;
}

BOOL func_22(int iParam0, int iParam1) // Position - 0xA7B Signature - 22 02 04 00 00 5D 1C
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940252.f_1556.f_44.f_87);
}

void func_23(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xA92 Signature - 22 04 07 00 00 66 03 6A 8B 08 00 66 00 39 81 1D 00 05 69 8B 03 00 50 04 00 66 00 39 C0 1D 00 67 06 66 06 5D A6 C8 1D 63 17 27 03 03 05 01 22 05 8B 03 00 50 04 00 66 06 5D A6 C8 1D 63 17 27 03 66 01 66 02 03 0C 01
{
	int num;

	if (bParam3 && !func_52(iParam0))
		return;

	num = func_53(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1951910[num /*23*/].f_3, iParam1, bParam2);
	return;
}

void func_24() // Position - 0xADD Signature - 22 00 02 00 00 54 43
{
	if (func_52(iLocal_67))
		func_54(&iLocal_67, true, true);

	if (func_52(iLocal_68))
		func_54(&iLocal_68, true, true);

	if (func_52(iLocal_69))
		func_54(&iLocal_69, true, true);

	return;
}

BOOL func_25(Hash hParam0) // Position - 0xB18 Signature - 22 01 04 00 00 2F 67 03 2F 67 03 66 03 5D EA 97 1D 27 A1 8A 20 00 66 00
{
	int i;

	i = 0;

	for (i = 0; i < Global_1939434.f_161; i = i + 1)
	{
		if (hParam0 == MISC::GET_HASH_KEY(&(Global_1939434[i /*16*/].f_10)))
			return true;
	}

	return false;
}

BOOL func_26() // Position - 0xB52 Signature - 22 00 02 00 00 5D 1C 9B 1D 27 02
{
	return Global_1940252.f_2 || Global_1940252 == 1;
}

BOOL func_27() // Position - 0xB6C Signature - 22 00 02 00 00 5D 3A
{
	return Global_1896762.f_352;
}

BOOL func_28(int iParam0, BOOL bParam1) // Position - 0xB7B Signature - 22 02 05 00 00 66 01 6A
{
	int num;

	if (bParam1 && !func_52(iParam0))
		return false;

	num = func_53(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1951910[num /*23*/].f_3);
}

void func_29(BOOL bParam0) // Position - 0xBAE Signature - 22 01 03 00 00 39 30 07 00 08 1C
{
	if (func_14() != -1 || !bParam0 || func_55(Global_33))
	{
		func_56();
		return;
	}

	return;
}

BOOL func_30(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xBDC Signature - 22 07 2A
{
	int num;
	var unk10;
	Hash scriptHash;
	var unk26;
	BOOL flag;
	int num2;
	BOOL flag2;
	BOOL flag3;
	int num3;

	if (func_57())
	{
		Global_1940252.f_11589 = hParam0;
		func_58(hParam0, 1, -142743235, 0, false);
		return 0;
	}

	if (!func_59(hParam0, bParam4))
		return 0;

	if (func_60(hParam0))
		return 0;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 108107462))
		return 0;

	flag = true;
	num2 = 1;
	num.f_4 = iParam3;
	num.f_5 = 1;

	if (hParam0 == -418848773)
		UIAPPS::LAUNCH_UIAPP_WITH_ENTRY("player_menu", "mp_moonshine_selection");

	if (func_61(hParam0))
	{
		Global_1913442 = hParam0;
		Global_1913633 = MISC::GET_GAME_TIMER();
		Global_1913443 = MISC::GET_GAME_TIMER() + 3000;
		return 1;
	}

	if (func_62(hParam0, -2081717885))
		func_63(hParam0, unk10, num, unk26, flag, num2);
	else if (func_62(hParam0, -1909684001))
		func_64(hParam0, unk10, num, flag, num2);
	else if (func_62(hParam0, 587975446))
		func_65(hParam0, unk10);
	else if (func_62(hParam0, 566155764))
		if (!func_66(hParam0))
			return 0;

	if (func_67(hParam0))
	{
		Global_1913442 = hParam0;
		Global_1913633 = MISC::GET_GAME_TIMER();
		return 1;
	}

	if (func_68(hParam0, bParam5, bParam6, bParam1))
	{
		Global_1913442 = hParam0;
		Global_1913633 = MISC::GET_GAME_TIMER();
		return 1;
	}

	if (func_62(hParam0, -1227898937))
	{
		num.f_2 = hParam0;
		unk10 = { num };
		TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "doc_newspaper", 32);
		unk10.f_14 = 1024;
		unk10.f_15 = 1;
		func_69(unk10, 1);
		num2 = 0;
		flag = false;
	}
	else if (func_62(hParam0, -1472964441) || func_62(hParam0, -228153877) || func_62(hParam0, 566155764))
	{
	}
	else if (func_62(hParam0, 1919582297))
	{
		if (func_70() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) || TASK::IS_PED_EXITING_SCENARIO(Global_33, true) || !PED::IS_PED_ON_FOOT(Global_33))
			return 0;
	
		switch (hParam0)
		{
			case joaat("consumable_predator_bait"):
			case joaat("consumable_potent_predator_bait"):
				TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "item_bait_predator", 32);
				break;
		
			case -252071901:
				TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "item_legendary_animal_pheromone", 32);
				break;
		
			case joaat("consumable_herbivore_bait"):
			case joaat("consumable_potent_herbivore_bait"):
				TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "item_bait_herbivore", 32);
				break;
		}
	
		num.f_1 = hParam0;
		num.f_3 = bParam1;
		unk10 = { num };
		unk10.f_14 = 512;
		unk10.f_15 = 1;
		func_69(unk10, 0);
		flag = false;
	}
	else if (func_71(hParam0))
	{
		num.f_3 = 0;
		num.f_1 = hParam0;
		num.f_2 = 0;
		num = func_72(Global_1072759.f_28313.f_25.f_67);
		unk10 = { num };
		TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "net_player_wheel_item_use", 32);
		unk10.f_14 = 512;
		unk10.f_15 = 1;
		func_69(unk10, 0);
		num2 = 1;
	}
	else if (func_42(hParam0) == joaat("CLOTHING"))
	{
		if (!func_73(hParam0))
		{
			func_74("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, true);
			return num2;
		}
	
		num3 = func_75(hParam0);
	
		switch (num3)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				flag2 = func_76();
				break;
		
			default:
				flag2 = true;
				break;
		}
	
		if (!flag2)
		{
			if (func_77(PLAYER::PLAYER_ID()))
				func_74("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, true);
			else
				func_74("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, true);
		
			return num2;
		}
	
		if (num3 == -999503751)
		{
			if (Global_1953292.f_1676 != hParam0)
				func_78(20, hParam0, 0, 0, false);
		}
		else
		{
			switch (num3)
			{
				case -2061583405:
					func_80(hParam0);
					func_78(35, 0, 0, 0, false);
					return 1;
			
				case -1719060085:
					if (hParam0 == Global_1953292.f_1676.f_1[23 /*3*/])
					{
						func_81(Global_33, 260271636, 0, -358215195, true, true, true, true, false, true, true, false);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayUnequipGlovesFidget", true, 15);
						func_82(hParam0, false, false);
						return 1;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayEquipGlovesFidget", true, 15);
						func_82(hParam0, true, false);
					}
					break;
			
				case -525676072:
				case -68128151:
				case 81053684:
					func_79(hParam0, false);
					return num2;
			
				case 119907797:
				case 1388798186:
					if (hParam0 == Global_1953292.f_1676.f_1[10 /*3*/])
					{
						func_81(Global_33, Global_1953292.f_83[10 /*12*/], 0, -358215195, true, true, true, true, false, true, true, false);
						func_82(hParam0, false, false);
						return 1;
					}
					else
					{
						func_82(hParam0, true, false);
						func_83(-2061583405, false);
					
						if (num3 == 1388798186)
							func_83(119907797, false);
						else if (num3 == 119907797)
							func_83(1388798186, false);
					}
					break;
			
				default:
					if (!func_62(hParam0, 160827531))
						break;
				
					func_79(hParam0, false);
					break;
			}
		
			func_81(Global_33, hParam0, 0, -358215195, true, true, true, false, false, true, true, false);
		}
	}
	else
	{
		switch (hParam0)
		{
			case joaat("kit_shaving_kit"):
				break;
		
			case joaat("upgrade_upg_mortar_pestle"):
			case -1448210800:
				func_29(true);
				break;
		
			case joaat("kit_camp"):
			case joaat("kit_camp_simple"):
				if (func_73(joaat("kit_camp")))
				{
					if (func_90(1, 1))
					{
						func_91(2, true);
					}
					else if (func_92(1))
					{
						func_74("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, true);
					}
					else if (func_93())
					{
						func_74("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, true);
					}
					else
					{
						if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
							func_94();
						else
							func_74("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, true);
					
						func_95(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
					}
				}
				else if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
				{
					func_74("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, true);
					func_95(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
				}
				else if (func_93())
				{
					func_74("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, true);
				}
				else
				{
					func_74("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, true);
				}
				break;
		
			case joaat("kit_collectors_bag"):
				UIAPPS::LAUNCH_UIAPP_BY_HASH(joaat("Collectors"));
			
				if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("Collectors")) > 0)
				{
				}
				else
				{
					num.f_1 = hParam0;
					unk10 = { num };
					TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "collectors_bag", 32);
					unk10.f_14 = 1024;
					func_69(unk10, 0);
				}
			
				return 1;
		
			case -1115561122:
				if (Global_1148185[PLAYER::PLAYER_ID() /*10*/].f_4)
					func_74("NET_WCAMP_OWNER_CAMP_RUNNING", 10000, 0, 0, 0, true);
				else
					func_98();
			
				return 1;
		
			case joaat("weapon_kit_camera"):
			case 332793555:
				if (func_96(Global_33, true, 0, false) != hParam0)
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, hParam0, false, 0, false, false);
			
				return 1;
		
			case joaat("kit_gun_oil"):
			case joaat("upgrade_upg_coffee_kit"):
				func_97(535, true);
				break;
		
			case joaat("kit_wardrobe"):
				if (func_14() != -1)
					break;
			
				if (!func_73(hParam0))
				{
					func_74("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, true);
					break;
				}
			
				flag2 = func_85(7, hParam0);
				flag3 = func_85(1, hParam0);
			
				if (flag3 && !flag2)
				{
					if (MAP::DOES_BLIP_EXIST(Global_17339))
						MAP::REMOVE_BLIP(&Global_17339);
				
					Global_17339 = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_PLAYER_HORSE"));
					MAP::BLIP_ADD_MODIFIER(Global_17339, 673950256);
					func_74(MISC::VAR_STRING(0, -1680440926, Global_17339), 10000, 0, 0, 0, true);
					break;
				}
			
				if (!func_86(7))
				{
					func_74("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, true);
					break;
				}
			
				if (!flag2)
				{
					if (func_88(Global_33, func_87(7), false))
					{
						func_74("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, true);
					}
					else
					{
						if (MAP::DOES_BLIP_EXIST(Global_17339))
							MAP::REMOVE_BLIP(&Global_17339);
					
						Global_17339 = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_PLAYER_HORSE"));
						MAP::BLIP_ADD_MODIFIER(Global_17339, 673950256);
						func_74(MISC::VAR_STRING(0, -482898802, Global_17339), 10000, 0, 0, 0, true);
					}
				
					break;
				}
			
				scriptHash = joaat("player_wardrobe");
			
				if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(scriptHash) > 0)
				{
				}
				else
				{
					num.f_1 = hParam0;
					num.f_2 = 51499045;
					unk10 = { num };
					TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "player_wardrobe", 32);
					unk10.f_14 = 1024;
					unk10.f_15 = 1;
					func_69(unk10, 0);
				}
				break;
		
			case joaat("document_player_journal"):
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("document_player_journal"), 1928812891, 1, 0, -1082130432);
				flag = false;
				return 1;
		
			case joaat("weapon_kit_binoculars"):
			case joaat("weapon_kit_binoculars_improved"):
				if (!WEAPON::_IS_WEAPON_BINOCULARS(func_96(Global_33, true, 0, false)))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, hParam0, false, 0, false, false);
			
				return 1;
		
			case 1259508039:
				func_84(true, 0);
				break;
		
			case 1401465909:
				UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("satchel"));
			
				if (SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() == joaat("satchel_ui_event_handler"))
					UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(1976336482, 1261159557);
				else
					UIAPPS::LAUNCH_UIAPP_BY_HASH(1976336482);
			
				if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(698150113) > 0)
				{
				}
				else
				{
					num.f_1 = hParam0;
					num.f_3 = !(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() != joaat("satchel_ui_event_handler"));
					unk10 = { num };
					TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "field_guide", 32);
					unk10.f_14 = 1024;
					func_69(unk10, 0);
				}
			
				return 1;
		
			case joaat("KIT_HANDHELD_CATALOG"):
				func_89();
				break;
		
			default:
				num2 = 0;
				break;
		}
	}

	if (flag)
		HUD::_0xBFFF81E12A745A5F();

	return num2;
}

BOOL func_31(int iParam0, BOOL bParam1) // Position - 0x1567 Signature - 22 02 09 00 00 66 01 6A
{
	int num;
	int gameTimer;
	float progress;
	int num2;
	int num3;

	if (bParam1 && !func_52(iParam0))
		return false;

	num = func_53(iParam0);

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

BOOL func_32(var uParam0) // Position - 0x1661 Signature - 22 01 03 00 00 66 00 76 09
{
	return func_99(*uParam0, 1);
}

BOOL func_33() // Position - 0x1671 Signature - 22 00 05 00 00 2F 37
{
	float disabledControlNormal;
	float disabledControlNormal2;
	float num;

	disabledControlNormal = PAD::GET_DISABLED_CONTROL_NORMAL(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"));
	disabledControlNormal2 = PAD::GET_DISABLED_CONTROL_NORMAL(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"));
	num = (disabledControlNormal * disabledControlNormal) + (disabledControlNormal2 * disabledControlNormal2);

	if (num >= 0.1f * 0.1f)
		return true;

	return false;
}

void func_34(var uParam0) // Position - 0x16B4 Signature - 22 01 03 00 00 66 00 73
{
	func_100(uParam0, 0f);
	return;
}

void func_35(var uParam0) // Position - 0x16C3 Signature - 22 01 03 00 00 73
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_36(var uParam0, float fParam1) // Position - 0x16D9 Signature - 22 02 04 00 00 66 00 66 01 39 A0
{
	if (func_101(uParam0, fParam1))
	{
		func_35(uParam0);
		return true;
	}

	return false;
}

void func_37(var uParam0) // Position - 0x16F7 Signature - 22 01 03 00 00 50 01 00 22 01 03 00 00 50 01 00 22 01 03 00 00 50
{
	return;
}

void func_38(var uParam0) // Position - 0x16FF Signature - 22 01 03 00 00 50 01 00 22 01 03 00 00 50 01 00 22 01 03 00 00 66
{
	return;
}

void func_39(var uParam0) // Position - 0x1707 Signature - 22 01 03 00 00 50 01 00 22 01 03 00 00 66
{
	return;
}

void func_40(BOOL bParam0) // Position - 0x170F Signature - 22 01 03 00 00 66 00 8B 05
{
	if (bParam0)
		func_102(4);

	func_102(2);
	MISC::SET_BIT(&(Global_1958634.f_1), 0);
	return;
}

BOOL func_41(Hash hParam0, int iParam1) // Position - 0x1731 Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 81
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_42(Hash hParam0) // Position - 0x174B Signature - 22 01 0A 00 00 66 00 2F 39 31 17 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 01 26 05 8B 04 00 2F 50 01 01 4B 03 27 02
{
	var unk;

	if (!func_41(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_2;
}

BOOL func_43(Hash hParam0, int iParam1) // Position - 0x1776 Signature - 22 02 16
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_41(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_103(hParam0, iParam1);
	unk.f_9 = -1591664384;

	if (func_104("ALL WEAPONS", &num, &num2, -1591664384, false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_105(&unk, i, num, num2))
			{
			}
			else if (!func_106(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_107(num);
				return true;
			}
		}
	
		func_107(num);
	}

	return false;
}

BOOL func_44(Hash hParam0) // Position - 0x181E Signature - 22 01 06 00 00 66 00 2F
{
	int num;
	int num2;
	int num3;

	if (!func_41(hParam0, 0))
		return false;

	num = func_75(hParam0);

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

	num2 = func_108(hParam0);

	if (!(num2 == 0))
	{
		num3 = func_109(&(Global_17418.f_55.f_664.f_1354.f_5), num2);
	
		if (num3 == -1)
			return true;
	}

	num2 = func_110(hParam0);
	num3 = func_109(&(Global_17418.f_55.f_664.f_1354.f_5), num2);

	if (num3 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num3 /*17*/];
}

int func_45(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x18DA Signature - 22 04 0D
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_41(hParam0, 0))
		return 0;

	num = func_42(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_103(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_111(hParam0, false);
	}

	if (func_112(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_113(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_114(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_113(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_46() // Position - 0x199C Signature - 22 00 02 00 00 85 00
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_48(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	return false;
}

struct<2> func_47(int iParam0) // Position - 0x19F4 Signature - 22 01 03 00 00 11
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_48(var uParam0, var uParam1) // Position - 0x1A08 Signature - 22 02 04 00 00 66 00 39 76
{
	if (!func_115(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_116(uParam0))
		return false;

	return true;
}

int func_49(var uParam0, var uParam1) // Position - 0x1A3C Signature - 22 02 04 00 00 66 00 50
{
	return uParam0;
}

BOOL func_50(int iParam0, int iParam1) // Position - 0x1A46 Signature - 22 02 04 00 00 66 00 2F 8A 04
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

void func_51(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x1A67 Signature - 22 1A
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
	func_117(iParam0, true);
	func_118(iParam0, true);
	func_119(iParam0, 128);
	return;
}

BOOL func_52(int iParam0) // Position - 0x1D81 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 6D
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

int func_53(int iParam0) // Position - 0x1DC0 Signature - 22 01 03 00 00 66 00 50 01 01 22 03
{
	return iParam0;
}

void func_54(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1DCA Signature - 22 03 06 00 00 66 01 6A
{
	int num;

	if (bParam1 && !func_52(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_53(*uParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_120(num);
	*uParam0 = 0;
	return;
}

BOOL func_55(Ped pedParam0) // Position - 0x1E1E Signature - 22 01 03 00 00 66 00 03 05 00 F9 8B 04 00 2F 50 01 01 66
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	return PED::IS_PED_ON_MOUNT(pedParam0);
}

void func_56() // Position - 0x1E39 Signature - 22 00 02 00 00 03 01 00 17
{
	Global_1913634.f_1583 = MISC::GET_GAME_TIMER();
	Global_1913634.f_1581 = 1;
	return;
}

BOOL func_57() // Position - 0x1E54 Signature - 22 00 02 00 00 5D 1C 9B 1D 27 27
{
	if (Global_1940252.f_39 == 3)
		return true;

	return false;
}

BOOL func_58(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1E6B Signature - 22 05 11
{
	int num;
	var unk;
	var unk6;

	if (!func_41(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	num = func_112(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_121(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk = { func_122(hParam0, bParam4, 0) };
	unk6 = { func_123(hParam0, unk, unk.f_4, bParam4) };
	return func_124(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

BOOL func_59(Hash hParam0, BOOL bParam1) // Position - 0x1EE3 Signature - 22 02 06 00 00 66 00 37
{
	BOOL flag;
	int num;

	flag = func_62(hParam0, 1816455607);

	if (!func_41(hParam0, 0))
		if (!flag)
			return false;

	if (Global_1940252.f_8)
		return false;

	if (hParam0 != 1259508039 && hParam0 != joaat("kit_camp") && hParam0 != joaat("kit_camp_simple") && bParam1)
	{
		num = func_125(hParam0);
	
		if (func_62(hParam0, 1147021565))
			num = num | 64;
	
		if (!func_126(true, num))
			return false;
	}

	if (hParam0 == -1448210800 || hParam0 == joaat("upgrade_upg_mortar_pestle"))
		if (func_127())
			return false;

	if (!flag && !func_15(hParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

BOOL func_60(Hash hParam0) // Position - 0x1FB5 Signature - 22 01 03 00 00 66 00 39 F0
{
	if (func_71(hParam0))
		return false;

	if (!INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_113(false), hParam0, func_128(false)))
		return false;

	switch (hParam0)
	{
		case joaat("kit_camp"):
		case joaat("kit_camp_simple"):
			func_22(1, 1);
			TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
			return true;
	
		case joaat("KIT_HANDHELD_CATALOG"):
			if (func_129() != -1)
			{
				func_74(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_129()), 10000, 0, 0, 0, true);
				func_131(-1);
			}
			break;
	}

	return true;
}

BOOL func_61(Hash hParam0) // Position - 0x2034 Signature - 22 01 13
{
	var unk;

	if (hParam0 == 17745825)
	{
		TEXT_LABEL_ASSIGN_STRING(&(unk.f_10), "legendary_animal_map", 32);
		unk.f_14 = 512;
		func_69(unk, 0);
		return true;
	}

	return false;
}

BOOL func_62(Hash hParam0, Hash hParam1) // Position - 0x2066 Signature - 22 02 04 00 00 66 00 2F 39 31 17 00 05 8B 0F
{
	if (!func_41(hParam0, 0))
		return func_133(func_132(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return true;

	return false;
}

void func_63(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, BOOL bParam28, int iParam29) // Position - 0x20A7 Signature - 22 1E
{
	return;
}

void func_64(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, BOOL bParam27, int iParam28) // Position - 0x20AF Signature - 22 1D
{
	return;
}

void func_65(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x20B7 Signature - 22 11 13
{
	return;
}

BOOL func_66(Hash hParam0) // Position - 0x20BF Signature - 22 01 03 00 00 39 30 07 00 2F
{
	if (func_14() == 0 && func_135(func_134(hParam0), true, false) != 0)
	{
		func_74("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, true);
		return false;
	}

	return true;
}

BOOL func_67(Hash hParam0) // Position - 0x20F8 Signature - 22 01 03 00 00 66 00 37 DE
{
	if (func_136(hParam0, 1120943070) == 1816455607)
	{
		func_137(0);
		func_139(func_138(hParam0));
		return true;
	}

	return false;
}

BOOL func_68(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2127 Signature - 22 04 06 00 00 66 00 66
{
	if (func_140(hParam0, bParam1, false, 0, -1082130432))
	{
		Global_1913443 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}

	switch (func_136(hParam0, -949239683))
	{
		case -1919515848:
			if (!bParam1)
			{
				func_154(hParam0);
				return true;
			}
			break;
	
		case -1915958659:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_143(hParam0);
				else
					func_148(hParam0);
			
				return true;
			}
			break;
	
		case -1337515701:
			if (!bParam1)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("pocket_watch_inspect_unholster"), 1, 0, -1082130432);
				return true;
			}
			break;
	
		case -1239610997:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 280850861, 1, 0, -1082130432);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 1087288635, 1, 0, 0f);
			
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
		
			Global_1913443 = MISC::GET_GAME_TIMER() + 3000;
			return true;
	
		case -809056541:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_143(hParam0);
				else
					func_151(hParam0);
			
				return true;
			}
			break;
	
		case -793205628:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 1834614641, 1, 0, -1082130432);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 136592566, 1, 0, 0f);
			
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
		
			Global_1913443 = MISC::GET_GAME_TIMER() + 3000;
			return true;
	
		case -273840653:
			if (!bParam1)
			{
				func_145(hParam0, true);
				return true;
			}
			break;
	
		case -262371497:
			if (!bParam1)
			{
				func_152(hParam0);
				return true;
			}
			break;
	
		case 89124942:
			if (!bParam1)
			{
				func_143(hParam0);
				return true;
			}
			break;
	
		case 238865292:
			if (!bParam1)
			{
				func_155(hParam0, bParam3);
				return true;
			}
			break;
	
		case 632545869:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, -268993254, 1, 0, -1082130432);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, -1401979141, 1, 0, 0f);
			
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
		
			Global_1913443 = MISC::GET_GAME_TIMER() + 3000;
			return true;
	
		case 845883585:
			if (!bParam1)
			{
				if (!func_141())
				{
					if (func_142(&Global_33))
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("apply_pomade_with_hat"), 1, 0, -1082130432);
					else
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("apply_pomade_with_no_hat"), 1, 0, -1082130432);
				
					return true;
				}
				else
				{
					func_74("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, true);
				}
			}
			break;
	
		case 881567935:
			if (!bParam1)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 1245009814, 1, 0, -1082130432);
				return true;
			}
			break;
	
		case 999632878:
			if (!bParam1)
			{
				func_146(hParam0, true);
				return true;
			}
			break;
	
		case 1130235258:
			if (!bParam1)
			{
				func_147(hParam0);
				return true;
			}
			break;
	
		case 1177617310:
			if (!bParam1)
			{
				func_156(hParam0, bParam3);
				return true;
			}
			break;
	
		case 1443104131:
			if (!bParam1)
			{
				func_153(hParam0);
				return true;
			}
			break;
	
		case 1451036371:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_143(hParam0);
				else
					func_144(hParam0);
			
				return true;
			}
			break;
	
		case 1859991422:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_143(hParam0);
				else
					func_149(hParam0);
			
				return true;
			}
			break;
	
		case 1891031775:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_143(hParam0);
				else
					func_150(hParam0);
			
				return true;
			}
			break;
	}

	return false;
}

void func_69(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) // Position - 0x2544 Signature - 22 11 14
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0.f_10)))
		return;

	if (Global_1939434.f_161 >= 10)
		return;

	if (!func_157(iParam16, 2))
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(uParam0.f_10))) > 0 || func_20(&(uParam0.f_10)))
			return;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939434[i /*16*/].f_10)))
		{
			Global_1939434[i /*16*/] = { uParam0 };
			Global_1939434.f_161 = Global_1939434.f_161 + 1;
			func_158(iParam16);
			return;
		}
	}

	return;
}

BOOL func_70() // Position - 0x25E0 Signature - 22 00 02 00 00 85 EB
{
	return Global_1893611 & 2 != 0;
}

BOOL func_71(Hash hParam0) // Position - 0x25F0 Signature - 22 01 03 00 00 66 00 2F 39 31 17 00 05 8B 04 00 2F 50 01 01 66 00 39
{
	if (!func_41(hParam0, 0))
		return false;

	if (func_42(hParam0) == joaat("emote"))
		return true;

	return false;
}

int func_72(var uParam0) // Position - 0x261A Signature - 22 01 03 00 00 66 00 39 B5
{
	return func_159(uParam0);
}

BOOL func_73(Hash hParam0) // Position - 0x2628 Signature - 22 01 03 00 00 66 00 2F 15 04
{
	if (hParam0 == 0)
		return false;

	if (func_42(hParam0) == joaat("CLOTHING"))
		func_75(hParam0) == -999503751;

	return true;
}

int func_74(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x2657 Signature - 22 06 18
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

int func_75(Hash hParam0) // Position - 0x2692 Signature - 22 01 0A 00 00 66 00 2F 39 31 17 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 01 26 05 8B 04 00 2F 50 01 01 4B 03 27 01
{
	var unk;

	if (!func_41(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_1;
}

BOOL func_76() // Position - 0x26BD Signature - 22 00 0B
{
	Player player;
	Ped mountOwnedByPlayer;
	Ped playerPed;
	Vector3 entityCoords;
	Vector3 entityCoords2;

	player = PLAYER::PLAYER_ID();
	mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(player);
	playerPed = PLAYER::GET_PLAYER_PED(player);

	if (!ENTITY::DOES_ENTITY_EXIST(mountOwnedByPlayer))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(mountOwnedByPlayer) || PED::IS_PED_INJURED(mountOwnedByPlayer))
		return 0;

	if (PED::IS_PED_SWIMMING(playerPed) || PED::IS_PED_SWIMMING(mountOwnedByPlayer))
		return 0;

	if (PED::IS_PED_ON_MOUNT(playerPed))
		if (PED::_GET_RIDER_OF_MOUNT(mountOwnedByPlayer, false) != playerPed)
			return 0;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(playerPed, false, false) };
	entityCoords2 = { ENTITY::GET_ENTITY_COORDS(mountOwnedByPlayer, false, false) };

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, true) < 2f && PED::IS_ANIMAL_INTERACTION_POSSIBLE(playerPed, mountOwnedByPlayer))
		return 1;

	return 0;
}

BOOL func_77(Player plParam0) // Position - 0x2770 Signature - 22 01 05 00 00 66 00 03
{
	Ped playerPed;
	Ped mountOwnedByPlayer;

	playerPed = PLAYER::GET_PLAYER_PED(plParam0);
	mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(plParam0);

	if (PED::IS_PED_ON_MOUNT(playerPed))
		if (PED::_GET_RIDER_OF_MOUNT(mountOwnedByPlayer, false) == playerPed)
			return true;

	return false;
}

void func_78(int iParam0, Hash hParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x27A2 Signature - 22 05 0B 00 00 66 04
{
	int num;

	if (bParam4)
		func_160(16384);

	num = iParam0;
	num.f_1 = hParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_161(num);
	return;
}

int func_79(Hash hParam0, BOOL bParam1) // Position - 0x27D4 Signature - 22 02 05 00 00 39 01
{
	int num;

	if (!func_162())
		return 0;

	if (!func_163(hParam0))
		return 0;

	if (func_164(hParam0))
	{
		num = 0;
	
		if (func_75(hParam0) == 81053684 || func_62(hParam0, 160827531) && !func_62(hParam0, -1303648999))
			if (bParam1)
				func_165(&num, 2);
	
		return func_166(hParam0, num);
	}

	return 0;
}

void func_80(Hash hParam0) // Position - 0x284B Signature - 22 01 05 00 00 6D
{
	int num;
	Hash hash;

	num = 10;
	hash = Global_1953292.f_1676.f_1[num /*3*/];

	if (hash == hParam0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayUnequipHatFidget", true, 15);
		func_81(Global_33, -2065815962, 0, -358215195, true, true, true, true, false, true, true, true);
		func_82(hParam0, false, false);
		return;
	}

	PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayEquipHatFidget", true, 15);
	func_81(Global_33, hParam0, 0, -358215195, true, true, true, true, false, true, true, true);

	if (func_167(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_33, false, true, false, true);
		func_168();
		func_160(128);
		return;
	}

	if (hash == Global_1953292.f_83[num /*12*/])
	{
		func_82(hParam0, true, false);
		return;
	}

	if (func_169(-2061583405, false))
	{
		if (func_170(hash))
			func_82(hash, false, false);
		else
			func_171(hash, true, true, false, false, false);
	
		func_82(hParam0, true, false);
		return;
	}

	if (func_170(hash))
	{
		func_82(hash, false, false);
		func_82(hParam0, true, false);
	}
	else if (func_170(hParam0))
	{
		if (hParam0 != func_172(0))
		{
			func_173(hParam0, hash, false, false, false);
			func_82(hParam0, false, false);
			func_82(hash, false, false);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_33, false, true, false, true);
			func_160(128);
			func_82(hParam0, true, false);
		}
	}

	return;
}

int func_81(Ped pedParam0, Hash hParam1, Hash hParam2, Hash hParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11) // Position - 0x29A1 Signature - 22 0C 14
{
	var unk;
	int num;

	if (hParam3 == -358215195)
	{
		unk = { func_122(hParam1, true, 0) };
		hParam3 = func_174(unk.f_4);
	
		if (hParam3 == -358215195)
			return 0;
	}

	if (!func_176(hParam1, hParam2, func_175(hParam3, 1), bParam4, true, false, true))
		return 0;

	func_177(true, bParam5, bParam9, true, bParam11);

	if (bParam10)
		if (func_178(hParam1, false))
			func_179(Global_1953292.f_1676.f_1[func_175(hParam3, 1) /*3*/], false, false);
		else
			func_179(hParam1, true, false);

	switch (hParam3)
	{
		case 1108822547:
			if (func_167(32768))
			{
				func_168();
				func_78(21, hParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam7 && hParam1 != Global_1953292.f_83[func_175(hParam3, 1) /*12*/])
				func_78(27, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
		return 1;

	num = func_180(hParam3);

	if (bParam4)
		num = num | 2;

	if (bParam8)
		func_181(&num, 4);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_78(19, 0, num, 0, false);
	}
	else
	{
		num = num | 1;
		func_78(19, 0, num, pedParam0, false);
	}

	return 1;
}

void func_82(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2AFA Signature - 22 03 0E 00 00 66 00 66 02 2F 39 BF 38 00 62 4B 05 06 66 00 42 4B 05 2D 4B 05 27 04 66 02 39 33 3C 00 42 4B 0A 06 66 00 42 4B 05 2D 4B 05 27 04 66 02 2F 2F 39 48 60 00 2F 23 03
{
	var unk;
	var guid;

	unk = { func_122(hParam0, bParam2, 0) };
	guid = { func_123(hParam0, unk, unk.f_4, bParam2) };

	if (func_182(hParam0, unk, unk.f_4, bParam2, false, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_113(bParam2), &guid, bParam1);
	return;
}

Hash func_83(int iParam0, BOOL bParam1) // Position - 0x2B4A Signature - 22 02 10
{
	int i;
	Hash hash;
	Hash hash2;
	var guid;
	Hash hash3;
	var unk4;

	hash2 = 0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &hash3))
		return 0;

	unk4 = { func_123(joaat("WARDROBE"), func_183(bParam1), 1034665895, bParam1) };

	for (i = 0; i < Global_1953292.f_3352.f_26; i = i + 1)
	{
		hash = Global_1953292.f_3352[i];
	
		if (func_75(hash) == iParam0 || iParam0 == 81053684 && func_62(hash, 160827531))
		{
			guid = { func_123(hash, unk4, hash3, bParam1) };
		
			if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IN_USE(func_113(bParam1), &guid))
			{
				hash2 = hash;
				INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_113(bParam1), &guid, false);
			}
		}
	}

	return hash2;
}

void func_84(BOOL bParam0, int iParam1) // Position - 0x2C05 Signature - 22 02 04 00 00 66 00 8B
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

BOOL func_85(int iParam0, Hash hParam1) // Position - 0x2C27 Signature - 22 02 05 00 00 66 00 39 67
{
	Ped mount;

	iParam0 = func_184(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	mount = func_87(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(mount))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(mount) || PED::IS_PED_INJURED(mount))
		return 0;

	if (PED::IS_PED_SWIMMING(Global_33) || PED::IS_PED_SWIMMING(mount))
		return 0;

	if (PED::IS_PED_ON_MOUNT(Global_33))
		if (PED::_GET_RIDER_OF_MOUNT(mount, false) == Global_33)
			if (hParam1 == joaat("kit_wardrobe"))
				return 0;
		else
			return 0;

	if (func_185(iParam0))
		return 1;

	return 0;
}

BOOL func_86(int iParam0) // Position - 0x2CCE Signature - 22 01 04 00 00 66 00 39 67 61 00 67 00 66 00 08 23
{
	Ped ped;

	iParam0 = func_184(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	ped = func_87(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
	{
		if (iParam0 == func_186())
			return true;
	
		return false;
	}

	if (ped == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

Ped func_87(int iParam0) // Position - 0x2D27 Signature - 22 01 03 00 00 66 00 39 67
{
	iParam0 = func_184(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1902887[iParam0 /*43*/];
}

BOOL func_88(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x2D53 Signature - 22 03 05 00 00 66 00 03 05 01 19 6A
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && !ENTITY::IS_ENTITY_DEAD(pedParam1))
			if (bParam2)
				return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true) && PED::GET_MOUNT(pedParam0) == pedParam1;
			else
				return PED::IS_PED_ON_MOUNT(pedParam0) && PED::GET_MOUNT(pedParam0) == pedParam1;

	return false;
}

void func_89() // Position - 0x2DBD Signature - 22 00 03 00 00 39
{
	int num;

	if (func_187())
		return;

	if (func_188(8))
	{
		switch (Global_1051832.f_3649)
		{
			case 0:
				if (func_188(16))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
					{
						PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Global_33);
						TASK::CLEAR_PED_TASKS(Global_33, true, false);
					}
				
					func_189(16);
				}
			
				func_190(1);
				break;
		
			case 1:
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
					break;
			
				func_189(8);
				func_190(0);
				break;
		}
	
		return;
	}

	if (func_191())
	{
		TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("KIT_HANDHELD_CATALOG"), joaat("MP_CATALOGUE_UNHOLSTER_S1"), 1, 0, -1082130432);
		Global_1915656.f_22504.f_1 = 1;
		Global_1051832.f_43 = 0;
		func_192();
	}
	else
	{
		num = func_194(func_193());
	
		if (num != -1)
		{
			func_74(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(num), 10000, 0, 0, 0, true);
			Global_1051832.f_3648 = 0;
			Global_1051832.f_3649 = 0;
			func_195(0);
			func_131(-1);
		}
	}

	return;
}

BOOL func_90(int iParam0, int iParam1) // Position - 0x2EB4 Signature - 22 02 05 00 00 39 14
{
	Any gangId;

	if (!func_196() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
		return false;

	if (!func_197(16))
		return false;

	if (func_198())
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
			return false;

	if (!func_199())
		return false;

	if (func_200(16))
		return false;

	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (iParam1 == 1 && !GANG::NETWORK_IS_GANG_ID_VALID(gangId) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		return false;

	if (iParam0 == 1 && func_201(Global_1147183.f_8, 1))
		return false;

	if (func_93())
		return false;

	return true;
}

int func_91(int iParam0, BOOL bParam1) // Position - 0x2F74 Signature - 22 02 04 00 00 66 01 8B 04 00 39 9C
{
	if (bParam1)
		func_202();

	if (!func_203(bParam1, bParam1, !bParam1))
		return 0;

	func_204(iParam0);
	Global_1896762.f_356 = 1;
	Global_1896762.f_357 = bParam1;
	return 1;
}

BOOL func_92(int iParam0) // Position - 0x2FB0 Signature - 22 01 03 00 00 5D 2F
{
	return func_201(Global_1147183.f_8, iParam0);
}

BOOL func_93() // Position - 0x2FC4 Signature - 22 00 03 00 00 03 01 00 DA 39
{
	int num;

	num = func_205(PLAYER::PLAYER_ID());

	if (num != -1)
		if (Global_1141332[num /*27*/].f_18.f_1 != 0 && func_201(Global_1141332[num /*27*/].f_18, 1))
			return true;

	return false;
}

void func_94() // Position - 0x3006 Signature - 22 00 05 00 00 2F 39
{
	int num;
	int num2;

	num = { func_47(0) };

	if (func_48(num))
	{
		if (num == 6)
		{
			num2 = func_206(PLAYER::PLAYER_ID(), false);
		
			if (num2 != -1)
				if (func_207(num2) == joaat("posse_versus"))
					func_74("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, true);
				else if (num2 == 1)
					func_74("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, true);
				else
					func_74("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, true);
		}
		else
		{
			func_74("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, true);
		}
	}

	return;
}

void func_95(Any anParam0) // Position - 0x3096 Signature - 22 01 16
{
	var unk;

	unk.f_12 = -1;
	unk.f_12.f_1 = -1;
	unk.f_14 = 255;
	unk.f_15 = 255;
	unk.f_6 = anParam0;
	unk.f_4 = 56;
	func_209(unk, func_208(0, 8), false, false);
	return;
}

Hash func_96(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x30DB Signature - 22 04 07 00 00 37
{
	Hash weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

void func_97(int iParam0, BOOL bParam1) // Position - 0x311D Signature - 22 02 06 00 00 66 00 4B
{
	int num;
	int num2;

	func_210(iParam0, &num, &num2);

	if (!func_211(iParam0, num, num2, bParam1))
		return;

	func_212(num, num2);
	return;
}

void func_98() // Position - 0x314A Signature - 22 00 03 00 00 37 64
{
	Player player;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(-741705372))
	{
		player = PLAYER::PLAYER_ID();
		func_213(1, player);
	}

	return;
}

BOOL func_99(int iParam0, int iParam1) // Position - 0x316B Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 02
{
	return iParam0 && iParam1 != false;
}

void func_100(var uParam0, float fParam1) // Position - 0x317A Signature - 22 02 04 00 00 39 7F
{
	uParam0->f_1 = func_214() - fParam1;
	func_215(uParam0, 1);
	func_216(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_101(var uParam0, float fParam1) // Position - 0x31A0 Signature - 22 02 04 00 00 66 00 39 61
{
	if (!func_32(uParam0))
		return false;

	if (func_217(uParam0) > fParam1)
		return true;

	return false;
}

void func_102(int iParam0) // Position - 0x31C7 Signature - 22 01 03 00 00 5D 27
{
	Global_1902887.f_302 = Global_1902887.f_302 || iParam0;
	return;
}

Hash func_103(Hash hParam0, int iParam1) // Position - 0x31E0 Signature - 22 02 07 00 00 66 00 2F
{
	int num;
	var unk;
	Hash hash;

	if (!func_41(hParam0, 0))
		return 0;

	num = func_42(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_62(hParam0, 1399091007))
	{
		func_218(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_104(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x325A Signature - 22 05 07 00 00 66 04
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_113(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_105(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x3281 Signature - 22 04 06 00 00 66 02 2F
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_106(Hash hParam0) // Position - 0x32BC Signature - 22 01 03 00 00 66 00 03 05 01 28
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_107(int iParam0) // Position - 0x32D7 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 03 05 01
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_108(Hash hParam0) // Position - 0x32F8 Signature - 22 01 03 00 00 66 00 3C 0F
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

int func_109(var uParam0, int iParam1) // Position - 0x33DB Signature - 22 02 05 00 00 2F 67 04 66 04 6D
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

int func_110(Hash hParam0) // Position - 0x3418 Signature - 22 01 04 00 00 66 00 39 92 26 00 67 03 66 03 3C
{
	int num;

	num = func_75(hParam0);

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

int func_111(Hash hParam0, BOOL bParam1) // Position - 0x3485 Signature - 22 02 18
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_219(hParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };

	if (bParam1)
		func_221(&unk, func_220(false));

	if (!func_222(&unk, &num, &num2, false))
		return 0;

	func_107(num);
	return num2;
}

int func_112(Hash hParam0, int iParam1) // Position - 0x34E4 Signature - 22 02 04 00 00 66 01 2F 15 04 00 2F 50 02 01 66 00 39
{
	if (iParam1 == 0)
		return 0;

	if (func_223(func_132(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, iParam1);
}

int func_113(BOOL bParam0) // Position - 0x3510 Signature - 22 01 03 00 00 39 30 07 00 08 15 17
{
	if (func_14() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_114(Hash hParam0, BOOL bParam1) // Position - 0x3551 Signature - 22 02 09 00 00 66 00 66
{
	var unk;

	unk = { func_122(hParam0, bParam1, 0) };
	return func_123(hParam0, unk, unk.f_4, bParam1);
}

BOOL func_115(int iParam0) // Position - 0x3576 Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 21
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

int func_116(int iParam0) // Position - 0x35B5 Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 2E
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

void func_117(int iParam0, BOOL bParam1) // Position - 0x364B Signature - 22 02 04 00 00 66 00 5D A6 C8 1D 63 17 27 03 03 05 01 22 8B 3F
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		if (Global_1951910[iParam0 /*23*/].f_5 == 5 && !func_50(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_118(int iParam0, BOOL bParam1) // Position - 0x36A3 Signature - 22 02 04 00 00 66 00 5D A6 C8 1D 63 17 27 03 03 05 01 22 8B 10
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_119(int iParam0, int iParam1) // Position - 0x36CC Signature - 22 02 04 00 00 66 00 2F 8A 03
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 || iParam1;
	return;
}

void func_120(int iParam0) // Position - 0x36F4 Signature - 22 01 03 00 00 66 00 39 F1
{
	if (!func_224(iParam0))
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

BOOL func_121(Hash hParam0, int iParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x37A7 Signature - 22 05 6A
{
	int num;
	var unk;
	int num2;
	int i;
	int num3;
	var unk62;
	int num4;

	if (func_225(hParam0))
		return 0;

	if (iParam1 <= 0)
		return 0;

	num = func_112(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	if (!func_226(bParam4))
	{
		unk = 10;
	
		if (num == 0)
			return 0;
	
		if (!func_227(&unk, &num2, hParam0, num, iParam1, true) || num2 < 1)
			return 0;
	
		num3 = -1;
		unk62.f_9 = 1;
		unk62.f_11 = -1591664384;
	
		for (i = 0; i < num2; i = i + 1)
		{
			unk62 = { func_228(hParam0, &unk[i /*6*/]) };
			unk62.f_12 = hParam2;
			num3 = func_229(joaat("use"), &unk62, true);
		
			if (num3 == -1)
				return 0;
		}
	
		if (num3 != -1)
		{
			num4.f_7 = -142743235;
			num4.f_16 = -1;
			num4 = iParam3;
			num4.f_7 = hParam2;
			func_230(num3, num4);
			return 1;
		}
	
		return 0;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_113(bParam4), hParam0, iParam1, hParam2))
		return 0;

	return 1;
}

struct<5> func_122(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x38BF Signature - 22 03 2F
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_183(bParam1) };
	unk.f_4 = 1084182731;
	num = func_42(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_235(hParam0, -1823706425))
			{
				unk = { func_123(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_235(hParam0, -1483207246))
			{
				unk = { func_123(joaat("WARDROBE"), unk, 1034665895, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_123(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1311702610))
			{
				unk.f_4 = -1311702610;
			}
			else if (func_235(hParam0, -1653629781))
			{
				unk = { func_123(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -1591664384;
			unk = { func_234(bParam1) };
		
			switch (func_75(hParam0))
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
			unk = { func_123(joaat("WARDROBE"), unk, 1034665895, bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_220(bParam1) };
		
			if (iParam2 && func_231(hParam0, true))
			{
				unk6.f_9 = -1591664384;
			
				if (!func_232(hParam0, &unk, 1728382685, false, false))
					unk.f_4 = 1728382685;
				else if (!func_232(hParam0, &unk, -649335959, false, false))
					unk.f_4 = -649335959;
				else if (func_233(hParam0, &unk6, 1728382685))
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
			
				if (!func_236(unk, &unk28, bParam1, false, -1))
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
			else if (func_235(hParam0, -1653629781))
			{
				unk = { func_123(1384535894, unk, 1784584921, bParam1) };
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

struct<4> func_123(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x3C33 Signature - 22 07 0D 00 00 66 00
{
	var outGuid;

	if (!func_41(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_113(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_124(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x3C64 Signature - 22 07 3A
{
	var unk;
	int num;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_225(hParam0))
		return false;

	unk.f_9 = -1591664384;

	if (!func_236(*panParam1, &unk, bParam6, false, -1))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_226(bParam6))
	{
		num = -1;
	
		if (unk.f_13)
		{
		}
		else if (func_14() == 0)
		{
			unk15.f_9 = 1;
			unk15.f_11 = -1591664384;
			unk15.f_8 = hParam0;
			unk15 = { *panParam1 };
			unk15.f_4 = { *uParam2 };
			unk15.f_11 = uParam2->f_4;
			unk15.f_9 = iParam3;
			unk15.f_12 = hParam4;
			num = func_229(joaat("use"), &unk15, true);
		
			if (num != -1)
			{
				num2.f_7 = -142743235;
				num2.f_16 = -1;
				num2 = iParam5;
				num2.f_7 = hParam4;
				func_230(num, num2);
			}
		}
	
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_113(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

int func_125(Hash hParam0) // Position - 0x3D82 Signature - 22 01 03 00 00 66 00 37 E5
{
	if (func_62(hParam0, 1573112293))
		return func_237(hParam0);

	if (func_62(hParam0, 1816455607))
		return func_238();

	if (func_239(hParam0))
		return func_240();

	switch (func_75(hParam0))
	{
		case -2101244071:
		case 664784405:
		case 874188557:
		case 2020212423:
			return func_249();
	
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_243();
	
		case -1823706425:
			if (hParam0 == -1115561122)
				return func_246();
			else
				return func_247();
			break;
	
		case -1520388130:
		case 1802292908:
			return func_242();
	
		case -1393202694:
		case 2041469314:
			return func_237(hParam0);
	
		case -854348463:
			return func_248();
	
		case -525676072:
			return func_243();
	
		case -77448735:
			if (func_241(hParam0))
				return func_237(hParam0);
			break;
	
		case 1779021115:
			if (hParam0 == joaat("weapon_kit_camera") || hParam0 == 332793555)
				return func_244();
		
			return func_245();
	
		default:
			if (func_41(hParam0, 0))
				if (func_62(hParam0, 1919582297))
					return func_250();
				else if (hParam0 == joaat("upgrade_upg_mortar_pestle") || hParam0 == -1448210800)
					return func_251();
				else if (hParam0 == joaat("kit_horse_brush"))
					return func_252();
				else if (func_62(hParam0, 1147021565))
					return func_253();
		
			return func_254();
	}

	return func_254();
}

BOOL func_126(BOOL bParam0, int iParam1) // Position - 0x3F49 Signature - 22 02 05 00 00 5D
{
	Ped mount;

	if (Global_1940199.f_6 || PED::IS_PED_DEAD_OR_DYING(Global_33, true) || ENTITY::IS_ENTITY_DEAD(Global_33))
		return false;

	if (func_14() == 0)
		if (func_255(131072))
			return false;

	if (!func_256(iParam1, 1))
		if (func_255(1024))
			return false;

	if (Global_1940199.f_16)
		return false;

	if (!func_256(iParam1, 2) && func_255(32))
		return false;

	if (!func_256(iParam1, 4))
		if (func_255(4096))
			return false;

	if (!func_256(iParam1, 8) && func_255(512))
		return false;

	if (!func_256(iParam1, 512) && !func_257(bParam0))
		return false;

	if (!func_256(iParam1, 262144) && !func_258(bParam0, func_256(iParam1, 524288)))
		return false;

	if (!func_256(iParam1, 64) && !func_259(bParam0, iParam1, true))
		return false;

	if (!func_256(iParam1, 128))
	{
		if (func_260(Global_33, SCRIPT_TASK_MOUNT_ANIMAL) || PED::IS_PED_ON_MOUNT(Global_33))
		{
			if (bParam0)
				func_74("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (!func_256(iParam1, 16))
	{
		if (func_261(Global_33))
		{
			mount = PED::GET_MOUNT(Global_33);
		
			if (!func_262(mount, true))
			{
				if (bParam0)
					func_74("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, true);
			
				return false;
			}
		}
	}

	if (!func_256(iParam1, 256) && func_255(8192))
		return false;

	if (!func_256(iParam1, 1024) && func_255(65536))
	{
		if (bParam0)
			func_74("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!func_256(iParam1, 2048))
		if (func_255(32768))
			return false;

	if (!func_256(iParam1, 4096))
		if (func_255(16384))
			return false;

	if (!func_256(iParam1, 8192))
		if (!func_255(16))
			return false;

	if (!func_256(iParam1, 67108864))
		if (!func_255(268435456))
			return false;

	if (!func_256(iParam1, 16384))
		if (func_255(256))
			return false;

	if (!func_256(iParam1, 32768))
	{
		if (func_26())
		{
			if (bParam0)
				func_74("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (!func_256(iParam1, 131072))
		if (!func_255(524288))
			return false;

	if (!func_256(iParam1, 65536))
		if (!func_255(262144))
			return false;

	if (!func_256(iParam1, 1048576))
		if (!func_255(2097152))
			return false;

	if (!func_256(iParam1, 2097152))
		if (!func_255(8388608))
			return false;

	if (!func_256(iParam1, 4194304))
		if (!func_255(16777216))
			return false;

	if (!func_256(iParam1, 8388608))
		if (func_255(33554432))
			return false;

	if (!func_256(iParam1, 16777216))
		if (func_255(67108864))
			return false;

	if (!func_256(iParam1, 33554432))
		if (func_255(134217728))
			return false;

	if (func_255(64))
		return false;
	else if (func_255(128))
		return false;
	else if (func_255(1048576))
		return false;
	else if (func_255(4))
		return false;

	if (!func_256(iParam1, 134217728))
		if (func_263(256))
			return false;

	if (!func_256(iParam1, 268435456))
		if (func_255(536870912))
			return false;

	if (!func_256(iParam1, 536870912))
		if (func_255(1073741824))
			return false;

	return true;
}

BOOL func_127() // Position - 0x4386 Signature - 22 00 04 00 00 70 21 00 03 05 01
{
	int scenarioPointTypePedIsUsing;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return false;

	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
	{
		scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33);
		num = scenarioPointTypePedIsUsing;
	
		if (num != joaat("world_player_dynamic_kneel") && num != joaat("WORLD_PLAYER_MP_STEW_POT_DONATION"))
			return true;
	}

	return false;
}

BOOL func_128(BOOL bParam0) // Position - 0x43D1 Signature - 22 01 03 00 00 66 00 8B 0D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

int func_129() // Position - 0x4401 Signature - 22 00 02 00 00 5D 08 3B 1D 18 E8 57 27 05
{
	return Global_1915656.f_22504.f_5;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x4412 Signature - 22 01 06 00 00 66 00 3C
{
	var unk;
	int num;

	switch (iParam0)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
	
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
	
		case 3:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
	
		case 4:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
	
		case 5:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
	
		case 6:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
	
		case 7:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
	
		case 8:
			return "SHOPS_HANDHELD_FAIL_SHOPS_DISABLED_THIS_FRAME";
	
		case 9:
			return "SHOPS_HANDHELD_FAIL_WAIT_FOR_FREEROAM";
	
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
	
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
	
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
	
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_USING_TURRET";
	
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
	
		case 16:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
	
		case 17:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
	
		case 18:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
	
		case 19:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
	
		case 20:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
	
		case 21:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BRUSHING";
	
		case 22:
			return "SHOPS_HANDHELD_FAIL_IN_DEEP_WATER";
	
		case 23:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME";
	
		case 24:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ARCHERY";
	
		case 25:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CHALLENGE";
	
		case 26:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_DEAD_DROP";
	
		case 27:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_GOLDEN_SHOWDOWN";
	
		case 28:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_HOT_PROPERTY";
	
		case 29:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_CASTLE";
	
		case 30:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_RAILS";
	
		case 31:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WRECKAGE";
	
		case 32:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CONDOR_EGG";
	
		case 33:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ANIMAL_TAGGING";
	
		case 34:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WILDLIFE_PHOTOGRAPHER";
	
		case 35:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_PROTECT_LEGENDARY_ANIMAL";
	
		case 36:
			return "SHOPS_HANDHELD_FAIL_MISSION_FEUD";
	
		case 37:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV";
	
		case 38:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HUNT_THE_POSSE_LEADER";
	
		case 39:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_BIGGEST_FISH";
	
		case 40:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_FLYING_BIRD";
	
		case 41:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HERBALIST";
	
		case 42:
			return "SHOPS_HANDHELD_FAIL_PLAYER_MATCHMAKING";
	
		case 46:
			unk = -1;
			unk.f_1 = -1;
			unk = { func_47(0) };
		
			if (!func_48(unk))
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		
			num = func_264(&unk, 1);
		
			if (num == -1)
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		
			if (!func_265(num, 461218520, true))
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		
			return func_267(func_266(num, 461218520));
	}

	return "";
}

void func_131(int iParam0) // Position - 0x46AC Signature - 22 01 03 00 00 66 00 5D 08
{
	Global_1915656.f_22504.f_5 = iParam0;
	return;
}

Hash func_132(Hash hParam0) // Position - 0x46BF Signature - 22 01 03 00 00 66 00 50 01 01 22 02
{
	return hParam0;
}

BOOL func_133(Hash hParam0, Hash hParam1) // Position - 0x46C9 Signature - 22 02 04 00 00 66 00 11 39
{
	if (!func_223(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

int func_134(Hash hParam0) // Position - 0x46FF Signature - 22 01 04 00 00 2F 67 03 66 03 6D 31
{
	int i;

	for (i = 0; i <= 49; i = i + 1)
	{
		if (func_268(i, hParam0))
			return i;
	}

	return -1;
}

int func_135(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x472B Signature - 22 03 05 00 00 66 00 39 60 76
{
	if (!func_269(iParam0))
		return 1;

	if (!func_270(iParam0))
		return 5;

	if (!bParam1 && Global_1220826.f_48[iParam0 /*21*/].f_17)
		if (bParam2 || Global_1220826.f_1.f_20 != 0)
			return 2;

	if (!bParam2 && !func_271(iParam0))
		return 3;

	if (func_272(iParam0) && !func_273())
		return 4;

	return 0;
}

int func_136(Hash hParam0, int iParam1) // Position - 0x47AD Signature - 22 02 2F
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

void func_137(int iParam0) // Position - 0x47F7 Signature - 22 01 03 00 00 66 00 5D 1C 9B 1D 8C 4F
{
	Global_1940252.f_11599 = iParam0;
	return;
}

Hash func_138(Hash hParam0) // Position - 0x4808 Signature - 22 01 03 00 00 66 00 2F 39 31 17 00 05 8B 04 00 2F 50 01 01 66 00 03
{
	if (!func_41(hParam0, 0))
		return 0;

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_DESCRIPTION_HASH(hParam0);
}

void func_139(Hash hParam0) // Position - 0x4825 Signature - 22 01 03 00 00 66 00 5D 1C 9B 1D 8C 55
{
	Global_1940252.f_11605 = hParam0;
	return;
}

BOOL func_140(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0x4836 Signature - 22 05 08 00 00 66 00
{
	Hash interactionAnimHash;

	switch (func_136(hParam0, -949239683))
	{
		case -1565009253:
			if (!bParam1)
			{
				interactionAnimHash = 1254219723;
			
				if (bParam2)
					interactionAnimHash = -2077441721;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -1420737577:
			if (!bParam1)
			{
				interactionAnimHash = 2129866661;
			
				if (bParam2)
					interactionAnimHash = 1607869040;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -1273369295:
			if (!bParam1)
			{
				interactionAnimHash = -27851152;
			
				if (bParam2)
					interactionAnimHash = -1340223099;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -1229959999:
			if (!bParam1)
			{
				interactionAnimHash = 1159762194;
			
				if (bParam2)
					interactionAnimHash = -1791047090;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -1050374492:
			if (!bParam1)
			{
				interactionAnimHash = 343713021;
			
				if (bParam2)
					interactionAnimHash = 760057945;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -873135685:
			if (!bParam1)
			{
				interactionAnimHash = -1418730365;
			
				if (bParam2)
					interactionAnimHash = -1570312122;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -164980960:
			if (!bParam1)
			{
				interactionAnimHash = -138141811;
			
				if (bParam2)
					interactionAnimHash = 2000759837;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 10252101:
			if (!bParam1)
			{
				interactionAnimHash = -1246302402;
			
				if (bParam2)
					interactionAnimHash = -1791047090;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 24248412:
			if (!bParam1)
			{
				interactionAnimHash = 1014486005;
			
				if (bParam2)
					interactionAnimHash = 416212934;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 82200319:
			if (!bParam1)
			{
				interactionAnimHash = joaat("DOCUMENT_INSPECT@NEWSPAPER_INTRO");
			
				if (bParam2)
					interactionAnimHash = joaat("DOCUMENT_INSPECT@NEWSPAPER_BASE");
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 733893097:
			if (!bParam1)
			{
				interactionAnimHash = 436157482;
			
				if (bParam2)
					interactionAnimHash = 1972630951;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 871191033:
			if (!bParam1)
			{
				interactionAnimHash = joaat("DOCUMENT_INSPECT@Paper_D2_H32_Rolled_INTRO");
			
				if (bParam2)
					interactionAnimHash = joaat("DOCUMENT_INSPECT@Paper_D2_H32_Rolled_BASE");
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 1513351077:
			if (!bParam1)
			{
				interactionAnimHash = 889797228;
			
				if (bParam2)
					interactionAnimHash = -1043439814;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 1712126263:
			if (!bParam1)
			{
				interactionAnimHash = 1589555562;
			
				if (bParam2)
					interactionAnimHash = -1424266966;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 1894156335:
			if (!bParam1)
			{
				interactionAnimHash = 1801769345;
			
				if (bParam2)
					interactionAnimHash = 374699583;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	}

	return false;
}

BOOL func_141() // Position - 0x4B89 Signature - 22 00 02 00 00 09 5D
{
	return Global_1953292.f_1676.f_1[1 /*3*/].f_1 == joaat("pomade");
}

BOOL func_142(Ped pedParam0) // Position - 0x4BA5 Signature - 22 01 03 00 00 66 00 76 03
{
	if (!ENTITY::DOES_ENTITY_EXIST(*pedParam0) || ENTITY::IS_ENTITY_DEAD(*pedParam0))
		return false;

	if (func_274(*pedParam0, joaat("HATS"), false))
		return true;

	return false;
}

void func_143(Hash hParam0) // Position - 0x4BDE Signature - 22 01 04 00 00 37 F1
{
	Hash hash;

	hash = joaat("use_handfull_satchel_left_hand_quick");

	switch (func_275())
	{
		case 0:
			hash = joaat("use_handfull_satchel_left_hand_quick");
			break;
	
		case 1:
			hash = joaat("use_handfull_satchel_unarmed_quick");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_handfull_satchel_rifle_quick");
			break;
	}

	if (hash != 0)
	{
		if (func_62(hParam0, 1573112293))
			func_277(func_276(hParam0), true, 1);
	
		func_278(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_279(hParam0);
		func_280(hParam0, 1, false, 562618531);
	}

	return;
}

void func_144(Hash hParam0) // Position - 0x4C78 Signature - 22 01 04 00 00 37 69
{
	Hash hash;

	hash = 16939881;

	switch (func_275())
	{
		case 0:
			hash = 16939881;
			break;
	
		case 1:
			hash = -1165614444;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = 968591133;
			break;
	}

	if (hash != 0)
	{
		func_278(Global_33, hParam0, hash, 1, false);
	}
	else
	{
		func_279(hParam0);
		func_280(hParam0, 1, false, 562618531);
	}

	return;
}

void func_145(Hash hParam0, BOOL bParam1) // Position - 0x4CF8 Signature - 22 02 05 00 00 37 47
{
	Hash hash;

	hash = -45077177;

	switch (func_275())
	{
		case 0:
			if (bParam1)
				hash = -2137817968;
			else
				hash = -45077177;
			break;
	
		case 1:
			if (bParam1)
				hash = -1947358597;
			else
				hash = 36807409;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			if (bParam1)
				hash = -750686877;
			else
				hash = 1293288723;
			break;
	}

	if (hash != 0)
	{
		func_278(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_279(hParam0);
		func_280(hParam0, 1, false, 562618531);
	}

	return;
}

void func_146(Hash hParam0, BOOL bParam1) // Position - 0x4DA5 Signature - 22 02 05 00 00 37 40
{
	Hash hash;

	hash = 1700817728;

	switch (func_275())
	{
		case 0:
			if (bParam1)
				hash = -447623645;
			else
				hash = 1700817728;
			break;
	
		case 1:
			if (bParam1)
				hash = 1880532390;
			else
				hash = -480771797;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			if (bParam1)
				hash = 468890170;
			else
				hash = 764367205;
			break;
	}

	if (hash != 0)
	{
		func_278(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_279(hParam0);
		func_280(hParam0, 1, false, 562618531);
	}

	return;
}

void func_147(Hash hParam0) // Position - 0x4E52 Signature - 22 01 04 00 00 37 7A
{
	Hash hash;

	hash = joaat("use_large_bottle_combat_left_hand");

	switch (func_275())
	{
		case 0:
			hash = joaat("use_large_bottle_combat_left_hand");
			break;
	
		case 1:
			hash = joaat("use_large_bottle_combat_right_hand");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_large_bottle_combat_rifle");
			break;
	}

	if (hash != 0)
	{
		func_278(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_279(hParam0);
		func_280(hParam0, 1, false, 562618531);
	}

	return;
}

void func_148(Hash hParam0) // Position - 0x4ED2 Signature - 22 01 04 00 00 37 4D
{
	Hash hash;

	hash = 2105609037;

	switch (func_275())
	{
		case 0:
			hash = 2105609037;
			break;
	
		case 1:
			hash = -1595716047;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = -457187977;
			break;
	}

	if (hash != 0)
	{
		func_278(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_279(hParam0);
		func_280(hParam0, 1, false, 562618531);
	}

	return;
}

void func_149(Hash hParam0) // Position - 0x4F52 Signature - 22 01 04 00 00 37 12
{
	Hash hash;

	hash = 1964324114;

	switch (func_275())
	{
		case 0:
			hash = 1964324114;
			break;
	
		case 1:
			hash = 1826089606;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = -654111932;
			break;
	}

	if (hash != 0)
	{
		func_278(Global_33, hParam0, hash, 1, false);
	}
	else
	{
		func_279(hParam0);
		func_280(hParam0, 1, false, 562618531);
	}

	return;
}

void func_150(Hash hParam0) // Position - 0x4FD2 Signature - 22 01 04 00 00 37 2B
{
	Hash hash;

	hash = -1530144981;

	switch (func_275())
	{
		case 0:
			hash = -1530144981;
			break;
	
		case 1:
			hash = -312546963;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = -389189374;
			break;
	}

	if (hash != 0)
	{
		func_278(Global_33, hParam0, hash, 1, false);
	}
	else
	{
		func_279(hParam0);
		func_280(hParam0, 1, false, 562618531);
	}

	return;
}

void func_151(Hash hParam0) // Position - 0x5052 Signature - 22 01 04 00 00 37 DC
{
	Hash hash;

	hash = -1074475556;

	switch (func_275())
	{
		case 0:
			hash = -1074475556;
			break;
	
		case 1:
			hash = -1846586910;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = 392506445;
			break;
	}

	if (hash != 0)
	{
		func_278(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_279(hParam0);
		func_280(hParam0, 1, false, 562618531);
	}

	return;
}

void func_152(Hash hParam0) // Position - 0x50D2 Signature - 22 01 04 00 00 37 E0
{
	Hash hash;

	hash = joaat("use_stimulant_injection_quick_left_hand");

	switch (func_275())
	{
		case 0:
			hash = joaat("use_stimulant_injection_quick_left_hand");
			break;
	
		case 1:
			hash = joaat("use_stimulant_injection_quick_right_hand");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_stimulant_injection_quick_left_hand_rifle");
			break;
	}

	if (hash != 0)
	{
		func_278(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_279(hParam0);
		func_280(hParam0, 1, false, 562618531);
	}

	return;
}

void func_153(Hash hParam0) // Position - 0x5152 Signature - 22 01 04 00 00 37 6C
{
	Hash hash;

	hash = joaat("quick_smoke_cigarette_left_hand");

	switch (func_275())
	{
		case 0:
			hash = joaat("quick_smoke_cigarette_left_hand");
			break;
	
		case 1:
			hash = joaat("quick_smoke_cigarette_right_hand");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("quick_smoke_cigarette_rifle");
			break;
	}

	if (hash != 0)
	{
		func_278(Global_33, hParam0, hash, 1, false);
	}
	else
	{
		func_279(hParam0);
		func_280(hParam0, 1, false, 562618531);
	}

	return;
}

void func_154(Hash hParam0) // Position - 0x51D2 Signature - 22 01 04 00 00 37 C9
{
	Hash hash;

	hash = joaat("quick_smoke_cigar_left_hand");

	switch (func_275())
	{
		case 0:
			hash = joaat("quick_smoke_cigar_left_hand");
			break;
	
		case 1:
			hash = joaat("quick_smoke_cigar_right_hand");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("quick_smoke_cigar_rifle");
			break;
	}

	if (hash != 0)
	{
		func_278(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_279(hParam0);
		func_280(hParam0, 1, false, 562618531);
	}

	return;
}

void func_155(Hash hParam0, BOOL bParam1) // Position - 0x5252 Signature - 22 02 05 00 00 37 0B
{
	Hash hash;

	hash = joaat("use_tonic_satchel_left_hand_quick");

	switch (func_275())
	{
		case 0:
			hash = joaat("use_tonic_satchel_left_hand_quick");
			break;
	
		case 1:
			hash = joaat("use_tonic_satchel_unarmed_quick");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_tonic_satchel_rifle_quick");
			break;
	}

	if (hash != 0)
	{
		if (!func_278(Global_33, hParam0, hash, 1, 0) && bParam1)
		{
			func_279(hParam0);
			func_280(hParam0, 1, false, 562618531);
		}
	}
	else
	{
		func_279(hParam0);
		func_280(hParam0, 1, false, 562618531);
	}

	return;
}

void func_156(Hash hParam0, BOOL bParam1) // Position - 0x52F0 Signature - 22 02 05 00 00 37 07
{
	Hash hash;

	hash = joaat("use_tonic_potent_satchel_left_hand_quick");

	switch (func_275())
	{
		case 0:
			hash = joaat("use_tonic_potent_satchel_left_hand_quick");
			break;
	
		case 1:
			hash = joaat("use_tonic_potent_satchel_unarmed_quick");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_tonic_potent_satchel_rifle_quick");
			break;
	}

	if (hash != 0)
	{
		if (!func_278(Global_33, hParam0, hash, 1, bParam1) && bParam1)
		{
			func_279(hParam0);
			func_280(hParam0, 1, false, 562618531);
		}
	}
	else
	{
		func_279(hParam0);
		func_280(hParam0, 1, false, 562618531);
	}

	return;
}

BOOL func_157(int iParam0, int iParam1) // Position - 0x538F Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 01 03 00 00 66
{
	return iParam0 && iParam1 != false;
}

void func_158(int iParam0) // Position - 0x539E Signature - 22 01 03 00 00 66 00 09 39 8F
{
	if (func_157(iParam0, 1))
		func_281(1);

	return;
}

int func_159(int iParam0) // Position - 0x53B5 Signature - 22 01 03 00 00 66 00 3C 04 00 00
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		case 2:
			return 0;
	
		case 3:
			return 3;
	
		default:
		
	}

	return -1;
}

void func_160(BOOL bParam0) // Position - 0x53F2 Signature - 22 01 03 00 00 85 0C CE 1D 66 00 30
{
	Global_1953292 = Global_1953292 || bParam0;
	return;
}

void func_161(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x5405 Signature - 22 04 08 00 00 66 00
{
	int i;
	int num;

	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
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
		case 20:
		case 21:
		case 22:
		case 23:
			if (Global_1953292.f_918 >= 25)
				return;
		
			if (func_282(iParam0))
			{
				for (i = 0; i < Global_1953292.f_918; i = i + 1)
				{
					num = (Global_1953292.f_923 + i) % 25;
				
					if (Global_1953292.f_736[num /*4*/] == iParam0 && Global_1953292.f_736[num /*4*/].f_1 == iParam0.f_1 && Global_1953292.f_736[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_283(iParam0);
			Global_1953292.f_736[Global_1953292.f_924 /*4*/] = { iParam0 };
			Global_1953292.f_918 = Global_1953292.f_918 + 1;
			Global_1953292.f_924 = (Global_1953292.f_924 + 1) % 25;
			func_160(8);
			break;
	
		case 24:
		case 25:
			if (Global_1953292.f_919 >= 25)
				return;
		
			if (func_282(iParam0))
				return;
		
			func_283(iParam0);
			Global_1953292.f_635[Global_1953292.f_919 /*4*/] = { iParam0 };
			Global_1953292.f_919 = Global_1953292.f_919 + 1;
			func_160(8);
			break;
	
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1953292.f_920 >= 20)
				return;
		
			if (func_282(iParam0))
			{
				for (i = 0; i < Global_1953292.f_920; i = i + 1)
				{
					num = (Global_1953292.f_921 + i) % 20;
				
					if (Global_1953292.f_837[num /*4*/] == iParam0 && Global_1953292.f_837[num /*4*/].f_1 == iParam0.f_1 && Global_1953292.f_837[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			if (iParam0 == 34)
			{
				Global_1953292.f_930 = 1;
				Global_1953292.f_930.f_1 = iParam0.f_2;
				Global_1953292.f_930.f_2 = iParam0.f_3;
			}
		
			func_283(iParam0);
			Global_1953292.f_837[Global_1953292.f_922 /*4*/] = { iParam0 };
			Global_1953292.f_920 = Global_1953292.f_920 + 1;
			Global_1953292.f_922 = (Global_1953292.f_922 + 1) % 20;
			func_160(8);
			break;
	}

	return;
}

BOOL func_162() // Position - 0x5701 Signature - 22 00 02 00 00 5D 0C CE 1D 78 AE
{
	return Global_1953292.f_3502;
}

BOOL func_163(Hash hParam0) // Position - 0x5710 Signature - 22 01 03 00 00 39 46
{
	if (func_284())
		return false;

	if (!func_41(hParam0, 0))
		return false;

	if (!func_15(hParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

BOOL func_164(Hash hParam0) // Position - 0x5746 Signature - 22 01 03 00 00 66 00 39 90 81
{
	return func_285(hParam0);
}

void func_165(var uParam0, int iParam1) // Position - 0x5754 Signature - 22 02 04 00 00 66 00 66 01 39 E0
{
	func_286(uParam0, iParam1);
	return;
}

int func_166(Hash hParam0, int iParam1) // Position - 0x5764 Signature - 22 02 08 00 00 66 00 39
{
	Hash interactionAnimHash;
	BOOL flag;
	Hash hash;
	BOOL flag2;

	flag2 = func_287(hParam0);

	if (func_75(hParam0) == -525676072 || func_62(hParam0, -1303648999))
		flag = true;

	if (flag2)
		if (func_288(&hash))
			if (flag)
				interactionAnimHash = func_289();
			else
				interactionAnimHash = func_290();
		else if (flag)
			interactionAnimHash = func_291();
		else
			interactionAnimHash = func_292();
	else if (func_293(&hash))
		if (func_62(hash, -1303648999) || func_75(hash) == -525676072)
			interactionAnimHash = func_289();
		else
			interactionAnimHash = func_290();
	else if (flag)
		interactionAnimHash = func_291();
	else
		interactionAnimHash = func_292();

	if (interactionAnimHash != 0)
	{
		Global_1953292.f_3501 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_33, hParam0, interactionAnimHash, 1, iParam1, -1082130432);
		return 1;
	}

	return 0;
}

BOOL func_167(BOOL bParam0) // Position - 0x584B Signature - 22 01 03 00 00 85 0C CE 1D 66 00 69
{
	return Global_1953292 && bParam0 != false;
}

void func_168() // Position - 0x585C Signature - 22 00 02 00 00 2F 5D 0C CE 1D 8C 9D
{
	Global_1953292.f_3485 = 0;
	Global_1953292.f_3485.f_1 = 0;
	Global_1953292.f_3485.f_8 = 0;
	Global_1953292.f_3485.f_2 = 0;
	Global_1953292.f_3485.f_3[0] = 0;
	Global_1953292.f_3485.f_3[1] = 0;
	Global_1953292.f_3485.f_3[2] = 0;
	Global_1953292.f_3485.f_3[3] = 0;
	Global_1953292.f_3485.f_9 = 0;
	Global_1953292.f_3485.f_10 = 0;
	Global_1953292.f_3485.f_11 = 0;

	if (Global_1953292.f_3485.f_12)
		PED::_RELEASE_META_PED_ASSET_REQUEST(Global_1953292.f_3485.f_13);

	Global_1953292.f_3485.f_12 = 0;
	func_294(32768);
	func_295(1108822547, 8, 6);
	return;
}

BOOL func_169(int iParam0, BOOL bParam1) // Position - 0x5913 Signature - 22 02 04 00 00 66 00 2F 39 58
{
	return func_296(iParam0, false) < func_297(iParam0, bParam1);
}

BOOL func_170(Hash hParam0) // Position - 0x592B Signature - 22 01 04 00 00 66 00 4B 03 39
{
	var unk;

	return func_298(hParam0, &unk);
}

void func_171(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x593B Signature - 22 06 0A
{
	int num;
	BOOL flag;

	num = func_75(hParam0);
	flag = false;

	switch (num)
	{
		case -2061583405:
			if (func_62(hParam0, 1584357097))
				return;
		
			flag = func_299(hParam0, &(Global_1953292.f_3352.f_28), Global_1953292.f_3352.f_33.f_1, bParam1, bParam5);
			break;
	
		case -1719060085:
			flag = func_299(hParam0, &(Global_1953292.f_3352.f_31), 1, bParam1, bParam5);
			break;
	
		case -999503751:
			flag = func_299(hParam0, &(Global_1953292.f_3352.f_27), Global_1953292.f_3352.f_33, bParam1, bParam5);
			break;
	
		case -525676072:
			flag = func_299(hParam0, &(Global_1953292.f_3352.f_29), Global_1953292.f_3352.f_33.f_2, bParam1, bParam5);
			break;
	
		case 81053684:
			flag = func_299(hParam0, &(Global_1953292.f_3352.f_30), 1, bParam1, bParam5);
			break;
	
		case 119907797:
			flag = func_299(hParam0, &(Global_1953292.f_3352.f_32), 1, bParam1, bParam5);
			break;
	
		case 1388798186:
			flag = func_299(hParam0, &(Global_1953292.f_3352.f_33.f_7), 1, bParam1, bParam5);
			break;
	
		default:
			if (func_62(hParam0, 160827531))
				flag = func_299(hParam0, &(Global_1953292.f_3352.f_30), 1, bParam1, bParam5);
			break;
	}

	if (!flag)
		return;

	func_300();

	if (func_301(num) || num != -999503751 && func_62(hParam0, -166674229))
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_113(bParam5), hParam0, 0);

	func_82(hParam0, bParam3, bParam5);

	if (bParam4)
		func_302(true, hParam0);

	if (bParam2)
		func_303(false, false);

	return;
}

Hash func_172(int iParam0) // Position - 0x5AE7 Signature - 22 01 03 00 00 66 00 2F 15 06 00 39 E0 88 00 67 00 66 00 37 61
{
	if (iParam0 == 0)
		iParam0 = func_304();

	if (iParam0 == 1160113249)
		return joaat("clothing_p3_player_three_ms1_hat_000_000");

	return joaat("clothing_item_hat_pzero_000");
}

void func_173(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5B12 Signature - 22 05 07 00 00 66 00 66 01 39
{
	if (func_305(hParam0, hParam1))
	{
		func_306(hParam0, hParam1, true, bParam2, bParam3, bParam4);
		return;
	}

	return;
}

Hash func_174(var uParam0) // Position - 0x5B37 Signature - 22 01 04 00 00 2F 67 03 66 03 6D 27
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1953292.f_83[i /*12*/].f_9 == uParam0)
			return func_307(i, 1);
	}

	return -358215195;
}

int func_175(Hash hParam0, int iParam1) // Position - 0x5B72 Signature - 22 02 04 00 00 66 00 3C 28 00 ED
{
	switch (hParam0)
	{
		case -1944638739:
			return 36;
	
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
	
		case -1884748965:
			return 32;
	
		case -1586649372:
			return 33;
	
		case -1505978566:
			return 22;
	
		case -1489346253:
			return 38;
	
		case -1364808185:
			return 19;
	
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
	
		case -1197751823:
			return 20;
	
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
	
		case -1130865351:
			return 31;
	
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
	
		case -893163968:
			return 17;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
	
		case -450913544:
			return 18;
	
		case -426430150:
			return 29;
	
		case -358215195:
			return 39;
	
		case -338487716:
			return 11;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
	
		case 304805134:
			return 21;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
	
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
	
		case 735520874:
			return 5;
	
		case 788010710:
			return 34;
	
		case 1108822547:
			return 10;
	
		case 1145151482:
			return 23;
	
		case 1250092473:
			return 16;
	
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
	
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
	
		case 1600962399:
			return 13;
	
		case 1672288269:
			return 15;
	
		case 1742327865:
			return 12;
	
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
	
		case 1788623170:
			return 30;
	
		case 1849504272:
			return 14;
	
		case 1900541263:
			return 37;
	
		case 1958421083:
			return 35;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_176(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x5D43 Signature - 22 07 10
{
	var unk;
	int num;
	int i;

	func_308();

	if (iParam2 == 39)
	{
		unk = { func_122(hParam0, true, 0) };
		iParam2 = func_175(func_174(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_167(32768) && iParam2 == 10)
		func_309(1108822547);

	num = 0;

	if (bParam4)
		num = 3;

	if (func_178(hParam0, true))
		func_310(&(Global_1953292.f_1557), &hParam0, iParam2, bParam5);

	if (bParam6)
		func_311(iParam2);

	func_312(iParam2, num);
	func_313(&Global_1953292.f_1557.f_1[iParam2 /*3*/], 4, 6);
	func_313(&Global_1953292.f_1676.f_1[iParam2 /*3*/], 4, 6);
	func_314(&(Global_1953292.f_1557), hParam0, iParam2, true, num);

	if (hParam1 == 0)
		hParam1 = Global_1953292.f_1557.f_1[iParam2 /*3*/].f_1;

	Global_1953292.f_1557.f_1[iParam2 /*3*/] = hParam0;
	Global_1953292.f_1557.f_1[iParam2 /*3*/].f_1 = func_315(hParam0, iParam2, hParam1);

	if (bParam3)
	{
		for (i = 0; i < Global_1953292.f_2938; i = i + 1)
		{
			if (Global_1953292.f_2938.f_2[i /*2*/] >= 0 && Global_1953292.f_2938.f_2[i /*2*/] < 39)
			{
				Global_1953292.f_2765[Global_1953292.f_2938.f_2[i /*2*/] /*2*/] = 0;
				Global_1953292.f_2765[Global_1953292.f_2938.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_295(func_307(Global_1953292.f_2938.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_177(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5EE2 Signature - 22 05 07 00 00 5D
{
	func_316(&(Global_1953292.f_2938), bParam0, bParam1, bParam2, bParam3, bParam4);
	return;
}

BOOL func_178(Hash hParam0, BOOL bParam1) // Position - 0x5EFF Signature - 22 02 04 00 00 66 00 2F 39 31 17 00 05 8B 00
{
	!func_41(hParam0, 0);

	if (!bParam1 && hParam0 == joaat("clothing_item_hair_none") || hParam0 == joaat("clothing_item_beard_none"))
		return false;

	if (func_62(hParam0, 265372629))
		return true;

	return false;
}

BOOL func_179(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5F4A Signature - 22 03 0F
{
	var unk;
	var unk5;
	Hash hash;

	unk5 = { func_122(hParam0, bParam2, 0) };

	if (func_178(hParam0, false))
	{
		hash = func_317(unk5, unk5.f_4, bParam2, -1);
	
		if (hash != 0)
		{
			unk5 = { func_122(hash, bParam2, 0) };
			unk = { func_123(hash, unk5, unk5.f_4, bParam2) };
			return func_318(unk, false, bParam2);
		}
	
		return true;
	}

	unk = { func_123(hParam0, unk5, unk5.f_4, bParam2) };
	return func_318(unk, bParam1, bParam2);
}

int func_180(Hash hParam0) // Position - 0x5FD3 Signature - 22 01 05 00 00 2F 67
{
	int num;
	int num2;

	num = 0;
	num2 = func_175(hParam0, 1);

	switch (hParam0)
	{
		case 1108822547:
			if (Global_1953292.f_1676.f_1[num2 /*3*/] == Global_1953292.f_83[num2 /*12*/] || Global_1953292.f_1557.f_1[num2 /*3*/] == Global_1953292.f_83[num2 /*12*/])
				num = 48;
			break;
	}

	return num;
}

void func_181(var uParam0, int iParam1) // Position - 0x6037 Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 09
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

int func_182(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x6048 Signature - 22 09 10 00 00 66 00
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_41(hParam0, 0))
		return 0;

	if (!bParam7 && func_112(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_123(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_113(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_113(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

struct<4> func_183(BOOL bParam0) // Position - 0x60C7 Signature - 22 01 04 00 00 5D 17 00 18 27 0E
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_113(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_123(joaat("character"), func_319(), -1591664384, bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_123(joaat("character"), func_319(), -1591664384, false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_123(joaat("character"), func_319(), -1591664384, bParam0);
}

int func_184(int iParam0) // Position - 0x6167 Signature - 22 01 03 00 00 66 00 0D
{
	if (iParam0 == 7)
		return Global_38.f_289;

	return iParam0;
}

BOOL func_185(int iParam0) // Position - 0x6180 Signature - 22 01 04 00 00 66 00 39 67 61 00 67 00 66 00 08 15
{
	Ped ped;

	iParam0 = func_184(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	ped = func_87(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return false;

	if (func_320(ped))
		return true;

	return false;
}

int func_186() // Position - 0x61E1 Signature - 22 00 02 00 00 87
{
	return Global_38.f_289.f_3222;
}

BOOL func_187() // Position - 0x61F2 Signature - 22 00 02 00 00 5D 08 3B 1D 18 E8 57 27 01
{
	return Global_1915656.f_22504.f_1;
}

BOOL func_188(int iParam0) // Position - 0x6203 Signature - 22 01 03 00 00 5D B8 0C 10 78 40 0E 66 00 69
{
	return Global_1051832.f_3648 && iParam0 != false;
}

void func_189(int iParam0) // Position - 0x6217 Signature - 22 01 03 00 00 5D B8 0C 10 78 40 0E 5D
{
	Global_1051832.f_3648 = Global_1051832.f_3648 - Global_1051832.f_3648 && iParam0;
	return;
}

void func_190(int iParam0) // Position - 0x6238 Signature - 22 01 03 00 00 66 00 5D B8
{
	Global_1051832.f_3649 = iParam0;
	return;
}

BOOL func_191() // Position - 0x6249 Signature - 22 00 02 00 00 5D 08 3B 1D 78 E8
{
	return Global_1915656.f_22504;
}

void func_192() // Position - 0x6258 Signature - 22 00 02 00 00 42 37
{
	PAD::_SET_CONTROL_CONTEXT(4, joaat("HandheldCatalogue"));
	return;
}

BOOL func_193() // Position - 0x626A Signature - 22 00 02 00 00 42 39
{
	return func_188(4);
}

int func_194(BOOL bParam0) // Position - 0x6277 Signature - 22 01 07 00 00 39
{
	Player playerIndex;
	Vehicle vehiclePedIsUsing;
	Hash entityModel;
	int scenarioPointTypePedIsUsing;

	if (!func_321())
		return 3;

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pause_menu")) > 0 && Global_1051832.f_3650 == 0 && !bParam0)
		return 45;

	if (Global_1915656.f_20638)
		return 10;

	if (Global_1051832.f_3738 != 0)
		return 0;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (PLAYER::IS_PLAYER_DEAD(playerIndex))
		return 12;

	if (func_322(1106247680, 0) || PED::IS_PED_HOGTIED(Global_33) || PED::IS_PED_HOGTYING(Global_33))
		return 13;

	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_33) || PED::IS_PED_IN_ANY_TRAIN(Global_33))
	{
		vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_33);
	
		if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsUsing))
		{
			entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing);
		
			switch (entityModel)
			{
				case joaat("breach_cannon"):
				case joaat("gatling_gun"):
				case joaat("gatlingmaxim02"):
				case joaat("hotchkiss_cannon"):
					return 14;
			}
		}
	
		return 11;
	}

	if (TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33) && !Global_1915656.f_22504.f_1)
		return 16;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
		return 17;

	if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != 0)
		return 18;

	if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33);
	
		if (scenarioPointTypePedIsUsing != joaat("world_player_dynamic_kneel") && scenarioPointTypePedIsUsing != joaat("prop_player_dynamic_seat_chair_table") && scenarioPointTypePedIsUsing != joaat("prop_player_seat_chair_dynamic"))
			return 19;
	}

	if (func_323(255))
		return 3;

	if (MISC::IS_MINIGAME_IN_PROGRESS())
		return 44;

	if (Global_1108965.f_775.f_28 != -1 && Global_1108965.f_775.f_28 != 6 && Global_1108965.f_775.f_28 != 8)
		if (func_324(Global_1108965.f_775.f_28))
			return 36;
		else
			return 37;

	if (PED::_GET_PLAYER_PED_WATER_DEPTH(Global_33) >= 1f)
		return 22;

	if (Global_1572887.f_72.f_40 >= 11 && Global_1572887.f_72.f_40 < 15)
		return 42;

	if (PED::IS_PED_FALLING(Global_33) || PED::IS_PED_CLIMBING(Global_33) || PED::_IS_PED_SLIDING(Global_33) || PED::IS_PED_SWIMMING(Global_33))
		return 15;

	if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_33))
		return 21;

	if (func_325())
		return 43;

	return -1;
}

void func_195(int iParam0) // Position - 0x64D6 Signature - 22 01 04 00 00 39
{
	int num;

	if (!func_193())
		func_326(true);

	Global_1051832.f_3650 = iParam0;
	num = func_194(true);

	if (num != -1)
	{
		func_131(num);
		func_327(false);
	}
	else
	{
		func_327(true);
	}

	return;
}

BOOL func_196() // Position - 0x6514 Signature - 22 00 02 00 00 5D 17 00 18 27 0E 08
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_3;
}

BOOL func_197(int iParam0) // Position - 0x6530 Signature - 22 01 03 00 00 03 01 00 0C
{
	return func_201(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

BOOL func_198() // Position - 0x654A Signature - 22 00 02 00 00 03 01 00 35
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_199() // Position - 0x655E Signature - 22 00 02 00 00 11 39
{
	return !func_197(2);
}

BOOL func_200(int iParam0) // Position - 0x656C Signature - 22 01 03 00 00 5D 17 00 18 27 0E 08 15 04 00 2F 50 01 01 5D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && iParam0 != false;
}

BOOL func_201(int iParam0, int iParam1) // Position - 0x658D Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 00
{
	return iParam0 && iParam1 != false;
}

void func_202() // Position - 0x659C Signature - 22 00 02 00 00 03 01 00 EC
{
	if (!UIAPPS::IS_ANY_UIAPP_RUNNING())
		return;

	UIAPPS::_CLOSE_ALL_UIAPPS();
	return;
}

BOOL func_203(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x65B3 Signature - 22 03 06 00 00 66 02 39
{
	BOOL flag;

	flag = func_329(bParam2, func_328(), true, false, true, true, true, bParam0, bParam1);

	if (!flag)
		return false;

	return true;
}

void func_204(int iParam0) // Position - 0x65DB Signature - 22 01 03 00 00 66 00 5D 3A
{
	Global_1896762.f_365 = iParam0;
	return;
}

int func_205(Player plParam0) // Position - 0x65EC Signature - 22 01 04 00 00 66 00 67 03 66
{
	Player player;

	player = plParam0;

	if (player >= 0 && player < 32)
		return Global_1144526[player /*83*/].f_38.f_3;

	return -1;
}

int func_206(Player plParam0, BOOL bParam1) // Position - 0x661C Signature - 22 02 06 00 00 66 00 03 05 00
{
	Player player;
	int i;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
	{
		player = plParam0;
	
		for (i = 0; i <= 7; i = i + 1)
		{
			if (Global_1205938.f_1[i /*26*/].f_1 != -1 && func_330(i, 64, player))
				if (bParam1)
					if (Global_1206497.f_78[i /*20*/] >= 2)
						return Global_1205938.f_1[i /*26*/].f_1;
				else if (Global_1206497.f_78[i /*20*/] >= 5)
					return Global_1205938.f_1[i /*26*/].f_1;
		}
	}

	return -1;
}

int func_207(int iParam0) // Position - 0x66A6 Signature - 22 01 03 00 00 66 00 08 15 04 00 2F
{
	if (iParam0 == -1)
		return 0;

	return Global_1206497.f_1[iParam0 /*4*/];
}

var func_208(int iParam0, int iParam1) // Position - 0x66C2 Signature - 22 02 04 00 00 73
{
	return func_331(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

void func_209(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, BOOL bParam20, BOOL bParam21) // Position - 0x66E0 Signature - 22 16 2D
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
				func_332(&(Global_1072759.f_22981), unk);
				return;
			}
		}
	}

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam0, 19, 5, &uParam19);
	return;
}

void func_210(int iParam0, var uParam1, var uParam2) // Position - 0x677A Signature - 22 03 06 00 00 66 00 67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_211(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x6796 Signature - 22 04 06 00 00 66 01 2F
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_333(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_334(iParam0))
		return false;

	if (func_335(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_336(iParam0, 1) || func_337(32768))
		if (!func_336(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_338())
		return false;

	return true;
}

void func_212(int iParam0, int iParam1) // Position - 0x6838 Signature - 22 02 05 00 00 66 00 5D
{
	var address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

void func_213(int iParam0, Player plParam1) // Position - 0x685C Signature - 22 02 05 00 00 66 01 67
{
	Player player;

	player = plParam1;
	Global_1148185[player /*10*/].f_7 = Global_1148185[player /*10*/].f_7 || iParam0;
	return;
}

float func_214() // Position - 0x687F Signature - 22 00 03 00 00 03 01 00 75
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_215(var uParam0, int iParam1) // Position - 0x68B1 Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 02
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_216(var uParam0, int iParam1) // Position - 0x68C2 Signature - 22 02 04 00 00 66 00 76 66 00
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

float func_217(var uParam0) // Position - 0x68D7 Signature - 22 01 03 00 00 66 00 39 61 16
{
	if (!func_32(uParam0))
		return uParam0->f_1;

	if (func_339(uParam0))
		return uParam0->f_2;

	return func_214() - uParam0->f_1;
}

void func_218(Hash hParam0, var uParam1, var uParam2) // Position - 0x690C Signature - 22 03 05 00 00 2F
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

struct<18> func_219(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x6B18 Signature - 22 07 1B
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

struct<4> func_220(BOOL bParam0) // Position - 0x6BF6 Signature - 22 01 04 00 00 66 00 39 10 35 00 67 03 66 03 11 15
{
	int num;

	num = func_113(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_123(923904168, func_183(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_123(923904168, func_183(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_123(923904168, func_183(bParam0), -740156546, false);
}

void func_221(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x6C97 Signature - 22 05 07 00 00 4B
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_222(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x6CB2 Signature - 22 04 06 00 00 66 03
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_113(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_223(Hash hParam0, int iParam1) // Position - 0x6CD7 Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 CD
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

BOOL func_224(int iParam0) // Position - 0x6CF1 Signature - 22 01 03 00 00 66 00 11 39
{
	return func_50(iParam0, 2);
}

BOOL func_225(Hash hParam0) // Position - 0x6D00 Signature - 22 01 03 00 00 66 00 03 05 00 6D
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_226(BOOL bParam0) // Position - 0x6D16 Signature - 22 01 03 00 00 39 30 07 00 08 15 04
{
	if (func_14() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_113(bParam0));
}

BOOL func_227(Any anParam0, var uParam1, Hash hParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x6D34 Signature - 22 06 08 00 00 2F
{
	*uParam1 = 0;

	if (iParam4 < 1)
		return false;
	else if (*anParam0 != 10)
		return false;

	if (iParam3 == 0)
	{
		iParam3 = func_112(hParam2, joaat("DEFAULT"));
	
		if (iParam3 == 0)
			return false;
	}

	if (!NETSHOPPING::_0xD1555FBC96C88444(hParam2, iParam3, iParam4, anParam0, 10))
		return false;

	if (!func_340(anParam0, uParam1, iParam4, bParam5))
		return false;

	return true;
}

struct<17> func_228(Hash hParam0, var uParam1) // Position - 0x6DA1 Signature - 22 02 15 00 00 4B 04 6A 80 09 09 3D 41 6A 80 0B 37 00 21 21 A1 3D 41 41 66
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = -1591664384;
	unk = { func_123(hParam0, *uParam1, uParam1->f_4, true) };
	unk.f_4 = { *uParam1 };
	unk.f_8 = hParam0;
	unk.f_9 = uParam1->f_5;
	unk.f_11 = uParam1->f_4;
	return unk;
}

int func_229(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x6DF4 Signature - 22 03 06 00 00 66 00 2F 15 04 00 08 50 03 01 66 00 66 01 39 B8 9B 00 05 8B 04 00 08 50 03 01 08 67 05 66 02 8B 28 00 4B 05 37 61 48 7D 2A 66 00 03 0D 01 5F 8B 15 00 66 05 66 00 66 01 39 8E
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_341(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_343(func_342(num, hParam0, panParam1), num, panParam1);
	else
		return func_344(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

void func_230(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x6E5E Signature - 22 12
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

int func_231(Hash hParam0, BOOL bParam1) // Position - 0x6EDC Signature - 22 02 04 00 00 66 00 39 92
{
	if (func_75(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_345();
		else
			return 1;

	return 0;
}

BOOL func_232(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x6F13 Signature - 22 05 07 00 00 66 00 42
{
	return func_182(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_233(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x6F2E Signature - 22 03 09 00 00 66 00
{
	var unk;

	if (func_346(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_234(BOOL bParam0) // Position - 0x6F4F Signature - 22 01 04 00 00 66 00 39 10 35 00 67 03 66 03 11 0B
{
	int num;

	num = func_113(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_123(271701509, func_183(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_123(271701509, func_183(bParam0), 12999093, false);
}

BOOL func_235(Hash hParam0, int iParam1) // Position - 0x6FB9 Signature - 22 02 08 00 00 66 00 2F
{
	Hash hash;
	int num;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || iParam1 == 0)
		return false;

	num = func_75(hParam0);

	if (num == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(num);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(num, i, &hash))
			if (func_347(hParam0, iParam1, hash))
				return true;
	}

	return false;
}

BOOL func_236(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x7026 Signature - 22 08 0A 00 00 4B 00 66
{
	return func_348(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

int func_237(Hash hParam0) // Position - 0x703C Signature - 22 01 03 00 00 66 00 2F 39 31 17 00 8B
{
	if (func_41(hParam0, 0))
	{
		if (func_62(hParam0, -1242251796))
		{
			if (func_62(hParam0, 2060589226))
				return func_349();
		
			return func_350();
		}
		else if (func_62(hParam0, 1919582297))
		{
			return func_250();
		}
		else if (func_62(hParam0, 1647670816))
		{
			return func_351();
		}
		else if (func_62(hParam0, 1147021565))
		{
			return func_253();
		}
	}

	if (Global_1940085.f_12)
		return func_350();
	else
		return func_253();

	return func_253();
}

int func_238() // Position - 0x70DE Signature - 22 00 02 00 00 37 16
{
	return 225949718;
}

BOOL func_239(Hash hParam0) // Position - 0x70EB Signature - 22 01 03 00 00 66 00 37 35
{
	return hParam0 == 1401465909 || hParam0 == joaat("kit_collectors_bag");
}

int func_240() // Position - 0x7109 Signature - 22 00 02 00 00 37 80 E8
{
	return 1039657088;
}

BOOL func_241(Hash hParam0) // Position - 0x7116 Signature - 22 01 03 00 00 66 00 37 FD
{
	if (func_62(hParam0, 1147021565) || func_62(hParam0, -136654233) || func_62(hParam0, -524514947) || func_62(hParam0, -1238310989) || func_62(hParam0, 1765172170) || func_62(hParam0, 1490540191) || func_62(hParam0, 1573112293) || func_62(hParam0, -1242251796) || func_62(hParam0, 1919582297) || func_62(hParam0, -2085281117) || hParam0 == joaat("consumable_offal"))
		return true;

	return false;
}

int func_242() // Position - 0x71D8 Signature - 22 00 02 00 00 37 80 E0 F3
{
	return 1039392896;
}

int func_243() // Position - 0x71E5 Signature - 22 00 02 00 00 37 F5
{
	return 1039645941;
}

int func_244() // Position - 0x71F2 Signature - 22 00 02 00 00 37 C8
{
	return 1039907016;
}

int func_245() // Position - 0x71FF Signature - 22 00 02 00 00 37 90
{
	return 1039902864;
}

int func_246() // Position - 0x720C Signature - 22 00 02 00 00 37 94
{
	return 955497620;
}

int func_247() // Position - 0x7219 Signature - 22 00 02 00 00 37 F7 9F
{
	return 1022861303;
}

int func_248() // Position - 0x7226 Signature - 22 00 02 00 00 37 00
{
	return 1039902720;
}

int func_249() // Position - 0x7233 Signature - 22 00 02 00 00 37 FF
{
	return 972554239;
}

int func_250() // Position - 0x7240 Signature - 22 00 02 00 00 37 07
{
	return 905165831;
}

int func_251() // Position - 0x724D Signature - 22 00 02 00 00 37 84
{
	return 1038298244;
}

int func_252() // Position - 0x725A Signature - 22 00 02 00 00 37 E7
{
	return 1037713383;
}

int func_253() // Position - 0x7267 Signature - 22 00 02 00 00 37 D7 BC F7
{
	return 1039645911;
}

int func_254() // Position - 0x7274 Signature - 22 00 02 00 00 37 80 E0 F7
{
	return 1039655040;
}

BOOL func_255(int iParam0) // Position - 0x7281 Signature - 22 01 03 00 00 5D 75
{
	return func_201(Global_1940085.f_7, iParam0);
}

BOOL func_256(int iParam0, int iParam1) // Position - 0x7295 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 01 04
{
	return iParam0 && iParam1 != false;
}

BOOL func_257(BOOL bParam0) // Position - 0x72A4 Signature - 22 01 04 00 00 09
{
	Entity entity;

	if (func_255(1))
	{
		if (bParam0)
			func_74("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_255(2) && MISC::GET_GAME_TIMER() >= Global_17395)
	{
		if (bParam0)
		{
			entity = func_352(Global_33);
		
			if (entity != 0)
			{
				if (ENTITY::GET_IS_ANIMAL(entity))
				{
					func_74("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, true);
					return false;
				}
			}
		
			func_74("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, true);
		}
	
		return false;
	}

	if (func_255(4194304))
		return false;

	return true;
}

BOOL func_258(BOOL bParam0, BOOL bParam1) // Position - 0x7337 Signature - 22 02 06 00 00 70
{
	var unk;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		PED::_0x6B67320E0D57856A(Global_33, &unk, 2, false);
	
		if (bParam1)
		{
			switch (unk.f_1)
			{
				case 4:
					return true;
			
				default:
				
			}
		}
	
		if (bParam0)
			func_74("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_259(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x7387 Signature - 22 03 07 00 00 70
{
	Vehicle vehiclePedIsUsing;
	Hash entityModel;

	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_33))
	{
		return false;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_33, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
			return false;
	
		vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_33);
		entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing);
	
		switch (entityModel)
		{
			case joaat("breach_cannon"):
			case joaat("gatling_gun"):
			case joaat("gatlingmaxim02"):
			case joaat("hotchkiss_cannon"):
				if (bParam0)
					func_74("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, true);
			
				return false;
		
			case joaat("rowboat"):
			case joaat("handcart"):
				if (bParam0)
					func_74("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, true);
			
				return false;
		}
	
		if (!func_256(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_33))
			if (bParam2 || VEHICLE::GET_DRIVER_OF_VEHICLE(vehiclePedIsUsing) == Global_33)
				return false;
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_33))
	{
		return false;
	}

	return true;
}

BOOL func_260(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x7474 Signature - 22 02 04 00 00 66 00 03
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

BOOL func_261(Ped pedParam0) // Position - 0x74CD Signature - 22 01 03 00 00 66 00 03 05 00 54
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true);

	return false;
}

BOOL func_262(Ped pedParam0, BOOL bParam1) // Position - 0x74EA Signature - 22 02 06 00 00 66 01 8B
{
	float entitySpeed;
	float num;

	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
			return false;
	
		if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
			return false;
	}

	entitySpeed = ENTITY::GET_ENTITY_SPEED(pedParam0);
	num = PED::_0xCA95924C893A0C91(pedParam0, entitySpeed);

	if (num <= 1.5f)
		return true;

	return false;
}

BOOL func_263(int iParam0) // Position - 0x7540 Signature - 22 01 03 00 00 85 13
{
	return Global_1958675 && iParam0 != false;
}

int func_264(var uParam0, int iParam1) // Position - 0x7551 Signature - 22 02 0A
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (!func_48(*uParam0))
		return -1;

	num = -1;
	num6 = func_353(*uParam0);

	switch (*uParam0)
	{
		case 3:
			num4 = func_356(num6);
			num5 = func_357(num4);
		
			if (num5 == -1)
			{
			}
			else
			{
				num = func_358(num5);
			}
			break;
	
		case 4:
			num3 = num6;
			num2 = func_354(num3);
		
			if (num2 == -1)
			{
			}
			else
			{
				num = func_355(num2);
			}
			break;
	
		default:
			break;
	}

	return num;
}

BOOL func_265(int iParam0, int iParam1, BOOL bParam2) // Position - 0x75D4 Signature - 22 03 05 00 00 66 00 66 01 66 02 39
{
	return !MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(func_267(func_359(iParam0, iParam1, bParam2)));
}

struct<8> func_266(int iParam0, int iParam1) // Position - 0x75EF Signature - 22 02 04 00 00 66 00 66 01 09
{
	return func_359(iParam0, iParam1, true);
}

char* func_267(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x7600 Signature - 22 08 0A 00 00 4B 00 4B
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

BOOL func_268(int iParam0, Hash hParam1) // Position - 0x7614 Signature - 22 02 05 00 00 2F 67 04 66 04 09
{
	int i;

	for (i = 0; i <= 1; i = i + 1)
	{
		if (Global_1220826.f_48[iParam0 /*21*/].f_18[i] != 0 && Global_1220826.f_48[iParam0 /*21*/].f_18[i] == hParam1)
			return true;
	}

	return false;
}

BOOL func_269(int iParam0) // Position - 0x7660 Signature - 22 01 03 00 00 66 00 2F 7E
{
	return iParam0 >= 0 && iParam0 < 50;
}

BOOL func_270(int iParam0) // Position - 0x7676 Signature - 22 01 06 00 00 87
{
	float num;
	int i;
	int j;

	if (Global_17418.f_2992 == 1)
	{
		if (iParam0 == -1)
			return false;
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (Global_17418.f_2992.f_1[i /*5*/].f_4 == 0)
			{
			}
			else if (_IS_NULL_VECTOR(Global_17418.f_2992.f_1[i /*5*/].f_1))
			{
			}
			else
			{
				for (j = 0; j <= 3; j = j + 1)
				{
					if (_IS_NULL_VECTOR(Global_1220826.f_48[iParam0 /*21*/][j /*4*/].f_1))
					{
					}
					else
					{
						num = func_361(Global_17418.f_2992.f_1[i /*5*/].f_1, Global_1220826.f_48[iParam0 /*21*/][j /*4*/].f_1);
					
						if (num < 300f)
							return false;
					}
				}
			}
		}
	}

	if (func_362(4))
		return false;

	if (func_273())
		return true;

	if (func_363())
		return false;

	if (func_364(1, 255))
		return false;

	if (func_48(func_365()) && Global_1220826.f_1.f_20 != 3)
		return false;

	return true;
}

BOOL func_271(int iParam0) // Position - 0x7787 Signature - 22 01 04 00 00 2F 67 03 66 03 09 23 3C
{
	int i;

	for (i = 0; i <= 1; i = i + 1)
	{
		if (Global_1220826.f_48[iParam0 /*21*/].f_18[i] != 0 && func_15(Global_1220826.f_48[iParam0 /*21*/].f_18[i], 1))
			return true;
	}

	return false;
}

BOOL func_272(int iParam0) // Position - 0x77D5 Signature - 22 01 04 00 00 2F 67 03 66 03 09 23 3B
{
	int i;

	for (i = 0; i <= 1; i = i + 1)
	{
		if (Global_1220826.f_48[iParam0 /*21*/].f_18[i] != 0 && func_366(Global_1220826.f_48[iParam0 /*21*/].f_18[i]))
			return true;
	}

	return false;
}

BOOL func_273() // Position - 0x7822 Signature - 22 00 02 00 00 2F 39 F4
{
	return func_367(func_47(0));
}

BOOL func_274(Ped pedParam0, Hash hParam1, BOOL bParam2) // Position - 0x7833 Signature - 22 03 05 00 00 66 02 05
{
	if (!bParam2)
		if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
			return false;

	return PED::_IS_META_PED_USING_COMPONENT(pedParam0, hParam1);
}

int func_275() // Position - 0x7857 Signature - 22 00 04 00 00 70 21 00 03 05 00
{
	Hash weaponHash;
	int weaponHash2;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
		return 1;

	WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &weaponHash, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &weaponHash2, true, 1, false);

	if (weaponHash2 == joaat("WEAPON_UNARMED"))
		if (weaponHash == joaat("WEAPON_UNARMED"))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) && !func_368(weaponHash) && !PED::IS_PED_FULLY_ON_MOUNT(Global_33, true) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_33, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
			return 3;
		else if (WEAPON::_IS_WEAPON_BINOCULARS(weaponHash))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && func_368(weaponHash) || WEAPON::_IS_WEAPON_LASSO(weaponHash))
			return 1;
		else
			return 0;
	else if (weaponHash == joaat("WEAPON_UNARMED"))
		return 1;
	else
		return 0;

	return 0;
}

int func_276(Hash hParam0) // Position - 0x794A Signature - 22 01 03 00 00 66 00 3C 23
{
	switch (hParam0)
	{
		case joaat("consumable_herb_common_bulrush"):
			return 11;
	
		case joaat("consumable_herb_oleander_sage"):
			return 27;
	
		case joaat("consumable_herb_parasol_mushroom"):
			return 29;
	
		case joaat("consumable_herb_black_berry"):
			return 5;
	
		case joaat("provision_wldflwr_cardinal_flower"):
			return 44;
	
		case joaat("consumable_herb_sage"):
			return 35;
	
		case joaat("provision_wldflwr_creek_plum"):
			return 46;
	
		case joaat("consumable_herb_evergreen_huckleberry"):
			return 16;
	
		case joaat("consumable_herb_english_mace"):
			return 15;
	
		case joaat("consumable_herb_bay_bolete"):
			return 4;
	
		case joaat("provision_wldflwr_blood_flower"):
			return 43;
	
		case joaat("consumable_herb_chanterelles"):
			return 8;
	
		case joaat("consumable_herb_rams_head"):
			return 32;
	
		case joaat("consumable_herb_wintergreen_berry"):
			return 52;
	
		case joaat("consumable_herb_indian_tobacco"):
			return 21;
	
		case joaat("provision_wldflwr_chocolate_daisy"):
			return 45;
	
		case joaat("consumable_herb_yarrow"):
			return 53;
	
		case joaat("consumable_herb_wild_mint"):
			return 51;
	
		case joaat("consumable_herb_burdock_root"):
			return 7;
	
		case joaat("provision_wldflwr_wisteria"):
			return 48;
	
		case joaat("consumable_herb_violet_snowdrop"):
			return 39;
	
		case joaat("provision_wldflwr_texas_blue_bonnet"):
			return 41;
	
		case joaat("consumable_herb_milkweed"):
			return 24;
	
		case joaat("consumable_herb_prairie_poppy"):
			return 30;
	
		case joaat("consumable_herb_oregano"):
			return 28;
	
		case joaat("consumable_herb_red_raspberry"):
			return 34;
	
		case joaat("consumable_herb_wild_feverfew"):
			return 50;
	
		case joaat("consumable_herb_currant"):
			return 6;
	
		case joaat("provision_wldflwr_bitterweed"):
			return 42;
	
		case joaat("consumable_herb_wild_carrots"):
			return 49;
	
		case joaat("provision_wldflwr_agarita"):
			return 40;
	
		case joaat("consumable_herb_ginseng"):
			return 2;
	
		case joaat("provision_wldflwr_wild_rhubarb"):
			return 47;
	
		case joaat("consumable_herb_vanilla_flower"):
			return 38;
	
		case joaat("consumable_herb_creeping_thyme"):
			return 12;
	}

	return 0;
}

void func_277(int iParam0, BOOL bParam1, int iParam2) // Position - 0x7B25 Signature - 22 03 07 00 00 66 00 39
{
	Hash hash;
	int num;

	hash = func_369(iParam0);
	num = func_276(hash);

	if (num != iParam0)
		func_370(num, 4);

	if (!func_371(iParam0))
		return;

	if (func_372(iParam0))
		return;

	func_370(iParam0, 4);
	func_373(iParam0, bParam1);

	if (!func_374(iParam0))
		func_375(iParam0, true, false);

	if (bParam1)
		if (!func_16(0, false, true))
			func_376(true, 6);

	return;
}

BOOL func_278(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x7B9B Signature - 22 05 07 00 00 66 00 66 01 66
{
	if (TASK::CAN_START_ITEM_INTERACTION(pedParam0, hParam1, hParam2, iParam3))
	{
		TASK::START_TASK_ITEM_INTERACTION(pedParam0, hParam1, hParam2, iParam3, 0, -1082130432);
		Global_1940085.f_26 = 1;
		return true;
	}

	ATTRIBUTE::STOP_ITEM_PREVIEW();
	return false;
}

void func_279(Hash hParam0) // Position - 0x7BD4 Signature - 22 01 2B 00 00 4B 03 6A 80 01
{
	int num;
	var unk22;
	int i;
	float health;
	float deadeye;
	float stamina;
	float num2;
	float num3;
	float num4;
	float num5;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	num.f_1 = 20;

	if (func_62(hParam0, 1573112293) || func_62(hParam0, 672467738) || func_62(hParam0, -550842268))
		flag = true;

	if (func_42(hParam0) == joaat("consumable"))
	{
		ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(hParam0, &num);
		ATTRIBUTE::STOP_ITEM_PREVIEW();
	
		for (i = 0; i < num; i = i + 1)
		{
			if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(num.f_1[i], &unk22))
			{
			}
			else if (-943921969 == unk22.f_1)
			{
				health = func_377(0, unk22.f_2);
				func_378(unk22.f_2);
				flag3 = true;
			}
			else if (-1104847406 == unk22.f_1)
			{
				deadeye = func_377(2, unk22.f_2);
				func_379(unk22.f_2, false);
				flag2 = true;
			}
			else if (381158954 == unk22.f_1)
			{
				stamina = func_377(1, unk22.f_2);
				func_380(unk22.f_2);
			}
			else if (joaat("EFFECT_HEALTH_CORE") == unk22.f_1)
			{
				num2 = func_381(BUILTIN::TO_FLOAT(unk22.f_2), unk22.f_5);
				func_382(0, num2, true, true, flag);
				flag3 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE") == unk22.f_1)
			{
				num3 = func_381(BUILTIN::TO_FLOAT(unk22.f_2), unk22.f_5);
				func_382(2, num3, true, true, flag);
				flag2 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE") == unk22.f_1)
			{
				num4 = func_381(BUILTIN::TO_FLOAT(unk22.f_2), unk22.f_5);
				func_382(1, num4, true, true, flag);
			}
			else if (joaat("Effect_Health_Core_Gold") == unk22.f_1)
			{
				num5 = func_383(BUILTIN::TO_FLOAT(unk22.f_3), unk22.f_4);
				func_384(19, num5, true, true);
				flag3 = true;
			}
			else if (joaat("Effect_Deadeye_Core_Gold") == unk22.f_1)
			{
				num5 = func_383(BUILTIN::TO_FLOAT(unk22.f_3), unk22.f_4);
				func_384(20, num5, true, true);
				flag2 = true;
			}
			else if (joaat("Effect_Stamina_Core_Gold") == unk22.f_1)
			{
				num5 = func_383(BUILTIN::TO_FLOAT(unk22.f_3), unk22.f_4);
				func_384(18, num5, true, true);
			}
			else if (1869697234 == unk22.f_1)
			{
				num5 = func_383(BUILTIN::TO_FLOAT(unk22.f_3), unk22.f_4);
				func_384(0, num5, true, true);
				flag3 = true;
			}
			else if (1342237631 == unk22.f_1)
			{
				num5 = func_383(BUILTIN::TO_FLOAT(unk22.f_3), unk22.f_4);
				func_384(2, num5, true, true);
				flag2 = true;
			}
			else if (-1240225157 == unk22.f_1)
			{
				num5 = func_383(BUILTIN::TO_FLOAT(unk22.f_3), unk22.f_4);
				func_384(1, num5, true, true);
			}
			else if (-816334026 == unk22.f_1)
			{
				func_385(BUILTIN::TO_FLOAT(unk22.f_2), true);
			}
		}
	
		if (flag3 || func_62(hParam0, -537818634))
			func_387(func_386(joaat("medicine_items_used")), 1);
	
		if (func_62(hParam0, -1457797660))
			func_387(func_386(joaat("provision_items_used")), 1);
	
		if (flag2)
			func_387(func_386(joaat("DEADEYE_ITEMS_USED")), 1);
	
		switch (hParam0)
		{
			case -1735850413:
			case -241345764:
				STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_SaloonSnack_00"), 1);
				break;
		}
	
		PLAYER::_SET_USED_ITEM_EFFECT(health, stamina, deadeye, BUILTIN::ROUND(num2 / 2f), BUILTIN::ROUND(num4 / 2f), BUILTIN::ROUND(num3 / 2f));
	}

	return;
}

int func_280(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x7F18 Signature - 22 04 12
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash ammoType;
	int pedAmmoByType;
	var statId;
	var unk2;

	if (!func_41(hParam0, 0))
		return 0;

	if (hParam3 == -142743235)
		if (func_388(hParam0))
			hParam3 = 562618531;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	ammoType = func_103(hParam0, 1);

	if (ammoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return 0;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_33, ammoType, iParam1, hParam3);
	
		if (!bParam2)
			func_389(hParam0, -iParam1, flag, flag2, flag3, false, false);
	
		return 0;
	}

	if (!func_15(hParam0, 1))
		return 0;

	statId = { func_390(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_45(hParam0, false, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_45(hParam0, false, false, false) - iParam1 < 0)
		{
			func_280(hParam0, func_45(hParam0, false, false, false), bParam2, hParam3);
			return 0;
		}
	}

	if (func_42(hParam0) == joaat("WEAPON"))
	{
		if (!func_391(hParam0, iParam1, false, hParam3))
			return 0;
	}
	else if (!func_58(hParam0, iParam1, hParam3, bParam2, false))
	{
		return 0;
	}
	else
	{
		unk2 = { func_122(hParam0, false, 0) };
	
		if (func_226(false) && unk2.f_4 == 1084182731)
			func_392(1, false, 0);
	}

	if (hParam0 == joaat("document_player_journal"))
		Global_1940085.f_21 = 0;

	if (!func_226(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_389(hParam0, -iParam1, flag, flag2, flag3, false, false);

	return 1;
}

void func_281(int iParam0) // Position - 0x80CB Signature - 22 01 03 00 00 03 01 00 AF
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		if (iParam0 == 1)
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");

	return;
}

BOOL func_282(int iParam0) // Position - 0x8111 Signature - 22 01 03 00 00 66 00 5D 0C CE 1D 18 53 02 17 01 2F
{
	return Global_1953292.f_595[iParam0] > 0;
}

void func_283(int iParam0) // Position - 0x8126 Signature - 22 01 03 00 00 66 00 5D 0C CE 1D 18 53 02 17 01 5C
{
	Global_1953292.f_595[iParam0] = Global_1953292.f_595[iParam0] + 1;
	return;
}

BOOL func_284() // Position - 0x8146 Signature - 22 00 02 00 00 5D 0C CE 1D 78 AF
{
	if (Global_1953292.f_3503)
		return true;

	if (MISC::ABSI(MISC::GET_GAME_TIMER() - Global_1953292.f_3501) < 1250)
		return true;

	if (func_393())
		return true;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
		return true;

	return false;
}

BOOL func_285(Hash hParam0) // Position - 0x8190 Signature - 22 01 04 00 00 66 00 39 92 26 00 67 03 66 03 37
{
	int num;

	num = func_75(hParam0);

	if (num == 81053684 || num == -525676072 || func_62(hParam0, 160827531) || func_62(hParam0, -1303648999))
		return 1;

	return 0;
}

void func_286(var uParam0, int iParam1) // Position - 0x81E0 Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 01
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_287(Hash hParam0) // Position - 0x81F1 Signature - 22 01 04 00 00 66 00 2F 15
{
	Hash hash;

	if (hParam0 == 0)
		return 0;

	hash = 0;

	if (func_293(&hash))
		if (hParam0 == hash)
			return 1;

	return 0;
}

BOOL func_288(var uParam0) // Position - 0x821B Signature - 22 01 03 00 00 37 1A
{
	if (-1829635046 == func_394(81053684))
		if (func_293(uParam0))
			return true;
	else if (func_395(-525676072, uParam0) || func_62(func_396(1742327865), -1303648999))
		if (func_293(uParam0))
			return true;

	return false;
}

Hash func_289() // Position - 0x8278 Signature - 22 00 03 00 00 37 3A
{
	int num;

	num = joaat("mask_off_left_hand");

	switch (func_275())
	{
		case 0:
			num = joaat("mask_off_left_hand");
			break;
	
		case 1:
			num = joaat("mask_off_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("mask_off_left_hand_rifle");
			break;
	}

	return num;
}

Hash func_290() // Position - 0x82CF Signature - 22 00 03 00 00 37 10
{
	int num;

	num = joaat("bandana_off_left_hand");

	switch (func_275())
	{
		case 0:
			num = joaat("bandana_off_left_hand");
			break;
	
		case 1:
			num = joaat("bandana_off_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("bandana_off_left_hand_rifle");
			break;
	}

	return num;
}

Hash func_291() // Position - 0x8326 Signature - 22 00 03 00 00 37 3E
{
	int num;

	num = joaat("mask_on_left_hand");

	switch (func_275())
	{
		case 0:
			num = joaat("mask_on_left_hand");
			break;
	
		case 1:
			num = joaat("mask_on_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("mask_on_left_hand_rifle");
			break;
	}

	return num;
}

Hash func_292() // Position - 0x837D Signature - 22 00 03 00 00 37 BC
{
	int num;

	num = joaat("bandana_on_left_hand");

	switch (func_275())
	{
		case 0:
			num = joaat("bandana_on_left_hand");
			break;
	
		case 1:
			num = joaat("bandana_on_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("bandana_on_left_hand_rifle");
			break;
	}

	return num;
}

BOOL func_293(var uParam0) // Position - 0x83D4 Signature - 22 01 03 00 00 37 F4
{
	if (func_395(81053684, uParam0))
		return true;

	if (func_395(-525676072, uParam0))
		return true;

	return false;
}

void func_294(BOOL bParam0) // Position - 0x8401 Signature - 22 01 03 00 00 85 0C CE 1D 85
{
	Global_1953292 = Global_1953292 - Global_1953292 && bParam0;
	return;
}

void func_295(int iParam0, int iParam1, int iParam2) // Position - 0x8419 Signature - 22 03 05 00 00 66 00 09 39 72 5B 00 5D 0C CE 1D 80 53 63 0C 27 0B 66 00
{
	Global_1953292.f_83[func_175(iParam0, 1) /*12*/].f_11 = Global_1953292.f_83[func_175(iParam0, 1) /*12*/].f_11 - Global_1953292.f_83[func_175(iParam0, 1) /*12*/].f_11 && iParam1;
	return;
}

int func_296(int iParam0, BOOL bParam1) // Position - 0x8458 Signature - 22 02 04 00 00 66 00 3C 07 00 D3
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1953292.f_3352.f_28;
	
		case -1719060085:
			return Global_1953292.f_3352.f_31;
	
		case -999503751:
			if (bParam1)
				return Global_1953292.f_3352.f_27;
			else
				return func_397();
			break;
	
		case -525676072:
			return Global_1953292.f_3352.f_29;
	
		case 81053684:
			return Global_1953292.f_3352.f_30;
	
		case 119907797:
			return Global_1953292.f_3352.f_32;
	
		case 1388798186:
			return Global_1953292.f_3352.f_33.f_7;
	}

	return 0;
}

int func_297(int iParam0, BOOL bParam1) // Position - 0x84FB Signature - 22 02 05 00 00 2F 67 04 66 00
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -2061583405:
			num = Global_1953292.f_3352.f_33.f_1;
			break;
	
		case -1719060085:
			num = 1;
			break;
	
		case -999503751:
			num = Global_1953292.f_3352.f_33;
			break;
	
		case -525676072:
			num = Global_1953292.f_3352.f_33.f_2;
			break;
	
		case 81053684:
			num = 1;
			break;
	
		case 119907797:
			num = 1;
			break;
	
		case 1388798186:
			num = 1;
			break;
	
		default:
			return 0;
	}

	switch (iParam0)
	{
		case -999503751:
			if (num > 0 && !bParam1)
				num = num - 1;
			break;
	}

	return num;
}

BOOL func_298(Hash hParam0, var uParam1) // Position - 0x85AA Signature - 22 02 04 00 00 2F
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1953292.f_3352.f_26)
	{
		if (hParam0 == Global_1953292.f_3352[*uParam1])
			return 1;
	
		*uParam1 = *uParam1 + 1;
	}

	return 0;
}

BOOL func_299(Hash hParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x85EA Signature - 22 05 09 00 00 66 00
{
	var unk;
	Hash hash;

	hash = hParam0;

	if (Global_1953292.f_3352.f_26 >= 25)
		return 0;

	if (*iParam1 >= iParam2)
		return 0;

	if (func_298(hash, &unk))
		return 0;

	if (!func_398(hParam0, 0))
		return 0;

	if (bParam3 && !func_399(hParam0, false, bParam4))
		return 0;

	Global_1953292.f_3352[Global_1953292.f_3352.f_26] = hash;
	Global_1953292.f_3352.f_26 = Global_1953292.f_3352.f_26 + 1;
	*iParam1 = *iParam1 + 1;
	return 1;
}

void func_300() // Position - 0x867B Signature - 22 00 03 00 00 2F 67 02 66 02 5D
{
	int i;

	for (i = 0; i < Global_1953292.f_3352.f_26; i = i + 1)
	{
		Global_17418.f_55.f_664[i] = Global_1953292.f_3352[i];
	}

	Global_17418.f_55.f_664.f_27 = Global_1953292.f_3352.f_27;
	Global_17418.f_55.f_664.f_28 = Global_1953292.f_3352.f_28;
	Global_17418.f_55.f_664.f_29 = Global_1953292.f_3352.f_29;
	Global_17418.f_55.f_664.f_30 = Global_1953292.f_3352.f_30;
	Global_17418.f_55.f_664.f_31 = Global_1953292.f_3352.f_31;
	Global_17418.f_55.f_664.f_32 = Global_1953292.f_3352.f_32;
	Global_17418.f_55.f_664.f_26 = Global_1953292.f_3352.f_26;
	return;
}

BOOL func_301(int iParam0) // Position - 0x8739 Signature - 22 01 03 00 00 66 00 39 89
{
	return func_401(func_400(iParam0));
}

void func_302(BOOL bParam0, Hash hParam1) // Position - 0x874B Signature - 22 02 0F
{
	char* str;
	char* str2;
	char* str3;
	char* str4;
	int num;
	int num2;
	Hash hash;
	Hash hash2;
	const char* str5;

	if (!func_41(hParam1, 0))
		return;

	num2 = -1;

	if (!func_402(hParam1, &str, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
	{
		str = "_PLACEHOLDER";
		str.f_1 = "inventory_items";
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	if (bParam0)
	{
		str3 = "Transaction_Positive";
		num = joaat("COLOR_PURE_WHITE");
		num2 = func_403(hParam1);
	
		if (num2 > 0 && num2 < 11 && func_404(4, num2))
		{
			str2 = "OUTFIT_STORED_LITERAL";
			str4 = func_267(func_405(num2));
		}
		else
		{
			hash = func_406(hParam1);
		
			if (func_41(hash, 0))
				hParam1 = hash;
		
			str2 = "ITEM_STORED";
			str4 = MISC::VAR_STRING(0, func_407(hParam1, false));
		}
	}
	else
	{
		str3 = "Transaction_Positive";
		num = joaat("COLOR_PURE_WHITE");
		num2 = func_403(hParam1);
	
		if (num2 > 0 && num2 < 11 && func_404(4, num2))
		{
			str2 = "OUTFIT_REMOVED_LITERAL";
			str4 = func_267(func_405(num2));
		}
		else
		{
			hash2 = func_406(hParam1);
		
			if (func_41(hash2, 0))
				hParam1 = hash2;
		
			str2 = "ITEM_REMOVED";
			str4 = MISC::VAR_STRING(0, func_407(hParam1, false));
		}
	}

	str5 = func_408(MISC::VAR_STRING(10, str2, str4), num);
	func_409(str5, str.f_1, MISC::GET_HASH_KEY(str), 0, num, "Transaction_Feed_Sounds", str3, 0, true);
	return;
}

void func_303(BOOL bParam0, BOOL bParam1) // Position - 0x88AE Signature - 22 02 04 00 00 66 01 8B 04 00 39 19
{
	if (bParam1)
		func_410();

	if (bParam0)
	{
		func_160(8);
		func_160(512);
	}
	else
	{
		func_160(8);
		func_160(16);
	}

	return;
}

int func_304() // Position - 0x88E0 Signature - 22 00 02 00 00 5D 0C CE 1D 27 01 50
{
	return Global_1953292.f_1;
}

BOOL func_305(Hash hParam0, Hash hParam1) // Position - 0x88EE Signature - 22 02 06 00 00 66 01 39
{
	int num;
	int num2;

	num = func_75(hParam1);
	num2 = func_75(hParam0);

	if (num == num2)
		return true;

	if (func_411(hParam1) && func_411(hParam0))
		return true;

	return false;
}

void func_306(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x892A Signature - 22 06 08 00 00 66 00
{
	func_412(hParam0, 0, 0, bParam3, bParam5);
	func_171(hParam1, true, bParam2, bParam4, bParam3, bParam5);
	return;
}

int func_307(int iParam0, int iParam1) // Position - 0x894D Signature - 22 02 04 00 00 66 00 3C 28 00 00
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
	
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
	
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
	
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
	
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
	
		case 5:
			return 735520874;
	
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
	
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
	
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
	
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
	
		case 10:
			return 1108822547;
	
		case 11:
			return -338487716;
	
		case 12:
			return 1742327865;
	
		case 13:
			return 1600962399;
	
		case 14:
			return 1849504272;
	
		case 15:
			return 1672288269;
	
		case 16:
			return 1250092473;
	
		case 17:
			return -893163968;
	
		case 18:
			return -450913544;
	
		case 19:
			return -1364808185;
	
		case 20:
			return -1197751823;
	
		case 21:
			return 304805134;
	
		case 22:
			return -1505978566;
	
		case 23:
			return 1145151482;
	
		case 24:
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
	
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
	
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
	
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
	
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
	
		case 29:
			return -426430150;
	
		case 30:
			return 1788623170;
	
		case 31:
			return -1130865351;
	
		case 32:
			return -1884748965;
	
		case 33:
			return -1586649372;
	
		case 34:
			return 788010710;
	
		case 35:
			return 1958421083;
	
		case 36:
			return -1944638739;
	
		case 37:
			return 1900541263;
	
		case 38:
			return -1489346253;
	
		case 39:
			return -358215195;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

void func_308() // Position - 0x8B9C Signature - 22 00 03 00 00 5D
{
	int i;

	Global_1953292.f_1557 = Global_1953292.f_1676;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1953292.f_1557.f_1[i /*3*/] = { Global_1953292.f_1676.f_1[i /*3*/] };
	}

	return;
}

void func_309(int iParam0) // Position - 0x8BE3 Signature - 22 01 03 00 00 66 00 6D 08
{
	func_295(iParam0, 8, 6);
	return;
}

void func_310(var uParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x8BF4 Signature - 22 04 08 00 00 66 03
{
	int num;
	Hash hash;

	if (bParam3)
	{
		if (*uParam1 == 832230214 || *uParam1 == 30652334 || *uParam1 == 750544038)
		{
			num = 16;
		
			if (func_75(uParam0->f_1[num /*3*/]) != 1882579758)
				return;
		
			hash = func_413(uParam0->f_1[num /*3*/]);
		
			if (hash != 0 && hash != Global_1953292.f_83[iParam2 /*12*/])
			{
				*uParam1 = hash;
				return;
			}
		}
	
		if (!func_414(*uParam1, iParam2))
		{
			*uParam1 = Global_1953292.f_1676.f_1[iParam2 /*3*/];
			return;
		}
	}

	*uParam1 = Global_1953292.f_83[iParam2 /*12*/];
	return;
}

void func_311(int iParam0) // Position - 0x8CA2 Signature - 22 01 03 00 00 5D 0C CE 1D 18 7A
{
	func_415(&(Global_1953292.f_2938), iParam0);
	return;
}

void func_312(int iParam0, int iParam1) // Position - 0x8CB7 Signature - 22 02 04 00 00 66 01 6D 08
{
	if (iParam1 & 8 != 0)
		return;

	func_416(&(Global_1953292.f_2938), iParam0, iParam1);
	return;
}

void func_313(Hash hParam0, int iParam1, int iParam2) // Position - 0x8CDA Signature - 22 03 05 00 00 66 00 27 02
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_314(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x8CED Signature - 22 05 09 00 00 66 01
{
	Hash hash;
	BOOL flag;

	hash = hParam1;
	flag = func_178(hash, true);

	if (bParam3 && func_62(uParam0->f_1[iParam2 /*3*/], 343781202))
		func_417(uParam0, uParam0->f_1[iParam2 /*3*/]);

	switch (func_307(iParam2, 1))
	{
		case -1944638739:
			func_433(uParam0, flag, hash, iParam4);
			break;
	
		case -1197751823:
			func_426(uParam0, flag, hash, iParam4);
			break;
	
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			func_418(uParam0, hash, iParam2, iParam4);
			break;
	
		case -893163968:
			func_424(uParam0, flag, hash, iParam4);
			break;
	
		case -450913544:
			func_425(uParam0, flag, hash, iParam2, iParam4);
			break;
	
		case -426430150:
			func_430(uParam0, flag, iParam4);
			break;
	
		case -338487716:
			func_420(uParam0, hash, flag, iParam4);
			break;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			func_429(uParam0, flag, hash, iParam4);
			break;
	
		case 304805134:
			func_427(uParam0, flag, hash, iParam4);
			break;
	
		case 788010710:
			func_431(uParam0, flag, hash, iParam4);
			break;
	
		case 1108822547:
			func_421(uParam0, flag, hash, iParam4);
			break;
	
		case 1145151482:
			func_428(uParam0, flag, hash, iParam4);
			break;
	
		case 1250092473:
			func_423(uParam0, flag, hash, iParam4);
			break;
	
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			func_419(uParam0, hash, iParam2);
			break;
	
		case 1742327865:
			func_422(uParam0, flag, hash, iParam4);
			break;
	
		case 1958421083:
			func_432(uParam0, flag, hash, iParam4);
			break;
	}

	return;
}

Hash func_315(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x8E86 Signature - 22 03 06 00 00 2F
{
	BOOL flag;

	flag = false;

	if (func_304() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag = true;

	if (hParam2 == 289238755)
		return 289238755;

	if (hParam2 != 0 && func_434(hParam0, flag, hParam2) != -1)
		return hParam2;

	if (func_435(hParam0, func_307(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_316(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x8EE7 Signature - 22 06 0C
{
	int i;
	int num;
	BOOL flag;
	BOOL flag2;

	if (*iParam0 <= 0)
		return;

	num = -1;
	flag = false;

	if (bParam5)
	{
		num = func_436(Global_1953292.f_1676);
	
		if (bParam4)
			bParam4 = num == -1;
	}

	for (i = 0; i < *iParam0; i = i + 1)
	{
		if (func_167(4718592) && !func_437(func_75(Global_1953292.f_1557.f_1[iParam0->f_2[i /*2*/] /*3*/])))
		{
		}
		else
		{
			func_438(iParam0->f_2[i /*2*/], bParam1, bParam2, num);
			flag = true;
		}
	}

	if (!flag)
		return;

	if (bParam4)
	{
		flag2 = false;
	
		if (Global_1953292.f_1676 != 491602716 || !func_404(2, -1))
			flag2 = true;
		else if (!func_62(Global_1953292.f_1676, -166674229) && Global_1953292.f_1676 != 491602716 || !func_404(2, -1))
			flag2 = true;
	
		if (flag2)
		{
			Global_1953292.f_1676 = 491602716;
			Global_1953292.f_1557 = 491602716;
			func_439(491602716, 1, true);
			func_440(-1, false, 6);
			func_78(27, 0, 65536, 0, false);
		}
	}

	if (bParam3)
		func_303(false, true);

	return;
}

Hash func_317(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5, int iParam6) // Position - 0x9026 Signature - 22 07 09 00 00 4B
{
	return func_441(&uParam0, hParam4, bParam5, iParam6);
}

BOOL func_318(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x903A Signature - 22 06 16
{
	var unk;

	if (!func_226(false))
		return func_442(&uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = -1591664384;

	if (!func_236(uParam0, &unk, bParam5, false, -1))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_113(bParam5), &uParam0, bParam4))
		return false;

	return true;
}

struct<4> func_319() // Position - 0x90AE Signature - 22 00 06
{
	var unk;

	return unk;
}

BOOL func_320(Ped pedParam0) // Position - 0x90BA Signature - 22 01 03 00 00 66 00 03 05 00 F9 8B 04 00 2F 50 01 01 70
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (func_443(Global_33, pedParam0, false, true) < 2f && PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_33, pedParam0))
		return true;

	return false;
}

BOOL func_321() // Position - 0x90F2 Signature - 22 00 07
{
	int num;
	int num2;
	int num3;
	int num4;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("shop_anywhere_handheld")))
	{
		func_131(2);
		return false;
	}

	if (!func_198())
	{
		func_131(9);
		return false;
	}

	if (Global_1051832.f_92[34 /*75*/].f_1 & 128 != 0)
	{
		func_131(3);
		return false;
	}

	num = { func_47(0) };

	if (func_48(num))
	{
		num2 = -1;
	
		switch (num)
		{
			case 3:
			case 4:
				num4 = func_264(&num, 0);
			
				if (num4 != -1)
					if (func_265(num4, 461218520, false))
						num2 = 46;
				break;
		
			case 6:
				num3 = func_206(PLAYER::PLAYER_ID(), false);
			
				if (num3 != -1)
					num2 = func_444(num3);
				break;
		}
	
		if (num2 != -1)
		{
			func_131(num2);
			return false;
		}
	}

	if (func_445())
	{
		func_131(4);
		return false;
	}

	if (func_364(4, PLAYER::NETWORK_PLAYER_ID_TO_INT()) && Global_1051832.f_92[34 /*75*/].f_49 & 1073741824 == 0)
	{
		func_131(5);
		return false;
	}

	if (func_446(131072, 255))
	{
		func_131(7);
		return false;
	}

	if (func_447())
	{
		func_131(8);
		return false;
	}

	return true;
}

BOOL func_322(int iParam0, int iParam1) // Position - 0x9226 Signature - 22 02 04 00 00 70
{
	if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::IS_PED_IN_MELEE_COMBAT(Global_33) || func_256(iParam1, 1024) && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Global_33, Global_34, iParam0, iParam1) > 0)
		return true;

	return false;
}

BOOL func_323(int iParam0) // Position - 0x9271 Signature - 22 01 03 00 00 66 00 6D FF 15 0E
{
	if (iParam0 == 255)
		return Global_1102813.f_3 & 32 != 0;

	return func_446(32, iParam0);
}

BOOL func_324(int iParam0) // Position - 0x9296 Signature - 22 01 03 00 00 66 00 09 0B
{
	if (iParam0 == 1 || iParam0 == 2 || iParam0 == 3)
		return true;

	return false;
}

BOOL func_325() // Position - 0x92BE Signature - 22 00 02 00 00 5D 0C CE 1D 27 01 37
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

void func_326(BOOL bParam0) // Position - 0x92E3 Signature - 22 01 03 00 00 66 00 8B 08
{
	if (bParam0)
		func_448(4);
	else
		func_189(4);

	return;
}

void func_327(BOOL bParam0) // Position - 0x92FD Signature - 22 01 03 00 00 66 00 6A
{
	if (!(bParam0 && Global_1915656.f_22504))
		if (bParam0)
			INVENTORY::_INVENTORY_ENABLE_ITEM(2, joaat("KIT_HANDHELD_CATALOG"));
		else
			INVENTORY::_INVENTORY_DISABLE_ITEM(2, joaat("KIT_HANDHELD_CATALOG"), 0);

	Global_1915656.f_22504 = bParam0;
	return;
}

BOOL func_328() // Position - 0x933D Signature - 22 00 02 00 00 5D 08 3B 1D 78 A3
{
	return Global_1915656.f_20643;
}

BOOL func_329(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x934C Signature - 22 09 10 00 00 66 07
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

	if (func_449())
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

BOOL func_330(int iParam0, int iParam1, Player plParam2) // Position - 0x9572 Signature - 22 03 05 00 00 66 00 66 02 5D
{
	return func_201(Global_1206166[plParam2 /*10*/][iParam0], iParam1);
}

var func_331(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x958C Signature - 22 0C 1A
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

	if (func_450() != 0)
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_451());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_451());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_451());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_452(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_453(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_454(i) != 1)
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
					if (!func_455(player2))
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

int func_332(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21) // Position - 0x991F Signature - 22 16 18
{
	if (!func_456(uParam0))
		return 0;

	uParam0->f_2[*uParam0 /*21*/] = { uParam1 };
	*uParam0 = *uParam0 + 1;
	return 1;
}

BOOL func_333(int iParam0, int iParam1) // Position - 0x994F Signature - 22 02 04 00 00 66 00 87
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_334(int iParam0) // Position - 0x9967 Signature - 22 01 03 00 00 66 00 42
{
	if (func_336(iParam0, 4))
		return false;

	return true;
}

BOOL func_335(int iParam0) // Position - 0x997E Signature - 22 01 07 00 00 66 00 5D
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

BOOL func_336(int iParam0, int iParam1) // Position - 0x9A4A Signature - 22 02 04 00 00 66 00 5D 12
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_337(int iParam0) // Position - 0x9A63 Signature - 22 01 03 00 00 5D 00
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_338() // Position - 0x9A76 Signature - 22 00 02 00 00 39 4A
{
	if (!func_198())
		return false;

	return Global_1904402.f_8873;
}

BOOL func_339(var uParam0) // Position - 0x9A91 Signature - 22 01 03 00 00 66 00 76 11
{
	return func_99(*uParam0, 2);
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_340(Any anParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x9AA1 Signature - 22 04 07 00 00 2F 66
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
	
		if (func_457(&anParam0->[i /*6*/]))
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
				anParam0->[i /*6*/] = { func_319() };
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

BOOL func_341(Hash hParam0, Any* panParam1) // Position - 0x9BB8 Signature - 22 02 05 00 00 66 00 66 01 03
{
	int num;

	num = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_458(panParam1->f_8, hParam0, num, 2048) || func_458(panParam1->f_8, hParam0, num, 32768) || func_458(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_458(panParam1->f_8, hParam0, num, 4) || func_458(panParam1->f_8, hParam0, num, 256) || func_458(panParam1->f_8, hParam0, num, 65536) || func_458(panParam1->f_8, hParam0, num, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_458(panParam1->f_8, hParam0, num, 1) || func_458(panParam1->f_8, hParam0, num, 8) || func_458(panParam1->f_8, hParam0, num, 65536) || func_458(panParam1->f_8, hParam0, num, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_458(panParam1->f_8, hParam0, num, 1) || func_458(panParam1->f_8, hParam0, num, 16) || func_458(panParam1->f_8, hParam0, num, 2) || func_458(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (func_458(panParam1->f_8, hParam0, num, 8) || func_458(panParam1->f_8, hParam0, num, 4096) || func_458(panParam1->f_8, hParam0, num, 256) || func_458(panParam1->f_8, hParam0, num, 65536))
		return false;

	return true;
}

BOOL func_342(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x9D8E Signature - 22 03 05 00 00 66 00 66 01 66 02 6D 11
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

int func_343(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x9DA5 Signature - 22 03 05 00 00 66 00 8B 21
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_459(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_459(iParam1, 2, 0, 0);
	return -1;
}

int func_344(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x9DEE Signature - 22 03 05 00 00 66 00 8B 0E
{
	if (bParam0)
	{
		func_459(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

int func_345() // Position - 0x9E0A Signature - 22 00 02 00 00 37 20
{
	if (func_460(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

BOOL func_346(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x9E27 Signature - 22 04 07 00 00 2F 39
{
	int inventoryId;

	inventoryId = func_113(false);
	*panParam1 = { func_123(hParam0, func_220(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_347(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x9E6C Signature - 22 03 05 00 00 66 02 37
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, iParam1, hParam2);
}

BOOL func_348(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x9E9F Signature - 22 05 07 00 00 66 00 03
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_113(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

int func_349() // Position - 0x9ED9 Signature - 22 00 02 00 00 37 F7 3F
{
	return 1037647863;
}

int func_350() // Position - 0x9EE6 Signature - 22 00 02 00 00 37 F7 BF
{
	return 1037746167;
}

int func_351() // Position - 0x9EF3 Signature - 22 00 02 00 00 37 D7 BC B7
{
	return 1035451607;
}

Entity func_352(Ped pedParam0) // Position - 0x9F00 Signature - 22 01 04 00 00 66 00 03
{
	int lootTarget;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (PED::IS_PED_INJURED(pedParam0))
		return 0;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 0, &lootTarget, 1, 0) != 0)
		return lootTarget;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 2, &lootTarget, 1, 0) != 0)
		return lootTarget;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 1, &lootTarget, 1, 0) != 0)
		return lootTarget;

	return 0;
}

int func_353(var uParam0, var uParam1) // Position - 0x9F60 Signature - 22 02 07 00 00 4B
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_461(uParam0, &unk))
		return unk.f_1;

	return -1;
}

int func_354(int iParam0) // Position - 0x9F8C Signature - 22 01 09 00 00 08
{
	int num;
	int num2;

	num = -1;

	if (func_462(&num2, iParam0))
		num = func_463() - DATAFILE::_0xE13634BB6BAF0734(num2, num2.f_1) - 1;

	return num;
}

int func_355(int iParam0) // Position - 0x9FB7 Signature - 22 01 03 00 00 66 00 08 15 04 00 08
{
	if (iParam0 == -1)
		return -1;

	return Global_1245174[iParam0 /*5*/].f_1;
}

int func_356(int iParam0) // Position - 0x9FD3 Signature - 22 01 03 00 00 66 00 3C 1E
{
	switch (iParam0)
	{
		case 0:
			return 1336837986;
	
		case 1:
			return 2124631622;
	
		case 2:
			return joaat("ROBBERY_TRAIN");
	
		case 3:
			return 1443764480;
	
		case 4:
			return -668110249;
	
		case 5:
			return -1381389849;
	
		case 6:
			return 536699577;
	
		case 7:
			return 541147288;
	
		case 8:
			return 377122918;
	
		case 9:
			return 1158195437;
	
		case 10:
			return joaat("AMBUSH");
	
		case 11:
			return -621956193;
	
		case 12:
			return joaat("GANG_EVENT_SHOWDOWN");
	
		case 13:
			return joaat("GANG_EVENT_IMPROMPTU_RACE");
	
		case 14:
			return -867762478;
	
		case 15:
			return 602097925;
	
		case 16:
			return joaat("TRAIN_ESCORT");
	
		case 17:
			return joaat("IWD_1V1");
	
		case 18:
			return joaat("IWD_PVP");
	
		case 19:
			return joaat("IWD_INF");
	
		case 20:
			return joaat("IWD_PF");
	
		case 21:
			return joaat("IWD_PLF");
	
		case 22:
			return joaat("ASSASSINATION");
	
		case 23:
			return joaat("ASSASSINATION_TRACKING");
	
		case 24:
			return joaat("ASSASSINATION_PVP_PLAYER");
	
		case 25:
			return joaat("ASSASSINATION_PVP_POSSE");
	
		case 26:
			return joaat("COACH_HOLDUP_ROBBERY");
	
		case 27:
			return joaat("COACH_HOLDUP_KIDNAPPING");
	
		case 28:
			return joaat("IWD_F");
	
		case 30:
			return 1518877519;
	
		default:
		
	}

	return 0;
}

int func_357(int iParam0) // Position - 0xA188 Signature - 22 01 04 00 00 2F 39
{
	int num;

	num = func_465(0, func_464() - 1, &iParam0);

	if (num == -1)
		return -1;

	return func_466(num);
}

int func_358(int iParam0) // Position - 0xA1AF Signature - 22 01 03 00 00 66 00 5D E4 F0 10 18 53 0E 17
{
	return Global_1110244.f_3667[iParam0 /*7*/];
}

struct<8> func_359(int iParam0, int iParam1, BOOL bParam2) // Position - 0xA1C2 Signature - 22 03 12
{
	var unk;
	var unk6;

	if (!func_467(iParam0))
		return unk6;

	if (!func_468(&unk))
		return unk6;

	if (!func_469(unk, &(unk.f_1), 13, 0, 0, 1))
		return unk6;

	if (!func_469(unk, &(unk.f_1), 14, iParam0, 0, 1))
		return unk6;

	if (!func_469(unk, &(unk.f_1), 19, 0, 0, 1))
		return unk6;

	if (!func_469(unk, &(unk.f_1), 21, iParam1, 0, bParam2))
	{
		if (bParam2)
		{
		}
	
		return unk6;
	}

	return func_470(unk);
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0xA275 Signature - 22 03 05 00 00 66 00 73
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

float func_361(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0xA29F Signature - 22 06 08 00 00 73
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

BOOL func_362(int iParam0) // Position - 0xA2BD Signature - 22 01 03 00 00 5D DA
{
	return func_201(Global_1220826.f_1196, iParam0);
}

BOOL func_363() // Position - 0xA2D2 Signature - 22 00 02 00 00 85 32
{
	return Global_263042[Global_1295666 /*65*/] > 2;
}

BOOL func_364(int iParam0, int iParam1) // Position - 0xA2E6 Signature - 22 02 04 00 00 5D 77
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return false;

	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1206954[iParam1 /*12*/] && iParam0 != false;
}

struct<2> func_365() // Position - 0xA322 Signature - 22 00 02 00 00 5D 2C
{
	if (Global_1205804.f_129 <= 0)
		return func_47(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_47(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

BOOL func_366(Hash hParam0) // Position - 0xA36D Signature - 22 01 03 00 00 66 00 39 85 D3
{
	if (func_471(hParam0) == -1)
		return false;

	return true;
}

BOOL func_367(var uParam0, var uParam1) // Position - 0xA384 Signature - 22 02 04 00 00 11
{
	return func_472(uParam0, 1, 4);
}

BOOL func_368(Hash hParam0) // Position - 0xA396 Signature - 22 01 03 00 00 66 00 03 05 00 65
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

Hash func_369(int iParam0) // Position - 0xA3A4 Signature - 22 01 03 00 00 66 00 3C 28
{
	switch (iParam0)
	{
		case 2:
			return joaat("consumable_herb_ginseng");
	
		case 3:
			return joaat("consumable_herb_ginseng");
	
		case 4:
			return joaat("consumable_herb_bay_bolete");
	
		case 5:
			return joaat("consumable_herb_black_berry");
	
		case 6:
			return joaat("consumable_herb_currant");
	
		case 7:
			return joaat("consumable_herb_burdock_root");
	
		case 8:
			return joaat("consumable_herb_chanterelles");
	
		case 11:
			return joaat("consumable_herb_common_bulrush");
	
		case 12:
			return joaat("consumable_herb_creeping_thyme");
	
		case 13:
			return joaat("consumable_herb_sage");
	
		case 15:
			return joaat("consumable_herb_english_mace");
	
		case 16:
			return joaat("consumable_herb_evergreen_huckleberry");
	
		case 18:
			return joaat("consumable_herb_currant");
	
		case 19:
			return -241666815;
	
		case 20:
			return joaat("consumable_herb_sage");
	
		case 21:
			return joaat("consumable_herb_indian_tobacco");
	
		case 24:
			return joaat("consumable_herb_milkweed");
	
		case 27:
			return joaat("consumable_herb_oleander_sage");
	
		case 28:
			return joaat("consumable_herb_oregano");
	
		case 29:
			return joaat("consumable_herb_parasol_mushroom");
	
		case 30:
			return joaat("consumable_herb_prairie_poppy");
	
		case 32:
			return joaat("consumable_herb_rams_head");
	
		case 34:
			return joaat("consumable_herb_red_raspberry");
	
		case 35:
			return joaat("consumable_herb_sage");
	
		case 38:
			return joaat("consumable_herb_vanilla_flower");
	
		case 39:
			return joaat("consumable_herb_violet_snowdrop");
	
		case 40:
			return joaat("provision_wldflwr_agarita");
	
		case 41:
			return joaat("provision_wldflwr_texas_blue_bonnet");
	
		case 42:
			return joaat("provision_wldflwr_bitterweed");
	
		case 43:
			return joaat("provision_wldflwr_blood_flower");
	
		case 44:
			return joaat("provision_wldflwr_cardinal_flower");
	
		case 45:
			return joaat("provision_wldflwr_chocolate_daisy");
	
		case 46:
			return joaat("provision_wldflwr_creek_plum");
	
		case 47:
			return joaat("provision_wldflwr_wild_rhubarb");
	
		case 48:
			return joaat("provision_wldflwr_wisteria");
	
		case 49:
			return joaat("consumable_herb_wild_carrots");
	
		case 50:
			return joaat("consumable_herb_wild_feverfew");
	
		case 51:
			return joaat("consumable_herb_wild_mint");
	
		case 52:
			return joaat("consumable_herb_wintergreen_berry");
	
		case 53:
			return joaat("consumable_herb_yarrow");
	
		default:
			break;
	}

	return 0;
}

void func_370(int iParam0, BOOL bParam1) // Position - 0xA65F Signature - 22 02 04 00 00 66 00 39 85 A6 00 05 8B 03 00 50 02 00 66 00 87
{
	if (!func_371(iParam0))
		return;

	Global_17418[iParam0] = Global_17418[iParam0] || bParam1;
	return;
}

BOOL func_371(int iParam0) // Position - 0xA685 Signature - 22 01 03 00 00 66 00 2F 77
{
	return !(iParam0 <= 0);
}

BOOL func_372(int iParam0) // Position - 0xA692 Signature - 22 01 03 00 00 66 00 39 85 A6 00 05 8B 04 00 2F 50 01 01 66 00 42
{
	if (!func_371(iParam0))
		return false;

	return func_473(iParam0, 4, true);
}

void func_373(int iParam0, BOOL bParam1) // Position - 0xA6B0 Signature - 22 02 04 00 00 66 00 39 85 A6 00 05 8B 03 00 50 02 00 66 00 39
{
	if (!func_371(iParam0))
		return;

	if (func_474(iParam0))
		return;

	func_370(iParam0, 2);

	if (bParam1)
		if (!func_16(0, false, true))
			func_475(true, 1017438712);

	return;
}

BOOL func_374(int iParam0) // Position - 0xA6F3 Signature - 22 01 03 00 00 66 00 39 85 A6 00 05 8B 04 00 2F 50 01 01 66 00 09
{
	if (!func_371(iParam0))
		return false;

	return func_473(iParam0, true, true);
}

void func_375(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xA711 Signature - 22 03 05 00 00 66 00 39 85
{
	if (!func_371(iParam0))
		return;

	if (func_374(iParam0))
		return;

	if (!bParam1)
		bParam1 = func_476(iParam0);

	if (!bParam1)
		func_477(iParam0);

	func_370(iParam0, true);
	func_373(iParam0, true);

	if (bParam2)
		if (!func_16(0, false, true))
			func_376(true, 6);

	return;
}

void func_376(BOOL bParam0, int iParam1) // Position - 0xA773 Signature - 22 02 04 00 00 03 01 01 53
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_478(&Global_0, 8);

	if (!func_479() || func_14() != -1)
		return;

	func_478(&Global_0, 1);
	return;
}

float func_377(int iParam0, int iParam1) // Position - 0xA7B9 Signature - 22 02 09 00 00 66 01 08
{
	int num;
	float pedStamina;
	float pedMaxStamina;
	float num2;
	float num3;

	if (iParam1 == -1)
	{
		num2 = pedMaxStamina - pedStamina;
		return num2 / 2f;
	}

	switch (iParam0)
	{
		case 0:
			pedStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_33));
			pedMaxStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_33, false));
			num = 50;
			break;
	
		case 1:
			pedStamina = PED::_GET_PED_STAMINA(Global_33);
			pedMaxStamina = PED::_GET_PED_MAX_STAMINA(Global_33);
			num = 8;
			break;
	
		case 2:
			pedStamina = PLAYER::_GET_PLAYER_DEAD_EYE(PLAYER::GET_PLAYER_INDEX());
			pedMaxStamina = PLAYER::_GET_PLAYER_MAX_DEAD_EYE(PLAYER::GET_PLAYER_INDEX(), 0);
			num = 14;
			break;
	}

	num3 = (float)num * iParam1 + pedStamina;

	if (num3 > pedMaxStamina)
		num2 = pedMaxStamina - pedStamina;
	else
		num2 = num3 - pedStamina;

	return num2 / 2f;
}

void func_378(int iParam0) // Position - 0xA86E Signature - 22 01 05 00 00 03 01 00 AF 67 03 66 00 2F 15 06 00 50 01 00 68 0E 00 66 00 08 15 08 00 66 03 03 05 00 15
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(ped);

	num = func_480(2);
	func_481(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_379(int iParam0, BOOL bParam1) // Position - 0xA8AB Signature - 22 02 05 00 00 66 00 2F 15
{
	int num;

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = 10;

	num = func_482(2);
	func_483(BUILTIN::TO_FLOAT(iParam0 * num), false, bParam1);
	return;
}

void func_380(int iParam0) // Position - 0xA8E0 Signature - 22 01 05 00 00 03 01 00 AF 67 03 66 00 2F 15 06 00 50 01 00 68 0E 00 66 00 08 15 08 00 66 03 03 05 00 94
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_0xFC3B580C4380B5B7(ped);

	num = func_484(2);
	func_485(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

float func_381(float fParam0, float fParam1) // Position - 0xA91D Signature - 22 02 04 00 00 66 01 73
{
	if (fParam1 != 0f)
		return (fParam1 / 100f) * 100f;

	return (fParam0 / 8f) * 100f;
}

void func_382(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xA94B Signature - 22 05 07 00 00 66 01
{
	if (fParam1 == 0f)
		return;

	if (bParam4)
		fParam1 = func_486(iParam0, fParam1, true);

	func_488(iParam0, func_487(iParam0, 2) + fParam1, bParam2, bParam3, true, 2);
	return;
}

float func_383(float fParam0, int iParam1) // Position - 0xA984 Signature - 22 02 04 00 00 66 01 3C
{
	switch (iParam1)
	{
		case 0:
			return fParam0 * 0.033f;
	
		case 1:
			return fParam0 * 2f;
	
		case 2:
			return fParam0 * 120f;
	
		case 3:
			return fParam0 * 2880f;
	
		default:
		
	}

	return fParam0;
}

int func_384(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0xA9D6 Signature - 22 04 06 00 00 03
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		return 0;

	return func_489(iParam0, fParam1, bParam2, bParam3);
}

void func_385(float fParam0, BOOL bParam1) // Position - 0xA9FA Signature - 22 02 04 00 00 66 00 86
{
	if (fParam0 > 10f)
		fParam0 = 10f;

	if (func_490())
		func_491(fParam0, 0);

	if (bParam1)
	{
		Global_17418.f_55.f_2459.f_41 = Global_17418.f_55.f_2459.f_41 + 1;
	
		if (5 == Global_17418.f_55.f_2459.f_41)
			func_97(109, false);
	}

	return;
}

struct<2> func_386(int iParam0) // Position - 0xAA52 Signature - 22 01 05 00 00 66 00 67
{
	int num;

	num = iParam0;
	return num;
}

void func_387(var uParam0, var uParam1, int iParam2) // Position - 0xAA62 Signature - 22 03 05 00 00 4B
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

BOOL func_388(Hash hParam0) // Position - 0xAA7F Signature - 22 01 03 00 00 66 00 39 4B
{
	return func_42(hParam0) == joaat("consumable");
}

void func_389(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xAA93 Signature - 22 07 2F
{
	BOOL flag;
	int value;
	var unk;
	int num;
	char* str;
	int num2;
	int num3;
	int num4;
	int num5;
	char* str2;
	char* str3;
	int num6;
	char* str4;
	Hash hash;
	Hash hash2;
	int value2;
	const char* str5;
	var unk7;

	if (!func_41(hParam0, 0))
		return;
	else if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;
	else if (iParam1 == 0)
		return;

	if (!func_492() || bParam6)
	{
		func_493(hParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}

	flag = false;
	value = MISC::ABSI(iParam1);
	TEXT_LABEL_ASSIGN_STRING(&unk, value == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);

	if (hParam0 == joaat("AMMO_MOONSHINEJUG_MP"))
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_GET_PUMP", 32);

	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, value == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);
		flag = true;
	}
	else if (bParam2 && func_495(hParam0, 2097152))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		flag = true;
	}

	num = func_42(hParam0);
	num2 = 0;
	num3 = joaat("Inventory");

	if (num == joaat("AMMO") && hParam0 != joaat("ammo_hatchet") && hParam0 != joaat("ammo_hatchet_cleaver") && hParam0 != joaat("ammo_hatchet_hunter") && hParam0 != joaat("ammo_tomahawk_ancient") && hParam0 != joaat("ammo_poisonbottle") && hParam0 != joaat("AMMO_MOONSHINEJUG_MP") && !func_62(hParam0, -1982291600) && !func_62(hParam0, 137764179))
	{
		num2 = joaat("ammo_types");
		num3 = joaat("ammo_types");
	}

	num4 = func_75(hParam0);

	if (num == joaat("weapon_mod") || num == joaat("weapon_decoration") || num4 == -1674363638 || num4 == 252325943 || num4 == 829857647 || num4 == -636562458 || num4 == 1341188928 || num4 == 1216664798)
	{
		str = "ITEMTYPE_UPGRADES";
		str.f_1 = "itemtype_textures";
	}
	else if (!func_402(hParam0, &str, num3, num2, 0, joaat("ui_itemviewer")))
	{
		str = "_PLACEHOLDER";
		str.f_1 = "inventory_items";
	}

	if (MISC::GET_HASH_KEY(str) == 121560594)
		str = "DOCUMENT_MAP_GENERIC";

	if (bParam5)
	{
		str = "ITEMTYPE_ORDERED_ITEM";
		str.f_1 = "itemtype_textures";
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	num5 = joaat("COLOR_PURE_WHITE");
	str2 = "Transaction_Positive";
	str3 = "Transaction_Feed_Sounds";
	num6 = 0;

	if (flag)
	{
		num5 = joaat("color_greymid");
		str2 = "Transaction_Negative";
		num6 = 1;
	}

	if (func_62(hParam0, 474910316))
	{
		str4 = func_496(hParam0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(str4))
		{
			str2 = str4;
			str3 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}

	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(hParam0))
		if (!flag && !bParam2)
			num5 = joaat("color_rpg_special_1");
		else
			num5 = joaat("color_yellowdark");

	if (func_62(hParam0, 1816585950))
		num5 = joaat("color_objective");

	if (func_497(hParam0))
		if (!flag && !bParam2)
			num5 = joaat("color_yellow");
		else
			num5 = joaat("color_yellowdark");

	hash = func_407(hParam0, false);

	if (func_498(num4) && func_62(hParam0, -306684263) && hash != 0)
	{
		hash = func_499(hParam0);
	}
	else if (func_42(hParam0) == joaat("CLOTHING"))
	{
		hash2 = func_406(hParam0);
	
		if (func_41(hash2, 0))
			hash = func_407(hash2, false);
	}

	if (func_500(hParam0, 1443104131) && bParam3)
	{
		value2 = 1;
		func_501(hParam0, -915411861, &value2, false);
		value = BUILTIN::CEIL(BUILTIN::TO_FLOAT(value) / BUILTIN::TO_FLOAT(value2));
		iParam1 = BUILTIN::CEIL(BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(value2));
	}

	str5 = func_408(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, hash), value), num5);

	if (iParam1 == 1)
		str5 = MISC::VAR_STRING(0, hash);

	if (num4 == -1839668642 && hParam0 != joaat("clothing_item_hair_none") && hParam0 != 1326838792 && hParam0 != -230310728 || num4 == 231148558 && hParam0 != joaat("clothing_item_m_beard_stubble") && hParam0 != joaat("clothing_item_beard_none") || num4 == 252325943 && hParam0 != joaat("clothing_blend_lipstick_none") || num4 == -636562458 && hParam0 != joaat("clothing_blend_eyeshadow_none"))
		str5 = MISC::VAR_STRING(0, func_502(hParam0, -442898163));

	if (num4 == -126813555 || num4 == 1946043663)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk7, "", 128);
	
		if (func_503(hParam0, &unk7))
			str5 = func_505(func_504(unk7), joaat("COLOR_PURE_WHITE"));
	}

	func_409(str5, str.f_1, MISC::GET_HASH_KEY(str), num6, num5, str3, str2, 0, true);
	return;
}

struct<2> func_390(Hash hParam0) // Position - 0xAF6E Signature - 22 01 07 00 00 66 00 2F
{
	var unk;
	var unk3;

	if (!func_41(hParam0, 0))
		return unk;

	if (func_62(hParam0, -305066475))
		if (func_14() == -1)
			if (func_62(hParam0, -537818634))
				return func_386(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_386(joaat("deadeye_items"));
	else if (func_62(hParam0, -537818634))
		return func_386(joaat("medicine_items"));

	if (func_62(hParam0, 2084895747))
		return func_386(joaat("lock_breaker_items"));

	return unk3;
}

BOOL func_391(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0xB002 Signature - 22 04 2F
{
	var unk;
	int num;
	int num2;
	var unk19;
	var unk33;
	int i;
	int num3;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return false;

	unk = { func_219(hParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };

	if (bParam2)
		func_221(&unk, func_220(false));

	if (!func_222(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = -1591664384;

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_105(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_124(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_107(num);
	num3 < iParam1;
	return true;
}

void func_392(int iParam0, BOOL bParam1, int iParam2) // Position - 0xB0CE Signature - 22 03 05 00 00 66 00 5D 1C
{
	Global_1940252.f_5 = iParam0;
	Global_1940252.f_37 = iParam2;

	if (bParam1 || func_506() && iParam2 == 0)
	{
		func_507(1);
		func_508(1);
	}

	return;
}

BOOL func_393() // Position - 0xB108 Signature - 22 00 03 00 00 6D
{
	int num;

	num = Global_1953292.f_595[8];
	num = num + Global_1953292.f_595[10];
	num = num + Global_1953292.f_595[1];
	num = num + Global_1953292.f_595[2];
	num = num + Global_1953292.f_595[5];
	num = num + Global_1953292.f_595[25];
	num = num + Global_1953292.f_595[23];
	num = num + Global_1953292.f_595[18];
	num = num + Global_1953292.f_595[19];
	return num > 0;
}

int func_394(int iParam0) // Position - 0xB19E Signature - 22 01 04 00 00 66 00 39 A3
{
	int num;

	num = func_175(func_509(iParam0), 1);

	if (num != 39)
		return Global_1953292.f_1676.f_1[num /*3*/].f_1;

	return 0;
}

BOOL func_395(int iParam0, var uParam1) // Position - 0xB1CD Signature - 22 02 06 00 00 66 00 39
{
	Hash hash;
	int num;

	num = func_175(func_509(iParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1953292.f_1676.f_1[num /*3*/] != 0 && Global_1953292.f_1676.f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = Global_1953292.f_1676.f_1[num /*3*/];
	
		if (func_75(hash) == iParam0 || iParam0 == 81053684 && func_62(hash, 160827531))
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

Hash func_396(Hash hParam0) // Position - 0xB263 Signature - 22 01 03 00 00 66 00 09 39 72 5B 00 5D 0C CE 1D 18 8C 06 80 01 17 03 50
{
	return Global_1953292.f_1676.f_1[func_175(hParam0, 1) /*3*/];
}

int func_397() // Position - 0xB27D Signature - 22 00 05 00 00 2F 67
{
	int i;
	Hash hash;
	int num;

	num = 0;

	for (i = 0; i < Global_1953292.f_3352.f_26; i = i + 1)
	{
		hash = Global_1953292.f_3352[i];
	
		if (func_75(hash) == -999503751)
			if (func_510() != hash)
				num = num + 1;
	}

	return num;
}

BOOL func_398(Hash hParam0, int iParam1) // Position - 0xB2CE Signature - 22 02 04 00 00 66 01 2F 15 07
{
	if (iParam1 == 0)
		iParam1 = func_511(false);

	if (func_75(hParam0) == -999503751 && func_403(hParam0) != -1)
		return true;

	if (iParam1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		return func_62(hParam0, -287432114);
	else if (iParam1 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		return func_62(hParam0, -133342564);

	return false;
}

BOOL func_399(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xB337 Signature - 22 03 0E 00 00 66 00 66 02 2F 39 BF 38 00 62 4B 05 06 66 00 42 4B 05 2D 4B 05 27 04 66 02 39 33 3C 00 42 4B 0A 06 66 00 42 4B 05 2D 4B 05 27 04 66 02 2F 2F 39 48 60 00 2F 23 04
{
	var unk;
	var guid;

	unk = { func_122(hParam0, bParam2, 0) };
	guid = { func_123(hParam0, unk, unk.f_4, bParam2) };

	if (func_182(hParam0, unk, unk.f_4, bParam2, false, false) <= 0)
		return false;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_113(bParam2), &guid, bParam1);
	return true;
}

int func_400(int iParam0) // Position - 0xB389 Signature - 22 01 03 00 00 66 00 3C 07 00 D3
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
	
		case -1719060085:
			return 16;
	
		case -999503751:
			return 1;
	
		case -525676072:
			return 4;
	
		case 81053684:
			return 8;
	
		case 119907797:
			return 32;
	
		case 1388798186:
			return 64;
	
		default:
		
	}

	return 0;
}

BOOL func_401(int iParam0) // Position - 0xB3E4 Signature - 22 01 03 00 00 5D 0C CE 1D 18 18
{
	return Global_1953292.f_3352.f_33.f_6 && iParam0 != false;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_402(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0xB3FC Signature - 22 06 2E
{
	int i;
	Hash hashKey;
	Hash hashKey2;
	var unk;

	unk.f_2 = 5;
	unk.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &unk))
	{
		for (i = 0; i < 5; i = i + 1)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(unk.f_2[i /*3*/]))
				goto 0xE3;
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(unk.f_2[i /*3*/].f_1))
			{
			}
			else
			{
				hashKey = MISC::GET_HASH_KEY(unk.f_2[i /*3*/]);
				hashKey2 = MISC::GET_HASH_KEY(unk.f_2[i /*3*/].f_1);
			
				if (iParam2 != 0 && unk.f_2[i /*3*/].f_2 != iParam2)
					goto 0xE3;
			
				if (hParam3 != 0 && hashKey2 != hParam3)
					goto 0xE3;
			
				if (hParam4 != 0 && hashKey != hParam4)
					goto 0xE3;
			
				if (hParam5 != 0 && hashKey2 == hParam5)
				{
				}
				else
				{
					*uParam1 = { unk.f_2[i /*3*/] };
					return true;
				}
			}
		}
	}

	return false;
}

int func_403(Hash hParam0) // Position - 0xB4EF Signature - 22 01 03 00 00 66 00 3C 0B
{
	switch (hParam0)
	{
		case -2011879201:
			return 5;
	
		case -1323870201:
			return 8;
	
		case -1063340820:
			return 6;
	
		case -808817534:
			return 3;
	
		case 97391779:
			return 2;
	
		case 217155793:
			return 1;
	
		case 491602716:
			return 0;
	
		case 967218463:
			return 10;
	
		case 1270922359:
			return 4;
	
		case 1632140501:
			return 9;
	
		case 2127262701:
			return 7;
	
		default:
		
	}

	return -1;
}

BOOL func_404(int iParam0, int iParam1) // Position - 0xB571 Signature - 22 02 04 00 00 66 01 08 15 0D 00 87 0A 44 80 37 18 98 02 78 F1 06 67 01 66
{
	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	if (iParam1 > -1 && iParam1 < 11)
		return Global_17418.f_55.f_664.f_33[iParam1 /*120*/] && iParam0 != false;

	return false;
}

struct<8> func_405(int iParam0) // Position - 0xB5B4 Signature - 22 01 0B 00 00 42
{
	var unk;

	if (func_404(4, iParam0))
		return Global_17418.f_2645[iParam0 /*8*/];

	TEXT_LABEL_ASSIGN_STRING(&unk, HUD::GET_STRING_FROM_HASH_KEY(func_512(iParam0)), 64);
	return unk;
}

Hash func_406(Hash hParam0) // Position - 0xB5E9 Signature - 22 01 12
{
	int num;
	var unk;
	int collectionId;
	int num2;
	int i;
	Hash hash;

	num = func_513(hParam0);

	if (num == 0)
		return 0;

	unk = { func_514(-1591664384, -1591664384, 0, 0, 0, 0, -1, num, 0) };

	if (func_515(unk, &collectionId, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(collectionId, i, &hash) && func_516(hash))
			{
				func_517(collectionId);
				return hash;
			}
		}
	
		func_517(collectionId);
	}

	return 0;
}

Hash func_407(Hash hParam0, BOOL bParam1) // Position - 0xB66E Signature - 22 02 05 00 00 66 00 2F 39 31 17 00 05 8B 04 00 2F 50 02 01 66 00 66
{
	Hash hash;

	if (!func_41(hParam0, 0))
		return 0;

	hash = func_518(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

const char* func_408(const char* sParam0, int iParam1) // Position - 0xB69C Signature - 22 02 04 00 00 6D
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_409(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0xB6B6 Signature - 22 09 20
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num.f_1 = sParam5;
	num.f_2 = sParam6;
	num.f_3 = iParam7;
	num = 450;
	unk13.f_1 = sParam0;
	unk13.f_2 = sParam1;
	unk13.f_3 = hParam2;
	unk13.f_4 = iParam3;
	unk13.f_5 = iParam4;
	unk13.f_6 = 0;
	num2 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&num, &unk13, bParam8);
	func_519(sParam0, sParam1, hParam2);
	return num2;
}

void func_410() // Position - 0xB719 Signature - 22 00 02 00 00 2F 5D 0C CE 1D 8C 16
{
	Global_1953292.f_1046 = 0;
	return;
}

BOOL func_411(Hash hParam0) // Position - 0xB729 Signature - 22 01 03 00 00 66 00 2F 39 31 17 00 05 8B 04 00 2F 50 01 01 66 00 37
{
	if (!func_41(hParam0, 0))
		return false;

	if (func_62(hParam0, 160827531) || func_75(hParam0) == 81053684)
		return true;

	return false;
}

void func_412(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xB765 Signature - 22 05 82
{
	BOOL flag;
	var unk;
	var unk120;
	int i;
	Hash hash;

	flag = false;

	switch (func_75(hParam0))
	{
		case -2061583405:
			flag = func_520(hParam0, &(Global_1953292.f_3352.f_28), bParam4);
			break;
	
		case -1719060085:
			flag = func_520(hParam0, &(Global_1953292.f_3352.f_31), bParam4);
			break;
	
		case -999503751:
			flag = func_520(hParam0, &(Global_1953292.f_3352.f_27), bParam4);
		
			if (func_62(hParam0, -166674229))
			{
				unk.f_1 = 39;
			
				if (func_521(&unk, hParam0, &unk120, false, true, false, 0, false, true, 8))
				{
					for (i = 0; i < 39; i = i + 1)
					{
						hash = unk.f_1[i /*3*/];
					
						if (func_41(hash, 0))
							func_412(hash, false, false, false, false);
					}
				}
			}
			break;
	
		case -525676072:
			flag = func_520(hParam0, &(Global_1953292.f_3352.f_29), bParam4);
			break;
	
		case 81053684:
			flag = func_520(hParam0, &(Global_1953292.f_3352.f_30), bParam4);
			break;
	
		case 119907797:
			flag = func_520(hParam0, &(Global_1953292.f_3352.f_32), bParam4);
			break;
	
		case 1388798186:
			flag = func_520(hParam0, &(Global_1953292.f_3352.f_33.f_7), bParam4);
			break;
	
		default:
			if (func_62(hParam0, 160827531))
				flag = func_520(hParam0, &(Global_1953292.f_3352.f_30), bParam4);
			break;
	}

	if (bParam3 && flag)
		func_302(false, hParam0);

	if (bParam2)
		func_300();

	if (bParam1)
		func_303(false, false);

	return;
}

Hash func_413(Hash hParam0) // Position - 0xB8EB Signature - 22 01 0B 00 00 4B
{
	int num;
	var unk;

	func_522(&unk, 9044914, hParam0, 0, 0, 0);
	DATAFILE::_PARSEDDATA_GET_FILE(&unk);

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&unk))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &unk, -1168434056))
			return 0;
	
		return num;
	}

	return 0;
}

BOOL func_414(Hash hParam0, int iParam1) // Position - 0xB92F Signature - 22 02 05 00 00 66 01 5D
{
	int num;

	num = func_75(Global_1953292.f_1676.f_1[iParam1 /*3*/]);

	if (func_75(hParam0) == num)
		return true;
	else if (hParam0 == -992705550)
		return func_62(Global_1953292.f_1676.f_1[iParam1 /*3*/], 160827531);
	else if (hParam0 == 491480257)
		return num == -2061583405 || num == 2086043523;
	else if (hParam0 == -1789518572)
		return num == -923693316;
	else if (hParam0 == -275040139)
		return num == 1882579758;

	return false;
}

void func_415(var uParam0, int iParam1) // Position - 0xB9D6 Signature - 22 02 08 00 00 4B
{
	int i;
	int num;
	var unk;

	unk = 39;

	for (i = 0; i < 16; i = i + 1)
	{
		Global_1953292.f_2938.f_35[i /*2*/] = { unk };
	
		if (i < *uParam0)
		{
			if (func_523(&uParam0->f_2[i /*2*/], 2) || uParam0->f_2[i /*2*/] == iParam1 || uParam0->f_2[i /*2*/] == 39)
			{
				uParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_523(&uParam0->f_2[i /*2*/], 1))
					func_524(&uParam0->f_2[i /*2*/], 2, 6);
			
				Global_1953292.f_2938.f_35[num /*2*/] = { uParam0->f_2[i /*2*/] };
				num = num + 1;
				uParam0->f_2[i /*2*/] = { unk };
			}
		}
	
		uParam0->f_2[i /*2*/] = { unk };
	}

	for (i = 0; i < num; i = i + 1)
	{
		uParam0->f_2[i /*2*/] = { Global_1953292.f_2938.f_35[i /*2*/] };
	}

	*uParam0 = num;
	return;
}

void func_416(var uParam0, int iParam1, int iParam2) // Position - 0xBAD3 Signature - 22 03 07 00 00 66 00 76
{
	int i;
	int j;

	if (*uParam0 + 1 >= 16)
		return;

	if (!func_525(uParam0, 1))
		func_526(uParam0, 1);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->f_2[i /*2*/] == iParam1)
		{
			uParam0->f_2[i /*2*/].f_1 = iParam2;
			return;
		}
	
		if (Global_1953292.f_83[uParam0->f_2[i /*2*/] /*12*/].f_2 > Global_1953292.f_83[iParam1 /*12*/].f_2)
		{
			for (j = *uParam0; j >= i + 1; j = j + -1)
			{
				uParam0->f_2[j /*2*/] = { uParam0->f_2[j - 1 /*2*/] };
			}
		
			uParam0->f_2[i /*2*/] = iParam1;
			uParam0->f_2[i /*2*/].f_1 = iParam2;
			*uParam0 = *uParam0 + 1;
			return;
		}
	}

	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0 = *uParam0 + 1;
	return;
}

void func_417(var uParam0, var uParam1) // Position - 0xBBB9 Signature - 22 02 0D
{
	int num;
	int num2;
	int num3;

	num = func_527(0);
	num.f_1 = uParam1;
	num.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num);

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&num))
		return;

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, 1409451727))
		{
		}
		else
		{
			num3 = func_175(num2, 1);
		
			if (num3 < 0 || num3 > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, joaat("Component")))
			{
			}
			else if (uParam0->f_1[num3 /*3*/] != num2)
			{
			}
			else
			{
				uParam0->f_1[num3 /*3*/] = Global_1953292.f_83[num3 /*12*/];
				uParam0->f_1[num3 /*3*/].f_1 = 0;
				func_312(num3, 0);
			}
		}
	}

	return;
}

void func_418(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0xBC6C Signature - 22 04 08 00 00 66 01 37
{
	int num;
	int num2;

	if (hParam1 == -230310728 || hParam1 == 1326838792)
		uParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
		uParam0->f_1[iParam2 /*3*/].f_1 = joaat("base");

	num = 10;
	num2 = func_75(uParam0->f_1[num /*3*/]);

	if (num2 == 119907797)
	{
		if (func_62(hParam1, 458991572))
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_312(num, iParam3);
		}
	}
	else if (num2 == 2086043523)
	{
		if (func_62(hParam1, -93469181))
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_312(num, iParam3);
		}
	}
	else if (num2 == -525676072)
	{
		if (func_62(hParam1, -93469181))
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_312(num, iParam3);
		}
	}

	num = 11;

	if (func_62(uParam0->f_1[num /*3*/], -1446529222) && func_62(hParam1, -93469181))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	num = 12;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_62(hParam1, -93469181) && func_62(uParam0->f_1[num /*3*/], -1303648999))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	return;
}

void func_419(var uParam0, Hash hParam1, int iParam2) // Position - 0xBE41 Signature - 22 03 05 00 00 66 01 37
{
	if (hParam1 == joaat("clothing_item_m_beard_stubble"))
		uParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
		uParam0->f_1[iParam2 /*3*/].f_1 = joaat("base");

	return;
}

void func_420(var uParam0, Hash hParam1, BOOL bParam2, int iParam3) // Position - 0xBE86 Signature - 22 04 08 00 00 09
{
	int num;
	Hash hash;

	func_312(1, iParam3);

	if (bParam2)
		return;

	num = 12;
	hash = uParam0->f_1[num /*3*/];

	if (!func_178(hash, false) && func_62(hash, -180472385))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	num = 10;
	hash = uParam0->f_1[num /*3*/];

	if (hash != Global_1953292.f_83[num /*12*/] && func_75(hash) == 2086043523 && func_62(hParam1, -93469181))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	return;
}

void func_421(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xBF4F Signature - 22 04 06 00 00 66 02 39 92 26 00 3C 02 00 D8
{
	switch (func_75(hParam2))
	{
		case -525676072:
			func_528(uParam0, bParam1, iParam3);
			break;
	
		case 2086043523:
			func_529(uParam0, bParam1, iParam3);
			break;
	}

	return;
}

void func_422(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xBF89 Signature - 22 04 07 00 00 6D 12 67 06 66 06 66 00 80 01 17 03 39 92 26 00 37 11 EF 62 36 15 08 00 66 06 66 03 39 B7 8C 00 09
{
	int num;

	num = 18;

	if (func_75(uParam0->f_1[num /*3*/]) == 912453393)
		func_312(num, iParam3);

	func_312(1, iParam3);

	if (bParam1)
		return;

	if (func_411(hParam2))
		func_530(uParam0, bParam1, iParam3);

	num = 11;

	if (func_62(hParam2, -180472385) && !func_178(uParam0->f_1[num /*3*/], false))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	if (func_62(hParam2, -1303648999))
		return;

	num = 16;

	if (uParam0->f_1[num /*3*/].f_1 == 1530758430)
	{
		uParam0->f_1[num /*3*/].f_1 = joaat("base");
		func_312(num, iParam3);
		num = 20;
	
		if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
			func_312(num, iParam3);
	}
	else if (uParam0->f_1[num /*3*/].f_1 == 1334603721)
	{
		uParam0->f_1[num /*3*/].f_1 = -1539589426;
		func_312(num, iParam3);
		num = 20;
	
		if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
			func_312(num, iParam3);
	}

	return;
}

void func_423(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xC0CA Signature - 22 04 0B
{
	int num;
	int metapedType;
	Hash hash;
	int num2;
	int num3;

	num = 12;
	metapedType = 0;

	if (func_304() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		metapedType = 1;

	if (joaat("neckties") == PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(uParam0->f_1[num /*3*/], metapedType, true))
	{
		if (bParam1 || func_62(hParam2, 1872585553) || func_75(hParam2) == 1882579758)
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_312(num, iParam3);
		}
	}

	hash = uParam0->f_1[num /*3*/];

	if (!func_178(hash, false) && !func_62(hash, -1303648999) && func_62(hParam2, -1527414429))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	num = 17;

	if (!func_178(uParam0->f_1[num /*3*/], false) && func_62(hParam2, 1467402774))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	num = 29;

	if (!func_178(uParam0->f_1[num /*3*/], false) && func_62(hParam2, 1126863852))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	num = 34;
	hash = uParam0->f_1[num /*3*/];

	if (func_75(hash) == 1759215194 && func_75(hParam2) == 1882579758)
	{
		uParam0->f_1[num /*3*/] = func_413(hParam2);
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}
	else if (func_531(hash, bParam1, metapedType))
	{
		hash = uParam0->f_1[18 /*3*/];
		num2 = 0;
	
		if (func_75(hash) == 912453393 && func_532(32))
			num2 = num2 | 1;
	
		if (func_62(hParam2, 525391395))
			num2 = num2 | 2;
	
		hash = func_533(Global_1953292.f_83[num /*12*/].f_9, num2);
	
		if (hash != 0)
		{
			uParam0->f_1[num /*3*/] = hash;
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_312(num, iParam3);
			func_431(uParam0, false, hash, iParam3);
		}
	}

	num = 21;

	if (!func_178(uParam0->f_1[num /*3*/], false) && func_62(hParam2, 196770179))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	num3 = 23;

	if (!func_178(uParam0->f_1[num /*3*/], false) || uParam0->f_1[num3 /*3*/] != Global_1953292.f_83[num3 /*12*/] && func_62(uParam0->f_1[num3 /*3*/], -1655064541))
		func_534(uParam0, iParam3);

	return;
}

void func_424(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xC3B3 Signature - 22 04 07 00 00 66 01 8B 03 00 50 04 00 6D 1D
{
	int num;

	if (bParam1)
		return;

	num = 29;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_62(hParam2, 358628372))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	return;
}

void func_425(var uParam0, BOOL bParam1, Hash hParam2, int iParam3, int iParam4) // Position - 0xC412 Signature - 22 05 07 00 00 66 02
{
	switch (func_75(hParam2))
	{
		case 698653232:
			func_535(uParam0, bParam1, hParam2, iParam4);
			break;
	
		case 912453393:
			func_536(uParam0, bParam1, iParam3, iParam4);
			break;
	}

	return;
}

void func_426(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xC450 Signature - 22 04 06 00 00 66 02 39 92 26 00 3C 03
{
	switch (func_75(hParam2))
	{
		case -1080198344:
		case 1868067663:
			func_537(uParam0, bParam1, hParam2, iParam3);
			break;
	
		case 294388917:
			func_538(uParam0, bParam1, hParam2, iParam3);
			break;
	}

	return;
}

void func_427(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xC494 Signature - 22 04 07 00 00 6D 12 67 06 66 06 66 00 80 01 17 03 39 92 26 00 37 11 EF 62 36 15 08 00 66 06 66 03 39 B7 8C 00 66
{
	int num;

	num = 18;

	if (func_75(uParam0->f_1[num /*3*/]) == 912453393)
		func_312(num, iParam3);

	if (bParam1)
		return;

	num = 23;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_62(hParam2, 1537768121))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_534(uParam0, iParam3);

	return;
}

void func_428(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xC530 Signature - 22 04 07 00 00 66 01 05
{
	int num;

	if (!bParam1)
	{
		num = 21;
	
		if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		{
			if (func_62(uParam0->f_1[num /*3*/], 1537768121))
			{
				uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
				uParam0->f_1[num /*3*/].f_1 = 0;
			}
		
			func_312(num, iParam3);
		}
	}

	num = 16;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		if (func_62(hParam2, -1655064541))
			func_534(uParam0, iParam3);
		else
			func_312(num, iParam3 | 16);

	num = 20;

	if (uParam0->f_1[num /*3*/].f_1 != -529972961)
		return;

	uParam0->f_1[num /*3*/].f_1 = joaat("base");
	func_312(num, iParam3);
	num = 25;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_312(num, iParam3);

	num = 28;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_312(num, iParam3);

	return;
}

void func_429(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xC63F Signature - 22 04 07 00 00 66 01 8B 03 00 50 04 00 37
{
	int num;

	if (bParam1)
		return;

	if (func_539(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) && func_62(hParam2, -1230785684))
	{
		num = 27;
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	num = 32;

	if (!func_178(uParam0->f_1[num /*3*/], false) && func_62(hParam2, 1016511012))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	return;
}

void func_430(var uParam0, BOOL bParam1, int iParam2) // Position - 0xC6DE Signature - 22 03 06 00 00 66 01 8B 03 00 50 03 00 6D 11
{
	int num;

	if (bParam1)
		return;

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_62(uParam0->f_1[num /*3*/], 358628372))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam2);
	}

	return;
}

void func_431(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xC743 Signature - 22 04 06 00 00 66 02 39 92 26 00 3C 07
{
	switch (func_75(hParam2))
	{
		case -1740828670:
			func_544(uParam0, bParam1, hParam2, iParam3);
			break;
	
		case 344283346:
			func_545(uParam0, bParam1, iParam3);
			break;
	
		case 502936876:
			func_543(uParam0, bParam1, iParam3);
			break;
	
		case 684307653:
			func_542(uParam0, bParam1, hParam2, iParam3);
			break;
	
		case 1223979091:
		case 2047428024:
			func_541(uParam0, bParam1, hParam2, iParam3);
			break;
	
		case 1759215194:
			func_540(uParam0, iParam3);
			break;
	}

	return;
}

void func_432(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xC7D3 Signature - 22 04 06 00 00 66 02 39 92 26 00 3C 02 00 FC
{
	switch (func_75(hParam2))
	{
		case -923693316:
			func_547(uParam0, bParam1, hParam2, iParam3);
			break;
	
		case 1769055947:
			func_546(uParam0, bParam1, hParam2, iParam3);
			break;
	}

	return;
}

void func_433(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xC811 Signature - 22 04 08 00 00 66 01 8B 0D
{
	int num;
	Hash hash;

	if (bParam1)
	{
		func_548(uParam0, iParam3, false, true);
		return;
	}

	num = 35;
	hash = uParam0->f_1[num /*3*/];

	if (func_62(hParam2, 813132419) && uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_75(hash) == -923693316)
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	if (func_62(hParam2, -1650340550) && uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_75(hash) == 1769055947)
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	num = 37;

	if (func_62(hParam2, -1278198125) && uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	return;
}

int func_434(Hash hParam0, BOOL bParam1, Hash hParam2) // Position - 0xC940 Signature - 22 03 06 00 00 66 02 2F
{
	int i;

	if (hParam2 == 0)
		return -1;

	for (i = 0; i < PED::_GET_SHOP_ITEM_NUM_WEARABLE_STATES(hParam0, bParam1, true); i = i + 1)
	{
		if (PED::_GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX(hParam0, i, bParam1, true) == hParam2)
			return i;
	}

	return -1;
}

BOOL func_435(Hash hParam0, Hash hParam1, var uParam2) // Position - 0xC982 Signature - 22 03 05 00 00 37 90
{
	*uParam2 = joaat("base");
	return true;
}

int func_436(Hash hParam0) // Position - 0xC993 Signature - 22 01 04 00 00 66 00 39 EF
{
	int num;

	num = func_403(hParam0);

	if (num != -1)
		return num;

	return -1;
}

BOOL func_437(int iParam0) // Position - 0xC9AF Signature - 22 01 03 00 00 66 00 37 5E
{
	return iParam0 == -1839668642 || iParam0 == -1415811768 || iParam0 == 231148558 || iParam0 == -1674363638 || iParam0 == 252325943 || iParam0 == 1216664798 || iParam0 == 1341188928 || iParam0 == 829857647 || iParam0 == -636562458 || iParam0 == 1115104855;
}

void func_438(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0xCA3D Signature - 22 04 06 00 00 66 01 8B
{
	if (bParam1)
		Global_1953292.f_1676.f_1[iParam0 /*3*/] = { Global_1953292.f_1557.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (iParam3 == -1)
		iParam3 = Global_17418.f_55.f_664.f_1777;

	func_549(&Global_1953292.f_1676.f_1[iParam0 /*3*/], iParam0, iParam3);
	return;
}

BOOL func_439(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0xCA99 Signature - 22 03 0E 00 00 66 00 66 02 2F 39 BF 38 00 62 4B 05 06 66 00 42 4B 05 2D 4B 05 27 04 66 02 39 33 3C 00 42 4B 0A 06 42
{
	var unk;
	var unk6;

	unk = { func_122(hParam0, bParam2, 0) };
	unk6 = { func_123(hParam0, unk, unk.f_4, bParam2) };
	return func_318(unk6, iParam1, bParam2);
}

void func_440(int iParam0, BOOL bParam1, int iParam2) // Position - 0xCACE Signature - 22 03 05 00 00 5D 0C
{
	func_550(&(Global_1953292.f_1557), iParam0);
	func_551(2, iParam0, 6);

	if (bParam1)
		func_303(false, true);

	return;
}

int func_441(Any* panParam0, Hash hParam1, BOOL bParam2, int iParam3) // Position - 0xCAF6 Signature - 22 04 14
{
	var unk;

	unk.f_9 = -1591664384;

	if (func_552(panParam0, hParam1, &unk, bParam2, iParam3))
		return unk.f_4;

	return 0;
}

int func_442(Any* panParam0, int iParam1, BOOL bParam2) // Position - 0xCB24 Signature - 22 03 6F
{
	int num;
	var unk;
	int num2;
	var unk15;
	var unk44;
	var unk70;
	var unk88;

	num = -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return num;

	unk.f_9 = -1591664384;

	if (!func_236(*panParam0, &unk, true, false, -1))
		return num;

	if (unk.f_10 == iParam1)
		return num;

	if (unk.f_13)
		return num;

	num2 = func_42(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_553(*panParam0, true, false) };
		unk15.f_10 = iParam1;
		num = func_554(joaat("UPDATE"), &unk15, bParam2);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("coach"))
	{
		unk44 = { func_555(*panParam0, true, false) };
		unk44.f_10 = iParam1;
		num = func_556(joaat("UPDATE"), &unk44, bParam2);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk70 = { func_557(*panParam0, true, false) };
		unk70.f_10 = iParam1;
		num = func_558(joaat("UPDATE"), &unk70, bParam2);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk88 = { func_559(&unk, false) };
		unk88.f_10 = iParam1;
		num = func_229(joaat("UPDATE"), &unk88, bParam2);
	
		if (num == -1)
			return num;
	}

	return num;
}

float func_443(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0xCC67 Signature - 22 04 06 00 00 66 00 03
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

int func_444(int iParam0) // Position - 0xCCAF Signature - 22 01 03 00 00 66 00 3C 10
{
	switch (iParam0)
	{
		case 0:
			return 24;
	
		case 1:
			return 25;
	
		case 2:
			return 26;
	
		case 3:
			return 27;
	
		case 4:
			return 28;
	
		case 5:
			return 29;
	
		case 6:
			return 30;
	
		case 7:
			return 34;
	
		case 11:
			return 31;
	
		case 12:
			return 32;
	
		case 13:
			return 33;
	
		case 14:
			return 35;
	
		case 15:
			return 41;
	
		case 16:
			return 39;
	
		case 17:
			return 40;
	
		case 18:
			return 38;
	
		default:
		
	}

	if (func_207(iParam0) == joaat("posse_versus"))
		return 37;

	return 23;
}

BOOL func_445() // Position - 0xCD84 Signature - 22 00 02 00 00 39 9C
{
	if (func_46() || Global_1572887.f_72.f_40 > 10 || func_560())
		if (!func_273() && Global_265213.f_122484.f_80.f_16.f_2 != -504335712 && !func_561(Global_265213.f_122484.f_80.f_16.f_3))
			return true;

	return false;
}

BOOL func_446(int iParam0, int iParam1) // Position - 0xCDEE Signature - 22 02 04 00 00 66 01 6D FF
{
	if (iParam1 == 255)
		return Global_1102813.f_3 && iParam0 != false;

	return Global_1101558[iParam1 /*38*/].f_3 && iParam0 != false;
}

BOOL func_447() // Position - 0xCE1A Signature - 22 00 03 00 00 03 01 01
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();
	return Global_1051832.f_3279 == frameCount || Global_1051832.f_3279 == frameCount - 1;
}

void func_448(int iParam0) // Position - 0xCE44 Signature - 22 01 03 00 00 5D B8 0C 10 78 40 0E 66 00 30
{
	Global_1051832.f_3648 = Global_1051832.f_3648 || iParam0;
	return;
}

BOOL func_449() // Position - 0xCE5D Signature - 22 00 02 00 00 70 CD
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false);
}

int func_450() // Position - 0xCE79 Signature - 22 00 02 00 00 5D FD
{
	return Global_1051645.f_12;
}

char* func_451() // Position - 0xCE87 Signature - 22 00 02 00 00 25
{
	return "unnamed";
}

BOOL func_452(int iParam0) // Position - 0xCE93 Signature - 22 01 04 00 00 2F 67 03 66 00
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

BOOL func_453(int iParam0) // Position - 0xCF22 Signature - 22 01 03 00 00 5D 17 00 18 27 0E 08 15 04 00 2F 50 01 01 6D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_562(36, iParam0);
}

int func_454(int iParam0) // Position - 0xCF40 Signature - 22 01 03 00 00 66 00 6D FF 15 09
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_455(Player plParam0) // Position - 0xCF8B Signature - 22 01 03 00 00 03 01 00 75
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_563(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_564(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_456(var uParam0) // Position - 0xCFD0 Signature - 22 01 03 00 00 66 00 76 6D
{
	if (*uParam0 >= 40)
		return false;

	return true;
}

BOOL func_457(Any* panParam0) // Position - 0xCFE5 Signature - 22 01 03 00 00 66 00 39 90 05
{
	if (!func_565(panParam0))
		return false;

	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(panParam0);
}

BOOL func_458(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0xD001 Signature - 22 04 06 00 00 66 02 66
{
	if (func_201(iParam2, iParam3))
		return true;

	return false;
}

void func_459(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xD019 Signature - 22 04 07 00 00 66 00 08 15 03 00 50 04 00 2F
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

	func_566(iParam0, iParam1, iParam2, iParam3);
	return;
}

int func_460(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xD0B7 Signature - 22 04 06 00 00 66 00 39
{
	if (func_567(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_113(bParam1), hParam0, bParam3);
}

BOOL func_461(int iParam0, var uParam1, Any* panParam2) // Position - 0xD0EA Signature - 22 03 05 00 00 11
{
	if (!func_48(iParam0))
		return false;

	func_568(panParam2);

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

BOOL func_462(Any* panParam0, int iParam1) // Position - 0xD1F5 Signature - 22 02 04 00 00 5D F6
{
	*panParam0 = Global_1245174.f_9818;
	panParam0->f_2 = 423895568;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_IS_FILE_LOADED(*panParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_463() // Position - 0xD22C Signature - 22 00 08
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

int func_464() // Position - 0xD264 Signature - 22 00 02 00 00 5D E4
{
	return Global_1110244.f_3667.f_938;
}

int func_465(int iParam0, int iParam1, var uParam2) // Position - 0xD276 Signature - 22 03 06 00 00 66 00 66
{
	int num;

	if (iParam0 > iParam1)
		return -1;

	num = (iParam0 + iParam1) / 2;

	if (*uParam2 < Global_1110244.f_3667.f_729[num /*2*/])
		return func_465(iParam0, num - 1, uParam2);

	if (*uParam2 > Global_1110244.f_3667.f_729[num /*2*/])
		return func_465(num + 1, iParam1, uParam2);

	return num;
}

int func_466(int iParam0) // Position - 0xD2E0 Signature - 22 01 03 00 00 66 00 5D E4 F0 10 18 53 0E 18
{
	return Global_1110244.f_3667.f_729[iParam0 /*2*/].f_1;
}

BOOL func_467(int iParam0) // Position - 0xD2F8 Signature - 22 01 03 00 00 66 00 08 20
{
	return iParam0 > -1 && iParam0 < 83;
}

BOOL func_468(Any* panParam0) // Position - 0xD30E Signature - 22 01 09 00 00 39
{
	int fileHandle;
	var src;

	fileHandle = func_569();

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(fileHandle))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(fileHandle))
		return false;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 5);
	*panParam0 = fileHandle;
	return true;
}

BOOL func_469(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int* piParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0xD347 Signature - 22 0A 0C
{
	uParam0.f_2 = iParam6;
	uParam0.f_3 = iParam7;
	uParam0.f_4 = iParam8;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(piParam5, &uParam0))
		return false;

	return true;
}

struct<8> func_470(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0xD372 Signature - 22 05 07 00 00 62
{
	return func_570(uParam0, 52, 1);
}

int func_471(Hash hParam0) // Position - 0xD385 Signature - 22 01 03 00 00 66 00 3C 14
{
	switch (hParam0)
	{
		case joaat("document_abandoned_loot_map_intro_tumbleweed_2"):
		case joaat("document_abandoned_loot_map_intro_tumbleweed_1"):
		case joaat("document_abandoned_loot_map_intro_tumbleweed_4"):
		case joaat("document_abandoned_loot_map_intro_tumbleweed_3"):
		case joaat("document_abandoned_loot_map_intro_tumbleweed_5"):
			return 3;
	
		case joaat("document_abandoned_loot_map_intro_valentine_5"):
		case joaat("document_abandoned_loot_map_intro_valentine_2"):
		case joaat("document_abandoned_loot_map_intro_valentine_1"):
		case joaat("document_abandoned_loot_map_intro_valentine_4"):
		case joaat("document_abandoned_loot_map_intro_valentine_3"):
			return 1;
	
		case joaat("document_abandoned_loot_map_intro_blackwater_5"):
		case joaat("document_abandoned_loot_map_intro_blackwater_2"):
		case joaat("document_abandoned_loot_map_intro_blackwater_4"):
		case joaat("document_abandoned_loot_map_intro_blackwater_3"):
		case joaat("document_abandoned_loot_map_intro_blackwater_1"):
			return 2;
	
		case joaat("document_abandoned_loot_map_intro_rhodes_2"):
		case joaat("document_abandoned_loot_map_intro_rhodes_3"):
		case joaat("document_abandoned_loot_map_intro_rhodes_1"):
		case joaat("document_abandoned_loot_map_intro_rhodes_4"):
		case joaat("document_abandoned_loot_map_intro_rhodes_5"):
			return 0;
	
		default:
		
	}

	return -1;
}

BOOL func_472(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0xD41E Signature - 22 04 07 00 00 11
{
	int num;

	if (!func_48(iParam0))
		return false;

	if (iParam0 != 2)
		return false;

	num = func_571(iParam0);
	return num >= iParam2 && num <= iParam3;
}

BOOL func_473(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xD459 Signature - 22 03 05 00 00 66 02 8B 0E
{
	if (bParam2)
		if (!func_371(iParam0))
			return false;

	if (Global_1572887.f_14 != -1)
		return Global_17418[iParam0] && bParam1 != false;

	return Global_38.f_4675[iParam0] && bParam1 != false;
}

BOOL func_474(int iParam0) // Position - 0xD49C Signature - 22 01 03 00 00 66 00 39 85 A6 00 05 8B 04 00 2F 50 01 01 66 00 11
{
	if (!func_371(iParam0))
		return false;

	return func_473(iParam0, 2, true);
}

int func_475(BOOL bParam0, int iParam1) // Position - 0xD4BA Signature - 22 02 04 00 00 03 01 01 3C
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return 0;

	if (!Global_1102813.f_16)
		return 0;

	if (!func_572())
		return 0;

	if (!func_198())
		return 0;

	Global_0 = iParam1;

	if (bParam0)
		func_478(&Global_0, 8);

	func_478(&Global_0, 1);
	return 1;
}

BOOL func_476(int iParam0) // Position - 0xD510 Signature - 22 01 03 00 00 66 00 3C 0D
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 22:
		case 23:
		case 25:
		case 26:
		case 31:
		case 33:
		case 36:
		case 37:
			return 1;
	
		default:
			return 0;
	}

	return 0;
}

void func_477(int iParam0) // Position - 0xD57D Signature - 22 01 03 00 00 66 00 3C 1F
{
	switch (iParam0)
	{
		case 2:
			func_97(243, false);
			break;
	
		case 3:
			func_97(244, false);
			break;
	
		case 4:
			func_97(263, false);
			break;
	
		case 5:
			func_97(239, false);
			break;
	
		case 6:
			func_97(259, false);
			break;
	
		case 7:
			func_97(256, false);
			break;
	
		case 8:
			func_97(264, false);
			break;
	
		case 11:
			break;
	
		case 12:
			func_97(267, false);
			break;
	
		case 13:
			func_97(250, false);
			break;
	
		case 15:
			func_97(246, false);
			break;
	
		case 16:
			func_97(240, false);
			break;
	
		case 18:
			func_97(258, false);
			break;
	
		case 19:
			func_97(251, false);
			break;
	
		case 20:
			func_97(252, false);
			break;
	
		case 21:
			func_97(257, false);
			break;
	
		case 24:
			func_97(247, false);
			break;
	
		case 27:
			func_97(249, false);
			break;
	
		case 28:
			func_97(268, false);
			break;
	
		case 29:
			func_97(265, false);
			break;
	
		case 30:
			func_97(260, false);
			break;
	
		case 32:
			func_97(266, false);
			break;
	
		case 34:
			func_97(241, false);
			break;
	
		case 35:
			func_97(253, false);
			break;
	
		case 38:
			func_97(248, false);
			break;
	
		case 39:
			func_97(254, false);
			break;
	
		case 49:
			func_97(261, false);
			break;
	
		case 50:
			func_97(255, false);
			break;
	
		case 51:
			func_97(269, false);
			break;
	
		case 52:
			func_97(242, false);
			break;
	
		case 53:
			func_97(245, false);
			break;
	}

	return;
}

void func_478(int iParam0, int iParam1) // Position - 0xD783 Signature - 22 02 04 00 00 66 00 27 02 66 01 30
{
	iParam0->f_2 = iParam0->f_2 || iParam1;
	return;
}

BOOL func_479() // Position - 0xD796 Signature - 22 00 02 00 00 09 50
{
	return true;
}

int func_480(int iParam0) // Position - 0xD7B5 Signature - 22 01 03 00 00 66 00 11 15 07 00 09 39 22 07 01 67 00 66 00 3C 02 00 00 00 00 00 09 00 01 00 00 00 0D
{
	if (iParam0 == 2)
		iParam0 = func_573(1);

	switch (iParam0)
	{
		case 0:
			return Global_1956875.f_1546;
	
		case 1:
			return Global_1956875.f_1565.f_136;
	
		default:
		
	}

	return -1;
}

void func_481(float fParam0, Ped pedParam1) // Position - 0xD7F5 Signature - 22 02 04 00 00 66 00 73 7D 8B 03 00 50 02 00 66 01 2F 15 08 00 5D 32 C5 13 27 03 67 01 66 01 03 05 01 19 05 8B 03 00 50 02 00 66 01 03 05 00 54 8B 03 00 50 02 00 66 01 66 00 2F
{
	if (fParam0 == 0f)
		return;

	if (pedParam1 == 0)
		pedParam1 = Global_1295666.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	ENTITY::_CHANGE_ENTITY_HEALTH(pedParam1, fParam0, 0, 0);
	return;
}

int func_482(int iParam0) // Position - 0xD839 Signature - 22 01 03 00 00 66 00 11 15 07 00 09 39 22 07 01 67 00 66 00 3C 02 00 00 00 00 00 09 00 01 00 00 00 0F 00 68 1A 00 5D 0B DC 1D 18 0A 06 27 01
{
	if (iParam0 == 2)
		iParam0 = func_573(1);

	switch (iParam0)
	{
		case 0:
			return Global_1956875.f_1546.f_1;
	
		case 1:
			return Global_1956875.f_1565.f_136.f_1;
	
		default:
		
	}

	return -1;
}

void func_483(float fParam0, BOOL bParam1, BOOL bParam2) // Position - 0xD87D Signature - 22 03 08
{
	Player player;
	Ped ped;
	float playerSpecialAbilityMultiplier;

	player = PLAYER::PLAYER_ID();

	if (fParam0 > 0f && func_574(player))
		return;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(player) && fParam0 > 0f && !bParam2)
		return;

	if (fParam0 == 0f)
		return;

	playerSpecialAbilityMultiplier = PLAYER::_GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER(player);

	if (fParam0 < 0f && bParam1 == true)
		bParam1 = false;

	if (!bParam1)
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, 1f);

	if (fParam0 > 0f)
		PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(player, fParam0, 0, 0, 1);
	else
		PLAYER::_SPECIAL_ABILITY_DRAIN_BY_AMOUNT(player, fParam0, 0);

	if (!bParam1)
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, playerSpecialAbilityMultiplier);

	return;
}

int func_484(int iParam0) // Position - 0xD92E Signature - 22 01 03 00 00 66 00 11 15 07 00 09 39 22 07 01 67 00 66 00 3C 02 00 00 00 00 00 09 00 01 00 00 00 0F 00 68 1A 00 5D 0B DC 1D 18 0A 06 27 02
{
	if (iParam0 == 2)
		iParam0 = func_573(1);

	switch (iParam0)
	{
		case 0:
			return Global_1956875.f_1546.f_2;
	
		case 1:
			return Global_1956875.f_1565.f_136.f_2;
	
		default:
		
	}

	return -1;
}

void func_485(float fParam0, Ped pedParam1) // Position - 0xD972 Signature - 22 02 04 00 00 66 00 73 7D 8B 03 00 50 02 00 66 01 2F 15 08 00 5D 32 C5 13 27 03 67 01 66 01 03 05 01 19 05 8B 03 00 50 02 00 66 01 03 05 00 54 8B 03 00 50 02 00 66 01 66 00 03
{
	if (fParam0 == 0f)
		return;

	if (pedParam1 == 0)
		pedParam1 = Global_1295666.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	PED::_CHANGE_PED_STAMINA(pedParam1, fParam0);
	return;
}

float func_486(int iParam0, float fParam1, BOOL bParam2) // Position - 0xD9B4 Signature - 22 03 07 00 00 39
{
	int num;
	int num2;

	num = func_575();
	func_576(&num, 0, 0, 0, 1, 0, 0);
	num2 = func_577(iParam0, 2);

	if (func_579(num, func_578(iParam0, 2), true))
	{
		func_580(iParam0, 0, 2);
		num2 = 0;
	}

	if (num2 >= 2)
	{
		func_97(103, bParam2);
		return 0f;
	}

	func_581(iParam0, func_575(), 2);
	func_580(iParam0, num2 + 1, 2);
	return fParam1;
}

float func_487(int iParam0, int iParam1) // Position - 0xDA1D Signature - 22 02 04 00 00 66 01 11 15 07 00 11 39 22 07 01 67 01 66 01 3C 02 00 00 00 00 00 09 00 01 00 00 00 13
{
	if (iParam1 == 2)
		iParam1 = func_573(2);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_6[iParam0 /*3*/];
	
		case 1:
			return Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/];
	
		default:
		
	}

	return -1f;
}

int func_488(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0xDA69 Signature - 22 06 09 00 00 66
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_573(2);

	ped = PLAYER::PLAYER_PED_ID();

	if (func_582(ped, iParam0, fParam1))
	{
		if (bParam2)
			if (fParam1 >= 100f)
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			else
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	
		if (bParam3)
			func_583(iParam0, 7000, iParam5);
	
		func_584(ped, iParam0, fParam1);
		func_585(iParam0, fParam1, bParam4, iParam5);
	}

	return 1;
}

int func_489(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0xDAE7 Signature - 22 04 08 00 00 03
{
	char* effectName;
	Ped ped;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam1 == -1f)
		if (func_586(iParam0))
			fParam1 = 30f;
		else
			fParam1 = 30f;
	else if (fParam1 <= 0f)
		return 0;

	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				effectName = func_587(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_378(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
	
		case 1:
			if (bParam2)
			{
				effectName = func_587(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_588(joaat("STATUS_EFFECT__TRACKING"));
			func_380(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
	
		case 2:
			if (bParam2)
			{
				effectName = func_587(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_379(-1, false);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
	
		case 18:
			func_589(1, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
	
		case 19:
			func_588(joaat("STATUS_EFFECT__POISON"));
			func_589(0, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
	
		case 20:
			func_589(2, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
	
		default:
			return 0;
	}

	return 1;
}

BOOL func_490() // Position - 0xDC9D Signature - 22 00 02 00 00 5D 0B
{
	if (Global_1956875.f_1431.f_107 == -15)
		return true;

	return func_590(Global_1956875.f_1431.f_107, false);
}

void func_491(float fParam0, int iParam1) // Position - 0xDCC6 Signature - 22 02 07 00 00 6D
{
	float num;
	int num2;
	int num3;

	num = func_591(13, 2);
	num2 = func_592(num);
	num = num + fParam0;
	num = func_593(num, 0f, 100f);
	num3 = func_592(num);

	if (num2 != num3)
	{
		Global_1956875.f_1431.f_107 = func_575();
		func_594(&(Global_1956875.f_1431.f_107), 0, 0, 1, 0, 0, 0, false);
	}

	func_595(13, num, 2);
	Global_1956875.f_1431.f_99 = iParam1;
	return;
}

BOOL func_492() // Position - 0xDD39 Signature - 22 00 02 00 00 85 64
{
	return !Global_1913444;
}

void func_493(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0xDD46 Signature - 22 06 09 00 00 2F
{
	int i;

	for (i = 0; i < Global_1913444.f_3; i = i + 1)
	{
		if (Global_1913444.f_4[i /*6*/] == hParam0 && Global_1913444.f_4[i /*6*/].f_2 == bParam2 && Global_1913444.f_4[i /*6*/].f_3 == bParam3 && Global_1913444.f_4[i /*6*/].f_4 == bParam4 && Global_1913444.f_4[i /*6*/].f_5 == iParam5)
		{
			Global_1913444.f_4[i /*6*/].f_1 = Global_1913444.f_4[i /*6*/].f_1 + iParam1;
			return;
		}
	}

	if (Global_1913444.f_3 < 19)
	{
		Global_1913444.f_4[Global_1913444.f_3 /*6*/] = hParam0;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_1 = iParam1;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_2 = bParam2;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_3 = bParam3;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_4 = bParam4;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_5 = iParam5;
		Global_1913444.f_3 = Global_1913444.f_3 + 1;
	}

	return;
}

var func_494(BOOL bParam0, var uParam1, var uParam2) // Position - 0xDE69 Signature - 22 03 05 00 00 66 00 8B 08 00 66 01 50 03 01 68 05 00 66 02 50 03 01 22 02 04 00 00 66 00
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_495(Hash hParam0, int iParam1) // Position - 0xDE80 Signature - 22 02 04 00 00 66 00 2F 39 31 17 00 05 8B 04
{
	if (!func_41(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

char* func_496(Hash hParam0) // Position - 0xDE9F Signature - 22 01 03 00 00 66 00 37 D4
{
	if (func_62(hParam0, -1995062316))
		return "collectible_arrowheads";

	if (func_62(hParam0, 1239889275))
		return "collectible_liquor_bottles";

	if (func_62(hParam0, 143267379))
		return "collectible_coins";

	if (func_62(hParam0, -944041124))
		return "colectible_heirlooms";

	if (func_62(hParam0, 1562621600))
		return "collectible_jewelry";

	if (func_62(hParam0, -149719013))
		return "collectible_bird_eggs";

	if (func_62(hParam0, 1940829793))
		return "collectible_tarot_cards";

	if (func_62(hParam0, 781094263))
		return "collectible_flowers";

	if (func_62(hParam0, -352095726) || func_62(hParam0, -2014783736) || func_62(hParam0, -545064757) || func_62(hParam0, 679186220))
		return "collectible_found_fossil";

	return "";
}

BOOL func_497(Hash hParam0) // Position - 0xDF9B Signature - 22 01 03 00 00 66 00 37 DA
{
	if (func_62(hParam0, -189374246))
		if (func_596(hParam0, -1305775593) || func_596(hParam0, 1384151091) || func_596(hParam0, 2075388272) || func_596(hParam0, -1738780413))
			return true;

	if (func_62(hParam0, -753854379) || func_62(hParam0, 173360570))
		return true;

	return false;
}

BOOL func_498(int iParam0) // Position - 0xE01A Signature - 22 01 03 00 00 66 00 3C 03 00 EE
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
	
		default:
		
	}

	return true;
}

Hash func_499(Hash hParam0) // Position - 0xE041 Signature - 22 01 27
{
	var unk;
	int i;

	if (!func_41(hParam0, 0))
		return 0;

	unk.f_2 = 5;
	unk.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &unk))
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (unk.f_18[i /*2*/].f_1 == 14460646)
				if (unk.f_18[i /*2*/] != 0)
					return unk.f_18[i /*2*/];
		}
	}

	return 0;
}

BOOL func_500(Hash hParam0, Hash hParam1) // Position - 0xE0AF Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 01
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, -949239683))
		return true;

	return false;
}

int func_501(Hash hParam0, int iParam1, var uParam2, BOOL bParam3) // Position - 0xE0E0 Signature - 22 04 35
{
	var unk;

	if (!func_41(hParam0, 0) && !func_223(func_132(hParam0), 2))
		return 0;

	unk.f_4 = 15;
	unk.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, iParam1, &unk))
	{
		!bParam3;
		return 0;
	}

	!bParam3;
	*uParam2 = unk.f_1;
	return 1;
}

 func_502(Hash hParam0, int iParam1) // Position - 0xE13F Signature - 22 02 05 00 00 66 00 66 01 39
{
	 num;

	num = func_597(hParam0, iParam1);

	if (num == 0)
		return 0;

	return num;
}

BOOL func_503(Hash hParam0, char* sParam1) // Position - 0xE15D Signature - 22 02 15 00 00 66
{
	int lengthOfLiteralString;
	var unk;

	if (!func_41(hParam0, 0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(sParam1, func_598(hParam0), 128);
	lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);

	if (!func_599(hParam0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(&unk, func_600(hParam0), 128);

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		return false;

	TEXT_LABEL_APPEND_STRING(&unk, " - ", 128);
	lengthOfLiteralString = lengthOfLiteralString + HUD::GET_LENGTH_OF_LITERAL_STRING(&unk);
	TEXT_LABEL_APPEND_STRING(&unk, sParam1, 128);

	if (lengthOfLiteralString >= 127)
		return false;

	*sParam1 = { unk };
	return true;
}

const char* func_504(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0xE1DA Signature - 22 10
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

const char* func_505(const char* sParam0, int iParam1) // Position - 0xE1EE Signature - 22 02 04 00 00 66 01 37
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);

	return func_408(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

BOOL func_506() // Position - 0xE224 Signature - 22 00 02 00 00 5D 1C 9B 1D 78
{
	if (Global_1940252.f_11596 != Global_1940252.f_41.f_203 - 1 || func_602(func_601(0), Global_1940252.f_11588, false, true, true) > 0 || Global_1940252.f_11596 == 15)
		return true;

	func_603(0);

	if (Global_1940252.f_7)
		return true;

	return false;
}

void func_507(int iParam0) // Position - 0xE283 Signature - 22 01 03 00 00 66 00 5D 1C 9B 1D 6C 0B
{
	Global_1940252.f_11 = iParam0;
	return;
}

void func_508(int iParam0) // Position - 0xE293 Signature - 22 01 03 00 00 66 00 5D 1C 9B 1D 6C 0A
{
	Global_1940252.f_10 = iParam0;
	return;
}

Hash func_509(int iParam0) // Position - 0xE2A3 Signature - 22 01 04 00 00 66 00 2F 4B
{
	var unk;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &unk))
		return -358215195;

	return func_174(unk);
}

Hash func_510() // Position - 0xE2C6 Signature - 22 00 02 00 00 5D 0C CE 1D 78 8C
{
	return Global_1953292.f_1676;
}

int func_511(BOOL bParam0) // Position - 0xE2D5 Signature - 22 01 2B 00 00 4B 03 6A 80 09
{
	var unk;
	int num;
	var unk15;
	Hash hash;
	int num2;
	int num3;
	var unk19;

	unk.f_9 = -1591664384;
	num = 0;
	unk15 = { func_123(joaat("WARDROBE"), func_183(true), 1034665895, true) };
	hash = func_317(unk15, 552979403, true, -1);

	if (hash != 0)
	{
		if (hash == joaat("clothing_mp_female_player_character"))
			num = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
		else if (hash == joaat("clothing_mp_male_player_character"))
			num = joaat("MPC_PLAYER_TYPE_MP_MALE");
	
		return num;
	}

	unk19 = { func_219(0, -1591664384, 552979403, -1591664384, 0, 0, 0) };

	if (func_222(&unk19, &num2, &num3, true))
	{
		if (num3 > 0 && func_105(&unk, 0, num2, num3))
		{
			if (unk.f_4 == joaat("clothing_mp_female_player_character"))
			{
				num = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
			}
			else if (unk.f_4 == joaat("clothing_mp_male_player_character"))
			{
				num = joaat("MPC_PLAYER_TYPE_MP_MALE");
			}
			else
			{
				func_107(num2);
				return 0;
			}
		
			if (bParam0)
				func_318(unk, true, false);
		
			func_107(num2);
			return num;
		}
	
		func_107(num2);
	}

	return 0;
}

Hash func_512(int iParam0) // Position - 0xE3E2 Signature - 22 01 03 00 00 66 00 3C 0A
{
	switch (iParam0)
	{
		case 1:
			return 217155793;
	
		case 2:
			return 97391779;
	
		case 3:
			return -808817534;
	
		case 4:
			return 1270922359;
	
		case 5:
			return -2011879201;
	
		case 6:
			return -1063340820;
	
		case 7:
			return 2127262701;
	
		case 8:
			return -1323870201;
	
		case 9:
			return 1632140501;
	
		case 10:
			return 967218463;
	
		default:
		
	}

	return 0;
}

int func_513(Hash hParam0) // Position - 0xE47F Signature - 22 01 0A 00 00 66 00 2F 39 31 17 00 05 8B 04 00 2F 50 01 01 4B 03 62 3D 41 66 00 37 0D
{
	var unk;
	int num;

	if (!func_41(hParam0, 0))
		return 0;

	unk = 5;
	num = ITEMDATABASE::_0x8870895BA5ED9385(hParam0, -442898163, &unk);

	if (num > 0)
		return unk[0];

	return 0;
}

struct<10> func_514(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0xE4B9 Signature - 22 09 15
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

BOOL func_515(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0xE58D Signature - 22 0D
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

BOOL func_516(Hash hParam0) // Position - 0xE5AE Signature - 22 01 03 00 00 66 00 2F 39 31 17 00 05 8B 00
{
	!func_41(hParam0, 0);

	if (func_62(hParam0, -393037696))
		return true;

	return false;
}

int func_517(int iParam0) // Position - 0xE5D4 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 03 05 00
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

Hash func_518(Hash hParam0, BOOL bParam1) // Position - 0xE5F5 Signature - 22 02 04 00 00 66 00 3C 07 00 4A
{
	switch (hParam0)
	{
		case joaat("kit_pouch_kit"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
	
		case joaat("kit_pouch_valuables"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
	
		case joaat("kit_pouch_provisions"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	
		case joaat("kit_pouch_remedies"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
	
		case 239629152:
			if (bParam1)
				return MISC::GET_HASH_KEY("DOCUMENT_BOUNTY_HUNTER_LICENSE_UPGRADE_01_SHORT");
			break;
	
		case joaat("kit_pouch_materials"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
	
		case joaat("kit_pouch_ingredients"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
	}

	return 0;
}

void func_519(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0xE697 Signature - 22 03 05 00 00 37 FD
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_520(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0xE6C8 Signature - 22 03 07 00 00 66 01 76
{
	int i;
	BOOL flag;

	if (*iParam1 <= 0)
	{
		*iParam1 = 0;
		return false;
	}

	if (Global_1953292.f_3352.f_26 <= 1)
	{
		Global_1953292.f_3352.f_26 = 0;
		*iParam1 = 0;
		Global_1953292.f_3352[0] = 0;
		return true;
	}

	for (i = 0; i <= Global_1953292.f_3352.f_26 - 1; i = i + 1)
	{
		if (hParam0 == Global_1953292.f_3352[i])
			flag = true;
	
		if (flag && i < Global_1953292.f_3352.f_26 - 1)
			Global_1953292.f_3352[i] = Global_1953292.f_3352[i + 1];
	}

	if (flag)
	{
		Global_1953292.f_3352.f_26 = Global_1953292.f_3352.f_26 - 1;
		*iParam1 = *iParam1 - 1;
		Global_1953292.f_3352[Global_1953292.f_3352.f_26] = 0;
		func_399(hParam0, true, bParam2);
	}

	return flag;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_521(var uParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, int iParam6, BOOL bParam7, BOOL bParam8, int iParam9) // Position - 0xE7A8 Signature - 22 0A 18
{
	Hash hash;
	int num;
	BOOL flag;
	Hash hash2;
	int num2;
	int num3;

	num3 = 0;
	num2 = func_527(iParam6);
	num2.f_1 = hParam1;
	num2.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num2);

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&num2))
		return false;

	DATAFILE::_PARSEDDATA_GET_BOOL(&flag, &num2, -1516819610);
	DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, 2049745650);
	*uParam2 = flag;

	if (!flag && !bParam3)
		func_605(uParam0, func_604(hash), true, true, bParam7);

	if (flag)
	{
		if (iParam9 != 8)
			func_311(-1);
	
		if (DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, -1212855483))
			num3 = func_604(hash);
	}

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num2))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, 1409451727))
		{
		}
		else
		{
			hash2 = hash;
			num = func_175(hash2, 1);
		
			if (num < 0 || num > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, joaat("Component")))
			{
			}
			else
			{
				uParam0->f_1[num /*3*/] = hash;
			
				if (flag)
					func_606(hash2, 16, 6);
			
				if (bParam5)
					if (!DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, 1441384))
						uParam0->f_1[num /*3*/].f_1 = joaat("base");
					else
						goto 0x16A;
			
				if (!DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, 1194786549))
					if (func_607(hash2) && func_435(uParam0->f_1[num /*3*/], hash2, &hash))
						uParam0->f_1[num /*3*/].f_1 = hash;
				else
					uParam0->f_1[num /*3*/].f_1 = hash;
			}
		}
	}

	num = 16;

	if (flag)
	{
		if (!bParam8)
			func_609(uParam0, num3, func_608(hParam1) != 0, iParam9);
	}
	else if (func_304() == joaat("MPC_PLAYER_TYPE_MP_FEMALE") && uParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/] && func_608(uParam0->f_1[34 /*3*/]) == 0 && !func_167(32) && !func_167(64))
	{
		uParam0->f_1[num /*3*/] = func_533(-1293064293, 0);
		uParam0->f_1[num /*3*/].f_1 = joaat("base");
		func_314(uParam0, uParam0->f_1[num /*3*/], num, false, iParam9);
	}

	if (bParam4)
		*uParam0 = hParam1;

	return true;
}

void func_522(Any* panParam0, int iParam1, int iParam2, int iParam3, int iParam4, Hash hParam5) // Position - 0xE9D7 Signature - 22 06 08 00 00 66 01
{
	*panParam0 = iParam1;
	panParam0->f_1 = iParam2;
	panParam0->f_2 = iParam3;
	panParam0->f_3 = iParam4;
	panParam0->f_4 = hParam5;
	panParam0->f_6 = 0;
	panParam0->f_5 = 0;
	return;
}

BOOL func_523(var uParam0, int iParam1) // Position - 0xEA06 Signature - 22 02 04 00 00 66 00 27 01 66 01 69 2F 1C 50 02 01 22 03
{
	return uParam0->f_1 && iParam1 != false;
}

void func_524(var uParam0, int iParam1, int iParam2) // Position - 0xEA17 Signature - 22 03 05 00 00 66 00 27 01
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_525(var uParam0, int iParam1) // Position - 0xEA2A Signature - 22 02 04 00 00 66 00 27 01 66 01 69 2F 1C 50 02 01 22 02
{
	return uParam0->f_1 && iParam1 != false;
}

void func_526(var uParam0, int iParam1) // Position - 0xEA3B Signature - 22 02 04 00 00 66 00 27 01 66 01 30
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

int func_527(int iParam0) // Position - 0xEA4E Signature - 22 01 03 00 00 66 00 2F 15 06 00 39 E0 88 00 67 00 66 00 37 46
{
	if (iParam0 == 0)
		iParam0 = func_304();

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		return -1806335803;
	else if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		return -971050805;

	return 0;
}

void func_528(var uParam0, BOOL bParam1, int iParam2) // Position - 0xEA8A Signature - 22 03 07 00 00 66 01 8B 03 00 50 03 00 6D 0C
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 12;
	hash = uParam0->f_1[num /*3*/];

	if (func_62(hash, 160827531) || func_75(hash) == 81053684)
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam2);
	}

	return;
}

void func_529(var uParam0, BOOL bParam1, int iParam2) // Position - 0xEAED Signature - 22 03 06 00 00 66 01 8B 03 00 50 03 00 6D 0B
{
	int num;

	if (bParam1)
		return;

	num = 11;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_62(uParam0->f_1[num /*3*/], -93469181))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam2);
	}

	return;
}

void func_530(var uParam0, BOOL bParam1, int iParam2) // Position - 0xEB52 Signature - 22 03 06 00 00 66 01 8B 03 00 50 03 00 6D 0A
{
	int num;

	if (bParam1)
		return;

	num = 10;

	if (-525676072 == func_75(uParam0->f_1[num /*3*/]))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam2);
	}

	return;
}

BOOL func_531(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xEB9F Signature - 22 03 06 00 00 66 00 39
{
	int num;

	num = func_75(hParam0);

	if (iParam2 == 0)
		return num == 1759215194 || num == 344283346;

	return !bParam1 && num == -1740828670 || num == 344283346;
}

BOOL func_532(int iParam0) // Position - 0xEBEC Signature - 22 01 03 00 00 87
{
	return Global_17418.f_55.f_664.f_1734 && iParam0 != false;
}

Hash func_533(int iParam0, int iParam1) // Position - 0xEC04 Signature - 22 02 19
{
	int num;
	int num2;
	int num3;
	var unk;

	num3 = 0;
	unk = { func_219(0, -1591664384, iParam0, -1591664384, 0, 0, 0) };

	if (func_222(&unk, &num, &num2, true))
	{
		if (num2 > 0)
			num3 = func_610(num, num2, iParam1);
	
		func_107(num);
	}

	return num3;
}

void func_534(var uParam0, int iParam1) // Position - 0xEC51 Signature - 22 02 06 00 00 6D
{
	int num;
	BOOL flag;

	num = 16;
	flag = false;

	if (func_304() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag = true;

	func_312(num, iParam1);

	if (uParam0->f_1[num /*3*/].f_1 == -1539589426 || uParam0->f_1[num /*3*/].f_1 == 1334603721)
		return;

	if (uParam0->f_1[num /*3*/].f_1 == 0 || uParam0->f_1[num /*3*/].f_1 == joaat("base"))
	{
		if (func_434(uParam0->f_1[num /*3*/], flag, -1539589426) >= 0)
		{
			uParam0->f_1[num /*3*/].f_1 = -1539589426;
			return;
		}
	}

	if (func_434(uParam0->f_1[num /*3*/], flag, 1334603721) >= 0)
		uParam0->f_1[num /*3*/].f_1 = 1334603721;

	return;
}

void func_535(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xED17 Signature - 22 04 07 00 00 66 01 8B 03 00 50 04 00 6D 0C
{
	int num;

	if (bParam1)
		return;

	num = 12;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_62(hParam2, -1527414429) && !func_62(uParam0->f_1[num /*3*/], -1303648999))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	num = 16;

	if (uParam0->f_1[num /*3*/].f_1 == 1530758430 || uParam0->f_1[num /*3*/].f_1 == 1334603721 && func_62(hParam2, -985549034))
	{
		if (uParam0->f_1[num /*3*/].f_1 == 1530758430)
		{
			uParam0->f_1[num /*3*/].f_1 = joaat("base");
			func_312(num, iParam3);
		}
		else if (uParam0->f_1[num /*3*/].f_1 == 1334603721)
		{
			uParam0->f_1[num /*3*/].f_1 = -1539589426;
			func_312(num, iParam3);
		}
	}

	return;
}

void func_536(var uParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0xEE1F Signature - 22 04 08 00 00 66 01 8B 03 00 50 04 00 6D 11
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	if (uParam0->f_1[iParam2 /*3*/].f_1 != -2081918609)
	{
		num = 34;
		hash = uParam0->f_1[num /*3*/];
	
		if (func_62(hash, 1583165364))
		{
			uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
			func_312(iParam2, iParam3);
		}
		else
		{
			num = 35;
			hash = uParam0->f_1[num /*3*/];
		
			if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && 1769055947 == func_75(hash))
			{
				uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
				func_312(iParam2, iParam3);
			}
		}
	}

	return;
}

void func_537(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xEF01 Signature - 22 04 08 00 00 6D 10
{
	int num;
	Hash hash;

	num = 16;
	func_312(num, iParam3);
	num = 18;
	hash = uParam0->f_1[num /*3*/];

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_62(hParam2, 1889502862) && func_75(hash) == 698653232)
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_312(num, iParam3);
		}
		else if (func_62(hParam2, 449467137) && func_75(hash) == 912453393)
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_312(num, iParam3);
		}
		else
		{
			func_312(num, iParam3);
		}
	}

	if (bParam1)
	{
		num = 21;
	
		if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		{
			func_312(num, iParam3);
			func_427(uParam0, false, uParam0->f_1[num /*3*/], iParam3);
		}
	
		num = 17;
	
		if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && uParam0->f_1[num /*3*/].f_1 == 289238755)
		{
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_312(num, iParam3);
		}
	
		return;
	}

	num = 29;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_62(hParam2, 1126863852))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	num = 16;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_62(hParam2, -985549034))
		if (uParam0->f_1[num /*3*/].f_1 == 1530758430)
			uParam0->f_1[num /*3*/].f_1 = joaat("base");
		else if (uParam0->f_1[num /*3*/].f_1 == 1334603721)
			uParam0->f_1[num /*3*/].f_1 = -1539589426;

	num = 12;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_62(hParam2, -1527414429) && !func_62(uParam0->f_1[num /*3*/], -1303648999))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	return;
}

void func_538(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF16E Signature - 22 04 07 00 00 6D 12 67 06 66 06 66 00 80 01 17 03 66
{
	int num;

	num = 18;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_312(num, iParam3);

	if (bParam1)
		return;

	num = 12;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && !func_62(uParam0->f_1[num /*3*/], -1303648999))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	num = 13;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	num = 25;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_62(hParam2, 675650051))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	return;
}

BOOL func_539(int iParam0) // Position - 0xF282 Signature - 22 01 03 00 00 66 00 09 39 72 5B 00 5D 0C CE 1D 18 8C 06 80 01 17 03 66
{
	return Global_1953292.f_1676.f_1[func_175(iParam0, 1) /*3*/] != Global_1953292.f_83[func_175(iParam0, 1) /*12*/];
}

void func_540(var uParam0, int iParam1) // Position - 0xF2AC Signature - 22 02 05 00 00 6D
{
	int num;

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam1);
	}

	num = 20;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_312(num, iParam1);

	num = 36;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_62(uParam0->f_1[num /*3*/], -928740153))
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
		}
		else
		{
			uParam0->f_1[num /*3*/].f_1 = joaat("base");
		}
	
		func_312(num, iParam1);
	}

	return;
}

void func_541(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF377 Signature - 22 04 0A
{
	int num;
	Hash hash;
	BOOL flag;
	BOOL flag2;

	if (bParam1)
		return;

	flag = false;
	flag2 = false;

	if (func_304() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag2 = true;

	if (func_304() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		num = 16;
	
		if (uParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/] && func_75(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[num /*3*/] = func_533(Global_1953292.f_83[num /*12*/].f_9, 0);
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_312(num, iParam3);
		}
	}

	num = 36;
	func_312(num, iParam3);

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_62(hParam2, -1473580422))
	{
		hash = uParam0->f_1[num /*3*/];
	
		if (func_62(hash, 1469783911))
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
		}
		else if (func_434(uParam0->f_1[num /*3*/], flag2, -2081918609) != -1)
		{
			uParam0->f_1[num /*3*/].f_1 = -2081918609;
		}
		else
		{
			uParam0->f_1[num /*3*/].f_1 = joaat("base");
		}
	}

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && uParam0->f_1[num /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	num = 18;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = uParam0->f_1[num /*3*/];
	
		if (func_75(hash) == 912453393)
		{
			flag = true;
		
			if (func_62(hParam2, 1583165364))
			{
				uParam0->f_1[num /*3*/].f_1 = -2081918609;
				func_312(num, iParam3);
			}
		}
	}

	num = 20;
	hash = uParam0->f_1[num /*3*/];

	if (hash != Global_1953292.f_83[num /*12*/])
		if (func_75(hash) == 1868067663 && func_62(hParam2, -1016441646))
			func_611(uParam0, num, iParam3);
		else if (flag)
			func_312(num, iParam3);

	num = 34;

	if (1759215194 == func_75(uParam0->f_1[num /*3*/]))
		func_312(16, iParam3);

	num = 35;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_62(hParam2, -1650340550))
	{
		hash = uParam0->f_1[num /*3*/];
	
		if (func_75(hash) == 1769055947)
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_312(num, iParam3);
		}
	}

	return;
}

void func_542(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF61F Signature - 22 04 08 00 00 66 01 8B 03 00 50 04 00 39
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	if (func_304() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		num = 16;
	
		if (uParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/] && func_75(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[num /*3*/] = func_533(Global_1953292.f_83[num /*12*/].f_9, 0);
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_312(num, iParam3);
		}
	}

	num = 36;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		if (func_62(uParam0->f_1[num /*3*/], -2093434733))
			func_548(uParam0, iParam3, true, false);
		else if (func_62(hParam2, 1718965018))
			uParam0->f_1[num /*3*/].f_1 = joaat("base");

	func_312(num, iParam3);
	num = 35;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	num = 20;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = uParam0->f_1[num /*3*/];
	
		if (func_62(hash, 1090938458) && func_62(hParam2, 475297062))
			func_611(uParam0, num, iParam3);
	}

	return;
}

void func_543(var uParam0, BOOL bParam1, int iParam2) // Position - 0xF780 Signature - 22 03 07 00 00 66 01 8B 03 00 50 03 00 6D 24
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	func_312(36, iParam2);
	num = 18;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam2);
	}

	if (func_304() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		num = 16;
	
		if (uParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/])
		{
			num = 16;
			uParam0->f_1[num /*3*/] = func_533(Global_1953292.f_83[num /*12*/].f_9, 0);
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_312(num, iParam2);
		}
	}

	num = 20;
	hash = uParam0->f_1[num /*3*/];

	if (hash != Global_1953292.f_83[num /*12*/] && func_62(hash, 353024991))
		func_611(uParam0, num, iParam2);

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam2);
	}

	num = 35;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && 1769055947 == func_75(uParam0->f_1[num /*3*/]))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam2);
	}

	num = 29;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam2);
	}

	return;
}

void func_544(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF935 Signature - 22 04 08 00 00 66 01 8B 03 00 50 04 00 6D 14
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 20;
	hash = uParam0->f_1[num /*3*/];

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_75(hash) == 294388917)
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	num = 18;
	hash = uParam0->f_1[num /*3*/];

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_75(hash) == 912453393)
		{
			if (uParam0->f_1[num /*3*/].f_1 != joaat("base"))
			{
				uParam0->f_1[num /*3*/].f_1 = joaat("base");
				func_312(num, iParam3);
			}
		}
		else
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_312(num, iParam3);
		}
	}

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	num = 16;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	num = 29;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	num = 35;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	num = 36;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		if (func_62(uParam0->f_1[num /*3*/], -2093434733))
			func_548(uParam0, iParam3, true, false);
		else if (func_62(hParam2, 1718965018))
			uParam0->f_1[num /*3*/].f_1 = joaat("base");

	return;
}

void func_545(var uParam0, BOOL bParam1, int iParam2) // Position - 0xFB70 Signature - 22 03 06 00 00 66 01 8B 03 00 50 03 00 6D 14
{
	int num;

	if (bParam1)
		return;

	num = 20;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_611(uParam0, num, iParam2);

	num = 21;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam2);
	}

	num = 18;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam2);
	}

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam2);
	}

	num = 16;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam2);
	}

	num = 29;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam2);
	}

	num = 35;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam2);
	}

	num = 36;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_62(uParam0->f_1[num /*3*/], -2093434733))
		{
			func_548(uParam0, iParam2, true, false);
		}
		else
		{
			uParam0->f_1[num /*3*/].f_1 = joaat("base");
			func_312(num, iParam2);
		}
	}

	return;
}

void func_546(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xFD68 Signature - 22 04 08 00 00 66 01 8B 03 00 50 04 00 6D 22
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 34;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/].f_1 = joaat("base");
		func_312(num, iParam3);
	}

	num = 36;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/].f_1 = -2081918609;
		func_312(num, iParam3);
	}

	num = 37;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_62(hParam2, -1278198125))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	num = 18;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = uParam0->f_1[num /*3*/];
	
		if (912453393 == func_75(hash) && uParam0->f_1[num /*3*/].f_1 != -2081918609)
		{
			uParam0->f_1[num /*3*/].f_1 = -2081918609;
			func_312(num, iParam3);
		}
	}

	return;
}

void func_547(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xFE85 Signature - 22 04 07 00 00 66 01 8B 03 00 50 04 00 6D 25
{
	int num;

	if (bParam1)
		return;

	num = 37;

	if (func_62(hParam2, -1278198125) && uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam3);
	}

	return;
}

void func_548(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xFEE4 Signature - 22 04 07 00 00 6D 24
{
	int num;

	num = 36;

	if (bParam2)
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam1);
	}

	num = 37;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam1);
	}

	num = 38;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam1);
	}

	num = 35;

	if (bParam3 && -923693316 == func_75(uParam0->f_1[num /*3*/]))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam1);
	}

	return;
}

void func_549(Hash hParam0, int iParam1, int iParam2) // Position - 0xFFDB Signature - 22 03 05 00 00 1D
{
	Global_17418.f_55.f_664.f_33[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	return;
}

void func_550(var uParam0, int iParam1) // Position - 0xFFFF Signature - 22 02 05 00 00 66 01 08
{
	int i;

	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	Global_17418.f_55.f_664.f_33[iParam1 /*120*/].f_1 = *uParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_549(&uParam0->f_1[i /*3*/], i, iParam1);
	}

	return;
}

void func_551(BOOL bParam0, int iParam1, int iParam2) // Position - 0x10051 Signature - 22 03 05 00 00 66 01 08
{
	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	if (iParam1 > -1 && iParam1 < 11)
		Global_17418.f_55.f_664.f_33[iParam1 /*120*/] = Global_17418.f_55.f_664.f_33[iParam1 /*120*/] || bParam0;

	return;
}

BOOL func_552(Any* panParam0, Hash hParam1, Any* panParam2, BOOL bParam3, int iParam4) // Position - 0x1009C Signature - 22 05 0B 00 00 66 00
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (iParam4 == -1)
		iParam4 = func_113(bParam3);

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, panParam0, hParam1, &outGuid))
		return false;

	if (!func_348(&outGuid, panParam2, bParam3, false, iParam4))
		return false;

	return true;
}

struct<29> func_553(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x100EA Signature - 22 06 42
{
	var unk;
	var unk30;

	unk.f_9 = 1;
	unk.f_11 = -1591664384;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk30.f_9 = -1591664384;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_113(bParam4), &uParam0, &unk30, 29, 1))
		return unk;

	unk = { func_559(&unk30, bParam5) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_554(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x10185 Signature - 22 03 06 00 00 66 00 2F 15 04 00 08 50 03 01 66 00 66 01 39 B8 9B 00 05 8B 04 00 08 50 03 01 08 67 05 66 02 8B 28 00 4B 05 37 61 48 7D 2A 66 00 03 0D 01 5F 8B 15 00 66 05 66 00 66 01 39 BF
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_341(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_343(func_612(num, hParam0, panParam1), num, panParam1);
	else
		return func_344(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29), num, panParam1);

	return -1;
}

struct<26> func_555(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x101EF Signature - 22 06 3A
{
	var unk;
	var unk27;

	unk.f_9 = 1;
	unk.f_11 = -1591664384;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk27.f_9 = -1591664384;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_113(bParam4), &uParam0, &unk27, 24, 1))
		return unk;

	unk = { func_559(&unk27, bParam5) };
	unk.f_17 = { unk27.f_15 };
	unk.f_25 = unk27.f_23;
	return unk;
}

int func_556(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x10272 Signature - 22 03 06 00 00 08
{
	int num;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_343(func_613(num, hParam0, panParam1), num, panParam1);
	else
		return func_344(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 26), num, panParam1);

	return -1;
}

struct<18> func_557(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x102C2 Signature - 22 06 29
{
	var unk;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = -1591664384;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk19.f_9 = -1591664384;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_113(bParam4), &uParam0, &unk19, 15, 1))
		return unk;

	unk = { func_559(&unk19, bParam5) };
	unk.f_17 = unk19.f_14;
	return unk;
}

int func_558(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x10337 Signature - 22 03 06 00 00 66 00 2F 15 04 00 08 50 03 01 66 00 66 01 39 B8 9B 00 05 8B 04 00 08 50 03 01 08 67 05 66 02 8B 28 00 4B 05 37 61 48 7D 2A 66 00 03 0D 01 5F 8B 15 00 66 05 66 00 66 01 39 ED
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_341(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_343(func_614(num, hParam0, panParam1), num, panParam1);
	else
		return func_344(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18), num, panParam1);

	return -1;
}

struct<17> func_559(var uParam0, BOOL bParam1) // Position - 0x103A1 Signature - 22 02 15 00 00 4B 04 6A 80 09 09 3D 41 6A 80 0B 37 00 21 21 A1 3D 41 41 42
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = -1591664384;
	unk = { *uParam0 };
	unk.f_4 = { uParam0->f_5 };
	unk.f_8 = uParam0->f_4;
	unk.f_9 = uParam0->f_11;
	unk.f_11 = uParam0->f_9;
	unk.f_10 = uParam0->f_10;

	if (bParam1)
	{
		unk.f_15 = func_112(uParam0->f_4, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_319() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

BOOL func_560() // Position - 0x10422 Signature - 22 00 02 00 00 11 5D
{
	return func_48(Global_1051268);
}

BOOL func_561(int iParam0) // Position - 0x10434 Signature - 22 01 03 00 00 66 00 37 CE
{
	return iParam0 == -1759663922 || iParam0 == -318976023 || iParam0 == 772881414 || iParam0 == 31269700 || iParam0 == -133550749;
}

BOOL func_562(int iParam0, int iParam1) // Position - 0x1047C Signature - 22 02 05 00 00 66 00 67
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_615(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_616())
		return func_615(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_615(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_563(Player plParam0) // Position - 0x104F0 Signature - 22 01 03 00 00 5D 77
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_564(Player plParam0) // Position - 0x1050D Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 32
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_617(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_618(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

BOOL func_565(Any* panParam0) // Position - 0x10590 Signature - 22 01 03 00 00 66 00 76 2F
{
	if (*panParam0 == 0 && panParam0->f_1 == 0 && panParam0->f_2 == 0 && panParam0->f_3 == 0)
		return false;

	return true;
}

void func_566(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x105C6 Signature - 22 04 07 00 00 66 00 08 15 03 00 50 04 00 5D
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

	func_619(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

BOOL func_567(Hash hParam0) // Position - 0x106A2 Signature - 22 01 03 00 00 66 00 03 05 01 34
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

void func_568(Any* panParam0) // Position - 0x106B0 Signature - 22 01 03 00 00 2F 66 00 32 08
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

int func_569() // Position - 0x106C6 Signature - 22 00 02 00 00 6D
{
	return Global_1072759.f_28418[32 /*4*/].f_3;
}

struct<8> func_570(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) // Position - 0x106DB Signature - 22 07 11 00 00 66 05
{
	var unk;

	uParam0.f_2 = iParam5;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk, &uParam0);
	return unk;
}

int func_571(int iParam0, var uParam1) // Position - 0x106F9 Signature - 22 02 04 00 00 66 00 11 15
{
	if (iParam0 == 2)
		return func_353(iParam0);

	return -1;
}

BOOL func_572() // Position - 0x10713 Signature - 22 00 02 00 00 5D 17 00 18 27 0A
{
	return !Global_1572887.f_10;
}

int func_573(int iParam0) // Position - 0x10722 Signature - 22 01 03 00 00 66 00 39 14
{
	return func_621(func_620(iParam0));
}

BOOL func_574(Player plParam0) // Position - 0x10734 Signature - 22 01 04 00 00 66 00 39 3C
{
	float num;

	num = func_622(plParam0) - PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(plParam0);
	return num <= 1f;
}

int func_575() // Position - 0x1074F Signature - 22 00 02 00 00 85 E9
{
	return Global_1902569;
}

void func_576(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1075B Signature - 22 07 11 00 00 66 00
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_623(*uParam0);
	i = func_624(*uParam0);
	j = func_625(*uParam0);
	k = func_626(*uParam0);
	l = func_627(*uParam0);
	m = func_628(*uParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (m = m - iParam1; m < 0; m = m + 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (l = l - iParam2; l < 0; l = l + 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (k = k - iParam3; k < 0; k = k + 24)
	{
		iParam4 = iParam4 + 1;
	}

	for (j = j - iParam4; j <= 0; j = j + num3)
	{
		iParam5 = iParam5 + 1;
		num2 = i - 1;
	
		if (num2 < 0)
		{
			iParam6 = iParam6 + 1;
			i = i + 12;
		}
	
		num3 = func_629(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_630(uParam0, m, l, k, j, i, num);
	return;
}

int func_577(int iParam0, int iParam1) // Position - 0x108CE Signature - 22 02 04 00 00 66 01 11 15 07 00 11 39 22 07 01 67 01 66 01 3C 02 00 00 00 00 00 09 00 01 00 00 00 15 00 68 26 00 66 00 5D 0B DC 1D 18 97 05 80 06 63 03 27 02
{
	if (iParam1 == 2)
		iParam1 = func_573(2);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_6[iParam0 /*3*/].f_2;
	
		case 1:
			return Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_2;
	
		default:
		
	}

	return -1;
}

int func_578(int iParam0, int iParam1) // Position - 0x1091E Signature - 22 02 04 00 00 66 01 11 15 07 00 11 39 22 07 01 67 01 66 01 3C 02 00 00 00 00 00 09 00 01 00 00 00 15 00 68 26 00 66 00 5D 0B DC 1D 18 97 05 80 06 63 03 27 01
{
	if (iParam1 == 2)
		iParam1 = func_573(2);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_6[iParam0 /*3*/].f_1;
	
		case 1:
			return Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_1;
	
		default:
		
	}

	return -15;
}

BOOL func_579(int iParam0, int iParam1, BOOL bParam2) // Position - 0x10970 Signature - 22 03 05 00 00 66 02 8B 1B
{
	if (bParam2)
		if (!func_631(iParam1) || !func_631(iParam0))
			return true;

	return iParam0 > iParam1;
}

void func_580(int iParam0, int iParam1, int iParam2) // Position - 0x1099D Signature - 22 03 05 00 00 66 02 11 15 07 00 11 39 22 07 01 67 02 66 02 3C 02 00 00 00 00 00 09 00 01 00 00 00 17 00 68 2A 00 66 01 66 00 5D 0B DC 1D 18 97 05 80 06 63 03 6C 02
{
	if (iParam2 == 2)
		iParam2 = func_573(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_6[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_581(int iParam0, int iParam1, int iParam2) // Position - 0x109F3 Signature - 22 03 05 00 00 66 02 11 15 07 00 11 39 22 07 01 67 02 66 02 3C 02 00 00 00 00 00 09 00 01 00 00 00 17 00 68 2A 00 66 01 66 00 5D 0B DC 1D 18 97 05 80 06 63 03 6C 01
{
	if (iParam2 == 2)
		iParam2 = func_573(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_6[iParam0 /*3*/].f_1 = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_1 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_582(Ped pedParam0, int iParam1, float fParam2) // Position - 0x10A49 Signature - 22 03 05 00 00 66 00 03 05 01 19 05
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (fParam2 > 100f)
		fParam2 = 100f;
	else if (fParam2 < 0f)
		fParam2 = 0f;

	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(pedParam0, func_632(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_583(int iParam0, int iParam1, int iParam2) // Position - 0x10A9E Signature - 22 03 05 00 00 66 02 11 15 07 00 11 39 22 07 01 67 02 66 01
{
	if (iParam2 == 2)
		iParam2 = func_573(2);

	if (iParam1 > 0)
		iParam1 = iParam1 + MISC::GET_GAME_TIMER();

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_16[iParam0 /*3*/] = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_16[iParam0 /*3*/] = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_584(Ped pedParam0, int iParam1, float fParam2) // Position - 0x10AFF Signature - 22 03 06 00 00 66 01 39
{
	char* str;

	str = func_633(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_634(iParam1), fParam2, -1);

	return;
}

void func_585(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x10B2B Signature - 22 04 07 00 00 66 03 11
{
	int num;

	if (iParam3 == 2)
		iParam3 = func_573(2);

	num = Global_1295666.f_16;
	func_635(iParam0, fParam1, iParam3);

	if (bParam2)
		func_636(iParam0, num, iParam3);

	return;
}

BOOL func_586(int iParam0) // Position - 0x10B61 Signature - 22 01 03 00 00 66 00 3C 03 00 00 00 00 00 13 00 01 00 00 00 09 00 02 00 00 00 0B 00 68 0C 00 09 50 01 01 09
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			return true;
	
		case 2:
			return true;
	
		default:
		
	}

	return false;
}

char* func_587(int iParam0) // Position - 0x10B90 Signature - 22 01 03 00 00 66 00 3C 03 00 00 00 00 00 0F 00 01 00 00 00 10 00 02 00 00 00 11 00 68 15 00 25 01
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
	
		case 1:
			return "PlayerOverpower";
	
		case 2:
			return "PlayerOverpower";
	
		default:
		
	}

	return "";
}

void func_588(int iParam0) // Position - 0x10BCB Signature - 22 01 32
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;
	int j;
	var unk;

	num2 = Global_1156111.f_47689.f_1.f_42;
	unk = 20;

	for (i = 0; i < num2; i = i + 1)
	{
		num = Global_1156111.f_47689.f_1[i /*2*/];
		num3 = func_637(num, 1);
	
		if (Global_1156111.f_35859.f_919[num3 /*12*/] == iParam0)
		{
			func_638(num);
			Global_1156111.f_47689.f_1.f_42 = Global_1156111.f_47689.f_1.f_42 - 1;
		}
		else
		{
			unk[num4 /*2*/] = { Global_1156111.f_47689.f_1[i /*2*/] };
			num4 = num4 + 1;
		}
	}

	for (j = 0; j < num4; j = j + 1)
	{
		Global_1156111.f_47689.f_1[j /*2*/] = { unk[j /*2*/] };
	}

	return;
}

void func_589(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x10C9B Signature - 22 03 05 00 00 66 00 86
{
	func_488(iParam0, 100f, bParam1, bParam2, true, 2);
	return;
}

BOOL func_590(int iParam0, BOOL bParam1) // Position - 0x10CB5 Signature - 22 02 04 00 00 39 4F
{
	return func_579(func_575(), iParam0, bParam1);
}

float func_591(int iParam0, int iParam1) // Position - 0x10CC9 Signature - 22 02 04 00 00 66 01 11 15 07 00 09
{
	if (iParam1 == 2)
		iParam1 = func_573(1);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_26[iParam0];
	
		case 1:
			return Global_1956875.f_1565.f_2.f_26[iParam0];
	
		default:
		
	}

	return -1f;
}

int func_592(float fParam0) // Position - 0x10D15 Signature - 22 01 04 00 00 66 00 67 03 5B
{
	float num;

	num = fParam0;
	num = (2f * num) - 100f;
	return BUILTIN::ROUND((num / 100f) * BUILTIN::TO_FLOAT(10));
}

float func_593(float fParam0, float fParam1, float fParam2) // Position - 0x10D40 Signature - 22 03 05 00 00 66 00 66 02 31
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_594(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x10D67 Signature - 22 08 11
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_623(*iParam0);
	i = func_624(*iParam0);
	num2 = func_625(*iParam0);
	j = func_626(*iParam0);
	k = func_627(*iParam0);
	l = func_628(*iParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + iParam1; l >= 60; l = l - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (k = k + iParam2; k >= 60; k = k - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (j = j + iParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_629(i, num); num2 > m; m = func_629(i, num))
	{
		iParam5 = iParam5 + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			iParam6 = iParam6 + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	if (!bParam7)
		num = num + iParam6;

	func_630(iParam0, l, k, j, num2, i, num);
	return;
}

int func_595(int iParam0, float fParam1, int iParam2) // Position - 0x10EEF Signature - 22 03 05 00 00 66 00 39 60 26
{
	if (!func_639(iParam0))
		return 0;

	if (iParam2 == 2)
		iParam2 = func_573(2);

	func_640(iParam0, fParam1, iParam2);

	if (!ENTITY::IS_ENTITY_DEAD(Global_1295666.f_3))
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1295666.f_3, iParam0, BUILTIN::FLOOR(fParam1));

	return 1;
}

BOOL func_596(Hash hParam0, Hash hParam1) // Position - 0x10F40 Signature - 22 02 04 00 00 66 01 2F 15 04 00 2F 50 02 01 66 00 66
{
	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1224357681))
		return true;

	return false;
}

int func_597(Hash hParam0, int iParam1) // Position - 0x10F67 Signature - 22 02 30
{
	var unk;
	int num;
	int num2;
	int i;

	unk = 20;
	num = 0;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(hParam0, &unk, &num2, 20))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (unk[i /*2*/].f_1 == iParam1)
			{
				num = unk[i /*2*/];
				return num;
			}
		}
	}

	return 0;
}

char* func_598(Hash hParam0) // Position - 0x10FB5 Signature - 22 01 04 00 00 66 00 2F 39 31 17 00 05 8B 07 00 25 22 0A 04 50 01 01 66 00 2F
{
	Hash labelHash;

	if (!func_41(hParam0, 0))
		return "";

	labelHash = func_407(hParam0, false);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

BOOL func_599(Hash hParam0) // Position - 0x10FEB Signature - 22 01 03 00 00 66 00 39 92
{
	if (func_75(hParam0) == -126813555 || func_75(hParam0) == 1946043663)
		return true;

	return false;
}

char* func_600(Hash hParam0) // Position - 0x11019 Signature - 22 01 04 00 00 66 00 2F 39 31 17 00 05 8B 07 00 25 22 0A 04 50 01 01 66 00 39
{
	Hash labelHash;

	if (!func_41(hParam0, 0))
		return "";

	labelHash = func_499(hParam0);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

Ped func_601(int iParam0) // Position - 0x1104E Signature - 22 01 03 00 00 03 01 00 A9
{
	return PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_602(Ped pedParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1105E Signature - 22 05 08 00 00 66 01
{
	int num;

	num = func_45(hParam1, bParam2, false, false);
	num = num + func_641(pedParam0, hParam1);

	if (bParam3)
		num = num + func_642(hParam1, bParam4);

	return num;
}

void func_603(int iParam0) // Position - 0x11093 Signature - 22 01 03 00 00 5D 1C
{
	if (!func_41(Global_1940252.f_11588, 0))
		Global_1940252.f_7 = iParam0;
	else if (func_136(Global_1940252.f_11588, 1224357681) != 0 && Global_1940252.f_11587 != 0 && Global_1940252.f_11587 != -2074770370 && !Global_1915656.f_20638 && !Global_1915656.f_22504.f_1)
		Global_1940252.f_7 = 1;
	else
		Global_1940252.f_7 = 0;

	return;
}

int func_604(int iParam0) // Position - 0x11118 Signature - 22 01 03 00 00 66 00 3C 22
{
	switch (iParam0)
	{
		case -1932005642:
			return 131072;
	
		case -1925540957:
			return 65536;
	
		case -1886898087:
			return 32880;
	
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
	
		case -1678578495:
			return 32768;
	
		case -1629261761:
			return 2049;
	
		case -1283403230:
			return 4096;
	
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
	
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
	
		case -1062102573:
			return 65601;
	
		case -915377750:
			return 2048;
	
		case -884591393:
			return 96;
	
		case -803648582:
			return 128;
	
		case -663436545:
			return 112;
	
		case -597281578:
			return 524288;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
	
		case -376594188:
			return -1;
	
		case -366477279:
			return 0;
	
		case -141044514:
			return 8304;
	
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 256;
	
		case 75507907:
			return 16384;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 1024;
	
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 512;
	
		case 351949263:
			return 262144;
	
		case 396349281:
			return 2097152;
	
		case 465720259:
			return 1048576;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
	
		case 836721350:
			return 40960;
	
		case 884232794:
			return 16496;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
	
		case 1024778115:
			return 8192;
	
		case 1042019528:
			return 2160;
	
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
	
		case 2050534155:
			return 48;
	
		default:
		
	}

	return 0;
}

// Unhandled jump detected. Output should be considered invalid
void func_605(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x112B9 Signature - 22 05 0E
{
	int i;
	Hash hash;
	Hash hash2;

	for (i = 0; i < 39; i = i + 1)
	{
		if (func_643(&uParam0->f_1[i /*3*/], 2))
		{
			if (func_644(i, iParam1))
			{
				hash2 = { func_645(i, -1) };
			
				if (!bParam4 && hash2 != Global_1953292.f_83[i /*12*/] && hash2 != 0 && uParam0->f_1[i /*3*/] != hash2 || uParam0->f_1[i /*3*/].f_1 != hash2.f_1)
					uParam0->f_1[i /*3*/] = { hash2 };
			
				if (func_646(i, 4))
					func_647(i, 4, 6);
			}
			else
			{
				if (bParam3)
					func_648(i, 4, 6);
			
				goto 0xCD;
			}
		}
	
		if (bParam2)
		{
			hash = Global_1953292.f_83[i /*12*/];
			uParam0->f_1[i /*3*/] = { hash };
		}
	}

	return;
}

void func_606(Hash hParam0, int iParam1, int iParam2) // Position - 0x11392 Signature - 22 03 05 00 00 66 00 09 39 72 5B 00 5D 0C CE 1D 80 53 63 0C 27 0B 66 01
{
	Global_1953292.f_83[func_175(hParam0, 1) /*12*/].f_11 = Global_1953292.f_83[func_175(hParam0, 1) /*12*/].f_11 || iParam1;
	return;
}

BOOL func_607(Hash hParam0) // Position - 0x113BF Signature - 22 01 05 00 00 2F 5D
{
	int num;
	var unk;

	Global_1953292.f_1039.f_2 = 0;
	num = 1226838104;
	func_522(&(Global_1953292.f_1039), num, -367421157, 1409451727, 1, hParam0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1953292.f_1039));

	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&unk, &(Global_1953292.f_1039), 1409451727))
		return false;

	return true;
}

int func_608(Hash hParam0) // Position - 0x11418 Signature - 22 01 0A 00 00 66 00 2F 39 31 17 00 05 8B 04 00 2F 50 01 01 4B 03 62 3D 41 66 00 37 06
{
	var unk;
	int num;

	if (!func_41(hParam0, 0))
		return 0;

	unk = 5;
	num = ITEMDATABASE::_0x8870895BA5ED9385(hParam0, 761377030, &unk);

	if (num > 0)
		return unk[0];

	return 0;
}

void func_609(var uParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x11452 Signature - 22 04 08 00 00 6D 22
{
	int i;
	BOOL flag;

	if (func_62(uParam0->f_1[34 /*3*/], -166674229))
		return;

	for (i = 0; i < 39; i = i + 1)
	{
		flag = func_646(i, 16);
	
		if (flag)
			func_647(i, 16, 9);
	
		if (Global_1953292.f_83[i /*12*/].f_3[0] == joaat("MISSING") || uParam0->f_1[i /*3*/] == 0)
		{
		}
		else
		{
			if (flag)
				func_312(i, iParam3);
		
			if (!bParam2 && func_608(uParam0->f_1[i /*3*/]) != 0)
			{
			}
			else if (func_644(i, iParam1) && !flag)
			{
				uParam0->f_1[i /*3*/] = Global_1953292.f_83[i /*12*/];
				uParam0->f_1[i /*3*/].f_1 = 0;
				func_314(uParam0, uParam0->f_1[i /*3*/], i, true, iParam3);
				func_312(i, iParam3);
			}
			else if (flag && !bParam2)
			{
				func_314(uParam0, uParam0->f_1[i /*3*/], i, false, iParam3);
			}
		}
	}

	return;
}

int func_610(int iParam0, int iParam1, int iParam2) // Position - 0x1155E Signature - 22 03 16
{
	int i;
	var unk;
	int num;
	int metapedType;

	unk.f_9 = -1591664384;
	metapedType = 0;

	if (func_304() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		metapedType = 1;

	iParam2 = iParam2 | 28;

	for (i = 0; i < iParam1; i = i + 1)
	{
		if (!func_105(&unk, i, iParam0, iParam1))
		{
		}
		else if (func_649(unk.f_4) && PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(unk.f_4, metapedType, true) == 0)
		{
		}
		else if (func_608(unk.f_4) != 0)
		{
		}
		else if (func_62(unk.f_4, -166674229))
		{
		}
		else if (func_62(unk.f_4, 525391395))
		{
		}
		else
		{
			num = func_75(unk.f_4);
		
			if (func_651(iParam2, func_650(num)))
			{
			}
			else
			{
				return unk.f_4;
			}
		}
	}

	return 0;
}

void func_611(var uParam0, int iParam1, int iParam2) // Position - 0x1162B Signature - 22 03 06 00 00 66 01 66
{
	int num;

	if (func_62(uParam0->f_1[iParam1 /*3*/], 343781202))
	{
		func_417(uParam0, uParam0->f_1[iParam1 /*3*/]);
	}
	else
	{
		uParam0->f_1[iParam1 /*3*/] = Global_1953292.f_83[iParam1 /*12*/];
		uParam0->f_1[iParam1 /*3*/].f_1 = 0;
		func_312(iParam1, iParam2);
	}

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && uParam0->f_1[num /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_312(num, iParam2);
	}

	return;
}

BOOL func_612(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x116BF Signature - 22 03 05 00 00 66 00 66 01 66 02 6D 1D
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

BOOL func_613(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x116D6 Signature - 22 03 05 00 00 66 00 66 01 66 02 6D 1A
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 26, panParam2, 0);
}

BOOL func_614(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x116ED Signature - 22 03 05 00 00 66 00 66 01 66 02 6D 12
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

BOOL func_615(var uParam0, int iParam1, int iParam2) // Position - 0x11704 Signature - 22 03 07 00 00 66 01 6D
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_616() // Position - 0x1173B Signature - 22 00 02 00 00 5D DD
{
	return Global_1102813.f_3672;
}

void func_617(Player plParam0) // Position - 0x1174A Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 77
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_618(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_618(Player plParam0) // Position - 0x117B6 Signature - 22 01 03 00 00 66 00 5D 77
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

void func_619(int iParam0) // Position - 0x117F1 Signature - 22 01 03 00 00 08 66 00 32 2F 66 00 6C 01 2F
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_652(&(iParam0->f_4));
	return;
}

BOOL func_620(int iParam0) // Position - 0x11814 Signature - 22 01 03 00 00 5D 0B
{
	return func_615(&(Global_1956875.f_1565), iParam0, 1);
}

int func_621(BOOL bParam0) // Position - 0x1182A Signature - 22 01 03 00 00 66 00 8B 04
{
	if (bParam0)
		return 1;

	return 0;
}

float func_622(Player plParam0) // Position - 0x1183C Signature - 22 01 03 00 00 66 00 2F 03 09 00
{
	return PLAYER::_GET_PLAYER_MAX_DEAD_EYE(plParam0, 0) - (float)func_653(2);
}

int func_623(int iParam0) // Position - 0x11852 Signature - 22 01 03 00 00 66 00 6D 1A
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_624(int iParam0) // Position - 0x11877 Signature - 22 01 03 00 00 66 00 6D 16
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_625(int iParam0) // Position - 0x1188A Signature - 22 01 03 00 00 66 00 6D 11
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_626(int iParam0) // Position - 0x1189D Signature - 22 01 03 00 00 66 00 6D 0C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_627(int iParam0) // Position - 0x118B0 Signature - 22 01 03 00 00 66 00 4D
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_628(int iParam0) // Position - 0x118C2 Signature - 22 01 03 00 00 66 00 2F 03 09 01
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_629(int iParam0, int iParam1) // Position - 0x118D4 Signature - 22 02 04 00 00 66 01 2F 8A 03 00 2F
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

void func_630(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1196E Signature - 22 07 09 00 00 66
{
	func_655(iParam0, iParam6);
	func_656(iParam0, iParam5);
	func_657(iParam0, iParam4);
	func_658(iParam0, iParam3);
	func_659(iParam0, iParam2);
	func_660(iParam0, iParam1);
	return;
}

BOOL func_631(int iParam0) // Position - 0x119A6 Signature - 22 01 09 00 00 66
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_628(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_627(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_626(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_623(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_624(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_625(iParam0);

	if (num6 < 1 || num6 > func_629(num5, num4))
		return false;

	return true;
}

int func_632(int iParam0) // Position - 0x11A82 Signature - 22 01 03 00 00 66 00 3C 03 00 00 00 00 00 13 00 01 00 00 00 09 00 02 00 00 00 0B 00 68 0C 00 09 50 01 01 2F
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		default:
		
	}

	return 0;
}

char* func_633(int iParam0) // Position - 0x11AB1 Signature - 22 01 03 00 00 66 00 3C 03 00 00 00 00 00 0F 00 01 00 00 00 10 00 02 00 00 00 11 00 68 15 00 25 11
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
	
		case 1:
			return "StaminaCoreValue";
	
		case 2:
			return "DeadEyeCoreValue";
	
		default:
		
	}

	return "";
}

char* func_634(int iParam0) // Position - 0x11AEC Signature - 22 01 03 00 00 66 00 3C 03 00 00 00 00 00 0F 00 01 00 00 00 10 00 02 00 00 00 11 00 68 15 00 25 43
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
	
		case 1:
			return "isLowStaminaCoreActive";
	
		case 2:
			return "isLowDeadEyeCoreActive";
	
		default:
		
	}

	return "";
}

void func_635(int iParam0, float fParam1, int iParam2) // Position - 0x11B27 Signature - 22 03 05 00 00 66 02 11 15 07 00 11 39 22 07 01 67 02 66 02 3C 02 00 00 00 00 00 09 00 01 00 00 00 15
{
	if (iParam2 == 2)
		iParam2 = func_573(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_6[iParam0 /*3*/] = fParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/] = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_636(int iParam0, int iParam1, int iParam2) // Position - 0x11B79 Signature - 22 03 05 00 00 66 02 11 15 07 00 11 39 22 07 01 67 02 66 02 3C 02 00 00 00 00 00 09 00 01 00 00 00 17 00 68 2A 00 66 01 66 00 5D 0B DC 1D 18 97 05 80 10
{
	if (iParam2 == 2)
		iParam2 = func_573(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_16[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_16[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

int func_637(int iParam0, int iParam1) // Position - 0x11BCF Signature - 22 02 04 00 00 66 00 3C B8
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
	
		case -2059285007:
			return 167;
	
		case -2006026692:
			return 176;
	
		case -1993903481:
			return 124;
	
		case -1970041458:
			return 142;
	
		case -1935700575:
			return 136;
	
		case -1927422497:
			return 127;
	
		case -1920464018:
			return 58;
	
		case -1919393558:
			return 27;
	
		case -1857550353:
			return 173;
	
		case -1855662261:
			return 55;
	
		case -1840995238:
			return 15;
	
		case -1835722213:
			return 88;
	
		case -1790318144:
			return 106;
	
		case -1786033368:
			return 62;
	
		case -1767968552:
			return 86;
	
		case -1767662471:
			return 32;
	
		case -1729980669:
			return 108;
	
		case -1729554078:
			return 49;
	
		case -1727526861:
			return 109;
	
		case -1722264360:
			return 18;
	
		case -1719665775:
			return 37;
	
		case -1716981503:
			return 107;
	
		case -1697567574:
			return 72;
	
		case -1685270562:
			return 181;
	
		case -1631930150:
			return 166;
	
		case -1629969648:
			return 174;
	
		case -1605880447:
			return 120;
	
		case -1575244501:
			return 61;
	
		case -1551628748:
			return 74;
	
		case -1543433893:
			return 70;
	
		case -1539337723:
			return 121;
	
		case -1525401254:
			return 64;
	
		case -1525233154:
			return 47;
	
		case -1491472827:
			return 94;
	
		case -1486927560:
			return 112;
	
		case -1480068681:
			return 50;
	
		case -1478178768:
			return 148;
	
		case -1465202595:
			return 104;
	
		case -1459368569:
			return 116;
	
		case -1431848307:
			return 76;
	
		case -1418298797:
			return 155;
	
		case -1391865428:
			return 171;
	
		case -1378468884:
			return 60;
	
		case -1291022662:
			return 117;
	
		case -1288042557:
			return 19;
	
		case -1248720641:
			return 7;
	
		case -1229834518:
			return 89;
	
		case -1223791123:
			return 79;
	
		case -1209874968:
			return 45;
	
		case -1197630873:
			return 153;
	
		case -1196069774:
			return 180;
	
		case -1181880939:
			return 80;
	
		case -1170784825:
			return 38;
	
		case -1125028284:
			return 137;
	
		case -1123356036:
			return 147;
	
		case -1100659165:
			return 6;
	
		case -1089821002:
			return 85;
	
		case -1084890102:
			return 172;
	
		case -1080696981:
			return 92;
	
		case -1010031245:
			return 39;
	
		case -992423055:
			return 157;
	
		case -979738281:
			return 77;
	
		case -931294997:
			return 111;
	
		case -920221586:
			return 110;
	
		case -900877140:
			return 30;
	
		case -885737328:
			return 114;
	
		case -885646667:
			return 67;
	
		case -837774766:
			return 78;
	
		case -813902658:
			return 182;
	
		case -799500009:
			return 145;
	
		case -751329575:
			return 139;
	
		case -711254121:
			return 132;
	
		case -660114191:
			return 31;
	
		case -649929946:
			return 53;
	
		case -636552746:
			return 123;
	
		case -587737142:
			return 71;
	
		case -546870456:
			return 159;
	
		case -521477124:
			return 82;
	
		case -481051896:
			return 135;
	
		case -425216802:
			return 17;
	
		case -415437740:
			return 103;
	
		case -415250715:
			return 144;
	
		case -392183396:
			return 90;
	
		case -343572565:
			return 21;
	
		case -340578116:
			return 169;
	
		case -286632741:
			return 8;
	
		case -267135864:
			return 138;
	
		case -233204301:
			return 105;
	
		case -203268054:
			return 143;
	
		case -161625840:
			return 177;
	
		case -126580932:
			return 0;
	
		case -117284255:
			return 122;
	
		case -60432888:
			return 44;
	
		case -56802666:
			return 102;
	
		case -47513954:
			return 99;
	
		case -46116991:
			return 163;
	
		case -35033037:
			return 133;
	
		case -33431232:
			return 12;
	
		case -29822088:
			return 40;
	
		case 0:
			return 1;
	
		case 1213703:
			return 154;
	
		case 54499763:
			return 98;
	
		case 111084081:
			return 56;
	
		case 114587291:
			return 29;
	
		case 149216078:
			return 57;
	
		case 168336706:
			return 149;
	
		case 173401469:
			return 100;
	
		case 180714777:
			return 81;
	
		case 268103762:
			return 97;
	
		case 282858309:
			return 183;
	
		case 320758674:
			return 158;
	
		case 352539363:
			return 179;
	
		case 362862598:
			return 170;
	
		case 398279342:
			return 34;
	
		case 408582472:
			return 5;
	
		case 420477860:
			return 25;
	
		case 456199285:
			return 168;
	
		case 509781427:
			return 93;
	
		case 550487527:
			return 35;
	
		case 576694808:
			return 175;
	
		case 638586808:
			return 118;
	
		case 659100749:
			return 59;
	
		case 666050502:
			return 65;
	
		case 698214003:
			return 2;
	
		case 713106899:
			return 36;
	
		case 780689752:
			return 3;
	
		case 791791441:
			return 125;
	
		case 797908556:
			return 42;
	
		case 798283666:
			return 141;
	
		case 807983049:
			return 150;
	
		case 839199173:
			return 91;
	
		case 846387993:
			return 14;
	
		case 852774198:
			return 113;
	
		case 878491929:
			return 33;
	
		case 887717126:
			return 66;
	
		case 926420921:
			return 51;
	
		case 946848176:
			return 68;
	
		case 952755846:
			return 24;
	
		case 955999834:
			return 134;
	
		case 956867472:
			return 9;
	
		case 1036630721:
			return 10;
	
		case 1037792287:
			return 140;
	
		case 1052684812:
			return 87;
	
		case 1075856357:
			return 95;
	
		case 1078589127:
			return 46;
	
		case 1095779900:
			return 22;
	
		case 1110815339:
			return 152;
	
		case 1138017610:
			return 11;
	
		case 1156950836:
			return 83;
	
		case 1195903441:
			return 52;
	
		case 1278022357:
			return 48;
	
		case 1281707602:
			return 164;
	
		case 1323028278:
			return 41;
	
		case 1374979106:
			return 28;
	
		case 1405624312:
			return 146;
	
		case 1444077748:
			return 23;
	
		case 1449867002:
			return 162;
	
		case 1498983922:
			return 84;
	
		case 1547488310:
			return 161;
	
		case 1554410187:
			return 73;
	
		case 1585362808:
			return 16;
	
		case 1636352616:
			return 151;
	
		case 1662680949:
			return 178;
	
		case 1698995037:
			return 4;
	
		case 1769731136:
			return 115;
	
		case 1801131110:
			return 75;
	
		case 1806354060:
			return 96;
	
		case 1811663962:
			return 131;
	
		case 1828803907:
			return 20;
	
		case 1829805500:
			return 54;
	
		case 1830494920:
			return 101;
	
		case 1838787462:
			return 129;
	
		case 1865781806:
			return 165;
	
		case 1899963938:
			return 63;
	
		case 1900141702:
			return 156;
	
		case 1903067887:
			return 126;
	
		case 1907663129:
			return 43;
	
		case 2040423027:
			return 128;
	
		case 2050123975:
			return 130;
	
		case 2096770678:
			return 119;
	
		case 2110112797:
			return 69;
	
		case 2119170919:
			return 160;
	
		case 2132307595:
			return 26;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

// Unhandled jump detected. Output should be considered invalid
int func_638(int iParam0) // Position - 0x123D0 Signature - 22 01 0A 00 00 66 00 39
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int j;
	int k;

	if (!func_661(iParam0))
		return 0;

	num = func_637(iParam0, 1);

	if (!func_662(Global_1156111.f_35859.f_919[num /*12*/]))
		return 1;

	num4 = func_663(Global_1156111.f_35859.f_919[num /*12*/], 1);

	for (i = 0; i < Global_1156111.f_35859[num4 /*6*/].f_5; i = i + 1)
	{
		num2 = Global_1156111.f_35859[num4 /*6*/][i];
	
		switch (func_664(iParam0, num2))
		{
			case 0:
				func_665(num2, iParam0, i);
				break;
		
			case 1:
				for (j = 0; j < Global_1156111.f_35859.f_11700; j = j + 1)
				{
					if (Global_1156111.f_35859.f_9503[j /*3*/] != num2 || Global_1156111.f_35859.f_9503[j /*3*/].f_1 != iParam0)
					{
					}
					else
					{
						func_665(num2, iParam0, i);
						func_666(&Global_1156111.f_35859.f_9503[j /*3*/]);
						Global_1156111.f_35859.f_11700 = Global_1156111.f_35859.f_11700 - 1;
						Global_1156111.f_35859.f_9503[j /*3*/] = { Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/] };
						func_666(&Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/]);
						break;
					}
				}
				break;
		
			case 2:
				goto 0x25E;
		}
	
		num3 = func_667(num2, 1);
		func_668(num3, -1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_29 <= 0)
		{
			func_669(num3, 0);
		
			for (k = 0; k < Global_1156111.f_35859.f_9502; k = k + 1)
			{
				if (Global_1156111.f_35859.f_9302[k] != num2)
				{
				}
				else
				{
					Global_1156111.f_35859.f_9302[k] = -1;
					Global_1156111.f_35859.f_9502 = Global_1156111.f_35859.f_9502 - 1;
					Global_1156111.f_35859.f_9302[k] = Global_1156111.f_35859.f_9302[Global_1156111.f_35859.f_9502];
					Global_1156111.f_35859.f_9302[Global_1156111.f_35859.f_9502] = -1;
					break;
				}
			}
		}
	}

	Global_1156111.f_35859.f_919[num /*12*/] = -1;
	func_670(&Global_1156111.f_35859.f_919[num /*12*/]);
	return 1;
}

BOOL func_639(int iParam0) // Position - 0x12660 Signature - 22 01 03 00 00 66 00 39 61 0B
{
	if (func_586(iParam0))
		return true;
	else if (func_671(iParam0))
		return true;

	return false;
}

void func_640(int iParam0, float fParam1, int iParam2) // Position - 0x12686 Signature - 22 03 05 00 00 66 01 73
{
	if (fParam1 < 0f)
		return;

	if (iParam2 == 2)
		iParam2 = func_573(1);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_26[iParam0] = fParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_26[iParam0] = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

int func_641(Ped pedParam0, Hash hParam1) // Position - 0x126E2 Signature - 22 02 06 00 00 66 00 03 05 01
{
	int num;
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (func_672(hParam1))
		{
			num = 0;
		
			for (i = 0; i < 3; i = i + 1)
			{
				if (Global_1903838.f_113[i /*96*/].f_1 == hParam1)
					num = num + 1;
			}
		
			return num;
		}
		else
		{
			return func_673(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0), hParam1);
		}
	}

	return 0;
}

int func_642(Hash hParam0, BOOL bParam1) // Position - 0x12740 Signature - 22 02 04 00 00 66 01 05
{
	if (!bParam1 || func_674())
		return func_182(hParam0, func_183(true), -2015960939, true, true, false);

	return 0;
}

BOOL func_643(var uParam0, int iParam1) // Position - 0x1276F Signature - 22 02 04 00 00 66 00 27 02 66 01 69
{
	return uParam0->f_2 && iParam1 != false;
}

BOOL func_644(int iParam0, int iParam1) // Position - 0x12780 Signature - 22 02 04 00 00 66 00 2F 35
{
	if (iParam0 < 0 || iParam0 >= 39)
		return false;

	return Global_1953292.f_83[iParam0 /*12*/].f_10 && iParam1 != false;
}

Vector3 func_645(int iParam0, int iParam1) // Position - 0x127AF Signature - 22 02 04 00 00 66 01 08 15 0D 00 87 0A 44 80 37 18 98 02 78 F1 06 67 01 1D
{
	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	return Global_17418.f_55.f_664.f_33[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

BOOL func_646(int iParam0, int iParam1) // Position - 0x127E2 Signature - 22 02 04 00 00 66 00 5D 0C
{
	return Global_1953292.f_83[iParam0 /*12*/].f_11 && iParam1 != false;
}

void func_647(int iParam0, int iParam1, int iParam2) // Position - 0x127FB Signature - 22 03 05 00 00 66 00 5D 0C CE 1D 80 53 63 0C 27 0B 66 00
{
	Global_1953292.f_83[iParam0 /*12*/].f_11 = Global_1953292.f_83[iParam0 /*12*/].f_11 - Global_1953292.f_83[iParam0 /*12*/].f_11 && iParam1;
	return;
}

void func_648(int iParam0, int iParam1, int iParam2) // Position - 0x1282B Signature - 22 03 05 00 00 66 00 5D 0C CE 1D 80 53 63 0C 27 0B 66 01
{
	Global_1953292.f_83[iParam0 /*12*/].f_11 = Global_1953292.f_83[iParam0 /*12*/].f_11 || iParam1;
	return;
}

BOOL func_649(Hash hParam0) // Position - 0x1284E Signature - 22 01 03 00 00 66 00 37 3C
{
	return hParam0 != joaat("clothing_item_m_beard_stubble") && hParam0 != -230310728 && hParam0 != 1326838792 && !func_516(hParam0);
}

int func_650(int iParam0) // Position - 0x12884 Signature - 22 01 03 00 00 66 00 3C 05
{
	switch (iParam0)
	{
		case -1740828670:
			return 8;
	
		case 344283346:
			return 16;
	
		case 502936876:
			return 1;
	
		case 684307653:
			return 2;
	
		case 1759215194:
			return 4;
	
		default:
		
	}

	return 0;
}

BOOL func_651(int iParam0, int iParam1) // Position - 0x128C9 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 01 03 00 00 2F
{
	return iParam0 && iParam1 != false;
}

void func_652(var uParam0) // Position - 0x128D8 Signature - 22 01 03 00 00 2F 66 00 32 2F
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

int func_653(int iParam0) // Position - 0x12934 Signature - 22 01 03 00 00 66 00 3C 03 00 00 00 00 00 0F 00 01 00 00 00 13
{
	switch (iParam0)
	{
		case 0:
			return func_480(2) * 2;
	
		case 1:
			return func_484(2) * 2;
	
		case 2:
			return func_482(2) * 2;
	
		default:
		
	}

	return -1;
}

var func_654(BOOL bParam0, var uParam1, var uParam2) // Position - 0x12975 Signature - 22 03 05 00 00 66 00 8B 08 00 66 01 50 03 01 68 05 00 66 02 50 03 01 22 02 04 00 00 66 01
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_655(var uParam0, int iParam1) // Position - 0x1298C Signature - 22 02 04 00 00 66 01 2F 8A 03 00 50
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_656(var uParam0, int iParam1) // Position - 0x12A12 Signature - 22 02 04 00 00 66 01 2F 35 6A 05 8B 06 00 66 01 6D 0B
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_657(var uParam0, int iParam1) // Position - 0x12A4E Signature - 22 02 06 00 00 66 00 76
{
	int num;
	int num2;

	num = func_624(*uParam0);
	num2 = func_623(*uParam0);

	if (iParam1 < 1 || iParam1 > func_629(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_658(var uParam0, int iParam1) // Position - 0x12AA1 Signature - 22 02 04 00 00 66 01 2F 35 6A 05 8B 06 00 66 01 6D 17
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_659(var uParam0, int iParam1) // Position - 0x12ADC Signature - 22 02 04 00 00 66 01 2F 35 6A 05 8B 06 00 66 01 6D 3C 7E 30 8B 03 00 50 02 00 66 00 76 66 00 76 25
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_660(var uParam0, int iParam1) // Position - 0x12B15 Signature - 22 02 04 00 00 66 01 2F 35 6A 05 8B 06 00 66 01 6D 3C 7E 30 8B 03 00 50 02 00 66 00 76 66 00 76 6D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_661(int iParam0) // Position - 0x12B4D Signature - 22 01 04 00 00 66 00 09 39 CF 1B 01 67 03 66 03 11 35
{
	int num;

	num = func_637(iParam0, 1);

	if (num < 2 || num >= 183)
		return false;

	return true;
}

BOOL func_662(int iParam0) // Position - 0x12B75 Signature - 22 01 04 00 00 66 00 09 39 9D
{
	int num;

	num = func_663(iParam0, 1);

	if (num < 1 || num >= 153)
		return false;

	return true;
}

int func_663(int iParam0, int iParam1) // Position - 0x12B9D Signature - 22 02 04 00 00 66 00 3C 9A
{
	switch (iParam0)
	{
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3"):
			return 100;
	
		case joaat("CONTENT__PREDATOR__LEVEL_0"):
			return 136;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3"):
			return 63;
	
		case -2082434331:
			return 152;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2"):
			return 65;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2"):
			return 93;
	
		case -2038430863:
			return 151;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1"):
			return 64;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2"):
			return 35;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3"):
			return 6;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2"):
			return 56;
	
		case joaat("CONTENT__PREDATOR__LEVEL_3"):
			return 139;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3"):
			return 54;
	
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS"):
			return 110;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2"):
			return 78;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1"):
			return 80;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2"):
			return 62;
	
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME"):
			return 73;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2"):
			return 41;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1"):
			return 25;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1"):
			return 92;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2"):
			return 47;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1"):
			return 61;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3"):
			return 3;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1"):
			return 49;
	
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY"):
			return 148;
	
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS"):
			return 107;
	
		case joaat("UNLOCK__ROLE__INTUITION_BONUS"):
			return 111;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1"):
			return 55;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3"):
			return 9;
	
		case joaat("CONTENT__PREDATOR__LEVEL_1"):
			return 137;
	
		case -1246069683:
			return 124;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1"):
			return 46;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1"):
			return 74;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3"):
			return 69;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1"):
			return 7;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4"):
			return 131;
	
		case joaat("CONTENT__PREDATOR__LEVEL_7"):
			return 143;
	
		case -1105699593:
			return 153;
	
		case -1047626954:
			return 118;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1"):
			return 1;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3"):
			return 79;
	
		case -980934770:
			return 125;
	
		case joaat("CONTENT__PREDATOR__LEVEL_4"):
			return 140;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5"):
			return 132;
	
		case joaat("CONTENT__PREDATOR__LEVEL_6"):
			return 142;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3"):
			return 60;
	
		case -821191074:
			return 115;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1"):
			return 40;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3"):
			return 48;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1"):
			return 77;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_2"):
			return 17;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2"):
			return 2;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3"):
			return 72;
	
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM"):
			return 121;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2"):
			return 59;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3"):
			return 85;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3"):
			return 94;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1"):
			return 4;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2"):
			return 68;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1"):
			return 58;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1"):
			return 128;
	
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY"):
			return 119;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1"):
			return 10;
	
		case joaat("CONTENT__HUNTED__MASKED"):
			return 146;
	
		case joaat("CONTENT__PASSIVE_MODE"):
			return 135;
	
		case -193167881:
			return 127;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3"):
			return 30;
	
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN"):
			return 122;
	
		case joaat("CONSUMABLE__DAILY_STEW"):
			return 150;
	
		case joaat("CONTENT__PREDATOR__LEVEL_5"):
			return 141;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1"):
			return 67;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1"):
			return 43;
	
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS"):
			return 106;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3"):
			return 39;
	
		case -1:
			return 0;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2"):
			return 8;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2"):
			return 11;
	
		case 130533095:
			return 126;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_3"):
			return 18;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2"):
			return 44;
	
		case 158579484:
			return 117;
	
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE"):
			return 101;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3"):
			return 15;
	
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS"):
			return 113;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6"):
			return 133;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1"):
			return 86;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2"):
			return 71;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2"):
			return 29;
	
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS"):
			return 105;
	
		case joaat("STATUS_EFFECT__POISON"):
			return 102;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3"):
			return 12;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3"):
			return 51;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7"):
			return 134;
	
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS"):
			return 109;
	
		case 549687162:
			return 145;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1"):
			return 28;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_1"):
			return 16;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2"):
			return 26;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1"):
			return 98;
	
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF"):
			return 149;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3"):
			return 45;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2"):
			return 50;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3"):
			return 88;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3"):
			return 36;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2"):
			return 90;
	
		case joaat("CONTENT__PREDATOR__LEVEL_8"):
			return 144;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2"):
			return 81;
	
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS"):
			return 114;
	
		case 808176588:
			return 116;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2"):
			return 38;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1"):
			return 70;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3"):
			return 21;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2"):
			return 14;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1"):
			return 89;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2"):
			return 96;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3"):
			return 82;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2"):
			return 87;
	
		case joaat("UNLOCK__ROLE__FOCUS_BONUS"):
			return 104;
	
		case 1130659268:
			return 123;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2"):
			return 20;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2"):
			return 75;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1"):
			return 31;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3"):
			return 97;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1"):
			return 19;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2"):
			return 32;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3"):
			return 24;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2"):
			return 129;
	
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS"):
			return 112;
	
		case joaat("CONTENT__PREDATOR__LEVEL_2"):
			return 138;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1"):
			return 83;
	
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF"):
			return 147;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3"):
			return 57;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1"):
			return 22;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3"):
			return 33;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3"):
			return 130;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1"):
			return 13;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2"):
			return 84;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1"):
			return 95;
	
		case joaat("EQUIPMENT__NED_KELLY_COOP"):
			return 120;
	
		case joaat("STATUS_EFFECT__TRACKING"):
			return 103;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2"):
			return 23;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2"):
			return 99;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3"):
			return 66;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1"):
			return 52;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3"):
			return 27;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3"):
			return 76;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2"):
			return 5;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3"):
			return 42;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1"):
			return 37;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1"):
			return 34;
	
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS"):
			return 108;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2"):
			return 53;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3"):
			return 91;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_664(int iParam0, int iParam1) // Position - 0x13254 Signature - 22 02 07 00 00 66 00 39
{
	int num;
	int num2;
	int num3;

	num = func_675(iParam0);
	num2 = Global_1295666;
	num3 = func_667(iParam1, 1);

	switch (Global_1156111.f_35859.f_3116[num3 /*31*/].f_1)
	{
		case joaat("ON_DISABLE"):
			if (num2 == num)
				return 0;
			else
				return 2;
			break;
	
		case joaat("Duration"):
		case joaat("DURATION_OR_MISS"):
		case joaat("ALLY_LEAVE_DEADEYE"):
		case 1002704651:
		case 1270499458:
			return 1;
	
		default:
			if (num2 == num)
				return 1;
			break;
	}

	return 2;
}

int func_665(int iParam0, int iParam1, int iParam2) // Position - 0x132D7 Signature - 22 03 09 00 00 66 01
{
	int num;
	int num2;

	if (!func_661(iParam1))
		return 0;

	if (!func_676(iParam0))
		return 0;

	num = func_667(iParam0, 1);
	func_677(iParam0, iParam1, iParam2);

	if (func_678(Global_1156111.f_35859.f_3116[num /*31*/]) && func_679(iParam0, Global_1156111.f_35859.f_3116[num /*31*/].f_4))
	{
		num2 = { func_680(Global_1156111.f_35859.f_3116[num /*31*/].f_4) };
	
		if (func_681(num2))
			if (func_682(num2, num2.f_1, num2.f_2))
				func_683(Global_1156111.f_35859.f_3116[num /*31*/].f_4, num2, num2.f_1, num2.f_2);
			else
				func_684(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
		else
			func_684(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
	}

	return 1;
}

void func_666(int iParam0) // Position - 0x133CF Signature - 22 01 03 00 00 08 66 00 32 2F 66 00 6C 01 08
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = -1;
	return;
}

int func_667(int iParam0, int iParam1) // Position - 0x133E5 Signature - 22 02 04 00 00 66 00 3C C8
{
	switch (iParam0)
	{
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS_EFFECT"):
			return 145;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2_EFFECT"):
			return 108;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1_EFFECT"):
			return 90;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_LOCAL_EFFECT"):
			return 79;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3_EFFECT"):
			return 60;
	
		case joaat("STATUS_EFFECT__POISON_EFFECT"):
			return 137;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2_EFFECT"):
			return 91;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2_EFFECT"):
			return 75;
	
		case -2019073637:
			return 198;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3_EFFECT"):
			return 26;
	
		case joaat("CONTENT__PREDATOR__LEVEL_2_EFFECTS"):
			return 180;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3_EFFECT"):
			return 92;
	
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY_EFFECT"):
			return 194;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_2_EFFECT"):
			return 28;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_TAKEN_EFFECT"):
			return 130;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3_EFFECT"):
			return 49;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3_EFFECT"):
			return 22;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1_EFFECT"):
			return 55;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_ON_HORSEBACK_INDICATOR"):
			return 6;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2_EFFECT"):
			return 134;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_3_EFFECT"):
			return 29;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3_EFFECT"):
			return 16;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3_EFFECT"):
			return 112;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3_EFFECT"):
			return 106;
	
		case joaat("ABILITY_CARD__HANGMAN_INDICATOR"):
			return 30;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGED_INDICATOR"):
			return 8;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2_EFFECT"):
			return 111;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2_EFFECT"):
			return 96;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3_EFFECT"):
			return 45;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_EFFECT"):
			return 63;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2_EFFECT"):
			return 38;
	
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS"):
			return 188;
	
		case joaat("EQUIPMENT__NED_KELLY_BASE_IMMUNITIES"):
			return 156;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_INDICATOR"):
			return 50;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1_EFFECT"):
			return 117;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3_EFFECT"):
			return 39;
	
		case joaat("CONTENT__PREDATOR__LEVEL_4_EFFECTS"):
			return 182;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3_EFFECT"):
			return 109;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3_EFFECT"):
			return 33;
	
		case -1394912816:
			return 199;
	
		case -1391351739:
			return 166;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_1_EFFECT"):
			return 27;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1_EFFECT"):
			return 110;
	
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_1_COST"):
			return 1;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_PENALTY"):
			return 46;
	
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_2_COST"):
			return 2;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_TAKEN_EFFECT"):
			return 132;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3_EFFECT"):
			return 119;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3_EFFECT"):
			return 76;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_AURA"):
			return 61;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7_EFFECT"):
			return 173;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1_EFFECT"):
			return 47;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1_EFFECT"):
			return 74;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1_EFFECT"):
			return 31;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1_EFFECT"):
			return 123;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2_EFFECT"):
			return 124;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2_EFFECT"):
			return 11;
	
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_INDICATOR"):
			return 103;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2_EFFECT"):
			return 21;
	
		case joaat("CONTENT__PREDATOR__LEVEL_6_EFFECTS"):
			return 184;
	
		case -749371485:
			return 164;
	
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS_EFFECT"):
			return 142;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_LOCAL_EFFECT"):
			return 81;
	
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS_EFFECT"):
			return 148;
	
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF_EFFECT"):
			return 193;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3_EFFECT"):
			return 57;
	
		case joaat("CONTENT__PREDATOR__LEVEL_3_EFFECTS"):
			return 181;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2_EFFECT"):
			return 48;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2_EFFECT"):
			return 59;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3_EFFECT"):
			return 97;
	
		case joaat("CONTENT__PREDATOR__LEVEL_7_EFFECTS"):
			return 185;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1_EFFECT"):
			return 104;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3_EFFECT"):
			return 19;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1_EFFECT"):
			return 133;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1_EFFECT"):
			return 113;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_INDICATOR"):
			return 23;
	
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM_EFFECT"):
			return 160;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_INDICATOR"):
			return 5;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_AURA"):
			return 13;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_COST"):
			return 66;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_INDICATOR"):
			return 4;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1_COST"):
			return 51;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6_EFFECT"):
			return 172;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_PENALTY"):
			return 68;
	
		case -254950601:
			return 152;
	
		case -242870769:
			return 163;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2_EFFECT"):
			return 35;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2_EFFECT"):
			return 105;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2_EFFECT"):
			return 41;
	
		case joaat("EQUIPMENT__NED_KELLY_BASE_EFFECTS"):
			return 155;
	
		case -124368414:
			return 197;
	
		case -106398498:
			return 153;
	
		case -97000889:
			return 86;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3_EFFECT"):
			return 169;
	
		case -1:
			return 0;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2_EFFECT"):
			return 56;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3_EFFECT"):
			return 125;
	
		case joaat("ABILITY_CARD__DEFAULT_WINDED_INDICATOR"):
			return 9;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1_EFFECT"):
			return 69;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2_EFFECT"):
			return 15;
	
		case joaat("CONTENT__PASSIVE_MODE__IMMUNITIES_EFFECT"):
			return 177;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_COST"):
			return 64;
	
		case joaat("CONTENT__PASSIVE_MODE__MOUNT_EFFECTS"):
			return 175;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1_EFFECT"):
			return 98;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_LOCAL_EFFECT"):
			return 77;
	
		case 275909046:
			return 151;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5_EFFECT"):
			return 171;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_INDICATOR"):
			return 54;
	
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE_EFFECT"):
			return 136;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3_EFFECT"):
			return 89;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_DEALT_EFFECT"):
			return 127;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_DEALT_EFFECT"):
			return 129;
	
		case 558636891:
			return 187;
	
		case joaat("CONSUMABLE__DAILY_STEW_EFFECT"):
			return 196;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_REMOTE_EFFECT"):
			return 80;
	
		case 634217179:
			return 150;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2_EFFECT"):
			return 70;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1_EFFECT"):
			return 95;
	
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF_EFFECT"):
			return 195;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1_EFFECT"):
			return 107;
	
		case joaat("UNLOCK__ROLE__FOCUS_BONUS_EFFECT"):
			return 139;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1_EFFECT"):
			return 20;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_REMOTE_EFFECT"):
			return 82;
	
		case joaat("CONTENT__PREDATOR__LEVEL_0_EFFECTS"):
			return 178;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_EFFECT"):
			return 65;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1_EFFECT"):
			return 58;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1_EFFECT"):
			return 83;
	
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS_EFFECT"):
			return 149;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2_EFFECT"):
			return 18;
	
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_COST"):
			return 102;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4_EFFECT"):
			return 170;
	
		case joaat("CONTENT__PREDATOR__LEVEL_8_EFFECTS"):
			return 186;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2_EFFECT"):
			return 84;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3_EFFECT"):
			return 100;
	
		case joaat("CONTENT__HUNTED__MASKED_EFFECTS"):
			return 192;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_DEADEYE_INDICATOR"):
			return 93;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_DEALT_EFFECT"):
			return 131;
	
		case joaat("CONTENT__PREDATOR__LEVEL_5_EFFECTS"):
			return 183;
	
		case joaat("EQUIPMENT__NED_KELLY_BASE_RESTRICTIONS"):
			return 157;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1_EFFECT"):
			return 17;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3_EFFECT"):
			return 122;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3_EFFECT"):
			return 115;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1_EFFECT"):
			return 34;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2_EFFECT"):
			return 32;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1_EFFECT"):
			return 43;
	
		case joaat("STATUS_EFFECT__TRACKING_EFFECT"):
			return 138;
	
		case joaat("CONTENT__PASSIVE_MODE__VEHICLE_EFFECTS"):
			return 176;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3_EFFECT"):
			return 42;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1_EFFECT"):
			return 10;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3_EFFECT"):
			return 12;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_AURA"):
			return 73;
	
		case 1256374770:
			return 165;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3_EFFECT"):
			return 36;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1_EFFECT"):
			return 37;
	
		case joaat("CONTENT__PREDATOR__BASE_IMMUNITIES"):
			return 190;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2_EFFECT"):
			return 114;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2_EFFECT"):
			return 99;
	
		case 1305406380:
			return 162;
	
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS_EFFECT"):
			return 144;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2_EFFECT"):
			return 25;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2_EFFECT"):
			return 88;
	
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS_EFFECT"):
			return 143;
	
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS_EFFECT"):
			return 140;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_EAGLE_EYE_INDICATOR"):
			return 94;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2_EFFECT"):
			return 168;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3_EFFECT"):
			return 85;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1_EFFECT"):
			return 87;
	
		case 1462245043:
			return 154;
	
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS_VULNERABLE"):
			return 189;
	
		case joaat("UNLOCK__ROLE__INTUITION_BONUS_EFFECT"):
			return 146;
	
		case joaat("CONTENT__PREDATOR__RESPAWN_EFFECTS"):
			return 191;
	
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS_EFFECT"):
			return 147;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_COST"):
			return 62;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_REMOTE_EFFECT"):
			return 78;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_INDICATOR"):
			return 126;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_INDICATOR"):
			return 116;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_PENALTIES"):
			return 72;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_EFFECT"):
			return 67;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_INDICATOR"):
			return 101;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_TAKEN_EFFECT"):
			return 128;
	
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY_EFFECT"):
			return 158;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3_EFFECT"):
			return 71;
	
		case joaat("CONTENT__PREDATOR__LEVEL_1_EFFECTS"):
			return 179;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3_EFFECT"):
			return 135;
	
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_3_COST"):
			return 3;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2_EFFECT"):
			return 121;
	
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS_EFFECT"):
			return 141;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1_EFFECT"):
			return 24;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1_EFFECT"):
			return 167;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1_EFFECT"):
			return 40;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_ON_HORSEBACK_INDICATOR"):
			return 7;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3_COST"):
			return 53;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2_EFFECT"):
			return 118;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2_EFFECT"):
			return 44;
	
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN_EFFECT"):
			return 161;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2_COST"):
			return 52;
	
		case joaat("CONTENT__PASSIVE_MODE__DAMAGE_EFFECTS"):
			return 174;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1_EFFECT"):
			return 120;
	
		case joaat("EQUIPMENT__NED_KELLY_COOP_EFFECT"):
			return 159;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1_EFFECT"):
			return 14;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_668(int iParam0, int iParam1) // Position - 0x13C96 Signature - 22 02 04 00 00 66 00 5D 0F
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1;
	return;
}

void func_669(int iParam0, int iParam1) // Position - 0x13CC5 Signature - 22 02 04 00 00 66 01 66 00 5D
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
	return;
}

void func_670(int iParam0) // Position - 0x13CE1 Signature - 22 01 04 00 00 2F 67 03 66 03 42
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		iParam0->f_1[i /*2*/] = 0;
		iParam0->f_1[i /*2*/].f_1 = 0;
	}

	return;
}

BOOL func_671(int iParam0) // Position - 0x13D0F Signature - 22 01 03 00 00 66 00 3C 02
{
	switch (iParam0)
	{
		case 12:
			return true;
	
		case 13:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_672(Hash hParam0) // Position - 0x13D34 Signature - 22 01 03 00 00 66 00 37 2C
{
	if (!func_500(hParam0, 1955773996))
		return false;

	if (!func_685(hParam0, 1))
		return false;

	return true;
}

int func_673(int iParam0, Hash hParam1) // Position - 0x13D5F Signature - 22 02 09 00 00 66 01 2F
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_41(hParam1, 0))
		return 0;

	guid = { func_686(iParam0, hParam1) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_674() // Position - 0x13D9D Signature - 22 00 03 00 00 03 01 00 DA 03
{
	Vehicle vehicleOwnedByPlayer;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		return false;

	vehicleOwnedByPlayer = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(vehicleOwnedByPlayer))
		return false;

	if (!func_687(vehicleOwnedByPlayer))
		return false;

	return true;
}

int func_675(int iParam0) // Position - 0x13DEC Signature - 22 01 03 00 00 66 00 39 4C
{
	if (func_688(iParam0))
		return func_689(iParam0) % 32;

	return Global_1295666;
}

BOOL func_676(int iParam0) // Position - 0x13E0D Signature - 22 01 04 00 00 66 00 09 39 E5 33 01 67 03 66
{
	int num;

	num = func_667(iParam0, 1);

	if (num < 1 || num >= 199)
		return false;

	return true;
}

int func_677(int iParam0, int iParam1, int iParam2) // Position - 0x13E35 Signature - 22 03 0E 00 00 66 01 09 39 CF 1B 01 67 05 66 00 09 39 E5 33 01 67 06 66 05 5D 0F A4 11 21 13 8C 00 56 18 97 03 17 0C 09 39 9D 2B 01 67 07 66 02 66 07 5D 0F A4 11 21 13 8C 00 56 63 06 17 01 66 00 72 04 00 2F 50 03 01 66
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int num5;
	int num6;
	int j;
	int num7;

	num = func_637(iParam1, 1);
	num2 = func_667(iParam0, 1);
	num3 = func_663(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return 0;

	if (!Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return 1;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = false;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_690(num4, 1);
	
		if (!func_691(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] - 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 - func_692(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_693(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_694(num6))
		{
		}
		else
		{
			num7 = func_695(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] - 1;
		
			if (Global_1156111.f_21645[num7 /*209*/][num2] <= 0)
				MISC::_CLEAR_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!MISC::_IS_ANY_BIT_FLAG_SET(&(Global_1156111.f_21645[num7 /*209*/].f_200)))
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 0;
				func_696(num6);
			}
		}
	}

	return 1;
}

BOOL func_678(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x14029 Signature - 22 1F
{
	return uParam0.f_4 != 0;
}

BOOL func_679(int iParam0, int iParam1) // Position - 0x14037 Signature - 22 02 05 00 00 66 00 39 0D
{
	int num;

	if (!func_676(iParam0))
		return false;

	if (!func_697(iParam1))
		return false;

	num = func_698(iParam1, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/] == iParam0;
}

Vector3 func_680(int iParam0) // Position - 0x14077 Signature - 22 01 07 00 00 66 00 39
{
	int num;
	var unk;

	num = func_699(iParam0);

	if (num == -1)
	{
		unk = -1;
		unk.f_2 = -1;
		return unk;
	}

	return Global_1156111.f_35859.f_9503[num /*3*/];
}

BOOL func_681(int iParam0, var uParam1, var uParam2) // Position - 0x140B3 Signature - 22 03 05 00 00 66 00 39 0D
{
	if (!func_676(iParam0))
		return false;

	if (!func_661(iParam0.f_1))
		return false;

	if (!func_700(iParam0.f_2))
		return false;

	return true;
}

BOOL func_682(int iParam0, int iParam1, int iParam2) // Position - 0x140EA Signature - 22 03 0E 00 00 66 01 09 39 CF 1B 01 67 05 66 00 09 39 E5 33 01 67 06 66 05 5D 0F A4 11 21 13 8C 00 56 18 97 03 17 0C 09 39 9D 2B 01 67 07 66 02 66 07 5D 0F A4 11 21 13 8C 00 56 63 06 17 01 66 00 72 04 00 2F 50 03 01 5D
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int num5;
	int num6;
	int j;
	int num7;

	num = func_637(iParam1, 1);
	num2 = func_667(iParam0, 1);
	num3 = func_663(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return false;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1295666.f_16;

	if (Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return true;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = true;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_690(num4, 1);
	
		if (!func_691(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] + 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 + func_692(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_701(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_694(num6))
		{
		}
		else if (!func_702(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/]))
		{
		}
		else
		{
			num7 = func_695(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] + 1;
			MISC::_SET_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!Global_1156111.f_21645[num7 /*209*/].f_208)
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 1;
				func_703(num6);
			}
		}
	}

	func_704(Global_1156111.f_35859.f_3116[num2 /*31*/].f_2);
	return true;
}

void func_683(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x14318 Signature - 22 04 07 00 00 66 00 39
{
	int num;

	if (!func_697(iParam0))
		return;

	num = func_698(iParam0, 1);

	if (!func_676(iParam1))
		return;

	if (!func_661(iParam2))
		return;

	if (!func_700(iParam3))
		return;

	Global_1156111.f_35859.f_9286[num /*3*/] = iParam1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = iParam2;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = iParam3;
	return;
}

void func_684(int iParam0) // Position - 0x14397 Signature - 22 01 04 00 00 66 00 39 C5 50 01 05 8B 03
{
	int num;

	if (!func_697(iParam0))
		return;

	num = func_698(iParam0, 1);
	Global_1156111.f_35859.f_9286[num /*3*/] = -1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = 0;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = -1;
	return;
}

BOOL func_685(Hash hParam0, int iParam1) // Position - 0x143EC Signature - 22 02 05 00 00 66 00 39 0F
{
	int num;

	num = func_705(hParam0);

	if (num == -1)
		return false;

	return num > iParam1;
}

struct<4> func_686(int iParam0, Hash hParam1) // Position - 0x1440B Signature - 22 02 09 00 00 66 00 39
{
	var unk;

	unk = { func_706(iParam0) };
	return func_707(iParam0, hParam1, unk, unk.f_4);
}

BOOL func_687(Vehicle veParam0) // Position - 0x1442D Signature - 22 01 03 00 00 66 00 03 05 00 20
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("huntercart01"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_688(int iParam0) // Position - 0x1444C Signature - 22 01 04 00 00 66 00 09 39 CF 1B 01 67 03 66 03 11 7E
{
	int num;

	num = func_637(iParam0, 1);

	if (num >= 2 && num <= 129)
		return true;

	return false;
}

int func_689(int iParam0) // Position - 0x14473 Signature - 22 01 04 00 00 66 00 09 39 CF 1B 01 67 03 66 00
{
	int num;

	num = func_637(iParam0, 1);

	if (func_688(iParam0))
		return num - 2;
	else if (func_708(iParam0))
		return num - 130;
	else if (func_709(iParam0))
		return num - 166;
	else if (func_710(iParam0))
		return num - 167;
	else if (func_711(iParam0))
		return num - 172;
	else if (func_712(iParam0))
		return num - 180;
	else if (func_713(iParam0))
		return num - 150;

	return -1;
}

int func_690(int iParam0, int iParam1) // Position - 0x1450D Signature - 22 02 04 00 00 66 00 3C 60
{
	switch (iParam0)
	{
		case -2123992989:
			return 59;
	
		case joaat("MDEFENSE__BULLET"):
			return 49;
	
		case -1936069272:
			return 47;
	
		case joaat("MHEALTH__REGEN_RATE"):
			return 42;
	
		case joaat("MHORSE__TRAMPLE_DAMAGE"):
			return 58;
	
		case joaat("ADEADEYE_COST_PER_SHOT"):
			return 2;
	
		case joaat("MWEAPON__BOW_STAMINA_DRAIN"):
			return 41;
	
		case joaat("MDEFENSE__BULLET_USING_MELEE_WEAPON"):
			return 50;
	
		case joaat("MACCURACY__LOCAL_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 64;
	
		case joaat("MDAMAGE__DISTANCE_CLOSE"):
			return 37;
	
		case -1575020444:
			return 94;
	
		case -1572802418:
			return 71;
	
		case joaat("ALASSO__DAMAGE_DEALT_PER_SECOND"):
			return 78;
	
		case joaat("MDEFENSE__EXPLOSIVE"):
			return 53;
	
		case -1349331938:
			return 43;
	
		case joaat("MDAMAGE__MISSING_HEALTH_CONVERSION"):
			return 29;
	
		case joaat("ASTAMINA__ALTER_TANK_PER_SECOND_PERCENT"):
			return 22;
	
		case joaat("ADEADEYE__ALTER_CORE_PER_SECOND_PERCENT"):
			return 7;
	
		case joaat("MHORSE__DEFENSE"):
			return 56;
	
		case joaat("ASTAMINA__HORSE_GAIN_ON_HORSEBACK_KILL_PERCENT"):
			return 23;
	
		case joaat("MDEFENSE__RANGED"):
			return 46;
	
		case joaat("MDAMAGE__ALL_WEAPONS_DIFFERENT_WEAPON"):
			return 25;
	
		case joaat("MDEFENSE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 51;
	
		case joaat("MEAGLE_EYE__DEPLETION_RATE"):
			return 67;
	
		case joaat("MDEFENSE__FIRE"):
			return 52;
	
		case joaat("AHEALTH__GAIN_ON_KILL_PERCENT"):
			return 11;
	
		case joaat("MRPG_ATTIRBUTE_CORE_DRAIN_RATE"):
			return 66;
	
		case joaat("MDAMAGE__EXPLOSIVE_WEAPONS"):
			return 36;
	
		case joaat("MSTAMINA__REGEN_RATE"):
			return 75;
	
		case joaat("AHEALTH__ALTER_TANK_PER_SECOND_PERCENT"):
			return 14;
	
		case joaat("MDEADEYE__GAIN_MULTIPLIER_WITH_REPEATER"):
			return 73;
	
		case -377364039:
			return 60;
	
		case joaat("MACCURACY__AI_MODIFIER"):
			return 62;
	
		case joaat("MDAMAGE__FALLOFF"):
			return 39;
	
		case joaat("AHEALTH__ALTER_TOTAL_PER_MINUTE_PERCENT"):
			return 15;
	
		case joaat("ADEADEYE_COST_DURATION"):
			return 1;
	
		case joaat("MACCURACY__REMOTE_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 65;
	
		case joaat("MSKILL__PERCEPTION"):
			return 83;
	
		case -1:
			return 0;
	
		case 66478954:
			return 93;
	
		case 91687087:
			return 79;
	
		case joaat("MSKILL__DISTILLER"):
			return 90;
	
		case 194431787:
			return 61;
	
		case joaat("MDEADEYE__GAIN_MULTIPLIER"):
			return 72;
	
		case joaat("MSKILL__PROTECTION_TRADER"):
			return 85;
	
		case joaat("MWEAPON__BOW_DRAW_TIME"):
			return 40;
	
		case joaat("MDEADEYE__DEPLETION_RATE"):
			return 70;
	
		case joaat("MSKILL__DIVINATION"):
			return 89;
	
		case 410940916:
			return 92;
	
		case 447408404:
			return 81;
	
		case joaat("ADEADEYE__GAIN_ON_HEADSHOT_PERCENT"):
			return 5;
	
		case joaat("MHEALTH__RECHARGE_RATE"):
			return 44;
	
		case joaat("MACCURACY__LOCAL_PLAYER_MODIFIER"):
			return 63;
	
		case joaat("MSKILL__INTUITION"):
			return 88;
	
		case joaat("MDAMAGE__MELEE"):
			return 30;
	
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 19;
	
		case joaat("ADEADEYE__GAIN_ON_REVIVE_PERCENT"):
			return 4;
	
		case joaat("MSKILL__PROTECTION_MOONSHINE"):
			return 86;
	
		case joaat("MDEFENSE__PLAYERS"):
			return 48;
	
		case 874892169:
			return 95;
	
		case joaat("AHEALTH__ALTER_CORE_PER_SECOND_PERCENT"):
			return 16;
	
		case 920214733:
			return 91;
	
		case joaat("MINCAPACITATION__BLEEDOUT_TIME"):
			return 68;
	
		case joaat("ADEADEYE__ALTER_TANK_PER_SECOND_PERCENT"):
			return 6;
	
		case joaat("MDAMAGE__ALL_WEAPONS_AIMING_WITHOUT_FIRING"):
			return 27;
	
		case joaat("ADEADEYE__ALTER_TANK_DAMAGE_TAKEN_PERCENT"):
			return 8;
	
		case joaat("MSTAMINA__REGEN_RATE_HEALTH_CONVERSION"):
			return 76;
	
		case joaat("MDEFENSE__MELEE"):
			return 45;
	
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 20;
	
		case joaat("AHEALTH__GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 10;
	
		case 1356998909:
			return 80;
	
		case joaat("MSKILL__FOCUS"):
			return 82;
	
		case joaat("MDEADEYE__GAIN_MULTIPLIER_STR_WEAPON"):
			return 74;
	
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 17;
	
		case 1546732394:
			return 34;
	
		case joaat("MDEFENSE__STAMINA_CONVERSION"):
			return 55;
	
		case joaat("MDAMAGE__DISTANCE_FAR"):
			return 38;
	
		case joaat("MDAMAGE__BULLETS"):
			return 32;
	
		case joaat("MDEFENSE__STRENGTH_IN_NUMBERS"):
			return 54;
	
		case 1727267699:
			return 69;
	
		case joaat("MDAMAGE__STAMINA_CONVERSION"):
			return 28;
	
		case joaat("ADEADEYE_COST_ACTIVATION"):
			return 3;
	
		case joaat("MSTAMINA__SPRINT_DEPLETION_RATE"):
			return 77;
	
		case joaat("ASTAMINA__ALTER_CORE_PER_SECOND_PERCENT"):
			return 21;
	
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 18;
	
		case joaat("AHEALTH__GAIN_KILL_PERCENT_STR_WEAPON"):
			return 12;
	
		case joaat("MDAMAGE__ALL_WEAPONS"):
			return 24;
	
		case joaat("MDAMAGE__THROWN"):
			return 31;
	
		case joaat("MSKILL__AWARENESS"):
			return 84;
	
		case joaat("MHORSE__DEFENSE_PLAYERS"):
			return 57;
	
		case joaat("ADEADEYE__ALTER_TANK_BULLET_DAMAGE_TAKEN_PERCENT"):
			return 9;
	
		case joaat("MDAMAGE__SHOTGUN"):
			return 33;
	
		case joaat("AHEALTH__GAIN_KILL_PERCENT_NON_STR_WEAPON"):
			return 13;
	
		case joaat("MDAMAGE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 35;
	
		case joaat("MDAMAGE__ALL_WEAPONS_SINCE_LAST_SHOT"):
			return 26;
	
		case joaat("MSKILL__POTENTIAL"):
			return 87;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_691(int iParam0) // Position - 0x14946 Signature - 22 01 04 00 00 66 00 09 39 0D
{
	int num;

	num = func_690(iParam0, 1);

	if (num < 1 || num >= 95)
		return false;

	return true;
}

float func_692(int iParam0) // Position - 0x1496E Signature - 22 01 04 00 00 66 00 27 02
{
	float num;

	if (iParam0->f_2 != 0)
	{
		num = func_714(794259616, iParam0->f_2, iParam0->f_1, "");
		return num;
	}

	return iParam0->f_1;
}

void func_693(int iParam0) // Position - 0x1499E Signature - 22 01 06 00 00 66 00 39 46 49 01 05 8B 03 00 50 01 00 66 00 09 39 0D 45 01 67 03 66 03 5D 0F A4 11 18 79 08 17 CD 39 A9 58 01 05 8B 03 00 50 01 00 66 03 66 03 5D 0F A4 11 18 79 08 17 CD 5D 0F A4 11 63 66 17 01 09
{
	int num;
	int num2;
	int i;

	if (!func_691(iParam0))
		return;

	num = func_690(iParam0, 1);

	if (!func_715(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] - 1;

	if (Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] > 0)
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = 0;
	Global_1156111.f_2169[num /*205*/].f_204 = 0;

	if (!func_716(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_717(Global_1156111.f_2169[num /*205*/].f_203, 1);
	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] - 1;

	if (Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] > 0)
		return;

	for (i = 0; i < Global_1156111.f_47561[num2 /*25*/].f_23; i = i + 1)
	{
		if (Global_1156111.f_47561[num2 /*25*/][i] != Global_1156111.f_2169[num /*205*/])
		{
		}
		else
		{
			Global_1156111.f_47561[num2 /*25*/][i] = -1;
			Global_1156111.f_47561[num2 /*25*/].f_23 = Global_1156111.f_47561[num2 /*25*/].f_23 - 1;
			Global_1156111.f_47561[num2 /*25*/][i] = Global_1156111.f_47561[num2 /*25*/][Global_1156111.f_47561[num2 /*25*/].f_23];
			Global_1156111.f_47561[num2 /*25*/][Global_1156111.f_47561[num2 /*25*/].f_23] = -1;
			break;
		}
	}

	return;
}

BOOL func_694(int iParam0) // Position - 0x14B7D Signature - 22 01 04 00 00 66 00 09 39 A5
{
	int num;

	num = func_695(iParam0, 1);

	if (num < 1 || num >= 68)
		return false;

	return true;
}

int func_695(int iParam0, int iParam1) // Position - 0x14BA5 Signature - 22 02 04 00 00 66 00 3C 45
{
	switch (iParam0)
	{
		case joaat("EAGLE_EYE_HIGHLIGHT_BOUNTIES"):
			return 52;
	
		case joaat("HEADSHOT_IMMUNITY"):
			return 12;
	
		case joaat("HAT_BLOCKS_HEADSHOT"):
			return 11;
	
		case joaat("ANIMAL_TURN_IN_EFFICIENCY"):
			return 64;
	
		case joaat("DISABLE_HEALTH_REGENERATION"):
			return 2;
	
		case joaat("FIRE_CAP_INFINTE"):
			return 41;
	
		case joaat("SLOW_AND_STEADY_AURA"):
			return 28;
	
		case joaat("EAGLE_EYE_HIGHLIGHT_EARTH"):
			return 53;
	
		case -1730553768:
			return 3;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return 25;
	
		case -1651690657:
			return 65;
	
		case joaat("NO_CRITICAL_DAMAGE_AGAINST_PLAYERS"):
			return 10;
	
		case -1583192324:
			return 66;
	
		case joaat("REVIVE_ON_BLEEDOUT"):
			return 34;
	
		case -1486292178:
			return 67;
	
		case joaat("LASSO_IMMUNITY"):
			return 5;
	
		case joaat("DISABLE_JUMPING"):
			return 45;
	
		case joaat("GRAPPLE_IMMUNITY_FROM_AI"):
			return 31;
	
		case -1026481003:
			return 6;
	
		case joaat("TAGGING_IMMUNITY"):
			return 13;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			return 33;
	
		case joaat("ON_HORSE_SPEED_RESTRICTION_JOG"):
			return 59;
	
		case joaat("FATAL_MELEE_IMMUNITY"):
			return 32;
	
		case joaat("FORCE_HEALTH_REGEN"):
			return 1;
	
		case joaat("CONFUSION_EFFECT"):
			return 14;
	
		case joaat("FULL_LOCKON_IMMUNITY"):
			return 4;
	
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			return 36;
	
		case -350459285:
			return 68;
	
		case joaat("DAMAGE_CAP_INFINTE"):
			return 40;
	
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			return 26;
	
		case -199042163:
			return 60;
	
		case joaat("NED_KELLY_ADVERSARY"):
			return 22;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
			return 55;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return 19;
	
		case -1:
			return 0;
	
		case joaat("TRAIL_EFFECT"):
			return 17;
	
		case joaat("POISON_EFFECT"):
			return 20;
	
		case joaat("ON_HORSE_SPEED_RESTRICTION_WALK"):
			return 61;
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			return 24;
	
		case joaat("DISORIENT_EFFECT"):
			return 18;
	
		case joaat("FOCUS_FIRE_VFX"):
			return 23;
	
		case joaat("PREDATOR_ICON_DISPLAY"):
			return 39;
	
		case joaat("WOUND_EFFECT"):
			return 15;
	
		case 718630298:
			return 56;
	
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			return 48;
	
		case joaat("NED_KELLY_BASE"):
			return 21;
	
		case joaat("DISABLE_COMBAT_DIVE"):
			return 46;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			return 27;
	
		case joaat("DISABLE_FACIAL_ACTIONS"):
			return 43;
	
		case joaat("CANNOT_LOCK_ON_PLAYERS"):
			return 7;
	
		case joaat("GRAPPLE_IMMUNITY_FROM_PLAYERS"):
			return 30;
	
		case 1037859088:
			return 51;
	
		case 1066450193:
			return 54;
	
		case 1159158432:
			return 62;
	
		case joaat("OVERPOWER_PREDATOR"):
			return 37;
	
		case 1242495215:
			return 9;
	
		case joaat("ON_HORSE_SPEED_RESTRICTION_IGNORE_MOUNT_CLASS") /* collision: RCEXO_RSC2_LIJ_1 */:
			return 63;
	
		case 1341326366:
			return 58;
	
		case joaat("OVERRIDE_INFINITE_DEADEYE"):
			return 35;
	
		case 1398483650:
			return 50;
	
		case joaat("PULSE_REPOST_STATE"):
			return 38;
	
		case joaat("DISABLE_CONSUMABLES"):
			return 42;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			return 57;
	
		case joaat("DISABLE_INCAPACITATION"):
			return 44;
	
		case joaat("DRAIN_EFFECT"):
			return 16;
	
		case 1898374676:
			return 49;
	
		case 2067881273:
			return 8;
	
		case joaat("DISABLE_DROWNING"):
			return 47;
	
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			return 29;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_696(int iParam0) // Position - 0x14EB5 Signature - 22 01 05 00 00 03 01 00 AF 67 03 03
{
	Ped ped;
	Player player;

	ped = PLAYER::PLAYER_PED_ID();
	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case joaat("HEADSHOT_IMMUNITY"):
			func_719();
			break;
	
		case joaat("SLOW_AND_STEADY_AURA"):
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 0);
			PLAYER::_0xE910932F4B30BE23(player);
			PLAYER::_0x0E9057A9DA78D0F8(player, 8);
			PLAYER::_0x263D69767F76059C(player, 0);
			break;
	
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_718();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_722(func_721(iParam0));
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_715(16);
			break;
	
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 19);
			break;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_715(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_720(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(ped, false, 0);
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_720(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
			func_97(105, true);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_720(iParam0));
			break;
	
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_SET_LOCKON_FOCUS_FIRE_VFX(player, "");
			break;
	
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(15);
			break;
	
		case joaat("WOUND_EFFECT"):
			PED::_UPDATE_PED_WOUND_EFFECT(ped, 0f);
			break;
	
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_EAGLE_EYE_SET_PLUS_FLAG_DISABLED(player, true);
			break;
	
		case joaat("NED_KELLY_BASE"):
			func_723();
			break;
	
		case joaat("OVERPOWER_PREDATOR"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 18);
			break;
	
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(player, 1f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(player, -1f);
			break;
	
		case joaat("PULSE_REPOST_STATE"):
			NETWORK::_SET_NETWORK_RESPOT_TIMER(ped, 0, true);
			break;
	
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_720(iParam0));
			break;
	
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(player, false);
			break;
	
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_RESET_ENTITY_AURA();
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 0);
			PLAYER::_0xE910932F4B30BE23(player);
			PLAYER::_0x0E9057A9DA78D0F8(player, 8);
			PLAYER::_0x263D69767F76059C(player, 0);
			break;
	}

	return;
}

BOOL func_697(int iParam0) // Position - 0x150C5 Signature - 22 01 04 00 00 66 00 09 39 EC
{
	int num;

	num = func_698(iParam0, 1);

	if (num < 0 || num >= 5)
		return false;

	return true;
}

int func_698(int iParam0, int iParam1) // Position - 0x150EC Signature - 22 02 04 00 00 66 00 3C 06 00 F4
{
	switch (iParam0)
	{
		case joaat("FOCUS_FIRE"):
			return 1;
	
		case -1038992817:
			return 5;
	
		case -950874556:
			return 4;
	
		case joaat("QUITE_AN_INSPIRATION"):
			return 3;
	
		case 0:
			return 0;
	
		case 1938826026:
			return 2;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_699(int iParam0) // Position - 0x15149 Signature - 22 01 45
{
	int num;
	var unk;
	var unk32;
	int num2;
	int num3;
	int i;

	num = func_724(iParam0);
	unk.f_3 = 1065353216;
	unk.f_5 = -1;
	unk.f_6 = 3;
	unk.f_6.f_1 = -1;
	unk.f_6.f_1.f_3 = -1;
	unk.f_6.f_1.f_3.f_3 = -1;
	unk.f_17 = 5;
	unk32.f_3 = 1065353216;
	unk32.f_5 = -1;
	unk32.f_6 = 3;
	unk32.f_6.f_1 = -1;
	unk32.f_6.f_1.f_3 = -1;
	unk32.f_6.f_1.f_3.f_3 = -1;
	unk32.f_17 = 5;
	num2 = -1;

	for (i = 0; i < Global_1156111.f_35859.f_11700; i = i + 1)
	{
		num3 = func_667(Global_1156111.f_35859.f_9503[i /*3*/], 1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1156111.f_35859.f_9503[i /*3*/] == num)
		{
		}
		else if (!func_725(Global_1156111.f_35859.f_9503[i /*3*/], Global_1156111.f_35859.f_9503[i /*3*/].f_1))
		{
		}
		else
		{
			unk = { func_726(Global_1156111.f_35859.f_9503[i /*3*/]) };
		
			if (unk.f_5 > unk32.f_5)
			{
				unk32 = { unk };
				num2 = i;
			}
		}
	}

	return num2;
}

BOOL func_700(int iParam0) // Position - 0x1528D Signature - 22 01 03 00 00 66 00 2F 35
{
	if (iParam0 < 0 || iParam0 > 4)
		return false;

	return true;
}

void func_701(int iParam0) // Position - 0x152AB Signature - 22 01 06 00 00 66 00 39 46 49 01 05 8B 03 00 50 01 00 66 00 09 39 0D 45 01 67 03 66 03 5D 0F A4 11 18 79 08 17 CD 39 A9 58 01 05 8B 03 00 50 01 00 66 03 66 03 5D 0F A4 11 18 79 08 17 CD 5D 0F A4 11 63 66 17 01 5C
{
	int num;
	int num2;
	int i;

	if (!func_691(iParam0))
		return;

	num = func_690(iParam0, 1);

	if (!func_715(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] + 1;
	Global_1156111.f_2169[num /*205*/].f_204 = 1;

	if (!func_716(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_717(Global_1156111.f_2169[num /*205*/].f_203, 1);
	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] + 1;

	for (i = 0; i < Global_1156111.f_47561[num2 /*25*/].f_23; i = i + 1)
	{
		if (Global_1156111.f_47561[num2 /*25*/][i] == Global_1156111.f_2169[num /*205*/])
			return;
	}

	Global_1156111.f_47561[num2 /*25*/][Global_1156111.f_47561[num2 /*25*/].f_23] = Global_1156111.f_2169[num /*205*/];
	Global_1156111.f_47561[num2 /*25*/].f_23 = Global_1156111.f_47561[num2 /*25*/].f_23 + 1;
	return;
}

BOOL func_702(int iParam0) // Position - 0x15400 Signature - 22 01 04 00 00 66 00 27 01
{
	BOOL flag;

	if (iParam0->f_1 != 0)
	{
		flag = func_727(794259616, iParam0->f_1, true, "");
		return flag;
	}

	return true;
}

void func_703(int iParam0) // Position - 0x1542A Signature - 22 01 07 00 00 03
{
	Ped ped;
	Player player;
	int num;
	int entityBoneIndexByName;

	ped = PLAYER::PLAYER_PED_ID();
	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case joaat("HEADSHOT_IMMUNITY"):
			func_719();
			break;
	
		case joaat("SLOW_AND_STEADY_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(player, 8);
			PLAYER::_0x131E294EF60160DF(player, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(player, 1);
			break;
	
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_718();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			num = func_721(iParam0);
			func_729(num, 3, 1, -1, 1);
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_715(16);
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1014693585);
			PLAYER::_0x2B12B6FC8B8772AB(player, 8);
			PLAYER::_0x131E294EF60160DF(player, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(player, 1);
			break;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_715(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_720(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(ped, true, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_720(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
			func_97(104, true);
			break;
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			num = func_721(iParam0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_728(iParam0, 0));
			func_729(num, 0, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_728(iParam0, 1));
			func_729(num, 1, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_728(iParam0, 2));
			func_729(num, 2, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_728(iParam0, 3));
			func_729(num, 2, 1, entityBoneIndexByName, 0);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_720(iParam0));
			break;
	
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_SET_LOCKON_FOCUS_FIRE_VFX(player, "focusfire");
			break;
	
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(15);
			break;
	
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_ACTIVATE_WOUND_EFFECT(ped, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
	
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_EAGLE_EYE_SET_PLUS_FLAG_DISABLED(player, false);
			break;
	
		case joaat("NED_KELLY_BASE"):
			func_730();
			break;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			num = func_721(iParam0);
			func_729(num, 4, 1, -1, 0);
			break;
	
		case joaat("OVERPOWER_PREDATOR"):
			break;
	
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(player, 0.5f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(player, 2f);
			break;
	
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_720(iParam0));
			break;
	
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(player, true);
			break;
	
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_SET_ENTITY_AURA(0f, 2f, 2f);
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1979474018);
			PLAYER::_0x2B12B6FC8B8772AB(player, 25);
			PLAYER::_0x263D69767F76059C(player, 2);
			break;
	}

	return;
}

void func_704(int iParam0) // Position - 0x156C5 Signature - 22 01 05 00 00 66 00 2F
{
	char* audioName;
	char* audioRef;

	if (iParam0 == 0)
		return;

	audioName = func_731(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(audioName))
		return;

	audioRef = func_732(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(audioRef))
		return;

	AUDIO::PLAY_SOUND_FROM_ENTITY(audioName, Global_1295666.f_3, audioRef, false, 0, 0);
	return;
}

int func_705(Hash hParam0) // Position - 0x1570F Signature - 22 01 04 00 00 66 00 4B 03 03
{
	int num;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(hParam0, &num))
		return -1;

	return num;
}

struct<5> func_706(int iParam0) // Position - 0x15729 Signature - 22 01 08
{
	var unk;

	unk = { func_707(iParam0, joaat("character"), func_319(), -1591664384) };
	unk.f_4 = 1084182731;
	return unk;
}

struct<4> func_707(int iParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6) // Position - 0x15756 Signature - 22 07 0D 00 00 66 01
{
	var outGuid;

	if (!func_41(hParam1, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, hParam1, hParam6, &outGuid);
	return outGuid;
}

BOOL func_708(int iParam0) // Position - 0x15783 Signature - 22 01 04 00 00 66 00 09 39 CF 1B 01 67 03 66 03 6D 82
{
	int num;

	num = func_637(iParam0, 1);

	if (num >= 130 && num <= 149)
		return true;

	return false;
}

BOOL func_709(int iParam0) // Position - 0x157AB Signature - 22 01 04 00 00 66 00 09 39 CF 1B 01 67 03 66 03 6D A6
{
	int num;

	num = func_637(iParam0, 1);

	if (num >= 166 && num <= 166)
		return true;

	return false;
}

BOOL func_710(int iParam0) // Position - 0x157D3 Signature - 22 01 04 00 00 66 00 09 39 CF 1B 01 67 03 66 03 6D A7
{
	int num;

	num = func_637(iParam0, 1);

	if (num >= 167 && num <= 171)
		return true;

	return false;
}

BOOL func_711(int iParam0) // Position - 0x157FB Signature - 22 01 04 00 00 66 00 09 39 CF 1B 01 67 03 66 03 6D AC
{
	int num;

	num = func_637(iParam0, 1);

	if (num >= 172 && num <= 179)
		return true;

	return false;
}

BOOL func_712(int iParam0) // Position - 0x15823 Signature - 22 01 04 00 00 66 00 09 39 CF 1B 01 67 03 66 03 6D B4
{
	int num;

	num = func_637(iParam0, 1);

	if (num >= 180 && num <= 182)
		return true;

	return false;
}

BOOL func_713(int iParam0) // Position - 0x1584B Signature - 22 01 04 00 00 66 00 09 39 CF 1B 01 67 03 66 03 6D 96
{
	int num;

	num = func_637(iParam0, 1);

	if (num >= 150 && num <= 165)
		return true;

	return false;
}

float func_714(Hash hParam0, Hash hParam1, float fParam2, char* sParam3) // Position - 0x15873 Signature - 22 04 1D 00 00 66 00 66 01 4B 06 39 B4 5F 01 8B 13 00 66 00 66 01 4B 06 80 0A 27 01
{
	var unk;
	float num;

	if (func_733(hParam0, hParam1, &unk))
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, unk.f_10.f_1);
	else
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, fParam2);

	return num;
}

BOOL func_715(int iParam0) // Position - 0x158A9 Signature - 22 01 03 00 00 66 00 08 77
{
	if (iParam0 <= -1 || iParam0 >= 21)
		return false;

	if (iParam0 == 0)
		return true;

	if (MISC::_IS_BIT_FLAG_SET(&(Global_1156111.f_2166), iParam0))
		return true;

	if (Global_1156111.f_2165 >= 21)
		return false;

	Global_1156111.f_2143[Global_1156111.f_2165] = iParam0;
	Global_1156111.f_2165 = Global_1156111.f_2165 + 1;
	return true;
}

BOOL func_716(int iParam0) // Position - 0x15918 Signature - 22 01 04 00 00 66 00 09 39 3F
{
	int num;

	num = func_717(iParam0, 1);

	if (num < 1 || num >= 5)
		return false;

	return true;
}

int func_717(int iParam0, int iParam1) // Position - 0x1593F Signature - 22 02 04 00 00 66 00 3C 06 00 5D
{
	switch (iParam0)
	{
		case joaat("CONSECUTIVE_DAMAGE_DEALT"):
			return 3;
	
		case -1016837116:
			return 5;
	
		case 0:
			return 0;
	
		case joaat("CONSECUTIVE_DAMAGE_TAKEN"):
			return 4;
	
		case joaat("NEARBY_ALLIES"):
			return 2;
	
		case 1416591065:
			return 1;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_718() // Position - 0x1599C Signature - 22 00 04 00 00 1D
{
	BOOL value;
	BOOL value2;

	if (Global_1156111.f_21645[3 /*209*/].f_208)
		value = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 550, value);

	if (Global_1156111.f_21645[4 /*209*/].f_208)
		if (!func_201(Global_1297600[Global_1295666 /*87*/].f_86, 1))
			value2 = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 556, value2);
	return;
}

void func_719() // Position - 0x159FE Signature - 22 00 03 00 00 2F 67 02 6D
{
	BOOL value;

	value = false;

	if (Global_1156111.f_21645[12 /*209*/].f_208)
		value = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 263, value);
	return;
}

char* func_720(int iParam0) // Position - 0x15A2E Signature - 22 01 03 00 00 66 00 3C 04 00 03
{
	switch (iParam0)
	{
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return "MP_MoonshineToxic";
	
		case joaat("TRAIL_EFFECT"):
			return "MP_ArrowTracking";
	
		case joaat("DISORIENT_EFFECT"):
			return "MP_ArrowDisorient";
	
		case joaat("DRAIN_EFFECT"):
			return "MP_ArrowDrain";
	
		default:
		
	}

	return "";
}

int func_721(int iParam0) // Position - 0x15A76 Signature - 22 01 03 00 00 66 00 3C 03 00 FC
{
	switch (iParam0)
	{
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return joaat("MOMENT_TO_RECUPERATE_VFX");
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			return -843895567;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			return joaat("SLOW_AND_STEADY_VFX");
	
		default:
		
	}

	return 0;
}

void func_722(int iParam0) // Position - 0x15AB1 Signature - 22 01 04 00 00 2F 67 03 66 03 6D 0A
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (Global_1203871[i /*8*/].f_5 == iParam0)
		{
			Global_1203871[i /*8*/].f_7 = 1;
			Global_1203871[i /*8*/].f_5 = 0;
		}
	}

	return;
}

void func_723() // Position - 0x15AF1 Signature - 22 00 02 00 00 5D 32 C5 13 27 03 25 31 01 2F
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, false);
	PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3);
	return;
}

int func_724(int iParam0) // Position - 0x15B11 Signature - 22 01 04 00 00 66 00 39 C5 50 01 05 8B 04
{
	int num;

	if (!func_697(iParam0))
		return -1;

	num = func_698(iParam0, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/];
}

BOOL func_725(int iParam0, int iParam1) // Position - 0x15B40 Signature - 22 02 27 00
{
	int num;
	int num2;
	int num3;
	int num4;
	var unk;

	if (!func_676(iParam0))
		return false;

	num = func_667(iParam0, 1);
	num3 = Global_1156111.f_35859.f_3116[num /*31*/].f_4;

	if (func_678(Global_1156111.f_35859.f_3116[num /*31*/]))
	{
		num4 = Global_1156111.f_35859.f_9286[func_698(num3, 1) /*3*/];
		unk = { func_726(num4) };
	
		if (num4 != iParam0 && Global_1156111.f_35859.f_3116[num /*31*/].f_5 <= unk.f_5)
			return false;
	}

	switch (Global_1156111.f_35859.f_3116[num /*31*/])
	{
		case joaat("ENTER_REVIVED_REMOTE"):
			num2 = func_675(iParam1);
		
			if (num2 == Global_1295666)
				return false;
		
			return true;
	
		case -2129621195:
			num2 = func_675(iParam1);
		
			if (num2 == Global_1295666)
				return false;
		
			if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_149[Global_1295666]))
				return false;
		
			if (!GANG::_NETWORK_IS_IN_MY_GANG(Global_1295666.f_149[num2]))
				return false;
		
			return true;
	
		case -2010146101:
			if (!func_734())
				return false;
		
			return true;
	
		case -1606735498:
		case joaat("ON_HEADSHOT"):
		case joaat("ENTER_WEARING_HAT"):
		case joaat("ENTER_SPRINTING"):
		case joaat("ENTER_MOUNTED"):
		case joaat("ENTER_DUAL_WIELD"):
		case -971275364:
		case joaat("ON_KILL"):
		case joaat("ENTER_SCENARIO"):
		case joaat("ENTER_REVIVER"):
		case -193993646:
		case joaat("ENTER_ALLY_NEARBY"):
		case -23641105:
		case joaat("ON_DAMAGE_TAKEN"):
		case joaat("ENTER_MELEE"):
		case joaat("ON_DAMAGE_DEALT_FROM_HORSEBACK"):
		case 429965152:
		case joaat("ON_DAMAGE_TAKEN_FROM_HORSEBACK"):
		case joaat("ENTER_WINDED"):
		case joaat("ENTER_NO_HAT"):
		case joaat("ON_ENABLE"):
		case joaat("ENTER_EAGLE_EYE"):
		case joaat("ENTER_DEADEYE"):
		case joaat("ENTER_SCOPED"):
		case joaat("ENTER_COVER"):
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case joaat("ENTER_DAMAGED"):
		case joaat("ON_DAMAGE_DEALT"):
		case joaat("ENTER_REVIVED"):
		case joaat("ENTER_LASSOING"):
		case joaat("ENTER_IN_VEHICLE"):
		case 2116793692:
			return true;
	
		case -1503245593:
			if (!Global_1956875.f_1716[8])
				return false;
		
			num2 = func_675(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[num2]))
				return false;
		
			if (PED::_GET_LASSOED_LASSOER(Global_1295666.f_3) != PLAYER::GET_PLAYER_PED(Global_1295666.f_149[num2]))
				return false;
		
			return true;
	
		case joaat("ALLY_ENTER_DEADEYE"):
			num2 = func_675(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[num2]))
				return false;
		
			if (num2 != Global_1295666 && !func_455(Global_1295666.f_149[num2]))
				return false;
		
			if (!func_446(512, num2))
				return false;
		
			return true;
	
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_734() && !func_735())
				return false;
		
			return true;
	
		default:
		
	}

	return false;
}

struct<31> func_726(int iParam0) // Position - 0x15E15 Signature - 22 01 04 00 00 66 00 09 39 E5 33 01 67 03 6D
{
	int num;

	num = func_667(iParam0, 1);
	return Global_1156111.f_35859.f_3116[num /*31*/];
}

BOOL func_727(Hash hParam0, Hash hParam1, BOOL bParam2, char* sParam3) // Position - 0x15E39 Signature - 22 04 1D 00 00 66 00 66 01 4B 06 39 B4 5F 01 8B 13 00 66 00 66 01 4B 06 80 0A 27 02
{
	var unk;
	BOOL flag;

	if (func_733(hParam0, hParam1, &unk))
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, unk.f_10.f_2);
	else
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, bParam2);

	return flag;
}

char* func_728(int iParam0, int iParam1) // Position - 0x15E6F Signature - 22 02 04 00 00 66 00 3C 01
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
			
				case 1:
					return "CP_CHEST";
			
				case 2:
					return "CP_R_UpperArm";
			
				case 3:
					return "CP_L_UpperArm";
			
				default:
					break;
			}
			break;
	}

	return "";
}

void func_729(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x15EC8 Signature - 22 05 08 00 00 2F
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1203871[i /*8*/]) && !Global_1203871[i /*8*/].f_6)
		{
			Global_1203871[i /*8*/].f_5 = iParam0;
			Global_1203871[i /*8*/].f_1 = iParam1;
			Global_1203871[i /*8*/].f_2 = iParam2;
			Global_1203871[i /*8*/].f_3 = iParam3;
			Global_1203871[i /*8*/].f_4 = iParam4;
			Global_1203871[i /*8*/].f_6 = 1;
			return;
		}
	}

	return;
}

void func_730() // Position - 0x15F4D Signature - 22 00 02 00 00 5D 32 C5 13 27 03 25 31 01 09
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, true);
	PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3, 0.7f);
	return;
}

char* func_731(int iParam0) // Position - 0x15F72 Signature - 22 01 03 00 00 66 00 3C 01 00 C2 5C 61 93 03 00 68 07 00 25 01
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
	
		default:
		
	}

	return "";
}

char* func_732(int iParam0) // Position - 0x15F93 Signature - 22 01 03 00 00 66 00 3C 01 00 C2 5C 61 93 03 00 68 07 00 25 11
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
	
		default:
		
	}

	return "";
}

BOOL func_733(Hash hParam0, Hash hParam1, var uParam2) // Position - 0x15FB4 Signature - 22 03 0D
{
	int num;
	int num2;

	num = -178401592;
	num.f_1 = hParam0;
	num.f_2 = joaat("name");
	num.f_3 = 1;
	num.f_4 = hParam1;
	DATAFILE::_PARSEDDATA_GET_FILE(&num);

	if (DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, joaat("name")))
	{
		*uParam2 = hParam0;
		uParam2->f_9 = hParam1;
		TEXT_LABEL_ASSIGN_STRING(&(uParam2->f_1), "", 64);
		TEXT_LABEL_APPEND_INT(&(uParam2->f_1), num2, 64);
		DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, joaat("TYPE"));
		uParam2->f_10.f_3 = func_736(num2);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
	
		switch (uParam2->f_10.f_3)
		{
			case 0:
				!DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_10), &num, joaat("DEFAULT"));
				break;
		
			case 1:
				!DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_10.f_1), &num, joaat("DEFAULT"));
				break;
		
			case 2:
				!DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_10.f_2), &num, joaat("DEFAULT"));
				break;
		}
	
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_14), &num, joaat("min"));
				break;
		
			case 1:
				DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_14.f_1), &num, joaat("min"));
				break;
		
			case 2:
				DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_14.f_2), &num, joaat("min"));
				break;
		}
	
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_18), &num, joaat("max"));
				break;
		
			case 1:
				DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_18.f_1), &num, joaat("max"));
				break;
		
			case 2:
				DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_18.f_2), &num, joaat("max"));
				break;
		}
	
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
		
			case 1:
				break;
		
			case 2:
				break;
		}
	
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
		
			case 1:
				break;
		
			case 2:
				break;
		}
	
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
		
			case 1:
				break;
		
			case 2:
				break;
		}
	
		return true;
	}

	return false;
}

BOOL func_734() // Position - 0x161D6 Signature - 22 00 02 00 00 5D 17 00 18 27 07
{
	return Global_1572887.f_7;
}

BOOL func_735() // Position - 0x161E4 Signature - 22 00 02 00 00 85 01
{
	if (!Global_1048577)
		return false;

	if (!func_48(func_47(0)))
		return false;

	if (Global_3145858 != -504335712)
		return false;

	if (func_561(*Global_524288.f_39632))
		return true;

	return false;
}

int func_736(int iParam0) // Position - 0x1622F Signature - 22 01 04 00 00 66 00 3C
{
	int num;

	switch (iParam0)
	{
		case joaat("bool"):
			num = 2;
			break;
	
		case joaat("float"):
			num = 1;
			break;
	
		case joaat("int"):
			num = 0;
			break;
	}

	return num;
}

