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
	var uLocal_21 = -1;
	var uLocal_22 = -1;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = -1;
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 48
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();
	func_2(&uLocal_19, &uScriptParam_0);

	while (!func_3(true, true) && func_4(&uLocal_19))
	{
		BUILTIN::WAIT(0);
	}

	func_5(&uLocal_19);
	return;
}

void func_1() // Position - 0x3D Signature - 22 00 02 00 00 03
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	BRAIN::_0x4AA5EA1EDFB25786(0);
	BRAIN::_0xA6AC35DB4A7957A8(99999);
	return;
}

void func_2(var uParam0, var uParam1) // Position - 0x5B Signature - 22 02 04 00 00 66 01
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = { uParam1->f_2 };
	uParam0->f_6 = BRAIN::_GET_SCRIPT_BRAIN_ENTITY();
	return;
}

BOOL func_3(BOOL bParam0, BOOL bParam1) // Position - 0x85 Signature - 22 02 05 00 00 5D
{
	int i;

	if (Global_1572887.f_13)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::NETWORK_SESSION_IS_TRANSITIONING())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				return true;
		
			case 1:
				return true;
		
			case 2:
				if (!bParam0)
					return true;
				break;
		
			case 3:
				return true;
		
			case 4:
				return true;
		
			default:
				return true;
		}
	}

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i) == 1976253964)
			return true;
	}

	return false;
}

BOOL func_4(var uParam0) // Position - 0x165 Signature - 22 01 03 00 00 66 00 39 FF
{
	if (func_6(uParam0))
		return false;

	if (func_7(uParam0))
	{
		func_8(uParam0->f_6);
		return true;
	}

	if (func_9(uParam0))
	{
		func_10(uParam0->f_6);
		return true;
	}

	func_11(uParam0);
	func_12(uParam0);

	if (func_13(*uParam0))
		func_14(uParam0);
	else if (func_15(*uParam0))
		func_16(uParam0);

	return true;
}

void func_5(var uParam0) // Position - 0x1D6 Signature - 22 01 03 00 00 66 00 80
{
	func_17(&(uParam0->f_11), true, true);

	if (MAP::DOES_BLIP_EXIST(uParam0->f_7))
		MAP::REMOVE_BLIP(&(uParam0->f_7));

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_6(var uParam0) // Position - 0x1FF Signature - 22 01 03 00 00 66 00 27 06 03 05 00 13 05
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
		return true;

	return false;
}

BOOL func_7(var uParam0) // Position - 0x218 Signature - 22 01 03 00 00 66 00 09 39
{
	if (func_18(uParam0, 1))
		return true;
	else if (func_19() != 0)
		return true;
	else if (Global_1048576 || Global_2883584)
		return true;
	else if (Global_1048577)
		return true;
	else if (func_21(func_20(0)) == 7)
		return true;

	return false;
}

int func_8(Entity eParam0) // Position - 0x278 Signature - 22 01 03 00 00 66 00 03 05 00 13 6A 8B 07 00 66 00 03 05 00 41 69 8B 0A 00 4B 00 03 04 00 2F
{
	if (ENTITY::DOES_ENTITY_EXIST(eParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eParam0))
	{
		ENTITY::DELETE_ENTITY(&eParam0);
		return 1;
	}

	return 0;
}

BOOL func_9(var uParam0) // Position - 0x29F Signature - 22 01 03 00 00 66 00 76 39
{
	if (func_13(*uParam0))
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
			return true;
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), false, false))
			return true;
	else if (func_15(*uParam0))
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
			return true;

	return false;
}

int func_10(Entity eParam0) // Position - 0x2F6 Signature - 22 01 03 00 00 66 00 03 05 00 13 6A 8B 07 00 66 00 03 05 00 41 69 8B 0A 00 4B 00 03 04 00 42
{
	if (ENTITY::DOES_ENTITY_EXIST(eParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eParam0))
	{
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&eParam0);
		return 1;
	}

	return 0;
}

void func_11(var uParam0) // Position - 0x31D Signature - 22 01 0C
{
	int i;
	struct<4> eventData;
	var unk4;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i) == -507840394)
		{
			eventData = { unk4 };
			SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, i, &eventData, 4);
		
			if (eventData == 18)
				func_22(uParam0, i);
		}
	}

	return;
}

void func_12(var uParam0) // Position - 0x36C Signature - 22 01 04 00 00 66 00 80
{
	int num;

	if (!func_23(&(uParam0->f_8)))
		func_24(&(uParam0->f_8));

	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_6))
	{
		if (func_25(&(uParam0->f_8)) > 7000)
		{
			if (!func_26(uParam0))
			{
				func_27(uParam0->f_6, NETWORK::GET_NETWORK_TIME_ACCURATE());
			}
			else
			{
				num = func_28(uParam0->f_6);
			
				if (uParam0->f_5 != num)
					uParam0->f_5 = num;
				else
					func_29(uParam0, 1);
			}
		
			func_30(&(uParam0->f_8));
		}
	}
	else if (func_25(&(uParam0->f_8)) > 3000)
	{
		if (!func_26(uParam0))
			func_31(uParam0->f_6, NETWORK::GET_NETWORK_TIME_ACCURATE());
	
		func_30(&(uParam0->f_8));
	}

	return;
}

BOOL func_13(int iParam0) // Position - 0x415 Signature - 22 01 03 00 00 66 00 09 7E
{
	return iParam0 >= 1 && iParam0 <= 1;
}

void func_14(var uParam0) // Position - 0x42A Signature - 22 01 03 00 00 66 00 39 5C
{
	func_32(uParam0);
	func_33(uParam0);
	return;
}

BOOL func_15(int iParam0) // Position - 0x43E Signature - 22 01 03 00 00 66 00 11 7E
{
	return iParam0 >= 2 && iParam0 <= 2;
}

void func_16(var uParam0) // Position - 0x453 Signature - 22 01 03 00 00 66 00 39 6D
{
	func_34(uParam0);
	func_35(uParam0);
	return;
}

void func_17(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x467 Signature - 22 03 06
{
	int num;

	if (bParam1 && !func_36(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_37(*uParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_38(num);
	*uParam0 = 0;
	return;
}

BOOL func_18(var uParam0, int iParam1) // Position - 0x4BB Signature - 22 02 04 00 00 66 00 27
{
	return func_39(uParam0->f_4, iParam1);
}

int func_19() // Position - 0x4CD Signature - 22 00 02 00 00 5D 17
{
	return Global_1572887.f_14;
}

struct<2> func_20(int iParam0) // Position - 0x4DB Signature - 22 01 03 00 00 11
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_21(int iParam0, var uParam1) // Position - 0x4EF Signature - 22 02 04 00 00 66 00 50
{
	return iParam0;
}

void func_22(var uParam0, int iParam1) // Position - 0x4F9 Signature - 22 02 10 00 00 09
{
	struct<12> eventData;

	if (SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam1, &eventData, 12))
	{
		if (eventData.f_5 == *uParam0 && eventData.f_6 == uParam0->f_1)
		{
			switch (eventData.f_4)
			{
				case 0:
					func_40(uParam0->f_6, eventData.f_9);
					break;
			
				case 1:
					func_41(uParam0->f_6, eventData.f_9);
					break;
			
				case 2:
					func_27(uParam0->f_6, eventData.f_10);
					break;
			
				case 3:
					func_42(uParam0->f_6, eventData.f_10);
					break;
			
				case 4:
					func_43(uParam0->f_6, eventData.f_8);
					break;
			
				case 5:
					func_8(uParam0->f_6);
					break;
			
				case 6:
					func_10(uParam0->f_6);
					break;
			}
		}
	}

	return;
}

BOOL func_23(var uParam0) // Position - 0x5C4 Signature - 22 01 03 00 00 66 00 76 09 39
{
	return func_44(*uParam0, 1);
}

void func_24(var uParam0) // Position - 0x5D4 Signature - 22 01 03 00 00 66 00 2F 39
{
	func_45(uParam0, 0);
	return;
}

int func_25(var uParam0) // Position - 0x5E3 Signature - 22 01 03 00 00 66 00 39 C4
{
	if (!func_23(uParam0))
		return 0;

	if (func_46(uParam0))
		return uParam0->f_2;

	return func_47(uParam0->f_1);
}

BOOL func_26(var uParam0) // Position - 0x614 Signature - 22 01 03 00 00 66 00 11 39 BB
{
	if (func_18(uParam0, 2) || func_18(uParam0, 4))
		return false;

	if (BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false)) < func_48(*uParam0))
		return false;

	if (func_49(uParam0->f_2) && func_50(uParam0->f_2) || func_51(uParam0->f_2))
		return false;

	return true;
}

BOOL func_27(Entity eParam0, int iParam1) // Position - 0x68A Signature - 22 02 04 00 00 66 00 03 05 00 13 6A 8B 07 00 66 00 03 05 00 41 69 8B 1C 00 66 00 39 C3
{
	if (ENTITY::DOES_ENTITY_EXIST(eParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eParam0))
	{
		if (func_28(eParam0) != iParam1)
			DECORATOR::DECOR_SET_INT(eParam0, func_52(), iParam1);
	
		return true;
	}

	return false;
}

int func_28(Entity eParam0) // Position - 0x6C3 Signature - 22 01 03 00 00 66 00 03 05 00 13 05 6A 05 8B 0C 00 66 00 39 6C
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0) || !DECORATOR::DECOR_EXIST_ON(eParam0, func_52()))
		return 0;

	return DECORATOR::DECOR_GET_INT(eParam0, func_52());
}

void func_29(var uParam0, int iParam1) // Position - 0x6F4 Signature - 22 02 04 00 00 66 00 80 04 66 01 39 76
{
	func_53(&(uParam0->f_4), iParam1);
	return;
}

void func_30(var uParam0) // Position - 0x706 Signature - 22 01 03 00 00 2F 66 00 6C
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
	return;
}

void func_31(Entity eParam0, int iParam1) // Position - 0x71C Signature - 22 02 10 00 00 66
{
	var unk;

	if (!func_27(eParam0, iParam1))
	{
		unk.f_4 = 2;
		unk.f_5 = func_54(eParam0);
		unk.f_6 = func_55(eParam0);
		unk.f_10 = iParam1;
		func_57(&unk, func_56(0, 8));
	}

	return;
}

void func_32(var uParam0) // Position - 0x75C Signature - 22 01 04 00 00 66 00 27
{
	Vehicle vehicleIndexFromEntityIndex;

	vehicleIndexFromEntityIndex = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_6);

	if (PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		if (PED::GET_VEHICLE_PED_IS_IN(Global_33, false) == vehicleIndexFromEntityIndex)
		{
			if (!func_18(uParam0, 4))
				func_29(uParam0, 4);
		
			if (VEHICLE::GET_DRIVER_OF_VEHICLE(vehicleIndexFromEntityIndex) == Global_33)
				if (!func_18(uParam0, 8))
					func_29(uParam0, 8);
			else if (func_18(uParam0, 8))
				func_58(uParam0, 8);
		}
		else
		{
			if (func_18(uParam0, 4))
				func_58(uParam0, 4);
		
			if (func_18(uParam0, 8))
				func_58(uParam0, 8);
		}
	}
	else
	{
		if (func_18(uParam0, 4))
			func_58(uParam0, 4);
	
		if (func_18(uParam0, 8))
			func_58(uParam0, 8);
	}

	return;
}

void func_33(var uParam0) // Position - 0x81C Signature - 22 01 03 00 00 66 00 27 07
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_7))
	{
		if (func_59(uParam0))
		{
			uParam0->f_7 = MAP::BLIP_ADD_FOR_ENTITY(203020899, uParam0->f_6);
			MAP::SET_BLIP_SPRITE(uParam0->f_7, joaat("blip_ambient_wagon"), true);
		}
	}
	else if (!func_59(uParam0))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_7));
	}

	return;
}

void func_34(var uParam0) // Position - 0x86D Signature - 22 01 03 00 00 66 00 27 06 03 05 00 29
{
	if (PED::_GET_RIDER_OF_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), false) == Global_33)
		if (!func_18(uParam0, 4))
			func_60(uParam0);
	else if (func_18(uParam0, 4))
		func_61(uParam0);

	return;
}

void func_35(var uParam0) // Position - 0x8AC Signature - 22 01 03 00 00 66 00 42 39 BB
{
	if (func_18(uParam0, 4) && !func_18(uParam0, 32))
		func_29(uParam0, 32);
	else if (!func_18(uParam0, 4))
		func_58(uParam0, 32);

	if (!MAP::DOES_BLIP_EXIST(uParam0->f_7))
	{
		if (func_62(uParam0))
		{
			uParam0->f_7 = MAP::BLIP_ADD_FOR_ENTITY(203020899, uParam0->f_6);
			MAP::SET_BLIP_SPRITE(uParam0->f_7, joaat("blip_ambient_horse"), true);
		}
	}
	else if (!func_62(uParam0))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_7));
	}

	return;
}

BOOL func_36(int iParam0) // Position - 0x933 Signature - 22 01 03 00 00 66 00 2F 8A
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

int func_37(var uParam0) // Position - 0x972 Signature - 22 01 03 00 00 66 00 50
{
	return uParam0;
}

void func_38(int iParam0) // Position - 0x97C Signature - 22 01 03 00 00 66 00 39 26
{
	if (!func_63(iParam0))
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

BOOL func_39(int iParam0, int iParam1) // Position - 0xA2F Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 02 04 00 00 66
{
	return iParam0 && iParam1 != false;
}

int func_40(Entity eParam0, BOOL bParam1) // Position - 0xA3E Signature - 22 02 04 00 00 66 00 03 05 00 13 6A 8B 07 00 66 00 03 05 00 41 69 8B 1C 00 66 00 39 35
{
	if (ENTITY::DOES_ENTITY_EXIST(eParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eParam0))
	{
		if (func_64(eParam0) != bParam1)
			DECORATOR::DECOR_SET_BOOL(eParam0, func_65(), bParam1);
	
		return 1;
	}

	return 0;
}

int func_41(Entity eParam0, BOOL bParam1) // Position - 0xA77 Signature - 22 02 04 00 00 66 00 03 05 00 13 6A 8B 07 00 66 00 03 05 00 41 69 8B 4F
{
	if (ENTITY::DOES_ENTITY_EXIST(eParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eParam0))
	{
		if (func_66(eParam0) != bParam1)
		{
			DECORATOR::DECOR_SET_BOOL(eParam0, func_67(), bParam1);
		
			if (TASK::GET_IS_CARRIABLE_ENTITY(eParam0))
			{
				ENTITY::_SET_ENTITY_CARRYING_FLAG(eParam0, 2, !bParam1);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(eParam0, 3, !bParam1);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(eParam0, 11, !bParam1);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(eParam0, 12, !bParam1);
			}
		}
	
		return 1;
	}

	return 0;
}

int func_42(Entity eParam0, int iParam1) // Position - 0xAE3 Signature - 22 02 04 00 00 66 00 03 05 00 13 6A 8B 07 00 66 00 03 05 00 41 69 8B 1C 00 66 00 39 A3
{
	if (ENTITY::DOES_ENTITY_EXIST(eParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eParam0))
	{
		if (func_68(eParam0) != iParam1)
			DECORATOR::DECOR_SET_INT(eParam0, func_69(), iParam1);
	
		return 1;
	}

	return 0;
}

int func_43(Entity eParam0, int iParam1) // Position - 0xB1C Signature - 22 02 04 00 00 66 00 03 05 00 13 6A 8B 07 00 66 00 03 05 00 41 69 8B 26
{
	if (ENTITY::DOES_ENTITY_EXIST(eParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eParam0))
	{
		if (func_70(eParam0) != iParam1)
		{
			if (iParam1 == 255)
			{
			}
		
			DECORATOR::_DECOR_SET_UINT8(eParam0, func_71(), iParam1);
		}
	
		return 1;
	}

	return 0;
}

BOOL func_44(int iParam0, int iParam1) // Position - 0xB5F Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 02 04 00 00 03
{
	return iParam0 && iParam1 != false;
}

void func_45(var uParam0, int iParam1) // Position - 0xB6E Signature - 22 02 04 00 00 03
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}

	func_72(uParam0, 1);
	func_73(uParam0, 2);
	uParam0->f_2 = 0;
	return;
}

BOOL func_46(var uParam0) // Position - 0xBAA Signature - 22 01 03 00 00 66 00 76 11
{
	return func_44(*uParam0, 2);
}

int func_47(int iParam0) // Position - 0xBBA Signature - 22 01 03 00 00 66 00 03 01
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

float func_48(int iParam0) // Position - 0xBCC Signature - 22 01 03 00 00 66 00 39 15
{
	if (func_13(iParam0))
		return func_74();
	else if (func_15(iParam0))
		return func_75();

	return 0f;
}

BOOL func_49(var uParam0, var uParam1) // Position - 0xBF8 Signature - 22 02 04 00 00 66 00 39
{
	if (!func_76(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_77(uParam0))
		return false;

	return true;
}

BOOL func_50(var uParam0, var uParam1) // Position - 0xC2C Signature - 22 02 05 00 00 11 4B 00 2D 39 31 10 00 67 04 66 04 09
{
	int num;

	num = func_78(uParam0);
	return num == 1 || num == 2;
}

BOOL func_51(var uParam0, var uParam1) // Position - 0xC4C Signature - 22 02 05 00 00 11 4B 00 2D 39 31 10 00 67 04 66 04 1D
{
	int num;

	num = func_78(uParam0);
	return num == 3 || num == 4;
}

char* func_52() // Position - 0xC6C Signature - 22 00 02 00 00 2F
{
	return "brain_timeStamp";
}

void func_53(var uParam0, int iParam1) // Position - 0xC76 Signature - 22 02 04 00 00 66 00 66 01 39 6C
{
	func_79(uParam0, iParam1);
	return;
}

int func_54(Entity eParam0) // Position - 0xC86 Signature - 22 01 03 00 00 66 00 03 05 00 13 05 6A 05 8B 0C 00 66 00 39 7D
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0) || !DECORATOR::DECOR_EXIST_ON(eParam0, func_80()))
		return 0;

	return DECORATOR::DECOR_GET_INT(eParam0, func_80());
}

int func_55(Entity eParam0) // Position - 0xCB7 Signature - 22 01 03 00 00 66 00 03 05 00 13 05 6A 05 8B 0C 00 66 00 39 88
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0) || !DECORATOR::DECOR_EXIST_ON(eParam0, func_81()))
		return 0;

	return DECORATOR::DECOR_GET_INT(eParam0, func_81());
}

var func_56(int iParam0, int iParam1) // Position - 0xCE8 Signature - 22 02 04 00 00 73
{
	return func_82(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

void func_57(Any* panParam0, var uParam1) // Position - 0xD06 Signature - 22 02 04 00 00 4B
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 18;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 12, 10, &uParam1);
	return;
}

void func_58(var uParam0, int iParam1) // Position - 0xD3D Signature - 22 02 04 00 00 66 00 80 04 66 01 39 26
{
	func_83(&(uParam0->f_4), iParam1);
	return;
}

BOOL func_59(var uParam0) // Position - 0xD4F Signature - 22 01 03 00 00 66 00 76 09 15
{
	if (*uParam0 == 1)
		return ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) && !func_64(uParam0->f_6) && !func_18(uParam0, 4) && BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false)) < func_74() && func_51(uParam0->f_2);

	return false;
}

void func_60(var uParam0) // Position - 0xDB1 Signature - 22 01 03 00 00 66 00 42 39 F4
{
	func_29(uParam0, 4);
	return;
}

void func_61(var uParam0) // Position - 0xDC0 Signature - 22 01 03 00 00 66 00 42 39 3D
{
	func_58(uParam0, 4);
	return;
}

BOOL func_62(var uParam0) // Position - 0xDCF Signature - 22 01 03 00 00 66 00 27 06 03 05 00 13 6A
{
	return ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) && !func_64(uParam0->f_6) && !func_18(uParam0, 4) && BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false)) < func_75() && func_51(uParam0->f_2);
}

BOOL func_63(int iParam0) // Position - 0xE26 Signature - 22 01 03 00 00 66 00 11 39 36
{
	return func_84(iParam0, 2);
}

BOOL func_64(Entity eParam0) // Position - 0xE35 Signature - 22 01 03 00 00 66 00 03 05 00 13 6A 8B 0B 00 66 00 39 61
{
	return ENTITY::DOES_ENTITY_EXIST(eParam0) && DECORATOR::DECOR_EXIST_ON(eParam0, func_65()) && DECORATOR::DECOR_GET_BOOL(eParam0, func_65());
}

char* func_65() // Position - 0xE61 Signature - 22 00 02 00 00 6D 10
{
	return "brain_isHidden";
}

BOOL func_66(Entity eParam0) // Position - 0xE6C Signature - 22 01 03 00 00 66 00 03 05 00 13 6A 8B 0B 00 66 00 39 98
{
	return ENTITY::DOES_ENTITY_EXIST(eParam0) && DECORATOR::DECOR_EXIST_ON(eParam0, func_67()) && DECORATOR::DECOR_GET_BOOL(eParam0, func_67());
}

char* func_67() // Position - 0xE98 Signature - 22 00 02 00 00 6D 1F
{
	return "brain_isDisabled";
}

int func_68(Entity eParam0) // Position - 0xEA3 Signature - 22 01 03 00 00 66 00 03 05 00 13 05 6A 05 8B 0C 00 66 00 39 D4
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0) || !DECORATOR::DECOR_EXIST_ON(eParam0, func_69()))
		return 0;

	return DECORATOR::DECOR_GET_INT(eParam0, func_69());
}

char* func_69() // Position - 0xED4 Signature - 22 00 02 00 00 6D 30
{
	return "brain_value";
}

int func_70(Entity eParam0) // Position - 0xEDF Signature - 22 01 03 00 00 66 00 03 05 00 13 05 6A 05 8B 0C 00 66 00 39 11
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0) || !DECORATOR::DECOR_EXIST_ON(eParam0, func_71()))
		return 255;

	return DECORATOR::_DECOR_GET_UINT8(eParam0, func_71());
}

char* func_71() // Position - 0xF11 Signature - 22 00 02 00 00 6D 3C
{
	return "brain_player";
}

void func_72(var uParam0, int iParam1) // Position - 0xF1C Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 02
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_73(var uParam0, int iParam1) // Position - 0xF2D Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 00
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

float func_74() // Position - 0xF42 Signature - 22 00 02 00 00 86 00 00 C8 42 50 00 01 22 00
{
	return 100f;
}

float func_75() // Position - 0xF4F Signature - 22 00 02 00 00 86 00 00 C8 42 50 00 01 22 01
{
	return 100f;
}

BOOL func_76(int iParam0) // Position - 0xF5C Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 21
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

int func_77(int iParam0) // Position - 0xF9B Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 2E
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

int func_78(var uParam0, var uParam1) // Position - 0x1031 Signature - 22 02 05 00 00 11 4B 00 2D 39 F8
{
	int num;

	if (!func_49(uParam0))
		return -1;

	num = func_85(uParam0);

	if (num < 0)
		return 0;

	return Global_1072759.f_19487.f_1[num /*3*/].f_2;
}

void func_79(var uParam0, int iParam1) // Position - 0x106C Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 00
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

char* func_80() // Position - 0x107D Signature - 22 00 02 00 00 6D 49
{
	return "brain_type";
}

char* func_81() // Position - 0x1088 Signature - 22 00 02 00 00 6D 54
{
	return "brain_id";
}

var func_82(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x1093 Signature - 22 0C
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

	if (func_86() != 0)
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_87());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_87());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_87());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_88(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_89(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_90(i) != 1)
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
					if (!func_91(player2))
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

void func_83(var uParam0, int iParam1) // Position - 0x1426 Signature - 22 02 04 00 00 66 00 66 01 39 54
{
	func_92(uParam0, iParam1);
	return;
}

BOOL func_84(int iParam0, int iParam1) // Position - 0x1436 Signature - 22 02 04 00 00 66 00 2F
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

int func_85(var uParam0, var uParam1) // Position - 0x1457 Signature - 22 02 0D
{
	var unk;
	var unk4;
	int num;
	int num2;
	int num3;

	if (Global_1072759.f_19487 <= 0)
		return -1;

	unk.f_1 = -1;
	unk.f_2 = -1;
	unk4.f_1 = -1;
	unk4.f_2 = -1;

	if (!func_93(uParam0, &unk))
		return -1;

	num = 0;
	num2 = Global_1072759.f_19487 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
		func_93(Global_1072759.f_19487.f_1[num3 /*3*/], &unk4);
	
		if (unk4 > unk)
			num2 = num3 - 1;
		else if (unk4 < unk)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

int func_86() // Position - 0x14FE Signature - 22 00 02 00 00 5D FD
{
	return Global_1051645.f_12;
}

char* func_87() // Position - 0x150C Signature - 22 00 02 00 00 6D 5D
{
	return "unnamed";
}

BOOL func_88(int iParam0) // Position - 0x1517 Signature - 22 01 04 00 00 2F
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

BOOL func_89(int iParam0) // Position - 0x15A6 Signature - 22 01 03 00 00 5D 17
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_94(36, iParam0);
}

int func_90(int iParam0) // Position - 0x15C4 Signature - 22 01 03 00 00 66 00 6D
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_91(Player plParam0) // Position - 0x160F Signature - 22 01 03 00 00 03
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_95(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_96(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

void func_92(var uParam0, int iParam1) // Position - 0x1654 Signature - 22 02 04 00 00 66 00 76 66 00 76 66 01 69 10 66 00 32 50 02 00 22 03
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_93(int iParam0, var uParam1, Any* panParam2) // Position - 0x1669 Signature - 22 03 05
{
	if (!func_49(iParam0))
		return false;

	func_97(panParam2);

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

BOOL func_94(int iParam0, int iParam1) // Position - 0x1774 Signature - 22 02 05 00 00 66
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_98(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_99())
		return func_98(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_98(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_95(Player plParam0) // Position - 0x17E8 Signature - 22 01 03 00 00 5D 77
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_96(Player plParam0) // Position - 0x1805 Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 32
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_100(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_101(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

void func_97(Any* panParam0) // Position - 0x1888 Signature - 22 01 03 00 00 2F 66 00 32
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

BOOL func_98(Any* panParam0, int iParam1, int iParam2) // Position - 0x189E Signature - 22 03 07
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_99() // Position - 0x18D5 Signature - 22 00 02 00 00 5D DD
{
	return Global_1102813.f_3672;
}

void func_100(Player plParam0) // Position - 0x18E4 Signature - 22 01 04 00 00 5D 17 00 18 27 11 2F 1C 6A 05 8B 09 00 5D 17 00 18 27 0E 2F 1C 30 8B 03 00 50 01 00 66 00 67 03 66 03 2F 35 6A 05 8B 06 00 66 03 6D 20 7E 30 8B 03 00 50 01 00 66 03 5D 77
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_101(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_101(Player plParam0) // Position - 0x1950 Signature - 22 01 03 00 00 66 00 5D
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

