#include<iostream>
using namespace std;

// binary to decimal conversion
int binaryToDecimal(int binaryNum){
    int pow =1, decimalNum = 0;

    while(binaryNum != 0){
        int remainder = binaryNum % 10;
        binaryNum /= 10;
        decimalNum += remainder * pow;

        pow *= 2;
    }

    return decimalNum;
}
int main(){
    int binaryNum;
    cout << "Enter a Binary Number: ";
    cin >> binaryNum;

    int decimalNum = binaryToDecimal(binaryNum);

    cout << "bin:" << binaryNum << " = Decimal:" << decimalNum;

    return 0;
}