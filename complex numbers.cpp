#include <iostream>
using namespace std;

class Complex {
public:
    double real;
    double imag;
};

int main() {
    Complex a, b;      // two complex numbers

    cout << "Enter first complex number (real imag): ";
    cin >> a.real >> a.imag;

    cout << "Enter second complex number (real imag): ";
    cin >> b.real >> b.imag;

    cout << "\nYou entered:\n";
    cout << "A = " << a.real << " + " << a.imag << "i\n";
    cout << "B = " << b.real << " + " << b.imag << "i\n";

    return 0;
}
