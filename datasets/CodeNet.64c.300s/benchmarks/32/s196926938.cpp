#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int i, n, min=1000000, max=-1000000,a[10000];
	long long sum = 0;

	scanf("%d", &n);
	
	for (i=0; i < n; i++){
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++){
		if (min>a[i]){
			min = a[i];
		}
	}

	for (i = 0; i < n; i++){
		if (max<a[i]){
			max = a[i];
		}
	}

	for (i = 0; i < n; i++){
		sum += a[i];
	}

	printf("%d %d %lld\n", min, max, sum);

	return 0;
}