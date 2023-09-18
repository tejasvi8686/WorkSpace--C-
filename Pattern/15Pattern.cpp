#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row = row + 1)
    {
        // spaces
        for (int col = 0; col < n - row - 1; col = col + 1)
        {
            cout << " ";
        }
        // numbers
        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << row + col + 1;
        }
        // reverse counting
        int start = 2 * row;
        for (int col = 0; col < row; col = col + 1)
        {
            cout << start;
            start = start - 1;
        }
        cout << endl;
    }
    return 0;
}
