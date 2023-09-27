#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <cstring>
#include <cctype>
#include <sstream>
#include <set>
#include <map>
#include <queue>
#include <complex>
using namespace std;
#define REP(i,n) for(int i = 0; i < (int)n; i++)
#define FOR(i,a,b) for(int i = a; i < (int)b; i++)
const int INF = 1<<28;

int main() {
	string s1, s2; cin >> s1 >> s2;
	int dp[1001][1001] = {};
	REP(i, s1.size()+1) dp[i][0] = i;
	REP(i, s2.size()+1) dp[0][i] = i;

	FOR(i, 1, s1.size()+1) FOR(j, 1, s2.size()+1) {
		int cost = !(s1[i-1] == s2[j-1]);
		dp[i][j] = min(dp[i][j-1] + 1, min(dp[i-1][j] + 1, dp[i-1][j-1] + cost));
	}
	cout << dp[s1.size()][s2.size()] << endl;
	return 0;
}