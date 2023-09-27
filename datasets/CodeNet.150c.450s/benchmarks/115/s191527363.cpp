#include <iostream>
#include <string>
using namespace std;
const static int N = 1000;
int dp[N + 1][N + 1];

int lcs(string X, string Y) {
	int max = 0;
	int m = X.size();
	int n  = Y.size();
	X = ' ' + X;
	Y = ' ' + Y;

	for (int i = 1; i <= m; i++)
		dp[i][0] = 0;
	for (int i = 1; i <= n; i++)
		dp[0][i] = 0;

	for (int i = 1; i <= m; i++) {
		for ( int j = 1; j <= n; j++) {
			if (X[i] == Y[j])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else {
				if (dp[i - 1][j] > dp[i][j - 1])
					dp[i][j] = dp[i - 1][j];
				else
					dp[i][j] = dp[i][j - 1];
			}

			max = (max < dp[i][j]) ? dp[i][j] : max;
		}
	}

	return max;
}

int main(int argc, char const *argv[]) {
	int n;
	cin >> n;


	for (int i = 0; i < n; i++) {
		string X, Y;
		cin >> X >> Y;

		cout << lcs(X, Y) << endl;
	}

	return 0;
}