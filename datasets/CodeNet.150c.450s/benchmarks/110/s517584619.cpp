#include <iostream>
#include <cmath>
#include <queue>
#include <cstdio>
#include <cstring>
#include <algorithm>

#define INF 0x7f7f7f7f
#define PI acos(-1.0)

#define L(x)    (x) << 1
#define R(x)    (x) << 1 | 1
#define lowbit(x)   (x)&(-x)
#define Mid(l, r)   (l + r) >> 1
#define Min(x, y)   (x) < (y) ? (x) : (y)
#define Max(x, y)   (x) < (y) ? (y) : (x)
#define iabs(x)     (x) < 0 ? -(x) : (x)
#define CLR(arr, val)    memset(arr, val, sizeof(arr))

using namespace std;

char map[1024][1024];
bool vis[1024][1024];
int cur, h, w;
int dir[4][2] = {1, 0, -1, 0, 0, 1, 0, -1};

struct node {
	int x, y, step;
} sta, now;

bool check(int x, int y) {
	if (x >= 0 && x < h && y >= 0 && y < w && !vis[x][y] && map[x][y] != 'X')	return true;
	return false;
}



void bfs(node s) {
	memset(vis, 0, sizeof(vis));

	queue<node> que;
	s.step = 0;
	que.push(s);
	node next;
	while (!que.empty()) {
//		cout << "h\n";
		s = que.front();
//		cout << s.x << ' ' << s.y << ' ' << cur << endl;
		que.pop();
		if (map[s.x][s.y] == cur + '0')	{
			sta = s;
			return ;
//			s.step;
		}

//		cout << "a\n";
		for (int i = 0; i < 4; i++) {
//			cout << i << endl;
			next.x = s.x + dir[i][0];
			next.y = s.y + dir[i][1];
			next.step = s.step + 1;
			if (check(next.x, next.y)) {
				vis[next.x][next.y] = true;
				que.push(next);
			}

		}
	}
}

int main() {
	int n;
	while (cin >> h >> w >> n) {
//		memset(map, 0, sizeof(map));
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> map[i][j];
				if (map[i][j] == 'S')	sta.x = i, sta.y = j, map[i][j] = '.';
			}
		}
		sta.step = 0;
		int ans = 0;
		for (cur = 1; cur <= n; cur++) {
			bfs(sta);
			ans += sta.step;
			//cout << ans << endl;
		}
		cout << ans << endl;
	}
	return 0;
}