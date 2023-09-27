#include <iostream>
#include <cstdio>

using namespace std;

struct Square{
	int x;
	int y;
};

int main(void) {
	for (;;) {
		int max_x = 0;
		int min_x = 0;
		int max_y = 0;
		int min_y = 0;

		Square sqrs[200];
		sqrs[0].x = 0;
		sqrs[0].y = 0;

		int n;
		cin >> n;
		if (n == 0)
			break;

		for (int i = 1; i < n; i++) {
			int num, d;
			cin >> num >> d;

			int x, y;
			x = sqrs[num].x;
			y = sqrs[num].y;

			switch (d) {
			case 0:
				x--;
				break;
			case 1:
				y--;
				break;
			case 2:
				x++;
				break;
			case 3:
				y++;
				break;
			}
			sqrs[i].x = x;
			sqrs[i].y = y;

			if (x > max_x) {
				max_x = x;
			} else if (x < min_x) {
				min_x = x;
			}
			if (y > max_y) {
				max_y = y;
			} else if (y < min_y) {
				min_y = y;
			}
		}
		printf("%d %d\n", max_x - min_x + 1, max_y - min_y + 1);
	}
	return 0;
}