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

//?????¢??°
//a[i] > a[j] ?????? i < j ??§??????????????°
template <class It>
long long merge(It l, It m, It r) {
	long long cnt = 0;
	vector<int> tmp(r - l);
	It it = tmp.begin(), it1 = l, it2 = m;
	while (it1 != m && it2 != r) {
		if (*it1 < *it2)
			*it++ = *it1++;
		else
			*it++ = *it2++, cnt += m - it1;
	}
	while (it1 != m) *it++ = *it1++;
	while (it2 != r) *it++ = *it2++;
	move(tmp.begin(), tmp.end(), l);
	return cnt;
};

template <class It>
long long merge_sort(It l, It r) {
	if (r - l <= 1)return 0;
	long long cnt = 0;
	It m = l + (r - l) / 2;
	cnt += merge_sort(l, m);
	cnt += merge_sort(m, r);
	cnt += merge(l, m, r);
	return cnt;
}
//end ?????¢??°

signed main() {
	int n; cin >> n;
	vector<int> a(n); rep(i, 0, n) { cin >> a[i]; }
	cout << merge_sort(a.begin(), a.end()) << endl;
	return 0;
}