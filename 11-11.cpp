#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;

    Student(int r, string n) {
        rollNo = r;
        name = n;
    }
    void display() {
        cout << rollNo << " " << name << endl;
    }
};  

int main() {
    Student s1(1, "Asha");
    Student s2(2, "Rahul");
    s1.display();
    s2.display();
    return 0;
}