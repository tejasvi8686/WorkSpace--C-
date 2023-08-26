#include <iostream>
using namespace std;

// Hollow Diamond
int main() {
    int n;
    cin >> n;

    // Upper half of the diamond
    for (int row = 0; row < n; row = row + 1) {
        for (int col = 0; col < n - row - 1; col = col + 1) {
            cout << " ";
        }

        for (int col = 0; col < 2 * row + 1; col = col + 1) {
            if (col == 0 || col == 2 * row) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

    // Lower half of the diamond
    for (int row = n - 2; row >= 0; row = row - 1) {
        for (int col = 0; col < n - row - 1; col = col + 1) {
            cout << " ";
        }

        for (int col = 0; col < 2 * row + 1; col = col + 1) {
            if (col == 0 || col == 2 * row) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
