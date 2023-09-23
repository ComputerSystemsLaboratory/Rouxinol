#include<stdio.h>

int culculate(int n, int x) {
	int i, j, k, amari, count = 0;
	
	for (i = 1; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			amari = x - ( i + j );
			if (amari >= j + 1 && amari <= n)
			{
				count++;
			}
		}
	}
	
	return count;
}

int main(void) {
	int n, x;
	
	do
	{
		scanf("%d %d", &n, &x);
		if (n != 0 || x != 0)
		{
			printf("%d\n", culculate(n, x));
		}
	} while (n != 0 || x != 0);
	
	return 0;
}