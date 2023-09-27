#include <iostream>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)

const int MAX_N = 50;
int w, h; // wは横の個数 hは縦の個数
int c[MAX_N][MAX_N]; //マップ
int dx[] = { 1, -1, 0 }, dy[] = { 1, -1, 0 }; //移動単位
int island; //記憶

void sch(int x, int y) { //ひとつ前のx座標とy座標

	c[x][y] = 0;
	REP(i, 3) {
		REP(j, 3) {
			int xx = x + dx[i];
			int yy = y + dy[j];
			if (xx < h && xx >= 0 && yy < w && yy >= 0 && c[xx][yy] == 1) {
				sch(xx, yy);
			}

		}
	}
	return;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	while (1) {
		island = 0;
		cin >> w >> h;
		if (w == 0 && h == 0) break;

		REP(i, h) {
			REP(j, w) cin >> c[i][j];
		}

		REP(i, h) {
			REP(j, w) if (c[i][j] == 1) {
				sch(i, j);
				island++;
			}
		}

		cout << island << "\n";
	}
	return 0;
}
