#include <stdio.h>
#include <iostream>

using namespace std;

char hyou[100][100];
int H,W;

void tyousa(char a,int x, int y) {
	hyou[y][x] = '0';
	for (int dx = -1; dx <= 1; dx++) {
		for (int dy = -1; dy <= 1; dy++) {
			int nx = x + dx;
			int ny = y + dy;
			if (0 <= nx && nx <= W-1 && 0 <= ny && ny <= H-1 && hyou[ny][nx] == a && dx * dy == 0) {
				tyousa(hyou[ny][nx],nx,ny);
			}
		}
	}
}

int main() {
	int count;
	while (cin >> H >> W) {
		if (H == 0 && W == 0) {
			break;
		} 
		count = 0;
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				cin >> hyou[i][j];
			}
		}
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				if (hyou[i][j] != '0') {
					tyousa(hyou[i][j],j,i);
					count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}