#include<iostream>
using namespace std;

int main()
{
int n;
while(cin>>n){
int res=0;
for(int n1=0;n1<=9;n1++)
for(int n2=0;n2<=9;n2++)
for(int n3=0;n3<=9;n3++)
for(int n4=0;n4<=9;n4++)
if(n1+n2+n3+n4==n) res++;
cout<<res<<endl;
}
}