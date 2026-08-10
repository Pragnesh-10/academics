#include <iostream>
using namespace std;

int main() {
    // Implicit conversion from int to double
    int num = 10;
    double decimal = 5.5;

    double result = num + decimal;

    cout << "Result of adding integer and double: " << result << endl;

    // Implicit conversion from char to int
    char ch = 'B';
    int value = ch + 10;

    cout << "Value of 'B' + 10: " << value << endl;

    return 0;
}