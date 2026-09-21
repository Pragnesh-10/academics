#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int i = 1, j = 3;

    cout << "Before swap: ";
    cout << arr[i] << " " << arr[j] << endl;

    swapByValue(arr[i], arr[j]);

    cout << "After swapByValue: ";
    cout << arr[i] << " " << arr[j] << endl;

    swapByReference(arr[i], arr[j]);

    cout << "After swapByReference: ";
    cout << arr[i] << " " << arr[j] << endl;

    return 0;
}