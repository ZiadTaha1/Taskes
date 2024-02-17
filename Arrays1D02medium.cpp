#include <iostream>

using namespace std;

int main()
{
     int n ;
     bool is_found = false ;
    cout << "enter N numbers: ";
    cin >> n ;
    int arr[n];
    for (int i = 0 ; i < n ; i++)
    {
        cout << "enter the " << i+1 << " number: " ;
        cin >> arr[i] ;
    }
    int q ;
    cout << "enter Q numbers: ";
    cin >> q;
    int arr2[q];
    for (int j = 0 ; j < q ; j++)
    {
      cout << "enter the " << j+1 << " number: " ;
        cin >> arr2[j] ;
    }


        for (int j = 0 ; j < q ; j++)
          {
             for (int i = 0 ; i < n ; i++)
             {
            if (arr2[j] == arr[i])
                {cout << i << " ";
                is_found = true ;
                }
              }
              if (is_found == false)
                cout << "-1 " ;
         }


    return 0;
}
