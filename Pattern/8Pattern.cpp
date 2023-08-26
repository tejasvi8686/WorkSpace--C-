#include<iostream>
using namespace std;

int main (){

    int n;
    cin >>n;

    for (int i=0; i<n; i=i+1){
        //for space 
        for (int j=0; j<n-i-1; j=j+1){
            cout <<" ";
        }
        // for star
        for (int k=0; k<i+1; k=k+1){
            cout <<"* ";
        }
        cout << endl;
    }
    return 0;
}