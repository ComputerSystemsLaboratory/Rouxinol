#include<iostream>
#include<queue>
#include<cstring>

typedef std::pair<int, int> P;
int dx[] = { 0, 1, 0, -1 }, dy[] = { 1, 0, -1, 0 };

int w, h;
char map[1001][1001];
P point[10];
int used[1001][1001];

int bfs(int sx, int sy, int gx, int gy){
	memset(used, -1, sizeof(used));
	used[sy][sx] = 0;

	std::queue<P> que;
	que.push(P(sx, sy));
	
	while (!que.empty()){
		P p = que.front();
		que.pop();

		if (p.first == gx && p.second == gy)break;
		
		for (int i = 0; i < 4; i++){
			int nx = p.first + dx[i], ny = p.second + dy[i];
			if (nx >= 0 && nx < w && ny >= 0 && ny < h && map[ny][nx] != 'X' && used[ny][nx] == -1){
				used[ny][nx] = used[p.second][p.first] + 1;
				que.push(P(nx, ny));
			}
		}
	}

	return used[gy][gx];
}

int main(){
	int n, ans = 0;

	std::cin >> h >> w >> n;

	for (int i = 0; i < h; i++){
		for (int j = 0; j < w; j++){
			std::cin >> map[i][j];

			if (map[i][j] == 'S')point[0] = P(j, i);
			if (1 <= (map[i][j] - '0') && (map[i][j] - '0') <= 9)point[map[i][j] - '0'] = P(j, i);
		}
	}

	for (int i = 0; i < n; i++){
		ans += bfs(point[i].first, point[i].second, point[i + 1].first, point[i + 1].second);
	}

	std::cout << ans << std::endl;

	return 0;
}