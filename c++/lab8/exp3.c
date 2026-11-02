#include <iostream>
using namespace std;

class Area
{
public:

    // Area of square
    double calculateArea(double side)
    {
        return side * side;
    }

    // Area of rectangle
    double calculateArea(double length, double width)
    {
        return length * width;
    }

    // Area of circle
    double calculateArea(double radius, int indicator)
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Area a;

    double side = 5;
    double length = 10, width = 6;
    double radius = 4;

    cout << "Area of Square: "
         << a.calculateArea(side) << endl;

    cout << "Area of Rectangle: "
         << a.calculateArea(length, width) << endl;

    cout << "Area of Circle: "
         << a.calculateArea(radius, 1) << endl;

    return 0;
}