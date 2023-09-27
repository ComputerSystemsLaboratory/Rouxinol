#include <stdio.h>
int main(){
	
	int n, m;
	
	scanf("%d", &n);
	scanf("%d", &m);
	
	int matriz[n][m];
	int vetor[m];
	int c[n];
	
	for(int i = 0; i < n; i++)
	    c[i] = 0;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(int i = 0; i < m; i++)
		scanf("%d", &vetor[i]);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			c[i] += matriz[i][j]*vetor[j];
			//printf("c[%d] = %d matriz[i][j] = %d vetor[j] = %d\n",i, c[i], matriz[i][j], vetor[j]);
		}
	}
	
	for(int i = 0; i < n; i++)
		printf("%d\n", c[i]);

  return 0;
}