// Q. 6 Write a Program to implement Single Inheritance
#include <iostream>
using namespace std;

class MyClass {
public:
    int x;
    MyClass(int a) : x(a) {}    
};


// single Inheritance
class myDerivedClass : public MyClass {
public:
    int y;
    myDerivedClass(int a, int b) : MyClass(a), y(b) {}    
};

int main() {
    myDerivedClass obj(10, 20);
    cout << "x: " << obj.x << ", y: " << obj.y << endl;
    return 0;
}