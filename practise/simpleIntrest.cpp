#include <iostream>
using namespace std;

int main() {

    int P , R , T , SI;

    cout << "enter the value of princple";
    cin >> P ;

    cout << "enter the value of Rate";
    cin >> R ;

    cout << "enter the value of Time";
    cin >> T ;

    SI = ( P * R * T ) / 100 ;

    cout << "Simple Intrest is " << SI << endl;

    return 0;
}