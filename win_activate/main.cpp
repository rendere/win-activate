
#include <iostream>
#include <windows.h>
#include <format>
#define PROGRAM_NAME "win_activate"

int main()
{
	auto program_name = std::format("{} - build time: {}, {}", PROGRAM_NAME, __DATE__, __TIME__);
	SetConsoleTitleA(program_name.c_str());

	std::cout << "starting...\nusing generic Windows 10 key: W269N-WFGWX-YVC9B-4J6C9-T83GX\nusing activation server: kms.digiboy.ir\n\n";	

	// change verification server
	system("slmgr /ipk W269N-WFGWX-YVC9B-4J6C9-T83GX");
	system("slmgr /skms kms.digiboy.ir");
	system("slmgr /ato");
	// post-activation
	std::cout << "done. press any key to restart your computer, or close the program.\n";
	system("pause");
	system("shutdown /r /t 1");
	return 0;
}
