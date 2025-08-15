#include<iostream>
using namespace std;

int main(){
    
    // Find character is lowercase or uppercase.
    char ch = '@';

    if(ch >= 'a' && ch <= 'z'){
        cout << "Lowercase" << endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase" << endl;
    } else {
        cout << "Not an English Letter" << endl;
    }


    // Sum of Odd Numbers using while loop
    int i = 1, sum = 0, N = 100;
    
    while (i <= N){
            sum += i;
            i += 2;
        }
        cout << "Sum of Odd Numbers= " << sum << endl;
        
        
    // Sum of Even Numbers using for loop
    int Number = 10, add = 0;
    for(int i=1; i<=Number; i++){
        if(i % 2 == 0){
            add += i;
        }
    }
    cout << "Sum of Even Numbers = " << add << endl;


    // Sum of Numbers b/w 1 to N divisible by 3
    int num = 10, summation = 0;
    for(int i=1; i<=num; i++){
        if(i % 3 == 0){
            summation += i;
        }
    }
    cout << "Sum = " << summation << endl;
    return 0;
}