#include<iostream>
using namespace std;

//sum of digits of a number
int digitsSum(int num){
    int digitSum = 0, remainder = 0;
    while(num > 0){
        remainder = num % 10;
        num = num / 10;
        digitSum += remainder;
    }
    return digitSum;
}

int main(){
    int number ;
    cout << "Enter a number: ";
    cin >> number;
    int sumOfDigits = digitsSum(number);
    cout << "Sum of digits = " << sumOfDigits << endl;
    return 0;
}