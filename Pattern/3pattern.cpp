#include <iostream>
using namespace std;

// Hollow Rectangle

int main()
{

    
    for (int i = 0; i < 3; i = i + 1)
    {
        for (int j = 0; j < 5; j = j + 1)
        {
            if (i == 0 || i == 2 || j == 0 || j == 4)
            {
                cout << "*  ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}

