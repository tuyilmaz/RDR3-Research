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
	var uLocal_54 = -1;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = -1082130432;
	var uLocal_60 = -1082130432;
	var uLocal_61 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 48
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1(&uLocal_16, uScriptParam_0);

	if (func_2() != -1)
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	
		if (func_4(func_3(0)) == 7)
			func_5(&uLocal_16);
	}

	if (func_2() == -1)
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
			func_5(&uLocal_16);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_16.f_9))
		func_5(&uLocal_16);

	while (func_6(&uLocal_16))
	{
		if (func_7())
			func_5(&uLocal_16);
	
		if (func_8(&uLocal_16))
			func_5(&uLocal_16);
	
		BUILTIN::WAIT(0);
	}

	func_5(&uLocal_16);
	return;
}

void func_1(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x94 Signature - 22 04 06 00 00 42
{
	NETWORK::RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(4);
	*uParam0 = 3;
	uParam0->f_1 = func_9(uParam1, uParam0);
	uParam0->f_19 = func_10(uParam0);
	func_11(uParam0);
	uParam0->f_20 = func_12();
	uParam0->f_12 = "script@mech@treasure_hunting@chest";
	uParam0->f_13 = "PBL_CHEST_01";

	if (!func_13(uParam0, 16))
		func_14(uParam0, 16);

	uParam0->f_2 = 0;
	uParam0->f_22 = func_15(uParam0);
	uParam0->f_5 = func_16(uParam0->f_22);
	uParam0->f_10 = uParam1;
	uParam0->f_9 = uParam1.f_1;
	uParam0->f_6 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_9, true) };
	func_17(&(uParam0->f_34), uParam0->f_6);
	func_18(*uParam0, uParam0->f_1);
	uParam0->f_17 = func_19(false);
	uParam0->f_18 = func_20();

	if (func_21(uParam0->f_6))
		if (func_13(uParam0, 16))
			if (func_22())
				if (!func_13(uParam0, 64))
					func_14(uParam0, 64);

	return;
}

int func_2() // Position - 0x181 Signature - 22 00 02 00 00 5D 17
{
	return Global_1572887.f_14;
}

struct<2> func_3(int iParam0) // Position - 0x18F Signature - 22 01 03 00 00 11
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_4(int iParam0, var uParam1) // Position - 0x1A3 Signature - 22 02 04 00 00 66 00 50
{
	return iParam0;
}

void func_5(var uParam0) // Position - 0x1AD Signature - 22 01 03 00 00 66 00 80
{
	func_23(&(uParam0->f_14), true, true);
	func_24(uParam0);

	if (func_13(uParam0, 2))
		func_25(uParam0->f_6);

	func_26(*uParam0, uParam0->f_1, 1);
	func_27(*uParam0, uParam0->f_1, 1);
	func_27(*uParam0, uParam0->f_1, 16);
	func_27(*uParam0, uParam0->f_1, 32);
	func_28();
	func_29();
	func_30(&(uParam0->f_34));

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_29))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_29, false);

	func_31(false);
	func_32(&(uParam0->f_34));
	SCRIPTS::_0xE7282390542F570D(uParam0->f_10);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_6(var uParam0) // Position - 0x249 Signature - 22 01 03 00 00 03 01 00 DA
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_5(uParam0);
		return false;
	}

	return true;
}

BOOL func_7() // Position - 0x263 Signature - 22 00 02 00 00 2F 50
{
	return false;
}

BOOL func_8(var uParam0) // Position - 0x26C Signature - 22 01 05 00 00 66
{
	BOOL flag;
	BOOL flag2;

	if (func_13(uParam0, 32))
	{
		if (MISC::GET_FRAME_COUNT() % 5 == 0 && func_33(Global_33, uParam0->f_6, 3f, true, true))
		{
			if (!func_34(uParam0))
			{
				func_18(*uParam0, uParam0->f_1);
				Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_2 = uParam0->f_1;
			}
		}
	}

	if (func_35(uParam0) < 10)
	{
		if (func_13(uParam0, 16))
			if (!func_36(*uParam0, uParam0->f_1, 16))
				if (func_37(uParam0->f_6, &(uParam0->f_26), &(uParam0->f_24), &(uParam0->f_25), func_13(uParam0, 1), 1073741824))
					func_38(*uParam0, uParam0->f_1, 16);
	
		if (func_39(*uParam0) && func_34(uParam0))
		{
			func_40(uParam0, 11);
		
			if (func_41(uParam0->f_14))
				func_23(&(uParam0->f_14), true, true);
		
			func_29();
		}
		else if (func_35(uParam0) <= 6 && func_35(uParam0) > 1)
		{
			if (func_36(*uParam0, uParam0->f_1, 16))
				func_40(uParam0, 12);
		}
	}

	flag = func_35(uParam0) <= 6 && !func_42(uParam0->f_14, true);
	flag2 = !func_13(uParam0, 32);

	if (func_43(func_13(uParam0, 2)))
		if (func_13(uParam0, 2))
			func_44(uParam0->f_14, uParam0->f_6);
		else
			func_45(&(uParam0->f_34), uParam0->f_6, flag, flag2, true, false);

	func_46(uParam0->f_14);
	func_47(uParam0->f_6, *uParam0, uParam0->f_1, 1092616192);

	switch (func_35(uParam0))
	{
		case 0:
			STREAMING::REQUEST_MODEL(uParam0->f_17, false);
			STREAMING::REQUEST_MODEL(uParam0->f_20, false);
			STREAMING::REQUEST_MODEL(uParam0->f_18, false);
		
			if (func_13(uParam0, 1))
				STREAMING::REQUEST_MODEL(uParam0->f_19, false);
		
			func_48(&(uParam0->f_34.f_6), uParam0->f_6, 1.5f, 1, 319, 0);
		
			if (func_13(uParam0, 32))
				if (!func_49(Global_1222327[*uParam0 /*251*/][uParam0->f_1], 16))
					func_40(uParam0, 1);
				else if (func_50(&(uParam0->f_11), uParam0->f_12, "PBL_LOOTED", uParam0->f_6, uParam0->f_26, uParam0->f_19, uParam0->f_24, uParam0->f_17, uParam0->f_25, uParam0->f_20, func_13(uParam0, 1)))
					func_40(uParam0, 12);
			else if (func_49(Global_1222327[*uParam0 /*251*/][uParam0->f_1], 16))
				if (func_50(&(uParam0->f_11), uParam0->f_12, "PBL_LOOTED", uParam0->f_6, uParam0->f_26, uParam0->f_19, uParam0->f_24, uParam0->f_17, uParam0->f_25, uParam0->f_20, func_13(uParam0, 1)))
					if (Global_1222327.f_2763 != uParam0->f_1)
						func_40(uParam0, 12);
					else
						func_40(uParam0, 15);
			else if (!func_21(uParam0->f_6))
				func_40(uParam0, 15);
			else if (!func_13(uParam0, 64))
				func_40(uParam0, 1);
			break;
	
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_17) && STREAMING::HAS_MODEL_LOADED(uParam0->f_20) && STREAMING::HAS_MODEL_LOADED(uParam0->f_18))
			{
				if (func_13(uParam0, 1))
				{
					if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_19))
						return false;
				
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_26))
						uParam0->f_26 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_19, uParam0->f_6, true, true, false, true);
				
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_26))
						return false;
				
					if (!MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(uParam0->f_6 + { 1f, 0f, 0f }, &(uParam0->f_33), &(uParam0->f_30)))
						return false;
				
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_26))
						ENTITY::SET_ENTITY_ROTATION(uParam0->f_26, func_51(uParam0->f_30, 0), 2, true);
				}
			
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
					uParam0->f_24 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_17, uParam0->f_6 + { -10f, 0f, 0f }, true, true, false, true);
			
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_25))
					uParam0->f_25 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_20, uParam0->f_6 + { -20f, 0f, 0f }, true, true, false, true);
			
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
					return false;
			
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_25))
					return false;
			
				func_40(uParam0, 2);
			}
			break;
	
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_11))
				uParam0->f_11 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_12, 64, uParam0->f_13, true, true);
		
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_11))
				return false;
		
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_11);
			func_40(uParam0, 3);
			break;
	
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_11, true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, uParam0->f_6, 0f, 0f, 0f, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "player", PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "CHEST", uParam0->f_24, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "DRESSING", uParam0->f_25, 0);
			
				if (func_13(uParam0, 1))
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_26))
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "MOUND", uParam0->f_26, 0);
			
				func_40(uParam0, 4);
			}
			break;
	
		case 4:
			if (func_43(func_13(uParam0, 2)))
			{
				if (func_13(uParam0, 1))
				{
					func_52(uParam0->f_26, uParam0->f_26, 0);
					MAP::_0x7563CBCA99253D1A(uParam0->f_26, joaat("blip_mp_role_collector_ilo"));
					func_40(uParam0, 5);
				}
				else
				{
					func_40(uParam0, 5);
				}
			}
			break;
	
		case 5:
			if (func_53(uParam0, 1097859072))
			{
				if (!func_41(uParam0->f_14))
					uParam0->f_14 = func_54("UC_CLT_DIG", joaat("INPUT_CONTEXT_X"), uParam0->f_6, 1070386381, 3, 1, 0, 4, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), 0);
			
				func_40(uParam0, 6);
			}
			break;
	
		case 6:
			if (func_41(uParam0->f_14))
			{
				if (!func_13(uParam0, 32))
					func_55(uParam0->f_14, &(uParam0->f_34.f_5));
			
				if (func_56(uParam0->f_14, true))
				{
					if (func_36(*uParam0, uParam0->f_1, 32))
					{
						func_31(true);
					
						if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
							TASK::TASK_DISMOUNT_ANIMAL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 0, 0, 0, 0);
					
						func_23(&(uParam0->f_14), true, true);
						func_57(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
						WEAPON::_HIDE_PED_WEAPONS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 2, false);
						func_27(*uParam0, uParam0->f_1, 32);
						func_40(uParam0, 7);
					}
				}
				else if (func_34(uParam0))
				{
					if (func_58(uParam0->f_14, true) > 0f)
					{
						func_59();
						func_61(func_60(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, true));
					}
					else if (func_58(uParam0->f_14, true) == 0f)
					{
						func_29();
					}
				}
			}
			break;
	
		case 7:
			func_59();
		
			if (func_62(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, true, false) == joaat("WEAPON_UNARMED") && func_62(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, true, false) == joaat("WEAPON_UNARMED") && !PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) && !PED::IS_PED_CARRYING_SOMETHING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) && !PED::IS_PED_USING_ANY_SCENARIO(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
			{
				func_24(uParam0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, uParam0->f_6, 0f, 0f, func_63(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), uParam0->f_6, 1), 2);
				func_40(uParam0, 8);
			}
			break;
	
		case 8:
			func_64();
			TASK::TASK_ENTER_ANIM_SCENE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_11, "player", uParam0->f_13, 1069379748, true, 128, 20000, -1082130432);
			uParam0->f_29 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(VOLUME::CREATE_VOLUME_CYLINDER(uParam0->f_6, 0f, 0f, 0f, 1f, 1f, 1f), true, 16);
			func_40(uParam0, 9);
			break;
	
		case 9:
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_11, false))
				func_40(uParam0, 10);
			break;
	
		case 10:
			if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_11, false) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_11, false))
			{
				if (!func_65(uParam0))
					return false;
			
				func_66(uParam0->f_9);
				func_67(func_13(uParam0, 1), func_13(uParam0, 2));
				func_31(false);
				func_32(&(uParam0->f_34));
			
				if (func_13(uParam0, 2))
					func_25(uParam0->f_6);
			
				if (func_13(uParam0, 16))
				{
					DECORATOR::DECOR_SET_BOOL(uParam0->f_24, "ChestDugUp", true);
					TASK::_SET_SCENARIO_CONTAINER_OPENING_STATE(uParam0->f_24, true);
					func_38(*uParam0, uParam0->f_1, 16);
				}
			
				func_66(uParam0->f_9);
				func_29();
			
				if (func_13(uParam0, 2) && func_13(uParam0, 32))
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), joaat("weapon_kit_metal_detector"), false, 0, false, false);
			
				func_40(uParam0, 15);
			}
			break;
	
		case 11:
			if (func_36(*uParam0, uParam0->f_1, 1))
			{
				if (func_68())
				{
					func_27(*uParam0, uParam0->f_1, 1);
					func_40(uParam0, 12);
				}
				else if (!func_39(*uParam0))
				{
					func_40(uParam0, 4);
					func_27(*uParam0, uParam0->f_1, 1);
				}
			}
			break;
	
		case 12:
			if (func_41(uParam0->f_14))
				func_23(&(uParam0->f_14), true, true);
		
			if (func_13(uParam0, 16))
			{
				uParam0->f_21 = func_69(uParam0->f_5);
				STREAMING::REQUEST_MODEL(uParam0->f_21, false);
			}
		
			func_27(*uParam0, uParam0->f_1, 1);
			func_40(uParam0, 13);
			break;
	
		case 13:
			if (!func_39(*uParam0))
			{
				if (STREAMING::HAS_MODEL_LOADED(uParam0->f_21))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28))
						uParam0->f_28 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_21, uParam0->f_6 + { 0.1f, 0f, 0f }, false, true, false, true);
				
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28))
						return false;
				
					MAP::_0x1726963E6049DB53(uParam0->f_28);
					func_40(uParam0, 14);
				}
			}
			break;
	
		case 14:
			if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_28) || !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(uParam0->f_28))
			{
				uParam0->f_28 = 0;
				func_40(uParam0, 13);
				return false;
			}
		
			if (TASK::DOES_SCENARIO_POINT_EXIST(TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())), true), uParam0->f_6, true) < 1.5f)
				{
					func_66(uParam0->f_9);
					Global_1222327.f_2763 = uParam0->f_1;
					func_40(uParam0, 15);
				}
			}
			break;
	}

	return false;
}

int func_9(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xCA4 Signature - 22 04 0A
{
	int num;
	int num2;
	int scenario;
	BOOL flag;

	scenario = uParam0.f_1;

	if (TASK::DOES_SCENARIO_POINT_EXIST(scenario))
	{
		num2 = BUILTIN::ROUND(TASK::_GET_SCENARIO_POINT_RADIUS(scenario));
		num = BUILTIN::ROUND(TASK::_GET_SCENARIO_POINT_HEADING(scenario, true));
		flag = num == 99;
	
		if (flag)
			func_14(uParam3, 32);
	
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_2 = num2;
	}

	switch (num2)
	{
		case 1:
			return 42;
	
		case 2:
			return 43;
	
		case 3:
			return 44;
	
		case 4:
			return 30;
	
		case 5:
			return 32;
	
		case 6:
			return 39;
	
		case 7:
			return 40;
	
		case 8:
			return 41;
	
		case 9:
			return 34;
	
		case 10:
			return 36;
	
		case 11:
			return 37;
	
		case 12:
			return 45;
	
		case 13:
			return 46;
	
		case 14:
			return 47;
	
		case 15:
			return 48;
	
		case 16:
			return 49;
	
		case 17:
			return 50;
	
		case 18:
			return 51;
	
		case 19:
			return 52;
	
		case 20:
			return 53;
	
		case 21:
			return 54;
	
		case 22:
			return 55;
	
		case 200:
			return 0;
	
		case 201:
			return 1;
	
		case 202:
			return 2;
	
		case 203:
			return 3;
	
		case 204:
			return 4;
	
		case 205:
			return 5;
	
		case 206:
			return 6;
	
		case 207:
			return 7;
	
		case 208:
			return 8;
	
		case 209:
			return 9;
	
		case 210:
			return 10;
	
		case 211:
			return 11;
	
		case 212:
			return 12;
	
		case 213:
			return 13;
	
		case 214:
			return 14;
	
		case 215:
			return 15;
	
		case 216:
			return 16;
	
		case 217:
			return 17;
	
		case 218:
			return 18;
	
		case 219:
			return 19;
	
		case 220:
			return 20;
	
		case 221:
			return 21;
	
		case 222:
			return 22;
	
		case 223:
			return 23;
	
		case 224:
			return 24;
	
		case 225:
			return 25;
	
		case 226:
			return 26;
	
		case 227:
			return 27;
	
		case 228:
			return 28;
	
		case 229:
			return 29;
	
		case 230:
			return 31;
	
		case 231:
			return 33;
	
		case 232:
			return 35;
	
		case 233:
			return 38;
	
		default:
		
	}

	return 0;
}

int func_10(var uParam0) // Position - 0xF5F Signature - 22 01 04 00 00 66 00 27 01 3C 0B
{
	int num;

	switch (uParam0->f_1)
	{
		case 30:
			num = joaat("mp005_p_dirtpile_big01_buried");
			break;
	
		case 32:
			num = joaat("mp005_p_dirtpile_sca03_buried");
			break;
	
		case 34:
			num = joaat("mp005_p_dirtpile_roa_buried");
			break;
	
		case 36:
			num = joaat("mp005_p_dirtpile_bay_buried");
			break;
	
		case 37:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 39:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 40:
			num = joaat("mp005_p_dirtpile_bay_buried");
			break;
	
		case 41:
			num = joaat("mp005_p_dirtpile_roa_buried");
			break;
	
		case 42:
			num = joaat("mp005_p_dirtpile_big03_buried");
			break;
	
		case 43:
			num = joaat("mp005_p_dirtpile_cum_buried");
			break;
	
		case 44:
			num = joaat("mp005_p_dirtpile_gen_buried");
			break;
	}

	return num;
}

void func_11(var uParam0) // Position - 0x1023 Signature - 22 01 03 00 00 66 00 27 01
{
	switch (uParam0->f_1)
	{
		case 30:
		case 32:
		case 34:
		case 36:
		case 37:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
			func_14(uParam0, 1);
			break;
	
		default:
			func_14(uParam0, 2);
			break;
	}

	return;
}

int func_12() // Position - 0x108B Signature - 22 00 03 00 00 2F
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 40000);

	if (randomIntInRange > 30000)
		return joaat("mp005_p_dressinglbmhay04x");
	else if (randomIntInRange > 20000)
		return joaat("mp005_p_dressinglbmhay03x");
	else if (randomIntInRange > 10000)
		return joaat("mp005_p_dressinglbmhay02x");

	return joaat("mp005_p_dressinglbmhay01x");
}

BOOL func_13(var uParam0, int iParam1) // Position - 0x10D9 Signature - 22 02 04 00 00 66 00 27 0F 66 01 39 EF 25 00 50
{
	return func_49(uParam0->f_15, iParam1);
}

void func_14(var uParam0, int iParam1) // Position - 0x10EB Signature - 22 02 04 00 00 66 00 27 0F 66 01 39 EF 25 00 05
{
	if (!func_49(uParam0->f_15, iParam1))
		func_70(&(uParam0->f_15), iParam1);

	return;
}

int func_15(var uParam0) // Position - 0x110B Signature - 22 01 04 00 00 66 00 27 01 3C 38
{
	int num;

	switch (uParam0->f_1)
	{
		case 0:
		case 1:
		case 2:
			num = joaat("COLLECTIBLE_HRLM_BRUSH_BOAR");
			break;
	
		case 3:
		case 4:
		case 5:
			num = joaat("COLLECTIBLE_HRLM_BRUSH_EBONY");
			break;
	
		case 6:
		case 7:
		case 8:
			num = joaat("COLLECTIBLE_HRLM_BRUSH_GOATHAIR");
			break;
	
		case 9:
		case 10:
		case 11:
			num = joaat("COLLECTIBLE_HRLM_BRUSH_HORSEHAIR");
			break;
	
		case 12:
		case 13:
		case 14:
			num = joaat("COLLECTIBLE_HRLM_BRUSH_ROSEWOOD");
			break;
	
		case 15:
		case 16:
		case 17:
			num = joaat("COLLECTIBLE_HRLM_BRUSH_ROSEWOOD_NG");
			break;
	
		case 18:
		case 19:
		case 20:
			num = joaat("COLLECTIBLE_HRLM_COMB_BOXWOOD");
			break;
	
		case 21:
		case 22:
		case 23:
			num = joaat("COLLECTIBLE_HRLM_COMB_CHERRYWOOD");
			break;
	
		case 24:
		case 25:
		case 26:
			num = joaat("COLLECTIBLE_HRLM_COMB_IVORY");
			break;
	
		case 27:
		case 28:
		case 29:
			num = joaat("COLLECTIBLE_HRLM_COMB_TORTOISESHELL");
			break;
	
		case 30:
		case 31:
		case 32:
		case 48:
		case 49:
			num = joaat("collectible_hrlm_hairpin_ebony");
			break;
	
		case 33:
		case 34:
		case 35:
		case 53:
			num = joaat("collectible_hrlm_hairpin_ivory");
			break;
	
		case 36:
		case 37:
		case 38:
		case 54:
		case 55:
			num = joaat("collectible_hrlm_hairpin_jade");
			break;
	
		case 39:
		case 40:
		case 41:
		case 50:
		case 51:
		case 52:
			num = joaat("collectible_hrlm_hairpin_metal");
			break;
	
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			num = joaat("collectible_hrlm_hairpin_wooden");
			break;
	}

	return num;
}

int func_16(int iParam0) // Position - 0x1305 Signature - 22 01 03 00 00 66 00 3C 5B
{
	switch (iParam0)
	{
		case joaat("collectible_coin_1700_ny_tkn"):
			return joaat("provision_coin_1700_ny_tkn");
	
		case joaat("collectible_jewelry_blck_pearl_necklace"):
			return joaat("provision_jewelry_blck_pearl_necklace");
	
		case joaat("collectible_coin_1800_five_dlr"):
			return joaat("provision_coin_1800_five_dlr");
	
		case joaat("collectible_arrowhead_slate"):
			return joaat("provision_arrowhead_slate");
	
		case joaat("collectible_jewelry_rudy_dngl_earring"):
			return joaat("provision_jewelry_rudy_dngl_earring");
	
		case joaat("collectible_jewelry_moon_ring"):
			return joaat("provision_jewelry_moon_ring");
	
		case joaat("collectible_coin_1800_hlf_dime"):
			return joaat("provision_coin_1800_hlf_dime");
	
		case joaat("collectible_jewelry_drop_earring"):
			return joaat("provision_jewelry_drop_earring");
	
		case joaat("collectible_coin_1797_gld_eag"):
			return joaat("provision_coin_1797_gld_eag");
	
		case joaat("collectible_coin_1794_slv_dlr"):
			return joaat("provision_coin_1794_slv_dlr");
	
		case joaat("collectible_jewelry_coral_dngl_earring"):
			return joaat("provision_jewelry_coral_dngl_earring");
	
		case joaat("collectible_coin_1789_pny"):
			return joaat("provision_coin_1789_pny");
	
		case joaat("COLLECTIBLE_EGG_EAGLE"):
			return joaat("provision_eagle_egg");
	
		case joaat("collectible_jewelry_whtgld_dmnd_ring"):
			return joaat("provision_jewelry_whtgld_dmnd_ring");
	
		case joaat("collectible_hrlm_hairpin_wooden"):
			return joaat("provision_hrlm_hairpin_wooden");
	
		case joaat("collectible_jewelry_qn_dmnd_earring"):
			return joaat("provision_jewelry_qn_dmnd_earring");
	
		case joaat("COLLECTIBLE_HRLM_BRUSH_HORSEHAIR"):
			return joaat("provision_hrlm_brush_horsehair");
	
		case joaat("collectible_jewelry_emerald_ring"):
			return joaat("provision_jewelry_emerald_ring");
	
		case joaat("collectible_arrowhead_rough"):
			return joaat("provision_arrowhead_rough");
	
		case joaat("collectible_jewelry_pearl_bracelet"):
			return joaat("provision_jewelry_pearl_bracelet");
	
		case joaat("collectible_coin_1800_gld_dlr"):
			return joaat("provision_coin_1800_gld_dlr");
	
		case joaat("COLLECTIBLE_EGG_GOOSE"):
			return joaat("provision_goose_egg");
	
		case joaat("collectible_arrowhead_chipped"):
			return joaat("provision_arrowhead_chipped");
	
		case joaat("collectible_arrowhead_raw"):
			return joaat("provision_arrowhead_raw");
	
		case joaat("collectible_jewelry_gld_bngle_bracelet"):
			return joaat("provision_jewelry_gld_bngle_bracelet");
	
		case joaat("COLLECTIBLE_HRLM_COMB_BOXWOOD"):
			return joaat("provision_hrlm_comb_boxwood");
	
		case joaat("COLLECTIBLE_HRLM_BRUSH_BOAR"):
			return joaat("provision_hrlm_brush_boar");
	
		case joaat("collectible_jewelry_emerald_earring"):
			return joaat("provision_jewelry_emerald_earring");
	
		case joaat("collectible_jewelry_gld_cross_necklace"):
			return joaat("provision_jewelry_gld_cross_necklace");
	
		case joaat("collectible_jewelry_turq_stud_earring"):
			return joaat("provision_jewelry_turq_stud_earring");
	
		case joaat("COLLECTIBLE_EGG_VULTURE"):
			return joaat("provision_vulture_egg");
	
		case joaat("collectible_coin_1796_hlf_pny"):
			return joaat("provision_coin_1796_hlf_pny");
	
		case joaat("collectible_hrlm_hairpin_jade"):
			return joaat("provision_hrlm_hairpin_jade");
	
		case joaat("collectible_jewelry_sphr_bracelet"):
			return joaat("provision_jewelry_sphr_bracelet");
	
		case joaat("collectible_jewelry_grnet_bracelet"):
			return joaat("provision_jewelry_grnet_bracelet");
	
		case joaat("collectible_hrlm_hairpin_ivory"):
			return joaat("provision_hrlm_hairpin_ivory");
	
		case joaat("collectible_arrowhead_obsidian"):
			return joaat("provision_arrowhead_obsidian");
	
		case joaat("collectible_jewelry_coral_ring"):
			return joaat("provision_jewelry_coral_ring");
	
		case joaat("COLLECTIBLE_HRLM_BRUSH_ROSEWOOD_NG"):
			return joaat("provision_hrlm_brush_rosewood_ng");
	
		case joaat("collectible_jewelry_gld_pendt_necklace"):
			return joaat("provision_jewelry_gld_pendt_necklace");
	
		case joaat("collectible_arrowhead_splintered"):
			return joaat("provision_arrowhead_splintered");
	
		case joaat("COLLECTIBLE_EGG_SPOONBILL"):
			return joaat("provision_spoonbill_egg");
	
		case joaat("collectible_jewelry_french_dmnd_ring"):
			return joaat("provision_jewelry_french_dmnd_ring");
	
		case joaat("collectible_jewelry_pers_turq_ring"):
			return joaat("provision_jewelry_pers_turq_ring");
	
		case joaat("collectible_hrlm_hairpin_metal"):
			return joaat("provision_hrlm_hairpin_metal");
	
		case joaat("collectible_arrowhead_agate"):
			return joaat("provision_arrowhead_agate");
	
		case joaat("collectible_jewelry_dmnd_pendt_earring"):
			return joaat("provision_jewelry_dmnd_pendt_earring");
	
		case joaat("collectible_jewelry_amethyst_necklace"):
			return joaat("provision_jewelry_amethyst_necklace");
	
		case joaat("collectible_coin_1792_lib_qtr"):
			return joaat("provision_coin_1792_lib_qtr");
	
		case joaat("collectible_jewelry_turquoise_ring"):
			return joaat("provision_jewelry_turquoise_ring");
	
		case joaat("collectible_jewelry_topaz_necklace"):
			return joaat("provision_jewelry_topaz_necklace");
	
		case joaat("COLLECTIBLE_HRLM_COMB_CHERRYWOOD"):
			return joaat("provision_hrlm_comb_cherrywood");
	
		case joaat("collectible_jewelry_dmnd_bngle_bracelet"):
			return joaat("provision_jewelry_dmnd_bngle_bracelet");
	
		case joaat("collectible_jewelry_pearl_ring"):
			return joaat("provision_jewelry_pearl_ring");
	
		case joaat("collectible_coin_1795_hlf_eag"):
			return joaat("provision_coin_1795_hlf_eag");
	
		case joaat("COLLECTIBLE_EGG_HAWK"):
			return joaat("provision_hawk_egg");
	
		case joaat("COLLECTIBLE_HRLM_BRUSH_ROSEWOOD"):
			return joaat("provision_hrlm_brush_rosewood");
	
		case joaat("COLLECTIBLE_EGG_CONDOR"):
			return joaat("provision_condor_egg");
	
		case joaat("collectible_jewelry_mthr_pearl_necklace"):
			return joaat("provision_jewelry_mthr_pearl_necklace");
	
		case joaat("COLLECTIBLE_HRLM_BRUSH_GOATHAIR"):
			return joaat("provision_hrlm_brush_goathair");
	
		case joaat("collectible_hrlm_hairpin_ebony"):
			return joaat("provision_hrlm_hairpin_ebony");
	
		case joaat("collectible_jewelry_porcelain_necklace"):
			return joaat("provision_jewelry_porcelain_necklace");
	
		case joaat("collectible_jewelry_carved_bracelet"):
			return joaat("provision_jewelry_carved_bracelet");
	
		case joaat("collectible_jewelry_sphr_bngle_bracelet"):
			return joaat("provision_jewelry_sphr_bngle_bracelet");
	
		case joaat("collectible_jewelry_pearl_earring"):
			return joaat("provision_jewelry_pearl_earring");
	
		case joaat("collectible_arrowhead_quartz"):
			return joaat("provision_arrowhead_quartz");
	
		case joaat("collectible_jewelry_onyx_ring"):
			return joaat("provision_jewelry_onyx_ring");
	
		case joaat("collectible_jewelry_turquoise_bracelet"):
			return joaat("provision_jewelry_turquoise_bracelet");
	
		case joaat("collectible_jewelry_ylwgld_dmnd_ring"):
			return joaat("provision_jewelry_ylwgld_dmnd_ring");
	
		case joaat("COLLECTIBLE_EGG_EGRET"):
			return joaat("provision_egret_egg");
	
		case joaat("collectible_coin_1792_qtr"):
			return joaat("provision_coin_1792_qtr");
	
		case joaat("collectible_jewelry_slvr_pearl_necklace"):
			return joaat("provision_jewelry_slvr_pearl_necklace");
	
		case joaat("COLLECTIBLE_EGG_HERON"):
			return joaat("provision_heron_egg");
	
		case joaat("collectible_jewelry_elk_tooth_earring"):
			return joaat("provision_jewelry_elk_tooth_earring");
	
		case joaat("COLLECTIBLE_HRLM_COMB_IVORY"):
			return joaat("provision_hrlm_comb_ivory");
	
		case joaat("collectible_jewelry_gld_pearl_necklace"):
			return joaat("provision_jewelry_gld_pearl_necklace");
	
		case joaat("collectible_arrowhead_flint"):
			return joaat("provision_arrowhead_flint");
	
		case joaat("collectible_jewelry_grnet_post_earring"):
			return joaat("provision_jewelry_grnet_post_earring");
	
		case joaat("COLLECTIBLE_EGG_DUCK"):
			return joaat("provision_duck_egg");
	
		case joaat("collectible_coin_1800_gld_qtr"):
			return joaat("provision_coin_1800_gld_qtr");
	
		case joaat("collectible_coin_1787_cent_tkn"):
			return joaat("provision_coin_1787_cent_tkn");
	
		case joaat("COLLECTIBLE_HRLM_BRUSH_EBONY"):
			return joaat("provision_hrlm_brush_ebony");
	
		case joaat("COLLECTIBLE_HRLM_COMB_TORTOISESHELL"):
			return joaat("provision_hrlm_comb_tortoiseshell");
	
		case joaat("collectible_coin_1798_slv_dlr"):
			return joaat("provision_coin_1798_slv_dlr");
	
		case joaat("collectible_arrowhead_bone"):
			return joaat("provision_arrowhead_bone");
	
		case joaat("collectible_arrowhead_feldspar"):
			return joaat("provision_arrowhead_feldspar");
	
		case joaat("collectible_coin_1792_nickel"):
			return joaat("provision_coin_1792_nickel");
	
		case joaat("COLLECTIBLE_EGG_LOON"):
			return joaat("provision_loon_egg");
	
		case joaat("collectible_arrowhead_crude"):
			return joaat("provision_arrowhead_crude");
	
		case joaat("collectible_jewelry_topaz_ring"):
			return joaat("provision_jewelry_topaz_ring");
	
		case joaat("collectible_jewelry_wht_dmnd_earring"):
			return joaat("provision_jewelry_wht_dmnd_earring");
	
		default:
		
	}

	return 0;
}

void func_17(var uParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x1810 Signature - 22 04 06 00 00 66 00 27
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_7))
	{
		uParam0->f_7 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0f, 0f, 0f, 2f, 2f, 2f, "colleactable restriction volume");
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_7, 6, 0, 0, -1, -1, 0);
	}

	return;
}

void func_18(var uParam0, var uParam1) // Position - 0x1847 Signature - 22 02 04 00 00 66 00 03
{
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 = uParam0;
	return;
}

int func_19(BOOL bParam0) // Position - 0x185D Signature - 22 01 05 00 00 42
{
	int endRange;
	int randomIntInRange;

	endRange = 4;
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);

	if (bParam0)
		return joaat("p_strongbox_snow_01x");

	switch (randomIntInRange)
	{
		case 0:
			return joaat("p_strongbox_muddy_01x");
	
		case 1:
			return joaat("p_strongbox_snow_01x");
	
		case 2:
			return joaat("p_strongbox_waterlogged_01x");
	
		case 3:
			return joaat("p_strongbox_rusted_01x");
	
		default:
		
	}

	return joaat("p_strongbox_muddy_01x");
}

int func_20() // Position - 0x18C3 Signature - 22 00 04
{
	int endRange;
	int randomIntInRange;

	endRange = 6;
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);

	switch (randomIntInRange)
	{
		case 0:
			return joaat("s_jewlerybox_sm_fancy01x");
	
		case 1:
			return joaat("s_jewlerybox_sm_fancy02x");
	
		case 2:
			return joaat("s_jewlerybox_sm_plain01x");
	
		case 3:
			return joaat("s_jewlerybox_sm_plain02x");
	
		case 4:
			return joaat("s_jewlerybox_sm_poor01x");
	
		case 5:
			return joaat("s_jewlerybox_sm_poor02x");
	
		default:
		
	}

	return joaat("s_jewlerybox_sm_poor01x");
}

BOOL func_21(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x1938 Signature - 22 03 05 00 00 1D 4B
{
	return !PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS(vParam0);
}

BOOL func_22() // Position - 0x1949 Signature - 22 00 06 00 00 03 01 00 9E 67 04 2F 67 02 66 02 6D 1F 23 75 00 66 02 03 05 00 D0 67 03 66 03 03 05 00 E5 05 8B 03 00 68 57 00 66 03 03 05 00 B5 05 8B 03 00 68 4A 00 66 03 67 05 66 05 66 04 72 3F 00 66 05 5D 92 A5 12 63 09 27 01 66 04 5D 92 A5 12 63 09 27 01 15 28 00 66 05 5D 92 A5 12 63 09 27 02 66 04 5D 92 A5 12 63 09 27 02 15 11 00 66 05 5D 92 A5 12 63 09 27 06
{
	int i;
	Player player;
	Player player2;
	Player player3;

	player2 = PLAYER::PLAYER_ID();

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else
		{
			player3 = player;
		
			if (player3 != player2)
				if (Global_1222034[player3 /*9*/].f_1 == Global_1222034[player2 /*9*/].f_1)
					if (Global_1222034[player3 /*9*/].f_2 == Global_1222034[player2 /*9*/].f_2)
						if (Global_1222034[player3 /*9*/].f_6)
							return true;
		}
	}

	return false;
}

void func_23(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x19D7 Signature - 22 03 06 00 00 66 01
{
	int num;

	if (bParam1 && !func_41(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_71(*uParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_72(num);
	*uParam0 = 0;
	return;
}

void func_24(var uParam0) // Position - 0x1A2B Signature - 22 01 03 00 00 66 00 27 1A
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_26))
		func_73(uParam0->f_26, uParam0->f_26, 0);

	return;
}

void func_25(var uParam0, var uParam1, var uParam2) // Position - 0x1A4C Signature - 22 03 05 00 00 1D 5D
{
	if (func_74(Global_1222323, uParam0))
		Global_1222323 = { 0f, 0f, 0f };

	return;
}

void func_26(var uParam0, var uParam1, BOOL bParam2) // Position - 0x1A6E Signature - 22 03 20
{
	var value;
	int num;
	int num2;

	if (!NETWORK::HAS_NETWORK_TIME_STARTED())
		return;

	value = func_75(1, 8);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&value, PLAYER::PLAYER_ID());
	num.f_4 = 1;
	num = 40;
	num.f_4 = bParam2;
	num.f_5 = uParam0;
	num.f_6 = uParam1;
	num.f_1 = PLAYER::GET_PLAYER_INDEX();

	if (bParam2)
	{
		num2.f_12 = -1;
		num2.f_12.f_1 = -1;
		num2.f_14 = 255;
		num2.f_15 = 255;
		num2.f_14 = Global_1295666.f_149[Global_1295666];
		num2 = 0;
		num2.f_1 = PLAYER::GET_PLAYER_INDEX();
		num2.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		num2.f_4 = 103;
		func_77(num2, func_76(Global_34, 0f, 0f, 0f, 300f, 300f, 300f, joaat("volSphere"), false, 8), false, false);
	}

	func_78(&num, &value);
	return;
}

void func_27(int iParam0, int iParam1, int iParam2) // Position - 0x1B3E Signature - 22 03 05 00 00 66 01 66 00 5D B7 A6 12 63 FB 63 01 66 02 39 41
{
	func_79(&Global_1222327[iParam0 /*251*/][iParam1], iParam2);
	return;
}

void func_28() // Position - 0x1B58 Signature - 22 00 02 00 00 08
{
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 = -1;
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_2 = -1;
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_8 = -1f;
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
	return;
}

void func_29() // Position - 0x1B94 Signature - 22 00 02 00 00 03 01 00 9E 5D 92 A5 12 63 09 27 04 8B 27
{
	if (Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_8 = -1f;
	}

	return;
}

void func_30(var uParam0) // Position - 0x1BD2 Signature - 22 01 03 00 00 66 00 39 51
{
	func_80(uParam0);
	func_81(&(uParam0->f_6), 1);
	return;
}

void func_31(BOOL bParam0) // Position - 0x1BE9 Signature - 22 01 03 00 00 66 00 8B 09
{
	if (bParam0)
		func_82(0, 6);
	else
		func_83(0, 6, false);

	return;
}

void func_32(var uParam0) // Position - 0x1C06 Signature - 22 01 03 00 00 66 00 27 07
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_7))
		VOLUME::DELETE_VOLUME(uParam0->f_7);

	return;
}

BOOL func_33(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1C21 Signature - 22 07 09
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_84(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

BOOL func_34(var uParam0) // Position - 0x1C7C Signature - 22 01 03 00 00 66 00 6D 20
{
	if (!func_13(uParam0, 32))
		return Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 == *uParam0;

	return Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 == *uParam0 && Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_2 == uParam0->f_1;
}

int func_35(var uParam0) // Position - 0x1CCC Signature - 22 01 03 00 00 66 00 27 02
{
	return uParam0->f_2;
}

BOOL func_36(int iParam0, int iParam1, int iParam2) // Position - 0x1CD8 Signature - 22 03 05 00 00 66 01 66 00 5D B7 A6 12 63 FB 17
{
	return func_49(Global_1222327[iParam0 /*251*/][iParam1], iParam2);
}

BOOL func_37(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, BOOL bParam6, int iParam7) // Position - 0x1CF2 Signature - 22 08 39
{
	var unk;
	var unk3;
	var unk5;
	var unk7;
	var unk12;
	var unk17;

	unk = 1;
	unk3 = 1;
	unk5 = 1;
	unk7 = 4;
	unk7[0] = joaat("p_strongbox_muddy_01x");
	unk7[1] = joaat("p_strongbox_snow_01x");
	unk7[2] = joaat("p_strongbox_waterlogged_01x");
	unk7[3] = joaat("p_strongbox_rusted_01x");
	unk12 = 4;
	unk12[0] = joaat("mp005_p_dressinglbmhay04x");
	unk12[1] = joaat("mp005_p_dressinglbmhay03x");
	unk12[2] = joaat("mp005_p_dressinglbmhay02x");
	unk12[3] = joaat("mp005_p_dressinglbmhay01x");

	if (bParam6)
	{
		unk17 = 30;
		unk17[0] = joaat("mp005_p_dirtpile_hen_b_buried");
		unk17[1] = joaat("mp005_p_dirtpile_gen_buried");
		unk17[2] = joaat("mp005_p_dirtpile_sca03_buried");
		unk17[3] = joaat("mp005_p_dirtpile_bay_buried");
		unk17[4] = joaat("mp005_p_dirtpile_bay_unburied");
		unk17[5] = joaat("mp005_p_dirtpile_big01_buried");
		unk17[6] = joaat("mp005_p_dirtpile_big01_unburied");
		unk17[7] = joaat("mp005_p_dirtpile_big02_mine_buried");
		unk17[8] = joaat("mp005_p_dirtpile_big02_mine_unburied");
		unk17[9] = joaat("mp005_p_dirtpile_big03_buried");
		unk17[10] = joaat("mp005_p_dirtpile_big03_unburied");
		unk17[11] = joaat("mp005_p_dirtpile_cum_buried");
		unk17[12] = joaat("mp005_p_dirtpile_cum_unburied");
		unk17[13] = joaat("MP005_P_DIRTPILE_GRI_MINES_BURIED");
		unk17[14] = joaat("mp005_p_dirtpile_gri_mines_unburied");
		unk17[15] = joaat("mp005_p_dirtpile_hea_buried");
		unk17[16] = joaat("mp005_p_dirtpile_hea_unburied");
		unk17[17] = joaat("mp005_p_dirtpile_hen_buried");
		unk17[18] = joaat("mp005_p_dirtpile_hen_unburied");
		unk17[19] = joaat("mp005_p_dirtpile_rio_buried");
		unk17[20] = joaat("mp005_p_dirtpile_rio_unburied");
		unk17[21] = joaat("mp005_p_dirtpile_roa_buried");
		unk17[22] = joaat("mp005_p_dirtpile_roa_unburied");
		unk17[23] = joaat("mp005_p_dirtpile_sca01_buried");
		unk17[24] = joaat("mp005_p_dirtpile_sca01_unburied");
		unk17[25] = joaat("mp005_p_dirtpile_sca02_buried");
		unk17[26] = joaat("mp005_p_dirtpile_sca02_unburied");
		unk17[27] = joaat("mp005_p_dirtpile_shovel01x");
		unk17[28] = joaat("mp005_p_dirtpile_tall_buried");
		unk17[29] = joaat("mp005_p_dirtpile_tall_unburied");
	
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
			if (func_85(&unk, &unk17, 1, uParam0, iParam7) > 0)
				*uParam3 = unk[0];
	
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
			return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam5))
		if (func_85(&unk5, &unk12, 1, uParam0, iParam7) > 0)
			*uParam5 = unk5[0];

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam5))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		if (func_85(&unk3, &unk7, 1, uParam0, iParam7) > 0)
		{
			if (DECORATOR::DECOR_EXIST_ON(unk3[0], "ChestDugUp"))
			{
				*uParam4 = unk3[0];
				return true;
			}
		}
	}
	else if (func_85(&unk3, &unk7, 1, uParam0, iParam7) > 0)
	{
		if (DECORATOR::DECOR_EXIST_ON(unk3[0], "ChestDugUp"))
		{
			*uParam4 = unk3[0];
			return true;
		}
	}

	return false;
}

void func_38(int iParam0, int iParam1, int iParam2) // Position - 0x1F85 Signature - 22 03 05 00 00 66 01 66 00 5D B7 A6 12 63 FB 63 01 66 02 39 25
{
	func_70(&Global_1222327[iParam0 /*251*/][iParam1], iParam2);
	return;
}

BOOL func_39(int iParam0) // Position - 0x1F9F Signature - 22 01 09 00 00 4C
{
	int i;
	Player player;
	float num;
	Player player2;
	Player player3;
	Player player4;

	num = -1f;
	player3 = PLAYER::PLAYER_ID();

	if (Global_1222034[player3 /*9*/].f_1 != iParam0)
		return false;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else
		{
			player4 = player;
		
			if (Global_1222034[player4 /*9*/].f_1 == Global_1222034[player3 /*9*/].f_1)
			{
				if (Global_1222034[player4 /*9*/].f_2 == Global_1222034[player3 /*9*/].f_2)
				{
					if (Global_1222034[player4 /*9*/].f_4)
					{
						if (num == -1f || num >= Global_1222034[player4 /*9*/].f_8)
						{
							num = Global_1222034[player4 /*9*/].f_8;
							player2 = player4;
						}
					}
				}
			}
		}
	}

	if (num > 0f)
	{
		if (Global_1295666.f_149[Global_1295666] != Global_1295666.f_149[player2])
		{
			if (!func_49(Global_1222327[Global_1222034[player3 /*9*/].f_1 /*251*/][Global_1222034[player3 /*9*/].f_2], 1))
				func_70(&Global_1222327[Global_1222034[player3 /*9*/].f_1 /*251*/][Global_1222034[player3 /*9*/].f_2], 1);
		
			return true;
		}
	
		if (!func_49(Global_1222327[Global_1222034[player3 /*9*/].f_1 /*251*/][Global_1222034[player3 /*9*/].f_2], 32))
			func_70(&Global_1222327[Global_1222034[player3 /*9*/].f_1 /*251*/][Global_1222034[player3 /*9*/].f_2], 32);
	}

	return false;
}

void func_40(var uParam0, int iParam1) // Position - 0x2114 Signature - 22 02 04 00 00 66 01 66 00 6C
{
	uParam0->f_2 = iParam1;
	return;
}

BOOL func_41(int iParam0) // Position - 0x2122 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 6D
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

BOOL func_42(int iParam0, BOOL bParam1) // Position - 0x2161 Signature - 22 02 05 00 00 66 01 6A 8B 08 00 66 00 39 22 21 00 05 69 8B 04 00 2F
{
	int num;

	if (bParam1 && !func_41(iParam0))
		return false;

	num = func_71(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1951910[num /*23*/].f_3);
}

BOOL func_43(BOOL bParam0) // Position - 0x2194 Signature - 22 01 03 00 00 37
{
	if (func_86(joaat("kit_collector_spade"), 1))
		if (bParam0)
			if (func_86(joaat("weapon_kit_metal_detector"), 1))
				return true;
		else
			return true;

	return false;
}

void func_44(var uParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x21C7 Signature - 22 04 06 00 00 1D
{
	if (!func_21(vParam1))
	{
		func_25(vParam1);
		return;
	}

	if (_IS_NULL_VECTOR(Global_1222323))
		Global_1222323 = { vParam1 };
	else if (!func_74(Global_1222323, vParam1))
		if (BUILTIN::VDIST2(Global_34, vParam1) < BUILTIN::VDIST2(Global_34, Global_1222323))
			Global_1222323 = { vParam1 };

	return;
}

void func_45(var uParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x223C Signature - 22 08 0F
{
	BOOL flag;
	BOOL flag2;
	float num;
	int value;
	int frequency;

	if (!_IS_NULL_VECTOR(Global_1222323))
	{
		if (MISC::GET_FRAME_COUNT() % 30 == 0 || uParam0->f_10 == -1f)
			uParam0->f_10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_1222323, vParam1, true);
	
		if (uParam0->f_10 <= 5f)
			flag = true;
	}

	flag2 = func_88(uParam0, bParam4, flag);

	if (!flag2)
		if (uParam0->f_8)
			uParam0->f_8 = 0;

	if (uParam0->f_11 < 8)
		uParam0->f_11 = uParam0->f_11 + 1;
	else
		uParam0->f_11 = 0;

	if (!uParam0->f_8)
	{
		if (uParam0->f_11 == 0)
			uParam0->f_8 = 1;
	
		return;
	}

	if (MISC::GET_FRAME_COUNT() % 30 == 0 || uParam0->f_9 == -1f)
		uParam0->f_9 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vParam1, true);

	num = 10f;
	num = num * (1f + func_89());

	switch (*uParam0)
	{
		case 0:
			if (uParam0->f_9 < num)
			{
				if (bParam5)
				{
					if (AUDIO::PREPARE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman", false))
					{
						uParam0->f_4 = AUDIO::GET_SOUND_ID();
					
						if (Global_1940199.f_38 != joaat("weapon_kit_metal_detector"))
							AUDIO::_PLAY_SOUND_FROM_POSITION_WITH_ID(uParam0->f_4, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", false, 0, bParam6);
					
						func_90(uParam0, 1);
					}
				}
				else
				{
					func_90(uParam0, 1);
				}
			}
			break;
	
		case 1:
			value = BUILTIN::FLOOR(500f * ((num - uParam0->f_9) / num));
			frequency = BUILTIN::FLOOR(256f * ((num - uParam0->f_9) / num));
		
			if (value < 0)
				value = MISC::ABSI(value);
		
			if (value > 9999)
				value = 9999;
		
			if (uParam0->f_9 < 3f && bParam7)
				func_91(250);
		
			PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, value, frequency);
			func_92(&(uParam0->f_1));
			func_90(uParam0, 2);
			break;
	
		case 2:
			if (uParam0->f_9 >= num + 5f || !bParam4 || flag)
			{
				if (bParam5)
					func_80(uParam0);
			
				func_90(uParam0, 0);
			}
			else if (func_93(&(uParam0->f_1)) >= 2f)
			{
				func_90(uParam0, 1);
			}
			else if (uParam0->f_9 < 3f && bParam7)
			{
				func_91(250);
			}
			break;
	}

	return;
}

void func_46(int iParam0) // Position - 0x2465 Signature - 22 01 04 00 00 66 00 39 22
{
	Entity firstEntityPedIsCarrying;

	if (func_41(iParam0))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_1295666.f_3);
	
		if (PED::IS_PED_CARRYING_SOMETHING(Global_1295666.f_3) || TASK::IS_PED_GETTING_UP(Global_1295666.f_3) || PED::IS_PED_RAGDOLL(Global_1295666.f_3) || !func_94() || Global_1102813.f_3664 || ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying) || PED::IS_PED_JUMPING(Global_1295666.f_3) || PED::IS_PED_CLIMBING(Global_1295666.f_3) || PED::IS_PED_FALLING(Global_1295666.f_3) || PED::IS_PED_HOGTIED(Global_33) || func_95(Global_33) || PED::IS_PED_IN_MELEE_COMBAT(Global_33) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 1, 0))
			if (func_96(iParam0, false))
				func_97(iParam0, false, true, true);
		else if (!func_96(iParam0, false))
			func_97(iParam0, true, true, true);
	}

	return;
}

void func_47(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5) // Position - 0x2563 Signature - 22 06 08 00 00 70
{
	if (func_60(Global_33, uParam0, true) < iParam5)
	{
		if (Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 != iParam3)
			Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 = iParam3;
	
		if (Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_2 != iParam4)
			Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_2 = iParam4;
	}

	return;
}

void func_48(int iParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6, int iParam7) // Position - 0x25BB Signature - 22 08 0A 00 00 66 00
{
	if (!func_98(iParam0))
	{
		*iParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
	
		if (func_98(iParam0))
		{
		}
	}

	return;
}

BOOL func_49(int iParam0, int iParam1) // Position - 0x25EF Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 0D
{
	return iParam0 && iParam1 != false;
}

BOOL func_50(var uParam0, const char* sParam1, char* sParam2, Vector3 vParam3, var uParam4, var uParam5, Object obParam6, Hash hParam7, Object obParam8, Hash hParam9, Object obParam10, Hash hParam11, BOOL bParam12) // Position - 0x25FE Signature - 22 0D
{
	if (bParam12)
	{
		if (!STREAMING::HAS_MODEL_LOADED(hParam7))
		{
			STREAMING::REQUEST_MODEL(hParam7, false);
			return false;
		}
	}

	if (!STREAMING::HAS_MODEL_LOADED(hParam9))
	{
		STREAMING::REQUEST_MODEL(hParam9, false);
		return false;
	}

	if (!STREAMING::HAS_MODEL_LOADED(hParam11))
	{
		STREAMING::REQUEST_MODEL(hParam11, false);
		return false;
	}

	if (bParam12)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(obParam6))
			obParam6 = OBJECT::CREATE_OBJECT_NO_OFFSET(hParam7, vParam3, true, true, false, true);
	
		if (!ENTITY::DOES_ENTITY_EXIST(obParam6))
			return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obParam8))
		obParam8 = OBJECT::CREATE_OBJECT_NO_OFFSET(hParam9, vParam3, true, true, false, true);

	if (!ENTITY::DOES_ENTITY_EXIST(obParam8))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(obParam10))
		obParam10 = OBJECT::CREATE_OBJECT_NO_OFFSET(hParam11, vParam3, true, true, false, true);

	if (!ENTITY::DOES_ENTITY_EXIST(obParam10))
		return false;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 64, sParam2, false, true);

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
		return false;

	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true) && !ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, vParam3, 0f, 0f, 0f, 2);
	
		if (ENTITY::DOES_ENTITY_EXIST(obParam6))
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "MOUND", obParam6, 0);
	
		if (ENTITY::DOES_ENTITY_EXIST(obParam8))
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "CHEST", obParam8, 0);
	
		if (ENTITY::DOES_ENTITY_EXIST(obParam10))
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "DRESSING", obParam10, 0);
	
		if (ANIMSCENE::_GET_ANIM_SCENE_PED(*uParam0, "player", false) == Global_33)
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam0, "player", Global_33);
	
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam0, sParam2, true);
		ANIMSCENE::START_ANIM_SCENE(*uParam0);
		return true;
	}

	return false;
}

Vector3 func_51(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x27A6 Signature - 22 04 15
{
	var unk;
	float num;
	float num2;
	float num3;
	Vector3 vector;
	Vector3 vector2;
	float num4;

	unk = { func_99(uParam0) };
	num = { func_101(func_101(unk, func_100(iParam3 - 90f)), unk) };
	num2 = MISC::ATAN2(num.f_1, num);
	num3 = -MISC::ATAN2(num.f_2, BUILTIN::SQRT((num * num) + (num.f_1 * num.f_1)));
	vector = { -num.f_1, num, 0f };
	vector2 = { func_101(vector, num) };
	num4 = MISC::ATAN2(func_102(vector, unk) / BUILTIN::VMAG(vector), func_102(vector2, unk) / BUILTIN::VMAG(vector2)) + 180f;
	return num4, num3, num2;
}

int func_52(Entity eParam0, Entity eParam1, int iParam2) // Position - 0x285C Signature - 22 03 06 00 00 66 00
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (!ITEMSET::IS_ITEMSET_VALID(Global_1296539.f_32))
		Global_1296539.f_32 = ITEMSET::CREATE_ITEMSET(true);

	if (!ITEMSET::IS_IN_ITEMSET(eParam0, Global_1296539.f_32))
		ITEMSET::ADD_TO_ITEMSET(eParam0, Global_1296539.f_32);

	if (!func_103(eParam0))
	{
		PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), eParam0, false);
		PLAYER::_0x6ECFC621A168424C(eParam0, eParam1, iParam2, 0);
		PLAYER::_EAGLE_EYE_SET_CUSTOM_DISTANCE(eParam0, 500f);
		return 1;
	}

	for (i = 0; i < 10; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1296539[i /*2*/]))
		{
			Global_1296539[i /*2*/] = eParam0;
			return 1;
		}
	}

	return 0;
}

BOOL func_53(var uParam0, int iParam1) // Position - 0x290C Signature - 22 02 04 00 00 37
{
	if (func_86(joaat("kit_collector_spade"), 1))
	{
		if (Global_1102813.f_3664)
			return false;
	
		if (func_60(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, true) > iParam1)
			return false;
	
		if (func_104(uParam0->f_5))
			return false;
	
		if (func_13(uParam0, 2))
			if (func_62(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, true, false) == joaat("weapon_kit_metal_detector") && func_60(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, true) <= 1.6f)
				return true;
		else
			return true;
	}

	return false;
}

int func_54(char* sParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, Hash hParam15, int iParam16) // Position - 0x29A7 Signature - 22 11 16
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

	if (iParam5 <= 0f)
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_105(i, 2))
		{
			if (func_106(uParam2, Global_1951910[i /*23*/].f_6, 0.01f, true) && hParam1 == Global_1951910[i /*23*/].f_4)
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
		func_107(num, hParam1, sParam0, 4, iParam6, iParam7, uParam2, iParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, false, false, 0, hParam15, iParam16);
		return num;
	}

	return 0;
}

void func_55(int iParam0, var uParam1) // Position - 0x2A85 Signature - 22 02 04 00 00 6D
{
	if (AUDIO::PREPARE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman", false))
	{
		if (func_42(iParam0, true))
		{
			if (!*uParam1)
			{
				AUDIO::PLAY_SOUND_FRONTEND("collectible_found", "RDRO_Collectible_Sounds_Travelling_Saleswoman", true, 0);
				*uParam1 = 1;
			}
		}
		else if (*uParam1)
		{
			*uParam1 = 0;
		}
	}

	return;
}

BOOL func_56(int iParam0, BOOL bParam1) // Position - 0x2AC6 Signature - 22 02 09 00 00 66 01
{
	int num;
	int gameTimer;
	float progress;
	int num2;
	int num3;

	if (bParam1 && !func_41(iParam0))
		return false;

	num = func_71(iParam0);

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

void func_57(Ped pedParam0) // Position - 0x2BC0 Signature - 22 01 04 00 00 66 00 03
{
	Entity firstEntityPedIsCarrying;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(pedParam0);
	
		if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying) && !ENTITY::IS_ENTITY_DEAD(firstEntityPedIsCarrying) && ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying))
			PED::DETACH_CARRIABLE_ENTITY(firstEntityPedIsCarrying, false, false);
	}

	return;
}

float func_58(int iParam0, BOOL bParam1) // Position - 0x2C02 Signature - 22 02 05 00 00 66 01 6A 8B 08 00 66 00 39 22 21 00 05 69 8B 04 00 73
{
	int num;

	if (bParam1 && !func_41(iParam0))
		return 0f;

	num = func_71(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951910[num /*23*/].f_3))
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1951910[num /*23*/].f_3);

	return HUD::_UI_PROMPT_GET_PROGRESS(Global_1951910[num /*23*/].f_3);
}

void func_59() // Position - 0x2C5A Signature - 22 00 02 00 00 2F 37
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPRINT"), false);
	return;
}

float func_60(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x2C83 Signature - 22 05 07 00 00 66 00 03 05 00 7D
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

void func_61(float fParam0) // Position - 0x2CAB Signature - 22 01 03 00 00 03 01 00 9E
{
	if (!Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4 = 1;
	
		if (Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_8 < 0f)
			Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_8 = fParam0;
	}

	return;
}

int func_62(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2CEF Signature - 22 04 07 00 00 2F 67
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

float func_63(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x2D15 Signature - 22 07 0C
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

void func_64() // Position - 0x2D7A Signature - 22 00 02 00 00 03 01 00 9E 5D 92 A5 12 63 09 27 04 8B 0D
{
	if (Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4)
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_5 = 1;

	return;
}

BOOL func_65(var uParam0) // Position - 0x2D9E Signature - 22 01 09 00 00 66
{
	var unk;
	int i;
	int num;

	while (!func_108(uParam0->f_22, &unk))
	{
		return false;
	}

	num = func_16(uParam0->f_22);

	for (i = 0; i < Global_17418.f_2992.f_1; i = i + 1)
	{
		if (num == Global_17418.f_2992.f_1[i /*5*/].f_4)
			Global_17418.f_2992.f_1[i /*5*/] = true;
	}

	func_110(func_109(joaat("collectibles_collected"), joaat("w_shovel")), 1);

	if (func_13(uParam0, 2))
		func_110(func_109(joaat("collectibles_collected"), joaat("w_metal_detector")), 1);

	return true;
}

void func_66(int iParam0) // Position - 0x2E2F Signature - 22 01 03 00 00 66 00 03 05 00 1D
{
	if (PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED(iParam0))
		return;

	PERSISTENCE::PERSISTENCE_ADD_SCENARIO_LOOTED(iParam0);
	return;
}

void func_67(BOOL bParam0, BOOL bParam1) // Position - 0x2E49 Signature - 22 02 04 00 00 66 01 8B
{
	if (bParam1)
		func_111(-753305330, 0, 255, 0, false);
	else if (bParam0)
		func_111(11389876, 0, 255, 0, false);

	return;
}

BOOL func_68() // Position - 0x2E7B Signature - 22 00 06 00 00 03 01 00 9E 67 04 2F 67 02 66 02 6D 1F 23 75 00 66 02 03 05 00 D0 67 03 66 03 03 05 00 E5 05 8B 03 00 68 57 00 66 03 03 05 00 B5 05 8B 03 00 68 4A 00 66 03 67 05 66 05 66 04 72 3F 00 66 05 5D 92 A5 12 63 09 27 01 66 04 5D 92 A5 12 63 09 27 01 15 28 00 66 05 5D 92 A5 12 63 09 27 02 66 04 5D 92 A5 12 63 09 27 02 15 11 00 66 05 5D 92 A5 12 63 09 27 05
{
	int i;
	Player player;
	Player player2;
	Player player3;

	player2 = PLAYER::PLAYER_ID();

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else
		{
			player3 = player;
		
			if (player3 != player2)
				if (Global_1222034[player3 /*9*/].f_1 == Global_1222034[player2 /*9*/].f_1)
					if (Global_1222034[player3 /*9*/].f_2 == Global_1222034[player2 /*9*/].f_2)
						if (Global_1222034[player3 /*9*/].f_5)
							return true;
		}
	}

	return false;
}

int func_69(Hash hParam0) // Position - 0x2F09 Signature - 22 01 0A 00 00 66 00 4B
{
	var unk;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_4;
}

void func_70(int iParam0, int iParam1) // Position - 0x2F25 Signature - 22 02 04 00 00 66 00 66 01 39 9C
{
	func_112(iParam0, iParam1);
	return;
}

int func_71(int iParam0) // Position - 0x2F35 Signature - 22 01 03 00 00 66 00 50 01 01 22 01
{
	return iParam0;
}

void func_72(int iParam0) // Position - 0x2F3F Signature - 22 01 03 00 00 66 00 39 AD
{
	if (!func_113(iParam0))
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

int func_73(Entity eParam0, Entity eParam1, int iParam2) // Position - 0x2FF2 Signature - 22 03 08
{
	int i;
	var src;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (ITEMSET::IS_ITEMSET_VALID(Global_1296539.f_32) && ITEMSET::IS_IN_ITEMSET(eParam0, Global_1296539.f_32))
		ITEMSET::REMOVE_FROM_ITEMSET(eParam0, Global_1296539.f_32);

	PLAYER::_UNREGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), eParam0);
	PLAYER::_0xDC5E09D012D759C4(eParam0, eParam1, iParam2);
	src.f_1 = -1082130432;

	for (i = 0; i < 10; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1296539[i /*2*/]) && Global_1296539[i /*2*/] == eParam0)
		{
			MISC::COPY_SCRIPT_STRUCT(&Global_1296539[i /*2*/], &src, 2);
			return 1;
		}
	}

	return 0;
}

BOOL func_74(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x309C Signature - 22 06 08 00 00 66 00 66 03 7D
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

var func_75(int iParam0, int iParam1) // Position - 0x30C5 Signature - 22 02 04 00 00 73
{
	return func_76(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

var func_76(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x30E3 Signature - 22 0C
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

	if (func_114() != 0)
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_115());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_115());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_115());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_116(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_117(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_118(i) != 1)
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
					if (!func_119(player2))
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

void func_77(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, BOOL bParam20, BOOL bParam21) // Position - 0x3476 Signature - 22 16 2D
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
				func_120(&(Global_1072759.f_22981), unk);
				return;
			}
		}
	}

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam0, 19, 5, &uParam19);
	return;
}

void func_78(Any* panParam0, int* piParam1) // Position - 0x3510 Signature - 22 02 04 00 00 66 01 03
{
	if (SCRIPTS::_IS_ANY_PLAYER_BIT_SET(piParam1))
	{
		panParam0->f_1 = Global_1295666.f_149[Global_1295666];
		SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 7, 22, piParam1);
	}

	return;
}

void func_79(int iParam0, int iParam1) // Position - 0x3541 Signature - 22 02 04 00 00 66 00 66 01 39 63
{
	func_121(iParam0, iParam1);
	return;
}

void func_80(var uParam0) // Position - 0x3551 Signature - 22 01 03 00 00 66 00 27 04
{
	if (uParam0->f_4 != -1)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		AUDIO::RELEASE_SOUND_ID(uParam0->f_4);
		PAD::STOP_CONTROL_SHAKE(PLAYER_CONTROL);
		uParam0->f_4 = -1;
	}

	AUDIO::_RELEASE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman");
	return;
}

void func_81(int iParam0, int iParam1) // Position - 0x3584 Signature - 22 02 04 00 00 66 00 39 F8
{
	if (func_98(iParam0))
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);

	return;
}

void func_82(int iParam0, int iParam1) // Position - 0x359D Signature - 22 02 04 00 00 66 00 66 01 39 78
{
	if (!func_122(iParam0, iParam1))
	{
		MISC::SET_BIT(&Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_123();
	}

	return;
}

void func_83(int iParam0, int iParam1, BOOL bParam2) // Position - 0x35E1 Signature - 22 03 05 00 00 66 00 66
{
	if (func_122(iParam0, iParam1) && !bParam2 || Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD())
	{
		MISC::CLEAR_BIT(&Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = 0;
		func_123();
	}

	return;
}

float func_84(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x3648 Signature - 22 06 08 00 00 73
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_85(var uParam0, var uParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, int iParam6) // Position - 0x3666 Signature - 22 07 0B
{
	Volume volume;
	int num;

	volume = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, iParam6, iParam6, iParam6);
	num = func_124(uParam0, uParam1, volume, iParam2);
	func_125(volume);
	return num;
}

BOOL func_86(Hash hParam0, int iParam1) // Position - 0x3697 Signature - 22 02 05 00 00 66 00 2F
{
	int num;

	if (!func_126(hParam0, 0))
		return false;

	num = func_127(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_129(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_128(hParam0, 1))
				return false;
			break;
	}

	return func_130(hParam0, false, false, false) >= iParam1;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x371A Signature - 22 03 05 00 00 66 00 73
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_88(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3744 Signature - 22 03 05 00 00 66 00 27
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_130(joaat("kit_collectors_bag"), false, false, false) <= 0)
				return 0;
			break;
	
		case 1:
			if (func_131(false))
				return 0;
			break;
	
		case 2:
			if (func_132())
				return 0;
			break;
	
		case 3:
			if (Global_1048576)
				return 0;
			break;
	
		case 4:
			if (func_133())
				return 0;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				return 0;
			break;
	
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Global_33) && TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
				return 0;
			break;
	
		case 7:
			if (!bParam1 && *uParam0 == 0)
				return 0;
			break;
	
		case 8:
			if (bParam2 && *uParam0 == 0)
				return 0;
			break;
	
		default:
			uParam0->f_11 = 0;
			break;
	}

	return 1;
}

float func_89() // Position - 0x3843 Signature - 22 00 02 00 00 6D 59
{
	return Global_1156111.f_2169[89 /*205*/].f_201;
}

void func_90(var uParam0, int iParam1) // Position - 0x3858 Signature - 22 02 04 00 00 66 01 66 00 32
{
	*uParam0 = iParam1;
	return;
}

void func_91(int iParam0) // Position - 0x3865 Signature - 22 01 03 00 00 66 00 2F 23
{
	if (iParam0 <= 0)
		return;

	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
	return;
}

void func_92(var uParam0) // Position - 0x388C Signature - 22 01 03 00 00 66 00 73
{
	func_134(uParam0, 0f);
	return;
}

float func_93(var uParam0) // Position - 0x389B Signature - 22 01 03 00 00 66 00 39 6F
{
	if (!func_135(uParam0))
		return uParam0->f_1;

	if (func_136(uParam0))
		return uParam0->f_2;

	return func_137() - uParam0->f_1;
}

BOOL func_94() // Position - 0x38D0 Signature - 22 00 02 00 00 70
{
	if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33) && !func_138(Global_33, 1369124074) && !func_138(Global_33, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
		return true;

	return false;
}

BOOL func_95(Ped pedParam0) // Position - 0x3935 Signature - 22 01 03 00 00 66 00 39 EA
{
	if (func_139(pedParam0))
		return true;

	if (func_140(pedParam0))
		return true;

	if (func_141(pedParam0))
		return true;

	if (func_142(pedParam0))
		return true;

	if (func_143(pedParam0))
		return true;

	return false;
}

BOOL func_96(int iParam0, BOOL bParam1) // Position - 0x397F Signature - 22 02 04 00 00 66 01 6A
{
	if (bParam1 && !func_41(iParam0))
		return false;

	return !func_105(iParam0, 4);
}

void func_97(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x39A4 Signature - 22 04 07 00 00 66
{
	int num;

	if (bParam2 && !func_41(iParam0))
		return;

	num = func_71(iParam0);

	if (bParam1)
	{
		func_144(iParam0, 4);
	
		if (bParam3)
			func_145(num, true);
	
		func_146(num, true);
	}
	else
	{
		func_147(iParam0, 4);
		func_146(num, false);
	}

	return;
}

BOOL func_98(int iParam0) // Position - 0x39F8 Signature - 22 01 03 00 00 66 00 76 2F 15
{
	if (*iParam0 == 0)
		return false;

	return *iParam0 != -1;
}

Vector3 func_99(float fParam0, var uParam1, var uParam2) // Position - 0x3A10 Signature - 22 03 07 00 00 1D
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

Vector3 func_100(float fParam0) // Position - 0x3A4F Signature - 22 01 03 00 00 66 00 03 05 00 50
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

Vector3 func_101(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x3A65 Signature - 22 06 08 00 00 4B
{
	return (fParam0.f_1 * uParam3.f_2) - (fParam0.f_2 * uParam3.f_1), (fParam0.f_2 * uParam3) - (fParam0 * uParam3.f_2), (fParam0 * uParam3.f_1) - (fParam0.f_1 * uParam3);
}

float func_102(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x3A9E Signature - 22 06 08 00 00 66 00 66 03 24
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

BOOL func_103(Entity eParam0) // Position - 0x3ABF Signature - 22 01 13
{
	int num;
	var unk5;
	Hash entityModel;
	int i;
	Hash hashKey;

	if (func_148() == 0)
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(func_148()))
		return false;

	num = func_148();
	num.f_2 = 0;
	num.f_3 = 0;
	num.f_4 = 0;
	num.f_1 = 0;
	entityModel = ENTITY::GET_ENTITY_MODEL(eParam0);

	for (i = 0; i < 30; i = i + 1)
	{
		num.f_1 = 0;
		num.f_3 = i;
		num.f_2 = 0;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
		{
			num.f_2 = 1;
		
			if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk5, &num))
			{
				hashKey = MISC::GET_HASH_KEY(&unk5);
			
				if (entityModel == hashKey)
					return true;
			}
		}
	}

	return false;
}

BOOL func_104(Hash hParam0) // Position - 0x3B59 Signature - 22 01 08
{
	var unk;

	unk.f_4 = 1084182731;
	unk = { func_149(false) };
	return func_150(hParam0, &unk, 1, true, false, -1, false);
}

BOOL func_105(int iParam0, int iParam1) // Position - 0x3B80 Signature - 22 02 04 00 00 66 00 2F 8A 04
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

BOOL func_106(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x3BA1 Signature - 22 08 0A 00 00 66 06
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

void func_107(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, var uParam7, var uParam8, int iParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x3BF6 Signature - 22 1A
{
	Prompt prompt;

	Global_1951910[iParam0 /*23*/].f_4 = hParam1;
	Global_1951910[iParam0 /*23*/] = iParam4;
	Global_1951910[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951910[iParam0 /*23*/].f_2 = iParam5;
	Global_1951910[iParam0 /*23*/].f_6 = { vParam6 };
	Global_1951910[iParam0 /*23*/].f_9 = iParam9;
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
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, iParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, 0f, 0f, 0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, iParam9);
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
	func_145(iParam0, true);
	func_146(iParam0, true);
	func_147(iParam0, 128);
	return;
}

BOOL func_108(int iParam0, Any anParam1) // Position - 0x3F10 Signature - 22 02 10
{
	var unk;

	unk.f_1 = 10;
	func_151(&unk, joaat("LOOT_TYPE_NORMAL"));
	return func_152(iParam0, &unk, anParam1, 0, 0);
}

struct<2> func_109(int iParam0, int iParam1) // Position - 0x3F39 Signature - 22 02 06 00 00 66 00
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_110(var uParam0, var uParam1, int iParam2) // Position - 0x3F4F Signature - 22 03 05 00 00 4B
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

int func_111(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x3F6C Signature - 22 05 24
{
	var unk;
	var unk13;
	var unk26;

	unk.f_1 = 10;
	unk13.f_1 = 11;
	return func_153(iParam0, &unk26, &unk13, &unk, iParam1, iParam2, iParam3, bParam4);
}

void func_112(var uParam0, int iParam1) // Position - 0x3F9C Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 01
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_113(int iParam0) // Position - 0x3FAD Signature - 22 01 03 00 00 66 00 11
{
	return func_105(iParam0, 2);
}

int func_114() // Position - 0x3FBC Signature - 22 00 02 00 00 5D FD
{
	return Global_1051645.f_12;
}

char* func_115() // Position - 0x3FCA Signature - 22 00 02 00 00 6D DE
{
	return "unnamed";
}

BOOL func_116(int iParam0) // Position - 0x3FD5 Signature - 22 01 04 00 00 2F
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

BOOL func_117(int iParam0) // Position - 0x4085 Signature - 22 01 03 00 00 5D 17
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_154(36, iParam0);
}

int func_118(int iParam0) // Position - 0x40A3 Signature - 22 01 03 00 00 66 00 6D FF
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_119(Player plParam0) // Position - 0x40EE Signature - 22 01 03 00 00 03 01 00 D2
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_155(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_156(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

int func_120(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21) // Position - 0x4133 Signature - 22 16 18
{
	if (!func_157(uParam0))
		return 0;

	uParam0->f_2[*uParam0 /*21*/] = { uParam1 };
	*uParam0 = *uParam0 + 1;
	return 1;
}

void func_121(int iParam0, int iParam1) // Position - 0x4163 Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 02 04 00 00 66 00 5D
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_122(int iParam0, int iParam1) // Position - 0x4178 Signature - 22 02 04 00 00 66 00 5D 77
{
	return MISC::IS_BIT_SET(Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
}

void func_123() // Position - 0x4194 Signature - 22 00 02 00 00 5D 77
{
	SCRIPTS::_SET_ALL_PLAYER_BITS(&(Global_1072759.f_21353.f_260));
	return;
}

int func_124(var uParam0, var uParam1, Volume volParam2, int iParam3) // Position - 0x41AA Signature - 22 04 0D 00 00 09
{
	ItemSet itemSet;
	ScrHandle indexedItemInItemset;
	ScrHandle handle;
	int num;
	int i;
	int j;
	int entitiesInVolume;

	itemSet = ITEMSET::CREATE_ITEMSET(true);
	entitiesInVolume = ENTITY::_GET_ENTITIES_IN_VOLUME(volParam2, itemSet, 3);
	entitiesInVolume >= iParam3;

	for (i = 0; i < entitiesInVolume; i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet);
		handle = indexedItemInItemset;
	
		if (ENTITY::IS_ENTITY_AN_OBJECT(handle))
		{
			for (j = 0; j < *uParam1; j = j + 1)
			{
				if (uParam1->[j] == 0)
				{
					uParam0->[num] = indexedItemInItemset;
					num = num + 1;
					j = *uParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(handle) == uParam1->[j])
				{
					uParam0->[num] = indexedItemInItemset;
					num = num + 1;
					j = *uParam1;
				}
			}
		}
	
		if (num >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(itemSet);
			return iParam3;
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemSet);
	return num;
}

void func_125(Volume volParam0) // Position - 0x4265 Signature - 22 01 03 00 00 66 00 03 05 00 6A
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

BOOL func_126(Hash hParam0, int iParam1) // Position - 0x427C Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 3E
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_127(Hash hParam0) // Position - 0x4296 Signature - 22 01 0A 00 00 66 00 2F 39 7C 42 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 9C 05 8B 04 00 2F 50 01 01 4B 03 27 02
{
	var unk;

	if (!func_126(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_2;
}

BOOL func_128(Hash hParam0, int iParam1) // Position - 0x42C1 Signature - 22 02 16
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_126(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_158(hParam0, iParam1);
	unk.f_9 = -1591664384;

	if (func_159("ALL WEAPONS", &num, &num2, -1591664384, false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_160(&unk, i, num, num2))
			{
			}
			else if (!func_161(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_162(num);
				return true;
			}
		}
	
		func_162(num);
	}

	return false;
}

BOOL func_129(Hash hParam0) // Position - 0x4368 Signature - 22 01 06
{
	int num;
	int num2;
	int num3;

	if (!func_126(hParam0, 0))
		return false;

	num = func_163(hParam0);

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

	num2 = func_164(hParam0);

	if (!(num2 == 0))
	{
		num3 = func_165(&(Global_17418.f_55.f_664.f_1354.f_5), num2);
	
		if (num3 == -1)
			return true;
	}

	num2 = func_166(hParam0);
	num3 = func_165(&(Global_17418.f_55.f_664.f_1354.f_5), num2);

	if (num3 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num3 /*17*/];
}

int func_130(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4424 Signature - 22 04 0D 00 00 2F
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_126(hParam0, 0))
		return 0;

	num = func_127(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_158(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_167(hParam0, false);
	}

	if (func_168(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_169(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_170(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_169(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_131(BOOL bParam0) // Position - 0x44E6 Signature - 22 01 03 00 00 66 00 8B 0D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

BOOL func_132() // Position - 0x4516 Signature - 22 00 02 00 00 39
{
	return func_171() != -1;
}

BOOL func_133() // Position - 0x4524 Signature - 22 00 02 00 00 5D 0C CE 1D 27 01 37
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

void func_134(var uParam0, float fParam1) // Position - 0x4549 Signature - 22 02 04 00 00 39
{
	uParam0->f_1 = func_137() - fParam1;
	func_172(uParam0, 1);
	func_173(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_135(var uParam0) // Position - 0x456F Signature - 22 01 03 00 00 66 00 76 09
{
	return func_174(*uParam0, 1);
}

BOOL func_136(var uParam0) // Position - 0x457F Signature - 22 01 03 00 00 66 00 76 11
{
	return func_174(*uParam0, 2);
}

float func_137() // Position - 0x458F Signature - 22 00 03 00 00 03
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_138(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x45C1 Signature - 22 02 05 00 00 66 00 66
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

BOOL func_139(Ped pedParam0) // Position - 0x45EA Signature - 22 01 03 00 00 66 00 2F 39
{
	return func_175(pedParam0, 0);
}

BOOL func_140(Ped pedParam0) // Position - 0x45F9 Signature - 22 01 03 00 00 66 00 1D
{
	return func_175(pedParam0, 3);
}

BOOL func_141(Ped pedParam0) // Position - 0x4608 Signature - 22 01 03 00 00 66 00 42
{
	return func_175(pedParam0, 4) || func_175(pedParam0, 5);
}

BOOL func_142(Ped pedParam0) // Position - 0x4624 Signature - 22 01 03 00 00 66 00 4D
{
	return func_175(pedParam0, 6);
}

BOOL func_143(Ped pedParam0) // Position - 0x4633 Signature - 22 01 03 00 00 66 00 0D
{
	return func_175(pedParam0, 7);
}

void func_144(int iParam0, int iParam1) // Position - 0x4642 Signature - 22 02 04 00 00 66 00 2F 8A 03 00 50 02 00 66 00 5D A6 C8 1D 63 17 27 01 66 00
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 - Global_1951910[iParam0 /*23*/].f_1 && iParam1;
	return;
}

void func_145(int iParam0, BOOL bParam1) // Position - 0x4675 Signature - 22 02 04 00 00 66 00 5D A6 C8 1D 63 17 27 03 03 05 00 90 8B 3F
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		if (Global_1951910[iParam0 /*23*/].f_5 == 5 && !func_105(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_146(int iParam0, BOOL bParam1) // Position - 0x46CD Signature - 22 02 04 00 00 66 00 5D A6 C8 1D 63 17 27 03 03 05 00 90 8B 10
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_147(int iParam0, int iParam1) // Position - 0x46F6 Signature - 22 02 04 00 00 66 00 2F 8A 03 00 50 02 00 66 00 5D A6 C8 1D 63 17 27 01 66 01
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 || iParam1;
	return;
}

int func_148() // Position - 0x471E Signature - 22 00 02 00 00 6D 2F
{
	return Global_1072759.f_28418[47 /*4*/].f_3;
}

struct<4> func_149(BOOL bParam0) // Position - 0x4733 Signature - 22 01 04 00 00 5D 17 00 18 27 0E
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_169(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_177(joaat("character"), func_176(), -1591664384, bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_177(joaat("character"), func_176(), -1591664384, false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_177(joaat("character"), func_176(), -1591664384, bParam0);
}

BOOL func_150(Hash hParam0, var uParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6) // Position - 0x47D3 Signature - 22 07 25
{
	var unk;
	var unk5;
	int num;
	int num2;

	func_178(&hParam0);

	if (!func_126(hParam0, 0) && !func_180(func_179(hParam0), 2))
		return 0;

	if (!bParam3 && func_168(hParam0, joaat("DEFAULT")) == 0)
		bParam3 = true;

	if (func_181(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		unk = { func_182(false) };
		unk5.f_9 = -1591664384;
	
		if (!func_183(hParam0, &unk, 1728382685, false, false))
			return 0;
		else if (func_184(hParam0, &unk5, 1728382685))
			return 0;
	
		if (func_185(hParam0, true))
			if (!func_183(hParam0, &unk, -649335959, false, false))
				return 0;
			else if (func_184(hParam0, &unk5, -649335959))
				return 0;
	
		return 1;
	}

	num = iParam5;

	if (iParam5 < 0)
		num = func_186(hParam0, uParam1, bParam3, bParam4);

	if (num < 0)
		return 0;
	else if (num == 0)
		return 1;

	num2 = func_187(hParam0, *uParam1, uParam1->f_4, bParam4, bParam3, bParam6);

	if (num2 + iParam2 > num)
		return 1;

	return 0;
}

void func_151(var uParam0, int iParam1) // Position - 0x4907 Signature - 22 02 06 00 00 66 01
{
	BOOL flag;
	int i;

	if (iParam1 == 0)
		return;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->f_1[i] == iParam1)
			return;
	
		switch (iParam1)
		{
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if (uParam0->f_1[i] == joaat("FISHING_RESULT_NORMAL") || uParam0->f_1[i] == joaat("FISHING_RESULT_RUINED") || uParam0->f_1[i] == joaat("FISHING_RESULT_LEGENDARY"))
					flag = true;
				break;
		
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (uParam0->f_1[i] == joaat("LOOTER_PED_IS_MALE") || uParam0->f_1[i] == joaat("LOOTER_PED_IS_FEMALE"))
					flag = true;
				break;
		
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (uParam0->f_1[i] == joaat("LOOT_TYPE_NORMAL") || uParam0->f_1[i] == joaat("LOOT_TYPE_SKINNING"))
					flag = true;
				break;
		}
	
		if (flag)
		{
			uParam0->f_1[i] = iParam1;
			return;
		}
	}

	if (*uParam0 >= 10)
		return;

	uParam0->f_1[*uParam0] = iParam1;
	*uParam0 = *uParam0 + 1;
	return;
}

BOOL func_152(int iParam0, var uParam1, Any anParam2, int iParam3, int iParam4) // Position - 0x4A33 Signature - 22 05 17
{
	var unk;
	int num;

	if (iParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_188(uParam1);
	SECURE_STORE(&unk, iParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_3.f_1 = 10;
	num = iParam3;
	num.f_3 = { *uParam1 };
	num.f_2 = iParam4;
	func_189(anParam2, iParam0, num);
	return 1;
}

int func_153(int iParam0, Any anParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x4AA2 Signature - 22 08 1E
{
	BOOL flag;
	int num;
	var unk;
	var unk2;

	if (iParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(iParam0))
		return 1;

	if (bParam7)
	{
		flag = GANG::NETWORK_IS_GANG_ID_VALID(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) && GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
		bParam7 = flag;
	}

	POSSE::_0xC08AFF658B2E51DA(&num);

	if (num != 0)
		func_190(iParam2, -372840566);

	SECURE_STORE(&unk, iParam0);

	if (!bParam7)
		if (!NETWORK::_0x64A36BA85CE01A81(&unk, &(uParam3->f_1), &(iParam2->f_1), anParam1))
			return 0;
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&unk, &(iParam2->f_1), anParam1))
		return 0;

	unk2.f_1 = 11;
	unk2.f_16 = 255;
	unk2.f_13 = iParam4;
	unk2.f_16 = iParam5;
	unk2.f_14 = iParam6;
	unk2 = { *iParam2 };
	func_191(anParam1, iParam0, unk2);
	return 1;
}

BOOL func_154(int iParam0, int iParam1) // Position - 0x4B83 Signature - 22 02 05 00 00 66 00 67
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_192(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_193())
		return func_192(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_192(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_155(Player plParam0) // Position - 0x4BF7 Signature - 22 01 03 00 00 5D 77
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_156(Player plParam0) // Position - 0x4C14 Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 32
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_194(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_195(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

BOOL func_157(var uParam0) // Position - 0x4C97 Signature - 22 01 03 00 00 66 00 76 6D
{
	if (*uParam0 >= 40)
		return false;

	return true;
}

Hash func_158(Hash hParam0, int iParam1) // Position - 0x4CAC Signature - 22 02 07
{
	int num;
	var unk;
	Hash hash;

	if (!func_126(hParam0, 0))
		return 0;

	num = func_127(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_196(hParam0, 1399091007))
	{
		func_197(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_159(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x4D26 Signature - 22 05 07 00 00 66 04
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_169(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_160(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x4D4D Signature - 22 04 06 00 00 66 02
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_161(Hash hParam0) // Position - 0x4D88 Signature - 22 01 03 00 00 66 00 03 05 00 9A
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_162(int iParam0) // Position - 0x4DA3 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 03
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_163(Hash hParam0) // Position - 0x4DC4 Signature - 22 01 0A 00 00 66 00 2F 39 7C 42 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 9C 05 8B 04 00 2F 50 01 01 4B 03 27 01
{
	var unk;

	if (!func_126(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_1;
}

int func_164(Hash hParam0) // Position - 0x4DEF Signature - 22 01 03 00 00 66 00 3C 0F
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

int func_165(var uParam0, int iParam1) // Position - 0x4ED2 Signature - 22 02 05 00 00 2F
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

int func_166(Hash hParam0) // Position - 0x4F0F Signature - 22 01 04 00 00 66 00 39 C4
{
	int num;

	num = func_163(hParam0);

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

int func_167(Hash hParam0, BOOL bParam1) // Position - 0x4F7C Signature - 22 02 18
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_198(hParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };

	if (bParam1)
		func_199(&unk, func_182(false));

	if (!func_200(&unk, &num, &num2, false))
		return 0;

	func_162(num);
	return num2;
}

int func_168(Hash hParam0, int iParam1) // Position - 0x4FDB Signature - 22 02 04 00 00 66 01 2F 15 04
{
	if (iParam1 == 0)
		return 0;

	if (func_180(func_179(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, iParam1);
}

int func_169(BOOL bParam0) // Position - 0x5007 Signature - 22 01 03 00 00 39
{
	if (func_2() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_170(Hash hParam0, BOOL bParam1) // Position - 0x5048 Signature - 22 02 09 00 00 66 00 66
{
	var unk;

	unk = { func_201(hParam0, bParam1, false) };
	return func_177(hParam0, unk, unk.f_4, bParam1);
}

int func_171() // Position - 0x506D Signature - 22 00 02 00 00 5D F4
{
	return Global_1149172.f_137;
}

void func_172(var uParam0, int iParam1) // Position - 0x507B Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 02
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_173(var uParam0, int iParam1) // Position - 0x508C Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 02 04 00 00 66 00 66
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_174(int iParam0, int iParam1) // Position - 0x50A1 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 02
{
	return iParam0 && iParam1 != false;
}

BOOL func_175(Ped pedParam0, int iParam1) // Position - 0x50B0 Signature - 22 02 09 00 00 66 00 03
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

struct<4> func_176() // Position - 0x50EF Signature - 22 00 06 00 00 42
{
	var unk;

	return unk;
}

struct<4> func_177(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x50FB Signature - 22 07 0D
{
	var outGuid;

	if (!func_126(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_169(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

int func_178(var uParam0) // Position - 0x512C Signature - 22 01 03 00 00 66 00 76 2F 39
{
	if (!func_126(*uParam0, 0))
		return 0;

	if (!func_202(*uParam0))
		return 0;

	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			break;
	
		case joaat("upgrade_fsh_bait_cricket_tin"):
			*uParam0 = joaat("upgrade_fsh_bait_cricket");
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			break;
	
		case joaat("consumable_chewing_tobacco_used"):
			*uParam0 = joaat("consumable_chewing_tobacco");
			break;
	
		case joaat("upgrade_fsh_bait_worm_can"):
			*uParam0 = joaat("upgrade_fsh_bait_worm");
			break;
	
		default:
			return 0;
	}

	return 1;
}

Hash func_179(Hash hParam0) // Position - 0x51B6 Signature - 22 01 03 00 00 66 00 50 01 01 22 02
{
	return hParam0;
}

BOOL func_180(Hash hParam0, int iParam1) // Position - 0x51C0 Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 7C
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

BOOL func_181(Hash hParam0) // Position - 0x51DA Signature - 22 01 03 00 00 66 00 39 96
{
	return func_127(hParam0) == joaat("WEAPON");
}

struct<4> func_182(BOOL bParam0) // Position - 0x51EE Signature - 22 01 04 00 00 66 00 39 07 50 00 67 03 66 03 11 15
{
	int num;

	num = func_169(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_177(923904168, func_149(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_177(923904168, func_149(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_177(923904168, func_149(bParam0), -740156546, false);
}

BOOL func_183(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x528F Signature - 22 05 07 00 00 66 00 42
{
	return func_187(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_184(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x52AA Signature - 22 03 09
{
	var unk;

	if (func_203(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

BOOL func_185(Hash hParam0, BOOL bParam1) // Position - 0x52CB Signature - 22 02 04 00 00 66 00 39 C4
{
	if (func_163(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_204();
		else
			return 1;

	return 0;
}

int func_186(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5302 Signature - 22 04 06 00 00 66 00 2F
{
	if (!func_126(hParam0, 0))
	{
		if (func_180(func_179(hParam0), 2))
			return -1;
	
		return 0;
	}

	if (func_127(hParam0) == joaat("fee"))
		return -1;

	if (!bParam2 && func_168(hParam0, joaat("DEFAULT")) == 0)
		bParam2 = true;

	if (bParam2)
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_169(bParam3), hParam0);
}

int func_187(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x5376 Signature - 22 09
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_126(hParam0, 0))
		return 0;

	if (!bParam7 && func_168(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_177(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_169(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_169(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

void func_188(var uParam0) // Position - 0x53F5 Signature - 22 01 03 00 00 66 00 37 22
{
	func_151(uParam0, joaat("MULTIPLAYER_GAME"));

	if (func_205() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_151(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_151(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_189(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x542D Signature - 22 11 2A
{
	int i;
	var unk;

	if (!func_206(anParam0))
		return;

	if (Global_1292143.f_2539 < 20)
	{
		Global_1292143.f_2539 = Global_1292143.f_2539 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_2539.f_1[i /*22*/] = { Global_1292143.f_2539.f_1[i + 1 /*22*/] };
		}
	}

	unk.f_7.f_3.f_1 = 10;
	unk = { *anParam0 };
	unk.f_4 = iParam1;
	unk.f_6 = 1;
	unk.f_7 = { uParam2 };
	Global_1292143.f_2539.f_1[Global_1292143.f_2539 - 1 /*22*/] = { unk };
	return;
}

void func_190(int iParam0, int iParam1) // Position - 0x54E3 Signature - 22 02 04 00 00 66 01 2F 15 03
{
	if (iParam1 == 0)
		return;

	if (SECURE_LOAD(&iParam0) >= 11)
		return;

	SECURE_STORE(&iParam0->f_1[SECURE_LOAD(&iParam0)], iParam1);
	SECURE_STORE(&iParam0, SECURE_LOAD(&iParam0) + 1);
	return;
}

void func_191(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0x5513 Signature - 22 13
{
	int i;
	var unk;

	if (!func_206(anParam0))
		return;

	if (Global_1292143.f_2012 < 20)
	{
		Global_1292143.f_2012 = Global_1292143.f_2012 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_2012.f_1[i /*24*/] = { Global_1292143.f_2012.f_1[i + 1 /*24*/] };
		}
	}

	unk.f_7.f_1 = 11;
	unk.f_7.f_16 = 255;
	unk = { *anParam0 };
	unk.f_4 = iParam1;
	unk.f_7 = { uParam2 };
	unk.f_6 = 1;
	Global_1292143.f_2012.f_1[Global_1292143.f_2012 - 1 /*24*/] = { unk };
	return;
}

BOOL func_192(Any* panParam0, int iParam1, int iParam2) // Position - 0x55CE Signature - 22 03 07 00 00 66
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_193() // Position - 0x5605 Signature - 22 00 02 00 00 5D DD
{
	return Global_1102813.f_3672;
}

void func_194(Player plParam0) // Position - 0x5614 Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 77
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_195(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_195(Player plParam0) // Position - 0x5680 Signature - 22 01 03 00 00 66 00 5D
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

BOOL func_196(Hash hParam0, Hash hParam1) // Position - 0x56BB Signature - 22 02 04 00 00 66 00 2F 39
{
	if (!func_126(hParam0, 0))
		return func_207(func_179(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return true;

	return false;
}

void func_197(Hash hParam0, var uParam1, var uParam2) // Position - 0x56FC Signature - 22 03 05 00 00 2F
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

struct<18> func_198(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x5908 Signature - 22 07 1B
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

void func_199(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x59E6 Signature - 22 05 07 00 00 4B
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_200(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x5A01 Signature - 22 04 06 00 00 66 03
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_169(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

struct<5> func_201(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5A26 Signature - 22 03 2F
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_149(bParam1) };
	unk.f_4 = 1084182731;
	num = func_127(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_209(hParam0, -1823706425))
			{
				unk = { func_177(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_209(hParam0, -1483207246))
			{
				unk = { func_177(joaat("WARDROBE"), unk, 1034665895, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_177(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1311702610))
			{
				unk.f_4 = -1311702610;
			}
			else if (func_209(hParam0, -1653629781))
			{
				unk = { func_177(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -1591664384;
			unk = { func_208(bParam1) };
		
			switch (func_163(hParam0))
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
			unk = { func_177(joaat("WARDROBE"), unk, 1034665895, bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_182(bParam1) };
		
			if (bParam2 && func_185(hParam0, true))
			{
				unk6.f_9 = -1591664384;
			
				if (!func_183(hParam0, &unk, 1728382685, false, false))
					unk.f_4 = 1728382685;
				else if (!func_183(hParam0, &unk, -649335959, false, false))
					unk.f_4 = -649335959;
				else if (func_184(hParam0, &unk6, 1728382685))
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
			
				if (!func_210(unk, &unk28, bParam1, false, -1))
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
			else if (func_209(hParam0, -1653629781))
			{
				unk = { func_177(1384535894, unk, 1784584921, bParam1) };
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

BOOL func_202(Hash hParam0) // Position - 0x5D9A Signature - 22 01 03 00 00 66 00 37 11
{
	return func_196(hParam0, 1279601681);
}

BOOL func_203(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x5DAD Signature - 22 04 07 00 00 2F 39
{
	int inventoryId;

	inventoryId = func_169(false);
	*panParam1 = { func_177(hParam0, func_182(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

int func_204() // Position - 0x5DF2 Signature - 22 00 02 00 00 37
{
	if (func_211(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_205() // Position - 0x5E0F Signature - 22 00 02 00 00 5D 0C CE 1D 27 01 50
{
	return Global_1953292.f_1;
}

BOOL func_206(Any anParam0) // Position - 0x5E1D Signature - 22 01 03 00 00 66 00 76 2F 0B
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 || anParam0->f_1 == -889271554 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_207(Hash hParam0, Hash hParam1) // Position - 0x5E63 Signature - 22 02 04 00 00 66 00 11
{
	if (!func_180(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

struct<4> func_208(BOOL bParam0) // Position - 0x5E99 Signature - 22 01 04 00 00 66 00 39 07 50 00 67 03 66 03 11 0B
{
	int num;

	num = func_169(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_177(271701509, func_149(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_177(271701509, func_149(bParam0), 12999093, false);
}

BOOL func_209(Hash hParam0, int iParam1) // Position - 0x5F03 Signature - 22 02 08
{
	Hash hash;
	int num;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || iParam1 == 0)
		return false;

	num = func_163(hParam0);

	if (num == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(num);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(num, i, &hash))
			if (func_212(hParam0, iParam1, hash))
				return true;
	}

	return false;
}

BOOL func_210(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x5F70 Signature - 22 08 0A 00 00 4B
{
	return func_213(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

int func_211(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5F86 Signature - 22 04 06 00 00 66 00 39
{
	if (func_214(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_169(bParam1), hParam0, bParam3);
}

BOOL func_212(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x5FB9 Signature - 22 03 05 00 00 66 02
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, iParam1, hParam2);
}

BOOL func_213(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x5FEC Signature - 22 05 07 00 00 66 00 03 05 00 7F
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_169(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

BOOL func_214(Hash hParam0) // Position - 0x6026 Signature - 22 01 03 00 00 66 00 03 05 00 AB
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

