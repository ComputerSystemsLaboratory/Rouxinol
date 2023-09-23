#include<iostream>
const int MAX_X = 100;
const int MAX_Y = 100;
int Y[MAX_X + 1][MAX_Y + 1] = { -1 };
int limx, limy;

const int vx[4] = { 0, 1, 0, -1 };
const int vy[4] = { 1, 0, -1, 0 };

int ans = 0;
void dfs(int x, int y){
	int type = Y[x][y];
	Y[x][y] = 3;
	int newx, newy;
	for (int i = 0; i < 4; i++){
		newx = x + vx[i];
		newy = y + vy[i];
		if (Y[newx][newy] == type && limx>newx && newx >= 0 && limy > newy && newy >= 0)dfs(newx, newy);
	}
}
int main(){
	char b;
	while (true){
		std::cin >> limy >> limx;
		if (limy == 0 && limx == 0)break;
		for (int i = 0; i < limy; i++){
			for (int j = 0; j < limx; j++){
				std::cin >> b;
				if (b == '#')Y[j][i] = 0;
				else if (b == '*')Y[j][i] = 1;
				else if (b == '@')Y[j][i] = 2;
			}
		}
		for (int i = 0; i < limx; i++){
			for (int j = 0; j < limy; j++){
				if (Y[i][j] != 3){
					dfs(i, j);
					ans++;
				}
			}
		}
		std::cout << ans << "\n";
		ans = 0;
	}
}