#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
#include<stdio.h>
#include<cctype>
#include<algorithm>
#include<string.h>

using namespace std;




int main()
{
	long int n,m,l,a[105][105],b[105][105];//n*m,m*l,????????????,n*l
	while(cin>>n>>m>>l)
	{//?????\?¬¬????????°???
		for(int i=1;i<=n;i++)
			for(int k=1;k<=m;k++)
				cin>>a[i][k];
			
		//?????\?¬¬????????°???
		for(int i=1;i<=m;i++)
			for(int k=1;k<=l;k++)
				cin>>b[i][k];
		//????????????
		long int c[105][105];//?????????0
		memset(c,0,105*105*sizeof(int));
		for(int i=1;i<=n;i++)
			{
				
				for(int j=1;j<=l;j++)
			
			for(int k=1;k<=m;k++)
				c[i][j]+=a[i][k]*b[k][j];
		
		
		
		
		
		
		}
	
	for(int i=1;i<=n;i++)
		for(int k=1;k<=l;k++)
			{
				cout<<c[i][k];
				if(k!=l)
		cout<<" ";
				if(k==l)
					cout<<endl;
		
		
		}
	




	
	
	
	
	
	
	
	}



}