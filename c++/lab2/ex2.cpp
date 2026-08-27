#include <iostream>
int main(){
    double value = 12.999999;
    int castedValue = static_cast<int>(value);
    std::cout << "Original value: " << value << std::endl;
    std::cout << "Casted value: " << castedValue << std::endl;
    char ch = 'c';
    int asciiValue = static_cast<int>(ch);
    std::cout << "Character: " << ch << std::endl;
    return 0;

}