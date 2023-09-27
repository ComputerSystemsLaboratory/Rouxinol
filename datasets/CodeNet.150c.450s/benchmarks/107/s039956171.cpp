#include<stdio.h>
#include<algorithm>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <iostream>
#include <string>
#include <time.h>
#include <functional>
using namespace std;

int dp[1001][1001] = { 0 };
int n, m;
string st1, st2;
int main(void) {
	cin >> st1;
	cin >> st2;
	n = st1.size();
	m = st2.size();
	dp[0][0] = 0;
	for (int i = 0; i <= n; ++i) dp[i][0] = i;
	for (int j = 0; j <= m; ++j) dp[0][j] = j;

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			if (st1[i - 1] == st2[j - 1]) dp[i][j] = dp[i - 1][j - 1];
			else {
				int	min = dp[i][j - 1] + 1;
				if (min > dp[i - 1][j] + 1) { min = dp[i - 1][j] + 1; }
				if (min > dp[i - 1][j - 1] + 1) { min = dp[i - 1][j - 1] + 1; }
				dp[i][j] = min;
			}
		}
	}
	printf("%d\n", dp[n][m]);
}