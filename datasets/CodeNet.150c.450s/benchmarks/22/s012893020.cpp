#include <cmath>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

const long long lim = 40000000;
const long long inf = 0x3f3f3f3f3f3f3f3f;

signed main(void)
{
	int n, m, s; cin >> n >> m >> s;

	vector<pair<pair<int, int>, int > > edge;

	for (int i = 0, u, v, w; i < m; ++i)
	{
		cin >> u >> v >> w;
		edge.push_back(make_pair(make_pair(u, v), w));
	}

	vector<long long> dis(n); for (auto &i : dis)i = inf; dis[s] = 0;

	for (int i = 0; i < n; ++i)for (auto j : edge)
		if (dis[j.first.second] > dis[j.first.first] + j.second)
			dis[j.first.second] = dis[j.first.first] + j.second;

	for (auto i : edge)if (dis[i.first.second] > dis[i.first.first] + i.second)
		if (dis[i.first.second] <= lim)return cout << "NEGATIVE CYCLE" << endl, 0;

	for (auto i : dis)if (i < lim)cout << i << endl; else cout << "INF" << endl;
}