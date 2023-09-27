#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( void )
{
	int n, k;
	while ( cin >> n >> k && n > 0 && k > 0 )
	{
		vector <int> a( n+1, 0 );
		vector <int> dp( n+1, 0 );

		for ( int i = 1; i < n+1; i++ )
		{
			cin >> a[i];
		}

		for ( int i = 1; i < n+1; i++ )
			dp[i] = dp[i-1] + a[i];

		int maxv = 0;
		for ( int i = 0; i < n+1-k; i++ )
		{
			maxv = max( maxv, dp[i+k] - dp[i] );
		}

		cout << maxv << endl;

	}
}