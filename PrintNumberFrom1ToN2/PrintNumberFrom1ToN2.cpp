// PrintNumberFrom1ToN2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void ReadNumber(short& Number)
{

    cout << "Enter Number for looping Numbrers" << endl;
    cin >> Number;


}

short PrintLoopNumbers(int Number)
{
    for (int Start = Number; Start >= 1; Start--)
    {
        cout << "The Number is ------> " << Start << endl;
    }

    return Number;
}


int main()
{
    short SendData;
    ReadNumber(SendData);
    PrintLoopNumbers(SendData);

    return 0;
}

