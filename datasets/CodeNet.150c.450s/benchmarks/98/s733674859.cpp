#include <bits/stdc++.h>
const long long INF = LLONG_MAX / 2;
const long long MOD = 1000000007;
const long double PI = 3.1415926;
#define FOR(i, r, n) for(int i=(ll)(r); i<(ll)(n); i++) 
#define REP(i, n) FOR(i, (0), n)
#define ll long long int
using namespace std;
ll ans = 0, sum = 0, n, k, counter = 0, w, h;
string s;
vector<ll> v;
vector<pair<ll, ll>> vp;
vector<vector<ll>> vv(50, vector<ll>(50, 0));

int main()
{
	ll m; bool flg = false;
	while (true)
	{
		cin >> n >> m;
		if (!n && !m) return 0;
		vector<ll> va, vb;
		va.resize(n); vb.resize(m);
		REP(i, n) cin >> va[i];
		REP(i, m) cin >> vb[i];
		ll asum = accumulate(va.begin(), va.end(), 0), bsum = accumulate(vb.begin(), vb.end(), 0);
		REP(i, n)
			REP(j, m) {
			if (asum - va[i] + vb[j] == bsum - vb[j] + va[i]) {
				cout << va[i] << " " << vb[j] << endl;
				j = m;
				i = n;
				flg = true;
			}
		}
		if (!flg) cout << "-1" << endl;
		flg = false;
	}
}