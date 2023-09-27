#include<utility>
#include<algorithm>
#include<vector>
#include<queue>
#include<iostream>
#include<functional>

using namespace std;
typedef long long ll;

struct edge {
	int to, cost;
	edge(const int &_to, const int &_cost) :to(_to), cost(_cost) {}
	edge(const edge &e) :to(e.to), cost(e.cost) {}
};
bool operator< (const edge& l, const edge &r) { return (l.cost < r.cost); }
bool operator> (const edge& l, const edge &r) { return (l.cost > r.cost); }

int V;
vector<vector<edge>> G(10000);
vector<bool> used(10000);
priority_queue <edge, vector<edge>, greater<vector<edge>::value_type>> que;

double prim(int s) {
	double res = 0;
	used[s] = true;
	for (int i = 0; i < G[s].size(); ++i)que.emplace(G[s][i]);
	while (!que.empty()) {
		edge e = que.top(); que.pop();
		if (used[e.to])continue;
		res += e.cost;
		used[e.to] = true;
		for (int i = 0; i < G[e.to].size(); ++i) {
			if (!used[G[e.to][i].to])
				que.emplace(G[e.to][i]);
		}
	}
	return res;
}

int main()
{
	cin.tie(0);
	ios::ios_base::sync_with_stdio(false);
	int E;
	cin >> V >> E;
	int s, t, w;
	for (int i = 0; i < E; ++i) {
		cin >> s >> t >> w;
		G[s].emplace_back(edge(t, w));
		G[t].emplace_back(edge(s, w));
	}
	int ans = prim(0);
	cout << ans << endl;
}