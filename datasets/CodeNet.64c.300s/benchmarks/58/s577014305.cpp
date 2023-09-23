#include <iostream>
using namespace std;
#define MAX 101

int H, W;
int num = 0;
char fruit[MAX][MAX];
bool ever[MAX][MAX];

int way[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void dfs(int x, int y, char buff) {
	for (int i = 0; i < 4; i ++) {
		int next_x = x + way[i][0];
		int next_y = y + way[i][1];
		
		if(!ever[next_x][next_y] && buff == fruit[next_x][next_y] && next_x < H && next_x >= 0 && next_y < W && next_y >= 0) {
			ever[next_x][next_y] = true;
			dfs(next_x, next_y, buff);
		}
	}
}

int main() {
	while (cin >> H >> W && W != 0 && H != 0) {
		for (int i = 0; i < H; i ++) {
			for (int j = 0; j < W; j ++) {
				cin >> fruit[i][j];
				ever[i][j] = false;
			}
		}
		
		for (int i = 0; i < H; i ++) {
			for (int j = 0; j < W; j ++) {
				if (!ever[i][j]) {
					dfs(i, j, fruit[i][j]);
					num ++;
				}
			}
		}
		cout << num << endl;
		num = 0;
	}
	
	return 0;
}