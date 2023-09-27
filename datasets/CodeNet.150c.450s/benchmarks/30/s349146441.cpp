#include<stdio.h>

int main(void) {
	int i, n, minj, j, a[100], count = 0, temp;
	
	scanf("%d", &n);
	for (i = 0; i < n; ++i) scanf("%d", &a[i]);
	
	for (i = 0; i < n; ++i)
	{
		minj = i;
		for (j = i; j < n; ++j)
		{
			if (a[j] < a[minj]) minj = j;
		}
		if (i != minj)
		{
			temp = a[i];
			a[i] = a[minj];
			a[minj] = temp;
			++count;
		}
	}
	
	for (i = 0; i < n; ++i)
	{
		printf("%d", a[i]);
		if (i != n-1) printf(" ");
	}
	printf("\n");
	printf("%d\n", count);
	
	return 0;
}