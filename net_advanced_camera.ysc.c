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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 14;
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
	var uLocal_41 = -1;
	var uLocal_42 = -1;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 1065353216;
	var uLocal_53 = 1056964608;
	var uLocal_54 = 1132462080;
	var uLocal_55 = 1108082688;
	var uLocal_56 = 1084227584;
	var uLocal_57 = 1152319488;
	var uLocal_58 = 1;
	var uLocal_59 = 0;
	var uLocal_60 = 1;
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 03 00 00 48
{
	BOOL flag;

	fLocal_14 = 1f;
	fLocal_15 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&uLocal_16, false);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	flag = true;

	while (flag)
	{
		if (func_2(128) || func_3(&uLocal_16))
			flag = false;
	
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (func_4() || func_5())
			{
				if (!func_2(8192))
				{
					if (!func_6(&uLocal_16, 4))
						func_7(uLocal_16.f_28);
				
					func_8(0);
					func_9(8192);
				}
			}
		}
		else if (func_4() || func_5())
		{
			if (func_2(8192))
			{
				if (!func_6(&uLocal_16, 4))
					func_10(uLocal_16.f_28);
			
				func_11(0);
				func_12(8192);
			}
		}
	
		func_13(&uLocal_16);
		func_14();
		func_15();
		func_16(&uLocal_16);
	
		switch (func_17(&uLocal_16))
		{
			case 0:
				func_18();
				func_19();
				func_20(&uLocal_16);
				func_21();
				func_22();
				func_23();
				func_9(256);
				func_24(&uLocal_16);
				func_25(&uLocal_16, 1);
				break;
		
			case 1:
				func_19();
			
				if (func_26(&uLocal_16))
				{
					func_24(&uLocal_16);
					func_25(&uLocal_16, 2);
				}
				break;
		
			case 2:
				func_19();
			
				if (func_27(&uLocal_16))
				{
					func_28(948, false);
					func_29(&uLocal_16);
					func_30(&uLocal_16);
					func_31(&uLocal_16, 0);
					func_25(&uLocal_16, 3);
				}
				break;
		
			case 3:
				if (!func_32())
					func_33(&uLocal_16);
			
				func_34(&(uLocal_16.f_61));
				func_35(&(uLocal_16.f_61));
				func_36(&uLocal_16);
				func_37(&uLocal_16);
				func_38(&uLocal_16);
			
				if (func_39(uLocal_16.f_5[12], true))
				{
					func_40(20);
					func_25(&uLocal_16, 4);
				}
			
				if (func_41(&uLocal_16))
					if (func_42(&uLocal_16))
						func_43(&uLocal_16, 0);
				break;
		
			case 4:
				func_1(&uLocal_16, true);
				func_25(&uLocal_16, 5);
				break;
		
			case 5:
				if (func_44(Global_33, 0, true, false) != 332793555)
				{
					func_12(256);
					SCRIPTS::TERMINATE_THIS_THREAD();
				}
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&uLocal_16, false);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0, BOOL bParam1) // Position - 0x234 Signature - 22 02 04 00 00 03
{
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), false, 0, -1, false);
	PLAYER::SET_PLAYER_SIMULATE_AIMING(PLAYER::GET_PLAYER_INDEX(), false);
	GRAPHICS::_0x9F6D859C80708B26(false, true);

	if (func_45(uParam0->f_5[0]))
		HUD::_UI_PROMPT_REMOVE_GROUP(func_46(uParam0->f_5[0]), -1469232623);

	if (func_45(uParam0->f_5[12]))
		HUD::_UI_PROMPT_REMOVE_GROUP(func_46(uParam0->f_5[12]), -1469232623);

	func_47(uParam0);

	if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Global_33);
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
	}

	func_23();
	func_48(uParam0);
	func_49(uParam0);

	if (func_50(Global_33, false))
		Global_1958683 = true;

	func_7(uParam0->f_28);
	func_51(uParam0->f_28);
	func_8(2);
	func_52(2);
	func_8(0);
	func_52(0);
	func_53(1);
	func_54(&(uParam0->f_5));
	func_55(uParam0);
	func_56(&(uParam0->f_61));
	func_57();

	if (bParam1)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(Global_33, 1, 1, 0, 0);
	}

	return;
}

BOOL func_2(int iParam0) // Position - 0x340 Signature - 22 01 03 00 00 85 A1 D7 13 66
{
	return func_58(Global_1300385, iParam0);
}

BOOL func_3(var uParam0) // Position - 0x352 Signature - 22 01 04 00 00 2F 67 03 85
{
	int i;

	i = 0;

	if (Global_1958683)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1958683 = false;
		return 1;
	}

	for (i = 0; i <= 3; i = i + 1)
	{
		if (Global_1120497[i /*4533*/].f_14 == 1)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return 1;
		}
	}

	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_SWIMMING(Global_33) && !PED::IS_PED_ON_MOUNT(Global_33))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return 1;
		}
	
		if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_33))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return 1;
		}
	
		if (PED::IS_PED_LASSOED(Global_33))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return 1;
		}
	
		if (PED::_IS_PED_CLIMBING_LADDER(Global_33))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return 1;
		}
	
		if (PED::IS_PED_IN_MELEE_COMBAT(Global_33))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return 1;
		}
	
		if (PED::IS_PED_FALLING(Global_33))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return 1;
		}
	
		if (PED::IS_PED_RAGDOLL(Global_33))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return 1;
		}
	}

	if (!func_59(332793555, 1))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return 1;
	}

	if (ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1940199.f_38 = joaat("WEAPON_UNARMED");
		return 1;
	}

	if (!func_60(Global_33, 0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return 1;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return 1;
	}

	if (func_61(false))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return 1;
	}

	if (Global_1956797.f_1)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return 1;
	}

	if (func_62())
	{
		if (func_63(16) || func_63(37) || func_64(Global_1915656.f_20241.f_1))
		{
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return 1;
		}
	}

	if (PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Global_33, ENTITY::GET_ENTITY_COORDS(Global_33, true, false), 10f, 256) > 0)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return 1;
	}

	if (func_65())
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return 1;
	}

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return 1;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(Global_33, true) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(Global_33, true)))
	{
		func_66("CAM_VEH", 10000, 0, 0, 0, true);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return 1;
	}

	if (Global_1940199.f_52)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return 1;
	}

	if (FIRE::IS_ENTITY_ON_FIRE(Global_33))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return 1;
	}

	if (PED::GET_PED_IS_BEING_GRAPPLED(Global_33))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return 1;
	}

	if (func_44(Global_33, 0, true, false) != 332793555)
	{
		switch (func_67(uParam0))
		{
			case 0:
				return 1;
		
			case 1:
				return 1;
		
			case 2:
				break;
		}
	}

	return 0;
}

BOOL func_4() // Position - 0x6F8 Signature - 22 00 02 00 00 6D 20 39 40
{
	return func_2(32);
}

BOOL func_5() // Position - 0x706 Signature - 22 00 02 00 00 6D 40 39 40
{
	return func_2(64);
}

BOOL func_6(var uParam0, int iParam1) // Position - 0x714 Signature - 22 02 04 00 00 66 00 27
{
	return func_58(uParam0->f_55, iParam1);
}

void func_7(var uParam0) // Position - 0x726 Signature - 22 01 03 00 00 66 00 39 5E 1C 00 39 67 1E
{
	func_69(func_68(uParam0));
	return;
}

void func_8(int iParam0) // Position - 0x738 Signature - 22 01 03 00 00 66 00 39 7E 1E 00 39 67
{
	func_69(func_70(iParam0));
	return;
}

void func_9(int iParam0) // Position - 0x74A Signature - 22 01 03 00 00 5D A1 D7 13 66 00 39 B9
{
	func_71(&Global_1300385, iParam0);
	return;
}

void func_10(int iParam0) // Position - 0x75C Signature - 22 01 03 00 00 66 00 39 5E 1C 00 39 C9
{
	func_72(func_68(iParam0));
	return;
}

void func_11(int iParam0) // Position - 0x76E Signature - 22 01 03 00 00 66 00 39 7E 1E 00 39 C9
{
	func_72(func_70(iParam0));
	return;
}

void func_12(int iParam0) // Position - 0x780 Signature - 22 01 03 00 00 5D A1 D7 13 66 00 39 F1
{
	func_73(&Global_1300385, iParam0);
	return;
}

void func_13(var uParam0) // Position - 0x792 Signature - 22 01 03 00 00 66 00 39 32
{
	if (func_17(uParam0) >= 0 && func_17(uParam0) <= 3)
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
			if (func_74(PLAYER::PLAYER_ID(), 1))
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			else
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);

	func_75();

	switch (func_67(uParam0))
	{
		case 0:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CAMERA_DOF"), false);
			break;
	
		case 1:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_NEXT_CAMERA"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPRINT"), false);
			PED::SET_PED_RESET_FLAG(Global_33, 21, true);
		
			if (func_76(uParam0->f_5[7], true))
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, -310714049, false);
			else if (func_76(uParam0->f_5[8], true))
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, -1089155097, false);
			break;
	
		case 2:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_NEXT_CAMERA"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_DUCK"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_MOVE_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_VEH_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_VEH_MOVE_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPRINT"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SWITCH_SHOULDER"), false);
			break;
	}

	if (func_67(uParam0) != 0)
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SELECT_RADAR_MODE"), false);
		func_77(false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_REVEAL_HUD"), false);
	}

	return;
}

void func_14() // Position - 0x916 Signature - 22 00 02 00 00 11 39 12
{
	func_78(2);
	func_78(4);
	func_78(8);
	func_78(16);
	func_78(32);
	func_78(32768);
	func_78(65536);
	func_78(1048576);
	func_78(128);
	func_78(256);
	func_78(512);
	func_78(1024);
	func_78(2048);
	func_78(1);
	func_78(4096);
	func_78(16384);
	return;
}

void func_15() // Position - 0x987 Signature - 22 00 02 00 00 09 03
{
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(3);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(2);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(4);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(5);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(12);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(10);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(11);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(15);
	return;
}

void func_16(var uParam0) // Position - 0x9CC Signature - 22 01 04 00 00 66 00 21
{
	int statusOfSortedListOperation;

	if (!func_6(uParam0, 131072))
	{
		statusOfSortedListOperation = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION();
	
		switch (statusOfSortedListOperation)
		{
			case 0:
				uParam0->f_25 = func_79();
				uParam0->f_26 = func_80();
				func_81(uParam0, 1);
				func_82(uParam0, 131072);
				func_83(uParam0);
				break;
		
			case 1:
				break;
		
			case 2:
				break;
		}
	}

	return;
}

int func_17(var uParam0) // Position - 0xA32 Signature - 22 01 03 00 00 66 00 27 3E
{
	return uParam0->f_62;
}

void func_18() // Position - 0xA3E Signature - 22 00 02 00 00 11 39 CA
{
	HUD::TEXT_BLOCK_REQUEST(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(2));
	STREAMING::REQUEST_ANIM_DICT(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(0));
	STREAMING::REQUEST_CLIP_SET(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1));
	GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX(func_70(0));
	GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX(func_70(1));
	return;
}

void func_19() // Position - 0xA74 Signature - 22 00 02 00 00 6D 0A
{
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(10);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(11);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(7);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(6);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(5);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(4);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(3);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(2);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(0);
	PED::SET_PED_RESET_FLAG(Global_1295666.f_3, 129, true);
	PED::SET_PED_RESET_FLAG(Global_1295666.f_3, 103, true);
	return;
}

void func_20(var uParam0) // Position - 0xAD6 Signature - 22 01 03 00 00 48
{
	uParam0->f_27 = 1f;
	uParam0->f_56 = -1;
	uParam0->f_57 = -1;
	uParam0->f_33 = 1;
	uParam0->f_73 = 0;
	GRAPHICS::QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS();
	return;
}

void func_21() // Position - 0xAFC Signature - 22 00 02 00 00 03 01 00 75
{
	if (PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(PLAYER::GET_PLAYER_INDEX()))
		PLAYER::_SPECIAL_ABILITY_SET_DISABLED(PLAYER::GET_PLAYER_INDEX(), true);

	if (PLAYER::_IS_SECONDARY_SPECIAL_ABILITY_ACTIVE(PLAYER::GET_PLAYER_INDEX()))
		PLAYER::_SECONDARY_SPECIAL_ABILITY_SET_DISABLED(PLAYER::GET_PLAYER_INDEX(), true);

	return;
}

void func_22() // Position - 0xB2C Signature - 22 00 02 00 00 39 11
{
	func_57();
	Global_1300385.f_1 = ITEMSET::CREATE_ITEMSET(true);
	return;
}

void func_23() // Position - 0xB43 Signature - 22 00 02 00 00 09 39
{
	func_12(1);
	func_12(16);
	func_12(32);
	func_12(64);
	func_12(256);
	func_12(128);
	return;
}

void func_24(var uParam0) // Position - 0xB6F Signature - 22 01 03 00 00 03 01 00 6A 66 00 6C
{
	uParam0->f_54 = MISC::GET_GAME_TIMER();
	return;
}

void func_25(var uParam0, int iParam1) // Position - 0xB7F Signature - 22 02 04 00 00 66 01 66 00 6C 3E
{
	uParam0->f_62 = iParam1;
	return;
}

BOOL func_26(var uParam0) // Position - 0xB8D Signature - 22 01 04 00 00 09
{
	BOOL num;

	num = 1;

	if (GRAPHICS::_ANIMPOSTFX_HAS_LOADED(func_70(0)))
		num = 0;

	if (GRAPHICS::_ANIMPOSTFX_HAS_LOADED(func_70(1)))
		num = 0;

	if (!HUD::TEXT_BLOCK_IS_LOADED(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(2)))
		num = 0;

	if (!STREAMING::HAS_CLIP_SET_LOADED(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1)))
		num = 0;

	if (!STREAMING::HAS_ANIM_DICT_LOADED(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(0)))
		num = 0;

	if (!AUDIO::PREPARE_SOUNDSET(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(6), false))
		if (func_85(uParam0) > 7000)
			num = 1;
		else
			num = 0;

	return num;
}

BOOL func_27(var uParam0) // Position - 0xC0B Signature - 22 01 06 00 00 2F 67
{
	int i;
	int num;
	BOOL num2;

	i = 0;
	num2 = 1;

	for (i = 0; i <= 14 - 1; i = i + 1)
	{
		num = i;
	
		if (!func_86(&uParam0->f_5[num], num))
			num2 = 0;
	}

	return num2;
}

void func_28(int iParam0, BOOL bParam1) // Position - 0xC49 Signature - 22 02 06 00 00 66 00
{
	int num;
	int num2;

	func_87(iParam0, &num, &num2);

	if (!func_88(iParam0, num, num2, bParam1))
		return;

	func_89(num, num2);
	return;
}

void func_29(var uParam0) // Position - 0xC76 Signature - 22 01 03 00 00 66 00 27 1D
{
	uParam0->f_29 = func_90(uParam0->f_29, false);
	uParam0->f_30 = func_90(uParam0->f_28, true);
	func_91(uParam0->f_29);
	func_91(uParam0->f_30);
	return;
}

void func_30(var uParam0) // Position - 0xCA8 Signature - 22 01 03 00 00 39 29 21 00 66 00 6C 19 39
{
	uParam0->f_25 = func_79();
	uParam0->f_26 = func_80();
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_21, "cameraRollCapacityLabel", "i_CurrentNumberOfLocalPhotos");
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_21, "photoModeLabel0", " ");
	uParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_21, "photoModeLabel1", " ");
	func_83(uParam0);
	return;
}

// Unhandled jump detected. Output should be considered invalid
void func_31(var uParam0, int iParam1) // Position - 0xD0A Signature - 22 02 07 00 00 66 01
{
	int i;
	int num;
	int num2;

	switch (iParam1)
	{
		case 0:
			func_53(0);
		
			for (i = 0; i <= 14 - 1; i = i + 1)
			{
				num = i;
				num2 = func_92(num);
			
				if (num2 == 4 || num2 == 0)
				{
					if (num == 3 && !func_93(uParam0) || func_94(Global_33))
					{
						func_95(uParam0->f_5[num], false, true, true);
						func_82(uParam0, 32);
						func_96(uParam0->f_5[num], true, true);
					}
					else
					{
						func_95(uParam0->f_5[num], true, true, true);
						func_96(uParam0->f_5[num], true, true);
						goto 0xD2;
					}
				}
			
				func_95(uParam0->f_5[num], false, true, true);
				func_96(uParam0->f_5[num], false, true);
			}
		
			if (func_44(Global_33, 0, true, false) != 332793555)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_33, 332793555, true, 0, false, false);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_33, true, true, true, false);
			}
			break;
	
		case 1:
			for (i = 0; i <= 14 - 1; i = i + 1)
			{
				num = i;
				num2 = func_92(num);
			
				if (num2 == 3 || num2 == 1)
				{
					if (num == 6 || num == 8)
					{
						func_95(uParam0->f_5[num], false, true, true);
						func_96(uParam0->f_5[num], false, true);
					}
					else
					{
						func_95(uParam0->f_5[num], true, true, true);
						func_96(uParam0->f_5[num], true, true);
					}
				}
				else
				{
					func_95(uParam0->f_5[num], false, true, true);
					func_96(uParam0->f_5[num], false, true);
				}
			}
		
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, 332793555, true, 0, false, false);
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_33, true, true, true, false);
			func_97(uParam0);
			func_98(uParam0);
			break;
	
		case 2:
			func_11(1);
		
			for (i = 0; i <= 14 - 1; i = i + 1)
			{
				num = i;
				num2 = func_92(num);
			
				if (num2 == 3 || num2 == 2)
				{
					if (num == 10 || num == 9)
					{
						switch (func_99(uParam0))
						{
							case 0:
								func_95(uParam0->f_5[num], true, true, true);
								func_96(uParam0->f_5[num], true, true);
								break;
						
							case 1:
								func_95(uParam0->f_5[num], false, true, true);
								func_96(uParam0->f_5[num], false, true);
								break;
						}
					}
					else if (num == 5 || num == 4)
					{
						switch (func_99(uParam0))
						{
							case 0:
								func_95(uParam0->f_5[num], false, true, true);
								func_96(uParam0->f_5[num], false, true);
								break;
						
							case 1:
								func_95(uParam0->f_5[num], true, true, true);
								func_96(uParam0->f_5[num], true, true);
								break;
						}
					}
					else
					{
						func_95(uParam0->f_5[num], true, true, true);
						func_96(uParam0->f_5[num], true, true);
					}
				}
				else
				{
					func_95(uParam0->f_5[num], false, true, true);
					func_96(uParam0->f_5[num], false, true);
				}
			}
		
			func_97(uParam0);
			func_98(uParam0);
			break;
	}

	return;
}

BOOL func_32() // Position - 0x1040 Signature - 22 00 02 00 00 5D 3A
{
	return Global_1896762.f_352;
}

void func_33(var uParam0) // Position - 0x104F Signature - 22 01 03 00 00 66 00 6D
{
	if (func_6(uParam0, 16))
		HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_PLAYER_CAMERA_MODE"));

	switch (func_67(uParam0))
	{
		case 0:
			PAD::_SET_CONTROL_CONTEXT(4, 1487066970);
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1469232623, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(5), 1, 0, 0, 0);
		
			if (func_100(func_70(1)) || func_100(func_70(0)))
				return;
		
			func_101(uParam0);
			func_102(uParam0);
		
			if (func_39(uParam0->f_5[3], true) && func_6(uParam0, 65536) && func_93(uParam0))
			{
				func_103(uParam0, 2);
				return;
			}
		
			if (func_39(uParam0->f_5[2], true))
			{
				func_103(uParam0, 1);
				return;
			}
		
			if (func_39(uParam0->f_5[1], true))
				func_104();
			break;
	
		case 1:
			PAD::_SET_CONTROL_CONTEXT(4, 1487066970);
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1469232623, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(3), 1, 0, 0, 0);
			func_105(uParam0);
			break;
	
		case 2:
			PAD::_SET_CONTROL_CONTEXT(4, 1487066970);
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1469232623, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(4), 1, 0, 0, 0);
			CAM::_0x3C8F74E8FE751614();
			func_106(uParam0);
			break;
	}

	return;
}

void func_34(var uParam0) // Position - 0x1182 Signature - 22 01 03 00 00 03 01 00 EA 6D 1E
{
	if (MISC::GET_FRAME_COUNT() % 30 == 0 || func_58(Global_1300385, 16))
		func_107(uParam0);

	return;
}

void func_35(var uParam0) // Position - 0x11AC Signature - 22 01 03 00 00 03 01 00 EA 6D 0A
{
	if (MISC::GET_FRAME_COUNT() % 10 == 0 || func_58(Global_1300385, 16))
	{
		func_108();
	
		if (!ITEMSET::IS_ITEMSET_VALID(*uParam0) || ITEMSET::GET_ITEMSET_SIZE(*uParam0) <= 0)
			return;
	
		func_109(uParam0);
	}

	if (func_58(Global_1300385, 16))
		func_73(&Global_1300385, 16);

	return;
}

void func_36(var uParam0) // Position - 0x120E Signature - 22 01 05 00 00 2F 39
{
	Ped ped;
	BOOL flag;

	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_70(0)))
	{
		if (func_110(uParam0) != 1 && func_110(uParam0) != 4)
			func_111(uParam0, 4);
	}
	else if (func_2(512) && func_110(uParam0) != 3)
	{
		func_112();
		func_111(uParam0, 3);
	}

	func_113(&ped);
	flag = false;

	switch (func_110(uParam0))
	{
		case 0:
			break;
	
		case 1:
			if (func_114() > 0)
				flag = true;
		
			if (ENTITY::DOES_ENTITY_EXIST(ped) && func_115(ped) && func_116(ped) && !func_117(ped, true))
				flag = true;
		
			if (flag)
			{
				func_118();
				func_111(uParam0, 2);
			}
			break;
	
		case 2:
			if (func_114() <= 0)
				if (!ENTITY::DOES_ENTITY_EXIST(ped) || func_117(ped, true) || ENTITY::DOES_ENTITY_EXIST(ped) && func_119(ped))
					func_111(uParam0, 4);
			break;
	
		case 3:
			if (!func_2(512))
			{
				if (func_114() > 0)
					flag = true;
			
				if (ENTITY::DOES_ENTITY_EXIST(ped) && func_115(ped) && func_116(ped) && !func_117(ped, true))
					flag = true;
			
				if (flag)
				{
					func_118();
					func_111(uParam0, 2);
				}
				else
				{
					func_111(uParam0, 4);
				}
			}
			break;
	
		case 4:
			func_120();
			func_111(uParam0, 1);
			break;
	}

	return;
}

void func_37(var uParam0) // Position - 0x139B Signature - 22 01 05 00 00 2F 67
{
	Ped ped;
	BOOL flag;

	flag = false;

	if (func_113(&ped))
	{
		if (func_117(ped, true))
		{
			if (!func_6(uParam0, 2097152))
			{
				flag = true;
				func_82(uParam0, 2097152);
			}
		}
		else if (func_6(uParam0, 2097152))
		{
			flag = true;
			func_81(uParam0, 2097152);
		}
	}
	else if (func_117(ped, true))
	{
		flag = true;
		func_81(uParam0, 2097152);
	}

	if (flag)
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::GET_PLAYER_INDEX(), 30, 2, func_6(uParam0, 2097152));

	return;
}

void func_38(var uParam0) // Position - 0x1425 Signature - 22 01 03 00 00 66 00 21
{
	if (func_6(uParam0, 262144))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, joaat("INPUT_STICKY_FEED_CANCEL")))
		{
			UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(uParam0->f_20);
			func_81(uParam0, 1);
			func_81(uParam0, 262144);
		}
	}

	return;
}

BOOL func_39(int iParam0, BOOL bParam1) // Position - 0x1460 Signature - 22 02 05 00 00 66 01 6A 8B 08 00 66 00 39 37 17 00 05 69 8B 04 00 2F 50 02 01 66 00 39 9D 36 00 67 04 66 04 5D A6 C8 1D 63 17 27 03 03 05 01
{
	int num;

	if (bParam1 && !func_45(iParam0))
		return false;

	num = func_121(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1951910[num /*23*/].f_3);
}

int func_40(int iParam0) // Position - 0x1493 Signature - 22 01 03 00 00 66 00 39 CA
{
	if (AUDIO::PREPARE_SOUND_WITH_ENTITY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam0), Global_33, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(6), -2))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam0), Global_33, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(6), false, 0, 1);
		return 1;
	}

	return 0;
}

BOOL func_41(var uParam0) // Position - 0x14CD Signature - 22 01 03 00 00 66 00 27 41 11
{
	if (uParam0->f_65 != 2 && uParam0->f_65 != 1)
		return false;

	return uParam0->f_2;
}

BOOL func_42(var uParam0) // Position - 0x14F1 Signature - 22 01 18
{
	var unk;
	BOOL flag;
	int statusOfTakeHighQualityPhoto;

	if (GRAPHICS::IS_PHOTO_FRAME())
	{
		func_122(0);
		func_82(uParam0, 16777216);
	}
	else if (func_6(uParam0, 16777216))
	{
		func_81(uParam0, 16777216);
		func_123(0);
	}

	switch (uParam0->f_63)
	{
		case 0:
			if (uParam0->f_25 >= uParam0->f_26 && !Global_1958680)
			{
				if (uParam0->f_20 == 0)
				{
					unk.f_2 = 0;
					unk.f_7 = MISC::GET_HASH_KEY("IB_BACK" /*Back*/);
					unk.f_7.f_3 = 0;
					uParam0->f_20 = func_124(&unk, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, true);
					func_125(uParam0, false);
					func_82(uParam0, 262144);
					return true;
				}
			
				func_82(uParam0, 1048576);
				func_125(uParam0, false);
				func_82(uParam0, 262144);
			}
		
			if (!Global_1958680 && !func_6(uParam0, 1048576))
			{
				if (CAM::IS_GAMEPLAY_CAM_SHAKING())
					CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
			
				GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
			
				if (GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO())
				{
					func_9(16);
					func_11(2);
					func_126(uParam0, 1);
				}
			}
			else
			{
				func_9(16);
				func_11(2);
				func_126(uParam0, 1);
			}
			break;
	
		case 1:
			flag = false;
		
			if (!Global_1958680 && !func_6(uParam0, 1048576))
			{
				statusOfTakeHighQualityPhoto = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
			
				switch (statusOfTakeHighQualityPhoto)
				{
					case 0:
						GRAPHICS::_0x0D5B19C34068FEE7(1);
					
						if (GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(0))
						{
							func_125(uParam0, true);
							flag = true;
						}
						break;
				
					case 1:
						break;
				
					case 2:
						func_125(uParam0, false);
						flag = true;
						break;
				}
			}
			else
			{
				func_125(uParam0, false);
				flag = true;
			}
		
			if (flag)
				func_126(uParam0, 2);
			break;
	
		case 2:
			if (func_100(func_70(2)))
				return false;
		
			if (AUDIO::PREPARE_SOUND_WITH_ENTITY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(7), Global_33, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(6), -2))
				AUDIO::PLAY_SOUND_FROM_ENTITY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(7), Global_33, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(6), false, 0, 0);
		
			func_127();
			func_81(uParam0, 1048576);
			func_126(uParam0, 0);
			return true;
	}

	return false;
}

void func_43(var uParam0, int iParam1) // Position - 0x16FA Signature - 22 02 04 00 00 66 01 66 00 27
{
	if (iParam1 != uParam0->f_2)
		uParam0->f_2 = iParam1;

	return;
}

int func_44(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1711 Signature - 22 04 07 00 00 2F 67
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

BOOL func_45(int iParam0) // Position - 0x1737 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 6D
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

Prompt func_46(var uParam0) // Position - 0x1776 Signature - 22 01 04 00 00 66 00 39 9D
{
	int num;

	num = func_121(uParam0);

	if (num < 0 || num >= 60)
		return 0;

	return Global_1951910[num /*23*/].f_3;
}

void func_47(var uParam0) // Position - 0x17A6 Signature - 22 01 03 00 00 66 00 27 45
{
	if (uParam0->f_69 == 1)
		SHAPETEST::_0x04AA59CA40571C2E(uParam0->f_71, 0);

	uParam0->f_69 = 0;
	return;
}

void func_48(var uParam0) // Position - 0x17C5 Signature - 22 01 03 00 00 66 00 27 17
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_23, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_24, " ");
	return;
}

void func_49(var uParam0) // Position - 0x17E3 Signature - 22 01 03 00 00 66 00 80
{
	func_128(&(uParam0->f_56));
	func_128(&(uParam0->f_57));
	return;
}

BOOL func_50(Ped pedParam0, BOOL bParam1) // Position - 0x17FB Signature - 22 02 04 00 00 66 00 03 05 00 7B 8B 1B
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (bParam1)
			return PED::IS_PED_DEAD_OR_DYING(pedParam0, true);
		else
			return ENTITY::IS_ENTITY_DEAD(pedParam0);

	return true;
}

void func_51(int iParam0) // Position - 0x1828 Signature - 22 01 03 00 00 66 00 39 5E 1C 00 39 AC
{
	func_129(func_68(iParam0));
	return;
}

void func_52(int iParam0) // Position - 0x183A Signature - 22 01 03 00 00 66 00 39 7E 1E 00 39 AC
{
	func_129(func_70(iParam0));
	return;
}

void func_53(int iParam0) // Position - 0x184C Signature - 22 01 03 00 00 66 00 39 7E 1E 00 39 BA
{
	func_130(func_70(iParam0));
	return;
}

void func_54(var uParam0) // Position - 0x185E Signature - 22 01 04 00 00 2F 67 03 66 03
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_131(&uParam0->[i], true, true);
	}

	return;
}

void func_55(var uParam0) // Position - 0x1886 Signature - 22 01 03 00 00 66 00 27 23 03 05 00 E1 8B 09
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_35))
		CAM::DESTROY_CAM(uParam0->f_35, false);

	func_132(uParam0);
	func_49(uParam0);
	SCRIPTS::SET_NO_LOADING_SCREEN(false);
	AUDIO::_RELEASE_SOUNDSET(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(6));
	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_33);
	STREAMING::REMOVE_CLIP_SET(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1));
	STREAMING::REMOVE_ANIM_DICT(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(0));
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, 0);
	GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
	GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
	func_133(true);
	HUD::_TEXT_BLOCK_DELETE(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(2));
	return;
}

void func_56(var uParam0) // Position - 0x18F1 Signature - 22 01 03 00 00 66 00 76 03
{
	if (ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		ITEMSET::_CLEAR_ITEMSET(*uParam0);
		ITEMSET::DESTROY_ITEMSET(*uParam0);
	}

	return;
}

void func_57() // Position - 0x1911 Signature - 22 00 02 00 00 5D A1 D7 13 27
{
	if (ITEMSET::IS_ITEMSET_VALID(Global_1300385.f_1))
	{
		ITEMSET::_CLEAR_ITEMSET(Global_1300385.f_1);
		ITEMSET::DESTROY_ITEMSET(Global_1300385.f_1);
	}

	return;
}

BOOL func_58(int iParam0, int iParam1) // Position - 0x193A Signature - 22 02 04 00 00 66 00 66 01 69
{
	return iParam0 && iParam1 != false;
}

BOOL func_59(Hash hParam0, int iParam1) // Position - 0x1949 Signature - 22 02 05 00 00 66 00 2F 39
{
	int num;

	if (!func_134(hParam0, 0))
		return false;

	num = func_135(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_137(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_136(hParam0, 1))
				return false;
			break;
	}

	return func_138(hParam0, false, false, false) >= iParam1;
}

BOOL func_60(Ped pedParam0, int iParam1) // Position - 0x19CC Signature - 22 02 05 00 00 66 00 2F 15
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_58(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_58(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_58(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_58(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_58(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_58(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_58(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_58(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

BOOL func_61(BOOL bParam0) // Position - 0x1ACB Signature - 22 01 03 00 00 66 00 8B 0D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

BOOL func_62() // Position - 0x1AFB Signature - 22 00 02 00 00 5D 08
{
	return Global_1915656.f_20637 || Global_1915656.f_22504.f_1;
}

int func_63(int iParam0) // Position - 0x1B19 Signature - 22 01 03 00 00 39 FB
{
	if (func_62())
		if (Global_1915656.f_20241 == iParam0)
			return 1;

	return 0;
}

BOOL func_64(int iParam0) // Position - 0x1B39 Signature - 22 01 04 00 00 66 00 39 BB
{
	int num;

	if (!func_139(iParam0))
		return false;

	if (iParam0 == 46 || iParam0 == 93)
		return false;

	num = func_140(iParam0);

	if (num == 10 || num == 29 || num == 4 || num == 14 || num == 15 || num == 16 || num == 27 || num == 28 || num == 35 || num == 35 || num == 38 || num == 29 || num == 39 || num == 33)
		return true;

	return false;
}

BOOL func_65() // Position - 0x1C09 Signature - 22 00 02 00 00 5D 1C
{
	return Global_1940252.f_2;
}

int func_66(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x1C17 Signature - 22 06 18
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

int func_67(var uParam0) // Position - 0x1C52 Signature - 22 01 03 00 00 66 00 27 41 50
{
	return uParam0->f_65;
}

char* func_68(int iParam0) // Position - 0x1C5E Signature - 22 01 03 00 00 66 00 3C 27 00 00 00 00 00 E7 00 01 00 00 00 E7
{
	switch (iParam0)
	{
		case 0:
			return "No_PostFX_Applied";
	
		case 1:
			return "PhotoMode_FilterVintage01";
	
		case 2:
			return "PhotoMode_FilterVintage02";
	
		case 3:
			return "PhotoMode_FilterVintage03";
	
		case 4:
			return "PhotoMode_FilterVintage04";
	
		case 5:
			return "PhotoMode_FilterVintage05";
	
		case 6:
			return "PhotoMode_FilterVintage06";
	
		case 7:
			return "PhotoMode_FilterVintage07";
	
		case 8:
			return "PhotoMode_FilterVintage08";
	
		case 9:
			return "PhotoMode_FilterVintage09";
	
		case 10:
			return "PhotoMode_FilterVintage10";
	
		case 11:
			return "PhotoMode_FilterModern01";
	
		case 12:
			return "PhotoMode_FilterModern02";
	
		case 13:
			return "PhotoMode_FilterModern03";
	
		case 14:
			return "PhotoMode_FilterModern04";
	
		case 15:
			return "PhotoMode_FilterModern05";
	
		case 16:
			return "PhotoMode_FilterModern06";
	
		case 17:
			return "PhotoMode_FilterModern07";
	
		case 18:
			return "PhotoMode_FilterModern08";
	
		case 19:
			return "PhotoMode_FilterModern09";
	
		case 20:
			return "PhotoMode_FilterModern10";
	
		case 21:
			return "PhotoMode_FilterGame01";
	
		case 22:
			return "PhotoMode_FilterGame02";
	
		case 23:
			return "PhotoMode_FilterGame03";
	
		case 24:
			return "PhotoMode_FilterGame04";
	
		case 25:
			return "PhotoMode_FilterGame05";
	
		case 26:
			return "PhotoMode_FilterGame06";
	
		case 27:
			return "PhotoMode_FilterGame07";
	
		case 28:
			return "PhotoMode_FilterGame08";
	
		case 29:
			return "PhotoMode_FilterGame09";
	
		case 30:
			return "PhotoMode_FilterGame10";
	
		case 31:
			return "PhotoMode_FilterGame11";
	
		case 32:
			return "PhotoMode_FilterGame12";
	
		case 33:
			return "PhotoMode_FilterGame13";
	
		case 34:
			return "PhotoMode_FilterGame14";
	
		case 35:
			return "PhotoMode_FilterGame15";
	
		case 36:
			return "PhotoMode_FilterGame16";
	
		case 37:
			return "PhotoMode_FilterGame17";
	
		case 38:
			return "PhotoMode_FilterGame18";
	
		default:
		
	}

	return "No_PostFX_Applied";
}

void func_69(char* sParam0) // Position - 0x1E67 Signature - 22 01 03 00 00 66 00 03 05 00 C2 8B 06 00 66 00 03 04 01
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sParam0))
		GRAPHICS::ANIMPOSTFX_STOP(sParam0);

	return;
}

char* func_70(int iParam0) // Position - 0x1E7E Signature - 22 01 03 00 00 66 00 3C 03
{
	switch (iParam0)
	{
		case 0:
			return "CameraViewfinderAdv";
	
		case 1:
			return "CameraTransitionBlinkAdv";
	
		case 2:
			return "CameraTakePictureAdv";
	
		default:
		
	}

	return "CameraViewfinder";
}

void func_71(int iParam0, int iParam1) // Position - 0x1EB9 Signature - 22 02 04 00 00 66 00 66 01 39 00
{
	func_141(iParam0, iParam1);
	return;
}

void func_72(char* sParam0) // Position - 0x1EC9 Signature - 22 01 03 00 00 66 00 03 05 01 11 05 8B 06 00 66 00 03 04 01 1B 66
{
	if (!GRAPHICS::_ANIMPOSTFX_HAS_LOADED(sParam0))
		GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX(sParam0);

	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sParam0))
		GRAPHICS::ANIMPOSTFX_PLAY(sParam0);

	return;
}

void func_73(int iParam0, int iParam1) // Position - 0x1EF1 Signature - 22 02 04 00 00 66 00 66 01 39 11
{
	func_142(iParam0, iParam1);
	return;
}

BOOL func_74(Player plParam0, int iParam1) // Position - 0x1F01 Signature - 22 02 05 00 00 66 00 67
{
	Player player;

	player = plParam0;

	if (player >= 0 && player < 32)
		return func_58(Global_1297600[player /*87*/].f_86, iParam1);

	return false;
}

void func_75() // Position - 0x1F35 Signature - 22 00 03 00 00 70
{
	Ped mount;

	PED::SET_PED_RESET_FLAG(Global_33, 129, true);
	PED::SET_PED_RESET_FLAG(Global_33, 173, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, joaat("INPUT_HORSE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SELECT_NEXT_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SELECT_PREV_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON_POS"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_QUICK_SHORTCUT_ABILITIES_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_EXTRA_OPTION"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOT"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ENTER"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_BEHIND"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SECONDARY_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_JUMP"), false);

	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		mount = PED::GET_MOUNT(Global_33);
	
		if (!PED::IS_PED_INJURED(mount))
		{
			PED::SET_PED_RESET_FLAG(mount, 53, true);
			PED::SET_PED_RESET_FLAG(mount, 153, true);
			PED::_SET_PED_MOTIVATION(mount, 3, 0f, 0);
		}
	}

	return;
}

BOOL func_76(int iParam0, BOOL bParam1) // Position - 0x20BD Signature - 22 02 05 00 00 66 01 6A 8B 08 00 66 00 39 37 17 00 05 69 8B 04 00 2F 50 02 01 66 00 39 9D 36 00 67 04 66 04 5D A6 C8 1D 63 17 27 03 03 05 00 49
{
	int num;

	if (bParam1 && !func_45(iParam0))
		return false;

	num = func_121(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1951910[num /*23*/].f_3);
}

void func_77(BOOL bParam0) // Position - 0x20F0 Signature - 22 01 03 00 00 66 00 8B 05
{
	if (bParam0)
		func_143(4);

	func_143(2);
	MISC::SET_BIT(&(Global_1958634.f_1), 0);
	return;
}

void func_78(int iParam0) // Position - 0x2112 Signature - 22 01 03 00 00 5D 75
{
	Global_1940085.f_39 = Global_1940085.f_39 || iParam0;
	return;
}

int func_79() // Position - 0x2129 Signature - 22 00 02 00 00 03 01 00 22
{
	return GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
}

int func_80() // Position - 0x2135 Signature - 22 00 02 00 00 03 01 00 E3
{
	return GRAPHICS::_GET_MAX_NUMBER_OF_LOCAL_PHOTOS();
}

void func_81(var uParam0, int iParam1) // Position - 0x2141 Signature - 22 02 04 00 00 66 00 80 37 66 01 39 F1
{
	func_73(&(uParam0->f_55), iParam1);
	return;
}

void func_82(var uParam0, int iParam1) // Position - 0x2153 Signature - 22 02 04 00 00 66 00 80 37 66 01 39 B9
{
	func_71(&(uParam0->f_55), iParam1);
	return;
}

void func_83(var uParam0) // Position - 0x2165 Signature - 22 01 0B 00 00 6D
{
	var buffer;
	var buffer2;

	TEXT_LABEL_ASSIGN_STRING(&buffer, "", 32);
	MISC::_INT_TO_STRING(uParam0->f_25, "%i", &buffer);
	TEXT_LABEL_APPEND_STRING(&buffer, " / ", 32);
	TEXT_LABEL_ASSIGN_STRING(&buffer2, "", 32);
	MISC::_INT_TO_STRING(uParam0->f_26, "%i", &buffer2);
	TEXT_LABEL_APPEND_STRING(&buffer, &buffer2, 32);

	if (func_6(uParam0, 131072))
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_22, &buffer);
	else
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_22, " ");

	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x21CA Signature - 22 01 03 00 00 66 00 3C 16
{
	switch (iParam0)
	{
		case 0:
			return "FACE_HUMAN@GEN_MALE@PORTRAIT";
	
		case 1:
			return "facials@gen_male@portrait";
	
		case 2:
			return "CAMERA";
	
		case 3:
			return "CAM_CONG_HC";
	
		case 4:
			return "CAM_CONG_HSP";
	
		case 5:
			return "CAM_CONG_AC";
	
		case 6:
			return "CAMERA_SOUNDSET";
	
		case 7:
			return "Wind_On_Film";
	
		case 8:
			return "Zoom_In";
	
		case 9:
			return "Zoom_Out";
	
		case 10:
			return "zoom_in_single";
	
		case 11:
			return "zoom_out_single";
	
		case 12:
			return "Collapse_Camera";
	
		case 13:
			return "Place_Tripod";
	
		case 14:
			return "Expand_Camera";
	
		case 15:
			return "Take_Photo";
	
		case 16:
			return "Change_Expression";
	
		case 17:
			return "Change_Pose";
	
		case 18:
			return "Change_Filter";
	
		case 19:
			return "Change_Intensity";
	
		case 20:
			return "Put_Away";
	
		case 21:
			return "Remove_Tripod";
	
		default:
		
	}

	return "";
}

int func_85(var uParam0) // Position - 0x22FB Signature - 22 01 03 00 00 03 01 00 6A 66 00 39
{
	return MISC::GET_GAME_TIMER() - func_144(uParam0);
}

BOOL func_86(var uParam0, int iParam1) // Position - 0x230E Signature - 22 02 04 00 00 66 00 76 39
{
	if (!func_45(*uParam0))
	{
		if (iParam1 == 9 || iParam1 == 10 || iParam1 == 5 || iParam1 == 4 || iParam1 == 6)
			*uParam0 = func_147(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(iParam1), func_146(iParam1, false), func_146(iParam1, true), 0);
		else
			*uParam0 = func_148(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(iParam1), func_146(iParam1, false), 2, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	
		func_149(*uParam0, -1469232623, 0, true);
	}

	return true;
}

void func_87(int iParam0, var uParam1, var uParam2) // Position - 0x23AB Signature - 22 03 06 00 00 66 00
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_88(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x23C7 Signature - 22 04 06 00 00 66 01
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_150(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_151(iParam0))
		return false;

	if (func_152(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_153(iParam0, 1) || func_154(32768))
		if (!func_153(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_155())
		return false;

	return true;
}

void func_89(int iParam0, int iParam1) // Position - 0x2469 Signature - 22 02 05 00 00 66 00 5D
{
	int address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

int func_90(int iParam0, BOOL bParam1) // Position - 0x248D Signature - 22 02 06 00 00 66 01
{
	int num;
	BOOL flag;

	if (bParam1)
	{
		num = iParam0 + 1;
		flag = true;
	
		while (flag)
		{
			if (num >= 39)
				num = 0;
		
			if (num == iParam0)
			{
				flag = false;
				return iParam0;
			}
		
			if (func_156(num))
			{
				flag = false;
				return num;
			}
			else
			{
				num = num + 1;
			}
		}
	}
	else
	{
		num = iParam0 - 1;
		flag = true;
	
		while (flag)
		{
			if (num < 0)
				num = 39 - 1;
		
			if (num == iParam0)
			{
				flag = false;
				return iParam0;
			}
		
			if (func_156(num))
			{
				flag = false;
				return num;
			}
			else
			{
				num = num - 1;
			}
		}
	}

	return num;
}

void func_91(int iParam0) // Position - 0x2529 Signature - 22 01 03 00 00 66 00 39 5E 1C 00 39 67 4C
{
	func_157(func_68(iParam0));
	return;
}

int func_92(int iParam0) // Position - 0x253B Signature - 22 01 03 00 00 66 00 3C 0E 00 00 00 00 00 51 00 01 00 00 00 4F
{
	switch (iParam0)
	{
		case 0:
			return 3;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 3;
	
		case 5:
			return 3;
	
		case 6:
			return 3;
	
		case 7:
			return 3;
	
		case 8:
			return 3;
	
		case 9:
			return 2;
	
		case 10:
			return 2;
	
		case 11:
			return 3;
	
		case 12:
			return 0;
	
		case 13:
			return 2;
	
		default:
		
	}

	return -1;
}

BOOL func_93(var uParam0) // Position - 0x25D8 Signature - 22 01 0E
{
	BOOL flag;
	Vector3 entityCoords;
	float entityHeading;
	float offsetFromCoordAndHeadingInWorldCoords;
	float groundZ;
	var groundZ2;
	float num;

	flag = false;
	entityCoords = { ENTITY::GET_ENTITY_COORDS(Global_33, true, false) };
	entityHeading = ENTITY::GET_ENTITY_HEADING(Global_33);
	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(entityCoords, entityHeading, 0f, 4f, 0f) };

	if (func_158(Global_33, true))
		offsetFromCoordAndHeadingInWorldCoords.f_2 = offsetFromCoordAndHeadingInWorldCoords.f_2 + 1f;
	else
		offsetFromCoordAndHeadingInWorldCoords.f_2 = offsetFromCoordAndHeadingInWorldCoords.f_2 + 50f;

	MISC::GET_GROUND_Z_FOR_3D_COORD(offsetFromCoordAndHeadingInWorldCoords, &groundZ, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(entityCoords, &groundZ2, false);

	if (entityCoords.f_2 > groundZ)
		if (entityCoords.f_2 - groundZ > 2f)
			return false;
	else if (groundZ - entityCoords.f_2 > 2f)
		return false;

	if (func_2(1024))
		return false;

	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		return false;

	if (PED::IS_PED_ON_MOUNT(Global_33))
		return false;

	if (PED::_IS_PED_DRUNK(Global_33))
		return false;

	if (PED::_IS_PED_SLIDING(Global_33))
		return false;

	if (PED::IS_PED_FALLING(Global_33) || PED::IS_PED_FALLING_OVER(Global_33))
		return false;

	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(entityCoords, 2f) > 0)
		return false;

	if (groundZ - entityCoords.f_2 > 1f)
		return false;

	if (ENTITY::IS_ENTITY_IN_WATER(Global_33))
		return false;

	if (func_159(Global_33, 0))
		return false;

	if (PED::GET_PED_CROUCH_MOVEMENT(Global_33))
		return false;

	if (WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(offsetFromCoordAndHeadingInWorldCoords, 0, &(offsetFromCoordAndHeadingInWorldCoords.f_2)) == 1)
		return false;

	if (PATHFIND::IS_POINT_ON_ROAD(offsetFromCoordAndHeadingInWorldCoords, offsetFromCoordAndHeadingInWorldCoords.f_1, groundZ, 0))
		return false;

	num = 1f;

	if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(Global_33, offsetFromCoordAndHeadingInWorldCoords, offsetFromCoordAndHeadingInWorldCoords.f_1, groundZ + num, 3167))
		flag = true;
	else
		return false;

	if (flag)
	{
		uParam0->f_49 = { entityCoords, entityCoords.f_1, entityCoords.f_2 - 1f };
		uParam0->f_52 = entityHeading;
		uParam0->f_46 = { offsetFromCoordAndHeadingInWorldCoords, offsetFromCoordAndHeadingInWorldCoords.f_1, groundZ + num };
	}

	return true;
}

BOOL func_94(Ped pedParam0) // Position - 0x27A0 Signature - 22 01 03 00 00 66 00 03 05 00 60
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	return PED::IS_PED_ON_MOUNT(pedParam0);
}

void func_95(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x27BB Signature - 22 04 07 00 00 66 02
{
	int num;

	if (bParam2 && !func_45(iParam0))
		return;

	num = func_121(iParam0);

	if (bParam1)
	{
		func_160(iParam0, 4);
	
		if (bParam3)
			func_161(num, true);
	
		func_162(num, true);
	}
	else
	{
		func_163(iParam0, 4);
		func_162(num, false);
	}

	return;
}

void func_96(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x280F Signature - 22 03 06 00 00 66 02 6A 8B 08 00 66 00 39 37 17 00 05 69 8B 03
{
	int num;

	if (bParam2 && !func_45(iParam0))
		return;

	num = func_121(iParam0);
	func_161(num, bParam1);
	return;
}

void func_97(var uParam0) // Position - 0x283B Signature - 22 01 03 00 00 39 29 21 00 66 00 6C 19 50
{
	uParam0->f_25 = func_79();
	return;
}

void func_98(var uParam0) // Position - 0x284B Signature - 22 01 03 00 00 66 00 39 65
{
	func_83(uParam0);
	func_164(uParam0);
	func_165(uParam0);
	return;
}

int func_99(var uParam0) // Position - 0x2865 Signature - 22 01 03 00 00 66 00 27 44
{
	return uParam0->f_68;
}

BOOL func_100(char* sParam0) // Position - 0x2871 Signature - 22 01 03 00 00 66 00 03 05 00 C2 50
{
	return GRAPHICS::ANIMPOSTFX_IS_RUNNING(sParam0);
}

void func_101(var uParam0) // Position - 0x287F Signature - 22 01 03 00 00 66 00 39 67
{
	func_166(uParam0);

	if (MISC::GET_FRAME_COUNT() % 15 == 0)
	{
		if (func_93(uParam0) && !uParam0->f_72)
		{
			if (!func_6(uParam0, 65536))
				func_82(uParam0, 65536);
		
			if (func_6(uParam0, 32))
				func_81(uParam0, 32);
		}
		else
		{
			if (func_6(uParam0, 65536))
				func_81(uParam0, 65536);
		
			if (!func_6(uParam0, 32))
				func_82(uParam0, 32);
		}
	}

	return;
}

void func_102(var uParam0) // Position - 0x2905 Signature - 22 01 03 00 00 66 00 39 F8
{
	if (func_167(uParam0) || func_2(512) || !func_6(uParam0, 131072))
		if (!func_6(uParam0, 1))
			func_82(uParam0, 1);
	else if (func_6(uParam0, 1) && !func_41(uParam0))
		func_81(uParam0, 1);

	switch (func_67(uParam0))
	{
		case 0:
			if (func_2(2048))
				if (!func_6(uParam0, 2048))
					func_82(uParam0, 2048);
			else if (func_6(uParam0, 2048))
				func_81(uParam0, 2048);
		
			func_168(uParam0, 3, 32, false);
			func_168(uParam0, 2, 2048, false);
			break;
	
		case 1:
			func_168(uParam0, 0, 1, false);
			func_168(uParam0, 4, 4, false);
			func_168(uParam0, 5, 8, false);
			func_168(uParam0, 11, 2, false);
			break;
	
		case 2:
			func_168(uParam0, 0, 1, false);
			func_168(uParam0, 11, 2, false);
			func_168(uParam0, 6, 512, true);
			func_168(uParam0, 7, 8388608, false);
			func_168(uParam0, 8, 4194304, true);
			func_169(uParam0, 4, 4, 16384);
			func_168(uParam0, 10, 4096, true);
			func_168(uParam0, 9, 8192, true);
			func_168(uParam0, 5, 32768, true);
			func_168(uParam0, 13, 1024, false);
		
			if (func_6(uParam0, 128) || func_41(uParam0))
				if (func_170(uParam0->f_5[10], false))
					func_95(uParam0->f_5[10], false, true, true);
			else if (func_171(uParam0) == 0)
				if (!func_170(uParam0->f_5[10], false))
					func_95(uParam0->f_5[10], true, true, true);
			else if (func_170(uParam0->f_5[10], false))
				func_95(uParam0->f_5[10], false, true, true);
			break;
	}

	return;
}

void func_103(var uParam0, int iParam1) // Position - 0x2AF7 Signature - 22 02 04 00 00 66 01 66 00 6C 41
{
	uParam0->f_65 = iParam1;
	return;
}

void func_104() // Position - 0x2B05 Signature - 22 00 02 00 00 25 D5
{
	UIAPPS::LAUNCH_UIAPP_WITH_ENTRY("social_club_feed", "launch_to_photos");
	return;
}

void func_105(var uParam0) // Position - 0x2B1A Signature - 22 01 03 00 00 66 00 39 B8
{
	switch (func_172(uParam0))
	{
		case 0:
			if (uParam0->f_28 == 0)
				func_82(uParam0, 4);
		
			func_173(uParam0, 1);
			break;
	
		case 1:
			func_40(14);
			func_173(uParam0, 2);
			break;
	
		case 2:
			CAM::_FORCE_FIRST_PERSON_CAM_THIS_FRAME();
		
			if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
			{
				func_11(0);
			
				if (GRAPHICS::_ANIMPOSTFX_IS_STACKHASH_PLAYING(joaat("playerdrunk01")))
					GRAPHICS::_ANIMPOSTFX_SET_STRENGTH("PlayerDrunk01", 0f);
			
				GRAPHICS::_0x9F6D859C80708B26(true, true);
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), true, 0, -1, false);
				PLAYER::SET_PLAYER_SIMULATE_AIMING(PLAYER::GET_PLAYER_INDEX(), true);
				func_31(uParam0, 1);
				func_10(uParam0->f_28);
				GRAPHICS::_ANIMPOSTFX_SET_STRENGTH(func_68(uParam0->f_28), uParam0->f_27);
				func_174();
				func_82(uParam0, 16);
				func_173(uParam0, 3);
			}
			break;
	
		case 3:
			CAM::_FORCE_FIRST_PERSON_CAM_THIS_FRAME();
			CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
			func_175(uParam0);
			func_176(uParam0);
			func_177(uParam0);
			func_178(uParam0);
			func_179(uParam0);
			func_102(uParam0);
		
			if (!func_6(uParam0, 1) && func_39(uParam0->f_5[0], true))
			{
				func_40(15);
				func_43(uParam0, 1);
			}
		
			if (func_39(uParam0->f_5[1], true))
			{
				func_104();
				return;
			}
		
			if (!func_6(uParam0, 2) && func_39(uParam0->f_5[11], true) || func_180() || func_181())
			{
				func_173(uParam0, 4);
				return;
			}
			break;
	
		case 4:
			if (GRAPHICS::_ANIMPOSTFX_IS_STACKHASH_PLAYING(joaat("playerdrunk01")))
				GRAPHICS::_ANIMPOSTFX_SET_STRENGTH("PlayerDrunk01", func_182());
		
			GRAPHICS::_0x9F6D859C80708B26(false, true);
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), false, 0, -1, false);
			PLAYER::SET_PLAYER_SIMULATE_AIMING(PLAYER::GET_PLAYER_INDEX(), false);
			func_40(12);
		
			if (uParam0->f_28 > 0)
			{
				func_7(uParam0->f_28);
				func_51(uParam0->f_28);
			}
		
			if (uParam0->f_29 > 0)
			{
				func_7(uParam0->f_29);
				func_51(uParam0->f_29);
			}
		
			func_183();
			func_81(uParam0, 16);
			func_103(uParam0, 0);
			func_31(uParam0, 0);
			func_173(uParam0, 0);
			break;
	}

	return;
}

void func_106(var uParam0) // Position - 0x2D29 Signature - 22 01 04 00 00 2F 67 03 66 00
{
	BOOL flag;

	flag = false;

	if (func_184(uParam0) >= 3)
		CAM::STOP_GAMEPLAY_CAM_SHAKING(true);

	switch (func_184(uParam0))
	{
		case 0:
			func_185(uParam0, 0);
			func_82(uParam0, 32768);
			func_82(uParam0, 16384);
			func_186(uParam0, 1);
			uParam0->f_69 = 0;
			break;
	
		case 1:
			func_91(uParam0->f_28);
			func_40(13);
			func_186(uParam0, 2);
			break;
	
		case 2:
			if (func_187(uParam0))
			{
				func_11(0);
			
				if (GRAPHICS::_ANIMPOSTFX_IS_STACKHASH_PLAYING(joaat("playerdrunk01")))
					GRAPHICS::_ANIMPOSTFX_SET_STRENGTH("PlayerDrunk01", 0f);
			
				GRAPHICS::_0x9F6D859C80708B26(true, true);
				func_188(uParam0);
				func_24(uParam0);
				func_10(uParam0->f_28);
				GRAPHICS::_ANIMPOSTFX_SET_STRENGTH(func_68(uParam0->f_28), uParam0->f_27);
				func_189();
				func_82(uParam0, 16);
				func_190(uParam0);
				func_31(uParam0, 2);
				func_186(uParam0, 3);
			}
			break;
	
		case 3:
			if (func_85(uParam0) > 1000)
			{
				func_53(1);
				func_186(uParam0, 4);
			}
			break;
	
		case 4:
			func_191(uParam0);
			func_192(uParam0);
			func_193(uParam0);
			func_176(uParam0);
			func_177(uParam0);
			func_178(uParam0);
			func_179(uParam0);
			func_194(uParam0);
			func_102(uParam0);
		
			if (func_100(func_70(1)))
				return;
		
			if (!func_6(uParam0, 2) && func_39(uParam0->f_5[11], true) || func_180())
			{
				func_24(uParam0);
				func_11(1);
				func_40(21);
				func_186(uParam0, 5);
				return;
			}
		
			if (func_39(uParam0->f_5[1], true))
			{
				func_104();
				return;
			}
		
			if (!func_6(uParam0, 1) && func_39(uParam0->f_5[0], true))
			{
				func_40(15);
				func_43(uParam0, 1);
				return;
			}
			break;
	
		case 5:
			if (func_85(uParam0) > 500)
			{
				func_49(uParam0);
			
				if (uParam0->f_28 > 0)
				{
					func_7(uParam0->f_28);
					func_51(uParam0->f_28);
				}
			
				WEAPON::SET_CURRENT_PED_WEAPON(Global_33, 332793555, true, 0, false, false);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_33, true, true, true, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, false, true);
				func_195(uParam0);
				func_196();
				func_183();
				func_186(uParam0, 6);
			}
			break;
	
		case 6:
			func_47(uParam0);
		
			if (!PED::IS_PED_USING_ANY_SCENARIO(Global_33) && func_85(uParam0) > 1000)
				flag = true;
		
			if (func_85(uParam0) > 3000)
				flag = true;
		
			if (flag)
			{
				if (GRAPHICS::_ANIMPOSTFX_IS_STACKHASH_PLAYING(joaat("playerdrunk01")))
					GRAPHICS::_ANIMPOSTFX_SET_STRENGTH("PlayerDrunk01", func_182());
			
				GRAPHICS::_0x9F6D859C80708B26(false, true);
				func_81(uParam0, 16);
				func_7(uParam0->f_28);
				func_51(uParam0->f_28);
				func_53(1);
				func_103(uParam0, 0);
				func_31(uParam0, 0);
				func_186(uParam0, 0);
			}
			break;
	}

	return;
}

void func_107(var uParam0) // Position - 0x3004 Signature - 22 01 09
{
	ItemSet itemSet;
	Entity entityFromItem;
	Hash entityModel;
	Ped pedFromIndexedItem;
	BOOL flag;
	int i;

	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);

	itemSet = ITEMSET::CREATE_ITEMSET(false);
	ENTITY::_GET_ENTITIES_NEAR_POINT(ENTITY::GET_ENTITY_COORDS(Global_33, true, false), func_197(), itemSet, 1);

	if (ITEMSET::GET_ITEMSET_SIZE(*uParam0) > 0)
	{
		for (i = 0; i <= ITEMSET::GET_ITEMSET_SIZE(*uParam0) - 1; i = i + 1)
		{
			entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, *uParam0));
			entityModel = ENTITY::GET_ENTITY_MODEL(entityFromItem);
			pedFromIndexedItem = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, *uParam0));
		
			if (!ENTITY::DOES_ENTITY_EXIST(entityFromItem) || ENTITY::IS_ENTITY_DEAD(entityFromItem) || func_198(Global_33, entityFromItem, true, true) > func_197() + 10f || func_117(pedFromIndexedItem, true))
				func_199(entityFromItem, *uParam0);
		}
	}

	if (ITEMSET::GET_ITEMSET_SIZE(itemSet) > 0)
	{
		for (i = 0; i <= ITEMSET::GET_ITEMSET_SIZE(itemSet) - 1; i = i + 1)
		{
			pedFromIndexedItem = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet));
			flag = false;
		
			if (!func_50(pedFromIndexedItem, false) && !func_117(pedFromIndexedItem, true))
			{
				entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet));
				entityModel = ENTITY::GET_ENTITY_MODEL(entityFromItem);
			
				if (PED::IS_PED_A_PLAYER(pedFromIndexedItem) && !PED::_IS_ANIMAL_CONTROLLED_BY_A_PLAYER(pedFromIndexedItem))
					flag = true;
			
				if (DECORATOR::DECOR_EXIST_ON(pedFromIndexedItem, func_200()) && DECORATOR::DECOR_GET_BOOL(pedFromIndexedItem, func_200()))
					flag = true;
			
				if (func_115(pedFromIndexedItem))
				{
					if (func_116(pedFromIndexedItem))
						flag = true;
				
					if (PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()) == pedFromIndexedItem)
						flag = true;
				
					if (entityModel == joaat("a_c_bat_01"))
						flag = true;
				
					if (func_201(entityModel))
						flag = true;
				}
			}
		
			if (flag)
				func_202(entityFromItem, *uParam0);
		}
	}

	ITEMSET::_CLEAR_ITEMSET(itemSet);
	ITEMSET::DESTROY_ITEMSET(itemSet);
	return;
}

void func_108() // Position - 0x31BF Signature - 22 00 06 00 00 5D
{
	int i;
	Entity entityFromItem;
	Ped pedFromIndexedItem;
	int num;

	if (ITEMSET::GET_ITEMSET_SIZE(Global_1300385.f_1) > 0)
	{
		for (i = 0; i <= ITEMSET::GET_ITEMSET_SIZE(Global_1300385.f_1) - 1; i = i + 1)
		{
			entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, Global_1300385.f_1));
		
			if (ENTITY::DOES_ENTITY_EXIST(entityFromItem))
			{
				pedFromIndexedItem = MISC::_GET_PED_FROM_INDEXED_ITEM(entityFromItem);
			
				if (!ENTITY::IS_ENTITY_DEAD(pedFromIndexedItem))
				{
					num = func_203(ENTITY::GET_ENTITY_MODEL(entityFromItem));
				
					if (PED::IS_PED_A_PLAYER(pedFromIndexedItem) || DECORATOR::DECOR_EXIST_ON(pedFromIndexedItem, func_200()) && DECORATOR::DECOR_GET_BOOL(pedFromIndexedItem, func_200()))
						if (func_204(entityFromItem))
							if (func_205(pedFromIndexedItem))
								if (func_58(Global_1300385, 256) && pedFromIndexedItem == Global_33)
									if (!func_58(Global_1300385, 64))
										func_206(pedFromIndexedItem);
							else
								func_206(pedFromIndexedItem);
						else
							func_206(pedFromIndexedItem);
					else if (PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()) == pedFromIndexedItem)
						if (!func_204(entityFromItem) || func_94(Global_33))
							func_206(pedFromIndexedItem);
					else if (!func_207(pedFromIndexedItem, num))
						func_206(pedFromIndexedItem);
				}
			}
		}
	}

	return;
}

void func_109(var uParam0) // Position - 0x32E6 Signature - 22 01 07 00 00 2F
{
	Ped entityFromItem;
	Ped pedFromIndexedItem;
	int num;
	int i;

	for (i = 0; i <= ITEMSET::GET_ITEMSET_SIZE(*uParam0) - 1; i = i + 1)
	{
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, *uParam0));
	
		if (ENTITY::DOES_ENTITY_EXIST(entityFromItem))
		{
			pedFromIndexedItem = MISC::_GET_PED_FROM_INDEXED_ITEM(entityFromItem);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedFromIndexedItem))
			{
				num = func_203(ENTITY::GET_ENTITY_MODEL(entityFromItem));
			
				if (PED::IS_PED_A_PLAYER(pedFromIndexedItem) || DECORATOR::DECOR_EXIST_ON(pedFromIndexedItem, func_200()) && DECORATOR::DECOR_GET_BOOL(pedFromIndexedItem, func_200()))
					if (func_204(entityFromItem))
						if (!PED::_IS_PED_VISIBILITY_TRACKED(pedFromIndexedItem))
							PED::REQUEST_PED_VISIBILITY_TRACKING(pedFromIndexedItem);
						else if (func_205(pedFromIndexedItem))
							if (func_58(Global_1300385, 256) && pedFromIndexedItem == Global_33)
								if (func_58(Global_1300385, 64))
									func_202(entityFromItem, Global_1300385.f_1);
							else
								func_202(entityFromItem, Global_1300385.f_1);
				else if (PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()) == pedFromIndexedItem)
					if (func_204(entityFromItem) && !func_94(Global_33))
						if (!PED::_IS_PED_VISIBILITY_TRACKED(pedFromIndexedItem))
							PED::REQUEST_PED_VISIBILITY_TRACKING(pedFromIndexedItem);
						else if (func_205(pedFromIndexedItem))
							func_202(entityFromItem, Global_1300385.f_1);
				else if (func_208(pedFromIndexedItem, num))
					func_202(entityFromItem, Global_1300385.f_1);
			}
		}
	}

	return;
}

int func_110(var uParam0) // Position - 0x3434 Signature - 22 01 03 00 00 66 00 27 46
{
	return uParam0->f_70;
}

void func_111(var uParam0, int iParam1) // Position - 0x3440 Signature - 22 02 04 00 00 66 01 66 00 6C 46
{
	uParam0->f_70 = iParam1;
	return;
}

void func_112() // Position - 0x344E Signature - 22 00 02 00 00 2F 2F
{
	func_209(0, 0, 0, 128);
	return;
}

BOOL func_113(var uParam0) // Position - 0x345F Signature - 22 01 04 00 00 03
{
	Entity outEntity;

	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::GET_PLAYER_INDEX(), &outEntity, true, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(outEntity))
		{
			*uParam0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity);
			return true;
		}
	}

	return false;
}

int func_114() // Position - 0x348E Signature - 22 00 05
{
	Entity entityFromItem;
	int num;
	int i;

	num = 0;
	i = 0;

	if (ITEMSET::IS_ITEMSET_VALID(Global_1300385.f_1) && ITEMSET::GET_ITEMSET_SIZE(Global_1300385.f_1) > 0)
	{
		for (i = 0; i <= ITEMSET::GET_ITEMSET_SIZE(Global_1300385.f_1) - 1; i = i + 1)
		{
			entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, Global_1300385.f_1));
		
			if (ENTITY::GET_IS_ANIMAL(entityFromItem) && PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()) != MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, Global_1300385.f_1)))
				num = num + 1;
		
			if (PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()) == MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, Global_1300385.f_1)))
				num = num + 1;
		
			if (DECORATOR::DECOR_EXIST_ON(entityFromItem, func_200()) && DECORATOR::DECOR_GET_BOOL(entityFromItem, func_200()))
				num = num + 1;
		}
	
		return num;
	}

	return 0;
}

BOOL func_115(Ped pedParam0) // Position - 0x355F Signature - 22 01 04 00 00 66 00 39 A4 61 00 67 03 66 03
{
	Ped ped;

	ped = func_210(pedParam0);

	if (ENTITY::GET_IS_ANIMAL(ped) && !PED::_IS_ANIMAL_CONTROLLED_BY_A_PLAYER(pedParam0))
		return true;

	return false;
}

BOOL func_116(Ped pedParam0) // Position - 0x3589 Signature - 22 01 04 00 00 66 00 03 05 01
{
	Hash pedRelationshipGroupHash;

	pedRelationshipGroupHash = PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam0);

	if (!PED::_IS_META_PED_FISH(pedParam0) && !func_211(pedParam0, false) && !func_119(pedParam0) && pedRelationshipGroupHash != joaat("rel_domesticated_pet_animal"))
		return true;

	return false;
}

BOOL func_117(Ped pedParam0, BOOL bParam1) // Position - 0x35CE Signature - 22 02 04 00 00 66 00 03 05 00 7B 05 8B 04 00 2F 50 02 01 66 00 39
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, func_200()) && DECORATOR::DECOR_GET_BOOL(pedParam0, func_200()))
		return false;

	if (bParam1 && PED::_IS_ANIMAL_CONTROLLED_BY_A_PLAYER(pedParam0))
		return true;

	if (PED::IS_PED_INCAPACITATED(pedParam0))
		return true;

	if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, true))
		return true;

	if (PED::GET_PED_CONFIG_FLAG(pedParam0, 580, true))
		return true;

	return false;
}

void func_118() // Position - 0x3647 Signature - 22 00 02 00 00 2F 6D
{
	func_209(0, 255, 0, 128);
	return;
}

BOOL func_119(Ped pedParam0) // Position - 0x3659 Signature - 22 01 04 00 00 66 00 03 05 00 7B
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (PED::_IS_THIS_MODEL_A_HORSE(entityModel))
		return true;

	return false;
}

void func_120() // Position - 0x3685 Signature - 22 00 02 00 00 2F 39
{
	GRAPHICS::_ANIMPOSTFX_SET_POSTFX_COLOR(func_70(0), 0, 255, 255, 255, 128);
	return;
}

int func_121(int iParam0) // Position - 0x369D Signature - 22 01 03 00 00 66 00 50 01 01 22 01
{
	return iParam0;
}

void func_122(int iParam0) // Position - 0x36A7 Signature - 22 01 03 00 00 66 00 39 7E 1E 00 73
{
	GRAPHICS::_ANIMPOSTFX_SET_STRENGTH(func_70(iParam0), 0f);
	return;
}

void func_123(int iParam0) // Position - 0x36BA Signature - 22 01 03 00 00 66 00 39 7E 1E 00 48
{
	GRAPHICS::_ANIMPOSTFX_SET_STRENGTH(func_70(iParam0), 1f);
	return;
}

int func_124(Any* panParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x36CD Signature - 22 06 0D
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

void func_125(var uParam0, BOOL bParam1) // Position - 0x36F9 Signature - 22 02 0A
{
	Ped pedFromIndexedItem;
	Hash entityModel;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int i;

	flag = func_67(uParam0) == 2;
	flag2 = false;
	GRAPHICS::_SET_PHOTO_SELF_STAT(flag);

	if (bParam1)
	{
		func_212();
		func_213();
	}

	func_214();
	flag3 = false;

	if (func_113(&pedFromIndexedItem))
	{
		flag3 = func_117(pedFromIndexedItem, true);
	
		if (ITEMSET::IS_ITEMSET_VALID(Global_1300385.f_1) && !flag3)
			func_202(pedFromIndexedItem, Global_1300385.f_1);
	}

	if (ENTITY::DOES_ENTITY_EXIST(pedFromIndexedItem) && !flag3)
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedFromIndexedItem);
	
		if (entityModel != uParam0->f_73)
		{
			flag2 = true;
			uParam0->f_73 = entityModel;
		}
	}
	else if (ITEMSET::IS_ITEMSET_VALID(Global_1300385.f_1) && ITEMSET::GET_ITEMSET_SIZE(Global_1300385.f_1) > 0)
	{
		i = 0;
	
		for (i = 0; i <= ITEMSET::GET_ITEMSET_SIZE(Global_1300385.f_1) - 1; i = i + 1)
		{
			pedFromIndexedItem = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, Global_1300385.f_1));
			entityModel = ENTITY::GET_ENTITY_MODEL(pedFromIndexedItem);
		
			if (entityModel != uParam0->f_73 || DECORATOR::DECOR_EXIST_ON(pedFromIndexedItem, func_200()) && DECORATOR::DECOR_GET_BOOL(pedFromIndexedItem, func_200()))
			{
				flag2 = true;
				uParam0->f_73 = entityModel;
			}
		}
	}

	if (flag2)
		STATS::STAT_PHOTOGRAPH_TAKEN(Global_1300385.f_1);

	TELEMETRY::_TELEMETRY_PHOTO_CAM(365468875, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(uParam0->f_28)), uParam0->f_27, flag, 0, func_216(uParam0), entityModel, func_218(func_217(0)), PED::IS_PED_ON_MOUNT(Global_33));

	if (bParam1)
	{
		uParam0->f_25 = uParam0->f_25 + 1;
		func_98(uParam0);
	}

	func_219(&(uParam0->f_61));
	return;
}

void func_126(var uParam0, int iParam1) // Position - 0x3873 Signature - 22 02 04 00 00 66 01 66 00 6C 3F
{
	uParam0->f_63 = iParam1;
	return;
}

void func_127() // Position - 0x3881 Signature - 22 00 02 00 00 5D A1 D7 13 09 39 F1
{
	func_73(&Global_1300385, 1);
	return;
}

void func_128(var uParam0) // Position - 0x3892 Signature - 22 01 03 00 00 66 00 76 2F
{
	if (*uParam0 >= 0)
	{
		AUDIO::_STOP_SOUND_WITH_ID(*uParam0);
		*uParam0 = -1;
	}

	return;
}

void func_129(char* sParam0) // Position - 0x38AC Signature - 22 01 03 00 00 66 00 03 04
{
	GRAPHICS::_ANIMPOSTFX_SET_TO_UNLOAD(sParam0);
	return;
}

void func_130(char* sParam0) // Position - 0x38BA Signature - 22 01 03 00 00 66 00 03 05 00 C2 8B 06 00 66 00 03 04 00
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sParam0))
		GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(sParam0);

	return;
}

void func_131(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x38D1 Signature - 22 03 06 00 00 66 01
{
	int num;

	if (bParam1 && !func_45(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_121(*uParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_220(num);
	*uParam0 = 0;
	return;
}

void func_132(var uParam0) // Position - 0x3925 Signature - 22 01 03 00 00 66 00 27 3A
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_58))
		OBJECT::DELETE_OBJECT(&(uParam0->f_58));

	return;
}

void func_133(BOOL bParam0) // Position - 0x3940 Signature - 22 01 03 00 00 09
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
	return;
}

BOOL func_134(Hash hParam0, int iParam1) // Position - 0x3950 Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 25
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_135(Hash hParam0) // Position - 0x396A Signature - 22 01 0A 00 00 66 00 2F 39 50 39 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 62 05 8B 04 00 2F 50 01 01 4B 03 27 02
{
	var unk;

	if (!func_134(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_2;
}

BOOL func_136(Hash hParam0, int iParam1) // Position - 0x3995 Signature - 22 02 16
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_134(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_221(hParam0, iParam1);
	unk.f_9 = -1591664384;

	if (func_222("ALL WEAPONS", &num, &num2, -1591664384, false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_223(&unk, i, num, num2))
			{
			}
			else if (!func_224(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_225(num);
				return true;
			}
		}
	
		func_225(num);
	}

	return false;
}

BOOL func_137(Hash hParam0) // Position - 0x3A3D Signature - 22 01 06 00 00 66
{
	int num;
	int num2;
	int num3;

	if (!func_134(hParam0, 0))
		return false;

	num = func_226(hParam0);

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

	num2 = func_227(hParam0);

	if (!(num2 == 0))
	{
		num3 = func_228(&(Global_17418.f_55.f_664.f_1354.f_5), num2);
	
		if (num3 == -1)
			return true;
	}

	num2 = func_229(hParam0);
	num3 = func_228(&(Global_17418.f_55.f_664.f_1354.f_5), num2);

	if (num3 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num3 /*17*/];
}

int func_138(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3AF9 Signature - 22 04 0D
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_134(hParam0, 0))
		return 0;

	num = func_135(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_221(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_230(hParam0, false);
	}

	if (func_231(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_232(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_233(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_232(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_139(int iParam0) // Position - 0x3BBB Signature - 22 01 03 00 00 66 00 08 20 6A 8B 06 00 66 00 6D B4 35 69 50
{
	return iParam0 > -1 && iParam0 < 180;
}

int func_140(int iParam0) // Position - 0x3BD1 Signature - 22 01 03 00 00 66 00 08 20 6A 8B 06 00 66 00 6D B4 35 69 05
{
	if (!(iParam0 > -1 && iParam0 < 180))
		return -1;

	switch (iParam0)
	{
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 157:
		case 161:
		case 166:
		case 170:
		case 174:
			return 6;
	
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
	
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
	
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
		case 148:
			return 15;
	
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
	
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 156:
		case 160:
		case 165:
		case 169:
		case 173:
			return 3;
	
		case 8:
		case 43:
		case 78:
			return 8;
	
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
	
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
	
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
	
		case 12:
		case 60:
			return 18;
	
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
	
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
	
		case 19:
		case 53:
			return 7;
	
		case 20:
			return 33;
	
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
	
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
	
		case 26:
			return 14;
	
		case 45:
		case 83:
		case 155:
		case 159:
		case 164:
		case 168:
		case 172:
			return 0;
	
		case 61:
		case 62:
		case 89:
			return 36;
	
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
	
		case 70:
		case 90:
			return 17;
	
		case 109:
		case 113:
		case 114:
			return 35;
	
		case 119:
			return 11;
	
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
	
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
	
		case 133:
			return 27;
	
		case 134:
			return 37;
	
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
	
		case 149:
		case 150:
		case 151:
			return 39;
	
		case 152:
			return 34;
	
		case 153:
			return 28;
	
		case 154:
			return 29;
	
		case 158:
		case 162:
		case 167:
		case 171:
		case 175:
			return 23;
	
		case 163:
			return 5;
	
		case 176:
			return 19;
	
		case 177:
			return 20;
	
		case 178:
			return 21;
	
		case 179:
			return 20;
	
		default:
		
	}

	return -1;
}

void func_141(int iParam0, int iParam1) // Position - 0x4500 Signature - 22 02 04 00 00 66 00 76 66 01
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_142(int iParam0, int iParam1) // Position - 0x4511 Signature - 22 02 04 00 00 66 00 76 66 00
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_143(int iParam0) // Position - 0x4526 Signature - 22 01 03 00 00 5D 27
{
	Global_1902887.f_302 = Global_1902887.f_302 || iParam0;
	return;
}

var func_144(var uParam0) // Position - 0x453F Signature - 22 01 03 00 00 66 00 27 36
{
	return uParam0->f_54;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x454B Signature - 22 01 03 00 00 66 00 3C 0E 00 00 00 00 00 51 00 01 00 00 00 52
{
	switch (iParam0)
	{
		case 0:
			return "CAM_TAKE_PHOTO";
	
		case 1:
			return "CAM_GALLERY";
	
		case 2:
			return "CAM_HANDHELD";
	
		case 3:
			return "CAM_SELFIE";
	
		case 4:
			return "CAM_INTENSITY";
	
		case 5:
			return "CAM_FILTER";
	
		case 6:
			return "CAM_ZOOM";
	
		case 7:
			return "CAM_ZOOM";
	
		case 8:
			return "CAM_ZOOM";
	
		case 9:
			return "CAM_EXPRESSIONS";
	
		case 10:
			return "CAM_POSES";
	
		case 11:
			return "CAM_BACK";
	
		case 12:
			return "CAM_PUT_AWAY";
	
		case 13:
			return "ADV_CAM_FILTERS";
	
		default:
		
	}

	return "";
}

Hash func_146(int iParam0, BOOL bParam1) // Position - 0x4614 Signature - 22 02 04 00 00 66 00 3C
{
	switch (iParam0)
	{
		case 0:
			return -1201017346;
	
		case 1:
			return joaat("INPUT_CAMERA_CONTEXT_GALLERY");
	
		case 2:
			return joaat("INPUT_CAMERA_HANDHELD_USE");
	
		case 3:
			return joaat("INPUT_CAMERA_SELFIE");
	
		case 4:
			if (bParam1)
				return joaat("INPUT_CAMERA_EXPRESSION_PREV");
			else
				return joaat("INPUT_CAMERA_EXPRESSION_NEXT");
			break;
	
		case 5:
			if (bParam1)
				return joaat("INPUT_CAMERA_POSE_NEXT");
			else
				return joaat("INPUT_CAMERA_POSE_PREV");
			break;
	
		case 6:
			if (bParam1)
				return -1089155097;
			else
				return -310714049;
			break;
	
		case 7:
			return -1089155097;
	
		case 8:
			return -310714049;
	
		case 9:
			if (bParam1)
				return joaat("INPUT_CAMERA_EXPRESSION_NEXT");
			else
				return joaat("INPUT_CAMERA_EXPRESSION_PREV");
			break;
	
		case 10:
			if (bParam1)
				return joaat("INPUT_CAMERA_POSE_NEXT");
			else
				return joaat("INPUT_CAMERA_POSE_PREV");
			break;
	
		case 11:
			return joaat("INPUT_CAMERA_BACK");
	
		case 12:
			return joaat("INPUT_CAMERA_PUT_AWAY");
	
		case 13:
			return -711736799;
	}

	return joaat("INPUT_CAMERA_TAKE_PHOTO");
}

int func_147(char* sParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x474C Signature - 22 04 08
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_234(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_235(num, hParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824, 0, 1065353216, false, false, hParam2, joaat("SHORT_TIMED_EVENT"), 0);
		return num;
	}

	return 0;
}

int func_148(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, Hash hParam10, BOOL bParam11) // Position - 0x47DA Signature - 22 0C
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_234(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_235(num, hParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, false, false, 0, hParam10, bParam11);
		return num;
	}

	return 0;
}

void func_149(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x4863 Signature - 22 04 07 00 00 66 03
{
	int num;

	if (bParam3 && !func_45(iParam0))
		return;

	num = func_121(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_GROUP(Global_1951910[num /*23*/].f_3, iParam1, iParam2);
	return;
}

BOOL func_150(int iParam0, int iParam1) // Position - 0x48AE Signature - 22 02 04 00 00 66 00 87
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_151(int iParam0) // Position - 0x48C6 Signature - 22 01 03 00 00 66 00 42
{
	if (func_153(iParam0, 4))
		return false;

	return true;
}

BOOL func_152(int iParam0) // Position - 0x48DD Signature - 22 01 07 00 00 66 00 5D
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

BOOL func_153(int iParam0, int iParam1) // Position - 0x49A9 Signature - 22 02 04 00 00 66 00 5D 12
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_154(int iParam0) // Position - 0x49C2 Signature - 22 01 03 00 00 5D 00
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_155() // Position - 0x49D5 Signature - 22 00 02 00 00 39 F9
{
	if (!func_236())
		return false;

	return Global_1904402.f_8873;
}

BOOL func_156(int iParam0) // Position - 0x49F0 Signature - 22 01 03 00 00 66 00 3C 27 00 00 00 00 00 E7 00 01 00 00 00 E5
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			return true;
	
		case 2:
			return true;
	
		case 3:
			return true;
	
		case 4:
			return true;
	
		case 5:
			return true;
	
		case 6:
			return true;
	
		case 7:
			return true;
	
		case 8:
			return true;
	
		case 9:
			return true;
	
		case 10:
			return true;
	
		case 11:
			return UNLOCK::UNLOCK_IS_VISIBLE(-951341587);
	
		case 12:
			return UNLOCK::UNLOCK_IS_VISIBLE(355797628);
	
		case 13:
			return UNLOCK::UNLOCK_IS_VISIBLE(1885541620);
	
		case 14:
			return UNLOCK::UNLOCK_IS_VISIBLE(-1587645914);
	
		case 15:
			return UNLOCK::UNLOCK_IS_VISIBLE(-1325269752);
	
		case 16:
			return UNLOCK::UNLOCK_IS_VISIBLE(65073703);
	
		case 17:
			return UNLOCK::UNLOCK_IS_VISIBLE(830543521);
	
		case 18:
			return UNLOCK::UNLOCK_IS_VISIBLE(299289203);
	
		case 19:
			return UNLOCK::UNLOCK_IS_VISIBLE(-587023018);
	
		case 20:
			return UNLOCK::UNLOCK_IS_VISIBLE(-781188238);
	
		case 21:
			return UNLOCK::UNLOCK_IS_VISIBLE(-1976306104);
	
		case 22:
			return UNLOCK::UNLOCK_IS_VISIBLE(-779958017);
	
		case 23:
			return UNLOCK::UNLOCK_IS_VISIBLE(-1877599955);
	
		case 24:
			return UNLOCK::UNLOCK_IS_VISIBLE(1358340808);
	
		case 25:
			return UNLOCK::UNLOCK_IS_VISIBLE(-252816221);
	
		case 26:
			return UNLOCK::UNLOCK_IS_VISIBLE(-320798538);
	
		case 27:
			return UNLOCK::UNLOCK_IS_VISIBLE(-1123146868);
	
		case 28:
			return UNLOCK::UNLOCK_IS_VISIBLE(-677732579);
	
		case 29:
			return UNLOCK::UNLOCK_IS_VISIBLE(1394960149);
	
		case 30:
			return UNLOCK::UNLOCK_IS_VISIBLE(-2076331328);
	
		case 31:
			return UNLOCK::UNLOCK_IS_VISIBLE(-599019401);
	
		case 32:
			return UNLOCK::UNLOCK_IS_VISIBLE(-1985431160);
	
		case 33:
			return UNLOCK::UNLOCK_IS_VISIBLE(1151765962);
	
		case 34:
			return UNLOCK::UNLOCK_IS_VISIBLE(1449882070);
	
		case 35:
			return UNLOCK::UNLOCK_IS_VISIBLE(464775907);
	
		case 36:
			return UNLOCK::UNLOCK_IS_VISIBLE(278859029);
	
		case 37:
			return UNLOCK::UNLOCK_IS_VISIBLE(-1223981588);
	
		case 38:
			return UNLOCK::UNLOCK_IS_VISIBLE(1422895126);
	
		default:
		
	}

	return false;
}

void func_157(char* sParam0) // Position - 0x4C67 Signature - 22 01 03 00 00 66 00 03 05 01 11 05 8B 06 00 66 00 03 04 01 1B 50
{
	if (!GRAPHICS::_ANIMPOSTFX_HAS_LOADED(sParam0))
		GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX(sParam0);

	return;
}

BOOL func_158(Ped pedParam0, BOOL bParam1) // Position - 0x4C7F Signature - 22 02 05 00 00 66 00 03
{
	Interior interiorFromEntity;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0) || !bParam1)
		{
			interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(pedParam0);
		
			if (INTERIOR::IS_VALID_INTERIOR(interiorFromEntity))
			{
				if (func_237(interiorFromEntity) || func_238(interiorFromEntity))
					return false;
			
				return true;
			}
		}
	}

	return false;
}

BOOL func_159(Ped pedParam0, Ped pedParam1) // Position - 0x4CD2 Signature - 22 02 04 00 00 66 00 03 05 00 2C
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (PED::IS_PED_IN_COMBAT(pedParam0, pedParam1))
			return true;

	return false;
}

void func_160(int iParam0, int iParam1) // Position - 0x4CF4 Signature - 22 02 04 00 00 66 00 2F 8A 03 00 50 02 00 66 00 5D A6 C8 1D 63 17 27 01 66 00
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 - Global_1951910[iParam0 /*23*/].f_1 && iParam1;
	return;
}

void func_161(int iParam0, BOOL bParam1) // Position - 0x4D27 Signature - 22 02 04 00 00 66 00 5D A6 C8 1D 63 17 27 03 03 05 00 AE 8B 3F
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		if (Global_1951910[iParam0 /*23*/].f_5 == 5 && !func_234(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_162(int iParam0, BOOL bParam1) // Position - 0x4D7F Signature - 22 02 04 00 00 66 00 5D A6 C8 1D 63 17 27 03 03 05 00 AE 8B 10
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_163(int iParam0, int iParam1) // Position - 0x4DA8 Signature - 22 02 04 00 00 66 00 2F 8A 03 00 50 02 00 66 00 5D A6 C8 1D 63 17 27 01 66 01
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 || iParam1;
	return;
}

void func_164(var uParam0) // Position - 0x4DD0 Signature - 22 01 0C
{
	var unk;
	var unk9;

	TEXT_LABEL_ASSIGN_STRING(&unk, MISC::VAR_STRING(2, "CAM_PM_HUD_FILTSTYLE"), 64);
	TEXT_LABEL_APPEND_STRING(&unk, ": ", 64);
	unk9 = uParam0->f_28;
	TEXT_LABEL_APPEND_STRING(&unk, MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(unk9)), 64);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_23, &unk);
	return;
}

void func_165(var uParam0) // Position - 0x4E0C Signature - 22 01 0B 00 00 66
{
	var unk;

	if (uParam0->f_28 > 0)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, MISC::VAR_STRING(2, "CAM_PM_HUD_FILTINTEN"), 64);
		TEXT_LABEL_APPEND_STRING(&unk, ": ", 64);
		TEXT_LABEL_APPEND_STRING(&unk, func_239(BUILTIN::CEIL(uParam0->f_27 * 100f)), 64);
		TEXT_LABEL_APPEND_STRING(&unk, "%", 64);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_24, &unk);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_24, " ");
	}

	return;
}

int func_166(var uParam0) // Position - 0x4E67 Signature - 22 01 0D
{
	float radius;
	int hit;
	var endCoords;
	var surfaceNormal;
	var entityHit;
	int shapeTestResult;

	radius = 0.17f;
	hit = 0;

	switch (uParam0->f_69)
	{
		case 0:
			uParam0->f_71 = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(uParam0->f_46 - { 0.2f, 0f, 0f }, uParam0->f_46 + { 0.2f, 0f, 0f }, radius, 3167, 0, 4);
			uParam0->f_69 = 1;
			break;
	
		case 1:
			shapeTestResult = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_71, &hit, &endCoords, &surfaceNormal, &entityHit);
			hit > 0;
		
			if (shapeTestResult == 1)
				break;
		
			uParam0->f_69 = 0;
			uParam0->f_72 = hit != 0;
			return uParam0->f_72;
	}

	return 0;
}

BOOL func_167(var uParam0) // Position - 0x4EF8 Signature - 22 01 03 00 00 70 21 00 03
{
	if (PED::IS_PED_FALLING(Global_33) || PED::_IS_PED_SLIDING(Global_33))
		return true;

	if (func_67(uParam0) == 2 && func_171(uParam0) >= 1 && func_171(uParam0) <= 5)
		return true;

	return false;
}

void func_168(var uParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x4F45 Signature - 22 04 06 00 00 66 00 66 02
{
	if (func_6(uParam0, iParam2) || func_41(uParam0) || iParam1 == 3 && func_94(Global_33))
	{
		if (func_170(uParam0->f_5[iParam1], false))
		{
			func_95(uParam0->f_5[iParam1], false, true, true);
		
			if (bParam3)
				func_96(uParam0->f_5[iParam1], false, true);
		}
	}
	else if (!func_170(uParam0->f_5[iParam1], false))
	{
		func_95(uParam0->f_5[iParam1], true, true, true);
		func_96(uParam0->f_5[iParam1], true, true);
	}

	return;
}

void func_169(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x4FDD Signature - 22 04 06 00 00 66 00 66 03
{
	if (func_6(uParam0, iParam3))
	{
		if (func_170(uParam0->f_5[iParam1], false))
		{
			func_95(uParam0->f_5[iParam1], false, true, true);
			func_96(uParam0->f_5[iParam1], false, true);
		}
	}
	else if (func_6(uParam0, iParam2) || func_41(uParam0))
	{
		if (func_170(uParam0->f_5[iParam1], false))
			func_95(uParam0->f_5[iParam1], false, true, true);
	}
	else if (!func_170(uParam0->f_5[iParam1], false))
	{
		func_95(uParam0->f_5[iParam1], true, true, true);
		func_96(uParam0->f_5[iParam1], true, true);
	}

	return;
}

BOOL func_170(int iParam0, BOOL bParam1) // Position - 0x5087 Signature - 22 02 04 00 00 66 01 6A
{
	if (bParam1 && !func_45(iParam0))
		return false;

	return !func_234(iParam0, 4);
}

int func_171(var uParam0) // Position - 0x50AC Signature - 22 01 03 00 00 66 00 27 42
{
	return uParam0->f_66;
}

int func_172(var uParam0) // Position - 0x50B8 Signature - 22 01 03 00 00 66 00 27 43
{
	return uParam0->f_67;
}

void func_173(var uParam0, int iParam1) // Position - 0x50C4 Signature - 22 02 04 00 00 66 01 66 00 6C 43
{
	uParam0->f_67 = iParam1;
	return;
}

void func_174() // Position - 0x50D2 Signature - 22 00 02 00 00 6D 20 39 4A
{
	func_9(32);
	func_12(64);
	return;
}

void func_175(var uParam0) // Position - 0x50E6 Signature - 22 01 03 00 00 4D
{
	if (func_45(uParam0->f_5[6]) && func_76(uParam0->f_5[6], true))
	{
		if (func_240(uParam0->f_5[6], 1, true) && func_241(uParam0) < 3)
		{
			func_242(uParam0);
			func_40(10);
		
			if (func_241(uParam0) >= 3)
			{
				func_95(uParam0->f_5[6], false, true, true);
				func_96(uParam0->f_5[6], false, true);
				func_95(uParam0->f_5[8], true, true, true);
				func_96(uParam0->f_5[8], true, true);
			}
		}
		else if (func_240(uParam0->f_5[6], 0, true) && func_241(uParam0) > 1)
		{
			func_243(uParam0);
			func_40(11);
		
			if (func_241(uParam0) <= 1)
			{
				func_95(uParam0->f_5[6], false, true, true);
				func_96(uParam0->f_5[6], false, true);
				func_95(uParam0->f_5[7], true, true, true);
				func_96(uParam0->f_5[7], true, true);
			}
		}
	}
	else if (func_45(uParam0->f_5[7]) && func_76(uParam0->f_5[7], true))
	{
		if (func_244(uParam0->f_5[7], true))
		{
			func_242(uParam0);
			func_40(10);
			func_95(uParam0->f_5[7], false, true, true);
			func_96(uParam0->f_5[7], false, true);
			func_95(uParam0->f_5[6], true, true, true);
			func_96(uParam0->f_5[6], true, true);
		}
	}
	else if (func_45(uParam0->f_5[8]) && func_76(uParam0->f_5[8], true))
	{
		if (func_244(uParam0->f_5[8], true))
		{
			func_243(uParam0);
			func_40(11);
			func_95(uParam0->f_5[8], false, true, true);
			func_96(uParam0->f_5[8], false, true);
			func_95(uParam0->f_5[6], true, true, true);
			func_96(uParam0->f_5[6], true, true);
		}
	}

	return;
}

void func_176(var uParam0) // Position - 0x52D3 Signature - 22 01 05 00 00 62 66 00 80 05 17 01 39 37 17 00 6A 8B 0E 00 62 66 00 80 05 17 01 09
{
	int num;
	int num2;

	if (func_45(uParam0->f_5[5]) && func_240(uParam0->f_5[5], 1, true))
	{
		num = uParam0->f_29;
		num2 = uParam0->f_30;
		uParam0->f_29 = uParam0->f_28;
		uParam0->f_28 = func_90(uParam0->f_29, true);
		uParam0->f_30 = func_90(uParam0->f_28, true);
		func_7(uParam0->f_29);
	
		if (uParam0->f_28 > 0)
		{
			func_10(uParam0->f_28);
			GRAPHICS::_ANIMPOSTFX_SET_STRENGTH(func_68(uParam0->f_28), uParam0->f_27);
		
			if (func_6(uParam0, 4))
				func_81(uParam0, 4);
		}
		else if (uParam0->f_28 == 0)
		{
			if (!func_6(uParam0, 4))
				func_82(uParam0, 4);
		}
	
		func_40(18);
		func_91(uParam0->f_30);
		func_98(uParam0);
	
		if (uParam0->f_28 == num2)
			func_51(num);
		else if (uParam0->f_28 == num)
			func_51(num2);
	}

	return;
}

void func_177(var uParam0) // Position - 0x53B5 Signature - 22 01 05 00 00 62 66 00 80 05 17 01 39 37 17 00 6A 8B 0E 00 62 66 00 80 05 17 01 2F
{
	int num;
	int num2;

	if (func_45(uParam0->f_5[5]) && func_240(uParam0->f_5[5], 0, true))
	{
		num = uParam0->f_29;
		num2 = uParam0->f_30;
		uParam0->f_29 = uParam0->f_28;
		uParam0->f_28 = func_90(uParam0->f_29, false);
		uParam0->f_30 = func_90(uParam0->f_28, false);
		func_7(uParam0->f_29);
	
		if (uParam0->f_28 > 0)
		{
			func_10(uParam0->f_28);
			GRAPHICS::_ANIMPOSTFX_SET_STRENGTH(func_68(uParam0->f_28), uParam0->f_27);
		
			if (func_6(uParam0, 4))
				func_81(uParam0, 4);
		}
		else if (uParam0->f_28 == 0)
		{
			if (!func_6(uParam0, 4))
				func_82(uParam0, 4);
		}
	
		func_40(18);
		func_91(uParam0->f_30);
		func_98(uParam0);
	
		if (uParam0->f_28 == num2)
			func_51(num);
		else if (uParam0->f_28 == num)
			func_51(num2);
	}

	return;
}

void func_178(var uParam0) // Position - 0x5497 Signature - 22 01 03 00 00 42 66 00 80 05 17 01 39 37 17 00 6A 8B 0E 00 42 66 00 80 05 17 01 09
{
	if (func_45(uParam0->f_5[4]) && func_240(uParam0->f_5[4], 1, true))
	{
		if (uParam0->f_27 < 1f)
		{
			func_40(19);
			uParam0->f_27 = uParam0->f_27 + 0.1f;
			GRAPHICS::_ANIMPOSTFX_SET_STRENGTH(func_68(uParam0->f_28), uParam0->f_27);
		}
	
		func_98(uParam0);
	}

	return;
}

void func_179(var uParam0) // Position - 0x54F3 Signature - 22 01 03 00 00 42 66 00 80 05 17 01 39 37 17 00 6A 8B 0E 00 42 66 00 80 05 17 01 2F
{
	if (func_45(uParam0->f_5[4]) && func_240(uParam0->f_5[4], 0, true))
	{
		if (uParam0->f_27 > 0.1f)
		{
			func_40(19);
			uParam0->f_27 = uParam0->f_27 - 0.1f;
			GRAPHICS::_ANIMPOSTFX_SET_STRENGTH(func_68(uParam0->f_28), uParam0->f_27);
		}
	
		func_98(uParam0);
	}

	return;
}

BOOL func_180() // Position - 0x5553 Signature - 22 00 02 00 00 03 01 00 C8
{
	if (CAM::_IS_IN_CINEMATIC_MODE() || CAM::IS_CINEMATIC_CAM_RENDERING())
		return 1;

	return 0;
}

BOOL func_181() // Position - 0x5571 Signature - 22 00 02 00 00 70 21 00 03
{
	if (PED::_IS_PED_SLIDING(Global_33))
		return true;

	return false;
}

float func_182() // Position - 0x5588 Signature - 22 00 04
{
	float num;
	float num2;

	num = (Global_1940026.f_15.f_1 - func_245()) * (1f / (1f - func_245()));
	num2 = (Global_1940026.f_15.f_7 * num) + (Global_1940026.f_15.f_6 * (1f - num));
	return num2 * Global_1940026.f_15.f_3;
}

void func_183() // Position - 0x55CE Signature - 22 00 02 00 00 6D 40 39 80
{
	func_12(64);
	func_12(32);
	return;
}

int func_184(var uParam0) // Position - 0x55E2 Signature - 22 01 03 00 00 66 00 27 40
{
	return uParam0->f_64;
}

void func_185(var uParam0, int iParam1) // Position - 0x55EE Signature - 22 02 04 00 00 66 01 66 00 6C 44
{
	uParam0->f_68 = iParam1;
	return;
}

void func_186(var uParam0, int iParam1) // Position - 0x55FC Signature - 22 02 04 00 00 66 01 66 00 6C 40
{
	uParam0->f_64 = iParam1;
	return;
}

BOOL func_187(var uParam0) // Position - 0x560A Signature - 22 01 14
{
	Vector3 entityCoords;
	float entityHeading;
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	float groundZ;
	var groundZ2;
	BOOL flag;
	var entityRotation;
	Vector3 vector;
	float fov;

	if (CAM::DOES_CAM_EXIST(uParam0->f_35))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_35, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_35, false);
	}

	entityCoords = { ENTITY::GET_ENTITY_COORDS(Global_33, true, false) };
	entityHeading = ENTITY::GET_ENTITY_HEADING(Global_33);
	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(entityCoords, entityHeading, 0f, 4f, 0f) };

	if (func_158(Global_33, true))
		offsetFromCoordAndHeadingInWorldCoords.f_2 = offsetFromCoordAndHeadingInWorldCoords.f_2 + 1f;
	else
		offsetFromCoordAndHeadingInWorldCoords.f_2 = offsetFromCoordAndHeadingInWorldCoords.f_2 + 50f;

	flag = false;
	MISC::GET_GROUND_Z_FOR_3D_COORD(offsetFromCoordAndHeadingInWorldCoords, &groundZ, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(entityCoords, &groundZ2, false);

	if (entityCoords.f_2 > groundZ)
		if (entityCoords.f_2 - groundZ > 2f)
			flag = true;
	else if (groundZ - entityCoords.f_2 > 2f)
		flag = true;

	entityRotation = { ENTITY::GET_ENTITY_ROTATION(Global_33, 2) };
	vector = { entityRotation, entityRotation.f_1, entityRotation.f_2 - 180f };
	fov = 50f;

	if (!flag)
	{
		uParam0->f_49 = { entityCoords, entityCoords.f_1, entityCoords.f_2 - 1f };
		uParam0->f_52 = entityHeading;
		uParam0->f_46 = { offsetFromCoordAndHeadingInWorldCoords, offsetFromCoordAndHeadingInWorldCoords.f_1, groundZ + 1f };
	}

	uParam0->f_88 = vector;
	uParam0->f_87 = vector.f_2;
	uParam0->f_53 = entityRotation.f_2;

	if (!CAM::DOES_CAM_EXIST(uParam0->f_35))
		uParam0->f_35 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", uParam0->f_46, vector, fov, true, 2);

	uParam0->f_36 = 25f;
	uParam0->f_36.f_1 = 2f;
	uParam0->f_36.f_2 = 128f;
	uParam0->f_36.f_3 = 30f;
	uParam0->f_36.f_4 = 30f;
	uParam0->f_36.f_5 = 90f;
	uParam0->f_36.f_6 = 1;
	uParam0->f_36.f_7 = 0;
	uParam0->f_36.f_8 = 1;
	uParam0->f_36.f_9 = 1;
	uParam0->f_92 = { vector };
	uParam0->f_95 = 0f;
	uParam0->f_96 = 0.5f;
	uParam0->f_92 = uParam0->f_92 + 1f;
	CAM::_0xE4B7945EF4F1BFB2(uParam0->f_35, &(uParam0->f_36));
	CAM::_PAUSE_CAMERA_FOCUS(uParam0->f_35, false);
	CAM::ALLOW_MOTION_BLUR_DECAY(uParam0->f_35, false);
	CAM::SET_CAM_ACTIVE(uParam0->f_35, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	func_40(14);
	WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_33, false, false, true, false);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_33, false, false);
	func_246(uParam0);
	return true;
}

void func_188(var uParam0) // Position - 0x5838 Signature - 22 01 04 00 00 6D 0D 66 00 80 05 17 01 39
{
	int num;

	num = func_121(uParam0->f_5[13]);
	HUD::_UI_PROMPT_SET_TEXT(Global_1951910[num /*23*/].f_3, "ADV_CAM_POSES");
	func_82(uParam0, 4096);
	func_82(uParam0, 8192);
	func_81(uParam0, 16384);
	func_81(uParam0, 32768);

	if (uParam0->f_28 == 0)
		func_82(uParam0, 4);

	func_96(uParam0->f_5[4], true, true);
	func_185(uParam0, 1);
	return;
}

void func_189() // Position - 0x58A8 Signature - 22 00 02 00 00 6D 40 39 4A
{
	func_9(64);
	func_12(32);
	return;
}

void func_190(var uParam0) // Position - 0x58BC Signature - 22 01 22
{
	var args;
	var unk25;
	var unk28;

	args.f_4 = -1;
	args.f_8 = 2;
	args.f_9 = 1;
	args.f_10 = 1;
	args.f_11 = 1;
	args.f_13 = 1;
	args.f_14 = 2;
	args.f_15 = 2;
	args.f_16 = 3;
	args.f_19 = 3;
	args.f_20 = 1;
	args.f_21 = 3;
	args.f_22 = 3;
	args.f_3 = 0;
	args.f_4 = 21030;
	unk25 = { func_248(uParam0->f_46 - func_247(PLAYER::GET_PLAYER_INDEX())) };
	unk28 = { func_247(PLAYER::GET_PLAYER_INDEX()) + (unk25 * { 2f, 2f, 2f }) };
	args = { unk28 };
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(Global_33, &args);
	return;
}

void func_191(var uParam0) // Position - 0x595D Signature - 22 01 03 00 00 66 00 39 06
{
	func_249(uParam0);
	func_250(uParam0);

	if (uParam0->f_78 > 16)
	{
		if (uParam0->f_95 - 0.07f > -10f)
		{
			if (uParam0->f_78 > 100)
			{
				uParam0->f_92.f_2 = uParam0->f_92.f_2 - 0.6f;
				uParam0->f_95 = uParam0->f_95 - (0.07f * 3f);
			}
			else
			{
				uParam0->f_92.f_2 = uParam0->f_92.f_2 - 0.2f;
				uParam0->f_95 = uParam0->f_95 - 0.07f;
			}
		}
	}

	if (uParam0->f_78 < -16)
	{
		if (uParam0->f_95 + 0.07f < 10f)
		{
			if (uParam0->f_78 < -100)
			{
				uParam0->f_92.f_2 = uParam0->f_92.f_2 + 0.6f;
				uParam0->f_95 = uParam0->f_95 + (0.07f * 3f);
			}
			else
			{
				uParam0->f_92.f_2 = uParam0->f_92.f_2 + 0.2f;
				uParam0->f_95 = uParam0->f_95 + 0.07f;
			}
		}
	}

	if (uParam0->f_79 > 16)
	{
		if (uParam0->f_96 - 0.07f > -10f)
		{
			if (uParam0->f_79 > 100)
			{
				uParam0->f_92 = uParam0->f_92 - 0.6f;
				uParam0->f_96 = uParam0->f_96 - (0.07f * 3f);
			}
			else
			{
				uParam0->f_92 = uParam0->f_92 - 0.2f;
				uParam0->f_96 = uParam0->f_96 - 0.07f;
			}
		}
	}

	if (uParam0->f_79 < -16)
	{
		if (uParam0->f_96 + 0.07f < 10f)
		{
			if (uParam0->f_79 < -100)
			{
				uParam0->f_92 = uParam0->f_92 + 0.6f;
				uParam0->f_96 = uParam0->f_96 + (0.07f * 3f);
			}
			else
			{
				uParam0->f_92 = uParam0->f_92 + 0.2f;
				uParam0->f_96 = uParam0->f_96 + 0.07f;
			}
		}
	}

	CAM::SET_CAM_PARAMS(uParam0->f_35, uParam0->f_46, uParam0->f_92, 50f, 0, 1, 1, 2, 0, 0);
	return;
}

void func_192(var uParam0) // Position - 0x5B2C Signature - 22 01 03 00 00 6D 09
{
	if (func_240(uParam0->f_5[9], 0, true))
	{
		uParam0->f_31 = uParam0->f_31 + 1;
	
		if (uParam0->f_31 >= 8)
			uParam0->f_31 = 0;
	
		func_251(uParam0);
	}

	if (func_240(uParam0->f_5[9], 1, true))
	{
		uParam0->f_31 = uParam0->f_31 - 1;
	
		if (uParam0->f_31 < 0)
			uParam0->f_31 = 8 - 1;
	
		func_251(uParam0);
	}

	return;
}

void func_193(var uParam0) // Position - 0x5B94 Signature - 22 01 03 00 00 66 00 39 AC
{
	switch (func_171(uParam0))
	{
		case 0:
			if (func_240(uParam0->f_5[10], 0, true))
			{
				uParam0->f_32 = uParam0->f_32 + 1;
			
				if (uParam0->f_32 >= 4)
					uParam0->f_32 = 0;
			
				func_82(uParam0, 2);
				func_82(uParam0, 1);
				func_252(uParam0, 1);
			}
		
			if (func_240(uParam0->f_5[10], 1, true))
			{
				uParam0->f_32 = uParam0->f_32 - 1;
			
				if (uParam0->f_32 < 0)
					uParam0->f_32 = 4 - 1;
			
				func_82(uParam0, 2);
				func_82(uParam0, 1);
				func_82(uParam0, 128);
				func_252(uParam0, 1);
			}
			break;
	
		case 1:
			func_11(1);
			func_252(uParam0, 2);
			break;
	
		case 2:
			func_246(uParam0);
			func_24(uParam0);
			func_252(uParam0, 3);
			break;
	
		case 3:
			if (PED::IS_PED_USING_SCENARIO_HASH(Global_33, func_253(uParam0->f_32)) && func_85(uParam0) > 1500)
				func_252(uParam0, 4);
		
			if (func_85(uParam0) > 7000)
			{
				func_252(uParam0, 4);
				func_24(uParam0);
			}
			break;
	
		case 4:
			func_53(1);
			func_252(uParam0, 5);
			func_24(uParam0);
			break;
	
		case 5:
			if (TASK::_PED_IS_IN_SCENARIO_BASE(Global_33) || func_85(uParam0) > 7000)
			{
				func_81(uParam0, 2);
				func_81(uParam0, 1);
				func_81(uParam0, 128);
				func_252(uParam0, 0);
			}
			break;
	}

	return;
}

void func_194(var uParam0) // Position - 0x5D0B Signature - 22 01 04 00 00 6D 0D 66 00 80 05 17 01 09
{
	int num;

	if (func_39(uParam0->f_5[13], true))
	{
		num = func_121(uParam0->f_5[13]);
	
		switch (func_99(uParam0))
		{
			case 0:
				func_82(uParam0, 4096);
				func_82(uParam0, 8192);
				func_81(uParam0, 16384);
				func_81(uParam0, 32768);
			
				if (uParam0->f_28 == 0)
					func_82(uParam0, 4);
			
				func_96(uParam0->f_5[4], true, true);
				HUD::_UI_PROMPT_SET_TEXT(Global_1951910[num /*23*/].f_3, "ADV_CAM_POSES");
				func_185(uParam0, 1);
				break;
		
			case 1:
				func_82(uParam0, 16384);
				func_82(uParam0, 32768);
				func_81(uParam0, 4096);
				func_81(uParam0, 8192);
				func_95(uParam0->f_5[4], false, true, true);
				func_96(uParam0->f_5[4], false, true);
				HUD::_UI_PROMPT_SET_TEXT(Global_1951910[num /*23*/].f_3, "ADV_CAM_FILTERS");
				func_185(uParam0, 0);
				break;
		}
	}

	return;
}

void func_195(var uParam0) // Position - 0x5E02 Signature - 22 01 03 00 00 66 00 27 23 03 05 00 E1 8B 1E
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_35))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_35, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_35, false);
	}

	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	return;
}

void func_196() // Position - 0x5E47 Signature - 22 00 02 00 00 70 21 00 37
{
	if (func_254(Global_33, SCRIPT_TASK_PERFORM_SEQUENCE))
		TASK::CLEAR_PED_TASKS(Global_33, true, false);

	return;
}

float func_197() // Position - 0x5E67 Signature - 22 00 02 00 00 86 00 00 02
{
	return 130f;
}

float func_198(Ped pedParam0, Entity eParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5E74 Signature - 22 04 06 00 00 66 00 03
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(eParam1, false, false), bParam2);
}

void func_199(Ped pedParam0, ItemSet isParam1) // Position - 0x5EBC Signature - 22 02 04 00 00 66 01 03 05 00 F0 05 8B 03 00 50 02 00 66 00 03 05 00 7B 8B 13
{
	if (!ITEMSET::IS_ITEMSET_VALID(isParam1))
		return;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (ITEMSET::IS_IN_ITEMSET(pedParam0, isParam1))
			ITEMSET::REMOVE_FROM_ITEMSET(pedParam0, isParam1);

	return;
}

char* func_200() // Position - 0x5EED Signature - 22 00 02 00 00 25 EE
{
	return "proc_bounty_target";
}

BOOL func_201(Hash hParam0) // Position - 0x5EF9 Signature - 22 01 03 00 00 85 A1 D7 13 25
{
	if (func_58(Global_1300385, 4096))
	{
		switch (hParam0)
		{
			case joaat("a_c_chicken_01"):
			case joaat("a_c_elk_01"):
			case joaat("a_c_turkeywild_01"):
			case joaat("a_c_buck_01"):
			case joaat("a_c_alligator_01"):
			case joaat("a_c_armadillo_01"):
			case joaat("a_c_bighornram_01"):
			case joaat("a_c_possum_01"):
			case joaat("a_c_skunk_01"):
			case joaat("a_c_badger_01"):
			case joaat("a_c_wolf"):
			case joaat("a_c_bear_01"):
			case joaat("a_c_moose_01"):
			case joaat("a_c_goat_01"):
			case joaat("a_c_turtlesnapping_01"):
			case joaat("A_C_Cow"):
			case joaat("a_c_sheep_01"):
			case joaat("a_c_cougar_01"):
			case joaat("a_c_fox_01"):
			case joaat("a_c_gilamonster_01"):
			case joaat("a_c_coyote_01"):
			case joaat("a_c_ox_01"):
			case joaat("a_c_bearblack_01"):
			case joaat("a_c_beaver_01"):
			case joaat("a_c_horse_tennesseewalker_chestnut"):
			case joaat("a_c_dogamericanfoxhound_01"):
			case joaat("a_c_deer_01"):
			case joaat("a_c_raccoon_01"):
			case joaat("a_c_buffalo_01"):
			case joaat("a_c_panther_01"):
			case joaat("a_c_pronghorn_01"):
			case joaat("a_c_boar_01"):
				return true;
		}
	}

	return false;
}

void func_202(Ped pedParam0, ItemSet isParam1) // Position - 0x5FDF Signature - 22 02 04 00 00 66 01 03 05 00 F0 05 8B 03 00 50 02 00 66 00 03 05 00 7B 8B 15
{
	if (!ITEMSET::IS_ITEMSET_VALID(isParam1))
		return;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ITEMSET::IS_IN_ITEMSET(pedParam0, isParam1))
			ITEMSET::ADD_TO_ITEMSET(pedParam0, isParam1);

	return;
}

int func_203(Hash hParam0) // Position - 0x6012 Signature - 22 01 04 00 00 66 00 03 05 00 A6
{
	int pedModelSizeFromHash;

	if (STREAMING::IS_MODEL_VALID(hParam0))
		pedModelSizeFromHash = PED::_GET_PED_MODEL_SIZE_FROM_HASH(hParam0);
	else
		pedModelSizeFromHash = 1;

	return pedModelSizeFromHash;
}

BOOL func_204(Ped pedParam0) // Position - 0x6033 Signature - 22 01 03 00 00 66 00 03 05 01 14
{
	return ENTITY::IS_ENTITY_ON_SCREEN(pedParam0) && !ENTITY::IS_ENTITY_OCCLUDED(pedParam0);
}

BOOL func_205(Ped pedParam0) // Position - 0x604D Signature - 22 01 03 00 00 66 00 03 05 01 17
{
	return PED::_IS_PED_VISIBILITY_TRACKED(pedParam0) && PED::IS_TRACKED_PED_VISIBLE(pedParam0);
}

void func_206(Ped pedParam0) // Position - 0x6066 Signature - 22 01 04 00 00 66 00 39 A4 61 00 67 03 66 00
{
	Ped ped;

	ped = func_210(pedParam0);

	if (PED::_IS_PED_VISIBILITY_TRACKED(pedParam0))
		PED::RELEASE_PED_VISIBILITY_TRACKING(pedParam0);

	func_199(ped, Global_1300385.f_1);
	return;
}

BOOL func_207(Ped pedParam0, int iParam1) // Position - 0x6091 Signature - 22 02 05 00 00 66 00 39 A4 61 00 67 04 66 04 39 33 60 00 6A 8B 09 00 66 00 09 39 CE 35 00 05 69 6A 8B 0D 00 70 21 00 66 04 25 7F 0D 03 0D 01 29 69 6A 8B 17 00 66 00 39 B7 72 00 39 C4 72 00 39 D1 72 00 39 DE 72 00 39 EB 72 00 69 6A
{
	Ped entity2;

	entity2 = func_210(pedParam0);

	if (func_204(entity2) && !func_117(pedParam0, true) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_33, entity2, 3455) && func_259(pedParam0, func_255(), func_256(), func_257(), func_258()) && func_205(pedParam0) && func_260(pedParam0) >= func_261(iParam1))
		return true;

	return false;
}

BOOL func_208(Ped pedParam0, int iParam1) // Position - 0x6105 Signature - 22 02 05 00 00 66 00 39 A4 61 00 67 04 66 04 39 33 60 00 6A 8B 09 00 66 00 09 39 CE 35 00 05 69 6A 8B 0D 00 70 21 00 66 04 25 7F 0D 03 0D 01 29 69 6A 8B 17 00 66 00 39 B7 72 00 39 C4 72 00 39 D1 72 00 39 DE 72 00 39 EB 72 00 69 8B
{
	Ped entity2;

	entity2 = func_210(pedParam0);

	if (func_204(entity2) && !func_117(pedParam0, true) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_33, entity2, 3455) && func_259(pedParam0, func_255(), func_256(), func_257(), func_258()))
		if (!PED::_IS_PED_VISIBILITY_TRACKED(pedParam0))
			PED::REQUEST_PED_VISIBILITY_TRACKING(pedParam0);
		else if (func_205(pedParam0) && func_260(pedParam0) >= func_261(iParam1))
			return true;

	return false;
}

void func_209(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x618A Signature - 22 04 06 00 00 2F
{
	GRAPHICS::_ANIMPOSTFX_SET_POSTFX_COLOR(func_70(0), 0, iParam0, iParam1, iParam2, iParam3);
	return;
}

Ped func_210(Ped pedParam0) // Position - 0x61A4 Signature - 22 01 03 00 00 66 00 50 01 01 22 02 04 00 00 66 00 03
{
	return pedParam0;
}

BOOL func_211(Ped pedParam0, BOOL bParam1) // Position - 0x61AE Signature - 22 02 04 00 00 66 00 03 05 00 7B 05 8B 04 00 2F 50 02 01 66 00 6D
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(pedParam0, 58))
	{
		if (bParam1)
			return ENTITY::IS_ENTITY_IN_AIR(pedParam0, 1);
	
		return true;
	}

	return false;
}

void func_212() // Position - 0x61E3 Signature - 22 00 08
{
	var unk;
	int num;
	Hash hash;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 32);
	num = func_262();

	if (func_263(num))
		TEXT_LABEL_COPY(&unk, { func_264(num) }, 4);

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
	{
		hash = func_265();
		TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(hash), 32);
	}

	GRAPHICS::_SET_REGION_PHOTO_TAKEN_STAT(&unk);
	return;
}

void func_213() // Position - 0x622B Signature - 22 00 07
{
	var unk;
	var unk3;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 16);
	TEXT_LABEL_ASSIGN_STRING(&unk3, "", 16);
	num = func_267();

	if (func_268(num))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(num), 16);
		TEXT_LABEL_ASSIGN_STRING(&unk3, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(num), 16);
	}

	GRAPHICS::_SET_DISTRICT_PHOTO_TAKEN_STAT(&unk);
	GRAPHICS::_SET_STATE_PHOTO_TAKEN_STAT(&unk3);
	return;
}

void func_214() // Position - 0x6270 Signature - 22 00 02 00 00 5D A1 D7 13 09 39 B9
{
	func_71(&Global_1300385, 1);
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(int iParam0) // Position - 0x6281 Signature - 22 01 03 00 00 66 00 3C 27 00 00 00 00 00 E7 00 01 00 00 00 E8
{
	switch (iParam0)
	{
		case 0:
			return "CAM_PM_F_V0";
	
		case 1:
			return "CAM_PM_F_V1";
	
		case 2:
			return "CAM_PM_F_V2";
	
		case 3:
			return "CAM_PM_F_V3";
	
		case 4:
			return "CAM_PM_F_V4";
	
		case 5:
			return "CAM_PM_F_V5";
	
		case 6:
			return "CAM_PM_F_V6";
	
		case 7:
			return "CAM_PM_F_V7";
	
		case 8:
			return "CAM_PM_F_V8";
	
		case 9:
			return "CAM_PM_F_V9";
	
		case 10:
			return "CAM_PM_F_V10";
	
		case 11:
			return "CAM_PM_F_M1";
	
		case 12:
			return "CAM_PM_F_M2";
	
		case 13:
			return "CAM_PM_F_M3";
	
		case 14:
			return "CAM_PM_F_M4";
	
		case 15:
			return "CAM_PM_F_M5";
	
		case 16:
			return "CAM_PM_F_M6";
	
		case 17:
			return "CAM_PM_F_M7";
	
		case 18:
			return "CAM_PM_F_M8";
	
		case 19:
			return "CAM_PM_F_M9";
	
		case 20:
			return "CAM_PM_F_M10";
	
		case 21:
			return "CAM_PM_F_S1";
	
		case 22:
			return "CAM_PM_F_S2";
	
		case 23:
			return "CAM_PM_F_S3";
	
		case 24:
			return "CAM_PM_F_S4";
	
		case 25:
			return "CAM_PM_F_S5";
	
		case 26:
			return "CAM_PM_F_S6";
	
		case 27:
			return "CAM_PM_F_S7";
	
		case 28:
			return "CAM_PM_F_S8";
	
		case 29:
			return "CAM_PM_F_S9";
	
		case 30:
			return "CAM_PM_F_S10";
	
		case 31:
			return "CAM_PM_F_S11";
	
		case 32:
			return "CAM_PM_F_S12";
	
		case 33:
			return "CAM_PM_F_S13";
	
		case 34:
			return "CAM_PM_F_S14";
	
		case 35:
			return "CAM_PM_F_S15";
	
		case 36:
			return "CAM_PM_F_S16";
	
		case 37:
			return "CAM_PM_F_S17";
	
		case 38:
			return "CAM_PM_F_S18";
	
		default:
		
	}

	return "CAM_PM_F_V0";
}

int func_216(var uParam0) // Position - 0x6490 Signature - 22 01 03 00 00 66 00 39 52
{
	switch (func_67(uParam0))
	{
		case 1:
			if (CAM::_0x8B1A5FE7E41E52B2())
				return 0;
			else if (CAM::_0xB6A80E1E3A5444F1())
				return 2;
			else
				return 1;
			break;
	
		case 2:
			return BUILTIN::FLOOR(uParam0->f_36.f_3);
	}

	return 0;
}

struct<2> func_217(int iParam0) // Position - 0x64E4 Signature - 22 01 03 00 00 11 66
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_218(var uParam0, var uParam1) // Position - 0x64F8 Signature - 22 02 04 00 00 11
{
	return func_271(uParam0);
}

void func_219(var uParam0) // Position - 0x6508 Signature - 22 01 05 00 00 03
{
	Entity outEntity;
	Ped pedIndexFromEntityIndex;

	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::GET_PLAYER_INDEX(), &outEntity, true, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(outEntity))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity);
		
			if (!func_117(pedIndexFromEntityIndex, true))
				func_272(pedIndexFromEntityIndex, ENTITY::_GET_PED_ANIMAL_TYPE(pedIndexFromEntityIndex), true, false);
		}
	}

	return;
}

void func_220(int iParam0) // Position - 0x654A Signature - 22 01 03 00 00 66 00 39 76
{
	if (!func_273(iParam0))
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

Hash func_221(Hash hParam0, int iParam1) // Position - 0x65FD Signature - 22 02 07 00 00 66 00
{
	int num;
	var unk;
	Hash hash;

	if (!func_134(hParam0, 0))
		return 0;

	num = func_135(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_274(hParam0, 1399091007))
	{
		func_275(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_222(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x6677 Signature - 22 05 07 00 00 66 04
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_232(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_223(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x669E Signature - 22 04 06 00 00 66 02
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_224(Hash hParam0) // Position - 0x66D9 Signature - 22 01 03 00 00 66 00 03 05 00 38
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_225(int iParam0) // Position - 0x66F4 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 03
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_226(Hash hParam0) // Position - 0x6715 Signature - 22 01 0A 00 00 66 00 2F 39 50 39 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 62 05 8B 04 00 2F 50 01 01 4B 03 27 01
{
	var unk;

	if (!func_134(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_1;
}

int func_227(Hash hParam0) // Position - 0x6740 Signature - 22 01 03 00 00 66 00 3C 0F
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

int func_228(var uParam0, int iParam1) // Position - 0x6823 Signature - 22 02 05 00 00 2F
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

int func_229(Hash hParam0) // Position - 0x6860 Signature - 22 01 04 00 00 66 00 39 15
{
	int num;

	num = func_226(hParam0);

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

int func_230(Hash hParam0, BOOL bParam1) // Position - 0x68CD Signature - 22 02 18
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_276(hParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };

	if (bParam1)
		func_278(&unk, func_277(false));

	if (!func_279(&unk, &num, &num2, false))
		return 0;

	func_225(num);
	return num2;
}

int func_231(Hash hParam0, int iParam1) // Position - 0x692C Signature - 22 02 04 00 00 66 01 2F
{
	if (iParam1 == 0)
		return 0;

	if (func_281(func_280(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, iParam1);
}

int func_232(BOOL bParam0) // Position - 0x6958 Signature - 22 01 03 00 00 39 B5
{
	if (func_282() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_233(Hash hParam0, BOOL bParam1) // Position - 0x6999 Signature - 22 02 09
{
	var unk;

	unk = { func_283(hParam0, bParam1, 0) };
	return func_284(hParam0, unk, unk.f_4, bParam1);
}

BOOL func_234(int iParam0, int iParam1) // Position - 0x69BE Signature - 22 02 04 00 00 66 00 2F 8A 04
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

void func_235(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x69DF Signature - 22 1A
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
	func_161(iParam0, true);
	func_162(iParam0, true);
	func_163(iParam0, 128);
	return;
}

BOOL func_236() // Position - 0x6CF9 Signature - 22 00 02 00 00 03 01 00 CA
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

int func_237(Interior inParam0) // Position - 0x6D0D Signature - 22 01 07 00 00 66 00 03 05 00 3B 8B 49
{
	var position;
	int nameHash;

	if (INTERIOR::IS_VALID_INTERIOR(inParam0))
	{
		INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(inParam0, &position, &nameHash);
	
		switch (nameHash)
		{
			case joaat("l_14_cave_int"):
			case joaat("gap_mine_int"):
			case joaat("mil_mine_cave_int"):
			case joaat("m05_bearcave_main"):
			case joaat("elh_seacaves_int"):
			case joaat("bea_01_int"):
			case joaat("agu_fus_cave_int"):
			case 1633500362:
				return 1;
		}
	}

	return 0;
}

int func_238(Interior inParam0) // Position - 0x6D68 Signature - 22 01 07 00 00 66 00 03 05 00 3B 8B 2B
{
	var position;
	int nameHash;

	if (INTERIOR::IS_VALID_INTERIOR(inParam0))
	{
		INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(inParam0, &position, &nameHash);
	
		switch (nameHash)
		{
			case 653987431:
			case joaat("hea_tunnel_02"):
			case joaat("j_16_tunnel_int"):
				return 1;
		}
	}

	return 0;
}

const char* func_239(int iParam0) // Position - 0x6DA5 Signature - 22 01 03 00 00 66 00 03 05 00 08
{
	return MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iParam0), 0);
}

BOOL func_240(int iParam0, int iParam1, BOOL bParam2) // Position - 0x6DB8 Signature - 22 03 06 00 00 66 02 6A 8B 08 00 66 00 39 37 17 00 05 69 8B 04
{
	int num;

	if (bParam2 && !func_45(iParam0))
		return false;

	num = func_121(iParam0);
	return HUD::_UI_PROMPT_HAS_STANDARD_MODE_COMPLETED(Global_1951910[num /*23*/].f_3, iParam1);
}

int func_241(var uParam0) // Position - 0x6DED Signature - 22 01 03 00 00 66 00 27 21 50
{
	return uParam0->f_33;
}

void func_242(var uParam0) // Position - 0x6DF9 Signature - 22 01 03 00 00 66 00 27 21 1D
{
	if (uParam0->f_33 < 3)
		uParam0->f_33 = uParam0->f_33 + 1;

	return;
}

void func_243(var uParam0) // Position - 0x6E13 Signature - 22 01 03 00 00 66 00 27 21 09
{
	if (uParam0->f_33 > 1)
		uParam0->f_33 = uParam0->f_33 - 1;

	return;
}

BOOL func_244(int iParam0, BOOL bParam1) // Position - 0x6E2D Signature - 22 02 05 00 00 66 01 6A 8B 08 00 66 00 39 37 17 00 05 69 8B 04 00 2F 50 02 01 66 00 39 9D 36 00 67 04 66 04 5D A6 C8 1D 63 17 27 03 03 05 00 65
{
	int num;

	if (bParam1 && !func_45(iParam0))
		return false;

	num = func_121(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1951910[num /*23*/].f_3);
}

float func_245() // Position - 0x6E60 Signature - 22 00 02 00 00 86 00 00 00
{
	return 0.5f;
}

void func_246(var uParam0) // Position - 0x6E6D Signature - 22 01 04 00 00 66 00 39 68
{
	int taskSequenceId;

	func_285(uParam0);
	func_40(17);
	TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
	TASK::TASK_START_SCENARIO_IN_PLACE_HASH(0, func_253(uParam0->f_32), 0, true, 0, -1082130432, false);
	TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
	TASK::TASK_PERFORM_SEQUENCE(Global_33, taskSequenceId);
	TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
	return;
}

Vector3 func_247(Player plParam0) // Position - 0x6EB3 Signature - 22 01 03 00 00 66 00 03 05 00 32
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

Vector3 func_248(float fParam0, var uParam1, var uParam2) // Position - 0x6EC7 Signature - 22 03 07
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

void func_249(var uParam0) // Position - 0x6F06 Signature - 22 01 03 00 00 11 37
{
	uParam0->f_74 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, joaat("INPUT_MOVE_LR")) * 127f);
	uParam0->f_75 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, joaat("INPUT_MOVE_UD")) * 127f);
	uParam0->f_78 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, joaat("INPUT_LOOK_LR")) * 127f);
	uParam0->f_79 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, joaat("INPUT_LOOK_UD")) * 127f);
	return;
}

void func_250(var uParam0) // Position - 0x6F6E Signature - 22 01 06 00 00 2F 37
{
	int num;
	int num2;
	Cam renderingCam;

	num = PAD::GET_CONTROL_VALUE(PLAYER_CONTROL, -1089155097) - 127;
	num2 = PAD::GET_CONTROL_VALUE(PLAYER_CONTROL, -310714049) - 127;

	if (uParam0->f_65 == 1)
		renderingCam = CAM::GET_RENDERING_CAM();
	else
		renderingCam = uParam0->f_35;

	if (num > 0)
	{
		if (uParam0->f_36.f_3 < 90f)
		{
			uParam0->f_36.f_3 = uParam0->f_36.f_3 + 0.9f;
			CAM::_0xE4B7945EF4F1BFB2(renderingCam, &(uParam0->f_36));
		
			if (func_76(uParam0->f_5[8], true))
			{
				func_95(uParam0->f_5[8], false, true, true);
				func_96(uParam0->f_5[8], false, true);
			}
		
			if (!func_76(uParam0->f_5[6], true))
			{
				func_95(uParam0->f_5[6], true, true, true);
				func_96(uParam0->f_5[6], true, true);
			}
		
			if (uParam0->f_56 < 0)
				func_286(&(uParam0->f_56), 8);
		}
		else
		{
			if (!func_76(uParam0->f_5[8], true))
			{
				func_95(uParam0->f_5[8], true, true, true);
				func_96(uParam0->f_5[8], true, true);
			}
		
			if (func_76(uParam0->f_5[6], true))
			{
				func_95(uParam0->f_5[6], false, true, true);
				func_96(uParam0->f_5[6], false, true);
			}
		
			func_128(&(uParam0->f_56));
		}
	}
	else
	{
		func_128(&(uParam0->f_56));
	}

	if (num == 0 && num2 > 0)
	{
		if (uParam0->f_36.f_3 > 30f)
		{
			uParam0->f_36.f_3 = uParam0->f_36.f_3 - 0.9f;
			CAM::_0xE4B7945EF4F1BFB2(renderingCam, &(uParam0->f_36));
		
			if (func_76(uParam0->f_5[7], true))
			{
				func_95(uParam0->f_5[7], false, true, true);
				func_96(uParam0->f_5[7], false, true);
			}
		
			if (!func_76(uParam0->f_5[6], true))
			{
				func_95(uParam0->f_5[6], true, true, true);
				func_96(uParam0->f_5[6], true, true);
			}
		
			if (uParam0->f_57 < 0)
				func_286(&(uParam0->f_57), 9);
		}
		else
		{
			if (!func_76(uParam0->f_5[7], true))
			{
				func_95(uParam0->f_5[7], true, true, true);
				func_96(uParam0->f_5[7], true, true);
			}
		
			if (func_76(uParam0->f_5[6], true))
			{
				func_95(uParam0->f_5[6], false, true, true);
				func_96(uParam0->f_5[6], false, true);
			}
		
			func_128(&(uParam0->f_57));
		}
	}
	else
	{
		func_128(&(uParam0->f_57));
	}

	return;
}

void func_251(var uParam0) // Position - 0x71D9 Signature - 22 01 03 00 00 6D 10
{
	func_40(16);
	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_33);
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_33, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(uParam0->f_31), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(0));
	return;
}

void func_252(var uParam0, int iParam1) // Position - 0x7203 Signature - 22 02 04 00 00 66 01 66 00 6C 42
{
	uParam0->f_66 = iParam1;
	return;
}

Hash func_253(int iParam0) // Position - 0x7211 Signature - 22 01 03 00 00 66 00 3C 04
{
	switch (iParam0)
	{
		case 0:
			return joaat("world_human_stare_stoic");
	
		case 1:
			return joaat("world_human_sternguy_idles");
	
		case 2:
			return joaat("world_player_camp_fire_squat");
	
		case 3:
			return joaat("world_player_dynamic_kneel");
	
		default:
		
	}

	return joaat("world_human_stare_stoic");
}

BOOL func_254(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x725E Signature - 22 02 04 00 00 66 00 03 05 00 7B 8B 47
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

float func_255() // Position - 0x72B7 Signature - 22 00 02 00 00 86 9A
{
	return 0.3f;
}

float func_256() // Position - 0x72C4 Signature - 22 00 02 00 00 86 33 33 33 3F 50 00 01 22 00
{
	return 0.7f;
}

float func_257() // Position - 0x72D1 Signature - 22 00 02 00 00 86 CD
{
	return 0.2f;
}

float func_258() // Position - 0x72DE Signature - 22 00 02 00 00 86 33 33 33 3F 50 00 01 22 05
{
	return 0.7f;
}

BOOL func_259(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x72EB Signature - 22 05 07 00 00 66 00 03 05 00 2C
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (func_288(ENTITY::GET_ENTITY_COORDS(pedParam0, true, false), fParam1, fParam2, fParam3, fParam4))
			return true;

	return false;
}

float func_260(Ped pedParam0) // Position - 0x7319 Signature - 22 01 03 00 00 66 00 39 9F
{
	return func_289(pedParam0) * 100f;
}

float func_261(int iParam0) // Position - 0x732D Signature - 22 01 03 00 00 66 00 3C 05
{
	switch (iParam0)
	{
		case 0:
			return 0.01f;
	
		case 1:
			return 0.02f;
	
		case 2:
			return 0.02f;
	
		case 3:
			return 0.03f;
	
		case 4:
			return 0.03f;
	}

	return 0.03f;
}

int func_262() // Position - 0x7397 Signature - 22 00 02 00 00 5D EB
{
	return Global_1893611.f_2;
}

BOOL func_263(int iParam0) // Position - 0x73A5 Signature - 22 01 03 00 00 66 00 2F 7E
{
	return iParam0 >= 0 && iParam0 <= 150;
}

const char* func_264(int iParam0) // Position - 0x73BB Signature - 22 01 04 00 00 66 00 39 A5
{
	const char* str;

	if (!func_263(iParam0))
	{
		TEXT_LABEL_ASSIGN_STRING(&str, "UNK", 8);
		return str;
	}

	return Global_1887363[iParam0 /*36*/].f_23;
}

Hash func_265() // Position - 0x73E4 Signature - 22 00 02 00 00 1D
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_34);
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Hash hParam0) // Position - 0x73F5 Signature - 22 01 03 00 00 66 00 3C 21
{
	switch (hParam0)
	{
		case joaat("water_lannahechee_river"):
			return "WATER_LANNACHECHEE_RIVER";
	
		case joaat("WATER_O_CREAGHS_RUN"):
			return "WATER_OCREAGHS_RUN";
	
		case joaat("water_upper_montana_river"):
			return "WATER_UPPER_MONTANA_RIVER";
	
		case joaat("water_san_luis_river"):
			return "WATER_SAN_LUIS_RIVER";
	
		case joaat("water_little_creek_river"):
			return "WATER_LITTLE_CREEK_RIVER";
	
		case joaat("water_lake_don_julio"):
			return "WATER_LAKE_DON_JULIO";
	
		case joaat("water_flat_iron_lake"):
			return "WATER_FLAT_IRON";
	
		case joaat("water_lower_montana_river"):
			return "WATER_LOWER_MONTANA_RIVER";
	
		case joaat("water_owanjila"):
			return "WATER_OWANJILA";
	
		case joaat("water_stillwater_creek"):
			return "WATER_STILLWATER_CREEK";
	
		case joaat("water_hawks_eye_creek"):
			return "WATER_HAWKS_EYE_CREEK";
	
		case joaat("water_kamassa_river"):
			return "WATER_KAMASSA_RIVER";
	
		case joaat("water_cairn_lake"):
			return "WATER_CAIRN_LAKE";
	
		case joaat("water_southfield_flats"):
			return "WATER_SOUTHFIELD_FLATS";
	
		case joaat("water_moonstone_pond"):
			return "WATER_MOONSTONE_POND";
	
		case joaat("WATER_CATTIAL_POND"):
			return "WATER_CATTAIL_POND";
	
		case joaat("water_bayou_nwa"):
			return "WATER_BAYOU_NWA";
	
		case joaat("water_whinyard_strait"):
			return "WATER_WHINYARD_STRAIT";
	
		case joaat("water_sea_of_coronado"):
			return "WATER_SEA_OF_CORONADO";
	
		case joaat("water_spider_gorge"):
			return "WATER_SPIDER_GORGE";
	
		case joaat("water_aurora_basin"):
			return "WATER_AURORA_BASIN";
	
		case joaat("water_elysian_pool"):
			return "WATER_ELYSIAN_POOL";
	
		case joaat("WATER_CALMUT_RAVINE"):
			return "WATER_CALUMET_RAVINE";
	
		case joaat("water_mattlock_pond"):
			return "WATER_MATTLOCK_POND";
	
		case joaat("water_dakota_river"):
			return "WATER_DAKOTA_RIVER";
	
		case joaat("water_dewberry_creek"):
			return "WATER_DEWBERRY_CREEK";
	
		case joaat("water_lake_isabella"):
			return "WATER_LAKE_ISABELLA";
	
		case joaat("water_beartooth_beck"):
			return "WATER_BEARTOOTH_BECK";
	
		case joaat("water_barrow_lagoon"):
			return "WATER_BARROW_LAGOON";
	
		case joaat("water_hot_springs"):
			return "WATER_HOT_SPRINGS";
	
		case joaat("water_deadboot_creek"):
			return "WATER_DEADBOOT_CREEK";
	
		case joaat("water_heartlands_overflow"):
			return "WATER_HEARTLANDS_OVERFLOW";
	
		case joaat("water_ringneck_creek"):
			return "WATER_RINGNECK_CREEK";
	
		default:
		
	}

	return "";
}

int func_267() // Position - 0x75B5 Signature - 22 00 02 00 00 5D C6
{
	return Global_1896646.f_41;
}

BOOL func_268(int iParam0) // Position - 0x75C3 Signature - 22 01 03 00 00 66 00 08 20 6A 8B 06 00 66 00 6D 11
{
	return iParam0 > -1 && iParam0 < 17;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(int iParam0) // Position - 0x75D9 Signature - 22 01 03 00 00 66 00 3C 11 00 00 00 00 00 63 00 01 00 00 00 64 00 02 00 00 00 65 00 03 00 00 00 66 00 04 00 00 00 67 00 05 00 00 00 68 00 06 00 00 00 69 00 07 00 00 00 6A 00 08 00 00 00 6B 00 09 00 00 00 6C 00 0A 00 00 00 6D 00 0B 00 00 00 6E 00 0C 00 00 00 6F 00 0D 00 00 00 77
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
	
		case 1:
			return "BGV";
	
		case 2:
			return "BLU";
	
		case 3:
			return "CML";
	
		case 4:
			return "GRT";
	
		case 5:
			return "GRZ";
	
		case 6:
			return "GRE";
	
		case 7:
			return "GRW";
	
		case 8:
			return "GUA";
	
		case 9:
			return "HRT";
	
		case 10:
			return "ROA";
	
		case 11:
			return "SCM";
	
		case 12:
			return "TAL";
	
		case 13:
			return "GAP";
	
		case 14:
			return "RIO";
	
		case 15:
			return "CHO";
	
		case 16:
			return "HEN";
	
		default:
		
	}

	if (func_282() == 0)
		return "FMMC_INV_ALID";

	return "No District Label!";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(int iParam0) // Position - 0x76D9 Signature - 22 01 03 00 00 66 00 3C 11 00 00 00 00 00 63 00 01 00 00 00 64 00 02 00 00 00 65 00 03 00 00 00 66 00 04 00 00 00 67 00 05 00 00 00 68 00 06 00 00 00 69 00 07 00 00 00 6A 00 08 00 00 00 6B 00 09 00 00 00 6C 00 0A 00 00 00 6D 00 0B 00 00 00 6E 00 0C 00 00 00 6F 00 0D 00 00 00 70
{
	switch (iParam0)
	{
		case 0:
			return "LEMOYNE" /*Lemoyne St*/;
	
		case 1:
			return "WEST_ELIZ";
	
		case 2:
			return "LEMOYNE" /*Lemoyne St*/;
	
		case 3:
			return "NEW_HANOV";
	
		case 4:
			return "WEST_ELIZ";
	
		case 5:
			return "AMBARINO";
	
		case 6:
			return "AMBARINO";
	
		case 7:
			return "AMBARINO";
	
		case 8:
			return "GUARMA";
	
		case 9:
			return "NEW_HANOV";
	
		case 10:
			return "NEW_HANOV";
	
		case 11:
			return "LEMOYNE" /*Lemoyne St*/;
	
		case 12:
			return "WEST_ELIZ";
	
		case 13:
			return "NEW_AUST";
	
		case 14:
			return "NEW_AUST";
	
		case 15:
			return "NEW_AUST";
	
		case 16:
			return "NEW_AUST";
	
		default:
		
	}

	if (func_282() == 0)
		return "FMMC_INV_ALID";

	return "No State Label!";
}

int func_271(var uParam0, var uParam1) // Position - 0x77D9 Signature - 22 02 07 00 00 4B
{
	int num;

	num.f_1 = -1;
	num.f_2 = -1;

	if (func_290(uParam0, &num))
		return num;

	return 0;
}

void func_272(Ped pedParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x7803 Signature - 22 04 0A
{
	Hash entityModel;
	var entityCoords;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (!STREAMING::IS_MODEL_VALID(entityModel))
		return;

	func_291(pedParam0);
	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true, false) };
	func_292(hParam1, entityModel, entityCoords, bParam2, bParam3);

	if (bParam2 && joaat("at_horse") == hParam1)
		COMPENDIUM::COMPENDIUM_HORSE_OBSERVED(pedParam0, bParam3);

	return;
}

BOOL func_273(int iParam0) // Position - 0x7876 Signature - 22 01 03 00 00 66 00 11
{
	return func_234(iParam0, 2);
}

BOOL func_274(Hash hParam0, Hash hParam1) // Position - 0x7885 Signature - 22 02 04 00 00 66 00 2F 39
{
	if (!func_134(hParam0, 0))
		return func_293(func_280(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return true;

	return false;
}

void func_275(Hash hParam0, var uParam1, var uParam2) // Position - 0x78C6 Signature - 22 03 05 00 00 2F
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

struct<18> func_276(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x7AD2 Signature - 22 07 1B
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

struct<4> func_277(BOOL bParam0) // Position - 0x7BB0 Signature - 22 01 04 00 00 66 00 39 58 69 00 67 03 66 03 11 15
{
	int num;

	num = func_232(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_284(923904168, func_294(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_284(923904168, func_294(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_284(923904168, func_294(bParam0), -740156546, false);
}

void func_278(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x7C51 Signature - 22 05 07 00 00 4B
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_279(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x7C6C Signature - 22 04 06 00 00 66 03
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_232(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

Hash func_280(Hash hParam0) // Position - 0x7C91 Signature - 22 01 03 00 00 66 00 50 01 01 22 02 04 00 00 66 00 2F
{
	return hParam0;
}

BOOL func_281(Hash hParam0, int iParam1) // Position - 0x7C9B Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 93
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

int func_282() // Position - 0x7CB5 Signature - 22 00 02 00 00 5D 17
{
	return Global_1572887.f_14;
}

struct<5> func_283(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x7CC3 Signature - 22 03 2F
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_294(bParam1) };
	unk.f_4 = 1084182731;
	num = func_135(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_299(hParam0, -1823706425))
			{
				unk = { func_284(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_299(hParam0, -1483207246))
			{
				unk = { func_284(joaat("WARDROBE"), unk, 1034665895, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_284(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1311702610))
			{
				unk.f_4 = -1311702610;
			}
			else if (func_299(hParam0, -1653629781))
			{
				unk = { func_284(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -1591664384;
			unk = { func_298(bParam1) };
		
			switch (func_226(hParam0))
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
			unk = { func_284(joaat("WARDROBE"), unk, 1034665895, bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_277(bParam1) };
		
			if (iParam2 && func_295(hParam0, true))
			{
				unk6.f_9 = -1591664384;
			
				if (!func_296(hParam0, &unk, 1728382685, false, false))
					unk.f_4 = 1728382685;
				else if (!func_296(hParam0, &unk, -649335959, false, false))
					unk.f_4 = -649335959;
				else if (func_297(hParam0, &unk6, 1728382685))
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
			
				if (!func_300(unk, &unk28, bParam1, false, -1))
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
			else if (func_299(hParam0, -1653629781))
			{
				unk = { func_284(1384535894, unk, 1784584921, bParam1) };
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

struct<4> func_284(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x8037 Signature - 22 07 0D
{
	var outGuid;

	if (!func_134(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_232(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

void func_285(var uParam0) // Position - 0x8068 Signature - 22 01 03 00 00 70 21 00 37
{
	WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);

	if (!PED::GET_PED_IS_BEING_GRAPPLED(Global_33) && PED::IS_PED_USING_ANY_SCENARIO(Global_33))
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);

	ENTITY::SET_ENTITY_HEADING(Global_33, uParam0->f_52);
	return;
}

void func_286(var uParam0, int iParam1) // Position - 0x80AC Signature - 22 02 04 00 00 66 00 76 2F
{
	if (*uParam0 < 0)
	{
		*uParam0 = AUDIO::GET_SOUND_ID();
		AUDIO::_PLAY_SOUND_FROM_ENTITY_WITH_SET(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam1), Global_33, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(6), false, 0);
	}

	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(int iParam0) // Position - 0x80D9 Signature - 22 01 03 00 00 66 00 3C 08
{
	switch (iParam0)
	{
		case 0:
			return "portrait_normal";
	
		case 1:
			return "portrait_happy";
	
		case 2:
			return "portrait_pensive";
	
		case 3:
			return "portrait_pensive_2";
	
		case 4:
			return "portrait_relaxed";
	
		case 5:
			return "portrait_angry";
	
		case 6:
			return "portrait_angry_2";
	
		case 7:
			return "portrait_annoyed";
	
		default:
		
	}

	return "portrait_normal";
}

BOOL func_288(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0x8155 Signature - 22 07 0C
{
	float screenX;
	float screenY;
	int hudScreenPositionFromWorldPosition;

	hudScreenPositionFromWorldPosition = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &screenX, &screenY);

	if (hudScreenPositionFromWorldPosition == 0)
		if (screenX > fParam3 && screenX < fParam4 && screenY > fParam5 && screenY < fParam6)
			return true;

	return false;
}

float func_289(Ped pedParam0) // Position - 0x819F Signature - 22 01 13
{
	Ped ped;
	Vector3 minimum;
	Vector3 maximum;
	var screenX;
	float screenX2;
	float num;
	float num2;
	float num3;

	ped = func_210(pedParam0);
	ENTITY::_GET_ENTITY_WORLD_POSITION_OF_DIMENSIONS(ped, &minimum, &maximum);

	if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(minimum, &screenX, &(screenX.f_1)) || !GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(maximum, &screenX2, &(screenX2.f_1)))
		return 0f;

	num = MISC::ABSF(screenX2 - screenX);
	num2 = MISC::ABSF(screenX2.f_1 - screenX.f_1);
	num3 = num * num2;
	return num3;
}

BOOL func_290(int iParam0, var uParam1, Any* panParam2) // Position - 0x8207 Signature - 22 03 05 00 00 11
{
	if (!func_301(iParam0))
		return false;

	func_302(panParam2);

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

void func_291(Ped pedParam0) // Position - 0x8312 Signature - 22 01 05 00 00 66
{
	var unk;
	Hash discoverableNameHashAndTypeForEntity;

	if (FLOCK::_GET_ANIMAL_RARITY(pedParam0) != 2)
		return;

	discoverableNameHashAndTypeForEntity = PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(pedParam0, &unk);

	if (discoverableNameHashAndTypeForEntity == 0)
	{
	}
	else if (!PLAYER::GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP(discoverableNameHashAndTypeForEntity))
	{
		PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_MP(discoverableNameHashAndTypeForEntity);
	}

	return;
}

void func_292(Hash hParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6) // Position - 0x834D Signature - 22 07 0B
{
	Hash mapDiscoverableFromStatItem;
	Hash discoveryHash;

	mapDiscoverableFromStatItem = COMPENDIUM::COMPENDIUM_GET_MAP_DISCOVERABLE_FROM_STAT_ITEM(hParam0, vParam2);
	discoveryHash = mapDiscoverableFromStatItem;

	if (discoveryHash != 0 && !MAP::_MAP_IS_DISCOVERY_ACTIVE(discoveryHash))
		MAP::_MAP_DISCOVER_REGION(discoveryHash);

	if (bParam5 && joaat("at_horse") != hParam0)
		COMPENDIUM::COMPENDIUM_ANIMAL_OBSERVED_BY_STAT_NAME(hParam0, bParam6);

	return;
}

BOOL func_293(Hash hParam0, Hash hParam1) // Position - 0x8398 Signature - 22 02 04 00 00 66 00 11
{
	if (!func_281(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

struct<4> func_294(BOOL bParam0) // Position - 0x83CE Signature - 22 01 04 00 00 5D
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_232(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_284(joaat("character"), func_303(), -1591664384, bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_284(joaat("character"), func_303(), -1591664384, false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_284(joaat("character"), func_303(), -1591664384, bParam0);
}

int func_295(Hash hParam0, BOOL bParam1) // Position - 0x846E Signature - 22 02 04 00 00 66 00 39 15
{
	if (func_226(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_304();
		else
			return 1;

	return 0;
}

BOOL func_296(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x84A5 Signature - 22 05 07 00 00 66 00 42
{
	return func_305(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_297(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x84C0 Signature - 22 03 09
{
	var unk;

	if (func_306(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_298(BOOL bParam0) // Position - 0x84E1 Signature - 22 01 04 00 00 66 00 39 58 69 00 67 03 66 03 11 0B
{
	int num;

	num = func_232(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_284(271701509, func_294(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_284(271701509, func_294(bParam0), 12999093, false);
}

BOOL func_299(Hash hParam0, int iParam1) // Position - 0x854B Signature - 22 02 08
{
	Hash hash;
	int num;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || iParam1 == 0)
		return false;

	num = func_226(hParam0);

	if (num == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(num);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(num, i, &hash))
			if (func_307(hParam0, iParam1, hash))
				return true;
	}

	return false;
}

BOOL func_300(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x85B8 Signature - 22 08
{
	return func_308(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

BOOL func_301(var uParam0, var uParam1) // Position - 0x85CE Signature - 22 02 04 00 00 66 00 39 72
{
	if (!func_309(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_310(uParam0))
		return false;

	return true;
}

void func_302(Any* panParam0) // Position - 0x8602 Signature - 22 01 03 00 00 2F
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

struct<4> func_303() // Position - 0x8618 Signature - 22 00 06 00 00 42
{
	var unk;

	return unk;
}

int func_304() // Position - 0x8624 Signature - 22 00 02 00 00 37
{
	if (func_311(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_305(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x8641 Signature - 22 09
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_134(hParam0, 0))
		return 0;

	if (!bParam7 && func_231(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_284(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_232(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_232(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_306(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x86C0 Signature - 22 04 07 00 00 2F 39
{
	int inventoryId;

	inventoryId = func_232(false);
	*panParam1 = { func_284(hParam0, func_277(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_307(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x8705 Signature - 22 03 05 00 00 66
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, iParam1, hParam2);
}

BOOL func_308(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x8738 Signature - 22 05 07 00 00 66 00 03 05 00 B6
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_232(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

BOOL func_309(int iParam0) // Position - 0x8772 Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 21
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

int func_310(int iParam0) // Position - 0x87B1 Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 2E
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

int func_311(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x8847 Signature - 22 04 06 00 00 66 00 39
{
	if (func_312(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_232(bParam1), hParam0, bParam3);
}

BOOL func_312(Hash hParam0) // Position - 0x887A Signature - 22 01 03 00 00 66 00 03 05 00 00
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

