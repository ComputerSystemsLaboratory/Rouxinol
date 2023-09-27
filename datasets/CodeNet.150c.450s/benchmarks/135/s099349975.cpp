#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m;
	while (cin >> n >> m) {
		if (n == 0 && m == 0) {
			break;
		}
		int h[1510];
		int w[1510];
		for (int i = 0; i < n; i++) {
			cin >> h[i];
		}
		for (int j = 0; j < m; j++) {
			cin >> w[j];
		}
		int sq = 0;
		vector< vector<int> > dp(n, vector<int>(n, 0));
		vector< vector<int> > dp2(m, vector<int>(m, 0));
		vector<int> retu(1500010, 0);
		dp[0][0] = h[0];
		dp2[0][0] = w[0];
		retu[h[0]]++;
		for (int i = 1; i < n; i++) {
			dp[0][i] = dp[0][i-1] + h[i];
			retu[dp[0][i]]++;
		}
		for (int i = 1; i < n; i++) {
			for (int j = i; j < n; j++) {
				dp[i][j] = dp[i][j-1] + h[j];
				retu[dp[i][j]]++;
			}
		}
		if (retu[w[0]] > 0) {
			sq += retu[w[0]];
		}
		for (int i = 1; i < m; i++) {
			dp2[0][i] = dp2[0][i-1] + w[i];
			if (retu[dp2[0][i]] > 0) {
				sq += retu[dp2[0][i]];
			}
		}
		for (int i = 1; i < m; i++) {
			for (int j = i; j < m; j++) {
				dp2[i][j] = dp2[i][j-1] + w[j];
				if (retu[dp2[i][j]] > 0) {
					sq += retu[dp2[i][j]];
				}
			}
		}
		cout << sq << endl;
	}
	return 0;
}