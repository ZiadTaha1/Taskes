#include <iostream>

using namespace std;


string reverse_str(const string & name,int size)
{
    string rev = name ;
    for(int i = 0 ; i < size/2 ; i++)
    {
     char temp ;
     temp = rev[i] ;
     rev[i] = name[size - 1 - i] ;
    rev[size - 1 - i] = temp ;
    }


    return rev ;

}




int main()
{
    const string name = "ZiadTaha";
    cout << reverse_str(name,(int)name.size());
    return 0;
}
