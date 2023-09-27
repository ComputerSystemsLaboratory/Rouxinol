#include <iostream>
#include <string>

using namespace std;

int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0, -1, 0, 1 };

string tile[20];

int w, h;

int dfs(int x, int y){
	int ret = 1;
	if (tile[x][y] == '#') return 0;
	tile[x][y] = '#';

	for (int i = 0; i < 4; i++){
		if (x + dx[i] < 0 || x + dx[i] >= h) continue;
		if (y + dy[i] < 0 || y + dy[i] >= w) continue;
		ret += dfs(x + dx[i], y + dy[i]);
	}
	return ret;
}

int main(){
	while (cin >> w >> h,w){
		int x, y;
		for (int i = 0; i < h; i++){
			cin >> tile[i];
			for (int j = 0; j < w; j++){
				if (tile[i][j] == '@'){
					x = i;
					y = j;
				}
			}
		}
		cout << dfs(x, y) << endl;
	}
}