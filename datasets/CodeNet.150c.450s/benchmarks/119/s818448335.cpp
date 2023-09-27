
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <string>

using namespace std;

int H, W, m[55][55], dx[] = {1,1,0,-1,-1,-1,0,1}, dy[] = {0,1,1,1,0,-1,-1,-1};
bool flag[55][55];

void dfs(int y, int x) {
	for (int k = 0; k < 8; k++) {
		int nx = x + dx[k] , ny = y + dy[k];
		if (0<=ny && ny<H && 0<=nx && nx<W) {
			if (flag[ny][nx] && m[ny][nx]==1) {
				flag[ny][nx] = false;
				dfs(ny, nx);
			}
		}
	}
}

int main() {
	
	while (1) {

		cin >> W >> H;
		if (W==0 && H==0) break;
	
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				cin >> m[i][j];
				flag[i][j] = true;
			}
		}

		int cnt = 0;
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				if (m[i][j] == 1 && flag[i][j]) cnt++;
				flag[i][j] = false;
				if(m[i][j]==1) dfs(i, j);
			}
		}

		cout << cnt<<endl;

	}
	return 0;
}