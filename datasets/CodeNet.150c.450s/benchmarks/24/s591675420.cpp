#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cfloat>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <numeric>
#include <iterator>

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int,int> PII;
typedef istringstream ISS;
typedef ostringstream OSS;

#define REP( i, m, n ) for ( int i = (int)( m ); i < (int)( n ); ++i )
#define FOR( v, c ) for ( auto &v : c )

#define EACH( it, c ) for ( auto it = c.begin(); it != c.end(); ++it )
#define ALL( c ) (c).begin(), (c).end()
#define DRANGE( c, p ) (c).begin(), (c).begin() + p, (c).end()

#define PB( n ) push_back( n )
#define MP( a, b ) make_pair( ( a ), ( b ) )
#define EXIST( c, e ) ( (c).find( e ) != (c).end() )

#define fst first
#define snd second

#define DUMP( x ) cerr << #x << " = " << ( x ) << endl
#define DEBUG( x ) cerr << __FILE__ << ":" << __LINE__ << ": " << #x << " = " << ( x ) << endl

int main()
{
	cin.tie( 0 );
	ios::sync_with_stdio( false );

	while ( true )
	{
		int n, m;
		cin >> n >> m;

		if ( !( n | m ) )
		{
			break;
		}

		vector<PII> secs( n );
		FOR( s, secs )
		{
			cin >> s.snd >> s.fst;
		}
		sort( ALL( secs ), greater<PII>() );

		REP( i, 0, n )
		{
			int minus = min( secs[i].snd, m );
			secs[i].snd -= minus;
			m -= minus;
		}
		
		LL res = 0;
		REP( i, 0, n )
		{
			res += secs[i].fst * secs[i].snd;
		}

		cout << res << endl;
	}

	return 0;
}