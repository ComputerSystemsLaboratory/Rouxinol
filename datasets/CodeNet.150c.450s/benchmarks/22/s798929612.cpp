#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<functional>
#include<utility>

using namespace std;
typedef pair<int, int> P;
const int INF = (1 << 30);
int V, E, r;
int dp[100000];
struct edge{
	int to, cost;
	edge(int to,int cost=1):to(to),cost(cost){}
};
vector<edge> G[100000];

int main()
{
	cin.tie(0);
	ios::ios_base::sync_with_stdio(false);
	cin >> V >> E >> r;
	int s, t, d, update = 1, limit = V*E + 1;
	for (int i = 0; i < E; ++i) {
		cin >> s >> t >> d;
		edge e(t,d);
		G[s].emplace_back(e);
	}
	fill(dp, dp + V, INF);
	dp[r] = 0;
	priority_queue<P, vector<P>, greater<P>> que;
	que.push(P(0, r));
	while (!que.empty()) {
		P p = que.top(); que.pop();
		if (dp[p.second] < p.first)continue;
		int v = p.second;
		for (int i = 0; i < G[v].size(); ++i) {
			edge e = G[v][i];
			if (dp[e.to]>dp[v] + e.cost) {
				dp[e.to] = dp[v] + e.cost;
				++update;
				que.push(P(dp[e.to], e.to));
			}
		}
		if (update > limit) {
			cout << "NEGATIVE CYCLE\n";
			return 0;
		}
	}
	for (int i = 0; i < V; ++i) {
		if (dp[i] == INF)cout << "INF\n";
		else cout << dp[i] << "\n";
	}
	cout << flush;
	return 0;
}