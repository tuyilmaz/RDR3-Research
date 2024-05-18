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
#endregion

void main() // Position - 0x0 Signature - 22 00 03 00 00 48
{
	BOOL flag;

	fLocal_14 = 1f;
	fLocal_15 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	flag = false;

	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && !flag)
	{
		func_2();
		func_3();
		BUILTIN::WAIT(0);
	}

	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x50 Signature - 22 00 03 00 00 66
{
	var unk;

	Global_1940252.f_1556.f_4168.f_10 = unk;
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_2() // Position - 0x6A Signature - 22 00 02 00 00 39 44
{
	if (func_4())
	{
		Global_1940252.f_1556.f_4168.f_2088 = 1;
	}
	else if (Global_1940252.f_1556.f_4168.f_2088)
	{
		func_5(Global_1940252.f_1556.f_4168.f_10);
		Global_1940252.f_1556.f_4168.f_2088 = 0;
	}

	return;
}

void func_3() // Position - 0xB8 Signature - 22 00 33
{
	int eventData;
	Hash hash;
	int num;
	var unk4;
	var unk41;
	Hash hash2;

	hash = joaat("Abilities");
	unk4.f_7 = 1;
	unk4.f_13 = -1;
	unk4.f_15 = -1;
	unk4.f_16 = -1;
	unk4.f_17 = -1;
	unk4.f_18 = -1;
	unk4.f_19 = -1;
	unk4.f_35 = -1;

	while (UIEVENTS::EVENTS_UI_IS_PENDING(hash))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(hash, &eventData))
		{
			switch (eventData)
			{
				case -2075827635:
					switch (eventData.f_2)
					{
						case joaat("ABILITY_CARD_UI_EVENT_MENU_LOAD_EVENT"):
							func_6(func_7(), true);
						
							if (!UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("Abilities"), joaat("proceed")))
								UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("Abilities"), joaat("exit"));
							break;
					
						case joaat("ABILITY_CARD_UI_EVENT_MENU_LOAD_LOCAL_PLAYER_EVENT"):
							func_6(PLAYER::PLAYER_ID(), true);
						
							if (!UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("Abilities"), joaat("proceed")))
								UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("Abilities"), joaat("exit"));
							break;
					}
				
					UIEVENTS::EVENTS_UI_POP_MESSAGE(hash);
					break;
			
				case -1740156697:
					switch (eventData.f_2)
					{
						case -1895040713:
							func_8(eventData.f_3);
							break;
					
						case -1559642356:
							Global_1940252.f_1556.f_4168.f_10 = eventData.f_3;
							func_5(eventData.f_3);
							break;
					
						case -273357828:
							func_9(eventData.f_3);
							break;
					}
				
					UIEVENTS::EVENTS_UI_POP_MESSAGE(hash);
					break;
			
				case -1203660660:
					switch (eventData.f_2)
					{
						case -1636950965:
							func_11(eventData.f_3, &unk4, 2, -1);
							func_16(unk4, func_15());
							break;
					
						case -191804968:
							func_11(eventData.f_3, &unk4, 2, -1);
							hash2 = func_21(func_20(&unk4) + 1);
						
							if (unk4.f_23 && func_22(hash2, &(unk41.f_2)))
							{
								unk41.f_1 = 0;
							}
							else if (unk4.f_24 && func_23(hash2, &(unk41.f_2)))
							{
								unk41.f_1 = func_24(hash2, joaat("currency_cash"), unk41.f_2, true, false);
							}
							else if (unk4.f_25)
							{
								unk41.f_2 = -489628648;
								unk41.f_1 = func_18(hash2, unk41.f_2);
							}
							else if (unk4.f_26)
							{
								unk41.f_2 = -570078785;
								unk41.f_1 = func_18(hash2, unk41.f_2);
							}
							else
							{
								break;
							}
						
							if (unk41.f_1 < 0)
								break;
						
							unk41 = unk4;
							func_19(func_15(), 2, unk41);
							break;
					
						case 85169314:
							func_11(eventData.f_3, &unk4, 2, -1);
						
							if (unk4.f_29)
								unk41.f_2 = unk4.f_31;
							else if (unk4.f_30)
								unk41.f_2 = unk4.f_31;
							else if (unk4.f_32)
								unk41.f_2 = -915411861;
							else if (unk4.f_33)
								unk41.f_2 = -570078785;
							else
								break;
						
							if (!func_17(unk41.f_2))
							{
								unk41.f_1 = func_18(unk4.f_2, unk41.f_2);
							
								if (unk41.f_1 <= 0)
									break;
							}
						
							unk41 = unk4;
							func_19(func_15(), 1, unk41);
							break;
					
						case 473608166:
							num = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(eventData.f_3, "ability_card_loadout_index");
							func_13(num);
							break;
					
						case 536653807:
							func_11(eventData.f_3, &unk4, 2, -1);
							func_12(&unk4);
							break;
					
						case 928621134:
							num = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(eventData.f_3, "ability_card_loadout_index");
							func_14(num);
							break;
					}
				
					UIEVENTS::EVENTS_UI_POP_MESSAGE(hash);
					break;
			
				case -722926211:
					switch (eventData.f_2)
					{
						case -27281482:
							func_10(-1);
							break;
					}
				
					UIEVENTS::EVENTS_UI_POP_MESSAGE(hash);
					break;
			
				case 703281244:
					switch (eventData.f_2)
					{
						case -27281482:
							func_10(1);
							break;
					}
				
					UIEVENTS::EVENTS_UI_POP_MESSAGE(hash);
					break;
			
				default:
					UIEVENTS::EVENTS_UI_POP_MESSAGE(hash);
					break;
			}
		}
	}

	return;
}

BOOL func_4() // Position - 0x444 Signature - 22 00 02 00 00 5D 75
{
	if (Global_1940085.f_105 != -1)
		return true;

	if (Global_1940085.f_105.f_2 != -1)
		return true;

	return HUD::BUSYSPINNER_IS_ON();
}

void func_5(Any anParam0) // Position - 0x46E Signature - 22 01 28 00 00 4B 03 6A 80 07 09 3D 41 6A 80 0D 08 3D 41 6A 80 0F 08 3D 41 6A 80 10 08 3D 41 6A 80 11 08 3D 41 6A 80 12 08 3D 41 6A 80 13 08 3D 41 6A 80 23 08 3D 41 41 66
{
	int num;

	num.f_7 = 1;
	num.f_13 = -1;
	num.f_15 = -1;
	num.f_16 = -1;
	num.f_17 = -1;
	num.f_18 = -1;
	num.f_19 = -1;
	num.f_35 = -1;
	func_11(anParam0, &num, 2, -1);
	func_26(&Global_1940252.f_1556.f_4168.f_37[func_25(num, 1) /*44*/], &num);
	func_27(&(Global_1940252.f_1556.f_4168.f_1936), num);
	func_28(num);
	func_29(num);
	return;
}

void func_6(Player plParam0, BOOL bParam1) // Position - 0x4F3 Signature - 22 02 04 00 00 66 01 8B
{
	if (bParam1)
		func_30(0);

	if (PLAYER::PLAYER_ID() == plParam0)
		func_31(0);
	else
		func_31(1);

	func_32(0, plParam0);
	func_32(1, plParam0);
	func_32(2, plParam0);
	func_32(3, plParam0);
	return;
}

Player func_7() // Position - 0x537 Signature - 22 00 04
{
	Player playerFromGamerHandle;
	Player player;

	playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1940252.f_1556.f_8));

	if (!func_33())
		return PLAYER::PLAYER_ID();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerFromGamerHandle))
		return PLAYER::PLAYER_ID();

	player = playerFromGamerHandle;

	if (player < 0)
		return PLAYER::PLAYER_ID();

	if (player >= 32)
		return PLAYER::PLAYER_ID();

	return playerFromGamerHandle;
}

void func_8(Any anParam0) // Position - 0x58F Signature - 22 01 29 00 00 4B
{
	int num;
	int num2;

	num.f_7 = 1;
	num.f_13 = -1;
	num.f_15 = -1;
	num.f_16 = -1;
	num.f_17 = -1;
	num.f_18 = -1;
	num.f_19 = -1;
	num.f_35 = -1;
	num2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(anParam0, "ability_card_loadout_index");
	func_30(num2);
	func_11(anParam0, &num, 2, -1);
	func_34(&(Global_1940252.f_1556.f_4168.f_1985), &num, num2);
	func_28(num);
	func_29(num);
	return;
}

void func_9(Any anParam0) // Position - 0x608 Signature - 22 01 29 00 00 66
{
	int num;
	var unk;

	num = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(anParam0, "ability_card_upgrade_tier_index");
	unk.f_7 = 1;
	unk.f_13 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = -1;
	unk.f_35 = -1;
	func_11(anParam0, &unk, 2, num);
	func_35(&Global_1940252.f_1556.f_4168.f_1797[num /*46*/], unk);
	func_36(&(Global_1940252.f_1556.f_4168.f_2034), unk);
	func_37(num);
	func_29(unk);
	return;
}

int func_10(int iParam0) // Position - 0x698 Signature - 22 01 06 00 00 5D
{
	int num;
	int num2;
	int num3;

	num = Global_1940252.f_1556.f_4168.f_2085;

	if (num == joaat("deadeye"))
		return 0;

	num2 = func_38(Global_1940252.f_1556.f_4168.f_2085, 1);
	num3 = num2 + iParam0;

	if (num3 < 2)
		num3 = 4;
	else if (num3 > 4)
		num3 = 2;

	num = func_39(num3, 1);
	func_40(num, 0);
	return 1;
}

void func_11(Any anParam0, var uParam1, int iParam2, int iParam3) // Position - 0x6FE Signature - 22 04 06 00 00 66 00 66
{
	func_41(anParam0, uParam1);
	func_42(*uParam1, uParam1, iParam2, iParam3);
	return;
}

void func_12(var uParam0) // Position - 0x71C Signature - 22 01 03 00 00 66 00 76
{
	func_43(*uParam0);

	if (UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(joaat("Abilities")))
		UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("Abilities"), -1316999016);

	return;
}

void func_13(int iParam0) // Position - 0x749 Signature - 22 01 04 00 00 66 00 39 EA
{
	int num;

	func_30(iParam0);

	if (func_44(iParam0))
		num = joaat("deadeye");
	else if (!func_45(iParam0, true))
		num = func_47(func_46(iParam0, true));
	else
		num = joaat("Combat");

	func_40(num, func_46(iParam0, true));

	if (UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(joaat("Abilities")))
		UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("Abilities"), -2109508723);

	return;
}

int func_14(int iParam0) // Position - 0x7B7 Signature - 22 01 08
{
	int num;

	num = func_46(iParam0, true);
	return func_19(iParam0, 3, num);
}

int func_15() // Position - 0x7D3 Signature - 22 00 02 00 00 5D 1C 9B 1D 18 14 06 18 48 10 78 26
{
	return Global_1940252.f_1556.f_4168.f_2086;
}

int func_16(var uParam0, int iParam1) // Position - 0x7E8 Signature - 22 02 09 00 00 66 00 67
{
	var unk;

	unk = uParam0;
	return func_19(iParam1, 0, unk);
}

BOOL func_17(int iParam0) // Position - 0x7FF Signature - 22 01 03 00 00 66 00 3C 04 00 CA
{
	switch (iParam0)
	{
		case -1551258934:
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
	
		default:
		
	}

	return false;
}

int func_18(Hash hParam0, Hash hParam1) // Position - 0x82C Signature - 22 02 04 00 00 66 00 66 01 09
{
	return func_48(hParam0, hParam1, true, false, true, 0);
}

int func_19(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x840 Signature - 22 07 1A
{
	int num;

	if (func_49(iParam0))
		return 0;

	if (iParam1 < 0 || iParam1 >= 4)
		return 0;

	num = -1;
	num.f_1 = -1;
	num.f_7 = -1;
	num.f_7.f_1 = -1;
	num = iParam1;
	num.f_2 = { uParam2 };
	num.f_1 = 0;
	Global_1149432.f_4621.f_52[iParam0 /*17*/] = { num };
	return 1;
}

int func_20(var uParam0) // Position - 0x8AE Signature - 22 01 0A 00 00 66 00 76
{
	int num;
	int i;
	var guid;
	Hash hash;

	if (!func_50(*uParam0))
		return -1;

	if (!func_51(uParam0->f_2, 0))
		return -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam0->f_3)))
		return 0;

	for (i = 0; i < 3; i = i + 1)
	{
		hash = func_21(i);
		guid = { func_52(hash, uParam0->f_3, 1635590003, true) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			break;
	
		num = i;
	}

	return num;
}

Hash func_21(int iParam0) // Position - 0x929 Signature - 22 01 04 00 00 66 00 67 03 66 03 39 92
{
	int num;

	num = iParam0;
	return func_53(num);
}

BOOL func_22(Hash hParam0, var uParam1) // Position - 0x93B Signature - 22 02 04 00 00 66 00 09 39 CD
{
	*uParam1 = func_54(hParam0, true);
	return *uParam1 != 0;
}

BOOL func_23(Hash hParam0, var uParam1) // Position - 0x952 Signature - 22 02 04 00 00 66 00 09 39 5E
{
	*uParam1 = func_55(hParam0, true);
	return *uParam1 != 0;
}

int func_24(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x969 Signature - 22 05 28 00 00 4B 07 6D 0F 3D 41 66 00 39
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (func_56(hParam0) || func_57(hParam0, 1077060302))
		return func_59(func_58(hParam0, false), iParam1, hParam2, bParam4, true);

	if (!func_60(hParam0, hParam2, &unk, &num, bParam3, bParam4))
	{
		!bParam4;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == iParam1)
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam4;
	return 0;
}

int func_25(int iParam0, int iParam1) // Position - 0xA04 Signature - 22 02 04 00 00 66 00 3C 23
{
	switch (iParam0)
	{
		case joaat("net_player_ability__strange_medicine"):
			return 18;
	
		case joaat("net_player_ability__focus_fire"):
			return 5;
	
		case joaat("net_player_ability__necessity_breeds"):
			return 10;
	
		case joaat("net_player_ability__the_gift_of_focus"):
			return 20;
	
		case joaat("NET_PLAYER_ABILITY__RIDE_LIKE_THE_WIND"):
			return 33;
	
		case joaat("NET_PLAYER_ABILITY__FOOL_ME_ONCE"):
			return 32;
	
		case joaat("NET_PLAYER_ABILITY__GUNSLINGERS_CHOICE"):
			return 34;
	
		case joaat("net_player_ability__come_back_stronger"):
			return 3;
	
		case joaat("net_player_ability__winning_streak"):
			return 24;
	
		case joaat("net_player_ability__kick_in_the_butt"):
			return 26;
	
		case joaat("net_player_ability__peak_condition"):
			return 14;
	
		case joaat("net_player_ability__the_short_game"):
			return 21;
	
		case joaat("NET_PLAYER_ABILITY__OVERRIDE_REVENGE_SLOW_TIME"):
			return 25;
	
		case joaat("NET_PLAYER_ABILITY__IRON_LUNG"):
			return 30;
	
		case joaat("net_player_ability__the_unblinking_eye"):
			return 22;
	
		case 0:
			return 0;
	
		case joaat("NET_PLAYER_ABILITY__FRIENDS_FOR_LIFE"):
			return 31;
	
		case joaat("net_player_ability__never_without_one"):
			return 11;
	
		case joaat("net_player_ability__of_single_purpose"):
			return 12;
	
		case joaat("net_player_ability__a_moment_to_recuperate"):
			return 1;
	
		case joaat("net_player_ability__slippery_bastard"):
			return 16;
	
		case joaat("net_player_ability__paint_it_black"):
			return 13;
	
		case joaat("net_player_ability__take_the_pain_away"):
			return 19;
	
		case joaat("net_player_ability__eye_for_an_eye"):
			return 4;
	
		case joaat("net_player_ability__cold_blooded"):
			return 2;
	
		case joaat("net_player_ability__hunker_down"):
			return 8;
	
		case joaat("net_player_ability__quite_an_inspiration"):
			return 15;
	
		case joaat("net_player_ability__to_fight_another_day"):
			return 23;
	
		case joaat("net_player_ability__horseman"):
			return 7;
	
		case joaat("net_player_ability__live_for_the_fight"):
			return 27;
	
		case joaat("net_player_ability__hangman"):
			return 6;
	
		case joaat("net_player_ability__strength_in_numbers"):
			return 29;
	
		case joaat("net_player_ability__slow_and_steady"):
			return 17;
	
		case joaat("net_player_ability__landons_patience"):
			return 9;
	
		case joaat("net_player_ability__sharpshooter"):
			return 28;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_26(var uParam0, var uParam1) // Position - 0xB9E Signature - 22 02 04 00 00 66 00 27
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, uParam1->f_11);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_3, uParam1->f_12);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_4, uParam1->f_9);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_5, uParam1->f_10);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_41, func_61(uParam1->f_1, uParam1->f_13));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6, *uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_7, func_62(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_34, uParam1->f_22);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_12, uParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_13, !uParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_35, func_63(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_14, !uParam1->f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_15, uParam1->f_33);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_16, uParam1->f_32);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_17, uParam1->f_34);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_18, func_64(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_19, uParam1->f_26);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_20, uParam1->f_25);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_21, uParam1->f_27);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_22, !uParam1->f_14 && uParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_23, !uParam1->f_14);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_24, !uParam1->f_14 && func_65(4));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_25, func_66(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_26, func_67(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_27, func_68(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_28, func_69(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_29, uParam1->f_34 && func_69(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_30, uParam1->f_27 && func_69(uParam1));

	if (uParam1->f_29)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_31, func_70(0));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_32, func_71(0));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_31, func_70(func_72(uParam1->f_17)));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_32, func_71(func_73(uParam1->f_17)));
	}

	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_33, uParam1->f_18);

	if (!uParam1->f_21)
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_43, func_74(uParam1->f_16));

	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_36, uParam1->f_13);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_38, uParam1->f_15);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_40, func_75(uParam1->f_13));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_10, uParam1->f_25);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, !uParam1->f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_8, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_9, false);
	return;
}

void func_27(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37) // Position - 0xDFC Signature - 22 26 29
{
	int num;

	func_26(uParam0, &uParam1);
	num = func_75(uParam1.f_13);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_44, MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOCUS_XP_INFO", uParam1.f_15, num));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45, func_76(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_47, func_77(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_46, func_78(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_48, func_79(&uParam1));
	return;
}

void func_28(int iParam0) // Position - 0xE64 Signature - 22 01 03 00 00 66 00 39 34
{
	func_80(iParam0);
	return;
}

void func_29(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36) // Position - 0xE72 Signature - 22 25 28
{
	int num;

	if (!func_81())
		return;

	num = func_82();

	if (func_83())
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_1556.f_4168.f_5, true);
	else if (num == 1)
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_1556.f_4168.f_5, true);
	else
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_1556.f_4168.f_5, false);

	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_1556.f_4168.f_4, func_84(uParam0));
	return;
}

void func_30(int iParam0) // Position - 0xEEA Signature - 22 01 03 00 00 66 00 39 2E
{
	func_85(iParam0);
	func_86(iParam0);
	return;
}

void func_31(int iParam0) // Position - 0xEFE Signature - 22 01 03 00 00 66 00 5D 1C 9B 1D 18 14 06 18 48 10 8C 23
{
	Global_1940252.f_1556.f_4168.f_2083 = iParam0;
	return;
}

void func_32(int iParam0, Player plParam1) // Position - 0xF15 Signature - 22 02 04 00 00 39
{
	if (func_87())
		func_88(iParam0, true);
	else
		func_89(plParam1, iParam0, true);

	return;
}

BOOL func_33() // Position - 0xF37 Signature - 22 00 02 00 00 5D 1C 9B 1D 18 14 06 80
{
	return NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Global_1940252.f_1556.f_8));
}

void func_34(var uParam0, var uParam1, int iParam2) // Position - 0xF4C Signature - 22 03 05 00 00 66 02 66
{
	func_90(iParam2, uParam1);
	func_26(uParam0, uParam1);
	return;
}

void func_35(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37) // Position - 0xF64 Signature - 22 26 28 00 00 66 00 4B 01 39 9E 0B 00 50
{
	func_26(uParam0, &uParam1);
	return;
}

void func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37) // Position - 0xF74 Signature - 22 26 28 00 00 66 00 4B 01 39 9E 0B 00 66
{
	func_26(uParam0, &uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45, func_76(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_47, func_77(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_46, func_78(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_48, func_79(&uParam1));
	return;
}

void func_37(int iParam0) // Position - 0xFBC Signature - 22 01 03 00 00 66 00 39 F5
{
	func_91(iParam0);
	return;
}

int func_38(int iParam0, int iParam1) // Position - 0xFCA Signature - 22 02 04 00 00 66 00 3C 05 00 D3
{
	switch (iParam0)
	{
		case joaat("Defense"):
			return 4;
	
		case 0:
			return 0;
	
		case joaat("deadeye"):
			return 1;
	
		case joaat("Recovery"):
			return 3;
	
		case joaat("Combat"):
			return 2;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_39(int iParam0, int iParam1) // Position - 0x101D Signature - 22 02 04 00 00 66 00 3C 05 00 00
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return joaat("deadeye");
	
		case 2:
			return joaat("Combat");
	
		case 3:
			return joaat("Recovery");
	
		case 4:
			return joaat("Defense");
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

void func_40(int iParam0, int iParam1) // Position - 0x107E Signature - 22 02 06 00 00 66 00 39
{
	int i;
	int num;

	if (!func_92(iParam0))
	{
		func_93(iParam1);
		return;
	}

	if (iParam0 == joaat("deadeye"))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_1556.f_4168.f_13, false);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_1556.f_4168.f_13, true);
	
		for (i = 0; i < 5; i = i + 1)
		{
			num = func_39(i, 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_1556.f_4168.f_15[i /*4*/].f_1, iParam0 == num);
		}
	}

	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_1556.f_4168.f_3, func_94(iParam0));
	func_95(iParam0);
	func_93(iParam1);
	return;
}

void func_41(Any anParam0, var uParam1) // Position - 0x1120 Signature - 22 02 04 00 00 66 00 6D
{
	*uParam1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(anParam0, "ability_card_ability_hash");
	uParam1->f_13 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(anParam0, "ability_card_tier");
	return;
}

BOOL func_42(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x1141 Signature - 22 04 06 00 00 39
{
	if (!func_96())
		return false;

	return func_97(iParam0, uParam1, iParam2, iParam3);
}

void func_43(int iParam0) // Position - 0x1161 Signature - 22 01 4E
{
	var unk;
	var unk38;
	int i;

	unk.f_7 = 1;
	unk.f_13 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = -1;
	unk.f_35 = -1;
	unk38.f_7 = 1;
	unk38.f_13 = -1;
	unk38.f_15 = -1;
	unk38.f_16 = -1;
	unk38.f_17 = -1;
	unk38.f_18 = -1;
	unk38.f_19 = -1;
	unk38.f_35 = -1;

	for (i = 0; i < 3; i = i + 1)
	{
		unk = { unk38 };
		func_42(iParam0, &unk, 2, i);
		func_35(&Global_1940252.f_1556.f_4168.f_1797[i /*46*/], unk);
	
		if (func_98(i))
			func_36(&(Global_1940252.f_1556.f_4168.f_2034), unk);
	}

	return;
}

BOOL func_44(int iParam0) // Position - 0x1230 Signature - 22 01 03 00 00 66 00 39 F3 23 00 05 8B 04 00 2F
{
	if (!func_99(iParam0))
		return false;

	return iParam0 == 0;
}

BOOL func_45(int iParam0, BOOL bParam1) // Position - 0x124A Signature - 22 02 0B 00 00 66 00 39
{
	Hash hash;
	var unk;
	int num;
	BOOL flag;

	hash = func_100(iParam0);
	unk = { func_101(bParam1) };
	num = func_102(&unk, hash, bParam1);
	flag = num == 0;
	return flag;
}

int func_46(int iParam0, BOOL bParam1) // Position - 0x1278 Signature - 22 02 0A
{
	Hash hash;
	var unk;
	Hash hash2;

	if (func_83())
		return Global_1149432.f_4804.f_34[iParam0 /*3*/];

	hash = func_100(iParam0);
	unk = { func_101(bParam1) };
	hash2 = func_103(unk, hash, 0, bParam1);

	if (!func_104(hash2))
		return 0;

	return func_105(hash2);
}

int func_47(int iParam0) // Position - 0x12CC Signature - 22 01 03 00 00 66 00 39 1F 14 00 05 8B 04 00 2F 50 01 01 66 00 09 39 04 0A 00 5D F8 89 11 80 0B 18 1A 06 63 2E 27 01
{
	if (!func_50(iParam0))
		return 0;

	return Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_1;
}

// Unhandled jump detected. Output should be considered invalid
int func_48(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x12F6 Signature - 22 06 29
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (bParam4 && hParam1 == -915411861 && func_106(hParam0, 59806960))
		hParam1 = 59806960;

	if (func_56(hParam0) || func_57(hParam0, 1077060302))
		return func_107(func_58(hParam0, false), hParam1, bParam3, true);

	if (!func_60(hParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam3;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar"))
		{
			if (iParam5 != 0 && unk[i /*2*/] != iParam5)
			{
			}
			else
			{
				return unk[i /*2*/].f_1;
				goto 0xDD;
			}
		}
	
		if (unk[i /*2*/] == 0)
			break;
	}

	!bParam3;
	return 0;
}

BOOL func_49(int iParam0) // Position - 0x13E6 Signature - 22 01 03 00 00 66 00 39 F3 23 00 05 8B 04 00 09
{
	if (!func_99(iParam0))
		return true;

	if (Global_1149432.f_4621.f_52[iParam0 /*17*/].f_1 != -1)
		return true;

	if (func_83())
		return true;

	return false;
}

BOOL func_50(int iParam0) // Position - 0x141F Signature - 22 01 04 00 00 66 00 09
{
	int num;

	num = func_25(iParam0, 1);

	if (num < 1 || num >= 35)
		return false;

	return true;
}

BOOL func_51(Hash hParam0, int iParam1) // Position - 0x1447 Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 42
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

struct<4> func_52(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1461 Signature - 22 07 0D
{
	var outGuid;

	if (!func_51(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_108(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

int func_53(int iParam0) // Position - 0x1492 Signature - 22 01 03 00 00 66 00 3C 03 00 00 00 00 00 0F 00 01 00 00 00 11 00 02 00 00 00 13 00 68 18 00 37 9F
{
	switch (iParam0)
	{
		case 0:
			return -1814149473;
	
		case 1:
			return -2038682661;
	
		case 2:
			return 1942029925;
	
		default:
		
	}

	return 0;
}

Hash func_54(Hash hParam0, BOOL bParam1) // Position - 0x14CD Signature - 22 02 27 00 00 4B 06 6D 0F 3D 41 2F 67 04 66 04 09
{
	int i;
	int num;
	var unk;
	Hash hash;
	int j;

	unk = 15;

	for (i = 0; i < 1; i = i + 1)
	{
		hash = func_109(i);
	
		if (!func_60(hParam0, hash, &unk, &num, true, false))
		{
		}
		else
		{
			for (j = 0; j < num; j = j + 1)
			{
				if (func_110(unk[j /*2*/]))
				{
					if (!bParam1 || func_111(unk[j /*2*/], false, true, true) > 0)
						return hash;
				
					break;
				}
			
				if (unk[j /*2*/] == 0)
					break;
			}
		}
	}

	return 0;
}

Hash func_55(Hash hParam0, BOOL bParam1) // Position - 0x155E Signature - 22 02 2C
{
	Hash hash;
	int num;
	int num2;
	var unk;
	Hash hash2;
	int i;
	Hash hash3;
	BOOL flag;
	int num3;
	int j;

	!func_51(hParam0, 0);
	hash = 0;
	num = 0;
	num2 = 0;
	unk = 15;

	for (i = 0; i < 3; i = i + 1)
	{
		hash2 = func_112(i);
	
		if (hash2 == 0)
		{
		}
		else if (!func_60(hParam0, hash2, &unk, &num2, true, false))
		{
		}
		else
		{
			flag = false;
			num3 = 0;
		
			for (j = 0; j < num2; j = j + 1)
			{
				hash3 = unk[j /*2*/];
			
				if (hash3 == 0)
					break;
			
				if (func_113(hash3))
					if (!bParam1 || func_111(hash3, false, true, true) > 0)
						flag = true;
					else if (hash3 == joaat("currency_cash"))
						num3 = unk[j /*2*/].f_1;
			
				if (hash3 == joaat("currency_cash"))
					num3 = unk[j /*2*/].f_1;
			}
		
			if (flag)
			{
				if (hash == 0)
				{
					hash = hash2;
					num = num3;
				}
				else if (num3 < num)
				{
					hash = hash2;
					num = num3;
				}
			}
		}
	}

	return hash;
}

BOOL func_56(Hash hParam0) // Position - 0x1646 Signature - 22 01 03 00 00 66 00 37
{
	if (func_57(hParam0, 75135761))
		return true;

	return false;
}

BOOL func_57(Hash hParam0, Hash hParam1) // Position - 0x1661 Signature - 22 02 04 00 00 66 00 2F 39 47 14 00 05 8B 0F
{
	if (!func_51(hParam0, 0))
		return func_115(func_114(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return true;

	return false;
}

int func_58(Hash hParam0, BOOL bParam1) // Position - 0x16A2 Signature - 22 02 0B 00 00 66 00 2F
{
	var unk;

	if (!func_51(hParam0, 0))
		return func_116(func_114(hParam0), bParam1);

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk) || unk.f_5 == 0)
		return 0;

	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(unk.f_5))
		return 0;

	return unk.f_5;
}

int func_59(int iParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x16FA Signature - 22 05 28 00 00 4B 07 6D 0F 3D 41 66 00 66
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_117(iParam0, hParam2, &unk, &num, bParam3, bParam4))
	{
		!bParam3;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == iParam1)
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam3;
	return 0;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_60(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x1766 Signature - 22 06 09 00 00 2F 66 03 32 66 02 76 6D 0F 8A 04 00 2F 50 06 01 66 00 2F
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_51(hParam0, 0))
		return false;

	*uParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(hParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam5;
		return false;
	}

	!bParam5;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM(hParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x71;
	
		!bParam5;
	}

	if (bParam4)
		func_118(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

Hash func_61(var uParam0, var uParam1) // Position - 0x17F6 Signature - 22 02 05 00 00 66 01
{
	var unk;

	unk = uParam1;
	return func_119(uParam0, unk);
}

BOOL func_62(var uParam0) // Position - 0x180A Signature - 22 01 03 00 00 66 00 27 01
{
	return uParam0->f_1 == joaat("deadeye");
}

BOOL func_63(var uParam0) // Position - 0x181C Signature - 22 01 03 00 00 66 00 27 14 6A 8B 06
{
	return uParam0->f_20 && !uParam0->f_22;
}

char* func_64(var uParam0) // Position - 0x1832 Signature - 22 01 03 00 00 66 00 27 1D 8B 09
{
	if (uParam0->f_29)
		return "NET_PLAYER_ABILITY_PROMPT_CLAIM_WITH_REWARD";
	else if (uParam0->f_30)
		return "IB_REDEEM";

	if (uParam0->f_33)
		return "IB_BUY_NOW";

	return "IB_BUY";
}

BOOL func_65(int iParam0) // Position - 0x1867 Signature - 22 01 04 00 00 39 0F
{
	int num;

	num = func_120();

	switch (num)
	{
		case 0:
			return true;
	
		case 1:
			return iParam0 == 0;
	
		case 2:
			return iParam0 == 1;
	
		case 3:
			return iParam0 == 2;
	
		case 4:
			return iParam0 == 5;
	
		default:
		
	}

	return false;
}

char* func_66(var uParam0) // Position - 0x18BC Signature - 22 01 03 00 00 66 00 27 17
{
	if (uParam0->f_23)
		return "NET_PLAYER_ABILITY_PROMPT_UPGRADE_WITH_VOUCHER";
	else if (uParam0->f_24)
		return "NET_PLAYER_ABILITY_PROMPT_UPGRADE_WITH_OFFER";
	else if (uParam0->f_26)
		return "IB_UPGRADE_NOW";

	return "IB_UPGRADE";
}

BOOL func_67(var uParam0) // Position - 0x18F6 Signature - 22 01 03 00 00 66 00 27 20
{
	return uParam0->f_32 || uParam0->f_25 || uParam0->f_24 || uParam0->f_23;
}

BOOL func_68(var uParam0) // Position - 0x1920 Signature - 22 01 03 00 00 66 00 39 F6
{
	return !func_67(uParam0) && uParam0->f_33 || uParam0->f_26;
}

BOOL func_69(var uParam0) // Position - 0x1942 Signature - 22 01 03 00 00 66 00 27 14 05 6A 8B 05
{
	if (!uParam0->f_20 && uParam0->f_29)
		if (uParam0->f_17 < 0)
			return false;
		else if (func_121(uParam0->f_17))
			return true;

	if (func_67(uParam0))
		if (uParam0->f_17 < 0)
			return false;
		else if (func_121(uParam0->f_17))
			return true;
	else if (func_68(uParam0))
		if (uParam0->f_18 < 0)
			return false;
		else if (func_122(uParam0->f_18))
			return true;

	return false;
}

char* func_70(int iParam0) // Position - 0x19CB Signature - 22 01 03 00 00 66 00 03 05 00 18
{
	return MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iParam0), 0);
}

char* func_71(int iParam0) // Position - 0x19DE Signature - 22 01 03 00 00 66 00 2F 15 07
{
	if (iParam0 == 0)
		return "00";

	return func_70(iParam0);
}

int func_72(int iParam0) // Position - 0x19F9 Signature - 22 01 03 00 00 66 00 6D 64 59
{
	return iParam0 / 100;
}

int func_73(int iParam0) // Position - 0x1A06 Signature - 22 01 03 00 00 66 00 6D 64 47
{
	return iParam0 % 100;
}

char* func_74(int iParam0) // Position - 0x1A13 Signature - 22 01 07 00 00 66 00 08
{
	var buffer;

	if (iParam0 <= -1)
		return "";

	MISC::_INT_TO_STRING(iParam0, "%i", &buffer);
	return func_123(buffer);
}

int func_75(int iParam0) // Position - 0x1A3C Signature - 22 01 04 00 00 66 00 67 03 66 03 39 84
{
	var unk;

	unk = iParam0;
	return func_124(unk);
}

char* func_76(var uParam0) // Position - 0x1A4E Signature - 22 01 03 00 00 66 00 27 14 8B
{
	if (uParam0->f_20)
	{
		if (uParam0->f_23)
			return "NET_PLAYER_ABILITY_PRICE_TYPE_UPGRADE_VOUCHER";
		else if (uParam0->f_24)
			return "NET_PLAYER_ABILITY_PRICE_TYPE_UPGRADE_OFFER";
	
		return "IB_UPGRADE";
	}

	if (uParam0->f_29)
		return "SHOP_REWARD_PRICE";
	else if (uParam0->f_30)
		return "SHOP_OFFER_PRICE";

	return "IB_PRICE";
}

char* func_77(var uParam0) // Position - 0x1AA6 Signature - 22 01 03 00 00 66 00 27 14 6A 8B 05
{
	if (uParam0->f_20 && uParam0->f_23)
		return "IB_FREE";

	if (uParam0->f_29)
		return "IB_FREE";
	else if (uParam0->f_20 && !uParam0->f_27)
		return "NET_PLAYER_ABILITY_ADDITIONAL_XP_REQUIRED";

	return "";
}

BOOL func_78(var uParam0) // Position - 0x1AF2 Signature - 22 01 03 00 00 66 00 27 1D 8B 07
{
	if (uParam0->f_29)
		return true;
	else if (!uParam0->f_27 && uParam0->f_20)
		return true;

	return false;
}

BOOL func_79(var uParam0) // Position - 0x1B1E Signature - 22 01 03 00 00 66 00 27 15
{
	return uParam0->f_21 && !uParam0->f_14;
}

void func_80(int iParam0) // Position - 0x1B34 Signature - 22 01 03 00 00 66 00 5D 1C 9B 1D 18 14 06 18 48 10 8C 24
{
	Global_1940252.f_1556.f_4168.f_2084 = iParam0;
	return;
}

BOOL func_81() // Position - 0x1B4B Signature - 22 00 02 00 00 37 1F
{
	return UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("Abilities"));
}

int func_82() // Position - 0x1B5C Signature - 22 00 02 00 00 5D 1C 9B 1D 18 14 06 18 48 10 78 23
{
	return Global_1940252.f_1556.f_4168.f_2083;
}

BOOL func_83() // Position - 0x1B71 Signature - 22 00 02 00 00 2F
{
	return func_125(0) && func_125(5);
}

const char* func_84(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36) // Position - 0x1B88 Signature - 22 25 29
{
	const char* str;
	Hash uiappCurrentActivityByHash;

	str = func_127(func_126(), joaat("COLOR_PURE_WHITE"));

	if (func_83())
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_OVERRIDEN");
	else if (func_82() == 1)
		return MISC::VAR_STRING(10, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_REMOTE_PLAYER_MODE", str);

	if (!func_81())
		return "INVALID";

	uiappCurrentActivityByHash = UIAPPS::_GET_UIAPP_CURRENT_ACTIVITY_BY_HASH(joaat("Abilities"));

	if (uiappCurrentActivityByHash == joaat("abilities_menu_loadout"))
		return func_128(func_15());
	else if (uiappCurrentActivityByHash == joaat("abilities_menu_selection"))
		return func_129(&uParam0);
	else if (uiappCurrentActivityByHash == 756463805)
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_UPGRADE");

	return "INVALID";
}

void func_85(int iParam0) // Position - 0x1C2E Signature - 22 01 03 00 00 66 00 5D 1C 9B 1D 18 14 06 18 48 10 8C 26
{
	Global_1940252.f_1556.f_4168.f_2086 = iParam0;
	return;
}

void func_86(int iParam0) // Position - 0x1C45 Signature - 22 01 03 00 00 5D 1C 9B 1D 18 14 06 18 48 10 27 0C
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940252.f_1556.f_4168.f_12, iParam0);
	return;
}

BOOL func_87() // Position - 0x1C5F Signature - 22 00 02 00 00 39 5C
{
	return func_82() == 0;
}

void func_88(int iParam0, BOOL bParam1) // Position - 0x1C6D Signature - 22 02 2A
{
	var unk;
	int num;

	unk.f_7 = 1;
	unk.f_13 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = -1;
	unk.f_35 = -1;
	num = func_46(iParam0, true);

	if (!func_42(num, &unk, 0, -1))
		func_130(&unk);

	func_131(iParam0, &Global_1940252.f_1556.f_4168.f_1579[iParam0 /*54*/], unk);

	if (bParam1 && func_132(iParam0))
		func_34(&(Global_1940252.f_1556.f_4168.f_1985), &unk, iParam0);

	return;
}

void func_89(Player plParam0, int iParam1, BOOL bParam2) // Position - 0x1D06 Signature - 22 03 2C
{
	Player player;
	int num;
	var unk;

	player = plParam0;
	num = Global_1155150[player /*30*/].f_5[iParam1 /*3*/];
	unk.f_7 = 1;
	unk.f_13 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = -1;
	unk.f_35 = -1;
	unk.f_13 = Global_1155150[player /*30*/].f_5[iParam1 /*3*/].f_1;

	if (!func_42(num, &unk, 1, -1))
		func_130(&unk);

	func_133(iParam1, &Global_1940252.f_1556.f_4168.f_1579[iParam1 /*54*/], unk, Global_1155150[player /*30*/].f_5[iParam1 /*3*/].f_2);

	if (bParam2 && func_132(iParam1))
		func_34(&(Global_1940252.f_1556.f_4168.f_1985), &unk, iParam1);

	return;
}

void func_90(int iParam0, var uParam1) // Position - 0x1DCE Signature - 22 02 04 00 00 66 01 76
{
	if (!func_50(*uParam1))
	{
		uParam1->f_11 = func_134(iParam0);
		uParam1->f_12 = func_135(iParam0);
	}

	return;
}

void func_91(int iParam0) // Position - 0x1DF5 Signature - 22 01 03 00 00 66 00 5D 1C 9B 1D 18 14 06 18 48 10 8C 27
{
	Global_1940252.f_1556.f_4168.f_2087 = iParam0;
	return;
}

BOOL func_92(int iParam0) // Position - 0x1E0C Signature - 22 01 03 00 00 66 00 5D 1C 9B 1D 18 14 06 18 48 10 78
{
	if (iParam0 == Global_1940252.f_1556.f_4168.f_2085)
		return false;

	Global_1940252.f_1556.f_4168.f_2085 = iParam0;
	return true;
}

void func_93(int iParam0) // Position - 0x1E3A Signature - 22 01 03 00 00 66 00 2F 15 08
{
	if (iParam0 == 0)
		func_136(0);
	else
		func_136(func_137(iParam0));

	return;
}

const char* func_94(int iParam0) // Position - 0x1E5A Signature - 22 01 03 00 00 66 00 3C 04 00 D3
{
	switch (iParam0)
	{
		case joaat("Defense"):
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_DEFENSE");
	
		case joaat("deadeye"):
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_DEAD_EYE");
	
		case joaat("Recovery"):
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_RECOVERY");
	
		case joaat("Combat"):
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_COMBAT");
	
		default:
		
	}

	return "NULL";
}

void func_95(int iParam0) // Position - 0x1EB6 Signature - 22 01 2A
{
	int num;
	int num2;
	int i;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1940252.f_1556.f_4168.f_36);
	num.f_7 = 1;
	num.f_13 = -1;
	num.f_15 = -1;
	num.f_16 = -1;
	num.f_17 = -1;
	num.f_18 = -1;
	num.f_19 = -1;
	num.f_35 = -1;

	for (i = 0; i < 35; i = i + 1)
	{
		num2 = Global_1149432.f_11.f_1562.f_1611[i];
	
		if (!func_42(num2, &num, 2, -1))
		{
		}
		else if (!func_138(num))
		{
		}
		else if (num.f_36)
		{
		}
		else if (!func_50(num))
		{
		}
		else if (iParam0 != num.f_1)
		{
		}
		else
		{
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940252.f_1556.f_4168.f_36, i, "ability_card", Global_1940252.f_1556.f_4168.f_37[func_25(num2, 1) /*44*/]);
		}
	}

	return;
}

BOOL func_96() // Position - 0x1F95 Signature - 22 00 02 00 00 5D F8 89 11 27
{
	return DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1149432.f_8);
}

BOOL func_97(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x1FA7 Signature - 22 04 0F
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash hash;
	Hash hash2;
	Player playerFromGamerHandle;
	var unk;

	if (iParam2 == 2)
		flag = func_82() == 1;
	else if (iParam2 == 1)
		flag = true;
	else
		flag = false;

	if (iParam3 != -1)
		flag2 = true;

	if (!func_50(iParam0))
	{
		func_130(uParam1);
		return 0;
	}

	*uParam1 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/];
	uParam1->f_2 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_2;
	uParam1->f_1 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_1;
	uParam1->f_8 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_3;
	uParam1->f_16 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_4;
	uParam1->f_35 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_7;
	uParam1->f_36 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_8;

	if (!func_51(uParam1->f_2, 0))
	{
		func_130(uParam1);
		return 0;
	}

	flag3 = true;

	if (!func_50(*uParam1))
	{
		func_130(uParam1);
		return 0;
	}

	if (!flag)
	{
		if (func_83())
		{
			uParam1->f_19 = func_139(*uParam1);
			uParam1->f_20 = 1;
			uParam1->f_21 = 1;
			uParam1->f_9 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_5;
			uParam1->f_10 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_6;
		
			if (func_99(uParam1->f_19))
				uParam1->f_13 = Global_1149432.f_4804.f_34[uParam1->f_19 /*3*/].f_1;
			else
				uParam1->f_13 = 0;
		}
		else
		{
			uParam1->f_19 = func_140(*uParam1);
			hash = func_100(uParam1->f_19);
			uParam1->f_3 = { func_52(uParam1->f_2, func_101(flag3), hash, flag3) };
			uParam1->f_21 = func_141(uParam1);
			uParam1->f_13 = func_20(uParam1);
			uParam1->f_15 = func_142(uParam1);
			uParam1->f_20 = func_143(uParam1);
			uParam1->f_22 = func_144(uParam1);
			uParam1->f_14 = func_145(uParam1);
			uParam1->f_25 = func_146(uParam1);
			uParam1->f_26 = func_147(uParam1);
			uParam1->f_24 = func_148(uParam1);
			uParam1->f_23 = func_149(uParam1);
			uParam1->f_27 = func_150(uParam1);
			uParam1->f_29 = func_151(uParam1);
			uParam1->f_30 = func_152(uParam1);
			uParam1->f_32 = func_153(uParam1);
			uParam1->f_33 = func_154(uParam1);
			uParam1->f_34 = func_155(uParam1);
			hash2 = -915411861;
		
			if (!uParam1->f_20)
			{
				if (uParam1->f_30 || uParam1->f_29)
					hash2 = uParam1->f_31;
			
				uParam1->f_17 = func_18(Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_2, hash2);
			}
			else
			{
				if (uParam1->f_24 || uParam1->f_23)
					hash2 = uParam1->f_28;
			
				uParam1->f_17 = func_156(uParam1->f_13, hash2);
			}
		
			uParam1->f_18 = func_18(Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_2, -570078785);
		
			if (flag2)
			{
				uParam1->f_29 = 0;
				uParam1->f_30 = 0;
			
				if (uParam1->f_25)
					uParam1->f_25 = iParam3 == uParam1->f_13 + 1;
			
				if (uParam1->f_27)
					uParam1->f_27 = iParam3 == uParam1->f_13 + 1;
			
				if (uParam1->f_20)
					uParam1->f_20 = uParam1->f_13 >= iParam3;
			
				uParam1->f_13 = iParam3;
			}
		
			if (uParam1->f_20)
			{
				uParam1->f_9 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_3;
				uParam1->f_10 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_6;
			}
			else
			{
				func_157(uParam1);
			}
		}
	}
	else
	{
		playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1940252.f_1556.f_8));
		uParam1->f_9 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_3;
		uParam1->f_10 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_6;
	
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerFromGamerHandle))
		{
			uParam1->f_19 = func_158(*uParam1, playerFromGamerHandle);
		
			if (func_99(uParam1->f_19))
			{
				unk = { Global_1155150[playerFromGamerHandle /*30*/].f_5[uParam1->f_19 /*3*/] };
				uParam1->f_13 = unk.f_1;
				uParam1->f_21 = func_159(&(unk.f_2), 1);
			}
		}
	}

	uParam1->f_11 = func_160(uParam1);
	uParam1->f_12 = func_161(Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/], uParam1);
	return 1;
}

BOOL func_98(int iParam0) // Position - 0x23E4 Signature - 22 01 03 00 00 39 1E
{
	return func_162() == iParam0;
}

BOOL func_99(int iParam0) // Position - 0x23F3 Signature - 22 01 03 00 00 66 00 1D
{
	if (iParam0 > 3)
		return false;

	if (iParam0 < 0)
		return false;

	return true;
}

Hash func_100(int iParam0) // Position - 0x2410 Signature - 22 01 03 00 00 66 00 3C 04 00 00 00 00 00 15 00 01 00 00 00 17
{
	switch (iParam0)
	{
		case 0:
			return 1317351007;
	
		case 1:
			return -500478573;
	
		case 2:
			return -806573802;
	
		case 3:
			return -1109949204;
	
		default:
		
	}

	return -1060513333;
}

struct<4> func_101(BOOL bParam0) // Position - 0x245D Signature - 22 01 04 00 00 5D
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_108(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_52(joaat("character"), func_163(), -1591664384, bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_52(joaat("character"), func_163(), -1591664384, false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_52(joaat("character"), func_163(), -1591664384, bParam0);
}

int func_102(Any* panParam0, Hash hParam1, BOOL bParam2) // Position - 0x24FD Signature - 22 03 05 00 00 66 02 39
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_108(bParam2), panParam0, hParam1);
}

Hash func_103(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x2513 Signature - 22 07 17
{
	var unk;

	unk.f_9 = -1591664384;

	if (func_164(uParam0, hParam4, &unk, iParam5, bParam6))
		return unk.f_4;

	return 0;
}

BOOL func_104(Hash hParam0) // Position - 0x2543 Signature - 22 01 04 00 00 66 00 39 79
{
	int num;

	num = func_165(hParam0);

	if (num == joaat("ability_card") || num == joaat("passive_card") || num == joaat("active_card"))
		return true;

	return false;
}

int func_105(Hash hParam0) // Position - 0x257F Signature - 22 01 04 00 00 2F
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		if (hParam0 == Global_1149432.f_11.f_1562[i /*46*/].f_2)
			return Global_1149432.f_11.f_1562[i /*46*/];
	}

	return 0;
}

BOOL func_106(Hash hParam0, Hash hParam1) // Position - 0x25BF Signature - 22 02 04 00 00 66 00 2F 39 47 14 00 05 8B 04
{
	if (!func_51(hParam0, 0))
		return false;

	if (func_56(hParam0) || func_57(hParam0, 1077060302))
		return func_166(func_58(hParam0, false), hParam1, false);

	return ITEMDATABASE::_0xDEE7B3C76ED664BE(hParam0, hParam1) > 0;
}

int func_107(int iParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x260B Signature - 22 04 27
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_117(iParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam2;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar") || unk[i /*2*/] == joaat("character_role_token"))
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam2;
	return 0;
}

int func_108(BOOL bParam0) // Position - 0x269F Signature - 22 01 03 00 00 39 DC
{
	if (func_167() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

Hash func_109(int iParam0) // Position - 0x26E0 Signature - 22 01 03 00 00 66 00 3C 01
{
	switch (iParam0)
	{
		case 0:
			return MISC::GET_HASH_KEY("COST_ABILITY_CARD_RANK_VOUCHER");
	
		default:
		
	}

	return 0;
}

BOOL func_110(Hash hParam0) // Position - 0x2702 Signature - 22 01 03 00 00 66 00 39 EA 37 00 37 0F
{
	return func_168(hParam0) == 1946043663;
}

int func_111(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2716 Signature - 22 04 0D
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_51(hParam0, 0))
		return 0;

	num = func_165(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_169(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_170(hParam0, false);
	}

	if (func_171(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_108(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_172(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_108(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

Hash func_112(int iParam0) // Position - 0x27D8 Signature - 22 01 03 00 00 66 00 3C 03 00 00 00 00 00 0F 00 01 00 00 00 14
{
	switch (iParam0)
	{
		case 0:
			return MISC::GET_HASH_KEY("COST_ABILITY_CARD_RANK_COUPON");
	
		case 1:
			return MISC::GET_HASH_KEY("COST_ABILITY_CARD_RANK_COUPON_2");
	
		case 2:
			return MISC::GET_HASH_KEY("COST_ABILITY_CARD_RANK_COUPON_3");
	
		default:
		
	}

	return 0;
}

BOOL func_113(Hash hParam0) // Position - 0x281C Signature - 22 01 03 00 00 66 00 39 EA 37 00 37 8D
{
	return func_168(hParam0) == -126813555;
}

Hash func_114(Hash hParam0) // Position - 0x2830 Signature - 22 01 03 00 00 66 00 50
{
	return hParam0;
}

BOOL func_115(Hash hParam0, Hash hParam1) // Position - 0x283A Signature - 22 02 04 00 00 66 00 11
{
	if (!func_173(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

int func_116(Hash hParam0, BOOL bParam1) // Position - 0x2870 Signature - 22 02 05 00 00 66 00 11
{
	int num;

	if (!func_173(hParam0, 2))
		return 0;

	num = 0;

	if (num != 0 && bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
		return 0;

	return num;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_117(int iParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x28A9 Signature - 22 06 09 00 00 2F 66 03 32 66 02 76 6D 0F 8A 04 00 2F 50 06 01 66 00 39
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_174(iParam0))
		return false;

	*uParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam4;
		return false;
	}

	!bParam4;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x70;
	
		!bParam4;
	}

	if (bParam5)
		func_175(iParam0, hParam1, uParam2, *uParam3);

	return true;
}

void func_118(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x2938 Signature - 22 04 2B 00 00 66 02 76 6D 0F 8A 06 00 50 04 00 68 16 00 66 03 66 02 76 20 6A 05 8B 05 00 66 03 09 35 30 8B 03 00 50 04 00 4B 0D 6A 80 01 6D 0A 3D 41 41 66 00 4B 0D 03 09 00 03
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Any any;
	int num;
	var unk12;
	var unk14;

	if (*uParam2 < 15)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	num.f_1 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(hParam0, &num) || num == 0)
		return;

	unk14 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk14[i] = 1f;
	}

	for (j = 0; j < num; j = j + 1)
	{
		any = num.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(any);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(any, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(any);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(any, l, &unk12))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (uParam2->[i /*2*/] == unk12)
							{
								unk14[i] = unk14[i] + (unk12.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk14[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk14[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk14[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_168(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

Hash func_119(int iParam0, int iParam1) // Position - 0x2B0E Signature - 22 02 04 00 00 66 00 3C 04
{
	switch (iParam0)
	{
		case joaat("Defense"):
			switch (iParam1)
			{
				case 0:
					return joaat("ability_card_defense_tier_1");
			
				case 1:
					return joaat("ability_card_defense_tier_2");
			
				case 2:
					return joaat("ability_card_defense_tier_3");
			
				default:
					break;
			}
			break;
	
		case joaat("deadeye"):
			switch (iParam1)
			{
				case 0:
					return joaat("ability_card_dead_eye_tier_1");
			
				case 1:
					return joaat("ability_card_dead_eye_tier_2");
			
				case 2:
					return joaat("ability_card_dead_eye_tier_3");
			
				default:
					break;
			}
			break;
	
		case joaat("Recovery"):
			switch (iParam1)
			{
				case 0:
					return joaat("ability_card_recovery_tier_1");
			
				case 1:
					return joaat("ability_card_recovery_tier_2");
			
				case 2:
					return joaat("ability_card_recovery_tier_3");
			
				default:
					break;
			}
			break;
	
		case joaat("Combat"):
			switch (iParam1)
			{
				case 0:
					return joaat("ability_card_combat_tier_1");
			
				case 1:
					return joaat("ability_card_combat_tier_2");
			
				case 2:
					return joaat("ability_card_combat_tier_3");
			
				default:
					break;
			}
			break;
	}

	return joaat("COLOR_WHITE");
}

var func_120() // Position - 0x2C0F Signature - 22 00 02 00 00 5D F8 89 11 18
{
	return Global_1149432.f_4621.f_163;
}

BOOL func_121(int iParam0) // Position - 0x2C20 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 39
{
	if (iParam0 < 0)
		return false;

	if (func_167() == 0)
		return func_176(iParam0);

	return iParam0 <= func_177();
}

BOOL func_122(int iParam0) // Position - 0x2C4D Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 2F 15 04 00 09 50 01 01 2F
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

char* func_123(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x2C70 Signature - 22 04 06 00 00 4B
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_124(int iParam0) // Position - 0x2C84 Signature - 22 01 03 00 00 66 00 3C 02
{
	switch (iParam0)
	{
		case 0:
			return Global_1149432.f_11.f_1562.f_1647[0];
	
		case 1:
			return Global_1149432.f_11.f_1562.f_1647[1];
	
		default:
		
	}

	return -1;
}

BOOL func_125(int iParam0) // Position - 0x2CC5 Signature - 22 01 03 00 00 5D 0B
{
	return func_178(&(Global_1956875.f_1565), iParam0, 1);
}

const char* func_126() // Position - 0x2CDB Signature - 22 00 02 00 00 6D
{
	return func_179(Global_1940252.f_1556.f_8.f_2);
}

const char* func_127(const char* sParam0, int iParam1) // Position - 0x2CF5 Signature - 22 02 04 00 00 66 00 03
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);

	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);

	return func_180(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

const char* func_128(int iParam0) // Position - 0x2D33 Signature - 22 01 03 00 00 66 00 39 EA 3B
{
	if (!func_181(iParam0))
		if (func_44(iParam0))
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_LOCKED");
		else
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_LOCKED", func_182(iParam0));
	else if (!func_45(iParam0, true))
		if (func_44(iParam0))
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_EQUIPPED");
		else
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_EQUIPPED");
	else if (func_44(iParam0))
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_OPEN");
	else
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_OPEN");

	return "INVALID";
}

const char* func_129(var uParam0) // Position - 0x2DCC Signature - 22 01 26
{
	int num;
	var unk;
	Hash hash;
	int num2;
	var unk17;

	if (func_183(uParam0))
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_LOCKED", func_184(uParam0->f_2, true));
	}
	else if (uParam0->f_29)
	{
		num = func_18(uParam0->f_2, -915411861);
	
		if (num <= 0)
		{
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_CLAIM_WITH_REWARD_F");
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "$", 128);
			TEXT_LABEL_APPEND_INT(&unk, func_72(num), 128);
			TEXT_LABEL_APPEND_STRING(&unk, ".", 128);
			TEXT_LABEL_APPEND_STRING(&unk, func_71(func_73(num)), 128);
			return MISC::VAR_STRING(10, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_CLAIM_WITH_REWARD", &unk);
		}
	}
	else if (uParam0->f_30)
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_VOUCHER");
	}
	else if (uParam0->f_32)
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_CASH");
	}
	else if (uParam0->f_24)
	{
		hash = func_21(func_20(uParam0) + 1);
	
		if (uParam0->f_25)
			num2 = func_18(hash, -489628648);
		else if (uParam0->f_26)
			num2 = func_18(hash, -570078785);
	
		TEXT_LABEL_ASSIGN_STRING(&unk17, "$", 128);
		TEXT_LABEL_APPEND_INT(&unk17, func_72(num2), 128);
		TEXT_LABEL_APPEND_STRING(&unk17, ".", 128);
		TEXT_LABEL_APPEND_STRING(&unk17, func_71(func_73(num2)), 128);
		return MISC::VAR_STRING(10, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UPGRADE_OFFER", &unk17);
	}
	else if (uParam0->f_25)
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UPGRADE");
	}
	else if (uParam0->f_22)
	{
		if (uParam0->f_14)
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_EQUIPPED_MAX");
		else
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_EQUIPPED");
	}
	else
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UNEQUIPPED");
	}

	return "INVALID";
}

void func_130(var uParam0) // Position - 0x2F52 Signature - 22 01 28 00 00 4B 03 6A 80 07 09 3D 41 6A 80 0D 08 3D 41 6A 80 0F 08 3D 41 6A 80 10 08 3D 41 6A 80 11 08 3D 41 6A 80 12 08 3D 41 6A 80 13 08 3D 41 6A 80 23 08 3D 41 41 4B
{
	var unk;

	unk.f_7 = 1;
	unk.f_13 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = -1;
	unk.f_35 = -1;
	func_157(&unk);
	*uParam0 = { unk };
	return;
}

void func_131(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38) // Position - 0x2F9D Signature - 22 27
{
	BOOL flag;

	flag = func_181(iParam0);

	if (func_83())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_47, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_46, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_50, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, false);
		func_26(uParam1, &uParam2);
		return;
	}

	func_26(uParam1, &uParam2);

	if (flag)
		func_185(&(Global_1149432.f_4621.f_36[iParam0 /*3*/].f_2), 1);
	else
		func_186(&(Global_1149432.f_4621.f_36[iParam0 /*3*/].f_2), 1);

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_46, flag && func_87());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_47, flag && func_87() && func_65(0));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, uParam2.f_22 && func_87());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, uParam2.f_22 && func_87() && func_65(3));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_50, flag);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_51, func_74(func_182(iParam0)));
	return;
}

BOOL func_132(int iParam0) // Position - 0x30A4 Signature - 22 01 03 00 00 5D 1C 9B 1D 18 14 06 18 48 10 78
{
	return Global_1940252.f_1556.f_4168.f_2086 == iParam0;
}

void func_133(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39) // Position - 0x30BC Signature - 22 28
{
	func_187(uParam1, uParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_46, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_47, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_50, func_159(&uParam39, 1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_51, func_74(func_182(iParam0)));
	return;
}

const char* func_134(int iParam0) // Position - 0x3114 Signature - 22 01 03 00 00 66 00 3C 04 00 00 00 00 00 15 00 01 00 00 00 1B 00 02 00 00 00 21 00 03 00 00 00 27 00 68 30 00 11 25 1E
{
	switch (iParam0)
	{
		case 0:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_ACTIVE_SLOT_FOCUS_TITLE");
	
		case 1:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_1_FOCUS_TITLE");
	
		case 2:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_2_FOCUS_TITLE");
	
		case 3:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_3_FOCUS_TITLE");
	
		default:
		
	}

	return "NULL";
}

const char* func_135(int iParam0) // Position - 0x3170 Signature - 22 01 03 00 00 66 00 3C 04 00 00 00 00 00 15 00 01 00 00 00 1B 00 02 00 00 00 21 00 03 00 00 00 27 00 68 30 00 11 25 D3
{
	switch (iParam0)
	{
		case 0:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_ACTIVE_SLOT_FOCUS_DESCRIPTION");
	
		case 1:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
	
		case 2:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
	
		case 3:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
	
		default:
		
	}

	return "NULL";
}

void func_136(int iParam0) // Position - 0x31CC Signature - 22 01 03 00 00 5D 1C 9B 1D 18 14 06 18 48 10 27 0B
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940252.f_1556.f_4168.f_11, iParam0);
	return;
}

int func_137(int iParam0) // Position - 0x31E6 Signature - 22 01 03 00 00 66 00 39 1F 14 00 05 8B 04 00 2F 50 01 01 66 00 09 39 04 0A 00 5D F8 89 11 80 0B 18 1A 06 63 2E 27 07
{
	if (!func_50(iParam0))
		return 0;

	return Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_7;
}

BOOL func_138(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36) // Position - 0x3210 Signature - 22 25 27
{
	if (func_57(uParam0.f_2, 216050813))
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(-1387714323))
			return false;

	return true;
}

int func_139(int iParam0) // Position - 0x323A Signature - 22 01 04 00 00 39 71
{
	int i;

	if (!func_83())
		return -1;

	if (!func_50(iParam0))
		return -1;

	for (i = 0; i < 4; i = i + 1)
	{
		if (Global_1149432.f_4804.f_34[i /*3*/] == iParam0)
			return i;
	}

	return -1;
}

int func_140(int iParam0) // Position - 0x3286 Signature - 22 01 06 00 00 66
{
	int i;
	Hash hash;
	Hash hash2;

	if (!func_50(iParam0))
		return -1;

	hash2 = func_188(iParam0);

	for (i = 0; i < 4; i = i + 1)
	{
		hash = func_100(i);
	
		if (func_189(hash2, hash, true))
			return i;
	}

	return -1;
}

BOOL func_141(var uParam0) // Position - 0x32D0 Signature - 22 01 03 00 00 6D 25
{
	if (!func_138(*uParam0))
		return false;

	if (func_143(uParam0))
		return true;

	return UNLOCK::UNLOCK_IS_UNLOCKED(uParam0->f_2);
}

int func_142(var uParam0) // Position - 0x32FE Signature - 22 01 0C
{
	int num;
	int num2;
	int i;
	var guid;
	Hash hash;
	Hash hash2;

	if (uParam0->f_13 >= 2)
		return 0;

	if (!func_50(*uParam0))
		return -1;

	if (!func_51(uParam0->f_2, 0))
		return -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam0->f_3)))
		return 0;

	for (i = 0; i < 3; i = i + 1)
	{
		hash = func_21(i);
		guid = { func_52(hash, uParam0->f_3, 1635590003, true) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			break;
	
		hash2 = func_190(i);
		num = func_191(1412640604, guid, hash2, true, false, false);
		num2 = num2 + num;
	}

	return num2;
}

BOOL func_143(var uParam0) // Position - 0x33A4 Signature - 22 01 03 00 00 66 00 27 02 09
{
	return func_192(uParam0->f_2, true);
}

int func_144(var uParam0) // Position - 0x33B5 Signature - 22 01 04 00 00 66 00 76
{
	int i;

	if (!func_50(*uParam0))
		return 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (func_193(i, true) == uParam0->f_2)
			return 1;
	}

	return 0;
}

BOOL func_145(var uParam0) // Position - 0x33F1 Signature - 22 01 03 00 00 66 00 27 0D
{
	return uParam0->f_13 >= 2;
}

BOOL func_146(var uParam0) // Position - 0x33FF Signature - 22 01 03 00 00 66 00 27 0E
{
	return !uParam0->f_14 && uParam0->f_20 && func_194(uParam0);
}

int func_147(var uParam0) // Position - 0x3420 Signature - 22 01 03 00 00 2F 50 01 01 22 01 07
{
	return 0;
}

int func_148(var uParam0) // Position - 0x3429 Signature - 22 01 07 00 00 66 00 27 0E 8B 04 00 2F 50 01 01 66 00 27 14 05 8B 04 00 2F 50 01 01 66 00 39 AB 40 00 05 8B 04 00 2F 50 01 01 66 00 39 AE 08 00 5C 01 67 03 66 03 39 29 09 00 67 04 66 04 2F 39 47 14 00 05 8B 04 00 2F 50 01 01 66 04 4B 05 39 52
{
	int num;
	Hash hash;
	Hash hash2;
	int num2;

	if (uParam0->f_14)
		return 0;

	if (!uParam0->f_20)
		return 0;

	if (!func_195(uParam0))
		return 0;

	num = func_20(uParam0) + 1;
	hash = func_21(num);

	if (!func_51(hash, 0))
		return 0;

	if (!func_23(hash, &hash2))
		return 0;

	uParam0->f_28 = hash2;
	num2 = func_196(num, hash2);

	if (num2 > 0 && uParam0->f_15 < num2)
		return 0;

	return 1;
}

int func_149(var uParam0) // Position - 0x34AF Signature - 22 01 07 00 00 66 00 27 0E 8B 04 00 2F 50 01 01 66 00 27 14 05 8B 04 00 2F 50 01 01 66 00 39 AB 40 00 05 8B 04 00 2F 50 01 01 66 00 39 AE 08 00 5C 01 67 03 66 03 39 29 09 00 67 04 66 04 2F 39 47 14 00 05 8B 04 00 2F 50 01 01 66 04 4B 05 39 3B
{
	int num;
	Hash hash;
	Hash hash2;
	int num2;

	if (uParam0->f_14)
		return 0;

	if (!uParam0->f_20)
		return 0;

	if (!func_195(uParam0))
		return 0;

	num = func_20(uParam0) + 1;
	hash = func_21(num);

	if (!func_51(hash, 0))
		return 0;

	if (!func_22(hash, &hash2))
		return 0;

	uParam0->f_28 = hash2;
	num2 = func_196(num, hash2);

	if (num2 > 0 && uParam0->f_15 < num2)
		return 0;

	return 1;
}

BOOL func_150(var uParam0) // Position - 0x3535 Signature - 22 01 03 00 00 66 00 27 1A
{
	return uParam0->f_26 || uParam0->f_25 || uParam0->f_24 || uParam0->f_23;
}

int func_151(var uParam0) // Position - 0x355F Signature - 22 01 04 00 00 66 00 27 14 8B 04 00 2F 50 01 01 66 00 39 AB 40 00 05 8B 04 00 2F 50 01 01 66 00 27 02 4B 03 39 30
{
	var unk;

	if (uParam0->f_20)
		return 0;

	if (!func_195(uParam0))
		return 0;

	if (!func_197(uParam0->f_2, &unk))
		return 0;

	uParam0->f_31 = unk;
	return 1;
}

int func_152(var uParam0) // Position - 0x3599 Signature - 22 01 04 00 00 66 00 27 14 8B 04 00 2F 50 01 01 66 00 39 AB 40 00 05 8B 04 00 2F 50 01 01 66 00 27 02 4B 03 39 47
{
	var unk;

	if (uParam0->f_20)
		return 0;

	if (!func_195(uParam0))
		return 0;

	if (!func_198(uParam0->f_2, &unk))
		return 0;

	uParam0->f_31 = unk;
	return 1;
}

BOOL func_153(var uParam0) // Position - 0x35D3 Signature - 22 01 03 00 00 66 00 27 14 05 6A 8B 07
{
	return !uParam0->f_20 && func_195(uParam0) && !uParam0->f_29 && !uParam0->f_30;
}

int func_154(var uParam0) // Position - 0x35FF Signature - 22 01 03 00 00 2F 50 01 01 22 01 03
{
	return 0;
}

BOOL func_155(var uParam0) // Position - 0x3608 Signature - 22 01 03 00 00 66 00 27 21
{
	return uParam0->f_33 || uParam0->f_32 || uParam0->f_29 || uParam0->f_30;
}

int func_156(int iParam0, Hash hParam1) // Position - 0x3632 Signature - 22 02 05 00 00 66 00 5C
{
	Hash hash;

	hash = func_21(iParam0 + 1);
	return func_18(hash, hParam1);
}

void func_157(var uParam0) // Position - 0x364C Signature - 22 01 03 00 00 37
{
	uParam0->f_9 = joaat("ability_card_back");
	uParam0->f_10 = joaat("ability_cards");
	return;
}

int func_158(int iParam0, Player plParam1) // Position - 0x3666 Signature - 22 02 06 00 00 66 01
{
	int i;
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam1))
		return -1;

	if (!func_50(iParam0))
		return -1;

	player = plParam1;

	for (i = 0; i < 4; i = i + 1)
	{
		if (Global_1155150[player /*30*/].f_5[i /*3*/] == iParam0)
			return i;
	}

	return -1;
}

BOOL func_159(var uParam0, int iParam1) // Position - 0x36B9 Signature - 22 02 04 00 00 66 00 76 66 01 39
{
	return func_199(*uParam0, iParam1);
}

const char* func_160(var uParam0) // Position - 0x36CA Signature - 22 01 03 00 00 6D 2A
{
	return MISC::VAR_STRING(42, "MP_ABILITY_CARD_DISPLAY_STRING", MISC::VAR_STRING(0, uParam0->f_8), MISC::VAR_STRING(2, func_200(uParam0->f_13)));
}

char* func_161(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46) // Position - 0x36F2 Signature - 22 2F 31
{
	if (!func_201(uParam46->f_13))
		return "NULL";

	return MISC::VAR_STRING(0, uParam0.f_9[uParam46->f_13 /*12*/].f_11);
}

int func_162() // Position - 0x371E Signature - 22 00 02 00 00 5D 1C 9B 1D 18 14 06 18 48 10 78 27
{
	return Global_1940252.f_1556.f_4168.f_2087;
}

struct<4> func_163() // Position - 0x3733 Signature - 22 00 06
{
	var unk;

	return unk;
}

BOOL func_164(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, int iParam6, BOOL bParam7) // Position - 0x373F Signature - 22 08 0B
{
	int inventoryId;

	inventoryId = func_108(bParam7);

	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(inventoryId, &uParam0, hParam4) <= iParam6)
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(inventoryId, &uParam0, hParam4, iParam6, panParam5))
		return false;

	return true;
}

int func_165(Hash hParam0) // Position - 0x3779 Signature - 22 01 0A 00 00 66 00 2F 39 47 14 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 10 05 8B 04 00 2F 50 01 01 4B 03 27 02
{
	var unk;

	if (!func_51(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_2;
}

BOOL func_166(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x37A4 Signature - 22 03 05 00 00 66 00
{
	if (!func_174(iParam0))
		return false;

	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, hParam1) == 0)
		return false;

	if (bParam2)
		return !func_202(iParam0, hParam1);

	return true;
}

int func_167() // Position - 0x37DC Signature - 22 00 02 00 00 5D 17
{
	return Global_1572887.f_14;
}

int func_168(Hash hParam0) // Position - 0x37EA Signature - 22 01 0A 00 00 66 00 2F 39 47 14 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 10 05 8B 04 00 2F 50 01 01 4B 03 27 01
{
	var unk;

	if (!func_51(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_1;
}

Hash func_169(Hash hParam0, int iParam1) // Position - 0x3815 Signature - 22 02 07
{
	int num;
	var unk;
	Hash hash;

	if (!func_51(hParam0, 0))
		return 0;

	num = func_165(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_57(hParam0, 1399091007))
	{
		func_203(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_170(Hash hParam0, BOOL bParam1) // Position - 0x388F Signature - 22 02 18
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_204(hParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };

	if (bParam1)
		func_206(&unk, func_205(false));

	if (!func_207(&unk, &num, &num2, false))
		return 0;

	func_208(num);
	return num2;
}

int func_171(Hash hParam0, int iParam1) // Position - 0x38EE Signature - 22 02 04 00 00 66 01 2F
{
	if (iParam1 == 0)
		return 0;

	if (func_173(func_114(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, iParam1);
}

struct<4> func_172(Hash hParam0, BOOL bParam1) // Position - 0x391A Signature - 22 02 09 00 00 66 00 66
{
	var unk;

	unk = { func_209(hParam0, bParam1, 0) };
	return func_52(hParam0, unk, unk.f_4, bParam1);
}

BOOL func_173(Hash hParam0, int iParam1) // Position - 0x393F Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 0A
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

BOOL func_174(int iParam0) // Position - 0x3959 Signature - 22 01 03 00 00 66 00 2F 15 04
{
	if (iParam0 == 0)
		return false;

	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(iParam0);
}

void func_175(int iParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x3971 Signature - 22 04 2B 00 00 66 02 76 6D 0F 8A 06 00 50 04 00 68 16 00 66 03 66 02 76 20 6A 05 8B 05 00 66 03 09 35 30 8B 03 00 50 04 00 4B 0D 6A 80 01 6D 0A 3D 41 41 66 00 4B 0D 03 09 00 22
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Any any;
	int num;
	var unk12;
	var unk14;

	if (*uParam2 < 15)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	num.f_1 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_AWARD_COST_MODIFIERS(iParam0, &num) || num == 0)
		return;

	unk14 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk14[i] = 1f;
	}

	for (j = 0; j < num; j = j + 1)
	{
		any = num.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(any);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(any, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(any);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(any, l, &unk12))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (uParam2->[i /*2*/] == unk12)
							{
								unk14[i] = unk14[i] + (unk12.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk14[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk14[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk14[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_168(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

BOOL func_176(int iParam0) // Position - 0x3B47 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 2F 15 04 00 09 50 01 01 66
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_177() // Position - 0x3B6A Signature - 22 00 02 00 00 39 DC
{
	if (func_167() == 0)
		return MONEY::_NETWORK_GET_CASH_BALANCE();

	return MONEY::_MONEY_GET_CASH_BALANCE();
}

BOOL func_178(Any* panParam0, int iParam1, int iParam2) // Position - 0x3B85 Signature - 22 03 07
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

const char* func_179(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x3BBC Signature - 22 10
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

const char* func_180(const char* sParam0, int iParam1) // Position - 0x3BD0 Signature - 22 02 04 00 00 6D
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

BOOL func_181(int iParam0) // Position - 0x3BEA Signature - 22 01 03 00 00 66 00 3C 04 00 00 00 00 00 15 00 01 00 00 00 1B 00 02 00 00 00 21 00 03 00 00 00 27 00 68 30 00 37
{
	switch (iParam0)
	{
		case 0:
			return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_CARD_SLOT_DEADEYE"));
	
		case 1:
			return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_CARD_SLOT_PASSIVE_0"));
	
		case 2:
			return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_CARD_SLOT_PASSIVE_1"));
	
		case 3:
			return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_CARD_SLOT_PASSIVE_2"));
	
		default:
		
	}

	return false;
}

int func_182(int iParam0) // Position - 0x3C43 Signature - 22 01 03 00 00 66 00 3C 04 00 00 00 00 00 15 00 01 00 00 00 13
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 10;
	
		case 2:
			return 20;
	
		case 3:
			return 40;
	
		default:
		
	}

	return -1;
}

BOOL func_183(var uParam0) // Position - 0x3C7F Signature - 22 01 03 00 00 66 00 27 14 05 6A 8B 08
{
	return !uParam0->f_20 && !func_195(uParam0);
}

int func_184(Hash hParam0, BOOL bParam1) // Position - 0x3C98 Signature - 22 02 06 00 00 66 00 2F
{
	int outData;

	if (!func_51(hParam0, 0))
		return -1;

	UNLOCK::_UNLOCK_GET_ITEM_ROLE_UNLOCK_INFO(hParam0, &outData);

	if (outData.f_1 < 1)
		return -1;
	else if (func_57(hParam0, 81450561) || func_57(hParam0, 1342455455))
		return -1;

	switch (outData)
	{
		case joaat("CHARACTER_RANK_TRADER"):
		case joaat("CHARACTER_RANK_BOUNTY_HUNTER"):
		case joaat("CHARACTER_RANK_COLLECTOR"):
			if (bParam1)
				return outData.f_1;
		
			return -1;
	
		case joaat("CHARACTER_RANK"):
			return outData.f_1;
	
		case joaat("CHARACTER_RANK_INTRO"):
			return 1;
	
		default:
		
	}

	return -1;
}

void func_185(int iParam0, int iParam1) // Position - 0x3D2B Signature - 22 02 04 00 00 66 00 66 01 39 46
{
	func_210(iParam0, iParam1);
	return;
}

void func_186(int iParam0, int iParam1) // Position - 0x3D3B Signature - 22 02 04 00 00 66 00 66 01 39 57
{
	func_211(iParam0, iParam1);
	return;
}

void func_187(var uParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37) // Position - 0x3D4B Signature - 22 26 28 00 00 66 00 27
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, hParam1.f_11);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_3, hParam1.f_12);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_4, hParam1.f_9);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_5, hParam1.f_10);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_41, func_61(hParam1.f_1, hParam1.f_13));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6, hParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_36, hParam1.f_13);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_7, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_34, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_12, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_13, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_35, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_14, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_15, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_16, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_17, false);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_18, "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_19, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_20, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_21, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_22, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_23, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_23, false);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_25, "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_26, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_27, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_28, false);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_31, "");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_32, "");
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_33, -1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_43, "");
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_38, -1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_40, -1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_10, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_8, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_9, false);
	return;
}

Hash func_188(int iParam0) // Position - 0x3ECA Signature - 22 01 03 00 00 66 00 39 1F 14 00 05 8B 04 00 2F 50 01 01 66 00 09 39 04 0A 00 5D F8 89 11 80 0B 18 1A 06 63 2E 27 02
{
	if (!func_50(iParam0))
		return 0;

	return Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_2;
}

BOOL func_189(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x3EF4 Signature - 22 03 09 00 00 66 00 39
{
	var unk;

	if (!func_104(hParam0))
		return false;

	unk = { func_101(bParam2) };

	if (func_191(hParam0, unk, hParam1, bParam2, false, false) >= 1)
		return true;

	return false;
}

Hash func_190(int iParam0) // Position - 0x3F2D Signature - 22 01 04 00 00 66 00 67 03 66 03 39 6C
{
	int num;

	num = iParam0;
	return func_212(num);
}

int func_191(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x3F3F Signature - 22 09
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_51(hParam0, 0))
		return 0;

	if (!bParam7 && func_171(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_52(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_108(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_108(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_192(Hash hParam0, BOOL bParam1) // Position - 0x3FBE Signature - 22 02 08 00 00 66 00 39
{
	var unk;

	if (!func_104(hParam0))
		return 0;

	unk = { func_101(bParam1) };

	if (func_191(hParam0, unk, -1060513333, bParam1, false, false) >= 1)
		return 1;
	else if (func_191(hParam0, unk, 1317351007, bParam1, false, false) >= 1)
		return 1;
	else if (func_191(hParam0, unk, -500478573, bParam1, false, false) >= 1)
		return 1;
	else if (func_191(hParam0, unk, -806573802, bParam1, false, false) >= 1)
		return 1;
	else if (func_191(hParam0, unk, -1109949204, bParam1, false, false) >= 1)
		return 1;

	return 0;
}

int func_193(int iParam0, BOOL bParam1) // Position - 0x4073 Signature - 22 02 08 00 00 66 01
{
	var unk;

	unk = { func_101(bParam1) };
	return func_103(unk, func_100(iParam0), 0, bParam1);
}

BOOL func_194(var uParam0) // Position - 0x4096 Signature - 22 01 03 00 00 66 00 27 0F
{
	return uParam0->f_15 >= func_75(uParam0->f_13);
}

BOOL func_195(var uParam0) // Position - 0x40AB Signature - 22 01 03 00 00 66 00 27 02 03
{
	return UNLOCK::UNLOCK_IS_VISIBLE(uParam0->f_2);
}

int func_196(int iParam0, Hash hParam1) // Position - 0x40BB Signature - 22 02 26
{
	Hash hash;
	int num;
	var unk;
	int i;

	hash = func_21(iParam0);

	if (!func_51(hash, 0))
		return func_75(iParam0);

	unk = 15;

	if (!func_60(hash, hParam1, &unk, &num, true, false))
		return func_75(iParam0);

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] != 1412640604)
		{
		}
		else
		{
			return unk[i /*2*/].f_1;
		}
	}

	return 0;
}

BOOL func_197(Hash hParam0, var uParam1) // Position - 0x4130 Signature - 22 02 04 00 00 66 00 09 39 A7
{
	*uParam1 = func_213(hParam0, true);
	return *uParam1 != 0;
}

BOOL func_198(Hash hParam0, var uParam1) // Position - 0x4147 Signature - 22 02 04 00 00 66 00 09 2F
{
	*uParam1 = func_214(hParam0, true, false);
	return *uParam1 != 0;
}

BOOL func_199(int iParam0, int iParam1) // Position - 0x415F Signature - 22 02 04 00 00 66 00 66 01 69
{
	return iParam0 && iParam1 != false;
}

char* func_200(var uParam0) // Position - 0x416E Signature - 22 01 04 00 00 66 00 67 03 66 03 39 99
{
	var unk;

	unk = uParam0;
	return func_215(unk);
}

BOOL func_201(int iParam0) // Position - 0x4180 Signature - 22 01 03 00 00 66 00 2F 7E
{
	if (iParam0 >= 0 && iParam0 <= 2)
		return true;

	return false;
}

BOOL func_202(int iParam0, Hash hParam1) // Position - 0x419D Signature - 22 02 E0
{
	var unk;
	int num;
	Hash unlockHash;
	int num2;
	int i;
	int j;

	unk = 10;
	unk.f_1.f_4 = 15;
	unk.f_1.f_36 = 10;
	unk.f_1.f_47.f_4 = 15;
	unk.f_1.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(iParam0, &unk, &num, 10) || num == 0)
		return false;

	num2 = 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*47*/] == hParam1)
		{
			num2 = unk[i /*47*/].f_35;
		
			for (j = 0; j < num2; j = j + 1)
			{
				unlockHash = unk[i /*47*/].f_36[j];
			
				if (unlockHash == 0)
				{
				}
				else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
				{
					return true;
				}
			}
		}
	}

	return false;
}

void func_203(Hash hParam0, var uParam1, var uParam2) // Position - 0x42E6 Signature - 22 03 05 00 00 2F
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

struct<18> func_204(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x44F2 Signature - 22 07 1B
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

struct<4> func_205(BOOL bParam0) // Position - 0x45D0 Signature - 22 01 04 00 00 66 00 39 9F 26 00 67 03 66 03 11 15
{
	int num;

	num = func_108(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_52(923904168, func_101(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_52(923904168, func_101(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_52(923904168, func_101(bParam0), -740156546, false);
}

void func_206(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x4671 Signature - 22 05 07 00 00 4B
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_207(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x468C Signature - 22 04 06 00 00 66 03
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_108(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_208(int iParam0) // Position - 0x46B1 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 03
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

struct<5> func_209(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x46D2 Signature - 22 03 2F 00 00 66
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_101(bParam1) };
	unk.f_4 = 1084182731;
	num = func_165(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_220(hParam0, -1823706425))
			{
				unk = { func_52(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_220(hParam0, -1483207246))
			{
				unk = { func_52(joaat("WARDROBE"), unk, 1034665895, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_52(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1311702610))
			{
				unk.f_4 = -1311702610;
			}
			else if (func_220(hParam0, -1653629781))
			{
				unk = { func_52(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -1591664384;
			unk = { func_219(bParam1) };
		
			switch (func_168(hParam0))
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
			unk = { func_52(joaat("WARDROBE"), unk, 1034665895, bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_205(bParam1) };
		
			if (iParam2 && func_216(hParam0, true))
			{
				unk6.f_9 = -1591664384;
			
				if (!func_217(hParam0, &unk, 1728382685, false, false))
					unk.f_4 = 1728382685;
				else if (!func_217(hParam0, &unk, -649335959, false, false))
					unk.f_4 = -649335959;
				else if (func_218(hParam0, &unk6, 1728382685))
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
			
				if (!func_221(unk, &unk28, bParam1, false, -1))
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
			else if (func_220(hParam0, -1653629781))
			{
				unk = { func_52(1384535894, unk, 1784584921, bParam1) };
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

void func_210(int iParam0, int iParam1) // Position - 0x4A46 Signature - 22 02 04 00 00 66 00 76 66 01 30
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_211(int iParam0, int iParam1) // Position - 0x4A57 Signature - 22 02 04 00 00 66 00 76 66 00
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

int func_212(int iParam0) // Position - 0x4A6C Signature - 22 01 03 00 00 66 00 3C 03 00 00 00 00 00 0F 00 01 00 00 00 11 00 02 00 00 00 13 00 68 18 00 37 85
{
	switch (iParam0)
	{
		case 0:
			return -2047978619;
	
		case 1:
			return -586319254;
	
		case 2:
			return 249896112;
	
		default:
		
	}

	return 0;
}

Hash func_213(Hash hParam0, BOOL bParam1) // Position - 0x4AA7 Signature - 22 02 27 00 00 4B 06 6D 0F 3D 41 2F 67 04 66 04 1D
{
	int i;
	int num;
	var unk;
	Hash hash;
	int j;

	unk = 15;

	for (i = 0; i < 3; i = i + 1)
	{
		hash = func_222(i, true, false);
	
		if (!func_60(hParam0, hash, &unk, &num, true, false))
		{
		}
		else
		{
			for (j = 0; j < num; j = j + 1)
			{
				if (func_110(unk[j /*2*/]))
				{
					if (!bParam1 || func_111(unk[j /*2*/], false, true, true) > 0)
						return hash;
				
					break;
				}
			
				if (unk[j /*2*/] == 0)
					break;
			}
		}
	}

	return 0;
}

Hash func_214(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4B3A Signature - 22 03 2F 00 00 4B
{
	int i;
	int num;
	var unk;
	var unk2;
	Hash hash;
	Hash hash2;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var unk3;
	Hash hash3;
	int j;

	unk3 = 15;

	for (i = 0; i < 5; i = i + 1)
	{
		hash3 = func_222(i, false, true);
	
		if (!func_60(hParam0, hash3, &unk3, &num, true, false))
		{
		}
		else
		{
			flag3 = false;
			hash2 = 0;
		
			for (j = 0; j < num; j = j + 1)
			{
				if (func_113(unk3[j /*2*/]))
				{
					if (!bParam1 || func_111(unk3[j /*2*/], false, true, true) > 0)
						flag3 = true;
				}
				else if (unk3[j /*2*/] == joaat("currency_cash") || unk3[j /*2*/] == joaat("currency_gold_bar"))
				{
					if (bParam2 && unk3[j /*2*/] == joaat("currency_cash") || !bParam2 && unk3[j /*2*/] == joaat("currency_gold_bar"))
					{
						if (hash == 0 || flag && unk3[j /*2*/].f_1 < unk)
						{
							hash2 = hash3;
							unk2 = unk3[j /*2*/].f_1;
							flag2 = 1;
						}
					}
					else if (hash == 0 || unk3[j /*2*/].f_1 < unk)
					{
						hash2 = hash3;
						unk2 = unk3[j /*2*/].f_1;
						flag2 = 0;
					}
				}
				else if (unk3[j /*2*/] == 0)
				{
					break;
				}
			}
		
			if (flag3 && hash2 != 0)
			{
				hash = hash2;
				unk = unk2;
				flag = flag2;
			}
		}
	}

	return hash;
}

char* func_215(int iParam0) // Position - 0x4C99 Signature - 22 01 03 00 00 66 00 3C 03 00 00 00 00 00 0F 00 01 00 00 00 10
{
	switch (iParam0)
	{
		case 0:
			return "MP_PLAYER_CARD_TIER_ONE";
	
		case 1:
			return "MP_PLAYER_CARD_TIER_TWO";
	
		case 2:
			return "MP_PLAYER_CARD_TIER_THREE";
	
		default:
		
	}

	return "NP_CARD_TIER_INVALID";
}

int func_216(Hash hParam0, BOOL bParam1) // Position - 0x4CD4 Signature - 22 02 04 00 00 66 00 39
{
	if (func_168(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_223();
		else
			return 1;

	return 0;
}

BOOL func_217(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4D0B Signature - 22 05 07 00 00 66 00 42
{
	return func_191(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_218(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x4D26 Signature - 22 03 09 00 00 66 00 4B
{
	var unk;

	if (func_224(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_219(BOOL bParam0) // Position - 0x4D47 Signature - 22 01 04 00 00 66 00 39 9F 26 00 67 03 66 03 11 0B
{
	int num;

	num = func_108(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_52(271701509, func_101(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_52(271701509, func_101(bParam0), 12999093, false);
}

BOOL func_220(Hash hParam0, int iParam1) // Position - 0x4DB1 Signature - 22 02 08 00 00 66 00 2F
{
	Hash hash;
	int num;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || iParam1 == 0)
		return false;

	num = func_168(hParam0);

	if (num == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(num);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(num, i, &hash))
			if (func_225(hParam0, iParam1, hash))
				return true;
	}

	return false;
}

BOOL func_221(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x4E1E Signature - 22 08 0A
{
	return func_226(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

Hash func_222(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4E34 Signature - 22 03 06
{
	int num;

	num = 0;

	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
		
			case 1:
				return 866168015;
		
			case 2:
				return -1103707655;
		
			default:
			
		}
	
		num = 3;
	}

	if (bParam2)
	{
		switch (iParam0 - num)
		{
			case 0:
				return 75922725;
		
			case 1:
				return 1070046552;
		
			case 2:
				return -1843707398;
		
			case 3:
				return -1571233163;
		
			case 4:
				return -1197011183;
		
			default:
			
		}
	}

	return 0;
}

int func_223() // Position - 0x4ED0 Signature - 22 00 02 00 00 37 20
{
	if (func_227(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

BOOL func_224(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x4EED Signature - 22 04 07
{
	int inventoryId;

	inventoryId = func_108(false);
	*panParam1 = { func_52(hParam0, func_205(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_225(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x4F32 Signature - 22 03 05 00 00 66 02 37
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, iParam1, hParam2);
}

BOOL func_226(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x4F65 Signature - 22 05 07 00 00 66 00 03
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_108(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

int func_227(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4F9F Signature - 22 04 06 00 00 66 00 39
{
	if (func_228(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_108(bParam1), hParam0, bParam3);
}

BOOL func_228(Hash hParam0) // Position - 0x4FD2 Signature - 22 01 03 00 00 66 00 03 05 00 32
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

