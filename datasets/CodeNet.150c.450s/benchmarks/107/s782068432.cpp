#include <cstdio>
#include <algorithm>
#include <string>
#include <iostream>

#define inf 1001001001
using namespace std;
int n, c;
size_t s, t, dp[1001][1001];
string a, b;
int main() {
	cin >> a >> b;
	s = a.length(), t = b.length();
	for (size_t i = 1; i <= s; ++i) dp[i][0] = i;
	for (size_t i = 1; i <= t; ++i) dp[0][i] = i;
	for (size_t i = 0; i < s; ++i) {
		for (size_t j = 0; j < t; ++j) {
			if (a[i]==b[j]) c = 0; else c = 1;
			dp[i+1][j+1] = min(dp[i][j+1]+1, dp[i+1][j]+1);
			dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j]+c);
		}
	}
	printf("%ld\n", dp[s][t]);
}