#include <windows.h>
#include <iostream>
#include <conio.h>
#include <winapifamily.h>
using namespace std;

int main()
{
	
	system("Title Trash game closing by Bluescreen#6974");
	system("color 5");
	cout << RegisterHotKey(NULL, 1,MOD_ALT, VK_F10) << endl; //ALT + F10
	cout << RegisterHotKey(NULL, 2, MOD_ALT, VK_F11) << endl; //Control + A with no repeat
	Again:
	
	cout << "[ALT + F10 to exit R6S]\n";
	cout << "[ALT + F11 to exit MCBE]\n";
	MSG msg;

	while (1)
	{
		if (PeekMessage(&msg, NULL, WM_HOTKEY, WM_HOTKEY, PM_REMOVE) > 0)
		{
			

			if (msg.message == WM_HOTKEY)
			{
				switch (msg.wParam)
				{
				case 1:
					system("cls");
					cout << "OK [R6S]" << endl;
					system("Taskkill /im Rainbowsix.exe /f");
					system("Taskkill /im Rainbowsix_Vulkan.exe /f");
					

					break;
				case 2:
					system("cls");
					cout << "OK [MCBE]" << endl;
					system("Taskkill /im Minecraft.Windows.exe /f");
					
					break;
				default:
					cout << "default" << endl;

					Sleep(100);
				}
			}
		}
	
	}

	//UnregisterHotKey(NULL, 1);

}
