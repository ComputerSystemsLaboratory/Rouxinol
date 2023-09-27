#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int tile[22][22];
int w, h;
int cnt;

void fill(int x, int y) {
	tile[x][y] = 0;
	cnt++;
	if (tile[x - 1][y] == 1) fill(x - 1, y);
	if (tile[x][y - 1] == 1) fill(x, y - 1);
	if (tile[x][y + 1] == 1) fill(x, y + 1);
	if (tile[x + 1][y] == 1) fill(x + 1, y);
}

int main() {
	int x = 0, y = 0;
	while (cin >> w >> h && (w || h)) {
		cnt = 0;
		for (int i = 0; i < 22; ++i) for (int j = 0; j < 22; ++j) tile[i][j] = 0;
		for (int i = 1; i <= h; ++i){
			for (int j = 1; j <= w; ++j) {
				char tmp;
				cin >> tmp;
				if (tmp == '.') tile[i][j] = 1;
				else if (tmp == '#') tile[i][j] = 0;
				else x = i, y = j, tile[i][j] = 1;
			}
		}
		fill(x, y);
		cout << cnt << endl;
	}

	return 0;
}
