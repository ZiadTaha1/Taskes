#include <iostream>

using namespace std;

int main()
{
   int a,b;
   cout << "enter the first number: ";
   cin >> a ;

    for ( int i = 0 ; i < 10 ; i++ )
    {
      cout << "enter another number: ";
      cin >> b ;
      if ( a < b)
        a = b ;

    }

    cout << "the biggest number is " << a ;
    return 0;
}
