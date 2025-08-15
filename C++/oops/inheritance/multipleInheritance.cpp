// Q. 7 Write a Program to implement Multiple Inheritance

#include<iostream>
using namespace std;    

class Parent1 {
public:
    void display() {
        cout << "Parent1 class" << endl;
    }
};

class Parent2 {
public:
    void display() {
        cout << "Parent2 class" << endl;
    }
};

class Child : public Parent1, public Parent2 {
public:
    void display() {
        cout << "Child class" << endl;
    }
};

int main() {
    Child obj;
    obj.Parent1::display(); // Calls Parent1's display
    obj.Parent2::display(); // Calls Parent2's display
    obj.display();          // Calls Child's display

    return 0;
}