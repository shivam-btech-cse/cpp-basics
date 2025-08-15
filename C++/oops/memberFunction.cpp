// Q.2 Write a Program to create Member function inside class and outside class definition

#include<iostream>
using namespace std;

class Student
{
    public:
        int roll_no;
        string name;
        void printName(); // member function declaration
        void display() // member function declaration
        {
            // member function inside the class
            cout<<"Roll No: "<<roll_no<<endl;
            cout<<"Name: "<<name<<endl;
        }
};

void Student::printName() // member function definition outside the class
{
    cout<<"Name: "<<name<<endl;
}
int main()
{
    Student s1; // create an object of class Student
    s1.roll_no = 101; // assign values to the data members
    s1.name = "John";
    
    s1.display(); // call member function defined inside the class
    s1.printName(); // call member function defined outside the class

    return 0;
}