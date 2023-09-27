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
#define FOR( v, c ) for ( auto &v : c )

#define ITER( c ) __typeof( (c).begin() )
#define EACH( it, c ) for ( ITER(c) it = c.begin(); it != c.end(); ++it )
#define ALL( c ) (c).begin(), (c).end()

#define PB( n ) push_back( n )
#define MP( a, b ) make_pair( ( a ), ( b ) )
#define EXIST( c, e ) ( (c).find( e ) != (c).end() )

#define fst first
#define snd second

#define DUMP( x ) cerr << #x << " = " << ( x ) << endl
#define DEBUG( x ) cerr << __FILE__ << ":" << __LINE__ << ": " << #x << " = " << ( x ) << endl

vector<int> eratosthenes( int n )
{
	vector<bool> nums( n + 1, true );
	nums[0] = nums[1] = false;
	vector<int> res;

	for ( int i = 0; i < nums.size(); i++ )
	{
		if ( !nums[i] )
		{
			continue;
		}

		res.push_back( i );
		for ( int j = 1; i * j < nums.size(); j++ )
		{
			nums[ i * j ] = false;
		}
	}

	return res;
}

int main()
{
	cin.tie( 0 );
	ios::sync_with_stdio( false );

	VI primes = eratosthenes( 1000000 );

	while ( true )
	{
		int a, d, n;
		cin >> a >> d >> n;

		if ( !( a | d | n ) )
		{
			break;
		}

		int res, count = 0;

		for ( int s = a; count < n; s += d )
		{
			if ( binary_search( ALL( primes ), s ) )
			{
				res = s;
				count++;
			}
		}

		cout << res << endl;
	}

	return 0;
}