#include <iostream>
using namespace std;

class Book {
    string title, author;
    int publicationYear;

public:
    Book() {
        title = "Unknown";
        author = "Unknown";
        publicationYear = 0;
    }

    Book(string t, string a, int y) {
        title = t;
        author = a;
        publicationYear = y;
    }

    Book(const Book &b) {
        title = b.title;
        author = b.author;
        publicationYear = b.publicationYear;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << publicationYear << endl << endl;
    }
};

int main() {
    Book b1;
    Book b2("Wings of Fire", "A.P.J. Abdul Kalam", 1999);
    Book b3(b2);

    b1.display();
    b2.display();
    b3.display();

    return 0;
}