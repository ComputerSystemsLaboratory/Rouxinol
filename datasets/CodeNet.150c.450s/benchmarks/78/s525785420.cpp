#include <bits/stdc++.h>
using namespace std;

#define FOR( i, m, n )  for( int (i) = (m); (i) < (n); (i)++ )
#define REP( i, n )     FOR( i, 0, n )
#define ALL( a )        (a).begin(), (a).end()             

const int MAX = 1000000;

int	dp[MAX] = {};
int oddp[MAX];

int main() {
	REP( i, MAX ) dp[i] = oddp[i] = i;

	int i = 2, x = 4;
	while( x < MAX ) {
		for( int j = 0; j + x < MAX; j++ ) {
			dp[j + x] = min( dp[j + x], dp[j] + 1 );
			if( x % 2 == 1 ) {
				oddp[j + x] = min( oddp[j + x], oddp[j] + 1 );
			}

//			if( j + x > ( i + 8 ) * ( i + 9 ) * ( i + 10 ) / 2 ) break;
		}
		i++;
		x = i * ( i + 1 ) * ( i + 2 ) / 6;
	}


	int n;
	while( 1 ) {
		cin >> n; if( n == 0 ) break;
		cout << dp[n] << " " << oddp[n] << endl;
	}

	
}
