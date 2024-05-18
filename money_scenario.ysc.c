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
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 09
{
	bLocal_13 = 1;
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

void func_1() // Position - 0x56 Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 39
{
	return;
}

void func_2() // Position - 0x5E Signature - 22 00 02 00 00 39
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(anLocal_15);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_8();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3() // Position - 0x83 Signature - 22 00 02 00 00 54
{
	if (hLocal_14 != 0)
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hLocal_14) == 0)
			return bLocal_13;
		else
			return true;

	return bLocal_13;
}

void func_4() // Position - 0xAC Signature - 22 00 02 00 00 50 00 00 22 00 03
{
	return;
}

void func_5() // Position - 0xB4 Signature - 22 00 03
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

void func_6() // Position - 0x10C Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 50
{
	return;
}

void func_7() // Position - 0x114 Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 03
{
	return;
}

void func_8() // Position - 0x11C Signature - 22 00 02 00 00 03
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x128 Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 38 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 32 4B 03 39 A0
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_12(&eventData);
	}

	return;
}

void func_10(int iParam0) // Position - 0x150 Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 38 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 32 4B 03 39 A8
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_13(&eventData);
	}

	return;
}

void func_11(int iParam0) // Position - 0x178 Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 38 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 32 4B 03 39 B3
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_14(&eventData);
	}

	return;
}

void func_12(var uParam0) // Position - 0x1A0 Signature - 22 01 03 00 00 50
{
	return;
}

void func_13(var uParam0) // Position - 0x1A8 Signature - 22 01 03 00 00 2F
{
	bLocal_13 = false;
	return;
}

void func_14(var uParam0) // Position - 0x1B3 Signature - 22 01 03 00 00 54
{
	if (TASK::_GET_SCENARIO_POINT_RADIUS(iLocal_16) == 0f)
		return;

	if (uParam0->f_1 == joaat("CASH"))
		func_15(joaat("reward_moneystack"), false, 1065353216, 1, 0, 0, false, -1);
	else if (uParam0->f_1 == joaat("Money"))
		func_15(joaat("reward_moneystack"), false, 1065353216, 1, 0, 0, false, -1);
	else if (uParam0->f_1 == joaat("p_moneyStack01x_PH_R_HAND"))
		func_15(joaat("reward_moneystack"), false, 1065353216, 1, 0, 0, false, -1);

	return;
}

int func_15(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0x232 Signature - 22 08 0B
{
	int num;

	if (func_16() == 0)
	{
		func_17(hParam0, 0);
		return 0;
	}

	num = func_18(hParam0, bParam6, iParam7);

	if (!bParam1)
		func_19(num, sParam4, iParam5, false);

	func_20(num, bParam1, iParam2, iParam3);
	return num;
}

int func_16() // Position - 0x279 Signature - 22 00 02 00 00 5D 17
{
	return Global_1572887.f_14;
}

int func_17(int iParam0, int iParam1) // Position - 0x287 Signature - 22 02 14
{
	var unk;
	var unk5;

	if (0 == iParam0)
		return 0;

	unk5.f_1 = 10;
	func_21(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_22(iParam0, &unk5, &unk, iParam1, 0);
}

int func_18(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x2BB Signature - 22 03 1F
{
	float num;
	int num2;
	int i;
	Hash hash;

	if (func_16() == 0)
		return 0;

	if (iParam2 != -1)
		return iParam2;

	num = 1f;

	if (bParam1 && func_23(joaat("provision_trinket_elk_antler"), 1))
		num = num + 0.1f;

	num2.f_1 = 10;
	num2.f_12 = 10;
	MISC::_LOOT_TABLES_GET_INFO(Global_33, true, true, hParam0, &num2, 0);

	for (i = 0; i < num2; i = i + 1)
	{
		if (num2.f_1[i] == joaat("currency_cash"))
		{
			return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
		else
		{
			hash = num2.f_1[i];
		
			if (func_24(hash, 0) && func_25(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

void func_19(int iParam0, const char* sParam1, int iParam2, BOOL bParam3) // Position - 0x38B Signature - 22 04 06 00 00 66 00 2F
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_26(iParam0, 1000);
			return;
		}
	
		sParam1 = "FEED_MONEY_EARN";
	}

	func_27(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_20(int iParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x3DA Signature - 22 04 09
{
	int num;
	int value;
	int num2;

	if (iParam0 <= 0)
		return;

	if (bParam1)
	{
		num = BUILTIN::ROUND(BUILTIN::TO_FLOAT(iParam0) * iParam2);
		value = (iParam0 - num) / iParam3;
	
		if (func_28() || func_29())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_27(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
		num > 0;
		func_27(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, 752097756);
		func_31(func_30(joaat("CAREER_CASH")), value);
	}

	return;
}

void func_21(var uParam0, int iParam1) // Position - 0x4B1 Signature - 22 02 06
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

int func_22(int iParam0, var uParam1, Any anParam2, int iParam3, int iParam4) // Position - 0x5DD Signature - 22 05 17
{
	var unk;
	int num;

	if (iParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_32(uParam1);
	SECURE_STORE(&unk, iParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_3.f_1 = 10;
	num = iParam3;
	num.f_3 = { *uParam1 };
	num.f_2 = iParam4;
	func_33(anParam2, iParam0, num);
	return 1;
}

BOOL func_23(Hash hParam0, int iParam1) // Position - 0x64C Signature - 22 02 05 00 00 66
{
	int num;

	if (!func_24(hParam0, 0))
		return false;

	num = func_34(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_36(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_35(hParam0, 1))
				return false;
			break;
	}

	return func_37(hParam0, false, false, false) >= iParam1;
}

BOOL func_24(Hash hParam0, int iParam1) // Position - 0x6CF Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 0E
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_25(Hash hParam0, Hash hParam1) // Position - 0x6E9 Signature - 22 02 04 00 00 66 00 2F 39
{
	if (!func_24(hParam0, 0))
		return func_39(func_38(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return true;

	return false;
}

void func_26(int iParam0, int iParam1) // Position - 0x72A Signature - 22 02 04 00 00 66 00 2F 23
{
	if (iParam0 <= 0)
		return;

	if (func_40())
	{
		Global_1913444.f_125 = MISC::GET_GAME_TIMER();
		Global_1913444.f_126 = iParam1;
	}

	Global_1913444.f_127 = Global_1913444.f_127 + iParam0;
	return;
}

int func_27(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8) // Position - 0x766 Signature - 22 09 20
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num.f_1 = iParam5;
	num.f_2 = iParam6;
	num.f_3 = iParam7;
	num = 450;
	unk13.f_1 = sParam0;
	unk13.f_2 = sParam1;
	unk13.f_3 = hParam2;
	unk13.f_4 = iParam3;
	unk13.f_5 = iParam4;
	unk13.f_6 = 0;
	num2 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&num, &unk13, bParam8);
	func_41(sParam0, sParam1, hParam2);
	return num2;
}

BOOL func_28() // Position - 0x7C9 Signature - 22 00 02 00 00 37 63
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_29() // Position - 0x7DA Signature - 22 00 02 00 00 37 74
{
	return DLC::IS_DLC_PRESENT(joaat("dlc_ultimateedition"));
}

struct<2> func_30(int iParam0) // Position - 0x7EB Signature - 22 01 05 00 00 66
{
	int num;

	num = iParam0;
	return num;
}

void func_31(var uParam0, var uParam1, int iParam2) // Position - 0x7FB Signature - 22 03 05 00 00 4B
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

void func_32(var uParam0) // Position - 0x818 Signature - 22 01 03 00 00 66 00 37
{
	func_21(uParam0, joaat("MULTIPLAYER_GAME"));

	if (func_42() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_21(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_21(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_33(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x850 Signature - 22 11
{
	int i;
	var unk;

	if (!func_43(anParam0))
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

int func_34(Hash hParam0) // Position - 0x906 Signature - 22 01 0A 00 00 66 00 2F 39 CF 06 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 07 05 8B 04 00 2F 50 01 01 4B 03 27 02
{
	var unk;

	if (!func_24(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_2;
}

BOOL func_35(Hash hParam0, int iParam1) // Position - 0x931 Signature - 22 02 16
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_24(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_44(hParam0, iParam1);
	unk.f_9 = -1591664384;

	if (func_45("ALL WEAPONS", &num, &num2, -1591664384, false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_46(&unk, i, num, num2))
			{
			}
			else if (!func_47(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_48(num);
				return true;
			}
		}
	
		func_48(num);
	}

	return false;
}

BOOL func_36(Hash hParam0) // Position - 0x9D8 Signature - 22 01 06
{
	int num;
	int num2;
	int num3;

	if (!func_24(hParam0, 0))
		return false;

	num = func_49(hParam0);

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

	num2 = func_50(hParam0);

	if (!(num2 == 0))
	{
		num3 = func_51(&(Global_17418.f_55.f_664.f_1354.f_5), num2);
	
		if (num3 == -1)
			return true;
	}

	num2 = func_52(hParam0);
	num3 = func_51(&(Global_17418.f_55.f_664.f_1354.f_5), num2);

	if (num3 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num3 /*17*/];
}

int func_37(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xA94 Signature - 22 04 0D
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_24(hParam0, 0))
		return 0;

	num = func_34(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_44(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_53(hParam0, false);
	}

	if (func_54(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_55(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_56(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_55(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

Hash func_38(Hash hParam0) // Position - 0xB56 Signature - 22 01 03 00 00 66 00 50
{
	return hParam0;
}

BOOL func_39(Hash hParam0, Hash hParam1) // Position - 0xB60 Signature - 22 02 04 00 00 66 00 11
{
	if (!func_57(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

BOOL func_40() // Position - 0xB96 Signature - 22 00 02 00 00 5D 64
{
	return Global_1913444.f_127 == 0;
}

void func_41(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0xBA6 Signature - 22 03 05 00 00 37
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

int func_42() // Position - 0xBD7 Signature - 22 00 02 00 00 5D 0C
{
	return Global_1953292.f_1;
}

BOOL func_43(Any anParam0) // Position - 0xBE5 Signature - 22 01 03 00 00 66 00 76
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 || anParam0->f_1 == -889271554 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

Hash func_44(Hash hParam0, int iParam1) // Position - 0xC2B Signature - 22 02 07
{
	int num;
	var unk;
	Hash hash;

	if (!func_24(hParam0, 0))
		return 0;

	num = func_34(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_25(hParam0, 1399091007))
	{
		func_58(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_45(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0xCA5 Signature - 22 05 07 00 00 66 04
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_55(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_46(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0xCCC Signature - 22 04 06 00 00 66 02
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_47(Hash hParam0) // Position - 0xD07 Signature - 22 01 03 00 00 66 00 03 05 00 0D
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_48(int iParam0) // Position - 0xD22 Signature - 22 01 03 00 00 66 00 2F
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_49(Hash hParam0) // Position - 0xD43 Signature - 22 01 0A 00 00 66 00 2F 39 CF 06 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 07 05 8B 04 00 2F 50 01 01 4B 03 27 01
{
	var unk;

	if (!func_24(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_1;
}

int func_50(Hash hParam0) // Position - 0xD6E Signature - 22 01 03 00 00 66 00 3C
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

int func_51(var uParam0, int iParam1) // Position - 0xE51 Signature - 22 02 05 00 00 2F
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

int func_52(Hash hParam0) // Position - 0xE8E Signature - 22 01 04 00 00 66 00 39 43
{
	int num;

	num = func_49(hParam0);

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

int func_53(Hash hParam0, BOOL bParam1) // Position - 0xEFB Signature - 22 02 18
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_59(hParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };

	if (bParam1)
		func_61(&unk, func_60(false));

	if (!func_62(&unk, &num, &num2, false))
		return 0;

	func_48(num);
	return num2;
}

int func_54(Hash hParam0, int iParam1) // Position - 0xF5A Signature - 22 02 04 00 00 66 01
{
	if (iParam1 == 0)
		return 0;

	if (func_57(func_38(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, iParam1);
}

int func_55(BOOL bParam0) // Position - 0xF86 Signature - 22 01 03 00 00 39
{
	if (func_16() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_56(Hash hParam0, BOOL bParam1) // Position - 0xFC7 Signature - 22 02 09
{
	var unk;

	unk = { func_63(hParam0, bParam1, 0) };
	return func_64(hParam0, unk, unk.f_4, bParam1);
}

BOOL func_57(Hash hParam0, int iParam1) // Position - 0xFEC Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 03
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

void func_58(Hash hParam0, var uParam1, var uParam2) // Position - 0x1006 Signature - 22 03 05 00 00 2F
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

struct<18> func_59(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1212 Signature - 22 07 1B
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

struct<4> func_60(BOOL bParam0) // Position - 0x12F0 Signature - 22 01 04 00 00 66 00 39 86 0F 00 67 03 66 03 11 15
{
	int num;

	num = func_55(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_64(923904168, func_65(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_64(923904168, func_65(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_64(923904168, func_65(bParam0), -740156546, false);
}

void func_61(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1391 Signature - 22 05 07 00 00 4B
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_62(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x13AC Signature - 22 04 06 00 00 66 03
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_55(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

struct<5> func_63(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x13D1 Signature - 22 03 2F
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_65(bParam1) };
	unk.f_4 = 1084182731;
	num = func_34(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_70(hParam0, -1823706425))
			{
				unk = { func_64(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_70(hParam0, -1483207246))
			{
				unk = { func_64(joaat("WARDROBE"), unk, 1034665895, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_64(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1311702610))
			{
				unk.f_4 = -1311702610;
			}
			else if (func_70(hParam0, -1653629781))
			{
				unk = { func_64(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -1591664384;
			unk = { func_69(bParam1) };
		
			switch (func_49(hParam0))
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
			unk = { func_64(joaat("WARDROBE"), unk, 1034665895, bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_60(bParam1) };
		
			if (iParam2 && func_66(hParam0, true))
			{
				unk6.f_9 = -1591664384;
			
				if (!func_67(hParam0, &unk, 1728382685, false, false))
					unk.f_4 = 1728382685;
				else if (!func_67(hParam0, &unk, -649335959, false, false))
					unk.f_4 = -649335959;
				else if (func_68(hParam0, &unk6, 1728382685))
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
			
				if (!func_71(unk, &unk28, bParam1, false, -1))
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
			else if (func_70(hParam0, -1653629781))
			{
				unk = { func_64(1384535894, unk, 1784584921, bParam1) };
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

struct<4> func_64(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1745 Signature - 22 07 0D
{
	var outGuid;

	if (!func_24(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_55(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

struct<4> func_65(BOOL bParam0) // Position - 0x1776 Signature - 22 01 04 00 00 5D
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_55(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_64(joaat("character"), func_72(), -1591664384, bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_64(joaat("character"), func_72(), -1591664384, false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_64(joaat("character"), func_72(), -1591664384, bParam0);
}

int func_66(Hash hParam0, BOOL bParam1) // Position - 0x1816 Signature - 22 02 04 00 00 66 00 39
{
	if (func_49(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_73();
		else
			return 1;

	return 0;
}

BOOL func_67(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x184D Signature - 22 05 07 00 00 66 00 42
{
	return func_74(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_68(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x1868 Signature - 22 03 09
{
	var unk;

	if (func_75(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_69(BOOL bParam0) // Position - 0x1889 Signature - 22 01 04 00 00 66 00 39 86 0F 00 67 03 66 03 11 0B
{
	int num;

	num = func_55(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_64(271701509, func_65(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_64(271701509, func_65(bParam0), 12999093, false);
}

BOOL func_70(Hash hParam0, int iParam1) // Position - 0x18F3 Signature - 22 02 08
{
	Hash hash;
	int num;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || iParam1 == 0)
		return false;

	num = func_49(hParam0);

	if (num == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(num);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(num, i, &hash))
			if (func_76(hParam0, iParam1, hash))
				return true;
	}

	return false;
}

BOOL func_71(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x1960 Signature - 22 08 0A
{
	return func_77(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

struct<4> func_72() // Position - 0x1976 Signature - 22 00 06
{
	var unk;

	return unk;
}

int func_73() // Position - 0x1982 Signature - 22 00 02 00 00 37 20
{
	if (func_78(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_74(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x199F Signature - 22 09 10
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_24(hParam0, 0))
		return 0;

	if (!bParam7 && func_54(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_64(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_55(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_55(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_75(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x1A1E Signature - 22 04 07
{
	int inventoryId;

	inventoryId = func_55(false);
	*panParam1 = { func_64(hParam0, func_60(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_76(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x1A63 Signature - 22 03 05 00 00 66
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, iParam1, hParam2);
}

BOOL func_77(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x1A96 Signature - 22 05 07 00 00 66 00 03
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_55(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

int func_78(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1AD0 Signature - 22 04 06 00 00 66 00 39
{
	if (func_79(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_55(bParam1), hParam0, bParam3);
}

BOOL func_79(Hash hParam0) // Position - 0x1B03 Signature - 22 01 03 00 00 66 00 03 05 00 36
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

