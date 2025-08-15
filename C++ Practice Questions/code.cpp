#include <iostream>
using namespace std;

int sum(int num1, int num2){
    num1 = num1 + 10;
    num2 = num2 - 10;
    return (num1+num2);
}

int main(){

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // cout << "Sum = " << num1 + num2 << endl;
    // cout << "Subtraction = " << num1 - num2 << endl; 
    // cout << "Multiplication = " << num1 * num2 << endl; 
    // cout << "Division = " << num1 / num2 << endl;

    // call by value parameters does not change
    cout << "Sum = " << sum(num1, num2) << endl;
    cout << "num1 = " << num1 << " num2 = " << num2; 
    return 0;
}