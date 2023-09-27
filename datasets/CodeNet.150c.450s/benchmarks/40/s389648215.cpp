#include <bits/stdc++.h>
using namespace std;

signed main() {
	vector<int> s(6);
	for (int i = 0; i < 6; ++i) {
		cin >> s[i];
	}

	string com;
	cin >> com;
	char tmp;

	for (int i = 0; i < com.size(); ++i) {
		if (com[i] == 'N') {
			tmp = s[5];
			s[5] = s[4];
			s[4] = s[0];
			s[0] = s[1];
			s[1] = tmp;
		}
		else if (com[i] == 'E') {
			tmp = s[5];
			s[5] = s[2];
			s[2] = s[0];
			s[0] = s[3];
			s[3] = tmp;
		}
		else if (com[i] == 'W') {
			tmp = s[5];
			s[5] = s[3];
			s[3] = s[0];
			s[0] = s[2];
			s[2] = tmp;
		}
		else if (com[i] == 'S') {
			tmp = s[5];
			s[5] = s[1];
			s[1] = s[0];
			s[0] = s[4];
			s[4] = tmp;
		}
	}
	cout << s[0] << endl;
}

