#include <bits/stdc++.h>
using namespace std;

int main() {
	int D;
	cin >> D;

	vector<int> c(26);
	vector<vector<int>> s(D, vector<int>(26));
	vector<int> t(D);
	vector<vector<int>> last(D, vector<int>(26, 0));
	vector<int> sat(D);

	for (int i = 0; i < 26; i++) {
		cin >> c[i];
	}

	for (int i = 0; i < D; i++) {
		for (int j = 0; j < 26; j++) {
			cin >> s[i][j];
		}
	}

	for (int i = 0; i < D; i++) {
		cin >> t[i];
	}

	for (int i = 0; i < D; i++) {
		for (int j = 0; j < 26; j++) {
			if (i == 0) {
				last[i][j] = 0;
			} else {
				last[i][j] = last[i - 1][j];
			}
		}
		last[i][t[i] - 1] = i + 1;
		if (i == 0) {
			sat[i] = s[i][t[i] - 1];
		} else {
			sat[i] = s[i][t[i] - 1] + sat[i - 1];
		}
		int satisfaction = 0;
		for (int j = 0; j < 26; j++) {
			satisfaction += c[j] * (i + 1 - last[i][j]);
		}
		sat[i] -= satisfaction;
	}

	for (int i = 0; i < D; i++) {
		cout << sat[i] << endl;
	}

	return 0;
}