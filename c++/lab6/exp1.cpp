#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string ISBN;
    string title;
    string author;

public:
    // Default constructor
    Book() {
        ISBN = "000-0000000000";
        title = "Unknown";
        author = "Unknown";
    }

    // Parameterized constructor
    Book(string isbn, string t, string a) {
        ISBN = isbn;
        title = t;
        author = a;
    }

    // Member function to display book details
    void display() {
        cout << "ISBN   : " << ISBN << endl;
        cout << "Title  : " << title << endl;
        cout << "Author : " << author << endl;
        cout << endl;
    }
};

int main() {
    // Object using default constructor
    Book book1;

    // Object using parameterized constructor
    Book book2("978-0135166307", "The C++ Programming Language", "Bjarne Stroustrup");

    cout << "Book 1 (Default Constructor):" << endl;
    book1.display();

    cout << "Book 2 (Parameterized Constructor):" << endl;
    book2.display();

    return 0;
}