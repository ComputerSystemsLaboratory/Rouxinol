#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <cmath>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cstdio>
#include <queue>

using namespace std;
using ll = long long;
using ull = unsigned long long;

constexpr ll LL_MAX = numeric_limits<ll>::max();
constexpr ull ULL_MAX = numeric_limits<ull>::max();
constexpr ll I_MAX = numeric_limits<int>::max();
constexpr ull UI_MAX = numeric_limits<unsigned int>::max();

#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a-1;i>=b;i--)

auto sumdig(ll num) {
	ll dig, sum;
	sum = 0;
	while (num) {
		dig = num % 10;
		sum = sum + dig;
		num = num / 10;
	}
	return sum;
}



struct edge {
	int from;
	int to;
	int cost=1;
};


auto dijkstra(vector<vector<edge>> &g, int start = 0) {
	vector<int> d(g.size(), I_MAX);
	vector<bool> flag(g.size(), false);
	d[start] = 0;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> nodes;//first dist, second edgenum
	nodes.push(pair<int, int>(0, start));


	while (!nodes.empty()) {
		pair<int, int> n = nodes.top();
		int s_node = n.second;
		nodes.pop();
		if (n.first > d[n.second])continue;
		rep(i, 0, g[s_node].size()) {
			int new_dist = d[s_node] + g[s_node][i].cost;
			int n_num = g[s_node][i].to;
			if (new_dist < d[n_num]) {
				nodes.push(make_pair(new_dist, n_num));
				d[n_num] = new_dist;
			}
		}
	}
	return d;
}

int main() {
	int n;
	cin >> n;
	vector<edge> empty;
	vector<vector<edge>> g(n, empty);
	vector<int> ans;
	
	rep(i, 0, n) {
		int temp;
		cin >> temp;//頂点番号はいらん
		cin >> temp;

		rep(j, 0, temp) {
			int tc, tt;
			cin >> tt >> tc;
			edge tn = { i,tt,tc };
			g[i].push_back(tn);
		}
	}

	ans = dijkstra(g, 0);
	
	rep(i, 0, ans.size()) {
		cout << i << " " << ans[i] << endl;
	}

	return 0;
}
