// Q. 10 Write a Program to implement Hybrid Inheritance

#include<iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display function called." << endl;
    }
};  

class Derived1 : public Base {
public:
    void display() {
        cout << "Derived1 class display function called." << endl;
    }
};

class Derived2 : public Base {
public:
    void display() {
        cout << "Derived2 class display function called." << endl;
    }
};

class Derived3 : public Derived1, public Derived2 {
public:
    void display() {
        cout << "Derived3 class display function called." << endl;
    }
};  

int main() {
    Base baseObj;
    Derived1 derived1Obj;
    Derived2 derived2Obj;
    Derived3 derived3Obj;

    baseObj.display();         // Calls Base class display function
    derived1Obj.display();     // Calls Derived1 class display function
    derived2Obj.display();     // Calls Derived2 class display function
    derived3Obj.display();     // Calls Derived3 class display function

    return 0;
}
