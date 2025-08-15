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

double nCr(int n, int r){
    double nFact = factorial(n);
    double rFact = factorial(r);
    double nMinusRfact = factorial(n-r);

    return (nFact) / (rFact * nMinusRfact);
}
int main(){
    
    int n, r;
    cout << "Enter the value of n & r: ";
    cin >> n >> r;

    if(n >= r){
        double binomialCoeff = nCr(n, r);
        cout << "nCr = " << binomialCoeff;

    } else {
        cout << "n should be greater than r...";
    }
    return 0;
}