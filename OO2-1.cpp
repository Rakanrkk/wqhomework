//
// Created by Rakan on 2022/4/16.
//

//
// Created by Rakan on 2022/4/16.
//
#include <iostream>
#include <math.h>

using namespace std;

class Complex {
public:
    explicit Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    ~Complex() = default;

    static double abs(const Complex &complex) {
        return sqrt(complex.real * complex.real + complex.imag * complex.imag);
    }

    double abs() const {
        return sqrt(real*real + imag*imag);
    }

    Complex operator+(const Complex &complex) const {
        Complex result;
        result.real = real + complex.real;
        result.imag = imag + complex.imag;
        return result;
    }

    Complex operator-(const Complex &complex) const {
        Complex result;
        result.real = real - complex.real;
        result.imag = imag - complex.imag;
        return result;
    }

    Complex operator*(const Complex &complex) const {
        Complex result;
        result.real = real * complex.real - imag * complex.imag;
        result.imag = imag * complex.real + real * complex.imag;
        return result;
    }

    Complex operator/(const Complex &complex) const {
        Complex result;
        result.real = (real * complex.real + imag * complex.imag) / (imag * imag + complex.imag * complex.imag);
        result.imag = (imag * complex.real - real * complex.imag) / (imag * imag + complex.imag * complex.imag);
        return result;
    }

    Complex &operator=(const Complex &complex) = default;

    friend ostream &operator<<(ostream &output, const Complex &complex) {
        output << noshowpos << complex.real << showpos << complex.imag << 'i';
        return output;
    }

    friend istream &operator>>(istream &input, Complex &complex) {
        input >> complex.real >> complex.imag;
        return input;
    }

private:
    double real;
    double imag;
};


int main() {
    Complex c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    cout << c1 + c2 + c3 << endl << c1 * c2 * c3;
    return 0;
}