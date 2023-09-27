#include <iostream>
using namespace std;

const int W = 20, H = 20;
char board[H][W];
int w, h;

int dfs(int x, int y){
	int dx[] = {0, -1, 1, 0}, dy[] = {-1, 0, 0, 1};
	int c = 1;
	board[y][x] = '#';
	for(int i = 0;i < 4;++i){
		int tx = x + dx[i], ty = y + dy[i];
		if(0 <= tx && 0 <= ty && tx < w && ty < h && board[ty][tx] == '.'){
			c += dfs(tx, ty);
		}
	}
	return c;
}

int main(){
	int sx, sy;
	while(cin >> w >> h, w){
		for(int i = 0;i < h;++i){
			for(int j = 0;j < w;++j){
				cin >> board[i][j];
				if(board[i][j] == '@'){
					sx = j;
					sy = i;
				}
			}
		}
		cout << dfs(sx, sy) << endl;
//		for(int i = 0;i < h;++i){
//			for(int j = 0;j < w;++j){
//				cout << board[i][j];
//			}
//			cout << endl;
//		}
	}
	return 0;
}