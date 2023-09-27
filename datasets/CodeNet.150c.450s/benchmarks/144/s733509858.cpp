#include <cstdio>

int main(){
	int N, M, L;
	int a[100][100], b[100][100];
	long c[100][100]={0};

	scanf(" %d %d %d", &N, &M, &L);
	for(int i=0; i<N; ++i){
		for(int j=0; j<M; ++j){
			scanf(" %d", &a[i][j]);
		}
	}
	
	for(int i=0; i<M; ++i){
		for(int j=0; j<L; ++j){
			scanf(" %d", &b[i][j]);
		}
	}

	for(int i=0; i<N; ++i){
		for(int j=0; j<L; ++j){
			for(int k=0; k<M; ++k){
				c[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	
	for(int i=0; i<N; ++i){
		for(int j=0; j<L; ++j){
			printf("%ld", c[i][j]);
			if(j!=L-1) printf(" ");
		}
		printf("\n");
	}

	return 0;
}