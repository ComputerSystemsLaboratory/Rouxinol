#include <bits/stdc++.h>
using namespace std;
int n, u;
int k[110];
int a[110][110];
int b[110];
int d[110], f[110];
int t=1;

void dfs(int v)
{
	d[v]=t;
	t++;
	b[v]++;
	for(int l=0; l<k[v]; l++)
	{
		if(b[a[v][l]]==0)
		{
			dfs(a[v][l]);
		}
	}
	f[v]=t;
	t++;
}

int main() 
{
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> u;
		cin >> k[u];
		for(int j=0; j<k[u]; j++)
		{
			cin >> a[u][j];
		}
	}
	for(int v=1; v<=n; v++)
	{
		if(b[v]==0)
		{
			dfs(v);
		}
		cout << v << ' ' << d[v] << ' ' << f[v] << endl;
	}
	return 0;
}