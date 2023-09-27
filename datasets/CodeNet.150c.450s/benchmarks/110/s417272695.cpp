#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

typedef std::pair<int, int> T;

const int vecx[4] = { 1,0,-1,0 };
const int vecy[4] = { 0,-1,0,1 };
int h, w, n;
T goal[10];
char filed[1000][1000];
int si, sj;
int ans;
int dis[1000][1000];

void bfs(T _goal, T _start) {
	std::queue<T> q;
	q.push(_start);
	while (q.size()) {
		T tmp = q.front();
		q.pop();
		if (tmp == _goal) {
			ans += dis[_goal.first][_goal.second];
			break;
		}
		int x = tmp.first;
		int y = tmp.second;
		for (int i = 0; i < 4; i++) {
			if (x + vecx[i] < 0 || x + vecx[i] >= h || y + vecy[i] < 0 || y + vecy[i] >= w)continue;
			if (filed[x + vecx[i]][y + vecy[i]] != 'X' && !dis[x + vecx[i]][y + vecy[i]]) {
				dis[x + vecx[i]][y + vecy[i]] = dis[x][y] + 1;
				q.push(std::make_pair(x + vecx[i], y + vecy[i]));
			}
		}
	}
}

int main() {
	std::cin >> h >> w >> n;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			std::cin >> filed[i][j];
			if (filed[i][j] == 'S') {
				goal[0].first = i;
				goal[0].second = j;
			}
			if (filed[i][j] > '0' && filed[i][j] <= '9') {
				goal[filed[i][j] - '0'].first = i;
				goal[filed[i][j] - '0'].second = j;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		bfs(goal[i + 1], goal[i]);
		for (int j = 0; j < h; j++)for (int k = 0; k < w; k++)dis[j][k] = 0;
	}
	std::cout << ans << std::endl;
	return 0;
}