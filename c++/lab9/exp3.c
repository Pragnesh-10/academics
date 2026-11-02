#include <iostream>
using namespace std;

class Fraction
{
    int numerator, denominator;

public:
    Fraction(int n, int d)
    {
        numerator = n;
        denominator = d;
    }

    // Overloading * operator
    Fraction operator*(Fraction f)
    {
        return Fraction(numerator * f.numerator,
                        denominator * f.denominator);
    }

    void display()
    {
        cout << numerator << "/" << denominator << endl;
    }
};

int main()
{
    Fraction f1(1, 2);
    Fraction f2(1, 3);

    Fraction result = f1 * f2;

    cout << "First Fraction: ";
    f1.display();

    cout << "Second Fraction: ";
    f2.display();

    cout << "Multiplication Result: ";
    result.display();

    return 0;
}