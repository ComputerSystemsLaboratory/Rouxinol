#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

// How Many Islands?(1160)
const int dx[] = {0, -1, -1, -1, 0, 1, 1, 1};
const int dy[] = {-1, -1, 0, 1, 1, 1, 0, -1};

void solve(vector<vector<int> >&f, int x, int y)
{
	if (x < 0 || x >= (int)f[0].size() || y < 0 || y >= (int)f.size() || f[y][x] == 0)
		return;

	f[y][x] = 0;
	for (int i = 0; i < 8; ++i)
		solve(f, x+dx[i], y+dy[i]);
	return;
}

int main()
{
	int w, h;
	while (cin >> w >> h) {
		if (w == 0 && h == 0)
			break;

		vector<vector<int> > f(h, vector<int>(w));
		for (int i = 0; i < h; ++i) {
			for (int j = 0; j < w; ++j)
				cin >> f[i][j];
		}

		int ans = 0;
		for (int i = 0; i < h; ++i) {
			for (int j = 0; j < w; ++j) {
				if (f[i][j]) {
					solve(f, j, i);
					++ans;
				}
			}
		}
		cout << ans << endl;
	}


	return 0;
}