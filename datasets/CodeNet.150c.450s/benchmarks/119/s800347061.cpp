#include<queue>
#include<cstdio>
#include<utility>
using namespace std;
typedef pair<int, int> P;
int main() {
	int W, H;
	int i, j, k;
	int map[50][50];
	int vector[8][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
	int count;
	queue<P> q;
	while (1) {
		scanf("%d %d", &W, &H);
		if (!(W||H)) break;
		count = 0;
		for (i = 0; i < H; i ++) for (j = 0; j < W; j ++) scanf("%d", &map[i][j]);
		for (i = 0; i < H; i ++) {
			for (j = 0; j < W; j ++) {
				if (map[i][j]) {
					map[i][j] = 0; count ++;
					q.push(P(i, j));
					while (!q.empty()) {
						P p = q.front(); q.pop();
						int x, y;
						for (k = 0; k < 8; k ++) {
							x = p.first + vector[k][0]; y = p.second + vector[k][1];
							if (-1 < x && x < H && -1 < y && y < W && map[x][y]) {
								q.push(P(x, y));
								map[x][y] = 0;
							}
						}
					}
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}