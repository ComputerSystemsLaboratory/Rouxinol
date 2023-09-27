#include <iostream>
using namespace std;

int map[10][5], h, ans = 0;

int main() {

	while (true) {
		cin >> h;
		if (h == 0)break;

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < 5; j++) {
				cin >> map[i][j];
			}
		}

		while (true) {
			int ans2 = 0;
			bool flag = false;
			for (int i = 0; i < h; i++) {
				int c = 0;
				//cout << "i:" << i << endl;
				for (int j = 1; j < 5; j++) {
					if (map[i][j - 1] == map[i][j]) {
						c++;
						//cout << "map[h][j - 1]:" << map[h][j - 1] << " map[h][j]:" << map[h][j] << endl;
					}
					else if (c >= 2) {
						//flag = true;
						for (int k = 0; k < c + 1; k++) {
							ans2 += map[i][j - 1 - k];
							map[i][j - 1 - k] = 0;
						}
						c = 0;
					}//??£????????£??????????????????????????????
					else {
						c = 0;
					}

					if (map[i][j - 1] == map[i][j] && c >= 2 && j == 4) {
						//flag = true;
						for (int k = 0; k < c + 1; k++) {
							ans2 += map[i][j - k];
							map[i][j - k] = 0;
						}
					}
					//cout << "c;" << c << " ";
				}
				//cout << endl;
				c = 0;
			}

			/*for (int i = 0; i < h; i++) {
				for (int j = 0; j < 5; j++) {
					cout << map[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;*/

			for (int i = h - 1; i >= 0; i--) {
				for (int j = 0; j < 5; j++) {
					if (map[i][j] == 0) {
						for (int k = i; k >= 0; k--) {
							if (map[k][j] != 0) {
								flag = true;
								map[i][j] = map[k][j];
								map[k][j] = 0;
								break;
							}
						}
					}
				}
			}
			/*for (int i = 0; i < h; i++) {
				for (int j = 0; j < 5; j++) {
					cout << map[i][j] << " ";
				}
				cout << endl;
			}*/
			
			//cout << "ans2:" << ans2 << endl;
			ans += ans2;
			if (!flag)break;
		}

		cout << ans << endl;
		ans = 0;
	}
}