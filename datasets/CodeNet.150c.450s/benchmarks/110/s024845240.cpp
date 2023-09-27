#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define INF INT_MAX/3
#define pi 2*acos(0.0)
#define eps 1e-14
typedef pair<int, int> P;
const int MAX_H = 1001;
const int MAX_M = (int)1e+2;
int H, W, N;
char x[MAX_H][MAX_H];
bool used[MAX_H][MAX_H];
int d[MAX_H][MAX_H];

//???????????°
int xp[10], yp[10]; //1???????????????????????????????????¨?????¨???
void input()
{
	cin >> H >> W >> N;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >> x[i][j];
			if (x[i][j] != 'X'&&x[i][j] != 'S' && x[i][j]!='.') {
				int a = atoi(&x[i][j]);
				xp[a] = i, yp[a] = j; 
			}
			if (x[i][j] == 'S') {
				xp[0] = i, yp[0] = j;
			}
		}
	}
}

int dx[] = { -1,0,0,1 }, dy[] = { 0,-1,1,0 };
int x_l, y_l;
int sx, sy, gx, gy;
int bfs() {
	
	queue<P> que;
	for (int i = 0; i < H; i++)
		for (int j = 0; j < W; j++)
			d[i][j] = INF;
	que.push(P(sx, sy));
	d[sx][sy] = 0;

	while (que.size()) {
		P p = que.front(); que.pop();
		if (p.first == gx&&p.second == gy) break;
		for (int i = 0; i < 4; i++) {
			int nx = p.first + dx[i], ny = p.second + dy[i];

			if (0 <= nx&&nx < H && 0 <= ny&&ny < W&&x[nx][ny] != 'X' &&d[nx][ny] == INF) {
				que.push(P(nx, ny));
				d[nx][ny] = d[p.first][p.second] + 1;
			}
		}
	}
	return d[gx][gy];
}
int main() {
	input();
	int ans = 0;
	for (int i = 0; i < N; i++) {
		sx = xp[i], sy = yp[i];
		gx = xp[i + 1], gy = yp[i + 1];
		ans += bfs();
	}

	cout << ans << endl;
	return 0;
}