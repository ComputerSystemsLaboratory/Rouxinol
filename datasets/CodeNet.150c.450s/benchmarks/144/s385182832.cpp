#include<stdio.h>
int main(){
	int n, m, l;
	int matrix[105][105], matrix1[105][105];
	long long int hasil[105][105], s;
	scanf("%d%d%d", &n, &m, &l);
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<l; j++){
			scanf("%d", &matrix1[i][j]);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<l; j++){
			s=0;
			for(int k=0; k<m; k++){
				s+= matrix[i][k]*matrix1[k][j];
			}
			hasil[i][j] = s;
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<l; j++){
			if(j==0) printf("%lld", hasil[i][j]);
			else printf(" %lld", hasil[i][j]);
		}
		printf("\n");
	}
}
