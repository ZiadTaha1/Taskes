#include <iostream>

using namespace std;

int main()
{
    string name1,name2;
    int id1,id2;
    double grade1,grade2;
    cout<< "enter the name of the first student: ";
    cin>> name1 ;
    cout<< "enter the ID of the first student: ";
    cin>> id1;
    cout<< "enter the grade of the first student: ";
    cin>> grade1;

    cout<< "enter the name of the second student: ";
    cin>> name2 ;
    cout<< "enter the ID of the second student: ";
    cin>> id2;
    cout<< "enter the grade of the second student: ";
    cin>> grade2;

    cout<< name1 <<" with id"<<id1<<" got"<<grade1<<endl;
    cout<< name2 <<" with id"<<id2<<" got"<<grade2<<endl;
    cout<<"the average of the grades is "<<(grade1+grade2)/2;








    return 0;
}
