#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int N, W;
	cin >> N >> W;
	vector<vector<int>> dp(N+1, vector<int>(W+1, 0));
	//用意していた配列の大きさが足りずセグフォになってた...
	for (int i = 1; i <= N; i++) {
		int v, w;
		cin >> v >> w;
		// Wまでとしていた為にセグフォ
		// Wと最大値だがどう出すか
		for (int j = 0; j <= W; j++) {
			if (j - w < 0) {
				dp[i][j] = dp[i-1][j];
			} else {
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-w] + v);
			}
		}
	}
	cout << dp[N][W] << endl;
}

