#include<iostream>
using namespace std;

int main(){
    int n = 10;

    for(int i=0; i<n; i++){
        if(i !=0 && i != n-1){
            cout << "* ";
        } else {
            for(int j=0; j<n; j++){
                cout << "* ";
            }

        }  
        cout << endl;   
    }

    for(int i=1; i<n; i++){
        if(i != n-1){
            for(int j=1; j<n; j++){
                cout << "  ";
            }
            cout << "* ";

        } else {
            for(int j=0; j<n; j++){
                cout << "* ";
            }

        }  
        cout << endl;   
    }
    return 0;
}