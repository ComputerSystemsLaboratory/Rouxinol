#include <iostream>
using namespace std;

char T[102][102];

void DFS(int y, int x, char f) {

	if (T[y][x] != f)
		return;

	T[y][x] = '?';

	DFS(y - 1, x, f);
	DFS(y, x + 1, f);
	DFS(y + 1, x, f);
	DFS(y, x - 1, f);

}

int main() {

	int h, w;

	while (1) {
		cin >> h >> w;
		if (h == 0 && w == 0) {
			break;
		}


		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= w; j++) {
				cin >> T[i][j];
			}
		}

		int count = 0;

		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= w; j++) {
				if (T[i][j] == '@') {
					count++;
					DFS(i, j, '@');
				}
				else if (T[i][j] == '#') {
					count++;
					DFS(i, j, '#');
				}
				else if (T[i][j] == '*') {
					count++;
					DFS(i, j, '*');
				}
			}
		}


		cout << count << endl;

	}
	return 0;
}