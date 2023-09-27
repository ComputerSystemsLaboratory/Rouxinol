#include <bits/stdc++.h>
#define INF 1000000000
#define MAX_N 100
using namespace std;
typedef pair<int, int> P;
struct edge {
	int to, cost;
	edge(int to_, int cost_) : to(to_), cost(cost_) {}
};

int n;
vector<edge> G[MAX_N];

int Prim() {
	int res = 0;
	vector<bool> used(n, false);
	priority_queue<P, vector<P>, greater<P>> que;
	que.push(P(0, 0));
	while (!que.empty()) {
		P p = que.top(); que.pop();
		int v = p.second;
		if (used[v]) continue;
		used[v] = true;
		res += p.first;
		for (int i = 0; i < G[v].size(); i++) {
			edge e = G[v][i];
			que.push(P(e.cost, e.to));
		}
	}
	return res;
}

int main()
{
	cin >> n;
	for (int i = 0, c; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> c;
			if (c != -1)
				G[i].push_back(edge(j, c));
		}
	}
	cout << Prim() << endl;
	return 0;
}