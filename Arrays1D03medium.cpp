#include <iostream>

using namespace std;

int main()
{
     int n ;
     cout << "enter N numbers: ";
    cin >> n ;
    int arr[n];
    int freq[770] {0} ;

    for (int i = 0 ; i < n ; i++)
    {
         cout << "enter the " << i+1 << " number: " ;
        cin >> arr[i] ;
        freq[(arr[i]+500)]++ ;
    }

    int most_rep = 0 ;
    for (int i = 0 ; i < 770 ; i++)
    {
        if (freq[most_rep] < freq[i])
            most_rep = i ;
    }
    cout << (most_rep - 500) << " is repeated " << freq[most_rep] ;

    return 0;
}
