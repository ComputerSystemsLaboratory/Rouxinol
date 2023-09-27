#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};
string field[128];
int h, w;

void rec(int y, int x, char target)
{
	field[y][x] = '.';
	for (int i = 0; i < 4; i++){
		int ny = y + dy[i], nx = x + dx[i];
		if (0 > ny || 0 > nx || ny >= h || nx >= w) continue;
		if (field[ny][nx] == target) rec(ny, nx, target);
	}
	return;
}

int main(void)
{
	while (cin >> h >> w){
		if (h == 0 && w == 0) break;
		for (int i = 0; i < h; i++){
			cin >> field[i];
		}
		int ret = 0;

		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				// cout << field[i][j] << " ";
				if (field[i][j] != '.'){
					ret++;
					rec(i, j, field[i][j]);
				}
			}
		}
		// puts("");
		cout << ret << endl;
	}

	return 0;
}