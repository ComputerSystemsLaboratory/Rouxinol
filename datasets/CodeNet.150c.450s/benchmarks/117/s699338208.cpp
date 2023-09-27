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

int cnt = 0;

template <typename It>
void merge(It l, It m, It r) {
	vector<int> tmp(r - l);
	It it = tmp.begin(), it1 = l, it2 = m;
	while (it1 != m && it2 != r) {
		cnt++;
		if (*it1 < *it2)
			*it++ = *it1++;
		else
			*it++ = *it2++;
	}
	while (it1 != m) { *it++ = *it1++; cnt++; }
	while (it2 != r) { *it++ = *it2++; cnt++; }
	copy(tmp.begin(), tmp.end(), l);
};

template <typename It>
void merge_sort(It l, It r) {
	if (r - l <= 1)return;
	It m = l + (r - l) / 2;
	merge_sort(l, m);
	merge_sort(m, r);
	merge(l, m, r);
}

signed main() {
	int N; cin >> N;
	vector<int> v(N); rep(i, 0, N) { cin >> v[i]; }
	merge_sort(v.begin(), v.end());
	cout << v[0]; rep(i, 1, v.size()) { cout << " " << v[i]; } cout << endl;
	cout << cnt << endl;
	return 0;
}