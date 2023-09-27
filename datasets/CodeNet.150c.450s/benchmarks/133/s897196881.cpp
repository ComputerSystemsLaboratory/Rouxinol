#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 2147483647;
// const ll INF = 9223372036854775807;
// const ll MOD = 1e9 + 7;

int c[26];
int s[365][26];
int t[365];
int last[26];

int main() {
	int D;
	cin >> D;

	for (int i=0; i<26; i++) {
		cin >> c[i];
		last[i] = -1;
	}

	for (int d=0; d<D; d++) {
		for (int i=0; i<26; i++) {
			cin >> s[d][i];
		}
	}

	for (int d=0; d<D; d++) {
		cin >> t[d];
		t[d]--;
	}

	int score = 0;

	for (int d=0; d<D; d++) {
		for (int i=0; i<26; i++) {
			if (i == t[d]) {
				score += s[d][i];
				last[i] = d;
			} else {
				score -= c[i] * (d - last[i]);
			}
		}

		cout << score << endl;
	}

	return 0;
}