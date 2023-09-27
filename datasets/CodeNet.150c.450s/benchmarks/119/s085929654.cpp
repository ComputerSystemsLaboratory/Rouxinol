#include <iostream>

using namespace std;

int w, h;
int m[50][50];
void paint(int x, int y) {
	if (x < 0 || x >= w || y < 0 || y >= h) return;
	if (m[y][x] == 0) return;
	m[y][x] = 0;
	for (int dx = -1; dx <= 1; ++dx) for (int dy = -1; dy <= 1; ++dy) {
		paint(x+dx, y+dy);
	}
}
int main() {
	while ( cin >> w >> h, w || h ) {
		for (int y = 0; y < h; ++y) {
			for (int x = 0; x < w; ++x) {
				cin >> m[y][x];
			}
		}
		int ans = 0;
		for (int y = 0; y < h; ++y) {
			for (int x = 0; x < w; ++x) {
				if (m[y][x]) {
					paint(x, y);
					++ans;
				}
			}
		}
		cout << ans << endl;
	}
}