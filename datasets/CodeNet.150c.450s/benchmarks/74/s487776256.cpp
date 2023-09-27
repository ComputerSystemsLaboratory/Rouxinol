#include <iostream>
#include <limits>

using namespace std;

const int MAX = 50;

int min_change(int c[], int n, int m)
{
	int dp[m+1];

	for (int i = 1; i < m+1; i++)
		dp[i] = numeric_limits<int>::max();

	dp[0] = 0;
	for (int i = 1; i <= m; i++) {
		for (int j = 0; j < n; j++) {
			if (c[j] <= i) {
				int t = dp[i-c[j]];

				if (t != numeric_limits<int>::max() && 1+t < dp[i])
					dp[i] = 1+t;
			}
		}
	}

	return dp[m];
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int m, n;
	int c[MAX];

	cin >> m >> n;
	for (int i = 0; i < n; i++)
		cin >> c[i];

	cout << min_change(c, n, m) << endl;

	return 0;
}