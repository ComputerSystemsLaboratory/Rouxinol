#include <bits/stdc++.h>
using namespace std;
map<int,int>cnt;
int main()
{
    int n;
    cin>>n;
   int i,j,k,l;
   for(i=1;i<=100;i++)
   {
       for(j=1;j<=100;j++)
       {
           for(k=1;k<=100;k++)
           {
               l=(i+j+k)*(i+j+k)-(i*j+j*k+k*i);
               cnt[l]++;
           }
       }
   }
   for(i=1;i<=n;i++)
   cout<<cnt[i]<<endl;
}