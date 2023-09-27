#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	string s;
	cin >> n;
	vector<pair<string, int>> a = {{"AC", 0}, {"WA", 0}, {"TLE", 0}, {"RE", 0}, };
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < 4; j++) {
			if (a[j].first == s) {
				a[j].second++;
				break;
			}
		}
	}
	for (int i = 0; i < 4; i++) {
		cout << a[i].first << " x " << a[i].second << '\n';
	}
	return 0;
}
