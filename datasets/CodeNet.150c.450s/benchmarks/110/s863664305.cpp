#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<tuple>
#define LL long long
#define TT std::tuple<int,int,int>
int ans;
int sx, sy;
int dx[] = { 0,1,-1,0 };
int dy[] = { -1,0,0,1 };
int W, H, N;
char map[1010][1010];
bool used[1010][1010];
int bfs(int &sx,int &sy,char m) {
	std::queue<TT> q;
	q.push(TT{ sx,sy,0 });
	while (true) {
		TT t = q.front();
		q.pop();
		int a, b, c;
		std::tie(a, b, c) = t;
		for (int i = 0; i < 4; i++) {
			int rx = a + dx[i];
			int ry = b + dy[i];
			if (1 <= rx&&rx <= H && 1 <= ry&&ry <= W) {
				if (map[rx][ry] == m) {
					sx = rx;
					sy = ry;
					return c + 1;
				}
				if (map[rx][ry] != 'X'&&!used[rx][ry]) {
					q.push(TT{ rx,ry,c + 1 });
					used[rx][ry] = true;
				}
			}
		}
	}
}

int main() {
	std::cin >> H >> W >> N;
	for (int i = 1; i <= H; i++) {
		for (int j = 1; j <= W; j++) {
			std::cin >> map[i][j];
			if (map[i][j] == 'S') {
				sx = i;
				sy = j;
			}
		}
	}
	char m = '0';
	for (int i = 0; i < N; i++) {
		m++;
		used[sx][sy] = true;
		ans+=bfs(sx, sy,m);
		for (int j = 1; j <= H; j++) {
			for (int k = 1; k <= W; k++) {
				used[j][k] = false;
			}
		}
	}
	std::cout << ans << std::endl;
	return 0;
}
