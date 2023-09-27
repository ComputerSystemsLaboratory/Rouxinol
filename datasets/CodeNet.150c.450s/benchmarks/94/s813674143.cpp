#include<stdio.h>
int main() {
	int i = 0, j, n, sw = 0, flag, a[100], x;
	scanf("%d", &n);
	for (i = 0; i < n; i++)scanf("%d", &a[i]);
	flag = 1;
	for (i = 0; flag; i++) {
		flag = 0;
		for (j = n - 1; j >= i + 1; j--) {
			if (a[j] < a[j - 1]) {
				x = a[j];
				a[j] = a[j - 1];
				a[j - 1] = x;
				flag = 1;
				sw++;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d", a[i]);
		if (i != n - 1)printf(" ");
	}
	printf("\n%d\n", sw);
	return 0;
}