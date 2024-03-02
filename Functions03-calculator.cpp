#include <iostream>

using namespace std;

double  a  ,b ;
int op = 0;
bool fin = true ;

void read_numbers(double &a ,double &b)
{
    cout << "enter two numbers: ";
    cin >> a >> b ;
}

int menu()
{
     int choise ;
    cout << "How can i help you ?" << endl << "1-add   2-subtract   3-multiply  4-divide   5-exit\n";
    cin >> choise;
    if (choise >= 1 && choise <= 5)
     return choise ;
    else
    {
        cout << "wrong number ";
        menu();
    }
}


double add(int a , int b)
{
    op++ ;
    return a + b ;
}

double subtract(int a , int b)
{
    op++ ;
    return a - b ;
}

double multiply(int a ,int b)
{
    op++ ;
    return a * b;
}

double divide(double a ,double b)
{
    if (b == 0)
    {
        cout << "can't divide by zero"<<endl ;
        read_numbers(a , b);
    }
    else {
        op++ ;
        return a / b ;
    }

}

 void finish()
 {
     cout << "the number of operations is " << op << endl ;
     fin = false ;
 }

void calculator()
{
    while (fin){
     read_numbers(a , b);
        int choise = menu() ;
    if (choise == 1)
       cout << add(a , b) << endl;
    else if(choise == 2)
       cout << subtract(a , b) << endl;
    else if(choise == 3)
       cout << multiply(a , b) << endl;
    else if (choise == 4)
       cout << divide(a , b) << endl;
    else if (choise == 5)
        finish();
    else
        {
            cout << "wrong chiose\n";
            calculator();
        }
    }
}


int main()
{


    calculator();
    return 0;
}
