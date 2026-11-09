#include <iostream>
using namespace std;

int add(int a, int b);
int square(int n);
bool isEven(int n);
int findMax(int a, int b);
int factorial(int n);

int main()
{
    cout << add(5, 3)           <<endl;
    cout << square(7)           <<endl;
    cout << isEven(10)          <<endl;
    cout << findMax(4, 9)       <<endl;
    cout << factorial(5)        <<endl;
}
int add(int a, int b)
{
    return a + b;
}

int square(int n)
{
    return n * n;
}

bool isEven(int n)
{
    if (n % 2 == 0)
        return true;
    else
        return false;
}

int findMax(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}
