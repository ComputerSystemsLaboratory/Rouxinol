#include <stdio.h>

int main(void){
	int r, c, i, j;
	int elements[101][101] = { 0 };

	scanf("%d %d", &r, &c);
	for (j = 0; j < r; j++){
		for (i = 0; i < c; i++){
			scanf("%d", &elements[j][i]);
			elements[j][c] += elements[j][i];
			elements[r][i] += elements[j][i];
		}
	}
	for (i = 0; i < c; i++){
		elements[r][c] += elements[r][i];
	}
	for (j = 0; j <= r; j++){
		for (i = 0; i <= c; i++){
			printf("%d", elements[j][i]);
			if (i < c){
				printf(" ");
			}else{
				printf("\n");
			}
		}
	}
	return 0;
}