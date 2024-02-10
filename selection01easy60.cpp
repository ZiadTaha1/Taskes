#include <iostream>

using namespace std;

int main()
{
   int a,b;

    cout << "enter two numbers: ";
    cin >> a >> b ;

    if (a%2 == 0 && b%2 == 0)
        cout << a/b ;

    else if (a%2 != 0 && b%2 == 0)
        cout << a+b ;

    else if (a%2 == 0 && b%2 != 0)
        cout << a-b ;

    else
        cout << a*b ;






    return 0;
}
