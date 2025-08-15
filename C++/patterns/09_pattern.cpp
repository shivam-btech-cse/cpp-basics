#include<iostream>
using namespace std;

int main(){

    int n = 10;
    for(int i=0; i<=2*(n-1); i++){

        // left Half

        // spaces before star
        for(int j=0; j <= abs(n-i-1); j++){
            cout<< "  ";
        }

        // stars
        if(i>0 && i<2*(n-1)){
            cout<< "* ";
        }

        // space after stars
        if(i>1 && i <= n-1){
            for(int j=0; j < i-1; j++){
                cout<< "  ";
                
            }
        } else if(i >= n && i <= 2*(n-2)){
            for(int j=0; j <= (2*(n-2)-i); j++){
                cout<< "  ";

            }
        }

        // right Half

        // spaces
        if(i>0 && i<= n-1){
            for(int j=1; j<=i; j++){
                cout<< "  ";
            }
        } else if(i>=n && i<2*(n-1)){
            for(int j=0; j < (2*(n-1)-i); j++){
                cout<< "  ";
            }
        }
        // stars
        cout<< "*";

        cout<< endl;
    }
    return 0;
}