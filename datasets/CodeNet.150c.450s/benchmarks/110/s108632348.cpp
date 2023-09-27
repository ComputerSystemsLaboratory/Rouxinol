#include <iostream>
#include <queue>

using namespace std;

int W, H, N;
char map[1005][1005];
int fact_x[10], fact_y[10];

const int vec_x[] = {-1, 1, 0, 0}, vec_y[] = {0, 0, -1, 1};
int dist[1005][1005];

int main(void)
{
	cin >> H >> W >> N;
	for(int y = 0; y < H; y++){
		for(int x = 0; x < W; x++){
			cin >> map[x][y];
			if(map[x][y] >= '1' && map[x][y] <= '9'){
				fact_x[map[x][y] - '0'] = x;
				fact_y[map[x][y] - '0'] = y;
				map[x][y] = '.';
			}else if(map[x][y] == 'S'){
				fact_x[0] = x;
				fact_y[0] = y;
				map[x][y] = '.';
			}
		}
	}
	
	int ans = 0;
	int sx, sy, gx, gy;
	int cx, cy, nx, ny;
	
	for(int i = 0; i < N; i++){
		
		queue<int> Q;
		
		sx = fact_x[i];
		sy = fact_y[i];
		gx = fact_x[i+1];
		gy = fact_y[i+1];
		
		for(int x = 0; x < W; x++){
			for(int y = 0; y < H; y++){
				dist[x][y] = -1;
			}
		}
		
		Q.push(sx * 10000 + sy);
		dist[sx][sy] = 0;
		
		while((int)Q.size()){
			cx = Q.front() / 10000;
			cy = Q.front() % 10000;
			Q.pop();
			
			for(int dir = 0; dir < 4; dir++){
				nx = cx + vec_x[dir];
				ny = cy + vec_y[dir];
				if(nx < 0 || nx >= W || ny < 0 || ny >= H) continue;
				if(map[nx][ny] != '.' || dist[nx][ny] != -1) continue;
				Q.push(nx * 10000 + ny);
				dist[nx][ny] = dist[cx][cy] + 1;
			}
		}
		
		ans += dist[gx][gy];
	}
	
	cout << ans << endl;
	return 0;
}
	