#include <iostream>
#include <cmath>
using namespace std;

class Vector2D
{
    float x, y;

public:
    Vector2D(float a, float b)
    {
        x = a;
        y = b;
    }

    // Overloading unary ~ operator
    float operator~()
    {
        return sqrt(x * x + y * y);
    }
};

int main()
{
    Vector2D v(3, 4);

    cout << "Magnitude of Vector: " << ~v << endl;

    return 0;
}