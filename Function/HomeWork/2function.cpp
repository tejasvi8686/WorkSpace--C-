#include <iostream>
using namespace std;

int isEven(int number)
{
    return (number % 2 == 0);
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isEven(num))
    {
        cout << num << " is even." << endl;
    }
    else
    {
        cout << num << " is odd." << endl;
    }
    return 0;
}
