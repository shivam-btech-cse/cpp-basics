// Q. 12 Write a Program to implement Binary operator overloading

#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imag;
    public:
        Complex(int r=0, int i=0): real(r), imag(i) {}
        
        // Overloading binary operator
        Complex operator+(const Complex& c) {
            return Complex(real + c.real, imag + c.imag);
        }
        
        void display() {
            cout << "Real: " << real << ", Imaginary: " << imag << endl;
        }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);
    
    cout << "Complex Number 1: ";
    c1.display();
    
    cout << "Complex Number 2: ";
    c2.display();
    
    Complex c3 = c1 + c2; // Using overloaded binary operator
    cout << "After adding: ";
    c3.display();
    
    return 0;
}