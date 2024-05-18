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
	char* sLocal_17 = 0;
	var uLocal_18 = 2;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = 0;
	AnimScene ansLocal_22 = 0;
	int iLocal_23 = 2;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	ePedType eptLocal_26 = PED_TYPE_PLAYER_0;
	var uLocal_27 = 2;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 2;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	Entity eLocal_37 = 0;
	Hash hLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	Entity eLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = -1;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 1097859072;
	var uLocal_63 = 1000;
	var uLocal_64 = 500;
	var uLocal_65 = 1067450368;
	var uLocal_66 = 5000;
	var uLocal_67 = 42;
	var uLocal_68 = 1103626240;
	var uLocal_69 = 1077936128;
	var uLocal_70 = 1106247680;
	var uLocal_71 = 1103101952;
	var uLocal_72 = 1109393408;
	var uLocal_73 = 1097859072;
	var uLocal_74 = 1103626240;
	var uLocal_75 = 1067450368;
	int iLocal_76 = 0;
	Volume volLocal_77 = 0;
	var uLocal_78 = 2;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	Volume volLocal_81 = 0;
	BOOL bLocal_82 = 0;
	BOOL bLocal_83 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 48
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	iLocal_43 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1();

	while (!func_2())
	{
		BUILTIN::WAIT(0);
	}

	func_1();
	return;
}

void func_1() // Position - 0x33 Signature - 22 00 03 00 00 54 2A
{
	int i;

	if (eLocal_42 != 0)
		if (ENTITY::IS_MAP_ENTITY_PINNED(eLocal_42))
			ENTITY::_UNPIN_MAP_ENTITY(eLocal_42);

	if (bLocal_83)
	{
		func_3();
		bLocal_83 = false;
	}

	if (STREAMING::IS_MODEL_VALID(eptLocal_26))
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(eptLocal_26);

	if (STREAMING::IS_MODEL_VALID(hLocal_38))
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_38);

	for (i = 0; i < iLocal_23; i = i + 1)
	{
		if (VOLUME::DOES_VOLUME_EXIST(uLocal_78[i]))
			VOLUME::DELETE_VOLUME(uLocal_78[i]);
	
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_23[i]))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_23[i]);
	
		if (PHYSICS::DOES_ROPE_EXIST(uLocal_34[i]))
			PHYSICS::DELETE_ROPE(&uLocal_34[i]);
	}

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_22))
		ANIMSCENE::_DELETE_ANIM_SCENE(ansLocal_22);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_77))
		VOLUME::DELETE_VOLUME(volLocal_77);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_81))
		VOLUME::DELETE_VOLUME(volLocal_81);

	if (iLocal_43 != -1)
	{
		func_4();
		AUDIO::RELEASE_SOUND_ID(iLocal_43);
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2() // Position - 0x113 Signature - 22 00 02 00 00 39 68
{
	if (func_5())
		return true;

	if (!bLocal_82)
		bLocal_82 = func_6();

	switch (func_7())
	{
		case 0:
			func_8();
			func_9(1);
			break;
	
		case 1:
			func_10();
			func_9(2);
			break;
	
		case 2:
			if (func_11())
				func_9(3);
			break;
	
		case 3:
			if (func_12())
				func_9(4);
			break;
	
		case 4:
			if (func_13() && func_14())
			{
				if (func_15(12))
				{
					func_16();
					func_9(9);
				}
				else
				{
					func_9(5);
				}
			}
			break;
	
		case 5:
			if (func_17())
				func_9(6);
			break;
	
		case 6:
			if (func_18())
				func_9(8);
			break;
	
		case 7:
			if (func_19())
				func_9(10);
		
			if (func_20())
			{
				bLocal_82 = false;
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_22))
					ANIMSCENE::RESET_ANIM_SCENE(ansLocal_22, 0);
			
				func_21(volLocal_81, false, false, true, true, false);
			
				if (func_15(12))
				{
					func_22();
					func_16();
					func_9(9);
				}
				else
				{
					func_9(5);
				}
			}
			break;
	
		case 8:
			if (func_19())
				func_9(10);
		
			func_23();
		
			if (bLocal_82)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_22))
					if (ANIMSCENE::GET_ANIM_SCENE_PHASE(ansLocal_22) < 0.99f)
						return false;
			
				func_4();
				func_24();
				func_9(7);
			}
		
			if (func_25())
			{
				func_24();
				func_9(7);
			}
			break;
	
		case 9:
			if (func_19())
				func_9(10);
		
			if (bLocal_82)
				func_9(7);
			break;
	
		case 10:
			func_4();
			func_26();
			func_9(11);
			break;
	
		case 11:
			if (func_20())
				return true;
			break;
	}

	return false;
}

void func_3() // Position - 0x2E7 Signature - 22 00 03 00 00 2F 67 02 66 02 62 8A 58
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_1939596.f_291[i /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			Global_1939596.f_302 = Global_1939596.f_302 + Global_1939596.f_291[i /*2*/].f_1;
			Global_1939596.f_291[i /*2*/] = 0;
			Global_1939596.f_291[i /*2*/].f_1 = 0;
			func_27();
			return;
		}
	}

	return;
}

void func_4() // Position - 0x350 Signature - 22 00 02 00 00 54 2B
{
	if (!AUDIO::_HAS_SOUND_ID_FINISHED(iLocal_43))
		AUDIO::_STOP_SOUND_WITH_ID(iLocal_43);

	return;
}

BOOL func_5() // Position - 0x368 Signature - 22 00 02 00 00 39 85
{
	if (func_28() != -1)
		return true;

	if (func_29() != 111)
		return true;

	return false;
}

BOOL func_6() // Position - 0x38A Signature - 22 00 02 00 00 03 01 00 34 6D
{
	if (MISC::GET_FRAME_COUNT() % 60 == 0)
	{
		if (func_7() == 8 && func_15(12))
			return 1;
	
		if (func_7() == 9 && func_15(3))
			return 1;
	}

	return 0;
}

int func_7() // Position - 0x3CF Signature - 22 00 02 00 00 54 10
{
	return iLocal_16;
}

void func_8() // Position - 0x3D9 Signature - 22 00 02 00 00 37
{
	eptLocal_26 = joaat("a_c_donkey_01");
	hLocal_38 = joaat("p_rho_cottongin_03");
	uLocal_39 = { 1404.0195f, -1324.2677f, 76.7704f };
	uLocal_27[0 /*3*/] = { 1400.7699f, -1315.4026f, 76.6572f };
	uLocal_27[1 /*3*/] = { 1407.9113f, -1332.822f, 76.6569f };
	sLocal_17 = "script@ambient@generic@cotton_gin@action";
	uLocal_18[0] = "DONKEY_0";
	uLocal_18[1] = "DONKEY_1";
	sLocal_21 = "COTTON_PRESS";
	func_30(&uLocal_27[0 /*3*/], 50, 10, false, false);
	func_30(&uLocal_27[1 /*3*/], 50, 10, false, false);
	func_31(&uLocal_44, false);
	func_32(&uLocal_44, true);
	func_33(&uLocal_44, true);
	func_34(&uLocal_44, true);
	func_35(&uLocal_44, true);
	func_36(&uLocal_44, true);
	func_37(&uLocal_44, true);
	func_38(&uLocal_44, true);
	func_39(&uLocal_44, true);

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_77))
		volLocal_77 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1439.6456f, -1296.0781f, 78.22333f, 0f, 0f, 15.938334f, 5.460037f, 5.05896f, 3.246991f, "m_volDonkeyPen");

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_81))
		volLocal_81 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1403.8917f, -1324.6616f, 76.657394f, 0f, 0f, 0f, 19.097954f, 13.323952f, 7.186517f, "m_volVehicleAntiGrief");

	iLocal_43 = AUDIO::GET_SOUND_ID();
	return;
}

void func_9(int iParam0) // Position - 0x516 Signature - 22 01 03 00 00 66 00 4E
{
	iLocal_16 = iParam0;
	return;
}

void func_10() // Position - 0x522 Signature - 22 00 02 00 00 54 1A 2F
{
	STREAMING::REQUEST_MODEL(eptLocal_26, false);
	STREAMING::REQUEST_MODEL(hLocal_38, false);

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_22))
		ansLocal_22 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_17, 1, 0, false, true);

	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() <= 2)
		PED::_RESERVE_AMBIENT_PEDS(2);

	return;
}

BOOL func_11() // Position - 0x55B Signature - 22 00 02 00 00 54 1A 03
{
	if (!STREAMING::HAS_MODEL_LOADED(eptLocal_26) || !STREAMING::HAS_MODEL_LOADED(hLocal_38))
		return false;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_22, true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(ansLocal_22, true))
			ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_22);
	
		return false;
	}

	if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
		return false;

	return true;
}

BOOL func_12() // Position - 0x5AC Signature - 22 00 02 00 00 1D
{
	if (BUILTIN::VDIST2(Global_34, uLocal_39) > 10000f)
		return false;

	return true;
}

int func_13() // Position - 0x5CF Signature - 22 00 03 00 00 2F 67 02 66 02 11 8A 1E
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_23[i]))
		{
			iLocal_23[i] = func_40(eptLocal_26, uLocal_27[i /*3*/], 95f, true, true, 0, true, false, false, false, false);
		
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_23[i]))
			{
				PED::_SET_PED_SCALE(iLocal_23[i], 0.67f);
				PED::SET_PED_CONFIG_FLAG(iLocal_23[i], 136, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_23[i], 441, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_23[i], 297, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_23[i], 407, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_23[i], 419, true);
				PED::SET_PED_LASSO_HOGTIE_FLAG(iLocal_23[i], 0, false);
				TASK::TASK_STAND_STILL(iLocal_23[i], -1);
				PED::_EQUIP_META_PED_OUTFIT(iLocal_23[i], -937613161);
				PED::_UPDATE_PED_VARIATION(iLocal_23[i], false, true, true, true, false);
			
				if (!VOLUME::DOES_VOLUME_EXIST(uLocal_78[i]))
				{
					uLocal_78[i] = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("volCylinder"), uLocal_27[i /*3*/], 0f, 0f, 0f, 1.5f, 1.5f, 1f);
					PED::_ATTACH_VOLUME_TO_ENTITY(uLocal_78[i], iLocal_23[i], 0f, 0f, 0f, 0f, 0f, 0f, 2, true);
				}
			}
		
			return 0;
		}
	}

	if (!bLocal_83)
	{
		func_41(10);
		bLocal_83 = true;
	}

	return 1;
}

int func_14() // Position - 0x70E Signature - 22 00 02 00 00 54 25
{
	if (!ENTITY::DOES_ENTITY_EXIST(eLocal_37))
	{
		if (eLocal_42 == 0)
			eLocal_42 = ENTITY::PIN_CLOSEST_MAP_ENTITY(hLocal_38, uLocal_39, 11);
		else if (ENTITY::IS_MAP_ENTITY_PINNED(eLocal_42))
			eLocal_37 = ENTITY::_GET_PINNED_MAP_ENTITY(eLocal_42);
	
		return 0;
	}

	return 1;
}

BOOL func_15(int iParam0) // Position - 0x74D Signature - 22 01 04 00 00 66 00 08
{
	int num;

	if (iParam0 == -1)
		return true;

	if (iParam0 == 0)
		return false;

	num = func_43(func_42());

	if (func_44(iParam0, 1))
		if (num >= 6 && num < 12)
			return true;

	if (func_44(iParam0, 2))
		if (num >= 12 && num < 18)
			return true;

	if (func_44(iParam0, 4096))
		if (num >= 11 && num < 14)
			return true;

	if (func_44(iParam0, 4))
		if (num >= 18 && num < 24)
			return true;

	if (func_44(iParam0, 8))
		if (num >= 0 && num < 6)
			return true;

	if (func_44(iParam0, 16))
		if (num >= 20 || num < 7)
			return true;

	if (func_44(iParam0, 1024))
		if (num >= 5 && num < 12)
			return true;

	if (func_44(iParam0, 32))
		if (num >= 5 && num < 22)
			return true;

	if (func_44(iParam0, 64))
		if (num >= 6 && num < 20)
			return true;

	if (func_44(iParam0, 128))
		if (num >= 21 || num < 5)
			return true;

	if (func_44(iParam0, 256))
		if (num >= 22 && num < 24)
			return true;

	if (func_44(iParam0, 512))
		if (num >= 0 && num < 5)
			return true;

	if (func_44(iParam0, 8192))
		if (num >= 6 && num < 20)
			return true;

	if (func_44(iParam0, 2048))
		if (num >= 1 && num < 3)
			return true;

	if (func_44(iParam0, 16384))
		if (num >= 6 && num < 24)
			return true;

	if (func_44(iParam0, 32768))
		if (num >= 21 || num < 6)
			return true;

	if (func_44(iParam0, 65536))
		if (num >= 18 && num < 19)
			return true;

	return false;
}

void func_16() // Position - 0x9A1 Signature - 22 00 03 00 00 54 4D
{
	int i;

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_77))
		return;

	for (i = 0; i < 2; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_23[i]))
		{
			func_45(iLocal_23[i], VOLUME::GET_VOLUME_COORDS(volLocal_77) + { 0f, 0f, (float)i * 1f }, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 2, 1073741824);
			TASK::TASK_WANDER_IN_VOLUME(iLocal_23[i], volLocal_77, 1f, 3f, 1);
		}
	}

	return;
}

BOOL func_17() // Position - 0xA0D Signature - 22 00 03 00 00 54 16 03 05 00 9E 05 8B 04
{
	int i;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_22))
		return false;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_22, true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(ansLocal_22, true))
			ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_22);
	
		return false;
	}

	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(ansLocal_22, 1404.0195f, -1324.2677f, 76.71f, 0f, 0f, -81f, 2);

	for (i = 0; i < 2; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_23[i]))
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_22, uLocal_18[i], iLocal_23[i], 0);
	}

	if (!ENTITY::IS_ENTITY_DEAD(eLocal_37))
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_22, sLocal_21, eLocal_37, 0);

	ANIMSCENE::START_ANIM_SCENE(ansLocal_22);
	return true;
}

BOOL func_18() // Position - 0xAB0 Signature - 22 00 03 00 00 54 25
{
	int i;

	if (!ENTITY::IS_ENTITY_DEAD(eLocal_37) && !ENTITY::IS_ENTITY_DEAD(iLocal_23[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_23[1]))
	{
		for (i = 0; i < 2; i = i + 1)
		{
			if (!PHYSICS::DOES_ROPE_EXIST(uLocal_34[i]))
			{
				uLocal_34[i] = PHYSICS::_ADD_ROPE_2(ENTITY::GET_ENTITY_COORDS(iLocal_23[i], true, false), 0f, 0f, 0f, 1f, 6, true, -1, -1082130432);
				PHYSICS::_0x522FA3F490E2F7AC(uLocal_34[i], 1, 1);
				PHYSICS::_0x8D59079C37C21D78(uLocal_34[i], 2.5f);
				return false;
			}
		}
	
		PHYSICS::_ATTACH_ENTITIES_TO_ROPE_2(uLocal_34[0], iLocal_23[0], eLocal_37, 0f, 0f, 0f, 0f, 0f, 0f, "PH_Harness", "donkeyRopeConnect1");
		PHYSICS::_ATTACH_ENTITIES_TO_ROPE_2(uLocal_34[1], iLocal_23[1], eLocal_37, 0f, 0f, 0f, 0f, 0f, 0f, "PH_Harness", "donkeyRopeConnect2");
		return true;
	}

	return false;
}

BOOL func_19() // Position - 0xB7E Signature - 22 00 03 00 00 03 01 00 34
{
	var unk;

	if (MISC::GET_FRAME_COUNT() % 10 == 0)
	{
		if (func_46(iLocal_23[iLocal_76], 0, &uLocal_44, &unk, 0, 0))
			return true;
	
		if (PED::IS_PED_RESPONDING_TO_THREAT(iLocal_23[iLocal_76]))
			return true;
	
		iLocal_76 = iLocal_76 + 1;
	
		if (iLocal_76 >= 2)
			iLocal_76 = 0;
	}

	return false;
}

BOOL func_20() // Position - 0xBCA Signature - 22 00 02 00 00 03 01 00 34 4D
{
	if (MISC::GET_FRAME_COUNT() % 6 != 0)
		return false;

	if (BUILTIN::VDIST2(Global_34, uLocal_39) < 3600f)
		return false;

	if (CAM::IS_SPHERE_VISIBLE(1439.6456f, -1296.0781f, 78.22333f, 2f) || CAM::IS_SPHERE_VISIBLE(1403.6863f, -1324.1187f, 73.60623f, 9.5f))
		return false;

	return true;
}

void func_21(Volume volParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0xC34 Signature - 22 06 09 00 00 6D
{
	int num;

	num = 8;

	if (bParam1)
		num = num | 72;

	if (bParam2)
		num = num | 131072;

	if (bParam3)
		num = num | 24;

	if (bParam4)
		num = num | 40;

	if (bParam5)
		num = num | 524288;

	MISC::_CLEAR_VOLUME_AREA(volParam0, num);
	return;
}

void func_22() // Position - 0xC88 Signature - 22 00 03 00 00 2F 67 02 66 02 11 8A 20
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (PHYSICS::DOES_ROPE_EXIST(uLocal_34[i]))
			PHYSICS::DELETE_ROPE(&uLocal_34[i]);
	}

	return;
}

void func_23() // Position - 0xCB9 Signature - 22 00 02 00 00 6D
{
	if (AUDIO::PREPARE_SOUND("COTTON_GIN", "OFF_MISSION_SOUNDS", -2) && AUDIO::_HAS_SOUND_ID_FINISHED(iLocal_43))
		AUDIO::_PLAY_SOUND_FROM_POSITION_WITH_ID(iLocal_43, "COTTON_GIN", uLocal_39, "OFF_MISSION_SOUNDS", false, 0, true);

	return;
}

void func_24() // Position - 0xCEF Signature - 22 00 03 00 00 54 16 03 05 00 9E 05 8B 03
{
	int i;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_22))
		return;

	ANIMSCENE::SET_ANIM_SCENE_PAUSED(ansLocal_22, true);

	for (i = 0; i < 2; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_23[i]))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(ansLocal_22, uLocal_18[i], iLocal_23[i]);
			TASK::TASK_STAND_STILL(iLocal_23[i], -1);
		}
	}

	return;
}

BOOL func_25() // Position - 0xD48 Signature - 22 00 04 00 00 03
{
	ItemSet itemSet;
	int matchingEntities;

	if (MISC::GET_FRAME_COUNT() % 20 != 0)
		return false;

	if (BUILTIN::VDIST2(Global_34, uLocal_39) > 625f)
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_81))
		return false;

	itemSet = ITEMSET::CREATE_ITEMSET(true);
	matchingEntities = ENTITY::GET_MATCHING_ENTITIES(volLocal_81, itemSet, 2, 1, 0, 0);
	ITEMSET::DESTROY_ITEMSET(itemSet);

	if (matchingEntities > 0)
		return true;

	return false;
}

void func_26() // Position - 0xDAD Signature - 22 00 04 00 00 54
{
	int taskSequenceId;
	int i;

	ANIMSCENE::SET_ANIM_SCENE_PAUSED(ansLocal_22, true);

	for (i = 0; i < 2; i = i + 1)
	{
		if (func_47(iLocal_23[i], 0))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(ansLocal_22, uLocal_18[i], iLocal_23[i]);
		
			if (PHYSICS::DOES_ROPE_EXIST(uLocal_34[i]))
				PHYSICS::DETACH_ROPE_FROM_ENTITY(uLocal_34[i], iLocal_23[i]);
		
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_HORSE_ACTION(0, 1, 0, 0);
			TASK::TASK_FLEE_COORD(0, Global_34, 3, 256, 10000f, 10000, 0);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_23[i], 3f);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_23[i], taskSequenceId);
			PED::SET_PED_KEEP_TASK(iLocal_23[i], true);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		}
	}

	return;
}

void func_27() // Position - 0xE5E Signature - 22 00 02 00 00 5D 8C
{
	if (Global_1939596.f_302 > 300)
		Global_1939596.f_302 = 300;

	STREAMING::SET_POPULATION_BUDGET_MULTIPLIER(func_48());
	return;
}

int func_28() // Position - 0xE85 Signature - 22 00 02 00 00 5D 17
{
	return Global_1572887.f_14;
}

int func_29() // Position - 0xE93 Signature - 22 00 02 00 00 5D EB
{
	return Global_1893611.f_2;
}

int func_30(var uParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xEA1 Signature - 22 05 0E
{
	var groundZ;
	int num;
	BOOL flag;
	BOOL flag2;
	Vector3 vector;

	if (func_49(*uParam0, 0f, 0f, 0f))
		return 1;

	num = 0;
	flag = false;
	flag2 = false;
	vector = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vector);

	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, bParam3) && !flag)
	{
		if (num < iParam2)
		{
			num = num + 1;
			vector.f_2 = vector.f_2 + (float)iParam1;
			STREAMING::REQUEST_COLLISION_AT_COORD(vector);
		}
		else
		{
			flag = true;
		}
	}

	if (bParam4)
		vector = { *uParam0 };

	if (flag)
	{
		num = 1;
		vector.f_2 = vector.f_2 - (float)iParam1;
		STREAMING::REQUEST_COLLISION_AT_COORD(vector);
	
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, bParam3) && !flag2)
		{
			if (num < iParam2)
			{
				num = num + 1;
				vector.f_2 = vector.f_2 - (float)iParam1;
				STREAMING::REQUEST_COLLISION_AT_COORD(vector);
			}
			else
			{
				flag2 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = groundZ;
		return 1;
	}

	if (flag && flag2)
		return 0;

	uParam0->f_2 = groundZ;
	return 1;
}

void func_31(var uParam0, BOOL bParam1) // Position - 0xFA5 Signature - 22 02 04 00 00 66 01 8B 39
{
	if (bParam1)
	{
		uParam0->f_2 = 0;
		func_50(uParam0, true);
		func_51(uParam0, true);
		func_52(uParam0, true);
		func_53(uParam0, true);
		func_54(uParam0, true);
		func_37(uParam0, true);
		func_55(uParam0, true);
	}
	else
	{
		uParam0->f_2 = -1;
		func_50(uParam0, false);
		func_51(uParam0, false);
		func_52(uParam0, false);
		func_53(uParam0, false);
		func_54(uParam0, false);
		func_37(uParam0, false);
		func_55(uParam0, false);
	}

	return;
}

void func_32(var uParam0, BOOL bParam1) // Position - 0x1021 Signature - 22 02 04 00 00 66 01 8B 0E 00 66 00 80 02 25 00 01
{
	if (bParam1)
		func_56(&(uParam0->f_2), 256);
	else
		func_57(&(uParam0->f_2), 256);

	return;
}

void func_33(var uParam0, BOOL bParam1) // Position - 0x1047 Signature - 22 02 04 00 00 66 01 8B 0C 00 66 00 80 02 42
{
	if (bParam1)
		func_56(&(uParam0->f_2), 4);
	else
		func_57(&(uParam0->f_2), 4);

	return;
}

void func_34(var uParam0, BOOL bParam1) // Position - 0x1069 Signature - 22 02 04 00 00 66 01 8B 0C 00 66 00 80 02 11
{
	if (bParam1)
		func_56(&(uParam0->f_2), 2);
	else
		func_57(&(uParam0->f_2), 2);

	return;
}

void func_35(var uParam0, BOOL bParam1) // Position - 0x108B Signature - 22 02 04 00 00 66 01 8B 0C 00 66 00 80 02 09
{
	if (bParam1)
		func_56(&(uParam0->f_2), 1);
	else
		func_57(&(uParam0->f_2), 1);

	return;
}

void func_36(var uParam0, BOOL bParam1) // Position - 0x10AD Signature - 22 02 04 00 00 66 01 8B 0D 00 66 00 80
{
	if (bParam1)
		func_56(&(uParam0->f_2), 16);
	else
		func_57(&(uParam0->f_2), 16);

	return;
}

void func_37(var uParam0, BOOL bParam1) // Position - 0x10D1 Signature - 22 02 04 00 00 66 01 8B 0C 00 66 00 25
{
	if (bParam1)
		func_57(uParam0, 1024);
	else
		func_56(uParam0, 1024);

	return;
}

void func_38(var uParam0, BOOL bParam1) // Position - 0x10F3 Signature - 22 02 04 00 00 66 01 8B 0E 00 66 00 80 02 25 00 08
{
	if (bParam1)
		func_56(&(uParam0->f_2), 2048);
	else
		func_57(&(uParam0->f_2), 2048);

	return;
}

void func_39(var uParam0, BOOL bParam1) // Position - 0x1119 Signature - 22 02 04 00 00 66 01 8B 0B 00 66 00 6D 80
{
	if (bParam1)
		func_57(uParam0, 128);
	else
		func_56(uParam0, 128);

	return;
}

Ped func_40(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12) // Position - 0x1139 Signature - 22 0D
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, false, false);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_58(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

void func_41(int iParam0) // Position - 0x1179 Signature - 22 01 04 00 00 66 00 6D
{
	int num;

	if (iParam0 > 150)
		iParam0 = 150;

	iParam0 > Global_1939596.f_302 - 150;

	if (func_59(&num))
	{
		if (Global_1939596.f_291[num /*2*/].f_1 != iParam0)
		{
			Global_1939596.f_302 = Global_1939596.f_302 + Global_1939596.f_291[num /*2*/].f_1;
			Global_1939596.f_291[num /*2*/].f_1 = iParam0;
			Global_1939596.f_302 = Global_1939596.f_302 - iParam0;
			STREAMING::SET_POPULATION_BUDGET_MULTIPLIER(func_48());
		}
	
		return;
	}

	num = func_60();

	if (num == -1)
		return;

	Global_1939596.f_291[num /*2*/].f_1 = iParam0;
	Global_1939596.f_291[num /*2*/] = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1939596.f_302 = Global_1939596.f_302 - iParam0;
	STREAMING::SET_POPULATION_BUDGET_MULTIPLIER(func_48());
	return;
}

int func_42() // Position - 0x1246 Signature - 22 00 02 00 00 85
{
	return Global_1902569;
}

int func_43(int iParam0) // Position - 0x1252 Signature - 22 01 03 00 00 66 00 6D 0C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

BOOL func_44(int iParam0, int iParam1) // Position - 0x1265 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 07
{
	return iParam0 && iParam1 != false;
}

void func_45(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6) // Position - 0x1274 Signature - 22 07 10
{
	Vehicle vehiclePedIsIn;
	Ped pedIndexFromEntityIndex;
	Ped mount;
	BOOL pedCrouchMovement;
	BOOL isEntityAPed;
	var height;
	Ped pedIndexFromEntityIndex2;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	isEntityAPed = ENTITY::IS_ENTITY_A_PED(pedParam0);

	if (isEntityAPed)
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
		pedCrouchMovement = PED::GET_PED_CROUCH_MOVEMENT(pedIndexFromEntityIndex);
	
		if (PED::IS_PED_RAGDOLL(pedIndexFromEntityIndex))
			PED::_SET_PED_TO_DISABLE_RAGDOLL(pedIndexFromEntityIndex, true);
	}

	pedParam0 == func_61(Global_33) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE();

	if (func_62(pedParam0))
		if (func_63(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0)))
			PHYSICS::_UNHITCH_HORSE(pedParam0);

	if (func_64(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
	
		if (PED::IS_PED_ON_VEHICLE(pedIndexFromEntityIndex, false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedIndexFromEntityIndex, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_45(vehiclePedIsIn, vParam1, fParam4, iParam5, iParam6);
			}
		
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(pedIndexFromEntityIndex))
		{
			mount = PED::GET_MOUNT(pedIndexFromEntityIndex);
		
			if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_45(mount, vParam1, fParam4, iParam5, iParam6);
			}
		
			return;
		}
	}

	if (!func_64(iParam5, 32))
		if (isEntityAPed && ENTITY::IS_ENTITY_ATTACHED(pedParam0))
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), false, true);

	if (func_64(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, fParam4, true, func_64(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, fParam4, true, func_64(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(pedParam0, false);
		}
	}
	else if (func_64(iParam5, 129))
	{
		if (func_64(iParam5, 128))
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &height))
				vParam1.f_2 = height;
	
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(pedParam0, vParam1, fParam4, func_64(iParam5, 32), true);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, fParam4, true, func_64(iParam5, 32), true);
	}

	if (isEntityAPed)
	{
		if (!func_64(iParam5, 16))
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), pedCrouchMovement, 0, false);
	
		if (func_62(pedParam0))
		{
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
			PHYSICS::_UNHITCH_HORSE(pedIndexFromEntityIndex2);
		
			if (!func_64(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(pedIndexFromEntityIndex2, true, false);
				TASK::TASK_STAND_STILL(pedIndexFromEntityIndex2, -1);
			}
		}
	
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), true);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0) == Global_33 && !func_64(iParam5, 64))
		{
			!CAM::IS_SCREEN_FADED_OUT();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		}
	}

	return;
}

BOOL func_46(Ped pedParam0, Entity eParam1, var uParam2, var uParam3, int iParam4, int iParam5) // Position - 0x14EF Signature - 22 06 09 00 00 03
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (frameCount > uParam2->f_6)
		func_65(uParam2, true, frameCount);

	if (!Global_1940199.f_6 && !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (iParam5 > 0f)
			uParam2->f_13 = iParam5;
		else
			uParam2->f_13 = BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(pedParam0, true, false));
	
		if (!(uParam2->f_2 & 128 != 0))
		{
			if (func_66(pedParam0, uParam2))
			{
				*uParam3 = 128;
				func_67(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1940199.f_21)
		{
			if (!(uParam2->f_2 & 8 != 0))
			{
				if (func_68(pedParam0, uParam2))
				{
					*uParam3 = 8;
					func_67(pedParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_69(pedParam0, eParam1, uParam2))
				{
					*uParam3 = 8;
					func_67(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		
			if (*uParam2 & 32 != 0)
			{
				if (func_70(pedParam0, uParam2))
				{
					*uParam3 = 64;
					func_67(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1940199.f_20 && func_71(PLAYER::PLAYER_ID(), false, true, uParam2->f_2 & 524288 == 0))
		{
			if (!(uParam2->f_2 & 16384 != 0))
			{
				*uParam3 = 16384;
				func_67(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1940199.f_19)
		{
			if (func_72(uParam2, 1065353216))
			{
				if (!(uParam2->f_2 & 4 != 0))
				{
					if (func_73(Global_33, pedParam0, uParam2))
					{
						*uParam3 = 4;
						func_67(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			
				if (!(uParam2->f_2 & 256 != 0))
				{
					if (func_74(Global_33, pedParam0, uParam2))
					{
						*uParam3 = 256;
						func_67(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(uParam2->f_2 & 16 != 0))
		{
			if (uParam2->f_6 - Global_1940199.f_23 < 300)
			{
				if (func_75(Global_33, pedParam0, uParam2, false))
				{
					*uParam3 = 16;
					func_67(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_75(Global_33, pedParam0, uParam2, true))
			{
				*uParam3 = 16;
				func_67(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1940199.f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_76(pedParam0, uParam2))
				{
					*uParam3 = 32;
					func_67(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940199.f_19 || uParam2->f_13 < 20f)
			{
				if (func_77(&pedParam0, uParam2))
				{
					*uParam3 = 4096;
					func_67(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1940199.f_24 || Global_1940199.f_25)
		{
			if (!(uParam2->f_2 & 2 != 0))
			{
				if (func_78(uParam2, 4000))
				{
					if (func_79(pedParam0, Global_1940199.f_35, *uParam2 & 128 != 0, false, *uParam2 & 256 != 0) && func_80(uParam2, pedParam0) && func_81(uParam2, pedParam0))
					{
						*uParam3 = 2;
						func_67(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(uParam2->f_2 & 2 != 0))
		{
			if (uParam2->f_13 < 4f)
			{
				if (func_79(pedParam0, Global_1940199.f_35, *uParam2 & 128 != 0, true, *uParam2 & 256 != 0) && func_80(uParam2, pedParam0) && func_81(uParam2, pedParam0))
				{
					*uParam3 = 2;
					func_67(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (Global_1940199.f_34 == 0)
			{
				if (Global_1940199.f_35 != 0)
				{
					if (func_82(pedParam0, Global_1940199.f_35))
					{
						func_83();
						*uParam3 = 2;
						func_67(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (uParam2->f_13 < 10f)
			{
				if (func_84(uParam2, pedParam0) || uParam2->f_10 > 0 && func_85() - uParam2->f_10 < 2000)
				{
					if (PED::IS_PED_RAGDOLL(pedParam0))
					{
						func_83();
						*uParam3 = 2;
						func_67(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (Global_1940199.f_36 != 0)
			{
				if (func_86())
				{
					if (func_82(pedParam0, Global_1940199.f_36))
					{
						func_83();
						*uParam3 = 2;
						func_67(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(uParam2->f_2 & 1024 != 0))
		{
			if (func_87(uParam2, pedParam0))
			{
				*uParam3 = 1024;
				func_67(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (func_88(uParam2, pedParam0))
		{
			*uParam3 = 1048576;
			func_67(pedParam0, uParam2, *uParam3);
			return true;
		}
	
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!(uParam2->f_2 & 2048 != 0))
			{
				if (func_89(pedParam0, eParam1, uParam2))
				{
					*uParam3 = 2048;
					func_67(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_90(pedParam0, uParam2))
					{
						*uParam3 = 8192;
						func_67(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (*uParam2 & 64 != 0)
			{
				if (func_91(pedParam0, uParam2))
				{
					*uParam3 = 32768;
					func_67(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (uParam2->f_13 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_92(uParam2, 4000))
				{
					if (func_93(&pedParam0, uParam2))
					{
						*uParam3 = 512;
						func_67(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_94(pedParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_5 = 0;
					func_67(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!(uParam2->f_2 & 1 != 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		{
			if (func_95(uParam2, pedParam0))
			{
				*uParam3 = 1;
				func_67(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	}

	return false;
}

BOOL func_47(Ped pedParam0, int iParam1) // Position - 0x1ADB Signature - 22 02 05 00 00 66 00 2F
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_64(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_64(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_64(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_64(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_64(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_64(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_64(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_64(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

float func_48() // Position - 0x1BDA Signature - 22 00 02 00 00 86
{
	return func_96(150f, BUILTIN::TO_FLOAT(Global_1939596.f_302)) / BUILTIN::TO_FLOAT(300);
}

BOOL func_49(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x1BFE Signature - 22 06 08 00 00 66
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_50(var uParam0, BOOL bParam1) // Position - 0x1C27 Signature - 22 02 04 00 00 66 01 8B 0A
{
	if (bParam1)
		func_57(uParam0, 4);
	else
		func_56(uParam0, 4);

	return;
}

void func_51(var uParam0, BOOL bParam1) // Position - 0x1C45 Signature - 22 02 04 00 00 66 01 8B 0B 00 66 00 6D 08
{
	if (bParam1)
		func_57(uParam0, 8);
	else
		func_56(uParam0, 8);

	return;
}

void func_52(var uParam0, BOOL bParam1) // Position - 0x1C65 Signature - 22 02 04 00 00 66 01 8B 0B 00 66 00 6D 10
{
	if (bParam1)
	{
		func_57(uParam0, 16);
	}
	else
	{
		func_56(uParam0, 67108864);
		func_56(uParam0, 16);
	}

	return;
}

void func_53(var uParam0, BOOL bParam1) // Position - 0x1C90 Signature - 22 02 04 00 00 66 01 8B 0B 00 66 00 6D 20
{
	if (bParam1)
		func_57(uParam0, 32);
	else
		func_56(uParam0, 32);

	return;
}

void func_54(var uParam0, BOOL bParam1) // Position - 0x1CB0 Signature - 22 02 04 00 00 66 01 8B 0B 00 66 00 6D 40
{
	if (bParam1)
		func_57(uParam0, 64);
	else
		func_56(uParam0, 64);

	return;
}

void func_55(var uParam0, BOOL bParam1) // Position - 0x1CD0 Signature - 22 02 04 00 00 66 01 8B 0D 00 66 00 21
{
	if (bParam1)
		func_57(uParam0, 1048576);
	else
		func_56(uParam0, 1048576);

	return;
}

void func_56(var uParam0, int iParam1) // Position - 0x1CF4 Signature - 22 02 04 00 00 66 00 76 66 00
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_57(var uParam0, int iParam1) // Position - 0x1D09 Signature - 22 02 04 00 00 66 00 76 66 01
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_58(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1D1A Signature - 22 08
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(pedParam0, true);
			flag = true;
		}
	}

	if (PED::IS_PED_HUMAN(pedParam0))
	{
		if (bParam6)
			WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(pedParam0, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(eptParam1));
	
		if (PED::IS_PED_MALE(pedParam0) && !bParam3)
			func_97(pedParam0, false, true);
	
		PED::SET_PED_CONFIG_FLAG(pedParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(pedParam0)))
	{
		if (!bParam5)
		{
			PED::_EQUIP_META_PED_OUTFIT_PRESET(pedParam0, 0, false);
			flag = true;
		}
	
		if (bParam4)
		{
			func_98(pedParam0, false);
			flag = true;
		}
	
		func_99(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_59(var uParam0) // Position - 0x1DE4 Signature - 22 01 04 00 00 2F
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1939596.f_291[i /*2*/], false) && Global_1939596.f_291[i /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			*uParam0 = i;
			return true;
		}
	}

	return false;
}

int func_60() // Position - 0x1E30 Signature - 22 00 03 00 00 2F 67 02 66 02 62 8A 22
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1939596.f_291[i /*2*/], false))
			return i;
	}

	return -1;
}

Ped func_61(Ped pedParam0) // Position - 0x1E64 Signature - 22 01 03 00 00 66 00 50
{
	return pedParam0;
}

BOOL func_62(Ped pedParam0) // Position - 0x1E6E Signature - 22 01 04 00 00 66 00 03 05 00 14 05 8B 04 00 2F 50 01 01 66 00 03 05 00 A2
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_63(Ped pedParam0) // Position - 0x1EA0 Signature - 22 01 03 00 00 66 00 03 05 00 14 05 8B 04 00 2F 50 01 01 66 00 03
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_HitchingPost")))
		return true;

	return false;
}

BOOL func_64(int iParam0, int iParam1) // Position - 0x1EE2 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 03
{
	return iParam0 && iParam1 != false;
}

void func_65(var uParam0, BOOL bParam1, int iParam2) // Position - 0x1EF1 Signature - 22 03 05 00 00 66 02 39
{
	func_100(iParam2);

	if (Global_1572887.f_14 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
			return;
	
		if (Global_1940199.f_6)
			return;
	}
	else
	{
		if (!Global_1295666.f_6)
			return;
	
		if (Global_1295666.f_7)
			return;
	}

	if (bParam1)
		uParam0->f_11 = 0;

	uParam0->f_6 = iParam2;

	if (Global_1572887.f_14 == -1)
		uParam0->f_14 = Global_1940199.f_38;
	else
		uParam0->f_14 = func_101(0);

	switch (uParam0->f_7)
	{
		case 0:
			if (*uParam0 & 16 != 0)
				if (!(*uParam0 & 33554432 != 0))
					if (uParam0->f_14 == joaat("weapon_thrown_dynamite"))
						if (PED::IS_PED_PLANTING_BOMB(Global_33))
							func_57(uParam0, 33554432);
					else if (!(*uParam0 & 8192 != 0))
						if (func_102(true, true))
							func_57(uParam0, 33554432);
				else if (!PED::IS_PED_PLANTING_BOMB(Global_33) && !func_102(true, true) || *uParam0 & 8192 != 0)
					func_56(uParam0, 33554432);
			break;
	
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	}

	if (!(uParam0->f_2 & 1024 != 0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
		{
			if (func_103(uParam0))
				uParam0->f_16 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
		else if (uParam0->f_16 != 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(uParam0->f_16, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_15))
				{
					uParam0->f_15 = 0;
					uParam0->f_16 = 0;
				}
			}
		}
	}

	uParam0->f_7 = uParam0->f_7 + 1;

	if (uParam0->f_7 >= 4)
	{
		uParam0->f_7 = 0;
		uParam0->f_8 = uParam0->f_8 + 1;
	
		if (uParam0->f_8 > 4)
			uParam0->f_8 = 0;
	}

	func_104(uParam0);
	return;
}

BOOL func_66(Ped pedParam0, var uParam1) // Position - 0x20C1 Signature - 22 02 07 00 00 66 00 03
{
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Ped pedIndexFromEntityIndex;

	if (!EVENT::_0x1D1B448D719415AB(pedParam0))
		return false;

	recentEvent = EVENT::_EVENT_GET_RECENT_EVENT(pedParam0, 0, 0);

	if (recentEvent == 0)
		return false;

	switch (recentEvent)
	{
		case joaat("event_acquaintance_ped_dead"):
		case joaat("event_ped_seen_dead_ped"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("event_dead_ped_found"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
		
			if (!ENTITY::IS_ENTITY_A_PED(sourceEntityFromEvent))
				return false;
		
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sourceEntityFromEvent);
		
			if (!PED::IS_PED_HUMAN(pedIndexFromEntityIndex))
				return false;
		
			if (DECORATOR::DECOR_EXIST_ON(pedIndexFromEntityIndex, "bIgnoreDamageChecking"))
				return false;
		
			if (pedIndexFromEntityIndex == Global_1940199.f_27)
				return false;
		
			if (pedIndexFromEntityIndex == Global_1940199.f_26)
				return false;
		
			if (!func_105(pedParam0, uParam1, pedIndexFromEntityIndex))
				return false;
		
			if (func_106(pedParam0, pedIndexFromEntityIndex) <= func_107(uParam1))
				return true;
			break;
	}

	return false;
}

void func_67(Ped pedParam0, var uParam1, int iParam2) // Position - 0x2198 Signature - 22 03 05 00 00 66 02 25
{
	if (iParam2 != 16384)
		uParam1->f_11 = pedParam0;

	if (func_108(iParam2, 1, 1, 1, 0))
		func_57(uParam1, 2048);

	uParam1->f_17 = iParam2;
	func_109(uParam1, true);
	func_110();
	return;
}

BOOL func_68(Ped pedParam0, var uParam1) // Position - 0x21D5 Signature - 22 02 08 00 00 86
{
	float num;
	float num2;
	int num3;
	int num4;

	num = 85f;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_111(pedParam0, !(*uParam1 & 268435456 != 0), !(*uParam1 & 536870912 != 0), !(*uParam1 & 1073741824 != 0), 0, false))
		{
			if (uParam1->f_13 < 5f)
				num = 95f;
			else if (uParam1->f_13 < 15f)
				num = 90f;
		
			num2 = func_112(uParam1);
		
			if (func_113(uParam1, pedParam0, num, num2))
			{
				if (uParam1->f_3 == 0)
					uParam1->f_3 = MISC::GET_GAME_TIMER();
			
				num3 = MISC::GET_GAME_TIMER() - uParam1->f_3;
				num4 = func_114(uParam1);
			
				if (uParam1->f_3 != 0)
				{
					if (num3 > num4)
					{
						func_109(uParam1, true);
						return true;
					}
					else if (uParam1->f_13 < 3.5f)
					{
						if (num3 > func_115(uParam1))
						{
							func_109(uParam1, true);
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_69(Ped pedParam0, Entity eParam1, var uParam2) // Position - 0x22BF Signature - 22 03 07 00 00 66
{
	float num;
	float num2;

	if (eParam1 == 0)
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(eParam1))
		return false;

	num = 85f;

	if (func_116(eParam1, !(*uParam2 & 268435456 != 0), !(*uParam2 & 536870912 != 0), !(*uParam2 & 1073741824 != 0), 0))
	{
		if (uParam2->f_13 < 5f)
			num = 95f;
		else if (uParam2->f_13 < 15f)
			num = 90f;
	
		num2 = func_112(uParam2);
	
		if (func_113(uParam2, pedParam0, num, num2))
		{
			if (uParam2->f_3 == 0)
				uParam2->f_3 = MISC::GET_GAME_TIMER();
		
			if (uParam2->f_3 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_3 > func_114(uParam2))
				{
					func_109(uParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_70(Ped pedParam0, var uParam1) // Position - 0x2395 Signature - 22 02 08 00 00 03
{
	Entity entity;
	Ped pedIndexFromEntityIndex;
	Entity outEntity;
	float customDistance;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &entity))
		return false;

	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false))
		if (outEntity == entity)
			return false;

	if (!ENTITY::IS_ENTITY_A_PED(entity))
		return false;

	if (Global_1940199.f_34 != 0)
		if (PED::_GET_RIDER_OF_MOUNT(Global_1940199.f_34, true) == pedParam0)
			return false;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entity);

	if (func_105(pedParam0, uParam1, pedIndexFromEntityIndex))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_4 > func_114(uParam1))
		{
			customDistance = func_112(uParam1);
		
			if (uParam1->f_13 < customDistance)
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_33, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, pedIndexFromEntityIndex, 17))
					if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_33, -1082130432, customDistance, -1082130432, -1082130432) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, pedIndexFromEntityIndex, -1082130432, customDistance, -1082130432, -1082130432))
						return true;
		}
	}

	return false;
}

BOOL func_71(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x249E Signature - 22 04 29
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_117(bParam1, bParam2, bParam3);

	if (Global_1572887.f_14 != -1)
		if (plParam0 == Global_1295666.f_5)
			if (!Global_1295666.f_6)
				return 0;
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
			return 0;
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
		return 0;

	if (LAW::IS_LAW_INCIDENT_ACTIVE(plParam0))
	{
		LAW::_0xCBFB4951F2E3934C(plParam0, &data);
	
		if (bParam3 || data.f_10 > 0 || PLAYER::GET_PLAYER_WANTED_LEVEL(plParam0) > 0)
			return 1;
	}
	else if (bParam2 && !(LAW::_0x148E7AC8141C9E64(plParam0) == 1370593166))
	{
		return 0;
	}

	for (i = 0; i < 24; i = i + 1)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(plParam0, i, &crimeType))
			if (crimeType.f_10 && bParam3 || LAW::_0xDAEFDFDB2AEECE37(crimeType, crimeType.f_7) > 0)
				return 1;
	}

	if (bParam1)
		if (LAW::ARE_WITNESSES_ACTIVE(plParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(plParam0, false, 0))
			if (bParam3 || LAW::_0xE083BEDA81709891(plParam0) > 0)
				return 1;

	return 0;
}

BOOL func_72(var uParam0, int iParam1) // Position - 0x25D3 Signature - 22 02 06 00 00 66 00 27 09 2F 23 04 00 09 50 02 01 39 21 2F 00 67 04 66 04 66 00 27 09 10 67 05 66 05 36
{
	int num;
	int num2;

	if (uParam0->f_9 <= 0)
		return true;

	num = func_85();
	num2 = num - uParam0->f_9;

	if ((float)num2 > iParam1 * 1000f)
		return true;

	return false;
}

BOOL func_73(Ped pedParam0, Ped pedParam1, var uParam2) // Position - 0x260A Signature - 22 03 08 00 00 66 01 03
{
	float num;
	int shotNearRecentlyTime;
	float num2;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			num = func_118(uParam2);
		
			if (!WEAPON::IS_WEAPON_VALID(Global_1940199.f_40) || Global_1940199.f_40 == joaat("WEAPON_UNARMED"))
				PED::_0xD355E2F1BB41087E(pedParam1, num);
			else if (WEAPON::IS_WEAPON_VALID(Global_1940199.f_40) && WEAPON::_0xEA522F991E120D45(Global_1940199.f_40))
				PED::_0xD355E2F1BB41087E(pedParam1, 5f);
			else
				PED::_0xD355E2F1BB41087E(pedParam1, num);
		}
	
		if (!WEAPON::IS_WEAPON_VALID(Global_1940199.f_40) || Global_1940199.f_40 == joaat("WEAPON_UNARMED") || WEAPON::IS_WEAPON_VALID(Global_1940199.f_40) && WEAPON::_IS_WEAPON_SILENT(Global_1940199.f_40))
		{
			num2 = 3f;
			shotNearRecentlyTime = 3000;
		}
		else
		{
			num2 = 1f;
			shotNearRecentlyTime = 1000;
		}
	
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), pedParam1, shotNearRecentlyTime) && PED::TIME_SINCE_PED_LAST_SHOT(pedParam0) <= num2)
		{
			if (func_81(uParam2, pedParam1))
			{
				func_109(uParam2, true);
				return true;
			}
		}
	}

	return false;
}

BOOL func_74(Ped pedParam0, Ped pedParam1, var uParam2) // Position - 0x2711 Signature - 22 03 06
{
	var weaponHash;

	if (uParam2->f_13 < (float)func_119(uParam2))
	{
		if (WEAPON::IS_WEAPON_VALID(Global_1940199.f_40) && !WEAPON::_IS_WEAPON_SILENT(Global_1940199.f_40) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_33, &weaponHash))
		{
			if (func_81(uParam2, pedParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(pedParam0) <= 1f)
				{
					func_109(uParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_75(Ped pedParam0, Ped pedParam1, var uParam2, BOOL bParam3) // Position - 0x277C Signature - 22 04 10
{
	Vector3 entityCoords;
	int num;
	var outCoords;
	var outCoords2;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, true) };
	num = func_120(uParam2);

	if (!bParam3)
	{
		switch (num)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, uParam2->f_24))
				{
					func_109(uParam2, true);
					return true;
				}
				break;
		
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), entityCoords, uParam2->f_30))
				{
					func_109(uParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), uParam2->f_29, &outCoords, false, false);
				
					if (func_121(pedParam1, entityCoords, outCoords))
					{
						func_109(uParam2, true);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (num)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, uParam2->f_24))
				{
					func_109(uParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), uParam2->f_29, &outCoords2, false, false);
				
					if (func_121(pedParam1, entityCoords, outCoords2))
					{
						func_109(uParam2, true);
						return true;
					}
				}
				break;
		}
	}

	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_TOXIC_MOONSHINE_CLOUD"), entityCoords, 15f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_toxic_moonshine"), entityCoords, 15f))
		return true;

	return false;
}

BOOL func_76(Ped pedParam0, var uParam1) // Position - 0x28F5 Signature - 22 02 12
{
	int i;
	float num;
	var unk;
	Vector3 entityCoords;
	BOOL flag;
	BOOL flag2;

	unk = 2;
	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	flag = *uParam1 & 4096 != 0;

	for (i = 0; i < Global_1940199.f_33; i = i + 1)
	{
		if (!func_105(pedParam0, uParam1, Global_1940199.f_28[i]) || pedParam0 == Global_1940199.f_28[i])
		{
		}
		else
		{
			flag2 = func_122(Global_1940199.f_28[i]);
			num = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1940199.f_28[i], false, false), entityCoords);
		
			if (func_123(Global_1940199.f_28[i]))
			{
				if (num < 35f)
				{
					if (DECORATOR::DECOR_EXIST_ON(Global_1940199.f_28[i], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") || DECORATOR::DECOR_EXIST_ON(Global_1940199.f_28[i], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB"))
					{
						unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940199.f_28[i], false, false) };
						unk[1 /*3*/] = { entityCoords };
						uParam1->f_11 = pedParam0;
						return true;
					}
				}
			}
		
			if (func_124(uParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940199.f_28[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_11 = pedParam0;
				return true;
			}
			else if (func_125(uParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940199.f_28[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_11 = pedParam0;
				return true;
			}
			else if (func_126(uParam1, pedParam0, num, i))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940199.f_28[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_11 = pedParam0;
				return true;
			}
		}
	}

	return false;
}

BOOL func_77(var uParam0, var uParam1) // Position - 0x2AD1 Signature - 22 02 0F
{
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Entity tar;
	var entityCoords;
	var entityCoords2;

	if (!EVENT::_0x1D1B448D719415AB(*uParam0))
		return false;

	recentEvent = EVENT::_EVENT_GET_RECENT_EVENT(*uParam0, 0, 0);

	switch (recentEvent)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("event_shocking_window_smashed"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(*uParam0, recentEvent, 0, 0);
			tar = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(*uParam0, recentEvent, 0, 0);
			entityCoords = { ENTITY::GET_ENTITY_COORDS(sourceEntityFromEvent, false, false) };
			entityCoords2 = { ENTITY::GET_ENTITY_COORDS(tar, false, false) };
			EVENT::_0x1A5C5D350068A673(*uParam0, 0);
			return true;
	}

	return false;
}

BOOL func_78(var uParam0, int iParam1) // Position - 0x2B49 Signature - 22 02 06 00 00 66 00 27 09 2F 23 04 00 09 50 02 01 39 21 2F 00 67 04 66 04 66 00 27 09 10 67 05 66 05 66 01 2E 04 00 09 50 02 01 2F 50 02 01 22 05
{
	int num;
	int num2;

	if (uParam0->f_9 <= 0)
		return true;

	num = func_85();
	num2 = num - uParam0->f_9;

	if (num2 > iParam1)
		return true;

	return false;
}

int func_79(Ped pedParam0, Vehicle veParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2B78 Signature - 22 05 0A
{
	Ped entity2;
	Vehicle playersLastVehicle;
	Entity entity;

	entity2 = PLAYER::PLAYER_PED_ID();

	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(pedParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(pedParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, entity2, true, true) || DECORATOR::DECOR_EXIST_ON(pedParam0, "DamagedByPlayer"))
				return 1;
		
			playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		
			if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle))
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, playersLastVehicle, true, true))
					return 1;
		
			if (PED::IS_PED_ON_MOUNT(entity2))
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(entity2)))
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, PED::GET_MOUNT(entity2), true, true))
						return 1;
			else if (ENTITY::DOES_ENTITY_EXIST(veParam1))
				if (!ENTITY::IS_ENTITY_DEAD(veParam1))
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, veParam1, true, true))
						return 1;
		}
	}
	else if (!bParam2)
	{
		if (func_127(entity2, &entity))
			if (PED::IS_PED_RAGDOLL(pedParam0) || PED::_0x947E43F544B6AB34(pedParam0, PLAYER::PLAYER_ID(), 10, 1000) || !bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
				return 1;
	}

	if (!bParam2)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (func_128(entity2, pedParam0))
		return 1;

	if (PED::_GET_PED_GRAPPLER(PLAYER::PLAYER_PED_ID()) == pedParam0)
		if (PED::GET_PED_IS_GRAPPLING(PLAYER::PLAYER_PED_ID()))
			return 1;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (PED::IS_PED_BEING_JACKED(pedParam0))
			if (PED::GET_PEDS_JACKER(pedParam0) == entity2)
				return 1;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(entity2, 8, 0))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(pedParam0))
			return 1;

	return 0;
}

int func_80(var uParam0, Ped pedParam1) // Position - 0x2D0E Signature - 22 02 05 00 00 66 01 25 18
{
	int _int;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam1, "iDamageFrame"))
		return 1;

	_int = DECORATOR::DECOR_GET_INT(pedParam1, "iDamageFrame");

	if (_int < 0)
		DECORATOR::DECOR_SET_INT(pedParam1, "iDamageFrame", uParam0->f_6);
	else if (uParam0->f_6 > _int + 10)
		return 1;

	return 0;
}

BOOL func_81(var uParam0, Ped pedParam1) // Position - 0x2D5E Signature - 22 02 04 00 00 66 00 39
{
	if (func_129(uParam0))
		return true;

	if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam1, 400))
		return true;

	if (PED::IS_PED_DEAD_OR_DYING(pedParam1, true))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 8, 0) || PED::GET_PED_CONFIG_FLAG(pedParam1, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(pedParam1))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 16, 0) || PED::GET_PED_CONFIG_FLAG(pedParam1, 10, true))
		return false;

	if (PED::_GET_LASSO_TARGET(Global_33) != 0)
		return true;

	if (WEAPON::_IS_TARGET_PED_CONSTRAINED_BY_PED_USING_BOLAS(Global_33, pedParam1))
		return true;

	if (!PED::IS_PED_RAGDOLL(pedParam1))
		return true;

	return false;
}

BOOL func_82(Ped pedParam0, Ped pedParam1) // Position - 0x2E0B Signature - 22 02 04 00 00 66 01 03
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, pedParam1, true, true))
			return true;
	
		if (func_130(pedParam0, pedParam1, true, true) < 4f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, pedParam1) && PED::IS_PED_RAGDOLL(pedParam0))
				return true;
	}

	return false;
}

void func_83() // Position - 0x2E58 Signature - 22 00 02 00 00 50
{
	return;
}

BOOL func_84(var uParam0, Ped pedParam1) // Position - 0x2E60 Signature - 22 02 0C
{
	Vehicle vehiclePedIsUsing;
	var entityCoords;
	int actual;
	int expected;
	int i;
	Ped pedInDraftHarness;

	vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_33);

	if (vehiclePedIsUsing != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing)))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, false) };
	
		if (func_131(vehiclePedIsUsing, pedParam1, entityCoords))
		{
			uParam0->f_10 = func_85();
			return true;
		}
		else if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(vehiclePedIsUsing, &expected, &actual))
		{
			if (expected <= 0)
			{
				return false;
			}
			else if (actual == expected)
			{
				for (i = 0; i < actual; i = i + 1)
				{
					pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(vehiclePedIsUsing, i);
				
					if (ENTITY::DOES_ENTITY_EXIST(pedInDraftHarness))
					{
						if (func_132(pedInDraftHarness, entityCoords, true) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedInDraftHarness, pedParam1))
							{
								uParam0->f_10 = func_85();
								return true;
							}
						}
					}
				}
			}
		}
	}

	return false;
}

int func_85() // Position - 0x2F21 Signature - 22 00 03 00 00 03 01 00 A8
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

BOOL func_86() // Position - 0x2F3F Signature - 22 00 02 00 00 5D E7 9A 1D 27 24
{
	if (Global_1940199.f_36 == 0)
		return false;

	if (Global_1940199.f_36 == Global_1940199.f_34)
		return false;

	if (Global_1940199.f_37 <= 0)
		return false;

	if (func_85() - Global_1940199.f_37 >= 10000)
		return false;

	return true;
}

BOOL func_87(var uParam0, Ped pedParam1) // Position - 0x2F8C Signature - 22 02 07 00 00 66 00 27
{
	float num;
	int num2;
	int num3;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam1))
		return false;

	num = func_107(uParam0);

	if (uParam0->f_13 > func_133(uParam0) && uParam0->f_13 > num)
		return false;

	num3 = func_134(pedParam1);
	num2 = func_135(uParam0->f_15);

	if (num3 == num2 || num3 == 2 || num2 == 2)
		if (uParam0->f_13 <= num || PED::CAN_PED_SEE_PED_CACHED(pedParam1, Global_33, false) == 1 || PED::CAN_PED_SEE_PED_CACHED(pedParam1, uParam0->f_15, false) == 1)
			return true;

	return false;
}

BOOL func_88(var uParam0, Ped pedParam1) // Position - 0x3040 Signature - 22 02 0D
{
	Ped ped;
	var entityCoords;
	var entityCoords2;
	float num;
	float num2;

	if (!Global_1940199.f_50)
		return false;

	if (!(uParam0->f_1 & 1 != 0))
		return false;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return false;

	if (func_136(ped, pedParam1, 1060437492) != 0)
		return false;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, true, false) };
	entityCoords2 = { ENTITY::GET_ENTITY_COORDS(ped, true, false) };
	num = func_137(entityCoords, entityCoords2);
	num2 = MISC::ABSF(entityCoords.f_2 - entityCoords2.f_2);

	if (num2 >= 2f)
		return false;

	if (num > uParam0->f_31)
		return false;

	return true;
}

BOOL func_89(Ped pedParam0, Entity eParam1, var uParam2) // Position - 0x30DE Signature - 22 03 08 00 00 66 02
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (uParam2->f_13 > 4f)
		return false;

	flag = *uParam2 & 256 != 0;
	flag2 = *uParam2 & 524288 != 0;
	flag3 = *uParam2 & 128 != 0;
	return func_138(pedParam0, eParam1, flag, flag3, uParam2->f_13, flag2);
}

BOOL func_90(Ped pedParam0, var uParam1) // Position - 0x3126 Signature - 22 02 0A
{
	Ped jackTarget;
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Entity tar;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;

	if (*uParam1 & 67108864 != 0)
		return true;

	if (Global_1940199.f_18)
		return true;

	if (*uParam1 & 33554432 != 0)
	{
		if (func_139(pedParam0, uParam1, true))
			return true;
	
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_33, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_33, 17) && PED::CAN_PED_SEE_ENTITY(pedParam0, Global_33, true, false) == 1)
			return true;
	}

	jackTarget = PED::GET_JACK_TARGET(Global_33);

	if (ENTITY::DOES_ENTITY_EXIST(jackTarget) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(jackTarget, true) || Global_1940199.f_24)
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_33, -1082130432, -1082130432, -1082130432, -1082130432))
			return true;

	if (!func_140(pedParam0))
		return false;

	recentEvent = EVENT::_EVENT_GET_RECENT_EVENT(pedParam0, 0, 0);

	if (recentEvent == 0)
		return false;

	switch (recentEvent)
	{
		case joaat("event_shocking_seen_ped_robbed"):
		case joaat("event_shocking_seen_ped_intimidated"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("event_shocking_mount_stolen"):
			if (func_141(uParam1))
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
			tar = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
		
			if (!ENTITY::IS_ENTITY_A_PED(sourceEntityFromEvent) || !ENTITY::IS_ENTITY_A_PED(tar))
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sourceEntityFromEvent);
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(tar);
		
			if (pedIndexFromEntityIndex != Global_33)
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			if (ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(pedIndexFromEntityIndex2))
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			return true;
	
		case joaat("event_shocking_entity_hogtied"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
			tar = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
		
			if (!ENTITY::IS_ENTITY_A_PED(sourceEntityFromEvent) || !ENTITY::IS_ENTITY_A_PED(tar))
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sourceEntityFromEvent);
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(tar);
		
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, pedIndexFromEntityIndex, -1082130432, -1082130432, -1082130432, -1082130432) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_33, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, pedIndexFromEntityIndex, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_33, 17))
					if (!func_142(uParam1, pedParam0))
						if (func_132(pedIndexFromEntityIndex, Global_34, true) < 7f)
							return true;
			break;
	
		case joaat("EVENT_SHOCKING_SEEN_MELEE_ACTION"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
			tar = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
		
			if (!ENTITY::IS_ENTITY_A_PED(sourceEntityFromEvent) || !ENTITY::IS_ENTITY_A_PED(tar))
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sourceEntityFromEvent);
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(tar);
		
			if (!PED::IS_PED_A_PLAYER(pedIndexFromEntityIndex) || !PED::IS_PED_A_PLAYER(pedIndexFromEntityIndex2))
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, pedIndexFromEntityIndex, -1082130432, -1082130432, -1082130432, -1082130432) || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, pedIndexFromEntityIndex2, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, pedIndexFromEntityIndex, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, pedIndexFromEntityIndex2, 17))
					return true;
		
			EVENT::_0x1A5C5D350068A673(pedParam0, 0);
			return false;
	}

	return false;
}

BOOL func_91(Ped pedParam0, var uParam1) // Position - 0x3481 Signature - 22 02 04 00 00 2F
{
	if (!func_143(0))
		return false;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_33, 90f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_33, 17))
			return true;

	return false;
}

BOOL func_92(var uParam0, int iParam1) // Position - 0x34BA Signature - 22 02 06 00 00 66 00 27 09 2F 23 04 00 09 50 02 01 39 21 2F 00 67 04 66 04 66 00 27 09 10 67 05 66 05 66 01 2E 04 00 09 50 02 01 2F 50 02 01 22 02
{
	int num;
	int num2;

	if (uParam0->f_9 <= 0)
		return true;

	num = func_85();
	num2 = num - uParam0->f_9;

	if (num2 > iParam1)
		return true;

	return false;
}

BOOL func_93(var uParam0, var uParam1) // Position - 0x34E9 Signature - 22 02 04 00 00 66 00 76 03
{
	return PED::_GET_IS_PED_BEING_ROBBED(*uParam0, PLAYER::PLAYER_ID(), false);
}

BOOL func_94(Ped pedParam0, var uParam1) // Position - 0x34FD Signature - 22 02 04 00 00 66 00 03 05 00 BE
{
	if (!PED::IS_PED_HUMAN(pedParam0))
		return false;

	if (uParam1->f_5 == 0)
		uParam1->f_5 = func_85();
	else if (func_85() - uParam1->f_5 > func_144(uParam1))
		return func_145(pedParam0, uParam1, false, -1082130432);

	return false;
}

BOOL func_95(var uParam0, Ped pedParam1) // Position - 0x354A Signature - 22 02 06 00 00 66 01
{
	Entity pedSourceOfDeath;
	Ped pedIndexFromEntityIndex;

	pedSourceOfDeath = PED::GET_PED_SOURCE_OF_DEATH(pedParam1);

	if (!ENTITY::DOES_ENTITY_EXIST(pedSourceOfDeath))
		return false;

	if (DECORATOR::DECOR_EXIST_ON(pedParam1, "bIgnoreDamageChecking"))
		return false;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedSourceOfDeath);

	if (Global_33 == pedIndexFromEntityIndex || Global_1940199.f_34 == pedIndexFromEntityIndex)
		return true;

	return false;
}

float func_96(float fParam0, float fParam1) // Position - 0x359D Signature - 22 02 04 00 00 66 00 66 01 31
{
	if (fParam0 > fParam1)
		return fParam0;

	return fParam1;
}

void func_97(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x35B4 Signature - 22 03 05 00 00 66 00
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (bParam1)
		PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("HATS"), 0, true);
	else
		PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_98(Ped pedParam0, BOOL bParam1) // Position - 0x35F9 Signature - 22 02 04 00 00 66 00 03 05 00 14
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_99(Ped pedParam0, int iParam1) // Position - 0x363E Signature - 22 02 04 00 00 66 01 09
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

void func_100(int iParam0) // Position - 0x3665 Signature - 22 01 07
{
	int num;
	BOOL flag;
	Hash weaponHash;
	BOOL isWeaponValid;

	if (Global_19 & 4 != 0)
		return;

	num = iParam0 - Global_1940199.f_32;
	Global_1940199.f_21 = func_146();

	if (Global_1940199.f_21)
		Global_1940199.f_22 = MISC::GET_GAME_TIMER();

	flag = false;

	if (WEAPON::IS_WEAPON_VALID(Global_1940199.f_38))
	{
		flag = true;
	
		if (PED::IS_PED_SHOOTING(Global_33))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_33, &weaponHash))
			{
			}
			else
			{
				weaponHash = Global_1940199.f_38;
			}
		
			Global_1940199.f_40 = weaponHash;
		}
	}

	switch (num)
	{
		case 0:
			func_147(&(Global_1940199.f_28), &(Global_1940199.f_33));
			Global_1940199.f_32 = iParam0;
			break;
	
		case 1:
			Global_1940199.f_24 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
		
			if (!Global_1940199.f_24)
			{
				if (flag && WEAPON::_IS_WEAPON_LASSO(Global_1940199.f_38))
					Global_1940199.f_24 = PED::_GET_LASSO_TARGET(Global_33) != 0;
			
				if (Global_1940199.f_40 == joaat("weapon_thrown_bolas"))
					Global_1940199.f_24 = WEAPON::_0x46D42883E873C1D7(Global_33) > 0;
			}
			break;
	
		case 2:
			isWeaponValid = WEAPON::IS_WEAPON_VALID(Global_1940199.f_40);
		
			if (isWeaponValid && WEAPON::_IS_WEAPON_LASSO(Global_1940199.f_40))
			{
				Global_1940199.f_19 = 0;
			}
			else
			{
				if (isWeaponValid && WEAPON::_IS_WEAPON_SILENT(Global_1940199.f_40))
					Global_1940199.f_19 = PED::TIME_SINCE_PED_LAST_SHOT(Global_33) <= 3f;
				else
					Global_1940199.f_19 = PED::TIME_SINCE_PED_LAST_SHOT(Global_33) <= 1f;
			
				if (Global_1940199.f_19)
					Global_1940199.f_23 = MISC::GET_FRAME_COUNT();
			}
			break;
	
		default:
			Global_1940199.f_32 = iParam0 + 1;
			break;
	}

	Global_19 = Global_19 | 4;
	return;
}

Hash func_101(int iParam0) // Position - 0x37FD Signature - 22 01 03 00 00 66 00 5D
{
	return Global_1102813.f_3695[iParam0 /*3*/];
}

BOOL func_102(BOOL bParam0, BOOL bParam1) // Position - 0x3810 Signature - 22 02 06 00 00 66 00 4B
{
	Ped ped;
	Ped ped2;

	if (func_148(bParam0, &ped, &ped2))
	{
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(ped) && PED::GET_PED_CONFIG_FLAG(ped, 6, false))
				return false;
		
			if (ENTITY::DOES_ENTITY_EXIST(ped2) && PED::GET_PED_CONFIG_FLAG(ped2, 6, false))
				return false;
		}
	
		return true;
	}

	return false;
}

BOOL func_103(var uParam0) // Position - 0x3863 Signature - 22 01 04 00 00 5D E7 9A 1D 27 22
{
	Ped ped;

	ped = Global_1940199.f_34;

	if (func_28() == -1)
		if (Global_1940199.f_34 == 0)
			ped = func_149(uParam0);
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1940199.f_34) || !Global_1956875.f_1716[4])
		ped = func_149(uParam0);

	if (ped == 0)
		return false;

	if (func_135(ped) == -1)
		return false;

	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(ped, false))
		return false;

	uParam0->f_15 = ped;
	return true;
}

void func_104(var uParam0) // Position - 0x38E5 Signature - 22 01 03 00 00 66 00 76 6D
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
		func_150(uParam0);

	return;
}

BOOL func_105(Ped pedParam0, var uParam1, Ped pedParam2) // Position - 0x390C Signature - 22 03 09
{
	int num;
	int num2;
	Hash pedRelationshipGroupHash;
	Hash pedRelationshipGroupHash2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam2))
		num2 = func_135(pedParam2);
	else
		num2 = func_134(pedParam2);

	if (!PED::IS_PED_HUMAN(pedParam0))
		num = func_135(pedParam0);
	else
		num = func_134(pedParam0);

	if (num2 == num)
		if (num2 != -1)
			return true;

	if (func_44(*uParam1, 8388608))
		return true;

	pedRelationshipGroupHash = PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam0);
	pedRelationshipGroupHash2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam2);

	switch (pedRelationshipGroupHash)
	{
		case joaat("rel_civmale"):
		case joaat("rel_re_victim"):
		case joaat("rel_civnative"):
		case joaat("rel_pinkertons"):
		case joaat("rel_guama_law"):
		case joaat("rel_cop"):
		case joaat("rel_civfemale"):
			switch (pedRelationshipGroupHash2)
			{
				case joaat("rel_civmale"):
				case joaat("rel_re_victim"):
				case joaat("rel_civnative"):
				case joaat("rel_civfemale"):
					return true;
			}
			break;
	}

	if (pedRelationshipGroupHash == pedRelationshipGroupHash2)
		return true;

	return false;
}

float func_106(Ped pedParam0, Ped pedParam1) // Position - 0x3A05 Signature - 22 02 04 00 00 66 00 66 01 09
{
	return func_130(pedParam0, pedParam1, true, true);
}

float func_107(var uParam0) // Position - 0x3A17 Signature - 22 01 03 00 00 66 00 27 1D
{
	return uParam0->f_29;
}

BOOL func_108(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3A23 Signature - 22 05 07 00 00 66 00 3C
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 2048:
			return true;
	
		case 4:
		case 16:
			return bParam1;
	
		case 8:
			return bParam2;
	
		case 32:
		case 64:
		case 128:
			return bParam3;
	
		case 8192:
			return bParam4;
	
		default:
		
	}

	return false;
}

void func_109(var uParam0, BOOL bParam1) // Position - 0x3A88 Signature - 22 02 04 00 00 66 01 8B 0E 00 66 00 37
{
	if (bParam1)
		func_57(uParam0, 134217728);
	else
		func_56(uParam0, 134217728);

	return;
}

void func_110() // Position - 0x3AAE Signature - 22 00 02 00 00 03 01 00 63
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		CAM::STOP_GAMEPLAY_HINT(false);

	return;
}

BOOL func_111(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x3AC2 Signature - 22 06 0B 00 00 66
{
	Ped ped;
	Player playerIndex;
	Entity outEntity;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	ped = PLAYER::PLAYER_PED_ID();

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return false;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (PLAYER::IS_PLAYER_DEAD(playerIndex))
		return false;

	if (WEAPON::_IS_WEAPON_LASSO(Global_1940199.f_38) || joaat("weapon_thrown_bolas") == Global_1940199.f_38 && Global_1940199.f_21)
	{
	}
	else if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(outEntity) && pedParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity))
			return false;
	}

	if (Global_1940199.f_34 != 0)
		if (PED::_GET_RIDER_OF_MOUNT(Global_1940199.f_34, true) == pedParam0)
			return false;

	if (bParam3)
		if (WEAPON::IS_PED_ARMED(ped, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0) && func_130(ped, pedParam0, true, true) <= 4f)
			return true;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0))
		if (bParam1 && WEAPON::IS_PED_ARMED(ped, 4) || bParam2 && WEAPON::IS_PED_ARMED(ped, 2))
			return true;

	if (PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
		if (WEAPON::_IS_WEAPON_SNIPER(func_151(ped, 0)))
			if (func_152(pedParam0, 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

float func_112(var uParam0) // Position - 0x3C32 Signature - 22 01 03 00 00 66 00 27 12
{
	return uParam0->f_18;
}

BOOL func_113(var uParam0, Ped pedParam1, float fParam2, float fParam3) // Position - 0x3C3E Signature - 22 04 07 00 00 66 00 27
{
	float num;

	if (uParam0->f_13 > fParam3)
		return false;

	num = -1f;

	if (!func_44(*uParam0, 4194304))
		num = fParam3;

	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_33, -1f, fParam3, -1f, num))
		return true;

	if (*uParam0 & 32768 != 0)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_33, 17))
			return true;

	return false;
}

int func_114(var uParam0) // Position - 0x3C9F Signature - 22 01 03 00 00 66 00 27 13
{
	return uParam0->f_19;
}

int func_115(var uParam0) // Position - 0x3CAB Signature - 22 01 03 00 00 66 00 27 14
{
	return uParam0->f_20;
}

BOOL func_116(Entity eParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x3CB7 Signature - 22 05 09
{
	Ped ped;
	Player playerIndex;

	if (ENTITY::IS_ENTITY_DEAD(eParam0))
		return false;

	ped = PLAYER::PLAYER_PED_ID();

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return false;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (PLAYER::IS_PLAYER_DEAD(playerIndex))
		return false;

	bParam3;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, eParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, eParam0))
		if (bParam1 && WEAPON::IS_PED_ARMED(ped, 4) || bParam2 && WEAPON::IS_PED_ARMED(ped, 2))
			return true;

	if (PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
		if (WEAPON::_IS_WEAPON_SNIPER(func_151(ped, 0)))
			if (func_153(ENTITY::GET_ENTITY_COORDS(eParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

int func_117(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3D79 Signature - 22 03 05 00 00 5D
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

float func_118(var uParam0) // Position - 0x3E17 Signature - 22 01 03 00 00 66 00 27 19
{
	return uParam0->f_25;
}

int func_119(var uParam0) // Position - 0x3E23 Signature - 22 01 03 00 00 66 00 27 17
{
	return uParam0->f_23;
}

int func_120(var uParam0) // Position - 0x3E2F Signature - 22 01 04 00 00 66 00 27
{
	int num;

	switch (uParam0->f_8)
	{
		case 0:
			switch (uParam0->f_7)
			{
				case 1:
					num = 0;
					break;
			
				case 2:
					num = 1;
					break;
			
				case 3:
					num = 2;
					break;
			}
			break;
	
		case 1:
			switch (uParam0->f_7)
			{
				case 1:
					num = 1;
					break;
			
				case 2:
					num = 2;
					break;
			
				case 3:
					num = 0;
					break;
			}
			break;
	
		case 2:
			switch (uParam0->f_7)
			{
				case 1:
					num = 2;
					break;
			
				case 2:
					num = 0;
					break;
			
				case 3:
					num = 1;
					break;
			}
			break;
	
		case 3:
			switch (uParam0->f_7)
			{
				case 1:
					num = 1;
					break;
			
				case 2:
					num = 0;
					break;
			
				case 3:
					num = 2;
					break;
			}
			break;
	
		case 4:
			switch (uParam0->f_7)
			{
				case 1:
					num = 0;
					break;
			
				case 2:
					num = 2;
					break;
			
				case 3:
					num = 1;
					break;
			}
			break;
	}

	if (*uParam0 & 16777216 != 0)
		if (num == 2)
			num = 0;

	return num;
}

BOOL func_121(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6) // Position - 0x3F6C Signature - 22 07 09
{
	if (func_154(pedParam0, vParam4, 0.5f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(pedParam0, vParam4, 17))
			return true;

	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
		return true;

	return false;
}

BOOL func_122(Ped pedParam0) // Position - 0x3FAF Signature - 22 01 03 00 00 66 00 6D 09
{
	if (PED::GET_PED_CONFIG_FLAG(pedParam0, 9, false))
	{
		if (Global_1940199.f_38 == joaat("WEAPON_UNARMED"))
			return 1;
	
		if (WEAPON::IS_WEAPON_VALID(Global_1940199.f_40))
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1940199.f_40) || WEAPON::IS_WEAPON_BOW(Global_1940199.f_40))
				return 1;
	}

	if (func_155(pedParam0, 200, false, true))
		return 1;

	return 0;
}

BOOL func_123(Ped pedParam0) // Position - 0x4015 Signature - 22 01 04 00 00 66 00 03 05 00 14 05 8B 04 00 2F 50 01 01 66 00 03 05 00 B1
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (PED::_IS_THIS_MODEL_A_HORSE(entityModel))
		return true;

	return false;
}

BOOL func_124(var uParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4041 Signature - 22 05 08 00 00 66 03 8B 04 00 2F 50 05 01 66 04 8B 0D 00 66 01 39 6A 4B 00 8B 04 00 2F 50 05 01 7C
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_156(pedParam1))
			return false;

	num = 5f;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_125(var uParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4088 Signature - 22 05 08 00 00 66 03 8B 04 00 2F 50 05 01 66 04 8B 0D 00 66 01 39 6A 4B 00 8B 04 00 2F 50 05 01 86
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_156(pedParam1))
			return false;

	num = 10f;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_126(var uParam0, Ped pedParam1, float fParam2, int iParam3) // Position - 0x40D3 Signature - 22 04 07 00 00 66 00 39
{
	float num;

	num = func_157(uParam0);

	if (func_156(pedParam1))
		return false;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x2BA9D7BF629F920C(pedParam1);

	if (fParam2 < num)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_1940199.f_28[iParam3], 17))
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_1940199.f_28[iParam3], -1082130432, -1082130432, -1082130432, -1082130432))
				return true;

	return false;
}

BOOL func_127(Ped pedParam0, var uParam1) // Position - 0x414D Signature - 22 02 04 00 00 66 00 03 05 00 E9
{
	if (!TASK::_IS_PED_LEADING_HORSE(pedParam0))
		return false;

	*uParam1 = TASK::_GET_LED_HORSE_FROM_PED(pedParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		return false;

	if (PED::IS_PED_DEAD_OR_DYING(*uParam1, true))
		return false;

	if (!PED::CAN_PED_BE_MOUNTED(*uParam1))
		return false;

	return true;
}

BOOL func_128(Ped pedParam0, Ped pedParam1) // Position - 0x419A Signature - 22 02 04 00 00 66 00 03 05 00 88
{
	if (PED::_GET_LASSO_TARGET(pedParam0) == pedParam1)
		return true;

	if (WEAPON::_IS_TARGET_PED_CONSTRAINED_BY_PED_USING_BOLAS(pedParam0, pedParam1))
		return true;

	if (!WEAPON::_IS_WEAPON_LASSO(func_158(pedParam0, true, 0, false)) && !(func_158(pedParam0, true, 0, false) == joaat("weapon_thrown_bolas")))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(pedParam0, 16, 0))
		if (PED::GET_MELEE_TARGET_FOR_PED(pedParam0) == pedParam1)
			return true;

	return false;
}

BOOL func_129(var uParam0) // Position - 0x4206 Signature - 22 01 03 00 00 66 00 76 11
{
	return !(*uParam0 & 2 != 0);
}

float func_130(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4216 Signature - 22 04 06 00 00 66 00
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

BOOL func_131(Vehicle veParam0, Ped pedParam1, var uParam2, var uParam3, var uParam4) // Position - 0x425E Signature - 22 05 08 00 00 66 00
{
	float num;

	num = func_132(veParam0, uParam2, true);

	if (num < 4f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(veParam0, pedParam1))
			return true;

	return false;
}

float func_132(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x428A Signature - 22 05 07 00 00 66 00 03 05 00 14
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

float func_133(var uParam0) // Position - 0x42B2 Signature - 22 01 03 00 00 66 00 27 1A
{
	return uParam0->f_26;
}

int func_134(Ped pedParam0) // Position - 0x42BE Signature - 22 01 03 00 00 66 00 09 03 09 00 6D 05 8B 04 00 08 50 01 01 66 00 6D DD
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedParam0, true))
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamB"))
		return 1;

	return -1;
}

int func_135(Ped pedParam0) // Position - 0x4312 Signature - 22 01 03 00 00 66 00 09 03 09 00 6D 05 8B 04 00 08 50 01 01 66 00 6D D2
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedParam0, true))
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamB"))
		return 1;

	return -1;
}

int func_136(Ped pedParam0, Ped pedParam1, int iParam2) // Position - 0x4366 Signature - 22 03 08 00 00 66 01 2F
{
	var entityCoords;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, false) };
	return func_159(pedParam0, entityCoords, iParam2);
}

float func_137(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x4386 Signature - 22 06 08 00 00 73
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

BOOL func_138(Ped pedParam0, Entity eParam1, BOOL bParam2, BOOL bParam3, float fParam4, BOOL bParam5) // Position - 0x43A4 Signature - 22 06 0B 00 00 5D
{
	BOOL flag;
	Entity entity;
	float num;

	if (Global_1940199.f_34 != 0)
		flag = true;

	if (!ENTITY::IS_ENTITY_DEAD(eParam1))
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(eParam1, PLAYER::PLAYER_PED_ID(), true, true))
			return 1;

	if (flag)
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, Global_1940199.f_34, true, true))
			return 1;

	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(pedParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
			if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;
	
		if (PED::_0x947E43F544B6AB34(pedParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
			if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;
	
		if (bParam3)
			if (func_127(Global_33, &entity))
				if (fParam4 < 4f)
					if (PED::IS_PED_RAGDOLL(pedParam0) || !bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
						return 1;
	}

	if (bParam3)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (fParam4 <= 0f)
		num = func_130(pedParam0, PLAYER::PLAYER_PED_ID(), false, true);
	else
		num = fParam4;

	if (num < 1f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0))
			if (!bParam2)
				return 1;
			else if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;

	if (flag)
		if (func_130(pedParam0, Global_1940199.f_34, false, true) < 2.5f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1940199.f_34, pedParam0))
				if (!bParam2)
					return 1;
				else if (PED::IS_PED_RAGDOLL(pedParam0))
					return 1;

	return 0;
}

BOOL func_139(Ped pedParam0, var uParam1, BOOL bParam2) // Position - 0x4514 Signature - 22 03 07 00 00 09
{
	Ped ped;
	Ped ped2;

	func_148(true, &ped, &ped2);

	if (!ENTITY::DOES_ENTITY_EXIST(ped) && !ENTITY::DOES_ENTITY_EXIST(ped2))
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ped != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_33, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_33, 17))
					if (!bParam2 || !func_142(uParam1, ped))
						return true;

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (ped2 != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_33, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_33, 17))
				if (!bParam2 || !func_142(uParam1, ped2))
					if (func_132(ped2, Global_34, true) < 5f)
						return true;

	return false;
}

BOOL func_140(Ped pedParam0) // Position - 0x4602 Signature - 22 01 03 00 00 66 00 03 05 00 14 05 8B 04 00 2F 50 01 01 66 00 2F
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!EVENT::_0x83D43F0FD5276E4D(pedParam0, 0))
		return false;

	return true;
}

BOOL func_141(var uParam0) // Position - 0x4628 Signature - 22 01 03 00 00 66 00 76 21
{
	return func_44(*uParam0, 131072);
}

BOOL func_142(var uParam0, Ped pedParam1) // Position - 0x463B Signature - 22 02 05 00 00 66 01 25 25
{
	Hash pedRelationshipGroupDefaultHash;

	if (DECORATOR::DECOR_EXIST_ON(pedParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(pedParam1, "bIsCriminal"))
		return true;

	if (PED::GET_PED_CONFIG_FLAG(pedParam1, 4, false))
		return true;

	pedRelationshipGroupDefaultHash = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(pedParam1);

	switch (pedRelationshipGroupDefaultHash)
	{
		case joaat("rel_gang_odriscoll"):
		case joaat("rel_gang_skinner_brothers"):
		case joaat("rel_gunslingers"):
		case joaat("rel_gang_creole"):
		case joaat("rel_gang_lemoyne_raiders"):
		case joaat("rel_gang_murfree_brood"):
		case joaat("rel_criminals"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_143(int iParam0) // Position - 0x46B1 Signature - 22 01 03 00 00 2F
{
	return false;
}

int func_144(var uParam0) // Position - 0x46BA Signature - 22 01 03 00 00 66 00 27 16
{
	return uParam0->f_22;
}

BOOL func_145(Ped pedParam0, var uParam1, BOOL bParam2, int iParam3) // Position - 0x46C6 Signature - 22 04 06 00 00 66 02
{
	if (!bParam2)
		if (uParam1->f_5 == 0)
			return 0;

	if (iParam3 < 0f)
		iParam3 = uParam1->f_13;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_33, 90f))
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_33, -1082130432, -1082130432, -1082130432, -1082130432))
			return 1;
	else if (iParam3 < 1.5f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, Global_33))
			return 1;

	return 0;
}

BOOL func_146() // Position - 0x4741 Signature - 22 00 02 00 00 39 3D
{
	if (func_160())
		return false;

	if (Global_1572887.f_14 == -1)
	{
		if (Global_1940199.f_38 == joaat("WEAPON_LASSO"))
			return PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_ATTACK"));
	
		return PED::GET_PED_RESET_FLAG(Global_33, 311);
	}
	else
	{
		return Global_1956875.f_1716[3];
	}

	return false;
}

void func_147(Any* panParam0, int iParam1) // Position - 0x4797 Signature - 22 02 07 00 00 03
{
	int num;
	int i;
	Player player;

	player = PLAYER::PLAYER_ID();

	if (!PLAYER::_0x72AD59F7B7FB6E24(player, 200))
	{
		*iParam1 = 0;
		return;
	}

	if (PLAYER::_0x1A6E84F13C952094(player, 200, panParam0))
	{
		for (i = 0; i < *panParam0; i = i + 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(panParam0->[i]))
			{
			}
			else if (!PED::IS_PED_HUMAN(panParam0->[i]) && !(DECORATOR::DECOR_EXIST_ON(panParam0->[i], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(panParam0->[i], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(panParam0->[i], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				num = num + 1;
			}
		}
	}

	*iParam1 = num;
	return;
}

BOOL func_148(BOOL bParam0, var uParam1, var uParam2) // Position - 0x483F Signature - 22 03 07 00 00 5D
{
	BOOL num;
	Ped lassoTarget;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1940199.f_26))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1940199.f_26))
		{
			*uParam1 = Global_1940199.f_26;
			num = 1;
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(Global_1940199.f_27))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1940199.f_27))
		{
			if (PED::IS_PED_HOGTIED(Global_1940199.f_27) || ENTITY::IS_ENTITY_DEAD(Global_1940199.f_27))
			{
				*uParam2 = Global_1940199.f_27;
				num = 1;
			}
		}
	}

	if (Global_1940199.f_24 && !PED::IS_PED_INJURED(Global_33))
	{
		lassoTarget = PED::_GET_LASSO_TARGET(Global_33);
	
		if (ENTITY::DOES_ENTITY_EXIST(lassoTarget))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(lassoTarget))
			{
				*uParam1 = lassoTarget;
				num = 1;
			}
		}
	}

	return num;
}

Ped func_149(var uParam0) // Position - 0x4906 Signature - 22 01 05
{
	Ped pedIndexFromEntityIndex;
	Entity outEntity;

	if (pedIndexFromEntityIndex == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")) && !PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(outEntity))
				{
					if (ENTITY::IS_ENTITY_A_PED(outEntity))
					{
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(outEntity)))
						{
							pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity);
							return pedIndexFromEntityIndex;
						}
					}
				}
			}
		}
	}

	if (uParam0->f_7 == 3)
	{
		if (pedIndexFromEntityIndex == 0)
			if (!Global_1940199.f_6)
				pedIndexFromEntityIndex = PED::_0x4B19F171450E0D4F(Global_33);
	
		if (pedIndexFromEntityIndex == 0)
			pedIndexFromEntityIndex = PED::_GET_LASSO_TARGET(Global_33);
	
		if (pedIndexFromEntityIndex != 0)
			if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(pedIndexFromEntityIndex)))
					pedIndexFromEntityIndex = 0;
	}

	return pedIndexFromEntityIndex;
}

void func_150(var uParam0) // Position - 0x49BC Signature - 22 01 04 00 00 5D E7 9A 1D 27 20
{
	int i;

	if (Global_1940199.f_32 == 0)
	{
		func_56(uParam0, 67108864);
	
		for (i = 0; i < Global_1940199.f_33; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1940199.f_28[i]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1940199.f_28[i]))
				{
					func_57(uParam0, 67108864);
					break;
				}
			}
		}
	}

	return;
}

Hash func_151(Ped pedParam0, int iParam1) // Position - 0x4A21 Signature - 22 02 05 00 00 66 00 4B
{
	Hash weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return weaponHash;
}

BOOL func_152(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x4A38 Signature - 22 05 07 00 00 66 00 03 05 00 D3
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (func_153(ENTITY::GET_ENTITY_COORDS(pedParam0, true, false), fParam1, fParam2, fParam3, fParam4))
			return true;

	return false;
}

BOOL func_153(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0x4A66 Signature - 22 07 0C
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

BOOL func_154(Ped pedParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x4AB0 Signature - 22 05 0D
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > fParam4;
}

BOOL func_155(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4AF1 Signature - 22 04 06 00 00 66 03
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(pedParam0, joaat("WEAPON_UNARMED"), iParam1))
			return true;
		else if (!bParam2)
			if (WEAPON::IS_WEAPON_VALID(Global_1940199.f_38))
				if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1940199.f_38) || Global_1940199.f_38 == joaat("weapon_melee_knife"))
					if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(pedParam0, Global_1940199.f_38, iParam1))
						return true;

	return false;
}

BOOL func_156(Ped pedParam0) // Position - 0x4B6A Signature - 22 01 04 00 00 66 00 03 05 00 D3
{
	Hash scenarioPointTypePedIsUsing;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!PED::IS_PED_USING_ANY_SCENARIO(pedParam0))
		return false;

	scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(pedParam0);

	if (scenarioPointTypePedIsUsing == 0)
		return false;

	if (scenarioPointTypePedIsUsing == joaat("world_player_sleep_ground") || scenarioPointTypePedIsUsing == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS") || scenarioPointTypePedIsUsing == joaat("world_human_sleep_ground_arm") || scenarioPointTypePedIsUsing == joaat("world_human_sleep_ground_pillow") || scenarioPointTypePedIsUsing == joaat("world_animal_dog_sleeping") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow") || scenarioPointTypePedIsUsing == joaat("prop_player_prpty_save_game") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow_left") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow_right") || scenarioPointTypePedIsUsing == joaat("prop_player_sleep_tent_a_frame"))
		return true;

	if (scenarioPointTypePedIsUsing == joaat("prop_player_sleep_tent_a_frame") || scenarioPointTypePedIsUsing == joaat("world_player_sleep_bedroll"))
	{
		scenarioPointTypePedIsUsing = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(pedParam0);
	
		if (scenarioPointTypePedIsUsing == joaat("prop_player_sleep_tent_male_a"))
			return true;
	
		return false;
	}

	return false;
}

float func_157(var uParam0) // Position - 0x4C60 Signature - 22 01 03 00 00 66 00 27 1C
{
	return uParam0->f_28;
}

Hash func_158(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x4C6C Signature - 22 04 07 00 00 37
{
	Hash weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

int func_159(Ped pedParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x4CAE Signature - 22 05 11
{
	var entityCoords;
	var entityForwardVector;
	var unk5;
	float value;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
		entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	}

	unk5 = { uParam1 - entityCoords };
	value = func_161(entityForwardVector, unk5);

	if (MISC::ABSF(value) > iParam4)
		if (value > 0f)
			return 0;
		else
			return 1;

	if (func_162(entityCoords, entityCoords + entityForwardVector, uParam1))
		return 3;

	return 2;
}

BOOL func_160() // Position - 0x4D3D Signature - 22 00 02 00 00 5D E7 9A 1D 27 26
{
	switch (Global_1940199.f_38)
	{
		case joaat("weapon_melee_lantern"):
		case joaat("weapon_kit_binoculars"):
		case joaat("weapon_melee_lantern_electric"):
		case joaat("weapon_melee_davy_lantern"):
		case joaat("weapon_kit_binoculars_improved"):
			return true;
	
		default:
		
	}

	return false;
}

float func_161(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x4D74 Signature - 22 06 09 00 00 73
{
	float num;

	fParam0.f_2 = 0f;
	fParam3.f_2 = 0f;
	num = BUILTIN::VMAG(fParam0);

	if (num != 0f)
	{
		fParam0 = fParam0 / num;
		fParam0.f_1 = fParam0.f_1 / num;
	}

	num = BUILTIN::VMAG(fParam3);

	if (num != 0f)
	{
		fParam3 = fParam3 / num;
		fParam3.f_1 = fParam3.f_1 / num;
	}

	return (fParam0 * fParam3) + (fParam0.f_1 * fParam3.f_1);
}

BOOL func_162(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8) // Position - 0x4DDB Signature - 22 09 0B
{
	return ((fParam3 - uParam0) * (fParam6.f_1 - uParam0.f_1)) - ((fParam3.f_1 - uParam0.f_1) * (fParam6 - uParam0)) > 0f;
}

