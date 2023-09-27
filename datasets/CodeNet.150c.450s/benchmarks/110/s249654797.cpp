#include <bits/stdc++.h>

#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define INF (1 << 30)
#define mp make_pair

using namespace std;

typedef pair<int, int> P;

const int dx[] = {0, 1, 0, -1};
const int dy[] = {1, 0, -1, 0};
int h, w, n;
int ans = 0;
int sx, sy, gx, gy;
char field[1010][1010];
int went[1010][1010];

/*struct state{
	int x;
	int y;
	int count;
};*/

int bfs(P start, int tmp) {
	rep(i, h) {
		rep(j, w) {
			went[i][j] = INF;
			if(field[i][j] == tmp + '0') {
				gy = i;
				gx = j;
			}
		}
	}
	went[start.first][start.second] = 0;

	queue<P> q;
	q.push(start);

	while(!q.empty()) {
		P p = q.front();
		q.pop();
		//cout << p.first << " " << p.second.first << " " << p.second.second << endl;
		if(p.first == gy && p.second == gx) return went[p.first][p.second];
		rep(i, 4) {
			int nx = p.second + dx[i];
			int ny = p.first + dy[i];
			if(nx >= 0 && ny >= 0 && nx < w && ny < h && went[ny][nx] == INF && field[ny][nx] != 'X') {
				q.push(P(ny, nx));
				went[ny][nx] = went[p.first][p.second] + 1;
			}
		}
	}
}

int main() {
	cin >> h >> w >> n;
	rep(i, h) rep(j, w) {
		cin >> field[i][j];
		if(field[i][j] == 'S'){
			sx = j, sy = i;
			gx = j, gy = i;
		}
	}
	/*rep(i, h) {
		rep(j, w) cout << field[i][j];
		cout << endl;
	}*/
	for(int i = 1; i <= n; ++i) {
		ans += bfs(P(gy, gx), i);
	}
	cout << ans << endl;
	return 0;
}