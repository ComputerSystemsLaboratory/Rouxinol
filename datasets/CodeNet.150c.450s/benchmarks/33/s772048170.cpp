#include <iostream>
#include <algorithm>

using namespace std;

int calc ( int val, int tax )
{
	return val * ( 100 + tax ) / 100;
}

int main ( void )
{
	int x, y, s;
	while ( cin >> x >> y >> s, x | y | s ) {
		int ans = 0;
		for ( int i = 1; i < 1000; ++i ) {
			for ( int j = 1; j < 1000; ++j ) {
				if ( calc( i, x ) + calc( j, x ) == s ) {
					ans = max( ans, calc( i, y ) + calc( j, y ) );
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}