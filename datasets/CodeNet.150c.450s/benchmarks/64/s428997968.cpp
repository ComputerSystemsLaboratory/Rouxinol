#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>

using namespace std;
using ll = long long int;
#define rep(i,n) for(int i = 0; i < n; i++)
#define FOR(i, a, b)  for(int i = (a); i < (b) ; i++)
#define pb push_back
#define SORT(v,n) sort(v, v+n)
#define ALL(x) (x).begin(),(x).end()
#define debug(x) cerr << #x << ": " << x << '\n'
#define elif else if
#define itn ll
#define int ll
const int INF = 100100100;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
///                →,↑,←,↓,↗,↖,↙,↘
int dx[8] = { 1, 0, -1, 0, 1, -1, -1, 1 };
int dy[8] = { 0, 1, 0, -1, 1, 1, -1, -1 };

int A[30], n;
struct DP {
	bool isSloved = false;
	bool res = false;
};

DP dp[25][2100];

bool slove(int i, int m) {
	if (dp[i][m].isSloved)
		return dp[i][m].res;

	if (m == 0) {
		dp[i][m].res = true;
		dp[i][m].isSloved = true;
	}
	else if (i >= n) {
		dp[i][m].res = false;
		dp[i][m].isSloved = true;
	}
	else if (slove(i + 1, m)) {
		dp[i][m].res = true;
		dp[i][m].isSloved = true;
	}
	else if (slove(i + 1, m - A[i])) {
		dp[i][m].res = true;
		dp[i][m].isSloved = true;
	}
	else {
		dp[i][m].res = false;
		dp[i][m].isSloved = true;
		return false;
	}
	return dp[i][m].res;
}

signed main() {
	ios::sync_with_stdio(false);
	int q, i, M;
	cin >> n;
	for (i = 0; i < n; i++) cin >> A[i];
	cin >> q;
	for (i = 0; i < q; i++) {
		cin >> M;
		if (slove(0, M)) cout << "yes" << endl;
		else cout << "no" << endl;
	}

	return 0;
}
