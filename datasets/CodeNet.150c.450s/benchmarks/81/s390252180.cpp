#include<iostream>
#include<vector>
#include<cmath>
#include<queue>
#include<utility>
#include<algorithm>
using namespace std;
#define INF 1000000
#define N 10


int main() {
	int n;
	while (1) {
		cin >> n;
		if (n==0)break;
		int dp[N][N];
		//?????????
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				dp[i][j] = INF;
			}
		}

		int a, b, c;
		while (n--) {
			cin >> a >> b >> c;
			dp[a][b] = c;
			dp[b][a] = c;
		}

		for (int k = 0; k < N; k++) {
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					dp[i][j] = min(dp[i][j],dp[i][k] + dp[k][j]);
				}
			}
		}

		int sum[N];
		for (int i = 0; i < N; i++) {
			sum[i] = 0;
			for (int j = 0; j < N; j++) {
				if (i != j && dp[i][j] != INF) {
					sum[i] += dp[i][j];
				}
				
			}
		}

		int res = 0;
		for (int i = 1; i < N; i++) {

			if (sum[i] < sum[res] && sum[i] != 0) {
				res = i;
			}
		}

		cout << res << ' ' << sum[res] << endl;
	}


	return 0;
}