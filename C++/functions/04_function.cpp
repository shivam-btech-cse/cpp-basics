#include<iostream>
using namespace std;

// factorial of a number
int factorial(int num){
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact *= i;
    }
    return fact;
}

// binomial Coffecient, nCr
int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int factOfNminusR = factorial(n-r);

    return (fact_n)/(fact_r * factOfNminusR);
}
int main(){
    int n, r;
    cout << "Enter values for n & r: ";
    cin >> n >> r;
    
    if(n>r && n>0 && r>0){

        cout << "nCr = " << nCr(n, r) << endl;
        
    } else {
        cout << "Enter Correct values for n & r!!!";
    }
    return 0;
}