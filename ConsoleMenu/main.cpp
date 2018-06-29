/*
Program name: ConsoleMenu.cpp
Version: 0.0 Alpha pre-release
Author: Ian A Schafer
Date: 29-June-2018
Description: A simple menu for windows Console; where selections
are made by UP/DOWN arrow.
*/
/*
Alpha pre-release TO DO:
1. Write code for: system("cls");
2. Timing issue: sometimes the menu skips ... run and see.
*/
#include <windows.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{

    string menuString[3] = {"Start New Game", "Settings", "Exit"};
    int ptr = 0;

    while (true)
    {
        system("cls");

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        cout << "MAIN MENU\n\n";

        for(int j=0; j<3; ++j)
        {
            if(j==ptr){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                cout << menuString[j] << endl;
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
                cout << menuString[j] << endl;
            }
        }

        while(true)
        {
            if(GetAsyncKeyState(VK_UP) != 0)
            {
                ptr -= 1;

                if(ptr <= -1){
                    ptr = 2;
                } break;
            }
            else if(GetAsyncKeyState(VK_DOWN) != 0)
            {
                ptr += 1;

                if(ptr >= 3){
                    ptr = 0;
                } break;
            }
            else if(GetAsyncKeyState(VK_RETURN) != 0)
            {
                switch(ptr)
                {
                    case 0:{
                        cout << "\n\n\n Starting game 1 ..." << endl;
                        Sleep(1000);
                    } break;

                    case 1:{
                        cout << "\n\n\n Settings ..." << endl;
                        Sleep(1000);
                    } break;

                    case 2:{
                        return 0;
                    } //break;

                } break;
            }
            Sleep(150);
        }

    }



    return 0;
}
