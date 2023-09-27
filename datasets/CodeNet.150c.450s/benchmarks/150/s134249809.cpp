#include<iostream>
#include<cstring>
#include<stack>
#include<cstdio>
#include<cmath>
using namespace std;
#define MAX 10005
int a[MAX];
int main()
{
int n,x,t=0,maxn=0;
cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>x;
	maxn=max(maxn,x);
	a[x]++;
}
for(int i=0;i<=maxn;i++)
{
	
	while(a[i]>0)
	{
		if(t==0)
		{
		cout<<i;
		t=1;
		a[i]--;
	}
	else if(t==1)
	{
		cout<<" ";
		cout<<i;
		a[i]--;
	}
	}
}
cout<<"\n";
return 0;
 } 
