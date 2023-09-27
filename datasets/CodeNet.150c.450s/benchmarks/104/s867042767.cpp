#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int A[50];
   string s;
   int w,n;
    A[0]=0;
   while(cin>>w>>n)
   {
        for(int i=1;i<=w;i++)
       {
           A[i]=i;
       }
       while(n--)
       {

       cin>>s;
       int len=s.length();
       int d=s.find(',',0);
       string a=s.substr(0,d);
       string b=s.substr(d+1,len-1);
       int c=atoi(a.c_str());
       int e=atoi(b.c_str());
      // cout<<a<<endl<<b<<endl<<c<<endl<<e<<endl;
         int h= A[c];
         A[c]=A[e];
         A[e]=h;

       }
for(int i=1;i<=w;i++)
      cout<<A[i]<<endl;
   }
}