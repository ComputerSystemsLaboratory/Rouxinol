#include<iostream>
using namespace std;

int W, H;
char tile[25][25];
int cnt;
int x, y;

void dfs(int y, int x){
	tile[y][x] = '#';
	cnt++;
	int dy[4] = { 0, 1, 0, -1 };
	int dx[4] = { 1, 0, -1, 0 };
	for (int i = 0; i < 4; i++){
		int Y = y + dy[i];
		int X = x + dx[i];
		if (0 <= Y&&Y < H && 0 <= X&&X < W&&tile[Y][X] != '#'){
			dfs(Y, X);
		}
	}
}

int main(){

	while (cin >> W >> H, W != 0 && H != 0){
		for (int i = 0; i < H; i++){
			for (int j = 0; j < W; j++){
				cin >> tile[i][j];
				if (tile[i][j] == '@'){
					y = i;
					x = j;
				}
			}
		}
		dfs(y, x);
		cout << cnt << endl;
		cnt = 0;
	}

	return 0;
}
