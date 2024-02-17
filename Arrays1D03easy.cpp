#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter N numbers: ";
    cin >> n ;
    int arr[n];
    for (int i = 0 ; i < n ; i++)
    {
        cout << "enter the " << i+1 << " number: " ;
        cin >> arr[i] ;
    }
    cout << arr[0] << " ";
    for (int i = 1 ; i < n ; i++)
    {
        if (arr[i] != arr[i-1])
            cout << arr[i] << " ";
    }
    return 0;
}
