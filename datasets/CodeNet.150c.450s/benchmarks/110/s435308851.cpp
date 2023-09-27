#include <queue>
#include <string>
#include <vector>
#include <iostream>
using namespace std;
int H, W, N;
int main() {
	cin >> H >> W >> N;
	vector<string> s(H);
	vector<int> x(N + 1), y(N + 1);
	for (int i = 0; i < H; i++) {
		cin >> s[i];
		for (int j = 0; j < W; j++) {
			if (s[i][j] == 'S') x[0] = j, y[0] = i;
			else if (isdigit(s[i][j])) x[s[i][j] - 48] = j, y[s[i][j] - 48] = i;
		}
	}
	vector<vector<int> > G(H * W);
	for (int i = 0; i < H - 1; i++) {
		for (int j = 0; j < W; j++) {
			if (s[i][j] != 'X' && s[i + 1][j] != 'X') {
				int v1 = i * W + j, v2 = v1 + W;
				G[v1].push_back(v2);
				G[v2].push_back(v1);
			}
		}
	}
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W - 1; j++) {
			if (s[i][j] != 'X' && s[i][j + 1] != 'X') {
				int v1 = i * W + j, v2 = v1 + 1;
				G[v1].push_back(v2);
				G[v2].push_back(v1);
			}
		}
	}
	int ret = 0;
	for (int i = 0; i < N; i++) {
		vector<int> dist(H * W, -1); dist[y[i] * W + x[i]] = 0;
		queue<int> que; que.push(y[i] * W + x[i]);
		while (!que.empty()) {
			int u = que.front(); que.pop();
			for (int i : G[u]) {
				if (dist[i] == -1) {
					dist[i] = dist[u] + 1;
					que.push(i);
				}
			}
		}
		ret += dist[y[i + 1] * W + x[i + 1]];
	}
	cout << ret << endl;
	return 0;
}