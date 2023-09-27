#include <bits/stdc++.h>
using namespace std;

bool stringcmp(string s, string t) {
	int N = min(s.size(), t.size());
	for (int i = 0; i < N; ++i) {
		if (s[i] == t[i]) {
			continue;
		}
		return s[i] < t[i];
	}
	return (s.size() < t.size());
}

signed main() {
	int n;
	cin >> n;
	int taro = 0, hana = 0;
	for (int i = 0; i < n; ++i) {
		string s, t;
		cin >> s >> t;
		if (s == t) {
			taro++; hana++;
		}
		else if (stringcmp(s, t)) {
			hana += 3;
		}
		else {
			taro += 3;
		}
	}
	cout << taro << ' ' << hana << endl;
}

