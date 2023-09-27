#include <bits/stdc++.h>
using namespace std;

#define FOR( i, m, n )  for( int (i) = (m); (i) < (n); (i)++ )
#define REP( i, n )     FOR( i, 0, n )
#define ALL( a )        (a).begin(), (a).end()             

#define F				first
#define S				second

int w, h, cnt = 0;

void solve( vector<vector<char>>& f, pair<int, int> mp ) {

	if( mp.F - 1 >= 0 && f[mp.S][mp.F - 1] == '.' ) {
		cnt++;
		f[mp.S][mp.F - 1] = '#';
		solve( f, make_pair( mp.F - 1, mp.S ) );
	}
	if( mp.F + 1 < w && f[mp.S][mp.F + 1] == '.' ) {
		f[mp.S][mp.F + 1] = '#';
		cnt++;
		solve( f, make_pair( mp.F + 1, mp.S ) );
	}
	if( mp.S - 1 >= 0 && f[mp.S - 1][mp.F] == '.' ) {
		f[mp.S - 1][mp.F] = '#';
		cnt++;
		solve( f, make_pair( mp.F, mp.S - 1 ) );
	}
	if( mp.S + 1 < h && f[mp.S + 1][mp.F] == '.' ) {
		f[mp.S + 1][mp.F] = '#';
		cnt++;
		solve( f, make_pair( mp.F, mp.S + 1 ) );
	}
}

int main() {

	while( 1 ) {
		cin >> w >> h; if( w == 0 && h == 0 ) break;
		
		pair<int, int> mp;
		vector<vector<char>> f;
		vector<char> tmp( w );
		REP( i, h ) {
			REP( j, w ) {
				cin >> tmp[j];
				if( tmp[j] == '@' ) { 
					mp.first = j;
					mp.second = i; 
					tmp[j] = '#';
					cnt++;
				}
			}
			f.push_back( tmp );
		}
		solve( f, mp );
		cout << cnt << endl;
		cnt = 0;
	}
}
