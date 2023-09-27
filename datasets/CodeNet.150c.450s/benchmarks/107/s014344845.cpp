#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <string>
#include <tuple>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <map>
//#include "toollib.h"
#pragma warning (disable:4018)
#define INT_MAX 2147483647

using namespace std;

int judge_equivalent(char a, char b) {
	if (a == b) return 0;
	else return 1;
}

int main() {
	string  a, b;
	cin >> a >> b;
	vector<vector<int>> dp(a.length() + 1, vector<int>(b.length() + 1, 0));
	for (int i = 0; i <= a.length(); i++) dp[i][0] = i;
	for (int j = 1; j <= b.length(); j++) dp[0][j] = j;
	for (int i = 1; i <= a.length(); i++) {
		for (int j = 1; j <= b.length(); j++) {
			int p = dp[i - 1][j - 1] + judge_equivalent(a[i - 1], b[j - 1]);
			int q = dp[i - 1][j] + 1;
			int r = dp[i][j - 1] + 1;
			dp[i][j] = min({ p, q, r });
		}
	}

	cout << dp[a.length()][b.length()] << endl;
	return 0;
}