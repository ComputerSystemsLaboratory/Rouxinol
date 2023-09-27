#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define chmax(a, b) a = max(a, b);
#define chmin(a, b) a = min(a, b);
using namespace std;
using ll = long long;
using P = pair<int,int>;

int d, c[26];
int s[365][26];

int t[365];

int tot_penalty;
void data_input() {
	scanf("%d", &d);
	rep(i, 26) scanf("%d", &c[i]);
	rep(i, d) rep(j, 26) scanf("%d", &s[i][j]);
	rep(i, 26) tot_penalty += c[i];
}

int calc_score() {
	int last[26] = {0};
	int rv = 0;
	int penalty = 0;
	rep(i, d) {
		int date = i + 1;
		int choice = t[i];
		penalty += tot_penalty - c[choice] * (date - last[choice]);
		last[choice] = date;
		rv += s[i][choice] - penalty;
		cout << rv << endl;
	}
	return rv;
}

int main() {
	data_input();

	rep(i, d) {
		cin >> t[i];
		t[i]--;
	}

	// cout << calc_score() << endl;
	calc_score();
}
