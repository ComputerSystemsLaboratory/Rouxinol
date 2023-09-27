#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

static const int mx[] = {1, 0, -1,  0};
static const int my[] = {0, 1,  0, -1};
static const char cheese_arr[] = {"123456789"};

static const int MAX_MAP_X = 1001;
static const int MAX_MAP_Y = 1001;

static bool visited[MAX_MAP_Y - 1][MAX_MAP_X - 1];

struct MOUSE
{

	int x;
	int y;
	int cnt;

};

int main()
{

	int W, H, N;
	int ans = 0, now_search = 0;
	char MAP[MAX_MAP_Y][MAX_MAP_X];
	bool brkFlg = false;
	queue<MOUSE> search_cheese;

	cin >> H >> W >> N;
	for(int i = 0; i < H; i++) {
		cin >> MAP[i];
		for(int j = 0; j < W || !brkFlg; j++) {
			if(MAP[i][j] == 'S') {
				MOUSE in;
				in.x = j;
				in.y = i;
				in.cnt = 0;
				memset(visited, false, sizeof(visited));
				search_cheese.push(in);
				brkFlg = true;
			}
		}
	}

	brkFlg = false;

	while(!brkFlg) {
		MOUSE next, mouse_info = search_cheese.front();
		search_cheese.pop();
		for (int i = 0; i < 4; i++) {
			int nx = mouse_info.x + mx[i];
			int ny = mouse_info.y + my[i];
			if (nx > -1 && nx < W && ny > -1 && ny < H) {
				if (MAP[ny][nx] == cheese_arr[now_search]) {
					ans += mouse_info.cnt + 1;
					now_search++;
					if(now_search == N) {
						brkFlg = true;
						break;
					}
					while(!search_cheese.empty()) search_cheese.pop();
					mouse_info.x = nx;
					mouse_info.y = ny;
					mouse_info.cnt = 0;
					memset(visited, false, sizeof(visited));
					search_cheese.push(mouse_info);
				}
				else if(MAP[ny][nx] != 'X' && !visited[ny][nx]) {
					next = mouse_info;
					next.x = nx;
					next.y = ny;
					next.cnt++;
					visited[ny][nx] = true;
					search_cheese.push(next);
				}
			}
		}
	}

	cout << ans << endl;

	return 0;

}