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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	BOOL bLocal_18 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 09
{
	bLocal_13 = 1;
	anLocal_15 = anScriptParam_0;
	uLocal_16 = anScriptParam_0.f_1;
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

void func_6() // Position - 0x10C Signature - 22 00 05
{
	float num;
	float num2;
	BOOL flag;

	if (PED::IS_PED_INJURED(Global_33))
	{
		bLocal_13 = false;
		return;
	}

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("objectexchange")) && !bLocal_18)
	{
		num = 1f;
		num2 = 1f;
		flag = false;
		bLocal_18 = true;
		func_13(BUILTIN::FLOOR(num * BUILTIN::TO_FLOAT(func_12(joaat("SCENARIOS_MONEY_PILE")))), flag, num2, 1, 0, 0, true);
	}

	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
		bLocal_13 = false;
	}

	return;
}

void func_7() // Position - 0x17E Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 03
{
	return;
}

void func_8() // Position - 0x186 Signature - 22 00 02 00 00 03 00
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x192 Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 2D 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 27 4B 03 39 B7
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

void func_10(int iParam0) // Position - 0x1BA Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 2D 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 27 4B 03 39 BF
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_15(&eventData);
	}

	return;
}

void func_11(int iParam0) // Position - 0x1E2 Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 2D 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 27 4B 03 39 C7
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_16(&eventData);
	}

	return;
}

int func_12(int iParam0) // Position - 0x20A Signature - 22 01 09
{
	var unk;
	int num;

	if (func_17())
		return 0;

	!func_18(3, &unk);
	unk.f_1 = 0;
	unk.f_2 = -2017996124;
	unk.f_3 = iParam0;
	unk.f_4 = 0;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk))
	{
	}

	return num;
}

void func_13(int iParam0, BOOL bParam1, float fParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6) // Position - 0x251 Signature - 22 07 09
{
	if (func_19() == 0)
	{
		if (func_20(iParam0, sParam4, bParam6) == -1 && !bParam6 && func_21(false) && !func_22())
			func_23(iParam0, sParam4, iParam5, false);
	}
	else
	{
		if (!bParam1)
			func_23(iParam0, sParam4, iParam5, false);
	
		func_24(iParam0, bParam1, fParam2, iParam3);
	}

	return;
}

void func_14(var uParam0) // Position - 0x2B7 Signature - 22 01 03 00 00 50 01 00 22 01 03 00 00 50 01 00 22 01
{
	return;
}

void func_15(var uParam0) // Position - 0x2BF Signature - 22 01 03 00 00 50 01 00 22 01 03 00 00 50 01 00 22 00
{
	return;
}

void func_16(var uParam0) // Position - 0x2C7 Signature - 22 01 03 00 00 50 01 00 22 00
{
	return;
}

BOOL func_17() // Position - 0x2CF Signature - 22 00 02 00 00 2F
{
	return false;
}

BOOL func_18(int iParam0, var uParam1) // Position - 0x2D8 Signature - 22 02 04 00 00 66 00 39 AB
{
	if (!func_25(iParam0))
		return false;

	*uParam1 = Global_1915606[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

int func_19() // Position - 0x305 Signature - 22 00 02 00 00 5D 17
{
	return Global_1572887.f_14;
}

int func_20(int iParam0, const char* sParam1, BOOL bParam2) // Position - 0x313 Signature - 22 03 05 00 00 39
{
	if (func_22())
		bParam2 = true;

	if (!bParam2 && func_21(false))
	{
		func_26(joaat("currency_cash"), iParam0, -334626412);
		return -1;
	}

	return -1;
}

BOOL func_21(BOOL bParam0) // Position - 0x34B Signature - 22 01 03 00 00 39 05 03 00 08 15 04
{
	if (func_19() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_27(bParam0));
}

BOOL func_22() // Position - 0x369 Signature - 22 00 02 00 00 03 01
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
		return false;

	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

void func_23(int iParam0, const char* sParam1, int iParam2, BOOL bParam3) // Position - 0x385 Signature - 22 04 06 00 00 66 00 2F 15
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_28(iParam0, 1000);
			return;
		}
	
		sParam1 = "FEED_MONEY_EARN";
	}

	func_29(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_24(int iParam0, BOOL bParam1, float fParam2, int iParam3) // Position - 0x3D4 Signature - 22 04 09
{
	int num;
	int value;
	int num2;

	if (iParam0 <= 0)
		return;

	if (bParam1)
	{
		num = BUILTIN::ROUND(BUILTIN::TO_FLOAT(iParam0) * fParam2);
		value = (iParam0 - num) / iParam3;
	
		if (func_30() || func_31())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_29(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
		num > 0;
		func_29(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, 752097756);
		func_33(func_32(joaat("CAREER_CASH")), value);
	}

	return;
}

BOOL func_25(int iParam0) // Position - 0x4AB Signature - 22 01 03 00 00 66 00 08
{
	return iParam0 > -1 && iParam0 < 26;
}

int func_26(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x4C1 Signature - 22 03 0F 00 00 66 00 2F 39 5F 06 00 05 8B 04 00 2F 50 03 01 66 01
{
	int num;
	var unk;
	var unk6;

	if (!func_34(hParam0, 0))
		return 0;

	if (iParam1 < 1)
		return 0;

	num = func_35(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_36(hParam0, iParam1, hParam2);

	unk = { func_37(hParam0, false, true) };
	unk6 = { func_38(hParam0, unk, unk.f_4, false) };
	return func_39(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

int func_27(BOOL bParam0) // Position - 0x530 Signature - 22 01 03 00 00 39 05 03 00 08 15 17
{
	if (func_19() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

void func_28(int iParam0, int iParam1) // Position - 0x571 Signature - 22 02 04 00 00 66 00 2F 23
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

int func_29(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8) // Position - 0x5AD Signature - 22 09 20
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

BOOL func_30() // Position - 0x610 Signature - 22 00 02 00 00 37 63
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_31() // Position - 0x621 Signature - 22 00 02 00 00 37 74
{
	return DLC::IS_DLC_PRESENT(joaat("dlc_ultimateedition"));
}

struct<2> func_32(int iParam0) // Position - 0x632 Signature - 22 01 05 00 00 66
{
	int num;

	num = iParam0;
	return num;
}

void func_33(var uParam0, var uParam1, int iParam2) // Position - 0x642 Signature - 22 03 05 00 00 4B
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

BOOL func_34(Hash hParam0, int iParam1) // Position - 0x65F Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 33
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_35(Hash hParam0, int iParam1) // Position - 0x679 Signature - 22 02 04 00 00 66 01
{
	if (iParam1 == 0)
		return 0;

	if (func_43(func_42(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, iParam1);
}

int func_36(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x6A5 Signature - 22 03 0F 00 00 66 00 2F 39 5F 06 00 05 8B 04 00 2F 50 03 01 66 00
{
	int num;
	var guid2;
	var guid1;

	if (!func_34(hParam0, 0))
		return 0;

	num = func_35(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	guid2 = { func_37(hParam0, false, false) };

	if (func_44(hParam0, &guid2, iParam1, false, false, -1, false))
		return 0;

	if (!func_21(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_27(false), &guid1, &guid2, hParam0, guid2.f_4, iParam1, hParam2))
		return 0;

	return 1;
}

struct<5> func_37(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x721 Signature - 22 03 2F
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_45(bParam1) };
	unk.f_4 = 1084182731;
	num = func_46(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_53(hParam0, -1823706425))
			{
				unk = { func_38(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_53(hParam0, -1483207246))
			{
				unk = { func_38(joaat("WARDROBE"), unk, 1034665895, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_38(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1311702610))
			{
				unk.f_4 = -1311702610;
			}
			else if (func_53(hParam0, -1653629781))
			{
				unk = { func_38(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -1591664384;
			unk = { func_51(bParam1) };
		
			switch (func_52(hParam0))
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
			unk = { func_38(joaat("WARDROBE"), unk, 1034665895, bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_47(bParam1) };
		
			if (bParam2 && func_48(hParam0, true))
			{
				unk6.f_9 = -1591664384;
			
				if (!func_49(hParam0, &unk, 1728382685, false, false))
					unk.f_4 = 1728382685;
				else if (!func_49(hParam0, &unk, -649335959, false, false))
					unk.f_4 = -649335959;
				else if (func_50(hParam0, &unk6, 1728382685))
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
			
				if (!func_54(unk, &unk28, bParam1, false, -1))
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
			else if (func_53(hParam0, -1653629781))
			{
				unk = { func_38(1384535894, unk, 1784584921, bParam1) };
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

struct<4> func_38(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xA95 Signature - 22 07 0D
{
	var outGuid;

	if (!func_34(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_27(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

int func_39(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0xAC6 Signature - 22 06
{
	if (!func_34(hParam0, 0))
		return 0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_44(hParam0, panParam2, iParam3, bParam5, false, -1, false))
		return 0;

	if (!func_21(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_27(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return 0;

	return 1;
}

BOOL func_40() // Position - 0xB2E Signature - 22 00 02 00 00 5D 64
{
	return Global_1913444.f_127 == 0;
}

void func_41(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0xB3E Signature - 22 03 05 00 00 37
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

Hash func_42(Hash hParam0) // Position - 0xB6F Signature - 22 01 03 00 00 66 00 50
{
	return hParam0;
}

BOOL func_43(Hash hParam0, int iParam1) // Position - 0xB79 Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 20
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

BOOL func_44(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6) // Position - 0xB93 Signature - 22 07 25
{
	var unk;
	var unk5;
	int num;
	int num2;

	func_55(&hParam0);

	if (!func_34(hParam0, 0) && !func_43(func_42(hParam0), 2))
		return false;

	if (!bParam3 && func_35(hParam0, joaat("DEFAULT")) == 0)
		bParam3 = true;

	if (func_56(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		unk = { func_47(false) };
		unk5.f_9 = -1591664384;
	
		if (!func_49(hParam0, &unk, 1728382685, false, false))
			return false;
		else if (func_50(hParam0, &unk5, 1728382685))
			return false;
	
		if (func_48(hParam0, true))
			if (!func_49(hParam0, &unk, -649335959, false, false))
				return false;
			else if (func_50(hParam0, &unk5, -649335959))
				return false;
	
		return true;
	}

	num = iParam5;

	if (iParam5 < 0)
		num = func_57(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return false;
	else if (num == 0)
		return true;

	num2 = func_58(hParam0, *panParam1, panParam1->f_4, bParam4, bParam3, bParam6);

	if (num2 + iParam2 > num)
		return true;

	return false;
}

struct<4> func_45(BOOL bParam0) // Position - 0xCC7 Signature - 22 01 04 00 00 5D
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_27(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_38(joaat("character"), func_59(), -1591664384, bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_38(joaat("character"), func_59(), -1591664384, false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_38(joaat("character"), func_59(), -1591664384, bParam0);
}

int func_46(Hash hParam0) // Position - 0xD67 Signature - 22 01 0A 00 00 66 00 2F 39 5F 06 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 31 05 8B 04 00 2F 50 01 01 4B 03 27 02
{
	var unk;

	if (!func_34(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_2;
}

struct<4> func_47(BOOL bParam0) // Position - 0xD92 Signature - 22 01 04 00 00 66 00 39 30 05 00 67 03 66 03 11 15
{
	int num;

	num = func_27(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_38(923904168, func_45(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_38(923904168, func_45(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_38(923904168, func_45(bParam0), -740156546, false);
}

BOOL func_48(Hash hParam0, BOOL bParam1) // Position - 0xE33 Signature - 22 02 04 00 00 66 00 39 10
{
	if (func_52(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_60();
		else
			return 1;

	return 0;
}

BOOL func_49(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0xE6A Signature - 22 05 07 00 00 66 00 42
{
	return func_58(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_50(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0xE85 Signature - 22 03 09
{
	var unk;

	if (func_61(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_51(BOOL bParam0) // Position - 0xEA6 Signature - 22 01 04 00 00 66 00 39 30 05 00 67 03 66 03 11 0B
{
	int num;

	num = func_27(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_38(271701509, func_45(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_38(271701509, func_45(bParam0), 12999093, false);
}

int func_52(Hash hParam0) // Position - 0xF10 Signature - 22 01 0A 00 00 66 00 2F 39 5F 06 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 31 05 8B 04 00 2F 50 01 01 4B 03 27 01
{
	var unk;

	if (!func_34(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_1;
}

BOOL func_53(Hash hParam0, int iParam1) // Position - 0xF3B Signature - 22 02 08
{
	Hash hash;
	int num;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || iParam1 == 0)
		return false;

	num = func_52(hParam0);

	if (num == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(num);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(num, i, &hash))
			if (func_62(hParam0, iParam1, hash))
				return true;
	}

	return false;
}

BOOL func_54(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0xFA8 Signature - 22 08
{
	return func_63(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

int func_55(var uParam0) // Position - 0xFBE Signature - 22 01 03 00 00 66 00 76
{
	if (!func_34(*uParam0, 0))
		return 0;

	if (!func_64(*uParam0))
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

BOOL func_56(Hash hParam0) // Position - 0x1048 Signature - 22 01 03 00 00 66 00 39
{
	return func_46(hParam0) == joaat("WEAPON");
}

int func_57(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x105C Signature - 22 04 06 00 00 66 00 2F 39
{
	if (!func_34(hParam0, 0))
	{
		if (func_43(func_42(hParam0), 2))
			return -1;
	
		return 0;
	}

	if (func_46(hParam0) == joaat("fee"))
		return -1;

	if (!bParam2 && func_35(hParam0, joaat("DEFAULT")) == 0)
		bParam2 = true;

	if (bParam2)
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_27(bParam3), hParam0);
}

int func_58(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x10D0 Signature - 22 09 10
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_34(hParam0, 0))
		return 0;

	if (!bParam7 && func_35(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_38(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_27(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_27(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

struct<4> func_59() // Position - 0x114F Signature - 22 00 06
{
	var unk;

	return unk;
}

int func_60() // Position - 0x115B Signature - 22 00 02 00 00 37 20
{
	if (func_65(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

BOOL func_61(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x1178 Signature - 22 04 07
{
	int inventoryId;

	inventoryId = func_27(false);
	*panParam1 = { func_38(hParam0, func_47(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_62(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x11BD Signature - 22 03 05 00 00 66
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, iParam1, hParam2);
}

BOOL func_63(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x11F0 Signature - 22 05 07 00 00 66 00 03
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_27(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

BOOL func_64(Hash hParam0) // Position - 0x122A Signature - 22 01 03 00 00 66 00 37
{
	return func_66(hParam0, 1279601681);
}

int func_65(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x123D Signature - 22 04 06 00 00 66 00 39
{
	if (func_67(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_27(bParam1), hParam0, bParam3);
}

BOOL func_66(Hash hParam0, Hash hParam1) // Position - 0x1270 Signature - 22 02 04 00 00 66 00 2F 39
{
	if (!func_34(hParam0, 0))
		return func_68(func_42(hParam0), hParam1);

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

BOOL func_67(Hash hParam0) // Position - 0x12B1 Signature - 22 01 03 00 00 66 00 03
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

int func_68(Hash hParam0, Hash hParam1) // Position - 0x12BF Signature - 22 02 04 00 00 66 00 11
{
	if (!func_43(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

