#include <bits/stdc++.h>
using namespace std;

#define FOR( i, m, n )  for( int (i) = (m); (i) < (n); (i)++ )
#define REP( i, n )     FOR( i, 0, n )
#define ALL( a )        (a).begin(), (a).end()             

int main() {
	int n; cin >> n;
	int dp[50];
	dp[0] = dp[1] = 1;

	FOR( i, 2, n + 1 ) dp[i] = dp[i - 1] + dp[i - 2];

	cout << dp[n] << endl;
}
