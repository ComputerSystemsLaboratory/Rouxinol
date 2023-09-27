#include <iostream>
#include <vector>
using namespace std;

vector < vector <int> > V;

int h_max;
int w_max;

void solve( int h, int w )
{
	V[h][w] = 0;
	for ( int i = -1; i < 2; i++ )
	{
		for ( int j = -1; j < 2; j++ )
		{
			if ( i == 0 && j == 0 )
				continue;

			if ( h+i >= 0 && h+i < h_max )
			{
				if ( w+j >= 0 && w+j < w_max )
				{
					if ( V[h+i][w+j] == 1 )
					{
						solve( h+i, w+j );
					}
				}
			}

		}
	}
}

int main ( void )
{
	while (1)
	{
		int w, h;
		cin >> w >> h;
		if ( w == 0 && h == 0 )
			break;

		h_max = h;
		w_max = w;
		V = vector < vector <int> > ( h_max, vector <int>(w_max,0) );

		for ( int i = 0; i < h; i++ )
		{
			for ( int j = 0; j < w; j++ )
			{
				int info;
				cin >> info;
				V[i][j] = info;
			}
		}

		int kotae = 0;
		for ( int i = 0; i < h; i++ )
		{
			for ( int j = 0; j < w; j++ )
			{
				if ( V[i][j] == 1 )
				{
					kotae++;
					solve( i, j );
				}
			}
		}

		cout << kotae << endl;

	}
	return 0;
}