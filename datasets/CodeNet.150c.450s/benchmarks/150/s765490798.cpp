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

// ?¨???°????????? O(N+K)
// ??¶?´?: 0 <= v[i] <= v.size()
void counting_sort(vector<int> &v) {
	int n = v.size(), k = *max_element(v.begin(), v.end());
	vector<int> cnt(k + 1), tmp(v);
	cnt[0]--;
	for (int x : v)cnt[x]++;
	for (int i = 0; i < k; i++)cnt[i + 1] += cnt[i];
	for (int i = n - 1; i >= 0; i--) {
		v[cnt[tmp[i]]] = tmp[i];
		cnt[tmp[i]]--;
	}
}

signed main() {
	int n; cin >> n;
	vector<int> A(n); rep(i, 0, n) { cin >> A[i]; }
	counting_sort(A);
	cout << A[0]; rep(i, 1, A.size()) { cout << " " << A[i]; } cout << endl;
	return 0;
}