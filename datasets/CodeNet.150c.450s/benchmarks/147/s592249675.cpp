#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[12345];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (ll i = 1; i <= 100; ++i) {
		for (ll j = i; j <= 100; ++j) {
			for (ll k = j; k <= 100; ++k) {
				ll cur = i*i+j*j+k*k+i*j+k*j+k*i;
				if (cur > n) break;
				else {
					if (i == j & j == k) ++a[cur];
					else if (j == k || i == j) a[cur] += 3;
					else a[cur] += 6;
				}
			}
		}
	}
	for (int i = 1; i <= n; ++i) {
		cout << a[i] << "\n";
	}
	return 0;
}