#include <iostream>

using namespace std;

int main()
{
     int n,min = 9999999, temp ;
    cout << "enter N numbers: ";
    cin >> n ;
    int arr[n];
    for (int i = 0 ; i < n ; i++)
    {
        cout << "enter the " << i+1 << " number: " ;
        cin >> arr[i] ;
    }

    for (int i = 0 ; i < n ; i ++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
          temp = arr[i] + arr[j] + j - i ;
          if (temp < min)
                min = temp ;
        }
    }
    cout << min ;
    return 0;
}
