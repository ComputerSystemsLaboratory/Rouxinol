#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
char a;
bool h[14],s[14],c[14],d[14];
for(int i=1;i<=13;i++)
{
s[i]=h[i]=c[i]=d[i]=false;
}
int aa;
for(int i=0;i<n;i++)
{
cin>>a>>aa;
if(a=='S')s[aa]=true;
else if(a=='H')h[aa]=true;
else if(a=='C')c[aa]=true;
else d[aa]=true;
}
for(int i=1;i<=13;i++)if(!s[i])cout<<"S"<<" "<<i<<endl;
for(int i=1;i<=13;i++)if(!h[i])cout<<"H"<<" "<<i<<endl;
for(int i=1;i<=13;i++)if(!c[i])cout<<"C"<<" "<<i<<endl;
for(int i=1;i<=13;i++)if(!d[i])cout<<"D"<<" "<<i<<endl;
return 0;
}