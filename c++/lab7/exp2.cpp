#include <iostream>
using namespace std;

class Product {
public:
    Product() {
        cout << "Product object created" << endl;
    }

    ~Product() {
        cout << "Product object destroyed" << endl;
    }
};

int main() {
    cout << "Entering main" << endl;

    Product p1;

    {
        cout << "Entering inner scope" << endl;
        Product p2;
        cout << "Leaving inner scope" << endl;
    }

    cout << "Back to main" << endl;

    return 0;
}