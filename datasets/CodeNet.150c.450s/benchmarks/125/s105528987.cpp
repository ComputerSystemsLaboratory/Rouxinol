#include <iostream>
#include <cstdio>
#include <vector>
#include <stack>
#include <string>
#include <queue>

using namespace std;

int d[101];
int f[101];
bool isUsed[101];
int cnt = 0;

void DFS(vector< vector<int> >& G, int vertex)
{
	d[vertex] = ++cnt;
	for (int i = 0; i < G[vertex].size(); ++i)
	{
		if (G[vertex][i] == 1 && isUsed[i] == false)
		{
			isUsed[i] = true;
			DFS(G, i);
		}
	}
	f[vertex] = ++cnt;
}

void solve()
{
	int n;
	cin >> n;
	vector< vector<int> > G(n, vector<int>(n));
	for (int i = 0; i < n; ++i)
	{
		int u, k;
		cin >> u >> k;
		--u;
		for (int j = 0; j < k; ++j)
		{
			int v;
			cin >> v;
			--v;
			G[u][v] = 1;
		}
	}
	for (int i = 0; i < 101; ++i)
	{
		isUsed[i] = false;
	}
	for (int i = 0; i < n; ++i)
	{
		if (isUsed[i] == false)
		{
			isUsed[i] = true;
			DFS(G, i);
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout << i + 1 << " " << d[i] << " " << f[i] << endl;
	}
}

int main()
{
	solve();
	return(0);
}