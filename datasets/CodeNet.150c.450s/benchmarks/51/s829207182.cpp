#include<cstdio>
#include<iostream>
using namespace std;
int a[31];
int main()
{
	int i,j,n,x=0,y=0;
	for(i=1;i<=28;i++)
	{
		cin>>n;
		a[n]=1;
	}
	for(i=1;i<=30;i++)
	{
		if(a[i]!=1&&x==0)
		{
			x=i;
			a[i]=1;
		}
		else if(a[i]!=1&&y==0)
		{
			y=i;
			break;
		}
	}
	cout<<x<<endl<<y<<endl;
	return 0;
}