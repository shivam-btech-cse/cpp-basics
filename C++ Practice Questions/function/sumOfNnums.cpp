#include<iostream>
using namespace std;

// sum of N natural nums
int sum(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    
    int num;
    cout << "Enter a Natural Number: ";
    cin >> num;

    int total = sum(num);
    cout << "Sum of " << num << " natural numbers = " << total;
    return 0;
}