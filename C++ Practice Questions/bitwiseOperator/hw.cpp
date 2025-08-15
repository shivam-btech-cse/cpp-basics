#include<iostream>
using namespace std;

int main(){

    int n = 31, count = 0;
    int temp = n;

    // figure out if a number is power of two or not using loops
    // while(temp != 1){
    //     temp = temp/2;
    //     count++;
    // }
    
    // for(int i=0; i<count; i++){
    //     temp = 2*temp;
    // }

    // if(temp == n){
    //     cout << n  <<" is power of 2";
    // } else {
    //     cout << n  <<" is NOT power of 2";

    // }
    
    // figure out if a number is power of two or not without loops
    
    if(n & (n-1)){
        cout << n << " is NOT power of 2";
    } else {
        cout << n << " is power of 2";

    }

    return 0;
}