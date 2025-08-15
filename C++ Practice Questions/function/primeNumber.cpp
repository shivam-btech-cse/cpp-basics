#include<iostream>
using namespace std;

// function to check prime number
bool checkPrime(int num){
    bool prime = true;
    for(int i=2; i*i<=num; i++){
        if(num % i == 0){
            prime = false;
            break;
        }
    }
    return prime;
}

// print & count prime numbers b/w 1 to n
void printPrime(int n){
    int count = 0;
    cout << "Prime numbers b/w 1 to " << n << " are: ";  
    for(int i=2; i<=n; i++){
        bool prime = checkPrime(i);
        if(prime == true){
            cout << i << " ";
            count++;
        }
    }
    cout << "\nTotal Prime Numbers b/w 1 to " << n << " = " << count;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    //check prime
    bool prime = checkPrime(num);
    if(prime == true){
        cout << num << " is a Prime Number\n";

    } else {
        cout << num << " is NOT a Prime Number\n";

    }

    //print & count prime numbers
    printPrime(num);

    return 0;
}