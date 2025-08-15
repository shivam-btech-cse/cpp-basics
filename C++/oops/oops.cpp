#include <iostream>
#include <string>
using namespace std;

class Teacher {
// access specifier - private, protected, public
public: 
    //properties/ attributes
    string name;
    string dept;
    string subject;
    double salary;

    // methods/member functions
    void changeDept(string newDept){
        dept = newDept;
    }

};

int main(){

    Teacher teacher1;
    teacher1.name = "Mr John";
    teacher1.dept = "Computer Science";
    teacher1.subject = "Data Structures";
    teacher1.salary = 50000;

    cout << "Name: " << teacher1.name << endl;
    cout << "Department: " << teacher1.dept << endl;
    cout << "Subject: " << teacher1.subject << endl;
    cout << "Salary: " << teacher1.salary << endl;
    
    return 0;
}