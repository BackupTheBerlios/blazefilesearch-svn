#include "UI_global.h"

#include "mainWindow.h"

using namespace UI;

int __stdcall _tWinMain()
{
	System::Threading::Thread::CurrentThread->ApartmentState = System::Threading::ApartmentState::STA;
	Application::Run(new mainWindow());

	return 0;
}
