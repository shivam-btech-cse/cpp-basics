#include<iostream>
using namespace std;

int main(){
    int num = 5;

        // pattern 1
    for(int i=0; i<num; i++){
        for(int j=i+1; j>0; j--){

            cout << j << " ";
        }
        cout << endl;
    }

    // pattern 2
    char ch = 'A';
    for(int i=0; i<num; i++){
        for(int j=i ; j>=0 ; j--){
            cout << char(ch+j) << " ";
        }
        cout << endl;
    }
    return 0;
}