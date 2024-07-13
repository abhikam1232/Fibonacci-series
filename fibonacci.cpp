#include <iostream>
using namespace std;
    int main(){
        // This is a program of fibonnaci series.
        int a = 0;
        int b = 1;
        int sum;
        int number;
        cout<<" Enter the number:- ";
        cin>>number;
        cout<<a<<" "<<b<<" ";
        for (int i = 2; i<number; i++){
            sum = a+b;
            cout<<b;
            a = b;
            b = sum;
        }
        return 0;



    }