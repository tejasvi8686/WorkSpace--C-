#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows for the hollow pyramid: ";
    cin >> n;

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n - row - 1; col++) {
            cout << " ";
        }

        for (int col = 0; col < 2 * row + 1; col++) {
            if (col == 0 || col == 2 * row || row == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
