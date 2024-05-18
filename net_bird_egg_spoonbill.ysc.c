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
	int iLocal_22 = 0;
	Any anLocal_23 = 0;
	var uLocal_24 = 5;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 5;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	Hash hLocal_36 = 0;
	Hash hLocal_37 = 0;
	Object obLocal_38 = 0;
	int iLocal_39 = 0;
	Hash hLocal_40 = 0;
	BOOL bLocal_41 = 0;
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
	var uLocal_60 = -1;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = -1082130432;
	var uLocal_66 = -1082130432;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 10;
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
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 48
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	anLocal_23 = anScriptParam_0;
	iLocal_22 = anScriptParam_0.f_1;

	if (func_1() != -1)
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	
		if (func_3(func_2(0)) == 7)
			func_4(&uLocal_42);
	}

	if (func_1() == -1)
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
			func_4(&uLocal_42);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_22))
		func_4(&uLocal_42);

	func_5(&uLocal_42, joaat("COLLECTIBLE_EGG_SPOONBILL"), joaat("provision_spoonbill_egg"), joaat("mp005_s_bdeg_spoonbillnest01x"), joaat("mp005_s_bdeg_spoonbill_egg01x"), 9, 1);

	while (func_6(&uLocal_42))
	{
		if (func_7())
			func_4(&uLocal_42);
	
		if (func_8(&uLocal_42))
			func_4(&uLocal_42);
	
		func_9(&uLocal_42);
		BUILTIN::WAIT(0);
	}

	func_4(&uLocal_42);
	return;
}

int func_1() // Position - 0xB6 Signature - 22 00 02 00 00 5D 17
{
	return Global_1572887.f_14;
}

struct<2> func_2(int iParam0) // Position - 0xC4 Signature - 22 01 03 00 00 11
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_3(int iParam0, var uParam1) // Position - 0xD8 Signature - 22 02 04 00 00 66 00 50
{
	return iParam0;
}

void func_4(var uParam0) // Position - 0xE2 Signature - 22 01 05 00 00 2F
{
	int num;
	int i;

	func_10(false);
	func_11(&(uParam0->f_14));

	if (iLocal_39 != num)
		TASK::_DELETE_PATCH_OBJECTS_FROM_HERB_COMPOSITES(iLocal_39, false);

	if (MAP::DOES_BLIP_EXIST(uParam0->f_2))
		MAP::REMOVE_BLIP(&(uParam0->f_2));

	for (i = 0; i < func_12(&(uParam0->f_3)); i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_24[i]))
			func_13(uLocal_24[i], uLocal_24[i], 0);
	}

	if (func_14(Global_1222327[*uParam0 /*251*/][uParam0->f_13], 2))
		func_15(&Global_1222327[*uParam0 /*251*/][uParam0->f_13], 2);

	func_16(&(uParam0->f_14));
	SCRIPTS::_0xE7282390542F570D(anLocal_23);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_5(var uParam0, int iParam1, int iParam2, Hash hParam3, Hash hParam4, int iParam5, int iParam6) // Position - 0x18E Signature - 22 07 09
{
	*uParam0 = 5;
	uLocal_16 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_22, true) };
	uLocal_19 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_22, true) };
	uParam0->f_4 = iParam6;
	uParam0->f_13 = iParam5;
	hLocal_36 = hParam3;
	hLocal_37 = hParam4;
	uParam0->f_3 = iParam2;
	uParam0->f_11 = iParam1;
	uParam0->f_12 = 1;
	return;
}

BOOL func_6(var uParam0) // Position - 0x1D5 Signature - 22 01 03 00 00 03 01 00 96
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_4(uParam0);
		return false;
	}

	return true;
}

BOOL func_7() // Position - 0x1EF Signature - 22 00 02 00 00 2F
{
	return false;
}

BOOL func_8(var uParam0) // Position - 0x1F8 Signature - 22 01 03 00 00 66 00 27 04 3C
{
	switch (uParam0->f_4)
	{
		case 0:
			func_18(uParam0);
			break;
	
		case 1:
			func_17(uParam0);
			break;
	}

	return false;
}

int func_9(var uParam0) // Position - 0x229 Signature - 22 01 07 00 00 66 00 27
{
	var unk;

	switch (uParam0->f_4)
	{
		case 0:
		case 1:
			if (func_19(uParam0))
			{
				func_10(true);
				func_20(uParam0->f_11, &unk);
				func_10(false);
				func_16(&(uParam0->f_14));
				uParam0->f_4 = -1;
				return 1;
			}
			break;
	}

	return 0;
}

void func_10(BOOL bParam0) // Position - 0x27A Signature - 22 01 03 00 00 66 00 8B 09
{
	if (bParam0)
		func_21(0, 6);
	else
		func_22(0, 6, false);

	return;
}

void func_11(var uParam0) // Position - 0x297 Signature - 22 01 03 00 00 66 00 27 07
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_7))
		VOLUME::DELETE_VOLUME(uParam0->f_7);

	return;
}

int func_12(var uParam0) // Position - 0x2B2 Signature - 22 01 04 00 00 2F 67 03 66 03 62 8A 94
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		switch (*uParam0)
		{
			case joaat("provision_condor_egg"):
				return 1;
		
			case joaat("provision_egret_egg"):
				return 1;
		
			case joaat("provision_duck_egg"):
				return 5;
		
			case joaat("provision_goose_egg"):
				return 4;
		
			case joaat("provision_spoonbill_egg"):
				return 1;
		
			case joaat("provision_heron_egg"):
				return 1;
		
			case joaat("provision_loon_egg"):
				return 3;
		
			case joaat("provision_eagle_egg"):
				return 1;
		
			case joaat("provision_vulture_egg"):
				return 1;
		
			case joaat("provision_hawk_egg"):
				return 1;
		}
	}

	return 0;
}

int func_13(Object obParam0, Object obParam1, int iParam2) // Position - 0x358 Signature - 22 03 08
{
	int i;
	var src;

	if (!ENTITY::DOES_ENTITY_EXIST(obParam0))
		return 0;

	if (ITEMSET::IS_ITEMSET_VALID(Global_1296539.f_32) && ITEMSET::IS_IN_ITEMSET(obParam0, Global_1296539.f_32))
		ITEMSET::REMOVE_FROM_ITEMSET(obParam0, Global_1296539.f_32);

	PLAYER::_UNREGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), obParam0);
	PLAYER::_0xDC5E09D012D759C4(obParam0, obParam1, iParam2);
	src.f_1 = -1082130432;

	for (i = 0; i < 10; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1296539[i /*2*/]) && Global_1296539[i /*2*/] == obParam0)
		{
			MISC::COPY_SCRIPT_STRUCT(&Global_1296539[i /*2*/], &src, 2);
			return 1;
		}
	}

	return 0;
}

BOOL func_14(int iParam0, int iParam1) // Position - 0x402 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 02 04
{
	return iParam0 && iParam1 != false;
}

void func_15(int iParam0, int iParam1) // Position - 0x411 Signature - 22 02 04 00 00 66 00 66 01 39 98
{
	func_23(iParam0, iParam1);
	return;
}

void func_16(var uParam0) // Position - 0x421 Signature - 22 01 03 00 00 66 00 39 AD
{
	func_24(uParam0);
	func_25(&(uParam0->f_6), 1);
	return;
}

void func_17(var uParam0) // Position - 0x438 Signature - 22 01 05 00 00 66
{
	BOOL flag;
	int i;

	if (_STOPWATCH_IS_INITIALIZED(uParam0) > 4)
		func_27(&obLocal_38);

	flag = func_28(uParam0) && !func_19(uParam0);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_38))
	{
		if (!DECORATOR::DECOR_EXIST_ON(obLocal_38, "EggBroken"))
			func_29(&(uParam0->f_14), uLocal_16, flag, true, true, false);
	}
	else
	{
		for (i = 0; i < Global_17418.f_2992.f_1; i = i + 1)
		{
			if (uParam0->f_3 == Global_17418.f_2992.f_1[i /*5*/].f_4)
			{
				if (func_30(Global_34, Global_17418.f_2992.f_1[i /*5*/].f_1, 50f, true))
				{
					if (!Global_17418.f_2992.f_1[i /*5*/])
					{
						Global_17418.f_2992.f_1[i /*5*/] = true;
						func_31("COLLECTIBLE_MAP_BIRD_EGG_SHOT", 10000, 0, 0, 0, true);
					}
				}
			}
		}
	}

	if (func_32(Global_1295666.f_3, uLocal_16, true) < 2f)
		func_33(&(uParam0->f_14.f_5));

	if (func_14(Global_1222327[*uParam0 /*251*/][uParam0->f_13], 4))
	{
		func_34(obLocal_38, false);
		func_35(uParam0, 9);
		func_15(&Global_1222327[*uParam0 /*251*/][uParam0->f_13], 4);
	}
	else if (func_14(Global_1222327[*uParam0 /*251*/][uParam0->f_13], 8))
	{
		func_34(obLocal_38, true);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_38))
			func_13(obLocal_38, obLocal_38, 0);
	
		func_35(uParam0, 12);
		func_15(&Global_1222327[*uParam0 /*251*/][uParam0->f_13], 8);
	}

	switch (_STOPWATCH_IS_INITIALIZED(uParam0))
	{
		case 0:
			func_36(&(uParam0->f_14.f_6), uLocal_16, 1.5f, 1, 319, 0);
			func_37(uParam0);
			func_35(uParam0, 1);
			break;
	
		case 1:
			if (func_38(uParam0))
				func_35(uParam0, 2);
			break;
	
		case 2:
			if (func_28(uParam0))
				bLocal_41 = true;
			else
				bLocal_41 = false;
		
			if (bLocal_41)
				if (func_39(uParam0))
					func_35(uParam0, 3);
			else
				func_35(uParam0, 13);
			break;
	
		case 3:
			func_35(uParam0, 4);
			break;
	
		case 4:
			func_40(&(uParam0->f_3));
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_38))
			{
				if (!PLAYER::_IS_EAGLE_EYE_REGISTERED_FOR_ENTITY(PLAYER::PLAYER_ID(), obLocal_38))
				{
					func_41(obLocal_38, obLocal_38, 0);
					MAP::_0x7563CBCA99253D1A(obLocal_38, joaat("blip_mp_role_collector_ilo"));
					func_35(uParam0, 5);
				}
			}
			break;
	
		case 5:
			if (uParam0->f_11 != joaat("COLLECTIBLE_EGG_CONDOR"))
			{
				if (func_42())
				{
					func_13(obLocal_38, obLocal_38, 0);
					func_35(uParam0, 11);
				}
			
				if (func_32(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uLocal_16, false) < 10f)
					func_35(uParam0, 6);
			}
			else
			{
				func_35(uParam0, 9);
			}
			break;
	
		case 6:
			func_35(uParam0, 7);
			break;
	
		case 7:
			if (func_42())
			{
				func_13(obLocal_38, obLocal_38, 0);
				func_35(uParam0, 11);
			}
		
			if (func_32(Global_33, uLocal_16, false) < 8f)
				func_35(uParam0, 8);
			break;
	
		case 8:
			if (func_42())
			{
				func_13(obLocal_38, obLocal_38, 0);
				func_35(uParam0, 11);
			}
			break;
	
		case 9:
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_24[0]))
			{
				ENTITY::_0xF41E2979D5BC5370(hLocal_37);
				uLocal_24[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(hLocal_37, uLocal_16, false, false, false, true);
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_24[0]))
			{
				if (!TASK::GET_IS_CARRIABLE_ENTITY(uLocal_24[0]))
				{
					if (!uParam0->f_26)
					{
						PHYSICS::ACTIVATE_PHYSICS(uLocal_24[0]);
						TASK::_MAKE_OBJECT_CARRIABLE(uLocal_24[0]);
						func_13(obLocal_38, obLocal_38, 0);
						func_41(uLocal_24[0], uLocal_24[0], 0);
						MAP::_0x7563CBCA99253D1A(uLocal_24[0], joaat("blip_mp_role_collector_ilo"));
						ENTITY::_0x5826EFD6D73C4DE5(uLocal_24[0]);
						func_15(&Global_1222327[*uParam0 /*251*/][uParam0->f_13], 4);
						uParam0->f_26 = 1;
					}
				}
				else
				{
					TASK::_0x8E1DDE26D270CC5E(uLocal_24[0], 1);
					func_35(uParam0, 10);
				}
			
				if (uParam0->f_26)
					func_45(uParam0);
			}
			break;
	
		case 10:
			func_45(uParam0);
			func_35(uParam0, 13);
			break;
	
		case 11:
			if (!DECORATOR::DECOR_GET_BOOL(obLocal_38, "EggBroken"))
				func_43(*uParam0, uParam0->f_13, GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
			else
				func_44(*uParam0, uParam0->f_13, GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
			break;
	
		case 12:
			PERSISTENCE::PERSISTENCE_ADD_SCENARIO_LOOTED(iLocal_22);
			MISC::_0x082C043C7AFC3747(iLocal_39, false);
			break;
	
		case 13:
			break;
	}

	return;
}

void func_18(var uParam0) // Position - 0x8A2 Signature - 22 01 07 00 00 66 00 39
{
	BOOL flag;
	int i;
	int herbCompositeNumEntities;
	int j;

	flag = func_28(uParam0) && !func_19(uParam0);

	if (func_46(uParam0, &uLocal_24) > 0)
		func_29(&(uParam0->f_14), uLocal_16, flag, true, true, false);

	if (func_32(Global_1295666.f_3, uLocal_16, true) < 3.5f)
		func_33(&(uParam0->f_14.f_5));

	switch (_STOPWATCH_IS_INITIALIZED(uParam0))
	{
		case 0:
			func_36(&(uParam0->f_14.f_6), uLocal_16, 1.5f, 1, 319, 0);
			func_47(&(uParam0->f_14), uLocal_16);
			func_48(uParam0);
			func_35(uParam0, 1);
			break;
	
		case 1:
			if (func_49(uParam0))
				func_35(uParam0, 2);
			break;
	
		case 2:
			if (func_28(uParam0))
				bLocal_41 = true;
			else
				bLocal_41 = false;
		
			if (bLocal_41)
				if (func_50(uParam0))
					func_35(uParam0, 3);
			else
				func_35(uParam0, 13);
			break;
	
		case 3:
			func_35(uParam0, 4);
			break;
	
		case 4:
			func_40(&(uParam0->f_3));
		
			if (func_51(&uLocal_24, &uLocal_30, func_12(&(uParam0->f_3)), uLocal_16, 5f) > 0)
			{
				for (i = 0; i < func_12(&(uParam0->f_3)); i = i + 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_24[i]))
					{
						OBJECT::_0x46CBCF0E98A4E156(uLocal_24[i], 1);
					
						if (!PLAYER::_IS_EAGLE_EYE_REGISTERED_FOR_ENTITY(PLAYER::PLAYER_ID(), uLocal_24[i]))
							func_41(uLocal_24[i], uLocal_24[i], 0);
					
						MAP::_0x7563CBCA99253D1A(uLocal_24[i], joaat("blip_mp_role_collector_ilo"));
					}
				}
			}
		
			herbCompositeNumEntities = TASK::_GET_HERB_COMPOSITE_NUM_ENTITIES(iLocal_39, &(uParam0->f_28));
		
			if (herbCompositeNumEntities > 0 && herbCompositeNumEntities <= 10)
			{
				for (j = 0; j < herbCompositeNumEntities; j = j + 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[j /*2*/]))
					{
						OBJECT::_0x46CBCF0E98A4E156(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_28[j /*2*/]), 1);
					
						if (!PLAYER::_IS_EAGLE_EYE_REGISTERED_FOR_ENTITY(PLAYER::PLAYER_ID(), uParam0->f_28[j /*2*/]))
							func_41(uParam0->f_28[j /*2*/], uParam0->f_28[j /*2*/], 0);
					
						MAP::_0x7563CBCA99253D1A(uParam0->f_28[j /*2*/], joaat("blip_mp_role_collector_ilo"));
					}
				}
			}
		
			if (func_46(uParam0, &uLocal_24) == func_12(&(uParam0->f_3)))
				func_35(uParam0, 5);
			break;
	
		case 5:
			func_35(uParam0, 6);
			break;
	
		case 6:
			func_35(uParam0, 7);
			break;
	
		case 7:
			if (func_32(Global_33, uLocal_16, false) < 8f)
				func_35(uParam0, 8);
			break;
	
		case 8:
			break;
	
		case 9:
			func_35(uParam0, 11);
			break;
	
		case 10:
			func_35(uParam0, 13);
			break;
	
		case 11:
			func_35(uParam0, 13);
			break;
	
		case 12:
			MISC::_0x082C043C7AFC3747(iLocal_39, false);
			break;
	
		case 13:
			break;
	}

	return;
}

BOOL func_19(var uParam0) // Position - 0xB75 Signature - 22 01 03 00 00 66 00 27 04 2F
{
	if (uParam0->f_4 == 0)
		if (func_32(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_5, true) <= 1f)
			return func_52(uParam0) || func_53(uParam0);

	return func_52(uParam0) || func_53(uParam0);
}

int func_20(int iParam0, Any anParam1) // Position - 0xBC4 Signature - 22 02 10
{
	var unk;

	unk.f_1 = 10;
	func_54(&unk, joaat("LOOT_TYPE_NORMAL"));
	return func_55(iParam0, &unk, anParam1, 0, 0);
}

void func_21(int iParam0, int iParam1) // Position - 0xBED Signature - 22 02 04 00 00 66 00 66 01 39 1B
{
	if (!func_56(iParam0, iParam1))
	{
		MISC::SET_BIT(&Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_57();
	}

	return;
}

void func_22(int iParam0, int iParam1, BOOL bParam2) // Position - 0xC31 Signature - 22 03 05 00 00 66 00 66
{
	if (func_56(iParam0, iParam1) && !bParam2 || Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD())
	{
		MISC::CLEAR_BIT(&Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = 0;
		func_57();
	}

	return;
}

void func_23(int iParam0, int iParam1) // Position - 0xC98 Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 01
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_24(var uParam0) // Position - 0xCAD Signature - 22 01 03 00 00 66 00 27 04 08
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

void func_25(int iParam0, int iParam1) // Position - 0xCE0 Signature - 22 02 04 00 00 66 00 39 4D
{
	if (func_58(iParam0))
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);

	return;
}

int _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0xCF9 Signature - 22 01 03 00 00 66 00 27 01
{
	return uParam0->f_1;
}

void func_27(var uParam0) // Position - 0xD05 Signature - 22 01 03 00 00 66 00 76 39
{
	if (func_59(*uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*uParam0, "EggBroken"))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(*uParam0))
				{
					if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(*uParam0, joaat("weapon_rifle_varmint"), 10000) || func_60())
					{
						DECORATOR::DECOR_SET_BOOL(*uParam0, "EggBroken", false);
					}
					else
					{
						DECORATOR::DECOR_SET_BOOL(*uParam0, "EggBroken", true);
						func_61(818, true);
					}
				}
			}
		}
	}

	return;
}

BOOL func_28(var uParam0) // Position - 0xD75 Signature - 22 01 08
{
	var unk;

	unk = { func_62(uParam0->f_3, false, true) };

	if (func_63(uParam0->f_3, &unk, 1, false, false, -1, false))
		return false;

	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_22))
		if (PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED(iLocal_22))
			return false;

	return true;
}

void func_29(var uParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0xDBB Signature - 22 08 0F
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

	flag2 = func_65(uParam0, bParam4, flag);

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
	num = num * (1f + func_66());

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
					
						func_67(uParam0, 1);
					}
				}
				else
				{
					func_67(uParam0, 1);
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
				func_68(250);
		
			PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, value, frequency);
			func_69(&(uParam0->f_1));
			func_67(uParam0, 2);
			break;
	
		case 2:
			if (uParam0->f_9 >= num + 5f || !bParam4 || flag)
			{
				if (bParam5)
					func_24(uParam0);
			
				func_67(uParam0, 0);
			}
			else if (func_70(&(uParam0->f_1)) >= 2f)
			{
				func_67(uParam0, 1);
			}
			else if (uParam0->f_9 < 3f && bParam7)
			{
				func_68(250);
			}
			break;
	}

	return;
}

BOOL func_30(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, BOOL bParam7) // Position - 0xFE4 Signature - 22 08 0A 00 00 66 06
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - fParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - fParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - fParam3.f_2) <= fParam6)
				return true;

	return false;
}

int func_31(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x1039 Signature - 22 06 18
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

float func_32(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1074 Signature - 22 05 07 00 00 66 00 03 05 00 19
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

void func_33(var uParam0) // Position - 0x109C Signature - 22 01 03 00 00 6D
{
	if (AUDIO::PREPARE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman", false))
	{
		if (HUD::UI_PROMPT_IS_CONTROL_ACTION_ACTIVE(joaat("INPUT_LOOT3")))
		{
			if (!*uParam0)
			{
				AUDIO::PLAY_SOUND_FRONTEND("collectible_found", "RDRO_Collectible_Sounds_Travelling_Saleswoman", true, 0);
				*uParam0 = 1;
			}
		}
		else if (*uParam0)
		{
			*uParam0 = 0;
		}
	}

	return;
}

void func_34(Object obParam0, BOOL bParam1) // Position - 0x10DF Signature - 22 02 04 00 00 66 00 03
{
	if (ENTITY::DOES_ENTITY_EXIST(obParam0))
		if (!bParam1)
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(obParam0, true, false), ENTITY::GET_ENTITY_COORDS(obParam0, true, false) + { 1E-07f, 0f, 0f }, 1, true, joaat("weapon_rifle_varmint"), 0, false, false, -1082130432, false);
		else
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(obParam0, true, false), ENTITY::GET_ENTITY_COORDS(obParam0, true, false) + { 1E-07f, 0f, 0f }, 1, true, joaat("weapon_repeater_carbine"), 0, false, false, -1082130432, false);

	return;
}

void func_35(var uParam0, int iParam1) // Position - 0x1151 Signature - 22 02 04 00 00 66 01 66 00 6C
{
	uParam0->f_1 = iParam1;
	return;
}

void func_36(int iParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6, int iParam7) // Position - 0x115F Signature - 22 08 0A 00 00 66 00
{
	if (!func_58(iParam0))
	{
		*iParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
	
		if (func_58(iParam0))
		{
		}
	}

	return;
}

void func_37(var uParam0) // Position - 0x1193 Signature - 22 01 03 00 00 54 24 2F
{
	STREAMING::REQUEST_MODEL(hLocal_36, false);
	STREAMING::REQUEST_MODEL(hLocal_37, false);
	return;
}

BOOL func_38(var uParam0) // Position - 0x11A9 Signature - 22 01 03 00 00 54 24 03
{
	if (STREAMING::HAS_MODEL_LOADED(hLocal_36) && STREAMING::HAS_MODEL_LOADED(hLocal_37))
		return true;

	return false;
}

BOOL func_39(var uParam0) // Position - 0x11CA Signature - 22 01 03 00 00 54 26
{
	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_38))
		obLocal_38 = OBJECT::CREATE_OBJECT_NO_OFFSET(hLocal_36, uLocal_19, false, true, false, true);

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_38))
		return false;

	return true;
}

void func_40(var uParam0) // Position - 0x11FB Signature - 22 01 04 00 00 2F 67 03 66 03 62 8A DA
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		switch (*uParam0)
		{
			case joaat("provision_condor_egg"):
				uLocal_30[i] = joaat("mp005_s_bdeg_condor_egg01x");
				break;
		
			case joaat("provision_egret_egg"):
				uLocal_30[i] = joaat("mp005_s_bdeg_egretnest01x");
				break;
		
			case joaat("provision_duck_egg"):
				uLocal_30[i] = joaat("mp005_s_bdeg_duck_egg01x");
				break;
		
			case joaat("provision_goose_egg"):
				uLocal_30[i] = joaat("mp005_s_bdeg_goose_egg01x");
				break;
		
			case joaat("provision_spoonbill_egg"):
				uLocal_30[i] = joaat("mp005_s_bdeg_spoonbillnest01x");
				break;
		
			case joaat("provision_heron_egg"):
				uLocal_30[i] = joaat("mp005_s_bdeg_heronnest01x");
				break;
		
			case joaat("provision_loon_egg"):
				uLocal_30[i] = joaat("mp005_s_bdeg_loon_egg01x");
				break;
		
			case joaat("provision_eagle_egg"):
				uLocal_30[i] = joaat("mp005_s_bdeg_eaglenest01x");
				break;
		
			case joaat("provision_vulture_egg"):
				uLocal_30[i] = joaat("mp005_s_bdeg_vulture_egg01x");
				break;
		
			case joaat("provision_hawk_egg"):
				uLocal_30[i] = 990159072;
				break;
		}
	}

	return;
}

int func_41(Object obParam0, Object obParam1, int iParam2) // Position - 0x12E6 Signature - 22 03 06 00 00 66 00 03
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(obParam0))
		return 0;

	if (!ITEMSET::IS_ITEMSET_VALID(Global_1296539.f_32))
		Global_1296539.f_32 = ITEMSET::CREATE_ITEMSET(true);

	if (!ITEMSET::IS_IN_ITEMSET(obParam0, Global_1296539.f_32))
		ITEMSET::ADD_TO_ITEMSET(obParam0, Global_1296539.f_32);

	if (!func_71(obParam0))
	{
		PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), obParam0, false);
		PLAYER::_0x6ECFC621A168424C(obParam0, obParam1, iParam2, 0);
		PLAYER::_EAGLE_EYE_SET_CUSTOM_DISTANCE(obParam0, 500f);
		return 1;
	}

	for (i = 0; i < 10; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1296539[i /*2*/]))
		{
			Global_1296539[i /*2*/] = obParam0;
			return 1;
		}
	}

	return 0;
}

BOOL func_42() // Position - 0x1396 Signature - 22 00 02 00 00 54
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_38))
		return DECORATOR::DECOR_EXIST_ON(obLocal_38, "EggBroken");

	return false;
}

void func_43(var uParam0, var uParam1, Any anParam2) // Position - 0x13B3 Signature - 22 03 20 00 00 2F 6D 08 39 20 21 00 67 05 4B 06 6A 80 04 09 3D 41 41 6D 2A
{
	var unk;
	int num;
	int num2;

	unk = func_72(false, 8);
	num.f_4 = 1;
	num = 42;
	num.f_5 = uParam0;
	num.f_6 = uParam1;
	num2.f_12 = -1;
	num2.f_12.f_1 = -1;
	num2.f_14 = 255;
	num2.f_15 = 255;
	num2.f_14 = Global_1295666.f_149[Global_1295666];
	num2 = 0;
	num2.f_1 = PLAYER::GET_PLAYER_INDEX();
	num2.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_74(num2, func_73(Global_34, 0f, 0f, 0f, 150f, 150f, 150f, joaat("volSphere"), false, 8), false, false);
	func_75(&num, &unk);
	return;
}

void func_44(var uParam0, var uParam1, Any anParam2) // Position - 0x1455 Signature - 22 03 20 00 00 2F 6D 08 39 20 21 00 67 05 4B 06 6A 80 04 09 3D 41 41 6D 2B
{
	var unk;
	int num;
	int num2;

	unk = func_72(false, 8);
	num.f_4 = 1;
	num = 43;
	num.f_5 = uParam0;
	num.f_6 = uParam1;
	num2.f_12 = -1;
	num2.f_12.f_1 = -1;
	num2.f_14 = 255;
	num2.f_15 = 255;
	num2.f_14 = Global_1295666.f_149[Global_1295666];
	num2 = 0;
	num2.f_1 = PLAYER::GET_PLAYER_INDEX();
	num2.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_74(num2, func_73(Global_34, 0f, 0f, 0f, 150f, 150f, 150f, joaat("volSphere"), false, 8), false, false);
	func_75(&num, &unk);
	return;
}

void func_45(var uParam0) // Position - 0x14F7 Signature - 22 01 0F
{
	var entityCoords;
	var unk3;
	float entityVelocity;
	float num;

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_24[0]))
	{
		if (!uParam0->f_27)
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(uLocal_24[0], true, false) };
			unk3 = { entityCoords };
		
			if (func_76(&unk3, 50, 10, false, false))
			{
				if (MISC::ABSF(unk3.f_2 - entityCoords.f_2) <= 0.025f)
				{
					PHYSICS::SET_DAMPING(uLocal_24[0], 0, 100000f);
					PHYSICS::SET_DAMPING(uLocal_24[0], 4, 100000f);
					uParam0->f_27 = 1;
				}
			}
		}
		else
		{
			entityVelocity = { ENTITY::GET_ENTITY_VELOCITY(uLocal_24[0], -1) };
			num = { entityVelocity };
			num = { num * { 0.75f, 0.75f, 0.75f } };
		
			if (MISC::ABSF(entityVelocity) < num)
				num = entityVelocity;
		
			if (MISC::ABSF(entityVelocity.f_1) < num.f_1)
				num.f_1 = entityVelocity.f_1;
		
			if (MISC::ABSF(entityVelocity.f_2) < num.f_2)
				num.f_2 = entityVelocity.f_2;
		
			if (func_30(num, 0f, 0f, 0f, 0.05f, true))
			{
				num = { 0f, 0f, 0f };
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_24[0], true);
			}
			else
			{
				ENTITY::SET_ENTITY_VELOCITY(uLocal_24[0], num);
			}
		}
	}

	return;
}

int func_46(var uParam0, var uParam1) // Position - 0x160E Signature - 22 02 06 00 00 2F
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < func_12(&(uParam0->f_3)); i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->[i]))
			num = num + 1;
	}

	return num;
}

void func_47(var uParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x164A Signature - 22 04 06 00 00 66 00 27
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_7))
	{
		uParam0->f_7 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0f, 0f, 0f, 2f, 2f, 2f, "colleactable restriction volume");
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_7, 6, 0, 0, -1, -1, 0);
	}

	return;
}

void func_48(var uParam0) // Position - 0x1681 Signature - 22 01 03 00 00 54 28 03 05 00 A2
{
	TASK::_REQUEST_HERB_COMPOSITE_ASSET(hLocal_40);
	return;
}

BOOL func_49(var uParam0) // Position - 0x1690 Signature - 22 01 03 00 00 54 28 03 05 00 0E
{
	if (TASK::ARE_COMPOSITE_LOOTABLE_ENTITY_DEF_ASSETS_LOADED(hLocal_40))
		return true;

	return false;
}

BOOL func_50(var uParam0) // Position - 0x16A6 Signature - 22 01 04 00 00 70
{
	var unk;

	if (!ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		if (bLocal_41)
			iLocal_39 = TASK::_CREATE_HERB_COMPOSITES(hLocal_40, uLocal_16, 0f, 0, &unk, -1);
		else
			iLocal_39 = TASK::_CREATE_HERB_COMPOSITES(hLocal_40, uLocal_16, 0f, 1, &unk, -1);
	
		return true;
	}

	return false;
}

int func_51(var uParam0, var uParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6) // Position - 0x16E8 Signature - 22 07 0B
{
	Volume volume;
	int num;

	volume = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	num = func_77(uParam0, uParam1, volume, iParam2);
	func_78(volume);
	return num;
}

int func_52(var uParam0) // Position - 0x1719 Signature - 22 01 03 00 00 03 01 00 13
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 89266752))
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_22))
			PERSISTENCE::PERSISTENCE_ADD_SCENARIO_LOOTED(iLocal_22);
	
		func_79(*uParam0, uParam0->f_13, GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
		return 1;
	}

	return 0;
}

int func_53(var uParam0) // Position - 0x175C Signature - 22 01 03 00 00 66 00 27 0D
{
	if (func_14(Global_1222327[*uParam0 /*251*/][uParam0->f_13], 2))
		return 1;

	return 0;
}

void func_54(var uParam0, int iParam1) // Position - 0x1780 Signature - 22 02 06 00 00 66 01
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

int func_55(int iParam0, var uParam1, Any anParam2, int iParam3, int iParam4) // Position - 0x18AC Signature - 22 05 17
{
	var unk;
	int num;

	if (iParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_80(uParam1);
	SECURE_STORE(&unk, iParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_3.f_1 = 10;
	num = iParam3;
	num.f_3 = { *uParam1 };
	num.f_2 = iParam4;
	func_81(anParam2, iParam0, num);
	return 1;
}

BOOL func_56(int iParam0, int iParam1) // Position - 0x191B Signature - 22 02 04 00 00 66 00 5D 77
{
	return MISC::IS_BIT_SET(Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
}

void func_57() // Position - 0x1937 Signature - 22 00 02 00 00 5D 77
{
	SCRIPTS::_SET_ALL_PLAYER_BITS(&(Global_1072759.f_21353.f_260));
	return;
}

BOOL func_58(int iParam0) // Position - 0x194D Signature - 22 01 03 00 00 66 00 76 2F 15
{
	if (*iParam0 == 0)
		return false;

	return *iParam0 != -1;
}

BOOL func_59(Entity eParam0) // Position - 0x1965 Signature - 22 01 04 00 00 66 00 03
{
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(eParam0))
	{
		if (ENTITY::IS_ENTITY_AN_OBJECT(eParam0))
		{
			entityModel = ENTITY::GET_ENTITY_MODEL(eParam0);
		
			switch (entityModel)
			{
				case joaat("mp005_s_bdeg_eaglenest01x"):
				case joaat("mp005_s_bdeg_condornest01x"):
				case joaat("mp005_s_bdeg_spoonbillnest01x"):
				case joaat("mp005_s_bdeg_heronnest01x"):
				case joaat("mp005_s_bdeg_egretnest01x"):
				case 990159072:
					return true;
			}
		}
	}

	return false;
}

BOOL func_60() // Position - 0x19BB Signature - 22 00 03 00 00 70
{
	Hash currentPedWeaponAmmoType;

	if (func_83(func_82(Global_33, true, 0, false)))
	{
		currentPedWeaponAmmoType = WEAPON::_GET_CURRENT_PED_WEAPON_AMMO_TYPE(Global_33, WEAPON::_GET_PED_WEAPON_OBJECT(Global_33, true));
	
		if (currentPedWeaponAmmoType == joaat("ammo_arrow_small_game"))
			return true;
		else
			return false;
	}

	return false;
}

void func_61(int iParam0, BOOL bParam1) // Position - 0x19FB Signature - 22 02 06 00 00 66 00
{
	int num;
	int num2;

	func_84(iParam0, &num, &num2);

	if (!func_85(iParam0, num, num2, bParam1))
		return;

	func_86(num, num2);
	return;
}

struct<5> func_62(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1A28 Signature - 22 03 2F
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_87(bParam1) };
	unk.f_4 = 1084182731;
	num = func_88(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_96(hParam0, -1823706425))
			{
				unk = { func_89(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_96(hParam0, -1483207246))
			{
				unk = { func_89(joaat("WARDROBE"), unk, 1034665895, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_89(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1311702610))
			{
				unk.f_4 = -1311702610;
			}
			else if (func_96(hParam0, -1653629781))
			{
				unk = { func_89(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -1591664384;
			unk = { func_94(bParam1) };
		
			switch (func_95(hParam0))
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
			unk = { func_89(joaat("WARDROBE"), unk, 1034665895, bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_90(bParam1) };
		
			if (bParam2 && func_91(hParam0, true))
			{
				unk6.f_9 = -1591664384;
			
				if (!func_92(hParam0, &unk, 1728382685, false, false))
					unk.f_4 = 1728382685;
				else if (!func_92(hParam0, &unk, -649335959, false, false))
					unk.f_4 = -649335959;
				else if (func_93(hParam0, &unk6, 1728382685))
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
			
				if (!func_97(unk, &unk28, bParam1, false, -1))
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
			else if (func_96(hParam0, -1653629781))
			{
				unk = { func_89(1384535894, unk, 1784584921, bParam1) };
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

BOOL func_63(Hash hParam0, var uParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6) // Position - 0x1D9C Signature - 22 07 25
{
	var unk;
	var unk5;
	int num;
	int num2;

	func_98(&hParam0);

	if (!func_99(hParam0, 0) && !func_101(func_100(hParam0), 2))
		return false;

	if (!bParam3 && func_102(hParam0, joaat("DEFAULT")) == 0)
		bParam3 = true;

	if (func_103(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		unk = { func_90(false) };
		unk5.f_9 = -1591664384;
	
		if (!func_92(hParam0, &unk, 1728382685, false, false))
			return false;
		else if (func_93(hParam0, &unk5, 1728382685))
			return false;
	
		if (func_91(hParam0, true))
			if (!func_92(hParam0, &unk, -649335959, false, false))
				return false;
			else if (func_93(hParam0, &unk5, -649335959))
				return false;
	
		return true;
	}

	num = iParam5;

	if (iParam5 < 0)
		num = func_104(hParam0, uParam1, bParam3, bParam4);

	if (num < 0)
		return false;
	else if (num == 0)
		return true;

	num2 = func_105(hParam0, *uParam1, uParam1->f_4, bParam4, bParam3, bParam6);

	if (num2 + iParam2 > num)
		return true;

	return false;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x1ED0 Signature - 22 03 05 00 00 66 00 73
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_65(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1EFA Signature - 22 03 05 00 00 66 00 27
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_106(joaat("kit_collectors_bag"), false, false, false) <= 0)
				return 0;
			break;
	
		case 1:
			if (func_107(false))
				return 0;
			break;
	
		case 2:
			if (func_108())
				return 0;
			break;
	
		case 3:
			if (Global_1048576)
				return 0;
			break;
	
		case 4:
			if (func_109())
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

float func_66() // Position - 0x1FF9 Signature - 22 00 02 00 00 6D 59
{
	return Global_1156111.f_2169[89 /*205*/].f_201;
}

void func_67(var uParam0, int iParam1) // Position - 0x200E Signature - 22 02 04 00 00 66 01 66 00 32
{
	*uParam0 = iParam1;
	return;
}

void func_68(int iParam0) // Position - 0x201B Signature - 22 01 03 00 00 66 00 2F 23
{
	if (iParam0 <= 0)
		return;

	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
	return;
}

void func_69(var uParam0) // Position - 0x2042 Signature - 22 01 03 00 00 66 00 73
{
	func_110(uParam0, 0f);
	return;
}

float func_70(var uParam0) // Position - 0x2051 Signature - 22 01 03 00 00 66 00 39 C5
{
	if (!func_111(uParam0))
		return uParam0->f_1;

	if (func_112(uParam0))
		return uParam0->f_2;

	return func_113() - uParam0->f_1;
}

BOOL func_71(Entity eParam0) // Position - 0x2086 Signature - 22 01 13
{
	int num;
	var unk5;
	Hash entityModel;
	int i;
	Hash hashKey;

	if (func_114() == 0)
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(func_114()))
		return false;

	num = func_114();
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

var func_72(BOOL bParam0, int iParam1) // Position - 0x2120 Signature - 22 02 04 00 00 73
{
	return func_73(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), bParam0, iParam1);
}

var func_73(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x213E Signature - 22 0C
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

	if (func_115() != 0)
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_116());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_116());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_116());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_117(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_118(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_119(i) != 1)
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
					if (!func_120(player2))
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

void func_74(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, BOOL bParam20, BOOL bParam21) // Position - 0x24D1 Signature - 22 16 2D
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
				func_121(&(Global_1072759.f_22981), unk);
				return;
			}
		}
	}

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam0, 19, 5, &uParam19);
	return;
}

void func_75(Any* panParam0, int* piParam1) // Position - 0x256B Signature - 22 02 04 00 00 66 01 03
{
	if (SCRIPTS::_IS_ANY_PLAYER_BIT_SET(piParam1))
	{
		panParam0->f_1 = Global_1295666.f_149[Global_1295666];
		SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 7, 22, piParam1);
	}

	return;
}

BOOL func_76(var uParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x259C Signature - 22 05 0E
{
	var groundZ;
	int num;
	BOOL flag;
	BOOL flag2;
	Vector3 vector;

	if (func_122(*uParam0, 0f, 0f, 0f))
		return true;

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
		return true;
	}

	if (flag && flag2)
		return false;

	uParam0->f_2 = groundZ;
	return true;
}

int func_77(var uParam0, var uParam1, Volume volParam2, int iParam3) // Position - 0x26A0 Signature - 22 04 0D 00 00 09
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

void func_78(Volume volParam0) // Position - 0x275B Signature - 22 01 03 00 00 66 00 03 05 00 9E
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

void func_79(var uParam0, var uParam1, int iParam2) // Position - 0x2772 Signature - 22 03 20 00 00 66
{
	var value;
	int num;
	int num2;

	if (iParam2 == 0)
		iParam2 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	!GANG::NETWORK_IS_GANG_ID_VALID(iParam2);
	value = func_123(iParam2);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&value, PLAYER::PLAYER_ID());
	num.f_4 = 1;
	num = 41;
	num.f_5 = uParam0;
	num.f_6 = uParam1;
	num2.f_12 = -1;
	num2.f_12.f_1 = -1;
	num2.f_14 = 255;
	num2.f_15 = 255;
	num2.f_14 = Global_1295666.f_149[Global_1295666];
	num2 = 0;
	num2.f_1 = PLAYER::GET_PLAYER_INDEX();
	num2.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_74(num2, func_73(Global_34, 0f, 0f, 0f, 300f, 300f, 300f, joaat("volSphere"), 0, 8), false, false);
	func_75(&num, &value);
	return;
}

void func_80(var uParam0) // Position - 0x2837 Signature - 22 01 03 00 00 66 00 37 22
{
	func_54(uParam0, joaat("MULTIPLAYER_GAME"));

	if (func_124() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_54(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_54(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_81(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x286F Signature - 22 11
{
	int i;
	var unk;

	if (!func_125(anParam0))
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

Hash func_82(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x2925 Signature - 22 04 07 00 00 37
{
	Hash weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

BOOL func_83(Hash hParam0) // Position - 0x2967 Signature - 22 01 03 00 00 66 00 03 05 00 20
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

void func_84(int iParam0, var uParam1, var uParam2) // Position - 0x2975 Signature - 22 03 06 00 00 66 00 67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_85(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x2991 Signature - 22 04 06 00 00 66 01
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_126(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_127(iParam0))
		return false;

	if (func_128(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_129(iParam0, 1) || func_130(32768))
		if (!func_129(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_131())
		return false;

	return true;
}

void func_86(int iParam0, int iParam1) // Position - 0x2A33 Signature - 22 02 05 00 00 66 00 5D
{
	int address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

struct<4> func_87(BOOL bParam0) // Position - 0x2A57 Signature - 22 01 04 00 00 5D 17 00 18 27 0E
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_132(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_89(joaat("character"), func_133(), -1591664384, bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_89(joaat("character"), func_133(), -1591664384, false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_89(joaat("character"), func_133(), -1591664384, bParam0);
}

int func_88(Hash hParam0) // Position - 0x2AF7 Signature - 22 01 0A 00 00 66 00 2F 39 09 2E 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 66 05 8B 04 00 2F 50 01 01 4B 03 27 02
{
	var unk;

	if (!func_99(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_2;
}

struct<4> func_89(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x2B22 Signature - 22 07 0D
{
	var outGuid;

	if (!func_99(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_132(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

struct<4> func_90(BOOL bParam0) // Position - 0x2B53 Signature - 22 01 04 00 00 66 00 39 CA 34 00 67 03 66 03 11 15
{
	int num;

	num = func_132(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_89(923904168, func_87(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_89(923904168, func_87(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_89(923904168, func_87(bParam0), -740156546, false);
}

BOOL func_91(Hash hParam0, BOOL bParam1) // Position - 0x2BF4 Signature - 22 02 04 00 00 66 00 39 D1
{
	if (func_95(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_134();
		else
			return 1;

	return 0;
}

BOOL func_92(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2C2B Signature - 22 05 07 00 00 66 00 42
{
	return func_105(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_93(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x2C46 Signature - 22 03 09
{
	var unk;

	if (func_135(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_94(BOOL bParam0) // Position - 0x2C67 Signature - 22 01 04 00 00 66 00 39 CA 34 00 67 03 66 03 11 0B
{
	int num;

	num = func_132(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_89(271701509, func_87(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_89(271701509, func_87(bParam0), 12999093, false);
}

int func_95(Hash hParam0) // Position - 0x2CD1 Signature - 22 01 0A 00 00 66 00 2F 39 09 2E 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 66 05 8B 04 00 2F 50 01 01 4B 03 27 01
{
	var unk;

	if (!func_99(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_1;
}

BOOL func_96(Hash hParam0, int iParam1) // Position - 0x2CFC Signature - 22 02 08
{
	Hash hash;
	int num;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || iParam1 == 0)
		return false;

	num = func_95(hParam0);

	if (num == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(num);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(num, i, &hash))
			if (func_136(hParam0, iParam1, hash))
				return true;
	}

	return false;
}

BOOL func_97(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x2D69 Signature - 22 08 0A 00 00 4B
{
	return func_137(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

int func_98(var uParam0) // Position - 0x2D7F Signature - 22 01 03 00 00 66 00 76 2F 39
{
	if (!func_99(*uParam0, 0))
		return 0;

	if (!func_138(*uParam0))
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

BOOL func_99(Hash hParam0, int iParam1) // Position - 0x2E09 Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 1E
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

Hash func_100(Hash hParam0) // Position - 0x2E23 Signature - 22 01 03 00 00 66 00 50
{
	return hParam0;
}

BOOL func_101(Hash hParam0, int iParam1) // Position - 0x2E2D Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 08
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

int func_102(Hash hParam0, int iParam1) // Position - 0x2E47 Signature - 22 02 04 00 00 66 01 2F
{
	if (iParam1 == 0)
		return 0;

	if (func_101(func_100(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, iParam1);
}

BOOL func_103(Hash hParam0) // Position - 0x2E73 Signature - 22 01 03 00 00 66 00 39 F7
{
	return func_88(hParam0) == joaat("WEAPON");
}

int func_104(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2E87 Signature - 22 04 06 00 00 66 00 2F
{
	if (!func_99(hParam0, 0))
	{
		if (func_101(func_100(hParam0), 2))
			return -1;
	
		return 0;
	}

	if (func_88(hParam0) == joaat("fee"))
		return -1;

	if (!bParam2 && func_102(hParam0, joaat("DEFAULT")) == 0)
		bParam2 = true;

	if (bParam2)
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_132(bParam3), hParam0);
}

int func_105(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x2EFB Signature - 22 09
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_99(hParam0, 0))
		return 0;

	if (!bParam7 && func_102(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_89(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_132(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_132(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

int func_106(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2F7A Signature - 22 04 0D 00 00 2F
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_99(hParam0, 0))
		return 0;

	num = func_88(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_139(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_140(hParam0, false);
	}

	if (func_102(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_132(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_141(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_132(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_107(BOOL bParam0) // Position - 0x303C Signature - 22 01 03 00 00 66 00 8B 0D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

BOOL func_108() // Position - 0x306C Signature - 22 00 02 00 00 39 F7
{
	return func_142() != -1;
}

BOOL func_109() // Position - 0x307A Signature - 22 00 02 00 00 5D 0C CE 1D 27 01 37
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

void func_110(var uParam0, float fParam1) // Position - 0x309F Signature - 22 02 04 00 00 39
{
	uParam0->f_1 = func_113() - fParam1;
	func_143(uParam0, 1);
	func_144(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_111(var uParam0) // Position - 0x30C5 Signature - 22 01 03 00 00 66 00 76 09
{
	return func_145(*uParam0, 1);
}

BOOL func_112(var uParam0) // Position - 0x30D5 Signature - 22 01 03 00 00 66 00 76 11
{
	return func_145(*uParam0, 2);
}

float func_113() // Position - 0x30E5 Signature - 22 00 03 00 00 03
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

int func_114() // Position - 0x3117 Signature - 22 00 02 00 00 6D 2F
{
	return Global_1072759.f_28418[47 /*4*/].f_3;
}

int func_115() // Position - 0x312C Signature - 22 00 02 00 00 5D FD
{
	return Global_1051645.f_12;
}

char* func_116() // Position - 0x313A Signature - 22 00 02 00 00 6D 99
{
	return "unnamed";
}

BOOL func_117(int iParam0) // Position - 0x3145 Signature - 22 01 04 00 00 2F 67 03 66 00
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

BOOL func_118(int iParam0) // Position - 0x31D4 Signature - 22 01 03 00 00 5D 17
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_146(36, iParam0);
}

int func_119(int iParam0) // Position - 0x31F2 Signature - 22 01 03 00 00 66 00 6D
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_120(Player plParam0) // Position - 0x323D Signature - 22 01 03 00 00 03 01 00 43
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_147(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_148(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

int func_121(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21) // Position - 0x3282 Signature - 22 16 18
{
	if (!func_149(uParam0))
		return 0;

	uParam0->f_2[*uParam0 /*21*/] = { uParam1 };
	*uParam0 = *uParam0 + 1;
	return 1;
}

BOOL func_122(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x32B2 Signature - 22 06 08
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

var func_123(int iParam0) // Position - 0x32DB Signature - 22 01 16
{
	var memberHandles;
	var value;
	int gangMembers;
	int i;
	Player playerFromGamerHandle;

	memberHandles = 7;
	gangMembers = GANG::_NETWORK_GET_GANG_MEMBERS(iParam0, &memberHandles);

	if (gangMembers == 0)
		return value;

	i = 0;

	for (i = 0; i <= gangMembers - 1; i = i + 1)
	{
		playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&memberHandles[i /*2*/]);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerFromGamerHandle))
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, playerFromGamerHandle);
	}

	return value;
}

int func_124() // Position - 0x3334 Signature - 22 00 02 00 00 5D 0C CE 1D 27 01 50
{
	return Global_1953292.f_1;
}

BOOL func_125(Any anParam0) // Position - 0x3342 Signature - 22 01 03 00 00 66 00 76 2F 0B
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 || anParam0->f_1 == -889271554 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_126(int iParam0, int iParam1) // Position - 0x3388 Signature - 22 02 04 00 00 66 00 87
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_127(int iParam0) // Position - 0x33A0 Signature - 22 01 03 00 00 66 00 42
{
	if (func_129(iParam0, 4))
		return false;

	return true;
}

BOOL func_128(int iParam0) // Position - 0x33B7 Signature - 22 01 07 00 00 66 00 5D
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

BOOL func_129(int iParam0, int iParam1) // Position - 0x3483 Signature - 22 02 04 00 00 66 00 5D 12
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_130(int iParam0) // Position - 0x349C Signature - 22 01 03 00 00 5D 00
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_131() // Position - 0x34AF Signature - 22 00 02 00 00 39 63
{
	if (!func_150())
		return false;

	return Global_1904402.f_8873;
}

int func_132(BOOL bParam0) // Position - 0x34CA Signature - 22 01 03 00 00 39
{
	if (func_1() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_133() // Position - 0x350B Signature - 22 00 06
{
	var unk;

	return unk;
}

int func_134() // Position - 0x3517 Signature - 22 00 02 00 00 37
{
	if (func_151(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

BOOL func_135(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x3534 Signature - 22 04 07 00 00 2F
{
	int inventoryId;

	inventoryId = func_132(false);
	*panParam1 = { func_89(hParam0, func_90(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_136(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x3579 Signature - 22 03 05 00 00 66 02
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, iParam1, hParam2);
}

BOOL func_137(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x35AC Signature - 22 05 07 00 00 66 00 03 05 00 5C
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_132(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

BOOL func_138(Hash hParam0) // Position - 0x35E6 Signature - 22 01 03 00 00 66 00 37 11
{
	return func_152(hParam0, 1279601681);
}

Hash func_139(Hash hParam0, int iParam1) // Position - 0x35F9 Signature - 22 02 07
{
	int num;
	var unk;
	Hash hash;

	if (!func_99(hParam0, 0))
		return 0;

	num = func_88(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_152(hParam0, 1399091007))
	{
		func_153(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_140(Hash hParam0, BOOL bParam1) // Position - 0x3673 Signature - 22 02 18
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_154(hParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };

	if (bParam1)
		func_155(&unk, func_90(false));

	if (!func_156(&unk, &num, &num2, false))
		return 0;

	func_157(num);
	return num2;
}

struct<4> func_141(Hash hParam0, BOOL bParam1) // Position - 0x36D2 Signature - 22 02 09
{
	var unk;

	unk = { func_62(hParam0, bParam1, false) };
	return func_89(hParam0, unk, unk.f_4, bParam1);
}

int func_142() // Position - 0x36F7 Signature - 22 00 02 00 00 5D F4
{
	return Global_1149172.f_137;
}

void func_143(var uParam0, int iParam1) // Position - 0x3705 Signature - 22 02 04 00 00 66 00 76 66 01
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_144(var uParam0, int iParam1) // Position - 0x3716 Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 02
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_145(int iParam0, int iParam1) // Position - 0x372B Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 02 05
{
	return iParam0 && iParam1 != false;
}

BOOL func_146(int iParam0, int iParam1) // Position - 0x373A Signature - 22 02 05 00 00 66 00 67
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_158(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_159())
		return func_158(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_158(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_147(Player plParam0) // Position - 0x37AE Signature - 22 01 03 00 00 5D 77
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_148(Player plParam0) // Position - 0x37CB Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 32
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_160(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_161(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

BOOL func_149(var uParam0) // Position - 0x384E Signature - 22 01 03 00 00 66 00 76 6D
{
	if (*uParam0 >= 40)
		return false;

	return true;
}

BOOL func_150() // Position - 0x3863 Signature - 22 00 02 00 00 03
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

int func_151(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3877 Signature - 22 04 06 00 00 66 00 39
{
	if (func_162(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_132(bParam1), hParam0, bParam3);
}

BOOL func_152(Hash hParam0, Hash hParam1) // Position - 0x38AA Signature - 22 02 04 00 00 66 00 2F 39
{
	if (!func_99(hParam0, 0))
		return func_163(func_100(hParam0), hParam1);

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

void func_153(Hash hParam0, var uParam1, var uParam2) // Position - 0x38EB Signature - 22 03 05 00 00 2F
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

struct<18> func_154(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x3AF7 Signature - 22 07 1B
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

void func_155(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x3BD5 Signature - 22 05 07 00 00 4B
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_156(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x3BF0 Signature - 22 04 06 00 00 66 03
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_132(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_157(int iParam0) // Position - 0x3C15 Signature - 22 01 03 00 00 66 00 2F 8A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

BOOL func_158(Any* panParam0, int iParam1, int iParam2) // Position - 0x3C36 Signature - 22 03 07
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_159() // Position - 0x3C6D Signature - 22 00 02 00 00 5D DD
{
	return Global_1102813.f_3672;
}

void func_160(Player plParam0) // Position - 0x3C7C Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 77
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_161(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_161(Player plParam0) // Position - 0x3CE8 Signature - 22 01 03 00 00 66 00 5D
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

BOOL func_162(Hash hParam0) // Position - 0x3D23 Signature - 22 01 03 00 00 66 00 03 05 00 2B
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

int func_163(Hash hParam0, Hash hParam1) // Position - 0x3D31 Signature - 22 02 04 00 00 66 00 11
{
	if (!func_101(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

