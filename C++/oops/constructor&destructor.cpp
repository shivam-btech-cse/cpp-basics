// Q.5 Write a Program to implement Constructor and Destructor

#include<iostream>
using namespace std;

class Constructor
{
private:
    int a;
    int b;
public:
    // Non-Parameterized constructor
    Constructor() {
        a = 10;
        b = 20;
        cout << "Non-Parameterized constructor called" << endl;
    }

    // Parameterized constructor
    Constructor(int x, int y) {
        a = x;
        b = y;
        cout << "Parameterized constructor called with values: " << a << " and " << b << endl;
    }

    // Destructor
    ~Constructor() {
        cout << "Destructor called for object with values: " << a << " and " << b << endl;
    }

    void display() {
        cout << "a: " << a << ", b: " << b << endl;
    }
};

int main() {
    // Creating an object using the default constructor
    Constructor obj1;
    obj1.display();

    // Creating an object using the parameterized constructor
    Constructor obj2(30, 40);
    obj2.display();

    // Destructor will be called automatically when objects go out of scope
    return 0;
}