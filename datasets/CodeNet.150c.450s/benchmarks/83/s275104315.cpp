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
using namespace std;
int dp[101][10001] = { 0 };
int c[101][2] = { 0 };//c[i][0]..v, c[i][1]...w 
int n, w;
int main() {
	scanf("%d %d", &n, &w);
	for (int i = 0; i < n; ++i) {
		scanf("%d %d", &c[i + 1][0], &c[i + 1][1]);
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= w; ++j) {
			if (j < c[i][1]) {
				dp[i][j] = dp[i - 1][j];
			}
			else {
				dp[i][j] = max(dp[i - 1][j - c[i][1]] + c[i][0], dp[i - 1][j]);
			}
		}
	}
	printf("%d\n", dp[n][w]);
}