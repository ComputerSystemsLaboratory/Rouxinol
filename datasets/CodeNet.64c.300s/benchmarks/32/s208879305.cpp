#include <cstdio>

int main()
{
	int n, x;
	int j,k;
	scanf("%d", &n);
	int a[n], buff;
	for(int i = 0; i < n; i++){
		scanf("%d", &x);
		a[i] = x;
	}

	long min, max, sum = 0;

	for(int i = 0; i < n; i++){
		sum += a[i];
	}

	while (1){
		k = 1;
		for(j = 0; j < n - 1; j++){
			if (a[j] <= a[j + 1]) k *= 1;
			else k *= 0;
		}
		if (k) break;

		for(j = 0; j < n - 1; j++){
			if (a[j] >= a[j + 1]){
				buff = a[j];
				a[j] = a[j + 1];
				a[j + 1] = buff;
			}
		}
	}

	min = a[0];
	max = a[n - 1];

	printf("%ld %ld %ld\n", min, max, sum);
	return 0;
}