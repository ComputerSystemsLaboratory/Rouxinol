#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int sum = 0;

void vanish(int h,int stone[10][6]) {
	for (int i = 1; i < h; ++i) {
		for (int j = 0; j < 5; ++j) {
			if (stone[i][j] == 0) {
				for (int k = 0; k < i; ++k) stone[i - k][j] = stone[i - (k + 1)][j];
				stone[0][j] = 0;
			}
		}
	}
}

void puzzle(int h,int stone[10][6]) {
	int num = 1, flag = 0;
	int w;
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < 5; ++j) {
			if (stone[i][j] == stone[i][j + 1] && stone[i][j] != 0) {
				if (num == 1) w = j;
				num++;
			} else if (num >= 3) {
				sum += num * (stone[i][w]);
				for (int k = 0; k < num; ++k) stone[i][w + k] = 0;
				num = 1;
				flag++;
			} else num = 1;
		}
	}
	if (flag != 0) {
		vanish(h, stone);
		puzzle(h, stone);
	}
}

int main() {
	int h;
	while (cin >> h && h != 0) {
		int stone[10][6] = {};
		for (int i = 0; i < h; ++i)
			for (int j = 0; j < 5; ++j)
				cin >> stone[i][j];
		puzzle(h, stone);

		cout << sum << endl;
		sum = 0;
	}

	return 0;
}
