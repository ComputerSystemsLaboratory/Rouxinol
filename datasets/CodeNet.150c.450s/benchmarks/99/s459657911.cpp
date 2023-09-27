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

const string chars = "mcxi";
const int units[] = { 1000, 100, 10, 1 };

int parse( string str )
{
	REP( i, 0, str.size() )
	{
		if ( isalpha( str[i] ) && ( !i || isalpha( str[ i - 1 ] ) ) )
		{
			str.insert( i, "1" );
		}
	}

	int res = 0;
	for ( int i = 0; i < str.size(); i += 2 )
	{
		res += ( str[i] - '0' ) * units[ find( ALL( chars ), str[ i + 1 ] ) - chars.begin() ];
	}
	return res;
}

string enc( int n )
{
	string res;
	REP( i, 0, 4 )
	{
		int tmp = n / units[i];
		if ( tmp == 0 )
		{
			continue;
		}
		if ( tmp != 1 )
		{
			res += tmp + '0';
		}
		res += chars[i];
		n %= units[i];
	}
	return res;
}

int main()
{
	cin.tie( 0 );
	ios::sync_with_stdio( false );

	int n;
	cin >> n;

	REP( i, 0, n )
	{
		string s, t;
		cin >> s >> t;

		cout << enc( parse( s ) + parse( t ) ) << endl;
	}

	return 0;
}