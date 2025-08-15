#include<iostream>
using namespace std;

int main(){
    
    // pattern 1
    int num = 4;
    for(int i=0; i<num; i++){
        for(int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    
    // pattern 2
    for(int i=0; i<num; i++){
        for(int j=0; j<=i; j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }

    // pattern 3
    
    for(int i=0; i<num; i++){
        // char ch = 'A';

        for(int j=0; j<=i; j++){
            cout << j+1 << " "; // ch -> j+1
            // ch++;
        }
        cout << endl;
    }
    return 0;
}