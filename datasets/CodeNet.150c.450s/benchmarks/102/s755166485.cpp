#include <iostream>

using namespace std;

int width, height;
int ans = 0;
char map[20][20];
int checked[20][20];

void search(int x, int y);
int main(){
	while (1) {
		ans = 0;
		for (int y=0; y<20; y++) {
			for (int x=0; x<20; x++) {
				map[y][x] = '#';
				checked[y][x] = 0;
			}
		}
		cin >> width >> height;
		if (width==0 && height==0) {
			break;
		}

		int startX, startY;
		for (int y=0; y<height; ++y) {
			for (int x=0; x<width; ++x) {
				cin >> map[y][x];
				if (map[y][x] == '@') {
					map[y][x] = '.';
					startX = x;
					startY = y;
				}
			}
		}
		search(startX, startY);
		cout << ans << endl;
	}
	return 0;
}
void search(int x, int y) {
	ans++;
	static const int diffX[] = {0,-1,1,0};
	static const int diffY[] = {-1,0,0,1};
	checked[y][x] = 1;
	for (int ite=0; ite<4; ++ite) {
		int nowX = x + diffX[ite];
		int nowY = y + diffY[ite];
		if (nowX < 0 || nowX >= 20 || nowY < 0 || nowY >= 20) continue;
		if (checked[nowY][nowX] == 0 && map[nowY][nowX] == '.') {
			search(nowX, nowY);
		}
	}
}