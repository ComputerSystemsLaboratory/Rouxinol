#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main() {
	int H;
	cin >> H;
	if (!H) {
		return 0;
	}
	vector< vector<int> > b(H, vector<int>(6));
	for (int i = 0; i < H; i++) {
		cin >> b[i][0] >> b[i][1] >> b[i][2] >> b[i][3] >> b[i][4];
		b[i][5] = 0;
	}
	int ans = 0;
	int score = -1;
	while (score) {
		score = 0;
		for (int i = 0; i < H; i++) {
			int prev = b[i][0];
			int index = 0;
			int length = 1;
			for (int j = 1; j <= 5; j++) {
				if (b[i][j] == prev) {
					length++;
				} else {
					if (length >= 3) {
						score += prev * length;
						for (int k = index; k < index + length; k++) {
							b[i][k] = 0;
						}
					}
					prev = b[i][j];
					index = j;
					length = 1;
				}
			}
		}
		vector< vector<int> > t(H, vector<int>(6, 0));
		for (int j = 0; j < 5; j++) {
			for (int i = H, k = H - 1; i--;) {
				if (b[i][j]) {
					t[k][j] = b[i][j];
					k--;
				}
			}
		}
		ans += score;
		b = t;
	}
	cout << ans << endl;
	return main();
}