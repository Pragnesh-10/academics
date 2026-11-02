#include <iostream>
using namespace std;

class Employee
{
public:

    // Standard bonus
    double calculateBonus()
    {
        return 5000;
    }

    // Bonus based on performance multiplier
    double calculateBonus(double multiplier)
    {
        return 5000 * multiplier;
    }

    // Additional loyalty bonus based on years of service
    double calculateBonus(int years)
    {
        return years * 1000;
    }
};

int main()
{
    Employee e;

    cout << "Standard Bonus: "
         << e.calculateBonus() << endl;

    cout << "Performance Bonus: "
         << e.calculateBonus(2.5) << endl;

    cout << "Loyalty Bonus: "
         << e.calculateBonus(5) << endl;

    return 0;
}