#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Addition using void and parameters
    void add(const Complex &c) {
        real = real + c.real;
        imag = imag + c.imag;
    }

    // Subtraction using void and parameters
    void subtract(const Complex &c) {
        real = real - c.real;
        imag = imag - c.imag;
    }

    void display() const {
        cout << real << " + i" << imag << endl;
    }
};

int main() {
    Complex c1(4, 5), c2(8, 9);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    c1.add(c2);
    cout << "Addition: ";
    c1.display();

    // Create new objects for subtraction
    Complex c3(4, 5);
    c3.subtract(c2);

    cout << "Subtraction: ";
    c3.display();

    return 0;
}