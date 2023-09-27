#include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include <string>
#include <queue>
#include <algorithm>
#include <map>
#include <cmath>
#include <numeric>
#include <list>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <tuple>

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i <= (n); i++)
#define show(a, n) rep(i,n) {cout<<a[i]<<' ';} cout<<endl
#define show2(a, n, m) rep(i, n) { rep(j, m) {cout << a[i][j] << ' ';} cout << endl;} 
#define chmin(a, b) a = min(a, b)
#define chmax(a, b) a = max(a, b)

using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<long long, long long> pll;
typedef long double ld;

const int INF = 1 << 30;
const long long INFL = 1LL << 60;
const int MOD = 1000000007;
const int MAX = 100000;
const int N = 100010;

int main() {
//	cout << fixed << setprecision(15);
	int n, m;
	cin >> n >> m;
	vector<vll> d(n, vll(n, INFL));
	rep(i, n) d[i][i] = 0;
	rep(i, m) {
		ll s, t, _d;
		cin >> s >> t >> _d;
		d[s][t] = _d;
	}
	rep(i, n) rep(j, n) rep(k, n) {
		chmin(d[j][k], d[j][i] + d[i][k]);
	}
	bool neg = false;
	rep(i, n) if(d[i][i] != 0) neg = true;
	if(neg) {
		cout << "NEGATIVE CYCLE" << endl;
		return 0;
	}
	const ll maxd = 10000000000;
	rep(i, n) {
		rep(j, n) {
			if(d[i][j] > maxd) cout << "INF";
			else cout << d[i][j];
			if(j < n-1) cout << ' ';
		}
		cout << endl;
	}
}

