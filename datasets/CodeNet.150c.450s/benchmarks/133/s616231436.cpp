#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;

const int INF = 1 << 30;

int c[26];
int t[365];
int s[365][26];
int last[26];

int main() {
	int d;
	cin >> d;
	for (int i = 0; i < 26; i++)
		cin >> c[i];
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < 26; j++) {
			cin >> s[i][j];
		}
	}
	for (int i = 0; i < d; i++) {
		cin >> t[i];
		t[i]--;
	}

	int sum = 0;
	for (int i = 0; i < d; i++) {
		sum += s[i][t[i]];
		last[t[i]] = i + 1;
		for (int j = 0; j < 26; j++) {
			sum -= c[j] * (i + 1 - last[j]);
		}
		cout << sum << endl;
	}
}