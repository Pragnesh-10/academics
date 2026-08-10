#include <iostream>
using namespace std;

int main() {
    int x, y;
    int year_old, days_old;
    cout << "Enter the Year of Birth: ";
    cin >> x;
    cout << "Enter the Current Year: ";
    cin >> y;
    year_old = y - x;
    cout << "You are " << year_old << " years old." << endl;
    days_old = year_old * 365;
    cout << "You are " << days_old << " days old." << endl;
    return 0;
}