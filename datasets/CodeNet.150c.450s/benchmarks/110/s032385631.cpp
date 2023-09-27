#include<iostream>
#include<limits.h>
#include<queue>
using namespace std;
char cheese[1001][1001];
int dx[4] = {-1,0,0,1};
int dy[4] = {0,1,-1,0};
int H, W, N,sx,sy;
int d[1001][1001]; //各个位置到指定地点最短距&#31163; 
int bfs(int sx, int sy, int ex,int ey){
	for(int i = 0; i < H; ++i){
		for(int j = 0; j < W; ++j){
			d[i][j] = INT_MAX;
		}
	}
	typedef pair<int, int>P;
	queue<P> que;
	que.push(P(sx,sy));
	d[sx][sy] = 0;
	while(!que.empty()){
		P p = que.front();
		que.pop();
		if(p.first == ex && p.second == ey){
			break;
		}
		for(int i = 0; i < 4; ++i){
			int x = p.first + dx[i], y = p.second + dy[i];
			if(x >= 0 && x <= H && y >= 0 && y < W && cheese[x][y] != 'X' && d[x][y] == INT_MAX){
				que.push(P(x,y));
				d[x][y] = d[p.first][p.second] + 1;
			}
		}
	}
	return d[ex][ey];
}
int main(){
	int result = 0;
	cin >> H >> W >> N;
	for(int i = 0; i < H; ++i){
		for(int j = 0; j < W; ++j){
			cin >> cheese[i][j];
			if(cheese[i][j] == 'S'){
				sx = i;
				sy = j;
			}
		}
	}
	// result += bfs(sx,sy,'1');
	for(int k = 1; k <= N; ++k){
		for(int i = 0; i < H;++i){
			for(int j = 0; j < W; ++j){
				if(cheese[i][j] == ('0' + k) ){
					int ex = i;
					int ey = j;
					result += bfs(sx,sy,ex,ey);
					sx = ex;
					sy = ey;					
				}
			}
		}
	}
	cout << result << endl;
}