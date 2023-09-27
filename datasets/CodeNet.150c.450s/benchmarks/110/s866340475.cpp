//#define LOCAL

#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>

#define SIZE 1010

using namespace std;

char map[SIZE][SIZE];
int dir[][2] = {0, 1, 0, -1, 1, 0, -1, 0};

int bfs(int &x, int &y, int h, int w, int target){
	int step[SIZE][SIZE];
	for(int i = 0; i < h; i++)
		fill(step[i], step[i] + w, -1);
	step[x][y] = 0;

	queue<pair<int, int> > q;
	q.push(make_pair(x, y));

	while(!q.empty()){
		pair<int, int> temp = q.front();
		q.pop();

		if(map[temp.first][temp.second] == target + '0'){
			x = temp.first;
			y = temp.second;
			return step[x][y];
		}

		for(int i = 0; i < 4; i++){
			int newx = temp.first + dir[i][0];
			int newy = temp.second + dir[i][1];

			if(0 <= newx && newx < h && 0 <= newy && newy < w
				&& step[newx][newy] == -1 
				&& map[newx][newy] != 'X'){
				q.push(make_pair(newx, newy));
				step[newx][newy] = step[temp.first][temp.second] + 1;
			}
		}
	}
}

int main(void){
#ifdef LOCAL
	freopen("data.in", "r", stdin);
#endif
	int n, w, h;
	int x, y;

	scanf("%d%d%d", &h, &w, &n);
	getchar();
	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++){
			scanf("%c", &map[i][j]);

			if(map[i][j] == 'S'){
				x = i;
				y = j;
			}
		}
		getchar();
	}

	int result = 0;
	for(int i = 1; i <= n; i++)
		result += bfs(x, y, h, w, i);

	printf("%d\n", result);

	return 0;
}
