#include<algorithm>
#include<bitset>
#include<climits>
#include<cmath>
#include<cstdlib>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<time.h>
#include<tuple>
#include<utility>
#include<vector>

using namespace std;
long gcd(long x, long y) { if (x > y) { return gcd(y, x); } long r; while (y != 0) { r = x % y; x = y; y = r; } return x; }
long lcm(long x, long y) { return (x / gcd(x, y) * y); }

using pll = pair<long, long>;
using tlll = tuple<long, long, long>;
using W_graph = vector<vector<pll>>; //(cost, next)

struct UnionFind {
private:
	vector<long> prisize;//属するグラフの頂点数を返す。参照は根でよい。
public:
	vector<long> par;//親を返す
	UnionFind(long N) : prisize(N), par(N) {
		for (int i = 0; i < N; i++) par[i] = i;//全て根である状態
		for (int i = 0; i < N; i++) prisize[i] = 1;
	}

	long root(long i) {//根を返す
		if (par[i] == i) return i;
		return par[i] = root(par[i]); //根に直接繋ぎなおす
	}

	void unite(long x, long y) {//二つの木の統合(rxをryに繋ぐ)
		long rx = root(x);
		long ry = root(y);

		if (rx == ry) return;
		if (prisize[rx] > prisize[ry]) swap(rx, ry);
		par[rx] = ry;
		prisize[ry] += prisize[rx]; //ここ分解を想定していない & size[rx]は更新されない。
	}

	bool same(long x, long y) { return root(x) == root(y); }//根が等しいか
	long size(long i) { return prisize[root(i)]; }
};

void Dijkstra(W_graph& g, long s, vector<long>& res) {
	vector<long> dist(g.size(), INT_MAX);
	priority_queue<pll, vector<pll>, greater<pll>> que;
	long V = g.size() + 1;
	dist[s] = 0;
	que.push(make_pair(dist[s], s));

	while (!que.empty()) {
		long cost, now;
		tie(cost, now) = que.top(); que.pop();

		if (dist[now] < cost) continue;
		dist[now] = cost; V--;
		if (V == 0) break;

		for (auto e : g[now]) {
			long path, next;
			tie(path, next) = e;
			que.push(make_pair(cost + path, next));
		}
	}

	res = dist;
	return;
}

void Bellman_Ford(W_graph& g, long s, vector<long>& res, bool& negcir) {
	vector<long> dist(g.size(), INT_MAX);
	dist[s] = 0;
	long V = g.size();

	for (int i = 0; i < V; i++) {
		bool change = false;
		for (int j = 0; j < V; j++) {
			for (auto e : g[j]) {
				long path, next;
				tie(path ,next) = e;
				if (dist[next] > dist[j] + path && dist[j] != INT_MAX) {
					dist[next] = dist[j] + path;
					change = true;
				}
			}
		}

		if (i == V - 1) negcir = change;
	}

	res = dist;
	return;
}

void Warshall_Froyd(W_graph& g, vector<vector<long>>& res) {
	long V = g.size();
	vector<vector<long>> dist(V, vector<long>(V, INT_MAX));

	for (int i = 0; i < V; i++) dist[i][i] = 0;
	for (int i = 0; i < V; i++) for (auto e : g[i]) dist[i][e.second] = e.first;

	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			for (int k = 0; k < V; k++) {
				dist[j][k] = min(dist[j][k], dist[j][i] + dist[i][k]);
			}
		}
	}

	res = dist;
	return;
}

W_graph Prim(W_graph& ing) {
	long V = ing.size();
	W_graph res(V);
	priority_queue<tlll, vector<tlll>, greater<tlll>> que;
	vector<bool> isvisited(V, false); isvisited[0] = true;
	
	for (auto e : ing[0]) que.push(make_tuple(e.first, 0, e.second));

	while (!que.empty()) {
		long cost, vfrom, vto;
		tie(cost, vfrom, vto) = que.top(); que.pop();
		if (isvisited[vto]) continue;
		isvisited[vto] = true;

		res[vfrom].push_back(make_pair(cost, vto));
		res[vto].push_back(make_pair(cost, vfrom));

		for (auto e : ing[vto]) que.push(make_tuple(e.first, vto, e.second));
	}

	return res;
}

W_graph Kruskal(W_graph& ing) {
	//depends on UnionFind
	long V = ing.size();
	W_graph res(V);
	UnionFind U(V);
	vector<tlll> edges;
	for (int i = 0; i < V; i++) for (auto e : ing[i]) if (i < e.second) edges.push_back(make_tuple(e.first, i, e.second));
	sort(edges.begin(), edges.end());

	for (auto e : edges) {
		long cost, vfrom, vto;
		tie(cost, vfrom, vto) = e;
		if (U.same(vfrom, vto)) continue;
		
		res[vfrom].push_back(make_pair(cost, vto));
		res[vto].push_back(make_pair(cost, vfrom));
		U.unite(vfrom, vto);
	}

	return res;
}

int main() {

	long V, E, R; cin >> V >> E >> R;
	W_graph G(V);

	for (int i = 0; i < E; i++) {
		long s, t, d; cin >> s >> t >> d;
		G[s].push_back(make_pair(d, t));
	}

	vector<long> res;
	bool negcir;

	Bellman_Ford(G, R, res, negcir);

	if (negcir) cout << "NEGATIVE CYCLE" << endl;
	else for (int i = 0; i < V; i++) {
		if (res[i] == INT_MAX) cout << "INF" << endl; else cout << res[i] << endl;
	}
}
