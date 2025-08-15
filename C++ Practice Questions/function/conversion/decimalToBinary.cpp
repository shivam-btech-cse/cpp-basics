#include<iostream>
using namespace std;

// decimal to binary conversion
int decimalToBinary(int decimalNum){
    int pow =1, binaryNum = 0;

    while(decimalNum != 0){
        int remainder = decimalNum % 2;
        decimalNum /= 2;
        binaryNum += remainder * pow;

        pow *= 10;
    }

    return binaryNum;
}
int main(){
    int decimalNum;
    cout << "Enter a Decimal Number: ";
    cin >> decimalNum;

    int binaryNum = decimalToBinary(decimalNum);

    cout <<"Decimal:" << decimalNum << " = bin:" << binaryNum;

    return 0;
}