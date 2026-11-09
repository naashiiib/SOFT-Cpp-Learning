<<<<<<< HEAD
#include <iostream> 
using namespace std;  

int main() { 
 double num1, num2; 
 char op; 
 cout << "Enter first number: ";  cin >> num1; 
 cout << "Enter operator (+, -, *, /): ";  cin >> op; 
 cout << "Enter second number: ";  cin >> num2; 
 double result; 
 if (op == '+') result = num1 + num2;
 else if (op == '-') result = num1 - num2; 
 else if (op == '*') result = num1 * num2;  
 else if (op == '/') result = num1 / num2; 
 else 
 cout << "Invalid operator"<<endl;   
 cout << "Result = " << result << endl;
    return 0; 
} 
=======
#include <iostream> 
using namespace std;  

int main() { 
 double num1, num2; 
 char op; 
 cout << "Enter first number: ";  cin >> num1; 
 cout << "Enter operator (+, -, *, /): ";  cin >> op; 
 cout << "Enter second number: ";  cin >> num2; 
 double result; 
 if (op == '+') result = num1 + num2;
 else if (op == '-') result = num1 - num2; 
 else if (op == '*') result = num1 * num2;  
 else if (op == '/') result = num1 / num2; 
 else 
 cout << "Invalid operator"<<endl;   
 cout << "Result = " << result << endl;
    return 0; 
} 
>>>>>>> c83be01a5a708d2fd39a259d0fd09b12abd133eb
