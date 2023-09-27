#include <iostream>
using namespace std;

int res;
int H, W; // H?????????W????¨?
char HW[102][102], htm;

void zahyo(int x, int y) {
	if (HW[x][y] == HW[x + 1][y] && x > -1 && x < H - 1 && y > -1 && y < W) {
		htm = HW[x][y];
		HW[x][y] = '.';
		zahyo(x + 1, y);
		HW[x][y] = htm;
	}
	if (HW[x][y] == HW[x - 1][y] && x > 0 && x < H && y > -1 && y < W) {
		htm = HW[x][y];
		HW[x][y] = '.';
		zahyo(x - 1, y);
		HW[x][y] = htm;
	}
	if (HW[x][y] == HW[x][y - 1] && x > -1 && x < H && y > 0 && y < W) {
		htm = HW[x][y];
		HW[x][y] = '.';
		zahyo(x, y - 1);
		HW[x][y] = htm;
	}
	if (HW[x][y] == HW[x][y + 1] && x > -1 && x < H && y > -1 && y < W - 1) {
		htm = HW[x][y];
		HW[x][y] = '.';
		zahyo(x, y + 1);
	}
	HW[x][y] = '.';
}

int main() {
	for (int i = 0; i < 21; i++) {
		cin >> H >> W;
		if (H == 0 && W == 0) {
			return 0;
		}
		for (int j = 0; j < H; j++) {
			for (int k = 0; k < W; k++) {
				cin >> HW[j][k];
			}
		} 
		//?????°??????????????????
		for (int j = 0; j < H; j++) {
			for (int k = 0; k < W ; k++) {
				if (HW[j][k] != '.') {
					zahyo(j, k);
					res++;
				}
			}
		}
		cout << res << "\n";
                res = 0;
	}
}