#include <stdio.h>
int n, a, c[10007];
int main() {
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", &a), c[a]++;
	for(int i = 0; i < 10001; i++) {
		for(int j = 0; j < c[i]; j++) {
			printf(--n ? "%d " : "%d\n", i);
		}
	}
}