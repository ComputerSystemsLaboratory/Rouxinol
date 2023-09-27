#include<iostream>
#include<cstdio>
using namespace std;

int main(void)
{
	int n, b, f, r, v;
	int room[4][3][10];
	int i = 0;
	char bar[21] = { "####################" };

	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 3;j++) {
			for (int k = 0;k < 10;k++) {
				room[i][j][k] = 0;
			}
		}
	}

	cin >> n;
	for (int i = 0;i < n;i++) {
		do {
			cin >> b >> f >> r >> v;
			room[b - 1][f - 1][r - 1] += v;
			if (room[b - 1][f - 1][r - 1] > 9) room[b - 1][f - 1][r - 1] = 9;
			else if (room[b - 1][f - 1][r - 1] < 0) room[b - 1][f - 1][r - 1] = 0;
		} while (b < 0 || b > 4 || f < 0 || f > 3 || r < 0 || r > 10);
	}
	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 3;j++) {
			for (int k = 0;k < 10;k++) {
				printf(" %d", room[i][j][k]);
			}
			printf("\n");
		}
		if (i < 3) printf("%s\n", bar);
	}

	return 0;
}