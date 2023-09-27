#include<iostream>
char d[100][100];
int H, W;
int ans;
char tmp;
int solve(int a, int b) {
	d[a][b] = 'a';
	if (b + 1 < W && d[a][b + 1] == tmp) {
		d[a][b + 1] = 'a';
		solve(a, b + 1);
	}
	if (a + 1 < H && d[a + 1][b] == tmp) {
		d[a + 1][b] = 'a';
		solve(a+1,b);
	}
	if (a - 1 >= 0 && d[a - 1][b] == tmp) {
		d[a - 1][b] = 'a';
		solve(a-1,b);
	}
	if (b - 1 >= 0 && d[a][b - 1] == tmp) {
		d[a][b - 1] = 'a';
		solve(a,b-1);
	}
	return 0;
}
int main() {
	while (true) {
		std::cin >> H >> W;
		if (H == 0 && W == 0) {
			break;
		}
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				std::cin >> d[i][j];
			}
		}
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				if (d[i][j] != 'a') {
					ans++;
					tmp = d[i][j];
					solve(i, j);
				}
			}
		}
		std::cout << ans << "\n";
		ans = 0;
	}
	return 0;
}