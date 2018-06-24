#define _WIN32_WINNT 0x0501
#include <conio.h>
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD a;
    a.X = 90;
    a.Y = 300;


    SMALL_RECT rect;
    rect.Top = 0;
    rect.Left = 0;
    rect.Bottom = 10;
    rect.Right = 30;


    SetConsoleScreenBufferSize(handle, a);

    SetConsoleWindowInfo(handle, 1, &rect);

    cout << "Making console bigger" << endl;

    for (int i=0; i< 40; i++)
    {
        rect.Bottom++;
        rect.Right++;
        int x = SetConsoleWindowInfo(handle, 1, &rect);
        if (x == 0)
        {
            cout <<  GetLastError() << endl;
        }
        // 6  - handle is invalid
        // 87 - invalid parameter

        Sleep(50);
    }

    getch();
    return 0;
}
