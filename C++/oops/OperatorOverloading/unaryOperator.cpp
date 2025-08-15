// Q. 11 Write a Program to implement Unary operator overloading

#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imag;
    public:
        Complex(int r=0, int i=0): real(r), imag(i) {}
        
        // Overloading unary operator
        Complex operator-() {
            return Complex(-real, -imag);
        }
        
        void display() {
            cout << "Real: " << real << ", Imaginary: " << imag << endl;
        }
};

int main() {
    Complex c1(3, 4);
    cout << "Original Complex Number: ";
    c1.display();
    
    Complex c2 = -c1; // Using overloaded unary operator
    cout << "After applying unary minus: ";
    c2.display();
    
    return 0;
}