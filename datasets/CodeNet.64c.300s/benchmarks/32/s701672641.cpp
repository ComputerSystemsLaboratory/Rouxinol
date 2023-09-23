#include <cstdio>

int main() {
	int n, temp, min = 1000000, max = -1000000;
	long sum = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		if (min > temp) min = temp;
		if (max < temp) max = temp;
		sum += temp;
	}

	printf("%d %d %ld\n", min, max, sum);
}