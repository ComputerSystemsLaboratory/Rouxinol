#include<stdio.h>

int block[10][5];
int p[10000];
void trace(int h);

void del(int h,int c) {
	int P2;
	while (1) {
		P2 = p[c];
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < 3; j++) {
				if (block[i][j] == block[i][j + 1] && block[i][j + 1] == block[i][j + 2]) {
					p[c] += block[i][j] * 3;
					if (j < 2) {
						if (block[i][j + 2] == block[i][j + 3]) {
							p[c] += block[i][j];
							if (j < 1) {
								if (block[i][j + 3] == block[i][j + 4]) {
									p[c] += block[i][j];
									for (int k = j; k < 5; k++) block[i][k] = 0;
									break;
								}
							}
							for (int k = j; k < j + 4; k++) block[i][k] = 0;
							break;
						}
					}
					for (int k = j; k < j + 3; k++) block[i][k] = 0;
					break;
				}
			}
		}
		if (P2 == p[c]) break;
		trace(h);
	}

}

void trace(int h) {
	
	for (int s = 0; s < h; s++) {
		for (int i = h - 1; i >= 0; i--) {
			for (int j = 0; j < 5; j++) {
				if (block[i][j] == 0) {
					block[i][j] = block[i - 1][j];
					block[i - 1][j] = 0;
				}
			}
		}
	}
	
}

int main() {
	int h;

	int n;
	int i, j;
	int c = 0;
	while (1) {
		for (i = 0; i < 10; i++) {
			for (j = 0; j < 5; j++) {
				block[i][j] = 0;
			}
		}
		
		scanf("%d", &h);
		if (h == 0) break;

		for (i = 0; i < h; i++) {
			for (j = 0; j < 5; j++) {
				scanf("%d", &n);
				block[i][j] = n;
			}
		}

		del(h,c);

		c++;
	}
	for (i = 0; i < c; i++) {
		printf("%d\n", p[i]);
	}
	return 0;
}
