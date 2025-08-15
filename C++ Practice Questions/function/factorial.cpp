#include<iostream>
using namespace std;

// factorial of a number
double factorial(int n){
    double fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    
    int num;
    cout << "Enter a Natural Number: ";
    cin >> num;

    double fact = factorial(num);
    cout << "Factorial = " << fact;
    return 0;
}