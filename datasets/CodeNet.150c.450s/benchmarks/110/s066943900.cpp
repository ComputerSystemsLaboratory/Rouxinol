#include<iostream>
#include<deque>
#include<memory.h>

using namespace std;

int H, W, N;
char mapT[1000][1000];
int vis[1000][1000];
int temp_x = 0, temp_y;
char temp;
int final_min_route = 0;
int dir[4][2] = { {-1,0},{0,1},{1,0},{0,-1} };

struct location {
	int x, y, route;
};

location findSmallRouteBFS(int x, int y, char factory) {
	memset(vis, 0, sizeof(vis));
	deque<location> que;
	location temp = { x,y,0 };
	que.push_back(temp);
	vis[x][y] = 1;
	while (!que.empty()) {
		location st = que.front();
		que.pop_front();
		if (mapT[st.x][st.y] == factory) {
			return st;
		}
		for (int i = 0; i < 4; ++i) {
			int t_x = st.x + dir[i][0];
			int t_y = st.y + dir[i][1];
			if (t_x < 0 || t_x >= H || t_y < 0 || t_y >= W || mapT[t_x][t_y] == 'X') {
				continue;
			}
			location temp = { t_x,t_y,st.route + 1 };
			if (!vis[t_x][t_y]) {
				vis[t_x][t_y] = 1;
				que.push_back(temp);
			}
		}
	}

}

int main() {
	cin >> H >> W >> N;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; ++j) {
			cin >> temp;
			mapT[i][j] = temp;
			if (temp == 'S') {
				mapT[i][j] = '0';
				temp_x = i;
				temp_y = j;
			}
		}
	}

	for (int factory = 1; factory != N + 1; ++factory) {

		location lo = findSmallRouteBFS(temp_x, temp_y, mapT[temp_x][temp_y] + 1);
		temp_x = lo.x;
		temp_y = lo.y;
		final_min_route += lo.route;
	}

	cout << final_min_route << endl;
	//system("pause");
	return 0;
}