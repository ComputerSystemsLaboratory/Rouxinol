#include <stdio.h>
int main(){
	
	int r, c;
	
	scanf("%d", &r);
	scanf("%d", &c);
	
	int hyou[r+1][c+1];
	
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			scanf("%d", &hyou[i][j]);
		}
	}
	
	for(int i = 0; i < r+1; i++){
		for(int j = 0; j < c+1; j++){
			if( i == r || j == c)
				hyou[i][j] = 0;
		}
	}

	for(int i = 0; i < r; i++){
		int som = 0;
		for(int j = 0; j < c; j++)
			som += hyou[i][j];
		hyou[i][c] = som;
	}
	
	for(int i = 0; i < c; i++){
		int som = 0;
		for(int j = 0; j < r; j++)
			som += hyou[j][i];
		hyou[r][i] = som;
	}
	
	for(int i = 0; i < c; i++)
		hyou[r][c] += hyou[r][i];
	
	for(int i = 0; i < r+1; i++){
		for(int j = 0; j < c+1; j++){
			if( j == c )
				printf("%d", hyou[i][j]);
			else
				printf("%d ", hyou[i][j]);
		}
		printf("\n");
	}
  	return 0;
}