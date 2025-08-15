#include<iostream>
using namespace std;

// sum of digits of a number
int sumOfDigits(int num){
    int digitSum = 0;
    while(num > 0){
        int remainder = num % 10;
        num /= 10;
        digitSum += remainder;
    }
    return digitSum;
}

int main(){
    
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    int digitSum = sumOfDigits(num);
    cout << "Sum of Digits = " << digitSum;
    return 0;
}