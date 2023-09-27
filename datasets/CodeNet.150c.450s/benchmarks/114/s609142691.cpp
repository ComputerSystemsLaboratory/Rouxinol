#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <string.h>

using namespace std;
typedef pair<int, int> P;
struct edge
{
	int to;
	int cost;
};

vector<edge> G[101];
bool isUsed[101];

void solve()
{
	int n;
	cin >> n;
	vector< vector<int> > data((n), vector<int>(n));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int c;
			cin >> data[i][j];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			if (data[i][j] != -1)
			{
				edge e1, e2;
				e1.to = j;
				e1.cost = data[i][j];
				e2.to = i;
				e2.cost = data[j][i];
				G[i].push_back(e1);
				G[j].push_back(e2);
			}
		}
	}
	memset(isUsed, 0, sizeof(isUsed));
	int ans = 0;
	priority_queue < P, vector<P>, greater<P> > pque;
	pque.push(P(0, 0));
	while (!pque.empty())
	{
		P p = pque.top();
		pque.pop();
		int v = p.second;
		if (isUsed[v])
		{
			continue;
		}
		isUsed[v] = true;
		ans += p.first;
		for (int i = 0; i < G[v].size(); ++i)
		{
			edge e = G[v][i];
			pque.push(P(e.cost, e.to));
		}
	}
	cout << ans << endl;
}

int main()
{
	solve();
	return(0);
}