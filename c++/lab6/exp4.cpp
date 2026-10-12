#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string ISBN, title, author;

public:
    Book() {
        ISBN = "0000";
        title = "Unknown";
        author = "Unknown";
    }

    Book(string i, string t, string a) {
        ISBN = i;
        title = t;
        author = a;
    }

    void display() {
        cout << "ISBN: " << ISBN << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book b1;
    Book b2("978123", "C++ Programming", "Bjarne Stroustrup");

    cout << "Default Constructor:\n";
    b1.display();

    cout << "\nParameterized Constructor:\n";
    b2.display();

    return 0;
}