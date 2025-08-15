#include<iostream>
using namespace std;

// check Prime
bool checkPrime(int num){
    bool isPrime = true;
    for(int i=2; i*i<=num; i++){
        if(num % i == 0){
            isPrime = false;
            return isPrime;
        }
    }
    return isPrime;
}

// print Prime from 2 to n.
void printPrimeNums(int n){
    for(int i=2; i<=n; i++){
        int count = 0;
        for(int j=2; j <= n; j++){
            if(i % j == 0){
                count++;
            }
        }
        if(count == 1){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){
    int num = 2;
    bool checkNum = checkPrime(num);
    if(checkNum == true){
        cout << num << " is prime number";
    } else {
        cout << num << " is NOT prime number";
    }
    cout << endl;
    
    // Prime number from 2 to n.
    printPrimeNums(100);
    return 0;
}