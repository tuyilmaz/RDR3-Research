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
	var uLocal_21 = 12;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 5;
	var uLocal_41 = 0;
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
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
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
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = -1;
	var uLocal_110 = 0;
	var uLocal_111 = -1;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 48
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;

	if (func_1(&uLocal_19))
		func_2(&uLocal_19);

	func_3(&uLocal_19);
	return;
}

BOOL func_1(var uParam0) // Position - 0x23 Signature - 22 01 03 00 00 42
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
		return false;

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_4(uParam0, 0);

	if (!func_5(&(uParam0->f_19)))
		return false;

	func_6(uParam0);
	func_7(&(uParam0->f_44));

	if (!func_8(&(uParam0->f_48)))
		return false;

	func_9(uParam0);
	return true;
}

void func_2(int* piParam0) // Position - 0x78 Signature - 22 01 04 00 00 2F 67 03 66 03 05
{
	BOOL flag;

	flag = false;

	while (!flag)
	{
		if (func_10(piParam0))
			flag = true;
	
		func_11(piParam0);
		func_12(piParam0);
		func_13(&(piParam0->f_19), &(piParam0->f_44));
		func_14(&(piParam0->f_44));
		func_15(&(piParam0->f_48));
		BUILTIN::WAIT(0);
	}

	return;
}

void func_3(int* piParam0) // Position - 0xC5 Signature - 22 01 03 00 00 66 00 80 51
{
	func_16(&(piParam0->f_81));
	func_17(piParam0);
	func_18(&(piParam0->f_48));
	func_19(piParam0);

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	return;
}

void func_4(int* piParam0, Hash hParam1) // Position - 0xF8 Signature - 22 02 04 00 00 66 01 66 00 6C 01
{
	piParam0->f_1 = hParam1;
	return;
}

BOOL func_5(var uParam0) // Position - 0x106 Signature - 22 01 04 00 00 2F 67 03 66 03 62
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		func_20(&uParam0->f_2[i /*3*/]);
	}

	func_20(&(uParam0->f_18));
	return true;
}

void func_6(var uParam0) // Position - 0x135 Signature - 22 01 03 00 00 08 66 00 6C
{
	uParam0->f_90 = -1;
	uParam0->f_90.f_1 = 0;
	return;
}

void func_7(var uParam0) // Position - 0x149 Signature - 22 01 03 00 00 2F 66 00 32 73
{
	*uParam0 = 0;
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0f;
	return;
}

BOOL func_8(int* piParam0) // Position - 0x164 Signature - 22 01 03 00 00 66 00 2F 39 04 05
{
	func_21(piParam0, 0);
	TEXT_LABEL_ASSIGN_STRING(&(piParam0->f_1), "", 128);
	TEXT_LABEL_ASSIGN_STRING(&(piParam0->f_17), "", 128);
	return true;
}

int func_9(var uParam0) // Position - 0x184 Signature - 22 01 06 00 00 11 67 03 09
{
	int num;
	int num2;
	int i;

	num = 2;

	for (i = 1; i <= num - 1; i = i + 1)
	{
		num2 = func_22(i, 1);
	
		if (!func_23(uParam0, num2))
			return 0;
	}

	return 1;
}

BOOL func_10(int* piParam0) // Position - 0x1BE Signature - 22 01 03 00 00 03
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		return true;

	return false;
}

void func_11(int* piParam0) // Position - 0x1D2 Signature - 22 01 08
{
	var eventData;
	int num;

	if (func_24(piParam0, 1))
	{
		num = func_25(piParam0, piParam0->f_15.f_1);
	
		if (func_26(piParam0, num, &(eventData.f_3)))
		{
			eventData = piParam0->f_15;
			eventData.f_1 = piParam0->f_15.f_1;
			eventData.f_2 = piParam0->f_15.f_2;
			func_27(piParam0, &eventData);
		}
	
		func_28(piParam0, 1, false);
	}

	while (UIEVENTS::EVENTS_UI_IS_PENDING(-21855895))
	{
		if (!UIEVENTS::EVENTS_UI_PEEK_MESSAGE(-21855895, &eventData))
		{
		}
		else
		{
			func_27(piParam0, &eventData);
			UIEVENTS::EVENTS_UI_POP_MESSAGE(-21855895);
		}
	}

	return;
}

void func_12(int* piParam0) // Position - 0x260 Signature - 22 01 05 00 00 37
{
	Hash uiappCurrentActivityByHash;
	Hash hash;

	uiappCurrentActivityByHash = UIAPPS::_GET_UIAPP_CURRENT_ACTIVITY_BY_HASH(joaat("coupons"));
	hash = _STOPWATCH_IS_INITIALIZED(piParam0);
	uiappCurrentActivityByHash = joaat("main");

	if (uiappCurrentActivityByHash != hash)
	{
		if (hash != 0)
			func_30(piParam0, hash);
	
		func_4(piParam0, uiappCurrentActivityByHash);
		func_31(piParam0, uiappCurrentActivityByHash);
	}

	func_32(piParam0, uiappCurrentActivityByHash);
	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
void func_13(var uParam0, var uParam1) // Position - 0x2AF Signature - 22 02 07 00 00 66 00 76
{
	int num;
	int i;
	int num2;

	if (*uParam0)
		if (!func_33(uParam1))
			*uParam0 = 0;

	num = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		num2 = uParam0->f_2[i /*3*/];
	
		if (!func_34(&uParam0->f_2[i /*3*/]))
		{
		}
		else
		{
			if (!func_33(uParam1))
			{
				!func_35(uParam1, 35f, 1065353216);
				goto 0xC9;
			}
		
			switch (func_36(&uParam0->f_2[i /*3*/]))
			{
				case 0:
				case 2:
				case 4:
					break;
			
				case 3:
					break;
			
				default:
					num = num + 1;
					goto 0xC9;
			}
		
			if (func_37(uParam1) < 1f)
			{
				num = num + 1;
			}
			else
			{
				func_38(uParam1);
				func_39(uParam0, num2);
				*uParam0 = 1;
			}
		}
	}

	uParam0->f_1 = num > 0;
	return;
}

void func_14(var uParam0) // Position - 0x38C Signature - 22 01 03 00 00 66 00 39 6D
{
	if (!func_33(uParam0))
		return;

	if (uParam0->f_2 > 0f)
	{
		if (func_37(uParam0) > uParam0->f_2)
		{
			*uParam0 = 0;
			return;
		}
	}

	func_40(0);
	HUD::_UI_PROMPT_DISABLE_PROMPTS_THIS_FRAME();
	return;
}

void func_15(int* piParam0) // Position - 0x3C8 Signature - 22 01 03 00 00 66 00 76 09 39 9D
{
	if (!func_41(*piParam0, 1))
		return;

	if (!AUDIO::PREPARE_SOUNDSET(&(piParam0->f_1), false))
		return;

	AUDIO::PLAY_SOUND_FRONTEND(&(piParam0->f_17), &(piParam0->f_1), false, 0);
	func_42(piParam0, 1);
	return;
}

void func_16(var uParam0) // Position - 0x404 Signature - 22 01 03 00 00 66 00 76 2F 15
{
	if (*uParam0 == 0)
		return;

	func_43(uParam0, *uParam0, 0);
	return;
}

int func_17(int* piParam0) // Position - 0x420 Signature - 22 01 06 00 00 11 67 03 2F
{
	int num;
	int num2;
	int i;

	num = 2;

	for (i = 0; i < num; i = i + 1)
	{
		num2 = func_22(i, 1);
		func_44(piParam0, num2);
	}

	return 1;
}

void func_18(int* piParam0) // Position - 0x450 Signature - 22 01 03 00 00 66 00 80 01
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(piParam0->f_1)))
		AUDIO::_RELEASE_SOUNDSET(&(piParam0->f_1));

	func_42(piParam0, 0);
	TEXT_LABEL_ASSIGN_STRING(&(piParam0->f_1), "", 128);
	TEXT_LABEL_ASSIGN_STRING(&(piParam0->f_17), "", 128);
	return;
}

void func_19(int* piParam0) // Position - 0x483 Signature - 22 01 06 00 00 11 66
{
	int arrayCount;
	Hash itemContextByIndex;
	int i;

	arrayCount = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(piParam0->f_2[2]);

	for (i = 0; i < arrayCount; i = i + 1)
	{
		itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(piParam0->f_2[2], i);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(itemContextByIndex);
	}

	DATABINDING::_0x3BF0767CF33FCC88(piParam0->f_2[2]);

	if (func_45(piParam0))
	{
		if (INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(func_46(piParam0)))
		{
		}
	}

	piParam0->f_90 = -1;
	piParam0->f_90.f_1 = 0;
	return;
}

void func_20(var uParam0) // Position - 0x4F3 Signature - 22 01 03 00 00 08 66 00 32 2F 66 00 6C 01 50
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	return;
}

void func_21(int* piParam0, int iParam1) // Position - 0x504 Signature - 22 02 04 00 00 66 00 66 01 03 08 00 8C
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

int func_22(int iParam0, int iParam1) // Position - 0x514 Signature - 22 02 04 00 00 66 00 3C 02
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return joaat("main");
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

BOOL func_23(var uParam0, int iParam1) // Position - 0x54B Signature - 22 02 04 00 00 66 01 3C 01 00 D7 33 EB 27 03 00 68 0C
{
	switch (iParam1)
	{
		case joaat("main"):
			return func_47(uParam0);
	}

	return false;
}

BOOL func_24(int* piParam0, int iParam1) // Position - 0x56E Signature - 22 02 04 00 00 66 00 76 66 01 39
{
	return func_41(*piParam0, iParam1);
}

int func_25(int* piParam0, int iParam1) // Position - 0x57F Signature - 22 02 07 00 00 66 00 39
{
	int unk;
	int value;
	int num;

	unk = func_48(piParam0);
	value = func_49(piParam0);
	num = 0;

	if (value < 0)
	{
		num = MISC::ABSI(value) + iParam1;
	
		if (iParam1 >= value + unk)
			num = num - unk;
	}
	else
	{
		num = iParam1 - value;
	}

	return num;
}

BOOL func_26(int* piParam0, int iParam1, var uParam2) // Position - 0x5C8 Signature - 22 03 06 00 00 09
{
	int arrayCount;

	arrayCount = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(piParam0->f_2[1]);

	if (iParam1 < 0)
		return false;

	if (iParam1 >= arrayCount)
		return false;

	*uParam2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(piParam0->f_2[1], iParam1);

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam2))
		return true;

	return false;
}

void func_27(int* piParam0, Any* panParam1) // Position - 0x611 Signature - 22 02 04 00 00 66 01 76 3C
{
	switch (*panParam1)
	{
		case -1740156697:
			func_50(piParam0, panParam1);
			func_51(piParam0, panParam1);
			break;
	
		case -1203660660:
			func_52(piParam0, panParam1);
			break;
	
		case -120002582:
			func_28(piParam0, 2, true);
			func_53(piParam0, panParam1->f_2);
			func_54(piParam0);
			func_56(piParam0, func_55(piParam0));
			break;
	
		case -114265581:
			func_53(piParam0, panParam1->f_2);
			func_54(piParam0);
			func_56(piParam0, func_55(piParam0));
			break;
	
		case 368072021:
			func_57(piParam0, panParam1->f_1, panParam1->f_2);
			func_58(&(piParam0->f_95));
			func_59(piParam0, func_49(piParam0), func_48(piParam0));
			func_60(&(piParam0->f_95), piParam0->f_2[1], "largeTextureTxd");
			break;
	}

	return;
}

void func_28(int* piParam0, int iParam1, BOOL bParam2) // Position - 0x6E3 Signature - 22 03 05 00 00 66 02 8B
{
	if (bParam2)
		func_21(piParam0, iParam1);
	else
		func_42(piParam0, iParam1);

	return;
}

var _STOPWATCH_IS_INITIALIZED(int* piParam0) // Position - 0x703 Signature - 22 01 03 00 00 66 00 27 01 50 01 01 22 02
{
	return piParam0->f_1;
}

void func_30(int* piParam0, Hash hParam1) // Position - 0x70F Signature - 22 02 04 00 00 66 01 3C 01 00 D7 33 EB 27 03 00 68 09 00 66 00 39 8B
{
	switch (hParam1)
	{
		case joaat("main"):
			func_61(piParam0);
			break;
	}

	return;
}

void func_31(int* piParam0, Hash hParam1) // Position - 0x72E Signature - 22 02 04 00 00 66 01 3C 01 00 D7 33 EB 27 03 00 68 0A
{
	switch (hParam1)
	{
		case joaat("main"):
			func_62(piParam0);
			break;
	}

	return;
}

void func_32(int* piParam0, Hash hParam1) // Position - 0x74E Signature - 22 02 04 00 00 66 01 3C 01 00 D7 33 EB 27 03 00 68 09 00 66 00 39 D0
{
	switch (hParam1)
	{
		case joaat("main"):
			func_63(piParam0);
			break;
	}

	return;
}

BOOL func_33(var uParam0) // Position - 0x76D Signature - 22 01 03 00 00 66 00 76 50
{
	return *uParam0;
}

BOOL func_34(var uParam0) // Position - 0x778 Signature - 22 01 03 00 00 66 00 76 08
{
	if (*uParam0 == -1)
		return false;

	if (uParam0->f_1 == 0)
		return false;

	return true;
}

BOOL func_35(var uParam0, float fParam1, int iParam2) // Position - 0x798 Signature - 22 03 05 00 00 66 00 39 6D
{
	if (func_33(uParam0))
		return false;

	*uParam0 = 1;
	uParam0->f_1 = func_64();
	uParam0->f_2 = fParam1;
	uParam0->f_3 = iParam2;
	return true;
}

int func_36(var uParam0) // Position - 0x7C6 Signature - 22 01 03 00 00 66 00 76 39
{
	return func_65(*uParam0);
}

float func_37(var uParam0) // Position - 0x7D5 Signature - 22 01 03 00 00 66 00 76 05
{
	if (!*uParam0)
		return 0f;

	return MISC::ABSF(func_64() - uParam0->f_1);
}

void func_38(var uParam0) // Position - 0x7F5 Signature - 22 01 03 00 00 66 00 39 D5
{
	if (func_37(uParam0) < uParam0->f_3)
		uParam0->f_2 = MISC::ABSF(uParam0->f_3 - func_37(uParam0));
	else
		*uParam0 = 0;

	return;
}

int func_39(var uParam0, int iParam1) // Position - 0x825 Signature - 22 02 05 00 00 66 01
{
	int i;

	if (iParam1 == -1)
		return 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (uParam0->f_2[i /*3*/] != iParam1)
		{
		}
		else
		{
			MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_18), &uParam0->f_2[i /*3*/], 3);
			func_20(&uParam0->f_2[i /*3*/]);
			return 1;
		}
	}

	return 0;
}

void func_40(int iParam0) // Position - 0x87B Signature - 22 01 03 00 00 5D 75
{
	if (Global_1940085.f_105.f_2 >= iParam0)
		return;

	Global_1940085.f_105.f_2 = iParam0;
	return;
}

BOOL func_41(int iParam0, int iParam1) // Position - 0x89D Signature - 22 02 04 00 00 66 00 66 01 03 09 00 2C
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_42(int* piParam0, int iParam1) // Position - 0x8AD Signature - 22 02 04 00 00 66 00 66 01 03 08 00 7B
{
	MISC::CLEAR_BIT(piParam0, iParam1);
	return;
}

void func_43(var uParam0, var uParam1, int iParam2) // Position - 0x8BD Signature - 22 03 06 00 00 66 00 76
{
	int num;

	if (*uParam0 != uParam1)
		return;

	num = Global_1295666.f_16 - uParam0->f_1;
	TELEMETRY::_TELEMETRY_MENU_NAVIGATION(*uParam0, num, uParam0->f_2, iParam2);
	func_66(uParam0);
	return;
}

void func_44(int* piParam0, int iParam1) // Position - 0x8F2 Signature - 22 02 04 00 00 66 01 3C 01 00 D7 33 EB 27 03 00 68 09 00 66 00 39 5D
{
	switch (iParam1)
	{
		case joaat("main"):
			func_67(piParam0);
			break;
	}

	return;
}

BOOL func_45(int* piParam0) // Position - 0x911 Signature - 22 01 03 00 00 66 00 27 5A 08
{
	return piParam0->f_90 != -1;
}

int func_46(int* piParam0) // Position - 0x91F Signature - 22 01 03 00 00 66 00 27 5A 50
{
	return piParam0->f_90;
}

BOOL func_47(var uParam0) // Position - 0x92B Signature - 22 01 03 00 00 66 00 39 6B
{
	if (!func_68(uParam0))
		return 0;

	return 1;
}

int func_48(int* piParam0) // Position - 0x942 Signature - 22 01 03 00 00 66 00 80 5C 27 02
{
	return piParam0->f_92.f_2;
}

int func_49(int* piParam0) // Position - 0x950 Signature - 22 01 03 00 00 66 00 80 5C 27 01
{
	return piParam0->f_92.f_1;
}

void func_50(int* piParam0, Any* panParam1) // Position - 0x95E Signature - 22 02 04 00 00 66 00 80 0F
{
	if (piParam0->f_15.f_1 != panParam1->f_1)
		func_69(&(piParam0->f_84));

	switch (panParam1->f_2)
	{
		case -1948187754:
		case -1585562139:
		case -797654126:
		case 678711754:
			if (!func_72(piParam0, &(panParam1->f_3)))
				func_71(piParam0);
			break;
	
		case -571766943:
		case 705463926:
			if (!func_70(piParam0, &(panParam1->f_3)))
				func_71(piParam0);
			break;
	
		default:
			func_71(piParam0);
			break;
	}

	return;
}

void func_51(int* piParam0, Any* panParam1) // Position - 0x9E1 Signature - 22 02 04 00 00 66 01 76 37
{
	if (*panParam1 != -1740156697)
		return;

	MISC::COPY_SCRIPT_STRUCT(&(piParam0->f_15), panParam1, 4);
	return;
}

void func_52(int* piParam0, Any* panParam1) // Position - 0xA02 Signature - 22 02 04 00 00 66 01 27
{
	switch (panParam1->f_2)
	{
		case -1948187754:
			!func_81(piParam0, &(panParam1->f_3));
			break;
	
		case -797654126:
		case -571766943:
			func_73();
			func_74();
			func_75();
			func_76();
			func_77(-1062814807);
		
			if (func_78())
			{
				func_79(true);
				func_80(true, 1);
			}
			else
			{
				func_80(false, false);
			}
			break;
	
		case 678711754:
			func_82();
			break;
	}

	return;
}

void func_53(int* piParam0, var uParam1) // Position - 0xA7C Signature - 22 02 04 00 00 66 01 66 00 6C 5C
{
	piParam0->f_92 = uParam1;
	return;
}

BOOL func_54(int* piParam0) // Position - 0xA8A Signature - 22 01 27 00 00 66 00 39
{
	int collectionId;
	var itemData;
	Hash i;
	Hash hash;
	var unk14;
	Hash hash2;
	Hash hash3;
	Hash j;

	func_19(piParam0);
	piParam0->f_90 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_2(&(piParam0->f_90.f_1));

	if (!func_45(piParam0))
		return false;

	collectionId = func_46(piParam0);
	itemData.f_9 = -1591664384;
	hash3 = func_83(piParam0);

	for (j = 0; j < hash3; j = j + 1)
	{
		if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(collectionId, j, &itemData))
		{
		}
		else if (!func_84(&itemData))
		{
		}
		else if (!func_85(itemData.f_9))
		{
		}
		else if (!func_86(itemData.f_4))
		{
		}
		else
		{
			hash = itemData.f_11;
		
			for (i = 0; i < hash; i = i + 1)
			{
				TEXT_LABEL_ASSIGN_INT(&unk14, j, 128);
				TEXT_LABEL_APPEND_STRING(&unk14, "_", 128);
				TEXT_LABEL_APPEND_INT(&unk14, i, 128);
				hash2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(piParam0->f_2[2], &unk14);
				DATABINDING::_DATABINDING_ADD_DATA_INT(hash2, "offerIndex", j);
				DATABINDING::_DATABINDING_ADD_DATA_INT(hash2, "offerSubIndex", i);
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(piParam0->f_2[2], -1, 0, hash2);
			}
		}
	}

	return true;
}

int func_55(int* piParam0) // Position - 0xB83 Signature - 22 01 03 00 00 66 00 39 11 09 00 05 8B 04 00 2F 50 01 01 11
{
	if (!func_45(piParam0))
		return 0;

	return DATABINDING::_DATABINDING_GET_ARRAY_COUNT(piParam0->f_2[2]);
}

void func_56(int* piParam0, int iParam1) // Position - 0xBA4 Signature - 22 02 04 00 00 66 00 39 26
{
	if (!func_87(piParam0))
		return;

	DATABINDING::_VIRTUAL_COLLECTION_SET_SIZE(func_88(piParam0), iParam1);
	return;
}

void func_57(int* piParam0, var uParam1, var uParam2) // Position - 0xBC5 Signature - 22 03 05 00 00 66 01 66
{
	piParam0->f_92.f_1 = uParam1;
	piParam0->f_92.f_2 = uParam2;
	return;
}

void func_58(var uParam0) // Position - 0xBDD Signature - 22 01 03 00 00 66 00 76 03
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
		return;

	func_89(uParam0);
	return;
}

int func_59(int* piParam0, int iParam1, int iParam2) // Position - 0xC09 Signature - 22 03 A0
{
	int num;
	var dst;
	var src;
	Hash hash;
	var unk128;
	var unk136;
	int num2;
	int i;

	func_90(piParam0);

	if (iParam2 <= 0)
		return 0;

	num = func_55(piParam0);

	if (num == 0)
		return 1;

	dst = 1;
	dst.f_1 = 1;
	dst.f_2 = joaat("COLOR_WHITE");
	dst.f_4 = -1;
	dst.f_5 = -1;
	dst.f_6 = -1;
	dst.f_10 = -1;
	dst.f_11 = -1;
	dst.f_12 = -1;
	src = 1;
	src.f_1 = 1;
	src.f_2 = joaat("COLOR_WHITE");
	src.f_4 = -1;
	src.f_5 = -1;
	src.f_6 = -1;
	src.f_10 = -1;
	src.f_11 = -1;
	src.f_12 = -1;
	hash.f_19 = 16;
	unk136.f_9 = -1591664384;
	num2 = 0;
	i = 0;

	for (i = 0; i < iParam2; i = i + 1)
	{
		num2 = func_91(iParam1, num, i);
	
		if (!func_92(piParam0, num2, &unk136))
		{
		}
		else
		{
			MISC::COPY_SCRIPT_STRUCT(&dst, &src, 47);
		
			if (!func_93(&unk136, &dst))
			{
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&unk128, "offer_item_", 64);
				TEXT_LABEL_APPEND_INT(&unk128, num2, 64);
			
				if (!func_94(&hash, &piParam0->f_2[1], unk128, &dst))
					return 0;
			
				if (!func_95(piParam0, hash, num2))
					return 0;
			}
		}
	}

	return 1;
}

void func_60(var uParam0, Hash hParam1, char* sParam2) // Position - 0xD4F Signature - 22 03 05 00 00 66 01 03
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam1))
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		return;

	uParam0->f_3 = 1;
	uParam0->f_2 = 0;
	uParam0->f_1 = sParam2;
	*uParam0 = hParam1;
	func_96(uParam0);
	return;
}

void func_61(int* piParam0) // Position - 0xD8B Signature - 22 01 03 00 00 66 00 80 54
{
	func_69(&(piParam0->f_84));
	func_97(-712383481);
	return;
}

int func_62(int* piParam0) // Position - 0xDA5 Signature - 22 01 03 00 00 66 00 2F 09
{
	func_28(piParam0, 0, true);
	func_71(piParam0);
	func_98(&(piParam0->f_86), 4000);
	func_99(-712383481);
	return 1;
}

void func_63(int* piParam0) // Position - 0xDD0 Signature - 22 01 04 00 00 66 00 80
{
	int num;

	if (func_100(&(piParam0->f_86)))
	{
		if (_STOPWATCH_IS_INITIALIZED_0(&(piParam0->f_19)))
		{
		}
		else
		{
			func_28(piParam0, 0, true);
		}
	}

	func_102(piParam0);

	if (func_103(&(piParam0->f_84)))
		func_28(piParam0, 0, true);

	if (func_24(piParam0, 0))
	{
		if (func_45(piParam0) && func_24(piParam0, 2))
		{
			num = func_55(piParam0);
			!func_54(piParam0);
		
			if (num != func_55(piParam0))
			{
				func_104(piParam0);
			}
			else if (_STOPWATCH_IS_INITIALIZED_0(&(piParam0->f_19)))
			{
			}
			else
			{
				func_105(piParam0);
				func_28(piParam0, 1, true);
			}
		}
	
		func_28(piParam0, 0, false);
	}

	if (func_48(piParam0) == 0)
		func_106(piParam0);

	return;
}

float func_64() // Position - 0xE8B Signature - 22 00 03 00 00 03 01 00 33 8B 15
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

int func_65(int iParam0) // Position - 0xEBD Signature - 22 01 05 00 00 66 00 39
{
	int num;
	int status;

	num = func_107(iParam0);

	if (num == 0 || num == 1 || num == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &status))
		{
			if (status == 4 || status == 2 || num == 0 && status != 0)
			{
				func_108(iParam0, status, 0, 0);
				num = status;
			}
		}
		else if (num == 1 || num == 5)
		{
			func_108(iParam0, 4, 0, 0);
		}
	}

	return num;
}

void func_66(var uParam0) // Position - 0xF47 Signature - 22 01 03 00 00 2F 66 00 32 2F 66 00 6C 01 2F 66 00 6C 02 50
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	return;
}

void func_67(int* piParam0) // Position - 0xF5D Signature - 22 01 03 00 00 66 00 39 8B
{
	func_61(piParam0);
	return;
}

BOOL func_68(var uParam0) // Position - 0xF6B Signature - 22 01 03 00 00 2F 04
{
	uParam0->f_2[0] = DATABINDING::_0xD7DB94AB78E8EBE4("", -1505966001);
	uParam0->f_2[1] = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_BY_HASH(uParam0->f_2[0], -849224310);
	uParam0->f_2[2] = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_BY_HASH(uParam0->f_2[0], -261156584);
	uParam0->f_2[3] = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(uParam0->f_2[0], 616081382, "");
	uParam0->f_2[4] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_2[0], -781821188, false);
	uParam0->f_2[5] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2[0], -3675574, 0);
	uParam0->f_2[6] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2[0], -536627617, 0);
	uParam0->f_2[7] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_2[0], joaat("Enabled"), true);
	uParam0->f_2[8] = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(uParam0->f_2[0], -242834141, "");
	uParam0->f_2[9] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2[0], 1959966745, 0);
	uParam0->f_2[10] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2[0], -1952794871, 0);
	uParam0->f_2[11] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2[0], -129582355, 0);
	return true;
}

int func_69(var uParam0) // Position - 0x1092 Signature - 22 01 03 00 00 66 00 76 2F 39
{
	if (!func_109(*uParam0, 0))
		return 0;

	if (!func_110(*uParam0))
		return 1;

	func_111(*uParam0);
	*uParam0 = 0;
	uParam0->f_1 = 1;
	return 1;
}

BOOL func_70(int* piParam0, var uParam1) // Position - 0x10CA Signature - 22 02 18 00 00 66 01 76 03 05 00 34 05 8B 04 00 2F 50 02 01 66 00 66 01 39 43 1E 00 41 66 01 4B 04 39 D3 1E 00 05 8B 04 00 2F 50 02 01 4B 08 6A 80 09 37 00 21 21 A1 3D 41 41 42 4B 04 2D 4B 08 2F 2F 08 39 2A 1F 00 05 8B 00
{
	var unk;
	var unk5;
	char* str;
	BOOL flag;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
		return false;

	func_112(piParam0, uParam1);

	if (!func_113(uParam1, &unk))
		return false;

	unk5.f_9 = -1591664384;
	!func_114(unk, &unk5, false, false, -1);
	func_115(unk5.f_4, uParam1);
	func_116(&(piParam0->f_84), unk5.f_4);
	flag = false;

	if (func_117(&unk))
	{
		str = func_118(1);
	}
	else if (func_119(unk))
	{
		str = func_120(unk);
		flag = true;
	}
	else
	{
		str = func_120(unk);
	}

	func_121(piParam0, flag);
	func_122(piParam0, str);
	return true;
}

void func_71(int* piParam0) // Position - 0x117C Signature - 22 01 03 00 00 1D
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(piParam0->f_2[3], "");
	func_121(piParam0, false);
	return;
}

BOOL func_72(int* piParam0, var uParam1) // Position - 0x1198 Signature - 22 02 18 00 00 66 01 76 03 05 00 34 05 8B 04 00 2F 50 02 01 66 00 66 01 39 43 1E 00 41 66 01 4B 04 39 D3 1E 00 05 8B 04 00 2F 50 02 01 4B 08 6A 80 09 37 00 21 21 A1 3D 41 41 42 4B 04 2D 4B 08 2F 2F 08 39 2A 1F 00 05 8B 04
{
	var unk;
	var unk5;
	char* str;
	BOOL flag;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
		return false;

	func_112(piParam0, uParam1);

	if (!func_113(uParam1, &unk))
		return false;

	unk5.f_9 = -1591664384;

	if (!func_114(unk, &unk5, false, false, -1))
		return false;

	func_115(unk5.f_4, uParam1);
	func_116(&(piParam0->f_84), unk5.f_4);
	flag = false;

	if (func_123(unk5.f_4))
	{
		str = func_118(9);
	}
	else if (func_117(&unk))
	{
		str = func_118(0);
	}
	else if (func_119(unk))
	{
		str = func_120(unk);
		flag = true;
	}
	else
	{
		str = func_120(unk);
	}

	func_121(piParam0, flag);
	func_122(piParam0, str);
	return true;
}

int func_73() // Position - 0x1264 Signature - 22 00 02 00 00 37 D2
{
	if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("pause_menu")) && !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("pause_menu")))
		return 0;

	UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("pause_menu"));
	return 1;
}

void func_74() // Position - 0x1296 Signature - 22 00 02 00 00 2F
{
	func_124(false);
	return;
}

void func_75() // Position - 0x12A3 Signature - 22 00 02 00 00 37 BA DA 8B 6C 03
{
	if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("coupons")) && !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("coupons")))
		return;

	UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("coupons"));
	return;
}

void func_76() // Position - 0x12D3 Signature - 22 00 02 00 00 37 92
{
	if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("hub")) && !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("hub")))
		return;

	UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("hub"));
	return;
}

void func_77(int iParam0) // Position - 0x1303 Signature - 22 01 03 00 00 66 00 5D
{
	Global_1960823.f_2 = iParam0;
	return;
}

BOOL func_78() // Position - 0x1313 Signature - 22 00 02 00 00 37 63
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("camera_item")) > 0)
		return true;

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(872480335) > 0)
		return true;

	return false;
}

void func_79(BOOL bParam0) // Position - 0x133E Signature - 22 01 03 00 00 39 13
{
	if (func_78())
		Global_1958683 = 1;

	func_125(joaat("camera_item"));

	if (bParam0 && Global_1940199.f_38 == joaat("weapon_kit_camera") || Global_1940199.f_38 == 332793555)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1940199.f_38 = joaat("WEAPON_UNARMED");
	}

	return;
}

void func_80(BOOL bParam0, BOOL bParam1) // Position - 0x13A1 Signature - 22 02 04 00 00 39 56
{
	if (!func_126())
		func_127(true);

	func_128(1);

	if (bParam0 || bParam1)
	{
		Global_1051832.f_3649 = 0;
		func_128(8);
	
		if (bParam1)
			func_128(16);
	}

	func_129(&(Global_1051832.f_3651));
	return;
}

BOOL func_81(int* piParam0, var uParam1) // Position - 0x13EC Signature - 22 02 16 00 00 66 01
{
	var unk;
	var unk5;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
		return false;

	if (!func_113(uParam1, &unk))
		return false;

	unk5.f_9 = -1591664384;

	if (!func_114(unk, &unk5, true, false, -1))
		return false;

	if (!func_109(unk5.f_4, 0))
		return false;

	if (!func_130(unk5.f_4))
		return false;

	if (!func_131(unk5.f_4))
		return false;

	if (!func_132(piParam0, unk5.f_4))
		return false;

	return true;
}

void func_82() // Position - 0x1479 Signature - 22 00 02 00 00 37 BA DA 8B 6C 37
{
	!UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("coupons"), -1633545653);
	return;
}

int func_83(int* piParam0) // Position - 0x1493 Signature - 22 01 03 00 00 66 00 39 11 09 00 05 8B 04 00 2F 50 01 01 66
{
	if (!func_45(piParam0))
		return 0;

	return piParam0->f_90.f_1;
}

BOOL func_84(Any* panParam0) // Position - 0x14AF Signature - 22 01 03 00 00 66 00 76 2F 0B 6A 8B 07
{
	if (*panParam0 == 0 && panParam0->f_1 == 0 && panParam0->f_2 == 0 && panParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_85(int iParam0) // Position - 0x14E5 Signature - 22 01 03 00 00 66 00 37 D5
{
	if (iParam0 == 1045621973)
		return false;

	return true;
}

BOOL func_86(Hash hParam0) // Position - 0x14FC Signature - 22 01 03 00 00 66 00 2F 39 04 1E 00 05 8B 04 00 2F 50 01 01 66 00 39 06
{
	if (!func_109(hParam0, 0))
		return false;

	if (func_133(hParam0) == 785047730)
		return false;

	return true;
}

BOOL func_87(int* piParam0) // Position - 0x1526 Signature - 22 01 03 00 00 66 00 39 38
{
	return DATABINDING::_VIRTUAL_COLLECTION_EXISTS(func_88(piParam0));
}

Any func_88(int* piParam0) // Position - 0x1538 Signature - 22 01 03 00 00 66 00 27 5C
{
	return piParam0->f_92;
}

int func_89(var uParam0) // Position - 0x1544 Signature - 22 01 07 00 00 66 00 76 03 05 00 34 05 8B 04
{
	Hash itemContextByIndex;
	int arrayCount;
	int i;
	Hash txdHash;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return 0;

	arrayCount = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0);

	for (i = 0; i < arrayCount; i = i + 1)
	{
		itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, i);
	
		if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(itemContextByIndex))
		{
		}
		else
		{
			txdHash = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(itemContextByIndex, uParam0->f_1);
		
			if (txdHash == 0)
			{
			}
			else if (!TXD::DOES_STREAMED_TXD_EXIST(txdHash))
			{
			}
			else
			{
				TXD::SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(txdHash);
			}
		}
	}

	return 1;
}

void func_90(int* piParam0) // Position - 0x15B8 Signature - 22 01 06 00 00 09
{
	int arrayCount;
	Hash itemContextByIndex;
	int i;

	arrayCount = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(piParam0->f_2[1]);

	for (i = 0; i < arrayCount; i = i + 1)
	{
		itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(piParam0->f_2[1], i);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(itemContextByIndex);
	}

	DATABINDING::_0x3BF0767CF33FCC88(piParam0->f_2[1]);
	return;
}

int func_91(int iParam0, int iParam1, int iParam2) // Position - 0x1600 Signature - 22 03 06 00 00 66 00 2F
{
	int num;

	if (iParam0 < 0)
	{
		num = iParam0 + iParam2;
	
		if (num < 0)
			return iParam1 + num;
		else
			return num;
	}

	return iParam0 + iParam2;
}

BOOL func_92(int* piParam0, int iParam1, Any* panParam2) // Position - 0x1630 Signature - 22 03 08
{
	Hash itemContextByIndex;
	int itemIndex;
	int num;

	if (!func_45(piParam0))
		return false;

	if (!func_134(piParam0, iParam1))
		return false;

	itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(piParam0->f_2[2], iParam1);

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(itemContextByIndex))
		return false;

	itemIndex = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(itemContextByIndex, "offerIndex");
	num = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(itemContextByIndex, "offerSubIndex");

	if (itemIndex < 0)
		return false;

	if (itemIndex >= func_83(piParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(func_46(piParam0), itemIndex, panParam2))
		return false;

	if (num < 0)
		return false;

	if (num >= panParam2->f_11)
		return false;

	return true;
}

BOOL func_93(Any* panParam0, var uParam1) // Position - 0x16D0 Signature - 22 02 12 00 00 66
{
	var unk;

	if (!func_84(panParam0))
		return false;

	unk.f_9 = -1591664384;

	if (!func_114(*panParam0, &unk, true, false, -1))
		return false;

	if (!func_109(unk.f_4, 0))
		return false;

	if (func_135(unk.f_4))
		if (!func_136(panParam0, uParam1))
			return false;
	else if (func_130(unk.f_4))
		if (!func_137(panParam0, uParam1))
			return false;
	else
		return false;

	return true;
}

BOOL func_94(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) // Position - 0x175A Signature - 22 0B 0D
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
		return false;

	func_138(uParam0, *uParam1, uParam2, *uParam10);
	uParam0->f_19[0] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, 440050042, uParam10->f_16);
	uParam0->f_19[1] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, 1058850005, uParam10->f_17);
	uParam0->f_19[2] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, -3675574, uParam10->f_18);
	uParam0->f_19[3] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, -536627617, uParam10->f_19);
	uParam0->f_19[4] = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(*uParam0, -242834141, uParam10->f_20);
	uParam0->f_19[5] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, 1959966745, uParam10->f_21);
	uParam0->f_19[6] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, -1952794871, uParam10->f_22);
	uParam0->f_19[7] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, -129582355, uParam10->f_23);
	uParam0->f_19[8] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(*uParam0, joaat("Enabled"), uParam10->f_24);
	uParam0->f_19[9] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(*uParam0, 1024435631, uParam10->f_25);
	uParam0->f_19[10] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(*uParam0, 596676017, uParam10->f_26);
	uParam0->f_19[11] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*uParam0, -376630643, uParam10->f_43);
	uParam0->f_19[12] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*uParam0, -539230421, uParam10->f_43.f_1);
	uParam0->f_19[13] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*uParam0, -1019689499, uParam10->f_43.f_2);
	uParam0->f_19[14] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*uParam0, -1283381642, uParam10->f_43.f_3);
	uParam0->f_19[15] = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(*uParam0, joaat("dynamic_list_item_raw_text_entry"), &(uParam10->f_27));
	return true;
}

BOOL func_95(int* piParam0, Hash hParam1, int iParam2) // Position - 0x1903 Signature - 22 03 05 00 00 66 00 39 26
{
	if (!func_87(piParam0))
		return false;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam1))
		return false;

	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(piParam0->f_2[1], -1, joaat("coupon_entry"), hParam1);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(func_88(piParam0), iParam2, joaat("coupon_entry"), hParam1);
	return true;
}

void func_96(var uParam0) // Position - 0x194E Signature - 22 01 07 00 00 66 00 76 03 05 00 34 05 8B 03
{
	Hash itemContextByIndex;
	int arrayCount;
	int i;
	Hash txdHash;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return;

	arrayCount = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0);

	for (i = 0; i < arrayCount; i = i + 1)
	{
		itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, i);
	
		if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(itemContextByIndex))
		{
		}
		else
		{
			txdHash = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(itemContextByIndex, uParam0->f_1);
		
			if (txdHash == 0)
			{
			}
			else if (!TXD::DOES_STREAMED_TXD_EXIST(txdHash))
			{
			}
			else
			{
				TXD::REQUEST_STREAMED_TXD(txdHash, true);
			}
		}
	}

	return;
}

void func_97(int iParam0) // Position - 0x19C1 Signature - 22 01 04 00 00 39
{
	int num;

	if (func_139())
		return;

	if (Global_1960823.f_5 == -1)
		return;

	if (iParam0 == -1)
		return;

	if (Global_1960823.f_5 == -1)
		return;

	Global_1960823.f_5 != iParam0;
	num = MISC::ABSI(Global_1295666.f_16 - Global_1960823.f_3);
	TELEMETRY::_TELEMETRY_HUB_NAVIGATION(Global_1960823.f_4, Global_1960823.f_5, num, Global_1960823.f_2);
	Global_1960823.f_1 = 0;
	func_140(&Global_1960823);
	func_141(iParam0, false);
	return;
}

void func_98(var uParam0, int iParam1) // Position - 0x1A42 Signature - 22 02 04 00 00 66 01 66 00 6C 03
{
	uParam0->f_3 = iParam1;
	return;
}

void func_99(int iParam0) // Position - 0x1A50 Signature - 22 01 03 00 00 39 05
{
	if (func_139())
		return;

	if (iParam0 == -1)
		return;

	if (Global_1960823.f_5 != -1 && Global_1960823.f_5 != iParam0)
		func_97(Global_1960823.f_5);

	Global_1960823.f_3 = Global_1295666.f_16;
	Global_1960823.f_5 = iParam0;
	Global_1960823.f_4 = Global_1960823;
	return;
}

BOOL func_100(var uParam0) // Position - 0x1AAC Signature - 22 01 03 00 00 66 00 27 03
{
	if (uParam0->f_3 <= 0)
	{
		if (func_142(uParam0))
			func_129(uParam0);
	
		return false;
	}

	if (!func_142(uParam0))
	{
		func_143(uParam0, true);
		return true;
	}

	if (!(func_144(uParam0) >= uParam0->f_3))
		return false;

	func_145(uParam0);
	return true;
}

BOOL _STOPWATCH_IS_INITIALIZED_0(var uParam0) // Position - 0x1AFE Signature - 22 01 03 00 00 66 00 27 01 50 01 01 22 01
{
	return uParam0->f_1;
}

void func_102(int* piParam0) // Position - 0x1B0A Signature - 22 01 0B
{
	Any* p_any;
	var unk4;

	if (!func_146(&(piParam0->f_19), &(piParam0->f_44)))
		return;

	if (func_147(&(piParam0->f_19)) == -1948187754)
	{
		func_148(piParam0, &p_any);
	
		if (func_149(p_any, &unk4))
			TELEMETRY::_TELEMETRY_COUPON(&unk4, func_150(p_any.f_2), p_any.f_2, p_any.f_1, p_any.f_3, joaat("coupons"));
	
		!func_151(piParam0, 0);
	}

	func_28(piParam0, 0, true);
	return;
}

BOOL func_103(var uParam0) // Position - 0x1B7D Signature - 22 01 03 00 00 66 00 27 01 8B
{
	if (uParam0->f_1)
	{
		uParam0->f_1 = 0;
		return true;
	}

	return false;
}

void func_104(int* piParam0) // Position - 0x1B96 Signature - 22 01 03 00 00 66 00 39 26
{
	if (!func_87(piParam0))
		return;

	DATABINDING::_VIRTUAL_COLLECTION_RESET(func_88(piParam0));
	return;
}

void func_105(int* piParam0) // Position - 0x1BB5 Signature - 22 01 74
{
	int num;
	int num2;
	var unk;
	var dst;
	var src;
	int num3;
	Hash entryId;
	int i;

	num = func_55(piParam0);
	num2 = func_48(piParam0);
	unk.f_9 = -1591664384;
	dst = 1;
	dst.f_1 = 1;
	dst.f_2 = joaat("COLOR_WHITE");
	dst.f_4 = -1;
	dst.f_5 = -1;
	dst.f_6 = -1;
	dst.f_10 = -1;
	dst.f_11 = -1;
	dst.f_12 = -1;
	src = 1;
	src.f_1 = 1;
	src.f_2 = joaat("COLOR_WHITE");
	src.f_4 = -1;
	src.f_5 = -1;
	src.f_6 = -1;
	src.f_10 = -1;
	src.f_11 = -1;
	src.f_12 = -1;

	for (i = 0; i < num2; i = i + 1)
	{
		num3 = func_91(func_49(piParam0), num, i);
	
		if (!func_26(piParam0, i, &entryId))
		{
		}
		else if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(entryId))
		{
		}
		else if (!func_92(piParam0, num3, &unk))
		{
		}
		else
		{
			MISC::COPY_SCRIPT_STRUCT(&dst, &src, 47);
		
			if (!func_93(&unk, &dst))
			{
			}
			else if (!func_152(&entryId, &dst))
			{
			}
		}
	}

	return;
}

void func_106(int* piParam0) // Position - 0x1CCE Signature - 22 01 27 00 00 4B
{
	var unk;

	func_153(&unk);
	func_154(piParam0, MISC::VAR_STRING(2, &unk));
	func_155(piParam0, MISC::GET_HASH_KEY(&(unk.f_16)));
	func_156(piParam0, 0);
	func_157(piParam0, 0);
	func_158(piParam0, false);
	func_159(piParam0, unk.f_34, unk.f_35);
	return;
}

int func_107(int iParam0) // Position - 0x1D1A Signature - 22 01 04 00 00 66 00 08
{
	int i;

	if (iParam0 == -1)
		return 0;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
			return Global_1292143.f_20.f_1[i /*21*/].f_1;
	}

	return 0;
}

void func_108(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1D66 Signature - 22 04 07 00 00 66 00 08 15 03 00 50 04 00 2F
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
		{
			if (Global_1292143.f_20.f_1[i /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1292143.f_20.f_1[i /*21*/].f_1 = iParam1;
			}
		
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1292143.f_20.f_1[i /*21*/].f_2 = iParam2;
				Global_1292143.f_20.f_1[i /*21*/].f_3 = iParam3;
			}
		
			return;
		}
	}

	func_160(iParam0, iParam1, iParam2, iParam3);
	return;
}

BOOL func_109(Hash hParam0, int iParam1) // Position - 0x1E04 Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 84
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_110(int iParam0) // Position - 0x1E1E Signature - 22 01 03 00 00 66 00 39 07 2C 00 03
{
	return UNLOCK::_UNLOCK_IS_NEW(func_161(iParam0));
}

void func_111(Hash hParam0) // Position - 0x1E30 Signature - 22 01 03 00 00 66 00 39 07 2C 00 2F
{
	UNLOCK::_UNLOCK_SET_NEW(func_161(hParam0), false);
	return;
}

int func_112(int* piParam0, var uParam1) // Position - 0x1E43 Signature - 22 02 04 00 00 66 01 76 03
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
		return 0;

	func_154(piParam0, DATABINDING::_0x6329C34BEE5BFF4B(*uParam1, -242834141));
	func_155(piParam0, DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, 1959966745));
	func_156(piParam0, DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, -1952794871));
	func_157(piParam0, DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, -129582355));
	func_158(piParam0, DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT_BY_HASH(*uParam1, joaat("Enabled")));
	func_159(piParam0, DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, 440050042), DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, 1058850005));
	return 1;
}

BOOL func_113(var uParam0, var uParam1) // Position - 0x1ED3 Signature - 22 02 04 00 00 66 00 76 03 05 00 34 05 8B 04 00 2F 50 02 01 66 00 76 37
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return false;

	*uParam1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -376630643);
	uParam1->f_1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -539230421);
	uParam1->f_2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -1019689499);
	uParam1->f_3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -1283381642);
	return true;
}

BOOL func_114(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x1F2A Signature - 22 08
{
	return func_162(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

int func_115(int iParam0, var uParam1) // Position - 0x1F40 Signature - 22 02 04 00 00 66 00 2F 39 04 1E 00 05 8B 04
{
	if (!func_109(iParam0, 0))
		return 0;

	TELEMETRY::_TELEMETRY_HUB_OFFERS(iParam0, *uParam1);
	return 1;
}

int func_116(var uParam0, int iParam1) // Position - 0x1F61 Signature - 22 02 04 00 00 66 01 2F 39
{
	if (!func_109(iParam1, 0))
		return 0;

	if (!func_110(iParam1))
		return 1;

	*uParam0 = iParam1;
	return 1;
}

BOOL func_117(Any* panParam0) // Position - 0x1F8C Signature - 22 01 03 00 00 66 00 39 AF 14 00 05 8B 04 00 2F 50 01 01 66 00 39
{
	if (!func_84(panParam0))
		return false;

	return func_163(panParam0);
}

char* func_118(int iParam0) // Position - 0x1FA8 Signature - 22 01 04 00 00 66 00 39 67
{
	char* str;

	str = func_164(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return "";

	return MISC::VAR_STRING(2, str);
}

BOOL func_119(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1FCD Signature - 22 04 06 00 00 4B 00 39 AF 14 00 05 8B 04 00 2F 50 04 01 4B 00 39
{
	if (!func_84(&uParam0))
		return false;

	if (func_163(&uParam0))
		return false;

	return func_166(func_165(uParam0));
}

char* func_120(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1FFC Signature - 22 04 0F
{
	var unk;
	var unk4;
	var unk7;

	if (!func_84(&uParam0))
		return "";

	if (func_165(uParam0) <= 0)
		return "";

	unk = { func_167(func_165(uParam0), true) };
	unk4 = { func_168(func_165(uParam0), true) };
	unk7 = { func_169(func_165(uParam0)) };
	return MISC::VAR_STRING(170, func_164(2), &unk, &unk4, &unk7);
}

void func_121(int* piParam0, BOOL bParam1) // Position - 0x2067 Signature - 22 02 04 00 00 42
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(piParam0->f_2[4], bParam1);
	return;
}

void func_122(int* piParam0, char* sParam1) // Position - 0x207C Signature - 22 02 04 00 00 1D
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(piParam0->f_2[3], sParam1);
	return;
}

BOOL func_123(Hash hParam0) // Position - 0x2091 Signature - 22 01 04 00 00 66 00 2F 39 04 1E 00 05 8B 04 00 2F 50 01 01 66 00 39 AC 21 00 05 8B 04 00 2F 50 01 01 66 00 6D
{
	int num;

	if (!func_109(hParam0, 0))
		return false;

	if (!func_130(hParam0))
		return false;

	if (!func_170(hParam0, MISC::GET_HASH_KEY("CI_TAG_OFFER_MYSTERY")))
		return false;

	num = func_171(hParam0, true);

	if (num != 0)
		return false;

	return true;
}

void func_124(BOOL bParam0) // Position - 0x20DF Signature - 22 01 03 00 00 66 00 8B 17
{
	if (bParam0)
		if (!Global_1896762.f_352)
			Global_1896762.f_352 = bParam0;
	else if (Global_1896762.f_352)
		Global_1896762.f_352 = bParam0;

	return;
}

BOOL func_125(Hash hParam0) // Position - 0x2116 Signature - 22 01 04 00 00 2F 67 03 2F
{
	int i;

	i = 0;

	for (i = 0; i < Global_1939434.f_161; i = i + 1)
	{
		if (hParam0 == MISC::GET_HASH_KEY(&(Global_1939434[i /*16*/].f_10)))
		{
			func_172(i);
			return true;
		}
	}

	return false;
}

BOOL func_126() // Position - 0x2156 Signature - 22 00 02 00 00 42
{
	return func_173(4);
}

void func_127(BOOL bParam0) // Position - 0x2163 Signature - 22 01 03 00 00 66 00 8B 08
{
	if (bParam0)
		func_128(4);
	else
		func_174(4);

	return;
}

void func_128(int iParam0) // Position - 0x217D Signature - 22 01 03 00 00 5D B8 0C 10 78 40 0E 66 00 30
{
	Global_1051832.f_3648 = Global_1051832.f_3648 || iParam0;
	return;
}

void func_129(var uParam0) // Position - 0x2196 Signature - 22 01 03 00 00 73
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_130(Hash hParam0) // Position - 0x21AC Signature - 22 01 03 00 00 66 00 39 0A 2F 00 37 0F
{
	return func_175(hParam0) == 1946043663;
}

BOOL func_131(Hash hParam0) // Position - 0x21C0 Signature - 22 01 04 00 00 66 00 2F 39 04 1E 00 05 8B 04 00 2F 50 01 01 66 00 39 AC 21 00 05 8B 04 00 2F 50 01 01 66 00 39
{
	int num;

	if (!func_109(hParam0, 0))
		return false;

	if (!func_130(hParam0))
		return false;

	if (func_123(hParam0))
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, 920823793, -153848696))
	{
		num = func_171(hParam0, true);
	
		if (!func_176(num))
			return false;
	}
	else
	{
		return false;
	}

	return true;
}

BOOL func_132(int* piParam0, Hash hParam1) // Position - 0x2224 Signature - 22 02 13
{
	int num;
	int num2;
	int transactionId;

	if (!func_109(hParam1, 0))
		return false;

	if (!func_130(hParam1))
		return false;

	num = func_171(hParam1, true);

	if (!ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(num))
		return false;

	if (!func_176(num))
		return false;

	if (func_177(num))
		return false;

	transactionId = -1;
	transactionId.f_1 = -1;

	if (!func_179(&transactionId, num, 1, 1, false, 0, func_178(num, 0, true, -1, true), -1, false))
		return false;

	if (!func_180(&(piParam0->f_19), transactionId, -1948187754, hParam1))
		return false;

	num2 = transactionId;
	num2.f_2 = hParam1;
	num2.f_1 = func_181(hParam1);
	num2.f_3 = func_182(hParam1);
	TELEMETRY::_TELEMETRY_SET_SHOP_FOR_TRANSACTION(transactionId, joaat("coupons"), joaat("coupons"));

	if (!func_183(&transactionId))
		return false;

	func_184(piParam0, &num2);
	return true;
}

int func_133(Hash hParam0) // Position - 0x2306 Signature - 22 01 18 00 00 4B
{
	var unk;

	unk = 20;

	if (ITEMDATABASE::_0x8870895BA5ED9385(hParam0, -153848696, &unk) > 0)
		return unk[0];

	return 0;
}

BOOL func_134(int* piParam0, int iParam1) // Position - 0x232E Signature - 22 02 04 00 00 66 00 39 11
{
	if (!func_45(piParam0))
		return false;

	if (iParam1 < 0)
		return false;

	if (iParam1 >= func_55(piParam0))
		return false;

	return true;
}

BOOL func_135(Hash hParam0) // Position - 0x235E Signature - 22 01 03 00 00 66 00 39 0A 2F 00 37 8D FA 70 F8 0B 50
{
	return func_175(hParam0) == -126813555;
}

BOOL func_136(Any* panParam0, var uParam1) // Position - 0x2372 Signature - 22 02 07 00 00 66 00 4B
{
	Hash hash;
	BOOL flag;
	BOOL flag2;

	if (!func_185(panParam0, &hash))
		return false;

	if (!func_186(panParam0, uParam1))
		return false;

	flag = func_187(hash);

	if (flag)
		!func_188(hash, &(uParam1->f_23));

	uParam1->f_22 = MISC::GET_HASH_KEY(func_189(&hash));
	flag2 = func_190(&hash) && !flag;

	if (flag2)
		uParam1->f_5 = -571766943;
	else
		uParam1->f_5 = 705463926;

	if (flag2)
	{
		uParam1->f_9 = 1;
		uParam1->f_8 = uParam1->f_24;
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), func_118(3), 128);
	}

	return true;
}

BOOL func_137(Any* panParam0, var uParam1) // Position - 0x240B Signature - 22 02 29
{
	Hash hash;
	var unk;

	if (!func_185(panParam0, &hash))
		return false;

	if (!func_186(panParam0, uParam1))
		return false;

	if (func_191(hash))
		!func_188(hash, &(uParam1->f_23));

	if (func_123(hash))
		uParam1->f_5 = -1585562139;
	else if (!func_131(hash))
		uParam1->f_5 = -797654126;
	else if (func_192(hash))
		uParam1->f_5 = 678711754;
	else
		uParam1->f_5 = -1948187754;

	uParam1->f_22 = MISC::GET_HASH_KEY(func_193(&hash));

	if (func_123(hash))
	{
		func_194(&unk);
		uParam1->f_20 = MISC::VAR_STRING(2, &unk);
		uParam1->f_21 = MISC::GET_HASH_KEY(&(unk.f_16));
		uParam1->f_16 = unk.f_32;
		uParam1->f_17 = unk.f_33;
		uParam1->f_18 = unk.f_34;
		uParam1->f_19 = unk.f_35;
		uParam1->f_22 = 0;
	}

	if (!uParam1->f_24)
	{
	}
	else if (func_191(hash))
	{
	}
	else if (!func_131(hash))
	{
	}
	else
	{
		uParam1->f_8 = 1;
	}

	if (func_131(hash))
	{
		if (!func_195(hash))
		{
			uParam1->f_9 = 1;
			uParam1->f_8 = 0;
			TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), func_118(5), 128);
		}
		else
		{
			uParam1->f_9 = 1;
			TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), func_118(4), 128);
		}
	}
	else if (func_190(&hash))
	{
		uParam1->f_9 = 1;
		uParam1->f_8 = 1;
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), func_118(3), 128);
	}

	return true;
}

void func_138(var uParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, BOOL bParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25) // Position - 0x2572 Signature - 22 1A
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(hParam1, &uParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(0), bParam10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1), bParam10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(2), bParam10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(57), bParam10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(58), bParam10.f_4);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(60), bParam10.f_5);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(59), bParam10.f_6);

	if (bParam10.f_7 == 0)
		bParam10.f_7 = joaat("IB_SELECT");

	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(61), bParam10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(62), "");
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(63), bParam10.f_8);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(64), bParam10.f_9);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(65), bParam10.f_10);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(71), bParam10.f_11);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(66), bParam10.f_12);

	if (bParam10.f_13 == 0)
		bParam10.f_13 = joaat("IB_SELECT");

	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(68), bParam10.f_13);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(69), bParam10.f_14);
	uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(70), bParam10.f_15);
	return;
}

BOOL func_139() // Position - 0x2705 Signature - 22 00 02 00 00 37 BD
{
	if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, 792347263) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-475019843, 792347263))
		return false;

	return Global_1960823.f_6;
}

void func_140(int iParam0) // Position - 0x273B Signature - 22 01 03 00 00 08 66 00 32 2F 66 00 6C 03
{
	*iParam0 = -1;
	iParam0->f_3 = 0;
	iParam0->f_5 = -1;
	iParam0->f_2 = 1894345440;
	return;
}

void func_141(int iParam0, BOOL bParam1) // Position - 0x275A Signature - 22 02 04 00 00 39 05
{
	if (func_139())
		return;

	if (Global_1960823.f_1)
		return;

	Global_1960823 = iParam0;

	if (bParam1)
		Global_1960823.f_1 = 1;

	return;
}

BOOL func_142(var uParam0) // Position - 0x278A Signature - 22 01 03 00 00 66 00 76 09 39 3D
{
	return func_197(*uParam0, 1);
}

void func_143(var uParam0, BOOL bParam1) // Position - 0x279A Signature - 22 02 04 00 00 66 01 6A
{
	if (bParam1 || !func_142(uParam0))
		func_145(uParam0);

	return;
}

int func_144(var uParam0) // Position - 0x27BA Signature - 22 01 03 00 00 66 00 39 8A
{
	if (!func_142(uParam0))
		return 0;

	if (func_198(uParam0))
		return BUILTIN::ROUND(uParam0->f_2 * 1000f);

	return func_199() - BUILTIN::ROUND(uParam0->f_1 * 1000f);
}

void func_145(var uParam0) // Position - 0x2800 Signature - 22 01 03 00 00 66 00 73
{
	func_200(uParam0, 0f);
	return;
}

BOOL func_146(var uParam0, var uParam1) // Position - 0x280F Signature - 22 02 04 00 00 66 00 76 6A
{
	if (*uParam0 && func_33(uParam1))
		return false;

	return *uParam0;
}

int func_147(var uParam0) // Position - 0x282F Signature - 22 01 03 00 00 66 00 80 12
{
	return uParam0->f_18.f_1;
}

void func_148(int* piParam0, Any* panParam1) // Position - 0x283D Signature - 22 02 04 00 00 66 01 66 00 80
{
	MISC::COPY_SCRIPT_STRUCT(panParam1, &(piParam0->f_40), 4);
	return;
}

BOOL func_149(Any* panParam0, Any* panParam1) // Position - 0x2850 Signature - 22 02 04 00 00 66 00 66 01 03 09 00 0E
{
	if (TELEMETRY::_TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID(panParam0, panParam1))
		return true;

	return false;
}

int func_150(Hash hParam0) // Position - 0x2868 Signature - 22 01 03 00 00 66 00 39 A0
{
	return func_201(hParam0);
}

BOOL func_151(int* piParam0, int iParam1) // Position - 0x2876 Signature - 22 02 24
{
	var unk;
	var unk17;

	if (!func_202(iParam1, &unk, &unk17))
		return false;

	if (!func_203(&(piParam0->f_48), &unk17, &unk))
		return false;

	return true;
}

BOOL func_152(var uParam0, var uParam1) // Position - 0x28A5 Signature - 22 02 04 00 00 66 00 76 03 05 00 34 05 8B 04 00 2F 50 02 01 66 00 76 2F
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return false;

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(0), *uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1), uParam1->f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(2), uParam1->f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(57), uParam1->f_3);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(60), uParam1->f_5);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(59), uParam1->f_6);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(58), uParam1->f_4);
	DATABINDING::_DATABINDING_WRITE_STRING_FROM_HASH(*uParam0, joaat("dynamic_list_item_raw_text_entry"), &(uParam1->f_27));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(63), uParam1->f_8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(64), uParam1->f_9);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, 440050042, uParam1->f_16);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, 1058850005, uParam1->f_17);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, -3675574, uParam1->f_18);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, -536627617, uParam1->f_19);
	DATABINDING::_DATABINDING_WRITE_STRING_FROM_HASH(*uParam0, -242834141, uParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, 1959966745, uParam1->f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, -1952794871, uParam1->f_22);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, -129582355, uParam1->f_23);
	DATABINDING::_0xBFC83DA249BEFCC9(*uParam0, joaat("Enabled"), uParam1->f_24);
	DATABINDING::_0xBFC83DA249BEFCC9(*uParam0, 1024435631, uParam1->f_25);
	DATABINDING::_0xBFC83DA249BEFCC9(*uParam0, 596676017, uParam1->f_26);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -376630643, uParam1->f_43);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -539230421, uParam1->f_43.f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -1019689499, uParam1->f_43.f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -1283381642, uParam1->f_43.f_3);
	return true;
}

void func_153(char* sParam0) // Position - 0x2A58 Signature - 22 01 03 00 00 6D
{
	TEXT_LABEL_ASSIGN_STRING(sParam0, "COUPON_OFFER_NO_VALUE", 128);
	TEXT_LABEL_ASSIGN_STRING(&(sParam0->f_16), "COUPON_OFFER_NO_VALUE_DESC", 128);
	sParam0->f_34 = MISC::GET_HASH_KEY("COUPON_OFFER_NO_VALUE");
	sParam0->f_35 = MISC::GET_HASH_KEY("mp_hub_coupons");
	sParam0->f_32 = MISC::GET_HASH_KEY("COUPON_OFFER_NO_VALUE");
	sParam0->f_33 = MISC::GET_HASH_KEY("mp_hub_coupons");
	return;
}

void func_154(int* piParam0, const char* sParam1) // Position - 0x2A9C Signature - 22 02 04 00 00 6D 08
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(piParam0->f_2[8], sParam1);
	return;
}

void func_155(int* piParam0, Hash hParam1) // Position - 0x2AB2 Signature - 22 02 04 00 00 6D 09
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(piParam0->f_2[9], hParam1);
	return;
}

void func_156(int* piParam0, int iParam1) // Position - 0x2AC8 Signature - 22 02 04 00 00 6D 0A
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(piParam0->f_2[10], iParam1);
	return;
}

void func_157(int* piParam0, int iParam1) // Position - 0x2ADE Signature - 22 02 04 00 00 6D 0B
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(piParam0->f_2[11], iParam1);
	return;
}

void func_158(int* piParam0, BOOL bParam1) // Position - 0x2AF4 Signature - 22 02 04 00 00 0D
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(piParam0->f_2[7], bParam1);
	return;
}

void func_159(int* piParam0, int iParam1, int iParam2) // Position - 0x2B09 Signature - 22 03 05 00 00 62
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(piParam0->f_2[5], iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(piParam0->f_2[6], iParam2);
	return;
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x2B2B Signature - 22 04 07 00 00 66 00 08 15 03 00 50 04 00 5D
{
	int i;

	if (iParam0 == -1)
		return;

	if (Global_1292143.f_20 < 20)
	{
		Global_1292143.f_20 = Global_1292143.f_20 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_20.f_1[i /*21*/] = { Global_1292143.f_20.f_1[i + 1 /*21*/] };
		}
	}

	func_204(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

Hash func_161(Hash hParam0) // Position - 0x2C07 Signature - 22 01 03 00 00 66 00 50 01 01 22 05
{
	return hParam0;
}

BOOL func_162(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x2C11 Signature - 22 05 07 00 00 66 00 03
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_205(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

BOOL func_163(Any* panParam0) // Position - 0x2C4B Signature - 22 01 03 00 00 66 00 39 AF 14 00 05 8B 04 00 2F 50 01 01 66 00 03
{
	if (!func_84(panParam0))
		return false;

	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(panParam0);
}

char* func_164(int iParam0) // Position - 0x2C67 Signature - 22 01 03 00 00 66 00 3C 0A
{
	switch (iParam0)
	{
		case 0:
			return "HO_TOOLTIP_REWARD_EXPIRED";
	
		case 1:
			return "HO_TOOLTIP_OFFER_EXPIRED";
	
		case 2:
			return "HO_TOOLTIP_OFFER_AVAILABLE_DATE";
	
		case 3:
			return "HO_PROMPT_BROWSE_CATALOGUE";
	
		case 4:
			return "HO_PROMPT_REDEEM";
	
		case 5:
			return "HO_PROMPT_OWNED";
	
		case 6:
			return "HO_TOOLTIP_OFFER_FOR_HORSES";
	
		case 7:
			return "HO_ITEM_MYSTERY_REWARD_NAME";
	
		case 8:
			return "HO_ITEM_MYSTERY_REWARD_DESCRIPTION";
	
		case 9:
			return "HO_TOOLTIP_ITEM_MYSTERY_REWARD_NOT_REVEALED";
	
		default:
		
	}

	return "";
}

int func_165(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x2CF6 Signature - 22 04 06 00 00 4B 00 39 AF 14 00 05 8B 04 00 2F 50 04 01 4B 00 03
{
	if (!func_84(&uParam0))
		return 0;

	return INVENTORY::_INVENTORY_GET_ITEM_EXPIRY_TIME(&uParam0);
}

BOOL func_166(int iParam0) // Position - 0x2D12 Signature - 22 01 03 00 00 66 00 2F 23
{
	if (iParam0 <= 0)
		return false;

	return NETWORK::GET_CLOUD_TIME_AS_INT() + func_206() > iParam0;
}

Vector3 func_167(int iParam0, BOOL bParam1) // Position - 0x2D30 Signature - 22 02 0D 00 00 66 00 4B 04 03 08 00 71 66 01 8B 22 00 25 A3
{
	var timeStructure;
	var unk6;

	NETWORK::CONVERT_POSIX_TIME(iParam0, &timeStructure);

	if (bParam1)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk6, "SR_DAY_", 24);
		TEXT_LABEL_APPEND_INT(&unk6, timeStructure.f_2, 24);
		TEXT_LABEL_ASSIGN_STRING(&unk6, MISC::VAR_STRING(2, &unk6), 24);
		return unk6;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk6, func_207(timeStructure.f_2), 24);
	return unk6;
}

Vector3 func_168(int iParam0, BOOL bParam1) // Position - 0x2D77 Signature - 22 02 0D 00 00 66 00 4B 04 03 08 00 71 66 01 8B 22 00 25 AB
{
	var timeStructure;
	var unk6;

	NETWORK::CONVERT_POSIX_TIME(iParam0, &timeStructure);

	if (bParam1)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk6, "MONTH_", 24);
		TEXT_LABEL_APPEND_INT(&unk6, timeStructure.f_1, 24);
		TEXT_LABEL_ASSIGN_STRING(&unk6, MISC::VAR_STRING(2, &unk6), 24);
		return unk6;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk6, func_207(timeStructure.f_1), 24);
	return unk6;
}

Vector3 func_169(int iParam0) // Position - 0x2DBE Signature - 22 01 0C
{
	int timeStructure;
	var unk6;

	NETWORK::CONVERT_POSIX_TIME(iParam0, &timeStructure);
	TEXT_LABEL_ASSIGN_STRING(&unk6, func_207(timeStructure), 24);
	return unk6;
}

BOOL func_170(Hash hParam0, Hash hParam1) // Position - 0x2DDC Signature - 22 02 04 00 00 66 00 2F 39 04 1E 00 05 8B 0F
{
	if (!func_109(hParam0, 0))
		return func_209(func_208(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return true;

	return false;
}

int func_171(Hash hParam0, BOOL bParam1) // Position - 0x2E1D Signature - 22 02 0B
{
	var unk;

	if (!func_109(hParam0, 0))
		return func_210(func_208(hParam0), bParam1);

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk) || unk.f_5 == 0)
		return 0;

	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(unk.f_5))
		return 0;

	return unk.f_5;
}

void func_172(int iParam0) // Position - 0x2E75 Signature - 22 01 13
{
	var unk;

	if (iParam0 < 0 || iParam0 >= 10)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939434[iParam0 /*16*/].f_10)))
		return;

	Global_1939434[iParam0 /*16*/] = { unk };
	Global_1939434.f_161 = Global_1939434.f_161 - 1;

	if (Global_1939434.f_161 < 0)
		Global_1939434.f_161 = 0;

	return;
}

BOOL func_173(int iParam0) // Position - 0x2ED5 Signature - 22 01 03 00 00 5D B8 0C 10 78 40 0E 66 00 69
{
	return Global_1051832.f_3648 && iParam0 != false;
}

void func_174(int iParam0) // Position - 0x2EE9 Signature - 22 01 03 00 00 5D B8 0C 10 78 40 0E 5D
{
	Global_1051832.f_3648 = Global_1051832.f_3648 - Global_1051832.f_3648 && iParam0;
	return;
}

int func_175(Hash hParam0) // Position - 0x2F0A Signature - 22 01 0A 00 00 66 00 2F 39 04 1E 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 85 05 8B 04 00 2F 50 01 01 4B 03 27 01
{
	var unk;

	if (!func_109(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_1;
}

BOOL func_176(int iParam0) // Position - 0x2F35 Signature - 22 01 03 00 00 66 00 2F 15
{
	if (iParam0 == 0)
		return false;

	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(iParam0);
}

BOOL func_177(Hash hParam0) // Position - 0x2F4D Signature - 22 01 04 00 00 66 00 39 F7
{
	int i;

	if (!func_211(hParam0))
		return false;

	for (i = 0; i < Global_1292143.f_2012; i = i + 1)
	{
		if (Global_1292143.f_2012.f_1[i /*24*/].f_4 == hParam0 && Global_1292143.f_2012.f_1[i /*24*/].f_5 == 0)
			return NETWORK::_0xE10F2D7715ABABEC(&Global_1292143.f_2012.f_1[i /*24*/]);
	}

	return false;
}

Hash func_178(int iParam0, int iParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x2FBB Signature - 22 05 0B
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (!func_176(iParam0))
		return 0;

	flag = func_212(iParam3, 2);
	flag2 = func_213(iParam0, -570078785, flag);
	flag3 = func_213(iParam0, -915411861, flag);

	if (func_213(iParam0, 997808187, flag))
		iParam1 = 997808187;
	else if (bParam4 && func_214(iParam0, &num) || func_215(iParam0, &num))
		iParam1 = num;
	else if (flag2 && !flag3)
		iParam1 = -570078785;
	else if (flag2 && flag3)
		if (func_216())
			iParam1 = -570078785;
		else
			iParam1 = -915411861;
	else if (flag3)
		iParam1 = -915411861;
	else if (func_217(15) && func_213(iParam0, 369710026, flag))
		iParam1 = 369710026;

	if (iParam1 == 0 && bParam2)
		return -915411861;

	return iParam1;
}

BOOL func_179(int* piParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, int iParam5, Hash hParam6, int iParam7, BOOL bParam8) // Position - 0x30C0 Signature - 22 09 1D
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = -1591664384;
	unk.f_9 = iParam2;
	unk.f_10 = iParam3;
	unk.f_14 = iParam5;

	if (!func_218(piParam0, iParam1, &unk, bParam4, hParam6, iParam7, bParam8))
		return false;

	func_219(unk);
	return true;
}

BOOL func_180(var uParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x3113 Signature - 22 04 07 00 00 66 01
{
	int i;

	if (iParam1 == -1)
		return false;

	for (i = 4; i >= 1; i = i + -1)
	{
		MISC::COPY_SCRIPT_STRUCT(&uParam0->f_2[i /*3*/], &uParam0->f_2[i - 1 /*3*/], 3);
	}

	uParam0->f_2[0 /*3*/] = iParam1;
	uParam0->f_2[0 /*3*/].f_1 = iParam2;
	uParam0->f_2[0 /*3*/].f_2 = hParam3;
	return true;
}

int func_181(Hash hParam0) // Position - 0x316E Signature - 22 01 0D 00 00 08
{
	int num;
	var unk;
	var unk6;

	num = -1;

	if (!func_220(hParam0))
		return num;

	num = 74330131;
	unk = { func_221(hParam0, false, 0) };
	unk6 = { func_222(hParam0, unk, unk.f_4, false) };

	if (!func_84(&unk6))
		return -1;

	if (func_119(unk6))
		num = 90473367;

	return num;
}

int func_182(Hash hParam0) // Position - 0x31D0 Signature - 22 01 09 00 00 66
{
	Hash award;
	Hash award2;
	int awardItemCount;
	int currency;

	if (!func_109(hParam0, 0))
		return 0;

	award = func_171(hParam0, false);
	award2 = award;

	if (award2 != 0)
	{
		awardItemCount = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ITEM_COUNT(award2);
	
		if (awardItemCount > 0)
			if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO(award, 0, &currency))
				return currency;
	}

	return 0;
}

BOOL func_183(int* piParam0) // Position - 0x321D Signature - 22 01 04 00 00 66 00 76
{
	Hash action;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
	{
		func_108(*piParam0, 0, 0, 0);
		return true;
	}

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*piParam0);
		func_108(*piParam0, 4, 0, 0);
		return true;
	}

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*piParam0))
	{
		func_108(*piParam0, 2, 0, 0);
		return false;
	}

	func_108(*piParam0, 1, 0, 0);
	action = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*piParam0);

	if (action == 2113164098 || action == 541670136)
		piParam0->f_3 = 1;

	piParam0->f_1 = *piParam0;
	*piParam0 = -1;
	piParam0->f_2 = 0;
	return true;
}

void func_184(int* piParam0, Any* panParam1) // Position - 0x32BA Signature - 22 02 04 00 00 66 00 80 28
{
	MISC::COPY_SCRIPT_STRUCT(&(piParam0->f_40), panParam1, 4);
	return;
}

BOOL func_185(Any* panParam0, var uParam1) // Position - 0x32CD Signature - 22 02 12 00 00 2F
{
	var unk;

	*uParam1 = 0;

	if (!func_84(panParam0))
		return false;

	unk.f_9 = -1591664384;

	if (!func_114(*panParam0, &unk, true, false, -1))
		return false;

	if (!func_109(unk.f_4, 0))
		return false;

	if (!func_220(unk.f_4))
		return false;

	*uParam1 = unk.f_4;
	return true;
}

BOOL func_186(Any* panParam0, var uParam1) // Position - 0x3332 Signature - 22 02 05 03
{
	Hash hash;
	var unk;
	int i;

	if (!func_185(panParam0, &hash))
		return false;

	uParam1->f_4 = -21855895;
	uParam1->f_43 = { *panParam0 };

	if (func_117(panParam0))
	{
		uParam1->f_24 = 0;
	}
	else
	{
		uParam1->f_24 = 1;
	
		if (func_223(panParam0))
			uParam1->f_25 = 1;
		else if (func_119(*panParam0))
			uParam1->f_26 = 1;
	}

	uParam1->f_20 = func_224(&hash);
	uParam1->f_21 = func_225(hash);
	unk.f_8 = 10;
	unk.f_8.f_1.f_4 = 15;
	unk.f_8.f_1.f_36 = 10;
	unk.f_8.f_1.f_47.f_4 = 15;
	unk.f_8.f_1.f_47.f_36 = 10;
	unk.f_8.f_1.f_47.f_47.f_4 = 15;
	unk.f_8.f_1.f_47.f_47.f_36 = 10;
	unk.f_8.f_1.f_47.f_47.f_47.f_4 = 15;
	unk.f_8.f_1.f_47.f_47.f_47.f_36 = 10;
	unk.f_8.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_8.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	unk.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	unk.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	unk.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	unk.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	unk.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	unk.f_480 = 10;
	unk.f_480.f_1.f_4 = 10;
	unk.f_480.f_1.f_25.f_4 = 10;
	unk.f_480.f_1.f_25.f_25.f_4 = 10;
	unk.f_480.f_1.f_25.f_25.f_25.f_4 = 10;
	unk.f_480.f_1.f_25.f_25.f_25.f_25.f_4 = 10;
	unk.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	unk.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	unk.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	unk.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	unk.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	unk.f_732.f_2 = 5;
	unk.f_732.f_18 = 8;

	if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_BY_NAME(hash, &unk))
	{
		for (i = 0; i < 5; i = i + 1)
		{
			switch (unk.f_732.f_2[i /*3*/].f_2)
			{
				case -774197843:
					func_226(&unk.f_732.f_2[i /*3*/], &(uParam1->f_17), &(uParam1->f_16), true);
					func_226(&unk.f_732.f_2[i /*3*/], &(uParam1->f_19), &(uParam1->f_18), true);
					break;
			}
		}
	}

	return true;
}

BOOL func_187(Hash hParam0) // Position - 0x3544 Signature - 22 01 03 00 00 66 00 2F 39 04 1E 00 05 8B 04 00 2F 50 01 01 66 00 39 CD
{
	if (!func_109(hParam0, 0))
		return 0;

	if (func_227(hParam0) != 0 && !func_228(hParam0))
		return 1;

	return 0;
}

BOOL func_188(Hash hParam0, var uParam1) // Position - 0x3577 Signature - 22 02 05 00 00 66 00 39
{
	int num;

	if (!func_191(hParam0))
		return false;

	num = func_229(hParam0);

	if (num == 0)
		return false;

	*uParam1 = num;
	return true;
}

char* func_189(var uParam0) // Position - 0x35A5 Signature - 22 01 0D 00 00 66 00 76 2F 39 04 1E 00 05 8B 05 00 2F 04 50 01 01 66 00 76 39 5E
{
	char* str;
	int num;
	var unk;
	int num2;
	int i;

	if (!func_109(*uParam0, 0))
		return "";

	if (!func_135(*uParam0))
		return "";

	str = "";
	num = 0;
	unk = 5;
	num2 = ITEMDATABASE::_0x8870895BA5ED9385(*uParam0, 1120943070, &unk);

	for (i = 0; i < num2; i = i + 1)
	{
		num = unk[i];
	
		if (num == 0)
		{
		}
		else
		{
			str = func_230(num);
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
				break;
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return "";

	return str;
}

BOOL func_190(var uParam0) // Position - 0x3633 Signature - 22 01 05 00 00 66 00 76
{
	int i;
	int num;

	if (!func_109(*uParam0, 0))
		return false;

	if (func_130(*uParam0) && func_123(*uParam0))
		return false;

	num = func_231();

	for (i = 0; i < num; i = i + 1)
	{
		if (func_170(*uParam0, func_232(i)))
			return true;
	}

	return false;
}

BOOL func_191(Hash hParam0) // Position - 0x3693 Signature - 22 01 04 00 00 66 00 2F 39 04 1E 00 05 8B 04 00 2F 50 01 01 66 00 39 CD
{
	int num;

	if (!func_109(hParam0, 0))
		return false;

	if (func_227(hParam0) != 0 && !func_228(hParam0))
		return true;

	if (func_123(hParam0))
		return false;

	num = func_171(hParam0, true);

	if (!func_176(num))
		return false;

	if (!func_233(num, 205718222))
		return false;

	return true;
}

BOOL func_192(Hash hParam0) // Position - 0x36FD Signature - 22 01 03 00 00 66 00 2F 39 04 1E 00 05 8B 04 00 2F 50 01 01 66 00 25
{
	if (!func_109(hParam0, 0))
		return false;

	if (!func_170(hParam0, MISC::GET_HASH_KEY("CI_TAG_OFFER_SEASON_PASS")))
		return false;

	return true;
}

char* func_193(var uParam0) // Position - 0x372B Signature - 22 01 0D 00 00 66 00 76 2F 39 04 1E 00 05 8B 05 00 2F 04 50 01 01 66 00 76 39 AC
{
	char* str;
	int num;
	var unk;
	int num2;
	int i;

	if (!func_109(*uParam0, 0))
		return "";

	if (!func_130(*uParam0))
		return "";

	str = "";
	num = 0;
	unk = 5;
	num2 = ITEMDATABASE::_0x8870895BA5ED9385(*uParam0, 1120943070, &unk);

	for (i = 0; i < num2; i = i + 1)
	{
		num = unk[i];
	
		if (num == 0)
		{
		}
		else
		{
			str = func_234(num);
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
				break;
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return "";

	return str;
}

void func_194(char* sParam0) // Position - 0x37B9 Signature - 22 01 03 00 00 25
{
	TEXT_LABEL_ASSIGN_STRING(sParam0, "HO_ITEM_MYSTERY_REWARD_NAME", 128);
	TEXT_LABEL_ASSIGN_STRING(&(sParam0->f_16), "HO_ITEM_MYSTERY_REWARD_DESCRIPTION", 128);
	sParam0->f_34 = MISC::GET_HASH_KEY("VOUCHER_MYSTERY");
	sParam0->f_35 = MISC::GET_HASH_KEY("mp_hub_coupons");
	sParam0->f_32 = MISC::GET_HASH_KEY("VOUCHER_MYSTERY");
	sParam0->f_33 = MISC::GET_HASH_KEY("mp_hub_coupons");
	return;
}

BOOL func_195(Hash hParam0) // Position - 0x3801 Signature - 22 01 04 00 00 66 00 39 EE
{
	Hash hash;

	hash = func_235(hParam0);

	if (!func_109(hash, 0))
		return true;

	if (func_236(hash, 1))
		return false;

	return true;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x382F Signature - 22 01 03 00 00 66 00 3C 62
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
	
		case 1:
			return "dynamic_list_item_visible";
	
		case 2:
			return "dynamic_list_item_main_color";
	
		case 3:
			return "dynamic_list_item_secondary_color";
	
		case 4:
			return "dynamic_list_item_tertiary_color";
	
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
	
		case 6:
			return "dynamic_list_item_main_img_texture";
	
		case 7:
			return "dynamic_list_item_main_img_visible";
	
		case 8:
			return "dynamic_list_item_main_img_enabled";
	
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
	
		case 10:
			return "dynamic_list_item_status_icon_texture";
	
		case 11:
			return "dynamic_list_item_status_icon_visible";
	
		case 12:
			return "dynamic_list_item_deco_texture_dic";
	
		case 13:
			return "dynamic_list_item_deco__texture";
	
		case 14:
			return "dynamic_list_item_deco_visible";
	
		case 15:
			return "dynamic_list_item_raw_text_entry";
	
		case 16:
			return "dynamic_list_item_text_label_entry";
	
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
	
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
	
		case 19:
			return "dynamic_list_item_secondary_text_visible";
	
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
	
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
	
		case 22:
			return "dynamic_list_item_end_img_texture";
	
		case 23:
			return "dynamic_list_item_end_img_visible";
	
		case 24:
			return "dynamic_list_item_end_img_left_texture_dic";
	
		case 25:
			return "dynamic_list_item_end_img_left_texture";
	
		case 26:
			return "dynamic_list_item_end_img_left_visible";
	
		case 27:
			return "dynamic_list_item_corner_end_img_texture_dic";
	
		case 28:
			return "dynamic_list_item_corner_end_img_texture";
	
		case 29:
			return "dynamic_list_item_corner_end_img_visible";
	
		case 30:
			return "dynamic_list_item_entry_player_index";
	
		case 31:
			return "dynamic_list_item_entry_friend_index";
	
		case 32:
			return "dynamic_list_item_player_gamer_handle";
	
		case 33:
			return "dynamic_list_item_option_stepper_visible";
	
		case 34:
			return "dynamic_list_item_option_stepper_text_enabled";
	
		case 35:
			return "dynamic_list_item_option_stepper_items";
	
		case 36:
			return "dynamic_list_item_option_stepper_current_hash";
	
		case 37:
			return "dynamic_list_item_option_stepper_current_index";
	
		case 38:
			return "dynamic_list_item_option_stepper_max_index";
	
		case 39:
			return "dynamic_list_item_left_chevron_enabled";
	
		case 40:
			return "dynamic_list_item_right_chevron_enabled";
	
		case 41:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
	
		case 42:
			return "dynamic_list_item_main_fill_maximum";
	
		case 43:
			return "dynamic_list_item_main_fill_value";
	
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
	
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
	
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
	
		case 47:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
	
		case 48:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
	
		case 49:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
	
		case 50:
			return "dynamic_list_item_extra_img_texture_one_dic";
	
		case 51:
			return "dynamic_list_item_extra_img_one_texture";
	
		case 52:
			return "dynamic_list_item_extra_img_one_visible";
	
		case 53:
			return "dynamic_list_item_extra_int_field_one_value";
	
		case 54:
			return "dynamic_list_item_extra_int_field_two_value";
	
		case 55:
			return "dynamic_list_item_extra_vector_field_one_value";
	
		case 56:
			return "dynamic_list_item_extra_bool_field_one_value";
	
		case 57:
			return "dynamic_list_item_link";
	
		case 58:
			return "dynamic_list_item_event_channel_hash";
	
		case 59:
			return "dynamic_list_item_focus_hash";
	
		case 60:
			return "dynamic_list_item_select_hash";
	
		case 61:
			return "dynamic_list_item_prompt_text";
	
		case 62:
			return "dynamic_list_item_prompt_text_raw";
	
		case 63:
			return "dynamic_list_item_prompt_enabled";
	
		case 64:
			return "dynamic_list_item_prompt_visible";
	
		case 68:
			return "dynamic_list_item_prompt_option_text";
	
		case 69:
			return "dynamic_list_item_prompt_option_enabled";
	
		case 70:
			return "dynamic_list_item_prompt_option_visible";
	
		case 71:
			return "dynamic_list_item_prompt_option_select_hash";
	
		case 72:
			return "dynamic_list_item_prompt_toggle_text";
	
		case 73:
			return "dynamic_list_item_prompt_toggle_enabled";
	
		case 74:
			return "dynamic_list_item_prompt_toggle_visible";
	
		case 75:
			return "dynamic_list_item_prompt_toggle_select_hash";
	
		case 76:
			return "dynamic_list_item_prompt_r3_text";
	
		case 77:
			return "dynamic_list_item_prompt_r3_enabled";
	
		case 78:
			return "dynamic_list_item_prompt_r3_visible";
	
		case 79:
			return "dynamic_list_item_select_r3_select_hash";
	
		case 80:
			return "dynamic_list_item_prompt_dpad_left_right_text";
	
		case 81:
			return "dynamic_list_item_prompt_dpad_left_right_enabled";
	
		case 82:
			return "dynamic_list_item_prompt_dpad_left_right_visible";
	
		case 83:
			return "dynamic_list_item_select_dpad_left_right_select_hash";
	
		case 84:
			return "mount_collection_index";
	
		case 85:
			return "dynamic_list_item_rename_prompt_enabled";
	
		case 86:
			return "dynamic_list_item_rename_prompt_visible";
	
		case 87:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
	
		case 88:
			return "invite_unique_id";
	
		case 89:
			return "invite_tracked";
	
		case 90:
			return "invite_processed";
	
		case 91:
			return "invite_script_type";
	
		case 92:
			return "invite_gang_id";
	
		case 93:
			return "invite_expiration_time";
	
		case 94:
			return "invite_filter_type";
	
		case 95:
			return "invite_feed_message_id";
	
		case 96:
			return "invite_all_enabled";
	
		case 97:
			return "invite_all_visible";
	
		case 98:
			return "dynamic_list_item_overlay_tick_visible";
	
		case 99:
			return "dynamic_list_item_overlay_time_visible";
	
		case 100:
			return "dynamic_list_item_overlay_new_visible";
	
		default:
		
	}

	return "null";
}

BOOL func_197(int iParam0, int iParam1) // Position - 0x3D3D Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 01
{
	return iParam0 && iParam1 != false;
}

BOOL func_198(var uParam0) // Position - 0x3D4C Signature - 22 01 03 00 00 66 00 76 11
{
	return func_197(*uParam0, 2);
}

int func_199() // Position - 0x3D5C Signature - 22 00 03 00 00 03 01 00 33 8B 0B
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

void func_200(var uParam0, float fParam1) // Position - 0x3D7A Signature - 22 02 04 00 00 39 8B
{
	uParam0->f_1 = func_64() - fParam1;
	func_237(uParam0, 1);
	func_238(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

int func_201(Hash hParam0) // Position - 0x3DA0 Signature - 22 01 03 00 00 66 00 39 B2
{
	if (!func_220(hParam0))
		return 0;

	if (func_135(hParam0))
		return -1957466003;

	if (func_170(hParam0, -1457263561))
		return -84670860;

	if (func_170(hParam0, -732976331))
		return -700121520;

	if (func_170(hParam0, 1495098826))
		return 917298505;

	if (func_170(hParam0, 2088554948))
		return -1638586319;

	return 176863985;
}

BOOL func_202(int iParam0, char* sParam1, char* sParam2) // Position - 0x3E33 Signature - 22 03 05 00 00 66 00 3C
{
	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RDRO_Offer_Menu_Sounds", 128);
			TEXT_LABEL_ASSIGN_STRING(sParam2, "offer_redeem", 128);
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_203(int* piParam0, const char* sParam1, const char* sParam2) // Position - 0x3E5E Signature - 22 03 05 00 00 66 00 76
{
	if (!func_41(*piParam0, 0))
		return false;

	if (func_41(*piParam0, 1))
		return false;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return false;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		return false;

	func_21(piParam0, 1);
	TEXT_LABEL_ASSIGN_STRING(&(piParam0->f_1), sParam2, 128);
	TEXT_LABEL_ASSIGN_STRING(&(piParam0->f_17), sParam1, 128);
	AUDIO::_STOP_SOUND_WITH_NAME(&(piParam0->f_17), &(piParam0->f_1));
	return true;
}

void func_204(int iParam0) // Position - 0x3EC3 Signature - 22 01 03 00 00 08 66 00 32 2F 66 00 6C 01 2F
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_239(&(iParam0->f_4));
	return;
}

int func_205(BOOL bParam0) // Position - 0x3EE6 Signature - 22 01 03 00 00 39 AA
{
	if (func_240() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

int func_206() // Position - 0x3F27 Signature - 22 00 03 00 00 37
{
	int value;

	if (!NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, 135369362))
		return 604800;

	value = 604800;

	if (!NETWORK::NETWORK_ACCESS_TUNABLE_INT(-475019843, 135369362, &value))
		return 604800;

	return value;
}

const char* func_207(int iParam0) // Position - 0x3F6B Signature - 22 01 03 00 00 66 00 03 05 00 7E
{
	return MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iParam0), 0);
}

Hash func_208(Hash hParam0) // Position - 0x3F7E Signature - 22 01 03 00 00 66 00 50 01 01 22 02
{
	return hParam0;
}

BOOL func_209(Hash hParam0, Hash hParam1) // Position - 0x3F88 Signature - 22 02 04 00 00 66 00 11
{
	if (!func_241(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

int func_210(Hash hParam0, BOOL bParam1) // Position - 0x3FBE Signature - 22 02 05 00 00 66 00 11
{
	int num;

	if (!func_241(hParam0, 2))
		return 0;

	num = 0;

	if (num != 0 && bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
		return 0;

	return num;
}

BOOL func_211(int iParam0) // Position - 0x3FF7 Signature - 22 01 03 00 00 66 00 2F 13
{
	return iParam0 != 0;
}

BOOL func_212(int iParam0, int iParam1) // Position - 0x4004 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 03
{
	return iParam0 && iParam1 != false;
}

BOOL func_213(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x4013 Signature - 22 03 05 00 00 66 00 39 35
{
	if (!func_176(iParam0))
		return false;

	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, hParam1) == 0)
		return false;

	if (bParam2)
		return !func_233(iParam0, hParam1);

	return true;
}

BOOL func_214(int iParam0, var uParam1) // Position - 0x404B Signature - 22 02 04 00 00 66 00 09 39
{
	*uParam1 = func_242(iParam0, true);
	return *uParam1 != 0;
}

BOOL func_215(int iParam0, var uParam1) // Position - 0x4062 Signature - 22 02 04 00 00 66 00 09 2F
{
	*uParam1 = func_243(iParam0, true, false);
	return *uParam1 != 0;
}

BOOL func_216() // Position - 0x407A Signature - 22 00 02 00 00 5D 08
{
	return Global_1915656.f_22477;
}

BOOL func_217(int iParam0) // Position - 0x4089 Signature - 22 01 03 00 00 66 00 6D 22
{
	if (iParam0 == 34 && Global_1915656.f_22504.f_1)
		return true;

	if (func_244(true))
		if (Global_1915656.f_20241 == iParam0)
			return true;

	return false;
}

BOOL func_218(int* piParam0, Hash hParam1, var uParam2, BOOL bParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x40C4 Signature - 22 07 09
{
	if (!func_245(piParam0, false))
		return false;

	if (hParam4 == 0)
		hParam4 = func_178(hParam1, 0, true, iParam5, bParam6);

	if (!func_246(hParam1, hParam4, iParam5))
		return false;

	uParam2->f_17 = hParam1;
	uParam2->f_8 = hParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = hParam4;
	uParam2->f_12 = 1248274121;

	if (!func_247(piParam0, *uParam2, 541670136, bParam3))
		return false;

	if (COLLECTION::_0x9ADEE485726025D4(hParam1) != 0)
	{
		Global_1292143.f_20.f_422 != -1;
		Global_1292143.f_20.f_422.f_1 = hParam1;
		Global_1292143.f_20.f_422 = piParam0->f_1;
	}

	return true;
}

void func_219(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x416D Signature - 22 12 16
{
	int num;
	Hash hash;

	num = uParam0.f_17;
	hash = uParam0.f_13;

	if (func_248(num, joaat("currency_gold_bar"), hash, false, true) > 0)
		func_249("gold_spend", "Gold_Spend_Sounds", true);
	else
		AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);

	return;
}

BOOL func_220(Hash hParam0) // Position - 0x41B2 Signature - 22 01 03 00 00 66 00 39 0A 2F 00 37 8D FA 70 F8 0B 6A
{
	if (func_175(hParam0) == -126813555 || func_175(hParam0) == 1946043663)
		return true;

	return false;
}

struct<5> func_221(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x41E0 Signature - 22 03 2F 00 00 66
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_250(bParam1) };
	unk.f_4 = 1084182731;
	num = func_251(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_257(hParam0, -1823706425))
			{
				unk = { func_222(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_257(hParam0, -1483207246))
			{
				unk = { func_222(joaat("WARDROBE"), unk, 1034665895, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_222(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1311702610))
			{
				unk.f_4 = -1311702610;
			}
			else if (func_257(hParam0, -1653629781))
			{
				unk = { func_222(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -1591664384;
			unk = { func_256(bParam1) };
		
			switch (func_175(hParam0))
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
			unk = { func_222(joaat("WARDROBE"), unk, 1034665895, bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_252(bParam1) };
		
			if (iParam2 && func_253(hParam0, true))
			{
				unk6.f_9 = -1591664384;
			
				if (!func_254(hParam0, &unk, 1728382685, false, false))
					unk.f_4 = 1728382685;
				else if (!func_254(hParam0, &unk, -649335959, false, false))
					unk.f_4 = -649335959;
				else if (func_255(hParam0, &unk6, 1728382685))
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
			
				if (!func_114(unk, &unk28, bParam1, false, -1))
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
			else if (func_257(hParam0, -1653629781))
			{
				unk = { func_222(1384535894, unk, 1784584921, bParam1) };
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

struct<4> func_222(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x4554 Signature - 22 07 0D
{
	var outGuid;

	if (!func_109(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_205(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_223(Any* panParam0) // Position - 0x4585 Signature - 22 01 11
{
	var unk;

	if (!func_84(panParam0))
		return false;

	unk.f_9 = -1591664384;

	if (!func_114(*panParam0, &unk, true, false, -1))
		return false;

	if (!func_109(unk.f_4, 0))
		return false;

	return func_110(unk.f_4);
}

char* func_224(var uParam0) // Position - 0x45D6 Signature - 22 01 24
{
	var unk;
	Hash labelHash;
	var unk17;

	if (!func_109(*uParam0, 0))
		return "";

	if (!func_220(*uParam0))
		return "";

	TEXT_LABEL_ASSIGN_STRING(&unk, func_258(*uParam0), 128);
	labelHash = func_259(*uParam0);

	if (labelHash != 0)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk17, HUD::GET_STRING_FROM_HASH_KEY(labelHash), 128);
		return MISC::VAR_STRING(42, "HO_COMBINE_ITEM_NAME", &unk17, &unk);
	}

	return func_260(unk);
}

Hash func_225(Hash hParam0) // Position - 0x463D Signature - 22 01 03 00 00 66 00 2F 39 04 1E 00 05 8B 04 00 2F 50 01 01 66 00 03
{
	if (!func_109(hParam0, 0))
		return 0;

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_DESCRIPTION_HASH(hParam0);
}

int func_226(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x465A Signature - 22 04 08
{
	Hash hashKey;
	Hash hashKey2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
		return 0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(*uParam0))
		return 0;

	hashKey = MISC::GET_HASH_KEY(uParam0->f_1);
	hashKey2 = MISC::GET_HASH_KEY(*uParam0);

	if (!TXD::DOES_STREAMED_TXD_EXIST(hashKey))
		return 0;

	if (!bParam3)
		if (TXD::HAS_STREAMED_TXD_LOADED(hashKey))
			if (!GRAPHICS::_IS_TEXTURE_IN_DICT(hashKey, hashKey2))
				return 0;

	*uParam1 = hashKey;
	*uParam2 = hashKey2;
	return 1;
}

Hash func_227(Hash hParam0) // Position - 0x46CD Signature - 22 01 03 00 00 66 00 37 3A
{
	if (func_170(hParam0, 1620206138))
		return -1154934087;
	else if (func_170(hParam0, -72828678))
		return -1631515370;
	else if (func_170(hParam0, 1297546455))
		return 1569137347;
	else if (func_170(hParam0, -1220673473))
		return -2111141782;
	else if (func_170(hParam0, 456819275))
		return -1153255129;
	else if (func_170(hParam0, 1549117278))
		return 1013327879;

	return 0;
}

BOOL func_228(Hash hParam0) // Position - 0x4769 Signature - 22 01 04 00 00 66 00 39 CD
{
	Hash unlockHash;

	unlockHash = func_227(hParam0);

	if (unlockHash == 0)
		return false;

	return UNLOCK::UNLOCK_IS_VISIBLE(unlockHash);
}

int func_229(Hash hParam0) // Position - 0x478C Signature - 22 01 27 00 00 66 00 2F 39 04 1E 00 05 8B 04 00 2F 50 01 01 4B 03 6A 80 02 62 3D 41 6A 80 12 6D 08 3D 41 41 66 00 4B 03 03 09 00 69 8B 3C
{
	var unk;
	int i;

	if (!func_109(hParam0, 0))
		return 0;

	unk.f_2 = 5;
	unk.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &unk))
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (unk.f_18[i /*2*/].f_1 == 1646708583)
				if (unk.f_18[i /*2*/] != 0)
					return unk.f_18[i /*2*/];
		}
	}

	return 0;
}

char* func_230(int iParam0) // Position - 0x47FB Signature - 22 01 18 00 00 39 59 53 00 67 03 42
{
	int num;
	var unk5;

	num = func_261();
	num.f_2 = 4;
	num.f_3 = iParam0;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_STRING_127(&unk5, &num))
		return "";

	return func_260(unk5);
}

Any func_231() // Position - 0x482E Signature - 22 00 07
{
	int num;

	num = func_261();
	num.f_2 = 6;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&num);
}

Hash func_232(int iParam0) // Position - 0x4847 Signature - 22 01 09 00 00 39
{
	int num;
	Hash num2;

	num = func_261();
	num.f_2 = 7;
	num.f_3 = iParam0;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num2, &num))
		return 0;

	return num2;
}

BOOL func_233(int iParam0, Hash hParam1) // Position - 0x4872 Signature - 22 02 E0
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

char* func_234(int iParam0) // Position - 0x49BB Signature - 22 01 18 00 00 39 59 53 00 67 03 62
{
	int num;
	var unk5;

	num = func_261();
	num.f_2 = 5;
	num.f_3 = iParam0;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_STRING_127(&unk5, &num))
		return "";

	return func_260(unk5);
}

Hash func_235(Hash hParam0) // Position - 0x49EE Signature - 22 01 03 00 00 66 00 3C 0C
{
	switch (hParam0)
	{
		case joaat("voucher_offer_treasure_map_citadel_rock_free"):
			return joaat("document_abandoned_loot_map_citadel_rock");
	
		case joaat("voucher_offer_treasure_map_burned_town_free"):
			return joaat("document_abandoned_loot_map_burnt_town");
	
		case joaat("voucher_offer_treasure_map_san_luis_shore_free"):
			return joaat("document_abandoned_loot_map_san_luis_shore");
	
		case joaat("voucher_offer_treasure_map_north_tumbleweed_free"):
			return joaat("document_abandoned_loot_map_north_tumbleweed");
	
		case joaat("voucher_offer_treasure_map_north_clingman_free"):
			return joaat("document_abandoned_loot_map_north_clingman");
	
		case joaat("voucher_offer_treasure_map_ocreaghs_run_free"):
			return joaat("document_abandoned_loot_map_ocreaghs_run");
	
		case joaat("voucher_offer_treasure_map_bluewater_marsh_free"):
			return joaat("document_abandoned_loot_map_bluewater_marsh");
	
		case joaat("voucher_offer_treasure_map_calumet_ravine_free"):
			return joaat("document_abandoned_loot_map_calumet_ravine");
	
		case joaat("voucher_offer_treasure_map_west_hill_haven_free"):
			return joaat("document_abandoned_loot_map_west_hill_haven");
	
		case joaat("voucher_offer_treasure_map_north_ridgewood_free"):
			return joaat("document_abandoned_loot_map_north_ridgewood");
	
		case joaat("voucher_offer_treasure_map_lake_isabella_free"):
			return joaat("document_abandoned_loot_map_lake_isabella");
	
		case joaat("voucher_offer_treasure_map_civil_war_battlefield_free"):
			return joaat("document_abandoned_loot_map_civil_war_field");
	
		default:
		
	}

	return 0;
}

BOOL func_236(Hash hParam0, int iParam1) // Position - 0x4AA7 Signature - 22 02 05 00 00 66 00 2F 39 04 1E 00 05 8B 04 00 2F 50 02 01 66 00 39
{
	int num;

	if (!func_109(hParam0, 0))
		return false;

	num = func_251(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_263(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_262(hParam0, 1))
				return false;
			break;
	}

	return func_264(hParam0, false, false, false) >= iParam1;
}

void func_237(var uParam0, int iParam1) // Position - 0x4B2A Signature - 22 02 04 00 00 66 00 76 66 01 30
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_238(var uParam0, int iParam1) // Position - 0x4B3B Signature - 22 02 04 00 00 66 00 76 66 00
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_239(var uParam0) // Position - 0x4B50 Signature - 22 01 03 00 00 2F 66 00 32 2F 66 00 6C 01 2F 66 00 6C 02 2F
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
	return;
}

int func_240() // Position - 0x4BAA Signature - 22 00 02 00 00 5D 17
{
	return Global_1572887.f_14;
}

BOOL func_241(Hash hParam0, int iParam1) // Position - 0x4BB8 Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 99
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

Hash func_242(int iParam0, BOOL bParam1) // Position - 0x4BD2 Signature - 22 02 27
{
	int i;
	int num;
	var unk;
	Hash hash;
	int j;

	unk = 15;

	for (i = 0; i < 3; i = i + 1)
	{
		hash = func_265(i, true, false);
	
		if (!func_266(iParam0, hash, &unk, &num, false, true))
		{
		}
		else
		{
			for (j = 0; j < num; j = j + 1)
			{
				if (func_130(unk[j /*2*/]))
				{
					if (!bParam1 || func_264(unk[j /*2*/], false, true, true) > 0)
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

Hash func_243(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4C65 Signature - 22 03 2F 00 00 4B
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
		hash3 = func_265(i, false, true);
	
		if (!func_266(iParam0, hash3, &unk3, &num, false, true))
		{
		}
		else
		{
			flag3 = false;
			hash2 = 0;
		
			for (j = 0; j < num; j = j + 1)
			{
				if (func_135(unk3[j /*2*/]))
				{
					if (!bParam1 || func_264(unk3[j /*2*/], false, true, true) > 0)
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

BOOL func_244(BOOL bParam0) // Position - 0x4DC4 Signature - 22 01 03 00 00 66 00 8B 0D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

BOOL func_245(int* piParam0, BOOL bParam1) // Position - 0x4DF4 Signature - 22 02 04 00 00 66 01 05
{
	if (!bParam1)
		if (func_267(piParam0))
			return false;

	if (func_268(&(piParam0->f_6)))
		if (NETWORK::_0xE10F2D7715ABABEC(&(piParam0->f_6)))
			return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(2113164098))
		return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("Sell")))
		return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("UPDATE")))
		return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("use")))
		return false;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return false;

	if (NETSHOPPING::CASHINVENTORY_IS_CONNECTION_FAULTED())
		return false;

	if (NETSHOPPING::_CASHINVENTORY_INIT_SESSION_IS_FAULTED())
		return false;

	return true;
}

BOOL func_246(int iParam0, Hash hParam1, int iParam2) // Position - 0x4E90 Signature - 22 03 05 00 00 66 00 2F
{
	if (iParam0 == 0)
		return false;

	if (!func_213(iParam0, hParam1, false))
		return false;

	if (func_212(iParam2, 2))
		if (func_233(iParam0, hParam1))
			return false;

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(iParam0))
		return false;

	if (func_212(iParam2, 8))
		return func_269(iParam0, hParam1);

	return true;
}

BOOL func_247(int* piParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, Hash hParam19, BOOL bParam20) // Position - 0x4EF0 Signature - 22 15
{
	if (hParam19 != 541670136)
		return false;

	if (!func_270(uParam1))
		return false;

	if (!func_271(piParam0, hParam19))
		return false;

	if (func_272(*piParam0, hParam19, &uParam1))
	{
	}
	else
	{
		return false;
	}

	return func_273(piParam0, bParam20);
}

int func_248(int iParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4F44 Signature - 22 05 28
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_266(iParam0, hParam2, &unk, &num, bParam3, bParam4))
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

void func_249(char* sParam0, char* sParam1, BOOL bParam2) // Position - 0x4FB0 Signature - 22 03 06 00 00 03
{
	int soundId;

	soundId = AUDIO::GET_SOUND_ID();

	if (soundId != -1)
	{
		AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(soundId, sParam0, sParam1, bParam2);
		Global_1958642[Global_1958642.f_25] = soundId;
		Global_1958642.f_25 = (Global_1958642.f_25 + 1) % 24;
	}

	return;
}

struct<4> func_250(BOOL bParam0) // Position - 0x4FEF Signature - 22 01 04 00 00 5D
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_205(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_222(joaat("character"), func_274(), -1591664384, bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_222(joaat("character"), func_274(), -1591664384, false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_222(joaat("character"), func_274(), -1591664384, bParam0);
}

int func_251(Hash hParam0) // Position - 0x508F Signature - 22 01 0A 00 00 66 00 2F 39 04 1E 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 85 05 8B 04 00 2F 50 01 01 4B 03 27 02
{
	var unk;

	if (!func_109(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_2;
}

struct<4> func_252(BOOL bParam0) // Position - 0x50BA Signature - 22 01 04 00 00 66 00 39 E6 3E 00 67 03 66 03 11 15
{
	int num;

	num = func_205(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_222(923904168, func_250(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_222(923904168, func_250(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_222(923904168, func_250(bParam0), -740156546, false);
}

int func_253(Hash hParam0, BOOL bParam1) // Position - 0x515B Signature - 22 02 04 00 00 66 00 39 0A
{
	if (func_175(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_275();
		else
			return 1;

	return 0;
}

BOOL func_254(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5192 Signature - 22 05 07 00 00 66 00 42
{
	return func_276(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_255(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x51AD Signature - 22 03 09
{
	var unk;

	if (func_277(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_256(BOOL bParam0) // Position - 0x51CE Signature - 22 01 04 00 00 66 00 39 E6 3E 00 67 03 66 03 11 0B
{
	int num;

	num = func_205(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_222(271701509, func_250(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_222(271701509, func_250(bParam0), 12999093, false);
}

BOOL func_257(Hash hParam0, int iParam1) // Position - 0x5238 Signature - 22 02 08 00 00 66 00
{
	Hash hash;
	int num;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || iParam1 == 0)
		return false;

	num = func_175(hParam0);

	if (num == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(num);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(num, i, &hash))
			if (func_278(hParam0, iParam1, hash))
				return true;
	}

	return false;
}

char* func_258(Hash hParam0) // Position - 0x52A5 Signature - 22 01 04 00 00 66 00 2F 39 04 1E 00 05 8B 05
{
	Hash labelHash;

	if (!func_109(hParam0, 0))
		return "";

	labelHash = func_279(hParam0, false);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

Hash func_259(Hash hParam0) // Position - 0x52D7 Signature - 22 01 27 00 00 66 00 2F 39 04 1E 00 05 8B 04 00 2F 50 01 01 4B 03 6A 80 02 62 3D 41 6A 80 12 6D 08 3D 41 41 66 00 4B 03 03 09 00 69 8B 3B
{
	var unk;
	int i;

	if (!func_109(hParam0, 0))
		return 0;

	unk.f_2 = 5;
	unk.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &unk))
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (unk.f_18[i /*2*/].f_1 == 14460646)
				if (unk.f_18[i /*2*/] != 0)
					return unk.f_18[i /*2*/];
		}
	}

	return 0;
}

char* func_260(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x5345 Signature - 22 10
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_261() // Position - 0x5359 Signature - 22 00 02 00 00 6D
{
	return Global_1072759.f_28418[55 /*4*/].f_3;
}

BOOL func_262(Hash hParam0, int iParam1) // Position - 0x536E Signature - 22 02 16 00 00 66 00
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_109(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_280(hParam0, iParam1);
	unk.f_9 = -1591664384;

	if (func_281("ALL WEAPONS", &num, &num2, -1591664384, false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_282(&unk, i, num, num2))
			{
			}
			else if (!func_283(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_284(num);
				return true;
			}
		}
	
		func_284(num);
	}

	return false;
}

BOOL func_263(Hash hParam0) // Position - 0x5416 Signature - 22 01 06 00 00 66
{
	int num;
	int num2;
	int num3;

	if (!func_109(hParam0, 0))
		return false;

	num = func_175(hParam0);

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

	num2 = func_285(hParam0);

	if (!(num2 == 0))
	{
		num3 = func_286(&(Global_17418.f_55.f_664.f_1354.f_5), num2);
	
		if (num3 == -1)
			return true;
	}

	num2 = func_287(hParam0);
	num3 = func_286(&(Global_17418.f_55.f_664.f_1354.f_5), num2);

	if (num3 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num3 /*17*/];
}

int func_264(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x54D2 Signature - 22 04 0D
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_109(hParam0, 0))
		return 0;

	num = func_251(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_280(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_288(hParam0, false);
	}

	if (func_289(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_205(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_290(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_205(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

Hash func_265(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5594 Signature - 22 03 06 00 00 2F
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

// Unhandled jump detected. Output should be considered invalid
BOOL func_266(int iParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x5630 Signature - 22 06 09
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_176(iParam0))
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
		func_291(iParam0, hParam1, uParam2, *uParam3);

	return true;
}

BOOL func_267(int* piParam0) // Position - 0x56BF Signature - 22 01 04 00 00 66 00 27
{
	int num;

	if (piParam0->f_1 == -1)
		return false;

	num = func_292(piParam0);

	if (num == 1 || num == 5)
		return true;

	return false;
}

BOOL func_268(var uParam0) // Position - 0x56F1 Signature - 22 01 03 00 00 66 00 76 2F 0B 6A 8B 17
{
	if (*uParam0 == 0 && uParam0->f_1 == 0 || uParam0->f_1 == -889271554 && uParam0->f_2 == 0 && uParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_269(int iParam0, Hash hParam1) // Position - 0x5737 Signature - 22 02 08 00 00 66 01
{
	int num;
	int num2;
	var unk;

	if (hParam1 == -570078785)
	{
		num = func_293(iParam0, -570078785, false, true);
		num == 0;
	
		if (!func_294(num))
		{
			if (Global_1915656.f_20644)
				func_296(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_295(num)));
		
			return 0;
		}
	}
	else if (hParam1 == -915411861)
	{
		num2 = func_293(iParam0, -915411861, false, true);
		num2 == 0;
	
		if (!func_297(num2))
		{
			if (Global_1915656.f_20644)
				func_296("SHOP_H_TOO_POOR");
		
			return 0;
		}
	}
	else if (hParam1 == 997808187)
	{
		return 1;
	}

	if (!func_298(iParam0, hParam1, &unk, true, false))
		return 0;

	return 1;
}

BOOL func_270(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x57F1 Signature - 22 12 14
{
	if (!func_176(uParam0.f_17))
		return false;

	return true;
}

BOOL func_271(int* piParam0, Hash hParam1) // Position - 0x580A Signature - 22 02 05 00 00 66 00 76
{
	Hash action;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
		if (!func_299(piParam0, hParam1))
			return false;

	action = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*piParam0);

	if (action != hParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0) >= 50)
	{
		if (!func_183(piParam0))
			return false;
	
		if (!func_299(piParam0, hParam1))
			return false;
	}

	return true;
}

BOOL func_272(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x586D Signature - 22 03 05 00 00 66 00 66
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

BOOL func_273(int* piParam0, BOOL bParam1) // Position - 0x5884 Signature - 22 02 04 00 00 66 00 27
{
	piParam0->f_2 = piParam0->f_2 + 1;

	if (bParam1)
		return func_183(piParam0);

	return true;
}

struct<4> func_274() // Position - 0x58A5 Signature - 22 00 06
{
	var unk;

	return unk;
}

int func_275() // Position - 0x58B1 Signature - 22 00 02 00 00 37 20
{
	if (func_300(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_276(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x58CE Signature - 22 09 10
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_109(hParam0, 0))
		return 0;

	if (!bParam7 && func_289(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_222(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_205(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_205(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_277(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x594D Signature - 22 04 07 00 00 2F
{
	int inventoryId;

	inventoryId = func_205(false);
	*panParam1 = { func_222(hParam0, func_252(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_278(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x5992 Signature - 22 03 05 00 00 66 02 37
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, iParam1, hParam2);
}

Hash func_279(Hash hParam0, BOOL bParam1) // Position - 0x59C5 Signature - 22 02 05 00 00 66 00 2F 39 04 1E 00 05 8B 04 00 2F 50 02 01 66 00 66
{
	Hash hash;

	if (!func_109(hParam0, 0))
		return 0;

	hash = func_301(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

Hash func_280(Hash hParam0, int iParam1) // Position - 0x59F3 Signature - 22 02 07 00 00 66 00 2F
{
	int num;
	var unk;
	Hash hash;

	if (!func_109(hParam0, 0))
		return 0;

	num = func_251(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_170(hParam0, 1399091007))
	{
		func_302(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_281(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x5A6D Signature - 22 05 07 00 00 66 04
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_205(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_282(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x5A94 Signature - 22 04 06 00 00 66 02
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_283(Hash hParam0) // Position - 0x5ACF Signature - 22 01 03 00 00 66 00 03 05 00 77
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_284(int iParam0) // Position - 0x5AEA Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 03
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_285(Hash hParam0) // Position - 0x5B0B Signature - 22 01 03 00 00 66 00 3C 0F
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

int func_286(var uParam0, int iParam1) // Position - 0x5BEE Signature - 22 02 05 00 00 2F
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

int func_287(Hash hParam0) // Position - 0x5C2B Signature - 22 01 04 00 00 66 00 39 0A
{
	int num;

	num = func_175(hParam0);

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

int func_288(Hash hParam0, BOOL bParam1) // Position - 0x5C98 Signature - 22 02 18 00 00 66 00
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_303(hParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };

	if (bParam1)
		func_304(&unk, func_252(false));

	if (!func_305(&unk, &num, &num2, false))
		return 0;

	func_284(num);
	return num2;
}

int func_289(Hash hParam0, int iParam1) // Position - 0x5CF7 Signature - 22 02 04 00 00 66 01 2F 15
{
	if (iParam1 == 0)
		return 0;

	if (func_241(func_208(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, iParam1);
}

struct<4> func_290(Hash hParam0, BOOL bParam1) // Position - 0x5D23 Signature - 22 02 09
{
	var unk;

	unk = { func_221(hParam0, bParam1, 0) };
	return func_222(hParam0, unk, unk.f_4, bParam1);
}

void func_291(int iParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x5D48 Signature - 22 04 2B
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
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_175(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

int func_292(int* piParam0) // Position - 0x5F1E Signature - 22 01 03 00 00 66 00 27 01 39
{
	return func_65(piParam0->f_1);
}

int func_293(int iParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5F2E Signature - 22 04 27
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_266(iParam0, hParam1, &unk, &num, bParam2, bParam3))
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

BOOL func_294(int iParam0) // Position - 0x5FC2 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 2F 15 04 00 09 50 01 01 2F
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

int func_295(int iParam0) // Position - 0x5FE5 Signature - 22 01 03 00 00 66 00 6D 64
{
	return iParam0 / 100;
}

void func_296(const char* sParam0) // Position - 0x5FF2 Signature - 22 01 03 00 00 66 00 25
{
	Global_1915656.f_22470 = func_306(sParam0, 10000, 0, 0, 0, true);
	return;
}

BOOL func_297(int iParam0) // Position - 0x600E Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 39
{
	if (iParam0 < 0)
		return false;

	if (func_240() == 0)
		return func_307(iParam0);

	return iParam0 <= func_308();
}

BOOL func_298(int iParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x603B Signature - 22 05 2B
{
	var unk;
	int num;
	int i;
	int num2;
	int num3;
	int num4;

	unk = 15;

	if (!func_266(iParam0, hParam1, &unk, &num, false, true))
		return false;

	num3 = -1;

	if (Global_1915656.f_20638)
		num3 = Global_1915656.f_20241;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0)
			break;
	
		if (unk[i /*2*/] == joaat("currency_cash"))
		{
			if (!bParam4 && !func_297(unk[i /*2*/].f_1))
				return false;
		}
		else if (unk[i /*2*/] == joaat("currency_gold_bar"))
		{
			if (!bParam4 && !func_294(unk[i /*2*/].f_1))
				return false;
		}
		else
		{
			num2 = func_309(num3, unk[i /*2*/]);
		
			if (num2 != 0)
				num4 = func_310(unk[i /*2*/], num2);
			else
				num4 = func_264(unk[i /*2*/], false, bParam3, true);
		
			if (num4 < unk[i /*2*/].f_1)
			{
				*uParam2 = { unk[i /*2*/] };
				return false;
			}
		}
	}

	return true;
}

BOOL func_299(int* piParam0, Hash hParam1) // Position - 0x6142 Signature - 22 02 04 00 00 66 00 37
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(piParam0, joaat("basket"), hParam1))
		return false;

	return true;
}

int func_300(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6160 Signature - 22 04 06 00 00 66 00
{
	if (func_311(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_205(bParam1), hParam0, bParam3);
}

Hash func_301(Hash hParam0, BOOL bParam1) // Position - 0x6193 Signature - 22 02 04 00 00 66 00 3C 07
{
	switch (hParam0)
	{
		case joaat("kit_pouch_kit"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
	
		case joaat("kit_pouch_valuables"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
	
		case joaat("kit_pouch_provisions"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	
		case joaat("kit_pouch_remedies"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
	
		case 239629152:
			if (bParam1)
				return MISC::GET_HASH_KEY("DOCUMENT_BOUNTY_HUNTER_LICENSE_UPGRADE_01_SHORT");
			break;
	
		case joaat("kit_pouch_materials"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
	
		case joaat("kit_pouch_ingredients"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
	}

	return 0;
}

void func_302(Hash hParam0, var uParam1, var uParam2) // Position - 0x6235 Signature - 22 03 05 00 00 2F
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

struct<18> func_303(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x6441 Signature - 22 07 1B
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

void func_304(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x651F Signature - 22 05 07 00 00 4B
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_305(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x653A Signature - 22 04 06 00 00 66 03
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_205(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_306(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x655F Signature - 22 06 18
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

BOOL func_307(int iParam0) // Position - 0x659A Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 2F 15 04 00 09 50 01 01 66
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_308() // Position - 0x65BD Signature - 22 00 02 00 00 39
{
	if (func_240() == 0)
		return MONEY::_NETWORK_GET_CASH_BALANCE();

	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_309(int iParam0, Hash hParam1) // Position - 0x65D8 Signature - 22 02 04 00 00 66 00 6D
{
	if (iParam0 == 15 && func_170(hParam1, -2051813666))
		return 1;

	return 0;
}

int func_310(Hash hParam0, int iParam1) // Position - 0x65FD Signature - 22 02 0E
{
	var unk;
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_109(hParam0, 0))
		return 0;

	unk = { func_250(false) };
	unk.f_4 = func_312(iParam1);
	guid = { func_222(hParam0, unk, unk.f_4, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_205(false), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_311(Hash hParam0) // Position - 0x6658 Signature - 22 01 03 00 00 66 00 03 05 00 5E
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

int func_312(int iParam0) // Position - 0x6666 Signature - 22 01 03 00 00 66 00 3C 02
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
	
		case 1:
			return -1360128126;
	
		default:
		
	}

	return 1084182731;
}

