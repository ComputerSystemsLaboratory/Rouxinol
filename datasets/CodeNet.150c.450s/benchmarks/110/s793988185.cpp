
#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

struct state{
	int y, x, d;
};

vector< string > field;
int x, y, d = 0;

void bfs(int H, int W, int n ) {

	vector< vector< int > > visited( H, vector< int >( W, 0 ) );

	int gx, gy;
	for( int i = 0; i < H; i++ ) {
		for( int j = 0; j < W; j++ ) {
			if( field[i][j] == n + '0' ) {
				gy = i;
				gx = j;
			}
		}
	}

	queue< state > q;
	state s = { y, x, 0 };
	visited[y][x] = 1;
	q.push( s );
	while( !q.empty() ) {
		
		state p = q.front();
		q.pop();
		if( p.x == gx && p.y == gy ) {
			y = gy;
			x = gx;
			d += p.d;
			break;
		}
		for( int i = 0; i < 4; i++ ) {
			int d[4][2] = { { 1, 0 }, { -1, 0 }, {0, 1}, { 0, -1 } };
			state np;
			np.x = p.x + d[i][0];
			np.y = p.y + d[i][1];
			np.d = p.d + 1;
			if( np.x >= 0 && np.x < W && np.y >= 0 && np.y < H ) {
				if( !visited[np.y][np.x] ) {
					if( field[np.y][np.x] != 'X' ) {
						visited[np.y][np.x] = 1;
						q.push( np );
					}
				}
			}
		}
	}


}

int solve() {
	//幅優先探索で解ける？
	int H, W, N;
	cin >> H >> W >> N;
	field.resize(H);
	for( int i = 0; i < H; i++ )
		cin >> field[i];
	for( int i = 0; i < H; i++ ) {
		for( int j = 0; j < W; j++ ) {
			if( field[i][j] == 'S' ) {
				x = j;
				y = i;
				field[i][j] = '.';
			}
		}
	}
	for( int i = 1; i <= N; i++ ) {
		bfs( H, W, i );
	}
	cout << d << endl;
	return 0;
}
     
int main(void){
	while(1){
		solve();
		break;
	}
    return 0;
}