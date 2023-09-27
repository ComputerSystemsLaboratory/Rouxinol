#include <bits/stdc++.h>
using namespace std;

using VS = vector<string>;    using LL = long long;
using VI = vector<int>;       using VVI = vector<VI>;
using PII = pair<int, int>;   using PLL = pair<LL, LL>;
using VL = vector<LL>;        using VVL = vector<VL>;

#define ALL(a)  begin((a)),end((a))
#define RALL(a) (a).rbegin(), (a).rend()
#define SZ(a) int((a).size())
#define SORT(c) sort(ALL((c)))
#define RSORT(c) sort(RALL((c)))
#define UNIQ(c) (c).erase(unique(ALL((c))), end((c)))
#define FOR(i, s, e) for (int(i) = (s); (i) < (e); (i)++)
#define FORR(i, s, e) for (int(i) = (s); (i) > (e); (i)--)
#define debug(x) cerr << #x << ": " << x << endl
const int INF = 1e9;                          const LL LINF = 1e16;
const LL MOD = 1000000007;                    const double PI = acos(-1.0);
int DX[8] = { 0, 0, 1, -1, 1, 1, -1, -1 };    int DY[8] = { 1, -1, 0, 0, 1, -1, 1, -1 };

/* -----  2018/06/12  Problem: AOJ GRL_1_A / Link: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A  ----- */
/* ------問題------

与えられたグラフ G=(V,E) と始点 r について、単一始点最短経路の重みを求めるプログラムを作成してください。
G のノード r を始点とし、r から各ノードについて、
最短経路上の辺の重みの総和を出力してください。
出力は |V| 行からなる。各頂点 0,1,...,|V|−1 について、始点 r からの最短経路上の重みの総和を順番に出力する。
ただし、r からの経路が存在しない場合は INF と出力する。


-----問題ここまで----- */
/* -----解説等-----

書く

----解説ここまで---- */
VL Dijkstra(vector<vector<PLL>>& G, int s) {
	VL dist(SZ(G), LINF);
	dist[s] = 0;
	priority_queue<PLL, vector<PLL>, greater<PLL>> que;
	que.push(PLL(0LL, s));

	while (!que.empty()) {
		PLL p = que.top(); que.pop();
		int v; /* 頂点*/ long long d; /* 頂点vまでの距離 */
		tie(d, v) = p;

		if (d > dist[v]) continue;

		FOR(i, 0, (int)G[v].size()) {
			int nv = G[v][i].first;
			if (dist[nv] > dist[v] + G[v][i].second) {
				dist[nv] = dist[v] + G[v][i].second;
				que.push(PLL(dist[nv], nv));
			}
		}
	}
	return dist;
}
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int N, E;
	int root;
	cin >> N >> E >> root;
	vector<vector<PLL>>G(N);
	FOR(i, 0, E) {
		int a, b, c;
		cin >> a >> b >> c;
		G[a].push_back(PLL(b, c));
	}
	VL dist = Dijkstra(G, root);
	FOR(i, 0, N) {
		cout << (dist[i] == LINF ? "INF" : to_string(dist[i])) << endl;
	}
	return 0;
}

