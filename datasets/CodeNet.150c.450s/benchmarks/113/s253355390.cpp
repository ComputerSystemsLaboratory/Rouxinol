
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int i,j;
    for (i=0 ,j=1;i<10000  ; i++)
    {cin>>j;
     if(j==0) break;
     cout <<"Case "<<i+1<<": "<<j<<endl;}
}

