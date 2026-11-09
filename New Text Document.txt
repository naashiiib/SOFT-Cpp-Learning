#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double square(double x) {
    return x * x;
}

int main() {
    cout << "Addition = " << add(2, 7) << endl;
    cout << "square = " << square(2) << endl;
    return 0;
}