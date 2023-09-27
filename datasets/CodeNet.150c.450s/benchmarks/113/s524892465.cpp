#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int x[10000], i = 0, j;

	while (1){
		scanf("%d", &x[i]);
			if (x[i] == 0){
				break;
			}
			i++;
	}

	for (j = 1; j < i+1; j++){
		printf("Case %d: %d\n", j, x[j - 1]);
	}

	return 0;
}