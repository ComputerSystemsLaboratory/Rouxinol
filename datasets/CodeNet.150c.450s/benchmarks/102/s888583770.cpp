#include <iostream>
#include <queue>

#define MAX_WH 20

typedef std::pair<int, int> P;

const int dx[] = {0, -1, 0, 1}, dy[] = {-1, 0, 1, 0};

int W, H, sx, sy;
char field[MAX_WH][MAX_WH];
int solve();

int bfs();

int main(){
	while(true){
		std::cin >> W >> H;
		if(W == 0 && H == 0)
			break;

		for(int i = 0; i < H; ++i){
			for(int j = 0; j < W; ++j){
				char in;
				std::cin >> in;

				if(in == '@')
					sx = j, sy = i;

				field[j][i] = in;
			}
		}

		std::cout << solve() << std::endl;
	}
	return 0;
}

int solve(){
	return bfs();
}

int bfs(){
	std::queue<P> que;
	int ans = 0;
	bool flag[MAX_WH][MAX_WH];

	for(int i = 0; i < MAX_WH; ++i){
		for(int j = 0; j < MAX_WH; ++j)
			flag[i][j] = true;
	}

	que.push(P(sx, sy));
	flag[sx][sy] = false;

	while(!que.empty()){
		++ans;
		P p = que.front(); que.pop();

		for(int i = 0; i < 4; ++i){
			int nx = p.first + dx[i], ny = p.second + dy[i];

			if(nx >= 0 && ny >= 0 && nx < W && ny < H && field[nx][ny] != '#' && flag[nx][ny]){
				flag[nx][ny] = false;
				que.push(P(nx, ny));
			}
		}
	}

	return ans;
}