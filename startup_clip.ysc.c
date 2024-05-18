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
#endregion

void main() // Position - 0x0 Signature - 22 00 03 00 00 03
{
	BOOL isVideoEditorRunning;

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	if (NETWORK::NETWORK_IS_IN_SESSION())
		NETWORK::_0xFD4272A137703449();

	MISC::GAME_FRAMEWORK_MANAGER_INIT(-1329374618);
	MISC::SET_FADE_IN_AFTER_LOAD(false);
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
	REPLAY::SET_SCRIPTS_HAVE_CLEANED_UP_FOR_REPLAY_SYSTEM();
	BUILTIN::WAIT(1000);

	if (!REPLAY::IS_VIDEO_EDITOR_RUNNING())
	{
		if (REPLAY::OPEN_VIDEO_EDITOR())
		{
		}
	}

	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN() && !NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
	{
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
		CAM::DO_SCREEN_FADE_IN(500);
	}

	isVideoEditorRunning = true;

	if (isVideoEditorRunning)
	{
		func_1(false);
		func_2();
	}

	while (isVideoEditorRunning)
	{
		isVideoEditorRunning = REPLAY::IS_VIDEO_EDITOR_RUNNING();
		!isVideoEditorRunning;
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
			isVideoEditorRunning = false;
	
		BUILTIN::WAIT(0);
	}

	func_1(false);
	func_2();

	if (REPLAY::IS_VIDEO_EDITOR_RUNNING())
		REPLAY::CLOSE_VIDEO_EDITOR(1);

	MISC::_GAME_FRAMEWORK_MANAGER_SHUTDOWN();
	func_3(0, -1);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(BOOL bParam0) // Position - 0xCA Signature - 22 01 1F
{
	Player player;
	BOOL flag;
	var unk;

	player = PLAYER::PLAYER_ID();
	flag = false;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		flag = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(player)) == player;

	if (NETWORK::NETWORK_SESSION_IS_REQUEST_IN_PROGRESS(&(Global_1572887.f_260)) && bParam0 || flag)
		NETWORK::_NETWORK_SESSION_CANCEL_REQUEST(&(Global_1572887.f_260));

	unk.f_5 = 2;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = -1;
	unk.f_24 = -1;
	Global_1572887.f_260 = { unk };
	return;
}

void func_2() // Position - 0x14A Signature - 22 00 02 00 00 39
{
	func_4();
	func_5(-1);
	func_6(0);
	Global_1572887.f_196.f_43 = 0;
	Global_1572887.f_196.f_60 = 0;
	Global_1572887.f_196.f_1 = -1;

	if (Global_1572887.f_196.f_56 == 2)
		Global_1572887.f_196.f_56 = 0;

	return;
}

void func_3(int iParam0, int iParam1) // Position - 0x190 Signature - 22 02 04 00 00 66
{
	if (iParam0 != 0)
		func_7(iParam0, iParam1);

	func_8(4);
	func_9();
	func_10(1);
	return;
}

void func_4() // Position - 0x1B4 Signature - 22 00 02 00 00 03
{
	Global_1572887.f_196.f_42 = MISC::GET_GAME_TIMER();
	return;
}

void func_5(int iParam0) // Position - 0x1C8 Signature - 22 01 03 00 00 66 00 5D 17 00 18 80
{
	Global_1572887.f_196.f_2 = iParam0;
	return;
}

void func_6(int iParam0) // Position - 0x1DA Signature - 22 01 03 00 00 66 00 5D 17 00 18 6C
{
	Global_1572887.f_196 = iParam0;
	return;
}

void func_7(int iParam0, int iParam1) // Position - 0x1EA Signature - 22 02 04 00 00 5D
{
	if (Global_1572864.f_17 != 0)
		return;

	Global_1572864.f_17 = iParam0;
	Global_1572864.f_18 = iParam1;
	return;
}

void func_8(int iParam0) // Position - 0x20F Signature - 22 01 03 00 00 5D
{
	Global_1572864.f_3 = Global_1572864.f_3 || iParam0;
	return;
}

void func_9() // Position - 0x226 Signature - 22 00 03 00 00 2F
{
	int i;

	i = 0;

	for (i = 0; i <= 2; i = i + 1)
	{
		Global_1572887.f_300.f_1[i] = 0;
	}

	return;
}

void func_10(int iParam0) // Position - 0x251 Signature - 22 01 03 00 00 66 00 2F
{
	if (iParam0 == 0)
		iParam0 = 1;

	Global_1572864.f_1 = iParam0;
	return;
}

