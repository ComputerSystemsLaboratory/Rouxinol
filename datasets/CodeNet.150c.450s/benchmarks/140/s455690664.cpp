#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <cstring>

using namespace std;
// ascending order
#define vsort(v) sort(v.begin(), v.end())
// descending order
#define vsort_r(v) sort(v.begin(), v.end(), greater<int>())
#define vunique(v) unique(v.begin(), v.end())
#define mp make_pair
#define ts(x) to_string(x)
#define rep(i, a, b) for(int i = (int)a; i < (int)b; i++)
#define repm(i, a, b) for(int i = (int)a; i > (int)b; i--)
#define bit(a) bitset<8>(a)
#define des_priority_queue priority_queue<int, vector<int>, greater<int> >
typedef long long ll;
typedef pair<int, int> P;

#define INF 1000000
#define MAX_V 10000
#define MAX_N 10000
#define MAX_E 100000000
int cost[MAX_V][MAX_V];
int mincost[MAX_V];
bool used[MAX_V];
int V, E;
struct union_find_tree {
	int par[MAX_N]; // 親
	int depth[MAX_N]; // 木の深さ

	// n要素で初期化
	void init(int n) {
		rep(i, 0, n) {
			par[i] = i;
			depth[i] = 0;
		}
	}

	// 木の根を求める
	int find(int x) {
		if(par[x] == x) return x;
		else return par[x] = find(par[x]);
	}

	// xとyの属する集合を併合
	void unite(int x, int y) {
		x = find(x);
		y = find(y);
		if(x == y) return;

		if(depth[x] < depth[y]) {
			par[x] = y;
		} else {
			par[y] = x;
			if(depth[x] == depth[y]) depth[x]++;
		}
	}

	// xとyが同じ集合に属するか否か
	bool same(int x, int y) {
		return find(x) == find(y);
	}
};
struct edge {
	int u, v, cost;
};

bool comp(const edge& e1, const edge& e2) {
	return e1.cost < e2.cost;
}
edge es[MAX_E];
union_find_tree uft;

int prim() {
	rep(i, 0, V) {
		mincost[i] = INF;
		used[i] = false;
	}

	mincost[0] = 0;
	int res = 0;
	while(true) {
		int v = -1;
		rep(u, 0, V) {
			if(!used[u] && (v == -1 || mincost[u] < mincost[v])) v = u;
		}

		if(v == -1) break;
		used[v] = true;
		res += mincost[v];
		rep(u, 0, V) mincost[u] = min(mincost[u], cost[v][u]);
	}
	return res;
}

int kruskall() {
	sort(es, es + E, comp);
	uft.init(V);
	int res = 0;
	rep(i, 0, E) {
		edge e = es[i];
		if(!uft.same(e.u, e.v)) {
			uft.unite(e.u, e.v);
			res += e.cost;
		}
	}
	return res;
}
		

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	cin >> V >> E;
	
	rep(i, 0, E) {
		int s, t, w;
		cin >> s >> t >> w;
		es[i].u = s;
		es[i].v = t;
		es[i].cost = w;
	}

	cout << kruskall() << endl;
}

