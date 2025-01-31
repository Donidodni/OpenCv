#include "Include.h"
#include "Process.h"
#include "MainUI.h"


#define __TEST__

int main()
{
	//_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	SetConsoleOutputCP(CP_UTF8);

	Process* pProcess = new Process();
	MainUI* gui= new MainUI();
	gui->Mainmenu();
	pProcess->Initialize();

	while (true)
	{
		bool res = pProcess->Update();

		if (res == false)
			break;

		pProcess->LateUpdate();

#ifdef __TEST__
		pProcess->Render();
#endif

		pProcess->Show();

	}

	Safe_Delete(pProcess);
	return 0;

}