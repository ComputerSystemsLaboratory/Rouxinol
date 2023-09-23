#include<algorithm>
#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<cstdio>
#include<cmath>
#include<map>
#include<set>
using namespace std;
int n,a[105];
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>a[i];
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
		if(i!=n-1)
		    cout<<' ';
	}	   
	cout<<endl; 
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
	        if(a[i]<a[j])
	        {
	        	int v=a[i];
	        	for(int l=i;l>j;l--)
	        	    a[l]=a[l-1];
	        	a[j]=v;
	        	break;
			}
		for(int j=0;j<n;j++)
		{
			printf("%d",a[j]);
			if(j!=n-1)
			    printf(" ");
		}
		cout<<endl;
	}	    
	return 0;
}
