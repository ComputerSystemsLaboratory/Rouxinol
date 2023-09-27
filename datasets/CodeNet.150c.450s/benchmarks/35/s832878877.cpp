#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define INF (1<<30)
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	while (cin >> n, n) {
		vector<ll> a(n);
		vector<ll> Sum(n+1);
		for (int i = 0; i < n; i++) cin >> a[i];
		Sum[0] = 0;
		for (int i = 1; i <= n;i++) Sum[i] = a[i-1] + Sum[i - 1];

		ll ans = -INF;

		for (int i = 0; i < n;i++) {
			for (int j = i + 1;j <= n;j++) {
				ans = max(ans,Sum[j] - Sum[i]);
			}
		}
		cout << ans << endl;
	}
}