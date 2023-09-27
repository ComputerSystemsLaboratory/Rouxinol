#include <bits/stdc++.h>
using namespace std;

signed main() {
	string s, p, tmp;
	cin >> s >> p;

	for (int i = 0; i < s.size(); ++i) {
		tmp = s.substr(i) + s.substr(0, i);
		if (tmp.find(p) != string::npos) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;
}
		
