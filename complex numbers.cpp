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

    // Function to display the complex number nicely
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

    // Function to add two complex numbers
    Complex add(Complex c) {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }

    // Function to subtract two complex numbers
    Complex subtract(Complex c) {
        Complex result;
        result.real = real - c.real;
        result.imag = imag - c.imag;
        return result;
    }

    // Function to multiply two complex numbers
    Complex multiply(Complex c) {
        Complex result;
        result.real = real * c.real - imag * c.imag;
        result.imag = real * c.imag + imag * c.real;
        return result;
    }
};

// 🔹 Independent function to choose and perform an operation
Complex chooseOperation(Complex a, Complex b) {
    int choice;
    cout << "\nChoose operation:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "Enter your choice: ";
    cin >> choice;

    Complex result;

    switch (choice) {
        case 1:
            result = a.add(b);
            cout << "\nYou chose: Addition\nResult: ";
            break;
        case 2:
            result = a.subtract(b);
            cout << "\nYou chose: Subtraction\nResult: ";
            break;
        case 3:
            result = a.multiply(b);
            cout << "\nYou chose: Multiplication\nResult: ";
            break;
        default:
            cout << "\nInvalid choice! Returning 0.\n";
            result.real = 0;
            result.imag = 0;
    }

    return result;
}

int main() {
    Complex a, b, result;

    cout << "First complex number:\n";
    a.input();

    cout << "Second complex number:\n";
    b.input();

    result = chooseOperation(a, b);   // call our independent function

    result.show();                    // display result
    cout << endl;

    return 0;
}
