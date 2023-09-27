#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int g,t=-192839,n,a[109000];
	while(1)
	{
	cin>>n;
	if(n==0)
		break;
	for(int i=0;i<n;i++)
		cin>>a[i];
	t=-192839;
	for(int i=0;i<n;i++)
	{
		g=0;
		for(int j=i;j<n;j++)
		{
			g+=a[j];
			t=max(g,t);
		}
	}
	cout<<t<<endl;	
	}
	return 0;
}