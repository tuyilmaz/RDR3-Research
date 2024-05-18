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
	Volume volLocal_19 = 0;
	Volume volLocal_20 = 0;
	Volume volLocal_21 = 0;
	Volume volLocal_22 = 0;
	Volume volLocal_23 = 0;
	Volume volLocal_24 = 0;
	Volume volLocal_25 = 0;
	Volume volLocal_26 = 0;
	Volume volLocal_27 = 0;
	Volume volLocal_28 = 0;
	Volume volLocal_29 = 0;
	Volume volLocal_30 = 0;
	Volume volLocal_31 = 0;
	Volume volLocal_32 = 0;
	var uLocal_33 = 0;
	BOOL bLocal_34 = 0;
	var uLocal_35 = 0;
	ItemSet isLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	BOOL bLocal_42 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 03 00 00 48
{
	int num;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	iLocal_37 = 20000;
	iLocal_40 = iScriptParam_0;
	iLocal_38 = iScriptParam_0.f_2;
	bLocal_42 = false;

	if (Global_1901671.f_2.f_26 > 0)
		func_1();

	func_2();
	func_3();
	iLocal_39 = MISC::GET_GAME_TIMER();
	num = 0;

	while (func_4())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_39)
		{
			iLocal_39 = 0;
			func_5(iLocal_40, &iLocal_38);
		
			switch (iLocal_38)
			{
				case 0:
					if (Global_1901671.f_2.f_26 > 0)
					{
						iLocal_41 = MISC::GET_GAME_TIMER() + Global_1901671.f_2.f_26;
						iLocal_38 = 1;
					}
					else
					{
						iLocal_38 = 2;
					}
					break;
			
				case 1:
					if (!func_1() || iLocal_41 < MISC::GET_GAME_TIMER())
					{
						bLocal_42 = false;
						iLocal_38 = 2;
					}
					break;
			
				case 2:
					func_6(iLocal_40);
					func_7();
					func_8();
				
					if (func_10(func_9(iLocal_40)))
						func_11(func_9(iLocal_40), 4);
				
					LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), func_12(iLocal_40));
					Global_1896644 = -1;
					iLocal_41 = iLocal_37 + MISC::GET_GAME_TIMER();
					iLocal_38 = 3;
					break;
			
				case 3:
					if (func_13() || iLocal_41 < MISC::GET_GAME_TIMER())
					{
						_DEBUG_PRINT(iLocal_40);
						iLocal_41 = MISC::GET_GAME_TIMER() + iLocal_37;
						iLocal_38 = 4;
					}
					break;
			
				case 4:
					if (func_15(iLocal_40) || iLocal_41 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_40);
						iLocal_41 = MISC::GET_GAME_TIMER() + iLocal_37;
						iLocal_38 = 5;
					}
					break;
			
				case 5:
					if (func_17(iLocal_40) || iLocal_41 < MISC::GET_GAME_TIMER())
					{
						_DEBUG_PRINT_0(iLocal_40);
						iLocal_41 = iLocal_37 + MISC::GET_GAME_TIMER();
						iLocal_38 = 7;
					}
					break;
			
				case 7:
					if (func_10(func_9(iLocal_40)))
						if (func_19(func_9(iLocal_40), 4) && !(iLocal_41 < MISC::GET_GAME_TIMER()))
							break;
				
					if (func_20(iLocal_40) || iLocal_41 < MISC::GET_GAME_TIMER())
					{
						func_21(iLocal_40, 4);
						iLocal_41 = MISC::GET_GAME_TIMER() + iLocal_37;
						iLocal_38 = 8;
					}
					break;
			
				case 8:
					_DEBUG_PRINT_0_0(iLocal_40);
					func_23();
				
					if (!func_24(4105, false))
						func_25();
				
					func_26();
					func_27();
					func_28();
					func_29(iLocal_40);
					func_30(iLocal_40);
					func_31();
					func_32();
					iLocal_38 = 9;
					break;
			
				case 9:
					func_33(iLocal_40);
					func_34();
					iLocal_38 = 10;
					break;
			
				case 10:
					func_35(&Global_1896698);
					func_36(iLocal_40, &Global_1896698);
					iLocal_38 = 11;
					break;
			
				case 11:
					func_37(iLocal_40);
					func_21(iLocal_40, 8);
				
					if (func_38(32))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
							CAM::DO_SCREEN_FADE_IN(500);
					
						func_39(32);
					}
				
					iLocal_38 = 12;
					break;
			
				case 12:
					if (func_40(iLocal_40))
						iLocal_39 = MISC::GET_GAME_TIMER() + 1000;
				
					func_41(&Global_1896698, iLocal_40);
					func_42(iLocal_40);
					func_21(iLocal_40, 8);
				
					if (func_43())
						PED::_SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				
					PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1887363[iLocal_40 /*36*/].f_11);
				
					if (Global_1887363[iLocal_40 /*36*/].f_12 > 0f)
						PED::_SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1887363[iLocal_40 /*36*/].f_12);
					break;
			
				case 13:
					func_8();
					func_44(num);
					num = num + 1;
					break;
			}
		}
	
		if (Global_1887363[iLocal_40 /*36*/].f_13 == 0)
		{
		}
		else
		{
			PED::_SET_SCENARIO_PED_DENSITY_THIS_FRAME(Global_1887363[iLocal_40 /*36*/].f_13);
		}
	
		BUILTIN::WAIT(0);
	}

	num = 0;

	while (!func_44(num))
	{
		num = num + 1;
		BUILTIN::WAIT(0);
	}

	if (func_45() == -1)
	{
	}
	else
	{
		func_46();
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_1() // Position - 0x385 Signature - 22 00 02 00 00 54
{
	if (!bLocal_42)
	{
		if (Global_1051194)
		{
			bLocal_42 = true;
			return true;
		}
	
		if (func_47() && func_48())
		{
			bLocal_42 = true;
			return true;
		}
	
		return false;
	}

	if (Global_1051194)
		return true;

	if (func_48())
		return true;

	bLocal_42 = false;
	return false;
}

void func_2() // Position - 0x3D6 Signature - 22 00 03 00 00 39
{
	int num;

	if (func_45() != -1)
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT();
		num = 0;
	
		while (!func_44(num))
		{
			num = num + 1;
			BUILTIN::WAIT(0);
		}
	
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	return;
}

void func_3() // Position - 0x427 Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 39
{
	return;
}

BOOL func_4() // Position - 0x42F Signature - 22 00 02 00 00 39 C0 12 00 08 72 0A
{
	if (func_45() != -1)
		return !func_49(true, true);

	return true;
}

void func_5(int iParam0, var uParam1) // Position - 0x44A Signature - 22 02 04 00 00 6D 10
{
	if (!func_38(16))
		return;

	if (Global_1893611.f_7 == 0)
	{
		func_39(16);
		return;
	}

	if (!func_50(iParam0))
	{
		Global_1893611.f_7 = 0;
		func_39(16);
		return;
	}

	if (func_51(8))
	{
		if (*uParam1 == 12)
		{
			*uParam1 = 8;
			return;
		}
		else if (*uParam1 != 8)
		{
			func_52(8);
			*uParam1 = 12;
			return;
		}
	}

	if (func_51(2))
	{
		if (*uParam1 == 12)
		{
			*uParam1 = 4;
			return;
		}
		else if (*uParam1 != 4)
		{
			func_52(2);
			*uParam1 = 12;
			return;
		}
	}

	if (func_51(16))
	{
		if (*uParam1 == 12)
		{
			*uParam1 = 9;
			return;
		}
		else if (*uParam1 != 9)
		{
			func_52(16);
			*uParam1 = 12;
			return;
		}
	}

	if (func_51(4))
	{
		if (*uParam1 == 12)
		{
			*uParam1 = 7;
			return;
		}
		else if (*uParam1 != 7)
		{
			func_52(4);
			*uParam1 = 12;
			return;
		}
	}

	if (func_51(1))
	{
		if (*uParam1 == 12)
		{
			*uParam1 = 3;
			return;
		}
		else if (*uParam1 != 3)
		{
			func_52(1);
			*uParam1 = 12;
			return;
		}
	}

	return;
}

void func_6(int iParam0) // Position - 0x57A Signature - 22 01 03 00 00 50 01 00 22 00
{
	return;
}

void func_7() // Position - 0x582 Signature - 22 00 02 00 00 5D DD D3 10 78 7F
{
	if (!Global_1102813.f_3967)
		Global_1102813.f_3967 = 1;

	return;
}

void func_8() // Position - 0x5A0 Signature - 22 00 02 00 00 5D 77
{
	if (!Global_1072759.f_23824)
		Global_1072759.f_23824 = 1;

	return;
}

int func_9(int iParam0) // Position - 0x5BB Signature - 22 01 03 00 00 66 00 2F 8A
{
	if (iParam0 < 0)
		return -1;
	else if (iParam0 <= 10)
		return 0;
	else if (iParam0 <= 30)
		return 1;
	else if (iParam0 <= 34)
		return 2;
	else if (iParam0 <= 38)
		return 3;
	else if (iParam0 <= 41)
		return 4;
	else if (iParam0 <= 52)
		return 7;
	else if (iParam0 <= 61)
		return 6;
	else if (iParam0 <= 66)
		return 8;
	else if (iParam0 <= 81)
		return 9;
	else if (iParam0 <= 98)
		return 10;
	else if (iParam0 <= 112)
		return 11;
	else if (iParam0 <= 119)
		return 12;
	else if (iParam0 <= 122)
		return 13;
	else if (iParam0 <= 126)
		return 14;
	else if (iParam0 <= 134)
		return 15;
	else if (iParam0 <= 138)
		return 16;

	return -1;
}

BOOL func_10(int iParam0) // Position - 0x6B7 Signature - 22 01 03 00 00 66 00 08 20 6A 8B 06 00 66 00 6D 11
{
	return iParam0 > -1 && iParam0 < 17;
}

void func_11(int iParam0, BOOL bParam1) // Position - 0x6CD Signature - 22 02 04 00 00 66 00 5D C6 F0 1C 17 02 66 01 30
{
	Global_1896646[iParam0 /*2*/] = Global_1896646[iParam0 /*2*/] || bParam1;
	return;
}

Hash func_12(int iParam0) // Position - 0x6E8 Signature - 22 01 04 00 00 66 00 3C
{
	Hash num;

	switch (iParam0)
	{
		case 5:
			num = joaat("SAINTDENIS_RESIDENTS");
			break;
	
		case 26:
			num = joaat("STRAWBERRY_RESIDENTS");
			break;
	
		case 37:
			num = joaat("OLDFORTWALLACE_RESIDENTS");
			break;
	
		case 40:
			num = joaat("BLACKWATER_RESIDENTS");
			break;
	
		case 60:
			num = joaat("WAPITI_RESIDENTS");
			break;
	
		case 66:
			num = joaat("MANICATO_RESIDENTS");
			break;
	
		case 74:
			num = joaat("EMERALDRANCH_RESIDENTS");
			break;
	
		case 81:
			num = joaat("VALENTINE_RESIDENTS");
			break;
	
		case 83:
			num = joaat("ANNESBURG_RESIDENTS");
			break;
	
		case 87:
			num = joaat("BUTCHERCREEK_RESIDENTS");
			break;
	
		case 98:
			num = joaat("VANHORNPOST_RESIDENTS");
			break;
	
		case 111:
			num = joaat("RHODES_RESIDENTS");
			break;
	
		case 116:
			num = joaat("MANZANITAPOST_RESIDENTS");
			break;
	
		default:
			num = 0;
			break;
	}

	return num;
}

BOOL func_13() // Position - 0x7D0 Signature - 22 00 02 00 00 6D 62
{
	volLocal_19 = Global_1887363[98 /*36*/].f_5;
	VOLUME::_0xB469CFD9E065EB99(volLocal_19, 23);
	volLocal_20 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(3023.9744f, 562.0062f, 46.829266f, 0f, 0f, 79.71242f, 12.599f, 9.960065f, 6.735788f, "Van Horn - m_volFence");
	volLocal_21 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(3027.4014f, 562.40424f, 44.687f, 0f, 0f, 80f, 1.736885f, 1f, 2f, "Van Horn - m_volFencePrompt");
	VOLUME::_0xB469CFD9E065EB99(volLocal_20, 10087);
	volLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Van Horn - m_volPostOfficeOwner");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_22, 2986.668f, 572.391f, 44.687458f, 0f, 0f, 80f, 6.513f, 5.709f, 2.553f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_22, 2985.922f, 568.154f, 44.687458f, 0f, 0f, 80f, 2.17f, 2.622f, 2.553f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_22, 2987.423f, 576.661f, 44.687458f, 0f, 0f, 80f, 2.509f, 2.264f, 2.553f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_22, 2982.536f, 570.44f, 44.687458f, 0f, 0f, 80f, 2.957f, 1.909f, 2.553f);
	volLocal_23 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Van Horn - m_volPostOfficePrompt Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_23, 2985.951f, 568.536f, 44.902f, 0f, 0f, 80f, 1.441f, 1.703f, 2.553f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_23, 2987.3523f, 576.33136f, 44.901867f, 0f, 0f, -99.75122f, 1.441f, 1.921f, 2.55285f);
	volLocal_24 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2986.6367f, 572.42566f, 44.901867f, 0f, 0f, 80f, 6.131599f, 5.291456f, 2.55285f, "Van Horn - m_volPostOfficeOfflimits");
	VOLUME::_0xB469CFD9E065EB99(volLocal_22, 10090);
	volLocal_25 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2982.608f, 570.333f, 44.687458f, 0f, 0f, 80f, 3.388f, 2.263f, 2.553f, "Van Horn - m_volPostOfficeMute");
	func_53();
	volLocal_28 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2986.621f, 572.416f, 45.094f, 0f, 0f, 80f, 6.05f, 5.4f, 3f, "Van horn - m_volStationTheft");
	volLocal_29 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2947.4082f, 545.93616f, 50.72883f, 0f, 0f, 0f, 17.359125f, 18.458971f, 4.232503f, "Van Horn- Resident Toughts Guard Volume");
	volLocal_32 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Van Horn - m_volHorseShopPen Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_32, 2979.2756f, 779.62964f, 52.629448f, 0f, 0f, 0f, 40.471268f, 19.506712f, 7.453903f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_32, 2985.9436f, 797.08813f, 52.629448f, 0f, 0f, 0f, 23.670078f, 19.463243f, 7.453903f);
	func_54(joaat("door_van_depot_int_1"), 1);

	if (func_45() != -1)
	{
		volLocal_30 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2966.9583f, 798.031f, 51.94672f, 0f, 0f, 0f, 13.528303f, 8.991134f, 3.747737f, "VanHorn Horse Shop - m_volHorseShop");
	}
	else
	{
		volLocal_30 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Vanhorn Horse Shop - m_volHorseShop Agg");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_30, 2967.1594f, 798.52527f, 51.745f, 0f, 0f, 0f, 14.361101f, 10.481362f, 4.225f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_30, 2970.1016f, 792.5105f, 51.652195f, 0f, 0f, 0f, 8.344481f, 5.59843f, 2.959558f);
		volLocal_31 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2959.127f, 795.8362f, 51.005447f, 0f, 0f, 0f, 4.348893f, 4.095809f, 6.315661f, "Vanhorn Horse Shop - m_volHorseShopOutsideDoor");
		func_55(9, volLocal_31);
	}

	return true;
}

void _DEBUG_PRINT(int iParam0) // Position - 0xB3C Signature - 22 01 03 00 00 66 00 67 00 50 01 00 22 01
{
	iParam0 = iParam0;
	return;
}

BOOL func_15(int iParam0) // Position - 0xB48 Signature - 22 01 03 00 00 66 00 67 00 09 50 01 01 22 01
{
	iParam0 = iParam0;
	return true;
}

void func_16(int iParam0) // Position - 0xB55 Signature - 22 01 03 00 00 37
{
	func_56(-306246697, true, false);
	return;
}

BOOL func_17(int iParam0) // Position - 0xB68 Signature - 22 01 04 00 00 09
{
	BOOL num;

	num = 1;

	if (func_45() == -1)
	{
		HUD::TEXT_BLOCK_REQUEST("SCVHAUD");
		HUD::TEXT_BLOCK_REQUEST("VANRGAU");
		HUD::TEXT_BLOCK_REQUEST("REDDVHT");
		HUD::TEXT_BLOCK_REQUEST("VHTRDAU");
		HUD::TEXT_BLOCK_REQUEST("RESFVHT");
	
		if (!HUD::TEXT_BLOCK_IS_LOADED("SCVHAUD"))
			return false;
	
		if (!HUD::TEXT_BLOCK_IS_LOADED("VANRGAU"))
			return false;
	
		if (!HUD::TEXT_BLOCK_IS_LOADED("REDDVHT"))
			return false;
	
		if (!HUD::TEXT_BLOCK_IS_LOADED("VHTRDAU"))
			return false;
	
		if (!HUD::TEXT_BLOCK_IS_LOADED("RESFVHT"))
			return false;
	}

	return num;
}

void _DEBUG_PRINT_0(int iParam0) // Position - 0xBFA Signature - 22 01 03 00 00 66 00 67 00 50 01 00 22 02
{
	iParam0 = iParam0;
	return;
}

BOOL func_19(int iParam0, BOOL bParam1) // Position - 0xC06 Signature - 22 02 04 00 00 66 00 5D C6 F0 1C 17 02 66 01 69
{
	return Global_1896646[iParam0 /*2*/] && bParam1 != false;
}

BOOL func_20(int iParam0) // Position - 0xC1B Signature - 22 01 03 00 00 66 00 08 08
{
	return func_57(iParam0, -1, -1, false);
}

void func_21(int iParam0, BOOL bParam1) // Position - 0xC2C Signature - 22 02 04 00 00 5D 17 00 18 27 0E 08 15 14
{
	if (Global_1572887.f_14 == -1)
		Global_8130[iParam0 /*11*/] = Global_8130[iParam0 /*11*/] || bParam1;
	else
		Global_1072759.f_19611[iParam0 /*11*/] = Global_1072759.f_19611[iParam0 /*11*/] || bParam1;

	return;
}

void _DEBUG_PRINT_0_0(int iParam0) // Position - 0xC6B Signature - 22 01 03 00 00 66 00 67 00 50 01 00 22 00
{
	iParam0 = iParam0;
	return;
}

void func_23() // Position - 0xC77 Signature - 22 00 02 00 00 50 00 00 22 02 04 00 00 66 00 39
{
	return;
}

BOOL func_24(int iParam0, BOOL bParam1) // Position - 0xC7F Signature - 22 02 04 00 00 66 00 39 A7
{
	if (func_58(iParam0))
		return true;

	if (!bParam1)
		if (func_59(5000))
			return true;

	switch (func_61(func_60(0)))
	{
		case -1:
			return false;
	
		case 2:
			if (iParam0 & 1 != 0)
				return true;
			break;
	
		case 3:
			if (iParam0 & 16 != 0)
				return true;
			break;
	
		case 4:
			if (iParam0 & 32 != 0)
				return true;
			break;
	
		case 5:
			if (iParam0 & 2 != 0)
				return true;
			break;
	
		case 7:
			if (iParam0 & 1024 != 0)
				return true;
			break;
	}

	return false;
}

void func_25() // Position - 0xD2F Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 50 00 00 22 00
{
	return;
}

void func_26() // Position - 0xD37 Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 2F
{
	return;
}

void func_27() // Position - 0xD3F Signature - 22 00 02 00 00 2F 86
{
	func_62(0, 2946.662f, 523.323f, 46.02f, volLocal_26, 98);
	return;
}

void func_28() // Position - 0xD5F Signature - 22 00 02 00 00 50 00 00 22 01 03 00 00 42
{
	return;
}

void func_29(int iParam0) // Position - 0xD67 Signature - 22 01 03 00 00 42
{
	func_63(4, volLocal_20, iParam0, volLocal_21, 0, 44, false, false, -1082130432, 0);
	func_64(4, -919742804, 0, false, false);
	func_64(4, -1653762302, 0, false, false);
	func_64(4, 877945562, 0, false, false);
	func_65(4, 8192);
	func_66(4, false);
	func_63(9, volLocal_30, iParam0, 0, 0, 2, true, false, -1082130432, 0);

	if (!func_67() && func_68())
	{
		func_64(9, 1471789970, 0, false, false);
		func_64(9, -2124017858, 0, false, false);
	}
	else
	{
		func_64(9, 1471789970, -1f, true, true);
		func_64(9, -2124017858, 1f, true, true);
	}

	func_65(9, 536870912);
	func_65(9, 16384);
	func_65(9, 32768);
	func_65(9, 1);
	func_65(9, 8388608);
	func_65(9, 8192);
	func_65(9, 4);
	func_65(9, 16777216);
	func_65(9, 67108864);
	func_63(2, volLocal_22, iParam0, volLocal_23, volLocal_24, 1277952, false, false, -1082130432, 0);
	func_66(2, false);
	func_69();
	func_70(94);
	return;
}

void func_30(int iParam0) // Position - 0xE9B Signature - 22 01 03 00 00 66 00 67 00 25
{
	iParam0 = iParam0;
	func_71(453, volLocal_32, true);
	return;
}

void func_31() // Position - 0xEB2 Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 50 00 00 22 01
{
	return;
}

void func_32() // Position - 0xEBA Signature - 22 00 02 00 00 50 00 00 22 01 03 00 00 86
{
	return;
}

void func_33(int iParam0) // Position - 0xEC2 Signature - 22 01 03 00 00 86 CD
{
	func_72(0.8f, 0.2f, 0f, 0f);
	return;
}

void func_34() // Position - 0xEDA Signature - 22 00 02 00 00 5D EB E4 1C 27 BA
{
	if (!Global_1893611.f_186)
		VEHICLE::_SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION(Global_1893611.f_182, Global_1893611.f_183, Global_1893611.f_184, Global_1893611.f_185);

	return;
}

void func_35(var uParam0) // Position - 0xF0B Signature - 22 01 04 00 00 66 00 27
{
	int i;

	if (uParam0->f_61 == 0)
		return;

	for (i = 0; i < 20; i = i + 1)
	{
		uParam0->[i /*3*/] = 0;
		uParam0->[i /*3*/].f_1 = 0;
		uParam0->[uParam0->f_61 /*3*/].f_2 = 0;
	}

	uParam0->f_61 = 0;
	return;
}

void func_36(int iParam0, var uParam1) // Position - 0xF51 Signature - 22 02 04 00 00 66 00 67
{
	iParam0 = iParam0;
	func_73(uParam1, volLocal_19, 1);
	func_73(uParam1, volLocal_20, 2);
	return;
}

void func_37(int iParam0) // Position - 0xF6F Signature - 22 01 03 00 00 66 00 39 14 2A 00 05 8B 03
{
	if (!func_74(iParam0))
		return;

	func_75();
	func_76(0, joaat("vht_civilians"));
	func_76(3, joaat("vht_local_toughs"));
	func_76(4, joaat("vht_local_toughs"));
	return;
}

BOOL func_38(BOOL bParam0) // Position - 0xFA6 Signature - 22 01 03 00 00 85 EB E4 1C 66
{
	return Global_1893611 && bParam0 != false;
}

void func_39(BOOL bParam0) // Position - 0xFB7 Signature - 22 01 03 00 00 85 EB E4 1C 85
{
	Global_1893611 = Global_1893611 - Global_1893611 && bParam0;
	return;
}

BOOL func_40(int iParam0) // Position - 0xFCF Signature - 22 01 03 00 00 39 83
{
	func_77();
	func_78(&uLocal_35, &isLocal_36, 3018.27f, 558.1332f, 44.5092f, joaat("p_doorcatjak_01x"));

	if (func_79(&bLocal_34))
	{
		if (bLocal_34)
		{
			func_80(1477864640, true, 0, false, false, 0, false, false);
			func_54(1673476194, 1);
			func_54(17298161, 1);
		}
	}

	return false;
}

void func_41(var uParam0, int iParam1) // Position - 0x102A Signature - 22 02 08 00 00 1D
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int i;

	if (BUILTIN::VDIST(Global_34, 0f, 0f, 0f) <= 5f || func_81(Global_1940199, 32768) || func_81(Global_1940199, 16777216))
		return;

	if (func_82(uParam0, 1))
		return;

	uParam0->f_63 = uParam0->f_63 + 1;

	if (uParam0->f_63 < 10)
		return;

	uParam0->f_63 = 0;
	flag = false;
	flag2 = CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADING_OUT();
	flag3 = func_83();

	for (i = 0; i < uParam0->f_61; i = i + 1)
	{
		switch (uParam0->[i /*3*/].f_1)
		{
			case 1:
				if (VOLUME::DOES_VOLUME_EXIST(uParam0->[i /*3*/]))
				{
					if (VOLUME::IS_POINT_IN_VOLUME(uParam0->[i /*3*/], Global_34))
					{
						if (!flag2 && !flag3)
						{
							if (!func_84(&uParam0->[i /*3*/], 1) && func_85(iParam1) && !func_86(iParam1, 16))
							{
								func_88(iParam1, func_87(), -1, false, -1, false);
								func_89(&uParam0->[i /*3*/], 1);
							}
						
							func_90(iParam1, false);
						}
					
						flag = true;
					}
				}
				break;
		
			default:
				break;
		}
	}

	func_91(flag);
	return;
}

int func_42(int iParam0) // Position - 0x1169 Signature - 22 01 03 00 00 66 00 67 00 09 50 01 01 22 00
{
	iParam0 = iParam0;
	return 1;
}

BOOL func_43() // Position - 0x1176 Signature - 22 00 06 00 00 4B
{
	var weatherType1;
	var weatherType2;
	float percentWeather2;
	var unk;

	MISC::GET_CURR_WEATHER_STATE(&weatherType1, &weatherType2, &percentWeather2);

	if (percentWeather2 < 0.75f)
		unk = weatherType1;
	else
		unk = weatherType2;

	if (func_92(unk))
		return true;

	return false;
}

BOOL func_44(int iParam0) // Position - 0x11AC Signature - 22 01 03 00 00 66 00 2F 15 CD
{
	if (iParam0 == 0)
	{
		func_93();
		LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), 0);
		func_21(iLocal_40, 2048);
	
		if (STATS::CHAL_IS_GOAL_ACTIVE(joaat("mpac_travel"), joaat("mpac_travel_012")))
		{
			switch (iLocal_40)
			{
				case 3:
				case 5:
				case 26:
				case 40:
				case 45:
				case 81:
				case 83:
				case 98:
				case 111:
				case 121:
				case 127:
				case 136:
					STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(func_94(iLocal_40, false), 1);
					break;
			}
		}
	
		if (func_10(func_87()))
			func_11(func_87(), 8);
	
		func_95(iLocal_40, 4);
		func_95(iLocal_40, 8);
		func_91(false);
	
		if (func_45() == -1)
			func_96(false);
	
		func_97(iLocal_40);
		func_34();
		return false;
	}
	else if (func_45() == -1)
	{
		func_98(iLocal_40);
		func_99(iLocal_40);
	
		if (!func_100(iLocal_40, false))
			return false;
	}
	else if (!func_101(iLocal_40))
	{
		return false;
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

int func_45() // Position - 0x12C0 Signature - 22 00 02 00 00 5D 17 00 18 27 0E 50
{
	return Global_1572887.f_14;
}

void func_46() // Position - 0x12CE Signature - 22 00 02 00 00 03 00
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_47() // Position - 0x12DA Signature - 22 00 02 00 00 5D 17 00 18 18
{
	if (Global_1572887.f_260.f_3 > 0)
		return true;

	if (Global_1572887.f_260.f_4 != 0)
		return true;

	return false;
}

BOOL func_48() // Position - 0x1305 Signature - 22 00 02 00 00 37 25
{
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("fm_mission_controller"), -1, false, 0))
		return 1;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("fm_deathmatch_controller"), -1, false, 0))
		return 1;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("fm_race_controller"), -1, false, 0))
		return 1;

	return 0;
}

BOOL func_49(BOOL bParam0, BOOL bParam1) // Position - 0x1347 Signature - 22 02 05 00 00 5D
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

BOOL func_50(int iParam0) // Position - 0x1427 Signature - 22 01 03 00 00 66 00 39 14 2A 00 05 8B 04 00 2F 50 01 01 66 00 6D
{
	if (!func_74(iParam0))
		return false;

	return func_102(iParam0, 8);
}

BOOL func_51(int iParam0) // Position - 0x1445 Signature - 22 01 03 00 00 5D EB E4 1C 27 07 66
{
	return Global_1893611.f_7 && iParam0 != false;
}

void func_52(int iParam0) // Position - 0x1458 Signature - 22 01 03 00 00 5D EB E4 1C 27 07 5D
{
	Global_1893611.f_7 = Global_1893611.f_7 - Global_1893611.f_7 && iParam0;
	return;
}

void func_53() // Position - 0x1476 Signature - 22 00 02 00 00 25 C3
{
	volLocal_26 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSaloonInterior");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_26, 2946.662f, 523.323f, 46.02f, 0f, 0f, 180f, 9.627f, 13.43f, 3.143f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_26, 2939.0476f, 523.346f, 45.618584f, 0f, 0f, -180f, 6.016271f, 9.883f, 3.143f);
	volLocal_27 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Van horn - m_volSaloonTheft");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_27, 2946.748f, 523.316f, 45.072f, 0f, 0f, 80f, 10.1f, 14f, 3.347f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_27, 2939.0476f, 523.346f, 45.618584f, 0f, 0f, -180f, 6.016271f, 9.883f, 3.143f);
	return;
}

void func_54(Hash hParam0, int iParam1) // Position - 0x153E Signature - 22 02 04 00 00 66 00 09
{
	func_80(hParam0, true, 0, false, false, 0, false, false);
	return;
}

void func_55(int iParam0, Volume volParam1) // Position - 0x1553 Signature - 22 02 04 00 00 66 01 66
{
	Global_1915656.f_3[iParam0 /*447*/].f_32 = volParam1;
	return;
}

void func_56(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x156A Signature - 22 03 05 00 00 66 02
{
	!bParam2;

	switch (iParam0)
	{
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_105();
			func_103(iParam0);
			break;
	
		case -1925798111:
			func_103(-1925798111);
			func_104(-919512195);
			func_104(420709909);
			func_104(1703426636);
			break;
	
		case -1838352012:
			func_104(-1674179981);
			func_104(-1835851517);
			func_103(-1838352012);
			break;
	
		case -1835851517:
			func_104(-1674179981);
			func_104(-1838352012);
			func_103(-1835851517);
			break;
	
		case -1738165526:
			func_103(-1738165526);
			func_104(0);
			func_104(473295046);
			break;
	
		case -1717960576:
			func_104(210001842);
			func_103(-1717960576);
			break;
	
		case -1674179981:
			func_104(-1835851517);
			func_104(-1838352012);
			func_103(-1674179981);
			break;
	
		case -1612662716:
			func_104(1822001510);
			func_103(-1612662716);
			break;
	
		case -1414537028:
			func_104(38162571);
			func_104(1350391819);
			func_104(54073871);
			func_103(-1414537028);
			break;
	
		case -1311865656:
			func_103(-1311865656);
			func_104(1509509592);
			func_104(-959357075);
			func_104(405586984);
			break;
	
		case -1271608261:
			func_104(-150493654);
			func_104(1846061697);
			func_104(-1145519186);
			func_103(-1271608261);
			break;
	
		case -1223121209:
			func_103(-1223121209);
			func_104(630808005);
			break;
	
		case -1145519186:
			func_104(-150493654);
			func_104(-1271608261);
			func_104(1846061697);
			func_103(-1145519186);
			break;
	
		case -1124061431:
			func_104(198200492);
			func_103(-1124061431);
			func_104(52706132);
			func_104(-259123672);
			break;
	
		case -1080627546:
			if (bParam1)
				func_103(-1080627546);
			else
				func_104(-1080627546);
			break;
	
		case -1056767524:
		case -538889627:
		case -538880323:
			func_104(-538889627);
			func_104(-538880323);
			func_104(-1056767524);
			func_103(iParam0);
			break;
	
		case -959357075:
			func_103(-959357075);
			func_104(1509509592);
			func_104(405586984);
			func_104(-1311865656);
			break;
	
		case -919512195:
			func_103(-919512195);
			func_104(-1925798111);
			func_104(420709909);
			func_104(1703426636);
			break;
	
		case -664252410:
			func_104(2019386373);
			func_104(2109952320);
			func_103(-664252410);
			break;
	
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_106();
			func_103(iParam0);
			break;
	
		case -524145696:
			if (bParam1)
				func_103(-524145696);
			else
				func_104(-524145696);
		
			func_104(1626481264);
			func_104(282809459);
			break;
	
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			if (bParam1)
			{
				func_103(joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"));
			}
			else
			{
				func_104(joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"));
				func_108(385812466);
				func_108(-1201452352);
			}
			break;
	
		case -502324015:
			func_104(1497516462);
			func_104(2016141805);
			func_104(1010885152);
			func_103(-502324015);
			break;
	
		case -434590080:
			func_104(1376646519);
			func_104(931649776);
			func_104(1743048395);
			func_104(449774763);
			func_103(-434590080);
			break;
	
		case -404698347:
			func_104(1306158345);
			func_104(1952610440);
			func_104(-223469678);
			func_104(1517904467);
			func_103(-404698347);
			break;
	
		case -259123672:
			func_104(198200492);
			func_104(-1124061431);
			func_104(52706132);
			func_103(-259123672);
			break;
	
		case -223469678:
			func_104(1306158345);
			func_104(1952610440);
			func_104(-404698347);
			func_104(1517904467);
			func_103(-223469678);
			break;
	
		case -150493654:
			func_104(-1271608261);
			func_104(1846061697);
			func_104(-1145519186);
			func_103(-150493654);
			break;
	
		case 0:
			func_103(0);
			func_104(473295046);
			func_104(-1738165526);
			break;
	
		case 38162571:
			func_104(-1414537028);
			func_104(1350391819);
			func_104(54073871);
			func_103(38162571);
			break;
	
		case 52706132:
			func_104(198200492);
			func_104(-1124061431);
			func_103(52706132);
			func_104(-259123672);
			break;
	
		case 54073871:
			func_104(-1414537028);
			func_104(38162571);
			func_104(1350391819);
			func_103(54073871);
			break;
	
		case 198200492:
			func_103(198200492);
			func_104(-1124061431);
			func_104(52706132);
			func_104(-259123672);
			break;
	
		case 210001842:
			func_104(-1717960576);
			func_103(210001842);
			break;
	
		case 280705402:
			func_104(1766284049);
			func_104(1926308480);
			func_103(280705402);
			break;
	
		case 282809459:
			func_103(282809459);
			func_104(1626481264);
			func_104(-524145696);
			break;
	
		case 405586984:
			func_103(405586984);
			func_104(1509509592);
			func_104(-959357075);
			func_104(-1311865656);
			break;
	
		case 420709909:
			func_103(420709909);
			func_104(-919512195);
			func_104(-1925798111);
			func_104(1703426636);
			break;
	
		case 439465264:
			if (func_107(1609506757))
				if (bParam1)
					func_103(439465264);
				else
					func_104(439465264);
			break;
	
		case 449774763:
			func_104(1376646519);
			func_104(931649776);
			func_104(-434590080);
			func_104(1743048395);
			func_103(449774763);
			break;
	
		case 473295046:
			func_103(473295046);
			func_104(0);
			func_104(-1738165526);
			break;
	
		case 630808005:
			func_103(630808005);
			func_104(-1223121209);
			break;
	
		case 885203519:
			if (bParam1)
				func_103(885203519);
			else
				func_104(885203519);
			break;
	
		case 931649776:
			func_104(1376646519);
			func_104(-434590080);
			func_104(1743048395);
			func_104(449774763);
			func_103(931649776);
			break;
	
		case 932909855:
			func_103(932909855);
			func_104(2051822093);
			break;
	
		case 1010885152:
			func_104(1497516462);
			func_104(2016141805);
			func_103(1010885152);
			func_104(-502324015);
			break;
	
		case 1306158345:
			func_104(1952610440);
			func_104(-223469678);
			func_104(-404698347);
			func_104(1517904467);
			func_103(1306158345);
			break;
	
		case 1350391819:
			func_104(-1414537028);
			func_104(38162571);
			func_104(54073871);
			func_103(1350391819);
			break;
	
		case 1376646519:
			func_104(931649776);
			func_104(-434590080);
			func_104(1743048395);
			func_104(449774763);
			func_103(1376646519);
			break;
	
		case 1453909576:
			func_103(1453909576);
			func_104(1643531967);
			break;
	
		case 1497516462:
			func_103(1497516462);
			func_104(2016141805);
			func_104(1010885152);
			func_104(-502324015);
			break;
	
		case 1509509592:
			func_103(1509509592);
			func_104(405586984);
			func_104(-959357075);
			func_104(-1311865656);
			break;
	
		case 1517904467:
			func_104(1306158345);
			func_104(1952610440);
			func_104(-223469678);
			func_104(-404698347);
			func_103(1517904467);
			break;
	
		case 1609506757:
			if (bParam1)
			{
				func_104(439465264);
				func_103(1609506757);
			}
			else
			{
				func_104(1609506757);
				func_104(439465264);
			}
			break;
	
		case 1626481264:
			func_103(1626481264);
			func_104(-524145696);
			func_104(282809459);
			break;
	
		case 1643531967:
			func_103(1643531967);
			func_104(1453909576);
			break;
	
		case 1703426636:
			func_103(1703426636);
			func_104(-919512195);
			func_104(-1925798111);
			func_104(420709909);
			break;
	
		case 1743048395:
			func_104(1376646519);
			func_104(931649776);
			func_104(-434590080);
			func_104(449774763);
			func_103(1743048395);
			break;
	
		case 1766284049:
			func_104(280705402);
			func_104(1926308480);
			func_103(1766284049);
			break;
	
		case 1822001510:
			func_104(-1612662716);
			func_103(1822001510);
			break;
	
		case 1846061697:
			func_104(-150493654);
			func_104(-1271608261);
			func_104(-1145519186);
			func_103(1846061697);
			break;
	
		case 1926308480:
			func_104(1766284049);
			func_104(280705402);
			func_103(1926308480);
			break;
	
		case 1952610440:
			func_104(1306158345);
			func_104(-223469678);
			func_104(-404698347);
			func_104(1517904467);
			func_103(1952610440);
			break;
	
		case 2016141805:
			func_104(1497516462);
			func_103(2016141805);
			func_104(1010885152);
			func_104(-502324015);
			break;
	
		case 2019386373:
			func_104(-664252410);
			func_104(2109952320);
			func_103(2019386373);
			break;
	
		case 2051822093:
			func_103(2051822093);
			func_104(932909855);
			break;
	
		case 2109952320:
			func_104(2019386373);
			func_104(-664252410);
			func_103(2109952320);
			break;
	
		default:
			if (bParam1)
				func_103(iParam0);
			else
				func_104(iParam0);
			break;
	}

	return;
}

BOOL func_57(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x20AF Signature - 22 04 09
{
	int num;
	int num2;
	int num3;

	if (func_45() != -1)
		return 1;

	if (!func_74(iParam0))
		return 1;

	if (func_102(iParam0, 16))
		return 1;

	func_109(iParam0) && !func_110(iParam0);

	if (func_111(iParam0, &num, &num2, false, false))
	{
		if (func_112(iParam1))
			num = iParam1;
	
		if (func_112(iParam2))
			num2 = iParam2;
	
		if (Global_1896644 < num || Global_1896644 > num2)
			Global_1896644 = num;
	
		while (true)
		{
			if (!func_109(iParam0) || func_110(iParam0) || func_113(Global_1896644))
				func_114(Global_1896644, false);
		
			Global_1896644 = Global_1896644 + 1;
			num3 = num3 + 1;
		
			if (Global_1896644 > num2)
			{
				Global_1896644 = -1;
				return 1;
			}
		
			if (num3 >= 10 && !bParam3)
				return 0;
		}
	}

	return 1;
}

BOOL func_58(int iParam0) // Position - 0x21A7 Signature - 22 01 03 00 00 85 E7
{
	return Global_1940199 && iParam0 != false;
}

BOOL func_59(int iParam0) // Position - 0x21B8 Signature - 22 01 03 00 00 03
{
	return MISC::GET_GAME_TIMER() - iParam0 < Global_1900595;
}

struct<2> func_60(int iParam0) // Position - 0x21CC Signature - 22 01 03 00 00 11
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_61(var uParam0, var uParam1) // Position - 0x21E0 Signature - 22 02 04 00 00 66 00 50
{
	return uParam0;
}

void func_62(int iParam0, float fParam1, float fParam2, float fParam3, Volume volParam4, int iParam5) // Position - 0x21EA Signature - 22 06 08
{
	if (_IS_NULL_VECTOR(fParam1))
		return;

	func_116(iParam0);
	Global_1939959.f_5[iParam0 /*11*/].f_1 = { fParam1 };
	Global_1939959.f_5[iParam0 /*11*/].f_4 = volParam4;
	Global_1939959.f_5[iParam0 /*11*/].f_5 = iParam5;
	Global_1939959.f_5[iParam0 /*11*/].f_6 = func_117(iParam5, iParam0);
	return;
}

void func_63(int iParam0, Volume volParam1, int iParam2, Volume volParam3, Volume volParam4, int iParam5, BOOL bParam6, BOOL bParam7, int iParam8, int iParam9) // Position - 0x2248 Signature - 22 0A 0C 00 00 66
{
	if (iParam0 == 9 && !(!func_67() && func_118()))
		if (func_119(255))
			if (VOLUME::IS_POINT_IN_VOLUME(volParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
				func_120(true, true);

	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_121(iParam0, true);
	Global_1051832.f_92[iParam0 /*75*/] = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_18 = func_122(iParam2, iParam0);
	Global_1051832.f_92[iParam0 /*75*/].f_24 = volParam1;
	Global_1051832.f_92[iParam0 /*75*/].f_3 = { VOLUME::GET_VOLUME_COORDS(volParam1) };
	Global_1051832.f_92[iParam0 /*75*/].f_25 = volParam3;
	Global_1051832.f_92[iParam0 /*75*/].f_27 = volParam4;
	Global_1051832.f_92[iParam0 /*75*/].f_2 = iParam2;
	Global_1051832.f_92[iParam0 /*75*/].f_63 = func_123(Global_1051832.f_92[iParam0 /*75*/].f_18);
	Global_1051832.f_92[iParam0 /*75*/].f_72 = iParam9;
	Global_1051832.f_92[iParam0 /*75*/].f_73 = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_48 = 0;

	if (iParam8 <= 0f)
		iParam8 = func_124(iParam0);

	Global_1051832.f_92[iParam0 /*75*/].f_10 = iParam8;
	Global_1051832.f_92[iParam0 /*75*/].f_14 = iParam5;

	if (bParam6)
	{
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24, 0, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24, 0, 0, 0, -1, -1, 0);
	}

	if (bParam7)
	{
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25, 0, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25, 0, 0, 0, -1, -1, 0);
	}

	NETWORK::_NETWORK_SPAWN_CONFIG_ADD_EXCLUSION_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	func_125(iParam0, 4);
	func_126(iParam0);
	return;
}

void func_64(int iParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x23F7 Signature - 22 05 08 00 00 66
{
	int num;

	num = func_127(iParam0);

	if (num < 0 || num >= 15)
		return;

	Global_1051832.f_92[iParam0 /*75*/].f_31[num] = func_128(hParam1, false, false);

	if (func_129(Global_1051832.f_92[iParam0 /*75*/].f_31[num]))
		if (!func_130(Global_1051832.f_92[iParam0 /*75*/].f_31[num]))
			func_80(Global_1051832.f_92[iParam0 /*75*/].f_31[num], false, iParam2, bParam3, true, 0, bParam4, false);

	Global_1051832.f_92[iParam0 /*75*/].f_47 = Global_1051832.f_92[iParam0 /*75*/].f_47 + 1;
	return;
}

void func_65(int iParam0, int iParam1) // Position - 0x249B Signature - 22 02 04 00 00 66 00 5D B8 0C 10 80 5C 63 4B 80
{
	func_131(&(Global_1051832.f_92[iParam0 /*75*/].f_49), iParam1);
	return;
}

int func_66(int iParam0, BOOL bParam1) // Position - 0x24B5 Signature - 22 02 0A
{
	int num;
	Hash hash;
	float num2;
	var unk;

	if (func_132(iParam0, 16384) || func_132(iParam0, 32768) || _IS_NULL_VECTOR(Global_1051832.f_92[iParam0 /*75*/].f_3))
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_6))
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6);
	
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1915656.f_3[iParam0 /*447*/].f_16))
			TASK::_DELETE_SCENARIO_POINT(Global_1915656.f_3[iParam0 /*447*/].f_16);
	
		Global_1051832.f_92[iParam0 /*75*/].f_6 = 0;
		Global_1915656.f_3[iParam0 /*447*/].f_16 = 0;
		Global_1051832.f_92[iParam0 /*75*/].f_8 = 0;
		return 0;
	}

	num = func_122(func_133(), iParam0);

	if (!bParam1 && func_134(num, &hash, &num2, &unk) || bParam1 && func_135(num, &hash, &num2, &unk))
	{
		func_136(iParam0, hash, unk, num2, false);
		Global_1051832.f_92[iParam0 /*75*/].f_3 = { unk };
		Global_1051832.f_92[iParam0 /*75*/].f_8 = hash;
	}

	return Global_1051832.f_92[iParam0 /*75*/].f_6;
}

BOOL func_67() // Position - 0x25DC Signature - 22 00 02 00 00 03 01
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_68() // Position - 0x25F0 Signature - 22 00 02 00 00 2F 39 CC 21 00 39 DC
{
	return func_137(func_60(0));
}

void func_69() // Position - 0x2601 Signature - 22 00 04
{
	int i;
	var unk;

	func_138(30);
	func_139(30);
	func_140(30);
	func_141(30);

	for (i = 0; i <= 3; i = i + 1)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_3654[i /*19*/].f_6))
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_3654[i /*19*/].f_6);
	
		Global_1051832.f_3654[i /*19*/].f_6 = unk;
	
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_3654[i /*19*/].f_13))
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_3654[i /*19*/].f_13);
	
		Global_1051832.f_3654[i /*19*/].f_13 = unk;
	
		if (MAP::DOES_BLIP_EXIST(Global_1051832.f_3654[i /*19*/].f_17))
			MAP::REMOVE_BLIP(&(Global_1051832.f_3654[i /*19*/].f_17));
	
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_3654[i /*19*/].f_8))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1051832.f_3654[i /*19*/].f_8))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1051832.f_3654[i /*19*/].f_8, true, true);
		
			PED::DELETE_PED(&(Global_1051832.f_3654[i /*19*/].f_8));
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_3654[i /*19*/].f_15))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1051832.f_3654[i /*19*/].f_15))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1051832.f_3654[i /*19*/].f_15, true, true);
		
			PED::DELETE_PED(&(Global_1051832.f_3654[i /*19*/].f_15));
		}
	
		Global_1051832.f_3654[i /*19*/].f_1 = 0;
		Global_1051832.f_3654[i /*19*/].f_5 = 0;
		Global_1051832.f_3654[i /*19*/].f_8 = 0;
		Global_1051832.f_3654[i /*19*/].f_15 = 0;
		Global_1051832.f_3654[i /*19*/].f_7 = 0;
		Global_1051832.f_3654[i /*19*/].f_14 = 0;
		Global_1051832.f_3654[i /*19*/].f_9 = -1;
		Global_1051832.f_3654[i /*19*/] = -1;
	}

	return;
}

void func_70(int iParam0) // Position - 0x27C8 Signature - 22 01 0B
{
	int i;
	Hash hash;
	float num;
	var unk;
	int num2;
	BOOL flag;

	for (i = 0; i < 4 && Global_1051832.f_3654[i /*19*/] != -1; i = i + 1)
	{
	}

	if (i == 4)
		return;

	Global_1051832.f_3654[i /*19*/].f_1 = 0;
	Global_1051832.f_3654[i /*19*/] = iParam0;

	if (func_134(Global_1051832.f_3654[i /*19*/], &hash, &num, &unk))
	{
		Global_1051832.f_3654[i /*19*/].f_6 = func_142(hash, unk, num, 0, 0, false);
		Global_1051832.f_3654[i /*19*/].f_2 = { unk };
		TASK::_0xA7479FB665361EDB(Global_1051832.f_3654[i /*19*/].f_6, 0);
		TASK::_0xE69FDA40AAC3EFC0(Global_1051832.f_3654[i /*19*/].f_6, 0);
	}

	num2 = func_143(Global_1051832.f_3654[i /*19*/]);
	flag = num2 != -1;

	if (flag)
	{
		Global_1051832.f_3654[i /*19*/].f_9 = num2;
	
		if (func_134(num2, &hash, &num, &unk))
		{
			Global_1051832.f_3654[i /*19*/].f_13 = func_142(hash, unk, num, 0, 0, false);
			Global_1051832.f_3654[i /*19*/].f_10 = { unk };
			TASK::_0xA7479FB665361EDB(Global_1051832.f_3654[i /*19*/].f_13, 0);
			TASK::_0xE69FDA40AAC3EFC0(Global_1051832.f_3654[i /*19*/].f_13, 0);
		}
	}

	Global_1051832.f_3654[i /*19*/].f_5 = func_123(Global_1051832.f_3654[i /*19*/]);

	if (!func_144(30, 4))
	{
		func_125(30, 4);
		func_126(30);
	}

	return;
}

int func_71(int iParam0, Volume volParam1, BOOL bParam2) // Position - 0x2945 Signature - 22 03 06 00 00 39
{
	PersChar persChar;

	if (func_45() != -1)
		return 0;

	if (!func_145(iParam0, false))
		return 0;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return 0;

	persChar = func_146(iParam0);

	if (persChar == 0)
		return 0;

	VOLUME::SET_VOLUME_OWNER_PERSISTENT_CHARACTER(volParam1, persChar, bParam2);
	return 1;
}

void func_72(float fParam0, float fParam1, float fParam2, float fParam3) // Position - 0x2993 Signature - 22 04 06 00 00 66 00 5D
{
	Global_1893611.f_182 = fParam0;
	Global_1893611.f_183 = fParam1;
	Global_1893611.f_184 = fParam2;
	Global_1893611.f_185 = fParam3;
	return;
}

void func_73(var uParam0, Volume volParam1, int iParam2) // Position - 0x29BB Signature - 22 03 05 00 00 66 00 27
{
	if (uParam0->f_61 >= 20)
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return;

	if (!func_147(iParam2))
		return;

	uParam0->[uParam0->f_61 /*3*/] = volParam1;
	uParam0->[uParam0->f_61 /*3*/].f_1 = iParam2;
	uParam0->[uParam0->f_61 /*3*/].f_2 = 0;
	uParam0->f_61 = uParam0->f_61 + 1;
	return;
}

BOOL func_74(int iParam0) // Position - 0x2A14 Signature - 22 01 03 00 00 66 00 2F 7E
{
	return iParam0 >= 0 && iParam0 <= 150;
}

void func_75() // Position - 0x2A2A Signature - 22 00 03 00 00 2F 67 02 66 02 6D
{
	int i;

	for (i = 0; i < 17; i = i + 1)
	{
		if (func_148(i))
			Global_1900426[i] = -1;
	}

	return;
}

void func_76(int iParam0, Hash hParam1) // Position - 0x2A57 Signature - 22 02 04 00 00 66 00 39 CC
{
	if (!func_148(iParam0))
		return;

	if (!func_149(hParam1))
		return;

	Global_1900426[iParam0] = hParam1;
	return;
}

void func_77() // Position - 0x2A83 Signature - 22 00 02 00 00 39 C0 12 00 08 72 03
{
	if (func_45() != -1)
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_29))
		return;

	if (ENTITY::IS_ENTITY_DEAD(VOLUME::_0x7FD78DFD0C5D7B9B(volLocal_29)))
		func_150();

	return;
}

void func_78(var uParam0, var uParam1, float fParam2, float fParam3, float fParam4, Hash hParam5) // Position - 0x2AB4 Signature - 22 06 0B
{
	int entitiesNearPoint;
	int i;
	Entity entityFromItem;

	if (!*uParam0)
	{
		if (BUILTIN::VDIST(Global_34, fParam2) > 100f)
			return;
	
		if (!ITEMSET::IS_ITEMSET_VALID(*uParam1))
			*uParam1 = ITEMSET::CREATE_ITEMSET(true);
	
		ITEMSET::_CLEAR_ITEMSET(*uParam1);
		entitiesNearPoint = ENTITY::_GET_ENTITIES_NEAR_POINT(fParam2, 1f, *uParam1, 3);
	
		for (i = 0; i < entitiesNearPoint; i = i + 1)
		{
			entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, *uParam1));
		
			if (ENTITY::DOES_ENTITY_EXIST(entityFromItem))
			{
				if (ENTITY::GET_ENTITY_MODEL(entityFromItem) == hParam5)
				{
					ENTITY::_0xAAACB74442C1BED3(entityFromItem);
					ENTITY::FREEZE_ENTITY_POSITION(entityFromItem, true);
					*uParam0 = 1;
				}
			}
		}
	}

	return;
}

BOOL func_79(var uParam0) // Position - 0x2B4D Signature - 22 01 03 00 00 39 57
{
	if (func_151())
	{
		if (!*uParam0)
		{
			*uParam0 = 1;
			return true;
		}
	}
	else if (*uParam0)
	{
		*uParam0 = 0;
		return true;
	}

	return false;
}

void func_80(Hash hParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x2B7D Signature - 22 08 0A 00 00 66 00 2F
{
	func_128(hParam0, false, false);

	if (func_129(hParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam2, bParam6);
	
		if (iParam5 > 0f)
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(hParam0, iParam5);
	
		if (bParam3)
			func_152(hParam0, iParam2, true, bParam6);
		else if (bParam1)
			if (bParam4)
				func_153(hParam0, true);
			else
				func_154(hParam0, true);
		else
			func_155(hParam0, true);
	
		if (bParam7)
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(hParam0, true);
	}
	else if (func_156())
	{
	}
	else
	{
		NETWORK::NETWORK_IS_IN_SESSION();
	}

	return;
}

BOOL func_81(int iParam0, int iParam1) // Position - 0x2C08 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 02
{
	return iParam0 && iParam1 != false;
}

BOOL func_82(var uParam0, int iParam1) // Position - 0x2C17 Signature - 22 02 04 00 00 66 00 27 3E
{
	return uParam0->f_62 && iParam1 != false;
}

BOOL func_83() // Position - 0x2C28 Signature - 22 00 02 00 00 85 E7
{
	return func_81(Global_1940199, 8192);
}

BOOL func_84(var uParam0, int iParam1) // Position - 0x2C3B Signature - 22 02 04 00 00 66 00 27 02 66 01 69
{
	return uParam0->f_2 && iParam1 != false;
}

BOOL func_85(int iParam0) // Position - 0x2C4C Signature - 22 01 03 00 00 66 00 39 14 2A 00 05 8B 04 00 2F 50 01 01 66 00 5D
{
	if (!func_74(iParam0))
		return false;

	return Global_1887363[iParam0 /*36*/].f_21 == 1 || Global_1887363[iParam0 /*36*/].f_21 == 2 && !func_157(iParam0);
}

BOOL func_86(int iParam0, int iParam1) // Position - 0x2C8C Signature - 22 02 04 00 00 66 00 2F
{
	if (iParam0 < 0 || iParam0 >= 150)
		return false;

	return Global_1887363[iParam0 /*36*/].f_22 && iParam1 != false;
}

int func_87() // Position - 0x2CB9 Signature - 22 00 02 00 00 5D C6
{
	return Global_1896646.f_41;
}

void func_88(int iParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x2CC7 Signature - 22 06 13
{
	BOOL flag;
	const char* str;
	char* str2;
	Hash hash;
	int num;
	int num2;
	var unk;
	float temperatureAtCoords;
	char* str3;
	char* str4;
	var unk2;

	if (!func_158())
		return;

	str = func_159(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &flag);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		if (bParam3)
			return;
	
		str = "DISTRICT_GRIZZLIES";
	}

	if (!func_160(iParam4))
		if (func_74(iParam0))
			iParam4 = func_161(func_9(iParam0));
		else
			iParam4 = func_161(iParam1);

	if (func_160(iParam4))
		hash = func_162(iParam4);

	if (flag && bParam3)
	{
		str2 = func_164(func_163(iParam2));
	}
	else if (func_165(iParam1, 2) || func_166(iParam4, 2) && !Global_1893611.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
				str2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			else
				str2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
	
		Global_1893611.f_9 = 1;
	}
	else if (func_74(iParam0) && func_102(iParam0, 16777216) && !Global_1893611.f_9)
	{
		str2 = MISC::VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1893611.f_9 = 1;
	}
	else if (hash >= 1 && !Global_1893611.f_9)
	{
		str2 = MISC::VAR_STRING(2, "REGION_BOUNTY", hash);
		Global_1893611.f_9 = 1;
	}
	else
	{
		num = func_168(func_167());
		num2 = func_169(func_167());
	
		if (num2 < 10)
			TEXT_LABEL_APPEND_STRING(&unk, "0", 8);
	
		TEXT_LABEL_APPEND_INT(&unk, num2, 8);
		temperatureAtCoords = MISC::_GET_TEMPERATURE_AT_COORDS(Global_34);
	
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			str4 = "AM";
		
			if (num >= 12)
			{
				str4 = "PM";
			
				if (num > 12)
					num = num - 12;
			}
			else if (num == 0)
			{
				num = 12;
			}
		
			str3 = "TIME_AND_TEMP_C";
		
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				temperatureAtCoords = func_170(temperatureAtCoords);
				str3 = "TIME_AND_TEMP_F";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str2 = MISC::VAR_STRING(674, str3, num, func_171(&unk, joaat("COLOR_PURE_WHITE")), str4, func_171(&unk2, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			str3 = "TIME_AND_TEMP_C_24";
		
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				temperatureAtCoords = func_170(temperatureAtCoords);
				str3 = "TIME_AND_TEMP_F_24";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str2 = MISC::VAR_STRING(162, str3, num, func_171(&unk, joaat("COLOR_PURE_WHITE")), func_171(&unk2, joaat("COLOR_PURE_WHITE")));
		}
	
		Global_1893611.f_9 = 0;
	}

	Global_1939102.f_145 = func_172(str, str2, 4000, 0, 0, 0, false, true);
	return;
}

void func_89(var uParam0, int iParam1) // Position - 0x2F38 Signature - 22 02 04 00 00 66 00 27 02 66 01 30
{
	uParam0->f_2 = uParam0->f_2 || iParam1;
	return;
}

void func_90(int iParam0, BOOL bParam1) // Position - 0x2F4B Signature - 22 02 04 00 00 5D 17 00 18 27 0C
{
	if (Global_1572887.f_12 && func_45() == 0)
		return;

	if (!func_173(iParam0))
		return;

	if (func_102(iParam0, 32))
		return;

	func_21(iParam0, 32);
	func_174(&Global_1940199, 16384);
	func_176(func_175(joaat("discovered"), joaat("AREAS")), 1);

	switch (func_9(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_176(func_175(joaat("discovered"), joaat("lowlands_areas")), 1);
			break;
	
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_176(func_175(joaat("discovered"), joaat("mountain_areas")), 1);
			break;
	
		case 3:
		case 10:
			func_176(func_175(joaat("discovered"), joaat("foothills_areas")), 1);
			break;
	
		case 4:
		case 9:
			func_176(func_175(joaat("discovered"), joaat("plains_areas")), 1);
			break;
	
		case 8:
			func_176(func_175(joaat("discovered"), joaat("guama_areas")), 1);
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			func_176(func_175(joaat("discovered"), joaat("new_austin_areas")), 1);
			break;
	}

	switch (iParam0)
	{
		case 0:
			MAP::_MAP_DISCOVER_REGION(1822876181);
			break;
	
		case 1:
			MAP::_MAP_DISCOVER_REGION(1092217275);
			break;
	
		case 2:
			MAP::_MAP_DISCOVER_REGION(1855549007);
			MAP::_MAP_DISCOVER_REGION(1542246539);
			break;
	
		case 6:
			MAP::_MAP_DISCOVER_REGION(-237206861);
			break;
	
		case 7:
			MAP::_MAP_DISCOVER_REGION(276890716);
			break;
	
		case 9:
			MAP::_MAP_DISCOVER_REGION(-353968602);
			break;
	
		case 10:
			MAP::_MAP_DISCOVER_REGION(-1354901649);
			MAP::_MAP_DISCOVER_REGION(-1354901649);
			break;
	
		case 11:
			MAP::_MAP_DISCOVER_REGION(-496244122);
			break;
	
		case 12:
			MAP::_MAP_DISCOVER_REGION(-678676588);
			break;
	
		case 15:
			MAP::_MAP_DISCOVER_REGION(-732274047);
			break;
	
		case 16:
			MAP::_MAP_DISCOVER_REGION(-12216052);
			break;
	
		case 17:
			MAP::_MAP_DISCOVER_REGION(-1456731677);
			break;
	
		case 21:
			MAP::_MAP_DISCOVER_REGION(-2086563810);
			break;
	
		case 22:
			MAP::_MAP_DISCOVER_REGION(221661572);
			break;
	
		case 24:
			MAP::_MAP_DISCOVER_REGION(222265732);
			break;
	
		case 25:
			MAP::_MAP_DISCOVER_REGION(-1484929764);
			break;
	
		case 26:
			MAP::_MAP_DISCOVER_REGION(1104975149);
			break;
	
		case 27:
			MAP::_MAP_DISCOVER_REGION(235472255);
			break;
	
		case 28:
			MAP::_MAP_DISCOVER_REGION(-1337880478);
			break;
	
		case 30:
			MAP::_MAP_DISCOVER_REGION(-1813267128);
			break;
	
		case 31:
			MAP::_MAP_DISCOVER_REGION(-1941572412);
			break;
	
		case 32:
			MAP::_MAP_DISCOVER_REGION(1006072805);
			break;
	
		case 36:
			MAP::_MAP_DISCOVER_REGION(-1347759053);
			break;
	
		case 38:
			MAP::_MAP_DISCOVER_REGION(-918096609);
			break;
	
		case 39:
			MAP::_MAP_DISCOVER_REGION(-507075109);
			break;
	
		case 42:
			MAP::_MAP_DISCOVER_REGION(462373845);
			break;
	
		case 44:
			MAP::_MAP_DISCOVER_REGION(-1727895786);
			break;
	
		case 45:
			MAP::_MAP_DISCOVER_REGION(1826504111);
			break;
	
		case 46:
			MAP::_MAP_DISCOVER_REGION(1714554710);
			break;
	
		case 47:
			MAP::_MAP_DISCOVER_REGION(-91026072);
			break;
	
		case 52:
			MAP::_MAP_DISCOVER_REGION(653799702);
			break;
	
		case 58:
			MAP::_MAP_DISCOVER_REGION(893855320);
			break;
	
		case 59:
			MAP::_MAP_DISCOVER_REGION(326709244);
			break;
	
		case 67:
			MAP::_MAP_DISCOVER_REGION(415864829);
			break;
	
		case 68:
			MAP::_MAP_DISCOVER_REGION(-33677540);
			break;
	
		case 69:
			MAP::_MAP_DISCOVER_REGION(-1836330842);
			break;
	
		case 70:
			MAP::_MAP_DISCOVER_REGION(648073069);
			break;
	
		case 71:
			MAP::_MAP_DISCOVER_REGION(770074951);
			break;
	
		case 73:
			MAP::_MAP_DISCOVER_REGION(-1276637644);
			break;
	
		case 76:
			MAP::_MAP_DISCOVER_REGION(-431488293);
			break;
	
		case 77:
			MAP::_MAP_DISCOVER_REGION(-1101810198);
			break;
	
		case 79:
			MAP::_MAP_DISCOVER_REGION(-1344767066);
			break;
	
		case 82:
			MAP::_MAP_DISCOVER_REGION(1472232821);
			break;
	
		case 84:
			MAP::_MAP_DISCOVER_REGION(-1368676121);
			break;
	
		case 85:
			MAP::_MAP_DISCOVER_REGION(1602161184);
			MAP::_MAP_DISCOVER_REGION(-443207523);
			MAP::_MAP_DISCOVER_REGION(-683043834);
			break;
	
		case 87:
			MAP::_MAP_DISCOVER_REGION(147256338);
			MAP::_MAP_DISCOVER_REGION(-134804027);
			MAP::_MAP_DISCOVER_REGION(2027689141);
			break;
	
		case 88:
			MAP::_MAP_DISCOVER_REGION(-161135375);
			break;
	
		case 90:
			MAP::_MAP_DISCOVER_REGION(1625008147);
			break;
	
		case 91:
			MAP::_MAP_DISCOVER_REGION(121074776);
			break;
	
		case 92:
			MAP::_MAP_DISCOVER_REGION(1876184276);
			break;
	
		case 94:
			MAP::_MAP_DISCOVER_REGION(458479023);
			break;
	
		case 97:
			MAP::_MAP_DISCOVER_REGION(85299473);
			break;
	
		case 102:
			MAP::_MAP_DISCOVER_REGION(-1150244084);
			break;
	
		case 104:
			MAP::_MAP_DISCOVER_REGION(759314201);
			break;
	
		case 105:
			MAP::_MAP_DISCOVER_REGION(2063457042);
			break;
	
		case 106:
			MAP::_MAP_DISCOVER_REGION(1877776161);
			break;
	
		case 108:
			MAP::_MAP_DISCOVER_REGION(2143316225);
			break;
	
		case 110:
			MAP::_MAP_DISCOVER_REGION(-1623232489);
			MAP::_MAP_DISCOVER_REGION(-1393093729);
			break;
	
		case 112:
			MAP::_MAP_DISCOVER_REGION(1354284392);
			break;
	
		case 113:
			MAP::_MAP_DISCOVER_REGION(-1430883057);
			break;
	
		case 115:
			MAP::_MAP_DISCOVER_REGION(820139809);
			break;
	
		case 118:
			MAP::_MAP_DISCOVER_REGION(1561007383);
			MAP::_MAP_DISCOVER_REGION(-960425936);
			break;
	
		case 120:
			MAP::_MAP_DISCOVER_REGION(1728445882);
			break;
	
		case 128:
			MAP::_MAP_DISCOVER_REGION(929640770);
			break;
	
		case 129:
			MAP::_MAP_DISCOVER_REGION(1603579970);
			break;
	
		case 130:
			MAP::_MAP_DISCOVER_REGION(-1807212021);
			break;
	
		case 131:
			MAP::_MAP_DISCOVER_REGION(-1332669948);
			break;
	}

	if (bParam1)
		func_21(iParam0, 64);

	return;
}

void func_91(BOOL bParam0) // Position - 0x35B4 Signature - 22 01 03 00 00 66 00 8B 0D 00 85 EB E4 1C 09
{
	if (bParam0)
		Global_1893611 = Global_1893611 | true;
	else
		Global_1893611 = Global_1893611 - Global_1893611 & true;

	return;
}

BOOL func_92(int iParam0) // Position - 0x35DD Signature - 22 01 03 00 00 66 00 3C 08 00 44
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("Shower"):
		case joaat("sleet"):
		case joaat("hurricane"):
		case joaat("rain"):
		case joaat("hail"):
		case joaat("Thunderstorm"):
			return true;
	
		default:
		
	}

	return false;
}

void func_93() // Position - 0x3622 Signature - 22 00 02 00 00 50 00 00 22 02 04 00 00 66 00 3C
{
	return;
}

Hash func_94(int iParam0, BOOL bParam1) // Position - 0x362A Signature - 22 02 04 00 00 66 00 3C 8C
{
	switch (iParam0)
	{
		case 0:
			return joaat("region_bay_crawdadwillies");
	
		case 1:
			return joaat("region_bay_macombs_end");
	
		case 2:
			return joaat("region_bay_merkinswaller");
	
		case 3:
			return joaat("region_bay_lagras");
	
		case 4:
			return joaat("region_bay_lakay");
	
		case 5:
			return joaat("region_bay_saint_denis");
	
		case 6:
			return joaat("region_bay_orange_plantation");
	
		case 7:
			return joaat("region_bay_serial_killer");
	
		case 8:
			return joaat("region_bay_serendipity");
	
		case 9:
			return joaat("region_bay_shadybelle");
	
		case 10:
			return joaat("region_bay_siltwaterstrand");
	
		case 11:
			return joaat("region_bgv_appleseedtimber");
	
		case 12:
			return joaat("region_bgv_beryls_dream");
	
		case 13:
			return joaat("region_bgv_blackboneforest_trapper");
	
		case 14:
			return joaat("region_bgv_dakotariver_trapper");
	
		case 15:
			return joaat("region_bgv_fortriggs");
	
		case 16:
			return joaat("region_bgv_hangingdog");
	
		case 17:
			return joaat("region_bgv_lonemulestead");
	
		case 18:
			return joaat("region_bgv_missing_husband");
	
		case 19:
			return joaat("region_bgv_monto_rest");
	
		case 20:
			return joaat("region_bgv_owanjila_dam");
	
		case 21:
			return joaat("region_bgv_paintedsky");
	
		case 22:
			return joaat("region_bgv_pronghorn");
	
		case 23:
			return joaat("region_bgv_riggs_station");
	
		case 24:
			return joaat("region_bgv_shack");
	
		case 25:
			return joaat("region_bgv_shepherds_rise");
	
		case 26:
			return joaat("region_bgv_strawberry");
	
		case 27:
			return joaat("region_bgv_valley_view");
	
		case 28:
			return joaat("region_bgv_wallace_station");
	
		case 29:
			return joaat("region_bgv_old_man_jones");
	
		case 30:
			return joaat("region_bgv_watsonscabin");
	
		case 31:
			return joaat("region_blu_canebreak_manor");
	
		case 32:
			return joaat("region_blu_copperhead");
	
		case 33:
			return joaat("region_blu_sisika");
	
		case 34:
			return joaat("region_blu_travelling_salesman");
	
		case 35:
			return joaat("region_cml_bacchusbridge");
	
		case 36:
			return joaat("region_cml_dino_lady");
	
		case 37:
			return joaat("region_cml_oldfortwallace");
	
		case 38:
			return joaat("region_cml_sixpointcabin");
	
		case 39:
			return joaat("region_grt_beechers");
	
		case 40:
			return joaat("region_grt_blackwater");
	
		case 41:
			return joaat("region_grt_quakers_cove");
	
		case 42:
			return joaat("region_grz_adlerranch");
	
		case 43:
			return joaat("region_grz_dead_rival");
	
		case 44:
			return joaat("region_grz_chezporter");
	
		case 45:
			return joaat("region_grz_colter");
	
		case 46:
			return joaat("region_grz_frozen_explorer");
	
		case 47:
			return joaat("region_grz_millesani_claim");
	
		case 48:
			return joaat("region_grz_mountain_man");
	
		case 49:
			return joaat("region_grz_mount_hagen_peak");
	
		case 50:
			return joaat("region_grz_starving_children");
	
		case 51:
			return joaat("region_grz_tempest_rim");
	
		case 52:
			return joaat("region_grz_wintermining_town");
	
		case 53:
			return joaat("region_grz_calumetravine");
	
		case 54:
			return joaat("region_gre_civil_war_bride");
	
		case 55:
			return joaat("region_grz_cohutta");
	
		case 56:
			return joaat("region_grz_cotorra_springs");
	
		case 57:
			return joaat("region_grz_gunfight");
	
		case 58:
			return joaat("region_grz_theloft");
	
		case 59:
			return joaat("region_gre_veteran");
	
		case 60:
			return joaat("region_grz_wapiti");
	
		case 61:
			return joaat("region_grz_travelling_salesman");
	
		case 62:
			return joaat("region_gua_aguasdulces");
	
		case 63:
			return joaat("region_gua_camp");
	
		case 64:
			return joaat("region_gua_cincotorres");
	
		case 65:
			return joaat("region_gua_lacapilla");
	
		case 66:
			return joaat("region_gua_manicato");
	
		case 67:
			return joaat("region_hrt_abandoned_mill");
	
		case 68:
			return joaat("region_roa_beechers_c");
	
		case 69:
			return joaat("region_hrt_carmodydell");
	
		case 70:
			return joaat("region_hrt_cornwallkerosene");
	
		case 71:
			return joaat("region_hrt_crop_farm");
	
		case 72:
			return joaat("region_hrt_cumberlandfalls");
	
		case 73:
			return joaat("region_hrt_downsranch");
	
		case 74:
			return joaat("region_hrt_emeraldranch");
	
		case 75:
			return joaat("region_hrt_grangers_hoggery");
	
		case 76:
			return joaat("region_hrt_horseshoeoverlook");
	
		case 77:
			return joaat("region_hrt_larnedsod");
	
		case 78:
			return joaat("region_hrt_loony_cult");
	
		case 79:
			return joaat("region_hrt_luckyscabin");
	
		case 80:
			return joaat("region_hrt_swansons_station");
	
		case 81:
			return joaat("region_hrt_valentine");
	
		case 82:
			return joaat("region_roa_aberdeenpigfarm");
	
		case 83:
			return joaat("region_roa_annesburg");
	
		case 84:
			return joaat("region_roa_beaverhollow");
	
		case 85:
			return joaat("region_roa_black_balsam_rise");
	
		case 86:
			return joaat("region_roa_brandywine_drop");
	
		case 87:
			return joaat("region_roa_butchercreek");
	
		case 88:
			return joaat("region_roa_doverhill");
	
		case 89:
			return joaat("region_roa_happy_family");
	
		case 90:
			return joaat("region_roa_isolationist");
	
		case 91:
			return joaat("region_roa_macleanshouse");
	
		case 92:
			return joaat("region_roa_mossy_flats");
	
		case 93:
			return joaat("region_roa_roanoke_valley");
	
		case 94:
			return joaat("region_roa_rockyseven");
	
		case 95:
			return joaat("region_roa_trapper");
	
		case 96:
			return joaat("region_roa_old_man_jones");
	
		case 97:
			return joaat("region_roa_vanhornmansion");
	
		case 98:
			return joaat("region_roa_vanhornpost");
	
		case 99:
			return joaat("region_scm_braithwaitemanor");
	
		case 100:
			return joaat("region_scm_bulgerglade");
	
		case 101:
			return joaat("region_scm_caligahall");
	
		case 102:
			return joaat("region_scm_catfishjacksons");
	
		case 103:
			return joaat("region_scm_clemenscove");
	
		case 104:
			return joaat("region_scm_clemenspoint");
	
		case 105:
			return joaat("region_scm_compsons_stead");
	
		case 106:
			return joaat("region_scm_dairy_farm");
	
		case 107:
			return joaat("region_scm_horse_shop");
	
		case 108:
			return joaat("region_scm_lonniesshack");
	
		case 109:
			return joaat("region_scm_love_triangle");
	
		case 110:
			return joaat("region_scm_radleys_pasture");
	
		case 111:
			return joaat("region_scm_rhodes");
	
		case 112:
			return joaat("region_scm_slave_pen");
	
		case 113:
			return joaat("region_tal_aurora_basin");
	
		case 114:
			return joaat("region_tal_dead_settler");
	
		case 115:
			return joaat("region_tal_cochinay");
	
		case 116:
			return joaat("region_tal_manzanitapost");
	
		case 117:
			return joaat("region_tal_pacificunionrr");
	
		case 118:
			return joaat("region_tal_tannersreach");
	
		case 119:
			return joaat("region_tal_trapper");
	
		case 120:
			return joaat("region_gap_gaptooth_breach");
	
		case 121:
			return joaat("region_gap_tumbleweed");
	
		case 122:
			return joaat("region_gap_rathskeller_fork");
	
		case 123:
			return joaat("region_rio_benedict_point");
	
		case 124:
			return joaat("region_rio_fort_mercer");
	
		case 125:
			return joaat("region_rio_plain_view");
	
		case 126:
			return joaat("region_rio_travelling_salesman");
	
		case 127:
			return joaat("region_cho_armadillo");
	
		case 128:
			return joaat("region_cho_coots_chapel");
	
		case 129:
			return joaat("region_cho_don_julio_house");
	
		case 130:
			return joaat("region_cho_rileys_charge");
	
		case 131:
			return joaat("region_cho_ridgewood_farm");
	
		case 132:
			return joaat("region_cho_twin_rocks");
	
		case 133:
			return joaat("region_cho_travelling_salesman");
	
		case 134:
			return 1869665995;
	
		case 135:
			return joaat("region_hen_macfarlanes_ranch");
	
		case 136:
			return joaat("region_hen_thieves_landing");
	
		case 137:
			return joaat("region_hen_travelling_salesman");
	
		case 138:
			return -1573562784;
	
		case 139:
			return joaat("region_centralunionrr");
	
		default:
		
	}

	if (bParam1)
		return joaat("Wilderness");

	return 0;
}

void func_95(int iParam0, BOOL bParam1) // Position - 0x3DEF Signature - 22 02 04 00 00 5D 17 00 18 27 0E 08 15 1C
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/] = Global_8130[iParam0 /*11*/] - Global_8130[iParam0 /*11*/] && bParam1;
		return;
	}

	Global_1072759.f_19611[iParam0 /*11*/] = Global_1072759.f_19611[iParam0 /*11*/] - Global_1072759.f_19611[iParam0 /*11*/] && bParam1;
	return;
}

void func_96(BOOL bParam0) // Position - 0x3E42 Signature - 22 01 03 00 00 66 00 8B 0D 00 85 EB E4 1C 11
{
	if (bParam0)
		Global_1893611 = Global_1893611 | 2;
	else
		Global_1893611 = Global_1893611 - Global_1893611 & 2;

	return;
}

void func_97(int iParam0) // Position - 0x3E6B Signature - 22 01 03 00 00 86 66
{
	func_72(0.775f, 0.2f, 0.025f, 0f);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_29))
	{
		VOLUME::_0x998202B206872672(volLocal_29);
		VOLUME::_0x6D5F9E69BA1BE783(volLocal_29);
		VOLUME::DELETE_VOLUME(volLocal_29);
	}

	if (HUD::_DOES_TEXT_BLOCK_EXIST("SCVHAUD"))
		if (HUD::TEXT_BLOCK_IS_LOADED("SCVHAUD"))
			HUD::_TEXT_BLOCK_DELETE("SCVHAUD");

	if (HUD::_DOES_TEXT_BLOCK_EXIST("VANRGAU"))
		if (HUD::TEXT_BLOCK_IS_LOADED("VANRGAU"))
			HUD::_TEXT_BLOCK_DELETE("VANRGAU");

	if (HUD::_DOES_TEXT_BLOCK_EXIST("REDDVHT"))
		if (HUD::TEXT_BLOCK_IS_LOADED("REDDVHT"))
			HUD::_TEXT_BLOCK_DELETE("REDDVHT");

	if (HUD::_DOES_TEXT_BLOCK_EXIST("VHTRDAU"))
		if (HUD::TEXT_BLOCK_IS_LOADED("VHTRDAU"))
			HUD::_TEXT_BLOCK_DELETE("VHTRDAU");

	if (HUD::_DOES_TEXT_BLOCK_EXIST("RESFVHT"))
		if (HUD::TEXT_BLOCK_IS_LOADED("RESFVHT"))
			HUD::_TEXT_BLOCK_DELETE("RESFVHT");

	if (ITEMSET::IS_ITEMSET_VALID(isLocal_36))
		ITEMSET::DESTROY_ITEMSET(isLocal_36);

	iParam0 = iParam0;
	return;
}

void func_98(int iParam0) // Position - 0x3F4B Signature - 22 01 04 00 00 2F 67 03 66 03 1D
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1939959.f_5[i /*11*/].f_5 == iParam0)
			func_116(i);
	}

	return;
}

void func_99(int iParam0) // Position - 0x3F7C Signature - 22 01 04 00 00 2F 67 03 66 03 6D 28 8A 21
{
	int i;

	for (i = 0; i < 40; i = i + 1)
	{
		if (Global_1915656.f_3[i /*447*/].f_8 == iParam0)
			func_177(i);
	}

	return;
}

BOOL func_100(int iParam0, BOOL bParam1) // Position - 0x3FAF Signature - 22 02 07 00 00 39
{
	int num;
	int num2;
	int num3;

	if (func_45() != -1)
		return true;

	if (!func_74(iParam0))
		return true;

	if (func_111(iParam0, &num, &num2, false, false))
	{
		if (Global_1896644.f_1 < num || Global_1896644.f_1 > num2)
			Global_1896644.f_1 = num;
	
		while (true)
		{
			if (!func_178(Global_1896644.f_1, 16))
				func_179(Global_1896644.f_1, false);
		
			Global_1896644.f_1 = Global_1896644.f_1 + 1;
			num3 = num3 + 1;
		
			if (Global_1896644.f_1 > num2)
			{
				Global_1896644.f_1 = -1;
				return true;
			}
		
			if (num3 >= 10 && !bParam1)
				return false;
		}
	}

	return true;
}

BOOL func_101(int iParam0) // Position - 0x4067 Signature - 22 01 04 00 00 2F 67 03 66 03 6D 28 8A 67
{
	int i;

	for (i = 0; i < 40; i = i + 1)
	{
		if (func_180(i) || func_181(i))
		{
		}
		else
		{
			switch (i)
			{
				case 30:
					func_69();
					break;
			
				case 32:
					func_182();
					break;
			
				case 34:
					break;
			
				default:
					if (Global_1051832.f_92[i /*75*/].f_2 == iParam0)
						func_121(i, false);
					break;
			}
		}
	}

	return true;
}

BOOL func_102(int iParam0, BOOL bParam1) // Position - 0x40E1 Signature - 22 02 04 00 00 5D 17 00 18 27 0E 08 15 0F
{
	if (Global_1572887.f_14 == -1)
		return Global_8130[iParam0 /*11*/] && bParam1 != false;

	return Global_1072759.f_19611[iParam0 /*11*/] && bParam1 != false;
}

void func_103(int iParam0) // Position - 0x4112 Signature - 22 01 06 00 00 66 00 09 39 E9 74 00 67 03 66 03 6D 1F 59 67 04 66 03 6D 1F 47 67 05 66 04 87 26 00 80 76 63 01 66 05 03 08 00 78
{
	int num;
	int num2;
	int offset;

	num = func_183(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;
	MISC::SET_BIT(&Global_38.f_118[num2], offset);
	Global_1939596 = 0;
	return;
}

void func_104(int iParam0) // Position - 0x4145 Signature - 22 01 06 00 00 66 00 09 39 E9 74 00 67 03 66 03 6D 1F 59 67 04 66 03 6D 1F 47 67 05 66 04 87 26 00 80 76 63 01 66 05 03 08 00 67
{
	int num;
	int num2;
	int offset;

	num = func_183(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;
	MISC::CLEAR_BIT(&Global_38.f_118[num2], offset);
	Global_1939596 = 0;
	return;
}

void func_105() // Position - 0x4178 Signature - 22 00 02 00 00 37 12
{
	func_104(-939420910);
	func_104(-1187950766);
	func_104(356365161);
	func_104(753127042);
	func_104(-2038424081);
	func_104(1884271742);
	func_104(459290420);
	return;
}

void func_106() // Position - 0x41BF Signature - 22 00 02 00 00 37 EC
{
	func_104(704802028);
	func_104(588987611);
	func_104(2008888900);
	func_104(1649996811);
	func_104(227918160);
	func_104(168171957);
	func_104(1193080109);
	func_104(-491981251);
	func_104(-639037538);
	func_104(-618620429);
	return;
}

BOOL func_107(int iParam0) // Position - 0x4221 Signature - 22 01 06 00 00 66 00 09 39 E9 74 00 67 03 66 03 6D 1F 59 67 04 66 03 6D 1F 47 67 05 66 04 39
{
	int num;
	int num2;
	int offset;

	num = func_183(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (func_184(num2))
	{
		if (Global_1072759.f_19585.f_24 && !func_185(iParam0))
			return false;
	
		return MISC::IS_BIT_SET(Global_1072759.f_19585[num2], offset) || MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
	}

	return MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
}

void func_108(Hash hParam0) // Position - 0x42A0 Signature - 22 01 03 00 00 66 00 39 A4
{
	if (func_129(hParam0) && func_186())
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(hParam0);

	return;
}

BOOL func_109(int iParam0) // Position - 0x42C0 Signature - 22 01 03 00 00 66 00 39 14 2A 00 05 8B 04 00 2F 50 01 01 66 00 37
{
	if (!func_74(iParam0))
		return false;

	return func_102(iParam0, 33554432);
}

BOOL func_110(int iParam0) // Position - 0x42E1 Signature - 22 01 03 00 00 66 00 39 14 2A 00 05 8B 04 00 2F 50 01 01 66 00 3C
{
	if (!func_74(iParam0))
		return false;

	switch (iParam0)
	{
		case 33:
			return true;
	
		case 37:
			return true;
	
		case 70:
			return true;
	
		case 101:
			return true;
	}

	return false;
}

BOOL func_111(int iParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4334 Signature - 22 05 08 00 00 39
{
	BOOL flag;

	flag = func_45() != -1;

	switch (iParam0)
	{
		case 3:
			*uParam1 = 638;
			*uParam2 = 650;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 5:
			*uParam1 = 137;
			*uParam2 = 318;
		
			if (flag)
				*uParam2 = 142;
			break;
	
		case 6:
			*uParam1 = 651;
			*uParam2 = 652;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 11:
			*uParam1 = 801;
			*uParam2 = 827;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 21:
			*uParam1 = 774;
			*uParam2 = 776;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 22:
			if (bParam4)
				*uParam1 = 709;
			else
				*uParam1 = 703;
		
			*uParam2 = 717;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 23:
			*uParam1 = 795;
			*uParam2 = 795;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 26:
			*uParam1 = 466;
		
			if (bParam3)
				*uParam2 = 494;
			else
				*uParam2 = 496;
		
			if (flag)
				*uParam2 = 466;
			break;
	
		case 28:
			*uParam1 = 796;
			*uParam2 = 797;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 30:
			*uParam1 = 738;
			*uParam2 = 738;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 33:
			*uParam1 = 319;
			*uParam2 = 338;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 37:
			*uParam1 = 685;
			*uParam2 = 694;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 40:
			*uParam1 = 502;
			*uParam2 = 547;
		
			if (flag)
				*uParam2 = 503;
			break;
	
		case 44:
			*uParam1 = 788;
			*uParam2 = 792;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 60:
			*uParam1 = 695;
			*uParam2 = 702;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 66:
			*uParam1 = 374;
			*uParam2 = 375;
		
			if (flag)
				*uParam2 = 374;
			break;
	
		case 69:
			*uParam1 = 730;
			*uParam2 = 734;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 70:
			*uParam1 = 560;
			*uParam2 = 582;
		
			if (flag)
				*uParam2 = 560;
			break;
	
		case 71:
			*uParam1 = 739;
			*uParam2 = 744;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 73:
			*uParam1 = 548;
			*uParam2 = 559;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 74:
			*uParam1 = 583;
		
			if (bParam3)
				*uParam2 = 592;
			else
				*uParam2 = 606;
		
			if (flag)
				*uParam2 = 584;
			break;
	
		case 75:
			*uParam1 = 745;
			*uParam2 = 748;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 77:
			*uParam1 = 727;
			*uParam2 = 729;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 80:
			*uParam1 = 497;
			*uParam2 = 500;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 81:
			*uParam1 = 0;
		
			if (bParam3)
				*uParam2 = 47;
			else
				*uParam2 = 63;
		
			if (flag)
				*uParam2 = 5;
			break;
	
		case 82:
			*uParam1 = 725;
			*uParam2 = 726;
			break;
	
		case 83:
			*uParam1 = 376;
			*uParam2 = 425;
		
			if (flag)
				*uParam2 = 378;
			break;
	
		case 87:
			*uParam1 = 653;
		
			if (bParam3)
				*uParam2 = 667;
			else
				*uParam2 = 684;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 91:
			*uParam1 = 762;
			*uParam2 = 766;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 94:
			*uParam1 = 793;
			*uParam2 = 794;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 98:
			*uParam1 = 437;
			*uParam2 = 465;
		
			if (flag)
				*uParam2 = 437;
			break;
	
		case 99:
			*uParam1 = 607;
			*uParam2 = 619;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 101:
			*uParam1 = 620;
			*uParam2 = 635;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 102:
			*uParam1 = 735;
			*uParam2 = 737;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 103:
			*uParam1 = 636;
			*uParam2 = 637;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 106:
			*uParam1 = 749;
			*uParam2 = 757;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 107:
			*uParam1 = 798;
			*uParam2 = 800;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 108:
			*uParam1 = 758;
			*uParam2 = 761;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 111:
			*uParam1 = 69;
		
			if (bParam3)
				*uParam2 = 127;
			else
				*uParam2 = 136;
		
			if (flag)
				*uParam2 = 72;
			break;
	
		case 116:
			*uParam1 = 718;
			*uParam2 = 724;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 121:
			*uParam1 = 339;
			*uParam2 = 369;
		
			if (flag)
				*uParam2 = 369;
			break;
	
		case 122:
			*uParam1 = 777;
			*uParam2 = 784;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 123:
			*uParam1 = 501;
			*uParam2 = 501;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 127:
			*uParam1 = 426;
			*uParam2 = 436;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 131:
			*uParam1 = 785;
			*uParam2 = 787;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 132:
			*uParam1 = 370;
			*uParam2 = 373;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 135:
			*uParam1 = 767;
			*uParam2 = 773;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 139:
			*uParam1 = 828;
			*uParam2 = 851;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}

	if (*uParam1 == -1 || *uParam2 == -1)
		return false;

	return true;
}

BOOL func_112(int iParam0) // Position - 0x49F4 Signature - 22 01 03 00 00 66 00 08 20 6A 8B 07
{
	return iParam0 > -1 && iParam0 < 948;
}

BOOL func_113(int iParam0) // Position - 0x4A0B Signature - 22 01 03 00 00 66 00 3C 05
{
	switch (iParam0)
	{
		case 64:
			return true;
	
		case 65:
			return true;
	
		case 66:
			return true;
	
		case 67:
			return true;
	
		case 68:
			return true;
	
		default:
		
	}

	return false;
}

int func_114(int iParam0, BOOL bParam1) // Position - 0x4A4E Signature - 22 02 04 00 00 66 00 39 F4 49 00 05 8B 04 00 2F 50 02 01 66 00 11 39 75 73 00 05 8B 04 00 2F 50 02 01 66 00 6D
{
	if (!func_112(iParam0))
		return 0;

	if (!func_178(iParam0, 2))
		return 0;

	if (func_178(iParam0, 32) && !bParam1)
	{
		func_188(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_187(iParam0)));
	
		if (func_45() == -1)
		{
			if (func_178(iParam0, 2048))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_146(iParam0));
				func_189(iParam0, 2048);
			}
		
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_146(iParam0));
		}
	
		return 0;
	}

	if (!func_190(iParam0) && func_45() == -1)
		return 0;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_146(iParam0)))
	{
		func_189(iParam0, 128);
		return 1;
	}

	func_188(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_187(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_146(iParam0));

	if (func_178(iParam0, 2048))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_146(iParam0));
		func_189(iParam0, 2048);
	}

	return 1;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x4B39 Signature - 22 03 05 00 00 66 00 73
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_116(int iParam0) // Position - 0x4B63 Signature - 22 01 03 00 00 66 00 5D F7
{
	func_191(Global_1939959.f_5[iParam0 /*11*/].f_6, true);
	func_192(Global_1939959.f_5[iParam0 /*11*/].f_6, false);

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1939959.f_5[iParam0 /*11*/].f_8))
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1939959.f_5[iParam0 /*11*/].f_8);

	func_193(iParam0, 8192);
	func_193(iParam0, 32768);
	func_193(iParam0, 524288);
	func_193(iParam0, 1048576);
	Global_1939959.f_5[iParam0 /*11*/].f_10 = 0;
	Global_1939959.f_5[Global_1939959 /*11*/].f_9 = 0;
	Global_1939959.f_5[iParam0 /*11*/] = false;
	Global_1939959.f_5[iParam0 /*11*/].f_1 = { 0f, 0f, 0f };
	Global_1939959.f_5[iParam0 /*11*/].f_4 = 0;
	Global_1939959.f_5[iParam0 /*11*/].f_5 = -1;
	Global_1939959.f_5[iParam0 /*11*/].f_6 = -1;
	Global_1939959.f_5[iParam0 /*11*/].f_7 = 0;
	return;
}

int func_117(int iParam0, int iParam1) // Position - 0x4C43 Signature - 22 02 04 00 00 66 00 3C 07
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 1:
					return 1;
			
				case 2:
					return 2;
			
				default:
					break;
			}
			break;
	
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				default:
					break;
			}
			break;
	
		case 81:
			switch (iParam1)
			{
				case 0:
					return 5;
			
				case 1:
					return 6;
			
				default:
					break;
			}
			break;
	
		case 98:
			switch (iParam1)
			{
				case 0:
					return 8;
			
				default:
					break;
			}
			break;
	
		case 111:
			switch (iParam1)
			{
				case 2:
					return 3;
			
				default:
					break;
			}
			break;
	
		case 121:
			switch (iParam1)
			{
				case 0:
					return 4;
			
				default:
					break;
			}
			break;
	
		case 127:
			switch (iParam1)
			{
				case 0:
					return 7;
			
				default:
					break;
			}
			break;
	}

	return -1;
}

BOOL func_118() // Position - 0x4D26 Signature - 22 00 02 00 00 2F 39 CC 21 00 39 FC
{
	return func_194(func_60(0));
}

BOOL func_119(int iParam0) // Position - 0x4D37 Signature - 22 01 03 00 00 66 00 39 0F
{
	return !func_195(iParam0);
}

void func_120(BOOL bParam0, BOOL bParam1) // Position - 0x4D46 Signature - 22 02 04 00 00 6D FF
{
	if (func_196(255) == 4)
		return;

	if (_IS_NULL_VECTOR(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
		return;

	if (!bParam0)
	{
		func_197(0);
	}
	else
	{
		if (bParam1)
			func_198(0, false, 0, true);
	
		func_199(0);
		func_200(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");
		func_201(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
	
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}

	func_202(Global_1102813.f_3839, 36);
	func_203(Global_1102813.f_3878, 36);
	return;
}

void func_121(int iParam0, BOOL bParam1) // Position - 0x4E91 Signature - 22 02 08 00 00 66
{
	BOOL flag;
	Entity propForScenarioPoint;
	int i;
	int num;

	flag = func_204(iParam0) && !bParam1;

	if (!flag && !func_132(iParam0, 65536))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_21))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1051832.f_92[iParam0 /*75*/].f_21))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1051832.f_92[iParam0 /*75*/].f_21, true, true);
		
			ENTITY::DELETE_ENTITY(&(Global_1051832.f_92[iParam0 /*75*/].f_21));
			Global_1051832.f_92[iParam0 /*75*/].f_21 = 0;
		}
	
		if (STREAMING::IS_MODEL_VALID(Global_1051832.f_92[iParam0 /*75*/].f_19))
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_1051832.f_92[iParam0 /*75*/].f_19);
	
		Global_1051832.f_92[iParam0 /*75*/].f_19 = 0;
	}
	else if (func_144(iParam0, 67108864) && ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_21))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(Global_1051832.f_92[iParam0 /*75*/].f_21);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24))
	{
		NETWORK::_NETWORK_SPAWN_CONFIG_REMOVE_EXCLUSION_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
	
		if (func_132(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_25))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
	
		if (func_132(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_25);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_27))
		if (func_132(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_27);

	if (func_144(iParam0, 16384) && !flag)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_6))
		{
			propForScenarioPoint = TASK::GET_PROP_FOR_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
		
			if (ENTITY::DOES_ENTITY_EXIST(propForScenarioPoint))
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&propForScenarioPoint);
		
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6);
		}
	
		Global_1051832.f_92[iParam0 /*75*/].f_6 = 0;
		func_205(iParam0, 16384);
	}

	Global_1051832.f_92[iParam0 /*75*/] = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_3 = { 0f, 0f, 0f };
	Global_1051832.f_92[iParam0 /*75*/].f_48 = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_73 = 1;
	Global_1915656.f_3[iParam0 /*447*/].f_16 = 0;
	num = func_127(iParam0);

	if (num >= 15)
	{
		Global_1915656.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		for (i = 0; i < num; i = i + 1)
		{
			func_108(Global_1051832.f_92[iParam0 /*75*/].f_31[i]);
			Global_1051832.f_92[iParam0 /*75*/].f_31[i] = 0;
		}
	
		Global_1051832.f_92[iParam0 /*75*/].f_47 = 0;
	}

	func_206(iParam0);

	if (func_132(iParam0, 262144))
		Global_1051832.f_92[iParam0 /*75*/].f_49 = 262144;
	else
		func_138(iParam0);

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24) && func_207(iParam0, 2))
	{
		VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1051832.f_92[iParam0 /*75*/].f_24, joaat("REL_NO_RELATIONSHIP"));
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	}

	Global_1051832.f_92[iParam0 /*75*/].f_50 = Global_1051832.f_92[iParam0 /*75*/].f_50 & 8;
	Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 & 2113536;
	func_141(iParam0);
	Global_1051832.f_92[iParam0 /*75*/].f_18 = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_2 = -1;
	return;
}

int func_122(int iParam0, int iParam1) // Position - 0x5240 Signature - 22 02 04 00 00 66 01 6D
{
	if (iParam1 == 11)
		return 119;
	else if (iParam1 == 27)
		return 133;
	else if (iParam1 == 34)
		return 152;
	else if (iParam1 == 28)
		return 153;
	else if (iParam1 == 29)
		return 154;

	if (iParam1 == 33)
		return 20;

	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 14:
					return 26;
			
				case 39:
					return 151;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 168;
			
				case 6:
					return 170;
			
				case 22:
					return 169;
			
				case 23:
					return 171;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return 45;
			
				case 1:
					return 52;
			
				case 2:
					return 51;
			
				case 3:
					return 48;
			
				case 4:
					return 46;
			
				case 6:
					return 49;
			
				case 7:
					return 53;
			
				case 8:
					return 43;
			
				case 9:
					return 50;
			
				case 10:
					return 44;
			
				case 12:
					return 42;
			
				case 15:
					return 63;
			
				case 18:
					return 60;
			
				case 25:
					return 124;
			
				case 26:
					return 125;
			
				case 30:
					return 54;
			
				case 33:
					return 20;
			
				case 36:
					return 61;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
					return 172;
			
				case 6:
					return 174;
			
				case 16:
					return 66;
			
				case 22:
					return 173;
			
				case 23:
					return 175;
			
				default:
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 15:
					return 3;
			
				default:
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 15:
					return 4;
			
				default:
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 38:
					return 139;
			
				default:
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 1:
					return 28;
			
				case 2:
					return 27;
			
				default:
					break;
			}
			break;
	
		case 25:
			switch (iParam1)
			{
				case 39:
					return 150;
			
				default:
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 2:
					return 74;
			
				case 3:
					return 69;
			
				case 9:
					return 71;
			
				case 10:
					return 68;
			
				case 17:
					return 70;
			
				case 25:
					return 127;
			
				case 30:
					return 75;
			
				default:
					break;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 1:
					return 100;
			
				case 2:
					return 101;
			
				case 3:
					return 99;
			
				default:
					break;
			}
			break;
	
		case 29:
			switch (iParam1)
			{
				case 35:
					return 114;
			
				default:
					break;
			}
			break;
	
		case 34:
			switch (iParam1)
			{
				case 38:
					return 144;
			
				default:
					break;
			}
			break;
	
		case 39:
			switch (iParam1)
			{
				case 38:
					return 138;
			
				default:
					break;
			}
			break;
	
		case 40:
			switch (iParam1)
			{
				case 1:
					return 15;
			
				case 2:
					return 14;
			
				case 3:
					return 6;
			
				case 7:
					return 19;
			
				case 8:
					return 8;
			
				case 9:
					return 13;
			
				case 10:
					return 9;
			
				case 12:
					return 5;
			
				case 18:
					return 12;
			
				case 25:
					return 122;
			
				case 26:
					return 123;
			
				case 30:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 43:
			switch (iParam1)
			{
				case 38:
					return 145;
			
				default:
					break;
			}
			break;
	
		case 61:
			switch (iParam1)
			{
				case 38:
					return 142;
			
				default:
					break;
			}
			break;
	
		case 74:
			switch (iParam1)
			{
				case 1:
					return 25;
			
				case 2:
					return 24;
			
				case 3:
					return 23;
			
				case 4:
					return 22;
			
				case 33:
					return 21;
			
				case 38:
					return 140;
			
				default:
					break;
			}
			break;
	
		case 76:
			switch (iParam1)
			{
				case 0:
					return 164;
			
				case 6:
					return 166;
			
				case 16:
					return 64;
			
				case 22:
					return 165;
			
				case 23:
					return 167;
			
				case 38:
					return 141;
			
				default:
					break;
			}
			break;
	
		case 81:
			switch (iParam1)
			{
				case 0:
					return 83;
			
				case 1:
					return 88;
			
				case 2:
					return 87;
			
				case 3:
					return 84;
			
				case 6:
					return 85;
			
				case 8:
					return 78;
			
				case 9:
					return 86;
			
				case 10:
					return 82;
			
				case 12:
					return 77;
			
				case 17:
					return 90;
			
				case 25:
					return 120;
			
				case 26:
					return 121;
			
				case 30:
					return 79;
			
				case 36:
					return 89;
			
				case 38:
					return 136;
			
				default:
					break;
			}
			break;
	
		case 83:
			switch (iParam1)
			{
				case 1:
					return 2;
			
				case 2:
					return 1;
			
				case 6:
					return 0;
			
				case 25:
					return 129;
			
				default:
					break;
			}
			break;
	
		case 84:
			switch (iParam1)
			{
				case 0:
					return 155;
			
				case 6:
					return 157;
			
				case 16:
					return 67;
			
				case 22:
					return 156;
			
				case 23:
					return 158;
			
				default:
					break;
			}
			break;
	
		case 85:
			switch (iParam1)
			{
				case 38:
					return 146;
			
				default:
					break;
			}
			break;
	
		case 95:
		case 139:
			switch (iParam1)
			{
				case 15:
					return 40;
			
				default:
					break;
			}
			break;
	
		case 96:
			switch (iParam1)
			{
				case 35:
					return 113;
			
				default:
					break;
			}
			break;
	
		case 98:
			switch (iParam1)
			{
				case 1:
					return 97;
			
				case 2:
					return 98;
			
				case 4:
					return 93;
			
				case 9:
					return 96;
			
				case 26:
					return 128;
			
				case 33:
					return 92;
			
				default:
					break;
			}
			break;
	
		case 100:
			switch (iParam1)
			{
				case 38:
					return 143;
			
				default:
					break;
			}
			break;
	
		case 104:
			switch (iParam1)
			{
				case 0:
					return 159;
			
				case 6:
					return 161;
			
				case 16:
					return 65;
			
				case 22:
					return 160;
			
				case 23:
					return 162;
			
				default:
					break;
			}
			break;
	
		case 107:
			switch (iParam1)
			{
				case 9:
					return 41;
			
				default:
					break;
			}
			break;
	
		case 111:
			switch (iParam1)
			{
				case 1:
					return 39;
			
				case 2:
					return 35;
			
				case 3:
					return 33;
			
				case 4:
					return 31;
			
				case 6:
					return 34;
			
				case 10:
					return 30;
			
				case 12:
					return 29;
			
				case 25:
					return 126;
			
				case 30:
					return 36;
			
				case 33:
					return 32;
			
				default:
					break;
			}
			break;
	
		case 119:
			switch (iParam1)
			{
				case 15:
					return 76;
			
				default:
					break;
			}
			break;
	
		case 121:
			switch (iParam1)
			{
				case 3:
					return 102;
			
				case 6:
					return 103;
			
				case 9:
					return 107;
			
				case 10:
					return 104;
			
				case 30:
					return 105;
			
				default:
					break;
			}
			break;
	
		case 123:
			switch (iParam1)
			{
				case 1:
					return 118;
			
				case 2:
					return 117;
			
				default:
					break;
			}
			break;
	
		case 126:
			switch (iParam1)
			{
				case 38:
					return 135;
			
				default:
					break;
			}
			break;
	
		case 127:
			switch (iParam1)
			{
				case 1:
					return 112;
			
				case 2:
					return 111;
			
				case 3:
					return 108;
			
				case 35:
					return 109;
			
				default:
					break;
			}
			break;
	
		case 130:
			switch (iParam1)
			{
				case 4:
					return 116;
			
				default:
					break;
			}
			break;
	
		case 133:
			switch (iParam1)
			{
				case 38:
					return 136;
			
				default:
					break;
			}
			break;
	
		case 134:
			switch (iParam1)
			{
				case 15:
					return 148;
			
				default:
					break;
			}
			break;
	
		case 136:
			switch (iParam1)
			{
				case 4:
					return 130;
			
				default:
					break;
			}
			break;
	
		case 137:
			switch (iParam1)
			{
				case 38:
					return 137;
			
				default:
					break;
			}
			break;
	
		case 138:
			switch (iParam1)
			{
				case 39:
					return 149;
			
				default:
					break;
			}
			break;
	}

	if (iParam1 == 38)
		return 147;

	if (iParam1 == 33)
		return 20;

	if (iParam1 == 37)
		return 134;

	return -1;
}

int func_123(int iParam0) // Position - 0x5BA6 Signature - 22 01 03 00 00 66 00 39 73
{
	if (!func_208(iParam0))
		return 0;

	if (Global_1051832.f_4492[iParam0] == 0)
		Global_1051832.f_4492[iParam0] = func_209(iParam0);

	return Global_1051832.f_4492[iParam0];
}

int func_124(int iParam0) // Position - 0x5BE7 Signature - 22 01 03 00 00 66 00 3C 08 00 03
{
	switch (iParam0)
	{
		case 3:
			return 50f;
	
		case 9:
			return 25f;
	
		case 10:
			return 25f;
	
		case 15:
			return 25f;
	
		case 29:
			return 25f;
	
		case 37:
			return 30f;
	
		case 38:
			return 70f;
	
		case 39:
			return 100f;
	}

	return 12.5f;
}

void func_125(int iParam0, BOOL bParam1) // Position - 0x5C84 Signature - 22 02 04 00 00 66 00 66 01 39 25 60 00 05
{
	!func_144(iParam0, bParam1);
	Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 || bParam1;
	return;
}

void func_126(int iParam0) // Position - 0x5CB3 Signature - 22 01 03 00 00 66 00 5D B8 0C 10 27
{
	Global_1051832[Global_1051832.f_41] = iParam0;
	Global_1051832.f_41 = Global_1051832.f_41 + 1;

	if (Global_1051832.f_41 >= 40)
		Global_1051832.f_41 = 40 - 1;

	return;
}

int func_127(int iParam0) // Position - 0x5CEC Signature - 22 01 03 00 00 66 00 5D B8 0C 10 80
{
	return Global_1051832.f_92[iParam0 /*75*/].f_47;
}

Hash func_128(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5D00 Signature - 22 03 05 00 00 66 00 03
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0))
		if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0]) && bParam1)
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051645.f_16[0], 0, false);
		else
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, false, false, 0, 0, false);
	else if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0]) && bParam1)
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(hParam0))
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051645.f_16[0], 0, false);

	if (bParam2)
		OBJECT::_DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(hParam0, true);

	return hParam0;
}

BOOL func_129(Hash hParam0) // Position - 0x5DA4 Signature - 22 01 03 00 00 66 00 39 BA
{
	if (func_210(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

BOOL func_130(Hash hParam0) // Position - 0x5DBF Signature - 22 01 03 00 00 66 00 2F 2F
{
	func_128(hParam0, false, false);

	if (func_129(hParam0))
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) == 0;

	return false;
}

void func_131(BOOL bParam0, int iParam1) // Position - 0x5DE8 Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 02 04
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

BOOL func_132(int iParam0, BOOL bParam1) // Position - 0x5DF9 Signature - 22 02 04 00 00 66 00 5D B8 0C 10 80 5C 63 4B 27 31
{
	return Global_1051832.f_92[iParam0 /*75*/].f_49 && bParam1 != false;
}

int func_133() // Position - 0x5E12 Signature - 22 00 02 00 00 5D EB E4 1C 27 02
{
	return Global_1893611.f_2;
}

BOOL func_134(int iParam0, Hash* phParam1, float* pfParam2, Vector3* pvParam3) // Position - 0x5E20 Signature - 22 04 06 00 00 66 00 25 CC
{
	return func_211(iParam0, "sHash", phParam1, "fHeading", pfParam2, "vPos", pvParam3);
}

BOOL func_135(int iParam0, Hash* phParam1, float* pfParam2, Vector3* pvParam3) // Position - 0x5E40 Signature - 22 04 06 00 00 66 00 25 E0
{
	return func_211(iParam0, "sClosedHash", phParam1, "fClosedHeading", pfParam2, "vClosedPos", pvParam3);
}

void func_136(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5, BOOL bParam6) // Position - 0x5E60 Signature - 22 07 09
{
	if (bParam6)
		MISC::GET_GROUND_Z_FOR_3D_COORD(vParam2, &(vParam2.f_2), false);

	Global_1051832.f_92[iParam0 /*75*/].f_6 = func_142(hParam1, vParam2, fParam5, 0, 0, false);
	Global_1915656.f_3[iParam0 /*447*/].f_16 = Global_1051832.f_92[iParam0 /*75*/].f_6;
	TASK::_SET_SCENARIO_POINT_FLAG(Global_1051832.f_92[iParam0 /*75*/].f_6, 23, true);
	TASK::_0xA7479FB665361EDB(Global_1051832.f_92[iParam0 /*75*/].f_6, 0);
	func_125(iParam0, 16384);
	return;
}

BOOL func_137(var uParam0, var uParam1) // Position - 0x5EDC Signature - 22 02 04 00 00 11 4B 00 2D 6F
{
	return func_212(uParam0, 9, 12);
}

void func_138(int iParam0) // Position - 0x5EEF Signature - 22 01 03 00 00 2F 66 00 5D B8 0C 10 80 5C 63 4B 6C 31
{
	Global_1051832.f_92[iParam0 /*75*/].f_49 = 0;
	return;
}

void func_139(int iParam0) // Position - 0x5F04 Signature - 22 01 03 00 00 2F 66 00 5D B8 0C 10 80 5C 63 4B 6C 32
{
	Global_1051832.f_92[iParam0 /*75*/].f_50 = 0;
	return;
}

void func_140(int iParam0) // Position - 0x5F19 Signature - 22 01 03 00 00 2F 66 00 5D B8 0C 10 80 5C 63 4B 6C 01
{
	Global_1051832.f_92[iParam0 /*75*/].f_1 = 0;
	return;
}

void func_141(int iParam0) // Position - 0x5F2E Signature - 22 01 06 00 00 5D
{
	int i;
	int num;
	BOOL flag;

	if (Global_1051832.f_41 < 1)
		return;

	for (i = 0; i < Global_1051832.f_41; i = i + 1)
	{
		if (iParam0 == Global_1051832[i])
		{
			num = i;
			flag = true;
			break;
		}
	}

	if (!flag)
		return;

	Global_1051832.f_41 = Global_1051832.f_41 - 1;

	if (Global_1051832.f_41 < 0)
		Global_1051832.f_41 = 0;

	Global_1051832[num] = Global_1051832[Global_1051832.f_41];
	return;
}

int func_142(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x5FAD Signature - 22 08 0A 00 00 66 00 1D
{
	return TASK::CREATE_SCENARIO_POINT_HASH(hParam0, vParam1, fParam4, iParam5, iParam6, bParam7);
}

int func_143(int iParam0) // Position - 0x5FC7 Signature - 22 01 03 00 00 66 00 3C 07 00 0A
{
	switch (iParam0)
	{
		case 10:
			return 11;
	
		case 36:
			return 37;
	
		case 54:
			return 55;
	
		case 56:
			return 57;
	
		case 79:
			return 80;
	
		case 94:
			return 95;
	
		case 105:
			return 106;
	
		default:
		
	}

	return -1;
}

BOOL func_144(int iParam0, BOOL bParam1) // Position - 0x6025 Signature - 22 02 04 00 00 66 00 5D B8 0C 10 80 5C 63 4B 27 01
{
	return Global_1051832.f_92[iParam0 /*75*/].f_1 && bParam1 != false;
}

BOOL func_145(int iParam0, BOOL bParam1) // Position - 0x603E Signature - 22 02 04 00 00 39 C0 12 00 08 72 04 00 2F 50 02 01 66 00 39 F4 49 00 05 8B 04 00 2F 50 02 01 66 00 39
{
	if (func_45() != -1)
		return false;

	if (!func_112(iParam0))
		return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_146(iParam0)))
		return false;

	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_213(iParam0)))
		return false;

	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_146(iParam0));
}

PersChar func_146(int iParam0) // Position - 0x6096 Signature - 22 01 03 00 00 66 00 39 F4 49 00 05 8B 04 00 2F 50 01 01 66 00 5D A7 E5 1C 63 03 27 01
{
	if (!func_112(iParam0))
		return 0;

	return Global_1893799[iParam0 /*3*/].f_1;
}

BOOL func_147(int iParam0) // Position - 0x60B6 Signature - 22 01 03 00 00 66 00 08 20 6A 8B 06 00 66 00 6D 0C
{
	return iParam0 > -1 && iParam0 < 12;
}

BOOL func_148(int iParam0) // Position - 0x60CC Signature - 22 01 03 00 00 66 00 08 20 6A 8B 06 00 66 00 6D 10
{
	return iParam0 > -1 && iParam0 < 16;
}

BOOL func_149(int iParam0) // Position - 0x60E2 Signature - 22 01 03 00 00 66 00 2F 1C 50 01 01 22 00
{
	return iParam0 != 0;
}

void func_150() // Position - 0x60EE Signature - 22 00 02 00 00 25 BA
{
	func_71(442, volLocal_29, true);
	func_71(440, volLocal_29, false);
	func_71(441, volLocal_29, false);
	func_71(443, volLocal_29, false);
	VOLUME::_0x4A8FEFC43FD8AC9B(volLocal_29, 0, 1);
	VOLUME::_0x53D05D60E5F5B40C(volLocal_29, 0, 1, func_146(440));
	VOLUME::_0x53D05D60E5F5B40C(volLocal_29, 0, 1, func_146(441));
	VOLUME::_0x53D05D60E5F5B40C(volLocal_29, 0, 1, func_146(443));
	return;
}

BOOL func_151() // Position - 0x6157 Signature - 22 00 02 00 00 5D 17 00 18 27 0E 08
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_4;
}

void func_152(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6173 Signature - 22 04 06 00 00 66 00 39 A4
{
	if (func_129(hParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam2)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);
	
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam1, bParam3);
	}

	return;
}

void func_153(Hash hParam0, BOOL bParam1) // Position - 0x61AB Signature - 22 02 04 00 00 66 00 39 A4 5D 00 8B 1D 00 66 00 03 05 00 65 11
{
	if (func_129(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 2 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 2);

	return;
}

void func_154(Hash hParam0, BOOL bParam1) // Position - 0x61D9 Signature - 22 02 04 00 00 66 00 39 A4 5D 00 8B 1D 00 66 00 03 05 00 65 09
{
	if (func_129(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);

	return;
}

void func_155(Hash hParam0, BOOL bParam1) // Position - 0x6207 Signature - 22 02 04 00 00 66 00 39 A4 5D 00 8B 1D 00 66 00 03 05 00 65 2F
{
	if (func_129(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 0 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 0);

	return;
}

BOOL func_156() // Position - 0x6235 Signature - 22 00 02 00 00 09 50 00 01 22 01 03 00 00 66 00 6D
{
	return true;
}

BOOL func_157(int iParam0) // Position - 0x623E Signature - 22 01 03 00 00 66 00 6D 16
{
	if (iParam0 == 22 || iParam0 == 39 && !func_214())
		return true;

	if (iParam0 == 66)
		return true;

	return false;
}

BOOL func_158() // Position - 0x6273 Signature - 22 00 02 00 00 70
{
	if (Global_13)
		return false;

	if (!func_215())
		return false;

	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939102.f_75.f_55))
		return false;

	if (func_216(-1 ^ 9, false, true))
		return false;

	return true;
}

const char* func_159(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, var uParam6) // Position - 0x62B6 Signature - 22 07 0A
{
	const char* str;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1893611.f_162)))
		str = func_217(Global_1893611.f_162);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str) && bParam4)
		str = func_219(func_218(Global_34));

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		if (!func_220(iParam0) || func_221(44))
		{
			switch (iParam0)
			{
				case 1:
					str = "LANDMARK_MACOMBS_END";
					break;
			
				case 2:
					str = "LANDMARK_MERKINS_WALLER";
					break;
			
				case 3:
					str = "SETTLEMENT_LAGRAS";
					break;
			
				case 4:
					str = "HIDEOUT_LAKAY";
					break;
			
				case 5:
					str = "TOWN_SAINTDENIS";
					break;
			
				case 6:
					str = "LANDMARK_HAGEN_ORCHARDS";
					break;
			
				case 8:
					str = "SETTLEMENT_GRAND_KORRIGAN";
					break;
			
				case 9:
					str = "HIDEOUT_SHADY_BELLE";
					break;
			
				case 10:
					str = "LANDMARK_SILTWATER_STRAND";
					break;
			
				case 11:
					str = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
			
				case 12:
					str = "LANDMARK_BERYLS_DREAM";
					break;
			
				case 15:
					str = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
			
				case 16:
					str = "HIDEOUT_HANGING_DOG_RANCH";
					break;
			
				case 17:
					str = "HOMESTEAD_LONE_MULE_STEAD";
					break;
			
				case 19:
					str = "LANDMARK_MONTOS_REST";
					break;
			
				case 20:
					str = "LANDMARK_OWANJILA_DAM";
					break;
			
				case 21:
					str = "HOMESTEAD_PAINTED_SKY";
					break;
			
				case 22:
					str = "SETTLEMENT_PRONGHORN_RANCH";
					break;
			
				case 23:
					str = "LANDMARK_RIGGS_STATION";
					break;
			
				case 25:
					str = "HOMESTEAD_SHEPHERDS_RISE";
					break;
			
				case 26:
					str = "TOWN_STRAWBERRY";
					break;
			
				case 27:
					str = "LANDMARK_VALLEY_VIEW";
					break;
			
				case 28:
					str = "LANDMARK_WALLACE_STATION";
					break;
			
				case 30:
					str = "HOMESTEAD_WATSONS_CABIN";
					break;
			
				case 31:
					str = "LANDMARK_CANEBREAK_MANOR";
					break;
			
				case 32:
					str = "LANDMARK_COPPERHEAD_LANDING";
					break;
			
				case 33:
					str = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
			
				case 35:
					str = "LANDMARK_BACCHUS_BRIDGE";
					break;
			
				case 36:
					str = "HOMESTEAD_FIRWOOD_RISE";
					break;
			
				case 37:
					str = "SETTLEMENT_FORT_WALLACE";
					break;
			
				case 38:
					str = "HIDEOUT_SIX_POINT_CABIN";
					break;
			
				case 39:
					str = "SETTLEMENT_BEECHERS_HOPE";
					break;
			
				case 40:
					str = "TOWN_BLACKWATER";
					break;
			
				case 41:
					str = "LANDMARK_QUAKERS_COVE";
					break;
			
				case 42:
					str = "HOMESTEAD_ADLER_RANCH";
					break;
			
				case 43:
					str = "LANDMARK_WINDOW_ROCK";
					break;
			
				case 44:
					str = "HOMESTEAD_CHEZ_PORTER";
					break;
			
				case 45:
					str = "HIDEOUT_COLTER";
					break;
			
				case 47:
					str = "LANDMARK_MILLESANI_CLAIM";
					break;
			
				case 51:
					str = "LANDMARK_TEMPEST_RIM";
					break;
			
				case 52:
					str = "LANDMARK_EWING_BASIN";
					break;
			
				case 53:
					str = "LANDMARK_CALUMET_RAVINE";
					break;
			
				case 58:
					str = "LANDMARK_THE_LOFT";
					break;
			
				case 60:
					str = "SETTLEMENT_WAPITI";
					break;
			
				case 62:
					str = "SETTLEMENT_AGUASDULCES";
					break;
			
				case 64:
					str = "LANDMARK_CINCO_TORRES";
					break;
			
				case 65:
					str = "LANDMARK_LA_CAPILLA";
					break;
			
				case 66:
					str = "TOWN_MANICATO";
					break;
			
				case 67:
					str = "LANDMARK_OLD_GREENBANK_MILL";
					break;
			
				case 69:
					str = "HOMESTEAD_CARMODY_DELL";
					break;
			
				case 70:
					str = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
			
				case 71:
					str = "HOMESTEAD_GUTHRIE_FARM";
					break;
			
				case 72:
					str = "LANDMARK_CUMBERLAND_FALLS";
					break;
			
				case 73:
					str = "HOMESTEAD_DOWNES_RANCH";
					break;
			
				case 74:
					str = "SETTLEMENT_EMERALD_RANCH";
					break;
			
				case 75:
					str = "LANDMARK_GRANGERS_HOGGERY";
					break;
			
				case 77:
					str = "HOMESTEAD_LARNED_SOD";
					break;
			
				case 79:
					str = "LANDMARK_LUCKYS_CABIN";
					break;
			
				case 80:
					str = "LANDMARK_FLATNECK_STATION";
					break;
			
				case 81:
					str = "TOWN_VALENTINE";
					break;
			
				case 82:
					str = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
			
				case 83:
					str = "TOWN_ANNESBURG";
					break;
			
				case 84:
					str = "HIDEOUT_BEAVER_HOLLOW";
					break;
			
				case 85:
					str = "LANDMARK_BLACK_BALSAM_RISE";
					break;
			
				case 86:
					str = "LANDMARK_BRANDYWINE_DROP";
					break;
			
				case 87:
					str = "SETTLEMENT_BUTCHER_CREEK";
					break;
			
				case 88:
					str = "HOMESTEAD_DOVERHILL";
					break;
			
				case 91:
					str = "HOMESTEAD_MACLEANS_HOUSE";
					break;
			
				case 92:
					str = "LANDMARK_MOSSY_FLATS";
					break;
			
				case 93:
					str = "LANDMARK_ROANOKE_VALLEY";
					break;
			
				case 94:
					str = "HOMESTEAD_WILLARDS_REST";
					break;
			
				case 98:
					str = "TOWN_VANHORN";
					break;
			
				case 99:
					str = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
			
				case 100:
					str = "LANDMARK_BOLGER_GLADE";
					break;
			
				case 101:
					str = "SETTLEMENT_CALIGA_HALL";
					break;
			
				case 102:
					str = "HOMESTEAD_CATFISH_JACKSONS";
					break;
			
				case 104:
					str = "HIDEOUT_CLEMENS_POINT";
					break;
			
				case 105:
					str = "HOMESTEAD_COMPSONS_STEAD";
					break;
			
				case 106:
					str = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
			
				case 108:
					str = "HOMESTEAD_LONNIES_SHACK";
					break;
			
				case 110:
					str = "LANDMARK_RADLEYS_PASTURE";
					break;
			
				case 111:
					str = "TOWN_RHODES";
					break;
			
				case 114:
					str = "LANDMARK_BEAR_CLAW";
					break;
			
				case 116:
					str = "SETTLEMENT_MANZANITA_POST";
					break;
			
				case 117:
					str = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
			
				case 118:
					str = "LANDMARK_TANNERS_REACH";
					break;
			
				case 120:
					str = "HIDEOUT_GAPTOOTH_BREACH";
					break;
			
				case 121:
					str = "TOWN_TUMBLEWEED";
					break;
			
				case 122:
					str = "SETTLEMENT_RATHSKELLER_FORK";
					break;
			
				case 123:
					str = "SETTLEMENT_BENEDICT_POINT";
					break;
			
				case 124:
					str = "HIDEOUT_FORT_MERCER";
					break;
			
				case 125:
					str = "SETTLEMENT_PLAINVIEW";
					break;
			
				case 127:
					str = "TOWN_ARMADILLO";
					break;
			
				case 128:
					str = "SETTLEMENT_COOTS_CHAPEL";
					break;
			
				case 130:
					str = "LANDMARK_RILEYS_CHARGE";
					break;
			
				case 131:
					str = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
			
				case 132:
					str = "HIDEOUT_TWIN_ROCKS";
					break;
			
				case 135:
					str = "TOWN_MACFARLANES_RANCH";
					break;
			
				case 136:
					str = "SETTLEMENT_THIEVES_LANDING";
					break;
			
				case 139:
					str = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str) || bParam5)
	{
		switch (iParam2)
		{
			case joaat("water_lannahechee_river"):
				str = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("WATER_O_CREAGHS_RUN"):
				str = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
		
			case joaat("water_upper_montana_river"):
				str = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_san_luis_river"):
				if (iParam1 == 4 || iParam1 == 12)
					str = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				else
					str = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
			
				*uParam6 = 1;
				break;
		
			case joaat("water_little_creek_river"):
				str = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_lake_don_julio"):
				str = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
		
			case joaat("water_flat_iron_lake"):
				str = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
		
			case joaat("water_lower_montana_river"):
				str = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_owanjila"):
				str = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
		
			case joaat("water_stillwater_creek"):
				str = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
		
			case joaat("water_hawks_eye_creek"):
				str = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
		
			case joaat("water_kamassa_river"):
				if (iParam1 == 10)
					str = "WATER_KAMASSA_RIVER";
				else if (iParam1 == 2)
					str = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				else
					str = "WATER_KAMASSA_RIVER_BAYOU_NWA";
			
				*uParam6 = 1;
				break;
		
			case joaat("water_bahia_de_la_paz"):
				str = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
		
			case joaat("water_cairn_lake"):
				str = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
		
			case joaat("water_southfield_flats"):
				str = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
		
			case joaat("water_moonstone_pond"):
				str = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
		
			case joaat("WATER_CATTIAL_POND"):
				str = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
		
			case joaat("water_bayou_nwa"):
				str = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
		
			case joaat("water_whinyard_strait"):
				str = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
		
			case joaat("water_sea_of_coronado"):
				str = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
		
			case joaat("water_spider_gorge"):
				str = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
		
			case joaat("water_aurora_basin"):
				str = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
		
			case joaat("water_elysian_pool"):
				str = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
		
			case joaat("water_arroyo_de_la_vibora"):
				str = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
		
			case joaat("water_mattlock_pond"):
				str = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
		
			case joaat("water_dakota_river"):
				str = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_lake_isabella"):
				str = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
		
			case joaat("water_barrow_lagoon"):
				str = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
		
			case joaat("water_hot_springs"):
				str = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
		
			case joaat("water_deadboot_creek"):
				str = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
		
			case joaat("water_heartlands_overflow"):
				str = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
		
			case joaat("water_ringneck_creek"):
				str = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		switch (iParam1)
		{
			case 0:
				str = "DISTRICT_BAYOU_NWA";
				break;
		
			case 1:
				str = "DISTRICT_BIG_VALLEY";
				break;
		
			case 2:
				str = "DISTRICT_BLUEWATER_MARSH";
				break;
		
			case 3:
				str = "DISTRICT_CUMBERLAND_FOREST";
				break;
		
			case 4:
				str = "DISTRICT_GREAT_PLAINS";
				break;
		
			case 6:
				str = "DISTRICT_GRIZZLIES";
				break;
		
			case 7:
				str = "DISTRICT_GRIZZLIES";
				break;
		
			case 8:
				str = "DISTRICT_GUARMA";
				break;
		
			case 9:
				str = "DISTRICT_HEARTLANDS";
				break;
		
			case 10:
				str = "DISTRICT_ROANOAKE_RIDGE";
				break;
		
			case 11:
				str = "DISTRICT_SCARLETT_MEADOWS";
				break;
		
			case 12:
				str = "DISTRICT_TALL_TREES";
				break;
		
			case 13:
				str = "DISTRICT_GAPTOOTH_RIDGE";
				break;
		
			case 14:
				str = "DISTRICT_RIO_BRAVO";
				break;
		
			case 15:
				str = "DISTRICT_CHOLLA_SPRINGS";
				break;
		
			case 16:
				str = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		switch (iParam3)
		{
			case 0:
				str = "STATE_AMBARINO";
				break;
		
			case 1:
				str = "STATE_NEW_HANOVER";
				break;
		
			case 2:
				str = "STATE_LEMOYNE";
				break;
		
			case 3:
				str = "STATE_WEST_ELIZABETH";
				break;
		
			case 4:
				str = "STATE_NEW_AUSTIN";
				break;
		
			case 5:
				str = "STATE_GUARMA";
				break;
		}
	}

	return str;
}

BOOL func_160(int iParam0) // Position - 0x6D1E Signature - 22 01 03 00 00 66 00 08 20 6A 8B 05
{
	return iParam0 > -1 && iParam0 < 6;
}

int func_161(int iParam0) // Position - 0x6D33 Signature - 22 01 03 00 00 66 00 3C 11
{
	switch (iParam0)
	{
		case 0:
			return 2;
	
		case 1:
			return 3;
	
		case 2:
			return 2;
	
		case 3:
			return 1;
	
		case 4:
			return 3;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 7:
			return 0;
	
		case 8:
			return 5;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 2;
	
		case 12:
			return 3;
	
		case 13:
			return 4;
	
		case 14:
			return 4;
	
		case 15:
			return 4;
	
		case 16:
			return 4;
	
		default:
		
	}

	return -1;
}

Hash func_162(int iParam0) // Position - 0x6DEE Signature - 22 01 08
{
	int i;
	var gamerHandle;
	Hash bountyData;

	if (!func_160(iParam0))
		return -1;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_198[iParam0 /*12*/];

	i = 0;
	gamerHandle = { func_222(PLAYER::PLAYER_ID()) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&gamerHandle, &bountyData);

	for (i = 0; i < 6; i = i + 1)
	{
		Global_1072759.f_21262[i /*12*/] = bountyData;
	}

	return Global_1072759.f_21262[iParam0 /*12*/];
}

int func_163(int iParam0) // Position - 0x6E5C Signature - 22 01 03 00 00 66 00 3C 21
{
	switch (iParam0)
	{
		case joaat("water_lannahechee_river"):
			return 1;
	
		case joaat("WATER_O_CREAGHS_RUN"):
			return 0;
	
		case joaat("water_upper_montana_river"):
			return 1;
	
		case joaat("water_san_luis_river"):
			return 1;
	
		case joaat("water_little_creek_river"):
			return 1;
	
		case joaat("water_lake_don_julio"):
			return 0;
	
		case joaat("water_flat_iron_lake"):
			return 0;
	
		case joaat("water_lower_montana_river"):
			return 1;
	
		case joaat("water_owanjila"):
			return 0;
	
		case joaat("water_stillwater_creek"):
			return 1;
	
		case joaat("water_hawks_eye_creek"):
			return 1;
	
		case joaat("water_kamassa_river"):
			return 1;
	
		case joaat("water_cairn_lake"):
			return 0;
	
		case joaat("water_southfield_flats"):
			return 0;
	
		case joaat("water_moonstone_pond"):
			return 0;
	
		case joaat("WATER_CATTIAL_POND"):
			return 0;
	
		case joaat("water_bayou_nwa"):
			return 2;
	
		case joaat("water_whinyard_strait"):
			return 1;
	
		case joaat("water_sea_of_coronado"):
			return 1;
	
		case joaat("water_spider_gorge"):
			return 1;
	
		case joaat("water_aurora_basin"):
			return 0;
	
		case joaat("water_elysian_pool"):
			return 0;
	
		case joaat("WATER_CALMUT_RAVINE"):
			return 0;
	
		case joaat("water_mattlock_pond"):
			return 0;
	
		case joaat("water_dakota_river"):
			return 1;
	
		case joaat("water_dewberry_creek"):
			return 1;
	
		case joaat("water_lake_isabella"):
			return 0;
	
		case joaat("water_beartooth_beck"):
			return 1;
	
		case joaat("water_barrow_lagoon"):
			return 0;
	
		case joaat("water_hot_springs"):
			return 0;
	
		case joaat("water_deadboot_creek"):
			return 1;
	
		case joaat("water_heartlands_overflow"):
			return 0;
	
		case joaat("water_ringneck_creek"):
			return 1;
	
		default:
		
	}

	return -1;
}

char* func_164(int iParam0) // Position - 0x6FB7 Signature - 22 01 03 00 00 66 00 3C 03 00 00
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
	
		case 1:
			return "WATER_TYPE_RIVER";
	
		case 2:
			return "WATER_TYPE_SWAMP";
	
		default:
		
	}

	return "";
}

BOOL func_165(int iParam0, BOOL bParam1) // Position - 0x6FF2 Signature - 22 02 04 00 00 66 00 39 B7
{
	if (!func_10(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_271[iParam0] && bParam1 != false;

	return Global_1072759.f_21335[iParam0] && bParam1 != false;
}

BOOL func_166(int iParam0, int iParam1) // Position - 0x7034 Signature - 22 02 04 00 00 66 00 39 1E
{
	if (!func_160(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_198[iParam0 /*12*/].f_5 && iParam1 != false;

	return Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1 != false;
}

BOOL func_167() // Position - 0x7079 Signature - 22 00 02 00 00 85 E9
{
	return Global_1902569;
}

int func_168(BOOL bParam0) // Position - 0x7085 Signature - 22 01 03 00 00 66 00 6D 0C
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 12) & 31;
}

int func_169(BOOL bParam0) // Position - 0x7098 Signature - 22 01 03 00 00 66 00 4D
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 6) & 63;
}

float func_170(float fParam0) // Position - 0x70AA Signature - 22 01 03 00 00 66 00 86
{
	return (fParam0 * 1.8f) + 32f;
}

const char* func_171(var uParam0, int iParam1) // Position - 0x70C0 Signature - 22 02 04 00 00 66 01 37
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", uParam0);

	return func_223(MISC::VAR_STRING(10, "LITERAL_STRING", uParam0), iParam1);
}

int func_172(const char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x70F6 Signature - 22 08 1B
{
	int duration;
	var data;
	int num;

	duration = -2;
	duration = iParam2;
	duration.f_1 = iParam3;
	duration.f_2 = iParam4;
	duration.f_3 = iParam5;
	data.f_1 = sParam0;
	data.f_2 = sParam1;
	num = UIFEED::_UI_FEED_POST_LOCATION_SHARD(&duration, &data, bParam6, bParam7);
	return num;
}

BOOL func_173(int iParam0) // Position - 0x7139 Signature - 22 01 03 00 00 66 00 39 C4
{
	if (func_220(iParam0))
		if (!func_221(44))
			return false;

	return true;
}

void func_174(int iParam0, int iParam1) // Position - 0x7159 Signature - 22 02 04 00 00 66 00 76 66 01 30 66 00 32 50 02 00 22 02 06
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

struct<2> func_175(int iParam0, int iParam1) // Position - 0x716A Signature - 22 02 06
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_176(var uParam0, var uParam1, int iParam2) // Position - 0x7180 Signature - 22 03 05 00 00 4B
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

void func_177(int iParam0) // Position - 0x719D Signature - 22 01 05 00 00 66 00 5D
{
	int i;
	int num;

	if (func_112(Global_1915656.f_3[iParam0 /*447*/].f_21) && func_224(Global_1915656.f_3[iParam0 /*447*/].f_21))
		func_225(Global_1915656.f_3[iParam0 /*447*/].f_21, false, true, false, false);

	Global_1915656.f_3[iParam0 /*447*/].f_10 = { 0f, 0f, 0f };
	Global_1915656.f_3[iParam0 /*447*/].f_21 = -1;
	Global_1915656.f_3[iParam0 /*447*/].f_22 = -1;
	Global_1915656.f_3[iParam0 /*447*/].f_16 = 0;
	Global_1915656.f_3[iParam0 /*447*/].f_1 = 0;

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1915656.f_3[iParam0 /*447*/].f_35))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1915656.f_3[iParam0 /*447*/].f_35, false);

	func_226(Global_1915656.f_3[iParam0 /*447*/].f_9, false);
	func_227(iParam0, 536870912);
	num = func_228(iParam0);

	if (num >= 15)
	{
		Global_1915656.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		for (i = 0; i < num; i = i + 1)
		{
			func_108(Global_1915656.f_3[iParam0 /*447*/].f_318[i /*6*/]);
			Global_1915656.f_3[iParam0 /*447*/].f_318[i /*6*/] = 0;
			Global_1915656.f_3[iParam0 /*447*/].f_318[i /*6*/].f_1 = { 0f, 0f, 0f };
			Global_1915656.f_3[iParam0 /*447*/].f_318[i /*6*/].f_4 = 0f;
			Global_1915656.f_3[iParam0 /*447*/].f_318[i /*6*/].f_5 = 0;
		}
	
		Global_1915656.f_3[iParam0 /*447*/].f_409 = 0;
	}

	if (Global_1915656.f_3[iParam0 /*447*/].f_441 != 0)
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Global_1915656.f_3[iParam0 /*447*/].f_441, false);

	Global_1915656.f_3[iParam0 /*447*/].f_23 = 0;
	func_229(iParam0);
	Global_1915656.f_3[iParam0 /*447*/].f_9 = -1;
	Global_1915656.f_3[iParam0 /*447*/].f_8 = -1;
	return;
}

BOOL func_178(int iParam0, BOOL bParam1) // Position - 0x7375 Signature - 22 02 04 00 00 39 C0 12 00 08 72 04 00 2F 50 02 01 66 00 39 F4 49 00 05 8B 04 00 2F 50 02 01 66 00 87
{
	if (func_45() != -1)
		return false;

	if (!func_112(iParam0))
		return false;

	return Global_9899[iParam0 /*2*/] && bParam1 != false;
}

int func_179(int iParam0, BOOL bParam1) // Position - 0x73A3 Signature - 22 02 04 00 00 66 00 39 F4 49 00 05 8B 04 00 2F 50 02 01 66 00 11 39 75 73 00 05 8B 04 00 2F 50 02 01 66 00 39
{
	if (!func_112(iParam0))
		return 0;

	if (!func_178(iParam0, 2))
		return 0;

	if (func_187(iParam0) == 0)
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_146(iParam0)))
		return 1;

	if (func_178(iParam0, true) && !bParam1)
	{
		func_230(iParam0, 128);
		return 1;
	}

	func_189(iParam0, 129);
	func_231(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_146(iParam0));
	func_188(iParam0, 0);
	return 1;
}

int func_180(int iParam0) // Position - 0x7426 Signature - 22 01 03 00 00 66 00 3C 03 00 1B
{
	switch (iParam0)
	{
		case 27:
		case 28:
		case 29:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_181(int iParam0) // Position - 0x744D Signature - 22 01 03 00 00 66 00 3C 02
{
	switch (iParam0)
	{
		case 33:
		case 37:
			return 1;
	
		default:
		
	}

	return 0;
}

void func_182() // Position - 0x746E Signature - 22 00 03 00 00 2F 67 02 66 02 42
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_1051832.f_4447[i /*8*/] = -1;
		Global_1051832.f_4447[i /*8*/].f_3 = 0;
		Global_1051832.f_4447[i /*8*/].f_4 = 0;
		Global_1051832.f_4447[i /*8*/].f_7 = 0;
	
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_4447[i /*8*/].f_6))
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_4447[i /*8*/].f_6);
	}

	func_141(32);
	return;
}

int func_183(int iParam0, int iParam1) // Position - 0x74E9 Signature - 22 02 04 00 00 66 00 68
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return 521;
	
		case -2141419899:
			return 404;
	
		case -2106445152:
			return 277;
	
		case -2106214197:
			return 102;
	
		case -2101264851:
			return 192;
	
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return 470;
	
		case -2073072369:
			return 57;
	
		case -2069570138:
			return 25;
	
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 394;
	
		case -2058120606:
			return 194;
	
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return 464;
	
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			return 338;
	
		case -2038424081:
			return 49;
	
		case -2034257789:
			return 90;
	
		case -2022369555:
			return 251;
	
		case -2021582629:
			return 110;
	
		case -2020023971:
			return 263;
	
		case -1957523409:
			return 205;
	
		case -1952856164:
			return 163;
	
		case -1949204933:
			return 261;
	
		case joaat("ws_mp_camp_defend_radleys_pasture"):
			return 387;
	
		case -1939389836:
			return 416;
	
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return 428;
	
		case -1925798111:
			return 41;
	
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return 439;
	
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
			return 403;
	
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return 463;
	
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 380;
	
		case -1852605133:
			return 10;
	
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return 409;
	
		case -1847672446:
			return 312;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return 504;
	
		case -1840704908:
			return 274;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_184(int iParam0) // Position - 0x989E Signature - 22 01 04 00 00 66 00 39 B3
{
	int num;

	num = func_232(iParam0);

	if (num < 336)
		return false;

	return true;
}

BOOL func_185(int iParam0) // Position - 0x98BB Signature - 22 01 03 00 00 66 00 37
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
		return true;

	return false;
}

BOOL func_186() // Position - 0x98D2 Signature - 22 00 02 00 00 09 50 00 01 22 01 03 00 00 66 00 39
{
	return 1;
}

Hash func_187(int iParam0) // Position - 0x98DB Signature - 22 01 03 00 00 66 00 39 F4 49 00 05 8B 04 00 2F 50 01 01 66 00 5D A7 E5 1C 17
{
	if (!func_112(iParam0))
		return 0;

	return Global_1893799[iParam0 /*3*/];
}

void func_188(int iParam0, PersChar pchParam1) // Position - 0x98F9 Signature - 22 02 04 00 00 66 00 39 F4 49 00 05 8B 03
{
	if (!func_112(iParam0))
		return;

	Global_1893799[iParam0 /*3*/].f_1 = pchParam1;
	return;
}

void func_189(int iParam0, BOOL bParam1) // Position - 0x991A Signature - 22 02 04 00 00 39 C0 12 00 08 72 03 00 50 02 00 66 00 39 F4 49 00 05 8B 03 00 50 02 00 66 00 87 AB 26 17 02 66 00
{
	if (func_45() != -1)
		return;

	if (!func_112(iParam0))
		return;

	Global_9899[iParam0 /*2*/] = Global_9899[iParam0 /*2*/] - Global_9899[iParam0 /*2*/] && bParam1;
	return;
}

BOOL func_190(int iParam0) // Position - 0x9953 Signature - 22 01 03 00 00 66 00 39 F4 49 00 05 8B 04 00 2F 50 01 01 66 00 11
{
	if (!func_112(iParam0))
		return false;

	if (!func_178(iParam0, 2))
		return false;

	return true;
}

void func_191(int iParam0, BOOL bParam1) // Position - 0x9979 Signature - 22 02 05 00 00 66 00 3C
{
	char* ambientZone;

	switch (iParam0)
	{
		case 5:
			ambientZone = "IZ_val_saloon_int_room_main";
			break;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(ambientZone))
		return;

	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(ambientZone, bParam1, true);
	return;
}

void func_192(int iParam0, BOOL bParam1) // Position - 0x99AD Signature - 22 02 04 00 00 66 00 3C 01
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
				AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR", "VAL_SALOON_SWINGING_DOOR_BARRED");
			else
				AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR_BARRED");
			break;
	}

	return;
}

void func_193(int iParam0, int iParam1) // Position - 0x99E2 Signature - 22 02 04 00 00 66 00 5D F7
{
	func_233(&(Global_1939959.f_5[iParam0 /*11*/].f_7), iParam1);
	return;
}

BOOL func_194(var uParam0, var uParam1) // Position - 0x99FC Signature - 22 02 04 00 00 11 4B 00 2D 62
{
	return func_212(uParam0, 5, 8);
}

BOOL func_195(int iParam0) // Position - 0x9A0F Signature - 22 01 03 00 00 09
{
	return func_234(1, iParam0);
}

int func_196(int iParam0) // Position - 0x9A1E Signature - 22 01 03 00 00 66 00 6D FF
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

int func_197(int iParam0) // Position - 0x9A69 Signature - 22 01 03 00 00 5D DD D3 10 80 04 66 00 62 39 4C
{
	if (func_235(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_198(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x9A86 Signature - 22 04 06 00 00 66 00 39 7E
{
	func_236(iParam0);

	if (!func_237(1))
		return;

	if (bParam1)
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	else if (!func_238(128) && !func_239(19))
		CAM::DO_SCREEN_FADE_OUT(iParam2);

	if (bParam3 && func_240() == 4)
		func_197(18);

	func_241(1024);
	return;
}

int func_199(int iParam0) // Position - 0x9AE8 Signature - 22 01 03 00 00 5D DD D3 10 80 04 66 00 62 39 42
{
	if (func_242(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_200(var uParam0) // Position - 0x9B05 Signature - 22 01 21
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_201(float* pfParam0) // Position - 0x9B17 Signature - 22 01 0C
{
	var unk;

	*pfParam0 = { unk };
	return;
}

void func_202(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0x9B29 Signature - 22 1F
{
	switch (uParam0.f_5)
	{
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0.f_4))
			{
			}
			break;
	}

	uParam0.f_16;
	VOLUME::DOES_VOLUME_EXIST(uParam0.f_27) && uParam0.f_28;
	return;
}

void func_203(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0x9B7F Signature - 22 0A 0C 00 00 4B
{
	switch (uParam0.f_5)
	{
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	}

	return;
}

BOOL func_204(int iParam0) // Position - 0x9BAC Signature - 22 01 03 00 00 66 00 6D 1C
{
	if (iParam0 == 28 || iParam0 == 29 || iParam0 == 38 || iParam0 == 27 || iParam0 == 15 || iParam0 == 39)
		return true;

	if (func_132(iParam0, 65536))
		return true;

	return false;
}

void func_205(int iParam0, BOOL bParam1) // Position - 0x9C09 Signature - 22 02 04 00 00 66 00 66 01 39 25 60 00 8B
{
	func_144(iParam0, bParam1);
	Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 - Global_1051832.f_92[iParam0 /*75*/].f_1 && bParam1;
	return;
}

void func_206(int iParam0) // Position - 0x9C44 Signature - 22 01 03 00 00 50 01 00 22 02
{
	return;
}

BOOL func_207(int iParam0, int iParam1) // Position - 0x9C4C Signature - 22 02 04 00 00 66 00 08
{
	if (iParam0 == -1)
		return false;

	return func_243(Global_1051832.f_92[iParam0 /*75*/].f_50, iParam1);
}

BOOL func_208(int iParam0) // Position - 0x9C73 Signature - 22 01 03 00 00 66 00 08 20 6A 8B 06 00 66 00 6D B4 35 69 50
{
	return iParam0 > -1 && iParam0 < 180;
}

int func_209(int iParam0) // Position - 0x9C89 Signature - 22 01 1E
{
	var unk;

	if (DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1149432.f_7) && !func_245(12, func_244(iParam0), &unk))
		return 0;

	return unk.f_2;
}

BOOL func_210(Hash hParam0) // Position - 0x9CBA Signature - 22 01 03 00 00 66 00 2F 1C 50 01 01 22 07
{
	return hParam0 != 0;
}

BOOL func_211(int iParam0, char* sParam1, Hash* phParam2, char* sParam3, float* pfParam4, char* sParam5, Vector3* pvParam6) // Position - 0x9CC6 Signature - 22 07 0E
{
	int num;

	num = func_246();
	num.f_2 = -738708473;
	num.f_3 = func_244(iParam0);

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
		return 0;

	num.f_2 = -1407851228;
	num.f_3 = MISC::GET_HASH_KEY(sParam1);
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(phParam2, &num);
	num.f_2 = 1059891245;
	num.f_3 = MISC::GET_HASH_KEY(sParam3);
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam4, &num);
	num.f_2 = -99852754;
	num.f_3 = MISC::GET_HASH_KEY(sParam5);
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam6, &num);
	return 1;
}

BOOL func_212(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x9D4E Signature - 22 04 07
{
	int num;

	if (!func_247(iParam0))
		return false;

	if (iParam0 != 2)
		return false;

	num = func_248(iParam0);
	return num >= iParam2 && num <= iParam3;
}

Ped func_213(int iParam0) // Position - 0x9D89 Signature - 22 01 04 00 00 66 00 39 96
{
	PersChar persChar;

	persChar = func_146(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

BOOL func_214() // Position - 0x9DB7 Signature - 22 00 02 00 00 2F 50
{
	return false;
}

BOOL func_215() // Position - 0x9DC0 Signature - 22 00 06 00 00 39
{
	var unk;
	var unk3;

	if (func_45() != 0)
		return true;

	if (func_249())
		return false;

	if (HUD::_0x7EC0D68233E391AC(6) == 1)
		return true;

	unk = -1;
	unk.f_1 = -1;
	unk = { func_250() };

	if (func_247(unk))
		return false;

	unk3 = { func_251() };

	if (func_247(unk3))
		return false;

	return true;
}

BOOL func_216(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9E28 Signature - 22 03 05 00 00 5D 17
{
	if (Global_1572887.f_14 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1900460.f_67;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1900460.f_68;
	
		if (func_249())
			return true;
	
		if (Global_1072759.f_3 && !Global_1572887.f_10)
			if (Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_481 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
				return true;
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
			return Global_1900460.f_67;
		else
			return Global_1900460.f_68;
	}

	if (iParam0 == 0 && func_247(func_60(0)))
		return true;

	if (Global_1940199 && 81919 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1900595)
			return true;

	switch (func_61(func_60(0)))
	{
		case -1:
			return false;
	
		case 2:
			return iParam0 & 1 == 0;
	
		case 3:
			return iParam0 & 16 == 0;
	
		case 4:
			return iParam0 & 32 == 0;
	
		case 5:
			return iParam0 & 2 == 0;
	
		case 7:
			return iParam0 & 1024 == 0;
	
		default:
		
	}

	return false;
}

const char* func_217(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x9F9E Signature - 22 08 0A 00 00 4B
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_218(var uParam0, var uParam1, var uParam2) // Position - 0x9FB2 Signature - 22 03 06 00 00 2F
{
	int i;

	for (i = 0; i < 51; i = i + 1)
	{
		if (func_252(uParam0, i))
			return i;
	}

	return -1;
}

const char* func_219(int iParam0) // Position - 0x9FE0 Signature - 22 01 03 00 00 66 00 3C 32
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
	
		case 1:
			return "LANDMARK_SCRATCHING_POST";
	
		case 2:
			return "LANDMARK_JORGES_GAP";
	
		case 3:
			return "LANDMARK_MERCER_STATION";
	
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
	
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
	
		case 6:
			return "LANDMARK_SILENT_STEAD";
	
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
	
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
	
		case 9:
			return "LANDMARK_TWO_CROWS";
	
		case 10:
			return "LANDMARK_REPENTANCE";
	
		case 11:
			return "LANDMARK_BENEDICT_PASS";
	
		case 12:
			return "WATER_MANTECA_FALLS";
	
		case 13:
			return "SETTLEMENT_LIMPANY";
	
		case 14:
			return "WATER_MOUNT_SHANN";
	
		case 15:
			return "LANDMARK_THREE_SISTERS";
	
		case 16:
			return "HIDEOUT_PIKES_BASIN";
	
		case 17:
			return "SETTLEMENT_EL_NIDO";
	
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
	
		case 19:
			return "LANDMARK_ERIS_FIELD";
	
		case 20:
			return "LANDMARK_GRANITE_PASS";
	
		case 21:
			return "LANDMARK_VENTERS_PLACE";
	
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
	
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
	
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
	
		case 25:
			return "LANDMARK_CITADEL_ROCK";
	
		case 26:
			return "LANDMARK_CUEVA_SECA";
	
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
	
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
	
		case 29:
			return "LANDMARK_DONNER_FALLS";
	
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
	
		case 32:
			return "LANDMARK_FORT_BRENNAND";
	
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
	
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
	
		case 35:
			return "LANDMARK_MESCALERO";
	
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
	
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
	
		case 38:
			return "LANDMARK_BROKEN_TREE";
	
		case 39:
			return "LANDMARK_BARDS_CROSSING";
	
		case 40:
			return "LANDMARK_FACE_ROCK";
	
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
	}

	return "";
}

BOOL func_220(int iParam0) // Position - 0xA2C4 Signature - 22 01 03 00 00 66 00 3C 03 00 16
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 68:
			return true;
	}

	return false;
}

BOOL func_221(int iParam0) // Position - 0xA2EE Signature - 22 01 03 00 00 66 00 39 D7
{
	if (!func_253(iParam0))
		return false;

	return func_254(iParam0);
}

struct<2> func_222(Player plParam0) // Position - 0xA30A Signature - 22 01 05 00 00 66 00 4B
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

const char* func_223(const char* sParam0, int iParam1) // Position - 0xA31E Signature - 22 02 04 00 00 6D 2A
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

BOOL func_224(int iParam0) // Position - 0xA338 Signature - 22 01 03 00 00 66 00 39 F4 49 00 05 8B 04 00 2F 50 01 01 66 00 5D A7 E5 1C 63 03 27 02 03 01
{
	if (!func_112(iParam0))
		return false;

	return Global_1893799[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_225(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xA35D Signature - 22 05 09
{
	PersChar persChar;
	Ped perscharPedIndex;

	if (!func_112(iParam0))
		return;

	if (!func_178(iParam0, 1))
		return;

	if (!func_178(iParam0, 2))
		return;

	if (!bParam4 && !func_224(iParam0) && func_255(iParam0))
		return;

	func_189(iParam0, 1);
	func_231(iParam0);

	if (func_256(func_187(iParam0)))
	{
		persChar = func_146(iParam0);
	
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
			return;
	
		PERSCHAR::_0xBB68908CD11AEBDC(persChar);
		PERSCHAR::_0xB65E7F733956CF25(persChar);
	
		if (bParam2 && !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar))
			PERSCHAR::_RETASK_PERSISTENT_CHARACTER(persChar);
	
		perscharPedIndex = PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
	
		if (!PED::IS_PED_INJURED(perscharPedIndex))
			PED::SET_PED_CONFIG_FLAG(perscharPedIndex, 171, false);
	
		if (bParam1)
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(persChar);
	
		func_189(iParam0, 16);
	}

	if (func_178(iParam0, 128) && !bParam3)
		func_179(iParam0, false);

	return;
}

void func_226(int iParam0, BOOL bParam1) // Position - 0xA449 Signature - 22 02 04 00 00 66 00 39 73 9C 00 05 8B 03 00 50 02 00 66 01
{
	if (!func_208(iParam0))
		return;

	if (bParam1)
	{
		if (!func_257(iParam0, 1024))
		{
			func_258(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_257(iParam0, 1024))
	{
		func_259(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}

	func_260(iParam0);
	return;
}

void func_227(int iParam0, BOOL bParam1) // Position - 0xA49F Signature - 22 02 04 00 00 66 00 39 E4
{
	if (!func_261(iParam0))
		return;

	if (func_45() == -1)
		Global_1915656.f_3[iParam0 /*447*/].f_6 = Global_1915656.f_3[iParam0 /*447*/].f_6 - Global_1915656.f_3[iParam0 /*447*/].f_6 && bParam1;
	else
		Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 - Global_1051832.f_92[iParam0 /*75*/].f_1 && bParam1;

	return;
}

int func_228(int iParam0) // Position - 0xA512 Signature - 22 01 03 00 00 66 00 5D 08 3B 1D 80
{
	return Global_1915656.f_3[iParam0 /*447*/].f_409;
}

void func_229(int iParam0) // Position - 0xA528 Signature - 22 01 03 00 00 2F 66 00 5D 08
{
	Global_1915656.f_3[iParam0 /*447*/].f_6 = 0;
	return;
}

void func_230(int iParam0, BOOL bParam1) // Position - 0xA53E Signature - 22 02 04 00 00 39 C0 12 00 08 72 03 00 50 02 00 66 00 39 F4 49 00 05 8B 03 00 50 02 00 66 00 87 AB 26 17 02 66 01
{
	if (func_45() != -1)
		return;

	if (!func_112(iParam0))
		return;

	Global_9899[iParam0 /*2*/] = Global_9899[iParam0 /*2*/] || bParam1;
	return;
}

void func_231(int iParam0) // Position - 0xA56F Signature - 22 01 04 00 00 66 00 39 F4
{
	Ped ped;

	if (!func_112(iParam0))
		return;

	ped = func_213(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(ped, false))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);

	Global_1893799[iParam0 /*3*/].f_2 = 0;
	return;
}

int func_232(int iParam0) // Position - 0xA5B3 Signature - 22 01 03 00 00 66 00 39 FA
{
	return func_262(iParam0) + 30;
}

void func_233(int iParam0, int iParam1) // Position - 0xA5C3 Signature - 22 02 04 00 00 66 00 76 66 00
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_234(int iParam0, int iParam1) // Position - 0xA5D8 Signature - 22 02 05 00 00 66 00 67
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_263(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_264())
		return func_263(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_263(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_235(Any* panParam0, int iParam1, int iParam2) // Position - 0xA64C Signature - 22 03 08 00 00 66 01 6D 1F 59 67 05 66 01 6D 1F 47 67 06 66 05 66 00 17 01 66 06 03 09 00 9F 67 07 66 05 66 00 63 01 66 06 03 08 00 67
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(panParam0->[num], offset);
	MISC::CLEAR_BIT(&panParam0->[num], offset);
	return isBitSet;
}

void func_236(int iParam0) // Position - 0xA67E Signature - 22 01 03 00 00 66 00 5D DD
{
	Global_1102813.f_26.f_12 = iParam0;
	return;
}

BOOL func_237(int iParam0) // Position - 0xA690 Signature - 22 01 03 00 00 5D DD D3 10 80 1A 27 07
{
	return Global_1102813.f_26.f_7 && iParam0 != false;
}

BOOL func_238(BOOL bParam0) // Position - 0xA6A5 Signature - 22 01 03 00 00 5D DD D3 10 80 1A 27 09 66 00 69 2F
{
	return Global_1102813.f_26.f_9 && bParam0 != false;
}

BOOL func_239(int iParam0) // Position - 0xA6BA Signature - 22 01 03 00 00 66 00 5D CF
{
	return Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1 == Global_1106895[iParam0 /*2*/].f_1;
}

int func_240() // Position - 0xA6E8 Signature - 22 00 02 00 00 85 DD
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

void func_241(BOOL bParam0) // Position - 0xA71B Signature - 22 01 03 00 00 66 00 39 4C
{
	if (func_265(bParam0))
		return;

	Global_1102813.f_26.f_9 = Global_1102813.f_26.f_9 || bParam0;
	return;
}

BOOL func_242(Any* panParam0, int iParam1, int iParam2) // Position - 0xA742 Signature - 22 03 08 00 00 66 01 6D 1F 59 67 05 66 01 6D 1F 47 67 06 66 05 66 00 17 01 66 06 03 09 00 9F 67 07 66 05 66 00 63 01 66 06 03 08 00 78
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(panParam0->[num], offset);
	MISC::SET_BIT(&panParam0->[num], offset);
	return !isBitSet;
}

BOOL func_243(BOOL bParam0, BOOL bParam1) // Position - 0xA775 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 01
{
	return bParam0 && bParam1 != false;
}

int func_244(int iParam0) // Position - 0xA784 Signature - 22 01 03 00 00 66 00 3C B4
{
	switch (iParam0)
	{
		case 0:
			return joaat("shop_asb_gunsmith");
	
		case 1:
			return joaat("shop_asb_post_office");
	
		case 2:
			return joaat("shop_asb_train_station");
	
		case 3:
			return 548657065;
	
		case 4:
			return 243086140;
	
		case 5:
			return joaat("shop_blk_bank");
	
		case 6:
			return joaat("shop_blk_general_store");
	
		case 7:
			return joaat("shop_blk_gunsmith");
	
		case 8:
			return joaat("shop_blk_barber");
	
		case 9:
			return joaat("shop_blk_butcher");
	
		case 10:
			return joaat("shop_blk_bartender");
	
		case 11:
			return joaat("SHOP_BLK_PIANIST");
	
		case 12:
			return joaat("shop_blk_photo_studio");
	
		case 13:
			return joaat("shop_blk_horse_shop");
	
		case 14:
			return joaat("shop_blk_post_office");
	
		case 15:
			return joaat("SHOP_BLK_TRAIN_STATION");
	
		case 16:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_FIRST");
	
		case 17:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_SECOND");
	
		case 18:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_THIRD");
	
		case 19:
			return joaat("shop_blk_tailor");
	
		case 20:
			return joaat("shop_moonshine_still");
	
		case 21:
			return joaat("shop_moonshine_still");
	
		case 22:
			return joaat("shop_emr_fence");
	
		case 23:
			return joaat("shop_emr_general_store");
	
		case 24:
			return joaat("shop_emr_post_office");
	
		case 25:
			return joaat("shop_emr_train_station");
	
		case 26:
			return joaat("shop_lag_bait_store");
	
		case 27:
			return joaat("shop_rgg_post_office");
	
		case 28:
			return joaat("shop_rgg_train_station");
	
		case 29:
			return joaat("shop_rho_bank");
	
		case 30:
			return joaat("shop_rho_butcher");
	
		case 31:
			return joaat("shop_rho_fence");
	
		case 32:
			return joaat("shop_moonshine_still");
	
		case 33:
			return joaat("shop_rho_general_store");
	
		case 34:
			return joaat("shop_rho_gunsmith");
	
		case 35:
			return joaat("shop_rho_post_office");
	
		case 36:
			return joaat("shop_rho_bartender");
	
		case 37:
			return joaat("SHOP_RHO_PIANIST");
	
		case 38:
			return joaat("SHOP_RHO_MUSICIAN_BANJO");
	
		case 39:
			return joaat("shop_rho_train_station");
	
		case 40:
			return -305029900;
	
		case 41:
			return joaat("shop_scm_horse_shop");
	
		case 42:
			return joaat("shop_sdn_bank");
	
		case 43:
			return joaat("shop_sdn_barber");
	
		case 44:
			return joaat("shop_sdn_butcher");
	
		case 45:
			return joaat("shop_sdn_doctor");
	
		case 46:
			return joaat("shop_sdn_fence");
	
		case 47:
			return joaat("shop_moonshine_still");
	
		case 48:
			return joaat("shop_sdn_general_store");
	
		case 49:
			return joaat("shop_sdn_gunsmith");
	
		case 50:
			return joaat("shop_sdn_horse_shop");
	
		case 51:
			return joaat("shop_sdn_post_office");
	
		case 52:
			return joaat("shop_sdn_train_station");
	
		case 53:
			return joaat("shop_sdn_tailor");
	
		case 54:
			return joaat("shop_sdn_bartender");
	
		case 55:
			return joaat("SHOP_SDN_PIANIST");
	
		case 56:
			return joaat("shop_sdn_bartender_slum");
	
		case 57:
			return joaat("SHOP_SDN_PIANIST_SLUM");
	
		case 58:
			return joaat("SHOP_SDN_MUSICIAN_GUITARIST");
	
		case 59:
			return joaat("SHOP_SDN_MUSICIAN_BANJO");
	
		case 60:
			return joaat("shop_sdn_photo_studio");
	
		case 61:
			return joaat("SHOP_SDN_THEATER_MP");
	
		case 62:
			return joaat("SHOP_SDN_THEATER_MAGIC_MP");
	
		case 63:
			return joaat("shop_sdn_trapper");
	
		case 64:
			return 878376253;
	
		case 65:
			return 1388932648;
	
		case 66:
			return -2076086367;
	
		case 67:
			return 1529797091;
	
		case 68:
			return joaat("shop_str_butcher");
	
		case 69:
			return joaat("shop_str_general_store");
	
		case 70:
			return joaat("rage_p2_3") /* collision: shop_str_welcome_center */;
	
		case 71:
			return joaat("shop_str_horse_shop");
	
		case 72:
			return joaat("SHOP_STR_MUSICIAN_BANJO");
	
		case 73:
			return joaat("SHOP_STR_MUSICIAN_GUITARIST");
	
		case 74:
			return joaat("shop_str_post_office");
	
		case 75:
			return joaat("shop_str_bartender");
	
		case 76:
			return 1008537949;
	
		case 77:
			return joaat("shop_val_bank");
	
		case 78:
			return joaat("shop_val_barber");
	
		case 79:
			return joaat("shop_val_bartender");
	
		case 80:
			return joaat("SHOP_VAL_PIANIST");
	
		case 81:
			return joaat("SHOP_VAL_BARTENDER_KEANE");
	
		case 82:
			return joaat("shop_val_butcher");
	
		case 83:
			return joaat("shop_val_doctor");
	
		case 84:
			return joaat("shop_val_general_store");
	
		case 85:
			return joaat("shop_val_gunsmith");
	
		case 86:
			return joaat("shop_val_horse_shop");
	
		case 87:
			return joaat("shop_val_post_office");
	
		case 88:
			return joaat("shop_val_train_station");
	
		case 89:
			return joaat("SHOP_VAL_THEATER_MAGIC_MP");
	
		case 90:
			return joaat("shop_val_hotel");
	
		case 91:
			return joaat("shop_val_bartender_slum");
	
		case 92:
			return joaat("shop_moonshine_still");
	
		case 93:
			return joaat("SHOP_VAN_FENCE");
	
		case 94:
			return joaat("shop_van_bartender");
	
		case 95:
			return joaat("SHOP_VAN_PIANIST");
	
		case 96:
			return joaat("shop_van_horse_shop");
	
		case 97:
			return joaat("shop_van_train_station");
	
		case 98:
			return joaat("shop_van_post_office");
	
		case 99:
			return joaat("shop_wal_general_store");
	
		case 100:
			return joaat("shop_wal_train_station");
	
		case 101:
			return joaat("shop_wal_post_office");
	
		case 102:
			return joaat("shop_tbl_general_store");
	
		case 103:
			return joaat("shop_tbl_gunsmith");
	
		case 104:
			return joaat("shop_tbl_butcher");
	
		case 105:
			return joaat("shop_tbl_bartender");
	
		case 106:
			return joaat("SHOP_TBL_PIANIST");
	
		case 107:
			return joaat("shop_tbl_horse_shop");
	
		case 108:
			return joaat("shop_amd_general_store");
	
		case 109:
			return joaat("shop_amd_honor_mp");
	
		case 110:
			return joaat("shop_amd_bartender");
	
		case 111:
			return joaat("shop_amd_post_office");
	
		case 112:
			return joaat("shop_amd_train_station");
	
		case 113:
			return joaat("shop_roj_honor_mp");
	
		case 114:
			return joaat("shop_boj_honor_mp");
	
		case 115:
			return joaat("shop_moonshine_still");
	
		case 116:
			return joaat("shop_ryc_fence");
	
		case 117:
			return joaat("shop_ben_post_office");
	
		case 118:
			return joaat("shop_ben_train_station");
	
		case 119:
			return joaat("shop_dynamic");
	
		case 120:
			return joaat("shop_val_bountyhunting_mp_return");
	
		case 121:
			return joaat("shop_val_coach");
	
		case 122:
			return joaat("shop_blk_bountyhunting_mp_return");
	
		case 123:
			return joaat("shop_blk_coach");
	
		case 124:
			return joaat("shop_sdn_bountyhunting_mp_return");
	
		case 125:
			return joaat("shop_sdn_coach");
	
		case 126:
			return joaat("shop_rho_bountyhunting_mp_return");
	
		case 127:
			return joaat("shop_str_bountyhunting_mp_return");
	
		case 128:
			return joaat("shop_van_coach");
	
		case 129:
			return joaat("shop_asb_bountyhunting_mp_return");
	
		case 130:
			return joaat("shop_thl_fence");
	
		case 131:
			return joaat("shop_moonshine_still");
	
		case 132:
			return joaat("SHOP_BUT_MUSICIAN_BANJO");
	
		case 133:
			return joaat("shop_wilderness_supplies");
	
		case 134:
			return -765151559;
	
		case 135:
			return joaat("SHOP_RIO_TRAVELLING_SALESMAN");
	
		case 136:
			return joaat("SHOP_CHO_TRAVELLING_SALESMAN");
	
		case 137:
			return joaat("SHOP_HEN_TRAVELLING_SALESMAN");
	
		case 138:
			return joaat("SHOP_TAL_TRAVELLING_SALESMAN");
	
		case 139:
			return joaat("SHOP_BGV_TRAVELLING_SALESMAN");
	
		case 140:
			return joaat("SHOP_HRT_E_TRAVELLING_SALESMAN");
	
		case 141:
			return joaat("SHOP_HRT_W_TRAVELLING_SALESMAN");
	
		case 142:
			return joaat("SHOP_GRZ_TRAVELLING_SALESMAN");
	
		case 143:
			return joaat("SHOP_SCM_TRAVELLING_SALESMAN");
	
		case 144:
			return joaat("SHOP_BLU_TRAVELLING_SALESMAN");
	
		case 145:
			return joaat("SHOP_DER_TRAVELLING_SALESMAN");
	
		case 146:
			return joaat("SHOP_BBR_TRAVELLING_SALESMAN");
	
		case 147:
			return joaat("SHOP_CAMP_TRAVELLING_SALESMAN");
	
		case 148:
			return 1239556700;
	
		case 149:
			return 1968750441;
	
		case 150:
			return 317019665;
	
		case 151:
			return 1421441577;
	
		case 152:
			return joaat("shop_anywhere_handheld");
	
		case 153:
			return joaat("shop_camp_lockbox");
	
		case 154:
			return joaat("shop_camp_butchertable");
	
		case 155:
			return joaat("shop_bvh_doctor");
	
		case 156:
			return joaat("shop_bvh_general_store");
	
		case 157:
			return joaat("shop_bvh_gunsmith");
	
		case 158:
			return joaat("shop_bvh_horse_trainer");
	
		case 159:
			return joaat("shop_clm_doctor");
	
		case 160:
			return joaat("shop_clm_general_store");
	
		case 161:
			return joaat("shop_clm_gunsmith");
	
		case 162:
			return joaat("shop_clm_horse_trainer");
	
		case 163:
			return joaat("shop_clm_horse_fence");
	
		case 164:
			return joaat("shop_hso_doctor");
	
		case 165:
			return joaat("shop_hso_general_store");
	
		case 166:
			return joaat("shop_hso_gunsmith");
	
		case 167:
			return joaat("shop_hso_horse_trainer");
	
		case 168:
			return joaat("SHOP_LAK_DOCTOR");
	
		case 169:
			return joaat("SHOP_LAK_GENERAL_STORE");
	
		case 170:
			return joaat("SHOP_LAK_GUNSMITH");
	
		case 171:
			return joaat("SHOP_LAK_HORSE_TRAINER");
	
		case 172:
			return joaat("shop_shb_doctor");
	
		case 173:
			return joaat("shop_shb_general_store");
	
		case 174:
			return joaat("shop_shb_gunsmith");
	
		case 175:
			return joaat("shop_shb_horse_trainer");
	
		case 176:
			return joaat("shop_weapon_mod_store");
	
		case 177:
			return joaat("shop_clothing");
	
		case 178:
			return joaat("shop_camp_shaving");
	
		case 179:
			return joaat("shop_wardrobe");
	
		default:
		
	}

	return 0;
}

BOOL func_245(int iParam0, int iParam1, var uParam2) // Position - 0xB16C Signature - 22 03 0A
{
	var unk;

	if (func_266(iParam0, iParam1, &unk))
		func_267(&unk, iParam0, uParam2);
	else
		return false;

	return true;
}

int func_246() // Position - 0xB193 Signature - 22 00 02 00 00 6D 30
{
	return Global_1072759.f_28418[48 /*4*/].f_3;
}

BOOL func_247(var uParam0, var uParam1) // Position - 0xB1A8 Signature - 22 02 04 00 00 66 00 39 10
{
	if (!func_268(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_269(uParam0))
		return false;

	return true;
}

int func_248(int iParam0, var uParam1) // Position - 0xB1DC Signature - 22 02 04 00 00 66 00 11
{
	if (iParam0 == 2)
		return func_270(iParam0);

	return -1;
}

BOOL func_249() // Position - 0xB1F6 Signature - 22 00 02 00 00 85 00
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_247(Global_1051268) && Global_1572887.f_8 & true != 0)
		return true;

	return false;
}

struct<2> func_250() // Position - 0xB24E Signature - 22 00 02 00 00 11
{
	return Global_1051268;
}

struct<2> func_251() // Position - 0xB25C Signature - 22 00 02 00 00 5D 2C
{
	if (Global_1205804.f_129 <= 0)
		return func_60(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_60(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

BOOL func_252(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0xB2A7 Signature - 22 04 0D
{
	var unk;
	float num;
	float num2;

	func_271(iParam3, &unk, &num, &num2);

	if (func_272(uParam0, unk, num, num.f_1, num2))
		return true;

	return false;
}

BOOL func_253(int iParam0) // Position - 0xB2D7 Signature - 22 01 03 00 00 66 00 2F 15 04
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_254(int iParam0) // Position - 0xB2EA Signature - 22 01 06 00 00 66 00 67
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_38.f_3651[num2], offset);
}

BOOL func_255(int iParam0) // Position - 0xB314 Signature - 22 01 03 00 00 66 00 39 F4 49 00 05 8B 04 00 2F 50 01 01 66 00 5D A7 E5 1C 63 03 27 02 03 05
{
	if (!func_112(iParam0))
		return false;

	return SCRIPTS::DOES_THREAD_EXIST(Global_1893799[iParam0 /*3*/].f_2);
}

BOOL func_256(Hash hParam0) // Position - 0xB338 Signature - 22 01 03 00 00 66 00 2F 1C 50 01 01 22 02
{
	return hParam0 != 0;
}

BOOL func_257(int iParam0, BOOL bParam1) // Position - 0xB344 Signature - 22 02 04 00 00 66 00 39 73 9C 00 05 8B 04
{
	if (!func_208(iParam0))
		return false;

	return Global_1915656.f_17884[iParam0] && bParam1 != false;
}

void func_258(int iParam0, BOOL bParam1) // Position - 0xB36A Signature - 22 02 04 00 00 66 00 39 73 9C 00 05 8B 03 00 50 02 00 66 00 5D 08 3B 1D 18 DC 45 17 01 66 01
{
	if (!func_208(iParam0))
		return;

	Global_1915656.f_17884[iParam0] = Global_1915656.f_17884[iParam0] || bParam1;
	return;
}

void func_259(int iParam0, BOOL bParam1) // Position - 0xB398 Signature - 22 02 04 00 00 66 00 39 73 9C 00 05 8B 03 00 50 02 00 66 00 5D 08 3B 1D 18 DC 45 17 01 66 00
{
	if (!func_208(iParam0))
		return;

	Global_1915656.f_17884[iParam0] = Global_1915656.f_17884[iParam0] - Global_1915656.f_17884[iParam0] && bParam1;
	return;
}

void func_260(int iParam0) // Position - 0xB3D2 Signature - 22 01 03 00 00 66 00 39 17
{
	func_274(func_273(iParam0));
	return;
}

BOOL func_261(int iParam0) // Position - 0xB3E4 Signature - 22 01 03 00 00 66 00 08 20 6A 8B 06 00 66 00 6D 28
{
	return iParam0 > -1 && iParam0 < 40;
}

int func_262(int iParam0) // Position - 0xB3FA Signature - 22 01 03 00 00 66 00 14
{
	return iParam0 * 31;
}

BOOL func_263(Any* panParam0, int iParam1, int iParam2) // Position - 0xB406 Signature - 22 03 07
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_264() // Position - 0xB43D Signature - 22 00 02 00 00 5D DD D3 10 78 58
{
	return Global_1102813.f_3672;
}

BOOL func_265(BOOL bParam0) // Position - 0xB44C Signature - 22 01 03 00 00 5D DD D3 10 80 1A 27 09 66 00 69 66
{
	return Global_1102813.f_26.f_9 && bParam0 == bParam0;
}

BOOL func_266(int iParam0, int iParam1, Any* panParam2) // Position - 0xB462 Signature - 22 03 05 00 00 5D F8
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = 1351168281;
	panParam2->f_3 = func_275(iParam0);
	panParam2->f_4 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_267(Any* panParam0, int iParam1, var uParam2) // Position - 0xB496 Signature - 22 03 06 00 00 66
{
	var unk;

	*uParam2 = iParam1;
	panParam0->f_2 = -611386243;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), panParam0);
	panParam0->f_2 = -2140901307;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, panParam0))
		uParam2->f_2 = unk;

	panParam0->f_2 = -2140901307;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_11), panParam0);
	panParam0->f_2 = 1292053410;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_19), panParam0);
	panParam0->f_2 = 1234058424;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_3), panParam0);
	return;
}

BOOL func_268(int iParam0) // Position - 0xB510 Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 21
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

int func_269(int iParam0) // Position - 0xB54F Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 2E
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

int func_270(var uParam0, var uParam1) // Position - 0xB5E5 Signature - 22 02 07 00 00 4B
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_276(uParam0, &unk))
		return unk.f_1;

	return -1;
}

void func_271(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0xB611 Signature - 22 04 06 00 00 66 00 3C
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
	
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
	
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
	
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
	
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
	
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
	
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
	
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
	
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
	
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
	
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
	
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
	
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
	
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
	
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
	
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
	
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
	
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
	
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
	
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
	
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
	
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
	
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
	
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
	
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
	
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
	
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
	
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
	
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
	
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
	
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
	
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
	
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
	
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
	
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
	
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
	
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
	
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
	
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
	
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
	
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
	
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
	
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
	
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
	
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
	
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
	
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}

	return;
}

BOOL func_272(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8) // Position - 0xC0B1 Signature - 22 09
{
	float num;
	float num2;
	float num3;

	num = { uParam0 - uParam3 };
	num2 = (num * BUILTIN::COS(fParam8)) + (num.f_1 * BUILTIN::SIN(fParam8));
	num2.f_1 = (num * BUILTIN::SIN(fParam8)) - (num.f_1 * BUILTIN::COS(fParam8));
	num3 = ((num2 * num2) / (fParam6 * fParam6)) + ((num2.f_1 * num2.f_1) / (fParam7 * fParam7));
	return num3 <= 1f;
}

int func_273(int iParam0) // Position - 0xC117 Signature - 22 01 03 00 00 66 00 08 20 6A 8B 06 00 66 00 6D B4 35 69 05
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

void func_274(int iParam0) // Position - 0xC634 Signature - 22 01 03 00 00 66 00 5D 08 3B 1D 8C
{
	Global_1915656.f_18247 = iParam0;
	return;
}

int func_275(int iParam0) // Position - 0xC645 Signature - 22 01 04 00 00 2F 67 03 66 00
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -3:
			num = 1300413597;
			break;
	
		case -2:
			num = joaat("GOLD");
			break;
	
		case 0:
			num = joaat("Challenge");
			break;
	
		case 1:
			num = joaat("feature");
			break;
	
		case 2:
			num = joaat("MISSION_STORY");
			break;
	
		case 3:
			num = joaat("MISSION_PROCEDURAL");
			break;
	
		case 4:
			num = joaat("MISSION_FETCH");
			break;
	
		case 5:
			num = joaat("MISSION_MINIGAME");
			break;
	
		case 6:
			num = joaat("MISSION_FREE_MODE_EVENT");
			break;
	
		case 7:
			num = joaat("MISSION_UGC");
			break;
	
		case 8:
			num = joaat("MISSION_BEAT");
			break;
	
		case 9:
			num = joaat("Property");
			break;
	
		case 10:
			num = joaat("Recipe");
			break;
	
		case 11:
			num = joaat("TITLE");
			break;
	
		case 12:
			num = joaat("SHOP");
			break;
	
		case 13:
			num = joaat("GFH_GIVERS");
			break;
	
		case 14:
			num = joaat("GFH_LOCATIONS");
			break;
	
		case 15:
			num = 1332629624;
			break;
	
		case 16:
			num = 1746212499;
			break;
	
		case 17:
			num = joaat("GVO_UNLOCKS");
			break;
	
		case 18:
			num = 1151893103;
			break;
	
		case 19:
			num = -312924468;
			break;
	}

	return num;
}

BOOL func_276(int iParam0, var uParam1, Any* panParam2) // Position - 0xC7BA Signature - 22 03 05 00 00 11
{
	if (!func_247(iParam0))
		return false;

	func_277(panParam2);

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

void func_277(Any* panParam0) // Position - 0xC8C5 Signature - 22 01 03 00 00 2F 66 00 32
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

