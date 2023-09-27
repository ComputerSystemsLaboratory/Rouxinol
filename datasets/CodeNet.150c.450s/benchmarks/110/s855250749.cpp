#include<iostream>
#include<queue>
using namespace std;

typedef pair<int,int> P;

const int MAX = 1000, INF = 100000000;
char map[MAX][MAX+1];
int H, W, N;
int sx, sy;
int gx, gy;
int steps;
int d[MAX][MAX];

const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};

int bfs(){
	for(int i = 0; i < H; i++)
		for(int j = 0; j < W; j++) d[i][j] = INF;
	
	queue<P> que;
	que.push(P(sx,sy));
	d[sx][sy] = 0;
	
	while(que.size()){
		P p = que.front(); que.pop();
		
		if(p.first == gx && p.second == gy) break;
		
		for(int i = 0; i < 4; i++){
			int nx = p.first + dx[i], ny = p.second + dy[i];
			if(nx >= 0 && nx < H && ny >= 0 && ny < W && map[nx][ny] != 'X' 
			&& d[nx][ny] == INF){
				que.push(P(nx,ny));
				d[nx][ny] = d[p.first][p.second] + 1;
			}
		}
	}
		
	return d[gx][gy];
}

int main(){
	cin >> H >> W >> N;
	for(int i = 0; i < H; i++)
		cin >> map[i];
	
	steps = 0;
	int n = 0;
	while(n < N){
		for(int i = 0; i < H; i++)
			for(int j = 0; j < W; j++){
				if((map[i][j] == 'S' && n == 0) || map[i][j] == n + '0'){
					sx = i; sy = j;
				}
				if(map[i][j] == n + 1 + '0'){
					gx = i; gy = j;
				}
			}
		
		steps += bfs();
		n++;
	}
	cout << steps << endl;
	return 0;
}
