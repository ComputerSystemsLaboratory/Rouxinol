#include "bits/stdc++.h"
using namespace std;
#ifdef _DEBUG
#include "dump.hpp"
#else
#define dump(...)
#endif

//#define int long long
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(c) begin(c),end(c)
const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)(1e9 + 7);
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }

int n, k;
vector<int> w;

bool f(int p) {
	dump(p);
	int tmpw = 0;
	int tmpk = 1;
	rep(i, 0, n) {
		if (tmpw + w[i] > p) {
			tmpk++;
			tmpw = w[i];
		}
		else {
			tmpw += w[i];
		}
		dump(tmpw, tmpk, w[i]);
	}
	if (tmpk <= k)return true;
	return false;
}

template<class F>
int binary_search_(int l, int r, F f) {
	if (f(l))return l; // f(l):true
	while (l + 1 < r) {
		int m = (l + r) / 2;
		if (f(m))
			r = m;
		else
			l = m;
	}
	// f(l):false, f(r):true
	return r;
}

signed main() {
	cin >> n >> k;
	w.resize(n); rep(i, 0, n) { cin >> w[i]; }
	cout << binary_search_(*max_element(all(w)), INF, f) << endl;
	return 0;
}