#include <iostream>
using namespace std;
class Friend
{
private:
    int a;
    int b;

public:
    Friend(int x, int y) : a(x), b(y) {}
    
    // Friend function to overload the + operator
    friend Friend operator+(const Friend &f1, const Friend &f2);
    void display()
    {
        cout << "a: " << a << ", b: " << b << endl;
    }
};
// Overloading the + operator using a friend function
Friend operator+(const Friend &f1, const Friend &f2)
{
    return Friend(f1.a + f2.a, f1.b + f2.b);
}
int main()
{
    Friend f1(10, 20);
    Friend f2(30, 40);

    cout << "Friend 1: ";
    f1.display();

    cout << "Friend 2: ";
    f2.display();

    Friend f3 = f1 + f2; // Using overloaded + operator
    cout << "After adding: ";
    f3.display();

    return 0;
}