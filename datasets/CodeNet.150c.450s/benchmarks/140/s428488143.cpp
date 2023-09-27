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
#define vunique(v) v.erase(unique(v.begin(), v.end()), v.end())
#define mp make_pair
#define ts(x) to_string(x)
#define rep(i, a, b) for(int i = (int)a; i < (int)b; i++)
#define repm(i, a, b) for(int i = (int)a; i > (int)b; i--)
#define bit(a) bitset<8>(a)
#define des_priority_queue priority_queue<int, vector<int>, greater<int> >
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
typedef long long ll;
typedef pair<int, int> P;

#define MAX_V 1000000
#define MAX_N 1000000
#define MAX_E 1000000
struct edge {int u, v, cost; };

bool comp(const edge& e1, const edge& e2) {
	return e1.cost < e2.cost;
}

edge es[MAX_E];
int V, E;

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

int kruskal() {
	sort(es, es + E, comp);
	init(V);
	int res = 0;
	rep(i, 0, E) {
		edge e = es[i];
		if(!same(e.u, e.v)) {
			unite(e.u, e.v);
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
    edge e = {s, t, w};
    es[i] = e;
  }
  int res = kruskal();
  cout << res << endl;
}

