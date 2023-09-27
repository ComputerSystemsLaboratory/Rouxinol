#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 1<<20;
void solve() {
	int n;
	cin >> n;
	vector<ll> a(n);
	for(auto &i : a) cin >> i;
	string s;
	cin >> s;
	vector<ll> basis;
	for(int i = n; i--;) {
		ll x = a[i];
		for(auto j : basis) x = min(x, x^j);
		if(s[i] == '0')	{
			if(x) basis.push_back(x);
		} else if(x) {
			cout << "1\n";
			return;
		}
	}
	cout << "0\n";
}
int main() {
	cin.tie(0)->sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--) solve();
}
