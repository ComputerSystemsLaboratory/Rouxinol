
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<math.h>
#include<iomanip>
#include<set>
#include <numeric>
#include<cstring>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define REVERSE(v,n) reverse(v,v+n);
#define VREVERSE(v) reverse(v.begin(), v.end());
#define ll long long
#define pb(a) push_back(a)
#define INF 999999999
#define m0(x) memset(x,0,sizeof(x))
#define fill(x,y) memset(x,y,sizeof(x))

using namespace std;



int dy[4] = { 0,0,1,-1 };
int dx[4] = { 1,-1,0,0 };
int dxx[8] = { 0,0,1,1,1,-1,-1,-1 };
int dyy[8] = { 1,-1,0,1,-1,0,1,-1 };


ll m = 1000000007;

const int MOD = 1000000007;

ll gcd(ll x, ll y) {
	ll m = max(x, y), n = min(x, y);
	if (m%n == 0)return n;
	else return gcd(m%n, n);
}
ll lcm(ll x, ll y) {
	return x / gcd(x, y)*y;
}

ll myPow(ll x, ll n, ll m) {
	if (n == 0)
		return 1;
	if (n % 2 == 0)
		return myPow(x * x % m, n / 2, m);
	else
		return x * myPow(x, n - 1, m) % m;
}

long long nCr(int n, int r) {
	if (r > n / 2) r = n - r; // because C(n, r) == C(n, n - r)
	long long ans = 1;
	int i;

	for (i = 1; i <= r; i++) {
		ans *= n - r + i;
		ans /= i;
	}

	return ans;
}


const int MAX = 100010;

int par[MAX];//親
int Rank[MAX];//木の深さ

			  //n要素で初期化
void init(int n) {
	REP(i, n) {
		par[i] = i;
		Rank[i] = 0;
	}
}

//木の根を求める
int find(int x) {
	if (par[x] == x) {
		return x;
	}
	else {
		return par[x] = find(par[x]);//経路圧縮(根に直接つなぎなおす)もしつつ
	}
}

//xとyの属する集合を併合
void unite(int x, int y) {
	x = find(x);
	y = find(y);
	if (x == y)return;
	//低いほうを高いほうにつなげる(効率化)
	if (Rank[x] < Rank[y]) {
		par[x] = y;
	}
	else {
		par[y] = x;
		if (Rank[x] == Rank[y])Rank[x]++;
	}
}

//xとyが同じ集合に属するか否か
bool same(int x, int y) {
	return find(x) == find(y);
}

struct edge { int u, v, cost; };
bool comp(const edge& e1, const edge&e2) {
	return e1.cost < e2.cost;
}

edge es[MAX];
int V, E;


int kruskal() {
	sort(es, es + E, comp);
	init(V);
	int res = 0;
	REP(i, E) {
		edge e = es[i];
		if (!same(e.u, e.v)) {
			unite(e.u, e.v);
			res += e.cost;
		}
	}
	return res;
}




int main() {
	cin >> V >> E;

	REP(i, E) {
		int s, t, w;
		cin >> s >> t >> w;
		es[i] = { s,t,w };
	}

	int ans = kruskal();
	cout << ans << endl;
}

