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
	var uLocal_18 = 0;
	float fLocal_19 = 0f;
	float fLocal_20 = 0f;
	int iLocal_21 = 0;
	AnimScene ansLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 10;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = -1;
	var uLocal_32 = 2;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 10;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 2;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 10;
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
	var uLocal_60 = 10;
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
	var uLocal_91 = 10;
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
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 3;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 10;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 10;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	AnimScene ansLocal_188 = 0;
	var uLocal_189 = 1065353216;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	BOOL bLocal_193 = 0;
	BOOL bLocal_194 = 0;
	BOOL bLocal_195 = 0;
	BOOL bLocal_196 = 0;
	var uLocal_197 = 2;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 2;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	char* sLocal_203 = 0;
	int iLocal_204 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 09 4E
{
	bLocal_13 = 1;
	fLocal_19 = 1f;
	fLocal_20 = 1f;
	ansLocal_22 = -1;
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

void func_1() // Position - 0x5F Signature - 22 00 02 00 00 50 00 00 22 00 02
{
	return;
}

void func_2() // Position - 0x67 Signature - 22 00 02 00 00 39 25
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(anLocal_15);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_8();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3() // Position - 0x8C Signature - 22 00 02 00 00 54
{
	if (hLocal_14 != 0)
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hLocal_14) == 0)
			return bLocal_13;
		else
			return true;

	return bLocal_13;
}

void func_4() // Position - 0xB5 Signature - 22 00 02 00 00 50 00 00 22 00 03
{
	return;
}

void func_5() // Position - 0xBD Signature - 22 00 03 00 00 2F
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

void func_6() // Position - 0x115 Signature - 22 00 03 00 00 70
{
	int i;

	if (PED::IS_PED_INJURED(Global_33))
	{
		bLocal_13 = false;
		return;
	}

	if (!bLocal_196 && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1))
		bLocal_196 = true;

	sLocal_203 = "scenario@MECH@PLAYER_OPEN_MISCCHEST@EXIT";

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_23.f_5))
	{
		bLocal_193 = true;
		uLocal_23.f_6 = uLocal_16;
		uLocal_23.f_5 = func_12();
	}

	switch (iLocal_204)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_23.f_5))
			{
				func_13(&uLocal_23);
				func_14(uLocal_23.f_5);
				uLocal_23.f_3 = !func_15(uLocal_23.f_5);
				uLocal_23.f_1 = ENTITY::GET_ENTITY_MODEL(uLocal_23.f_5);
				ansLocal_188.f_2 = 0.122f;
				ansLocal_188.f_1 = 0.736f;
				func_16(&uLocal_23);
				uLocal_23.f_12[0] = func_17();
			
				if (uLocal_23.f_12[0] == 0)
				{
					iLocal_204 = 3;
				}
				else
				{
					uLocal_23.f_12[1] = func_18();
					func_19();
					iLocal_204 = 1;
				}
			}
			break;
	
		case 1:
			if (uLocal_23.f_12[1] == 0)
			{
				if (ansLocal_22 < 0)
				{
					ansLocal_22 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_203, 0, 0, false, true);
					ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_22);
				}
			}
		
			if (bLocal_193)
			{
				for (i = 0; i < 2; i = i + 1)
				{
					func_21(&uLocal_197[i], &uLocal_23, i, &uLocal_200[i], func_20(i), false, true, true, false);
				}
			}
		
			if (uLocal_197[0] >= 2 && uLocal_197[1] >= 2)
				iLocal_204 = 2;
			break;
	
		case 2:
			if (bLocal_193)
			{
				for (i = 0; i < 2; i = i + 1)
				{
					func_21(&uLocal_197[i], &uLocal_23, i, &uLocal_200[i], func_20(i), false, true, false, false);
				}
			}
		
			if (uLocal_197[0] == 4 && uLocal_197[1] == 4)
				iLocal_204 = 3;
			break;
	
		case 3:
			break;
	}

	if (!bLocal_194 && ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_188))
		func_22(&ansLocal_188, &bLocal_195, &bLocal_194);

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1755159785))
	{
		if (!bLocal_195)
		{
			ansLocal_188 = TASK::_0x2C497BDEF897C6DF(Global_33);
			bLocal_195 = true;
		}
	}

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 2072536589))
		if (iLocal_21 == 0)
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_200[0]))
				AUDIO::_0xC886CD666ADD42E1(Global_33, uLocal_23.f_26[0]);
		else if (iLocal_21 == 1)
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_200[1]))
				AUDIO::_0xC886CD666ADD42E1(Global_33, uLocal_23.f_26[1]);

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("objectexchange")))
	{
		iLocal_21 = iLocal_21 + 1;
	
		if (iLocal_21 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_200[0]))
			{
				func_23(uLocal_200[0], false, true);
				OBJECT::DELETE_OBJECT(&uLocal_200[0]);
				func_24(&(uLocal_23.f_23), 2, false, 752097756);
			}
		}
		else if (iLocal_21 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_200[1]))
			{
				func_23(uLocal_200[1], false, true);
				OBJECT::DELETE_OBJECT(&uLocal_200[1]);
				func_24(&(uLocal_23.f_26), 10, false, 752097756);
			}
		
			bLocal_194 = true;
		}
	}

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 266921527))
	{
		if (uLocal_23.f_12[1] == 0)
		{
			TASK::_0xD999E379265A4501(Global_33, sLocal_203, 0);
			TASK::CLEAR_PED_TASKS(Global_33, true, false);
			bLocal_194 = true;
		}
	}

	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
		bLocal_13 = false;
		bLocal_194 = true;
	}

	return;
}

void func_7() // Position - 0x425 Signature - 22 00 03 00 00 89 17 27
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_23.f_5))
		if (bLocal_196)
			if (!func_25(uLocal_23.f_5))
				func_26(uLocal_23.f_5);
		else
			func_27(&uLocal_23);

	for (i = 0; i < 2; i = i + 1)
	{
		func_28(&uLocal_200[i], bLocal_196);
	}

	return;
}

void func_8() // Position - 0x478 Signature - 22 00 02 00 00 03 00
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x484 Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 42 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 2C 4B 03 39 F9
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_29(&eventData);
	}

	return;
}

void func_10(int iParam0) // Position - 0x4AC Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 42 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 2C 4B 03 39 01
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_30(&eventData);
	}

	return;
}

void func_11(int iParam0) // Position - 0x4D4 Signature - 22 01 05 00 00 11 66 00 4B 03 11 03 11 00 42 41 66 03 54 0F 15 0E 00 11 66 00 09 03 0C 00 2C 4B 03 39 09
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_31(&eventData);
	}

	return;
}

Entity func_12() // Position - 0x4FC Signature - 22 00 04
{
	Entity scenarioPointEntity;
	int scenarioPointPedIsUsing;

	scenarioPointEntity = 0;

	if (!PED::IS_PED_INJURED(Global_33))
	{
		scenarioPointPedIsUsing = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_33, false);
	
		if (TASK::DOES_SCENARIO_POINT_EXIST(scenarioPointPedIsUsing))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(scenarioPointEntity))
				scenarioPointEntity = TASK::_GET_SCENARIO_POINT_ENTITY(scenarioPointPedIsUsing);
		
			if (!ENTITY::DOES_ENTITY_EXIST(scenarioPointEntity))
				scenarioPointEntity = TASK::GET_PROP_FOR_SCENARIO_POINT(scenarioPointPedIsUsing, "PROP");
		
			if (!ENTITY::DOES_ENTITY_EXIST(scenarioPointEntity))
				scenarioPointEntity = PED::_GET_PED_REGISTER_PROP(Global_33, "PROP", true);
		}
	}

	return scenarioPointEntity;
}

void func_13(var uParam0) // Position - 0x565 Signature - 22 01 04 00 00 2F
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		uParam0->f_103[i /*5*/] = -1;
		uParam0->f_103[i /*5*/].f_3 = 0;
		uParam0->f_103[i /*5*/].f_1 = 0;
		uParam0->f_103[i /*5*/].f_2 = 0f;
		uParam0->f_103[i /*5*/].f_4 = 0;
		uParam0->f_154[i] = -1;
	}

	return;
}

void func_14(Entity eParam0) // Position - 0x5BE Signature - 22 01 0E
{
	int num;
	int value;

	num = OBJECT::_0x250EBB11E81A10BE(eParam0);

	if (num == 0)
		return;

	if (func_32(OBJECT::_0x2BF1953C0C21AC88(num), 1))
	{
		DECORATOR::DECOR_SET_BOOL(eParam0, "loot_empty", true);
		return;
	}

	OBJECT::_0x7D4411D6736CD295(num, &value);

	if (value > 0)
		DECORATOR::DECOR_SET_INT(eParam0, "loot_money", value);

	if (value.f_2 > 0)
	{
		DECORATOR::DECOR_SET_INT(eParam0, "loot_ammo1_type", value.f_1);
		DECORATOR::DECOR_SET_INT(eParam0, "loot_ammo1_amt", value.f_2);
	}

	if (value.f_4 > 0)
	{
		DECORATOR::DECOR_SET_INT(eParam0, "loot_ammo2_type", value.f_3);
		DECORATOR::DECOR_SET_INT(eParam0, "loot_ammo2_amt", value.f_4);
	}

	if (value.f_6 > 0)
	{
		DECORATOR::DECOR_SET_INT(eParam0, "loot_ammo3_type", value.f_5);
		DECORATOR::DECOR_SET_INT(eParam0, "loot_ammo3_amt", value.f_6);
	}

	if (value.f_8 > 0)
	{
		DECORATOR::DECOR_SET_INT(eParam0, "loot_item_type1", value.f_7);
		DECORATOR::DECOR_SET_INT(eParam0, "loot_item_amt1", value.f_8);
	}

	if (value.f_9 != 0)
		DECORATOR::DECOR_SET_INT(eParam0, "loot_weapon", value.f_9);

	return;
}

BOOL func_15(Entity eParam0) // Position - 0x6B4 Signature - 22 01 03 00 00 66 00 6D 2E
{
	if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_empty") || DECORATOR::DECOR_EXIST_ON(eParam0, "loot_money") || DECORATOR::DECOR_EXIST_ON(eParam0, "fLoot_money") || DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_type1") || DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_type2") || DECORATOR::DECOR_EXIST_ON(eParam0, "loot_ammo1_type") || DECORATOR::DECOR_EXIST_ON(eParam0, "loot_ammo2_type") || DECORATOR::DECOR_EXIST_ON(eParam0, "loot_ammo3_type") || DECORATOR::DECOR_EXIST_ON(eParam0, "loot_weapon") || DECORATOR::DECOR_EXIST_ON(eParam0, "loot_capitale"))
		return false;

	return true;
}

void func_16(var uParam0) // Position - 0x754 Signature - 22 01 1D
{
	int num;
	int i;
	Hash hash;
	int amount;

	if (uParam0->f_3 && func_33(uParam0->f_5))
		return;

	num.f_1 = 10;
	num.f_12 = 10;

	if (!func_34(uParam0->f_5))
		MISC::_LOOT_TABLES_GET_INFO(*uParam0, true, true, uParam0->f_1, &num, 0);

	if (num <= 0 && !uParam0->f_3)
		return;

	if (uParam0->f_3)
		func_35(uParam0, &num, 10);

	if (uParam0->f_2 > 10)
		uParam0->f_2 = 10;

	for (i = 0; i < uParam0->f_2; i = i + 1)
	{
		uParam0->f_26[i] = num.f_1[i];
	
		if (uParam0->f_103[i /*5*/].f_4 != 0)
		{
			uParam0->f_12[i] = uParam0->f_103[i /*5*/].f_4;
			amount = amount + 1;
		}
		else
		{
			hash = TASK::_FIND_MODEL_FOR_ITEM(num.f_1[i]);
		
			if (hash == 0 && uParam0->f_26[i] != 0)
			{
				uParam0->f_12[i] = joaat("scriptedball");
			}
			else
			{
				uParam0->f_12[i] = hash;
				amount = amount + 1;
			}
		}
	}

	if (amount > 0)
		NETWORK::RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(amount);

	return;
}

int func_17() // Position - 0x872 Signature - 22 00 03 00 00 89 17 80
{
	int num;

	if (func_36(&(uLocal_23.f_6)))
		num = func_37(uLocal_23, &uLocal_23.f_26[0]);
	else
		num = func_38(&uLocal_23, &uLocal_23.f_26[0], 0);

	return num;
}

int func_18() // Position - 0x8AC Signature - 22 00 03 00 00 89 17 09
{
	int num;

	num = func_38(&uLocal_23, &uLocal_23.f_26[1], 1);
	return num;
}

void func_19() // Position - 0x8C6 Signature - 22 00 02 00 00 86
{
	uLocal_23.f_37[0 /*3*/] = { -0.0131f, 0.052f, 0.0977f };
	uLocal_23.f_68[0 /*3*/] = { 0f, 0f, -12.264f };
	uLocal_23.f_37[1 /*3*/] = { 0.1751f, -0.0163f, 0.1059f };
	uLocal_23.f_68[1 /*3*/] = { 0f, 0f, -52.573795f };
	return;
}

char* func_20(int iParam0) // Position - 0x91E Signature - 22 01 03 00 00 66 00 3C 02
{
	switch (iParam0)
	{
		case 0:
			return "OBJECT1";
	
		case 1:
			return "OBJECT2";
	
		default:
		
	}

	return "";
}

void func_21(var uParam0, var uParam1, int iParam2, var uParam3, char* sParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x94A Signature - 22 09 13
{
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	Vector3 worldPositionOfEntityBone;
	int boneIndex;
	int num;

	switch (*uParam0)
	{
		case 0:
			if (uParam1->f_12[iParam2] != 0)
			{
				STREAMING::REQUEST_MODEL(uParam1->f_12[iParam2], false);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 4;
			}
			break;
	
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(uParam1->f_12[iParam2]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5))
				{
					if (uParam1->f_154[iParam2] != -1)
					{
						worldPositionOfEntityBone = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam1->f_5, uParam1->f_154[iParam2]) };
						offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(worldPositionOfEntityBone, ENTITY::GET_ENTITY_HEADING(uParam1->f_5), uParam1->f_37[iParam2 /*3*/]) };
					}
					else
					{
						offsetFromCoordAndHeadingInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_5, uParam1->f_37[iParam2 /*3*/]) };
					}
				}
				else if (TASK::DOES_SCENARIO_POINT_EXIST(uParam1->f_6))
				{
					offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(uParam1->f_6, true), TASK::_GET_SCENARIO_POINT_HEADING(uParam1->f_6, true), uParam1->f_37[iParam2 /*3*/]) };
				}
				else
				{
					break;
				}
			
				*uParam3 = OBJECT::CREATE_OBJECT(uParam1->f_12[iParam2], offsetFromCoordAndHeadingInWorldCoords, func_39(&(uParam1->f_5)), true, false, false, bParam5);
				func_40(uParam1, uParam3, uParam1->f_12[iParam2], uParam1->f_26[iParam2]);
				ENTITY::SET_ENTITY_INVINCIBLE(*uParam3, true);
				OBJECT::_MAKE_ITEM_CARRIABLE(*uParam3);
			
				if (bParam6)
				{
					boneIndex = uParam1->f_4 ? uParam1->f_154[iParam2] : 0;
					offsetFromCoordAndHeadingInWorldCoords = { func_42(uParam1->f_4, uParam1->f_37[iParam2 /*3*/], ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam1->f_5, offsetFromCoordAndHeadingInWorldCoords)) };
					ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam3, uParam1->f_5, boneIndex, offsetFromCoordAndHeadingInWorldCoords, uParam1->f_68[iParam2 /*3*/], false, false, false, false, 2, true, false, false);
				}
				else
				{
					ENTITY::SET_ENTITY_ROTATION(*uParam3, uParam1->f_68[iParam2 /*3*/], 2, true);
				}
			
				*uParam0 = 2;
			}
			else if (bParam8)
			{
			}
			break;
	
		case 2:
			if (!bParam7)
			{
				if (uParam1->f_26[iParam2] != 0)
					num = 3;
				else
					num = 4;
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					*uParam0 = num;
				else if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
					*uParam0 = num;
				else if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam1->f_6))
					*uParam0 = num;
				else if (TASK::_ASSOCIATE_PROP_WITH_SCENARIO(uParam1->f_6, *uParam3, sParam4, true))
					*uParam0 = num;
				else if (bParam8)
					*uParam0 = num;
			}
			break;
	
		case 3:
			if (uParam1->f_26[iParam2] != 0)
			{
				TASK::_0xA6A76D666A281F2D(*uParam3, uParam1->f_26[iParam2]);
				*uParam0 = 4;
			}
			break;
	
		case 4:
			break;
	}

	return;
}

void func_22(var uParam0, var uParam1, var uParam2) // Position - 0xBB3 Signature - 22 03 07 00 00 66 00 76
{
	float animScenePhase;
	float num;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
		return;

	if (*uParam1)
	{
		animScenePhase = ANIMSCENE::GET_ANIM_SCENE_PHASE(*uParam0);
		num = (animScenePhase - uParam0->f_2) / (uParam0->f_1 - uParam0->f_2);
	
		if (num >= 0f)
			uParam0->f_3 = num;
	
		if (uParam0->f_3 >= 1f && !*uParam2)
			*uParam2 = 1;
	
		if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_Y")))
			uParam0->f_4 = uParam0->f_3;
	}

	return;
}

void func_23(Entity eParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC23 Signature - 22 03 05 00 00 66 00 03
{
	if (!ENTITY::IS_ENTITY_DEAD(eParam0))
		if (ENTITY::IS_ENTITY_ATTACHED(eParam0))
			ENTITY::DETACH_ENTITY(eParam0, bParam1, bParam2);

	return;
}

void func_24(var uParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0xC48 Signature - 22 04 07 00 00 2F 67 06 66 06
{
	int i;

	for (i = 0; i < iParam1; i = i + 1)
	{
		if (func_43(uParam0->[i], 0))
			func_44(uParam0->[i], 1, bParam2, false, false, hParam3, 0, 0, 0, false);
	}

	return;
}

BOOL func_25(Entity eParam0) // Position - 0xC87 Signature - 22 01 03 00 00 66 00 03 05 00 96 8B 0D
{
	if (ENTITY::DOES_ENTITY_EXIST(eParam0))
		return DECORATOR::DECOR_EXIST_ON(eParam0, "chest_open");

	return false;
}

void func_26(Entity eParam0) // Position - 0xCA6 Signature - 22 01 03 00 00 66 00 03 05 00 96 8B 0C
{
	if (ENTITY::DOES_ENTITY_EXIST(eParam0))
		DECORATOR::DECOR_SET_BOOL(eParam0, "chest_open", true);

	if (NETWORK::NETWORK_IS_IN_SESSION())
		func_46(func_45(joaat("chests_looted")), 1);
	else
		func_46(func_45(joaat("chests_searched")), 1);

	return;
}

void func_27(var uParam0) // Position - 0xCE9 Signature - 22 01 05 00 00 2F
{
	int i;
	Object objectIndexFromEntityIndex;

	for (i = 0; i < 10; i = i + 1)
	{
		objectIndexFromEntityIndex = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_5);
	
		switch (uParam0->f_103[i /*5*/])
		{
			case -1:
				break;
		
			case 0:
				func_47(0, 0f, 0f, 0f, &objectIndexFromEntityIndex, uParam0->f_103[i /*5*/].f_2, 0, 0);
				break;
		
			case 1:
				func_52(0, 0f, 0f, 0f, uParam0->f_37[i /*3*/], uParam0->f_68[i /*3*/], &objectIndexFromEntityIndex, uParam0->f_103[i /*5*/].f_3, 1, 0, 0, uParam0->f_103[i /*5*/].f_4, uParam0->f_154[i]);
				break;
		
			case 2:
				func_49(0, 0f, 0f, 0f, &objectIndexFromEntityIndex, WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(func_48(uParam0->f_103[i /*5*/].f_3, 1)), 0, 0, 0);
				break;
		
			case 3:
				func_51(0, 0f, 0f, 0f, &objectIndexFromEntityIndex, func_50(uParam0->f_103[i /*5*/].f_3, true), 0, 0);
				break;
		}
	}

	return;
}

void func_28(Object* pobParam0, BOOL bParam1) // Position - 0xDDB Signature - 22 02 04 00 00 66 00 76
{
	if (ENTITY::DOES_ENTITY_EXIST(*pobParam0))
		if (!bParam1)
			OBJECT::DELETE_OBJECT(pobParam0);

	return;
}

void func_29(var uParam0) // Position - 0xDF9 Signature - 22 01 03 00 00 50 01 00 22 01 03 00 00 50 01 00 22 01 03 00 00 50 01 00 22 02
{
	return;
}

void func_30(var uParam0) // Position - 0xE01 Signature - 22 01 03 00 00 50 01 00 22 01 03 00 00 50 01 00 22 02
{
	return;
}

void func_31(var uParam0) // Position - 0xE09 Signature - 22 01 03 00 00 50 01 00 22 02
{
	return;
}

BOOL func_32(int iParam0, int iParam1) // Position - 0xE11 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 01
{
	return iParam0 && iParam1 != false;
}

int func_33(Entity eParam0) // Position - 0xE20 Signature - 22 01 03 00 00 66 00 03 05 00 96 05
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_empty"))
		return 1;

	return 0;
}

BOOL func_34(Entity eParam0) // Position - 0xE47 Signature - 22 01 03 00 00 66 00 03 05 00 96 6A
{
	if (ENTITY::DOES_ENTITY_EXIST(eParam0) && DECORATOR::DECOR_EXIST_ON(eParam0, "scripted_loot_only") && DECORATOR::DECOR_GET_BOOL(eParam0, "scripted_loot_only"))
		return true;

	return false;
}

void func_35(var uParam0, var uParam1, int iParam2) // Position - 0xE7B Signature - 22 03 12
{
	Hash hash;
	var unk;
	var unk2;
	var unk5;
	int num;
	var unk8;
	var unk9;
	var unk10;
	var unk11;

	while (!func_15(uParam0->f_5) && num < iParam2)
	{
		hash = func_53(uParam0->f_5, &unk8, &unk, &unk10, &unk11, &unk2, &unk5, &unk9);
	
		if (func_43(hash, 0))
		{
			func_54(uParam0, unk, unk2, unk5, hash, unk8, unk10, unk11, unk9);
			uParam1->f_1[num] = hash;
			num = num + 1;
		}
	}

	return;
}

BOOL func_36(var uParam0) // Position - 0xEE8 Signature - 22 01 03 00 00 66 00 76 03
{
	return TASK::_GET_SCENARIO_POINT_RADIUS(*uParam0) >= 0.99f;
}

int func_37(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165) // Position - 0xEFD Signature - 22 A6
{
	int num;

	switch (func_55())
	{
		case -1:
			if (func_57(uParam0.f_5, func_56(2), true) < 15f)
			{
				num = joaat("scriptedball");
				*uParam165 = joaat("consumable_medicine");
			}
			break;
	
		case 10:
			if (func_57(uParam0.f_5, func_56(1), true) < 15f)
			{
				num = joaat("scriptedball");
				*uParam165 = joaat("consumable_medicine");
			}
			break;
	}

	return num;
}

int func_38(var uParam0, var uParam1, int iParam2) // Position - 0xF6F Signature - 22 03 05 00 00 66 02 2F
{
	if (iParam2 < 0 || iParam2 >= uParam0->f_26)
	{
		*uParam1 = 0;
		return joaat("scriptedball");
	}

	*uParam1 = uParam0->f_26[iParam2];
	return uParam0->f_12[iParam2];
}

BOOL func_39(var uParam0) // Position - 0xFAA Signature - 22 01 03 00 00 66 00 76 25
{
	return !(DECORATOR::DECOR_EXIST_ON(*uParam0, "chest_local_only") && DECORATOR::DECOR_GET_BOOL(*uParam0, "chest_local_only"));
}

void func_40(var uParam0, var uParam1, Hash hParam2, int iParam3) // Position - 0xFCE Signature - 22 04 06 00 00 66 02 2F 15
{
	if (hParam2 == 0)
		hParam2 = ENTITY::GET_ENTITY_MODEL(*uParam1);

	if (hParam2 == joaat("mp004_s_mp_bondrolled01x") || iParam3 == joaat("kit_placed_explosives"))
		DECORATOR::DECOR_SET_BOOL(*uParam1, "loot_mp_mission_only", true);

	return;
}

var func_41(BOOL bParam0, var uParam1, var uParam2) // Position - 0x100B Signature - 22 03 05 00 00 66 00 8B 08 00 66 01 50 03 01 68 05 00 66 02 50 03 01 22 07
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

Vector3 func_42(BOOL bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x1022 Signature - 22 07 09 00 00 66 00 8B
{
	if (bParam0)
		return uParam1;

	return uParam4;
}

BOOL func_43(Hash hParam0, int iParam1) // Position - 0x103D Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 C2
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_44(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x1057 Signature - 22 0A
{
	int value;
	Hash weaponHash;
	Hash lootTableKey;
	BOOL flag;
	BOOL flag2;
	Hash hash;
	int num;
	int i;
	var statId;
	BOOL flag3;

	if (!func_43(hParam0, 0))
		return 0;

	if (!func_58(hParam0, iParam1, bParam2, hParam5))
		return 0;

	if (!func_59(hParam0, &value, iParam1))
		return 0;

	func_60(hParam0, bParam2);
	lootTableKey = 0;

	if (func_61(hParam0) == joaat("CLOTHING"))
		if (!func_62(hParam0, 866047851) && !func_62(hParam0, -1979000645))
			flag = true;

	if (func_63(hParam0, 8388608) && !func_64(27))
		func_65(27);

	func_66(hParam0);

	if (!flag)
	{
		if (func_62(hParam0, -1588156645))
		{
			bParam2 = true;
			flag2 = true;
			weaponHash = func_50(func_67(hParam0, true), false);
		
			if (WEAPON::IS_WEAPON_VALID(weaponHash))
			{
				if (func_68() == -1)
					func_69(weaponHash);
			
				if (func_70(false) && func_71(weaponHash, 0, false, true, 0, false, hParam5, false))
				{
					func_72(hParam0, value, hParam5);
				
					if (!bParam9)
						bParam2 = false;
				}
				else
				{
					func_73(hParam0, value, hParam5);
				}
			}
		}
		else if (func_61(hParam0) == joaat("WEAPON"))
		{
			if (!func_74(hParam0, hParam5, &bParam2, bParam3, bParam4))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_61(hParam0) == joaat("AMMO") && func_75(hParam0))
		{
			if (!func_76(hParam0, &value, hParam5))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_62(hParam0, -103750053))
		{
			func_46(func_45(joaat("claws_collected")), value);
		}
		else if (hParam0 == joaat("provision_alligator_tooth"))
		{
			func_46(func_77(joaat("COLLECTED"), joaat("alligator_tooth")), value);
		}
		else if (func_62(hParam0, -121341956) && !func_62(hParam0, 606799272))
		{
			if (hParam0 != joaat("weapon_kit_detector"))
				func_78(536, false);
		
			func_62(hParam0, -2017733358) || func_62(hParam0, -1369131378);
		}
		else if (func_62(hParam0, -136654233))
		{
			if (func_62(hParam0, -1021472396))
			{
			}
		}
		else if (func_62(hParam0, -1466706512) && func_62(hParam0, 1147021565))
		{
			func_78(519, false);
		}
		else if (func_62(hParam0, 1147021565) && func_62(hParam0, -524514947))
		{
		}
		else if (func_62(hParam0, 554195525))
		{
		}
		else if (func_62(hParam0, 589988438))
		{
			if (func_79())
			{
				func_80(joaat("reward_small"), false, 1065353216, 1, 0, 0, false, -1);
				bParam2 = true;
				flag2 = true;
			}
		}
		else if (func_62(hParam0, 787083290) && func_62(hParam0, 949916894))
		{
			func_81(hParam0);
		}
		else if (func_62(hParam0, -1718133314))
		{
			func_82(hParam0);
		}
		else if (func_62(hParam0, -1738650224))
		{
			func_83(hParam0);
		}
		else if (func_62(hParam0, -1112814642) && func_62(hParam0, 949916894))
		{
			func_84(hParam0);
		}
		else if (hParam0 == joaat("document_player_journal"))
		{
			Global_1940085.f_21 = 0;
		}
		else if (func_62(hParam0, 1841149704))
		{
			func_85();
		}
		else if (func_62(hParam0, -1979000645))
		{
		}
		else if (func_62(hParam0, 606799272))
		{
		}
		else if (func_62(hParam0, -1112814642) && func_62(hParam0, -1697809989))
		{
		}
		else if (func_62(hParam0, -2017733358) || func_62(hParam0, -1369131378))
		{
		}
		else if (func_62(hParam0, -1921346699))
		{
			return 0;
		}
		else if (func_62(hParam0, 1192444843))
		{
			switch (hParam0)
			{
				case joaat("upgrade_fsh_bait_lure_swamp"):
					if (!func_86(471514780, 1))
						func_44(471514780, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_lake"):
					if (!func_86(526074061, 1))
						func_44(526074061, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_swamp"):
					if (!func_86(-967317137, 1))
						func_44(-967317137, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_river"):
					if (!func_86(670273567, 1))
						func_44(670273567, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_lake"):
					if (!func_86(215778062, 1))
						func_44(215778062, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_river"):
					if (!func_86(-1045488665, 1))
						func_44(-1045488665, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			}
		}
		else if (func_62(hParam0, -839724752) && func_63(hParam0, 4))
		{
		}
		else if (func_62(hParam0, 1399091007))
		{
			func_87(hParam0, &lootTableKey);
			bParam2 = true;
			flag2 = true;
		}
	
		switch (hParam0)
		{
			case joaat("upgrade_upg_mortar_pestle"):
				if (func_68() == -1)
					hParam0 = -1448210800;
				break;
		
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_90(686, -103579, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_90(686, -1531530025, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("consumable_tonic"):
			case joaat("consumable_potent_tonic"):
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_90(685, -1228016946, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_poor");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_plain");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_plain");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_plain");
				break;
		
			case -1080874779:
			case joaat("consumable_potent_medicine"):
			case joaat("consumable_medicine"):
			case joaat("consumable_moonshine"):
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_90(685, 1934060482, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("upgrade_fsh_bait_cricket_tin"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("bait_crickets");
				break;
		
			case joaat("consumable_potent_restorative"):
			case joaat("consumable_cocaine_chewing_gum_used"):
			case joaat("consumable_cocaine_chewing_gum"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("consumable_restorative"):
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_90(685, 1110018439, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("kit_gun_oil"):
				func_78(521, false);
				break;
		
			case joaat("consumable_cigarette_box"):
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("consumable_snake_oil"):
			case joaat("consumable_potent_snake_oil"):
			case joaat("consumable_chewing_tobacco"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("consumable_chewing_tobacco_used"):
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_90(685, 1408511260, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("consumable_coffee_gnds_reg"):
				if (func_64(1))
					func_78(522, false);
				break;
		
			case joaat("consumable_valerian_root"):
				func_89(271, func_88(joaat("consumable_valerian_root"), false), false);
				break;
		
			case joaat("weapon_kit_binoculars"):
			case joaat("weapon_kit_binoculars_improved"):
				break;
		
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				flag2 = true;
				break;
		
			case joaat("consumable_aged_pirate_rum"):
				func_89(272, func_88(joaat("consumable_aged_pirate_rum"), false), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("consumable_hair_tonic"):
				func_78(526, false);
				break;
		
			case joaat("consumable_ginseng_elixier"):
				func_89(270, func_88(joaat("consumable_ginseng_elixier"), false), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_plain");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_poor");
				break;
		
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("ARROW_BUNDLE");
				break;
		
			case joaat("PROVISION_MP_TREASURE_MAP_REWARDS_BOX_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("reward_abandoned_loot_male");
				break;
		
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("upgrade_upg_coffee_kit"):
				func_78(534, false);
				break;
		
			case joaat("consumable_hair_grease"):
				func_78(529, false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("upgrade_fsh_bait_worm_can"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("bait_worms");
				break;
		
			default:
				break;
		}
	}

	if (!flag2)
	{
		if (value <= 0)
			return 0;
	
		hash = hParam0;
		func_91(&hash);
	
		if (!func_73(hash, value, hParam5))
			return 0;
		else if (!func_70(false))
			return 1;
	
		if (func_61(hParam0) == joaat("CLOTHING"))
			func_92(hParam0);
	}
	else if (lootTableKey != 0)
	{
		if (func_70(false) && !func_93())
		{
			num.f_1 = 10;
			num.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_33, false, false, lootTableKey, &num, 0);
		
			for (i = 0; i < num; i = i + 1)
			{
				func_44(num.f_1[i], num.f_12[i], false, false, false, -897553835, 0, 0, 0, false);
			}
		}
		else
		{
			func_94(lootTableKey, 0);
		}
	}

	statId = { func_95(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_INCREMENT_INT(&statId, value);

	func_96(hParam0);

	if (iParam6 > 0f)
	{
		if (func_62(hParam0, -839724752))
			func_97(hParam0, iParam6);
	}
	else if (!bParam2)
	{
		flag3 = hParam5 == 1248274121;
		func_98(hParam0, value, false, flag3, 0, false, false);
	}

	return 1;
}

struct<2> func_45(int iParam0) // Position - 0x1B0B Signature - 22 01 05 00 00 66 00 4B
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

void func_46(var uParam0, var uParam1, int iParam2) // Position - 0x1B1D Signature - 22 03 05 00 00 4B
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

BOOL func_47(Hash hParam0, float fParam1, float fParam2, float fParam3, var uParam4, float fParam5, int iParam6, Hash hParam7) // Position - 0x1B3A Signature - 22 08 0A 00 00 66 04 76 03 05 00 96 05 8B 11 00 66 00 1D 4B 01 2D 66 06 66 07 39 4C 36 00 66 04 32 66 04 76 03 05 00 96 8B 12
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam4))
		*uParam4 = func_99(hParam0, fParam1, iParam6, hParam7);

	if (ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		func_100(uParam4);
		return func_101(*uParam4, fParam5);
	}

	return false;
}

Hash func_48(Hash hParam0, int iParam1) // Position - 0x1B7B Signature - 22 02 07 00 00 66
{
	int num;
	var unk;
	Hash hash;

	if (!func_43(hParam0, 0))
		return 0;

	num = func_61(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_62(hParam0, 1399091007))
	{
		func_102(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

void func_49(Hash hParam0, float fParam1, float fParam2, float fParam3, var uParam4, Hash hParam5, int iParam6, int iParam7, Hash hParam8) // Position - 0x1BF5 Signature - 22 09 0B
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam4))
		*uParam4 = func_99(hParam0, fParam1, iParam7, hParam8);

	if (ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		func_100(uParam4);
		func_103(*uParam4, hParam5, iParam6, true);
	}

	return;
}

Hash func_50(Hash hParam0, BOOL bParam1) // Position - 0x1C35 Signature - 22 02 04 00 00 66 00 2F 39 3D 10 00 05 8B 04 00 2F 50 02 01 66 00 03
{
	if (!func_43(hParam0, 0))
		return 0;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	!bParam1;
	return 0;
}

void func_51(Hash hParam0, float fParam1, float fParam2, float fParam3, var uParam4, Hash hParam5, int iParam6, Hash hParam7) // Position - 0x1C61 Signature - 22 08 0A 00 00 66 04 76 03 05 00 96 05 8B 11 00 66 00 1D 4B 01 2D 66 06 66 07 39 4C 36 00 66 04 32 66 04 76 03 05 00 96 8B 0F
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam4))
		*uParam4 = func_99(hParam0, fParam1, iParam6, hParam7);

	if (ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		func_100(uParam4);
		func_104(*uParam4, hParam5);
	}

	return;
}

void func_52(Hash hParam0, float fParam1, float fParam2, float fParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, int iParam15, int iParam16) // Position - 0x1C9E Signature - 22 11 13
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam10))
		*uParam10 = func_99(hParam0, fParam1, iParam13, hParam14);

	if (ENTITY::DOES_ENTITY_EXIST(*uParam10))
	{
		if (!_IS_NULL_VECTOR(uParam4) || !_IS_NULL_VECTOR(uParam7))
			func_106(*uParam10, uParam4, uParam7);
	
		func_100(uParam10);
		func_107(*uParam10, iParam16);
		func_108(*uParam10, iParam11, iParam12, iParam15);
	}

	return;
}

Hash func_53(Entity eParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x1D15 Signature - 22 08 18
{
	Hash ammoTypeForWeapon;
	Hash _int;
	float _float;
	float _float2;
	float _float3;
	int i;
	var unk;
	var propertyName;
	var propertyName2;
	Hash _int2;
	Hash _int3;

	ammoTypeForWeapon = 0;
	_int = 0;
	*uParam1 = 0;
	*uParam7 = -1;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_empty"))
		return 0;

	*uParam1 = 1;

	if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_money"))
	{
		*uParam1 = DECORATOR::DECOR_GET_INT(eParam0, "loot_money");
		DECORATOR::DECOR_REMOVE(eParam0, "loot_money");
		*uParam2 = 0;
		return joaat("currency_cash");
	}

	if (DECORATOR::DECOR_EXIST_ON(eParam0, "fLoot_money"))
	{
		*uParam3 = DECORATOR::DECOR_GET_FLOAT(eParam0, "fLoot_money");
		DECORATOR::DECOR_REMOVE(eParam0, "fLoot_money");
		*uParam2 = 0;
		return func_109(*uParam3);
	}

	if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_capitale"))
	{
		DECORATOR::DECOR_REMOVE(eParam0, "loot_capitale");
		*uParam2 = 4;
	
		if (Global_1901671.f_171.f_71)
			return 0;
		else
			return 757274294;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "loot_ammo", 16);

	for (i = 1; i <= 3; i = i + 1)
	{
		propertyName = { unk };
		propertyName2 = { unk };
		TEXT_LABEL_APPEND_INT(&propertyName, i, 16);
		TEXT_LABEL_APPEND_INT(&propertyName2, i, 16);
		TEXT_LABEL_APPEND_STRING(&propertyName, "_type", 16);
		TEXT_LABEL_APPEND_STRING(&propertyName2, "_amt", 16);
	
		if (DECORATOR::DECOR_EXIST_ON(eParam0, &propertyName))
		{
			_int = DECORATOR::DECOR_GET_INT(eParam0, &propertyName);
		
			if (_int != 0)
			{
				ammoTypeForWeapon = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(_int);
				DECORATOR::DECOR_REMOVE(eParam0, &propertyName);
			
				if (DECORATOR::DECOR_EXIST_ON(eParam0, &propertyName2))
				{
					*uParam1 = DECORATOR::DECOR_GET_INT(eParam0, &propertyName2);
					DECORATOR::DECOR_REMOVE(eParam0, &propertyName2);
					*uParam2 = 2;
				}
			
				return ammoTypeForWeapon;
			}
		}
	}

	if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_weapon"))
	{
		_int = DECORATOR::DECOR_GET_INT(eParam0, "loot_weapon");
	
		if (_int != 0)
		{
			DECORATOR::DECOR_REMOVE(eParam0, "loot_weapon");
			*uParam2 = 3;
			return func_110(_int);
		}
	}

	if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_type1"))
	{
		if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_amt1"))
		{
			*uParam1 = DECORATOR::DECOR_GET_INT(eParam0, "loot_item_amt1");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_amt1");
		}
	
		if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_bone1"))
		{
			*uParam7 = DECORATOR::DECOR_GET_INT(eParam0, "loot_item_bone1");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_bone1");
		}
	
		if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_model1"))
		{
			*uParam4 = DECORATOR::DECOR_GET_INT(eParam0, "loot_item_model1");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_model1");
		}
	
		if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_offset1x") && DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_offset1y") && DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_offset1z"))
		{
			_float = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_offset1x");
			_float2 = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_offset1y");
			_float3 = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_offset1z");
			*uParam5 = { _float, _float2, _float3 };
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_offset1x");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_offset1y");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_offset1z");
		}
	
		if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_orient1x") && DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_orient1y") && DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_orient1z"))
		{
			_float = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_orient1x");
			_float2 = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_orient1y");
			_float3 = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_orient1z");
			*uParam6 = { _float, _float2, _float3 };
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_orient1x");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_orient1y");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_orient1z");
		}
	
		_int2 = DECORATOR::DECOR_GET_INT(eParam0, "loot_item_type1");
		DECORATOR::DECOR_REMOVE(eParam0, "loot_item_type1");
		*uParam2 = 1;
		return _int2;
	}

	if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_type2"))
	{
		if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_amt2"))
		{
			*uParam1 = DECORATOR::DECOR_GET_INT(eParam0, "loot_item_amt2");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_amt2");
		}
	
		if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_bone2"))
		{
			*uParam7 = DECORATOR::DECOR_GET_INT(eParam0, "loot_item_bone2");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_bone2");
		}
	
		if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_model2"))
		{
			*uParam4 = DECORATOR::DECOR_GET_INT(eParam0, "loot_item_model2");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_model2");
		}
	
		if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_offset2x") && DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_offset2y") && DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_offset2z"))
		{
			_float = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_offset2x");
			_float2 = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_offset2y");
			_float3 = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_offset2z");
			*uParam5 = { _float, _float2, _float3 };
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_offset2x");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_offset2y");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_offset2z");
		}
	
		if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_orient2x") && DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_orient2y") && DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_orient2z"))
		{
			_float = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_orient2x");
			_float2 = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_orient2y");
			_float3 = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_orient2z");
			*uParam6 = { _float, _float2, _float3 };
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_orient2x");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_orient2y");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_orient2z");
		}
	
		_int3 = DECORATOR::DECOR_GET_INT(eParam0, "loot_item_type2");
		DECORATOR::DECOR_REMOVE(eParam0, "loot_item_type2");
		*uParam2 = 1;
		return _int3;
	}

	return 0;
}

void func_54(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, Hash hParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x21C5 Signature - 22 0D 10
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (uParam0->f_103[i /*5*/] == -1)
		{
			uParam0->f_103[i /*5*/] = uParam1;
			uParam0->f_154[i] = uParam12;
			uParam0->f_103[i /*5*/].f_3 = hParam8;
			uParam0->f_103[i /*5*/].f_1 = uParam9;
			uParam0->f_103[i /*5*/].f_2 = uParam10;
			uParam0->f_103[i /*5*/].f_4 = uParam11;
		
			if (func_111(uParam0->f_103[i /*5*/].f_3) && func_112(uParam0->f_103[i /*5*/].f_3))
			{
				func_113(&uParam0->f_37[i /*3*/], &uParam0->f_68[i /*3*/]);
			}
			else
			{
				if (!_IS_NULL_VECTOR(uParam2))
					uParam0->f_37[i /*3*/] = { uParam2 };
			
				if (!_IS_NULL_VECTOR(uParam5))
					uParam0->f_68[i /*3*/] = { uParam5 };
			}
		
			break;
		}
	}

	return;
}

int func_55() // Position - 0x22A2 Signature - 22 00 02 00 00 5D C6
{
	return Global_1896646.f_41;
}

Vector3 func_56(int iParam0) // Position - 0x22B0 Signature - 22 01 06 00 00 66 00 3C
{
	var unk;

	switch (iParam0)
	{
		case 1:
			unk = { 2313.51f, 1031.7214f, 78.5643f };
			break;
	
		case 2:
			unk = { 159.2609f, -1436.6224f, 42f };
			break;
	}

	return unk;
}

float func_57(Entity eParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x22FC Signature - 22 05 07 00 00 66 00 03 05 00 96
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(eParam0, false, false), vParam1, bParam4);
}

BOOL func_58(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x2324 Signature - 22 04 06 00 00 39
{
	if (func_68() == -1)
	{
		if (func_111(hParam0) && func_114(hParam0))
		{
			func_115(hParam0, iParam1, true, &bParam2, hParam3);
			return false;
		}
	}
	else if (hParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (hParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}

	return true;
}

BOOL func_59(Hash hParam0, var uParam1, int iParam2) // Position - 0x237B Signature - 22 03 0C 00 00 66 02
{
	var unk;
	int num;
	int num2;

	*uParam1 = iParam2;
	func_116(hParam0, uParam1);
	unk = { func_117(hParam0, false, true) };
	num = func_118(hParam0, &unk, false, false);
	num2 = func_119(hParam0, false, false, false);

	if (num > 1 && num2 + iParam2 >= num)
		if (func_62(hParam0, -2051813666))
			func_78(674, true);
		else if (func_68() == -1)
			func_78(673, false);

	if (func_120(hParam0, &unk, *uParam1, false, false, -1, false))
		if (num2 < num)
			*uParam1 = num - num2;
		else
			return false;

	return true;
}

void func_60(Hash hParam0, BOOL bParam1) // Position - 0x2419 Signature - 22 02 04 00 00 66 01 8B
{
	if (bParam1)
		return;

	if (!func_121())
		return;

	switch (func_122(hParam0, -949239683))
	{
		case -1565009253:
		case -1420737577:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1940085.f_70.f_5 = 1;
			Global_1940085.f_70.f_6 = 0;
			Global_1940085.f_70.f_1 = hParam0;
			break;
	}

	return;
}

int func_61(Hash hParam0) // Position - 0x24CA Signature - 22 01 0A 00 00 66 00 2F 39 3D 10 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 86 05 8B 04 00 2F 50 01 01 4B 03 27 02
{
	var unk;

	if (!func_43(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_2;
}

BOOL func_62(Hash hParam0, Hash hParam1) // Position - 0x24F5 Signature - 22 02 04 00 00 66 00 2F 39 3D 10 00 05 8B 0F
{
	if (!func_43(hParam0, 0))
		return func_124(func_123(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return true;

	return false;
}

BOOL func_63(Hash hParam0, int iParam1) // Position - 0x2536 Signature - 22 02 04 00 00 66 00 2F 39 3D 10 00 05 8B 04 00 2F 50 02 01 66 00 66
{
	if (!func_43(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

BOOL func_64(int iParam0) // Position - 0x2555 Signature - 22 01 03 00 00 66 00 39 ED 43 00 05 8B 04
{
	if (!func_125(iParam0))
		return false;

	return func_126(iParam0);
}

void func_65(int iParam0) // Position - 0x2571 Signature - 22 01 03 00 00 66 00 39 ED 43 00 05 8B 03
{
	if (!func_125(iParam0))
		return;

	func_127(iParam0);
	func_128(iParam0);
	return;
}

void func_66(Hash hParam0) // Position - 0x2592 Signature - 22 01 03 00 00 66 00 37 C7
{
	if (func_62(hParam0, -1522723129))
		func_129(-848633709, 0, 255, 0, false);
	else if (func_62(hParam0, -283942357))
		func_129(-981153234, 0, 255, 0, false);
	else if (func_62(hParam0, 683680997))
		func_129(-756350192, 0, 255, 0, false);
	else if (func_62(hParam0, 1307628809))
		func_129(603094518, 0, 255, 0, false);

	return;
}

Hash func_67(Hash hParam0, BOOL bParam1) // Position - 0x2617 Signature - 22 02 05 00 00 66 00 3C
{
	Hash hash;

	switch (hParam0)
	{
		case joaat("ammo_hatchet_hewing"):
			hash = joaat("weapon_melee_hatchet_hewing");
			break;
	
		case joaat("ammo_molotov_volatile"):
			hash = joaat("weapon_thrown_molotov");
			break;
	
		case joaat("ammo_throwing_knives_confuse"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_throwing_knives_wound"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_throwing_knives"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_hatchet_ancient"):
			hash = joaat("weapon_melee_ancient_hatchet");
			break;
	
		case joaat("ammo_tomahawk_homing"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("ammo_hatchet_cleaver"):
			hash = joaat("weapon_melee_cleaver");
			break;
	
		case joaat("ammo_hatchet_hunter_rusted"):
			hash = joaat("weapon_melee_hatchet_hunter_rusted");
			break;
	
		case joaat("ammo_hatchet_double_bit_rusted"):
			hash = joaat("weapon_melee_hatchet_double_bit_rusted");
			break;
	
		case joaat("ammo_tomahawk_improved"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("ammo_hatchet_viking"):
			hash = joaat("weapon_melee_hatchet_viking");
			break;
	
		case joaat("ammo_tomahawk_ancient"):
			hash = joaat("weapon_thrown_tomahawk_ancient");
			break;
	
		case joaat("ammo_bolas"):
			hash = joaat("weapon_thrown_bolas");
			break;
	
		case joaat("ammo_hatchet"):
			hash = joaat("weapon_melee_hatchet");
			break;
	
		case joaat("ammo_hatchet_hunter"):
			hash = joaat("weapon_melee_hatchet_hunter");
			break;
	
		case joaat("ammo_dynamite"):
			hash = joaat("weapon_thrown_dynamite");
			break;
	
		case joaat("ammo_dynamite_volatile"):
			hash = joaat("weapon_thrown_dynamite");
			break;
	
		case joaat("ammo_poisonbottle"):
			hash = joaat("weapon_thrown_poisonbottle");
			break;
	
		case joaat("ammo_throwing_knives_improved"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_tomahawk"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("ammo_throwing_knives_trail"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("AMMO_MOLOTOV"):
			hash = joaat("weapon_thrown_molotov");
			break;
	
		case joaat("ammo_throwing_knives_disorient"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_hatchet_double_bit"):
			hash = joaat("weapon_melee_hatchet_double_bit");
			break;
	
		case joaat("ammo_throwing_knives_drain"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_throwing_knives_poison"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		default:
			break;
	}

	if (func_43(hash, 0))
		if (bParam1)
			if (func_130(hash) || func_131(hash))
				return hash;
		else
			return hash;

	return hParam0;
}

int func_68() // Position - 0x280D Signature - 22 00 02 00 00 5D 17
{
	return Global_1572887.f_14;
}

void func_69(Hash hParam0) // Position - 0x281B Signature - 22 01 04 00 00 5D 17 00 18 27 0E 08
{
	Hash weaponUnlock;

	if (Global_1572887.f_14 != -1)
		return;

	if (!func_132(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(weaponUnlock, true);
	return;
}

BOOL func_70(BOOL bParam0) // Position - 0x2855 Signature - 22 01 03 00 00 39 0D 28 00 08 15 04
{
	if (func_68() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_133(bParam0));
}

BOOL func_71(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x2873 Signature - 22 08 29
{
	var unk;
	var unk6;
	var unk28;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	if (WEAPON::IS_WEAPON_MELEE_WEAPON(hParam0) && iParam1 > 0)
		iParam1 = 0;

	if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
	{
		unk = { func_117(hParam0, false, true) };
	
		if (func_134(hParam0, &unk, unk.f_4, false, false))
		{
			unk6.f_9 = -1591664384;
		
			if (func_135(hParam0, &unk6, unk.f_4))
			{
				unk28 = { func_136(hParam0, unk, unk.f_4, false) };
				func_137(hParam0, &unk28, &unk, 1, -142743235, 1, false);
			}
		}
	}

	if (func_70(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_33, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
			return 0;
	
		func_72(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_138(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_33, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

BOOL func_72(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x29A3 Signature - 22 03 05 00 00 66 01
{
	if (iParam1 < 1)
		return true;

	if (!func_75(hParam0))
		return false;

	if (!func_70(false))
		return false;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, hParam0, iParam1, hParam2);
	return true;
}

BOOL func_73(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x29DE Signature - 22 03 0F 00 00 66 00 2F 39 3D 10 00 05 8B 04 00 2F 50 03 01 66 01
{
	int num;
	var unk;
	var unk6;

	if (!func_43(hParam0, 0))
		return 0;

	if (iParam1 < 1)
		return 0;

	num = func_139(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_140(hParam0, iParam1, hParam2);

	unk = { func_117(hParam0, false, true) };
	unk6 = { func_136(hParam0, unk, unk.f_4, false) };
	return func_141(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

BOOL func_74(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2A4D Signature - 22 05 0F
{
	Hash weaponHash;
	var unk;
	int num;
	Hash weaponHash2;

	weaponHash = func_50(hParam0, false);

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
		if (func_68() == -1)
		{
			func_69(weaponHash);
		
			if (hParam1 == 1248274121)
				func_142(weaponHash);
		}
	
		if (!func_120(hParam0, &unk, 1, false, false, -1, false))
		{
			func_115(hParam0, 1, false, uParam2, hParam1);
			num = func_143(weaponHash);
		
			if (WEAPON::_IS_WEAPON_SNIPER(weaponHash))
			{
				func_71(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("weapon_fishingrod") || WEAPON::_IS_WEAPON_BINOCULARS(weaponHash))
			{
				func_71(weaponHash, 0, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(weaponHash))
			{
				func_71(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
			{
				if (weaponHash == joaat("weapon_melee_knife_john") && !func_144())
					return false;
			
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(hParam0))
				{
				}
				else if (!func_145(weaponHash))
				{
					func_71(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
				}
				else
				{
					func_71(weaponHash, WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4, bParam3, bParam4, 0, false, hParam1, false);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			{
				weaponHash2 = func_146(Global_33, 2, false, true);
			
				if (func_132(weaponHash2) && !Global_26688 && weaponHash2 != weaponHash && !func_86(joaat("upgrade_offhand_holster"), 1) && bParam4)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_33, weaponHash2);
			
				if (func_132(weaponHash2) && func_86(joaat("upgrade_offhand_holster"), 1))
					if (!func_71(weaponHash, num, bParam3, bParam4, 3, true, hParam1, false))
						return false;
				else if (!func_71(weaponHash, num, bParam3, bParam4, 0, true, hParam1, false))
					return false;
			}
			else if (!func_71(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}

	if (WEAPON::_0x9F0E1892C7F228A8(true) != 0 && hParam1 == 1248274121)
		func_78(515, true);

	return true;
}

BOOL func_75(Hash hParam0) // Position - 0x2C5B Signature - 22 01 03 00 00 66 00 03 05 00 31
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_76(Hash hParam0, var uParam1, Hash hParam2) // Position - 0x2C69 Signature - 22 03 0C 00 00 66 00
{
	int num;
	int weaponClipSize;
	int ammo;
	int pedAmmoByType;
	Hash weaponTypeFromAmmoType;
	int num2;
	int num3;

	if (!func_75(hParam0))
		return false;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);
	pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	if (func_132(weaponTypeFromAmmoType))
		WEAPON::GET_MAX_AMMO(Global_33, &ammo, weaponTypeFromAmmoType);

	num2 = ammo - pedAmmoByType;

	if (WEAPON::IS_WEAPON_BOW(weaponTypeFromAmmoType))
		weaponClipSize = 5;
	else
		weaponClipSize = WEAPON::GET_WEAPON_CLIP_SIZE(weaponTypeFromAmmoType);

	if (*uParam1 > 0)
		num3 = *uParam1;
	else if (*uParam1 < 0)
		num3 = weaponClipSize * MISC::ABSI(*uParam1);

	if (num2 >= num3)
	{
		num = num3;
	}
	else if (num2 < num3 && num2 >= 1)
	{
		num = num2;
	}
	else
	{
		func_89(func_147(hParam0), func_88(hParam0, false), true);
		return false;
	}

	ammo == pedAmmoByType + num;

	if (num == 0)
		return false;

	if (func_70(false))
	{
		if (func_72(hParam0, num, hParam2))
		{
			*uParam1 = num;
			return true;
		}
	}
	else
	{
		return func_73(hParam0, *uParam1, hParam2);
	}

	return false;
}

struct<2> func_77(int iParam0, int iParam1) // Position - 0x2D67 Signature - 22 02 06 00 00 66 00 67
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_78(int iParam0, BOOL bParam1) // Position - 0x2D7D Signature - 22 02 06 00 00 66 00 4B
{
	int num;
	int num2;

	func_148(iParam0, &num, &num2);

	if (!func_149(iParam0, num, num2, bParam1))
		return;

	func_150(num, num2);
	return;
}

BOOL func_79() // Position - 0x2DAA Signature - 22 00 02 00 00 2F 50 00 01 22 08
{
	return false;
}

int func_80(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0x2DB3 Signature - 22 08 0B
{
	int num;

	if (func_68() == 0)
	{
		func_94(hParam0, 0);
		return 0;
	}

	num = func_151(hParam0, bParam6, iParam7);

	if (!bParam1)
		func_152(num, sParam4, iParam5, false);

	func_153(num, bParam1, iParam2, iParam3);
	return num;
}

void func_81(Hash hParam0) // Position - 0x2DFA Signature - 22 01 03 00 00 50 01 00 22 01 03 00 00 50 01 00 22 01 03 00 00 50 01 00 22 01
{
	return;
}

void func_82(Hash hParam0) // Position - 0x2E02 Signature - 22 01 03 00 00 50 01 00 22 01 03 00 00 50 01 00 22 01 03 00 00 50 01 00 22 00
{
	return;
}

void func_83(Hash hParam0) // Position - 0x2E0A Signature - 22 01 03 00 00 50 01 00 22 01 03 00 00 50 01 00 22 00
{
	return;
}

void func_84(Hash hParam0) // Position - 0x2E12 Signature - 22 01 03 00 00 50 01 00 22 00
{
	return;
}

void func_85() // Position - 0x2E1A Signature - 22 00 02 00 00 37 D7
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("sp_chal_expl_root")) < 2)
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("sp_chal_expl_root"), joaat("acw_expl_rank_01_treasure"), 1);

	return;
}

BOOL func_86(Hash hParam0, int iParam1) // Position - 0x2E3E Signature - 22 02 05 00 00 66 00 2F 39 3D 10 00 05 8B 04 00 2F 50 02 01 66 00 39
{
	int num;

	if (!func_43(hParam0, 0))
		return false;

	num = func_61(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_155(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_154(hParam0, 1))
				return false;
			break;
	}

	return func_156(hParam0, false, false, false) >= iParam1;
}

void func_87(Hash hParam0, var uParam1) // Position - 0x2EC1 Signature - 22 02 05 00 00 66 00 66 01 4B
{
	var unk;

	func_102(hParam0, uParam1, &unk);
	return;
}

Hash func_88(Hash hParam0, BOOL bParam1) // Position - 0x2ED3 Signature - 22 02 05 00 00 66 00 2F 39 3D 10 00 05 8B 04 00 2F 50 02 01 66 00 66
{
	Hash hash;

	if (!func_43(hParam0, 0))
		return 0;

	hash = func_157(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

void func_89(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x2F01 Signature - 22 03 07 00 00 66 00 4B
{
	int num;
	int num2;

	func_148(iParam0, &num, &num2);

	if (!func_149(iParam0, num, num2, bParam2))
		return;

	if (!func_158(iParam0, 1024))
		return;

	func_150(num, num2);
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/] = hParam1;
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_90(int iParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2F61 Signature - 22 04 08
{
	int num;
	int num2;

	func_148(iParam0, &num, &num2);

	if (!func_149(iParam0, num, num2, bParam2))
		return;

	if (!func_158(iParam0, 1024))
		return;

	func_150(num, num2);
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/] = hParam1;

	if (!bParam3)
		Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	else
		Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;

	return;
}

void func_91(var uParam0) // Position - 0x2FDC Signature - 22 01 03 00 00 66 00 76 3C
{
	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			break;
	
		case joaat("consumable_cigarette_box_cheap_used"):
			*uParam0 = joaat("consumable_cigarette_box_cheap");
			break;
	}

	return;
}

void func_92(Hash hParam0) // Position - 0x3020 Signature - 22 01 03 00 00 39 0D 28 00 08 72
{
	if (func_68() != -1)
		return;

	return;
}

BOOL func_93() // Position - 0x3033 Signature - 22 00 02 00 00 03 01 00 B3
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
		return false;

	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

int func_94(Hash hParam0, int iParam1) // Position - 0x304F Signature - 22 02 14
{
	var unk;
	var unk5;

	if (0 == hParam0)
		return 0;

	unk5.f_1 = 10;
	func_159(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_160(hParam0, &unk5, &unk, iParam1, 0);
}

struct<2> func_95(Hash hParam0) // Position - 0x3083 Signature - 22 01 07 00 00 66 00 2F
{
	var unk;
	var unk3;

	if (!func_43(hParam0, 0))
		return unk;

	if (func_62(hParam0, -305066475))
		if (func_68() == -1)
			if (func_62(hParam0, -537818634))
				return func_161(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_161(joaat("deadeye_items"));
	else if (func_62(hParam0, -537818634))
		return func_161(joaat("medicine_items"));

	if (func_62(hParam0, 2084895747))
		return func_161(joaat("lock_breaker_items"));

	return unk3;
}

void func_96(Hash hParam0) // Position - 0x3117 Signature - 22 01 03 00 00 66 00 3C 01
{
	switch (hParam0)
	{
		case joaat("provision_bird_feather_flight"):
			break;
	}

	return;
}

void func_97(Hash hParam0, int iParam1) // Position - 0x3130 Signature - 22 02 05 00 00 5D
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(Global_1902822.f_37);
	func_164(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", iParam1, str), "inventory_items", func_163(hParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_98(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x3171 Signature - 22 07 2F
{
	BOOL flag;
	int value;
	var unk;
	int num;
	char* str;
	int num2;
	int num3;
	int num4;
	int num5;
	char* str2;
	char* str3;
	int num6;
	char* str4;
	Hash hash;
	Hash hash2;
	int value2;
	const char* str5;
	var unk7;

	if (!func_43(hParam0, 0))
		return;
	else if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;
	else if (iParam1 == 0)
		return;

	if (!func_165() || bParam6)
	{
		func_166(hParam0, iParam1, bParam2, iParam4, bParam3, bParam5);
		return;
	}

	flag = false;
	value = MISC::ABSI(iParam1);
	TEXT_LABEL_ASSIGN_STRING(&unk, value == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);

	if (hParam0 == joaat("AMMO_MOONSHINEJUG_MP"))
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_GET_PUMP", 32);

	if (iParam1 > 0)
	{
	}
	else if (bParam3 || iParam4)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, value == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);
		flag = true;
	}
	else if (bParam2 && func_63(hParam0, 2097152))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		flag = true;
	}

	num = func_61(hParam0);
	num2 = 0;
	num3 = joaat("Inventory");

	if (num == joaat("AMMO") && hParam0 != joaat("ammo_hatchet") && hParam0 != joaat("ammo_hatchet_cleaver") && hParam0 != joaat("ammo_hatchet_hunter") && hParam0 != joaat("ammo_tomahawk_ancient") && hParam0 != joaat("ammo_poisonbottle") && hParam0 != joaat("AMMO_MOONSHINEJUG_MP") && !func_62(hParam0, -1982291600) && !func_62(hParam0, 137764179))
	{
		num2 = joaat("ammo_types");
		num3 = joaat("ammo_types");
	}

	num4 = func_168(hParam0);

	if (num == joaat("weapon_mod") || num == joaat("weapon_decoration") || num4 == -1674363638 || num4 == 252325943 || num4 == 829857647 || num4 == -636562458 || num4 == 1341188928 || num4 == 1216664798)
	{
		str = "ITEMTYPE_UPGRADES";
		str.f_1 = "itemtype_textures";
	}
	else if (!func_169(hParam0, &str, num3, num2, 0, joaat("ui_itemviewer")))
	{
		str = "_PLACEHOLDER";
		str.f_1 = "inventory_items";
	}

	if (MISC::GET_HASH_KEY(str) == 121560594)
		str = "DOCUMENT_MAP_GENERIC";

	if (bParam5)
	{
		str = "ITEMTYPE_ORDERED_ITEM";
		str.f_1 = "itemtype_textures";
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	num5 = joaat("COLOR_PURE_WHITE");
	str2 = "Transaction_Positive";
	str3 = "Transaction_Feed_Sounds";
	num6 = 0;

	if (flag)
	{
		num5 = joaat("color_greymid");
		str2 = "Transaction_Negative";
		num6 = 1;
	}

	if (func_62(hParam0, 474910316))
	{
		str4 = func_170(hParam0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(str4))
		{
			str2 = str4;
			str3 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}

	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(hParam0))
		if (!flag && !bParam2)
			num5 = joaat("color_rpg_special_1");
		else
			num5 = joaat("color_yellowdark");

	if (func_62(hParam0, 1816585950))
		num5 = joaat("color_objective");

	if (func_171(hParam0))
		if (!flag && !bParam2)
			num5 = joaat("color_yellow");
		else
			num5 = joaat("color_yellowdark");

	hash = func_88(hParam0, false);

	if (func_172(num4) && func_62(hParam0, -306684263) && hash != 0)
	{
		hash = func_173(hParam0);
	}
	else if (func_61(hParam0) == joaat("CLOTHING"))
	{
		hash2 = func_174(hParam0);
	
		if (func_43(hash2, 0))
			hash = func_88(hash2, false);
	}

	if (func_175(hParam0, 1443104131) && bParam3)
	{
		value2 = 1;
		func_176(hParam0, -915411861, &value2, false);
		value = BUILTIN::CEIL(BUILTIN::TO_FLOAT(value) / BUILTIN::TO_FLOAT(value2));
		iParam1 = BUILTIN::CEIL(BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(value2));
	}

	str5 = func_177(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, hash), value), num5);

	if (iParam1 == 1)
		str5 = MISC::VAR_STRING(0, hash);

	if (num4 == -1839668642 && hParam0 != joaat("clothing_item_hair_none") && hParam0 != 1326838792 && hParam0 != -230310728 || num4 == 231148558 && hParam0 != joaat("clothing_item_m_beard_stubble") && hParam0 != joaat("clothing_item_beard_none") || num4 == 252325943 && hParam0 != joaat("clothing_blend_lipstick_none") || num4 == -636562458 && hParam0 != joaat("clothing_blend_eyeshadow_none"))
		str5 = MISC::VAR_STRING(0, func_178(hParam0, -442898163));

	if (num4 == -126813555 || num4 == 1946043663)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk7, "", 128);
	
		if (func_179(hParam0, &unk7))
			str5 = func_181(func_180(unk7), joaat("COLOR_PURE_WHITE"));
	}

	func_164(str5, str.f_1, MISC::GET_HASH_KEY(str), num6, num5, str3, str2, 0, true);
	return;
}

Object func_99(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, Hash hParam5) // Position - 0x364C Signature - 22 06 0A
{
	Object objectIndexFromEntityIndex;
	Entity propForScenarioPoint;

	STREAMING::REQUEST_MODEL(hParam0, false);

	if (!STREAMING::HAS_MODEL_LOADED(hParam0))
		return 0;

	if (!TASK::DOES_SCENARIO_POINT_EXIST(iParam4) && hParam5 != 0)
		iParam4 = TASK::FIND_SCENARIO_OF_TYPE_HASH(vParam1, hParam5, 1f, 0, false);

	if (TASK::DOES_SCENARIO_POINT_EXIST(iParam4))
	{
		if (TASK::_DOES_SCENARIO_POINT_HAVE_PROPS(iParam4))
		{
			propForScenarioPoint = TASK::GET_PROP_FOR_SCENARIO_POINT(iParam4, "CONTAINER");
		
			if (ENTITY::IS_ENTITY_AN_OBJECT(propForScenarioPoint))
				objectIndexFromEntityIndex = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(propForScenarioPoint);
		}
	}
	else
	{
		objectIndexFromEntityIndex = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(vParam1, 0.5f, hParam0, false, false, true);
	}

	return objectIndexFromEntityIndex;
}

void func_100(var uParam0) // Position - 0x36D6 Signature - 22 01 03 00 00 39 19
{
	if (func_182())
		DECORATOR::DECOR_SET_BOOL(*uParam0, "loot_mp_mission_only", true);

	return;
}

BOOL func_101(Entity eParam0, float fParam1) // Position - 0x36F2 Signature - 22 02 04 00 00 66 00 6D CC
{
	return DECORATOR::DECOR_SET_FLOAT(eParam0, "fLoot_money", fParam1);
}

void func_102(Hash hParam0, var uParam1, var uParam2) // Position - 0x3705 Signature - 22 03 05 00 00 2F
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

void func_103(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3) // Position - 0x3911 Signature - 22 04 07 00 00 66 00 03 05 00 96 6A 8B 07 00 66 00 03 05 00 1D 69 8B 18 00 66 00 39 2B 5F 00 67 06 66 00 66 01 66 02 66 06 39 77 5F 00 41 68 C0
{
	Hash hash;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		hash = func_183(pedParam0);
		func_184(pedParam0, hParam1, iParam2, hash);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "loot_ammo1_type") || bParam3 && DECORATOR::DECOR_GET_INT(pedParam0, "loot_ammo1_type") == hParam1)
	{
		DECORATOR::DECOR_SET_INT(pedParam0, "loot_ammo1_type", hParam1);
		DECORATOR::DECOR_SET_INT(pedParam0, "loot_ammo1_amt", iParam2);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "loot_ammo2_type") || bParam3 && DECORATOR::DECOR_GET_INT(pedParam0, "loot_ammo2_type") == hParam1)
	{
		DECORATOR::DECOR_SET_INT(pedParam0, "loot_ammo2_type", hParam1);
		DECORATOR::DECOR_SET_INT(pedParam0, "loot_ammo2_amt", iParam2);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "loot_ammo3_type") || bParam3 && DECORATOR::DECOR_GET_INT(pedParam0, "loot_ammo3_type") == hParam1)
	{
		DECORATOR::DECOR_SET_INT(pedParam0, "loot_ammo3_type", hParam1);
		DECORATOR::DECOR_SET_INT(pedParam0, "loot_ammo3_amt", iParam2);
	}

	return;
}

void func_104(Ped pedParam0, Hash hParam1) // Position - 0x3A05 Signature - 22 02 05 00 00 66 00 03
{
	Hash hash;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		hash = func_183(pedParam0);
		func_184(pedParam0, hParam1, 1, hash);
	}
	else
	{
		DECORATOR::DECOR_SET_INT(pedParam0, "loot_weapon", hParam1);
	}

	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x3A44 Signature - 22 03 05 00 00 66 00 73
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_106(Entity eParam0, float fParam1, var uParam2, var uParam3, float fParam4, var uParam5, var uParam6) // Position - 0x3A6E Signature - 22 07 09 00 00 66 00 6D
{
	if (!DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_FLOAT(eParam0, "loot_item_offset1x", fParam1);
		DECORATOR::DECOR_SET_FLOAT(eParam0, "loot_item_offset1y", fParam1.f_1);
		DECORATOR::DECOR_SET_FLOAT(eParam0, "loot_item_offset1z", fParam1.f_2);
		DECORATOR::DECOR_SET_FLOAT(eParam0, "loot_item_orient1x", fParam4);
		DECORATOR::DECOR_SET_FLOAT(eParam0, "loot_item_orient1y", fParam4.f_1);
		DECORATOR::DECOR_SET_FLOAT(eParam0, "loot_item_orient1z", fParam4.f_2);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_FLOAT(eParam0, "loot_item_offset2x", fParam1);
		DECORATOR::DECOR_SET_FLOAT(eParam0, "loot_item_offset2y", fParam1.f_1);
		DECORATOR::DECOR_SET_FLOAT(eParam0, "loot_item_offset2z", fParam1.f_2);
		DECORATOR::DECOR_SET_FLOAT(eParam0, "loot_item_orient2x", fParam4);
		DECORATOR::DECOR_SET_FLOAT(eParam0, "loot_item_orient2y", fParam4.f_1);
		DECORATOR::DECOR_SET_FLOAT(eParam0, "loot_item_orient2z", fParam4.f_2);
	}

	return;
}

void func_107(Entity eParam0, int iParam1) // Position - 0x3B3F Signature - 22 02 04 00 00 66 00 6D A1
{
	if (!DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_type1"))
		if (iParam1 >= 0)
			DECORATOR::DECOR_SET_INT(eParam0, "loot_item_bone1", iParam1);
	else if (!DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_type2"))
		if (iParam1 >= 0)
			DECORATOR::DECOR_SET_INT(eParam0, "loot_item_bone2", iParam1);

	return;
}

void func_108(Ped pedParam0, int iParam1, int iParam2, int iParam3) // Position - 0x3B8A Signature - 22 04 07 00 00 66 00 03 05 00 96 6A 8B 07 00 66 00 03 05 00 1D 69 8B 18 00 66 00 39 2B 5F 00 67 06 66 00 66 01 66 02 66 06 39 77 5F 00 41 68 6E
{
	Hash hash;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		hash = func_183(pedParam0);
		func_184(pedParam0, iParam1, iParam2, hash);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_INT(pedParam0, "loot_item_type1", iParam1);
		DECORATOR::DECOR_SET_INT(pedParam0, "loot_item_amt1", iParam2);
		DECORATOR::DECOR_SET_INT(pedParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_INT(pedParam0, "loot_item_type2", iParam1);
		DECORATOR::DECOR_SET_INT(pedParam0, "loot_item_amt2", iParam2);
		DECORATOR::DECOR_SET_INT(pedParam0, "loot_item_model2", iParam3);
		return;
	}

	return;
}

Hash func_109(var uParam0) // Position - 0x3C2C Signature - 22 01 03 00 00 2F 50
{
	return 0;
}

Hash func_110(Hash hParam0) // Position - 0x3C35 Signature - 22 01 03 00 00 66 00 03 05 00 5F 8B
{
	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	return 0;
}

BOOL func_111(Hash hParam0) // Position - 0x3C4C Signature - 22 01 03 00 00 66 00 39 CA
{
	return func_61(hParam0) == joaat("WEAPON");
}

BOOL func_112(Hash hParam0) // Position - 0x3C60 Signature - 22 01 03 00 00 66 00 03 05 00 79
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

void func_113(var uParam0, var uParam1) // Position - 0x3C6E Signature - 22 02 04 00 00 86
{
	*uParam0 = { -0.12f, 0.12f, 0.12f };
	*uParam1 = { 90f, 0f, 115f };
	return;
}

BOOL func_114(Hash hParam0) // Position - 0x3C98 Signature - 22 01 08
{
	var unk;

	if (func_68() != -1)
		return false;

	if (func_63(hParam0, 1048576))
		return false;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return func_120(hParam0, &unk, 1, false, false, -1, false);

	return func_86(hParam0, 1);
}

void func_115(Hash hParam0, int iParam1, BOOL bParam2, var uParam3, Hash hParam4) // Position - 0x3CDD Signature - 22 05 08
{
	Hash weaponHash;

	if (func_61(hParam0) != joaat("WEAPON"))
		return;

	weaponHash = func_50(hParam0, false);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		return;

	if (bParam2 || !func_131(weaponHash))
	{
		if (bParam2 || !WEAPON::HAS_PED_GOT_WEAPON(Global_33, weaponHash, 0, false) && func_156(hParam0, false, false, false) == 0)
		{
			if (func_68() == -1)
				func_69(weaponHash);
		
			if (!*uParam3 && !(hParam4 == 1248274121))
			{
				func_98(hParam0, iParam1, false, 0, 0, false, false);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}

	return;
}

void func_116(Hash hParam0, var uParam1) // Position - 0x3D87 Signature - 22 02 04 00 00 66 00 37
{
	if (func_62(hParam0, 58855631))
		func_176(hParam0, -915411861, uParam1, true);

	return;
}

struct<5> func_117(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3DAC Signature - 22 03 2F
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_185(bParam1) };
	unk.f_4 = 1084182731;
	num = func_61(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_189(hParam0, -1823706425))
			{
				unk = { func_136(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_189(hParam0, -1483207246))
			{
				unk = { func_136(joaat("WARDROBE"), unk, 1034665895, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_136(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1311702610))
			{
				unk.f_4 = -1311702610;
			}
			else if (func_189(hParam0, -1653629781))
			{
				unk = { func_136(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -1591664384;
			unk = { func_188(bParam1) };
		
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
			unk = { func_136(joaat("WARDROBE"), unk, 1034665895, bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_186(bParam1) };
		
			if (bParam2 && func_187(hParam0, true))
			{
				unk6.f_9 = -1591664384;
			
				if (!func_134(hParam0, &unk, 1728382685, false, false))
					unk.f_4 = 1728382685;
				else if (!func_134(hParam0, &unk, -649335959, false, false))
					unk.f_4 = -649335959;
				else if (func_135(hParam0, &unk6, 1728382685))
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
			
				if (!func_190(unk, &unk28, bParam1, false, -1))
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
			else if (func_189(hParam0, -1653629781))
			{
				unk = { func_136(1384535894, unk, 1784584921, bParam1) };
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

int func_118(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4123 Signature - 22 04 06 00 00 66 00 2F 39
{
	if (!func_43(hParam0, 0))
	{
		if (func_191(func_123(hParam0), 2))
			return -1;
	
		return 0;
	}

	if (func_61(hParam0) == joaat("fee"))
		return -1;

	if (!bParam2 && func_139(hParam0, joaat("DEFAULT")) == 0)
		bParam2 = true;

	if (bParam2)
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_133(bParam3), hParam0);
}

int func_119(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4197 Signature - 22 04 06 00 00 66 00 39
{
	if (func_75(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_133(bParam1), hParam0, bParam3);
}

BOOL func_120(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6) // Position - 0x41CA Signature - 22 07 25
{
	var unk;
	var unk5;
	int num;
	int num2;

	func_192(&hParam0);

	if (!func_43(hParam0, 0) && !func_191(func_123(hParam0), 2))
		return 0;

	if (!bParam3 && func_139(hParam0, joaat("DEFAULT")) == 0)
		bParam3 = true;

	if (func_111(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		unk = { func_186(false) };
		unk5.f_9 = -1591664384;
	
		if (!func_134(hParam0, &unk, 1728382685, false, false))
			return 0;
		else if (func_135(hParam0, &unk5, 1728382685))
			return 0;
	
		if (func_187(hParam0, true))
			if (!func_134(hParam0, &unk, -649335959, false, false))
				return 0;
			else if (func_135(hParam0, &unk5, -649335959))
				return 0;
	
		return 1;
	}

	num = iParam5;

	if (iParam5 < 0)
		num = func_118(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return 0;
	else if (num == 0)
		return 1;

	num2 = func_193(hParam0, *panParam1, panParam1->f_4, bParam4, bParam3, bParam6);

	if (num2 + iParam2 > num)
		return 1;

	return 0;
}

BOOL func_121() // Position - 0x42FE Signature - 22 00 02 00 00 70
{
	if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33) && !func_194(Global_33, 1369124074) && !func_194(Global_33, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
		return true;

	return false;
}

int func_122(Hash hParam0, int iParam1) // Position - 0x4363 Signature - 22 02 2F
{
	var unk;
	int num;
	int i;

	unk = 20;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(hParam0, &unk, &num, 20))
	{
		for (i = 0; i < num; i = i + 1)
		{
			if (unk[i /*2*/].f_1 == iParam1)
				return unk[i /*2*/];
		}
	}

	return 0;
}

Hash func_123(Hash hParam0) // Position - 0x43AD Signature - 22 01 03 00 00 66 00 50
{
	return hParam0;
}

BOOL func_124(Hash hParam0, Hash hParam1) // Position - 0x43B7 Signature - 22 02 04 00 00 66 00 11
{
	if (!func_191(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

BOOL func_125(int iParam0) // Position - 0x43ED Signature - 22 01 03 00 00 66 00 2F 15
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_126(int iParam0) // Position - 0x4400 Signature - 22 01 06 00 00 66 00 67
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_38.f_3651[num2], offset);
}

void func_127(int iParam0) // Position - 0x442A Signature - 22 01 07 00 00 66 00 67
{
	int num;
	int num2;
	int offset;
	int address;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	address = Global_38.f_3651[num2];
	MISC::SET_BIT(&address, offset);
	Global_38.f_3651[num2] = address;
	return;
}

void func_128(int iParam0) // Position - 0x4464 Signature - 22 01 03 00 00 66 00 3C 37
{
	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (func_203() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_204("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_78(677, false);
			break;
	
		case 3:
			if (func_203() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_204("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_78(678, false);
			break;
	
		case 4:
			if (func_203() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_204("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_78(679, false);
			break;
	
		case 5:
			if (func_203() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_204("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_78(680, false);
			break;
	
		case 6:
			break;
	
		case 7:
			break;
	
		case 8:
			break;
	
		case 9:
			break;
	
		case 10:
			break;
	
		case 11:
			func_195(true);
			break;
	
		case 12:
			break;
	
		case 13:
			break;
	
		case 14:
			break;
	
		case 15:
			break;
	
		case 16:
			break;
	
		case 17:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_196(1);
			break;
	
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_196(2);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_196(3);
			break;
	
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
	
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
	
		case 22:
			PLAYER::_SET_MOUNT_PROMPT_DISABLED(false);
			break;
	
		case 23:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			break;
	
		case 24:
			break;
	
		case 25:
			break;
	
		case 26:
			break;
	
		case 27:
			break;
	
		case 28:
			break;
	
		case 29:
			break;
	
		case 30:
			break;
	
		case 31:
			break;
	
		case 32:
			func_197(true);
			break;
	
		case 33:
			func_198(true);
			break;
	
		case 34:
			func_199(true);
			break;
	
		case 35:
			break;
	
		case 36:
			func_200(false);
			break;
	
		case 37:
			func_201(false);
			break;
	
		case 38:
			func_202(false);
			break;
	
		case 39:
			break;
	
		case 40:
			break;
	
		case 41:
			break;
	
		case 42:
			break;
	
		case 43:
			break;
	
		case 44:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1940199.f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
	
		case 45:
			break;
	
		case 46:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	
		case 47:
			if (func_68() == -1)
				if (!func_86(1013902307, 1))
					func_73(1013902307, 1, 752097756);
			break;
	
		case 48:
			if (func_68() == -1)
				if (!func_86(786809402, 1))
					func_73(786809402, 1, 752097756);
			break;
	
		case 49:
			if (func_68() == -1)
			{
				if (!func_86(1013902307, 1))
					func_73(1013902307, 1, 752097756);
			
				if (!func_86(142640135, 1))
					func_73(142640135, 1, 752097756);
			}
			break;
	
		case 50:
			if (func_68() == -1)
			{
				if (!func_86(786809402, 1))
					func_73(786809402, 1, 752097756);
			
				if (!func_86(-518019409, 1))
					func_73(-518019409, 1, 752097756);
			}
			break;
	
		case 51:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
	
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
	
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
	
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("compendium"), true);
			break;
	
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}

	return;
}

int func_129(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x49E0 Signature - 22 05 24
{
	var unk;
	var unk13;
	var unk26;

	unk.f_1 = 10;
	unk13.f_1 = 11;
	return func_205(iParam0, &unk26, &unk13, &unk, iParam1, iParam2, iParam3, bParam4);
}

BOOL func_130(Hash hParam0) // Position - 0x4A10 Signature - 22 01 04 00 00 66 00 03 05 00 A2 67 03 66 03 2F 15 04 00 2F 50 01 01 66 03 03 05 00 58
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock))
		return true;

	return false;
}

BOOL func_131(Hash hParam0) // Position - 0x4A38 Signature - 22 01 04 00 00 66 00 03 05 00 A2 67 03 66 03 2F 15 04 00 2F 50 01 01 66 03 03 05 00 4B
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

BOOL func_132(Hash hParam0) // Position - 0x4A60 Signature - 22 01 03 00 00 66 00 03 05 00 5F 6A
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_133(BOOL bParam0) // Position - 0x4A7B Signature - 22 01 03 00 00 39 0D 28 00 08 15 17
{
	if (func_68() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_134(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4ABC Signature - 22 05 07 00 00 66 00 42
{
	return func_193(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_135(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x4AD7 Signature - 22 03 09
{
	var unk;

	if (func_206(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_136(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x4AF8 Signature - 22 07 0D
{
	var outGuid;

	if (!func_43(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_133(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_137(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x4B29 Signature - 22 07 3A
{
	var unk;
	int num;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_207(hParam0))
		return false;

	unk.f_9 = -1591664384;

	if (!func_190(*panParam1, &unk, bParam6, false, -1))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_70(bParam6))
	{
		num = -1;
	
		if (unk.f_13)
		{
		}
		else if (func_68() == 0)
		{
			unk15.f_9 = 1;
			unk15.f_11 = -1591664384;
			unk15.f_8 = hParam0;
			unk15 = { *panParam1 };
			unk15.f_4 = { *uParam2 };
			unk15.f_11 = uParam2->f_4;
			unk15.f_9 = iParam3;
			unk15.f_12 = hParam4;
			num = func_208(joaat("use"), &unk15, true);
		
			if (num != -1)
			{
				num2.f_7 = -142743235;
				num2.f_16 = -1;
				num2 = iParam5;
				num2.f_7 = hParam4;
				func_209(num, num2);
			}
		}
	
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_133(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

void func_138(Hash hParam0, int iParam1) // Position - 0x4C47 Signature - 22 02 07 00 00 70
{
	int ammo;
	int ammo2;
	int ammo3;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_33, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo3 = func_210(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_33, hParam0, ammo3);
	
		if (WEAPON::GET_MAX_AMMO(Global_33, &ammo2, hParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, hParam0) > ammo2)
			WEAPON::SET_PED_AMMO(Global_33, hParam0, ammo2);
	}

	return;
}

int func_139(Hash hParam0, int iParam1) // Position - 0x4CB9 Signature - 22 02 04 00 00 66 01 2F 15 04 00 2F 50 02 01 66 00 39
{
	if (iParam1 == 0)
		return 0;

	if (func_191(func_123(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, iParam1);
}

int func_140(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x4CE5 Signature - 22 03 0F 00 00 66 00 2F 39 3D 10 00 05 8B 04 00 2F 50 03 01 66 00
{
	int num;
	var guid2;
	var guid1;

	if (!func_43(hParam0, 0))
		return 0;

	num = func_139(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	guid2 = { func_117(hParam0, false, false) };

	if (func_120(hParam0, &guid2, iParam1, false, false, -1, false))
		return 0;

	if (!func_70(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_133(false), &guid1, &guid2, hParam0, guid2.f_4, iParam1, hParam2))
		return 0;

	return 1;
}

int func_141(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x4D61 Signature - 22 06 08
{
	if (!func_43(hParam0, 0))
		return 0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_120(hParam0, panParam2, iParam3, bParam5, false, -1, false))
		return 0;

	if (!func_70(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_133(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return 0;

	return 1;
}

void func_142(Hash hParam0) // Position - 0x4DC9 Signature - 22 01 06 00 00 66 00 03
{
	char* propertyName;
	char* propertyName2;
	int value;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || Global_1940199.f_6)
		return;

	if (WEAPON::IS_WEAPON_BOW(hParam0))
		return;

	propertyName = "player_newWeaponType";
	propertyName2 = "player_newWeaponTime";

	if (WEAPON::IS_WEAPON_PISTOL(hParam0))
	{
		propertyName = "player_newPistolWeaponType";
		propertyName2 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(hParam0))
	{
		propertyName = "player_newRevolverWeaponType";
		propertyName2 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_RIFLE(hParam0))
	{
		propertyName = "player_newRifleWeaponType";
		propertyName2 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(hParam0))
	{
		propertyName = "player_newShotgunWeaponType";
		propertyName2 = "player_newShotgunWeaponTime";
	}

	DECORATOR::DECOR_SET_INT(Global_33, propertyName, hParam0);
	value = func_211();
	func_212(&value, 0, 0, 0, 1, 0, 0, false);
	DECORATOR::DECOR_SET_INT(Global_33, propertyName2, value);
	return;
}

int func_143(Hash hParam0) // Position - 0x4E98 Signature - 22 01 05 00 00 66 00 39
{
	int num;
	int pedAmmoByType;

	if (func_112(hParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, joaat("ammo_arrow")) <= 0)
			num = 10;
		else
			num = 0;
	}
	else if (WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(hParam0))
			num = 12;
		else
			num = WEAPON::GET_WEAPON_CLIP_SIZE(hParam0) * 4;
	
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
	
		if (pedAmmoByType >= num)
			num = 0;
		else if (pedAmmoByType > 0)
			num = num - pedAmmoByType;
	}

	return num;
}

BOOL func_144() // Position - 0x4F14 Signature - 22 00 02 00 00 2F 50 00 01 22 01
{
	return false;
}

BOOL func_145(Hash hParam0) // Position - 0x4F1D Signature - 22 01 03 00 00 66 00 03 05 00 2D
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

Hash func_146(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4F2F Signature - 22 04 07 00 00 2F 67 06 66 00
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

int func_147(Hash hParam0) // Position - 0x4F55 Signature - 22 01 04 00 00 66 00 03 05 00 84
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_A_GUN(weaponTypeFromAmmoType))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_64(49))
			{
				if (!func_64(47))
					return 149;
			
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_64(50))
			{
				if (!func_64(48))
					return 150;
			
				return 152;
			}
		}
	}

	return 153;
}

void func_148(int iParam0, var uParam1, var uParam2) // Position - 0x4FC1 Signature - 22 03 06 00 00 66 00 67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_149(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x4FDD Signature - 22 04 06 00 00 66 01
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_213(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_214(iParam0))
		return false;

	if (func_215(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_158(iParam0, 1) || func_216(32768))
		if (!func_158(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_217())
		return false;

	return true;
}

void func_150(int iParam0, int iParam1) // Position - 0x507F Signature - 22 02 05 00 00 66 00 5D
{
	int address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

int func_151(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x50A3 Signature - 22 03 1F
{
	float num;
	int num2;
	int i;
	Hash hash;

	if (func_68() == 0)
		return 0;

	if (iParam2 != -1)
		return iParam2;

	num = 1f;

	if (bParam1 && func_86(joaat("provision_trinket_elk_antler"), 1))
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
		
			if (func_43(hash, 0) && func_62(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

void func_152(int iParam0, const char* sParam1, int iParam2, BOOL bParam3) // Position - 0x5173 Signature - 22 04 06 00 00 66 00 2F 15
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_218(iParam0, 1000);
			return;
		}
	
		sParam1 = "FEED_MONEY_EARN";
	}

	func_164(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_153(int iParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x51C5 Signature - 22 04 09
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
	
		if (func_219() || func_220())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_164(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
		num > 0;
		func_164(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, 752097756);
		func_46(func_161(joaat("CAREER_CASH")), value);
	}

	return;
}

BOOL func_154(Hash hParam0, int iParam1) // Position - 0x52A0 Signature - 22 02 16
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_43(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_48(hParam0, iParam1);
	unk.f_9 = -1591664384;

	if (func_221("ALL WEAPONS", &num, &num2, -1591664384, false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_222(&unk, i, num, num2))
			{
			}
			else if (!func_132(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_223(num);
				return true;
			}
		}
	
		func_223(num);
	}

	return false;
}

BOOL func_155(Hash hParam0) // Position - 0x5348 Signature - 22 01 06 00 00 66 00 2F
{
	int num;
	int num2;
	int num3;

	if (!func_43(hParam0, 0))
		return false;

	num = func_168(hParam0);

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

	num2 = func_224(hParam0);

	if (!(num2 == 0))
	{
		num3 = func_225(&(Global_17418.f_55.f_664.f_1354.f_5), num2);
	
		if (num3 == -1)
			return true;
	}

	num2 = func_226(hParam0);
	num3 = func_225(&(Global_17418.f_55.f_664.f_1354.f_5), num2);

	if (num3 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num3 /*17*/];
}

int func_156(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5404 Signature - 22 04 0D
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_43(hParam0, 0))
		return 0;

	num = func_61(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_48(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_227(hParam0, false);
	}

	if (func_139(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_133(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_228(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_133(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

Hash func_157(Hash hParam0, BOOL bParam1) // Position - 0x54C6 Signature - 22 02 04 00 00 66 00 3C
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

BOOL func_158(int iParam0, int iParam1) // Position - 0x5568 Signature - 22 02 04 00 00 66 00 5D
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

void func_159(var uParam0, int iParam1) // Position - 0x5581 Signature - 22 02 06 00 00 66 01
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

int func_160(int iParam0, var uParam1, Any anParam2, int iParam3, int iParam4) // Position - 0x56AD Signature - 22 05 17
{
	var unk;
	int num;

	if (iParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_229(uParam1);
	SECURE_STORE(&unk, iParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_3.f_1 = 10;
	num = iParam3;
	num.f_3 = { *uParam1 };
	num.f_2 = iParam4;
	func_230(anParam2, iParam0, num);
	return 1;
}

struct<2> func_161(int iParam0) // Position - 0x571C Signature - 22 01 05 00 00 66 00 67
{
	int num;

	num = iParam0;
	return num;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x572C Signature - 22 01 03 00 00 66 00 3C 0F 00 00
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
	
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
	
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
	
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
	
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
	
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
	
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
	
		case 7:
			return "PROVISION_FISH_MUSKIE";
	
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
	
		case 9:
			return "PROVISION_FISH_PERCH";
	
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
	
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
	
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
	
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
	
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
	
		default:
		
	}

	return "FISHTYPE_UNKNOWN";
}

Hash func_163(Hash hParam0) // Position - 0x5803 Signature - 22 01 06 00 00 66 00 4B
{
	Hash num;

	if (!func_231(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
		return joaat("_placeholder");

	return num;
}

int func_164(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x582D Signature - 22 09 20
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num.f_1 = sParam5;
	num.f_2 = sParam6;
	num.f_3 = iParam7;
	num = 450;
	unk13.f_1 = sParam0;
	unk13.f_2 = sParam1;
	unk13.f_3 = hParam2;
	unk13.f_4 = iParam3;
	unk13.f_5 = iParam4;
	unk13.f_6 = 0;
	num2 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&num, &unk13, bParam8);
	func_232(sParam0, sParam1, hParam2);
	return num2;
}

BOOL func_165() // Position - 0x5890 Signature - 22 00 02 00 00 85 64
{
	return !Global_1913444;
}

void func_166(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x589D Signature - 22 06 09
{
	int i;

	for (i = 0; i < Global_1913444.f_3; i = i + 1)
	{
		if (Global_1913444.f_4[i /*6*/] == hParam0 && Global_1913444.f_4[i /*6*/].f_2 == bParam2 && Global_1913444.f_4[i /*6*/].f_3 == bParam3 && Global_1913444.f_4[i /*6*/].f_4 == bParam4 && Global_1913444.f_4[i /*6*/].f_5 == iParam5)
		{
			Global_1913444.f_4[i /*6*/].f_1 = Global_1913444.f_4[i /*6*/].f_1 + iParam1;
			return;
		}
	}

	if (Global_1913444.f_3 < 19)
	{
		Global_1913444.f_4[Global_1913444.f_3 /*6*/] = hParam0;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_1 = iParam1;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_2 = bParam2;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_3 = bParam3;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_4 = bParam4;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_5 = iParam5;
		Global_1913444.f_3 = Global_1913444.f_3 + 1;
	}

	return;
}

var func_167(BOOL bParam0, var uParam1, var uParam2) // Position - 0x59C0 Signature - 22 03 05 00 00 66 00 8B 08 00 66 01 50 03 01 68 05 00 66 02 50 03 01 22 01
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_168(Hash hParam0) // Position - 0x59D7 Signature - 22 01 0A 00 00 66 00 2F 39 3D 10 00 05 8B 04 00 2F 50 01 01 66 00 4B 03 03 09 00 86 05 8B 04 00 2F 50 01 01 4B 03 27 01
{
	var unk;

	if (!func_43(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_1;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_169(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x5A02 Signature - 22 06 2E 00 00 4B 0B 6A 80 02 62 3D 41 6A 80 12 6D 08 3D 41 41 66 00 4B 0B 03 09 00 A7 8B CF
{
	int i;
	Hash hashKey;
	Hash hashKey2;
	var unk;

	unk.f_2 = 5;
	unk.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &unk))
	{
		for (i = 0; i < 5; i = i + 1)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(unk.f_2[i /*3*/]))
				goto 0xE3;
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(unk.f_2[i /*3*/].f_1))
			{
			}
			else
			{
				hashKey = MISC::GET_HASH_KEY(unk.f_2[i /*3*/]);
				hashKey2 = MISC::GET_HASH_KEY(unk.f_2[i /*3*/].f_1);
			
				if (iParam2 != 0 && unk.f_2[i /*3*/].f_2 != iParam2)
					goto 0xE3;
			
				if (hParam3 != 0 && hashKey2 != hParam3)
					goto 0xE3;
			
				if (hParam4 != 0 && hashKey != hParam4)
					goto 0xE3;
			
				if (hParam5 != 0 && hashKey2 == hParam5)
				{
				}
				else
				{
					*uParam1 = { unk.f_2[i /*3*/] };
					return true;
				}
			}
		}
	}

	return false;
}

char* func_170(Hash hParam0) // Position - 0x5AF5 Signature - 22 01 03 00 00 66 00 37 D4
{
	if (func_62(hParam0, -1995062316))
		return "collectible_arrowheads";

	if (func_62(hParam0, 1239889275))
		return "collectible_liquor_bottles";

	if (func_62(hParam0, 143267379))
		return "collectible_coins";

	if (func_62(hParam0, -944041124))
		return "colectible_heirlooms";

	if (func_62(hParam0, 1562621600))
		return "collectible_jewelry";

	if (func_62(hParam0, -149719013))
		return "collectible_bird_eggs";

	if (func_62(hParam0, 1940829793))
		return "collectible_tarot_cards";

	if (func_62(hParam0, 781094263))
		return "collectible_flowers";

	if (func_62(hParam0, -352095726) || func_62(hParam0, -2014783736) || func_62(hParam0, -545064757) || func_62(hParam0, 679186220))
		return "collectible_found_fossil";

	return "";
}

BOOL func_171(Hash hParam0) // Position - 0x5BF1 Signature - 22 01 03 00 00 66 00 37 DA
{
	if (func_62(hParam0, -189374246))
		if (func_233(hParam0, -1305775593) || func_233(hParam0, 1384151091) || func_233(hParam0, 2075388272) || func_233(hParam0, -1738780413))
			return true;

	if (func_62(hParam0, -753854379) || func_62(hParam0, 173360570))
		return true;

	return false;
}

BOOL func_172(int iParam0) // Position - 0x5C70 Signature - 22 01 03 00 00 66 00 3C 03
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
	
		default:
		
	}

	return true;
}

Hash func_173(Hash hParam0) // Position - 0x5C97 Signature - 22 01 27
{
	var unk;
	int i;

	if (!func_43(hParam0, 0))
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

Hash func_174(Hash hParam0) // Position - 0x5D05 Signature - 22 01 12
{
	int num;
	var unk;
	int collectionId;
	int num2;
	int i;
	Hash hash;

	num = func_234(hParam0);

	if (num == 0)
		return 0;

	unk = { func_235(-1591664384, -1591664384, 0, 0, 0, 0, -1, num, 0) };

	if (func_236(unk, &collectionId, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(collectionId, i, &hash) && func_237(hash))
			{
				func_238(collectionId);
				return hash;
			}
		}
	
		func_238(collectionId);
	}

	return 0;
}

int func_175(Hash hParam0, Hash hParam1) // Position - 0x5D8A Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 01
{
	if (hParam0 == 0)
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, -949239683))
		return 1;

	return 0;
}

int func_176(Hash hParam0, int iParam1, var uParam2, BOOL bParam3) // Position - 0x5DBB Signature - 22 04 35
{
	var unk;

	if (!func_43(hParam0, 0) && !func_191(func_123(hParam0), 2))
		return 0;

	unk.f_4 = 15;
	unk.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, iParam1, &unk))
	{
		!bParam3;
		return 0;
	}

	!bParam3;
	*uParam2 = unk.f_1;
	return 1;
}

const char* func_177(const char* sParam0, int iParam1) // Position - 0x5E1A Signature - 22 02 04 00 00 6D
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

 func_178(Hash hParam0, int iParam1) // Position - 0x5E34 Signature - 22 02 05 00 00 66 00 66 01 39
{
	 num;

	num = func_239(hParam0, iParam1);

	if (num == 0)
		return 0;

	return num;
}

BOOL func_179(Hash hParam0, char* sParam1) // Position - 0x5E52 Signature - 22 02 15
{
	int lengthOfLiteralString;
	var unk;

	if (!func_43(hParam0, 0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(sParam1, func_240(hParam0), 128);
	lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);

	if (!func_241(hParam0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(&unk, func_242(hParam0), 128);

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		return false;

	TEXT_LABEL_APPEND_STRING(&unk, " - ", 128);
	lengthOfLiteralString = lengthOfLiteralString + HUD::GET_LENGTH_OF_LITERAL_STRING(&unk);
	TEXT_LABEL_APPEND_STRING(&unk, sParam1, 128);

	if (lengthOfLiteralString >= 127)
		return false;

	*sParam1 = { unk };
	return true;
}

const char* func_180(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x5ECF Signature - 22 10 12
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

const char* func_181(const char* sParam0, int iParam1) // Position - 0x5EE3 Signature - 22 02 04 00 00 66 01 37
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);

	return func_177(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

BOOL func_182() // Position - 0x5F19 Signature - 22 00 02 00 00 85 82
{
	return Global_3145858 != 371211549;
}

Hash func_183(Ped pedParam0) // Position - 0x5F2B Signature - 22 01 04 00 00 66 00 03 05 00 96
{
	Ped pedIndexFromEntityIndex;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(pedParam0))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
		
			if (PED::IS_PED_HUMAN(pedIndexFromEntityIndex))
				if (PED::IS_PED_MALE(pedIndexFromEntityIndex))
					return 536905469;
				else
					return -352521166;
		}
	}

	return 205298116;
}

BOOL func_184(Ped pedParam0, Hash hParam1, int iParam2, Hash hParam3) // Position - 0x5F77 Signature - 22 04 1E
{
	int argStruct;
	int num;

	argStruct.f_1 = 10;
	argStruct.f_12 = 10;
	argStruct = 1;
	argStruct.f_1[0] = hParam1;
	argStruct.f_12[0] = iParam2;
	num = 13;
	return ENTITY::_REQUEST_ENTITY_LOOT_LIST(pedParam0, &argStruct, hParam3, num, 2, false);
}

struct<4> func_185(BOOL bParam0) // Position - 0x5FB7 Signature - 22 01 04 00 00 5D 17 00 18 27 0E 2F
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_133(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_136(joaat("character"), func_243(), -1591664384, bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_136(joaat("character"), func_243(), -1591664384, false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_136(joaat("character"), func_243(), -1591664384, bParam0);
}

struct<4> func_186(BOOL bParam0) // Position - 0x6057 Signature - 22 01 04 00 00 66 00 39 7B 4A 00 67 03 66 03 11 15
{
	int num;

	num = func_133(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_136(923904168, func_185(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_136(923904168, func_185(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_136(923904168, func_185(bParam0), -740156546, false);
}

BOOL func_187(Hash hParam0, BOOL bParam1) // Position - 0x60F8 Signature - 22 02 04 00 00 66 00 39
{
	if (func_168(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_244();
		else
			return true;

	return false;
}

struct<4> func_188(BOOL bParam0) // Position - 0x612F Signature - 22 01 04 00 00 66 00 39 7B 4A 00 67 03 66 03 11 0B
{
	int num;

	num = func_133(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_136(271701509, func_185(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_136(271701509, func_185(bParam0), 12999093, false);
}

BOOL func_189(Hash hParam0, int iParam1) // Position - 0x6199 Signature - 22 02 08
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
			if (func_245(hParam0, iParam1, hash))
				return true;
	}

	return false;
}

BOOL func_190(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x6206 Signature - 22 08 0A 00 00 4B
{
	return func_246(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

BOOL func_191(Hash hParam0, int iParam1) // Position - 0x621C Signature - 22 02 04 00 00 66 00 2F 15 04 00 2F 50 02 01 66 00 66 01 03 09 00 3B
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

int func_192(var uParam0) // Position - 0x6236 Signature - 22 01 03 00 00 66 00 76 2F 39
{
	if (!func_43(*uParam0, 0))
		return 0;

	if (!func_247(*uParam0))
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

int func_193(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x62C0 Signature - 22 09 10
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_43(hParam0, 0))
		return 0;

	if (!bParam7 && func_139(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_136(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_133(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_133(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_194(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x633F Signature - 22 02 05 00 00 66 00 66 01 09
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

void func_195(BOOL bParam0) // Position - 0x6368 Signature - 22 01 03 00 00 70 21 00 03 05 00 96 05 8B 03 00 50 01 00 66
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, true);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, false);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, true);
	}

	return;
}

void func_196(int iParam0) // Position - 0x63A6 Signature - 22 01 04 00 00 5D 0B
{
	Hash itemContextByIndex;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1956875.f_5.f_7))
		return;

	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1956875.f_5.f_7) > iParam0)
	{
		itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1956875.f_5.f_7, iParam0);
	
		if (itemContextByIndex == Global_1956875.f_5.f_14[iParam0 /*102*/])
			return;
	}

	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956875.f_5.f_7, iParam0, "pause_info_panel_list", Global_1956875.f_5.f_14[iParam0 /*102*/]);
	return;
}

void func_197(BOOL bParam0) // Position - 0x6414 Signature - 22 01 03 00 00 70 21 00 03 05 00 96 05 8B 03 00 50 01 00 70 21 00 03 05 00 23 6A 05 8B 08 00 70 21 00 03 05 00 54 30 8B 00 00 70 21 00 25 B8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);
	PED::SET_PED_CONFIG_FLAG(Global_33, 440, !bParam0);
	return;
}

void func_198(BOOL bParam0) // Position - 0x644E Signature - 22 01 03 00 00 70 21 00 03 05 00 96 05 8B 03 00 50 01 00 70 21 00 03 05 00 23 6A 05 8B 08 00 70 21 00 03 05 00 54 30 8B 00 00 70 21 00 25 B7
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);
	PED::SET_PED_CONFIG_FLAG(Global_33, 439, !bParam0);
	return;
}

void func_199(BOOL bParam0) // Position - 0x6488 Signature - 22 01 03 00 00 70 21 00 03 05 00 96 05 8B 03 00 50 01 00 70 21 00 03 05 00 23 6A 05 8B 08 00 70 21 00 03 05 00 54 30 8B 00 00 70 21 00 25 B6
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);
	PED::SET_PED_CONFIG_FLAG(Global_33, 438, !bParam0);
	return;
}

void func_200(BOOL bParam0) // Position - 0x64C2 Signature - 22 01 04 00 00 37
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_201(BOOL bParam0) // Position - 0x64E5 Signature - 22 01 05 00 00 6D 32
{
	int promptType;
	Player player;

	promptType = 50;
	player = PLAYER::PLAYER_ID();

	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, false);
	}

	return;
}

void func_202(BOOL bParam0) // Position - 0x6527 Signature - 22 01 05 00 00 6D 31
{
	int promptType;
	Player player;

	promptType = 49;
	player = PLAYER::PLAYER_ID();

	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, false);
	}

	return;
}

BOOL func_203() // Position - 0x6569 Signature - 22 00 02 00 00 09 50
{
	return true;
}

int func_204(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x6588 Signature - 22 0B
{
	int num;
	int num2;
	int num3;

	num = -2;
	num = iParam4;
	num.f_1 = iParam5;
	num.f_2 = iParam6;
	num.f_3 = iParam8;
	num2.f_7 = 1;
	num2 = iParam7;
	num2.f_1 = sParam0;
	num2.f_2 = sParam1;
	num2.f_3 = 0;
	num2.f_4 = iParam2;
	num2.f_5 = iParam3;
	num2.f_7 = 1;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam9, bParam10);
	return num3;
}

int func_205(int iParam0, Any anParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x65EE Signature - 22 08 1E
{
	BOOL flag;
	int num;
	var unk;
	var unk2;

	if (iParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(iParam0))
		return 1;

	if (bParam7)
	{
		flag = GANG::NETWORK_IS_GANG_ID_VALID(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) && GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
		bParam7 = flag;
	}

	POSSE::_0xC08AFF658B2E51DA(&num);

	if (num != 0)
		func_248(iParam2, -372840566);

	SECURE_STORE(&unk, iParam0);

	if (!bParam7)
		if (!NETWORK::_0x64A36BA85CE01A81(&unk, &(uParam3->f_1), &(iParam2->f_1), anParam1))
			return 0;
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&unk, &(iParam2->f_1), anParam1))
		return 0;

	unk2.f_1 = 11;
	unk2.f_16 = 255;
	unk2.f_13 = iParam4;
	unk2.f_16 = iParam5;
	unk2.f_14 = iParam6;
	unk2 = { *iParam2 };
	func_249(anParam1, iParam0, unk2);
	return 1;
}

BOOL func_206(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x66CF Signature - 22 04 07 00 00 2F 39
{
	int inventoryId;

	inventoryId = func_133(false);
	*panParam1 = { func_136(hParam0, func_186(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_207(Hash hParam0) // Position - 0x6714 Signature - 22 01 03 00 00 66 00 03 05 00 7F
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

int func_208(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x672A Signature - 22 03 06 00 00 66 00 2F
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_250(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_252(func_251(num, hParam0, panParam1), num, panParam1);
	else
		return func_253(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

void func_209(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x6794 Signature - 22 12
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
		{
			if (Global_1292143.f_20.f_1[i /*21*/].f_1 == 1 || Global_1292143.f_20.f_1[i /*21*/].f_1 == 5)
				Global_1292143.f_20.f_1[i /*21*/].f_4 = { uParam1 };
		
			return;
		}
	}

	return;
}

int func_210(int iParam0, int iParam1) // Position - 0x6812 Signature - 22 02 04 00 00 66 00 66 01 2E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

int func_211() // Position - 0x6828 Signature - 22 00 02 00 00 85 E9
{
	return Global_1902569;
}

void func_212(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x6834 Signature - 22 08 11
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_254(*uParam0);
	i = func_255(*uParam0);
	num2 = func_256(*uParam0);
	j = func_257(*uParam0);
	k = func_258(*uParam0);
	l = func_259(*uParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + iParam1; l >= 60; l = l - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (k = k + iParam2; k >= 60; k = k - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (j = j + iParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_260(i, num); num2 > m; m = func_260(i, num))
	{
		iParam5 = iParam5 + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			iParam6 = iParam6 + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	if (!bParam7)
		num = num + iParam6;

	func_261(uParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_213(int iParam0, int iParam1) // Position - 0x69BC Signature - 22 02 04 00 00 66 00 87
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_214(int iParam0) // Position - 0x69D4 Signature - 22 01 03 00 00 66 00 42
{
	if (func_158(iParam0, 4))
		return false;

	return true;
}

BOOL func_215(int iParam0) // Position - 0x69EB Signature - 22 01 07 00 00 66 00 5D
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

BOOL func_216(int iParam0) // Position - 0x6AB7 Signature - 22 01 03 00 00 5D
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_217() // Position - 0x6ACA Signature - 22 00 02 00 00 39 AA
{
	if (!func_262())
		return false;

	return Global_1904402.f_8873;
}

void func_218(int iParam0, int iParam1) // Position - 0x6AE5 Signature - 22 02 04 00 00 66 00 2F 23
{
	if (iParam0 <= 0)
		return;

	if (func_263())
	{
		Global_1913444.f_125 = MISC::GET_GAME_TIMER();
		Global_1913444.f_126 = iParam1;
	}

	Global_1913444.f_127 = Global_1913444.f_127 + iParam0;
	return;
}

BOOL func_219() // Position - 0x6B21 Signature - 22 00 02 00 00 37 63
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_220() // Position - 0x6B32 Signature - 22 00 02 00 00 37 74
{
	return DLC::IS_DLC_PRESENT(joaat("dlc_ultimateedition"));
}

BOOL func_221(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x6B43 Signature - 22 05 07 00 00 66 04
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_133(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_222(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x6B6A Signature - 22 04 06 00 00 66 02 2F 8A
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

int func_223(int iParam0) // Position - 0x6BA5 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 03 05 00 63
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_224(Hash hParam0) // Position - 0x6BC6 Signature - 22 01 03 00 00 66 00 3C 0F 00 7F
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

int func_225(var uParam0, int iParam1) // Position - 0x6CA9 Signature - 22 02 05 00 00 2F
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

int func_226(Hash hParam0) // Position - 0x6CE6 Signature - 22 01 04 00 00 66 00 39 D7
{
	int num;

	num = func_168(hParam0);

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

int func_227(Hash hParam0, BOOL bParam1) // Position - 0x6D53 Signature - 22 02 18
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_264(hParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };

	if (bParam1)
		func_265(&unk, func_186(false));

	if (!func_266(&unk, &num, &num2, false))
		return 0;

	func_223(num);
	return num2;
}

struct<4> func_228(Hash hParam0, BOOL bParam1) // Position - 0x6DB2 Signature - 22 02 09
{
	var unk;

	unk = { func_117(hParam0, bParam1, false) };
	return func_136(hParam0, unk, unk.f_4, bParam1);
}

void func_229(var uParam0) // Position - 0x6DD7 Signature - 22 01 03 00 00 66 00 37 22
{
	func_159(uParam0, joaat("MULTIPLAYER_GAME"));

	if (func_267() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_159(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_159(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_230(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x6E0F Signature - 22 11 2A
{
	int i;
	var unk;

	if (!func_268(anParam0))
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

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_231(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x6EC5 Signature - 22 06 2E 00 00 4B 0B 6A 80 02 62 3D 41 6A 80 12 6D 08 3D 41 41 66 00 4B 0B 03 09 00 A7 8B D2
{
	int i;
	Hash hashKey;
	Hash hashKey2;
	var unk;

	unk.f_2 = 5;
	unk.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &unk))
	{
		for (i = 0; i < 5; i = i + 1)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(unk.f_2[i /*3*/]))
				goto 0xE6;
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(unk.f_2[i /*3*/].f_1))
			{
			}
			else
			{
				hashKey = MISC::GET_HASH_KEY(unk.f_2[i /*3*/]);
				hashKey2 = MISC::GET_HASH_KEY(unk.f_2[i /*3*/].f_1);
			
				if (iParam2 != 0 && unk.f_2[i /*3*/].f_2 != iParam2)
					goto 0xE6;
			
				if (hParam3 != 0 && hashKey2 != hParam3)
					goto 0xE6;
			
				if (hParam4 != 0 && hashKey != hParam4)
					goto 0xE6;
			
				if (hParam5 != 0 && hashKey2 == hParam5)
				{
				}
				else
				{
					*uParam1 = hashKey;
					uParam1->f_1 = hashKey2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
		}
	}

	return false;
}

void func_232(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x6FBB Signature - 22 03 05 00 00 37
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_233(Hash hParam0, Hash hParam1) // Position - 0x6FEC Signature - 22 02 04 00 00 66 01 2F 15 04 00 2F 50 02 01 66 00 66
{
	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1224357681))
		return true;

	return false;
}

int func_234(Hash hParam0) // Position - 0x7013 Signature - 22 01 0A 00 00 66 00 2F 39 3D 10 00 05 8B 04 00 2F 50 01 01 4B
{
	var unk;
	int num;

	if (!func_43(hParam0, 0))
		return 0;

	unk = 5;
	num = ITEMDATABASE::_0x8870895BA5ED9385(hParam0, -442898163, &unk);

	if (num > 0)
		return unk[0];

	return 0;
}

struct<10> func_235(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x704D Signature - 22 09 15
{
	int num;

	num = -1;
	num.f_1 = -1;
	num.f_2 = -1;
	num.f_3 = -1;
	num.f_4 = -1;
	num.f_5 = -1;
	num.f_6 = -1;
	num.f_7 = -1;
	num.f_8 = -1;

	if (iParam0 != 0 && iParam0 != -1591664384)
		num = iParam0;

	if (iParam1 != 0 && iParam1 != -1591664384)
		num.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != -1)
		num.f_2 = iParam2;

	if (iParam3 != 0)
		num.f_3 = iParam3;

	if (iParam4 != 0)
		num.f_4 = iParam4;

	if (iParam5 != 0)
		num.f_5 = iParam5;

	if (iParam6 != -1)
		num.f_6 = iParam6;

	if (iParam7 != 0)
		num.f_8 = iParam7;

	if (iParam8 != 0)
		num.f_7 = iParam8;

	return num;
}

BOOL func_236(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0x7121 Signature - 22 0D 0F
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

BOOL func_237(Hash hParam0) // Position - 0x7142 Signature - 22 01 03 00 00 66 00 2F 39
{
	!func_43(hParam0, 0);

	if (func_62(hParam0, -393037696))
		return true;

	return false;
}

int func_238(int iParam0) // Position - 0x7168 Signature - 22 01 03 00 00 66 00 2F 8A 04 00 2F 50 01 01 66 00 03 05 00 3F
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_239(Hash hParam0, int iParam1) // Position - 0x7189 Signature - 22 02 30
{
	var unk;
	int num;
	int num2;
	int i;

	unk = 20;
	num = 0;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(hParam0, &unk, &num2, 20))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (unk[i /*2*/].f_1 == iParam1)
			{
				num = unk[i /*2*/];
				return num;
			}
		}
	}

	return 0;
}

char* func_240(Hash hParam0) // Position - 0x71D7 Signature - 22 01 04 00 00 66 00 2F 39 3D 10 00 05 8B 07 00 25 06 01 04 50 01 01 66 00 2F
{
	Hash labelHash;

	if (!func_43(hParam0, 0))
		return "";

	labelHash = func_88(hParam0, false);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

BOOL func_241(Hash hParam0) // Position - 0x720D Signature - 22 01 03 00 00 66 00 39 D7
{
	if (func_168(hParam0) == -126813555 || func_168(hParam0) == 1946043663)
		return true;

	return false;
}

char* func_242(Hash hParam0) // Position - 0x723B Signature - 22 01 04 00 00 66 00 2F 39 3D 10 00 05 8B 07 00 25 06 01 04 50 01 01 66 00 39
{
	Hash labelHash;

	if (!func_43(hParam0, 0))
		return "";

	labelHash = func_173(hParam0);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

struct<4> func_243() // Position - 0x7270 Signature - 22 00 06
{
	var unk;

	return unk;
}

BOOL func_244() // Position - 0x727C Signature - 22 00 02 00 00 37 20
{
	if (func_119(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

BOOL func_245(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x7299 Signature - 22 03 05 00 00 66 02 37
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, iParam1, hParam2);
}

BOOL func_246(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x72CC Signature - 22 05 07 00 00 66 00 03 05 00 DD
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_133(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

BOOL func_247(Hash hParam0) // Position - 0x7306 Signature - 22 01 03 00 00 66 00 37 11
{
	return func_62(hParam0, 1279601681);
}

void func_248(int iParam0, int iParam1) // Position - 0x7319 Signature - 22 02 04 00 00 66 01 2F 15 03
{
	if (iParam1 == 0)
		return;

	if (SECURE_LOAD(&iParam0) >= 11)
		return;

	SECURE_STORE(&iParam0->f_1[SECURE_LOAD(&iParam0)], iParam1);
	SECURE_STORE(&iParam0, SECURE_LOAD(&iParam0) + 1);
	return;
}

void func_249(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0x7349 Signature - 22 13
{
	int i;
	var unk;

	if (!func_268(anParam0))
		return;

	if (Global_1292143.f_2012 < 20)
	{
		Global_1292143.f_2012 = Global_1292143.f_2012 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_2012.f_1[i /*24*/] = { Global_1292143.f_2012.f_1[i + 1 /*24*/] };
		}
	}

	unk.f_7.f_1 = 11;
	unk.f_7.f_16 = 255;
	unk = { *anParam0 };
	unk.f_4 = iParam1;
	unk.f_7 = { uParam2 };
	unk.f_6 = 1;
	Global_1292143.f_2012.f_1[Global_1292143.f_2012 - 1 /*24*/] = { unk };
	return;
}

BOOL func_250(Hash hParam0, Any* panParam1) // Position - 0x7404 Signature - 22 02 05 00 00 66 00 66 01 03
{
	int num;

	num = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_269(panParam1->f_8, hParam0, num, 2048) || func_269(panParam1->f_8, hParam0, num, 32768) || func_269(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_269(panParam1->f_8, hParam0, num, 4) || func_269(panParam1->f_8, hParam0, num, 256) || func_269(panParam1->f_8, hParam0, num, 65536) || func_269(panParam1->f_8, hParam0, num, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_269(panParam1->f_8, hParam0, num, 1) || func_269(panParam1->f_8, hParam0, num, 8) || func_269(panParam1->f_8, hParam0, num, 65536) || func_269(panParam1->f_8, hParam0, num, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_269(panParam1->f_8, hParam0, num, 1) || func_269(panParam1->f_8, hParam0, num, 16) || func_269(panParam1->f_8, hParam0, num, 2) || func_269(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (func_269(panParam1->f_8, hParam0, num, 8) || func_269(panParam1->f_8, hParam0, num, 4096) || func_269(panParam1->f_8, hParam0, num, 256) || func_269(panParam1->f_8, hParam0, num, 65536))
		return false;

	return true;
}

BOOL func_251(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x75DA Signature - 22 03 05 00 00 66 00 66
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

int func_252(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x75F1 Signature - 22 03 05 00 00 66 00 8B 21
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_270(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_270(iParam1, 2, 0, 0);
	return -1;
}

int func_253(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x763A Signature - 22 03 05 00 00 66 00 8B 0E
{
	if (bParam0)
	{
		func_270(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

int func_254(int iParam0) // Position - 0x7656 Signature - 22 01 03 00 00 66 00 6D 1A
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_255(int iParam0) // Position - 0x767B Signature - 22 01 03 00 00 66 00 6D 16
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_256(int iParam0) // Position - 0x768E Signature - 22 01 03 00 00 66 00 6D 11
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_257(int iParam0) // Position - 0x76A1 Signature - 22 01 03 00 00 66 00 6D 0C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_258(int iParam0) // Position - 0x76B4 Signature - 22 01 03 00 00 66 00 4D
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_259(int iParam0) // Position - 0x76C6 Signature - 22 01 03 00 00 66 00 2F 03
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_260(int iParam0, int iParam1) // Position - 0x76D8 Signature - 22 02 04 00 00 66 01 2F 8A 03 00 2F
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		default:
		
	}

	return 30;
}

void func_261(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x7772 Signature - 22 07 09 00 00 66 00 66
{
	func_271(uParam0, iParam6);
	func_272(uParam0, iParam5);
	func_273(uParam0, iParam4);
	func_274(uParam0, iParam3);
	func_275(uParam0, iParam2);
	func_276(uParam0, iParam1);
	return;
}

BOOL func_262() // Position - 0x77AA Signature - 22 00 02 00 00 03 01 00 28
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_263() // Position - 0x77BE Signature - 22 00 02 00 00 5D 64
{
	return Global_1913444.f_127 == 0;
}

struct<18> func_264(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x77CE Signature - 22 07 1B
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

void func_265(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x78AC Signature - 22 05 07 00 00 4B
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_266(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x78C7 Signature - 22 04 06 00 00 66 03
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_133(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_267() // Position - 0x78EC Signature - 22 00 02 00 00 5D 0C
{
	return Global_1953292.f_1;
}

BOOL func_268(Any anParam0) // Position - 0x78FA Signature - 22 01 03 00 00 66 00 76 2F 0B
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 || anParam0->f_1 == -889271554 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_269(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x7940 Signature - 22 04 06 00 00 66 02 66
{
	if (func_277(iParam2, iParam3))
		return true;

	return false;
}

void func_270(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x7958 Signature - 22 04 07 00 00 66 00 08 15 03 00 50 04 00 2F
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

	func_278(iParam0, iParam1, iParam2, iParam3);
	return;
}

void func_271(var uParam0, int iParam1) // Position - 0x79F6 Signature - 22 02 04 00 00 66 01 2F 8A 03 00 50
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_272(var uParam0, int iParam1) // Position - 0x7A7C Signature - 22 02 04 00 00 66 01 2F 35 6A 05 8B 06 00 66 01 6D 0B
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_273(var uParam0, int iParam1) // Position - 0x7AB8 Signature - 22 02 06 00 00 66 00 76
{
	int num;
	int num2;

	num = func_255(*uParam0);
	num2 = func_254(*uParam0);

	if (iParam1 < 1 || iParam1 > func_260(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_274(var uParam0, int iParam1) // Position - 0x7B0B Signature - 22 02 04 00 00 66 01 2F 35 6A 05 8B 06 00 66 01 6D 17
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_275(var uParam0, int iParam1) // Position - 0x7B46 Signature - 22 02 04 00 00 66 01 2F 35 6A 05 8B 06 00 66 01 6D 3C 7E 30 8B 03 00 50 02 00 66 00 76 66 00 76 25
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_276(var uParam0, int iParam1) // Position - 0x7B7F Signature - 22 02 04 00 00 66 01 2F 35 6A 05 8B 06 00 66 01 6D 3C 7E 30 8B 03 00 50 02 00 66 00 76 66 00 76 6D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_277(int iParam0, int iParam1) // Position - 0x7BB7 Signature - 22 02 04 00 00 66 00 66 01 69 2F 1C 50 02 01 22 04
{
	return iParam0 && iParam1 != false;
}

void func_278(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x7BC6 Signature - 22 04 07 00 00 66 00 08 15 03 00 50 04 00 5D
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

	func_279(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

void func_279(int iParam0) // Position - 0x7CA2 Signature - 22 01 03 00 00 08
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_280(&(iParam0->f_4));
	return;
}

void func_280(var uParam0) // Position - 0x7CC5 Signature - 22 01 03 00 00 2F 66
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

