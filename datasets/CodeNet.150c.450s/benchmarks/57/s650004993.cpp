#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = (a); i < (b); i++)
#define REP(i,n) rep(i,0,n)
using namespace std;

int main()
{
    int a,b;
    char x;
   while(cin>>a>>x>>b) 
   {
       if(x=='?')return 0;
       if(x=='+')cout<<a+b<<endl;
       if(x=='-')cout<<a-b<<endl;
       if(x=='*')cout<<a*b<<endl;
       if(x=='/')cout<<a/b<<endl;
   }
}

