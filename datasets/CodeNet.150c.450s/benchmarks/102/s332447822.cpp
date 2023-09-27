#include<iostream>
using namespace std;
char map[114][514];
int h, w, ans;
void dfs(int i, int j) {
	ans++;
	map[i][j] = '#';
	if (map[i - 1][j] == '.')dfs(i - 1, j);
	if (map[i + 1][j] == '.')dfs(i + 1, j);
	if (map[i][j - 1] == '.')dfs(i, j - 1);
	if (map[i][j + 1] == '.')dfs(i, j + 1);
	return;
}
int main() {
	while (cin >> h >> w, h, w) {
		ans = 0;
		int x, y;
		for (int i = 0; i < 30; i++)for (int j = 0; j < 30; j++)map[i][j] = '#';
		for (int i = 1; i <= w; i++)for (int j = 1; j <= h; j++) {
			cin >> map[i][j];
			if (map[i][j] == '@') { x = i; y = j; }
		}
		dfs(x, y);
		cout << ans << endl;
	}
}