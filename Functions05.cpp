#include <iostream>


void set_power(int arr[],int len ,int base)
{
    arr[0] = 0 ;
    arr[1] = base ;
    for (int i = 2 ; i < len ; i++)
    {
        arr[i] = arr[i-1]*base;
    }
}









using namespace std;

int main()
{
    int len , base ;
    cout << "enter the number of power: ";
    cin >> len;
    cout << "enter the base: ";
    cin >> base;
    int arr[len];

    set_power(arr , len ,base);
    for (int i = 0 ; i < len ; i++)
        cout << arr[i] << " " ;
    return 0;
}
