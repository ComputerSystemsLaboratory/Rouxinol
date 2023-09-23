#include <iostream>
#include <cstring>
using namespace std;

static const int MAX_B = 4;
static const int MAX_F = 3;
static const int MAX_R = 10;

int main()
{

	int n, b, f, r, v;
	int OH[MAX_B][MAX_F][MAX_R];

	memset( OH, 0, sizeof( OH ) );

	cin >> n;
	for( int i = 0; i < n; i++ ) {

		cin >> b >> f >> r >> v;
		OH[b - 1][f - 1][r - 1] += v;

	}

	for( int i = 0; i < MAX_B; i++ ) {
		for( int j = 0; j < MAX_F; j++ ) {
			for( int k = 0; k < MAX_R; k++ ) cout << " " << OH[i][j][k];
			cout << endl;
		}
		if( i < MAX_B - 1 ) {
			for( int k = 0; k < MAX_R * 2; k++ ) cout << "#";
			cout << endl;
		}
	}

	return 0;

}