#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#define INF (1<<29)
int dp[10000][10000] = { {INF} };
int main()
{
	string s1, s2; cin >> s1 >> s2;
	int s1sz = s1.size(), s2sz = s2.size();
	for (int i = 0; i <= s1sz; ++i) {
		for (int j = 0; j <= s2sz; ++j) {
			if (i == 0) {
				dp[0][j] = j;
				continue;
			}
			else if (j == 0) {
				dp[i][0] = i;
				continue;
			}
			else {
				dp[i][j] = min(dp[i - 1][j - 1] + (s1[i - 1] != s2[j - 1]), min(dp[i - 1][j] + 1, dp[i][j - 1] + 1));
			}
		}
	}
	cout << dp[s1sz][s2sz] << endl;
}