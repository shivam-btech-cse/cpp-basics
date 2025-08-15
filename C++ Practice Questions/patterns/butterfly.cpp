#include<iostream>
using namespace std;

int main(){

    int n = 10;
    // top 
    for(int i=0; i<n; i++){
        // top-left stars
        for(int j=0; j<=i; j++){
            cout << "* ";
        }

        // top spaces
        for(int j=0; j<2*(n-i-1); j++){
            cout << "  ";
        }

        // top-right stars
        for(int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
        
    }

    // bottom
    for(int i=0; i<n; i++){
        // bottom-left stars
        for(int j=0; j<n-i; j++){
            cout << "* ";
        }

        // bottom spaces
        for(int j=0; j<2*i; j++){
            cout << "  ";
        }

        // bottom-right stars
        for(int j=0; j<n-i; j++){
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}