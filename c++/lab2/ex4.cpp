#include <iostream>
using namespace std;

int main() {
    const double METERS_CONVERSION = 0.01;

    int height_cm;
    double weight_kg;

    cout << "Enter your height in centimeters: ";
    cin >> height_cm;

    cout << "Enter your weight in kilograms: ";
    cin >> weight_kg;

    // Convert height from centimeters to meters
    double height_m = height_cm * METERS_CONVERSION;

    // Calculate BMI
    double bmi = weight_kg / (height_m * height_m);

    // Explicitly cast BMI to integer
    int approximate_bmi = static_cast<int>(bmi);

    cout << "\nBMI: " << bmi << endl;
    cout << "Approximate BMI: " << approximate_bmi << endl;

    // Categorize BMI using relational and logical operators
    if (bmi < 18.5) {
        cout << "Category: Underweight" << endl;
    }
    else if (bmi >= 18.5 && bmi < 25) {
        cout << "Category: Normal" << endl;
    }
    else if (bmi >= 25 && bmi < 30) {
        cout << "Category: Overweight" << endl;
    }
    else if (bmi >= 30) {
        cout << "Category: Obese" << endl;
    }

    return 0;
}