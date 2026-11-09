#include <iostream>
using namespace std;
int main()
{
    int u;
    cout<<"Enter unit consumed : ";
    cin>>u;
    {
        if (u <= 100)
           cout << "Your bill = " << u * 5;

        else if (u <= 200)
           cout << "Your bill = " << (100 * 5) + ((u - 100) * 7);

        else
           cout << "Your bill = " << (100 * 5) + (100 * 7) + ((u - 200) * 10);
    }
  return 0;  
}
