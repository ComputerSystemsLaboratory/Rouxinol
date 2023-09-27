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
int merge(vector<int>&a, int l, int r) {
	int mid = (l + r) / 2;
	int n1 = mid - l, n2 = r - mid;
	vector<int>L(n1 + 1), R(n2 + 1);
	rep(i, 0, n1)L[i] = a[l + i];
	L[n1] = INF;
	rep(i, 0, n2)R[i] = a[mid + i];
	R[n2] = INF;
	int ret(0);
	int i(0), j(0);
	rep(k, l, r) {
		ret++;
		if (L[i] <= R[j])a[k] = L[i++];
		else a[k] = R[j++];
	}
	return ret;
}
int mergesort(vector<int>&a, int l, int r) {
	if (r - l > 1) {
		return mergesort(a, l, (l + r) / 2)
			+ mergesort(a, (l + r) / 2, r)
			+ merge(a, l, r);
	}
	return 0;
}
signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int N; cin >> N;
	vector<int> a(N); rep(i, 0, N) { cin >> a[i]; }
	int ans = mergesort(a, 0, N);
	rep(i, 0, N)cout << a[i] << (i == N - 1 ? '\n' : ' ');
	cout << ans << endl;
	return 0;
}