/*
Program name: RunTimeTest
Version: 0.0
Author: Ian A Schafer
Date: 23-June-2018
Description: Program to test function run-times (BIG-O).
*/

#include <iostream>
#include "ConsoleOutro.h"

using namespace std;

int main()
{
    ConsoleOutro Outro;

    cout << "-----------------------------------" << endl;
    cout << "         Runtime Test Program" << endl;
    cout << "-----------------------------------" << endl;
    cout << endl;

    int countInner = 1;
    int countOuter = 1;

    int n;
    cout << "Enter the number of inputs, n: ";
    cin >> n;
    cout << endl << "n set to " << n << endl << endl;

    //Function to test.
    int i;
    for(i=1; i<n*n; i++){//BIG-O --> n^2
        cout << endl;
        cout << "Outer loop count: " << countOuter << endl;
        cout << "Outer Loop i<n*n: " << i << "<" << n*n << endl;
        countOuter++;

        for(int j=1; j<i; j *=2){//BIG-O --> n^2
        cout << "Inner loop count: " << countInner << endl;
        cout << "Inner Loop j<i: " << j << "<" << i << endl;
        countInner++;
        }
    }

    return 0;
}
