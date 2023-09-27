#include <iostream>
using namespace std;

const int W = 50, H = 50;
int w, h;
int board[H][W];

void search(int y, int x){
	board[y][x] = 0;
	for(int dx = -1; dx <= 1;++dx){
		for(int dy = -1; dy <= 1;++dy){
			int nx = x + dx, ny = y + dy;
			if(0 <= ny && 0 <= nx && nx < w && ny < h){
				if(board[ny][nx]) search(ny, nx);
			}
		}
	}
	return;
}

int main(){
	int c;
	while(cin >> w >> h, w){
		c = 0;
		for(int i = 0;i < h;++i){
			for(int j = 0;j < w;++j){
				cin >> board[i][j];
			}
		}
		for(int i = 0;i < h;++i){
			for(int j = 0;j < w;++j){
				if(board[i][j]){
					search(i, j);
					++c;
				}
			}
		}
		cout << c << endl;
	}
	return 0;
}