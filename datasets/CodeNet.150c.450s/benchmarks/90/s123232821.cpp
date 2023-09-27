#include <stdio.h>

int main(void)
{
	int a[101];
	int n;
	int i;

	for (i = 0; i < 101; i++){
		a[i] = 0;
	}

	while (scanf("%d", &n) != EOF){
		a[n]++;

		if (a[0] < a[n]){
			a[0] = a[n];
		}
	}

	for (i = 1; i <= 100; i++){
		if (a[i] == a[0]){
			printf("%d\n", i);
		}
	}

	return (0);
}