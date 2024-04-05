#include <Windows.h>
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(int argc, const char* argv[]) 
{
    DEVMODE dm;
    ZeroMemory(&dm, sizeof(dm));
    dm.dmSize = sizeof(dm);
    EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &dm);
    int i=60;
    
    if (0 != EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &dm))
    {
		BEGIN:
		//int i;
    	cout<< "Device Name= " <<dm.dmDisplayFrequency <<endl;
        cout << "DisplayFrequency before setting = " << dm.dmDisplayFrequency << endl;
        dm.dmDisplayFrequency = i; //60,90,120//set the DisplayFrequency
        LONG ret = ChangeDisplaySettingsEx(NULL, &dm, NULL, 0, NULL); 
        std::cout << "ChangeDisplaySettingsEx returned " << ret << '\n';
        if (0 != EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &dm))
        {
            cout << "DisplayFrequency after setting = " << i << endl;
        }
        switch (ret) 
        {
        case DISP_CHANGE_SUCCESSFUL: 
            std::cout << "display successfully changed\n"; 
            break;
        case DISP_CHANGE_BADDUALVIEW:
            std::cout << "The settings change was unsuccessful because the system is DualView capable\n";
            break;
        case DISP_CHANGE_BADFLAGS: 
            std::cout << "An invalid set of flags was passed in.\n"; 
            break;
        case DISP_CHANGE_BADMODE: 
            std::cout << "The graphics mode is not supported.\n"; 
            break;
        case DISP_CHANGE_BADPARAM: 
            std::cout << "An invalid parameter was passed in. This can include an invalid flag or combination of flags.\n"; 
            break;
        case DISP_CHANGE_FAILED: 
            std::cout << "The display driver failed the specified graphics mode.\n"; 
            break;
        case DISP_CHANGE_NOTUPDATED: 
            std::cout << "Unable to write settings to the registry.\n"; 
            break;
        case DISP_CHANGE_RESTART: 
            std::cout << "The computer must be restarted for the graphics mode to work.\n";
            break;
        }
    } 
    system (" start https://www.testufo.com/framerates-text ");
    Sleep(100);
    	keybd_event(91, 0x1E, 0, 0); //winLkey 
		keybd_event(91, 0x1E, KEYEVENTF_KEYUP, 0);
		Sleep(100);
		//�r�� S ���U
		keybd_event(68, 0x1E, 0, 0); //D
		keybd_event(68, 0x1E, KEYEVENTF_KEYUP, 0); 
		keybd_event(73, 0x1E, 0, 0); //I
		keybd_event(73, 0x1E, KEYEVENTF_KEYUP, 0);
		keybd_event(83, 0x1E, 0, 0); //S
		keybd_event(83, 0x1E, KEYEVENTF_KEYUP, 0);
		keybd_event(80, 0x1E, 0, 0); //P
		keybd_event(80, 0x1E, KEYEVENTF_KEYUP, 0);
		keybd_event(76, 0x1E, 0, 0); //L
		keybd_event(76, 0x1E, KEYEVENTF_KEYUP, 0);
		keybd_event(65, 0x1E, 0, 0); //A
		keybd_event(65, 0x1E, KEYEVENTF_KEYUP, 0);
		keybd_event(89, 0x1E, 0, 0); //Y
		keybd_event(89, 0x1E, KEYEVENTF_KEYUP, 0);
		keybd_event(32, 0x1E, 0, 0); //SpaceBar
		keybd_event(32, 0x1E, KEYEVENTF_KEYUP, 0);
		keybd_event(73, 0x1E, 0, 0); //I
		keybd_event(73, 0x1E, KEYEVENTF_KEYUP, 0);
		keybd_event(78, 0x1E, 0, 0); //N
		keybd_event(78, 0x1E, KEYEVENTF_KEYUP, 0);
		keybd_event(70, 0x1E, 0, 0); //F
		keybd_event(70, 0x1E, KEYEVENTF_KEYUP, 0);
		keybd_event(79, 0x1E, 0, 0); //O 
		keybd_event(79, 0x1E, KEYEVENTF_KEYUP, 0);
		Sleep(100);
		keybd_event(13, 0x1E, 0, 0); //Enter
		Sleep(10);
		keybd_event(13, 0x1E, KEYEVENTF_KEYUP, 0);
		Sleep(1000);
		
		keybd_event(91, 0x1E, 0, 0); //winLkey 
		keybd_event(91, 0x1E, KEYEVENTF_KEYUP, 0);
		Sleep(100);
		keybd_event(77, 0x1E, 0, 0); //M
		keybd_event(77, 0x1E, KEYEVENTF_KEYUP, 0);
		keybd_event(89, 0x1E, 0, 0); //Y
		keybd_event(89, 0x1E, KEYEVENTF_KEYUP, 0);
		keybd_event(65, 0x1E, 0, 0); //A
		keybd_event(65, 0x1E, KEYEVENTF_KEYUP, 0);
		keybd_event(83, 0x1E, 0, 0); //S
		keybd_event(83, 0x1E, KEYEVENTF_KEYUP, 0);
		keybd_event(85, 0x1E, 0, 0); //U
		keybd_event(85, 0x1E, KEYEVENTF_KEYUP, 0);
		keybd_event(83, 0x1E, 0, 0); //S
		keybd_event(83, 0x1E, KEYEVENTF_KEYUP, 0);
		Sleep(100);
		keybd_event(13, 0x1E, 0, 0); //Enter
		Sleep(10);
		keybd_event(13, 0x1E, KEYEVENTF_KEYUP, 0);
    //system("pause"); 
    char choice;
    while(true)
    {
        // Make your calculation
        cout<<"Would you like to change another display refresh rate?(Y/N)"<<endl;
        cin >> choice;
        if(choice =='N'||choice =='n')
		{
			cout<<"Test finish!!!"<<endl;
            break;
        }
        if(choice =='Y'||choice =='y')
        {
         	i=i+30;
         	goto BEGIN;
		}
        
    }
}
