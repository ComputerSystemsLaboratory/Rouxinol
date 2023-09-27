#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int main() {
	int w, h, sx, sy;
	while (cin >> w >> h , w != 0 || h != 0) {
		vector<string> field = vector<string>(h);

		for (int i = 0; i < h; i++) {
			cin >> field[i];
		}
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (field[i][j] == '@') {
					sx = j;
					sy = i;
				}
			}
		}

		int ans = 0;
		auto visited = vector<vector<bool>>(h, vector<bool>(w, false));
		queue<int> q = queue<int>();
		q.push(sy * 100 + sx);
		while (!q.empty()) {
			int x = q.front() % 100, y = q.front() / 100;
			q.pop();
			if (visited[y][x]) continue;
			ans++;
			visited[y][x] = true;
			int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
			for (int i = 0; i < 4; i++) {
				int nx = x + dx[i], ny = y + dy[i];
				if (nx < 0 || w <= nx || ny < 0 || h <= ny) continue;
				if (field[ny][nx] == '.' && !visited[ny][nx])
					q.push(ny * 100 + nx);
			}
		}

		cout << ans << endl;
	}
}