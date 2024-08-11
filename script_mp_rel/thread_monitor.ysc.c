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
	int iLocal_13 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 06
{
	char* scriptName;
	BOOL flag;
	int systemTime;
	BOOL flag2;

	func_1();
	scriptName = func_3(func_2());
	func_4();
	func_5();
	func_6(0);
	Global_1051645.f_44 = 0;
	flag = false;
	iLocal_13 = 0;

	while (func_7() && !func_8(true, true) && !func_9(4) && !func_9(2048) && func_11(func_10()))
	{
		if (func_12())
		{
			func_13();
			func_14();
		
			switch (func_15())
			{
				case 0:
					if (func_16() && func_17(PLAYER::PLAYER_ID()) > 2 || !SCRIPTS::IS_THREAD_ACTIVE(Global_1051645.f_16[0], false) || !NETWORK::NETWORK_IS_SCRIPT_ACTIVE(scriptName, -1, true, 0))
					{
						if (func_18(0) == 0)
						{
							!func_19();
							func_18(0) == 0;
							func_20();
							func_21();
						}
						else if (Global_1051645.f_7 > 0)
						{
							func_22();
						}
					}
				
					Global_1051645.f_11;
				
					if (func_23())
					{
						func_22();
						func_24();
						func_25();
						func_26();
						func_6(1);
					}
					break;
			
				case 1:
					if (!func_19())
					{
						func_27();
						flag = false;
						func_6(2);
						SCRIPTS::REQUEST_SCRIPT(scriptName);
					}
					else
					{
						func_28();
					}
					break;
			
				case 2:
					if (func_29())
					{
						func_30() % 1000 == 0;
					}
					else
					{
						if (!flag)
						{
							if (func_30() > Global_1901671.f_603)
							{
								NETWORK::_0x2C4E98DDA475364F("thread_monitor has been waiting on a session end for longer than 2 minutes now.  This is bad.");
								flag = true;
								func_31(30, -1);
							}
						}
					
						if (func_18(0) == 1)
						{
							func_22();
						
							if (Global_1051645.f_7 <= 0)
							{
								if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
									func_6(3);
								else
									func_6(4);
							}
							else
							{
								if (func_18(0) != 0)
								{
								}
							
								func_22();
							}
						}
						else if (Global_1051645.f_11)
						{
							func_6(3);
						}
					}
					break;
			
				case 3:
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (!flag)
						{
							if (func_30() > Global_1901671.f_603)
							{
								NETWORK::_0x2C4E98DDA475364F("thread_monitor has been waiting on NETWORK_IS_GAME_IN_PROGRESS for longer than 2 minutes now.  This is bad.");
								flag = true;
								func_31(30, -1);
							}
						}
					}
					else
					{
						func_6(4);
					}
					break;
			
				case 4:
					if (SCRIPTS::DOES_SCRIPT_EXIST(scriptName))
					{
						SCRIPTS::REQUEST_SCRIPT(scriptName);
					
						if (SCRIPTS::HAS_SCRIPT_LOADED(scriptName) && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(6000) > 0)
						{
							if (Global_1051645.f_44)
							{
								func_32(true);
								func_33(true, true);
								Global_1051645.f_44 = 0;
							}
						
							func_34();
							Global_1051645.f_16[0] = SCRIPTS::START_NEW_SCRIPT(scriptName, 6000);
							SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(scriptName);
							func_35();
							func_6(0);
							func_27();
						
							if (Global_1051645.f_11)
								Global_1051645.f_11 = 0;
						
							func_36();
						}
					}
					break;
			}
		}
	
		BUILTIN::WAIT(0);
	}

	if (func_9(2048))
	{
	}
	else if (func_9(4))
	{
	}
	else if (!func_11(func_10()))
	{
	}
	else if (!func_11(func_37()))
	{
	}
	else
	{
		func_6(5);
		CAM::DO_SCREEN_FADE_OUT(0);
		flag2 = false;
	
		while (!flag2)
		{
			switch (func_15())
			{
				case 5:
					systemTime = MISC::GET_SYSTEM_TIME();
					NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(false);
					func_6(6);
					break;
			
				case 6:
					if (MISC::GET_SYSTEM_TIME() - systemTime > 1000)
					{
						func_6(7);
					
						if (!CAM::IS_SCREEN_FADING_OUT() || !CAM::IS_SCREEN_FADED_OUT())
							CAM::DO_SCREEN_FADE_OUT(0);
					}
					break;
			
				case 7:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						func_31(iLocal_13, -1);
						flag2 = true;
					}
					else if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					break;
			}
		
			BUILTIN::WAIT(0);
		}
	}

	while (!SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(1440))
	{
		BUILTIN::WAIT(0);
	}

	if (NETWORK::NETWORK_IS_IN_SESSION())
		NETWORK::NETWORK_SESSION_LEAVE_SESSION();

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		PLAYER::FORCE_CLEANUP(2);

	func_38(2048);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x3B9 Signature - 22 00 02 00 00 03 00
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::_0xB711EB4BC8D06013();
	func_39(&Global_1051645);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	return;
}

int func_2() // Position - 0x3D6 Signature - 22 00 02 00 00 5D 17 00 18 27 0F
{
	return Global_1572887.f_15;
}

char* func_3(int iParam0) // Position - 0x3E4 Signature - 22 01 03 00 00 66 00 3C
{
	switch (iParam0)
	{
		case 1:
			return "net_main_tlg_online";
	
		default:
		
	}

	return "net_main_online";
}

void func_4() // Position - 0x409 Signature - 22 00 02 00 00 5D FD 0B 10 27 09 05
{
	!Global_1051645.f_9;
	Global_1051645.f_9 = 1;
	return;
}

void func_5() // Position - 0x422 Signature - 22 00 02 00 00 03 01 00 2B 5D FD 0B 10 6C 28 50 00 00 22 01
{
	Global_1051645.f_40 = MISC::GET_SYSTEM_TIME();
	return;
}

void func_6(int iParam0) // Position - 0x434 Signature - 22 01 03 00 00 66 00 5D FD
{
	Global_1051645.f_12 = iParam0;
	func_41(func_40(Global_1051645.f_12));
	return;
}

BOOL func_7() // Position - 0x452 Signature - 22 00 02 00 00 2F 4E
{
	iLocal_13 = 0;

	if (func_42(1976253964))
	{
	}
	else if (func_42(1355399116))
	{
	}
	else if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	else if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	else if (Global_1572887.f_12)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (func_9(4) || func_9(2048) || !func_11(func_10()))
				iLocal_13 = 0;
			else
				iLocal_13 = 24;
	}

	return true;
}

BOOL func_8(BOOL bParam0, BOOL bParam1) // Position - 0x4D1 Signature - 22 02 05
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

BOOL func_9(int iParam0) // Position - 0x5B1 Signature - 22 01 03 00 00 5D 00 00 18 27 03 66 00 69
{
	return Global_1572864.f_3 && iParam0 != false;
}

int func_10() // Position - 0x5C4 Signature - 22 00 02 00 00 85 00
{
	return Global_1572864;
}

BOOL func_11(int iParam0) // Position - 0x5D0 Signature - 22 01 03 00 00 66 00 1D
{
	if (iParam0 == 3)
		return true;

	if (iParam0 == 4)
		return true;

	return false;
}

BOOL func_12() // Position - 0x5ED Signature - 22 00 02 00 00 5D FD 0B 10 27 09 50
{
	return Global_1051645.f_9;
}

void func_13() // Position - 0x5FB Signature - 22 00 0C
{
	var unk;
	int num;
	int i;

	func_43();

	if (Global_1051645.f_7 > 0)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
		i = 0;
	
		for (i = 0; i <= Global_1051645.f_7 - 1; i = i + 1)
		{
			num = func_18(i);
		
			if (num == 0)
				TEXT_LABEL_APPEND_STRING(&unk, "S", 64);
			else if (num == 1)
				TEXT_LABEL_APPEND_STRING(&unk, "E", 64);
			else if (num == -1)
				TEXT_LABEL_APPEND_STRING(&unk, "N", 64);
		}
	}

	return;
}

void func_14() // Position - 0x669 Signature - 22 00 02 00 00 03 01 00 08
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				break;
		
			case 1:
				break;
		
			case 2:
				func_20();
				break;
		
			case 3:
				break;
		
			case 4:
				break;
		}
	}

	return;
}

int func_15() // Position - 0x6B3 Signature - 22 00 02 00 00 5D FD 0B 10 27 0C
{
	return Global_1051645.f_12;
}

BOOL func_16() // Position - 0x6C1 Signature - 22 00 02 00 00 5D 17 00 18 27 0E
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_4;
}

int func_17(Player plParam0) // Position - 0x6DD Signature - 22 01 03 00 00 66 00 2F 75
{
	if (plParam0 >= 0)
		return Global_1056554[plParam0 /*491*/];

	return -1;
}

int func_18(int iParam0) // Position - 0x6F8 Signature - 22 01 04 00 00 66
{
	int num;

	num = func_44(iParam0);
	return num;
}

BOOL func_19() // Position - 0x70A Signature - 22 00 04 00 00 2F 67 03
{
	int i;
	BOOL num;

	num = 0;

	for (i = 0; i < 20; i = i + 1)
	{
		if (Global_1051645.f_16[i] != 0)
			if (SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[i]))
				num = 1;
			else
				Global_1051645.f_16[i] = 0;
	}

	return num;
}

void func_20() // Position - 0x75A Signature - 22 00 02 00 00 09 5D FD 0B 10 6C 0A
{
	Global_1051645.f_10 = 1;
	return;
}

void func_21() // Position - 0x769 Signature - 22 00 02 00 00 5D FD 0B 10 27 25
{
	if (SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_37))
		SCRIPTS::TERMINATE_THREAD(Global_1051645.f_37);

	return;
}

int func_22() // Position - 0x788 Signature - 22 00 05 00 00 5D
{
	int num;
	int num2;
	int i;

	if (Global_1051645.f_7 <= 0)
	{
		num = -1;
		return num;
	}

	num2 = func_44(0);
	i = 0;

	for (i = 0; i <= 4; i = i + 1)
	{
		Global_1051645[i] = Global_1051645[i + 1];
	}

	func_45();
	return num2;
}

BOOL func_23() // Position - 0x7DA Signature - 22 00 02 00 00 5D FD 0B 10 27 0A
{
	return Global_1051645.f_10 || Global_1051645.f_11;
}

void func_24() // Position - 0x7F4 Signature - 22 00 02 00 00 09 5D FD 0B 10 6C 08
{
	Global_1051645.f_8 = 1;
	return;
}

void func_25() // Position - 0x803 Signature - 22 00 02 00 00 50
{
	return;
}

void func_26() // Position - 0x80B Signature - 22 00 02 00 00 03 01 00 2B 5D FD 0B 10 6C 28 50 00 00 22 00
{
	Global_1051645.f_40 = MISC::GET_SYSTEM_TIME();
	return;
}

void func_27() // Position - 0x81D Signature - 22 00 02 00 00 2F 5D FD 0B 10 6C 0A
{
	Global_1051645.f_10 = 0;
	return;
}

void func_28() // Position - 0x82C Signature - 22 00 05 00 00 2F
{
	int i;
	BOOL threadExists;
	BOOL hasScriptHandler;

	threadExists = false;
	hasScriptHandler = false;

	for (i = 0; i < 20; i = i + 1)
	{
		if (Global_1051645.f_16[i] != 0)
		{
			if (SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[i]))
			{
				SCRIPTS::GET_THREAD_EXISTENCE_DETAILS(Global_1051645.f_16[i], &threadExists, &hasScriptHandler);
			
				if (threadExists)
				{
					if (!SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(Global_1051645.f_16[i]))
						SCRIPTS::_REQUEST_THREAD_EXIT(Global_1051645.f_16[i]);
				}
				else if (hasScriptHandler)
				{
				}
			}
			else
			{
				Global_1051645.f_16[i] = 0;
			}
		}
	}

	return;
}

BOOL func_29() // Position - 0x8BF Signature - 22 00 02 00 00 2F 50
{
	return false;
}

int func_30() // Position - 0x8C8 Signature - 22 00 02 00 00 03 01 00 2B 5D FD 0B 10 27
{
	return MISC::GET_SYSTEM_TIME() - Global_1051645.f_40;
}

void func_31(int iParam0, int iParam1) // Position - 0x8DB Signature - 22 02 04 00 00 66
{
	if (iParam0 != 0)
		func_46(iParam0, iParam1);

	func_47(4);
	func_48();
	func_49(1);
	return;
}

void func_32(BOOL bParam0) // Position - 0x8FF Signature - 22 01 03 00 00 66 00 05
{
	if (!bParam0)
	{
		func_50(2);
	}
	else
	{
		func_51(2);
		PLAYER::_0x2C2D287748E8E9B7(false);
	}

	return;
}

void func_33(BOOL bParam0, BOOL bParam1) // Position - 0x921 Signature - 22 02 04 00 00 6D
{
	if (func_52(255) == 4)
		return;

	if (_IS_NULL_VECTOR(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
		return;

	if (!bParam0)
	{
		func_50(0);
	}
	else
	{
		if (bParam1)
			func_54(0, false, 0, true);
	
		func_51(0);
		func_55(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");
		func_56(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
	
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}

	func_57(Global_1102813.f_3839, 36);
	func_58(Global_1102813.f_3878, 36);
	return;
}

void func_34() // Position - 0xA6C Signature - 22 00 03 00 00 2F 67 02 66
{
	int i;

	for (i = 0; i < 20; i = i + 1)
	{
		if (Global_1051645.f_16[i] != 0)
		{
			if (SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[i]))
			{
			}
		
			Global_1051645.f_16[i] = 0;
		}
	}

	return;
}

void func_35() // Position - 0xAB7 Signature - 22 00 02 00 00 2F 5D 17
{
	Global_1572887.f_9 = 0;
	func_59();
	return;
}

void func_36() // Position - 0xACA Signature - 22 00 02 00 00 2F 5D FD 0B 10 6C 08
{
	Global_1051645.f_8 = 0;
	return;
}

int func_37() // Position - 0xAD9 Signature - 22 00 02 00 00 5D 00
{
	return Global_1572864.f_1;
}

void func_38(int iParam0) // Position - 0xAE7 Signature - 22 01 03 00 00 5D 00 00 18 27 03 5D
{
	Global_1572864.f_3 = Global_1572864.f_3 - Global_1572864.f_3 && iParam0;
	return;
}

void func_39(var uParam0) // Position - 0xB05 Signature - 22 01 BB
{
	var unk;

	unk = 6;
	unk.f_1 = -1;
	unk.f_1.f_1 = -1;
	unk.f_1.f_1.f_1 = -1;
	unk.f_1.f_1.f_1.f_1 = -1;
	unk.f_1.f_1.f_1.f_1.f_1 = -1;
	unk.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	unk.f_9 = 1;
	unk.f_16 = 20;
	unk.f_45.f_2 = 32;
	unk.f_80 = 10;
	*uParam0 = { unk };
	return;
}

char* func_40(int iParam0) // Position - 0xB67 Signature - 22 01 04 00 00 6D
{
	char* str;

	str = "invalid";

	switch (iParam0)
	{
		case 0:
			str = "MPTM_RUNNING";
			break;
	
		case 1:
			str = "MPTM_SHUTDOWN";
			break;
	
		case 2:
			str = "MPTM_DEAD";
			break;
	
		case 3:
			str = "MPTM_WAIT_TO_REBOOT";
			break;
	
		case 4:
			str = "MPTM_REBOOT";
			break;
	
		case 5:
			str = "MPTM_MP_BAIL";
			break;
	
		case 6:
			str = "MPTM_FADE_OUT";
			break;
	
		case 7:
			str = "MPTM_EXIT";
			break;
	}

	return str;
}

void func_41(char* sParam0) // Position - 0xBF5 Signature - 22 01 05
{
	int systemTime;
	int frameCount;

	systemTime = MISC::GET_SYSTEM_TIME();
	frameCount = MISC::GET_FRAME_COUNT();
	Global_1572887.f_2 = MISC::GET_FRAME_COUNT();
	Global_1572887.f_3 = MISC::GET_SYSTEM_TIME();
	return;
}

BOOL func_42(Hash hParam0) // Position - 0xC1D Signature - 22 01 03 00 00 66 00 2F 15 04
{
	if (hParam0 == 0)
		return false;

	return SCRIPTS::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, hParam0);
}

void func_43() // Position - 0xC36 Signature - 22 00 04 00 00 2F 67 02
{
	int i;
	int eventData;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i))
		{
			case -2119801478:
				func_61();
			
				if (SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, i, &eventData, 1))
				{
					switch (eventData)
					{
						case 0:
							break;
					
						case 1:
							break;
					
						case 2:
							break;
					
						case 3:
							break;
					
						case 4:
							break;
					
						case 5:
							break;
					
						case 7:
							break;
					}
				}
				break;
		
			case -857756425:
				func_60();
			
				if (SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, i, &eventData, 1))
				{
					switch (eventData)
					{
						case 0:
							break;
					
						case 1:
							break;
					
						case 2:
							break;
					
						case 3:
							Global_1051645.f_44 = 1;
							break;
					
						case 4:
							break;
					
						case 5:
							break;
					
						case 7:
							break;
					}
				}
				break;
		}
	}

	return;
}

int func_44(int iParam0) // Position - 0xD2A Signature - 22 01 04 00 00 5D
{
	int num;

	if (Global_1051645.f_7 <= 0)
	{
		num = -1;
		return num;
	}

	return Global_1051645[iParam0];
}

void func_45() // Position - 0xD50 Signature - 22 00 02 00 00 5D FD 0B 10 27 07 09
{
	Global_1051645.f_7 = Global_1051645.f_7 - 1;

	if (Global_1051645.f_7 < 0)
		Global_1051645.f_7 = 0;

	return;
}

void func_46(int iParam0, int iParam1) // Position - 0xD77 Signature - 22 02 04 00 00 5D
{
	if (Global_1572864.f_17 != 0)
		return;

	Global_1572864.f_17 = iParam0;
	Global_1572864.f_18 = iParam1;
	return;
}

void func_47(int iParam0) // Position - 0xD9C Signature - 22 01 03 00 00 5D 00 00 18 27 03 66 00 30
{
	Global_1572864.f_3 = Global_1572864.f_3 || iParam0;
	return;
}

void func_48() // Position - 0xDB3 Signature - 22 00 03 00 00 2F 67 02 2F
{
	int i;

	i = 0;

	for (i = 0; i <= 2; i = i + 1)
	{
		Global_1572887.f_300.f_1[i] = 0;
	}

	return;
}

void func_49(int iParam0) // Position - 0xDDE Signature - 22 01 03 00 00 66 00 2F 15 03
{
	if (iParam0 == 0)
		iParam0 = 1;

	Global_1572864.f_1 = iParam0;
	return;
}

int func_50(int iParam0) // Position - 0xDF7 Signature - 22 01 03 00 00 5D DD D3 10 80 04 66 00 62 39 55
{
	if (func_62(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

int func_51(int iParam0) // Position - 0xE14 Signature - 22 01 03 00 00 5D DD D3 10 80 04 66 00 62 39 87
{
	if (func_63(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

int func_52(int iParam0) // Position - 0xE31 Signature - 22 01 03 00 00 66 00 6D
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0xE7C Signature - 22 03 05
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_54(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0xEA6 Signature - 22 04 06
{
	func_64(iParam0);

	if (!func_65(1))
		return;

	if (bParam1)
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	else if (!func_66(128) && !func_67(19))
		CAM::DO_SCREEN_FADE_OUT(iParam2);

	if (bParam3 && func_68() == 4)
		func_50(18);

	func_69(1024);
	return;
}

void func_55(var uParam0) // Position - 0xF08 Signature - 22 01 21
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_56(float* pfParam0) // Position - 0xF1A Signature - 22 01 0C
{
	var unk;

	*pfParam0 = { unk };
	return;
}

void func_57(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0xF2C Signature - 22 1F
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

void func_58(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0xF82 Signature - 22 0A
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

void func_59() // Position - 0xFAF Signature - 22 00 02 00 00 5D 67
{
	if (Global_1901671.f_1 == 0)
		return;

	Global_1901671.f_1 = 0;
	return;
}

void func_60() // Position - 0xFCB Signature - 22 00 02 00 00 5D FD 0B 10 27 07 4D 75 03 00 50 00 00 5D FD 0B 10 27 07 2F 2E 15 00 5D FD 0B 10 27 07 09 10 5D FD 0B 10 17 01 2F
{
	if (Global_1051645.f_7 >= 6)
		return;

	if (Global_1051645.f_7 > 0)
		if (Global_1051645[Global_1051645.f_7 - 1] == 0)
			return;

	Global_1051645[Global_1051645.f_7] = 0;
	func_70();
	return;
}

void func_61() // Position - 0x1010 Signature - 22 00 02 00 00 5D FD 0B 10 27 07 4D 75 03 00 50 00 00 5D FD 0B 10 27 07 2F 2E 15 00 5D FD 0B 10 27 07 09 10 5D FD 0B 10 17 01 09
{
	if (Global_1051645.f_7 >= 6)
		return;

	if (Global_1051645.f_7 > 0)
		if (Global_1051645[Global_1051645.f_7 - 1] == 1)
			return;

	Global_1051645[Global_1051645.f_7] = 1;
	func_70();
	return;
}

BOOL func_62(Any* panParam0, int iParam1, int iParam2) // Position - 0x1055 Signature - 22 03 08 00 00 66 01 6D 1F 59 67 05 66 01 6D 1F 47 67 06 66 05 66 00 17 01 66 06 03 09 00 0B 67 07 66 05 66 00 63 01 66 06 03 08 00 15
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

BOOL func_63(Any* panParam0, int iParam1, int iParam2) // Position - 0x1087 Signature - 22 03 08 00 00 66 01 6D 1F 59 67 05 66 01 6D 1F 47 67 06 66 05 66 00 17 01 66 06 03 09 00 0B 67 07 66 05 66 00 63 01 66 06 03 08 00 12
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

void func_64(int iParam0) // Position - 0x10BA Signature - 22 01 03 00 00 66 00 5D DD
{
	Global_1102813.f_26.f_12 = iParam0;
	return;
}

BOOL func_65(int iParam0) // Position - 0x10CC Signature - 22 01 03 00 00 5D DD D3 10 80 1A 27 07
{
	return Global_1102813.f_26.f_7 && iParam0 != false;
}

BOOL func_66(BOOL bParam0) // Position - 0x10E1 Signature - 22 01 03 00 00 5D DD D3 10 80 1A 27 09 66 00 69 2F
{
	return Global_1102813.f_26.f_9 && bParam0 != false;
}

BOOL func_67(int iParam0) // Position - 0x10F6 Signature - 22 01 03 00 00 66 00 5D CF
{
	return Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1 == Global_1106895[iParam0 /*2*/].f_1;
}

int func_68() // Position - 0x1124 Signature - 22 00 02 00 00 85 DD
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

void func_69(BOOL bParam0) // Position - 0x1157 Signature - 22 01 03 00 00 66 00 39
{
	if (func_71(bParam0))
		return;

	Global_1102813.f_26.f_9 = Global_1102813.f_26.f_9 || bParam0;
	return;
}

void func_70() // Position - 0x117E Signature - 22 00 02 00 00 5D FD 0B 10 27 07 5C
{
	Global_1051645.f_7 = Global_1051645.f_7 + 1;

	if (Global_1051645.f_7 > 6)
		Global_1051645.f_7 = 6;

	return;
}

BOOL func_71(BOOL bParam0) // Position - 0x11A5 Signature - 22 01 03 00 00 5D DD D3 10 80 1A 27 09 66 00 69 66
{
	return Global_1102813.f_26.f_9 && bParam0 == bParam0;
}

