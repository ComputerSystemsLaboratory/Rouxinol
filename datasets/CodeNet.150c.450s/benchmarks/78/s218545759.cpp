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

	const int MAXN = 1000000;

	VI dpAll( MAXN, INT_MAX ), dpOdd( MAXN, INT_MAX );
	dpAll[0] = dpOdd[0] = 0;
	REP( i, 0, MAXN )
	{
		REP( j, 1, 1000001 )
		{
			const int s = j * ( j + 1 ) * ( j + 2 ) / 6;
			if ( MAXN <= i + s )
			{
				break;
			}

			dpAll[ i + s ] = min( dpAll[ i + s ], dpAll[i] + 1 );
			if ( s % 2 )
			{
				dpOdd[ i + s ] = min( dpOdd[ i + s ], dpOdd[i] + 1 );
			}
		}
	}

	while ( true )
	{
		int n;
		cin >> n;

		if ( !n )
		{
			break;
		}

		cout << dpAll[n] << ' ' << dpOdd[n] << endl;
	}

	return 0;
}