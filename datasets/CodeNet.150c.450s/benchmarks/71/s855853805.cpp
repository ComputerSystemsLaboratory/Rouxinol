#include<iostream>
#include<cstdio>
using namespace std;
int a[10001];
int main()
{
	int n,m,i,j,k,p,l=1,s=0;
	for(i=0;i<=9;i++)
	{
		for(k=0;k<=9;k++)
	    {
	    	for(j=0;j<=9;j++)
	        {
	        	for(p=0;p<=9;p++)
	            {
		             a[l]=i+k+j+p;
		             l++;
	            }
		
	        }
	    }
	}
	while(cin>>n)
	{
		s=0;
		for(i=1;i<=10000;i++)
		{
			if(a[i]==n)s++;
		}
		cout<<s<<endl;
	}
	return 0;
}