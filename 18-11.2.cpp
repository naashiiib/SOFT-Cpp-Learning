#include <iostream>
using namespace std;

class Student {
public:
  int rollNo;
  void display() {
    cout<<rollNo<<endl;
  }
};

int main(){
    Student s[3];

    for (int i= 0;i<3;i++) {
      cin >> s[i].rollNo;
    }
    for (int i= 0;i<3;i++) {
      s[i].display();
    }
  
    return 0;
}