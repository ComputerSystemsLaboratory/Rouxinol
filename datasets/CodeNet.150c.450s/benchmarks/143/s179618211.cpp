#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

	int n; cin >> n;
	const int p = 100005;
	vector<ll> num(p, 0);
	ll sum = 0;
	for (int i = 0; i < n; i++) {
		ll a; cin >> a;
		num[a]++;
		sum += a;
	}
	int q; cin >> q;
	for (int i = 0; i < q; i++) {
		ll b, c; cin >> b >> c;
		sum -= num[b] * b;
		sum += num[b] * c;
		cout << sum << endl;
		num[c] += num[b];
		num[b] = 0;
	}
    return 0;
}