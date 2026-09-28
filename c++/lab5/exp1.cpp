#include <iostream>
using namespace std;

class Book {
public:
    string title;
    float price;

    void displayBook() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book novel, textbook;

    novel.title = "The Alchemist";
    novel.price = 350;

    textbook.title = "C++ Programming";
    textbook.price = 500;

    cout << "Novel Details:" << endl;
    novel.displayBook();

    cout << "\nTextbook Details:" << endl;
    textbook.displayBook();

    return 0;
}