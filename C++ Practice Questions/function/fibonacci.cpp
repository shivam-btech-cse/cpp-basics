#include<iostream>
using namespace std;

// fibonacci series
int fibonacci(int n){
    int pre = 0, current = 1;

    for(int i=0; i<n; i++){         
        cout << pre << " ";
        int next = pre + current;
        pre = current;
        current = next;
    }
}

int main(){
    
    int num;
    cout << "Enter a Natural Number: ";
    cin >> num;

    fibonacci(num);

    return 0;
}