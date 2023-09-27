#include <bits/stdc++.h>

using namespace std;
using LL = long long;
using VI = vector<int>;
using PI = pair<int, int>;

int main() {
	string s;
	cin >> s;
	string p = "print";
	string rev = "reverse";
	string rep = "replace";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string q;
		int a, b;
		cin >> q;
		if (q == p) {
			cin >> a >> b;
			cout << s.substr(a, b - a + 1) << endl;;
		}
		else if (q == rev) {
			cin >> a >> b;
			for (int j = 0; j < (b - a + 1) / 2; j++) {
				swap(s[a + j], s[b - j]);
			}
		}
		else if (q == rep) {
			string t;
			cin >> a >> b >> t;
			for (int j = 0; j < b - a + 1; j++) {
				s[a + j] = t[j];
			}
		}
	}
	return 0;
}

