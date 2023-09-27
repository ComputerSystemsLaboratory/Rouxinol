#include <iostream>

using namespace std;

int W, H;
int field[55][55];

void input(void){
	cin >> W;
	cin >> H;

	for(int i = 0;i < H;i++){
		for(int j = 0;j < W;j++){
			cin >> field[j][i];
		}
	}
}

void dfs(int x, int y){
	field[x][y] = 0;

	for(int dx = -1;dx <= 1;dx++){
		for(int dy = -1;dy <= 1;dy++){
			int nx = x + dx, ny = y + dy;
			if(0 <= nx && nx < W && 0 <= ny && ny < H && field[nx][ny] == 1) dfs(nx, ny);
		}
	}

	return ;
}

int main(){
	while(1){
		int res = 0;
		input();
		if(W == 0 && H == 0) break;

		for(int i = 0;i < H;i++){
			for(int j = 0;j < W;j++){
				if(field[j][i] == 1){
					dfs(j, i);
					res++;
				}
			}
		}

		cout << res << endl;
	}

	return 0;
}