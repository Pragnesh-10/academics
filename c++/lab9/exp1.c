#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    Complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }

    // Overloading + operator
    Complex operator+(Complex c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    // Overloading - operator
    Complex operator-(Complex c)
    {
        return Complex(real - c.real, imag - c.imag);
    }

    // Overloading << operator
    friend ostream& operator<<(ostream& out, Complex c)
    {
        out << c.real;

        if (c.imag >= 0)
            out << " + " << c.imag << "i";
        else
            out << " - " << -c.imag << "i";

        return out;
    }
};

int main()
{
    Complex c1(5, 3);
    Complex c2(2, 4);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    cout << "First Complex Number: " << c1 << endl;
    cout << "Second Complex Number: " << c2 << endl;

    cout << "Addition: " << sum << endl;
    cout << "Subtraction: " << diff << endl;

    return 0;
}