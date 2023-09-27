#include <cstdio>


char board[20][20] = {};
int W, H;

int count(int x, int y) {
	if (board[x][y] == '#') return 0;
	if (x < 0 || W <= x) return 0;
	if (y < 0 || H <= y) return 0;

	board[x][y] = '#';

	return 1 +
		count(x - 1, y) +
		count(x + 1, y) +
		count(x, y - 1) +
		count(x, y + 1);
}

int main() {
	while (true) {

		scanf("%d %d", &W, &H);

		if (W == 0) break;

		int cx, cy;

		for (int y = 0; y < H; y++) {
			char buf[21];
			scanf("%s", buf);
			for (int x = 0; x < W; x++) {
				board[x][y] = buf[x];
				if (buf[x] == '@') {
					cx = x; cy = y;
				}
			}
		}

		printf("%d\n", count(cx, cy));
	}

	return 0;
}