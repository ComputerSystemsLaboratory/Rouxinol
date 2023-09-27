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

const int dy[] = { 1, 0, -1, 0 };
const int dx[] = { 0, 1, 0, -1 };

int direction( char c )
{
	static const string d = "NESW";
	return d.find( c );
}

int main()
{
	cin.tie( 0 );
	ios::sync_with_stdio( false );

	while ( true )
	{
		int n;
		cin >> n;

		if ( !n )
		{
			break;
		}

		VI xs( n ), ys( n );
		REP( i, 0, n )
		{
			cin >> xs[i] >> ys[i];
		}

		VVI arrived( 21, VI( 21, 0 ) );
		arrived[ 10 ][ 10 ] = 1;
		int y, x;
		y = x = 10;

		int m;
		cin >> m;
		REP( i, 0, m )
		{
			char d;
			int l;
			cin >> d >> l;

			int dir = direction( d );

			REP( j, 0, l )
			{
				y += dy[ dir ];
				x += dx[ dir ];
				arrived[y][x] = 1;
			}
		}

		int res = 0;
		REP( i, 0, n )
		{
			res += arrived[ ys[i] ][ xs[i] ];
		}
		cout << ( res == n ? "Yes" : "No" ) << endl;
	}

	return 0;
}