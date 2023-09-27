#include <cstdio>


int main(){
	unsigned n,m,l;
	unsigned A[100][100];
	unsigned B[100][100];
	unsigned long C[100][100];

	for(auto &v : C){
		for(auto &v1 : v){
			v1 = 0;
		}
	}

	scanf("%u%u%u",&n,&m,&l);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%u",&A[i][j]);
		}
	}

	for(int i=0;i<m;i++){
		for(int j=0;j<l;j++){
			scanf("%u",&B[i][j]);
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<l;j++){
			for(int k=0;k<m;k++){
				C[i][j] += A[i][k]*B[k][j];
			}
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<l;j++){
			if(j)putchar(' ');
			printf("%lu",C[i][j]);
		}
		putchar('\n');
	}
}