#include <iostream>
using namespace std;

int dfs(int x,int y,int f[32][32]) {
	int n = 1;
	f[x][y] = 0;
	if (f[x + 1][y] == 1)
		n += dfs(x + 1, y, f);
	if (f[x - 1][y] == 1)
		n += dfs(x - 1, y, f);
	if (f[x][y + 1] == 1)
		n += dfs(x, y + 1, f);
	if (f[x][y - 1] == 1)
		n += dfs(x, y - 1, f);
	return n;
}


int main()
{
	while (true) {
		int w, h;
		cin >> w >> h;
		if (w == 0 && h == 0)break;
		int floor[32][32] = {};
		int startX = 0;
		int startY = 0;
		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= w; j++) {
				char c;
				cin >> c;
				if (c == '.' || c == '@') {
					floor[i][j] = 1;
					if (c == '@') {
						startX = i;
						startY = j;
					}
				}
				else if (c == '#')floor[i][j] = 0;
			}
		}
		int cnt = dfs(startX, startY, floor);
		cout << cnt << endl;
	}
    return 0;
}