//============================================================================
// Name        : abcd.cpp
// Author      : aaaa
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <math.h>

int main() {
	int h = 0, w = 0, ans = 0, ansh = 0, answ = 0, e = 1, m = 100000, i, j,
			base;
	while (e != 0) {
		ans = 40000;
		ansh = 0;
		answ = 0;
		scanf("%d%d", &h, &w);
		if (h == 0 && w == 0) {
			break;
		}
		base = h * h + w * w;
		for (i = 150; i >= 1; i--) {
			for (j = 150; j >= 1; j--) {
				if (base < i * i + j * j) {
					if (i < j) {
						if (i * i + j * j <= ans) {
							ans = i * i + j * j;
							ansh = i;
							answ = j;
						}
					}
				}
				if (i < j) {
					if (i * i + j * j == base) {
						if (i > h) {
							ans = i * i + j * j;
							ansh = i;
							answ = j;
						}
					}
				}
			}
		}
		printf("%d %d\n", ansh, answ);
	}
	return 0;
}