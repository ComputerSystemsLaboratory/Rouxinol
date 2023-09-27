#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

const int INF = 1 << 30;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	vector<int> dp(n + 1, INF);
	rep(i, n) {
		auto itr = lower_bound(dp.begin(), dp.end(), a[i]);
		*itr = a[i];
	}
	cout << lower_bound(dp.begin(), dp.end(), INF) - dp.begin() << endl;
	return 0;
}
