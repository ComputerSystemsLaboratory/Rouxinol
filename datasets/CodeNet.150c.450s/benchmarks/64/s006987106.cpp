#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <array>
#include <queue>
#include <deque>
#include <set>
#include <list>
#include <map>
#include <stack>
#include <utility>
#include <algorithm>
#include <numeric>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <cstring>
#include <climits>
#include <bitset>
#include <random>
#include <functional>
#include <sstream>
#include <iomanip>

using namespace std;

#define rep(i, n) for(int i=0; i<(n); i++)
#define FOR(i, m, n) for(int i=(m);i<(n);i++)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define SORT(x) sort((x).begin(),(x).end())
#define REVE(x) reverse((x).begin(),(x).end())
#define mp make_pair
#define pb push_back

typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<bool> VB;
typedef vector<vector<int>> VVI;
typedef pair<int, int> PII;
typedef long long LL;

int main() {
	int n; cin >> n;
	VI a(n); rep(i, n)cin >> a[i];

	int q; cin >> q;
	rep(loop, q) {
		int m; cin >> m;

		vector<VB> dp(29, VB(2999));
		dp[0][0] = true;
		rep(i, n) {
			rep(j, m + 1) {
				if (j >= a[i])if (dp[i][j - a[i]])dp[i + 1][j] = true;
				if (dp[i][j])dp[i + 1][j] = true;
			}
		}

		puts(dp[n][m] ? "yes" : "no");
	}
}
