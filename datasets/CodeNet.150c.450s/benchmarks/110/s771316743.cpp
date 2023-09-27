#include<iostream>
#include<queue>
using namespace std;
int G[1005][1005], dist[1005][1005], H, W, K, sx[11], sy[11];
int solve(int ax, int ay, int bx, int by) {
	for (int i = 0; i < 1005 * 1005; i++)dist[i / 1005][i % 1005] = 1000000000;
	queue<pair<int, int>>Q; Q.push(make_pair(ax, ay)); dist[ax][ay] = 0;
	while (!Q.empty()) {
		int a1 = Q.front().first, a2 = Q.front().second; Q.pop();
		int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };
		for (int i = 0; i < 4; i++) {
			if (G[a1 + dx[i]][a2 + dy[i]] == 0 && dist[a1 + dx[i]][a2 + dy[i]] > dist[a1][a2] + 1) {
				dist[a1 + dx[i]][a2 + dy[i]] = dist[a1][a2] + 1;
				Q.push(make_pair(a1 + dx[i], a2 + dy[i]));
			}
		}
	}
	return dist[bx][by];
}
int main() {
	cin >> H >> W >> K;
	for (int i = 0; i <= H + 1; i++) {
		for (int j = 0; j <= W + 1; j++) {
			if (i == 0 || i == H + 1 || j == 0 || j == W + 1)G[i][j] = 1;
		}
	}
	for (int i = 1; i <= H; i++) {
		for (int j = 1; j <= W; j++) {
			char p; cin >> p;
			if (p == 'S') { sx[0] = i; sy[0] = j; }
			if (p >= '0' && p <= '9') { sx[p - '0'] = i; sy[p - '0'] = j; }
			if (p == 'X')G[i][j] = 1;
		}
	}
	int cnt = 0;
	for (int i = 0; i < K; i++) {
		cnt += solve(sx[i], sy[i], sx[i + 1], sy[i + 1]);
	}
	cout << cnt << endl;
	return 0;
}