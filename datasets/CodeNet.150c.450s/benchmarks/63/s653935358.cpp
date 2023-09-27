#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4244) // 最悪をします
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <numeric>
#include <queue>
#include <stack>
#include <map> 
#include <set>
#include <string>
#include <functional>
#include <list>
#include <random>
#include <time.h>
#include <iomanip>
#include <assert.h>
#include <numeric>
#include <sstream>
#define BIT(nr) (1UL << (nr))
#define int long long
//#define ll long long
#define double long double
#define mod 1000000007
#define MAXN (int)1e+5 * 2+1
#define LL_MAX 9223372036854775807	//ない環境用
#define LL_HALFMAX 9223372036854775807 / 2	//ない環境用
#define MIN -(9223372036854775807 / 2)
#define REP(i,a,n) for(int i=(a); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define FOR(it,c) for(__typeof((c).begin()) it=(c).begin(); it!=(c).end(); ++it)
#define ALLOF(c) (c).begin(), (c).end()
#define REPS(i,x) for(int i=1;i<=(int)(x);i++)
#define RREP(i,x) for(int i=((int)(x)-1);i>=0;i--)
#define RREPS(i,x) for(int i=((int)(x));i>0;i--)
#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define mp make_pair
template<typename T1, typename T2> inline void chmin(T1& a, T2 b) { if (a > b) a = b; }
template<typename T1, typename T2> inline void chmax(T1& a, T2 b) { if (a < b) a = b; }


using namespace std;

//デバッグ用カッコの有無
#ifdef DEBUG
template <class T>ostream& operator<<(ostream& o, const vector<T>& v)
{
	o << "{"; for (int i = 0; i < (int)v.size(); i++)o << (i > 0 ? ", " : "") << v[i]; o << "}"; return o;
}
#endif // DEBUG

template <class T>ostream& operator<<(ostream& o, const vector<T>& v)
{
	for (int i = 0; i < (int)v.size(); i++)o << (i > 0 ? " " : "") << v[i]; return o;
}

int dx[4] = { 0, 1, 0, -1 }; // x軸方向への変位
int dy[4] = { 1, 0, -1, 0 }; // y軸方向への変位

int dxp[4] = { 0, 1 }; // x軸方向への変位(正のみ)
int dyp[4] = { 1, 0 }; // y軸方向への変位(負のみ)

using Weight = int;
using Flow = int;
struct Edge {
	int src, dst;

	// libalgo のものに追加、メンバを追加するだけなので互換性は崩さないはず、逆辺のG[e.dstの]インデックスを保持
	int rev;
	Weight weight;
	Flow cap;
	Edge() : src(0), dst(0), weight(0), cap(0), rev(0) {}
	Edge(int s, int d, Weight w) : src(s), dst(d), weight(w), cap(0), rev(0) {}
};
using Edges = std::vector<Edge>;
using Graph = std::vector<Edges>;
using Array = std::vector<Weight>;
using Matrix = std::vector<Array>;

void add_edge(Graph& g, int a, int b, Weight w = 1) {
	g[a].emplace_back(a, b, w);
	g[b].emplace_back(b, a, w);
}
void add_arc(Graph& g, int a, int b, Weight w = 1) { g[a].emplace_back(a, b, w); }



signed main() {
	int V, E, r;
	cin >> V >> E >> r;

	Graph G(V);
	rep(i, E) {
		int s, t, d;
		cin >> s >> t >> d;
		add_arc(G, s, t, d);
	}

	// dijkstra
	auto dijkstra = [&](int s) -> vector<int> {
		vector<int> dist(V, LL_HALFMAX);
		dist[s] = 0;
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

		pq.push(mp(0, s));

		while (!pq.empty()) {
			auto p = pq.top();
			pq.pop();

			int v = p.second;
			if (dist[v] < p.first) {
				continue;
			}

			for (auto e : G[v]) {
				if (dist[e.dst] > dist[e.src] + e.weight) {
					dist[e.dst] = dist[e.src] + e.weight;
					pq.push(mp(dist[e.dst], e.dst));
				}
			}
		}
		return dist;
	};

	auto d = dijkstra(r);

	for(auto i : d){
		if (i == LL_HALFMAX) {
			cout << "INF\n";
		}
		else {
			cout << i << "\n";
		}
	}

	return 0;
}

