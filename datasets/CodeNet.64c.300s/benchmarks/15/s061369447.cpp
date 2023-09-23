#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
int N,b,min,tmp,cou;cou=0;
int num[101]={};
cin>>N;
for(int i=0;i<N;i++)
{cin>>b;num[i]=b;}
for(int i=0;i<N;i++)
{

min=i;
for(int j=i;j<N;j++)
{if(num[min]>num[j])min=j;

}
{tmp=num[i];num[i]=num[min];num[min]=tmp;
if(i!=min)cou++;}
}
for(int i=0;i<N;i++)
{if(i)cout<<" ";
cout<<num[i];
}
cout<<endl;cout<<cou<<endl;
return 0;
}