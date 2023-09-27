#include<iostream>
#include<stack> 
const int MAXN = 105;
const int WHITE = 0;
const int GRAY = 1;
const int BLACK = 2;
int a[MAXN][MAXN];
int color[MAXN];
int d[MAXN];
int f[MAXN];
int nt[MAXN];
int n, tt = 0;
using namespace std;

int next(int u)
{
	for(int v = nt[u]; v < n; v++)
	{
		nt[u] = v + 1;
		if(a[u][v])
			return v;		
	}
	return -1;
}

void dfs(int r)
{
	for(int i = 0; i < n; i++)
		nt[i] = 0;
		
	stack<int> S;
	S.push(r);
	color[r] = GRAY;
	d[r] = ++tt;
	
	while(!S.empty())
	{
		int u = S.top();
		int v = next(u);
		if(v != -1)
		{
			if(color[v] == WHITE)
			{
				color[v] = GRAY;
				d[v] = ++tt;
				S.push(v);
			}
		}
		else
		{
			S.pop();
			color[u] = BLACK;
			f[u] = ++tt;
		}
	}	
}

void dfs_init()
{
	int u;
	for(u = 0; u < n; u++)
	{
		color[u] = WHITE;
		nt[u] = 0;
	}
	tt = 0;
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
