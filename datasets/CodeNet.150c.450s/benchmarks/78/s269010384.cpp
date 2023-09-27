#define _USE_MATH_DEFINES
#include <algorithm>
#include <cstdio>
#include <functional>
#include <iostream>
#include <cfloat>
#include <climits>
#include <cstring>
#include <cmath>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <time.h>
#include <vector>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<ll, int> ll_i;
typedef pair<double, int> d_i;
typedef pair<ll, ll> ll_ll;
typedef pair<double, double> d_d;
struct edge { int u, v; ll w; };

ll MOD = 1000000007;
ll _MOD = 1000000009;
double EPS = 1e-10;

int main() {
	vector<int> dp(1000000, INT_MAX / 2);
	dp[0] = 0;
	vector<int> _dp = dp;
	for (int i = 1; i <= 200; i++) {
		int x = i * (i + 1) * (i + 2) / 6;
		for (int j = x; j < 1000000; j++)
			dp[j] = min(dp[j], dp[j - x] + 1);
		if (x % 2 == 1)
			for (int j = x; j < 1000000; j++)
				_dp[j] = min(_dp[j], _dp[j - x] + 1);
	}
	for (;;) {
		int n; cin >> n;
		if (n == 0) break;
		cout << dp[n] << ' ' << _dp[n] << endl;
	}
}