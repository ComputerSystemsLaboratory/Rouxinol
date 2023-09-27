#include<iostream>
#include<algorithm>
#include<string>
#define INF (1ULL<<20)
using namespace std;

int dp[1001][1001];

int main()
{
	fill(dp[0], dp[1000],INF);
	string s1, s2;
	cin >> s1 >> s2;
	int s1size = s1.size(), s2size = s2.size();
	for (int i = 0; i < s1size + 1; ++i) {
		for (int j = 0; j < s2size + 1; ++j) {
			if (j == 0) {
				dp[i][0] = i;
				continue;
			}
			if (i == 0) {
				dp[0][j] = j;
				continue;
			}
			dp[i][j] = min(min(dp[i - 1][j - 1] + (s1[i - 1] != s2[j - 1]), dp[i][j - 1] + 1), dp[i - 1][j] + 1);
		}
	}
	cout << dp[s1size][s2size] << endl;
}