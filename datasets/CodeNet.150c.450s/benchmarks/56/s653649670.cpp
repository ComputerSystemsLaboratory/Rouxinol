#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int main() {

	int n;

	scanf("%d\n", &n);

	int value[n];
	int max = INT_MIN;
	int min = INT_MAX;
	long long int sum = 0;

	for(int i = 0; i < n; i++) {
		scanf("%d", &value[i]);
		if (max < value[i]) {
			max = value[i];
		}
		if (min > value[i]) {
			min = value[i];
		}
		sum += value[i];
	}

	printf("%d %d %lld\n", min, max, sum);

	return 0;
}