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
		int h, w;
		cin >> h >> w;

		if ( !( h | w ) )
		{
			break;
		}

		VI hs( h ), ws( w );
		FOR( a, hs )
		{
			cin >> a;
		}
		FOR( a, ws )
		{
			cin >> a;
		}

		VI widths;
		{
			VI csum( 1, 0 );
			partial_sum( ALL( ws ), back_inserter( csum ) );

			REP( i, 0, w )
			{
				REP( j, i + 1, w + 1 )
				{
					widths.PB( csum[j] - csum[i] ); 
				}
			}
		}
		sort( ALL( widths ) );

		VI csum( 1, 0 );
		partial_sum( ALL( hs ), back_inserter( csum ) );

		int res = 0;
		REP( i, 0, h )
		{
			REP( j, i + 1, h + 1 )
			{
				auto pos = equal_range( ALL( widths ), csum[j] - csum[i] );
				res += distance( pos.fst, pos.snd );
			}
		}

		cout << res << endl;
	}

	return 0;
}