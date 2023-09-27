#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main( void )
{
	// Dynamic Programming
	// dp[àz] = Å¬

	const int coins[6] = { 500, 100, 50, 10, 5, 1 };

	int n;
	while ( cin >> n && n )
	{
		vector <int> dp( (1000-n)+1, 0 );
		for ( int i = 0; i < 6; i++ ) dp[coins[i]] = 1;

		for ( int i = 0; i < (1000-n)+1; i++ )
		{
			if ( dp[i] > 0 )
			{
				for ( int j = 0; j < 6; j++ )
				{
					if ( i + coins[j] < (1000-n)+1 )
					{
						if ( dp[i+coins[j]] == 0 ) dp[i+coins[j]] = dp[i] + 1;
						else dp[i+coins[j]] = min( dp[i+coins[j]], dp[i] + 1 );
					}
				}
			}
		}

		cout << dp[(1000-n)] << endl;
	}

	return 0;
}