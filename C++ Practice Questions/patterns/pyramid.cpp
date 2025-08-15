#include<iostream>
using namespace std;

int main(){
    int n = 9;
    for(int i=0; i<n; i++){
        // spaces
        for(int j=0; j<(n-i-1); j++){
            cout << "  ";
        }
        // nums set 1
        for(int j=0; j<i; j++){
            cout << j+1 << " ";
        }
        
        // nums set 2
        for(int j=i; j>=0; j--){
            cout << j+1 << " ";
        }
        cout << endl;
    }
}