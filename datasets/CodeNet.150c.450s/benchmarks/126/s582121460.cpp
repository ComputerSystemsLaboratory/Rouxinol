#include <iostream>
#include <vector>
#include <set>
#include <utility>
using namespace std;

int main( void )
{
	int a, b;
	while ( cin >> a >> b && a > 0 && b > 0 )
	{
		vector < vector <int> > dp( b+1, vector <int>( a+1, 0 ) );
		dp[1][1] = 1;

		int n;
		cin >> n;

		set < pair<int,int> > C;

		for ( int i = 0; i < n; i++ )
		{
			int Xi, Yi;
			cin >> Xi >> Yi;

			C.insert( make_pair( Xi, Yi ) );
		}

		for ( int i = 1; i < b+1; i++ )
		{
			for ( int j = 1; j < a+1; j++ )
			{
				if ( i+1 < b+1 && C.find( make_pair( j, i+1 ) ) == C.end() )
				{
					dp[i+1][j] += dp[i][j];
				}
				if ( j+1 < a+1 && C.find( make_pair( j+1, i ) ) == C.end() )
				{
					dp[i][j+1] += dp[i][j];
				}
			}
		}

		cout << dp[b][a] << endl;

	}
	return 0;
}