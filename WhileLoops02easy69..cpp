#include <iostream>

using namespace std;

int main()
{
    int x,start = 0;
    char y;
    cout << "enter a number: ";
    cin >> x ;
    cout << "enter a character: ";
    cin >> y ;

    while (start < x)
    {
        cout << y ;
        start +=1 ;
    }
    return 0;
}
