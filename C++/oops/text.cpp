#include<iostream>
using namespace std;

class Test {
public:
    static int x;
    void incX(){
        x += 1;
    }
};

int Test :: x;
int main(){

    Test obj1, obj2;
    obj1.x = 10;
    obj2.x = 20;
    cout << obj1.x;
    return 0;
}