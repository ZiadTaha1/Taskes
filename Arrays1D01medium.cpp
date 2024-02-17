#include <iostream>

using namespace std;

int main()
{
     int n ,min1 = 9999999 ,min2 = 9999999 , min3 = 99999999;
    cout << "enter N numbers: ";
    cin >> n ;
    int arr[n];
    for (int i = 0 ; i < n ; i++)
    {
        cout << "enter the " << i+1 << " number: " ;
        cin >> arr[i] ;
    }
    for (int i = 0 ; i < n ; i++)
    {
        if (arr[i] < min1)
           {
            min3 = min2 ;
            min2 = min1 ;
            min1 = arr[i] ;
           }
        else if (arr[i] < min2 && arr[i] > min1)
        {
            min3 = min2 ;
            min2 = arr[i];
        }
        else if (arr[i] < min3 && arr[i] > min1 && arr[i] > min2)
            min3 = arr[i] ;
    }

    cout << min1 << " " << min2 << " " << min3 ;
    return 0;
}
