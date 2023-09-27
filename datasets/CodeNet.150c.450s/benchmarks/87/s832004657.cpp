#include <iostream>
#include <vector>

using namespace std;

int main() {
	int h;
	while (cin >> h) {
		if (h == 0) {
			break;
		}
		vector< vector<int> > data(h, vector<int>(5));
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < 5; j++) {
				cin >> data[i][j];
			}
		}
		int point = 0;
		while (true) {
			vector< vector<int> > prev = data;
			int ans = 0;
			for (int i = 0; i < h; i++) {
				for (int j = 0; j < 3; j++) {
					if (data[i][j] == data[i][j + 1] && data[i][j] == data[i][j + 2]) {
						if (j < 2 && data[i][j] == data[i][j + 3]) {
							if (j < 1 && data[i][j] == data[i][j + 4]) {
								ans += data[i][j] * 5;
								data[i][j] = data[i][j + 1] = data[i][j + 2] = data[i][j + 3] = data[i][j + 4] = 0;
								continue;
							}
							ans += data[i][j] * 4;
							data[i][j] = data[i][j + 1] = data[i][j + 2] = data[i][j + 3] = 0;
							continue;
						}
						ans += data[i][j] * 3;
						data[i][j] = data[i][j + 1] = data[i][j + 2] = 0;
						break;
					}
				}
			}
			for (int j = 0; j < 5; j++) {
				for (int i = h-1; i >=0; i--) {
					if (data[i][j] == 0) {
						for (int k = i -1; k >= 0; k--) {
							if (data[k][j] != 0) {
								data[i][j] = data[k][j];
								data[k][j] = 0;
								break;
							}
						}
					}
				}
			}
			point += ans;
			if (data == prev) {
				break;
			}
		}
		cout << point << endl;
	}
	return 0;
}
