#region Local Var
	BOOL bLocal_0 = 0;
#endregion

void main() // Position - 0x0 Signature - 22 00 02 00 00 25
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1();

	func_2();

	while (!bLocal_0)
	{
		func_3();
		BUILTIN::WAIT(0);
	}

	func_1();
	return;
}

void func_1() // Position - 0x30 Signature - 22 00 02 00 00 2F
{
	bLocal_0 = false;
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_2() // Position - 0x3F Signature - 22 00 02 00 00 50 00 00 22
{
	return;
}

void func_3() // Position - 0x47 Signature - Not Found!
{
	return;
}

