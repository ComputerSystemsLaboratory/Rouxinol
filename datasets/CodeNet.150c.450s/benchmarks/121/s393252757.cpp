#include<iostream>
#include<queue>
#include<cstring>

typedef std::pair<int, int> P;
int dx[] = { 0, 1, 0, -1 }, dy[] = { 1, 0, -1, 0 };

int w, h, ans = 0;
char map[101][101];
bool used[101][101];

void bfs(int sx, int sy){
	std::queue<P> que;
	que.push(P(sx, sy));

	while (!que.empty()){
		P p = que.front();
		que.pop();

		for (int i = 0; i < 4; i++){
			int nx = p.first + dx[i], ny = p.second + dy[i];
			if (nx >= 0 && nx < w && ny >= 0 && ny < h && map[ny][nx] == map[sy][sx] && !used[ny][nx]){
				used[ny][nx] = true;
				que.push(P(nx, ny));
			}
		}
	}
}

int main(){
	while (std::cin >> h >> w, h || w){
		memset(used, 0, sizeof(used));
		ans = 0;

		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				std::cin >> map[i][j];
			}
		}

		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				if (!used[i][j]){
					ans++;
					bfs(j, i);
					used[i][j] = true;
				}
			}
		}

		std::cout << ans << std::endl;
	}
	return 0;
}