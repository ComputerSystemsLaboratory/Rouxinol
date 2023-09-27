//↓template↓

#include "bits/stdc++.h"
using namespace std;
#define Would
#define you
#define all(n)  n.begin(),n.end()
const long long INF = 1e18;
const long long MOD = 1e9 + 7;
const double pi = acos(-1);
const int SIZE = 1 << 17;
int dx[] = { 1,0,-1,0 }, dy[] = { 0,1,0,-1 }, alp[30];
long long fac[200005], finv[200005], inv[200005];
vector<long long>dij;
struct edge { long long to, cost; };
vector<vector<edge> >G;

long long mod_pow(long long a, long long b) {
	long long res = 1, mul = a;
	for (int i = 0; i < 31; ++i) {
		if (b >> i & 1) {
			res *= mul;
			res %= MOD;
		}
		mul = (mul * mul) % MOD;
	}

	return res;
}

void addedge(int from, int to, int cost) {
	G[from].push_back({ to,cost });
	G[to].push_back({ from,cost });
}

//↑template↑


int main() {
	vector<int>v;
	for (int i = 0; i < 5; ++i) {
		int n;
		cin >> n;
		v.push_back(n);
	}
	sort(v.rbegin(), v.rend());
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i];
		if (i != v.size() - 1) { cout << " "; }
	}
	cout << endl;
}
