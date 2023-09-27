#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

const char RED_TILE = '#';
const char AT_TILE = '@';

int vx[4] = {0,1,0,-1};
int vy[4] = {-1,0,1,0};

int w,h;
int visited[20][20];
int map[20][20];

int search(int x, int y){
	int count = 1;
	visited[x][y] = true;
	for (int i=0;i<4;++i){
		int tx=x+vx[i];
		int ty=y+vy[i];
		if (tx<0 || tx>=w || ty<0 || ty>=h) continue;
		if (!visited[tx][ty] && map[tx][ty]){
			count += search(tx,ty);
		}
	}
	return count;
}

int main(){
	while (true){
		cin >> w >> h;
		if (w==0 && h==0) break;
		int sx, sy;
		for (int i=0;i<h;++i){
			string s;
			cin >> s;
			for (int l=0;l<w;++l){
				if (s[l] == RED_TILE) {
					map[l][i] = false;
				} else if (s[l] == AT_TILE) {
					map[l][i] = true;
					sx = l;
					sy = i;
				} else {
					map[l][i] = true;
				}
			}
		}
		for (int i=0;i<20;++i) for (int l=0;l<20;++l) visited[i][l]=false;
		int result = search(sx,sy);
		cout << result << endl;
	}
	return 0;
}