#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#define REP(i, n) for(int i = 0;i < n;i++)
#define ll long long
#define INF 114514
using namespace std;




int main(){
	while (1) {
		int dp[99][99] = { 0 };
		int a, b, n, i, j;
		cin >> a >> b;
		if (a == 0 && b == 0) return 0;
		cin >> n;
		for (i = 0; i < n; i++) {
			int x, y;
			cin >> x >> y;
			dp[y][x] = INF;
		}
		dp[1][1] = 1;
		for (i = 1; i <= b; i++) {
			for (j = 1; j <= a; j++) {
				if (i == 1 && j == 1) continue;
				if (dp[i][j] == INF) dp[i][j] = 0;
				else dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
				//cout << dp[i][j] << endl;
			}
		}
		cout << dp[b][a] << endl;
	}
	return 0;
}