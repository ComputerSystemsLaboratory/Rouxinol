#include <iostream>
using namespace std;

char field[100][100];
const int dx[4] = {0, 0, -1, 1};
const int dy[4] = {-1, 1, 0, 0};
int newx, newy, H, W = 0;

void dfs(int x, int y, char target){
	field[x][y] = '.';
	for(int i = 0;i < 4;i++){
		newx = x + dx[i];
		newy = y + dy[i];
		if(0 <= newx && newx < H && 0 <= newy && newy < W && field[newx][newy] == target){
				dfs(newx, newy, target);
		}
	}
	return ;
}

int main(){
	while(true){
		int result = 0;
		cin >> H >> W;
		if(W == 0 && H == 0){break;}
		for(int i = 0;i < H;i++){
			for(int j = 0;j < W;j++){
				cin >> field[i][j];
			}
		}
		for(int i = 0;i < H;i++){
			for(int j = 0;j < W;j++){
				if(field[i][j] != '.'){
					dfs(i,j,field[i][j]);
					result++;
				}
			}
		}
		cout << result << endl;
	}
	
	return 0;
}