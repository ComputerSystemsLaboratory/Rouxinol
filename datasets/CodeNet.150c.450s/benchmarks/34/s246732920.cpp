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

int dp[31] = { 1,1,2,4 };

int a(int n) {
	if (dp[n])return dp[n];
	dp[n] += dp[n - 1] ? dp[n - 1] : a(n - 1);
	dp[n] += dp[n - 2] ? dp[n - 2] : a(n - 2);
	dp[n] += dp[n - 3] ? dp[n - 3] : a(n - 3);
	return dp[n];
}

int main() {
	for (int n; cin >> n&&n;)
		cout << ceil((double)a(n) / (365 * 10)) << endl;
	return 0;
}