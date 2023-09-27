#define _CRT_SECURE_NO_WARNINGS
#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define FOR(i, m, n) for(int i=(m); i<(n); ++i)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define Cout(x) cout << (x) << endl
#define dump(x) cerr << #x << " = " << (x) << endl;
typedef long long LL;
typedef vector<int> VI;
typedef vector<long long> VL;
typedef vector<string> VS;
typedef vector<vector<int>> VVI;
typedef pair<int, int> PII;
const int inf = (int)1e9;
const long long mod = 998244353LL;
const double pi = acos(-1.0);

void re(VI & v, int p, int c) {
	VI P, C;
	rep(i, p - 1)P.pb(v[i]);
	FOR(i, p - 1, p + c - 1)C.pb(v[i]);
	rep(i, sz(C))v[i] = C[i];
	FOR(i, c, p + c - 1)v[i] = P[i - c];
}

int main() {
	int n, r;
	while (cin >> n >> r && (n || r)) {
		VI a(n); rep(i, n)a[i] = n - i;
		rep(i, r) {
			int p, c; cin >> p >> c;
			re(a, p, c);
		}
		Cout(a[0]);
	}
}
