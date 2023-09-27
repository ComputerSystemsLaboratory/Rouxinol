#include <cstdio>
#include <iostream>
using namespace std;
int ans = 0;
char c[100][100];
void judge(int i, int j) {
	char tmp = c[i][j];
	c[i][j] = 'X';
	if (i > 0&&c[i-1][j]==tmp)judge(i - 1, j);
	if (j > 0&&c[i][j-1]==tmp)judge(i, j - 1);
	if (i < 99&&c[i+1][j]==tmp)judge(i + 1, j);
	if (j < 99&&c[i][j+1]==tmp)judge(i, j + 1);
}
int main() {
	int h, w;
	do {
		ans = 0;
		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++)
				c[i][j] = 'X';
		}
		cin >> h >> w;
		if (h == 0)break;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++)
				cin >> c[i][j];
		}
		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++)
				if (c[i][j] != 'X') { judge(i, j); ans++; }
		}
		cout << ans << endl;
} while (1);
return 0;
	}