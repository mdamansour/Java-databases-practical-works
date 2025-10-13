#include <iostream>
using namespace std;

class Complex {
public:
    double real;      // real part
    double imag;      // imaginary part
};

int main() {
    Complex c;           // create one Complex number
    c.real = 2.0;        // assign values
    c.imag = 3.0;

    cout << "Real: " << c.real << ", Imaginary: " << c.imag << endl;

    return 0;
}
