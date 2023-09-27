#include "bits/stdc++.h"
using namespace std;

#define FOR( i, m, n )	for( int (i) = (m); (i) < (n); i++ )
#define REP( i, n )		FOR( i, 0, n )
#define ALL( x )		(x).begin(), (x).end()

int main() {
	int n, q; cin >> n >> q;

	deque<pair<string, int>> p;
	int time; string name;
	REP( i, n ) {
		cin >> name >> time;
		p.emplace_back( make_pair( name, time ) );
	}

	int elapse = 0;
	pair<string, int> t;
	while( p.empty() == 0 ) {
		t = p.front(); p.pop_front();
		elapse += min( t.second, q );
		t.second -= min( t.second, q );
		if( t.second > 0 ) p.push_back( t );
		else cout << t.first << " " << elapse << endl;
	}

}
