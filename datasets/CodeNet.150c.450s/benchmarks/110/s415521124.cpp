#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

const int INF = 1e9;
const vector<int> dx = {1, 0, -1,  0};
const vector<int> dy = {0, 1,  0, -1};

int h, w, n, sx, sy;
vector<string> board;

int walk(char goal) {
	vector<vector<int>> stat(h, vector<int>(w, INF));
	stat[sy][sx] = 0;

	queue<pair<int, int>> que;
	que.push(make_pair(sx, sy));

	while (!que.empty()) {
		auto p = que.front();
		que.pop();

		int x = p.first;
		int y = p.second;

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || w <= nx || ny < 0 || h <= ny) {
				continue;
			} else if (stat[ny][nx] != INF || board[ny][nx] == 'X') {
				continue;
			}

			stat[ny][nx] = stat[y][x] + 1;
			if (board[ny][nx] == goal) {
				sx = nx;
				sy = ny;
				return stat[ny][nx];
			}
			que.push(make_pair(nx, ny));
		}
	}
	return -1;
}


int main() {
	cin >> h >> w >> n;
	board.assign(h, "");
	for (int i = 0; i < h; i++) {
		cin >> board[i];
	}

	sx = sy = -1;

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (board[i][j] == 'S') {
				sx = j;
				sy = i;
				break;
			}
		}
		if (sx != -1) {
			break;
		}
	}

	int steps = 0;
	for (int i = 1; i <= n; i++) {
		steps += walk(i + '0');
		// cout << "step to " << i << ": " << steps << endl;
	}
	cout << steps << endl;
	return 0;
}