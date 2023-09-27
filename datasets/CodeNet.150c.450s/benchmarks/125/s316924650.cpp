#include <iostream>
#include <vector>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

static const int N = 100;
int n, m[N][N];
int tm, begT[N], endT[N];
bool visited[N];

int nxt(int u)
{
	for (int v = 0; v < n; ++v)
	{
		if (m[u][v] > 0 && !visited[v]) return v;
	}
	return -1;
}

void dfs_helper(int idx)
{
	stack<int> s;
	s.push(idx);
	begT[idx] = tm++;
	visited[idx] = true;

	while (!s.empty())
	{
		int u = s.top();
		int v = nxt(u);
		if (-1 == v)
		{
			s.pop();
			endT[u] = tm++;
			continue;
		}
		s.push(v);
		begT[v] = tm++;
		visited[v] = true;
	}
}

void dfs()
{
	tm = 1;

	for (int i = 0; i < n; ++i)
	{
		if (!visited[i]) dfs_helper(i);
	}

	for (int i = 0; i < n; ++i)
	{
		cout << i + 1 << " " << begT[i] << " " << endT[i] << endl;
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; ++i)	{
		for (int j = 0; j < n; ++j)	{
			m[i][j] = 0;
		}
	}

	for (int i = 0; i < n; ++i)
		visited[i] = false;

	for (int i = 0; i < n; ++i) {
		int u, d;
		cin >> u >> d;
		for (int j = 0; j < d; ++j)	{
			int v; cin >> v;
			m[u - 1][v - 1] = 1;
		}
	}

	dfs();

	return 0;
}