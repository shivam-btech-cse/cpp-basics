#include<iostream>
using namespace std;

int main(){

    int n = 4;
    // for(int i=0; i<n; i++){
        
    //     for(int j=1; j<=i; j++){

    //         cout<< j <<" ";

    //     }
    //     cout<<endl;
    // }

    // for(int i = 0; i<n; i++){
    //     for(int j=i+1; j>=1; j--){
    //         cout<< j <<" ";
    //     }
    //     cout<<endl;
    // }

    char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<< ch << " ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}