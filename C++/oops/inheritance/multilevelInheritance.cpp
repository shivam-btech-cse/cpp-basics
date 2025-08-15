// Q. 8 Write a Program to implement Multi level Inheritance

#include<iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "Class A" << endl;
    }
};  

class B : public A {
public:
    void displayB() {
        cout << "Class B" << endl;
    }
};

class C : public B {
public:
    void displayC() {
        cout << "Class C" << endl;
    }
};

int main() {
    C objC; // Creating an object of class C
    objC.displayA(); // Accessing method from class A
    objC.displayB(); // Accessing method from class B
    objC.displayC(); // Accessing method from class C

    return 0;
}