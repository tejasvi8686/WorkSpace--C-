#include <iostream>
using namespace std;

int main()
{

    // array declartion

    // int arr[101];
    // char ch[20];
    // bool flags[223];
    // long num[900];
    // short snum[1000];

    // cout << "Array created successfully" << endl;
    // return 0;

    // int a = 10;
    // cout << "Address of a:" << &a << endl;

    // int arr[10];
    // cout << "Base adress if Arr is " << &arr << endl;

    // return 0;

    //     int arr [] = {2,3, 4, 56, 6};

    //     int brr [5] = {1,2,3,4,5};

    //     int crr [5] = {2,3};
    // // error
    //     int drr [3] ={1,2,4,5};

    //     cout << "created" << endl;

    //     return 0;

    // int arr [5] = {5, 8, 9, 12, 13};

    // int n = 5;

    // for (int i=0; i<n; i++){
    //     cout << arr[i] << " ";
    // }

    // cout << arr [1] << endl;
    // cout << arr [0] << endl;
    // cout << arr [3] << endl;
    // cout << arr [4] << endl;
    // cout << arr [2] << endl;

    // return 0;

    int arr[5];

    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of index :" << i << " ";
        cin >> arr[i];
        cout << endl;
    }

    cout << "Printing the array" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}