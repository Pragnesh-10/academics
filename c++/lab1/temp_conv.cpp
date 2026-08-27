#include <iostream>

int main(){
    int c;
    std::cout << "Enter temperature in Celsius: "; 
    std::cin >> c;
    double f = (c * 9.0/5.0) + 32;
    std::cout << "Temperature in Fahrenheit: " << f << std::endl;
    return 0;
}