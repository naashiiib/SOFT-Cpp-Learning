#include <iostream>
using namespace std;

class Student {
    public:
        int rollNo;

        Student(int r) {
            rollNo = r;
        }
        Student(const Student &s) {
            rollNo = s.rollNo;
            cout<< "Copy constructor called " << endl;
        }
};

int main() {
    Student s1(101);
    Student s2 = s1; 
    Student s3(s1);
    cout << s1.rollNo << " " <<s2.rollNo
    << " " << s3.rollNo << endl;
    return 0;
}