#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout << "enter the starting and the ending number: ";
    cin >> x >> y ;


    while (x <= y)
    {
        cout << x << endl ;
        x +=1 ;
    }
    return 0;
}
