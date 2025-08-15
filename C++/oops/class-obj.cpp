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
        // inline function
        inline int add(int a, int b)
        {
            return a+b;
        }
};
// member function outside the class
void Student::printName(){
    cout<<"Name: "<<name<<endl;
}

int main()
{
    Student s1;
    s1.roll_no = 101;
    s1.name = "John";
    s1.display();
    cout<<endl;
    s1.printName();

    cout<<"Sum: " << s1.add(10, 20)<<endl;
    return 0;
}