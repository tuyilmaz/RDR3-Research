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
	Volume volLocal_14 = 0;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	BOOL bLocal_25 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 03 00 00 48
{
	int num;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	iLocal_20 = 20000;
	iLocal_23 = iScriptParam_0;
	iLocal_21 = iScriptParam_0.f_2;
	bLocal_25 = false;

	if (Global_1901671.f_2.f_26 > 0)
		func_1();

	func_2();
	func_3();
	iLocal_22 = MISC::GET_GAME_TIMER();
	num = 0;

	while (func_4())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_22)
		{
			iLocal_22 = 0;
			func_5(iLocal_23, &iLocal_21);
		
			switch (iLocal_21)
			{
				case 0:
					if (Global_1901671.f_2.f_26 > 0)
					{
						iLocal_24 = MISC::GET_GAME_TIMER() + Global_1901671.f_2.f_26;
						iLocal_21 = 1;
					}
					else
					{
						iLocal_21 = 2;
					}
					break;
			
				case 1:
					if (!func_1() || iLocal_24 < MISC::GET_GAME_TIMER())
					{
						bLocal_25 = false;
						iLocal_21 = 2;
					}
					break;
			
				case 2:
					func_6(iLocal_23);
					func_7();
					func_8();
				
					if (func_10(func_9(iLocal_23)))
						func_11(func_9(iLocal_23), 4);
				
					LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), func_12(iLocal_23));
					Global_1896644 = -1;
					iLocal_24 = iLocal_20 + MISC::GET_GAME_TIMER();
					iLocal_21 = 3;
					break;
			
				case 3:
					if (func_13() || iLocal_24 < MISC::GET_GAME_TIMER())
					{
						_DEBUG_PRINT(iLocal_23);
						iLocal_24 = MISC::GET_GAME_TIMER() + iLocal_20;
						iLocal_21 = 4;
					}
					break;
			
				case 4:
					if (func_15(iLocal_23) || iLocal_24 < MISC::GET_GAME_TIMER())
					{
						_DEBUG_PRINT_0(iLocal_23);
						iLocal_24 = MISC::GET_GAME_TIMER() + iLocal_20;
						iLocal_21 = 5;
					}
					break;
			
				case 5:
					if (func_17(iLocal_23) || iLocal_24 < MISC::GET_GAME_TIMER())
					{
						_DEBUG_PRINT_0_0(iLocal_23);
						iLocal_24 = iLocal_20 + MISC::GET_GAME_TIMER();
						iLocal_21 = 7;
					}
					break;
			
				case 7:
					if (func_10(func_9(iLocal_23)))
						if (func_19(func_9(iLocal_23), 4) && !(iLocal_24 < MISC::GET_GAME_TIMER()))
							break;
				
					if (func_20(iLocal_23) || iLocal_24 < MISC::GET_GAME_TIMER())
					{
						func_21(iLocal_23, 4);
						iLocal_24 = MISC::GET_GAME_TIMER() + iLocal_20;
						iLocal_21 = 8;
					}
					break;
			
				case 8:
					_DEBUG_PRINT_0_0_0(iLocal_23);
					func_23();
				
					if (!func_24(4105, false))
						func_25();
				
					func_26();
					func_27();
					func_28();
					_DEBUG_PRINT_0_0_0_0(iLocal_23);
					_DEBUG_PRINT_0_0_0_0_0(iLocal_23);
					func_31();
					func_32();
					iLocal_21 = 9;
					break;
			
				case 9:
					_DEBUG_PRINT_0_0_0_0_0_0(iLocal_23);
					func_34();
					iLocal_21 = 10;
					break;
			
				case 10:
					func_35(&Global_1896698);
					func_36(iLocal_23, &Global_1896698);
					iLocal_21 = 11;
					break;
			
				case 11:
					func_37(iLocal_23);
					func_21(iLocal_23, 8);
				
					if (func_38(32))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
							CAM::DO_SCREEN_FADE_IN(500);
					
						func_39(32);
					}
				
					iLocal_21 = 12;
					break;
			
				case 12:
					if (func_40(iLocal_23))
						iLocal_22 = MISC::GET_GAME_TIMER() + 1000;
				
					func_41(&Global_1896698, iLocal_23);
					func_42(iLocal_23);
					func_21(iLocal_23, 8);
				
					if (func_43())
						PED::_SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				
					PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1887363[iLocal_23 /*36*/].f_11);
				
					if (Global_1887363[iLocal_23 /*36*/].f_12 > 0f)
						PED::_SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1887363[iLocal_23 /*36*/].f_12);
					break;
			
				case 13:
					func_8();
					func_44(num);
					num = num + 1;
					break;
			}
		}
	
		if (Global_1887363[iLocal_23 /*36*/].f_13 == 0)
		{
		}
		else
		{
			PED::_SET_SCENARIO_PED_DENSITY_THIS_FRAME(Global_1887363[iLocal_23 /*36*/].f_13);
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
	if (!bLocal_25)
	{
		if (Global_1051194)
		{
			bLocal_25 = true;
			return true;
		}
	
		if (func_47() && func_48())
		{
			bLocal_25 = true;
			return true;
		}
	
		return false;
	}

	if (Global_1051194)
		return true;

	if (func_48())
		return true;

	bLocal_25 = false;
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

BOOL func_4() // Position - 0x42F Signature - 22 00 02 00 00 39 3D 0D 00 08
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

void func_7() // Position - 0x582 Signature - 22 00 02 00 00 5D DD
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

BOOL func_13() // Position - 0x7D0 Signature - 22 00 02 00 00 86
{
	volLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-337.0264f, -358.90872f, 88.0646f, 0f, 0f, 0f, 94.2006f, 77.56374f, 227f, "m_volSwansonStation");
	return true;
}

void _DEBUG_PRINT(int iParam0) // Position - 0x802 Signature - 22 01 03 00 00 66 00 67 00 50 01 00 22 01 03 00 00 66 00 67 00 09 50 01 01 22 01 03 00 00 66 00 67 00 50 01 00 22 01
{
	iParam0 = iParam0;
	return;
}

BOOL func_15(int iParam0) // Position - 0x80E Signature - 22 01 03 00 00 66 00 67 00 09 50 01 01 22 01 03 00 00 66 00 67 00 50 01 00 22 01
{
	iParam0 = iParam0;
	return true;
}

void _DEBUG_PRINT_0(int iParam0) // Position - 0x81B Signature - 22 01 03 00 00 66 00 67 00 50 01 00 22 01 03 00 00 66 00 67 00 09 50 01 01 22 01 03 00 00 66 00 67 00 50 01 00 22 02
{
	iParam0 = iParam0;
	return;
}

BOOL func_17(int iParam0) // Position - 0x827 Signature - 22 01 03 00 00 66 00 67 00 09 50 01 01 22 01 03 00 00 66 00 67 00 50 01 00 22 02
{
	iParam0 = iParam0;
	return true;
}

void _DEBUG_PRINT_0_0(int iParam0) // Position - 0x834 Signature - 22 01 03 00 00 66 00 67 00 50 01 00 22 02
{
	iParam0 = iParam0;
	return;
}

BOOL func_19(int iParam0, BOOL bParam1) // Position - 0x840 Signature - 22 02 04 00 00 66 00 5D C6 F0 1C 17 02 66 01 69
{
	return Global_1896646[iParam0 /*2*/] && bParam1 != false;
}

BOOL func_20(int iParam0) // Position - 0x855 Signature - 22 01 03 00 00 66 00 08 08
{
	return func_53(iParam0, -1, -1, false);
}

void func_21(int iParam0, BOOL bParam1) // Position - 0x866 Signature - 22 02 04 00 00 5D 17 00 18 27 0E 08 15 14
{
	if (Global_1572887.f_14 == -1)
		Global_8130[iParam0 /*11*/] = Global_8130[iParam0 /*11*/] || bParam1;
	else
		Global_1072759.f_19611[iParam0 /*11*/] = Global_1072759.f_19611[iParam0 /*11*/] || bParam1;

	return;
}

void _DEBUG_PRINT_0_0_0(int iParam0) // Position - 0x8A5 Signature - 22 01 03 00 00 66 00 67 00 50 01 00 22 00 02 00 00 50 00 00 22 02
{
	iParam0 = iParam0;
	return;
}

void func_23() // Position - 0x8B1 Signature - 22 00 02 00 00 50 00 00 22 02 04 00 00 66 00 39
{
	return;
}

BOOL func_24(int iParam0, BOOL bParam1) // Position - 0x8B9 Signature - 22 02 04 00 00 66 00 39 EB
{
	if (func_54(iParam0))
		return true;

	if (!bParam1)
		if (func_55(5000))
			return true;

	switch (func_57(func_56(0)))
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

void func_25() // Position - 0x969 Signature - 22 00 02 00 00 39 3D 0D 00 2F
{
	if (func_45() == 0)
		func_58(-1014145132, true, false);

	return;
}

void func_26() // Position - 0x984 Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 50 00 00 22 00
{
	return;
}

void func_27() // Position - 0x98C Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 50 00 00 22 01 03 00 00 66 00 67 00 50 01 00 22 01
{
	return;
}

void func_28() // Position - 0x994 Signature - 22 00 02 00 00 50 00 00 22 01 03 00 00 66 00 67 00 50 01 00 22 01
{
	return;
}

void _DEBUG_PRINT_0_0_0_0(int iParam0) // Position - 0x99C Signature - 22 01 03 00 00 66 00 67 00 50 01 00 22 01 03 00 00 66 00 67 00 50
{
	iParam0 = iParam0;
	return;
}

void _DEBUG_PRINT_0_0_0_0_0(int iParam0) // Position - 0x9A8 Signature - 22 01 03 00 00 66 00 67 00 50 01 00 22 00 02 00 00 50 00 00 22 00
{
	iParam0 = iParam0;
	return;
}

void func_31() // Position - 0x9B4 Signature - 22 00 02 00 00 50 00 00 22 00 02 00 00 50 00 00 22 01 03 00 00 66 00 67 00 50 01 00 22 00
{
	return;
}

void func_32() // Position - 0x9BC Signature - 22 00 02 00 00 50 00 00 22 01 03 00 00 66 00 67 00 50 01 00 22 00
{
	return;
}

void _DEBUG_PRINT_0_0_0_0_0_0(int iParam0) // Position - 0x9C4 Signature - 22 01 03 00 00 66 00 67 00 50 01 00 22 00 02 00 00 5D
{
	iParam0 = iParam0;
	return;
}

void func_34() // Position - 0x9D0 Signature - 22 00 02 00 00 5D EB
{
	if (!Global_1893611.f_186)
		VEHICLE::_SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION(Global_1893611.f_182, Global_1893611.f_183, Global_1893611.f_184, Global_1893611.f_185);

	return;
}

void func_35(var uParam0) // Position - 0xA01 Signature - 22 01 04 00 00 66 00 27
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

void func_36(int iParam0, var uParam1) // Position - 0xA47 Signature - 22 02 04 00 00 66 00 67
{
	iParam0 = iParam0;
	func_59(uParam1, volLocal_14, 5);
	return;
}

void func_37(int iParam0) // Position - 0xA5C Signature - 22 01 03 00 00 66 00 39 CC 1B 00 05 8B 03
{
	if (!func_60(iParam0))
		return;

	func_61();
	return;
}

BOOL func_38(BOOL bParam0) // Position - 0xA75 Signature - 22 01 03 00 00 85 EB E4 1C 66
{
	return Global_1893611 && bParam0 != false;
}

void func_39(BOOL bParam0) // Position - 0xA86 Signature - 22 01 03 00 00 85 EB E4 1C 85
{
	Global_1893611 = Global_1893611 - Global_1893611 && bParam0;
	return;
}

BOOL func_40(int iParam0) // Position - 0xA9E Signature - 22 01 03 00 00 09
{
	return true;
}

void func_41(var uParam0, int iParam1) // Position - 0xAA7 Signature - 22 02 08 00 00 1D
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int i;

	if (BUILTIN::VDIST(Global_34, 0f, 0f, 0f) <= 5f || func_62(Global_1940199, 32768) || func_62(Global_1940199, 16777216))
		return;

	if (func_63(uParam0, 1))
		return;

	uParam0->f_63 = uParam0->f_63 + 1;

	if (uParam0->f_63 < 10)
		return;

	uParam0->f_63 = 0;
	flag = false;
	flag2 = CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADING_OUT();
	flag3 = func_64();

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
							if (!func_65(&uParam0->[i /*3*/], 1) && func_66(iParam1) && !func_67(iParam1, 16))
							{
								func_69(iParam1, func_68(), -1, false, -1, false);
								func_70(&uParam0->[i /*3*/], 1);
							}
						
							func_71(iParam1, false);
						}
					
						flag = true;
					}
				}
				break;
		
			default:
				break;
		}
	}

	func_72(flag);
	return;
}

int func_42(int iParam0) // Position - 0xBE6 Signature - 22 01 03 00 00 66 00 67 00 09 50 01 01 22 00
{
	iParam0 = iParam0;
	return 1;
}

BOOL func_43() // Position - 0xBF3 Signature - 22 00 06 00 00 4B
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

	if (func_73(unk))
		return true;

	return false;
}

BOOL func_44(int iParam0) // Position - 0xC29 Signature - 22 01 03 00 00 66 00 2F 15 CD
{
	if (iParam0 == 0)
	{
		func_74();
		LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), 0);
		func_21(iLocal_23, 2048);
	
		if (STATS::CHAL_IS_GOAL_ACTIVE(joaat("mpac_travel"), joaat("mpac_travel_012")))
		{
			switch (iLocal_23)
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
					STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(func_75(iLocal_23, false), 1);
					break;
			}
		}
	
		if (func_10(func_68()))
			func_11(func_68(), 8);
	
		func_76(iLocal_23, 4);
		func_76(iLocal_23, 8);
		func_72(false);
	
		if (func_45() == -1)
			func_77(false);
	
		func_78(iLocal_23);
		func_34();
		return false;
	}
	else if (func_45() == -1)
	{
		func_79(iLocal_23);
		func_80(iLocal_23);
	
		if (!func_81(iLocal_23, false))
			return false;
	}
	else if (!func_82(iLocal_23))
	{
		return false;
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

int func_45() // Position - 0xD3D Signature - 22 00 02 00 00 5D 17 00 18 27
{
	return Global_1572887.f_14;
}

void func_46() // Position - 0xD4B Signature - 22 00 02 00 00 03
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_47() // Position - 0xD57 Signature - 22 00 02 00 00 5D 17 00 18 18
{
	if (Global_1572887.f_260.f_3 > 0)
		return true;

	if (Global_1572887.f_260.f_4 != 0)
		return true;

	return false;
}

BOOL func_48() // Position - 0xD82 Signature - 22 00 02 00 00 37 25
{
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("fm_mission_controller"), -1, false, 0))
		return 1;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("fm_deathmatch_controller"), -1, false, 0))
		return 1;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("fm_race_controller"), -1, false, 0))
		return 1;

	return 0;
}

BOOL func_49(BOOL bParam0, BOOL bParam1) // Position - 0xDC4 Signature - 22 02 05 00 00 5D
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

BOOL func_50(int iParam0) // Position - 0xEA4 Signature - 22 01 03 00 00 66 00 39 CC 1B 00 05 8B 04 00 2F 50 01 01 66 00 6D
{
	if (!func_60(iParam0))
		return false;

	return func_83(iParam0, 8);
}

BOOL func_51(int iParam0) // Position - 0xEC2 Signature - 22 01 03 00 00 5D EB E4 1C 27 07 66
{
	return Global_1893611.f_7 && iParam0 != false;
}

void func_52(int iParam0) // Position - 0xED5 Signature - 22 01 03 00 00 5D EB E4 1C 27 07 5D
{
	Global_1893611.f_7 = Global_1893611.f_7 - Global_1893611.f_7 && iParam0;
	return;
}

BOOL func_53(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xEF3 Signature - 22 04 09
{
	int num;
	int num2;
	int num3;

	if (func_45() != -1)
		return 1;

	if (!func_60(iParam0))
		return 1;

	if (func_83(iParam0, 16))
		return 1;

	func_84(iParam0) && !func_85(iParam0);

	if (func_86(iParam0, &num, &num2, false, false))
	{
		if (func_87(iParam1))
			num = iParam1;
	
		if (func_87(iParam2))
			num2 = iParam2;
	
		if (Global_1896644 < num || Global_1896644 > num2)
			Global_1896644 = num;
	
		while (true)
		{
			if (!func_84(iParam0) || func_85(iParam0) || func_88(Global_1896644))
				func_89(Global_1896644, false);
		
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

BOOL func_54(int iParam0) // Position - 0xFEB Signature - 22 01 03 00 00 85 E7
{
	return Global_1940199 && iParam0 != false;
}

BOOL func_55(int iParam0) // Position - 0xFFC Signature - 22 01 03 00 00 03
{
	return MISC::GET_GAME_TIMER() - iParam0 < Global_1900595;
}

struct<2> func_56(int iParam0) // Position - 0x1010 Signature - 22 01 03 00 00 11
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_57(var uParam0, var uParam1) // Position - 0x1024 Signature - 22 02 04 00 00 66 00 50
{
	return uParam0;
}

void func_58(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x102E Signature - 22 03 05 00 00 66 02
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
			func_92();
			func_90(iParam0);
			break;
	
		case -1925798111:
			func_90(-1925798111);
			func_91(-919512195);
			func_91(420709909);
			func_91(1703426636);
			break;
	
		case -1838352012:
			func_91(-1674179981);
			func_91(-1835851517);
			func_90(-1838352012);
			break;
	
		case -1835851517:
			func_91(-1674179981);
			func_91(-1838352012);
			func_90(-1835851517);
			break;
	
		case -1738165526:
			func_90(-1738165526);
			func_91(0);
			func_91(473295046);
			break;
	
		case -1717960576:
			func_91(210001842);
			func_90(-1717960576);
			break;
	
		case -1674179981:
			func_91(-1835851517);
			func_91(-1838352012);
			func_90(-1674179981);
			break;
	
		case -1612662716:
			func_91(1822001510);
			func_90(-1612662716);
			break;
	
		case -1414537028:
			func_91(38162571);
			func_91(1350391819);
			func_91(54073871);
			func_90(-1414537028);
			break;
	
		case -1311865656:
			func_90(-1311865656);
			func_91(1509509592);
			func_91(-959357075);
			func_91(405586984);
			break;
	
		case -1271608261:
			func_91(-150493654);
			func_91(1846061697);
			func_91(-1145519186);
			func_90(-1271608261);
			break;
	
		case -1223121209:
			func_90(-1223121209);
			func_91(630808005);
			break;
	
		case -1145519186:
			func_91(-150493654);
			func_91(-1271608261);
			func_91(1846061697);
			func_90(-1145519186);
			break;
	
		case -1124061431:
			func_91(198200492);
			func_90(-1124061431);
			func_91(52706132);
			func_91(-259123672);
			break;
	
		case -1080627546:
			if (bParam1)
				func_90(-1080627546);
			else
				func_91(-1080627546);
			break;
	
		case -1056767524:
		case -538889627:
		case -538880323:
			func_91(-538889627);
			func_91(-538880323);
			func_91(-1056767524);
			func_90(iParam0);
			break;
	
		case -959357075:
			func_90(-959357075);
			func_91(1509509592);
			func_91(405586984);
			func_91(-1311865656);
			break;
	
		case -919512195:
			func_90(-919512195);
			func_91(-1925798111);
			func_91(420709909);
			func_91(1703426636);
			break;
	
		case -664252410:
			func_91(2019386373);
			func_91(2109952320);
			func_90(-664252410);
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
			func_93();
			func_90(iParam0);
			break;
	
		case -524145696:
			if (bParam1)
				func_90(-524145696);
			else
				func_91(-524145696);
		
			func_91(1626481264);
			func_91(282809459);
			break;
	
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			if (bParam1)
			{
				func_90(joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"));
			}
			else
			{
				func_91(joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"));
				func_95(385812466);
				func_95(-1201452352);
			}
			break;
	
		case -502324015:
			func_91(1497516462);
			func_91(2016141805);
			func_91(1010885152);
			func_90(-502324015);
			break;
	
		case -434590080:
			func_91(1376646519);
			func_91(931649776);
			func_91(1743048395);
			func_91(449774763);
			func_90(-434590080);
			break;
	
		case -404698347:
			func_91(1306158345);
			func_91(1952610440);
			func_91(-223469678);
			func_91(1517904467);
			func_90(-404698347);
			break;
	
		case -259123672:
			func_91(198200492);
			func_91(-1124061431);
			func_91(52706132);
			func_90(-259123672);
			break;
	
		case -223469678:
			func_91(1306158345);
			func_91(1952610440);
			func_91(-404698347);
			func_91(1517904467);
			func_90(-223469678);
			break;
	
		case -150493654:
			func_91(-1271608261);
			func_91(1846061697);
			func_91(-1145519186);
			func_90(-150493654);
			break;
	
		case 0:
			func_90(0);
			func_91(473295046);
			func_91(-1738165526);
			break;
	
		case 38162571:
			func_91(-1414537028);
			func_91(1350391819);
			func_91(54073871);
			func_90(38162571);
			break;
	
		case 52706132:
			func_91(198200492);
			func_91(-1124061431);
			func_90(52706132);
			func_91(-259123672);
			break;
	
		case 54073871:
			func_91(-1414537028);
			func_91(38162571);
			func_91(1350391819);
			func_90(54073871);
			break;
	
		case 198200492:
			func_90(198200492);
			func_91(-1124061431);
			func_91(52706132);
			func_91(-259123672);
			break;
	
		case 210001842:
			func_91(-1717960576);
			func_90(210001842);
			break;
	
		case 280705402:
			func_91(1766284049);
			func_91(1926308480);
			func_90(280705402);
			break;
	
		case 282809459:
			func_90(282809459);
			func_91(1626481264);
			func_91(-524145696);
			break;
	
		case 405586984:
			func_90(405586984);
			func_91(1509509592);
			func_91(-959357075);
			func_91(-1311865656);
			break;
	
		case 420709909:
			func_90(420709909);
			func_91(-919512195);
			func_91(-1925798111);
			func_91(1703426636);
			break;
	
		case 439465264:
			if (func_94(1609506757))
				if (bParam1)
					func_90(439465264);
				else
					func_91(439465264);
			break;
	
		case 449774763:
			func_91(1376646519);
			func_91(931649776);
			func_91(-434590080);
			func_91(1743048395);
			func_90(449774763);
			break;
	
		case 473295046:
			func_90(473295046);
			func_91(0);
			func_91(-1738165526);
			break;
	
		case 630808005:
			func_90(630808005);
			func_91(-1223121209);
			break;
	
		case 885203519:
			if (bParam1)
				func_90(885203519);
			else
				func_91(885203519);
			break;
	
		case 931649776:
			func_91(1376646519);
			func_91(-434590080);
			func_91(1743048395);
			func_91(449774763);
			func_90(931649776);
			break;
	
		case 932909855:
			func_90(932909855);
			func_91(2051822093);
			break;
	
		case 1010885152:
			func_91(1497516462);
			func_91(2016141805);
			func_90(1010885152);
			func_91(-502324015);
			break;
	
		case 1306158345:
			func_91(1952610440);
			func_91(-223469678);
			func_91(-404698347);
			func_91(1517904467);
			func_90(1306158345);
			break;
	
		case 1350391819:
			func_91(-1414537028);
			func_91(38162571);
			func_91(54073871);
			func_90(1350391819);
			break;
	
		case 1376646519:
			func_91(931649776);
			func_91(-434590080);
			func_91(1743048395);
			func_91(449774763);
			func_90(1376646519);
			break;
	
		case 1453909576:
			func_90(1453909576);
			func_91(1643531967);
			break;
	
		case 1497516462:
			func_90(1497516462);
			func_91(2016141805);
			func_91(1010885152);
			func_91(-502324015);
			break;
	
		case 1509509592:
			func_90(1509509592);
			func_91(405586984);
			func_91(-959357075);
			func_91(-1311865656);
			break;
	
		case 1517904467:
			func_91(1306158345);
			func_91(1952610440);
			func_91(-223469678);
			func_91(-404698347);
			func_90(1517904467);
			break;
	
		case 1609506757:
			if (bParam1)
			{
				func_91(439465264);
				func_90(1609506757);
			}
			else
			{
				func_91(1609506757);
				func_91(439465264);
			}
			break;
	
		case 1626481264:
			func_90(1626481264);
			func_91(-524145696);
			func_91(282809459);
			break;
	
		case 1643531967:
			func_90(1643531967);
			func_91(1453909576);
			break;
	
		case 1703426636:
			func_90(1703426636);
			func_91(-919512195);
			func_91(-1925798111);
			func_91(420709909);
			break;
	
		case 1743048395:
			func_91(1376646519);
			func_91(931649776);
			func_91(-434590080);
			func_91(449774763);
			func_90(1743048395);
			break;
	
		case 1766284049:
			func_91(280705402);
			func_91(1926308480);
			func_90(1766284049);
			break;
	
		case 1822001510:
			func_91(-1612662716);
			func_90(1822001510);
			break;
	
		case 1846061697:
			func_91(-150493654);
			func_91(-1271608261);
			func_91(-1145519186);
			func_90(1846061697);
			break;
	
		case 1926308480:
			func_91(1766284049);
			func_91(280705402);
			func_90(1926308480);
			break;
	
		case 1952610440:
			func_91(1306158345);
			func_91(-223469678);
			func_91(-404698347);
			func_91(1517904467);
			func_90(1952610440);
			break;
	
		case 2016141805:
			func_91(1497516462);
			func_90(2016141805);
			func_91(1010885152);
			func_91(-502324015);
			break;
	
		case 2019386373:
			func_91(-664252410);
			func_91(2109952320);
			func_90(2019386373);
			break;
	
		case 2051822093:
			func_90(2051822093);
			func_91(932909855);
			break;
	
		case 2109952320:
			func_91(2019386373);
			func_91(-664252410);
			func_90(2109952320);
			break;
	
		default:
			if (bParam1)
				func_90(iParam0);
			else
				func_91(iParam0);
			break;
	}

	return;
}

void func_59(var uParam0, Volume volParam1, int iParam2) // Position - 0x1B73 Signature - 22 03 05 00 00 66 00
{
	if (uParam0->f_61 >= 20)
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return;

	if (!func_96(iParam2))
		return;

	uParam0->[uParam0->f_61 /*3*/] = volParam1;
	uParam0->[uParam0->f_61 /*3*/].f_1 = iParam2;
	uParam0->[uParam0->f_61 /*3*/].f_2 = 0;
	uParam0->f_61 = uParam0->f_61 + 1;
	return;
}

BOOL func_60(int iParam0) // Position - 0x1BCC Signature - 22 01 03 00 00 66 00 2F 7E
{
	return iParam0 >= 0 && iParam0 <= 150;
}

void func_61() // Position - 0x1BE2 Signature - 22 00 03 00 00 2F 67 02 66 02 6D
{
	int i;

	for (i = 0; i < 17; i = i + 1)
	{
		if (func_97(i))
			Global_1900426[i] = -1;
	}

	return;
}

BOOL func_62(int iParam0, int iParam1) // Position - 0x1C0F Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 02
{
	return iParam0 && iParam1 != false;
}

BOOL func_63(var uParam0, int iParam1) // Position - 0x1C1E Signature - 22 02 04 00 00 66 00 27 3E
{
	return uParam0->f_62 && iParam1 != false;
}

BOOL func_64() // Position - 0x1C2F Signature - 22 00 02 00 00 85 E7
{
	return func_62(Global_1940199, 8192);
}

BOOL func_65(var uParam0, int iParam1) // Position - 0x1C42 Signature - 22 02 04 00 00 66 00 27 02 66 01 69
{
	return uParam0->f_2 && iParam1 != false;
}

BOOL func_66(int iParam0) // Position - 0x1C53 Signature - 22 01 03 00 00 66 00 39 CC 1B 00 05 8B 04 00 2F 50 01 01 66 00 5D
{
	if (!func_60(iParam0))
		return false;

	return Global_1887363[iParam0 /*36*/].f_21 == 1 || Global_1887363[iParam0 /*36*/].f_21 == 2 && !func_98(iParam0);
}

BOOL func_67(int iParam0, int iParam1) // Position - 0x1C93 Signature - 22 02 04 00 00 66 00 2F
{
	if (iParam0 < 0 || iParam0 >= 150)
		return false;

	return Global_1887363[iParam0 /*36*/].f_22 && iParam1 != false;
}

int func_68() // Position - 0x1CC0 Signature - 22 00 02 00 00 5D C6
{
	return Global_1896646.f_41;
}

void func_69(int iParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x1CCE Signature - 22 06
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

	if (!func_99())
		return;

	str = func_100(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &flag);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		if (bParam3)
			return;
	
		str = "DISTRICT_GRIZZLIES";
	}

	if (!func_101(iParam4))
		if (func_60(iParam0))
			iParam4 = func_102(func_9(iParam0));
		else
			iParam4 = func_102(iParam1);

	if (func_101(iParam4))
		hash = func_103(iParam4);

	if (flag && bParam3)
	{
		str2 = func_105(func_104(iParam2));
	}
	else if (func_106(iParam1, 2) || func_107(iParam4, 2) && !Global_1893611.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
				str2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			else
				str2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
	
		Global_1893611.f_9 = 1;
	}
	else if (func_60(iParam0) && func_83(iParam0, 16777216) && !Global_1893611.f_9)
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
		num = func_109(func_108());
		num2 = func_110(func_108());
	
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
				temperatureAtCoords = func_111(temperatureAtCoords);
				str3 = "TIME_AND_TEMP_F";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str2 = MISC::VAR_STRING(674, str3, num, func_112(&unk, joaat("COLOR_PURE_WHITE")), str4, func_112(&unk2, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			str3 = "TIME_AND_TEMP_C_24";
		
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				temperatureAtCoords = func_111(temperatureAtCoords);
				str3 = "TIME_AND_TEMP_F_24";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str2 = MISC::VAR_STRING(162, str3, num, func_112(&unk, joaat("COLOR_PURE_WHITE")), func_112(&unk2, joaat("COLOR_PURE_WHITE")));
		}
	
		Global_1893611.f_9 = 0;
	}

	Global_1939102.f_145 = func_113(str, str2, 4000, 0, 0, 0, false, true);
	return;
}

void func_70(var uParam0, int iParam1) // Position - 0x1F33 Signature - 22 02 04 00 00 66 00 27 02 66 01 30
{
	uParam0->f_2 = uParam0->f_2 || iParam1;
	return;
}

void func_71(int iParam0, BOOL bParam1) // Position - 0x1F46 Signature - 22 02 04 00 00 5D 17 00 18 27 0C
{
	if (Global_1572887.f_12 && func_45() == 0)
		return;

	if (!func_114(iParam0))
		return;

	if (func_83(iParam0, 32))
		return;

	func_21(iParam0, 32);
	func_115(&Global_1940199, 16384);
	func_117(func_116(joaat("discovered"), joaat("AREAS")), 1);

	switch (func_9(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_117(func_116(joaat("discovered"), joaat("lowlands_areas")), 1);
			break;
	
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_117(func_116(joaat("discovered"), joaat("mountain_areas")), 1);
			break;
	
		case 3:
		case 10:
			func_117(func_116(joaat("discovered"), joaat("foothills_areas")), 1);
			break;
	
		case 4:
		case 9:
			func_117(func_116(joaat("discovered"), joaat("plains_areas")), 1);
			break;
	
		case 8:
			func_117(func_116(joaat("discovered"), joaat("guama_areas")), 1);
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			func_117(func_116(joaat("discovered"), joaat("new_austin_areas")), 1);
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

void func_72(BOOL bParam0) // Position - 0x25AF Signature - 22 01 03 00 00 66 00 8B 0D 00 85 EB E4 1C 09
{
	if (bParam0)
		Global_1893611 = Global_1893611 | true;
	else
		Global_1893611 = Global_1893611 - Global_1893611 & true;

	return;
}

BOOL func_73(int iParam0) // Position - 0x25D8 Signature - 22 01 03 00 00 66 00 3C 08
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

void func_74() // Position - 0x261D Signature - 22 00 02 00 00 50 00 00 22 02 04 00 00 66 00 3C
{
	return;
}

Hash func_75(int iParam0, BOOL bParam1) // Position - 0x2625 Signature - 22 02 04 00 00 66 00 3C 8C
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

void func_76(int iParam0, BOOL bParam1) // Position - 0x2DEA Signature - 22 02 04 00 00 5D 17 00 18 27 0E 08 15 1C
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/] = Global_8130[iParam0 /*11*/] - Global_8130[iParam0 /*11*/] && bParam1;
		return;
	}

	Global_1072759.f_19611[iParam0 /*11*/] = Global_1072759.f_19611[iParam0 /*11*/] - Global_1072759.f_19611[iParam0 /*11*/] && bParam1;
	return;
}

void func_77(BOOL bParam0) // Position - 0x2E3D Signature - 22 01 03 00 00 66 00 8B 0D 00 85 EB E4 1C 11
{
	if (bParam0)
		Global_1893611 = Global_1893611 | 2;
	else
		Global_1893611 = Global_1893611 - Global_1893611 & 2;

	return;
}

void func_78(int iParam0) // Position - 0x2E66 Signature - 22 01 03 00 00 50 01 00 22 01
{
	return;
}

void func_79(int iParam0) // Position - 0x2E6E Signature - 22 01 04 00 00 2F 67 03 66 03 1D
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1939959.f_5[i /*11*/].f_5 == iParam0)
			func_118(i);
	}

	return;
}

void func_80(int iParam0) // Position - 0x2E9F Signature - 22 01 04 00 00 2F 67 03 66 03 6D 28 8A 21
{
	int i;

	for (i = 0; i < 40; i = i + 1)
	{
		if (Global_1915656.f_3[i /*447*/].f_8 == iParam0)
			func_119(i);
	}

	return;
}

BOOL func_81(int iParam0, BOOL bParam1) // Position - 0x2ED2 Signature - 22 02 07
{
	int num;
	int num2;
	int num3;

	if (func_45() != -1)
		return true;

	if (!func_60(iParam0))
		return true;

	if (func_86(iParam0, &num, &num2, false, false))
	{
		if (Global_1896644.f_1 < num || Global_1896644.f_1 > num2)
			Global_1896644.f_1 = num;
	
		while (true)
		{
			if (!func_120(Global_1896644.f_1, 16))
				func_121(Global_1896644.f_1, false);
		
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

BOOL func_82(int iParam0) // Position - 0x2F88 Signature - 22 01 04 00 00 2F 67 03 66 03 6D 28 8A 67
{
	int i;

	for (i = 0; i < 40; i = i + 1)
	{
		if (func_122(i) || func_123(i))
		{
		}
		else
		{
			switch (i)
			{
				case 30:
					func_124();
					break;
			
				case 32:
					func_125();
					break;
			
				case 34:
					break;
			
				default:
					if (Global_1051832.f_92[i /*75*/].f_2 == iParam0)
						func_126(i, false);
					break;
			}
		}
	}

	return true;
}

BOOL func_83(int iParam0, BOOL bParam1) // Position - 0x3002 Signature - 22 02 04 00 00 5D 17 00 18 27 0E 08 15 0F
{
	if (Global_1572887.f_14 == -1)
		return Global_8130[iParam0 /*11*/] && bParam1 != false;

	return Global_1072759.f_19611[iParam0 /*11*/] && bParam1 != false;
}

BOOL func_84(int iParam0) // Position - 0x3033 Signature - 22 01 03 00 00 66 00 39 CC 1B 00 05 8B 04 00 2F 50 01 01 66 00 37
{
	if (!func_60(iParam0))
		return false;

	return func_83(iParam0, 33554432);
}

BOOL func_85(int iParam0) // Position - 0x3054 Signature - 22 01 03 00 00 66 00 39 CC 1B 00 05 8B 04 00 2F 50 01 01 66 00 3C
{
	if (!func_60(iParam0))
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

BOOL func_86(int iParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x30A7 Signature - 22 05 08
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

BOOL func_87(int iParam0) // Position - 0x3767 Signature - 22 01 03 00 00 66 00 08 20 6A 8B 07
{
	return iParam0 > -1 && iParam0 < 948;
}

BOOL func_88(int iParam0) // Position - 0x377E Signature - 22 01 03 00 00 66 00 3C 05
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

int func_89(int iParam0, BOOL bParam1) // Position - 0x37C1 Signature - 22 02 04 00 00 66 00 39 67 37 00 05 8B 04 00 2F 50 02 01 66 00 11 39 99 4C 00 05 8B 04 00 2F 50 02 01 66 00 6D
{
	if (!func_87(iParam0))
		return 0;

	if (!func_120(iParam0, 2))
		return 0;

	if (func_120(iParam0, 32) && !bParam1)
	{
		func_128(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_127(iParam0)));
	
		if (func_45() == -1)
		{
			if (func_120(iParam0, 2048))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_129(iParam0));
				func_130(iParam0, 2048);
			}
		
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_129(iParam0));
		}
	
		return 0;
	}

	if (!func_131(iParam0) && func_45() == -1)
		return 0;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_129(iParam0)))
	{
		func_130(iParam0, 128);
		return 1;
	}

	func_128(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_127(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_129(iParam0));

	if (func_120(iParam0, 2048))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_129(iParam0));
		func_130(iParam0, 2048);
	}

	return 1;
}

void func_90(int iParam0) // Position - 0x38AC Signature - 22 01 06 00 00 66 00 09 39 41 54 00 67 03 66 03 6D 1F 59 67 04 66 03 6D 1F 47 67 05 66 04 87 26 00 80 76 63 01 66 05 03 08 00 6A
{
	int num;
	int num2;
	int offset;

	num = func_132(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;
	MISC::SET_BIT(&Global_38.f_118[num2], offset);
	Global_1939596 = 0;
	return;
}

void func_91(int iParam0) // Position - 0x38DF Signature - 22 01 06 00 00 66 00 09 39 41 54 00 67 03 66 03 6D 1F 59 67 04 66 03 6D 1F 47 67 05 66 04 87 26 00 80 76 63 01 66 05 03 08 00 0F
{
	int num;
	int num2;
	int offset;

	num = func_132(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;
	MISC::CLEAR_BIT(&Global_38.f_118[num2], offset);
	Global_1939596 = 0;
	return;
}

void func_92() // Position - 0x3912 Signature - 22 00 02 00 00 37 12
{
	func_91(-939420910);
	func_91(-1187950766);
	func_91(356365161);
	func_91(753127042);
	func_91(-2038424081);
	func_91(1884271742);
	func_91(459290420);
	return;
}

void func_93() // Position - 0x3959 Signature - 22 00 02 00 00 37 EC
{
	func_91(704802028);
	func_91(588987611);
	func_91(2008888900);
	func_91(1649996811);
	func_91(227918160);
	func_91(168171957);
	func_91(1193080109);
	func_91(-491981251);
	func_91(-639037538);
	func_91(-618620429);
	return;
}

BOOL func_94(int iParam0) // Position - 0x39BB Signature - 22 01 06 00 00 66 00 09 39 41 54 00 67 03 66 03 6D 1F 59 67 04 66 03 6D 1F 47 67 05 66 04 39
{
	int num;
	int num2;
	int offset;

	num = func_132(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (func_133(num2))
	{
		if (Global_1072759.f_19585.f_24 && !func_134(iParam0))
			return false;
	
		return MISC::IS_BIT_SET(Global_1072759.f_19585[num2], offset) || MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
	}

	return MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
}

void func_95(Hash hParam0) // Position - 0x3A3A Signature - 22 01 03 00 00 66 00 39 1A
{
	if (func_135(hParam0) && func_136())
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(hParam0);

	return;
}

BOOL func_96(int iParam0) // Position - 0x3A5A Signature - 22 01 03 00 00 66 00 08 20 6A 8B 06 00 66 00 6D 0C
{
	return iParam0 > -1 && iParam0 < 12;
}

BOOL func_97(int iParam0) // Position - 0x3A70 Signature - 22 01 03 00 00 66 00 08 20 6A 8B 06 00 66 00 6D 10
{
	return iParam0 > -1 && iParam0 < 16;
}

BOOL func_98(int iParam0) // Position - 0x3A86 Signature - 22 01 03 00 00 66 00 6D 16
{
	if (iParam0 == 22 || iParam0 == 39 && !func_137())
		return true;

	if (iParam0 == 66)
		return true;

	return false;
}

BOOL func_99() // Position - 0x3ABB Signature - 22 00 02 00 00 70
{
	if (Global_13)
		return false;

	if (!func_138())
		return false;

	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939102.f_75.f_55))
		return false;

	if (func_139(-1 ^ 9, false, true))
		return false;

	return true;
}

const char* func_100(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, var uParam6) // Position - 0x3AFE Signature - 22 07 0A
{
	const char* str;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1893611.f_162)))
		str = func_140(Global_1893611.f_162);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str) && bParam4)
		str = func_142(func_141(Global_34));

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		if (!func_143(iParam0) || func_144(44))
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

BOOL func_101(int iParam0) // Position - 0x4562 Signature - 22 01 03 00 00 66 00 08 20 6A 8B 05
{
	return iParam0 > -1 && iParam0 < 6;
}

int func_102(int iParam0) // Position - 0x4577 Signature - 22 01 03 00 00 66 00 3C 11
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

Hash func_103(int iParam0) // Position - 0x4632 Signature - 22 01 08
{
	int i;
	var gamerHandle;
	Hash bountyData;

	if (!func_101(iParam0))
		return -1;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_198[iParam0 /*12*/];

	i = 0;
	gamerHandle = { func_145(PLAYER::PLAYER_ID()) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&gamerHandle, &bountyData);

	for (i = 0; i < 6; i = i + 1)
	{
		Global_1072759.f_21262[i /*12*/] = bountyData;
	}

	return Global_1072759.f_21262[iParam0 /*12*/];
}

int func_104(int iParam0) // Position - 0x46A0 Signature - 22 01 03 00 00 66 00 3C 21
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

char* func_105(int iParam0) // Position - 0x47FB Signature - 22 01 03 00 00 66 00 3C 03 00 00
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

BOOL func_106(int iParam0, BOOL bParam1) // Position - 0x4836 Signature - 22 02 04 00 00 66 00 39 B7
{
	if (!func_10(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_271[iParam0] && bParam1 != false;

	return Global_1072759.f_21335[iParam0] && bParam1 != false;
}

BOOL func_107(int iParam0, int iParam1) // Position - 0x4878 Signature - 22 02 04 00 00 66 00 39 62
{
	if (!func_101(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_198[iParam0 /*12*/].f_5 && iParam1 != false;

	return Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1 != false;
}

BOOL func_108() // Position - 0x48BD Signature - 22 00 02 00 00 85 E9
{
	return Global_1902569;
}

int func_109(BOOL bParam0) // Position - 0x48C9 Signature - 22 01 03 00 00 66 00 6D 0C
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 12) & 31;
}

int func_110(BOOL bParam0) // Position - 0x48DC Signature - 22 01 03 00 00 66 00 4D
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 6) & 63;
}

float func_111(float fParam0) // Position - 0x48EE Signature - 22 01 03 00 00 66 00 86
{
	return (fParam0 * 1.8f) + 32f;
}

const char* func_112(var uParam0, int iParam1) // Position - 0x4904 Signature - 22 02 04 00 00 66 01
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", uParam0);

	return func_146(MISC::VAR_STRING(10, "LITERAL_STRING", uParam0), iParam1);
}

int func_113(const char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x493A Signature - 22 08 1B
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

BOOL func_114(int iParam0) // Position - 0x497D Signature - 22 01 03 00 00 66 00 39 4B
{
	if (func_143(iParam0))
		if (!func_144(44))
			return false;

	return true;
}

void func_115(int iParam0, int iParam1) // Position - 0x499D Signature - 22 02 04 00 00 66 00 76 66 01
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

struct<2> func_116(int iParam0, int iParam1) // Position - 0x49AE Signature - 22 02 06
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_117(var uParam0, var uParam1, int iParam2) // Position - 0x49C4 Signature - 22 03 05 00 00 4B
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

void func_118(int iParam0) // Position - 0x49E1 Signature - 22 01 03 00 00 66 00 5D F7
{
	func_147(Global_1939959.f_5[iParam0 /*11*/].f_6, true);
	func_148(Global_1939959.f_5[iParam0 /*11*/].f_6, false);

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1939959.f_5[iParam0 /*11*/].f_8))
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1939959.f_5[iParam0 /*11*/].f_8);

	func_149(iParam0, 8192);
	func_149(iParam0, 32768);
	func_149(iParam0, 524288);
	func_149(iParam0, 1048576);
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

void func_119(int iParam0) // Position - 0x4AC1 Signature - 22 01 05 00 00 66 00 5D
{
	int i;
	int num;

	if (func_87(Global_1915656.f_3[iParam0 /*447*/].f_21) && func_150(Global_1915656.f_3[iParam0 /*447*/].f_21))
		func_151(Global_1915656.f_3[iParam0 /*447*/].f_21, false, true, false, false);

	Global_1915656.f_3[iParam0 /*447*/].f_10 = { 0f, 0f, 0f };
	Global_1915656.f_3[iParam0 /*447*/].f_21 = -1;
	Global_1915656.f_3[iParam0 /*447*/].f_22 = -1;
	Global_1915656.f_3[iParam0 /*447*/].f_16 = 0;
	Global_1915656.f_3[iParam0 /*447*/].f_1 = 0;

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1915656.f_3[iParam0 /*447*/].f_35))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1915656.f_3[iParam0 /*447*/].f_35, false);

	func_152(Global_1915656.f_3[iParam0 /*447*/].f_9, false);
	func_153(iParam0, 536870912);
	num = func_154(iParam0);

	if (num >= 15)
	{
		Global_1915656.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		for (i = 0; i < num; i = i + 1)
		{
			func_95(Global_1915656.f_3[iParam0 /*447*/].f_318[i /*6*/]);
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
	func_155(iParam0);
	Global_1915656.f_3[iParam0 /*447*/].f_9 = -1;
	Global_1915656.f_3[iParam0 /*447*/].f_8 = -1;
	return;
}

BOOL func_120(int iParam0, BOOL bParam1) // Position - 0x4C99 Signature - 22 02 04 00 00 39 3D 0D 00 08 72 04
{
	if (func_45() != -1)
		return false;

	if (!func_87(iParam0))
		return false;

	return Global_9899[iParam0 /*2*/] && bParam1 != false;
}

int func_121(int iParam0, BOOL bParam1) // Position - 0x4CC7 Signature - 22 02 04 00 00 66 00 39 67 37 00 05 8B 04 00 2F 50 02 01 66 00 11 39 99 4C 00 05 8B 04 00 2F 50 02 01 66 00 39
{
	if (!func_87(iParam0))
		return 0;

	if (!func_120(iParam0, 2))
		return 0;

	if (func_127(iParam0) == 0)
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_129(iParam0)))
		return 1;

	if (func_120(iParam0, true) && !bParam1)
	{
		func_156(iParam0, 128);
		return 1;
	}

	func_130(iParam0, 129);
	func_157(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_129(iParam0));
	func_128(iParam0, 0);
	return 1;
}

int func_122(int iParam0) // Position - 0x4D4A Signature - 22 01 03 00 00 66 00 3C 03 00 1B
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

int func_123(int iParam0) // Position - 0x4D71 Signature - 22 01 03 00 00 66 00 3C 02
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

void func_124() // Position - 0x4D92 Signature - 22 00 04
{
	int i;
	var unk;

	func_158(30);
	func_159(30);
	func_160(30);
	func_161(30);

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

void func_125() // Position - 0x4F59 Signature - 22 00 03 00 00 2F 67 02 66 02 42
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

	func_161(32);
	return;
}

void func_126(int iParam0, BOOL bParam1) // Position - 0x4FD4 Signature - 22 02 08 00 00 66
{
	BOOL flag;
	Entity propForScenarioPoint;
	int i;
	int num;

	flag = func_162(iParam0) && !bParam1;

	if (!flag && !func_163(iParam0, 65536))
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
	else if (func_164(iParam0, 67108864) && ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_21))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(Global_1051832.f_92[iParam0 /*75*/].f_21);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24))
	{
		NETWORK::_NETWORK_SPAWN_CONFIG_REMOVE_EXCLUSION_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
	
		if (func_163(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_25))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
	
		if (func_163(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_25);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_27))
		if (func_163(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_27);

	if (func_164(iParam0, 16384) && !flag)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_6))
		{
			propForScenarioPoint = TASK::GET_PROP_FOR_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
		
			if (ENTITY::DOES_ENTITY_EXIST(propForScenarioPoint))
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&propForScenarioPoint);
		
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6);
		}
	
		Global_1051832.f_92[iParam0 /*75*/].f_6 = 0;
		func_165(iParam0, 16384);
	}

	Global_1051832.f_92[iParam0 /*75*/] = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_3 = { 0f, 0f, 0f };
	Global_1051832.f_92[iParam0 /*75*/].f_48 = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_73 = 1;
	Global_1915656.f_3[iParam0 /*447*/].f_16 = 0;
	num = func_166(iParam0);

	if (num >= 15)
	{
		Global_1915656.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		for (i = 0; i < num; i = i + 1)
		{
			func_95(Global_1051832.f_92[iParam0 /*75*/].f_31[i]);
			Global_1051832.f_92[iParam0 /*75*/].f_31[i] = 0;
		}
	
		Global_1051832.f_92[iParam0 /*75*/].f_47 = 0;
	}

	func_167(iParam0);

	if (func_163(iParam0, 262144))
		Global_1051832.f_92[iParam0 /*75*/].f_49 = 262144;
	else
		func_158(iParam0);

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24) && func_168(iParam0, 2))
	{
		VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1051832.f_92[iParam0 /*75*/].f_24, joaat("REL_NO_RELATIONSHIP"));
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	}

	Global_1051832.f_92[iParam0 /*75*/].f_50 = Global_1051832.f_92[iParam0 /*75*/].f_50 & 8;
	Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 & 2113536;
	func_161(iParam0);
	Global_1051832.f_92[iParam0 /*75*/].f_18 = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_2 = -1;
	return;
}

Hash func_127(int iParam0) // Position - 0x5383 Signature - 22 01 03 00 00 66 00 39 67 37 00 05 8B 04 00 2F 50 01 01 66 00 5D A7 E5 1C 17
{
	if (!func_87(iParam0))
		return 0;

	return Global_1893799[iParam0 /*3*/];
}

void func_128(int iParam0, PersChar pchParam1) // Position - 0x53A1 Signature - 22 02 04 00 00 66 00 39 67 37 00 05 8B 03
{
	if (!func_87(iParam0))
		return;

	Global_1893799[iParam0 /*3*/].f_1 = pchParam1;
	return;
}

PersChar func_129(int iParam0) // Position - 0x53C2 Signature - 22 01 03 00 00 66 00 39 67 37 00 05 8B 04 00 2F 50 01 01 66 00 5D A7 E5 1C 63 03 27 01
{
	if (!func_87(iParam0))
		return 0;

	return Global_1893799[iParam0 /*3*/].f_1;
}

void func_130(int iParam0, BOOL bParam1) // Position - 0x53E2 Signature - 22 02 04 00 00 39 3D 0D 00 08 72 03 00 50 02 00 66 00 39 67 37 00 05 8B 03 00 50 02 00 66 00 87 AB 26 17 02 66 00
{
	if (func_45() != -1)
		return;

	if (!func_87(iParam0))
		return;

	Global_9899[iParam0 /*2*/] = Global_9899[iParam0 /*2*/] - Global_9899[iParam0 /*2*/] && bParam1;
	return;
}

BOOL func_131(int iParam0) // Position - 0x541B Signature - 22 01 03 00 00 66 00 39 67 37 00 05 8B 04 00 2F 50 01 01 66 00 11
{
	if (!func_87(iParam0))
		return false;

	if (!func_120(iParam0, 2))
		return false;

	return true;
}

int func_132(int iParam0, int iParam1) // Position - 0x5441 Signature - 22 02 04 00 00 66 00 3C 21
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

BOOL func_133(int iParam0) // Position - 0x6CE6 Signature - 22 01 04 00 00 66 00 39 88
{
	int num;

	num = func_169(iParam0);

	if (num < 336)
		return false;

	return true;
}

BOOL func_134(int iParam0) // Position - 0x6D03 Signature - 22 01 03 00 00 66 00 37
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
		return true;

	return false;
}

BOOL func_135(Hash hParam0) // Position - 0x6D1A Signature - 22 01 03 00 00 66 00 39 98
{
	if (func_170(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

BOOL func_136() // Position - 0x6D35 Signature - 22 00 02 00 00 09
{
	return 1;
}

BOOL func_137() // Position - 0x6D3E Signature - 22 00 02 00 00 2F
{
	return false;
}

BOOL func_138() // Position - 0x6D47 Signature - 22 00 06 00 00 39
{
	var unk;
	var unk3;

	if (func_45() != 0)
		return true;

	if (func_171())
		return false;

	if (HUD::_0x7EC0D68233E391AC(6) == 1)
		return true;

	unk = -1;
	unk.f_1 = -1;
	unk = { func_172() };

	if (func_173(unk))
		return false;

	unk3 = { func_174() };

	if (func_173(unk3))
		return false;

	return true;
}

BOOL func_139(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6DAF Signature - 22 03 05 00 00 5D
{
	if (Global_1572887.f_14 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1900460.f_67;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1900460.f_68;
	
		if (func_171())
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

	if (iParam0 == 0 && func_173(func_56(0)))
		return true;

	if (Global_1940199 && 81919 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1900595)
			return true;

	switch (func_57(func_56(0)))
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

const char* func_140(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x6F25 Signature - 22 08 0A
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_141(var uParam0, var uParam1, var uParam2) // Position - 0x6F39 Signature - 22 03 06
{
	int i;

	for (i = 0; i < 51; i = i + 1)
	{
		if (func_175(uParam0, i))
			return i;
	}

	return -1;
}

const char* func_142(int iParam0) // Position - 0x6F67 Signature - 22 01 03 00 00 66 00 3C 32
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

BOOL func_143(int iParam0) // Position - 0x724B Signature - 22 01 03 00 00 66 00 3C 03 00 16
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

BOOL func_144(int iParam0) // Position - 0x7275 Signature - 22 01 03 00 00 66 00 39 B9
{
	if (!func_176(iParam0))
		return false;

	return func_177(iParam0);
}

struct<2> func_145(Player plParam0) // Position - 0x7291 Signature - 22 01 05 00 00 66 00 4B
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

const char* func_146(const char* sParam0, int iParam1) // Position - 0x72A5 Signature - 22 02 04 00 00 6D 2A
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_147(int iParam0, BOOL bParam1) // Position - 0x72BF Signature - 22 02 05 00 00 66
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

void func_148(int iParam0, BOOL bParam1) // Position - 0x72F3 Signature - 22 02 04 00 00 66 00 3C 01
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

void func_149(int iParam0, int iParam1) // Position - 0x7328 Signature - 22 02 04 00 00 66 00 5D F7
{
	func_178(&(Global_1939959.f_5[iParam0 /*11*/].f_7), iParam1);
	return;
}

BOOL func_150(int iParam0) // Position - 0x7342 Signature - 22 01 03 00 00 66 00 39 67 37 00 05 8B 04 00 2F 50 01 01 66 00 5D A7 E5 1C 63 03 27 02 03 01
{
	if (!func_87(iParam0))
		return false;

	return Global_1893799[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_151(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x7367 Signature - 22 05 09
{
	PersChar persChar;
	Ped perscharPedIndex;

	if (!func_87(iParam0))
		return;

	if (!func_120(iParam0, 1))
		return;

	if (!func_120(iParam0, 2))
		return;

	if (!bParam4 && !func_150(iParam0) && func_179(iParam0))
		return;

	func_130(iParam0, 1);
	func_157(iParam0);

	if (func_180(func_127(iParam0)))
	{
		persChar = func_129(iParam0);
	
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
	
		func_130(iParam0, 16);
	}

	if (func_120(iParam0, 128) && !bParam3)
		func_121(iParam0, false);

	return;
}

void func_152(int iParam0, BOOL bParam1) // Position - 0x7453 Signature - 22 02 04 00 00 66 00 39 3B 79 00 05 8B 03 00 50 02 00 66 01
{
	if (!func_181(iParam0))
		return;

	if (bParam1)
	{
		if (!func_182(iParam0, 1024))
		{
			func_183(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_182(iParam0, 1024))
	{
		func_184(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}

	func_185(iParam0);
	return;
}

void func_153(int iParam0, BOOL bParam1) // Position - 0x74A9 Signature - 22 02 04 00 00 66 00 39 F1
{
	if (!func_186(iParam0))
		return;

	if (func_45() == -1)
		Global_1915656.f_3[iParam0 /*447*/].f_6 = Global_1915656.f_3[iParam0 /*447*/].f_6 - Global_1915656.f_3[iParam0 /*447*/].f_6 && bParam1;
	else
		Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 - Global_1051832.f_92[iParam0 /*75*/].f_1 && bParam1;

	return;
}

int func_154(int iParam0) // Position - 0x751C Signature - 22 01 03 00 00 66 00 5D 08 3B 1D 80
{
	return Global_1915656.f_3[iParam0 /*447*/].f_409;
}

void func_155(int iParam0) // Position - 0x7532 Signature - 22 01 03 00 00 2F 66 00 5D 08
{
	Global_1915656.f_3[iParam0 /*447*/].f_6 = 0;
	return;
}

void func_156(int iParam0, BOOL bParam1) // Position - 0x7548 Signature - 22 02 04 00 00 39 3D 0D 00 08 72 03 00 50 02 00 66 00 39 67 37 00 05 8B 03 00 50 02 00 66 00 87 AB 26 17 02 66 01
{
	if (func_45() != -1)
		return;

	if (!func_87(iParam0))
		return;

	Global_9899[iParam0 /*2*/] = Global_9899[iParam0 /*2*/] || bParam1;
	return;
}

void func_157(int iParam0) // Position - 0x7579 Signature - 22 01 04 00 00 66 00 39 67
{
	Ped ped;

	if (!func_87(iParam0))
		return;

	ped = func_187(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(ped, false))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);

	Global_1893799[iParam0 /*3*/].f_2 = 0;
	return;
}

void func_158(int iParam0) // Position - 0x75BD Signature - 22 01 03 00 00 2F 66 00 5D B8 0C 10 80 5C 63 4B 6C 31
{
	Global_1051832.f_92[iParam0 /*75*/].f_49 = 0;
	return;
}

void func_159(int iParam0) // Position - 0x75D2 Signature - 22 01 03 00 00 2F 66 00 5D B8 0C 10 80 5C 63 4B 6C 32
{
	Global_1051832.f_92[iParam0 /*75*/].f_50 = 0;
	return;
}

void func_160(int iParam0) // Position - 0x75E7 Signature - 22 01 03 00 00 2F 66 00 5D B8 0C 10 80 5C 63 4B 6C 01
{
	Global_1051832.f_92[iParam0 /*75*/].f_1 = 0;
	return;
}

void func_161(int iParam0) // Position - 0x75FC Signature - 22 01 06 00 00 5D
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

BOOL func_162(int iParam0) // Position - 0x767B Signature - 22 01 03 00 00 66 00 6D 1C
{
	if (iParam0 == 28 || iParam0 == 29 || iParam0 == 38 || iParam0 == 27 || iParam0 == 15 || iParam0 == 39)
		return true;

	if (func_163(iParam0, 65536))
		return true;

	return false;
}

BOOL func_163(int iParam0, BOOL bParam1) // Position - 0x76D8 Signature - 22 02 04 00 00 66 00 5D B8 0C 10 80 5C 63 4B 27 31
{
	return Global_1051832.f_92[iParam0 /*75*/].f_49 && bParam1 != false;
}

BOOL func_164(int iParam0, BOOL bParam1) // Position - 0x76F1 Signature - 22 02 04 00 00 66 00 5D B8 0C 10 80 5C 63 4B 27 01
{
	return Global_1051832.f_92[iParam0 /*75*/].f_1 && bParam1 != false;
}

void func_165(int iParam0, BOOL bParam1) // Position - 0x770A Signature - 22 02 04 00 00 66 00 66 01 39
{
	func_164(iParam0, bParam1);
	Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 - Global_1051832.f_92[iParam0 /*75*/].f_1 && bParam1;
	return;
}

int func_166(int iParam0) // Position - 0x7745 Signature - 22 01 03 00 00 66 00 5D B8
{
	return Global_1051832.f_92[iParam0 /*75*/].f_47;
}

void func_167(int iParam0) // Position - 0x7759 Signature - 22 01 03 00 00 50 01 00 22 02
{
	return;
}

BOOL func_168(int iParam0, int iParam1) // Position - 0x7761 Signature - 22 02 04 00 00 66 00 08
{
	if (iParam0 == -1)
		return false;

	return func_188(Global_1051832.f_92[iParam0 /*75*/].f_50, iParam1);
}

int func_169(int iParam0) // Position - 0x7788 Signature - 22 01 03 00 00 66 00 39 44
{
	return func_189(iParam0) + 30;
}

BOOL func_170(Hash hParam0) // Position - 0x7798 Signature - 22 01 03 00 00 66 00 2F 1C 50 01 01 22 00
{
	return hParam0 != 0;
}

BOOL func_171() // Position - 0x77A4 Signature - 22 00 02 00 00 85 00
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_173(Global_1051268) && Global_1572887.f_8 & true != 0)
		return true;

	return false;
}

struct<2> func_172() // Position - 0x77FC Signature - 22 00 02 00 00 11
{
	return Global_1051268;
}

BOOL func_173(var uParam0, var uParam1) // Position - 0x780A Signature - 22 02 04 00 00 66 00 39 50
{
	if (!func_190(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_191(uParam0))
		return false;

	return true;
}

struct<2> func_174() // Position - 0x783E Signature - 22 00 02 00 00 5D 2C
{
	if (Global_1205804.f_129 <= 0)
		return func_56(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_56(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

BOOL func_175(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x7889 Signature - 22 04 0D
{
	var unk;
	float num;
	float num2;

	func_192(iParam3, &unk, &num, &num2);

	if (func_193(uParam0, unk, num, num.f_1, num2))
		return true;

	return false;
}

BOOL func_176(int iParam0) // Position - 0x78B9 Signature - 22 01 03 00 00 66 00 2F 15 04
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_177(int iParam0) // Position - 0x78CC Signature - 22 01 06 00 00 66 00 67
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_38.f_3651[num2], offset);
}

void func_178(int iParam0, int iParam1) // Position - 0x78F6 Signature - 22 02 04 00 00 66 00 76 66 00
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_179(int iParam0) // Position - 0x790B Signature - 22 01 03 00 00 66 00 39 67 37 00 05 8B 04 00 2F 50 01 01 66 00 5D A7 E5 1C 63 03 27 02 03 05
{
	if (!func_87(iParam0))
		return false;

	return SCRIPTS::DOES_THREAD_EXIST(Global_1893799[iParam0 /*3*/].f_2);
}

BOOL func_180(Hash hParam0) // Position - 0x792F Signature - 22 01 03 00 00 66 00 2F 1C 50 01 01 22 01
{
	return hParam0 != 0;
}

BOOL func_181(int iParam0) // Position - 0x793B Signature - 22 01 03 00 00 66 00 08 20 6A 8B 06 00 66 00 6D B4 35 69 50
{
	return iParam0 > -1 && iParam0 < 180;
}

BOOL func_182(int iParam0, BOOL bParam1) // Position - 0x7951 Signature - 22 02 04 00 00 66 00 39 3B 79 00 05 8B 04
{
	if (!func_181(iParam0))
		return false;

	return Global_1915656.f_17884[iParam0] && bParam1 != false;
}

void func_183(int iParam0, BOOL bParam1) // Position - 0x7977 Signature - 22 02 04 00 00 66 00 39 3B 79 00 05 8B 03 00 50 02 00 66 00 5D 08 3B 1D 18 DC 45 17 01 66 01
{
	if (!func_181(iParam0))
		return;

	Global_1915656.f_17884[iParam0] = Global_1915656.f_17884[iParam0] || bParam1;
	return;
}

void func_184(int iParam0, BOOL bParam1) // Position - 0x79A5 Signature - 22 02 04 00 00 66 00 39 3B 79 00 05 8B 03 00 50 02 00 66 00 5D 08 3B 1D 18 DC 45 17 01 66 00
{
	if (!func_181(iParam0))
		return;

	Global_1915656.f_17884[iParam0] = Global_1915656.f_17884[iParam0] - Global_1915656.f_17884[iParam0] && bParam1;
	return;
}

void func_185(int iParam0) // Position - 0x79DF Signature - 22 01 03 00 00 66 00 39 2D
{
	func_195(func_194(iParam0));
	return;
}

BOOL func_186(int iParam0) // Position - 0x79F1 Signature - 22 01 03 00 00 66 00 08 20 6A 8B 06 00 66 00 6D 28
{
	return iParam0 > -1 && iParam0 < 40;
}

Ped func_187(int iParam0) // Position - 0x7A07 Signature - 22 01 04 00 00 66 00 39 C2
{
	PersChar persChar;

	persChar = func_129(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

BOOL func_188(BOOL bParam0, BOOL bParam1) // Position - 0x7A35 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 01
{
	return bParam0 && bParam1 != false;
}

int func_189(int iParam0) // Position - 0x7A44 Signature - 22 01 03 00 00 66 00 14
{
	return iParam0 * 31;
}

BOOL func_190(int iParam0) // Position - 0x7A50 Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 21
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

int func_191(int iParam0) // Position - 0x7A8F Signature - 22 01 03 00 00 66 00 3C 07 00 02 00 00 00 27 00 03 00 00 00 2E
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

void func_192(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x7B25 Signature - 22 04 06
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

BOOL func_193(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8) // Position - 0x85C7 Signature - 22 09
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

int func_194(int iParam0) // Position - 0x862D Signature - 22 01 03 00 00 66 00 08 20 6A 8B 06 00 66 00 6D B4 35 69 05
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

void func_195(int iParam0) // Position - 0x8B4A Signature - 22 01 03 00 00 66 00 5D 08 3B 1D 8C
{
	Global_1915656.f_18247 = iParam0;
	return;
}

