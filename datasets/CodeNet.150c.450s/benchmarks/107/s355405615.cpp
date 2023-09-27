#include <bits/stdc++.h>

int main()
{
	std::string s1, s2;
	std::cin >> s1 >> s2;
	using vi = std::vector<int>;
	std::vector<vi> dp(s1.size() + 1, (vi(s2.size() + 1)));
	for (int i{}; i <= (int)s1.size(); i++)
		dp[i][0] = i;
	for (int i{}; i <= (int)s2.size(); i++)
		dp[0][i] = i;
	for (int i{1}; i <= (int)s1.size(); i++)
		for (int j{1}; j <= (int)s2.size(); j++)
		{
			if (s1[i - 1] == s2[j - 1]) dp[i][j] = dp[i - 1][j - 1];
			else dp[i][j] = dp[i - 1][j - 1] + 1;
			dp[i][j] = std::min({dp[i][j], dp[i - 1][j] + 1, dp[i][j - 1] + 1});
		}
	printf("%d\n", dp.back().back());
	return 0;
}
