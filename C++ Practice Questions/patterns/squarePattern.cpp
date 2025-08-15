#include<iostream>
using namespace std;

int main(){

    int N = 3;
    // pattern 1
    for(int i=0; i<N; i++){
        char ch = 'A';

        for(int j=0; j<N; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    // pattern 2
    for(int i=0; i<N; i++){

        for(int j=1; j<=N; j++){
            cout << (N*i) + j << " ";
        }
        cout << endl;
    }

    // pattern 3
    char letter = 'A';
    for(int i=0; i<N; i++){

        for(int j=1; j<=N; j++){
            cout << letter << " ";
            letter++;
        }
        cout << endl;
    }

    return 0;
}