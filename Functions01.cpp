#include <iostream>

using namespace std;


int max (int a,int b){
    if (a > b)
     return a ;
    else
     return b;
}

int max(int a,int b,int c)
{
    return max(max(a,b),c);
}

int max(int a,int b,int c,int d)
{
    return max(max(a,b,c),d);
}

int max(int a,int b,int c,int d, int e)
{
    return max(max(a,b,c,d),e);
}

int max(int a,int b,int c,int d,int e,int f)
{
    return max(max(a,b,c,d,e),f);
}

int main()
{
    int a,b,c,d,e,f;
  cout << "enter the 6 numbers: ";
  cin >> a >> b >> c >> d >> e >> f ;
  int maxx = max (a,b,c,d,e,f);
  cout << maxx ;



    return 0;
}
