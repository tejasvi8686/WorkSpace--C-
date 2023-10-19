#include <iostream>
using namespace std;

//chexk given number prime or not

bool checkPrime(int n) {
    if (n <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    bool isPrime = checkPrime(n);
    if (isPrime) {
        cout << "Prime\n";
    } else {
        cout << "Not Prime\n";
    }
    return 0;
}
