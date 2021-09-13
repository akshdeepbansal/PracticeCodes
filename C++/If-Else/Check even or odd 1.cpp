// Write a Program to Check Whether Number is Even or Odd
// Method 1: Using if else

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n % 2 == 0)
        cout << n << " is even.";
    else
        cout << n << " is odd.";
    return 0;
}
