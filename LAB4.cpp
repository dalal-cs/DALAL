#include"stdafx.h"
#include<iostream>
using namespace std;

float N, T;

int main()
{
    cout << "Enter the net price: ";

    cin >> N;

    T = 1.15 * N;

    cout << "The final price = " << T;

    system("pause");
    return 0;
}