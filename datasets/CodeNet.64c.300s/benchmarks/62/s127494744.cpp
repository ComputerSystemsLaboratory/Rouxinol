#include <iostream>
#include <cstring>
using namespace std;

static const int MAX_N = 100;

int main()
{

	int n, m;
	int a[MAX_N][MAX_N], b[MAX_N], c[MAX_N];

	memset( c, 0, sizeof( c ) );

	cin >> n >> m;
	for( int i = 0; i < n; i++ ) {
		for( int j = 0; j < m; j++ ) cin >> a[i][j];
	}
	for( int i = 0; i < m; i++ ) cin >> b[i];

	for( int i = 0; i < n; i++ ) {
		for( int j = 0; j < m; j++ ) c[i] += ( a[i][j] * b[j] );
	}

	for( int i = 0; i < n; i++ ) cout << c[i] << endl;

	return 0;

}