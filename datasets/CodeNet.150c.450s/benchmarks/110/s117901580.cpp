#include<stdio.h>
#include<queue>
#define INF -1
using namespace std;
typedef pair<int, int>P;

char joi[1000][1001];
int h, w;
int sy, sx, gy, gx;
int d[1000][1000];

int dy[] = { 0, 1, 0, -1 },dx[] = { 1, 0, -1, 0 };

int solve(){
	queue<P>que;
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++)
			d[i][j] = INF;
	que.push(P(sy, sx));
	d[sy][sx] = 0;

	while (!que.empty()){
		P p = que.front(); que.pop();
		if (p.first == gy&&p.second == gx)break;
		for (int i = 0; i < 4; i++){
			int ny = p.first + dy[i]; int nx = p.second + dx[i];
			if (0 <= ny&&ny < h && 0 <= nx&&nx < w&&d[ny][nx] == INF&&joi[ny][nx] != 'X'){
				d[ny][nx] = d[p.first][p.second] + 1;
				que.push(P(ny, nx));
			}
		}
	}
	return d[gy][gx];
}
int main(){
	int n, cnt = 0;
	P q[9];
	scanf("%d%d%d", &h, &w, &n);
	for (int i = 0; i < h; i++){
		scanf("%s", joi[i]);
		for (int j = 0; j < w; j++){
			if ('0' < joi[i][j] && joi[i][j] <= '9')q[joi[i][j] - '1'] = P(i, j);
			if (joi[i][j] == 'S'){ sy = i; sx = j;}
		}
	}
	for (int i = 0; i < n; i++){
		gy = q[i].first; gx = q[i].second;
		cnt += solve();
		sy = gy; sx = gx;
	}
	printf("%d\n", cnt);
	return 0;
}