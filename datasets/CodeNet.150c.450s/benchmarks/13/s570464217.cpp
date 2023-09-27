#include "bits/stdc++.h"
using namespace std;

int main() {

	string s, p;
	int ii = 0, jj = 0;
	cin >> s;
	cin >> p;
	s += s;
	int cnt = 0;
	//cout << s << endl;
	for (int j = 0; j < s.length(); ++j) {
		if (s[j] == p[0]) {
			jj = j;
			cnt++;
			while (true) {
				if (cnt == p.length()) {
					cout << "Yes" << endl;
					return 0;
				}
				ii += 1;
				jj += 1;
				if (s[jj] != p[ii]) {
					break;
				}
				cnt++;
			}
		}
		ii = 0;
		jj = 0;
		cnt = 0;
	}
	cout << "No" << endl;
}