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

const int INF = INT_MAX / 4;
const double EPS = 1e-12;

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
	while ( true )
	{
		int e;
		cin >> e;

		if ( !e )
		{
			break;
		}

		ULL min = INT_MAX;

		for ( ULL y = 0; y * y <= e; y++ )
		{
			for ( ULL z = 0; z * z * z <= e; z++ )
			{
				LL x = e - z * z * z - y * y;

				if ( x < 0 )
				{
					break;
				}

				if ( x + y * y + z * z * z == e )
				{
					min = std::min( min, x + y + z );
				}
			}
		}

		cout << min << endl;
	}

	return 0;
}