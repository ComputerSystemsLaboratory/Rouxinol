#include <stdio.h>
int main()
{
	int n, i, j, k, w, x, y;
	scanf("%d %d", &n, &x);

	do {
		w = 0;
		for (i = 1; i <= n-2; i++)
			for (j = i+1; j <= n-1; j++)
				for (k = j+1; k <= n; k++){
					y = i + j + k;
		            if (y == x) w+=1;}
		printf("%d\n", w);

		scanf("%d %d", &n, &x);
	} while (n!=0 && x!=0);

	return 0;
}