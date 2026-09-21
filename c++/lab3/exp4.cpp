#include <iostream>
using namespace std;

double calculateNetSalary(double grossSalary) {
    double tax = grossSalary * 0.15;
    double retirement = grossSalary * 0.10;

    return grossSalary - tax - retirement;
}

int main() {
    double grossSalary, tax, retirement, totalDeductions, netSalary;

    cout << "Enter gross salary: ";
    cin >> grossSalary;

    tax = grossSalary * 0.15;
    retirement = grossSalary * 0.10;
    totalDeductions = tax + retirement;

    netSalary = calculateNetSalary(grossSalary);

    cout << "\nSalary Summary" << endl;
    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Total Deductions: " << totalDeductions << endl;
    cout << "Net Salary: " << netSalary << endl;

    return 0;
}