#include <iostream>
#include <string>
using namespace std;

class Product
{
    string name;
    float price;
    string manufacturer;

public:

    // Default constructor
    Product()
    {
        name = "Unknown";
        price = 0;
        manufacturer = "Unknown";
    }

    // Constructor with name and price
    Product(string n, float p)
    {
        name = n;
        price = p;
        manufacturer = "Unknown";
    }

    // Constructor with name, price and manufacturer
    Product(string n, float p, string m)
    {
        name = n;
        price = p;
        manufacturer = m;
    }

    void display()
    {
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Manufacturer: " << manufacturer << endl;
        cout << endl;
    }
};

int main()
{
    Product p1;
    Product p2("Laptop", 50000);
    Product p3("Mobile", 25000, "Samsung");

    cout << "Default Constructor:" << endl;
    p1.display();

    cout << "Constructor with Name and Price:" << endl;
    p2.display();

    cout << "Constructor with Name, Price and Manufacturer:" << endl;
    p3.display();

    return 0;
}