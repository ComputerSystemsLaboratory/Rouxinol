#include <bits/stdc++.h>
using namespace std;

#define FOR( i, m, n )  for( int (i) = (m); (i) < (n); (i)++ )
#define REP( i, n )     FOR( i, 0, n )
#define ALL( a )        (a).begin(), (a).end()             

const int MAX = 1500001;

int hn[MAX] = {};
int wn[MAX] = {};

int main() {
	int n, m;

	while( 1 ) {
		cin >> n >> m; if( n == 0 && m == 0 ) break;
		vector<int> h( n );
		vector<int> w( m );

		REP( i, n ) {
			cin >> h[i];
			hn[h[i]]++;
		}
		REP( i, m ) {
			cin >> w[i];
			wn[w[i]]++;
		}


		REP( i, n ) {
			int htmp = h[i];
			FOR( j, i + 1, n ) {
				htmp += h[j];
				hn[htmp]++;
			}
		}
		
		REP( i, m ) {
			int wtmp = w[i];
			FOR( j, i + 1, m ) {
				wtmp += w[j];
				wn[wtmp]++;
			}
		}
		
		int cnt = 0;
		REP( i, MAX ) {
			if( hn[i] && wn[i] ) {
				cnt += hn[i] * wn[i];
			}
		}

		cout << cnt << endl;

		memset( hn, 0, sizeof( hn ) );
		memset( wn, 0, sizeof( wn ) );
	}
}
