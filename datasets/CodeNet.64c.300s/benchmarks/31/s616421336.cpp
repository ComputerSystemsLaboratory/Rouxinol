#include<iostream>
using namespace std;
int main ()
{
int s[31]={};
for(int i=0;i<28;i++)
{
int h;
cin>>h;
s[h]=1;
}
for(int i=1;i<31;i++)
{
if(s[i]==0)cout<<i<<endl;
}
return 0;
}