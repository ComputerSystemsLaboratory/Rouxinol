#include <bits/stdc++.h>
using namespace std;
int n;
int a[101][101]={};
int u, k, s;
int main() 
{
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> u >> k;
		for(int j=0; j<k; j++)
		{
			cin >> s;
			a[u][s]=1;
		}
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			cout << a[i][j] << (j==n ? '\n' : ' ');
		}
	}
	return 0;
}