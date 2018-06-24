/*
Program name: ConsoleOutro
Version: 1.0
Author: Ian A Schafer
Date: 24-June-2018
Description: This is a skeleton implementation file showing to use ConsoleOutro in your Console program.
Ignore the Randon code, note only the instantiation ConsoleOutro object: Outro.
Once the program finishes, or exits by exception, it runs the dtor which provides the
desired pause at the end of the console program.
Read detail and credits in the ConsoleOutro.h header file.
*/

#include <iostream>
#include "ConsoleOutro.h"

using namespace std;

int main()
{
    ConsoleOutro Outro;

    cout << "-----------------------------------" << endl;
    cout << "         Your Program Title" << endl;
    cout << "-----------------------------------" << endl;
    cout << endl;

    //Random code for illustration only.
    int i;
    int n = 3;
    int outerLoopCount = 1;
    int innerLoopCount = 1;

    //Outer loop
    for(i=1; i<n*n; i++){//BIG-O --> n^2
        cout << endl;
        cout << "Outer loop ... ... " << outerLoopCount << endl;
        outerLoopCount += 1;
        //Inner loop.
        for(int j=1; j<i; j *=2){//BIG-O --> n^2
        cout << "Inner loop ... " << innerLoopCount << endl;
        innerLoopCount += 1;
        }
    }//End for loop

    cout << endl;
    return 0;
}
