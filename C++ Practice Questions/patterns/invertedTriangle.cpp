#include<iostream>
using namespace std;

int main(){
    int num = 4;
    char ch = 'A';
    for(int i=0; i<num; i++){
        for(int j=0; j<i; j++){
            cout << "  ";
        }

        for(int j=0; j<num-i; j++){
            cout << ch << " ";  // i+1->ch
        }
        ch++;
        cout << endl;
    }

    return 0;
}