#include <iostream>
#include <vector>
using namespace std;
int main( void )
{
	int N; // óÎÌÂ
	while ( cin >> N && N != 0 )
	{
		// óÎÌÀWÝè
		vector < vector <int> > G( 20+1, vector <int>( 20+1, 0 ) );
		for ( int i = 0; i < N; i++ )
		{
			int Xi, Yi;
			cin >> Xi >> Yi;
			G[Yi][Xi] = 1;
		}

		// {bgÌì
		int M;
		cin >> M;

		int x = 10;
		int y = 10;

		int cnt = 0;
		for ( int i = 0; i < M; i++ )
		{
			string operation;	// ûü
			int step;			// Ú®Ê
			cin >> operation >> step;

			// NCECSCW
			if ( operation == "N" )
			{
				for ( int j = 0; j < step; j++ )
				{
					y++;
					if ( G[y][x] )
					{
						G[y][x] = 0;
						cnt ++;
					}
				}
			}

			else if ( operation == "E" )
			{
				for ( int j = 0; j < step; j++ )
				{
					x++;
					if ( G[y][x] )
					{
						G[y][x] = 0;
						cnt ++;
					}
				}
			}

			else if ( operation == "S" )
			{
				for ( int j = 0; j < step; j++ )
				{
					y--;
					if ( G[y][x] )
					{
						G[y][x] = 0;
						cnt ++;
					}
				}
			}

			else if ( operation == "W" )
			{
				for ( int j = 0; j < step; j++ )
				{
					x--;
					if ( G[y][x] )
					{
						G[y][x] = 0;
						cnt ++;
					}
				}
			}

		}

		if ( cnt == N )
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}

	}

	return 0;
}