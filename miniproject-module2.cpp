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
        setMarks(m);
    }

    int getRollNo() {
        return rollNo;
    }

    string getName() {
        return name;
    }

    float getMarks() {
        return marks;
    }

    void setMarks(float m) {
        if (m >= 0 && m <= 100) {
            marks = m;
        } else {
            cout << "Invalid marks for " << name
                 << ", set to 0" << endl;
            marks = 0;
        }
    }

    void display() {
        cout << rollNo << " | "
             << name << " | "
             << marks << endl;
    }
};

void printResult(Student s) {
    cout << "Roll No: " << s.getRollNo() << endl;
    cout << "Name: " << s.getName() << endl;
    cout << "Marks: " << s.getMarks() << endl;

    if (s.getMarks() >= 40) {
        cout << "Result: Pass" << endl;
    } else {
        cout << "Result: Fail" << endl;
    }

    cout << endl;
}

int main() {

    Student batch[3] = {
        Student(1, "Suhana", 82),
        Student(2, "Nashib", 78),
        Student(3, "Nesha", 75)
    };

    cout << "STUDENT DETAILS" << endl;
    cout << "Roll No | Name | Marks" << endl;

    for (int i = 0; i < 3; i++) {
        batch[i].display();
    }

    cout << "\nRe-evaluation of Student 102" << endl;
    batch[1].setMarks(45);

    cout << "\nFINAL RESULTS" << endl;

    for (int i = 0; i < 3; i++) {
        printResult(batch[i]);
    }

    return 0;
}