#include <iostream>
#include <string>
using namespace std;

const int MAX = 20;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int map[MAX][MAX];
int ans = 1;

void dfs(int x, int y)
{
	map[x][y] = 2;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < MAX&&ny >= 0 && ny < MAX) {
			if (map[nx][ny] == 1) {
				ans++;
				dfs(nx, ny);
			}
		}
	}
}

int main()
{
	while (true) {
		ans = 1;
		int W, H;
		cin >> W >> H;

		if (W == 0 && H == 0) {
			break;
		}

		for (int i = 0; i < MAX; i++) {
			for (int j = 0; j < MAX; j++) {
				map[i][j] = 0;
			}
		}

		int x, y;

		for (int i = 0; i < H; i++) {
			string str;
			cin >> str;

			for (int j = 0; j < W; j++) {
				if (str.substr(j, 1) == ".") {
					map[i][j] = 1;
				}
				else if (str.substr(j, 1) == "@") {
					map[i][j] = 2;
					x = i;
					y = j;
				}
			}
		}

		dfs(x, y);

		cout << ans << endl;
	}

	return 0;
}