#include<iostream>
using namespace std;

// Factorial of a Number
int main(){

    int Number, factorial = 1;
    cout << "Enter a Number : ";
    cin >> Number;

    for(int i=1; i<=Number; i++){
        factorial *= i;
    }

    cout << "Factorial = " << factorial;

    return 0;
}