#include <iostream>
using namespace std;

class Student {
private:
    int score;

public:
    Student(int s) {
        score = s;
    }

    friend void displayGrade(Student s);
};

void displayGrade(Student s) {
    cout << "Score: " << s.score << endl;

    if (s.score >= 90)
        cout << "Grade: A" << endl;
    else if (s.score >= 75)
        cout << "Grade: B" << endl;
    else if (s.score >= 50)
        cout << "Grade: C" << endl;
    else
        cout << "Grade: Fail" << endl;
}

int main() {
    Student s(85);
    displayGrade(s);

    return 0;
}