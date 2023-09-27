#include "bits/stdc++.h"
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define PI acos(-1)
#define Mod (int)1000000007
#define INFTY (int)INT_MAX
#define Rep(i, n) for (int i = 0; i < (int)(n); i++)
#define BitRep(i, n) for (int i = 0; i < (int)(1 << n); i++)
#define All(vec) vec.begin(), vec.end()
#define Part(vec, b, e) vec.begin() + b, vec.begin() + e
#define Sum(vec) accumulate(vec.begin(), vec.end(), 0)
#define Sort(vec) sort(vec.begin(), vec.end())
#define Reverse(vec) reverse(vec.begin(), vec.end())
#define Count(vec, x) count(vec.begin(), vec.end(), x)
#define Next_permutation(vec) next_permutation(vec.begin(), vec.end())
#define Find(S, s) S.find(s) != string::npos

struct Edge {
	int to, weight;
	Edge(int t, int d) : to(t), weight(d) {}
};

int main() {
	int V, E, r;
	cin >> V >> E >> r;
	vector<vector<Edge>> graph(V);
	Rep(i, E) {
		int s, t, d;
		cin >> s >> t >> d;
		graph[s].push_back(Edge(t, d));
	}
	vector<int> cost(V, INFTY);
	cost[r] = 0;
	priority_queue<int, vector<int>, greater<int>> PQ;
	PQ.push(r);
	while (!PQ.empty()) {
		int v = PQ.top();
		PQ.pop();
		Rep(i, graph[v].size()) {
			if (cost[graph[v][i].to] > cost[v] + graph[v][i].weight) {
				cost[graph[v][i].to] = cost[v] + graph[v][i].weight;
				PQ.push(graph[v][i].to);
			}
		}
	}
	Rep(i, V) {
		if (cost[i] == INT_MAX) cout << "INF" << endl;
		else cout << cost[i] << endl;
	}
	return 0;
}
