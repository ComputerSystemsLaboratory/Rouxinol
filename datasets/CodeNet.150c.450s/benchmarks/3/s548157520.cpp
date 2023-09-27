#include <bits/stdc++.h>
using namespace std;

signed main() {
	string s;
	int n;
	cin >> s >> n;

	for (int i = 0; i < n; ++i) {
		string cmd;
		cin >> cmd;
		if (cmd == "print") {
			int a, b;
			cin >> a >> b;
			cout << s.substr(a, b - a + 1) << endl;
		}
		else if (cmd == "reverse") {
			int a, b;
			cin >> a >> b;
			reverse(s.begin() + a, s.begin() + b + 1);
		}
		else if (cmd == "replace") {
			int a, b;
			string p;
			cin >> a >> b >> p;
			s.replace(a, b - a + 1, p);
		}
	}
}

