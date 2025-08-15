#include<iostream>
using namespace std;

// switch statement
int main(){
    int num;
    cout << "Enter a Number(1-7): ";
    cin >> num;

    switch (num){
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
    break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    
    default:
        cout << "Invalid input! Please enter a number b/w 1 & 7";
    }

    return 0;
}