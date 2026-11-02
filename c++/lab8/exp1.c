#include <iostream>
using namespace std;

// Adding two integers
int add(int a, int b)
{
    return a + b;
}

// Adding two floating-point numbers
float add(float a, float b)
{
    return a + b;
}

// Adding an integer and a floating-point number
float add(int a, float b)
{
    return a + b;
}

int main()
{
    int x = 10, y = 20;
    float p = 5.5, q = 4.5;

    cout << "Addition of two integers: "
         << add(x, y) << endl;

    cout << "Addition of two floats: "
         << add(p, q) << endl;

    cout << "Addition of integer and float: "
         << add(x, p) << endl;

    return 0;
}