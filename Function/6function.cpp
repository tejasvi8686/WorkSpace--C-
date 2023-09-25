// Sum of even numbers up to N

#include <iostream>
using namespace std;

int getSum(int n) {
  int sum = 0;
  for (int i = 2; i <= n; i += 2) {
    sum = sum + i;
  }
  return sum;
}

int main() {
  int n;
  cout << "Enter the value of n: ";
  cin >> n;

  int sum = getSum(n);

  cout << "The sum of even numbers up to " << n << " is " << sum << endl;

  return 0;
}
