#include "bits/stdc++.h"

using namespace std;

using ll = long long;
using ld = long double;

const double PI = 3.1415926535897932384626433832795;

const int dx[] = { 0, 1, 0, -1 };
const int dy[] = { -1, 0, 1, 0 };

int gcd(int x, int y) { return y ? gcd(y, x % y) : abs(x); }
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : abs(x); }
int lcm(int x, int y) { return x / gcd(x, y) * y; }
ll lcm(ll x, ll y) { return x / gcd(x, y) * y; }

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll n;
	cin >> n;

	vector<ll> ans;
	ll v = n;
	for (ll i = 2; i * i <= n; i++) {
		while (v % i == 0) {
			ans.push_back(i);
			v /= i;
		}
	}
	if (v != 1L) {
		ans.push_back(v);
	}

	cout << n << ":";
	for (auto vv : ans) {
		cout << " " << vv;
	}
	cout << endl;
	return 0;
}

