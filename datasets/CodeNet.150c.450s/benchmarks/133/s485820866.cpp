#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i, a, b) for (int i = (a); i <= (b); ++i)
using namespace std;
using ll=long long;
using P=pair<int,int>;

int main() {
	int d;
	cin >> d;
	// Read in C (degree of losing satisfaction per contest)
	vector<int> c(26);
	rep(i, 26) {
		cin >> c[i];
	}
	// Read in S_ij (Increase in satisfaction per day per contest)
	vector<vector<int>> s(d, vector<int>(26));
	rep(i, d) {
		rep(j, 26) {
			cin >> s[i][j];
		}
	}
	// Read in t (contest held each day)
	// Read in last (last day in which a contest was held)
	vector<int> t (d);
	vector<vector<int>> last (d, vector<int> (26, 0));
	rep(i, d) {
		cin >> t[i];
		last[i][t[i] - 1] = i + 1;
	}
	rep2(i, 1, d - 1) {
		rep(j, 26) {
			last[i][j] = last[i][j] + ((last[i][j] == 0) ?last[i - 1][j] : 0);
		}
	}

	vector<int> v(d);
	int score = 0;
	for (int i = 0; i < d; i++) {
		score += s[i][t[i] - 1];
		rep(j, 26) {
			score -= c[j] * (i + 1 - last[i][j]);
		}
		v[i] = score;
	}
	rep(i, d) {
		cout << v[i] << "\n";
	}
	return 0;
}
