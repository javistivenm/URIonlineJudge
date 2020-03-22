#include <iostream>

using namespace std;

int main()
{
   int a=0, b=0, c=0;

   cin >> a >> b >> c;

   if(a<b && b<c){
    cout << a <<endl;
    cout << b <<endl;
    cout << c <<endl;
    cout << "\n"
    << a << "\n"
    << b << "\n"
    << c << "\n";
   }

   else if(c<b && b<a){
    cout << c <<endl;
    cout << b <<endl;
    cout << a <<endl;
    cout << "\n"
    << a << "\n"
    << b << "\n"
    << c << "\n";
   }

   else if(b<a && a<c){
    cout << b <<endl;
    cout << a <<endl;
    cout << c <<endl;
    cout << "\n"
    << a << "\n"
    << b << "\n"
    << c << "\n";
   }

   else if(b<c && c<a){
    cout << b <<endl;
    cout << c <<endl;
    cout << a <<endl;
    cout << "\n"
    << a << "\n"
    << b << "\n"
    << c << "\n";
   }

   else if(c<a && a<b){
    cout << c <<endl;
    cout << a <<endl;
    cout << b <<endl;
    cout << "\n"
    << a << "\n"
    << b << "\n"
    << c << "\n";
   }

   else{
    cout << a <<endl;
    cout << c <<endl;
    cout << b <<endl;
    cout << "\n"
    << a << "\n"
    << b << "\n"
    << c << "\n";
   }

    return 0;
}
