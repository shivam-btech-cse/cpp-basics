#include<iostream>
#include<tuple>
using namespace std;

int fibonacci(int n){
    int sum = 0, a = 0, b = 1;
    cout << "Fibonacci Series upto "<<n <<" elements: ";
    for(int i=1; i<=n; i++){
        cout << a << " ";
        if(i==n){
            cout << "\nnth Fibonacci = "<< a  <<endl;
        }
        sum = a + b;
        a = b;
        b = sum;
    }
    
}
std::tuple<int, int> swapNums(int a, int b){
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    return std::make_pair (a, b);
}

int main(){

    fibonacci(10);
    int a,b;
    std::tie(a,b) = swapNums(3,5);
    cout << "After Swapping => a = "<< a<<" "<<"b = "<< b;
    return 0;
}