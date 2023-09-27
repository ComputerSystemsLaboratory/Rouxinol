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

signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int N, K; cin >> N >> K;
	vector<int> w(N); rep(i, 0, N) { cin >> w[i]; }
	auto f = [&](int P) {
		int x(0), sum(0), cnt(0);
		while (x < N) {
			while (x < N&&sum+w[x] <= P) {
				sum += w[x++];
			}
			cnt++; sum = 0;
			if (cnt == K + 1)return false;
		}
		return true;
	};
	int r = 100000 * 10000, l = 0;
	// (l,r]
	while (r - l > 1) {
		int mid = (l + r) / 2;
		if (f(mid))r = mid;
		else l = mid;
	}
	cout << r << endl;
	return 0;
}