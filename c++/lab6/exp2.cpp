#include <iostream>
using namespace std;

class InterestCalculator {
private:
    double principal;
    double rate;
    double time;

public:
    // Parameterized constructor
    InterestCalculator(double p, double r, double t) {
        principal = p;
        rate = r;
        time = t;
    }

    // Method to calculate and display simple interest
    void calculateInterest() {
        double simpleInterest;

        simpleInterest = (principal * rate * time) / 100;

        cout << "Simple Interest = " << simpleInterest << endl;
    }
};

int main() {
    double principal, rate, time;

    // Get values from the user
    cout << "Enter Principal: ";
    cin >> principal;

    cout << "Enter Rate of Interest (%): ";
    cin >> rate;

    cout << "Enter Time (in years): ";
    cin >> time;

    // Create object using parameterized constructor
    InterestCalculator obj(principal, rate, time);

    // Calculate and display simple interest
    obj.calculateInterest();

    return 0;
}