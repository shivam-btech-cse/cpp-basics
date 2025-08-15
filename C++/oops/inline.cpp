// Q.3 Write a Program to implement Inline function

#include <iostream>
using namespace std;

class Inline
{
public:
    // Inline function definition
    inline void display()
    {
        cout << "This is an inline function." << endl;
    }
    void print();
};

// Inline function outside the class
inline void Inline::print()
{
    cout << "This is another inline function." << endl;
}

int main()
{
    Inline obj;
    obj.display(); // Call inline function
    obj.print();   // Call another inline function
    return 0;
}