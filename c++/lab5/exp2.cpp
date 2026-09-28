#include <iostream>
using namespace std;

class Rectangle {
public:
    float length;
    float breadth;

    void calculateArea() {
        cout << "Area: " << length * breadth << endl;
    }
};

int main() {
    Rectangle classroom, playground;

    classroom.length = 20;
    classroom.breadth = 10;

    playground.length = 50;
    playground.breadth = 30;

    cout << "Classroom Area:" << endl;
    classroom.calculateArea();

    cout << "\nPlayground Area:" << endl;
    playground.calculateArea();

    return 0;
}