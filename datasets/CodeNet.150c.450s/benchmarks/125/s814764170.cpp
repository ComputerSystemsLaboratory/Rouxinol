#include<iostream>
const int MAXN = 105;
const int WHITE = 0;
const int GRAY = 1;
const int BLACK = 2;
int a[MAXN][MAXN];
int color[MAXN];
int d[MAXN];
int f[MAXN];
int n, tt = 0;
using namespace std;

void dfs(int u)
{
	int v;
	color[u] = GRAY;
	d[u] = ++tt;
	for(v = 0; v < n; v++)
	{
		if(a[u][v] == 0)
			continue;
		if(color[v] == WHITE)
		{
			dfs(v);
		}
	}
	color[u] = BLACK;
	f[u] = ++tt;
}

void dfs_init()
{
	int u;
	for(u = 0; u < n; u++)
		color[u] = WHITE;
	
	for(u = 0; u < n; u++)
	{
		if(color[u] == WHITE)
			dfs(u);
	}
	
	for(u = 0; u < n; u++)
	{
		cout << u+1 << " " << d[u] << " " << f[u] << endl;	
	}	
} 

int main ()
{
	int k, u, temp;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> u >> k;
		u--;
		for(int j = 0; j < k; j++)
		{
			cin >> temp;
			temp--;
			a[u][temp] = 1;
		}
	}
	dfs_init();
	return 0;
} 
