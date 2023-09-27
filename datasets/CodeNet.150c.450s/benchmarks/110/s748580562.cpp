#include <cstdio>
#include <queue>
#include <map>
#include <cctype>
#include <climits>

using namespace std;

typedef pair<int, int> P;

#define W 1005
#define H 1005
#define N 15

int dx[] = {0, -1, 0, 1};
int dy[] = {1, 0, -1, 0};

char a[H][W];
int d[H][W];
P fa[N];
int h, w, n;

int bfs(int sx, int sy, int gx, int gy){
	for (int i = 0; i < h; i++){
		for (int j = 0; j < w; j++){
			d[i][j] = INT_MAX;
		}
	}
	queue<P> que;
	d[sx][sy] = 0;
	que.push(P(sx, sy));
	
	while(!que.empty()){
		P p = que.front();
		que.pop();
		int x = p.first;
		int y = p.second;

		if (x == gx && y == gy) break;
	
		for (int i = 0; i < 4; i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if (nx >= 0 && nx < h && ny >= 0 && ny < w && a[nx][ny] != 'X' && d[nx][ny] == INT_MAX){
				d[nx][ny] = d[x][y] + 1;
				que.push(P(nx, ny));
			}
		}
	}
	return d[gx][gy];
}

int main(){
	scanf("%d %d %d", &h, &w, &n);
	for (int i = 0; i < h; i++){
		getchar();
		for (int j = 0; j < w; j++){
			scanf("%c", &a[i][j]);
			if (a[i][j] == 'S'){
				fa[0] = P(i, j);
			}
			if (isdigit(a[i][j])){
				fa[a[i][j] - '0'] = P(i, j);
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++){
		sum += bfs(fa[i].first, fa[i].second, fa[i + 1].first, fa[i + 1].second);
	}
	printf("%d\n", sum);
	return 0;
}