#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector <int> VI;
typedef vector <VI> VVI;

#define INF ( 1 << 21 )
#define NONE -1
#define NUM 10

VVI L;
VI E;

int get_length( int start, int goal )
{
	VI V( NUM, NONE );
	VI C( NUM, NONE );

	V[start] = 1;
	C[start] = 0;

	while ( 1 )
	{
		/* Cツづーツ更ツ新 */
		for ( int i = 0; i < NUM; i++ )
		{
			if ( E[i] == NONE ) continue;
			if ( V[i] == NONE ) continue;
			for ( int j = 0; j < NUM; j++ )
			{
				if ( E[j] == NONE ) continue;
				if ( V[j] != NONE ) continue;
				if ( L[i][j] == NONE ) continue;
				
				if ( C[j] == NONE )
					C[j] = C[i] + L[i][j];
				else
					C[j] = min( C[j], C[i] + L[i][j] );
			}
		}

		/* Vツづーツ更ツ新 */
		int min_no = NONE;
		int min_value = INF;
		for ( int i = 0; i < NUM; i++ )
		{
			if ( E[i] == NONE ) continue;
			if ( V[i] != NONE ) continue;
			if ( C[i] == NONE ) continue;

			if ( C[i] < min_value )
			{
				min_no = i;
				min_value = C[i];
			}
		}

		if ( min_no == NONE ) break;
		V[min_no] = 1;
	}

	return C[goal];
}

int main( void )
{
	int n;
	while ( cin >> n && n )
	{
		L = VVI( NUM, VI( NUM, NONE ) );
		E = VI( NUM, NONE );

		for ( int i = 0; i < n; i++ )
		{
			int a, b, c;
			cin >> a >> b >> c;
			L[a][b] = L[b][a] = c;
			E[a] = E[b] = 1;
		}

		int min_no = -1;
		int min_value = INF;
		for ( int i = 0; i < NUM; i++ )
		{
			if ( E[i] == NONE ) continue;
			int sum = 0;
			for ( int j = 0; j < NUM; j++ )
			{
				if ( i == j || E[j] == NONE ) continue;
				sum += get_length( i, j );
			}
			if ( sum < min_value )
			{
				min_no = i;
				min_value = sum;
			}
		}

		cout << min_no << " " << min_value << endl;
	}
	return 0;
}