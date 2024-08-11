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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 25
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(515))
		func_1(&uLocal_13, 10);
	else
		func_1(&uLocal_13, 0);

	uLocal_13.f_1 = uScriptParam_0.f_2;
	uLocal_13.f_6 = uScriptParam_0.f_4;
	uLocal_13.f_3 = uScriptParam_0;
	uLocal_13.f_4 = uScriptParam_0.f_3;

	while (func_2(&uLocal_13))
	{
		BUILTIN::WAIT(0);
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0, int iParam1) // Position - 0x57 Signature - 22 02 04 00 00 66 01 66
{
	*uParam0 = iParam1;
	uParam0->f_5 = MISC::GET_GAME_TIMER();
	return;
}

BOOL func_2(var uParam0) // Position - 0x6C Signature - 22 01 03 00 00 66 00 39 F9
{
	func_3(uParam0);

	switch (*uParam0)
	{
		case 0:
			func_4(uParam0);
			break;
	
		case 1:
			if (func_5(uParam0->f_5, 4000))
			{
				func_1(uParam0, 9);
				break;
			}
		
			func_6(uParam0);
			break;
	
		case 2:
			if (func_5(uParam0->f_5, 4000))
			{
				func_1(uParam0, 9);
				break;
			}
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
			{
				if (func_10(uParam0->f_1) == 81053684 || func_11(uParam0->f_1, 160827531) && !func_11(uParam0->f_1, -1303648999))
					func_12(uParam0->f_3, uParam0->f_1);
				else
					func_13(uParam0->f_3, uParam0->f_1);
			
				func_1(uParam0, 9);
			}
			break;
	
		case 3:
			if (func_5(uParam0->f_5, 4000))
			{
				func_1(uParam0, 9);
				break;
			}
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
			{
				if (func_10(uParam0->f_1) == 81053684 || func_11(uParam0->f_1, 160827531))
					func_14(uParam0->f_3, uParam0->f_1);
				else
					func_13(uParam0->f_3, uParam0->f_1);
			
				func_1(uParam0, 9);
			}
			break;
	
		case 4:
			PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 37, true);
		
			if (func_5(uParam0->f_5, 4000))
			{
				func_1(uParam0, 9);
				break;
			}
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
			{
				func_7(uParam0->f_3);
				func_1(uParam0, 9);
			}
			break;
	
		case 5:
			PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 37, true);
		
			if (func_5(uParam0->f_5, 4000))
			{
				func_1(uParam0, 9);
				break;
			}
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
			{
				func_8(uParam0->f_3);
				func_1(uParam0, 9);
			}
			break;
	
		case 6:
			PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 37, true);
		
			if (func_5(uParam0->f_5, 4000))
			{
				func_1(uParam0, 9);
				break;
			}
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
			{
				func_9(uParam0->f_3, uParam0->f_1, &(uParam0->f_6));
				func_1(uParam0, 9);
			}
			break;
	
		case 7:
			if (func_5(uParam0->f_5, 4000))
			{
				func_1(uParam0, 9);
				break;
			}
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
			{
				func_9(uParam0->f_3, uParam0->f_2, &(uParam0->f_6));
				uParam0->f_5 = func_15();
				func_1(uParam0, 8);
			}
			break;
	
		case 8:
			if (func_5(uParam0->f_5, 4000))
			{
				func_1(uParam0, 9);
				break;
			}
		
			if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(uParam0->f_3) && !uParam0->f_4)
			{
				if (!ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 108107462))
					break;
			
				break;
			}
		
			if (func_16())
				break;
		
			if (func_17())
			{
				func_18();
				break;
			}
		
			if (Global_33 == uParam0->f_3)
				Global_1953292.f_3503 = 0;
		
			func_19(uParam0->f_1, 0);
			func_1(uParam0, 9);
			break;
	
		case 9:
			if (Global_33 == uParam0->f_3)
				Global_1953292.f_3503 = 0;
		
			func_1(uParam0, 10);
			break;
	
		case 10:
			return false;
	}

	return true;
}

void func_3(var uParam0) // Position - 0x3F9 Signature - 22 01 03 00 00 66 00 39 C0
{
	if (func_20(uParam0) == 10)
		return;

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		if (Global_33 == uParam0->f_3)
		{
			uParam0->f_4 = 1;
			return;
		}
		else
		{
			uParam0->f_4 = 1;
			return;
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		func_1(uParam0, 10);
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (Global_33 == uParam0->f_3)
		{
			func_1(uParam0, 9);
			return;
		}
		else
		{
			func_1(uParam0, 10);
			return;
		}
	}

	return;
}

void func_4(var uParam0) // Position - 0x478 Signature - 22 01 03 00 00 66 00 27
{
	if (PED::IS_PED_A_PLAYER(uParam0->f_3))
	{
		if (Global_33 == uParam0->f_3)
		{
			if (Global_1953292.f_3503)
			{
				func_1(uParam0, 10);
			}
			else
			{
				Global_1953292.f_3503 = 1;
				func_1(uParam0, 1);
			}
		}
		else
		{
			func_1(uParam0, 1);
		}
	}
	else
	{
		func_1(uParam0, 10);
	}

	return;
}

BOOL func_5(var uParam0, int iParam1) // Position - 0x4CE Signature - 22 02 04 00 00 03
{
	if (MISC::ABSI(MISC::GET_GAME_TIMER() - uParam0) >= iParam1)
		return true;

	return false;
}

void func_6(var uParam0) // Position - 0x4EE Signature - 22 01 0A 00 00 66 00 27
{
	var unk;
	var unk2;
	BOOL flag;
	BOOL flag2;
	int num;
	BOOL flag3;
	int num2;

	if (!func_21(uParam0->f_1))
	{
		func_1(uParam0, 10);
		return;
	}

	flag = false;
	flag2 = true;

	if (func_22(&unk))
	{
		if (uParam0->f_1 == unk)
		{
			flag = true;
			flag2 = true;
		}
		else
		{
			uParam0->f_2 = unk;
			flag2 = false;
		}
	}

	num = func_10(uParam0->f_1);
	flag3 = func_23(&unk2);

	if (flag2)
	{
		num2 = func_24(uParam0->f_1);
	
		if (num2 != -358215195 && func_25(uParam0->f_6, 1))
		{
			func_1(uParam0, 6);
		}
		else if (flag)
		{
			if (flag3)
				if (num == 81053684 || func_11(uParam0->f_1, 160827531) && !func_11(uParam0->f_1, -1303648999))
					func_1(uParam0, 4);
				else
					func_1(uParam0, 6);
			else
				func_1(uParam0, 5);
		}
		else if (num == 81053684 || func_11(uParam0->f_1, 160827531) && func_25(uParam0->f_6, 2) && !func_11(uParam0->f_1, -1303648999))
		{
			func_1(uParam0, 2);
			func_26(&(uParam0->f_6), 2);
		}
		else
		{
			func_1(uParam0, 3);
		}
	}
	else
	{
		func_1(uParam0, 7);
	}

	return;
}

void func_7(Ped pedParam0) // Position - 0x637 Signature - 22 01 04 00 00 4B
{
	Hash hash;

	if (!func_23(&hash))
		return;

	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedParam0, false, false);
	PED::_0xC494C76A34266E82(pedParam0, 13);
	func_27(hash, 2);
	func_28(23, 0, 0, 0, false);
	return;
}

void func_8(Ped pedParam0) // Position - 0x66D Signature - 22 01 05
{
	Hash hash;
	var unk;

	if (!func_22(&hash))
		return;

	if (func_23(&unk))
		return;

	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedParam0, false, false);
	PED::_0xC494C76A34266E82(pedParam0, 0);

	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_EQUIPPED_MASK"), pedParam0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 1127481344, false, false, -1, -1) > 0)
	{
	}

	func_27(hash, 1);
	func_28(23, 0, 0, 0, false);
	return;
}

int func_9(Ped pedParam0, Hash hParam1, var uParam2) // Position - 0x6E2 Signature - 22 03 05 00 00 66 01
{
	if (!func_21(hParam1))
		return 0;

	if (!func_29(hParam1))
		return 0;

	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedParam0, false, false);
	PED::_0xC494C76A34266E82(pedParam0, 13);
	func_26(uParam2, 1);
	func_27(hParam1, 8);
	func_28(23, 0, 0, 0, false);
	return 1;
}

int func_10(Hash hParam0) // Position - 0x730 Signature - 22 01 0A 00 00 66 00 2F 39 14 0E 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 27 05 8B 04 00 2F 50 01 01 4B 03 27 01
{
	var unk;

	if (!func_30(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_1;
}

BOOL func_11(Hash hParam0, Hash hParam1) // Position - 0x75B Signature - 22 02 04 00 00 66 00 2F 39
{
	if (!func_30(hParam0, 0))
		return func_32(func_31(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return true;

	return false;
}

void func_12(Ped pedParam0, Hash hParam1) // Position - 0x79C Signature - 22 02 04 00 00 66 01 39 30 07 00 37 F4 C7 D4 04 1C 6A 8B 0D 00 66 01 37 8B 08 96 09 39 5B 07 00 05 69 8B 03 00 50 02 00 66 00 2F 2F 03 0C 00 2B 66 01
{
	if (func_10(hParam1) != 81053684 && !func_11(hParam1, 160827531))
		return;

	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedParam0, false, false);
	func_27(hParam1, 2);
	func_28(23, 0, 0, 0, false);
	return;
}

void func_13(Ped pedParam0, Hash hParam1) // Position - 0x7E0 Signature - 22 02 04 00 00 66 01 39 30 07 00 37 D8
{
	if (func_10(hParam1) != -525676072 && !func_11(hParam1, -1303648999))
		return;

	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedParam0, false, false);
	PED::_0xC494C76A34266E82(pedParam0, 0);

	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_EQUIPPED_MASK"), pedParam0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 1127481344, false, false, -1, -1) > 0)
	{
	}

	func_27(hParam1, 1);
	func_28(23, 0, 0, 0, false);
	return;
}

void func_14(Ped pedParam0, Hash hParam1) // Position - 0x85F Signature - 22 02 04 00 00 66 01 39 30 07 00 37 F4 C7 D4 04 1C 6A 8B 0D 00 66 01 37 8B 08 96 09 39 5B 07 00 05 69 8B 03 00 50 02 00 66 00 2F 2F 03 0C 00 2B 66 00
{
	if (func_10(hParam1) != 81053684 && !func_11(hParam1, 160827531))
		return;

	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedParam0, false, false);
	PED::_0xC494C76A34266E82(pedParam0, 0);

	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_EQUIPPED_MASK"), pedParam0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 1127481344, false, false, -1, -1) > 0)
	{
	}

	func_27(hParam1, 1);
	func_28(23, 0, 0, 0, false);
	return;
}

int func_15() // Position - 0x8DE Signature - 22 00 03 00 00 03
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

BOOL func_16() // Position - 0x8FC Signature - 22 00 03 00 00 6D
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

BOOL func_17() // Position - 0x992 Signature - 22 00 03 00 00 2F
{
	int num;

	num = 0;

	if (func_33(81053684, &num))
		return true;

	if (func_33(-525676072, &num))
		return true;

	return false;
}

void func_18() // Position - 0x9C2 Signature - 22 00 02 00 00 39
{
	if (!func_17())
		return;

	func_34();
	return;
}

int func_19(Hash hParam0, int iParam1) // Position - 0x9D9 Signature - 22 02 08 00 00 66 00 39
{
	Hash interactionAnimHash;
	BOOL flag;
	Hash hash;
	BOOL flag2;

	flag2 = func_29(hParam0);

	if (func_10(hParam0) == -525676072 || func_11(hParam0, -1303648999))
		flag = true;

	if (flag2)
		if (func_23(&hash))
			if (flag)
				interactionAnimHash = func_35();
			else
				interactionAnimHash = func_36();
		else if (flag)
			interactionAnimHash = func_37();
		else
			interactionAnimHash = func_38();
	else if (func_22(&hash))
		if (func_11(hash, -1303648999) || func_10(hash) == -525676072)
			interactionAnimHash = func_35();
		else
			interactionAnimHash = func_36();
	else if (flag)
		interactionAnimHash = func_37();
	else
		interactionAnimHash = func_38();

	if (interactionAnimHash != 0)
	{
		Global_1953292.f_3501 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_33, hParam0, interactionAnimHash, 1, iParam1, -1082130432);
		return 1;
	}

	return 0;
}

int func_20(var uParam0) // Position - 0xAC0 Signature - 22 01 03 00 00 66 00 76
{
	return *uParam0;
}

BOOL func_21(Hash hParam0) // Position - 0xACB Signature - 22 01 03 00 00 66 00 39 BF
{
	return func_39(hParam0);
}

BOOL func_22(var uParam0) // Position - 0xAD9 Signature - 22 01 03 00 00 37 F4
{
	if (func_33(81053684, uParam0))
		return true;

	if (func_33(-525676072, uParam0))
		return true;

	return false;
}

BOOL func_23(var uParam0) // Position - 0xB06 Signature - 22 01 03 00 00 37 1A
{
	if (-1829635046 == func_40(81053684))
		if (func_22(uParam0))
			return 1;
	else if (func_33(-525676072, uParam0) || func_11(func_41(1742327865), -1303648999))
		if (func_22(uParam0))
			return 1;

	return 0;
}

int func_24(Hash hParam0) // Position - 0xB63 Signature - 22 01 08
{
	var unk;

	unk = { func_42(hParam0, true, 0) };
	return func_43(unk.f_4);
}

BOOL func_25(int iParam0, int iParam1) // Position - 0xB7F Signature - 22 02 04 00 00 66 00 66 01 69
{
	return iParam0 && iParam1 != false;
}

void func_26(var uParam0, int iParam1) // Position - 0xB8E Signature - 22 02 04 00 00 66 00 66 01 39
{
	func_44(uParam0, iParam1);
	return;
}

void func_27(Hash hParam0, int iParam1) // Position - 0xB9E Signature - 22 02 09
{
	var unk;
	int num;
	int num2;
	int num3;
	var unk2;

	num = func_24(hParam0);
	num2 = func_45(num, 1);

	if (num2 == 39)
		return;

	if (func_46(hParam0) && func_47(hParam0))
		iParam1 = iParam1 | 64;

	if (num == 1108822547 && func_48(32768) || hParam0 != Global_1953292.f_1676.f_1[num2 /*3*/])
	{
		if (func_46(Global_1953292.f_1676.f_1[num2 /*3*/]) && func_47(Global_1953292.f_1676.f_1[num2 /*3*/]))
			iParam1 = iParam1 | 32;
	
		if (Global_1953292.f_83[num2 /*12*/].f_1 > 1)
			iParam1 = iParam1 | 16;
	
		num3 = 0;
	
		switch (func_10(hParam0))
		{
			case -525676072:
				if (func_48(32768))
					func_51(func_50(num2, 1));
			
				if (func_33(81053684, &unk2))
				{
					num3 = func_45(func_49(81053684), 1);
				
					if (num3 == 39)
						break;
				
					Global_1953292.f_2686[num3 /*2*/] = Global_1953292.f_83[num3 /*12*/];
				}
				break;
		
			case 81053684:
				if (func_33(-525676072, &unk))
				{
					num3 = func_45(func_49(-525676072), 1);
				
					if (num3 == 39)
						break;
				
					Global_1953292.f_2686[num3 /*2*/] = Global_1953292.f_83[num3 /*12*/];
				}
			
				if (func_11(hParam0, -180472385) && func_33(1024667707, &unk))
				{
					num3 = func_45(func_49(1024667707), 1);
				
					if (num3 == 39)
						break;
				
					Global_1953292.f_2686[num3 /*2*/] = Global_1953292.f_83[num3 /*12*/];
				}
				break;
		
			default:
				if (!func_11(hParam0, 160827531))
					break;
			
				if (func_33(-525676072, &unk))
				{
					num3 = func_45(func_49(-525676072), 1);
				
					if (num3 == 39)
						break;
				
					Global_1953292.f_2686[num3 /*2*/] = Global_1953292.f_83[num3 /*12*/];
				}
				break;
		}
	}

	Global_1953292.f_2686[num2 /*2*/] = hParam0;
	func_52(num, iParam1, 6);
	return;
}

void func_28(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0xDB8 Signature - 22 05 0B
{
	int num;

	if (bParam4)
		func_53(16384);

	num = iParam0;
	num.f_1 = iParam1;
	num.f_2 = iParam2;
	num.f_3 = iParam3;
	func_54(num);
	return;
}

BOOL func_29(Hash hParam0) // Position - 0xDEA Signature - 22 01 04 00 00 66 00 2F 15
{
	Hash hash;

	if (hParam0 == 0)
		return false;

	hash = 0;

	if (func_22(&hash))
		if (hParam0 == hash)
			return true;

	return false;
}

BOOL func_30(Hash hParam0, int iParam1) // Position - 0xE14 Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 34
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

Hash func_31(Hash hParam0) // Position - 0xE2E Signature - 22 01 03 00 00 66 00 50
{
	return hParam0;
}

BOOL func_32(Hash hParam0, Hash hParam1) // Position - 0xE38 Signature - 22 02 04 00 00 66 00 11
{
	if (!func_55(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

BOOL func_33(int iParam0, var uParam1) // Position - 0xE6E Signature - 22 02 06
{
	Hash hash;
	int num;

	num = func_45(func_49(iParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1953292.f_1676.f_1[num /*3*/] != 0 && Global_1953292.f_1676.f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = Global_1953292.f_1676.f_1[num /*3*/];
	
		if (func_10(hash) == iParam0 || iParam0 == 81053684 && func_11(hash, 160827531))
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

void func_34() // Position - 0xF04 Signature - 22 00 04 00 00 2F
{
	BOOL flag;
	Hash hash;

	flag = false;

	if (func_33(81053684, &hash))
	{
		if (func_39(hash))
		{
			func_56(81053684);
			flag = true;
		}
	}

	if (func_33(-525676072, &hash))
	{
		if (func_39(hash))
		{
			func_56(-525676072);
			flag = true;
		}
	}

	if (flag)
		PED::_0xC494C76A34266E82(Global_33, 13);

	return;
}

Hash func_35() // Position - 0xF63 Signature - 22 00 03 00 00 37 3A
{
	int num;

	num = joaat("mask_off_left_hand");

	switch (func_57())
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

Hash func_36() // Position - 0xFBA Signature - 22 00 03 00 00 37 10
{
	int num;

	num = joaat("bandana_off_left_hand");

	switch (func_57())
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

Hash func_37() // Position - 0x1011 Signature - 22 00 03 00 00 37 3E
{
	int num;

	num = joaat("mask_on_left_hand");

	switch (func_57())
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

Hash func_38() // Position - 0x1068 Signature - 22 00 03 00 00 37 BC
{
	int num;

	num = joaat("bandana_on_left_hand");

	switch (func_57())
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

BOOL func_39(Hash hParam0) // Position - 0x10BF Signature - 22 01 04 00 00 66 00 39 30
{
	int num;

	num = func_10(hParam0);

	if (num == 81053684 || num == -525676072 || func_11(hParam0, 160827531) || func_11(hParam0, -1303648999))
		return 1;

	return 0;
}

int func_40(int iParam0) // Position - 0x110F Signature - 22 01 04 00 00 66 00 39 7B 17 00 09 39 1C 15 00 67 03 66 03 6D 27 72
{
	int num;

	num = func_45(func_49(iParam0), 1);

	if (num != 39)
		return Global_1953292.f_1676.f_1[num /*3*/].f_1;

	return 0;
}

Hash func_41(int iParam0) // Position - 0x113E Signature - 22 01 03 00 00 66 00 09
{
	return Global_1953292.f_1676.f_1[func_45(iParam0, 1) /*3*/];
}

struct<5> func_42(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x1158 Signature - 22 03 2F
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_58(bParam1) };
	unk.f_4 = 1084182731;
	num = func_59(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_66(hParam0, -1823706425))
			{
				unk = { func_60(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_66(hParam0, -1483207246))
			{
				unk = { func_60(joaat("WARDROBE"), unk, 1034665895, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_60(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1311702610))
			{
				unk.f_4 = -1311702610;
			}
			else if (func_66(hParam0, -1653629781))
			{
				unk = { func_60(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -1591664384;
			unk = { func_65(bParam1) };
		
			switch (func_10(hParam0))
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
			unk = { func_60(joaat("WARDROBE"), unk, 1034665895, bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_61(bParam1) };
		
			if (iParam2 && func_62(hParam0, true))
			{
				unk6.f_9 = -1591664384;
			
				if (!func_63(hParam0, &unk, 1728382685, false, false))
					unk.f_4 = 1728382685;
				else if (!func_63(hParam0, &unk, -649335959, false, false))
					unk.f_4 = -649335959;
				else if (func_64(hParam0, &unk6, 1728382685))
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
			
				if (!func_67(unk, &unk28, bParam1, false, -1))
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
			else if (func_66(hParam0, -1653629781))
			{
				unk = { func_60(1384535894, unk, 1784584921, bParam1) };
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

int func_43(var uParam0) // Position - 0x14CC Signature - 22 01 04 00 00 2F
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1953292.f_83[i /*12*/].f_9 == uParam0)
			return func_50(i, 1);
	}

	return -358215195;
}

void func_44(var uParam0, int iParam1) // Position - 0x1507 Signature - 22 02 04 00 00 66 00 76
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_45(int iParam0, int iParam1) // Position - 0x151C Signature - 22 02 04 00 00 66 00 3C 28 00 ED
{
	switch (iParam0)
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

int func_46(Hash hParam0) // Position - 0x16ED Signature - 22 01 03 00 00 66 00 39 30
{
	switch (func_10(hParam0))
	{
		case -2061583405:
			return 1;
	
		case -1719060085:
			return 1;
	
		case -999503751:
			return 1;
	
		case -525676072:
			return 1;
	
		case 81053684:
			return 1;
	
		case 119907797:
			return 1;
	
		case 1388798186:
			return 1;
	
		default:
		
	}

	if (func_11(hParam0, 160827531))
		return 1;

	return 0;
}

int func_47(Hash hParam0) // Position - 0x175A Signature - 22 01 04 00 00 66 00 4B
{
	var unk;

	return func_68(hParam0, &unk);
}

BOOL func_48(int iParam0) // Position - 0x176A Signature - 22 01 03 00 00 85 0C CE 1D 66 00 69
{
	return Global_1953292 && iParam0 != false;
}

int func_49(int iParam0) // Position - 0x177B Signature - 22 01 04 00 00 66 00 2F 4B
{
	var unk;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &unk))
		return -358215195;

	return func_43(unk);
}

int func_50(int iParam0, int iParam1) // Position - 0x179E Signature - 22 02 04 00 00 66 00 3C 28 00 00
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

void func_51(int iParam0) // Position - 0x19ED Signature - 22 01 03 00 00 66 00 6D
{
	func_69(iParam0, 8, 6);
	return;
}

void func_52(int iParam0, int iParam1, int iParam2) // Position - 0x19FE Signature - 22 03 05 00 00 66 00 09 39 1C 15 00 5D 0C CE 1D 18
{
	Global_1953292.f_2686[func_45(iParam0, 1) /*2*/].f_1 = Global_1953292.f_2686[func_45(iParam0, 1) /*2*/].f_1 || iParam1;
	return;
}

void func_53(BOOL bParam0) // Position - 0x1A2D Signature - 22 01 03 00 00 85 0C CE 1D 66 00 30
{
	Global_1953292 = Global_1953292 || bParam0;
	return;
}

void func_54(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1A40 Signature - 22 04 08
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
		
			if (func_70(iParam0))
			{
				for (i = 0; i < Global_1953292.f_918; i = i + 1)
				{
					num = (Global_1953292.f_923 + i) % 25;
				
					if (Global_1953292.f_736[num /*4*/] == iParam0 && Global_1953292.f_736[num /*4*/].f_1 == iParam0.f_1 && Global_1953292.f_736[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_71(iParam0);
			Global_1953292.f_736[Global_1953292.f_924 /*4*/] = { iParam0 };
			Global_1953292.f_918 = Global_1953292.f_918 + 1;
			Global_1953292.f_924 = (Global_1953292.f_924 + 1) % 25;
			func_53(8);
			break;
	
		case 24:
		case 25:
			if (Global_1953292.f_919 >= 25)
				return;
		
			if (func_70(iParam0))
				return;
		
			func_71(iParam0);
			Global_1953292.f_635[Global_1953292.f_919 /*4*/] = { iParam0 };
			Global_1953292.f_919 = Global_1953292.f_919 + 1;
			func_53(8);
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
		
			if (func_70(iParam0))
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
		
			func_71(iParam0);
			Global_1953292.f_837[Global_1953292.f_922 /*4*/] = { iParam0 };
			Global_1953292.f_920 = Global_1953292.f_920 + 1;
			Global_1953292.f_922 = (Global_1953292.f_922 + 1) % 20;
			func_53(8);
			break;
	}

	return;
}

BOOL func_55(Hash hParam0, int iParam1) // Position - 0x1D3C Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 10
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

void func_56(int iParam0) // Position - 0x1D56 Signature - 22 01 04 00 00 66 00 39 7B 17 00 09 39 1C 15 00 67 03 66 03 6D 27 15
{
	int num;

	num = func_45(func_49(iParam0), 1);

	if (num == 39)
		return;

	func_27(Global_1953292.f_83[num /*12*/], 8);
	func_28(23, 0, 0, 0, false);
	return;
}

int func_57() // Position - 0x1D8F Signature - 22 00 04 00 00 70
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
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) && !func_72(weaponHash) && !PED::IS_PED_FULLY_ON_MOUNT(Global_33, true) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_33, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
			return 3;
		else if (WEAPON::_IS_WEAPON_BINOCULARS(weaponHash))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && func_72(weaponHash) || WEAPON::_IS_WEAPON_LASSO(weaponHash))
			return 1;
		else
			return 0;
	else if (weaponHash == joaat("WEAPON_UNARMED"))
		return 1;
	else
		return 0;

	return 0;
}

struct<4> func_58(BOOL bParam0) // Position - 0x1E82 Signature - 22 01 04 00 00 5D
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_73(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_60(joaat("character"), func_74(), -1591664384, bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_60(joaat("character"), func_74(), -1591664384, false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_60(joaat("character"), func_74(), -1591664384, bParam0);
}

int func_59(Hash hParam0) // Position - 0x1F22 Signature - 22 01 0A 00 00 66 00 2F 39 14 0E 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 27 05 8B 04 00 2F 50 01 01 4B 03 27 02
{
	var unk;

	if (!func_30(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_2;
}

struct<4> func_60(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1F4D Signature - 22 07
{
	var outGuid;

	if (!func_30(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_73(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

struct<4> func_61(BOOL bParam0) // Position - 0x1F7E Signature - 22 01 04 00 00 66 00 39 41 22 00 67 03 66 03 11 15
{
	int num;

	num = func_73(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_60(923904168, func_58(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_60(923904168, func_58(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_60(923904168, func_58(bParam0), -740156546, false);
}

int func_62(Hash hParam0, BOOL bParam1) // Position - 0x201F Signature - 22 02 04 00 00 66 00 39
{
	if (func_10(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_75();
		else
			return 1;

	return 0;
}

BOOL func_63(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2056 Signature - 22 05 07 00 00 66 00 42
{
	return func_76(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_64(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x2071 Signature - 22 03 09
{
	var unk;

	if (func_77(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_65(BOOL bParam0) // Position - 0x2092 Signature - 22 01 04 00 00 66 00 39 41 22 00 67 03 66 03 11 0B
{
	int num;

	num = func_73(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_60(271701509, func_58(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_60(271701509, func_58(bParam0), 12999093, false);
}

BOOL func_66(Hash hParam0, int iParam1) // Position - 0x20FC Signature - 22 02 08 00 00 66 00 2F
{
	Hash hash;
	int num;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || iParam1 == 0)
		return false;

	num = func_10(hParam0);

	if (num == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(num);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(num, i, &hash))
			if (func_78(hParam0, iParam1, hash))
				return true;
	}

	return false;
}

BOOL func_67(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x2169 Signature - 22 08
{
	return func_79(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

int func_68(Hash hParam0, var uParam1) // Position - 0x217F Signature - 22 02 04 00 00 2F
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

void func_69(int iParam0, int iParam1, int iParam2) // Position - 0x21BF Signature - 22 03 05 00 00 66 00 09 39 1C 15 00 5D 0C CE 1D 80
{
	Global_1953292.f_83[func_45(iParam0, 1) /*12*/].f_11 = Global_1953292.f_83[func_45(iParam0, 1) /*12*/].f_11 - Global_1953292.f_83[func_45(iParam0, 1) /*12*/].f_11 && iParam1;
	return;
}

BOOL func_70(int iParam0) // Position - 0x21FE Signature - 22 01 03 00 00 66 00 5D 0C CE 1D 18 53 02 17 01 2F
{
	return Global_1953292.f_595[iParam0] > 0;
}

void func_71(int iParam0) // Position - 0x2213 Signature - 22 01 03 00 00 66 00 5D 0C CE 1D 18 53 02 17 01 5C
{
	Global_1953292.f_595[iParam0] = Global_1953292.f_595[iParam0] + 1;
	return;
}

BOOL func_72(Hash hParam0) // Position - 0x2233 Signature - 22 01 03 00 00 66 00 03 05 00 0D
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

int func_73(BOOL bParam0) // Position - 0x2241 Signature - 22 01 03 00 00 39
{
	if (func_80() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_74() // Position - 0x2282 Signature - 22 00 06
{
	var unk;

	return unk;
}

int func_75() // Position - 0x228E Signature - 22 00 02 00 00 37
{
	if (func_81(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_76(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x22AB Signature - 22 09
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_30(hParam0, 0))
		return 0;

	if (!bParam7 && func_82(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_60(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_73(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_73(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_77(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x232A Signature - 22 04 07
{
	int inventoryId;

	inventoryId = func_73(false);
	*panParam1 = { func_60(hParam0, func_61(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_78(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x236F Signature - 22 03 05 00 00 66 02
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, iParam1, hParam2);
}

BOOL func_79(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x23A2 Signature - 22 05 07 00 00 66 00 03
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_73(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

int func_80() // Position - 0x23DC Signature - 22 00 02 00 00 5D
{
	return Global_1572887.f_14;
}

int func_81(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x23EA Signature - 22 04 06
{
	if (func_83(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_73(bParam1), hParam0, bParam3);
}

int func_82(Hash hParam0, int iParam1) // Position - 0x241D Signature - 22 02 04 00 00 66 01 2F
{
	if (iParam1 == 0)
		return 0;

	if (func_55(func_31(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, iParam1);
}

BOOL func_83(Hash hParam0) // Position - 0x2449 Signature - 22 01 03 00 00 66 00 03 05 00 1F
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

