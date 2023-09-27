#include<stdio.h>

int main(void)
{
	int i,n,loan = 100000;
	while (1){
		scanf("%d", &n);
		if (0 <= n&&n <= 100)
			break;
	}
	for (i = 0; i < n; i++){
		loan *= 1.05;
		if (loan % 1000 != 0){
			loan -= loan % 1000;
			loan += 1000;
		}
	}
	printf("%d\n", loan);
	return 0;
}