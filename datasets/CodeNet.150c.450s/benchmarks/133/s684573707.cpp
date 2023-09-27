#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using i64 = int64_t;
#define rep(i, j, n) for(int i = (j); i < (n); ++i)

int d, c[26], s[365][26], t[365], last[26];

int main() {
	cin.tie(0); ios_base::sync_with_stdio(false);

	cin >> d;
	rep(i, 0, 26) cin >> c[i];
	rep(i, 0, d) rep(j, 0, 26) cin >> s[i][j];
	rep(i, 0, d) cin >> t[i], --t[i];

	int S = 0;
	rep(i, 0, d) {
		S += s[i][t[i]];
		last[t[i]] = i + 1;
		rep(j, 0, 26)
			S -= c[j] * (i + 1 - last[j]);
		cout << S << '\n';
	}
	return 0;
}