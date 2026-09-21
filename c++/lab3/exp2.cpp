#include <iostream>
using namespace std;

void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Before swapping: " << a << " " << b << endl;

    swapValues(a, b);

    cout << "After swapping: " << a << " " << b << endl;

    return 0;
}