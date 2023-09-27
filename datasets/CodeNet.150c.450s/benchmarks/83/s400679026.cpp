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

int main() {
	struct item {
		int value;
		int weight;
		bool operator<(const item & another) const {
			if (weight != another.weight) return weight < another.weight;
			else return value < another.value;
		}
	};
	int N, W;
	cin >> N >> W;
	vector<item> items(N);
	for (int i = 0; i < N; i++) {
		cin >> items[i].value >> items[i].weight;
	}
	sort(items.begin(), items.end());
	vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= W; j++) {
			if (j - items[i - 1].weight >= 0) dp[i][j] = max(dp[i - 1][j - items[i - 1].weight] + items[i - 1].value, dp[i - 1][j]);
			else dp[i][j] = dp[i - 1][j];
		}
	}
	cout << dp[N][W] << endl;
	return 0;
}