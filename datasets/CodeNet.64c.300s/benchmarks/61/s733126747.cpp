#include <stdio.h>

int main(){
	int sheet[100][100] = { 0 };
	int x, y;
	int i, j;
	int sumi[100] = { 0 };
	int sumj[100] = { 0 };
	int sumij = 0;
	scanf("%d %d", &x, &y);

	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			scanf("%d", &sheet[i][j]);
			sumi[i] += sheet[i][j];
			sumj[j] += sheet[i][j];
			
		}
		
	}
	
	
	for (i = 0; i <= x ; i++){
		for (j = 0; j <= y; j++){
			
			if ((i == x) && (j == y)){
				printf("%d\n", sumij);
				
			}
			else if (i == x){
				printf("%d ", sumj[j]);
			}
			else if (j == y){
				printf("%d\n", sumi[i]);
			}
			else {
				printf("%d ", sheet[i][j]);
			}
			
				
			
		}
		sumij += sumi[i];
	}
	
	

}