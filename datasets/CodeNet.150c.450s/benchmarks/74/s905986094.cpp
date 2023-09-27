#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <functional>

using namespace std;

static const int M = 20;
static const int N = 50000;
static const int INFTY = (1 << 29);

int main(){
	int n, m;
	int C[21];
	int dp[N + 1];

	cin >> n >> m;
	for (int i = 1; i <= m; ++i) cin >> C[i];
	for (int i = 0; i <= N; ++i) dp[i] = INFTY;

	dp[0] = 0;
	for (int i = 1; i <= m; ++i) {
		for (int j = 0; j + C[i] <= n; ++j) {
			dp[j + C[i]] = min(dp[j + C[i]], dp[j] + 1);
		}
	}

	cout << dp[n] << endl;
	return 0;
}