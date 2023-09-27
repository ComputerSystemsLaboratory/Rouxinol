#include<iostream>
#include<string>

char kukaku[101][101];
int H, W;

int dx[] = { -1, 0, 0, 1 };
int dy[] = { 0, -1, 1, 0 };
void dfs(int x, int y){
	char ch = kukaku[x][y];
	kukaku[x][y] = '.';
	for (int i = 0; i < 4; ++i){
		int nx = x + dx[i], ny = y + dy[i];
		if (nx >= 0 && nx < H && ny >= 0 && ny < W){
			if (kukaku[nx][ny] == ch)dfs(nx, ny);
		}
	}
	return;
}

int main(){
	while (1){
		std::cin >> H >> W;
		if (H == 0 && W == 0)break;
		for (int i = 0; i < 101; ++i){
			for (int j = 0; j < 101; ++j){
				kukaku[i][j]='.';
			}
		}
		for (int i = 0; i < H; ++i){
			std::string s;
			std::cin >> s;
			for (int j = 0; j < W; ++j)kukaku[i][j] = s[j];
		}
		int res = 0;
		for (int i = 0; i < H; ++i){
			for (int j = 0; j < W; ++j){
				if (kukaku[i][j] != '.'){
					dfs(i, j);
					res++;
				}
			}
		}
		std::cout << res << std::endl;
	}
	return 0;
}