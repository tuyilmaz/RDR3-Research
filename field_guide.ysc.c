#region Local Var
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 04
{
	BOOL flag;
	int num;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1();

	if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(1976336482))
	{
		flag = uScriptParam_0.f_3;
		num = 2;
	
		if (flag)
			num = UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(1976336482, 1261159557);
		else
			num = UIAPPS::LAUNCH_UIAPP_BY_HASH(1976336482);
	
		if (num != 0)
			func_1();
	}

	while (!func_2())
	{
		BUILTIN::WAIT(0);
	}

	func_1();
	return;
}

void func_1() // Position - 0x70 Signature - 22 00 02 00 00 37
{
	UIAPPS::_CLOSE_UIAPP_BY_HASH(1976336482);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2() // Position - 0x85 Signature - 22 00 02 00 00 09
{
	if (func_3(true, true))
		return true;

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		return true;

	if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(1976336482))
		return true;

	return false;
}

BOOL func_3(BOOL bParam0, BOOL bParam1) // Position - 0xB7 Signature - 22 02
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

