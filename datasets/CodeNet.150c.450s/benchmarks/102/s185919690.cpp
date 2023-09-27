#include <iostream>
#include <string>
#include <queue>
using namespace std;
typedef pair<int, int> P;

int w, h;
string s[20];

int getCount(int sy, int sx) {
	const int dy[4] = {-1, 0, 1, 0};
	const int dx[4] = {0, 1, 0, -1};
	queue<P> que;
	bool used[20][20] = {false};
	
	que.push(P(sy, sx));
	used[sy][sx] = true;
	
	while (!que.empty()) {
		P now = que.front(); que.pop();
		int y = now.first;
		int x = now.second;
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (!(0 <= ny && ny < h && 0 <= nx && nx < w)) continue;
			if (s[ny][nx] == '#' || used[ny][nx]) continue;
			used[ny][nx] = true;
			que.push(P(ny, nx));
		}
	}
	
	int ans = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			ans += used[i][j];
		}
	}
	return ans;
}

void solve() {
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (s[i][j] == '@') {
				cout << getCount(i, j) << endl;
				return;
			}
		}
	}
}

int main() {
	while (cin >> w >> h) {
		if (!w) break;
		for (int i = 0; i < h; i++) cin >> s[i];
		solve();
	}
	return 0;
}