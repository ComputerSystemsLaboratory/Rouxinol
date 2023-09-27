#include<iostream>
#include<queue>
#include<utility>
typedef std::pair<int,int> PP;
int H, W, N;
int sh, sw;
char tar[9] = { '1','2','3','4','5','6','7','8','9' };
char HW[1000][1000];
int cnt = 0;
const int INF = 1 << 30;
int ans;
int tx, ty;
int D[1000][1000];
void solve(int h, int w) {
	std::queue<PP> q;
	q.push(std::make_pair(h, w));
	for (int a = 0; a < H; a++) {
		for (int b = 0; b < W; b++) {
			D[a][b] = INF;
		}
	}
	D[h][w] = 0;
	while (q.size()) {
		std::pair<int, int> p = q.front();
		q.pop();
		if (HW[p.first][p.second] == tar[cnt]) {
			ans += D[p.first][p.second];
			tx = p.first;
			ty = p.second;
			return;
		}
		int dx[4] = { 0,1,0,-1 }, dy[4] = { 1,0,-1,0 };
		for (int i = 0; i < 4; i++) {
			int ux = p.first + dx[i];
			int uy = p.second + dy[i];
			if (0 <= ux&&ux < H && 0 <= uy&&uy < W&&D[ux][uy] == INF&&HW[ux][uy] != 'X') {
				q.push(std::make_pair(ux, uy));
				D[ux][uy] = D[p.first][p.second] + 1;
			}
		}
	}
	return;
}
int main() {
	std::cin >> H >> W >> N;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			std::cin >> HW[i][j];
			if (HW[i][j] == 'S') {
				sh = i;
				sw = j;
			}
		}
	}
	solve(sh, sw);
	for (int i = 0; i < N; i++) {
		cnt = i;
		solve(tx, ty);
	}
	std::cout << ans << "\n";
	return 0;
}