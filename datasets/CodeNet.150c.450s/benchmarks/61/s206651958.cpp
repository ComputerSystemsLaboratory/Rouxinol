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

int solve( int n, int a, int b, int c, int x )
{
	VI ys( n );
	FOR( y, ys )
	{
		cin >> y;
	}

	int res = 0;
	REP( i, 0, n )
	{
		while ( ys[i] != x )
		{
			if ( 10000 < res )
			{
				return -1;
			}
			res++;
			x = ( a * x + b ) % c;
		}

		if ( i + 1 < n )
		{
			res++;
			x = ( a * x + b ) % c;
		}
	}

	return res <= 10000 ? res : -1;
}

int main()
{
	cin.tie( 0 );
	ios::sync_with_stdio( false );

	while ( true )
	{
		int n, a, b, c, x;
		cin >> n >> a >> b >> c >> x;

		if ( !( n | a | b | c | x ) )
		{
			break;
		}

		cout << solve( n, a, b, c, x ) << endl;
	}

	return 0;
}