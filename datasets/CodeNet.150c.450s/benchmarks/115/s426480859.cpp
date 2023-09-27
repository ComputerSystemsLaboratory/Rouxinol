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


static const int N = 1000;
int c[N + 1][N + 1];

int lcs(string X, string Y) {
	int maxl = 0;
	int i, j;
	int m = X.size();
	int n = Y.size();
	X = ' ' + X;
	Y = ' ' + Y;
	FOR(i, 1, m+1) {
		c[i][0] = 0;
	}
	FOR(i, 1, n+1) {
		c[0][i] = 0;
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (X[i] == Y[j]) {
				c[i][j] = c[i - 1][j - 1] + 1;
			}
			else {
				c[i][j] = max(c[i - 1][j], c[i][j - 1]);
			}
			maxl = max(c[i][j], maxl);
		}
	}
	return maxl;
}

signed main() {
	ios::sync_with_stdio(false);
	int n;
	string s1, s2;
	cin >> n;
	int i;
	rep(i, n) {
		cin >> s1 >> s2;
		cout << lcs(s1, s2) << "\n";
	}
	return 0;
}
