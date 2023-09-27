#include <iostream>
using namespace std;
int n;
int a[20];
int q;
int m[2000];
int d[2001][20]={};
int j;
int main()
{
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	cin >> q;
	for(int i=0; i<q; i++)
	{
		cin >> m[i];
	}
	for(int i=0; i<=n; i++)
	{
		d[0][i]=1;
	}
	for(int i=n-1; i>=0; i--)
	{
		for(int j=0; j<2001; j++)
		{
			if((d[j][i+1]==1)||((j>=a[i])&&(d[j-a[i]][i+1]==1)))
			{
				d[j][i]=1;
			}
		}
	}
	for(int i=0; i<q; i++)
	{
		if(d[m[i]][0]==1)
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
		
	}
	return 0;
}