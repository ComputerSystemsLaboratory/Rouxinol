#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<set>
#include<map>
#include<iterator>
#include<stack>
#include<queue>
#include<utility>
#include<functional>
#include<bitset>
#include<numeric>
#include<cstring>
#include<tuple>
using namespace std;

int d;
long long ans = 0;
vector< int > c( 30 ), t( 400 ), last( 30, 0 );
vector< vector< int > > arr( 400, vector< int >( 30, 0 ) );

int main( void )
{
	ios :: sync_with_stdio( 0 );
	cin.tie( 0 );
	
	cin >> d;
	for( int i = 1; i <= 26; ++i )
	{
		cin >> c[ i ];
	}
	for( int i = 1; i <= d; ++i )
	{
		for( int j = 1; j <= 26; ++j )
		{
			cin >> arr[ i ][ j ];
		}
	}
	for( int i = 1; i <= d; ++i )
	{
		cin >> t[ i ];
	}
	for( int i = 1; i <= d; ++i )
	{
		last[ t[ i ] ] = i;
		ans += arr[ i ][ t[ i ] ];
		for( int j = 1; j <= 26; ++j )
		{
			ans -= c[ j ] * ( i - last[ j ] );
		}
		cout << ans << "\n";	
	}
	return 0;
}
