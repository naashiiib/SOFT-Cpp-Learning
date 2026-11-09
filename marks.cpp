#include <iostream>
using namespace std;
int main()
{
  int a;
    cout<<"Enter your marks : ";
    cin>> a;
    {
        if (a>=90)
            cout<<"You got A grade";
        else if (a>=80)
            cout<<"You got B grade";
        else if (a>=70)
            cout<<"You got C grade";
        else if (a>=60)
            cout<<"You got D grade";
        else
            cout<<"You are failed";     
    }
  return 0; 
}
