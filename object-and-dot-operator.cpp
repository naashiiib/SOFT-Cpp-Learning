#include <iostream>
using namespace std;

class student {
public:
    int rollno;
    string name;

    void display()
    {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    student s1;
    student s2;
    student s3;
    student s4;

    s1.rollno = 101;
    s1.name = "Nashib";

    s2.rollno = 102;
    s2.name = "Akshitha";

    s3.rollno = 103;
    s3.name = "Andriya";

    s4.rollno = 104;
    s4.name = "Dakshin";

    s1.display();
    s2.display();
    s3.display();
    s4.display();

    return 0;
}


