#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cout << "enter the values of a, b and c";
    cin >>a>>b>>c;
    
    if((a+b>c) && (b+c>a) && (c+a>b)){
        cout << "This is a triangle." << endl;
    }

    else{
       cout << "This is not a triangle." << endl;
    }
    
    return 0;
}