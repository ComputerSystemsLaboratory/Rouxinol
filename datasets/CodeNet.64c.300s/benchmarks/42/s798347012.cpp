#include <iostream>
#include <cstdio>
using namespace std;


int main() {
	while (true) {
		int n, m;
		int f[25][25] = { 0 }, nowx = 0, nowy = 0;
		nowx = 10, nowy = 10;
		cin >> n;
		if (n == 0) return 0;
		for (int i = 0; i < n; i++) {
			int x, y;
			cin >> x >> y;
			f[x][y] = 1;
		}
		cin >> m;
		for (int i = 0; i < m; i++) {
			char c;
			int num;
			cin >> c >> num;
			if (c == 'N') {
				for (int j = 0; j <= num; j++) {
					f[nowx][nowy + j] = 0;
				}
				nowy += num;
			}
			if (c == 'E') {
				for (int j = 0; j <= num; j++) {
					f[nowx+j][nowy] = 0;
				}
				nowx += num;
			}
			if (c == 'S') {
				for (int j = 0; j <= num; j++) {
					f[nowx][nowy - j] = 0;
				}
				nowy -= num;
			}
			if (c == 'W') {
				for (int j = 0; j <= num; j++) {
					f[nowx-j][nowy] = 0;
				}
				nowx -= num;
			}
		}
		for (int i = 0; i <= 20; i++) {
			for (int j = 0; j <= 20; j++) {
				if (f[i][j] == 1) {
					printf("No\n");
					goto e;
				}
			}
		}
		printf("Yes\n");
	e:;
	}
	return 0;
}
