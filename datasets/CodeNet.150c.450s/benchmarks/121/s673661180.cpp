#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

#define MAX_N 2000

int x[MAX_N][MAX_N];
int col[MAX_N][MAX_N], cnt;
int h, w;

queue<int>Q;

void bfs(int c) {
	while (!Q.empty()) {
		int a = Q.front() / 10000;
		int b = Q.front() % 10000;
		Q.pop();
		if (x[a][b] == x[a - 1][b] && col[a - 1][b] == 0) {
			col[a - 1][b] = cnt;
			Q.push((a - 1) * 10000 + b);
		}
		if (x[a][b] == x[a + 1][b] && col[a + 1][b] == 0) {
			col[a + 1][b] = cnt;
			Q.push((a + 1) * 10000 + b);
		}
		if (x[a][b] == x[a][b - 1] && col[a][b - 1] == 0) {
			col[a][b - 1] = cnt;
			Q.push(a * 10000 + (b - 1));
		}
		if (x[a][b] == x[a][b + 1] && col[a][b + 1] == 0) {
			col[a][b + 1] = cnt;
			Q.push(a * 10000 + (b + 1));
		}
	}
}

int main() {
	while (true) {
		memset(col, 0, sizeof(col));
		memset(x, 0, sizeof(x));
		cin >> h >> w;
		if (h == 0 && w == 0) { break; }
		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= w; j++) {
				char c;
				cin >> c;
				if (c == '@') { x[i][j] = 1; }
				if (c == '#') { x[i][j] = 2; }
				if (c == '*') { x[i][j] = 3; }
			}
		}
		cnt = 0;
		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= w; j++) {
				if (col[i][j] == 0) {
					Q.push(i*10000 + j);
					cnt++;
					col[i][j] = cnt;
					bfs(x[i][j]);
				}
			}
		}
		cout << cnt << endl;
	}
}