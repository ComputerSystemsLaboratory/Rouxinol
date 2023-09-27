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

// v[i] <= x <= v[j] ????????? (i<=j)
// O(N) STL ?????????
int stable_partition(vector<int> &v, int l, int r, int x) {
	int i = l;
	for (int j = l; j < r; j++) {
		if (v[j] <= x) {
			swap(v[i], v[j]);
			i++;
		}
	}
	return i - 1;
}

signed main() {
	int n; cin >> n;
	vector<int> v(n); rep(i, 0, n) { cin >> v[i]; }
	int b = stable_partition(v, 0, n, v[n - 1]);
	dump(b);
	cout << v[0]; rep(i, 1, v.size()) {
		if (b == i)cout << " [" << v[i] << "]";
		else cout << " " << v[i];
	} cout << endl;
	return 0;
}