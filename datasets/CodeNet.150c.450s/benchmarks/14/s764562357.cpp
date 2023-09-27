#include <cstdio>

int main() {
	int n, temp;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (!(i % 3))
			printf(" %d", i);
		else {
			temp = i;
			while (temp) {
				if (temp % 10 == 3) {
					printf(" %d", i);
					break;
				}
				temp /= 10;
			}
		}
	}
        puts("");
}