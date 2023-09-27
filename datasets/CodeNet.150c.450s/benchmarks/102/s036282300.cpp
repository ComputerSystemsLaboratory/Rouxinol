#include <iostream>
#include <queue>
using namespace std;

static const int WHITE = 0;
static const int ABLE  = 1;
static const int N = 20;

char a[N][N];
int judge[N][N];

void search(int x, int y, int w, int h) {
	queue<int> qx, qy;
	qx.push(x);
	qy.push(y);
	judge[y][x] = ABLE;
	
	int tx, ty;
	while (!qx.empty() && !qy.empty()) {
		tx = qx.front();
		qx.pop();
		ty = qy.front();
		qy.pop();
		
		if (ty + 1 < h && a[ty+1][tx] != '#' && judge[ty+1][tx] == WHITE) {
			judge[ty+1][tx] = ABLE;
			qx.push(tx);
			qy.push(ty+1);
		}
		if (ty - 1 >= 0 && a[ty-1][tx] != '#' && judge[ty-1][tx] == WHITE) {
			judge[ty-1][tx] = ABLE;
			qx.push(tx);
			qy.push(ty-1);
		}
		if (tx + 1 < w && a[ty][tx+1] != '#' && judge[ty][tx+1] == WHITE) {
			judge[ty][tx+1] = ABLE;
			qx.push(tx+1);
			qy.push(ty);
		}
		if (tx - 1 >= 0 && a[ty][tx-1] != '#' && judge[ty][tx-1] == WHITE) {
			judge[ty][tx-1] = ABLE;
			qx.push(tx-1);
			qy.push(ty);
		}
	}
}

int main() {
	while (1) {
		int w, h;
		cin >> w >> h;
		if (h == 0) break;
		
		int startx, starty;
		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
				cin >> a[i][j];
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (a[i][j] == '.' || a[i][j] == '#') judge[i][j] = WHITE;
				else {
					startx = j;
					starty = i;
					judge[i][j] = WHITE;
				}
			}
		}
		
		search(startx, starty, w, h);
		
		int count = 0;
		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
				if (judge[i][j] == ABLE) count++;
			
		cout << count << endl;
	}
	return 0;
}