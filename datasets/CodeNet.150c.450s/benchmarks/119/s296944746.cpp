#include<iostream>

using namespace std;

int h, w, map[51][51];

void island(int _w, int _h) {
	map[_w][_h] = 2;
	for (int i = -1;i <= 1;i++) {
		for (int j = -1;j <= 1;j++) {
			if (_w + i >= 1 && _w + i <= h&&_h + j >= 1 && _h + j <= w&&map[_w + i][_h + j] == 1) {
				island(_w + i, _h + j);
			}
		}
	}
}

int main() {
	while (cin >> w >> h, w + h) {
		for (int i = 1;i <= h;i++) {
			for (int j = 1;j <= w;j++) {
				cin >> map[i][j];
			}
		}
		int count = 0;
		for (int i = 1;i <= h;i++) {
			for (int j = 1;j <= w;j++) {
				if (map[i][j] == 1) {
					count++, island(i, j);
				}
			}
		}
		cout << count << endl;
		for (int i = 1;i <= 50;i++)for (int j = 1;j <= 50;j++)map[i][j] = -1;
	}
	return 0;
}