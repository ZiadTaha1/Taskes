#include <iostream>

using namespace std;

int main()
{

   int num1,num2,num3,smallest,mid,biggest;

    cout << "enter three numbers: ";
    cin >> num1 >> num2 >> num3 ;
    smallest = num1 ;

    if (num1 < num2 && num1 < num3)
      {
        smallest = num1;
        if (num2 > num3)
        {
            biggest = num2;
            mid = num3 ;
        }
        else
            {
                 biggest = num3;
                 mid = num2;
            }


        }

       else if (num2 < num1 && num2 < num3)
      {
        smallest = num2;
        if (num1 > num3)
        {
            biggest = num1;
            mid = num3 ;
        }
        else
            {
                 biggest = num3;
                 mid = num1;
            }


        }

        else
      {
        smallest = num3;
        if (num1 > num2)
        {
            biggest = num1;
            mid = num2 ;
        }
        else
            {
                 biggest = num2;
                 mid = num1;
            }


        }
            cout << smallest <<" " << mid << " " << biggest ;

    return 0;
}
