#include<iostream>
#include<queue>
#include<utility>
using namespace std;

const int INF = 2000000;
char fl[1010][1010];
int d[1010][1010];

int bfs(int sx, int sy, int gx, int gy, int mx, int my) {
	typedef pair<int, int>P;
	int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };

	for (int i = 0;i < mx;i++)
		for (int j = 0;j < my;j++)d[i][j] = INF;

	queue<P>que;
	que.push(P(sx, sy));
	d[sx][sy] = 0;

	while (que.size()) {
		P p = que.front();
		que.pop();

		if (p.first == gx&&p.second == gy)break;

		for (int i = 0;i < 4;i++) {
			int nx = p.first + dx[i], ny = p.second + dy[i];

			if (0 <= nx&&nx < mx && 0 <= ny&&ny < my&&fl[nx][ny] != 'X'&&d[nx][ny] == INF) {
				que.push(P(nx, ny));
				d[nx][ny] = d[p.first][p.second] + 1;
			}
		}
	}
	return d[gx][gy];
}

int main() {
	int h, w, n;
	cin >> h >> w >> n;
	int al = 0;
	for (int i = 0;i < h;i++) {
		for (int j = 0;j < w;j++) { cin >> fl[i][j]; 
		}
	}
	char a[10] = { 'S','1','2','3','4','5','6','7','8','9' };
	for (int i = 0;i < n;i++) {
		int sx, sy;
		int gx, gy;
		for (int j = 0;j < h;j++) {
			for (int k = 0;k < w;k++) {

				if (fl[j][k]== a[i]) {
					sx = j;
					sy = k;
				}
				if (fl[j][k]== a[i+1]) {
					gx = j;
					gy = k;
				}
			}
		}

		al += bfs(sx, sy, gx, gy,h,w);
	}
	
	cout << al << endl;
	getchar();
	getchar();
	return 0;
}