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
	ios::ios_base::sync_with_stdio(false);
	 cin >> V >> E >> r;
	for (int i = 0; i < E; ++i) {
		int s, t, d;
		cin >> s >> t >> d;
		edge e(t,d);
		G[s].push_back(e);
	}
	fill(dp, dp + V, INF);
	dp[r] = 0;
	priority_queue<P, vector<P>, greater<P>> que;
	P start(0, r);
	que.push(start);
	while (!que.empty()) {
		P p = que.top(); que.pop();
		if (dp[p.second] < p.first)continue;

		int v = p.second;
		for (int i = 0; i < G[v].size(); i++) {
			edge e = G[v][i];
			if (dp[e.to]>dp[v] + e.cost) {
				dp[e.to] = dp[v] + e.cost;
				que.push(P(dp[e.to], e.to));
			}
		}
	}
	for (int i = 0; i < V; i++) {
		if (dp[i] == INF)cout << "INF\n";
		else cout << dp[i] << "\n";
	}
	cout << flush;
	return 0;
}