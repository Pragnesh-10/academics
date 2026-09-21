#include <iostream>
using namespace std;

void printFibonacci(int n) {
    int first = 0, second = 1, next;

    for (int i = 0; i < n; i++) {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int n;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci sequence: ";
    printFibonacci(n);

    return 0;
}