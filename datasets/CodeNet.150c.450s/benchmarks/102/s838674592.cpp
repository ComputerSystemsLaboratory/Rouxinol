#include <iostream>
#include <queue>
#include <complex>

using namespace std;

typedef complex<int> P;

int main() {
	int W, H;
	while ( cin >> W >> H, W || H ) {
		int m[20][20], sx, sy;
		for (int y = 0; y < H; ++y) {
			string str; cin >> str;
			for (int x = 0; x < W; ++x) {
				m[y][x] = str[x] == '#' ? 0 : 1;
				if (str[x] == '@') {
					sx = x, sy = y;
				}
			}
		}
		int ans = 0;
		queue<P> Q; Q.push( P(sx, sy) );
		while ( !Q.empty() ) {
			P p = Q.front(); Q.pop();
			int y = p.imag(), x = p.real();
			if (y < 0 || y >= H || x < 0 || x >= W) continue;
			if ( m[y][x] == 0 ) continue;
			m[y][x] = 0;
			++ans;
			
			Q.push( P(x+1, y) );
			Q.push( P(x-1, y) );
			Q.push( P(x, y-1) );
			Q.push( P(x, y+1) );
		}
		cout << ans << endl;
	}
}