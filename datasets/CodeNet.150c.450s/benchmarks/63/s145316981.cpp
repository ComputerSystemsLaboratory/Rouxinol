
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cstring>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <array>
#include <cassert>
#include <bitset>
using namespace std;
using LL = long long;

int V, E;
struct edge {
	int to;
	LL cost;
};

vector<edge>graph[123456];

int r;
LL dist[123456];

using P = pair<LL, int>;

int main(void)
{
	cin >> V >> E >> r;
	for (int i = 0; i < E; ++i) {
		int s, t, d;
		cin >> s >> t >> d;
		graph[s].push_back({ t,d });
	}
	priority_queue<P, vector<P>, greater<P>>que;
	fill(dist, dist + 123456, 1234567890123456LL);
	dist[r] = 0;
	que.push({ 0LL,r });
	while (!que.empty()) {
		auto q = que.top();
		que.pop();
		LL dis = q.first;
		int ver = q.second;
		if (dist[ver] < dis)continue;
		for (edge& e : graph[ver]) {
			if (dist[e.to] > dist[ver] + e.cost) {
				dist[e.to] = dist[ver] + e.cost;
				que.push({ dist[e.to], e.to });
			}
		}
	}
	for (int i = 0; i < V; ++i) {
		if (dist[i] >= 1234567890123456LL) {
			cout << "INF" << endl;
		}
		else {
			cout << dist[i] << endl;
		}
	}
	return 0;
}

