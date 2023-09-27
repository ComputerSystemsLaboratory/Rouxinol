#include <bits/stdc++.h>
using namespace std;

#define FOR( i, m, n )  for( int (i) = (m); (i) < (n); (i)++ )
#define REP( i, n )     FOR( i, 0, n )
#define ALL( a )        (a).begin(), (a).end()             

int main() {
	int n;

	while( 1 ) {
		cin >> n;
		if( n == 0 ) break;
		vector<int> s( n );
		int sum = 0;
		REP( i, n ) {
			cin >> s[i];
			sum += s[i];
		}
		sort( ALL( s ) );
		sum -= s[0];
		sum -= s[n - 1];

		cout << sum / ( n - 2 ) << endl;
	}

}
