#include <iostream>

using namespace std;

int main()
{
    int n ,cnt1 = 1,cnt2 = 1;
    cout << "enter the number of rows: ";
    cin >> n ;
    while (cnt1 <= n)
    {
        while (cnt2 <= cnt1)
        {

            cout << "*";
            cnt2 += 1 ;
        }


        cnt2 = 1;
        cout << endl;
        cnt1 +=1 ;
    }
    return 0;
}
