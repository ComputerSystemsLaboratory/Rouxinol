#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int step(int s, vector<int> &dp, int n) {
	int cnt = 0;
	if (s == n) return 1;
	for (int i = 1; i <= 3; i++) {
		if (s + i <= n) {
			if (dp[s + i] == -1)
				cnt += step(s + i, dp, n);
			else
				cnt += dp[s + i];
		}
	}
	dp[s] = cnt;
	return cnt;
}

int main(void) {
	int n;
	vector<int> dp;
	vector<int> res;
	dp.resize(31, -1);
	while (cin >> n, n) {
		int cnt = 0;
		for (int i = 1; i <= 3; i++)
			cnt += step(i, dp, n);
		dp.clear();
		dp.resize(31, -1);
		res.push_back(cnt / 10 / 365 + 1);
	}
	for (int i = 0; i < res.size(); i++)
		cout << res[i] << endl;
}