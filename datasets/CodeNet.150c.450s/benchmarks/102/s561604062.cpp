#include <iostream>
#include <string>

using namespace std;

/*??°?????????????????°*/
int W, H, ans;
int tile[20][20];

/*??¢??°??????????????????*/
void DPS(int x, int y);

int main() {
	int sx = 0, sy = 0;
	string str;

	while (cin >> W >> H, W, H) {
		/*??\???*/
		for (int i = 0; i < H; i++) {
			cin >> str;
			for (int j = 0; j < W; j++) {
				tile[i][j] = (str[j] == '#') ? 0 : 1;
				
				if (str[j] == '@') {
					sx = j;
					sy = i;
				}
			}
		}

		ans = 0;
		DPS(sx, sy);

		cout << ans << endl;
	}
}

void DPS(int x, int y) {
	if (tile[y][x]) {
		tile[y][x] = 0;
		ans++;
		
		if (x - 1 >= 0)	DPS(x - 1, y);
		if (x + 1 < W)	DPS(x + 1, y);
		if (y - 1 >= 0)	DPS(x, y - 1);
		if (y + 1 < H)	DPS(x, y + 1);
	}

	return;
}