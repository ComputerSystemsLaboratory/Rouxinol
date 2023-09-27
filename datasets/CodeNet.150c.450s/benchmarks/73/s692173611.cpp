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
const int MOD = (int)(1e9) + 7;
const double PI = acos(-1);
const double EPS = 1e-9;
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }

struct BinaryIndexedTree {
	// 1-indexed
	int n;
	vector<int>d;
	BinaryIndexedTree(int m): n(m){
		d.assign(m + 1, 0);
	}
	int sum(int a, int b) {
		return sum(b) - sum(a - 1);
	}
	int sum(int i) {
		int ret(0);
		for (int j = i; j > 0; j -= j&(-j)) {
			ret += d[j];
		}
		return ret;
	}
	void add(int i, int x) {
		while (i <= n) {
			d[i] += x;
			i += i&(-i);
		}
	}
};


signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, q; cin >> n >> q;
	BinaryIndexedTree BIT(n);
	rep(i, 0, q) {
		int com, a, b; cin >> com >> a >> b;
		if (com)cout << BIT.sum(a , b ) << endl;
		else BIT.add(a, b);
	}
	//rep(i, 0, n + 1)cout << BIT.d[i] << " ";
	return 0;
}