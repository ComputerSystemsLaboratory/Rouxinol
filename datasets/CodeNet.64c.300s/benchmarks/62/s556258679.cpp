#include<stdio.h>
#include<iostream>
using namespace std;
int a[101][101];
int main()
{
	int i,j,n,m,b[101],g[101]={0};
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			g[i]=a[i][j]*b[j]+g[i];
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<g[i]<<endl;
	}
	return 0;
}