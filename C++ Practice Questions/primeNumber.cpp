#include<iostream>
using namespace std;

int main(){
    // Check if a Number is Prime or not 
    int N; 
    cout << "Enter Number : ";
    cin >> N;
    
    bool isPrime = true;
    for(int i=2; i*i<=N; i++){
        if(N % i == 0){
            isPrime = false;
            break;
        }
    }
    
    if(isPrime){
        cout << N << " is a Prime Number\n";

    } else {
        cout << N << " is NOT a Prime Number\n";

    }

    // Print Prime numbers b/w 1 to N
    
    cout << "Prime Numbers b/w 1 to " << N << " : ";
    for(int i=2; i<=N; i++){
        bool isprime = true;

        for(int j=2; j*j<=i; j++){  //optimization

            if(i % j == 0){
                isprime = false;
                break;
            }
        }
        if(isprime){
            cout << i << " ";
        }
    }

    return 0;  
}
