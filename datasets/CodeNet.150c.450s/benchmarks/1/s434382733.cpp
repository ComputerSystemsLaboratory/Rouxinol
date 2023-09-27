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
	int n;
	int a[100000];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int dp[100000];
	fill_n(dp, 100000, LLONG_MAX / 2);
	dp[0] = a[0];
	int len = 1;
	for (int i = 1; i < n; i++)
		if (dp[len-1] < a[i])
			dp[len++] = a[i];
		else {
			int j = len-1;
			for (; j >= 0; j--)
				if (dp[j] < a[i])
					break;
			dp[j+1] = a[i];
		}
	cout << len << endl;
	return 0;
}