#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
   int  a,b;
   cin>>a>>b;
   int c[a];
   for(int i=0;i<a;i++)
   {
       cin>>c[i];
   }
   
   for(int i=b;i<a;i++)
   {
     
      if(c[i-b]<c[i])
       cout<<"Yes\n";
       else
       cout<<"No\n";
      
   }
   
   
   return 0;
}