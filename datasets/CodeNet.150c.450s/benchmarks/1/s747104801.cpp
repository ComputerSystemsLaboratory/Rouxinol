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

#define MAX_N 100000
#define INF INT_MAX / 2 - 1

int main() {
	int n;
	cin >> n;
	
	int dp[MAX_N];
	fill_n(dp, MAX_N, INF);
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		*lower_bound(dp, dp + n, a) = a;
	}
	cout << lower_bound(dp, dp + n, INF) - dp << endl;
	return 0;
}