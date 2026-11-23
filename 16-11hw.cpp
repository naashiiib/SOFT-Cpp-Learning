#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    void display() {
        cout << rollNo << " " << name << " " << marks << endl;
    }
};

int main() {
    Student s1(101, "Asha", 82.5);
    Student s2(102, "Ravi", 76.0);

    s1.display();
    s2.display();
    return 0;
}