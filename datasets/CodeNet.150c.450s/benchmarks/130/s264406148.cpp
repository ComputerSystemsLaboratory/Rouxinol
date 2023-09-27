#include <iostream>
using namespace std;

int main()
{
	int a[101][101],b[101],n,m,i,j,c[101];
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
			cin>>a[i][j];
		c[i] = 0;
	}
	for(i=1;i<=m;i++)
		cin>>b[i];
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
			c[i] = c[i]+a[i][j]*b[j];
	}
	for(i=1;i<=n;i++)
		cout<<c[i]<<endl;
	return 0;
 } 
