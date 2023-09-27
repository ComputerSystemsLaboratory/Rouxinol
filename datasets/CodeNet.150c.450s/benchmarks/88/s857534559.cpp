#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int w, h;
	if (cin >> h >> w, !(h | w)) {
		return 0;
	}
	int x = h * h + w * w;
	int m[] = {150, 150, 150 * 150 + 150 * 150};
	for (int i = 150; --i;) {
		for (int j = i; --j;) {
			int y = i * i + j * j;
			if (y > x || (x == y && j > h)) {
				if (y < m[2] || (j < m[0])) {
					m[0] = j;
					m[1] = i;
					m[2] = y;
				}
			} else {
				break;
			}
		}
	}
	printf("%d %d\n", m[0], m[1]);
	return main();
}