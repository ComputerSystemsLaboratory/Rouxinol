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
	int N, W;
	cin >> N >> W;

	int dp[N+1][W+1];
	memset(dp, 0, sizeof(dp));

	FOR(i, 1, N+1) {
		pair<int, int> pii;
		cin >> pii.first >> pii.second;
		FOR(j, 1, W+1) {
			if(j >= pii.second)
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-pii.second] + pii.first);
			else
				dp[i][j] = dp[i-1][j];
		}
	}
/*
	REP(i, N+1) {
		REP(j, W+1)
			cout << dp[i][j] << ' ';
		cout << endl;
	}
*/
	cout << dp[N][W] << endl;
	return 0;
}