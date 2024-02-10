#include <iostream>

using namespace std;

int main()
{
    int n,cnt = 1 ,x,Ocnt = 0,Ecnt = 0;
    double Onums = 0,Enums = 0;
    cout << "enter N: ";
    cin >> n ;

    while(cnt <= n)
    {
        cout << "enter the "<< cnt << " number: ";
        cin >> x ;
        if (cnt % 2 == 0)
            {
            Enums += x ;
        Ecnt++;
            }
        else
        {
            Onums += x;
            Ocnt++ ;
        }

        cnt++ ;
    }
    cout << Onums / Ocnt << " " << Enums / Ecnt ;

    return 0;
}
