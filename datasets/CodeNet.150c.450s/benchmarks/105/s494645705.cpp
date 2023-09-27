#include <bits/stdc++.h>
using namespace std;

int solve () {
	int n;
	cin >> n;
	vector<long long> a(n);
	for (auto &e : a) cin >> e;
	string s;
	cin >> s;
	
	vector<long long> b;
	for (int i = n; i--> 0;) {
		long long e = a[i];
		for (const auto &c : b) e = min(e, e^c);
		if (e > 0) {
			if (s[i] == '1') return 1;
			b.push_back(e);
		}
	}
	return 0;
}

int main() {
	int t;
	cin >> t;
	while (t--) cout << solve() << '\n';
	return 0;
}