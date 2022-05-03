//
// Created by Rakan on 2022/4/16.
//
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

class Complex {
public:
    explicit Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex(const Complex &complex) = default;


    ~Complex() = default;

    double abs() const {
        return sqrt(real * real + imag * imag);
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

    bool operator>(const Complex &complex) const {
        return this->abs() > complex.abs();
    }

    bool operator>=(const Complex &complex) const {
        return this->abs() >= complex.abs();
    }

    bool operator<(const Complex &complex) const {
        return this->abs() < complex.abs();
    }

    bool operator<=(const Complex &complex) const {
        return this->abs() <= complex.abs();
    }

    bool operator==(const Complex &complex) const {
        return this->abs() == complex.abs();
    }


    friend ostream &operator<<(ostream &output, const Complex &complex) {
        if (complex.imag == 0) output << noshowpos << complex.real;
        else output << noshowpos << complex.real << showpos << complex.imag << 'i';
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
    Complex c[3];
    cin >> c[0] >> c[1] >> c[2];
    sort(c, c + 3);
    cout << c[0] << endl << c[1] << endl << c[2];
//    Complex c1, c2;
//    cin >> c1 >> c2;
//    cout << (c1 > c2);
    return 0;
}