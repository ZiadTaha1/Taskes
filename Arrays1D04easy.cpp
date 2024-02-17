#include <iostream>

using namespace std;

int main()
{
    int n ;
    bool is_palindrome = true ;
    cout << "enter N numbers: ";
    cin >> n ;
    int arr[n];

     for (int i = 0 ; i < n ; i++)
    {
        cout << "enter the " << i+1 << " number: " ;
        cin >> arr[i] ;
    }

        for (int i = 0 ; i < (double)n/2 ; i++)
    {
        if (arr[i]==arr[n-(i+1)])
        {
            continue;
        }
        else
            is_palindrome = false ;

    }
    if (is_palindrome == true)
        cout << "is palindrome" ;
    else
        cout << "not palindrome" ;

    return 0;
}
