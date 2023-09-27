#include <iostream>
#include <vector>
#include <queue>

using namespace std;
static const int INF = 1e9;
static const int SIZE = 101;
typedef pair<int, int> P;

int d[SIZE];
vector<int> G[SIZE];

void solve()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int u, k;
		cin >> u >> k;
		for (int j = 0; j < k; ++j)
		{
			int v;
			cin >> v;
			G[u].push_back(v);
		}
	}
	for (int i = 0; i < SIZE; ++i)
	{
		d[i] = INF;
	}
	d[1] = 0;
	queue<P> que;
	que.push(P(0, 1));
	while (!que.empty())
	{
		P p = que.front();
		que.pop();
		int v = p.second;
		for (int i = 0; i < G[v].size(); ++i)
		{
			int to = G[v][i];
			if (d[to] > p.first + 1)
			{
				d[to] = p.first + 1;
				que.push(P(d[to], to));
			}
		}
	}
	for (int i = 1; i <= n; ++i)
	{
		if (d[i] == INF)
		{
			cout << i << " " << -1 << endl;
		}
		else
		{
			cout << i << " " << d[i] << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}