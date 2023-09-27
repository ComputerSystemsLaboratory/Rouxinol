#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int n, a[100000],i;

	scanf("%d", &n);

	for (i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	for (n; 0 < n; n--){
		if (n == 1){
			printf("%d", a[n - 1]);
		}
		else{
			printf("%d ", a[n - 1]);
		}
	}
	putchar('\n');

	return 0;
}