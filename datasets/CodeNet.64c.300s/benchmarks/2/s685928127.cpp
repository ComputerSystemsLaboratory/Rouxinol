#include<iostream>
#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	int m[1000],f[1000],k=1000,r[1000],i;
	for( i=0;i<=k;i++)
	{
		cin>>m[i]>>f[i]>>r[i];
		if(m[i]==-1&&f[i]==-1&&r[i]==-1)
			break;
	
	
	
	
	}
	int p;
	for(int k=0;k<i;k++)
	{
		if(m[k]==-1||f[k]==-1)
			{
				cout<<"F"<<endl;
		continue;
		}
	
		p=0;
		p=m[k]+f[k];
		if(p>=80)
			cout<<"A"<<endl;
		if(p<80&&p>=65)
			cout<<"B"<<endl;
		if(p<65&&p>=50)
			cout<<"C"<<endl;
		if(p>=30&&p<50&&r[k]<50)
			cout<<"D"<<endl;
		if(p>=30&&p<50&&r[k]>=50)
			cout<<"C"<<endl;
		if(p<30)
			cout<<"F"<<endl;
	
	
	
	}












}
	