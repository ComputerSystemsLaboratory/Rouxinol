#include<iostream>
using namespace std;
char map[114][514];
int h, w;
void dfs(int i, int j, char c) {
	map[i][j] = '.';
	if (i > 1 && map[i - 1][j] == c)dfs(i - 1, j, c);
	if (i < h && map[i + 1][j] == c)dfs(i + 1, j, c);
	if (j > 1 && map[i][j - 1] == c)dfs(i, j - 1, c);
	if (j < w && map[i][j + 1] == c)dfs(i, j + 1, c);
}
int main() {
	while (cin >> h >> w) {
		if (!h && !w)return 0;
		int sum = 0;
		for (int i = 1; i <= h; i++)for (int j = 1; j <= w; j++)cin >> map[i][j];
		for (int i = 1; i <= h; i++)for (int j = 1; j <= w; j++) {
			if (map[i][j] != '.') {
				dfs(i, j, map[i][j]);
				sum++;
			}
		}
		cout << sum << endl;
	}
}