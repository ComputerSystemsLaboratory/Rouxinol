#include<iostream>
using namespace std;
char garden[100][100];
int H = 1, W = 1;
int result = 0;
int dx[4] = {-1,0,0,1};
int dy[4] = {0,1,-1,0};
void dfs(int sx, int sy,char c){
	garden[sx][sy] = 'x';
	for(int i = 0; i < 4;++i){
		int x = sx + dx[i], y = sy + dy[i];
		if(x >= 0 && x < H && y >= 0 && y < W && garden[x][y] == c){
			dfs(x,y,c);
		}
	}
	return;
}
int main(){
	while(H != 0 && W != 0){
		cin >> H >> W;
		if(H == 0 && W == 0){
			return 0;
		}
		for(int i = 0; i < H; ++i){
			for(int j = 0; j < W; ++j){
				cin >> garden[i][j];
			}
		}
		for(int i = 0; i < H; ++i){
			for(int j = 0; j < W; ++j){
				if(garden[i][j] != 'x'){
					dfs(i,j,garden[i][j]);
					result++;	
				}
			}
		}
		cout << result << endl;
		result = 0;
	}
}