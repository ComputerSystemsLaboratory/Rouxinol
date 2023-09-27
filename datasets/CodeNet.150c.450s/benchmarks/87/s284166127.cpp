#include<iostream>
using namespace std;

int x[2000][5], H;

int solve() {
	int score = 0;
	for (int i = 0; i < 500; i++)
	{
		for (int j = 0; j < H; j++)
		{
			if (x[j][0] == x[j][1] && x[j][1] == x[j][2] && x[j][2] == x[j][3] && x[j][3] == x[j][4] && x[j][0] >= 1) {
				score += x[j][0] * 5;
				x[j][0] = 0;
				x[j][1] = 0;
				x[j][2] = 0;
				x[j][3] = 0;
				x[j][4] = 0;
			}
		}
		for (int j = 0; j < H; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				if (x[j][k + 0] == x[j][k + 1] && x[j][k + 1] == x[j][k + 2] && x[j][k + 2] == x[j][k + 3] && x[j][k + 0] >= 1) {
					score += x[j][k + 0] * 4;
					x[j][k + 0] = 0;
					x[j][k + 1] = 0;
					x[j][k + 2] = 0;
					x[j][k + 3] = 0;
				}
			}
		}
		for (int j = 0; j < H; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				if (x[j][k + 0] == x[j][k + 1] && x[j][k + 1] == x[j][k + 2] && x[j][k + 0] >= 1) {
					score += x[j][k + 0] * 3;
					x[j][k + 0] = 0;
					x[j][k + 1] = 0;
					x[j][k + 2] = 0;
				}
			}
		}
		for (int j = 0; j < 500; j++) {
			for (int j = 1; j < H; j++) {
				for (int k = 0; k < 5; k++) {
					if (x[j][k] == 0) {
						x[j][k] = x[j - 1][k];
						x[j - 1][k] = 0;
					}
				}
			}
		}
	}
	return score;
}

int main() {
	while (true) {
		cin >> H;
		if (H == 0) { break; }
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < 5; j++) {
				cin >> x[i][j];
			}
		}
		cout << solve() << endl;
	}
	return 0;
}