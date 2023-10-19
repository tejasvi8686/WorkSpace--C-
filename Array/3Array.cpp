#include <iostream>
using namespace std;

int main()
{

    int arr[5];
    int n = 5;
    cout << "enter the input" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    // calculate sum

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    cout << "printing sum:"<< sum << endl;
    return 0;
}