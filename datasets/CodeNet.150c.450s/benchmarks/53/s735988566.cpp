#include<cstdio>
int main() {
	int n, k;
	scanf("%d", &n);
	printf("%d:", n);
	while (n % 2 == 0) {
		printf(" 2");
		n /= 2;
	}
	for (k = 3; n>1; k += 2) {
		if (k*k > n) {
			printf(" %d", n);
			break;
		}
		while (n%k == 0) {
			printf(" %d", k);
			n /= k;
		}
	}
	printf("\n");
	return 0;
}
