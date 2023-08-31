#include <iostream>
using namespace std;
// Alphabet Palindron pyramid
int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row = row + 1)
    {
        for (int col = 0; col < row + 1; col = col + 1)
        {
            int ans = col + 1;
            char ch = ans + 'A' -1;
            cout << ch;
        }

       // reverse counting printing
        for (int col = row; col >= 1; col = col - 1)
        {
            int ans = col;
            char ch = ans + 'A' -1;
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}