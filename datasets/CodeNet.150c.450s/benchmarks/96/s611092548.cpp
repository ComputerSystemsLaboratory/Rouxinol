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

// 文字列 split / デリミタに含まれるいずれかの文字で分割
vector<string> split( const string &str, const string &delim = " " )
{
	int start = 0, pos;
	vector<string> result;

	while ( ( pos = str.find_first_of( delim, start ) ) != string::npos )
	{
		result.push_back( str.substr( start, pos - start ) );
		start = pos + 1;
	}

	return result;
}

const VS BUTTONS = {
	"",
	".,!? ",
	"abc",
	"def",
	"ghi",
	"jkl",
	"mno",
	"pqrs",
	"tuv",
	"wxyz"
};

string solve( string line )
{
	VS chars( split( line, "0" ) );
	string res;

	REP( i, 0, chars.size() )
	{
		if ( !chars[i].size() )
		{
			continue;
		}

		const int pushed_button = chars[i][0] - '0';
		const int pushed_number = chars[i].size() - 1;
		res += BUTTONS[ pushed_button ][ pushed_number % BUTTONS[ pushed_button ].size() ];
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
		string line;
		cin >> line;
		cout << solve( line ) << endl;
	}

	return 0;
}