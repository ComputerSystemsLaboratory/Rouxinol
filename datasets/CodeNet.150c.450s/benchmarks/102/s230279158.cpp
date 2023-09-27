#include<iostream>
using namespace std;

char c[25][25];
void dfs(int x,int y,int w,int h) {
	c[x][y] = '!';

	for (int i = -1;i <= 1;i++) {
		int ax = x + i;
		if (ax >= 0 && ax < h&&c[ax][y] == '.')dfs(ax, y, w, h);
	}
	for (int i = -1;i<= 1;i++) {
		int ay = y + i;
		if (ay >= 0 && ay < w&&c[x][ay] == '.')dfs(x, ay, w, h);
	}
}

int main() {
	int w, h;
	while (cin >> w >> h,w,h) {
		for (int i = 0;i < h;i++) {
			for (int j = 0;j < w;j++)cin >> c[i][j];
		}

		for (int i = 0;i < h;i++) {
			for (int j = 0;j < w;j++) {
				if (c[i][j] == '@')dfs(i,j,w,h);
			}
		}
		int al = 0;
		for (int i = 0;i < h;i++) {
			for (int j = 0;j < w;j++) {
				if (c[i][j] == '!')al++;
			}
		}
		cout << al << endl;
	}
	return 0;
}