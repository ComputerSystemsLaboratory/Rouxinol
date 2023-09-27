#include <stdio.h>
#include <math.h>

int a[200000];

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i ++) {
		scanf("%d", &a[i]);
	}
	int diffmax = a[1] - a[0];
	int min = a[0] < a[1] ? a[0] : a[1];
	for (int i = 2; i < n; i ++) {
		if (diffmax < a[i] - min) {
			diffmax = a[i] - min;
		}
		if (a[i] < min) {
			min = a[i];
		}
	}
	printf("%d\n", diffmax);
	return 0;
}