#include <stdio.h>
int main(){
	
	int n, m, l;
	
	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%d", &l);
	
	int A[n][m];
	int B[m][l];
	double C[n][l];
	
	/*input matriz A*/
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &A[i][j]);
		}
	}
	
	/*input matriz B*/
	for(int i = 0; i < m; i++){
		for(int j = 0; j < l; j++){
			scanf("%d", &B[i][j]);
		}
	}
	
	/* initialize matriz C*/
	for(int i = 0; i < n; i++){
		for(int j = 0; j < l; j++){
			C[i][j] = 0;
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < l; j++){
			
			for(int k = 0; k < m; k++){
				C[i][j] += (double)A[i][k]*B[k][j];
			}
			
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < l; j++){
			printf("%.0lf", C[i][j]);
			if(j != l-1)
				printf(" ");
		}
		//if( i != n-1)
		printf("\n");
	}

  return 0;
}