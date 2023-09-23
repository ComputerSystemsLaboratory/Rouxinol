#include <stdio.h>

int main(void)
{
	int a, b;
	int ap, bp;
	int i;
	int n;
	
	while (scanf("%d", &n), n != 0){
		ap = 0; bp = 0;
		for (i = 0; i < n; i++){
			scanf("%d %d", &a, &b);
			if (a > b) ap += a + b;
			else if (a < b) bp += a + b;
			else {
				ap += a;
				bp += b;
			}
		}
		printf("%d %d\n", ap, bp);
	}
	return (0);
}