#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>
#include <fstream>
#include <bitset>
#include <time.h>
#include <tuple>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef complex<double> Point;

#define PI acos(-1.0)
#define EPS 1e-10
const ll INF = 1e12;
const ll MOD = 1e9 + 7;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,N) for(int i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define EQ(a,b) (abs((a)-(b))<EPS)
#define EQV(a,b) ( EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag()) )
#define fi first
#define se second
#define N_SIZE (1LL << 20)
#define NIL -1
#define MAX_N 100100

ll sq(ll num) { return num*num; }
ll mod_pow(ll x, ll n) {
	if (n == 0)return 1;
	if (n == 1)return x%MOD;
	ll res = sq(mod_pow(x, n / 2));
	res %= MOD;
	if (n % 2 == 1) {
		res *= x;
		res %= MOD;
	}
	return res;
}
ll mod_add(ll a, ll b) { return (a + b) % MOD; }
ll mod_sub(ll a, ll b) { return (a - b + MOD) % MOD; }
ll mod_mul(ll a, ll b) { return a*b % MOD; }

struct edge {
	int to;			//?????????to
	long long cost;	//????????????cost
	edge(int _to, long long _cost) :to(_to), cost(_cost) {}
};
vector<edge> G[1010];	//??£??\?????????

int v, e, r;
long long d[1010];	//?§????r????????????????????¢

bool bellman_ford(int start) {
	bool f[1010] = {};
	for (int i = 0; i < v; i++)d[i] = 1e12;
	d[start] = 0;
	f[start] = 1;

	for (int i = 0; i < v; i++) {
		bool update = false;		//???????????¢?????´??°????????£???????????????
		for (int j = 0; j < v; j++) {
			int from = j;
			if (!f[from])continue;
			for (int k = 0; k < G[from].size(); k++) {
				edge e = G[j][k];
				if (d[from] != INF&&d[e.to] > d[from] + e.cost) {
					f[e.to] = 1;
					d[e.to] = d[from] + e.cost;
					update = true;
				}
			}
		}
		if (update == false)break;	//???????????¢?????´??°????????????????????£????????????
		if (i == v - 1)return true;
	}
	return false;
}

int main() {
	cin >> v >> e >> r;
	rep(i, e) {
		int s, t, d;
		cin >> s >> t >> d;
		G[s].push_back(edge(t, d));
	}

	if (bellman_ford(r)) {
		cout << "NEGATIVE CYCLE" << endl;
		return 0;
	}

	for (int i = 0; i < v; i++) {
		if (d[i] != 1e12)cout << d[i] << endl;
		else cout << "INF" << endl;
	}

}