#include<stdio.h>
int main(){
	int baris, kolom;
	int matrix1[105][105];
	int matrix2[105];
	scanf("%d %d", &baris, &kolom);
	for(int i=0; i<baris; i++){
		for(int j=0; j<kolom; j++){
			scanf("%d", &matrix1[i][j]);
		}
	}
	for(int i=0; i<kolom; i++){
		scanf("%d", &matrix2[i]);
	}
	for(int i=0; i<baris; i++){
		int sum = 0;
		for(int j=0; j<kolom; j++){
			sum += matrix1[i][j]*matrix2[j];
		}
		printf("%d\n", sum);
	}
}
