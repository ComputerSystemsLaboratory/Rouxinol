#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

const int INF = 10000000;
typedef pair<int, int> P;

char field[1000][1001];
int H, W, N;
int sx, sy;
int gx, gy;

int dis[1000][1000];
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

void input(void){
	cin >> H >> W >> N;
	for(int j = 0;j < H;j++){
		for(int i = 0;i < W;i++){
			cin >> field[i][j];
		}
	}
}

void firstcheck(void){
	for(int i = 0;i < W;i++){
		for(int j = 0;j < H;j++){
			if(field[i][j] == 'S'){
				sx = i;
				sy = j;
			}
		}
	}

	for(int i = 0;i < W;i++){
		for(int j = 0;j < H;j++){
			if(field[i][j] == '1'){
				gx = i;
				gy = j;
			}
		}
	}
}

void nextnum(void){
	sx = gx;
	sy = gy;

	for(int i = 0;i < W;i++){
		for(int j = 0;j < H;j++){
			if(field[i][j] == field[gx][gy] + 1){
				gx = i;
				gy = j;

				return ;
			}
		}
	}
}

int bfs(void){
	queue<P> que;

	for(int i = 0;i < W;i++){
		for(int j = 0;j < H;j++){
			dis[i][j] = INF; //????????§??§?????????
		}
	}

	que.push(P(sx, sy));
	dis[sx][sy] = 0; //??????????????????????????¢0???

	while(que.size()){ //que????????????????????§?????????
		P p = que.front(); //?????????????????????
		que.pop(); //???????????´??°

		if(p.first == gx && p.second == gy) break;

		for(int i = 0;i < 4;i++){
			int nx = p.first + dx[i], ny = p.second + dy[i];

			if(0 <= nx && nx < W && 0 <= ny && ny < H && field[nx][ny] != 'X' && dis[nx][ny] == INF){
				que.push(P(nx, ny)); //????£??????????
				dis[nx][ny] = dis[p.first][p.second] + 1;
			}
		}
	}

	return dis[gx][gy];
}


int main(){
	int res = 0;
	input();

	for(int i = 0;i < N;i++){
		if(i == 0){
			firstcheck(); //????????????S,G?????????
		} else {
			nextnum(); //S, G?????´??°
		}
		res += bfs(); //?????¢?????????
	}
	cout << res << endl;

	return 0;
}