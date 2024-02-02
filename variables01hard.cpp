#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3,num4;
    cout<<"enter three numbers: ";
    cin>>num1>>num2>>num3;
   num4=num1;
   num1=num2;
   num2=num3;
   num3=num4;

    cout<<num1<<"  "<<num2<<"  "<<num3;
    return 0;
}
