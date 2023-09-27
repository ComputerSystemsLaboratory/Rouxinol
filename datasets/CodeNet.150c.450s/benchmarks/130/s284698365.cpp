#include<iostream>
#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	int a[105][105],b[105],c[105];
	memset(c,0,105*sizeof(int));
	int n,m;
	while(cin>>n>>m)//???????°±?????\??????????¨????
	{
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				cin>>a[i][j];
		for(int i=1;i<=m;i++)
			cin>>b[i];
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			
			{
				c[i]+=a[i][j]*b[j];
			}
		}
		for(int i=1;i<=n;i++)
			cout<<c[i]<<endl;



	
	
	
	
	}









}
	