#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <climits>
#include <cfloat>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <functional>
#include <utility>
#include <numeric>

using namespace std;

typedef unsigned int UI;
typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int,int> PII;
typedef istringstream ISS;
typedef ostringstream OSS;

#define REP( i, m, n ) for ( int i = (int)( m ); i < (int)( n ); ++i )
#define EACH( v, c ) for ( auto &v : c )

#define ITER( c ) __typeof( (c).begin() )
#define IREP( c, it ) for ( ITER(c) it = c.begin(); it != c.end(); ++it )
#define ALL( c ) (c).begin(), (c).end()

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
		int w, h;
		cin >> w >> h;

		if ( !( w | h ) )
		{
			break;
		}

		int n;
		cin >> n;

		vector< vector<bool> > board( h, vector<bool>( w, false ) );
		REP( i, 0, n )
		{
			int x, y;
			cin >> x >> y;
			x--;
			y--;
			board[y][x] = true;
		}

		VVI dp( h, VI( w, 0 ) );
		dp[0][0] = 1;

		REP( i, 0, h )
		{
			REP( j, 0, w )
			{
				if ( board[i][j] )
				{
					dp[i][j] = 0;
					continue;
				}

				if ( i )
				{
					dp[i][j] += dp[ i - 1 ][j];
				}

				if ( j )
				{
					dp[i][j] += dp[i][ j - 1 ];
				}
			}
		}
		
		cout << dp.back().back() << endl;
	}

	return 0;
}