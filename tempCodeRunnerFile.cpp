<<<<<<< HEAD
#include <iostream>
using namespace std;
 int main() { 
     double a,b;
     char op;
     cout<<"Enter number op number\n";
     cin>>a>>op>>b;

     swith (op) {
         case'+':cout<<a+b<<break;
         case'-':cout<<a-b<<break;
         case'*':cout<<a*b<<break;
         case'/':
             if(b==0)
                 cout<<"cannot divid by Zero"
                     else
                 cout<<a/b<<break;

         default:
              cout<<"Error";
                     
     }
     
=======
#include <iostream>
using namespace std;
 int main() { 
     double a,b;
     char op;
     cout<<"Enter number op number\n";
     cin>>a>>op>>b;

     swith (op) {
         case'+':cout<<a+b<<break;
         case'-':cout<<a-b<<break;
         case'*':cout<<a*b<<break;
         case'/':
             if(b==0)
                 cout<<"cannot divid by Zero"
                     else
                 cout<<a/b<<break;

         default:
              cout<<"Error";
                     
     }
     
>>>>>>> c83be01a5a708d2fd39a259d0fd09b12abd133eb
 