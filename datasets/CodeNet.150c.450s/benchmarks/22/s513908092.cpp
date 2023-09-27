#include <iostream>
#include <limits>
#include <vector>

using namespace std;

//BEGIN
template <typename T>
struct edge {
	int from, to;
	T cost;

	edge(int from, int to, T cost) :from(from), to(to), cost(cost) {}
};

template<typename T>
vector<T> bellman_ford(int s, int V, vector<edge<T> > G) {
	const T INF = numeric_limits<T>::max();
	vector<T> cost(V, INF);
	vector<int> prevr(V, -1); //経路復元用
	cost[s] = 0;
	for (int i = 0; i < V; ++i) {
		for (edge<T> e : G) {
			if (cost[e.from] == INF) continue;
			if (cost[e.to] > cost[e.from] + e.cost) {
				cost[e.to] = cost[e.from] + e.cost;
				prevr[e.to] = e.from;
				if (i == V - 1) return vector<T>();
			}
		}
	}
	return cost;
}
//END

int main() {
	int V, E, r; cin >> V >> E >> r;
	vector<edge<int> > G;
	for (int i = 0; i < E; ++i) {
		int s, t, d; cin >> s >> t >> d;
		G.push_back(edge<int>(s, t, d));
	}
	vector<int> ans = bellman_ford(r, V, G);
	if (ans.empty()) cout << "NEGATIVE CYCLE" << endl;
	else {
		for (int i = 0; i < V; ++i) {
			if (ans[i] == numeric_limits<int>::max()) cout << "INF" << endl;
			else cout << ans[i] << endl;
		}
	}
	
	return 0;
}


/*
	created: 2019-08-27
	https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_B
*/
