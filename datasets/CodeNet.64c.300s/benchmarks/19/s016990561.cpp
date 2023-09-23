#include <stdio.h>

int main()
{
	int n, x, p, i, j, k;
	
	while(scanf("%d", &n) != 0){
		if (n == 0) break;

		int a[n];

		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}

		x = a[0];

		for(i = 0; i < n; i++){
			p = 0;

			for(j = i; j < n; j++){
				p += a[j];
				if(x < p) x = p;
			}
		}

		printf("%d\n", x);
	}

	return 0;
}