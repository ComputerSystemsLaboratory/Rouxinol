#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector <int> VI;
typedef vector <VI> VVI;
int main( void )
{
	int r, c;
	while ( cin >> r >> c && r && c )
	{
		VVI O( r, VI( c ) );
		for ( int i = 0; i < r; i++ ) for ( int j = 0; j < c; j++ ) cin >> O[i][j];

		int answer = 0;
		VVI backup = O;
		for ( int i = 0; i < 1 << r; i++ )
		{
			O = backup;
			for ( int j = 0; j < r; j++ )
				if ( i & 1 << j ) for ( int k = 0; k < c; k++ ) O[j][k] = !O[j][k];
			int sum = 0;
			for ( int j = 0; j < c; j++ )
			{
				int colsum = 0;
				for ( int k = 0; k < r; k++ )
				{
					colsum += O[k][j];
				}
				if ( colsum > (r/2) ) sum += r - colsum;
				else sum += colsum;
			}

			answer = max( answer, r*c - sum );
		}

		cout << answer << endl;
	}
	return 0;
}