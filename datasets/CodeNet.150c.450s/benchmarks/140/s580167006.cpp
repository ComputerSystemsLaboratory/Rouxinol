#include <cstdio>
#include <iostream>
#include <tuple>
#include <queue>
#include <functional>
#include <list>
#include <algorithm>

using namespace std;
#define REP(i,n) FOR(i,0,n)
#define FOR(i,a,b) for(int i = (a); i < (b); i++)

const int MAX_NODE_NUM = 10005;
const int MAX_EDGE_NUM = 100005;

namespace Prim {
	static list<tuple<int, int>> adjLists[MAX_NODE_NUM];
	static bool isNodeInST[MAX_NODE_NUM];
	void run() {
		int n, m;
		cin >> n >> m;
		REP(i, m) {
			int w, s, t;
			cin >> s >> t >> w;
			adjLists[s].push_back(make_tuple(w, t));
			adjLists[t].push_back(make_tuple(w, s));
		}

		using EdgeType = tuple<int, int>;
		priority_queue<EdgeType, vector<EdgeType>, greater<EdgeType>> q;
		long long cost = 0;
		int stNodeNum = 0;
		int newNode = 0;
		int newCost = 0;
		q.push(make_tuple(newCost, newNode));
		while (stNodeNum < n) {
			tie(newCost, newNode) = q.top();
			q.pop();
			if (isNodeInST[newNode] == false) {
				isNodeInST[newNode] = true;
				cost += newCost;
				stNodeNum++;
				for (auto t : adjLists[newNode]) {
					q.push(t);
				}
			}
		}

		cout << cost << endl;

		return;
	}
};

namespace Kruskal {
	static tuple<int, int, int> edges[MAX_EDGE_NUM];
	static int parent[MAX_NODE_NUM];
	int root(int a) { return (a == parent[a]) ? a : (parent[a] = root(parent[a])); }
	bool unite(int a, int b) {
		int x = root(a), y = root(b);
		if (x == y) return false;
		parent[x] = y;
		return true;
	}
	void run() {
		int n, m;
		int s, t, w;
		cin >> n >> m;
		REP(i, m) {
			cin >> s >> t >> w;
			edges[i] = tie(w, s, t);
		}
		sort(edges, edges + m);
		REP(i, n) {
			parent[i] = i;
		}
		long long cost = 0;
		REP(i, m) {
			tie(w, s, t) = edges[i];
			if (unite(s, t)) {
				cost += w;
			}
		}
		cout << cost << endl;
	}
};

int main() {
//	Prim::run();
	Kruskal::run();

	return 0;
}