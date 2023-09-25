// function to add 2 number
#include <iostream>
using namespace std;


//function declare+ define
int add(int a, int b){
    int result = a+b;
    return result;
}

int main()
{
   int a;
   cout << "enter the value of a" << endl;
   cin >>a ;

   int b;
   cout << "enter the value of b" << endl;
   cin>>b;

   int sum = add(a,b);
   cout << "addition result is: " << sum << endl;

}