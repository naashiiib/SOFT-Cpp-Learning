#include <iostream>
using namespace std;

class car {
public:
    string brand;
    string model;
    int year;
};

int main()
{
    car c1;

    c1.brand = "BMW";
    c1.model = "M4";
    c1.year = 2026;

    cout << "Brand: " << c1.brand << endl;
    cout << "Model: " << c1.model << endl;
    cout << "Year: " << c1.year << endl;

    return 0;
}