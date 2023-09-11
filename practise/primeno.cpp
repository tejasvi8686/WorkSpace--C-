#include <iostream>
using namespace std;

int main() 
{
  int number, i, isPrime = 1;
  cin >> number;
  
  if (number <= 1)
    isPrime = 0;

  for ( i = 2 ; i <= number/2 ; i++)
  {
    if (number % i == 0)
    {
      isPrime = 0;
      break;
    }
  }
  if (isPrime == 1)
    cout << "The number is a prime number." ;
  else
    cout << "The number is not a prime number." ;

  return 0;
}