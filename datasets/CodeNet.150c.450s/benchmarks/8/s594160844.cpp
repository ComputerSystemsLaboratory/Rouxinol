#include <bits/stdc++.h>

using namespace std;
using LL = long long;
using VI = vector<int>;
using PI = pair<int, int>;

int main() {
	int n, a, b;
	a = b = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s, t;
		cin >> s >> t;
		int ss, ts;
		ss = s.size(); ts = t.size();
		if (s == t) {
			a++; b++;
			continue;
		}
		else {
			if (s.substr(0, min(ss, ts)) == t.substr(0, min(ss, ts))) {
				if (ss > ts) a += 3;
				else b += 3;
				continue;
			}
			for (int j = 0; j < min(ss, ts); j++) {
				if (s[j] > t[j]) {
					a += 3;
					break;;
				}
				else if (s[j] < t[j]) {
					b += 3;
					break;;
				}
			}
		}
	}
	cout << a << " " << b << endl;
	return 0;
}

