#include <iostream>
using namespace std;

class InterestCalculator {
private:
    float principal, rate, time;

public:
    InterestCalculator(float p, float r, float t) {
        principal = p;
        rate = r;
        time = t;
    }

    void calculateInterest() {
        float si = (principal * rate * time) / 100;
        cout << "Simple Interest = " << si << endl;
    }
};

int main() {
    float p, r, t;

    cout << "Enter principal: ";
    cin >> p;
    cout << "Enter rate: ";
    cin >> r;
    cout << "Enter time: ";
    cin >> t;

    InterestCalculator obj(p, r, t);
    obj.calculateInterest();

    return 0;
}