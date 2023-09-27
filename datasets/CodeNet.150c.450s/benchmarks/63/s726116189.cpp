#include <cmath>
#include <queue>
#include <bitset>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100005;
const int M = 500005;

const long long inf = 0x3f3f3f3f3f3f3f3f;

typedef pair<int, int> pr;

signed main(void)
{
	int n, m, s; cin >> n >> m >> s;

	vector< vector<pr> > to(n);

	for (int i = 0, u, v, w; i < m; ++i)
	{
		cin >> u >> v >> w;
		to[u].push_back(make_pair(v, w));
	}

	vector<long long> dis(n); queue<int> que; bitset<N> vis;
	for (auto &i : dis)i = inf; dis[s] = 0; que.push(s); vis.set(s);

	while (!que.empty())
	{
		int top = que.front(); que.pop(); vis.reset(top);

		for (auto t : to[top])
			if (dis[t.first] > dis[top] + t.second)
			{
				dis[t.first] = dis[top] + t.second;
				if (!vis[t.first])vis.set(t.first), que.push(t.first);
			}
	}

	for (auto i : dis)
	{
		if (i < inf)cout << i << endl;
		else cout << "INF" << endl;
	}

//	system("pause");
}