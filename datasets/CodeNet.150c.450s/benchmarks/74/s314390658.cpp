#include<stdio.h>
#include<algorithm>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <iostream>
#include <functional>
#include <time.h>
using namespace std;
clock_t fi, endtime;
string n[51];
int dp[21][50002] = { 0 };
int c[21] = { 0 };
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; ++i) {
		scanf("%d", &c[i]);
	}
	for (int i = 0; i < m; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (i == 0) dp[i][j] = dp[i][j - c[i]] + 1;
			else if (j < c[i]) {
				dp[i][j] = dp[i - 1][j];
			}
			else {
				dp[i][j] = min(dp[i - 1][j], dp[i][j - c[i]] + 1);
			}
		}
	}
	printf("%d\n", dp[m - 1][n]);
}