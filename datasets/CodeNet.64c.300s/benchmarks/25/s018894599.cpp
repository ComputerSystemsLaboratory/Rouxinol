#include <cstdio>
#include <iostream>

using namespace std;

int a[4], b[4];

int main() {
	while (scanf("%d%d%d%d", &a[0], &a[1], &a[2], &a[3]) != EOF) {
		scanf ("%d%d%d%d", &b[0], &b[1], &b[2], &b[3]);
		int hit = 0, blow = 0;
		for (int i=0; i<4; ++i) {
			if (a[i] == b[i]) ++hit, b[i] = -1;
		}
		for (int i=0; i<4; ++i) {
			for (int j=0; j<4; ++j) {
				if (a[i] == b[j] && b[j] != -1 && i != j) ++blow, b[j] = -1;
			}
		}
		printf ("%d %d\n", hit, blow);
	}
	return 0;
}