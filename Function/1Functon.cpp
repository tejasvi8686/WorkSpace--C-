#include <iostream>
using namespace std;

void printName()
{

    int n;
    cout << "Enter the valaue of n" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "babbar" << endl;
    }
}


void printNumber(int num){
     cout << num << endl;
}
int main () {


    int a = 5;
    printNumber(a);

    // printName();
}