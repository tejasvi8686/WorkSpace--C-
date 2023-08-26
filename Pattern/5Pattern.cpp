#include <iostream>
using namespace std;

// half inverted pyramid

int main() {
    int n;
    cin >> n;

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n - row; col++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

// int main()
// {

//     int n;
//     cin >> n;
//     for (int row = n; row > 0; row--)
//     {
//         for (int col = 0; col < row; col++)
//         {
//             cout << '*';
//         }
//         cout << endl;
//     }
//     return 0;
// }