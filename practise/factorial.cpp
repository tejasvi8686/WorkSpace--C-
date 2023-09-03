#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;

    // Get the value of n from the user
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Calculate the factorial
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        // Print the factorial
        cout << "Factorial of " << n << " = " << factorial << endl;
    }

    return 0;
}
