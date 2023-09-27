#include <iostream>
#include <iomanip>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <bitset>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>

using namespace std;

int main() {
	int n, a, len = 1;
	cin >> n >> a;
	int dp[100000];
	fill_n(dp, 100000, INT_MAX / 2);
	dp[0] = a;
	for (int i = 1; i < n; i++) {
		cin >> a;
		if (dp[len-1] < a) {
			dp[len++] = a;
		} else {
			int j = len - 1;
			for (; j >= 0; j--)
				if (dp[j] < a)
					break;
			dp[j+1] = a;
		}
	}
	cout << len << endl;
	return 0;
}