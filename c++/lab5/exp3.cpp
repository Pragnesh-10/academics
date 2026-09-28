#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    // Setter for name
    void setName(string n) {
        name = n;
    }

    // Getter for name
    string getName() {
        return name;
    }

    // Setter for roll number
    void setRollNo(int r) {
        rollNo = r;
    }

    // Getter for roll number
    int getRollNo() {
        return rollNo;
    }

    // Setter for marks with validation
    void setMarks(float m) {
        if (m >= 0 && m <= 100) {
            marks = m;
        } else {
            cout << "Invalid marks! Marks must be between 0 and 100." << endl;
        }
    }

    // Getter for marks
    float getMarks() {
        return marks;
    }
};

int main() {
    Student s;

    s.setName("Pragnesh");
    s.setRollNo(101);
    s.setMarks(85.5);

    cout << "Student Details:" << endl;
    cout << "Name: " << s.getName() << endl;
    cout << "Roll No: " << s.getRollNo() << endl;
    cout << "Marks: " << s.getMarks() << endl;

    return 0;
}