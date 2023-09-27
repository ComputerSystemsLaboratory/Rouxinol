#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
#define pi 3.14159
using namespace std;

int a;
char map[20][20];
int w, h;
void dfs(int y, int x);

int main() {
	while(1) {
		a = 1;
		cin >> w >> h;
		if(w == 0 && h == 0) break;
		int x, y;
		for(int i = 0; i < h; i++) {
			for(int j = 0; j < w; j++) {
				cin >> map[i][j];
				if(map[i][j] == '@') {
					y = i;
					x = j;
					map[y][x] = 0;
				}
				else if(map[i][j] == '.') { map[i][j] = -1;}
			}
		}
		dfs(y+1, x);
		dfs(y, x-1);
		dfs(y, x+1);
		dfs(y-1, x);
		cout << a <<endl;
	}
	return 0;
}

void dfs(int y, int x) {
	if(y == -1 || x == -1 || y >= h || x >= w) {return ;}
	if(map[y][x] == '#') {return ;}
	if(map[y][x] == 0) {return ;}
	map[y][x] = 0;
	a++;
	dfs(y-1, x);
	dfs(y, x-1);
	dfs(y, x+1);
	dfs(y+1, x);
	return;
}