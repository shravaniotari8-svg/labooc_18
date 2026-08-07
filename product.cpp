#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    string product_id;
    string name;
    float price, quantity;

public:
    void inputDetails()
    {
        cout << "Enter Product ID: ";
        getline(cin >> ws, product_id);

        cout << "Enter Product Name: ";
        getline(cin >> ws, name);

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price: ";
        cin >> price;
    }

    void displayDetails() const
    {
        cout << "\n----- Product Details -----\n";
        cout << "Product ID : " << product_id << endl;
        cout << "Product Name : " << name << endl;
        cout << "Quantity : " << quantity << endl;
        cout << "Price : " << price << endl;
    }
};

int main()
{
    Product p, p1, p2;

    p.inputDetails();
    p1.inputDetails();
    p2.inputDetails();

    p.displayDetails();
    p1.displayDetails();
    p2.displayDetails();

    return 0;
}