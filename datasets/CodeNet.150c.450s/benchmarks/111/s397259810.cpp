#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <functional>

using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int,int> PII;
typedef long long ll;
typedef unsigned long long ull;

#define REP( i, m, n ) for ( int i = (int)( m ); i < (int)( n ); i++ )
#define UREP( i, m, n ) for ( unsigned int i = (unsigned int)( m ); i < (unsigned int)( n ); i++ )

#define ITER( c ) __typeof( (c).begin() )
#define IREP( c, it ) for ( ITER(c) it = c.begin(); it != c.end(); ++it )
#define ALL( c ) (c).begin(), (c).end()
#define RALL( c ) (c).rbegin(), (c).rend()

#define PB( n ) push_back( n )
#define MP( a, b ) make_pair( ( a ), ( b ) )
#define EXIST( c, e ) ( (c).find( e ) != (c).end() )

#define fst first
#define snd second

#define DUMP( x ) cerr << #x << " = " << ( x ) << endl
#define DEBUG( x ) cerr << __FILE__ << ":" << __LINE__ << ": " << #x << " = " << ( x ) << endl

int main()
{
	int n;
	cin >> n;

	VI ex( n );

	for ( auto &num : ex )
	{
		cin >> num;
	}

	vector< vector<ull> > dp( n - 1 );

	for ( auto &line : dp )
	{
		line.resize( 21 );
	}

	dp[0][ ex[0] ] = 1;

	REP( i, 0, dp.size() - 1 )
	{
		REP( j, 0, dp[i].size() )
		{
			if ( 0 <= j - ex[i+1] )
			{
				dp[i+1][ j-ex[i+1] ] += dp[i][j];
			}

			if ( j + ex[i+1] <= 20 )
			{
				dp[i+1][ j+ex[i+1] ] += dp[i][j];
			}
		}
	}

	cout << dp.back()[ ex.back() ] << endl;

	return 0;
}