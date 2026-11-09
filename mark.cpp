#include <iostream>
using namespace std;
int main()

  int a;
    cout << "Enter your mark : ";
    cin>> a;
  
     if (a<0 || a>100)
        cout << " Invalid mark.";

     else if (a>=40)
        cout << a << " You are passed.";

     else 
        cout << a << " You are failed.";
  
    return 0;