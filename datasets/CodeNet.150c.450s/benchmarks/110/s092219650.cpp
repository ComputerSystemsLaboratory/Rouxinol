#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

int h, w, n;
const int MAX_N = 1005;
char map[MAX_N][MAX_N];
int visit[MAX_N][MAX_N];
struct point{
	int x, y;
	int step;
	point(){
		x = 0; y = 0; step = 0;
	}
	point(int xx, int yy, int ss){
		x = xx;
		y = yy;
		step = ss;
	}
};
struct point p[16];

int dx[4] = { -1, 0, 1, 0 }, dy[4] = { 0, 1, 0, -1 };

int ok(int x, int y){
	if (x >= 0 && x<h && y >= 0 && y<w) return 1;
	return 0;
}

int bfs(int next){
	for (int i = 0; i<MAX_N; i++){
		for (int j = 0; j < MAX_N; j++){
			visit[i][j] = 0;
		}
	}
	int nextcheese = next + 1;

	queue<point> q;
	point cur(p[next].x, p[next].y, 0);
	q.push(cur);
	while (q.size()){
		cur = q.front(); q.pop();
		int x = cur.x, y = cur.y;
		int nx, ny;
		for (int i = 0; i<4; i++){
			nx = x + dx[i]; ny = y + dy[i];
			if (ok(nx, ny)){
				if ((map[nx][ny] - '0') == nextcheese) return ++cur.step;
				if ((map[nx][ny] != 'X') && visit[nx][ny] == 0){
					q.push(point(nx, ny, cur.step + 1));
					visit[nx][ny] = 1;
				}
			}
		}
	}
}

void solve(){
	cin >> h >> w >> n;
	for (int i = 0; i<h; i++){
		for (int j = 0; j<w; j++){
			cin >> map[i][j];
		}
	}
	for (int i = 0; i<h; i++){
		for (int j = 0; j<w; j++){
			char ch = map[i][j];
			switch (ch){
			case '.': break;
			case 'X': break;
			case 'S': p[0].x = i; p[0].y = j; map[i][j] = '.'; break;
			default:
				int t = (ch - '0');
				p[t].x = i; p[t].y = j;
			}
			/* if(map[i][j]=='S'){
			p[0].x=i; p[0].y = j;
			map[i][j]='.';
			}
			else if(isdigit(map[i][j])){
			int index=map[i][j]-'0';
			p[index].x=i; p[index].y=j;
			}*/
		}
	}
	int step = 0;
	for (int i = 0; i<n; i++){
		step += bfs(i);
	}
	printf("%d\n", step);
}


int main(){
	solve();
}
