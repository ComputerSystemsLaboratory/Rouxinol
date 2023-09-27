#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char q[100001],p[100001],a[100001],b[100001];
int main()
{
	int n,m,i,j;
	while(cin>>n)
	{
		if(n==0)break;
		else
		{
		     for(i=1;i<=n;i++)cin>>q[i]>>p[i];
			 cin>>m;
			 for(i=1;i<=m;i++)
			 {
			      cin>>a[i];
				  for(j=1;j<=n;j++)
				  {
				      if(a[i]==q[j])
					  {
					      a[i]=p[j];
					      break;
					  }
				  }	
			 }	
		}
		for(i=1;i<=m;i++)cout<<a[i];
		cout<<endl;
	}
	return 0;
}