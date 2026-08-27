#include <iostream>
int main(){
    const double pi = 3.14159;
    double radius = 7.0;
    double circumference = pi * radius * radius;
    std::cout << "Radius: " << radius << std::endl;
    std::cout << "Circumference: " << circumference << std::endl;
    return 0;
}