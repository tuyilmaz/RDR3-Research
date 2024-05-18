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
	var uLocal_15 = 2514129;
	var uLocal_16 = 0;
	var uLocal_17 = 3;
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
	var uLocal_30 = 1056964608;
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
	int iLocal_50 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 2F 04
{
	uLocal_13.f_3 = "mech_inventory@binoculars";

	if (!ENTITY::IS_ENTITY_DEAD(Global_33))
		uLocal_13.f_8 = PED::IS_PED_ON_MOUNT(Global_33);

	func_1();

	if (func_2(507))
		func_3(507);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_4(&uLocal_13);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	while (!ENTITY::IS_ENTITY_DEAD(Global_33) && func_5(&uLocal_13))
	{
		if (func_6() == 4 || func_6() == 5)
			func_7(&uLocal_13);
	
		if (!WEAPON::_IS_WEAPON_BINOCULARS(func_8(Global_33, true, 0, true)))
		{
			func_9(&(uLocal_13.f_13), &(uLocal_13.f_14), &(uLocal_13.f_15), &(uLocal_13.f_16));
		
			if (uLocal_13.f_15 != 0 || uLocal_13.f_16 != 0)
				func_10(&(uLocal_13.f_18));
		}
	
		if (func_6() > 0 && !WEAPON::_IS_WEAPON_BINOCULARS(func_8(Global_33, true, 0, true)))
			func_11(&uLocal_13, 8);
	
		if (func_12(uLocal_13.f_4[0]) && func_13(uLocal_13.f_4[0], true))
			func_11(&uLocal_13, 6);
	
		func_14(&uLocal_13);
	
		switch (func_6())
		{
			case 0:
				if (func_15(&uLocal_13))
					func_16(&uLocal_13);
			
				func_11(&uLocal_13, 1);
				break;
		
			case 1:
				if (func_15(&uLocal_13))
					func_16(&uLocal_13);
			
				func_11(&uLocal_13, 2);
				break;
		
			case 2:
				if (func_15(&uLocal_13))
					func_16(&uLocal_13);
			
				if (WEAPON::_IS_WEAPON_BINOCULARS(func_8(Global_33, true, 0, false)))
				{
					func_17(true);
					func_18(508, false);
					func_19(&uLocal_13);
					uLocal_13.f_4[0] = func_20("BINO_PUT_AWAY", joaat("INPUT_CAMERA_PUT_AWAY"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), 0);
					func_11(&uLocal_13, 4);
				}
				break;
		
			case 4:
				PAD::_SET_CONTROL_CONTEXT(5, joaat("BinocularsOnFoot"));
			
				if (func_15(&uLocal_13))
					func_16(&uLocal_13);
			
				if (func_21())
				{
					func_22("enter", "Binoculars_Sounds", true);
					iLocal_50 = 0;
					func_11(&uLocal_13, 5);
				}
				break;
		
			case 5:
				PAD::_SET_CONTROL_CONTEXT(5, joaat("BinocularsInUse"));
			
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_SNIPER_ZOOM_IN_ONLY")))
				{
					if (iLocal_50 < 2)
					{
						func_22("zoom_in", "Binoculars_Sounds", true);
						iLocal_50 = 1 + iLocal_50;
					}
				}
			
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_SNIPER_ZOOM_OUT_ONLY")))
				{
					if (iLocal_50 > 0)
					{
						func_22("zoom_out", "Binoculars_Sounds", true);
						iLocal_50 = iLocal_50 - 1;
					}
				}
			
				if (func_15(&uLocal_13))
				{
					func_16(&uLocal_13);
					func_17(true);
					func_23(&uLocal_13.f_4[2], true, true);
					uLocal_13.f_4[2] = func_24("IB_ZOOM" /*Zoom*/, joaat("INPUT_SNIPER_ZOOM"), 17, 570, 4000, 10, 1073741824, 0, 1065353216, false, 3, joaat("SHORT_TIMED_EVENT"), false);
					func_25(uLocal_13.f_4[2], 11, true, true);
					func_25(uLocal_13.f_4[2], 17, true, true);
					func_26(uLocal_13.f_4[2], joaat("INPUT_SNIPER_ZOOM"));
				}
			
				if (func_27())
				{
					func_17(true);
					func_23(&uLocal_13.f_4[2], true, true);
					func_22("exit", "Binoculars_Sounds", true);
					func_11(&uLocal_13, 4);
				}
				break;
		
			case 6:
				if (func_15(&uLocal_13))
				{
					func_19(&uLocal_13);
					func_16(&uLocal_13);
				}
			
				func_11(&uLocal_13, 7);
				break;
		
			case 7:
				if (func_15(&uLocal_13))
					func_16(&uLocal_13);
			
				func_11(&uLocal_13, 8);
			
				if (WEAPON::_IS_WEAPON_BINOCULARS(func_28(Global_33, 0)))
					WEAPON::_HIDE_PED_WEAPONS(Global_33, 2, false);
				break;
		
			case 8:
				if (func_15(&uLocal_13))
				{
					func_17(true);
					func_16(&uLocal_13);
				}
			
				func_4(&uLocal_13);
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_4(&uLocal_13);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x3A0 Signature - 22 00 02 00 00 2F 26
{
	Global_1913338 = 0;
	return;
}

BOOL func_2(int iParam0) // Position - 0x3AD Signature - 22 01 04 00 00 09
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);

	if (currentMessage != 0)
		return currentMessage == Global_1904402.f_33[iParam0 /*9*/].f_1;

	return false;
}

void func_3(int iParam0) // Position - 0x3D5 Signature - 22 01 03 00 00 66 00 39 AD
{
	if (!func_2(iParam0))
		return;

	func_17(true);
	return;
}

void func_4(Object* pobParam0) // Position - 0x3EF Signature - 22 01 03 00 00 25
{
	if (func_2(509))
		func_3(509);

	if (func_2(508))
		func_3(508);

	func_19(pobParam0);
	func_1();
	Global_1913339 = 0;

	if (ENTITY::DOES_ENTITY_EXIST(*pobParam0))
		OBJECT::DELETE_OBJECT(pobParam0);

	if (func_29(pobParam0, 64))
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);

	MAP::DISPLAY_RADAR(true);

	if (CAM::DOES_CAM_EXIST(pobParam0->f_1))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CAM_ACTIVE(pobParam0->f_1, false);
		CAM::DESTROY_CAM(pobParam0->f_1, false);
	}

	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, SPC_PREVENT_EVERYBODY_BACKOFF, false);
	func_17(true);
	HUD::_TEXT_BLOCK_DELETE("BINO");
	return;
}

BOOL func_5(Object* pobParam0) // Position - 0x49A Signature - 22 01 03 00 00 70 21 00 03
{
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
		return false;

	if (func_30())
	{
		func_31(pobParam0, 8);
		func_31(pobParam0, 16);
		func_31(pobParam0, 64);
	}

	if (func_29(pobParam0, 8) || func_29(pobParam0, 16))
		return false;

	if (!func_32(joaat("weapon_kit_binoculars"), 1) && !func_32(joaat("weapon_kit_binoculars_improved"), 1) && !WEAPON::_IS_WEAPON_BINOCULARS(func_8(Global_33, true, 0, true)))
		return false;

	if (func_33())
		return false;

	if (func_34(PLAYER::GET_PLAYER_INDEX()))
		return false;

	return true;
}

int func_6() // Position - 0x53D Signature - 22 00 02 00 00 85
{
	return Global_1913339;
}

void func_7(Object* pobParam0) // Position - 0x549 Signature - 22 01 03 00 00 09 39
{
	if (func_35(1))
	{
		if (!func_29(pobParam0, 16))
		{
			if (func_6() == 5)
			{
				func_31(pobParam0, 8);
				func_31(pobParam0, 16);
			}
			else
			{
				func_11(pobParam0, 6);
			}
		}
	
		func_36(1);
	}

	if (func_35(2))
	{
		if (!func_29(pobParam0, 8))
			if (func_6() == 5)
				func_31(pobParam0, 8);
	
		func_36(2);
	}

	if (func_35(4))
	{
		if (func_12(pobParam0->f_4[0]))
			func_37(pobParam0->f_4[0], false, true, true);
	
		func_36(4);
	}
	else if (func_12(pobParam0->f_4[0]) && func_38(pobParam0->f_4[0], true))
	{
		func_37(pobParam0->f_4[0], true, true, true);
	}

	if (func_35(8))
	{
		if (!func_29(pobParam0, 32))
			func_31(pobParam0, 32);
	
		func_36(8);
	}

	if (func_35(16))
	{
		if (func_29(pobParam0, 32))
			func_39(pobParam0, 32);
	
		func_36(16);
	}

	return;
}

Hash func_8(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x653 Signature - 22 04 07 00 00 37
{
	Hash weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

void func_9(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x695 Signature - 22 04 06 00 00 11
{
	*uParam0 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, joaat("INPUT_SCRIPT_LEFT_AXIS_X")) * 127f);
	*uParam1 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, joaat("INPUT_SCRIPT_LEFT_AXIS_Y")) * 127f);
	*uParam2 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, joaat("INPUT_SCRIPT_RIGHT_AXIS_X")) * 127f);
	*uParam3 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, joaat("INPUT_SCRIPT_RIGHT_AXIS_Y")) * 127f);
	return;
}

void func_10(var uParam0) // Position - 0x6F9 Signature - 22 01 03 00 00 66 00 73
{
	func_40(uParam0, 0f);
	return;
}

void func_11(Object* pobParam0, int iParam1) // Position - 0x708 Signature - 22 02 04 00 00 66 01 26
{
	Global_1913339 = iParam1;
	func_41(pobParam0);
	return;
}

BOOL func_12(int iParam0) // Position - 0x71C Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 6D
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

BOOL func_13(int iParam0, BOOL bParam1) // Position - 0x75B Signature - 22 02 05 00 00 66 01
{
	int num;

	if (bParam1 && !func_12(iParam0))
		return false;

	num = func_42(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1951910[num /*23*/].f_3);
}

void func_14(var uParam0) // Position - 0x78E Signature - 22 01 03 00 00 70 21 00 09
{
	if (!WEAPON::_IS_WEAPON_BINOCULARS(func_8(Global_33, true, 0, true)))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPRINT"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_SPRINT"), false);
	}

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);

	if (CAM::DOES_CAM_EXIST(uParam0->f_1) && CAM::IS_CAM_ACTIVE(uParam0->f_1))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_BEHIND"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SWITCH_SHOULDER"), false);
	}

	return;
}

BOOL func_15(var uParam0) // Position - 0x82E Signature - 22 01 03 00 00 66 00 27
{
	return uParam0->f_10;
}

void func_16(var uParam0) // Position - 0x83A Signature - 22 01 03 00 00 2F
{
	uParam0->f_10 = 0;
	return;
}

void func_17(BOOL bParam0) // Position - 0x847 Signature - 22 01 03 00 00 09 66 00 2F
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
	return;
}

void func_18(int iParam0, BOOL bParam1) // Position - 0x857 Signature - 22 02 06
{
	int num;
	int num2;

	func_43(iParam0, &num, &num2);

	if (!func_44(iParam0, num, num2, bParam1))
		return;

	func_45(num, num2);
	return;
}

void func_19(Object* pobParam0) // Position - 0x884 Signature - 22 01 04 00 00 2F
{
	int i;

	for (i = 0; i < pobParam0->f_4; i = i + 1)
	{
		if (func_12(pobParam0->f_4[i]))
			func_23(&pobParam0->f_4[i], true, true);
	}

	return;
}

int func_20(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, Hash hParam10, int iParam11) // Position - 0x8BE Signature - 22 0C
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_46(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_47(num, hParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, false, false, 0, hParam10, iParam11);
		return num;
	}

	return 0;
}

BOOL func_21() // Position - 0x947 Signature - 22 00 02 00 00 03 01 00 33 8B
{
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!WEAPON::_IS_WEAPON_BINOCULARS(func_8(Global_33, true, 0, true)))
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_PREVENT_EVERYBODY_BACKOFF, false);
	
		return true;
	}

	return false;
}

void func_22(char* sParam0, char* sParam1, BOOL bParam2) // Position - 0x97A Signature - 22 03 06 00 00 03
{
	int soundId;

	soundId = AUDIO::GET_SOUND_ID();

	if (soundId != -1)
	{
		AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(soundId, sParam0, sParam1, bParam2);
		Global_1958642[Global_1958642.f_25] = soundId;
		Global_1958642.f_25 = (Global_1958642.f_25 + 1) % 24;
	}

	return;
}

void func_23(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9B9 Signature - 22 03 06 00 00 66 01
{
	int num;

	if (bParam1 && !func_12(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_42(*uParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_48(num);
	*uParam0 = 0;
	return;
}

int func_24(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, int iParam10, Hash hParam11, BOOL bParam12) // Position - 0xA0D Signature - 22 0D
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_46(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_47(num, hParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, bParam9, false, 0, hParam11, bParam12);
		return num;
	}

	return 0;
}

void func_25(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xA93 Signature - 22 04 07 00 00 66 03
{
	int num;

	if (bParam3 && !func_12(iParam0))
		return;

	num = func_42(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1951910[num /*23*/].f_3, iParam1, bParam2);
	return;
}

void func_26(int iParam0, Hash hParam1) // Position - 0xADE Signature - 22 02 05 00 00 66 00 39
{
	int num;

	if (!func_12(iParam0))
		return;

	num = func_42(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ALLOWED_ACTION(Global_1951910[num /*23*/].f_3, hParam1);
	return;
}

BOOL func_27() // Position - 0xB20 Signature - 22 00 02 00 00 03 01 00 33 05
{
	if (!CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, SPC_PREVENT_EVERYBODY_BACKOFF, false);
		return true;
	}

	return false;
}

Hash func_28(Ped pedParam0, int iParam1) // Position - 0xB42 Signature - 22 02 05 00 00 66 00 4B
{
	Hash weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return weaponHash;
}

BOOL func_29(Object* pobParam0, int iParam1) // Position - 0xB59 Signature - 22 02 04 00 00 66 00 27 0C 66 01 69
{
	return pobParam0->f_12 && iParam1 != false;
}

BOOL func_30() // Position - 0xB6A Signature - 22 00 03 00 00 2F
{
	int i;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_AI); i = i + 1)
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_AI, i))
		{
			case joaat("EVENT_DAMAGE"):
			case joaat("event_entity_damaged"):
				if (func_49(i))
					return true;
				break;
		}
	}

	if (PED::IS_PED_IN_MELEE_COMBAT(Global_33))
		return true;

	return false;
}

void func_31(Object* pobParam0, int iParam1) // Position - 0xBC0 Signature - 22 02 04 00 00 66 00 27 0C 66 01 30
{
	pobParam0->f_12 = pobParam0->f_12 || iParam1;
	return;
}

BOOL func_32(Hash hParam0, int iParam1) // Position - 0xBD3 Signature - 22 02 05 00 00 66 00 2F
{
	int num;

	if (!func_50(hParam0, 0))
		return false;

	num = func_51(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_53(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_52(hParam0, 1))
				return false;
			break;
	}

	return func_54(hParam0, false, false, false) >= iParam1;
}

BOOL func_33() // Position - 0xC56 Signature - 22 00 02 00 00 5D 1C
{
	return Global_1940252.f_2;
}

BOOL func_34(Player plParam0) // Position - 0xC64 Signature - 22 01 03 00 00 66 00 6D
{
	if (plParam0 == 255)
		plParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (plParam0 < 0 || plParam0 >= 32)
		return false;

	if (!Global_1295666.f_17[plParam0])
		return false;

	return PED::IS_PED_INCAPACITATED(PLAYER::GET_PLAYER_PED(Global_1295666.f_149[plParam0]));
}

BOOL func_35(int iParam0) // Position - 0xCB3 Signature - 22 01 03 00 00 85 FA 31 1D 66
{
	return Global_1913338 && iParam0 != false;
}

void func_36(int iParam0) // Position - 0xCC4 Signature - 22 01 03 00 00 85 FA 31 1D 85
{
	Global_1913338 = Global_1913338 - Global_1913338 && iParam0;
	return;
}

void func_37(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xCDC Signature - 22 04 07 00 00 66 02
{
	int num;

	if (bParam2 && !func_12(iParam0))
		return;

	num = func_42(iParam0);

	if (bParam1)
	{
		func_55(iParam0, 4);
	
		if (bParam3)
			func_56(num, true);
	
		func_57(num, true);
	}
	else
	{
		func_58(iParam0, 4);
		func_57(num, false);
	}

	return;
}

BOOL func_38(int iParam0, BOOL bParam1) // Position - 0xD30 Signature - 22 02 04 00 00 66 01 6A
{
	if (bParam1 && !func_12(iParam0))
		return true;

	return func_46(iParam0, 4);
}

void func_39(Object* pobParam0, int iParam1) // Position - 0xD54 Signature - 22 02 04 00 00 66 00 27 0C 66 00
{
	pobParam0->f_12 = pobParam0->f_12 - pobParam0->f_12 && iParam1;
	return;
}

void func_40(var uParam0, float fParam1) // Position - 0xD6C Signature - 22 02 04 00 00 39
{
	uParam0->f_1 = func_59() - fParam1;
	func_60(uParam0, 1);
	func_61(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

void func_41(Object* pobParam0) // Position - 0xD92 Signature - 22 01 03 00 00 09 66 00 6C
{
	pobParam0->f_10 = 1;
	return;
}

int func_42(int iParam0) // Position - 0xD9F Signature - 22 01 03 00 00 66 00 50 01 01 22 03
{
	return iParam0;
}

void func_43(int iParam0, var uParam1, var uParam2) // Position - 0xDA9 Signature - 22 03 06 00 00 66 00
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_44(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xDC5 Signature - 22 04 06 00 00 66 01
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_62(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_63(iParam0))
		return false;

	if (func_64(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_65(iParam0, 1) || func_66(32768))
		if (!func_65(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_67())
		return false;

	return true;
}

void func_45(int iParam0, int iParam1) // Position - 0xE67 Signature - 22 02 05 00 00 66 00 5D
{
	var address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

BOOL func_46(int iParam0, int iParam1) // Position - 0xE8B Signature - 22 02 04 00 00 66 00 2F 8A 04
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

void func_47(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0xEAC Signature - 22 1A
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
	func_56(iParam0, true);
	func_57(iParam0, true);
	func_58(iParam0, 128);
	return;
}

void func_48(int iParam0) // Position - 0x11C6 Signature - 22 01 03 00 00 66 00 39 12
{
	if (!func_68(iParam0))
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

BOOL func_49(int iParam0) // Position - 0x1279 Signature - 22 01 0F
{
	struct<9> eventData;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;
	Hash weapontypeGroup;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 9);

	if (!ENTITY::DOES_ENTITY_EXIST(eventData))
		return false;

	if (ENTITY::IS_ENTITY_A_PED(eventData))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData);
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
			return false;
	
		if (!PED::IS_PED_A_PLAYER(pedIndexFromEntityIndex))
			return false;
	
		if (ENTITY::IS_ENTITY_A_PED(eventData.f_1))
		{
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData.f_1);
		
			if (!ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex2) || pedIndexFromEntityIndex2 == Global_33)
				return false;
		}
		else
		{
			return false;
		}
	
		if (eventData.f_4 <= 1f)
			return false;
	
		weapontypeGroup = WEAPON::GET_WEAPONTYPE_GROUP(eventData.f_2);
	
		if (weapontypeGroup != joaat("GROUP_MELEE") && weapontypeGroup != joaat("GROUP_UNARMED"))
			return false;
	}

	return false;
}

BOOL func_50(Hash hParam0, int iParam1) // Position - 0x1332 Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 4D
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_51(Hash hParam0) // Position - 0x134C Signature - 22 01 0A 00 00 66 00 2F 39 32 13 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 0E 05 8B 04 00 2F 50 01 01 4B 03 27 02
{
	var unk;

	if (!func_50(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_2;
}

BOOL func_52(Hash hParam0, int iParam1) // Position - 0x1377 Signature - 22 02 16
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_50(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_69(hParam0, iParam1);
	unk.f_9 = -1591664384;

	if (func_70("ALL WEAPONS", &num, &num2, -1591664384, false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_71(&unk, i, num, num2))
			{
			}
			else if (!func_72(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_73(num);
				return true;
			}
		}
	
		func_73(num);
	}

	return false;
}

BOOL func_53(Hash hParam0) // Position - 0x141E Signature - 22 01 06
{
	int num;
	int num2;
	int num3;

	if (!func_50(hParam0, 0))
		return false;

	num = func_74(hParam0);

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

	num2 = func_75(hParam0);

	if (!(num2 == 0))
	{
		num3 = func_76(&(Global_17418.f_55.f_664.f_1354.f_5), num2);
	
		if (num3 == -1)
			return true;
	}

	num2 = func_77(hParam0);
	num3 = func_76(&(Global_17418.f_55.f_664.f_1354.f_5), num2);

	if (num3 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num3 /*17*/];
}

int func_54(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x14DA Signature - 22 04 0D
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_50(hParam0, 0))
		return 0;

	num = func_51(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_69(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_78(hParam0, false);
	}

	if (func_79(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_80(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_81(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_80(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

void func_55(int iParam0, int iParam1) // Position - 0x159C Signature - 22 02 04 00 00 66 00 2F 8A 03 00 50 02 00 66 00 5D A6 C8 1D 63 17 27 01 66 00
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 - Global_1951910[iParam0 /*23*/].f_1 && iParam1;
	return;
}

void func_56(int iParam0, BOOL bParam1) // Position - 0x15CF Signature - 22 02 04 00 00 66 00 5D A6 C8 1D 63 17 27 03 03 05 00 60 8B 3F
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		if (Global_1951910[iParam0 /*23*/].f_5 == 5 && !func_46(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_57(int iParam0, BOOL bParam1) // Position - 0x1627 Signature - 22 02 04 00 00 66 00 5D A6 C8 1D 63 17 27 03 03 05 00 60 8B 10
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_58(int iParam0, int iParam1) // Position - 0x1650 Signature - 22 02 04 00 00 66 00 2F 8A 03 00 50 02 00 66 00 5D A6 C8 1D 63 17 27 01 66 01
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 || iParam1;
	return;
}

float func_59() // Position - 0x1678 Signature - 22 00 03 00 00 03
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_60(var uParam0, int iParam1) // Position - 0x16AA Signature - 22 02 04 00 00 66 00 76 66 01
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_61(var uParam0, int iParam1) // Position - 0x16BB Signature - 22 02 04 00 00 66 00 76 66 00
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_62(int iParam0, int iParam1) // Position - 0x16D0 Signature - 22 02 04 00 00 66 00 87
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_63(int iParam0) // Position - 0x16E8 Signature - 22 01 03 00 00 66 00 42
{
	if (func_65(iParam0, 4))
		return false;

	return true;
}

BOOL func_64(int iParam0) // Position - 0x16FF Signature - 22 01 07
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
		
			if (num < &func_11 && Global_1904402.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
				return true;
		}
	}

	return false;
}

BOOL func_65(int iParam0, int iParam1) // Position - 0x17CB Signature - 22 02 04 00 00 66 00 5D 12
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_66(int iParam0) // Position - 0x17E4 Signature - 22 01 03 00 00 5D
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_67() // Position - 0x17F7 Signature - 22 00 02 00 00 39
{
	if (!func_82())
		return false;

	return Global_1904402.f_8873;
}

BOOL func_68(int iParam0) // Position - 0x1812 Signature - 22 01 03 00 00 66 00 11
{
	return func_46(iParam0, 2);
}

Hash func_69(Hash hParam0, int iParam1) // Position - 0x1821 Signature - 22 02 07
{
	int num;
	var unk;
	Hash hash;

	if (!func_50(hParam0, 0))
		return 0;

	num = func_51(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_83(hParam0, 1399091007))
	{
		func_84(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_70(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x189B Signature - 22 05 07 00 00 66 04
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_80(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_71(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x18C2 Signature - 22 04 06 00 00 66 02
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_72(Hash hParam0) // Position - 0x18FD Signature - 22 01 03 00 00 66 00 03 05 00 1B
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_73(int iParam0) // Position - 0x1918 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 03
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_74(Hash hParam0) // Position - 0x1939 Signature - 22 01 0A 00 00 66 00 2F 39 32 13 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 0E 05 8B 04 00 2F 50 01 01 4B 03 27 01
{
	var unk;

	if (!func_50(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_1;
}

int func_75(Hash hParam0) // Position - 0x1964 Signature - 22 01 03 00 00 66 00 3C
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

int func_76(var uParam0, int iParam1) // Position - 0x1A47 Signature - 22 02 05 00 00 2F
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

int func_77(Hash hParam0) // Position - 0x1A84 Signature - 22 01 04 00 00 66 00 39 39
{
	int num;

	num = func_74(hParam0);

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

int func_78(Hash hParam0, BOOL bParam1) // Position - 0x1AF1 Signature - 22 02 18
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_85(hParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };

	if (bParam1)
		func_87(&unk, func_86(false));

	if (!func_88(&unk, &num, &num2, false))
		return 0;

	func_73(num);
	return num2;
}

int func_79(Hash hParam0, int iParam1) // Position - 0x1B50 Signature - 22 02 04 00 00 66 01 2F
{
	if (iParam1 == 0)
		return 0;

	if (func_90(func_89(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, iParam1);
}

int func_80(BOOL bParam0) // Position - 0x1B7C Signature - 22 01 03 00 00 39
{
	if (func_91() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_81(Hash hParam0, BOOL bParam1) // Position - 0x1BBD Signature - 22 02 09
{
	var unk;

	unk = { func_92(hParam0, bParam1, 0) };
	return func_93(hParam0, unk, unk.f_4, bParam1);
}

BOOL func_82() // Position - 0x1BE2 Signature - 22 00 02 00 00 03 01 00 12
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_83(Hash hParam0, Hash hParam1) // Position - 0x1BF6 Signature - 22 02 04 00 00 66 00 2F 39
{
	if (!func_50(hParam0, 0))
		return func_94(func_89(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return true;

	return false;
}

void func_84(Hash hParam0, var uParam1, var uParam2) // Position - 0x1C37 Signature - 22 03 05 00 00 2F
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

struct<18> func_85(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1E43 Signature - 22 07 1B
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

struct<4> func_86(BOOL bParam0) // Position - 0x1F21 Signature - 22 01 04 00 00 66 00 39 7C 1B 00 67 03 66 03 11 15
{
	int num;

	num = func_80(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_93(923904168, func_95(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_93(923904168, func_95(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_93(923904168, func_95(bParam0), -740156546, false);
}

void func_87(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1FC2 Signature - 22 05 07 00 00 4B
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_88(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x1FDD Signature - 22 04 06 00 00 66 03
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_80(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

Hash func_89(Hash hParam0) // Position - 0x2002 Signature - 22 01 03 00 00 66 00 50 01 01 22 02
{
	return hParam0;
}

BOOL func_90(Hash hParam0, int iParam1) // Position - 0x200C Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 43
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

int func_91() // Position - 0x2026 Signature - 22 00 02 00 00 5D 17
{
	return Global_1572887.f_14;
}

struct<5> func_92(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x2034 Signature - 22 03 2F
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_95(bParam1) };
	unk.f_4 = 1084182731;
	num = func_51(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_100(hParam0, -1823706425))
			{
				unk = { func_93(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_100(hParam0, -1483207246))
			{
				unk = { func_93(joaat("WARDROBE"), unk, 1034665895, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_93(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1311702610))
			{
				unk.f_4 = -1311702610;
			}
			else if (func_100(hParam0, -1653629781))
			{
				unk = { func_93(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -1591664384;
			unk = { func_99(bParam1) };
		
			switch (func_74(hParam0))
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
			unk = { func_93(joaat("WARDROBE"), unk, 1034665895, bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_86(bParam1) };
		
			if (iParam2 && func_96(hParam0, true))
			{
				unk6.f_9 = -1591664384;
			
				if (!func_97(hParam0, &unk, 1728382685, false, false))
					unk.f_4 = 1728382685;
				else if (!func_97(hParam0, &unk, -649335959, false, false))
					unk.f_4 = -649335959;
				else if (func_98(hParam0, &unk6, 1728382685))
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
			
				if (!func_101(unk, &unk28, bParam1, false, -1))
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
			else if (func_100(hParam0, -1653629781))
			{
				unk = { func_93(1384535894, unk, 1784584921, bParam1) };
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

struct<4> func_93(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x23A8 Signature - 22 07 0D
{
	var outGuid;

	if (!func_50(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_80(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_94(Hash hParam0, Hash hParam1) // Position - 0x23D9 Signature - 22 02 04 00 00 66 00 11
{
	if (!func_90(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

struct<4> func_95(BOOL bParam0) // Position - 0x240F Signature - 22 01 04 00 00 5D
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_80(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_93(joaat("character"), func_102(), -1591664384, bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_93(joaat("character"), func_102(), -1591664384, false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_93(joaat("character"), func_102(), -1591664384, bParam0);
}

int func_96(Hash hParam0, BOOL bParam1) // Position - 0x24AF Signature - 22 02 04 00 00 66 00 39
{
	if (func_74(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_103();
		else
			return 1;

	return 0;
}

BOOL func_97(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x24E6 Signature - 22 05 07 00 00 66 00 42
{
	return func_104(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_98(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x2501 Signature - 22 03 09
{
	var unk;

	if (func_105(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_99(BOOL bParam0) // Position - 0x2522 Signature - 22 01 04 00 00 66 00 39 7C 1B 00 67 03 66 03 11 0B
{
	int num;

	num = func_80(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_93(271701509, func_95(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_93(271701509, func_95(bParam0), 12999093, false);
}

BOOL func_100(Hash hParam0, int iParam1) // Position - 0x258C Signature - 22 02 08
{
	Hash hash;
	int num;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || iParam1 == 0)
		return false;

	num = func_74(hParam0);

	if (num == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(num);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(num, i, &hash))
			if (func_106(hParam0, iParam1, hash))
				return true;
	}

	return false;
}

BOOL func_101(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x25F9 Signature - 22 08
{
	return func_107(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

struct<4> func_102() // Position - 0x260F Signature - 22 00 06
{
	var unk;

	return unk;
}

int func_103() // Position - 0x261B Signature - 22 00 02 00 00 37
{
	if (func_108(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_104(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x2638 Signature - 22 09
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_50(hParam0, 0))
		return 0;

	if (!bParam7 && func_79(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_93(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_80(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_80(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_105(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x26B7 Signature - 22 04 07 00 00 2F
{
	int inventoryId;

	inventoryId = func_80(false);
	*panParam1 = { func_93(hParam0, func_86(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_106(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x26FC Signature - 22 03 05 00 00 66
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, iParam1, hParam2);
}

BOOL func_107(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x272F Signature - 22 05 07 00 00 66 00 03
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_80(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

int func_108(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2769 Signature - 22 04 06 00 00 66 00
{
	if (func_109(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_80(bParam1), hParam0, bParam3);
}

BOOL func_109(Hash hParam0) // Position - 0x279C Signature - 22 01 03 00 00 66 00 03 05 00 71
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

