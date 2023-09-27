#include <iostream>
using namespace std;

int main()
{
	int n = 0 , m = 0 , l = 0 , boxa[256][256] = {} , boxb[256][256] = {} ;
	long long boxc[256][256] = {} ;
	cin >> n >> m >> l ;
	for ( int i = 0 ; i < n ; i++ )
	{
		for ( int j = 0 ; j < m ; j++ )
		{
			cin >> boxa[i][j] ;
		}
	}
	for ( int k = 0 ; k < m ; k++ )
	{
		for ( int h = 0 ; h < l ; h++ )
		{
			cin >> boxb[k][h] ;
		}
	}
	for ( int i2 = 0 ; i2 < n ; i2++ )
	{
		for ( int j2 = 0 ; j2 < l ; j2++ )
		{
			for ( int k2 = 0 ; k2 < m ; k2++ )
			{
				boxc[i2][j2] += boxa[i2][k2] * boxb[k2][j2] ;
			}
		}
	}
	for ( int i5 = 0 ; i5 < n ; i5++ )
	{
		for ( int i7 = 0 ; i7 < l ; i7++ )
		{
			cout << boxc[i5][i7] ;
			if ( i7+1 != l ) cout << " " ;
		}
		cout << endl ;
	}
	return 0;
}

