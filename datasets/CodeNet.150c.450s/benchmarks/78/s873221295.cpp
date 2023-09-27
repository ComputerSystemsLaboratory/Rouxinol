#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int n;

int dp[2][1000010], adp[2][1000010];
int INF = 1e9;
int add[200], oadd[200];

void solve() {
	for (int i=0; i<2; i++) {
		fill(dp[i], dp[i]+1000010, INF);
		fill(adp[i], adp[i]+1000010, INF);
	}
	
	dp[0][0] = 0;
	for (int i=0; i<200; i++) {
		int nw = i%2, nx = (i+1)%2;
		for (int j=0; j<=1000000; j++) {
			if (add[i] <= j) {
				dp[nx][j] = min(dp[nw][j], dp[nx][j-add[i]] + 1);
			} else {
				dp[nx][j] = dp[nw][j];
			}
		}
	}
	
	adp[0][0] = 0;
	for (int i=0; i<200; i++) {
		int nw = i % 2, nx = (i+1)%2;
		
		for (int j=0; j<=1000000; j++) {
			if (oadd[i] <= j) {
				adp[nx][j] = min(adp[nw][j], adp[nx][j-oadd[i]] + 1);
			} else {
				adp[nx][j] = adp[nw][j];
			}
		}
	}
}

void qer() {	
	int ans1 = INF, ans2 = INF;
	for (int i=0; i<2; i++) {
		ans1 = min(ans1, dp[i][n]);
		ans2 = min(ans2, adp[i][n]);
	}
	cout << ans1 << " " << ans2 << endl;
}

int main() {
	int p = 0;
	for (int i=0; i<200; i++) {
		add[i] = i * (i+1) * (i+2) / 6;
		if (add[i] % 2 == 1) oadd[p++] = add[i];
	}
	solve();
	
	while (1) {
		cin >> n; if (n==0) break;
		qer();
	}
	
	return 0;
}