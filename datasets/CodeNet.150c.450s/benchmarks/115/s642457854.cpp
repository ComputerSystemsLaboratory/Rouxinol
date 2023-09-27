#include <bits/stdc++.h>
using namespace std;

#define FOR( i, m, n )  for( int (i) = (m); (i) < (n); (i)++ )
#define REP( i, n )     FOR( i, 0, n )
#define ALL( a )        (a).begin(), (a).end()             

int	dp[1001][1001] = {};

int main() {
	int n; cin >> n;

	int maxl;

	string s1, s2;
	REP( i, n ) {
		cin >> s1 >> s2;
		s1 = ' ' + s1;
		s2 = ' ' + s2;
		maxl = 0;
		memset( dp, 0, sizeof( int ) );
		FOR( j, 1, s1.size() ) {
			FOR( k, 1, s2.size() ) {
				if( s1[j] == s2[k] ) {
					dp[j][k] = dp[j - 1][k - 1] + 1;
				} else {
					dp[j][k] = max( dp[j - 1][k], dp[j][k - 1] );
				}
				maxl = max( dp[j][k], maxl );
			}
		}

		cout << maxl << endl;
	}
}
