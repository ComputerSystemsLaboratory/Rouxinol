#include <stdio.h>

int main(void)
{
	int i, j, temp = 0, x[10];
	for (i = 0; i < 10; i++){
		//printf("山の高さ%d ", i + 1);
		scanf("%d", &x[i]);
	}
	for (i = 0; i < 10; i++){
		for (j = 9; j > i; j--){
			if (x[j] > x[j - 1]){
				temp = x[j - 1];
				x[j - 1] = x[j];
				x[j] = temp;
			}
		}
	}
	for (i = 0; i < 3; i++){
		printf("%d\n", x[i]);
	}
	
	return 0;
}