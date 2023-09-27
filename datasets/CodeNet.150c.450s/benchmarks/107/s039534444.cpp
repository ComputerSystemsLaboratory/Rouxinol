#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string S, T;
int dp[1000 + 10][1000 + 10];
int INF = 1145141919;

int main() {
	cin >> S >> T;
	
	for (int i = 0; i <= S.size(); i++)for (int j = 0; j <= T.size(); j++)dp[i][j] = INF;
	dp[0][0] = 0;
	for (int i = 1; i <= S.size(); i++) {
		dp[i][0] = i;
	}
	for (int i = 1; i <= T.size(); i++) {
		dp[0][i] = i;
	}

	for (int i = 1; i <= S.size(); i++) {
		for (int j = 1; j <= T.size(); j++) {
			int c = 0;
			if (S[i - 1] != T[j - 1])c = 1;
			dp[i][j] = min(dp[i - 1][j] + 1, min(dp[i][j - 1] + 1, dp[i - 1][j - 1] + c));
		}
	}
	cout << dp[S.size()][T.size()] << endl;
	return 0;
}
