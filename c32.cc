#include <iostream>
using namespace std;
 int main ()
{
   int a,b; 
   cout<<"input two numbers ";
   cin >>a>>b;
   cout<< a << " " << b<<endl;

   int c=a+b;
   cout<<"sum is "<<c <<endl;
  
   c=a-b;
   cout<<"diffrence is "<<c<<endl;
   c=a*b;
   cout<<"product is "<< c <<endl;
   c=a/b;
   cout << "quotent is "<<c<< endl;
   
   c=a%b;
   cout << "remainder is " <<c<< endl;
   a++;
   cout<<"new a is " << a  <<endl;
   b--;
   cout<<"new b is "<< b  <<endl;
 
   c++;
   cout<<"new c is "<< c  <<endl;
}
