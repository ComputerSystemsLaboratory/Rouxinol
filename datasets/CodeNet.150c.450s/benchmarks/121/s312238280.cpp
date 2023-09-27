#include <iostream>
#include <string>

using namespace std;

int ret, h, w;
string field[128];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

void count(int y, int x, char c)
{
	field[y][x] = '.';

	for (int i = 0; i < 4; i++){
		int ny = y + dy[i], nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= h || nx >= w) continue;
		if (field[ny][nx] == c){
			count(ny, nx, c);
		}
	}

	return;
}

int main(void)
{
	while (cin >> h >> w, h || w){
		for (int i = 0; i < h; i++){
			cin >> field[i];
		}

		ret = 0;
		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				char c = field[i][j];
				if (c == '#' || c == '*' || c == '@'){
					count(i, j, c);
					ret++;
				}
			}
		}
		cout << ret << endl;
	}

	return 0;
}