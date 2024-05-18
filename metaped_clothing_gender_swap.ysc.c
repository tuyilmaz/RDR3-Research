void main() // Position - 0x0 Signature - 22 00 02 00 00 08
{
	func_1(-1);
	func_2();
	return;
}

void func_1(int iParam0) // Position - 0x11 Signature - 22 01
{
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	return;
}

void func_2() // Position - 0x27 Signature - 22 00 02 00 00 03
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

