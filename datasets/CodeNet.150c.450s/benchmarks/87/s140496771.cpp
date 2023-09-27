#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;

const int W = 5;

bool isClear ( VVI& m, int h, int l, int r )
{
	bool hit = true;
	for ( int i = l; i < r; ++i ) {
		hit &= m[h][l] == m[h][i] && m[h][i] != 0;
	}
	return hit;
}
int doClear ( VVI& m, int h, int l, int r )
{
	int sum = 0;
	for ( int i = l; i < r; ++i ) {
		sum += m[h][i];
		m[h][i] = 0;
	}
	return sum;
}

int clear ( VVI& m, int h )
{
	int sum = 0;
	for ( int y = 0; y < h; ++y ) {
		for ( int x = 0; x < W - 2; ++x ) {
			for ( int w = W; w > x + 2; --w ) {
				if ( isClear( m, y, x, w ) ) {
					sum += doClear( m, y, x, w );
				}
			}
		}
	}
	return sum;
}

bool doDrop ( VVI& m, int h )
{
	bool hit = false;
	for ( int y = h - 1; y > 0; --y ) {
		for ( int x = 0; x < W; ++x ) {
			if ( m[y][x] == 0 && m[y - 1][x] != 0 ) {
				hit = true;
				m[y][x] = m[y - 1][x];
				m[y - 1][x] = 0;
			}
		}
	}
	return hit;
}

void drop ( VVI& m, int h )
{
	while( doDrop( m, h ) );
}

int main ( void )
{
	int h;
	while ( cin >> h, h ) {
		VVI m( h, VI( W ) );
		for ( int i = 0; i < h; ++i ) {
			for ( int j = 0; j < 5; ++j ) {
				cin >> m[i][j];
			}
		}

		int ans = 0, t;
		while ( ( t = clear( m, h ) ) != 0 ) {
			ans += t;
			drop( m, h );
		}
		cout << ans << endl;
	}
	return 0;
}