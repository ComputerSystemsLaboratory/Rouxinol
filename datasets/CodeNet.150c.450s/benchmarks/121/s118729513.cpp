#include <iostream>
#include <vector>

using namespace std;

int H, W;
vector<string> m;

void paint(int x, int y, char c) {
	if (x < 0 || x >= W || y < 0 || y >= H) return;
	if (m[y][x] != c) return;
	m[y][x] = ' ';

	paint(x-1, y, c);
	paint(x+1, y, c);
	paint(x, y-1, c);
	paint(x, y+1, c);
}

int main() {
	while ( cin >> H >> W, H || W ) {
		m.clear(); m.resize(H);
		for (int y = 0; y < H; ++y) {
			string str; cin >> str;
			m[y] = str;
		}
		int ans = 0;
		for (int y = 0; y < H; ++y) {
			for (int x = 0; x < W; ++x) {
				if (m[y][x] != ' ') {
					paint(x, y, m[y][x]);
					++ans;
				}
			}
		}
		cout << ans << endl;
	}
}