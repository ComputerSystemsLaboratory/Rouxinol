#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

const int dx[4] = {1, 0, -1,  0};
const int dy[4] = {0, 1,  0, -1};

vector<string> board;
int h, w;

void dfs(int x, int y, char c) {
	board[y][x] = '.';
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (board[ny][nx] == c) {
			dfs(nx, ny, c);
		}
	}
}

int solve() {
	int ret = 0;
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			if (board[i][j] == '.') {
				continue;
			}
			dfs(j, i, board[i][j]);
			ret++;
		}
	}

	return ret;
}

int main() {
	string str;

	while (1) {
		cin >> h >> w;
		if (w == 0 && h == 0) {
			break;
		}
		board.assign(h, "");
		for (int i = 0; i < h; i++) {
			cin >> str;
			board[i] = "." + str + ".";
		}
		board.insert(board.begin(), string(w+2, '.'));
		board.push_back(string(w+2, '.'));

		cout << solve() << endl;
	}

	return 0;
}