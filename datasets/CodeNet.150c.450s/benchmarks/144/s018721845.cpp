#include <stdio.h>

using namespace std;

int main(){
	int n,m,l;
	scanf("%d %d %d",&n,&m,&l);
	int A[n][m],B[m][l];
	long long int C[n][l];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < l; j++){
			C[i][j] = 0;
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < l; j++){
			scanf("%d",&B[i][j]);
		}
	}

	for(int i = 0; i < n; i++){
		for(int k = 0; k < l; k++){
			for(int j = 0; j < m; j++){
				C[i][k] += A[i][j]*B[j][k];
			}
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < l-1; j++){
			printf("%lld ",C[i][j]);
		}
		printf("%lld\n",C[i][l-1]);
	}
}