#include <iostream>
using namespace std;

class Product {
private:
    int productId;
    string productName;
    double price;

public:
    Product(int id, string name, double p) {
        productId = id;
        productName = name;
        price = p;
    }

    void displayProduct() {
        cout << "Product ID: " << productId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Product p1(101, "Laptop", 45000);
    p1.displayProduct();

    return 0;
}