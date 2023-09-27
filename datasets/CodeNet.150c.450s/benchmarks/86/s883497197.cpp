#include <cstdio>
#define NUM 128

int main(void) {
	while(1) {
		int n, m, p;
		int pool = 0, share;
		int num[NUM];
		scanf("%d %d %d", &n, &m, &p);
		if(!n && !p) break;
		for(int i = 0; i < n; i++) {
			scanf("%d", &num[i]);
			pool += 100 * num[i];
		}
		if(!num[m - 1]) share = 0;
		else share = (pool * (100 - p) * 0.01) / num[m - 1];
		printf("%d\n", share);
	}
	return 0;
}