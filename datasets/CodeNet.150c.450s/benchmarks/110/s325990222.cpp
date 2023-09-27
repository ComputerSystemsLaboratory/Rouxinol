#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;
typedef pair<int, int> P;

int h, w, n;
P goal[10];
char map[1000][1000];
int dis[1000][1000];
const int vx[4] = { 1,0,-1,0 };
const int vy[4] = { 0,1,0,-1 };

int bfs(P start, P goal) {
	int ans = 0;
	queue<P> q;
	q.push(start);
	while (q.size()) {
		P tmp = q.front();
		q.pop();
		if (tmp == goal) {
			ans = dis[tmp.first][tmp.second];
			break;
		}
		for (int i = 0; i < 4; i++) {
			int fx = tmp.first + vx[i], fy = tmp.second + vy[i];
			if (fx < 0 || fy < 0 || fx >= h || fy >= w)continue;
			if (!dis[fx][fy] && start != make_pair(fx, fy) && map[fx][fy] != 'X') {
				dis[fx][fy] = dis[tmp.first][tmp.second] + 1;
				q.push(make_pair(fx, fy));
			}
		}
	}
	for (int i = 0; i < h; i++)for (int j = 0; j < w; j++)dis[i][j] = 0;
	return ans;
}

int main() {
	cin >> h >> w >> n;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> map[i][j];
			if (map[i][j] == 'S')goal[0] = make_pair(i, j);
			if (map[i][j] > '0' & map[i][j] <= '9') {
				goal[map[i][j] - '0'] = make_pair(i, j);
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += bfs(goal[i], goal[i + 1]);
	}
	cout << ans << endl;
	return 0;
}