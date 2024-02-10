#include <iostream>

using namespace std;

int main()
{
    int x,num2,num3,num4,num5,num6,smaller,bigger;
    cout << "enter x end 5 numbers: ";
    cin >> x >> num2 >> num3 >> num4 >> num5 >> num6;

    smaller = 0;
    bigger = 0;

    if (x>num2)
        bigger +=1;
    else
        smaller +=1;


    if (x>num3)
        bigger +=1;
    else
        smaller +=1;


    if (x>num4)
        bigger +=1;
    else
        smaller +=1;

    if (x>num5)
        bigger +=1;
    else
        smaller +=1;

    if (x>num6)
        bigger +=1;
    else
        smaller +=1;


      cout << "the numbers which <= 10 is "<< smaller << "\n";
      cout << "the numbers which > 10 is "<< bigger << "\n";
    return 0;
}
