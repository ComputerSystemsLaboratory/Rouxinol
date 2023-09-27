#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
	int n;
	cin >> n;
	vector<int> r(n), c(n);
	for (int i=0;i<n;i++) {
		cin >> r[i];
		cin >> c[i];
	}

	vector<vector<int>> dp(n, vector<int>(n, INF));
	for (int i=0;i<n;i++) dp[i][i] = 0;

	for (int w=1;w<n;w++) {
		for (int j=0;j+w<n;j++) {
			for (int k=0;k<w;k++) {
				dp[j][j+w] = min(dp[j][j+w], dp[j][j+k]+dp[j+k+1][j+w]+r[j]*r[j+k+1]*c[j+w]);
			}
		}
	}

	cout << dp[0][n-1] << endl;
}
