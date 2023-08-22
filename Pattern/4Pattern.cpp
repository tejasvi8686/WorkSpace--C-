#include <iostream>
using namespace std;

//Half pyramid

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i + 1; j++) {
//             cout << "*   ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

int main() {
    int n;
    cin >> n;

    for (int row = 0; row < n; row = row + 1) {
        for (int col = 0; col < row + 1; col = col + 1) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}