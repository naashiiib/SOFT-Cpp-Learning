#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double square(double x) {
    return x * x;
}

int main() {
    cout << "add(3, 4) = " << add(3, 4) << endl;
    cout << "square(2.5) = " << square(2.5) << endl;
    return 0;
}