#include <iostream>
using namespace std;
// find the factorial
int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main()
{
    int n;
    cin >> n;
    int ans = fact(n);
    cout << "Factorial of " << n << " is " << ans << endl;
}
