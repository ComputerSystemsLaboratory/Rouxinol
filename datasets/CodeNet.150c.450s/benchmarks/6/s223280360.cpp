#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,b,c;
   while(cin>>a>>b>>c)
   {
   if((c>b)&&(b>a))
        cout<<"Yes\n";
    else
        cout<<"No\n";
   }
    return 0;
}

