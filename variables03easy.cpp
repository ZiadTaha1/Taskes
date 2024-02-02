#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8,Seven,Sodd;
    cout << "enter the 8 numbers: ";
    cin>>n1>>n2>>n3>>n4>>n5>>n6>>n7>>n8;
    Sodd=n1+n3+n5+n7;
    Seven=n2+n4+n6+n8;
    cout<<"the sum of odd numbers is:"<<Sodd<<" and the sum of the even numbers is:"<<Seven;
    return 0;
}
