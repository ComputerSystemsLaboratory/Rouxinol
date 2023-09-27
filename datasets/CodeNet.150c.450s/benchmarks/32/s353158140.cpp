#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define REP(i,x,n) for(int i = x; i < n; i++)

void solve(int n, int l, int r) {
	vector<int> a(n);
	REP(i,0,n) cin >> a[i];
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	int mx = 0, ans = 0;
	REP(i, l, r + 1) {
		if (mx <= a[i - 1] - a[i]) {
			mx = a[i-1]-a[i];
			ans = i;
		}
	}
	cout << ans << endl;
}

signed main(){
	int n, l, r;
	while (cin >> n >> l >> r,n) {
		solve(n,l,r);
	}
	return 0;
}

