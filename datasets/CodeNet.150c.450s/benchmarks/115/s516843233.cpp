#include <bits/stdc++.h>
using namespace std;
int q;
string x, y;
int m, n;
int a[1000][1000];
int main()
{
	cin >> q;
	for(int i=0; i<q; i++)
	{
		cin >> x >> y;
		m=x.size();
		n=y.size();
		if(x[0]==y[0])
		{
			a[0][0]=1;
		}
		else
		{
			a[0][0]=0;
		}
		for(int j=1; j<m+n-1; j++)
		{
			if((j<n)&&((x[0]!=y[j])&&(a[0][j-1]==0)))
			{
				a[0][j]=0;
			}
			else if(j<n)
			{
				a[0][j]=1;
			}
			if((j<m)&&((x[j]!=y[0])&&(a[j-1][0]==0)))
			{
				a[j][0]=0;
			}
			else if(j<m)
			{
				a[j][0]=1;
			}
			for(int k=max(1, j-n+1); k<min(j, m); k++)
			{
				if(x[k]==y[j-k])
				{
					a[k][j-k]=a[k-1][j-k-1]+1;
				}
				else
				{
					a[k][j-k]=max(a[k-1][j-k], a[k][j-k-1]);
				}
			}
		}
		cout << a[m-1][n-1] << endl;
	}
	return 0;
}