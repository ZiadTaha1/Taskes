#include <iostream>

using namespace std;


int n;
int is_palindrome(int arr[])
{

    for (int i = 0 ; i < n ; i++)
    {
        if(!(arr[i] == arr[n-1-i])){
            return 0;
        }
    }
    return 1;

}






int main()
{

    cout << "enter N of numbers: ";
    cin >> n ;
    int arr[n];

    for (int i = 0 ; i < n ; i++)
    {
        cout << "enter the " << i+1 << " number: ";
        cin >> arr[i];
    }

    if (is_palindrome(arr) == 1)
        cout << "is palindrome";
    else
     cout <<"not palindrome";

    return 0;
}
