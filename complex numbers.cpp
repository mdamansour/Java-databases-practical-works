#include <iostream>
using namespace std;

class Complex {
public:
    double real;
    double imag;

    void show() {
        if (real == 0 && imag == 0) {
            cout << "0";
        }
        else if (real == 0) {
            cout << imag << "i";
        }
        else if (imag == 0) {
            cout << real;
        }
        else if (imag > 0) {
            cout << real << " + " << imag << "i";
        }
        else {
            cout << real << " - " << -imag << "i";  // print minus and make imag positive
        }
    }
};

int main() {
    Complex a, b;

    cout << "Enter first complex number (real imag): ";
    cin >> a.real >> a.imag;

    cout << "Enter second complex number (real imag): ";
    cin >> b.real >> b.imag;

    cout << "\nA = ";
    a.show();
    cout << "\nB = ";
    b.show();
    cout << endl;

    return 0;
}
