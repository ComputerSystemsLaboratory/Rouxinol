#define _USE_MATH_DEFINES
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

int main() {
	long long dp[101][21] = {};

	int n; cin >> n;

	int a; cin >> a;
	dp[1][a] = 1;

	for (int i = 2; i < n; i++) {
		int a; cin >> a;
		for (int j = 0; j <= 20; j++) {
			if (j + a >= 0 && j + a <= 20)dp[i][j + a] += dp[i - 1][j];
			if (j - a >= 0 && j - a <= 20)dp[i][j - a] += dp[i - 1][j];
		}
	}

	cin >> a;
	cout << dp[n - 1][a] << endl;
	return 0;
}