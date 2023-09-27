#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<math.h>
#include<queue>
#include<deque>
#include<stack>
#include<cstdio>
#include<utility>
#include<set>
#include<list>
#include<cmath>
#include<stdio.h>
#include<string.h>
#include<iomanip>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define REP(i, n) FOR(i, 0, n - 1)
#define NREP(i, n) FOR(i, 1, n)
using ll = long long;
using pii = pair<int, int>;
using piii = pair<pii, pii>;
const int dx[4] = { 0, -1, 1, 0 };
const int dy[4] = { -1, 0, 0, 1 };
const ll INF = 1e9 + 7;
int gcd(int x, int y) {
	if (x < y)swap(x, y);
	if (y == 0)return x;
	return gcd(y, x%y);
}

template<class T1, class T2> void chmin(T1 &a, T2 b) { if (a>b)a = b; }

template<class T1, class T2> void chmax(T1 &a, T2 b) { if (a<b)a = b; }
template<class T>
void Add(T &a, const T &b, const T &mod = 1000000007) {
	int val = ((a % mod) + (b % mod)) % mod;
	if (val < 0) { val += mod; }
	a = val;
}
////////////////////////////////////////
struct edge {
	int from;
	int to;
	int cost;
};
int main() {
	int V, E, r;
	cin >> V >> E >> r;
	vector<edge>G;
	REP(i, E) {
		edge add;
		int s, t, d;
		cin >> s >> t >> d;
		add.from = s;
		add.to = t;
		add.cost = d;
		G.push_back(add);
	}
	int d[1010];
	REP(i, 1010)d[i] = INF;
	d[r] = 0;
	REP(i, V) {
		REP(j, E) {
			edge e = G[j];
			if (d[e.from] == INF)continue;
			if (d[e.to] > d[e.from] + e.cost) {
				d[e.to] = d[e.from] + e.cost;
				if (i == V - 1) {
					cout << "NEGATIVE CYCLE" << endl;
					return 0;
				}
			}
		}
	}
	REP(i, V) {
		if (d[i] == INF)cout << "INF" << endl;
		else cout << d[i] << endl;
	}
	return 0;
}

