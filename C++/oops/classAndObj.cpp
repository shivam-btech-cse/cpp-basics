//Q.1 Write a Program to implement Class and Object

#include <iostream>
using namespace std;

class Student // Class definition
{
public:
    int roll_no;
    string name;
    void display()
    {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s1; // create an object of class Student
    s1.roll_no = 101;
    s1.name = "John";
    s1.display();

    return 0;
}