#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a,b=0,t,j,k,n,i,s[100000+1],v,c[100000+1]={0};
	while(1)
	{
		cin>>n>>k;
		if(n==0&&k==0)
		{
			break;
		}
		for(i=0;i<n;i++)
		{
			cin>>s[i];
		}
		v=n-k+1;
		for(i=0;i<v;i++)
		{
			for(a=i;a<k+i;a++)
			{
				c[i]=c[i]+s[a];

			}
		}
		for(i=0;i<v;i++)
		{
			if(b<c[i])
			{
				b=c[i];
			}
		}
		cout<<b<<endl;
	}
	return 0;
}			