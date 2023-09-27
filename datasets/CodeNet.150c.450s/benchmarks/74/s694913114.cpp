#include <iostream>

using namespace std;

int n, m;
int c[20];
int dp[50000];

int main(void)
{
	cin >> n;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> c[i];
	}
	for (int i = 1; i <= n; i++) {
		int mini = i;
		for (int j = 0; j < m; j++) {
			if (i >= c[j]) {
				if (mini > dp[i - c[j]] + 1) {
					mini = dp[i - c[j]] + 1;
				}
			}
		}
		dp[i] = mini;
	}
	cout << dp[n] << endl;
	return 0;
}