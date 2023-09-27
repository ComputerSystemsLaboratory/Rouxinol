#include "stdio.h"
#include "queue"
#include "utility"
using namespace std;
typedef pair<int, int>P;

queue<P>Q;
P now;
P goal[10];
int N;
int W;
int H;
char map[1000][1001] = {};
int x[4] = { 1,0,-1,0 };
int y[4] = { 0,1,0,-1 };
int dis[1000][1001] ;
int ans=0;
int box = 0;

int main() {
	scanf("%d %d %d", &H, &W, &N);
	for (int i = 0; i < H; i++) {
		scanf("%s", map[i]);
	}
	//printf("\n");
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			if (map[i][j] >= '1'&&map[i][j] <= '9') {
				goal[map[i][j] - '0'].first = i;
				goal[map[i][j] - '0'].second = j;
				map[i][j] = '.';
			}
			else if (map[i][j] == 'S') {
				now.first = i;
				now.second = j;
				map[i][j] = '.';
			}
		}
	}
	for (int i = 1; i <= N; i++) {
		Q.push(now);
		//printf("%d %d????????¢?´¢\n", now.first, now.second);
		box = 0;
		for (int j = 0; j < H; j++) {
			for (int k = 0; k < W; k++) {
				dis[j][k] = 10000000;
			}
		}
		dis[Q.front().first][Q.front().second] = 0;
		while (!Q.empty()) {
			for (int j = 0; j < 4; j++) {
				if (map[Q.front().first + y[j]][Q.front().second + x[j]] == '.') {
					if (dis[Q.front().first + y[j]][Q.front().second + x[j]] > dis[Q.front().first][Q.front().second] + 1) {
						now.first = Q.front().first + y[j];
						now.second = Q.front().second + x[j];
						dis[now.first][now.second] = dis[Q.front().first][Q.front().second] + 1;
					//	printf("%d %d??????%d %d????????£???\n", Q.front().first, Q.front().second, now.first, now.second);
						Q.push(now);
						if (now.first == goal[i].first&&now.second == goal[i].second) {
						//	printf("hijiki\n");
							box = dis[now.first][now.second];
							while (!Q.empty()) {
								Q.pop();
							}
							if (Q.empty())break;
						}
					}
				}
			}
			//printf("hijiki\n");
			if (!Q.empty()) {
				Q.pop();
			}
			//printf("hijiki\n");
		}
		//printf("hijiki\n");
		ans += box;
	}
	printf("%d\n", ans);
	return 0;
}