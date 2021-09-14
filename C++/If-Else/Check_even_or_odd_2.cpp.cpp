// Method 2: Using ternary operators

#include <iostream>
using namespace std;
int main() {
int n;
cout << "Enter an integer: ";
cin >> n;
(n % 2 == 0) ? cout << n << " is even." : cout << n << " is odd.";
return 0;
}

// CONCEPT:
// We used ternary operators '?' and ':' instead of if..else statement. The ternary operator is a
// shorthand notation of if...else statement.