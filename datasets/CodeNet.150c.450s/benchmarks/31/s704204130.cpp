#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for (int i = (int)(a); i < (int)(b); ++i)
#define rep(i, n) REP (i, 0, n)

int main() {
	int n; cin >> n;
	int a[n]; rep(i, n) cin >> a[i];
	int maxv = a[1] - a[0];   // 最大利益を入れる
	int minv = a[0];          // a[i]の最小値を入れる

	REP(i, 1, n) {
		maxv = max(maxv, a[i] - minv);
		minv = min(minv, a[i]);
	}
	cout << maxv << endl;
}