#include<stdio.h>
#include<iostream>
using namespace std;
long long int N[10001]={};
int main(){

int n,q;

int y;
cin>>n;
for(int i=0;i<n;i++)
{cin>>N[i];}

//sort(N,N+1000000);

int c=0,w[50001]={};
cin>>q;
for(int i=0;i<q;i++)
{cin>>y;
for(int j=0;j<n;j++)
	if(N[j]==y){c++;break;}}
cout<<c<<endl;

return 0;
}