#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main( void )
{
	vector <int> cnt( 101, 0 );
	int max_value = 0;
	while ( !cin.eof() )
	{
		int n;
		cin >> n;
		if ( cin.eof() )
			break;
		cnt[n]++;
		max_value = max( cnt[n], max_value );
	}

	for ( int i = 1; i <= 100; i++ )
	{
		if ( cnt[i] == max_value )
		{
			cout << i << endl;
		}
	}

	return 0;
}