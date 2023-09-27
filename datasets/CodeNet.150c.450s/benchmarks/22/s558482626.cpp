#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps=1e-9;

typedef int Weight;
struct Edge {
	int src, dst;
	Weight weight;
	Edge(int src_, int dst_, Weight weight_) :
		src(src_), dst(dst_), weight(weight_) { }
	Edge(int src_, int dst_) :
		src(src_), dst(dst_) {

	}
};
pair<bool, vector<Weight>> spfa(const int v_num, const vector<vector<Edge>>&es, const int start) {
	vector<Weight>diss(v_num, INT_MAX);
	queue<int>que;
	vector<bool>use(v_num);
	vector<int>count(v_num);
	que.emplace(start);
	diss[start] = 0;
	while (!que.empty()) {
		int src(que.front());
		que.pop();
		use[src] = false;
		for (auto e : es[src]) {
			const int d = e.dst;
			if (diss[src] + e.weight < diss[d]) {
				diss[d] = diss[src] + e.weight;
				if (!use[d]) {
					use[d] = true;
					count[d]++;
					if (count[d] >= v_num) {
						return make_pair(false, vector<Weight>());
					}
					que.emplace(d);
				}
			}
		}
	}
	return make_pair(true, diss);
}
int main() {
	int V, E, R; cin >> V >> E >> R;
	vector<vector<Edge>>es(V);
	for (int i = 0; i < E; ++i) {
		int a, b, c; cin >> a >> b >> c;
		es[a].push_back(Edge(a, b, c));
	}
	auto p = spfa(V, es, R);
	if (p.first) {
		for (int i = 0; i < V; ++i) {
			if (p.second[i] >= 1e9) {
				cout << "INF" << endl;
			}
			else {

				cout << p.second[i] << endl;
			}
		}
	}
	else {
		cout << "NEGATIVE CYCLE" << endl;
	}
	return 0;
}