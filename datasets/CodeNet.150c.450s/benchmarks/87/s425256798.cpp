#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int map[60][5];
int main(void) {
	vector<int> list;
	for (;;) {
		int  h,score=0;
		cin >> h;
		if (!h)return 0;
		int cnt = 1;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < 5; j++) {
				cin >> map[i][j];
			}
		}
		bool update = true;
		for (; update;) {
			update = false;
			for (int i = 0; i < h; i++) {
				int pos = 0, num = 0, cnt = 0;
				for (int j = 0; j < 5; j++) {
					if (num != map[i][j]) {
						if (cnt > 2 && num) {
							for (int j = pos; j < pos + cnt; j++) {
								map[i][j] = 0;
							}
							score += num*cnt;
							update = true;
						}
						pos = j;
						num = map[i][j];
						cnt = 1;
					}
					else cnt++;
				}
				if (cnt > 2 && num) {
					for (int j = pos; j < pos + cnt ; j++) {
						map[i][j] = 0;
					}
					score += num*cnt;
					update = true;
				}
			}
			for (int j = 0; j < 5; j++) {
				int pos = h - 1;
				for (int i = h - 1; i >= 0; i--) {
					if (map[i][j]) {
						map[pos][j] = map[i][j];
						if (pos != i)map[i][j] = 0;
						pos--;
					}
				}
			}
		}
		cout << score << endl;
	}
	return 0;
}