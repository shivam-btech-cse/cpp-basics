// Q. 4 Write a Program to implement Friend function 
#include<iostream>
using namespace std;

class Friend
{
private:
    int a;
    int b;
public:
    Friend(){
        a = 10;
        b = 20;
        cout << "I'm  a constructor" << endl;
    };
    ~Friend(){
        cout << "I'm a destructor" << endl;
    };
    friend void display(Friend &f);

};

// friend function definition
void display(Friend &f)
{
    cout << "The value of a is: " << f.a << endl; //accessing private data member
    cout << "The value of b is: " << f.b << endl;
}

int main()
{
    Friend f;
    display(f);
    return 0;
}