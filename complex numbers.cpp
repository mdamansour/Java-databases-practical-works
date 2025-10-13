#include <iostream>
using namespace std;

class Complex {
public:
    double real;
    double imag;

    // Function to input a complex number
    void input() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    // Function to display a complex number nicely
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
            cout << real << " - " << -imag << "i";
        }
    }
};

int main() {
    Complex a, b;

    cout << "First complex number:\n";
    a.input();

    cout << "Second complex number:\n";
    b.input();

    cout << "\nA = ";
    a.show();
    cout << "\nB = ";
    b.show();
    cout << endl;

    return 0;
}
