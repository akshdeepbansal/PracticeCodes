//Write a Program to Generate Multiplication Table of a number (entered by the user) using a for loop.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (int i = 1; i <= 10; ++i)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    return 0;
}
