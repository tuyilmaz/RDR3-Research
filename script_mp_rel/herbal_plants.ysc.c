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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	Any anLocal_21 = 0;
	int iLocal_22 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 54
{
	anLocal_21 = anScriptParam_0;
	iLocal_20 = anScriptParam_0.f_1;

	if (func_1() != -1)
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	
		if (func_3(func_2(0)) == 7)
			func_4(&uLocal_13);
	}

	if (func_1() == -1)
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
			func_4(&uLocal_13);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_20))
		func_4(&uLocal_13);

	uLocal_13.f_1 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_20, true) };

	if (func_5(&uLocal_13))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_20, false);
		func_4(&uLocal_13);
	}
	else
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_20, true);
	}

	while (func_6())
	{
		if (func_7())
			func_4(&uLocal_13);
	
		if (func_8(&uLocal_13))
			func_4(&uLocal_13);
	
		BUILTIN::WAIT(0);
	}

	func_4(&uLocal_13);
	return;
}

int func_1() // Position - 0xB7 Signature - 22 00 02 00 00 5D 17 00 18 27 0E 50
{
	return Global_1572887.f_14;
}

struct<2> func_2(int iParam0) // Position - 0xC5 Signature - 22 01 03 00 00 11
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_3(int iParam0, var uParam1) // Position - 0xD9 Signature - 22 02 04 00 00 66 00 50
{
	return iParam0;
}

void func_4(var uParam0) // Position - 0xE3 Signature - 22 01 03 00 00 66 00 27 05 03
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_5))
		MAP::REMOVE_BLIP(&(uParam0->f_5));

	SCRIPTS::_0xE7282390542F570D(anLocal_21);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_5(var uParam0) // Position - 0x109 Signature - 22 01 04 00 00 2F
{
	int i;

	i = 0;

	for (i = 0; i < 10; i = i + 1)
	{
		if (func_9(uLocal_13.f_1, Global_1915220[i /*4*/].f_1, 1056964608, true))
			return true;
	}

	return false;
}

BOOL func_6() // Position - 0x14B Signature - 22 00 02 00 00 03
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_4(&uLocal_13);
		return false;
	}

	return true;
}

BOOL func_7() // Position - 0x165 Signature - 22 00 02 00 00 5D 17 00 18 27 0E 08
{
	if (Global_1572887.f_14 == -1)
		if (PED::IS_PED_INJURED(Global_33))
			return true;
	else if (Global_1295666.f_7)
		return true;

	return false;
}

BOOL func_8(var uParam0) // Position - 0x196 Signature - 22 01 03 00 00 66 00 39
{
	switch (func_10(uParam0))
	{
		case 0:
			iLocal_22 = func_11();
			func_12(uParam0, 1);
			break;
	
		case 1:
			if (func_13(uParam0))
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_5))
					MAP::REMOVE_BLIP(&(uParam0->f_5));
			
				func_14(uParam0->f_1);
				return true;
			}
			else if (MAP::DOES_BLIP_EXIST(uParam0->f_5))
			{
				func_15(uParam0);
			}
			else
			{
				uParam0->f_5 = MAP::BLIP_ADD_FOR_COORDS(1425226969, uParam0->f_1);
				func_15(uParam0);
			}
			break;
	}

	return false;
}

BOOL func_9(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, BOOL bParam7) // Position - 0x224 Signature - 22 08 0A 00 00 66
{
	if (iParam6 < 0f)
		iParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= iParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= iParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= iParam6)
				return true;

	return false;
}

int func_10(var uParam0) // Position - 0x279 Signature - 22 01 03 00 00 66 00 76
{
	return *uParam0;
}

int func_11() // Position - 0x284 Signature - 22 00 04
{
	int i;
	int num;

	for (i = 0; i < 12; i = i + 1)
	{
		if (func_17(func_16(i), 1))
			num = num + func_18(func_16(i), false, false, false);
	}

	return num;
}

void func_12(var uParam0, int iParam1) // Position - 0x2C1 Signature - 22 02 04 00 00 66 01 66
{
	*uParam0 = iParam1;
	return;
}

BOOL func_13(var uParam0) // Position - 0x2CE Signature - 22 01 03 00 00 86
{
	if (1.4142135f >= BUILTIN::VDIST(uParam0->f_1, Global_34) && iLocal_22 < func_11())
		return true;

	return false;
}

void func_14(var uParam0, var uParam1, var uParam2) // Position - 0x2FF Signature - 22 03 05 00 00 85
{
	Global_1915437 = Global_1915437 % 10;
	Global_1915220[Global_1915437 /*4*/].f_1 = { uParam0 };
	Global_1915437 = Global_1915437 + 1;
	return;
}

void func_15(var uParam0) // Position - 0x32E Signature - 22 01 03 00 00 66 00 27 05 37
{
	MAP::BLIP_ADD_MODIFIER(uParam0->f_5, 287065609);
	return;
}

Hash func_16(int iParam0) // Position - 0x344 Signature - 22 01 03 00 00 66 00 3C 0B
{
	switch (iParam0)
	{
		case 0:
			return joaat("consumable_herb_bay_bolete");
	
		case 1:
			return joaat("consumable_herb_black_berry");
	
		case 2:
			return joaat("consumable_herb_chanterelles");
	
		case 3:
			return joaat("consumable_herb_creeping_thyme");
	
		case 4:
			return joaat("consumable_herb_evergreen_huckleberry");
	
		case 5:
			return joaat("consumable_herb_oregano");
	
		case 6:
			return joaat("consumable_herb_parasol_mushroom");
	
		case 7:
			return joaat("consumable_herb_rams_head");
	
		case 8:
			return joaat("consumable_herb_red_raspberry");
	
		case 9:
			return joaat("consumable_herb_wild_mint");
	
		case 10:
			return joaat("consumable_herb_wintergreen_berry");
	
		default:
		
	}

	return 0;
}

BOOL func_17(Hash hParam0, int iParam1) // Position - 0x3EF Signature - 22 02 05 00 00 66
{
	int num;

	if (!func_19(hParam0, 0))
		return false;

	num = func_20(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_22(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_21(hParam0, 1))
				return false;
			break;
	}

	return func_18(hParam0, false, false, false) >= iParam1;
}

int func_18(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x472 Signature - 22 04 0D
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_19(hParam0, 0))
		return 0;

	num = func_20(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_23(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_24(hParam0, false);
	}

	if (func_25(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_26(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_27(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_26(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_19(Hash hParam0, int iParam1) // Position - 0x534 Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 1F
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_20(Hash hParam0) // Position - 0x54E Signature - 22 01 0A 00 00 66 00 2F 39 34 05 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 16 05 8B 04 00 2F 50 01 01 4B 03 27 02
{
	var unk;

	if (!func_19(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_2;
}

BOOL func_21(Hash hParam0, int iParam1) // Position - 0x579 Signature - 22 02 16
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_19(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_23(hParam0, iParam1);
	unk.f_9 = -1591664384;

	if (func_28("ALL WEAPONS", &num, &num2, -1591664384, false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_29(&unk, i, num, num2))
			{
			}
			else if (!func_30(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_31(num);
				return true;
			}
		}
	
		func_31(num);
	}

	return false;
}

BOOL func_22(Hash hParam0) // Position - 0x61F Signature - 22 01 06
{
	int num;
	int num2;
	int num3;

	if (!func_19(hParam0, 0))
		return false;

	num = func_32(hParam0);

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

	num2 = func_33(hParam0);

	if (!(num2 == 0))
	{
		num3 = func_34(&(Global_17418.f_55.f_664.f_1354.f_5), num2);
	
		if (num3 == -1)
			return true;
	}

	num2 = func_35(hParam0);
	num3 = func_34(&(Global_17418.f_55.f_664.f_1354.f_5), num2);

	if (num3 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num3 /*17*/];
}

Hash func_23(Hash hParam0, int iParam1) // Position - 0x6DB Signature - 22 02 07
{
	int num;
	var unk;
	Hash hash;

	if (!func_19(hParam0, 0))
		return 0;

	num = func_20(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_36(hParam0, 1399091007))
	{
		func_37(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_24(Hash hParam0, BOOL bParam1) // Position - 0x755 Signature - 22 02 18
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_38(hParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };

	if (bParam1)
		func_40(&unk, func_39(false));

	if (!func_41(&unk, &num, &num2, false))
		return 0;

	func_31(num);
	return num2;
}

int func_25(Hash hParam0, int iParam1) // Position - 0x7B4 Signature - 22 02 04 00 00 66 01 2F
{
	if (iParam1 == 0)
		return 0;

	if (func_43(func_42(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, iParam1);
}

int func_26(BOOL bParam0) // Position - 0x7E0 Signature - 22 01 03 00 00 39
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

struct<4> func_27(Hash hParam0, BOOL bParam1) // Position - 0x821 Signature - 22 02 09
{
	var unk;

	unk = { func_44(hParam0, bParam1, 0) };
	return func_45(hParam0, unk, unk.f_4, bParam1);
}

BOOL func_28(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x846 Signature - 22 05 07 00 00 66 04
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_26(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_29(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x86D Signature - 22 04 06 00 00 66 02
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_30(Hash hParam0) // Position - 0x8A8 Signature - 22 01 03 00 00 66 00 03 05 00 2C
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_31(int iParam0) // Position - 0x8C3 Signature - 22 01 03 00 00 66 00 2F
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_32(Hash hParam0) // Position - 0x8E4 Signature - 22 01 0A 00 00 66 00 2F 39 34 05 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 16 05 8B 04 00 2F 50 01 01 4B 03 27 01
{
	var unk;

	if (!func_19(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_1;
}

int func_33(Hash hParam0) // Position - 0x90F Signature - 22 01 03 00 00 66 00 3C 0F
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

int func_34(var uParam0, int iParam1) // Position - 0x9F2 Signature - 22 02 05 00 00 2F
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

int func_35(Hash hParam0) // Position - 0xA2F Signature - 22 01 04 00 00 66 00 39 E4
{
	int num;

	num = func_32(hParam0);

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

BOOL func_36(Hash hParam0, Hash hParam1) // Position - 0xA9C Signature - 22 02 04 00 00 66 00 2F 39
{
	if (!func_19(hParam0, 0))
		return func_46(func_42(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return true;

	return false;
}

void func_37(Hash hParam0, var uParam1, var uParam2) // Position - 0xADD Signature - 22 03 05 00 00 2F
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

struct<18> func_38(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xCE9 Signature - 22 07 1B
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

struct<4> func_39(BOOL bParam0) // Position - 0xDC7 Signature - 22 01 04 00 00 66 00 39 E0 07 00 67 03 66 03 11 15
{
	int num;

	num = func_26(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_45(923904168, func_47(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_45(923904168, func_47(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_45(923904168, func_47(bParam0), -740156546, false);
}

void func_40(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0xE68 Signature - 22 05 07 00 00 4B
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_41(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0xE83 Signature - 22 04 06 00 00 66 03
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_26(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

Hash func_42(Hash hParam0) // Position - 0xEA8 Signature - 22 01 03 00 00 66 00 50
{
	return hParam0;
}

BOOL func_43(Hash hParam0, int iParam1) // Position - 0xEB2 Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 21
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

struct<5> func_44(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xECC Signature - 22 03 2F
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_47(bParam1) };
	unk.f_4 = 1084182731;
	num = func_20(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_52(hParam0, -1823706425))
			{
				unk = { func_45(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_52(hParam0, -1483207246))
			{
				unk = { func_45(joaat("WARDROBE"), unk, 1034665895, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_45(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1311702610))
			{
				unk.f_4 = -1311702610;
			}
			else if (func_52(hParam0, -1653629781))
			{
				unk = { func_45(1384535894, unk, 1784584921, bParam1) };
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
		
			switch (func_32(hParam0))
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
			unk = { func_45(joaat("WARDROBE"), unk, 1034665895, bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_39(bParam1) };
		
			if (iParam2 && func_48(hParam0, true))
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
			
				if (!func_53(unk, &unk28, bParam1, false, -1))
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
			else if (func_52(hParam0, -1653629781))
			{
				unk = { func_45(1384535894, unk, 1784584921, bParam1) };
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

struct<4> func_45(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1240 Signature - 22 07 0D
{
	var outGuid;

	if (!func_19(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_26(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_46(Hash hParam0, Hash hParam1) // Position - 0x1271 Signature - 22 02 04 00 00 66 00 11
{
	if (!func_43(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

struct<4> func_47(BOOL bParam0) // Position - 0x12A7 Signature - 22 01 04 00 00 5D
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_26(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_45(joaat("character"), func_54(), -1591664384, bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_45(joaat("character"), func_54(), -1591664384, false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_45(joaat("character"), func_54(), -1591664384, bParam0);
}

int func_48(Hash hParam0, BOOL bParam1) // Position - 0x1347 Signature - 22 02 04 00 00 66 00 39
{
	if (func_32(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_55();
		else
			return 1;

	return 0;
}

BOOL func_49(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x137E Signature - 22 05 07 00 00 66 00 42
{
	return func_56(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_50(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x1399 Signature - 22 03 09
{
	var unk;

	if (func_57(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_51(BOOL bParam0) // Position - 0x13BA Signature - 22 01 04 00 00 66 00 39 E0 07 00 67 03 66 03 11 0B
{
	int num;

	num = func_26(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_45(271701509, func_47(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_45(271701509, func_47(bParam0), 12999093, false);
}

BOOL func_52(Hash hParam0, int iParam1) // Position - 0x1424 Signature - 22 02 08
{
	Hash hash;
	int num;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || iParam1 == 0)
		return false;

	num = func_32(hParam0);

	if (num == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(num);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(num, i, &hash))
			if (func_58(hParam0, iParam1, hash))
				return true;
	}

	return false;
}

BOOL func_53(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x1491 Signature - 22 08 0A 00 00 4B
{
	return func_59(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

struct<4> func_54() // Position - 0x14A7 Signature - 22 00 06
{
	var unk;

	return unk;
}

int func_55() // Position - 0x14B3 Signature - 22 00 02 00 00 37
{
	if (func_60(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_56(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x14D0 Signature - 22 09
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_19(hParam0, 0))
		return 0;

	if (!bParam7 && func_25(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_45(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_26(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_26(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_57(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x154F Signature - 22 04 07
{
	int inventoryId;

	inventoryId = func_26(false);
	*panParam1 = { func_45(hParam0, func_39(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_58(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x1594 Signature - 22 03 05 00 00 66
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, iParam1, hParam2);
}

BOOL func_59(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x15C7 Signature - 22 05 07 00 00 66 00 03
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_26(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

int func_60(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1601 Signature - 22 04 06 00 00 66 00
{
	if (func_61(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_26(bParam1), hParam0, bParam3);
}

BOOL func_61(Hash hParam0) // Position - 0x1634 Signature - 22 01 03 00 00 66 00 03 05 00 24
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

