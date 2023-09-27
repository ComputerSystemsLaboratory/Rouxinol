#include <iostream>
#include <vector>

using namespace std;

#define INF 1e9

int dp[50001];
int main() {
	int n, m; cin >> n >> m;

	vector<int> v(m);
	for (int i = 0; i < m; ++i) {
		cin >> v[i];
	}

	fill(&dp[0], &dp[0]+50001, INF);
	dp[0] = 0;
	for (int i = 0; i < n; ++i) {
		if (dp[i] < INF) {
			for (int j = 0; j < m; ++j) {
				if (i + v[j] <= n) {
					dp[i+v[j]] = min(dp[i+v[j]], dp[i] + 1);
				}
			}
		}
	}
	cout << dp[n] << endl;
}