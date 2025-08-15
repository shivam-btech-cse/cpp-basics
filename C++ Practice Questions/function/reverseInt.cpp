#include<iostream>
using namespace std;

int main(){

    int num = 123, count = 0, pos = 1, newNum = 0;
    int temp = num;

    // length of integer
    while(temp){
        int remainder = temp % 10;
        temp = temp/10;
        count++;
    }
    
    // position of first digit
    for(int i=1; i<count; i++){
        pos *= 10;
    }

    // reverse the interger
    for(int i=0; i<count; i++){
        int remainder = num % 10;
        num /= 10;
        newNum += remainder * pos;

        pos /= 10;
    }

    cout << "Reversed Number = " << newNum;


    return 0;
}