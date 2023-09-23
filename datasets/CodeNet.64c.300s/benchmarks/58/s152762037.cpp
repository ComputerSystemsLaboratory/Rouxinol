#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_H 100

// ??\??? 
int H, W;
char graph[MAX_H + 2][MAX_H + 2];

int visited[MAX_H + 2][MAX_H + 2];

bool dfs(int bx, int by, int x, int y) {
	int dx[] = { 1,-1, 0, 0 }, dy[] = { 0,0, 1, -1 };
	int nx = x, ny = y;
	bool res;

	if (bx == -1 && by == -1) {
		visited[nx][ny] = 1;
	}

	else {
		if (graph[bx][by] == graph[nx][ny]) {
			visited[nx][ny] = 1;
		}
		else {
			return false;
		}
	}
	
	for (int i = 0; i < 4; i++) {
		if (visited[nx+dx[i]][ny+dy[i]] == 0) {
			res = dfs(nx, ny, nx + dx[i], ny + dy[i]);
		}
	}

	return true;

}


int main()
{

	int cnt = 0;
	bool res;

	cin >> H >> W;

	while (H != 0 || W != 0) {

		for (int i = 1; i <= H; i++) {
			for (int j = 1; j <= W; j++) {
				cin >> graph[i][j];
				visited[i][j] = 0;
			}
		}

		for (int i = 1; i <= H; i++) {
			for (int j = 1; j <= W; j++) {
				if (visited[i][j] == 0) {
					res = dfs(-1, -1, i, j);
					cnt++;
				}
			}
		}

		cout << cnt << endl;

		cnt = 0;

		cin >> H >> W;
	}

    return 0;
}