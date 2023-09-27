#include "stdio.h"
#include "queue"
#include "utility"
#include "climits"

using namespace std;

typedef pair<int, int>P;

int H, W, N;
char field[1001][1001];
int dis[1001][1001];
P target[10];
P start;
P Now;
P dir[4] = { make_pair(1,0),make_pair(-1,0),make_pair(0,1),make_pair(0,-1) };
queue<P>Q;
int ans;

int main() {
	scanf("%d %d %d", &H, &W, &N);
	for (int i = 0; i < H; i++) {
		scanf("%s", field[i]);
	}
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			if (field[i][j] >= '1'&&field[i][j] <= '9') {
				target[field[i][j] - '0'].first = i;
				target[field[i][j] - '0'].second = j;
			}
			if (field[i][j] == 'S') {
				target[0].first = i;
				target[0].second = j;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < H; j++) {
			for (int k = 0; k < W; k++) {
				dis[j][k] = INT_MAX;
			}
		}
		dis[target[i].first][target[i].second] = 0;
		Q.push(target[i]);
		while (!Q.empty()) {
			Now = Q.front();
			for (int j = 0; j < 4; j++) {
				if (Now.first + dir[j].first >= 0 && Now.first + dir[j].first < H&&Now.second + dir[j].second >= 0 && Now.second + dir[j].second < W) {
					if (field[Now.first + dir[j].first][Now.second + dir[j].second] != 'X') {
						if (dis[Now.first][Now.second] + 1 < dis[Now.first + dir[j].first][Now.second + dir[j].second]) {
							Q.push(make_pair(Now.first + dir[j].first, Now.second + dir[j].second));
							dis[Now.first + dir[j].first][Now.second + dir[j].second] = dis[Now.first][Now.second] + 1;
						}
					}
				}
			}
			Q.pop();
		}
		ans += dis[target[i + 1].first][target[i + 1].second];
	}
	printf("%d\n", ans);
	return 0;
}