#include <iostream>
#include <queue>

struct P {
	int x, y;
	P() {}
	P(int x, int y) : x(x), y(y) {}
};

using namespace std;

typedef long long ll;

int main() {
	int W, H;
	while ( cin >> W >> H, W || H ) {
		int N; cin >> N;
		ll dp[16][16] = {0};
		bool X[16][16] = {0};
		for (int i = 0; i < N; ++i) {
			int x, y; cin >> x >> y;
			--x, --y;
			X[y][x] = true;
		}

		dp[0][0] = 1;
		bool gone[16][16] = {0};
		queue<P> Q; Q.push( P(0, 0) );
		while ( !Q.empty() ) {
			P p = Q.front(); Q.pop();
			if ( gone[p.y][p.x] ) continue;
			gone[p.y][p.x] = true;

			if ( p.y+1 < H && !X[p.y+1][p.x] ) dp[p.y+1][p.x] += dp[p.y][p.x], Q.push( P(p.x, p.y+1) );
			if ( p.x+1 < W && !X[p.y][p.x+1] ) dp[p.y][p.x+1] += dp[p.y][p.x], Q.push( P(p.x+1, p.y) );
		}
		cout << dp[H-1][W-1] << endl;
	}
}