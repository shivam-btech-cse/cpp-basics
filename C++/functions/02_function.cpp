#include<iostream>
using namespace std;

// sum of Numbers from 1 to N
int sum(int numberOfTerms){
    int sum = 0;
    for(int i=1; i<=numberOfTerms; i++){
        sum += i;
    }
    return sum;
}

// Factorial of N 
int factorial(int num){
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    cout << "Sum = " << sum(5) << endl;
    cout << "Factorial = " << factorial(5);
    return 0;
}