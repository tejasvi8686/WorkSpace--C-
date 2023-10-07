#include <iostream>
using namespace std;

int main () {
    //inveted pyramid
    int n;
    cin >> n;

  for (int row = 0; row < n; row = row + 1)
    {
        for (int col = 0; col < n - row; col = col + 1)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;



   
}
