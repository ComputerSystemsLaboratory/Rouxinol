#include<iostream>
using namespace std;

int main ()
{
int a=0,b=0;
for(int i=0;i<4;i++)
{
int q;
cin>>q;
a+=q;
}
for(int i=0;i<4;i++)
{
int q;
cin>>q;
b+=q;
}
if(a>b)cout<<a<<endl;
else cout<<b<<endl;


return 0;
}